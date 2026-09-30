//// FUNCTION FUN_005b2130 @ 005b2130 ////

undefined4 __fastcall FUN_005b2130(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5afb;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x1e0) == 0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x1f0);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = ScriptDefinition_Constructor(puVar1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0x1cc) + 4))();
    *(undefined4 **)(param_1 + 0x1e0) = puVar2;
    (*(code *)**(undefined4 **)(param_1 + 0x1cc))();
    FUN_004bdb90(*(void **)(param_1 + 0x1e0),param_1);
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x1e0);
}


//// FUNCTION FUN_005b21c0 @ 005b21c0 ////

void __thiscall FUN_005b21c0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x1e0);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 0x1cc) + 4))();
    *(undefined4 *)((int)this + 0x1e0) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x1cc))();
  }
  (**(code **)(*(int *)((int)this + 0x1cc) + 4))();
  *(undefined4 *)((int)this + 0x1e0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x1cc))();
  return;
}


//// FUNCTION FUN_005b2220 @ 005b2220 ////

undefined4 __fastcall FUN_005b2220(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1f8);
}


//// FUNCTION FUN_005b22a0 @ 005b22a0 ////

undefined4 __fastcall FUN_005b22a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}


//// FUNCTION FUN_005b22b0 @ 005b22b0 ////

void __thiscall FUN_005b22b0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x228);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 0x214) + 4))();
    *(undefined4 *)((int)this + 0x228) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x214))();
  }
  (**(code **)(*(int *)((int)this + 0x214) + 4))();
  *(undefined4 *)((int)this + 0x228) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x214))();
  return;
}


//// FUNCTION FUN_005b2330 @ 005b2330 ////

undefined4 __fastcall FUN_005b2330(int param_1)

{
  return *(undefined4 *)(param_1 + 0x240);
}


//// FUNCTION FUN_005b2340 @ 005b2340 ////

undefined4 __fastcall FUN_005b2340(int param_1)

{
  return *(undefined4 *)(param_1 + 600);
}


//// FUNCTION CProject_GetQualityWithAwardBoost @ 005b2350 ////

void __thiscall CProject_GetQualityWithAwardBoost(void *this,float *param_1)

{
  float *pfVar1;
  float10 fVar2;
  int iVar3;
  void *pvVar4;
  void *local_4;
  
  if (*(float *)((int)this + 0x360) == 0.0) {
    local_4 = this;
    pfVar1 = (float *)(**(code **)(**(int **)((int)this + 0x228) + 0x20))(&local_4);
    local_4 = (void *)*pfVar1;
  }
  else {
    local_4 = *(void **)((int)this + 0x360);
  }
  fVar2 = (float10)(float)local_4;
  if (*(char *)((int)this + 0x40d) == '\0') {
    if (*(char *)((int)this + 0x40e) == '\0') goto LAB_005b23b7;
    iVar3 = 2;
  }
  else {
    iVar3 = 5;
  }
  pvVar4 = (void *)0x0;
  AwardBonusManager_Get();
  fVar2 = AwardBonus_GetValue(iVar3,pvVar4);
  fVar2 = fVar2 + (float10)(float)local_4;
LAB_005b23b7:
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


//// FUNCTION FUN_005b2490 @ 005b2490 ////

void __fastcall FUN_005b2490(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  while( true ) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x228) + 0x24))();
    if (iVar3 == 7) break;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x228) + 0x14))();
    puVar2 = *(undefined4 **)(param_1 + 0x228);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*(int *)(param_1 + 0x214) + 4))();
      *(undefined4 *)(param_1 + 0x228) = 0;
      (*(code *)**(undefined4 **)(param_1 + 0x214))();
    }
    (**(code **)(*(int *)(param_1 + 0x214) + 4))();
    *(undefined4 *)(param_1 + 0x228) = uVar4;
    (*(code *)**(undefined4 **)(param_1 + 0x214))();
  }
  return;
}


//// FUNCTION FUN_005b2510 @ 005b2510 ////

void __fastcall FUN_005b2510(float param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  
  piVar1 = (int *)((int)param_1 + 0x120);
  if (*(int **)((int)param_1 + 0x124) != (int *)0x0) {
    **(int **)((int)param_1 + 0x124) = *piVar1;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)((int)param_1 + 0x124);
  }
  *piVar1 = 0;
  *(undefined4 *)((int)param_1 + 0x124) = 0;
  iVar3 = GetPlayerStudio();
  piVar4 = (int *)(iVar3 + 0xd4);
  *(int **)((int)param_1 + 0x124) = piVar4;
  *piVar1 = *piVar4;
  *(int **)(*piVar4 + 4) = piVar1;
  *piVar4 = (int)piVar1;
  if (*(int **)((int)param_1 + 0x210) != (int *)0x0) {
    FUN_005d1110(*(int **)((int)param_1 + 0x210));
  }
  pvVar5 = (void *)FUN_007ef840();
  if (pvVar5 != (void *)0x0) {
    FUN_007f2570(pvVar5,param_1);
  }
  puVar2 = *(undefined4 **)((int)param_1 + 0x3a0);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)param_1 + 0x38c) + 4))();
    *(undefined4 *)((int)param_1 + 0x3a0) = 0;
    (*(code *)**(undefined4 **)((int)param_1 + 0x38c))();
  }
  pvVar5 = (void *)FUN_00843f00();
  FUN_00843ed0(pvVar5,(int)param_1);
  return;
}


//// FUNCTION FUN_005b25c0 @ 005b25c0 ////

undefined4 __fastcall FUN_005b25c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}


//// FUNCTION FUN_005b25d0 @ 005b25d0 ////

undefined4 __fastcall FUN_005b25d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa0) != 0) {
    uVar1 = FUN_004d6c00(*(int *)(param_1 + 0xa0));
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_005b25f0 @ 005b25f0 ////

undefined4 __fastcall FUN_005b25f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5b1b;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x16c) == 0) {
    ExceptionList = &local_c;
    puVar2 = operator_new(0x6a8);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = FUN_007593a0(puVar2);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0x158) + 4))();
    *(undefined4 **)(param_1 + 0x16c) = puVar4;
    (*(code *)**(undefined4 **)(param_1 + 0x158))();
    iVar1 = *(int *)(param_1 + 0x16c);
    iVar3 = GetPlayerStudio();
    iVar3 = FUN_00509aa0(iVar3);
    *(int *)(iVar1 + 0x6a0) = iVar3 * 0x10 + *(int *)(param_1 + 0x194);
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0x16c);
}


//// FUNCTION FUN_005b26e0 @ 005b26e0 ////

void __thiscall FUN_005b26e0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x198) + 4))();
  *(undefined4 *)((int)this + 0x1ac) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x198))();
  *(undefined1 *)((int)this + 0x1b0) = 1;
  return;
}


//// FUNCTION FUN_005b2710 @ 005b2710 ////

void __fastcall FUN_005b2710(int param_1)

{
  FUN_005a8e00(*(void **)(param_1 + 0x1f8),param_1);
  return;
}


//// FUNCTION FUN_005b2720 @ 005b2720 ////

int FUN_005b2720(void)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = 0;
  PlayerMovies_Begin(&local_8);
  PlayerMovies_End(&local_4);
  for (; local_8 != local_4; local_8 = *(int *)(local_8 + 4)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_005b2770 @ 005b2770 ////

undefined4 __fastcall FUN_005b2770(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1ac);
}


//// FUNCTION FUN_005b2780 @ 005b2780 ////

undefined4 __fastcall FUN_005b2780(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c8);
}


//// FUNCTION FUN_005b2790 @ 005b2790 ////

void __thiscall FUN_005b2790(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2c4) = param_1;
  if ((DAT_0104a974 != 0) && (0.0 < *(float *)(DAT_0104a974 + 0x6c))) {
    *(undefined4 *)((int)this + 0x2c4) = 0x3f800000;
  }
  return;
}


//// FUNCTION FUN_005b27c0 @ 005b27c0 ////

void __thiscall FUN_005b27c0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x2c4);
  return;
}


//// FUNCTION FUN_005b27d0 @ 005b27d0 ////

void __thiscall FUN_005b27d0(void *this,float *param_1)

{
  float *pfVar1;
  float local_4;
  
  local_4 = *(float *)((int)this + 0x170);
  if (local_4 == 0.0) {
    pfVar1 = (float *)CProject_GetQualityWithAwardBoost(this,&local_4);
    local_4 = *pfVar1;
  }
  *param_1 = local_4;
  return;
}


//// FUNCTION FUN_005b2820 @ 005b2820 ////

void __thiscall FUN_005b2820(void *this,undefined4 param_1)

{
  if (*(undefined4 **)((int)this + 0x348) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x348))(1);
    (**(code **)(*(int *)((int)this + 0x334) + 4))();
    *(undefined4 *)((int)this + 0x348) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x334))();
  }
  (**(code **)(*(int *)((int)this + 0x334) + 4))();
  *(undefined4 *)((int)this + 0x348) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x334))();
  return;
}


//// FUNCTION FUN_005b2880 @ 005b2880 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b2880(void *this,float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  float10 fVar5;
  
  fVar1 = param_1 * 0.5;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = (fVar1 + 0.5) * _DAT_00e544bc;
  iVar3 = AwardBonusManager_Get();
  if (iVar3 != 0) {
    iVar3 = 0;
    pvVar4 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
    if (cVar2 != '\0') {
      pvVar4 = (void *)0x0;
      iVar3 = 0;
      AwardBonusManager_Get();
      fVar5 = AwardBonus_GetValue(iVar3,pvVar4);
      fVar5 = fVar5 * (float10)fVar1;
      goto LAB_005b28fe;
    }
  }
  fVar5 = (float10)fVar1;
LAB_005b28fe:
  fVar5 = fVar5 + (float10)*(float *)((int)this + 0x368);
  if (fVar5 < (float10)0.0) {
    *(undefined4 *)((int)this + 0x368) = 0;
    return;
  }
  if ((float10)1.0 < fVar5) {
    *(undefined4 *)((int)this + 0x368) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0x368) = (float)fVar5;
  return;
}


//// FUNCTION FUN_005b2950 @ 005b2950 ////

void __fastcall FUN_005b2950(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  float10 fVar5;
  
  fVar1 = DAT_00e544c0;
  iVar3 = AwardBonusManager_Get();
  if (iVar3 != 0) {
    iVar3 = 0;
    pvVar4 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
    if (cVar2 != '\0') {
      pvVar4 = (void *)0x0;
      iVar3 = 0;
      AwardBonusManager_Get();
      fVar5 = AwardBonus_GetValue(iVar3,pvVar4);
      fVar5 = fVar5 * (float10)fVar1;
      goto LAB_005b2992;
    }
  }
  fVar5 = (float10)fVar1;
LAB_005b2992:
  fVar5 = fVar5 + (float10)*(float *)(param_1 + 0x368);
  if (fVar5 < (float10)0.0) {
    *(undefined4 *)(param_1 + 0x368) = 0;
    return;
  }
  if ((float10)1.0 < fVar5) {
    *(undefined4 *)(param_1 + 0x368) = 0x3f800000;
    return;
  }
  *(float *)(param_1 + 0x368) = (float)fVar5;
  return;
}


//// FUNCTION FUN_005b29e0 @ 005b29e0 ////

void __cdecl FUN_005b29e0(float *param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  void *this;
  float10 fVar4;
  float local_4;
  
  local_4 = 1.0 - param_2;
  switch(param_4) {
  default:
    local_4 = 0.0;
    break;
  case 2:
    local_4 = local_4 * 0.25;
    break;
  case 3:
    local_4 = local_4 * 0.5;
    break;
  case 4:
    local_4 = local_4 * 0.75;
    break;
  case 5:
    break;
  }
  iVar3 = AwardBonusManager_Get();
  if (iVar3 != 0) {
    iVar3 = 0;
    this = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(this,iVar3);
    if (cVar2 != '\0') {
      fVar1 = param_3 * 0.5;
      if (0.0 <= fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      if (fVar1 < param_2) {
        fVar4 = FUN_004728e0(&param_3,0.5);
        FUN_00407070(&param_2,(float)fVar4);
      }
      fVar1 = param_3 - param_2;
      if (0.0 <= fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      if (fVar1 != local_4) {
        local_4 = local_4 - (local_4 - fVar1) * 0.5;
      }
    }
  }
  if (local_4 < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < local_4) {
    *param_1 = 1.0;
    return;
  }
  *param_1 = local_4;
  return;
}


//// FUNCTION FUN_005b2b70 @ 005b2b70 ////

undefined4 __fastcall FUN_005b2b70(int param_1)

{
  return *(undefined4 *)(param_1 + 0x388);
}


//// FUNCTION FUN_005b2b80 @ 005b2b80 ////

undefined4 __fastcall FUN_005b2b80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x348);
}


//// FUNCTION FUN_005b2b90 @ 005b2b90 ////

void __thiscall FUN_005b2b90(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x38c) + 4))();
  *(undefined4 *)((int)this + 0x3a0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x38c))();
  return;
}


//// FUNCTION FUN_005b2bc0 @ 005b2bc0 ////

undefined4 __fastcall FUN_005b2bc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3a0);
}


//// FUNCTION FUN_005b2bd0 @ 005b2bd0 ////

undefined4 * __thiscall FUN_005b2bd0(void *this,undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)((int)this + 0x368);
  pfVar3 = (float *)CProject_GetQualityWithAwardBoost(this,&local_4);
  fVar2 = *pfVar3 * 0.5;
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  if (fVar1 <= fVar2) {
    *param_1 = *(undefined4 *)((int)this + 0x368);
    return param_1;
  }
  pfVar3 = (float *)CProject_GetQualityWithAwardBoost(this,&local_4);
  local_8 = *pfVar3 * 0.5;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  FUN_00407070(param_1,local_8);
  return param_1;
}


//// FUNCTION FUN_005b2cb0 @ 005b2cb0 ////

undefined4 __fastcall FUN_005b2cb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x424);
}


//// FUNCTION FUN_005b2cc0 @ 005b2cc0 ////

int __fastcall FUN_005b2cc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int **)(param_1 + 0x228) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x228) + 0x24))(), 4 < iVar1)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x228) + 0x24))();
    if (iVar1 == 5) {
      iVar1 = FUN_00ace790(*(int **)(param_1 + 0x228),0,&TM::CPhaseBase::RTTI_Type_Descriptor,
                           &TM::CPhaseShoot::RTTI_Type_Descriptor,0);
      if (iVar1 != 0) {
        iVar1 = FUN_005afee0(iVar1);
        return iVar1;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xac);
      iVar2 = 0;
      if (iVar1 != param_1 + 0xb8) {
        do {
          iVar1 = *(int *)(iVar1 + 4);
          iVar2 = iVar2 + 1;
        } while (iVar1 != param_1 + 0xb8);
        return iVar2;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_005b2d30 @ 005b2d30 ////

undefined4 * __fastcall FUN_005b2d30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0043b510(param_1 + 5);
  param_1[7] = 0;
  return param_1;
}


//// FUNCTION FUN_005b2e70 @ 005b2e70 ////

void __fastcall FUN_005b2e70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29c74;
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


//// FUNCTION FUN_005b2f10 @ 005b2f10 ////

void __fastcall FUN_005b2f10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29c84;
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


//// FUNCTION FUN_005b3400 @ 005b3400 ////

undefined4 * __thiscall FUN_005b3400(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_005b3540 @ 005b3540 ////

void __cdecl FUN_005b3540(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_005b35c0 @ 005b35c0 ////

void __cdecl FUN_005b35c0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_005b3670 @ 005b3670 ////

int * __cdecl FUN_005b3670(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_005b37d0 @ 005b37d0 ////

undefined4 * __thiscall FUN_005b37d0(void *this,byte param_1)

{
  FUN_005b2f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005b37f0 @ 005b37f0 ////

undefined4 * __thiscall FUN_005b37f0(void *this,byte param_1)

{
  FUN_005b1fb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005b3810 @ 005b3810 ////

void __fastcall FUN_005b3810(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29ca4;
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


//// FUNCTION FUN_005b3890 @ 005b3890 ////

void __fastcall FUN_005b3890(int *param_1)

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
  puStack_8 = &LAB_00cb5b38;
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


//// FUNCTION FUN_005b3960 @ 005b3960 ////

void __cdecl FUN_005b3960(float *param_1,float *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  void *this;
  float *pfVar8;
  float **ppfVar9;
  
  pfVar4 = param_2;
  *param_1 = 0.0;
  *param_2 = 0.0;
  iVar1 = param_3 + 0xb8;
  for (iVar2 = *(int *)(param_3 + 0xac); iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 4)) {
    uVar6 = FUN_004e0fd0(*(float *)(iVar2 + 8));
    if ((((char)uVar6 != '\0') && (cVar5 = FUN_004de210(*(int *)(iVar2 + 8)), cVar5 == '\0')) &&
       (iVar7 = FUN_004df4a0(*(int *)(iVar2 + 8)), iVar7 != 0)) {
      ppfVar9 = &param_2;
      this = (void *)FUN_004df4a0(*(int *)(iVar2 + 8));
      pfVar8 = (float *)FUN_004b58b0(this,(float *)ppfVar9);
      fVar3 = *pfVar8;
      pfVar8 = pfVar4;
      if (*pfVar4 <= fVar3) {
        pfVar8 = FUN_00407070(&param_3,fVar3);
      }
      *pfVar4 = *pfVar8;
      *param_1 = fVar3 + *param_1;
    }
  }
  return;
}


//// FUNCTION FUN_005b3a30 @ 005b3a30 ////

void __thiscall FUN_005b3a30(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xac);
  do {
    if (iVar1 == (int)this + 0xb8) {
LAB_005b3a5a:
      if (*(int *)((int)this + 0x210) != 0) {
        FUN_005d35f0(*(int *)((int)this + 0x210));
      }
      return;
    }
    if (*(undefined4 **)(iVar1 + 8) == param_1) {
      FUN_004e05d0(param_1);
      goto LAB_005b3a5a;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}


//// FUNCTION FUN_005b3b20 @ 005b3b20 ////

void __fastcall FUN_005b3b20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = *(undefined4 **)(param_1 + 0x228);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x214) + 4))();
    *(undefined4 *)(param_1 + 0x228) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x214))();
  }
  piVar3 = FUN_005b0860(param_1);
  piVar1 = (int *)(param_1 + 0x214);
  (**(code **)(*(int *)(param_1 + 0x214) + 4))();
  *(int **)(param_1 + 0x228) = piVar3;
  (**(code **)*piVar1)();
  for (iVar4 = *(int *)(param_1 + 0xac); iVar4 != param_1 + 0xb8; iVar4 = *(int *)(iVar4 + 4)) {
    FUN_004eb900(*(void **)(iVar4 + 8));
  }
  while (iVar4 = (**(code **)(**(int **)(param_1 + 0x228) + 0x24))(), iVar4 != 6) {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x228) + 0x14))();
    puVar2 = *(undefined4 **)(param_1 + 0x228);
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = puVar2 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(param_1 + 0x228) = 0;
      (**(code **)*piVar1)();
    }
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)(param_1 + 0x228) = uVar5;
    (**(code **)*piVar1)();
  }
  return;
}


//// FUNCTION FUN_005b3c00 @ 005b3c00 ////

undefined4 __fastcall FUN_005b3c00(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = GetPlayerStudio();
  cVar1 = (**(code **)(**(int **)(param_1 + 0x228) + 0x30))();
  if (cVar1 == '\0') {
    iVar3 = *(int *)(iVar2 + 200);
    iVar2 = iVar2 + 0xd4;
    if (iVar3 != iVar2) {
      do {
        if (*(int *)(iVar3 + 8) == param_1) break;
        iVar3 = *(int *)(iVar3 + 4);
      } while (iVar3 != iVar2);
      if (iVar3 != iVar2) {
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_005b3c50 @ 005b3c50 ////

undefined4 __fastcall FUN_005b3c50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xac);
  while( true ) {
    if (iVar1 == param_1 + 0xb8) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + 0x1c0) == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return *(undefined4 *)(iVar1 + 8);
}


//// FUNCTION FUN_005b3c80 @ 005b3c80 ////

char __fastcall FUN_005b3c80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x228) + 0x24))();
  if (iVar1 == 7) {
    return '\0';
  }
  uVar2 = FUN_005b3c00(param_1);
  return '\x01' - ((char)uVar2 != '\0');
}


//// FUNCTION FUN_005b3cb0 @ 005b3cb0 ////

void FUN_005b3cb0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      piVar4 = DAT_0104d688;
      puVar2 = (undefined4 *)DAT_0104d688[2];
      piVar1 = DAT_0104d688 + 1;
      if ((int *)DAT_0104d688[1] != (int *)0x0) {
        *(int *)DAT_0104d688[1] = *DAT_0104d688;
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
    } while (DAT_0104d688 != &DAT_0104d694);
  }
  return;
}


//// FUNCTION FUN_005b3d10 @ 005b3d10 ////

void FUN_005b3d10(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      piVar4 = DAT_0104d688;
      puVar2 = (undefined4 *)DAT_0104d688[2];
      piVar1 = DAT_0104d688 + 1;
      if ((int *)DAT_0104d688[1] != (int *)0x0) {
        *(int *)DAT_0104d688[1] = *DAT_0104d688;
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
    } while (DAT_0104d688 != &DAT_0104d694);
  }
  FUN_005ae320();
  return;
}


//// FUNCTION FUN_005b3d70 @ 005b3d70 ////

void __thiscall FUN_005b3d70(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  ulonglong uVar8;
  char **ppcVar9;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  void *local_34;
  float local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5b58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = this;
  FUN_0043b520(&local_38,0.0);
  iVar2 = FUN_005b2130((int)this);
  uVar3 = FUN_004bdc40(iVar2);
  if ((char)uVar3 != '\0') {
    *param_1 = local_38;
    ExceptionList = local_c;
    return;
  }
  pfVar5 = &local_30;
  pvVar4 = (void *)FUN_005b2130((int)this);
  pfVar5 = (float *)FUN_004bdbc0(pvVar4,pfVar5);
  local_3c = *pfVar5;
  pfVar5 = &local_44;
  pvVar4 = (void *)FUN_005b2130((int)this);
  pfVar5 = (float *)FUN_004bdbd0(pvVar4,pfVar5);
  local_3c = *pfVar5 - local_3c;
  if (0.0 <= local_3c) {
    if (1.0 < local_3c) {
      local_3c = 1.0;
    }
  }
  else {
    local_3c = 0.0;
  }
  local_44 = 0.0;
  puVar6 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      iVar2 = puVar6[2];
      pvVar4 = (void *)FUN_00577d80(iVar2);
      if ((pvVar4 == local_34) && (*(int *)(iVar2 + 0x814) == 0xe)) {
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"Writing",7);
        local_28 = 7;
        local_2c[7] = '\0';
        ppcVar9 = &local_2c;
        pfVar5 = &local_40;
        local_4 = 0;
        pvVar4 = (void *)FUN_00577370(iVar2);
        FUN_00441750(pvVar4,pfVar5,ppcVar9);
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        if (local_40 == 0.0) {
          FUN_00407070(&local_30,0.1);
          local_40 = local_30;
        }
        local_44 = local_40 + local_44;
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
    if (local_44 != 0.0) {
      FUN_008425f0();
      uVar8 = FUN_00acd42c();
      local_30 = (float)(int)uVar8 * 100.0;
      fVar7 = FUN_0043b970(0xe4fa4c);
      FUN_0043b700(&local_38,(float)((float10)local_30 / fVar7));
      *param_1 = local_38;
      ExceptionList = local_c;
      return;
    }
  }
  *param_1 = DAT_0104d6b4;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005b3fc0 @ 005b3fc0 ////

void __thiscall FUN_005b3fc0(void *this,undefined4 *param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 local_8;
  float fStack_4;
  
  FUN_0043b520(&local_8,0.0);
  iVar1 = (**(code **)(**(int **)((int)this + 0x228) + 0x24))();
  if (iVar1 < 6) {
    for (iVar1 = *(int *)((int)this + 0xac); iVar1 != (int)this + 0xb8; iVar1 = *(int *)(iVar1 + 4))
    {
      if (*(int *)((int)*(void **)(iVar1 + 8) + 0x1c0) != 4) {
        pfVar2 = FUN_004de1b0(*(void **)(iVar1 + 8),&fStack_4);
        FUN_0043b5e0(&local_8,pfVar2);
      }
    }
  }
  *param_1 = local_8;
  return;
}


//// FUNCTION FUN_005b4030 @ 005b4030 ////

undefined4 * __thiscall FUN_005b4030(void *this,undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float fStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  FUN_0043b520(&local_8,0.0);
  if (*(int **)((int)this + 0x228) == (int *)0x0) {
    *param_1 = local_8;
    return param_1;
  }
  iVar2 = (**(code **)(**(int **)((int)this + 0x228) + 0x24))();
  if (4 < iVar2) {
    *param_1 = local_8;
    return param_1;
  }
  fStack_c = *(float *)((int)this + 0x2c4);
  pfVar3 = (float *)FUN_005ab230(&uStack_4);
  fStack_c = *pfVar3 - fStack_c;
  if (0.0 <= fStack_c) {
    if (1.0 < fStack_c) {
      fStack_c = 1.0;
    }
  }
  else {
    fStack_c = 0.0;
  }
  pfVar3 = (float *)FUN_005ab220(&uStack_4);
  fVar1 = *pfVar3;
  fVar5 = FUN_0043b970(0xe4fa4c);
  puVar4 = (undefined4 *)FUN_0043b520(&uStack_4,(float)((float10)(fStack_c / fVar1) / fVar5));
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_005b4140 @ 005b4140 ////

void __thiscall FUN_005b4140(void *this,int param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  void *pvVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  int iStack_70;
  void *local_6c;
  int iStack_68;
  undefined4 *puStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  char *apcStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5bd0;
  local_c = ExceptionList;
  if (param_2 == (void *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  local_6c = this;
  iVar2 = (**(code **)(**(int **)((int)this + 0x228) + 0x24))();
  if (((iVar2 != 7) && (uVar3 = FUN_005b3c00((int)this), (char)uVar3 == '\0')) &&
     (iVar2 = (**(code **)(**(int **)((int)this + 0x228) + 0x24))(), iVar2 != 6)) {
    iVar2 = *(int *)((int)this + 0xac);
    if (iVar2 != (int)this + 0xb8) {
      do {
        iVar8 = *(int *)(iVar2 + 8);
        if ((iVar8 != 0) && (iVar4 = FUN_004de100(iVar8), iVar4 != 0)) {
          iVar4 = FUN_004de100(iVar8);
          iVar4 = *(int *)(iVar4 + 8);
          iVar5 = FUN_004de100(iVar8);
          if (iVar4 != iVar5 + 0x14) {
            do {
              pvVar6 = (void *)FUN_0048c9f0(*(int *)(iVar4 + 8));
              if (pvVar6 == param_2) {
                FUN_004df130(iVar8);
                break;
              }
              iVar4 = *(int *)(iVar4 + 4);
              iVar5 = FUN_004de100(iVar8);
            } while (iVar4 != iVar5 + 0x14);
          }
        }
        iVar2 = *(int *)(iVar2 + 4);
      } while (iVar2 != (int)this + 0xb8);
    }
    uVar3 = FUN_005a6140((int)param_2);
    if ((char)uVar3 != '\0') {
      FUN_00407070(&puStack_64,0.0);
      *(undefined4 **)((int)this + 0x2c4) = puStack_64;
      if ((DAT_0104a974 != 0) && (0.0 < *(float *)(DAT_0104a974 + 0x6c))) {
        *(undefined4 *)((int)this + 0x2c4) = 0x3f800000;
      }
    }
  }
  if (param_1 != 0) {
    FUN_005a71d0(*(void **)((int)this + 0x1f8),param_1);
  }
  FUN_005a6440(param_2,param_1);
  if (param_1 == 0) {
    ExceptionList = local_c;
    return;
  }
  puVar7 = (undefined4 *)FUN_005a6430((int)param_2);
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[0x12] = puVar7[0x12] + 1;
  }
  puStack_78 = (undefined4 *)0x0;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  puStack_64 = puVar7;
  puStack_54 = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x4a0);
    iVar8 = FUN_0042feb0((int)puVar7);
    if ((iVar8 == iVar2) || (iVar2 = FUN_0042feb0((int)puVar7), iVar2 == 2)) {
      puVar7[0x12] = puVar7[0x12] + 1;
      puStack_78 = puVar7;
      goto LAB_005b476e;
    }
    FUN_00403de0(apcStack_4c,puVar7 + 0x1e);
    iStack_4._0_1_ = 2;
    if (*apcStack_4c[0] == 'm') {
      *apcStack_4c[0] = 'f';
    }
    else if (*apcStack_4c[0] == 'f') {
      *apcStack_4c[0] = 'm';
    }
    iVar2 = FUN_00959a40(apcStack_4c);
    if ((iVar2 == 0) || (cVar1 = FUN_00960f30(iVar2), cVar1 == '\0')) {
      FUN_00431da0(puVar7,apvStack_2c);
      iStack_4._0_1_ = 4;
      bVar12 = FUN_00430950(apvStack_2c,"");
      if (bVar12) {
        piVar9 = FUN_004335f0(&iStack_68,apvStack_2c,*(int *)(param_1 + 0x4a0),3,0,0);
        iStack_4._0_1_ = 5;
        FUN_004349f0(&puStack_78,piVar9);
        iStack_4._0_1_ = 4;
        FUN_00430830(&iStack_68);
      }
      else {
        puStack_78 = (undefined4 *)0x0;
      }
      iStack_4._0_1_ = 2;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
    else {
      piVar9 = FUN_004335f0(&iStack_68,apcStack_4c,*(int *)(param_1 + 0x4a0),3,0,0);
      iStack_4._0_1_ = 3;
      FUN_004349f0(&puStack_78,piVar9);
      iStack_4._0_1_ = 2;
      FUN_00430830(&iStack_68);
    }
    puVar11 = puStack_78;
    FUN_005a63c0(param_2,puStack_78);
    iStack_4._0_1_ = 1;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(apcStack_4c[0]);
    }
    bVar12 = puVar11 == puVar7;
    this = local_6c;
    puVar7 = puVar11;
    if (bVar12) goto LAB_005b476e;
  }
  iStack_4._0_1_ = 1;
  iVar2 = *(int *)((int)this + 0xac);
  iStack_58 = (int)this + 0xb8;
  puVar7 = puVar11;
  iStack_68 = iVar2;
  if (iVar2 != iStack_58) {
    do {
      local_6c = *(void **)(iVar2 + 8);
      if ((local_6c != (void *)0x0) &&
         (iStack_68 = iVar2, iVar8 = FUN_004de100((int)local_6c), pvVar6 = local_6c, iVar8 != 0)) {
        iVar8 = FUN_004de100((int)local_6c);
        iVar8 = *(int *)(iVar8 + 8);
        iStack_70 = iVar8;
        iVar5 = FUN_004de100((int)pvVar6);
        iVar4 = iStack_70;
        if (iVar8 != iVar5 + 0x14) {
          do {
            pvVar6 = *(void **)(iVar4 + 8);
            pvVar10 = (void *)FUN_0048c9f0((int)pvVar6);
            puVar11 = puStack_64;
            if (pvVar10 == param_2) {
              if (puStack_64 != (undefined4 *)0x0) {
                pvVar10 = (void *)FUN_0048e140((int)pvVar6);
                uVar3 = FUN_00430dd0(puVar11,pvVar10);
                if ((char)uVar3 != '\0') {
                  bVar12 = FUN_0048cc40((int)pvVar6);
                  if (bVar12) {
                    FUN_0048dd10(pvVar6,(int)puVar7);
                    FUN_0048dd70((int)pvVar6);
                  }
                  else {
                    bVar12 = FUN_0048cc60((int)pvVar6);
                    if (bVar12) {
                      FUN_0048dfb0(pvVar6,(int)puVar7);
                      FUN_0048dd70((int)pvVar6);
                    }
                    else {
                      FUN_0048e0d0(pvVar6,(int)puVar7);
                    }
                  }
                  goto LAB_005b4736;
                }
              }
              puVar7 = (undefined4 *)FUN_0048e140((int)pvVar6);
              if (puVar7 != (undefined4 *)0x0) {
                puVar7[0x12] = puVar7[0x12] + 1;
              }
              iStack_4._0_1_ = 6;
              puStack_50 = puVar7;
              if (((puVar7 != (undefined4 *)0x0) &&
                  (iVar2 = *(int *)(param_1 + 0x4a0), iVar8 = FUN_0042feb0((int)puVar7),
                  iVar8 != iVar2)) && (iVar2 = FUN_0042feb0((int)puVar7), iVar2 != 2)) {
                FUN_00403de0(apcStack_4c,puVar7 + 0x1e);
                if (*apcStack_4c[0] == 'm') {
                  *apcStack_4c[0] = 'f';
                }
                else if (*apcStack_4c[0] == 'f') {
                  *apcStack_4c[0] = 'm';
                }
                puStack_74 = (undefined4 *)0x0;
                iStack_4._0_1_ = 8;
                iVar2 = FUN_00959a40(apcStack_4c);
                if ((iVar2 == 0) || (cVar1 = FUN_00960f30(iVar2), cVar1 == '\0')) {
                  FUN_00431da0(puVar7,apvStack_2c);
                  iStack_4._0_1_ = 10;
                  bVar12 = FUN_00430950(apvStack_2c,"");
                  if (bVar12) {
                    piVar9 = FUN_004335f0(&iStack_5c,apvStack_2c,*(int *)(param_1 + 0x4a0),3,0,0);
                    iStack_4._0_1_ = 0xb;
                    FUN_004349f0(&puStack_74,piVar9);
                    iStack_4._0_1_ = 10;
                    FUN_00430830(&iStack_5c);
                  }
                  else {
                    puStack_74 = (undefined4 *)0x0;
                  }
                  iStack_4 = CONCAT31(iStack_4._1_3_,8);
                  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
                    _free(apvStack_2c[0]);
                  }
                }
                else {
                  piVar9 = FUN_004335f0(&iStack_60,apcStack_4c,*(int *)(param_1 + 0x4a0),3,0,0);
                  iStack_4._0_1_ = 9;
                  FUN_004349f0(&puStack_74,piVar9);
                  iStack_4 = CONCAT31(iStack_4._1_3_,8);
                  FUN_00430830(&iStack_60);
                }
                puVar11 = puStack_74;
                bVar12 = FUN_0048cc40((int)pvVar6);
                if (bVar12) {
                  FUN_0048dd10(pvVar6,(int)puVar11);
                  FUN_0048dd70((int)pvVar6);
                }
                else {
                  bVar12 = FUN_0048cc60((int)pvVar6);
                  if (bVar12) {
                    FUN_0048dfb0(pvVar6,(int)puVar11);
                    FUN_0048dd70((int)pvVar6);
                  }
                  else {
                    FUN_0048e0d0(pvVar6,(int)puVar11);
                  }
                }
                iStack_4._0_1_ = 7;
                if (puVar11 != (undefined4 *)0x0) {
                  piVar9 = puVar11 + 0x12;
                  *piVar9 = *piVar9 + -1;
                  if (*piVar9 == 0) {
                    (**(code **)*puVar11)(1);
                  }
                }
                if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
                  _free(apcStack_4c[0]);
                }
              }
              iStack_4._0_1_ = 1;
              if (puVar7 != (undefined4 *)0x0) {
                piVar9 = puVar7 + 0x12;
                *piVar9 = *piVar9 + -1;
                if (*piVar9 == 0) {
                  (**(code **)*puVar7)(1);
                }
              }
            }
LAB_005b4736:
            iVar4 = *(int *)(iStack_70 + 4);
            iStack_70 = iVar4;
            iVar8 = FUN_004de100((int)local_6c);
            puVar7 = puStack_78;
            iVar2 = iStack_68;
          } while (iVar4 != iVar8 + 0x14);
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
      iStack_68 = iVar2;
    } while (iVar2 != iStack_58);
  }
LAB_005b476e:
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (puVar7 != (undefined4 *)0x0) {
    piVar9 = puVar7 + 0x12;
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      (**(code **)*puVar7)(1);
    }
  }
  iStack_4 = 0xffffffff;
  if (puStack_64 != (undefined4 *)0x0) {
    piVar9 = puStack_64 + 0x12;
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      (**(code **)*puStack_64)(1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005b47c0 @ 005b47c0 ////

void __fastcall FUN_005b47c0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 0x228) + 0x24))();
  if (iVar3 != 7) {
    uVar4 = FUN_005b3c00(param_1);
    if ((char)uVar4 == '\0') {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x228) + 0x24))();
      if (iVar3 != 3) {
        if (*(int *)(param_1 + 0xa0) != 0) {
          FUN_004d99b0(*(int *)(param_1 + 0xa0));
        }
        piVar5 = FUN_005aaaa0(param_1);
        (**(code **)(*piVar5 + 0xc))(param_1);
        puVar2 = *(undefined4 **)(param_1 + 0x228);
        if (puVar2 != (undefined4 *)0x0) {
          piVar1 = puVar2 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(1);
          }
          (**(code **)(*(int *)(param_1 + 0x214) + 4))();
          *(undefined4 *)(param_1 + 0x228) = 0;
          (*(code *)**(undefined4 **)(param_1 + 0x214))();
        }
        (**(code **)(*(int *)(param_1 + 0x214) + 4))();
        *(int **)(param_1 + 0x228) = piVar5;
                    /* WARNING: Could not recover jumptable at 0x005b4868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined4 **)(param_1 + 0x214))();
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_005b4870 @ 005b4870 ////

int FUN_005b4870(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = 0;
  puVar6 = DAT_0104d688;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      iVar2 = puVar6[2];
      iVar4 = (**(code **)(**(int **)(iVar2 + 0x228) + 0x24))();
      if (iVar4 != 7) {
        iVar4 = GetPlayerStudio();
        cVar3 = (**(code **)(**(int **)(iVar2 + 0x228) + 0x30))();
        if (cVar3 == '\0') {
          iVar5 = *(int *)(iVar4 + 200);
          iVar4 = iVar4 + 0xd4;
          if (iVar5 != iVar4) {
            do {
              if (*(int *)(iVar5 + 8) == iVar2) break;
              iVar5 = *(int *)(iVar5 + 4);
            } while (iVar5 != iVar4);
            if (iVar5 != iVar4) goto LAB_005b48d1;
          }
        }
        iVar7 = iVar7 + 1;
      }
LAB_005b48d1:
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d694);
  }
  return iVar7;
}


//// FUNCTION FUN_005b48f0 @ 005b48f0 ////

void __thiscall FUN_005b48f0(void *this,int param_1,int param_2)

{
  int iVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((param_1 != 0) && (iVar2 = FUN_005a7640(*(void **)((int)this + 0x1f8),param_1,0), iVar2 != 0)
      ) && (iVar3 = FUN_005a6470(iVar2), iVar3 == param_1)) {
    for (iVar3 = *(int *)((int)this + 0xac); iVar3 != (int)this + 0xb8; iVar3 = *(int *)(iVar3 + 4))
    {
      iVar1 = *(int *)(iVar3 + 8);
      if (iVar1 != 0) {
        iVar4 = FUN_004de100(iVar1);
        iVar4 = *(int *)(iVar4 + 8);
        iVar5 = FUN_004de100(iVar1);
        if (iVar4 != iVar5 + 0x14) {
          do {
            this_00 = *(void **)(iVar4 + 8);
            if ((this_00 != (void *)0x0) && (iVar5 = FUN_0048c9f0((int)this_00), iVar5 == iVar2)) {
              FUN_0048dfb0(this_00,param_2);
              FUN_0048dd70((int)this_00);
              if (DAT_0104d8e8 != (void *)0x0) {
                FUN_00603dd0(DAT_0104d8e8,this_00,-1);
              }
            }
            iVar4 = *(int *)(iVar4 + 4);
            iVar5 = FUN_004de100(iVar1);
          } while (iVar4 != iVar5 + 0x14);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_005b49c0 @ 005b49c0 ////

void __thiscall FUN_005b49c0(void *this,void *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *local_48;
  int local_44;
  int local_40;
  void *local_3c;
  int local_38;
  void *local_34;
  undefined4 *local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = this;
  iVar4 = FUN_004de100((int)param_1);
  iVar4 = *(int *)(iVar4 + 8);
  local_38 = iVar4;
  iVar5 = FUN_004de100((int)param_1);
  if (iVar4 != iVar5 + 0x14) {
    do {
      puVar10 = (undefined4 *)0x0;
      local_48 = (undefined4 *)0x0;
      local_3c = *(void **)(iVar4 + 8);
      local_4 = 0;
      iVar4 = FUN_0048c9f0((int)local_3c);
      local_44 = iVar4;
      if ((iVar4 == 0) || (iVar5 = FUN_005a6470(iVar4), iVar5 == 0)) {
        local_4 = 0xffffffff;
      }
      else {
        local_40 = *(int *)((int)this + 0xac);
        puVar8 = puVar10;
        if (local_40 == (int)this + 0xb8) {
LAB_005b4b14:
          iVar5 = FUN_005a6470(iVar4);
          if (iVar5 != 0) {
            iVar5 = FUN_005a6470(iVar4);
            iVar5 = FUN_004e0620(param_1,iVar5);
            bVar2 = FUN_0048cc50(iVar5);
            if (!bVar2) {
              cVar3 = '\0';
              pvVar7 = (void *)FUN_005a6470(iVar4);
              puVar8 = (undefined4 *)FUN_0059c6e0(pvVar7,cVar3);
              pvVar7 = local_3c;
              local_48 = puVar8;
              if (puVar8 == (undefined4 *)0x0) {
                FUN_0048cb70(local_3c,local_2c);
                local_4._0_1_ = 1;
                iVar5 = FUN_00959a40(local_2c);
                if ((iVar5 != 0) && (cVar3 = FUN_00960f30(iVar5), cVar3 != '\0')) {
                  iVar4 = FUN_005a6470(iVar4);
                  piVar9 = FUN_004335f0((int *)&local_30,local_2c,*(int *)(iVar4 + 0x4a0),3,0,0);
                  local_4._0_1_ = 2;
                  FUN_004349f0(&local_48,piVar9);
                  local_4._0_1_ = 1;
                  if ((local_30 != (undefined4 *)0x0) &&
                     (iVar4 = local_30[0x12], local_30[0x12] = iVar4 + -1, iVar4 + -1 == 0)) {
                    (**(code **)*local_30)(1);
                  }
                  local_30 = (undefined4 *)0x0;
                  puVar8 = local_48;
                }
                local_4 = (uint)local_4._1_3_ << 8;
                if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                  _free(local_2c[0]);
                }
                if (puVar8 != (undefined4 *)0x0) goto LAB_005b4c19;
              }
              else {
                puVar8[0x12] = puVar8[0x12] + 1;
LAB_005b4c19:
                FUN_0048dfb0(pvVar7,(int)puVar8);
              }
              FUN_0048dd70((int)pvVar7);
            }
          }
        }
        else {
          do {
            pvVar7 = *(void **)(local_40 + 8);
            puVar8 = puVar10;
            puVar1 = local_48;
            if (pvVar7 != param_1) {
              iVar5 = FUN_004de100((int)pvVar7);
              iVar5 = *(int *)(iVar5 + 8);
              iVar6 = FUN_004de100((int)pvVar7);
              puVar1 = local_48;
              if (iVar5 != iVar6 + 0x14) {
                do {
                  iVar4 = *(int *)(iVar5 + 8);
                  iVar6 = FUN_0048c9f0(iVar4);
                  if (iVar6 == local_44) {
                    puVar8 = (undefined4 *)FUN_0048e140(iVar4);
                    if (puVar8 != (undefined4 *)0x0) {
                      puVar8[0x12] = puVar8[0x12] + 1;
                    }
                    iVar4 = local_44;
                    puVar1 = puVar8;
                    if (puVar10 != (undefined4 *)0x0) {
                      piVar9 = puVar10 + 0x12;
                      *piVar9 = *piVar9 + -1;
                      if (*piVar9 == 0) {
                        (**(code **)*puVar10)(1);
                        iVar4 = local_44;
                      }
                    }
                    break;
                  }
                  iVar5 = *(int *)(iVar5 + 4);
                  iVar6 = FUN_004de100((int)pvVar7);
                  iVar4 = local_44;
                  puVar1 = local_48;
                } while (iVar5 != iVar6 + 0x14);
              }
            }
            local_48 = puVar1;
            pvVar7 = local_3c;
            local_40 = *(int *)(local_40 + 4);
            puVar10 = puVar8;
          } while (local_40 != (int)local_34 + 0xb8);
          if (puVar8 == (undefined4 *)0x0) goto LAB_005b4b14;
          FUN_0048dfb0(local_3c,(int)puVar8);
          FUN_0048dd70((int)pvVar7);
        }
        local_4 = 0xffffffff;
        if (puVar8 != (undefined4 *)0x0) {
          piVar9 = puVar8 + 0x12;
          *piVar9 = *piVar9 + -1;
          if (*piVar9 == 0) {
            (**(code **)*puVar8)(1);
          }
        }
      }
      iVar5 = *(int *)(local_38 + 4);
      local_38 = iVar5;
      iVar6 = FUN_004de100((int)param_1);
      iVar4 = local_38;
      this = local_34;
    } while (iVar5 != iVar6 + 0x14);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005b4c80 @ 005b4c80 ////

uint __thiscall FUN_005b4c80(void *this,int param_1)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xac);
  do {
    if (iVar1 == (int)this + 0xb8) {
      return in_EAX & 0xffffff00;
    }
    iVar2 = FUN_004de100(*(int *)(iVar1 + 8));
    uVar3 = *(uint *)(iVar2 + 8);
    iVar2 = FUN_004de100(*(int *)(iVar1 + 8));
    in_EAX = iVar2 + 0x14;
    if (uVar3 != in_EAX) {
      do {
        iVar2 = FUN_0048c950(*(int *)(uVar3 + 8));
        if (iVar2 == param_1) {
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
        uVar3 = *(uint *)(uVar3 + 4);
        iVar2 = FUN_004de100(*(int *)(iVar1 + 8));
        in_EAX = iVar2 + 0x14;
      } while (uVar3 != in_EAX);
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}


//// FUNCTION FUN_005b4cf0 @ 005b4cf0 ////

int __fastcall FUN_005b4cf0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      if ((*(int *)(puVar4[2] + 0x814) == 0xe) &&
         (iVar2 = FUN_00577d80(puVar4[2]), iVar2 == param_1)) {
        iVar3 = iVar3 + 1;
      }
      puVar1 = puVar4 + 1;
      puVar4 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  return iVar3;
}


//// FUNCTION FUN_005b4d40 @ 005b4d40 ////

void __fastcall FUN_005b4d40(int param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void **ppvVar7;
  char **ppcVar8;
  void *pvVar9;
  int local_50;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5c20;
  local_c = ExceptionList;
  local_50 = *(int *)(param_1 + 0xac);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (local_50 != param_1 + 0xb8) {
    do {
      iVar6 = *(int *)(local_50 + 8);
      iVar1 = FUN_004df220(iVar6);
      if ((iVar1 != 0) && (iVar1 = FUN_004df4a0(iVar6), iVar1 != 0)) {
        ppvVar7 = local_2c;
        pvVar2 = (void *)FUN_004df220(iVar6);
        FUN_004cd890(pvVar2,ppvVar7);
        local_4 = 0;
        FUN_004073f0(local_2c,"_crew_00.flm",0xc);
        ppcVar8 = &local_4c;
        pvVar2 = (void *)FUN_004df4a0(iVar6);
        FUN_004b6330(pvVar2,ppcVar8);
        local_4 = CONCAT31(local_4._1_3_,1);
        pvVar2 = (void *)FUN_0097c880(local_4c,(int)local_2c[0],(undefined4 *)(iVar6 + 0x2cc),0);
        if (pvVar2 == (void *)0x0) {
          if (local_44 < 0x1d) {
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
            local_44 = 0x20;
            local_4c = _malloc(0x20);
          }
          _strncpy(local_4c,"generated_scene_template.flm",0x1c);
          local_48 = 0x1c;
          local_4c[0x1c] = '\0';
          pvVar2 = (void *)FUN_0097c880(local_4c,(int)local_2c[0],(undefined4 *)0x0,0);
          if (pvVar2 != (void *)0x0) goto LAB_005b4e6f;
        }
        else {
LAB_005b4e6f:
          pvVar9 = pvVar2;
          uVar3 = FUN_004de360(iVar6);
          FUN_009fda70(uVar3,pvVar9);
          iVar1 = FUN_00975c50(pvVar2,2);
          *(int *)(iVar6 + 0x280) = iVar1;
          iVar1 = FUN_005a93c0(*(void **)(*(int *)(iVar6 + 0xb4) + 600),2);
          if (iVar1 == 0) {
            *(undefined4 *)(iVar6 + 0x274) = 0;
          }
          else {
            iVar1 = FUN_00975c50(pvVar2,3);
            *(int *)(iVar6 + 0x274) = iVar1;
          }
          iVar1 = FUN_00975c50(pvVar2,6);
          *(int *)(iVar6 + 0x278) = iVar1;
          iVar1 = FUN_00975c50(pvVar2,5);
          *(int *)(iVar6 + 0x27c) = iVar1;
          if (pvVar2 != (void *)0x0) {
            FUN_00971df0(pvVar2);
          }
        }
        iVar1 = FUN_004de150(iVar6);
        iVar4 = FUN_004de130(iVar6);
        iVar5 = FUN_004de140(iVar6);
        iVar6 = FUN_004de120(iVar6);
        uVar3 = iVar1 + iVar4 + iVar5 + iVar6;
        if (*(uint *)(param_1 + 0x300) < uVar3) {
          *(uint *)(param_1 + 0x300) = uVar3;
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        local_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
      local_50 = *(int *)(local_50 + 4);
    } while (local_50 != param_1 + 0xb8);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005b4f80 @ 005b4f80 ////

void __fastcall FUN_005b4f80(void *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  float extraout_ECX;
  float fVar3;
  undefined4 uVar4;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5c3b;
  pvStack_c = ExceptionList;
  uVar4 = *(undefined4 *)((int)param_1 + 0x370);
  ExceptionList = &pvStack_c;
  pvVar2 = param_1;
  CProject_GetQualityWithAwardBoost(param_1,(float *)&stack0xffffffd8);
  fVar3 = extraout_ECX;
  FUN_005b2bd0(param_1,(undefined4 *)&stack0xffffffd4);
  puVar1 = (undefined4 *)FUN_005b29e0(&local_10,fVar3,(float)pvVar2,uVar4);
  *(undefined4 *)((int)param_1 + 0x36c) = *puVar1;
  pvVar2 = operator_new(0xb8);
  puVar1 = (undefined4 *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    puVar1 = GenrePopularitySnapshot_Constructor(pvVar2,(int)param_1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)((int)param_1 + 0x374) + 4))();
  *(undefined4 **)((int)param_1 + 0x388) = puVar1;
  (*(code *)**(undefined4 **)((int)param_1 + 0x374))();
  CProjectSuccess_Recompute(*(void **)((int)param_1 + 0x388));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005b5040 @ 005b5040 ////

float10 __fastcall FUN_005b5040(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_8;
  
  iVar1 = *(int *)(param_1 + 0xac);
  local_8 = 0.0;
  for (; iVar1 != param_1 + 0xb8; iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = *(int *)(iVar1 + 8);
    iVar2 = FUN_004df4a0(iVar3);
    if (iVar2 != 0) {
      iVar3 = FUN_004df4a0(iVar3);
      iVar3 = FUN_004b4a60(iVar3);
      local_8 = (float)iVar3 * 0.1 + local_8;
    }
  }
  return (float10)local_8;
}


//// FUNCTION FUN_005b50b0 @ 005b50b0 ////

int __fastcall FUN_005b50b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0xac);
  local_4 = 0;
  for (; iVar1 != param_1 + 0xb8; iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = *(int *)(iVar1 + 8);
    iVar2 = FUN_004df4a0(iVar3);
    if (iVar2 != 0) {
      iVar2 = FUN_004df4a0(iVar3);
      iVar2 = FUN_004b4a40(iVar2);
      if (iVar2 != 0) {
        iVar3 = FUN_004df4a0(iVar3);
        iVar4 = FUN_004b4a40(iVar3);
        iVar2 = 0;
        for (iVar3 = *(int *)(iVar4 + 8); iVar3 != iVar4 + 0x14; iVar3 = *(int *)(iVar3 + 4)) {
          iVar2 = iVar2 + 1;
        }
        if (local_4 < iVar2) {
          local_4 = iVar2;
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x1f8);
  iVar3 = 0;
  if (*(int *)(iVar1 + 100) != 0) {
    iVar3 = (*(int *)(iVar1 + 0x68) - *(int *)(iVar1 + 100)) / 0x18;
  }
  if (iVar3 <= local_4) {
    return local_4;
  }
  if (*(int *)(iVar1 + 100) != 0) {
    return (*(int *)(iVar1 + 0x68) - *(int *)(iVar1 + 100)) / 0x18;
  }
  return 0;
}


//// FUNCTION FUN_005b5190 @ 005b5190 ////

int __fastcall FUN_005b5190(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  iVar4 = 0;
  for (iVar1 = *(int *)(param_1 + 0xac); iVar1 != param_1 + 0xb8; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 8);
    if ((iVar4 != 0) && (iVar3 = FUN_004df220(iVar2), iVar3 != iVar4)) {
      local_4 = local_4 + 1;
    }
    iVar4 = FUN_004df220(iVar2);
  }
  return local_4;
}


//// FUNCTION FUN_005b51e0 @ 005b51e0 ////

int __cdecl FUN_005b51e0(undefined4 *param_1)

{
  byte bVar1;
  uint _Count;
  char *_Source;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  int local_30;
  byte *local_2c;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb5c58;
  local_c = ExceptionList;
  local_2c = local_20;
  local_30 = 0;
  local_20[0] = 0;
  local_24 = 0x14;
  local_4 = 0;
  iVar4 = 0;
  puVar5 = DAT_0104ad14;
  ExceptionList = &local_c;
  if (DAT_0104ad14 != &DAT_0104ad20) {
    do {
      puVar2 = (undefined4 *)FUN_00528460(puVar5[2]);
      _Count = puVar2[1];
      _Source = (char *)*puVar2;
      if (local_24 <= _Count) {
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy((char *)local_2c,_Source,_Count);
      local_2c[_Count] = 0;
      pbVar6 = (byte *)*param_1;
      pbVar3 = local_2c;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_005b52bc:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_005b52c1;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_005b52bc;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_005b52c1:
      if (iVar4 == 0) {
        local_30 = local_30 + 1;
      }
      puVar2 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != &DAT_0104ad20);
    iVar4 = local_30;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return iVar4;
}


//// FUNCTION FUN_005b5300 @ 005b5300 ////

void __fastcall FUN_005b5300(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *local_8;
  int local_4;
  
  local_4 = 0;
  do {
    if (local_4 == 1) {
      iVar3 = 2;
    }
    else if (local_4 == 2) {
      iVar3 = 3;
    }
    else {
      iVar3 = 1;
    }
    iVar4 = FUN_005a76b0(*(void **)(param_1 + 0x1f8),iVar3,0);
    if (iVar4 == 0) {
      iVar4 = 9999;
      local_8 = (int *)0x0;
      puVar8 = DAT_0104d05c;
      if (DAT_0104d05c != &DAT_0104d068) {
        do {
          piVar1 = (int *)puVar8[2];
          if (piVar1 != (int *)0x0) {
            cVar2 = (**(code **)(*piVar1 + 0x204))();
            if (cVar2 != '\0') {
              iVar5 = FUN_005773c0((int)piVar1);
              iVar6 = GetPlayerStudio();
              if (iVar5 == iVar6) {
                cVar2 = FUN_005855f0((int)piVar1);
                if ((cVar2 == '\0') && (piVar1[0x205] == 2)) {
                  iVar5 = (**(code **)(*piVar1 + 0x298))();
                  if (iVar5 != 0) {
                    iVar5 = FUN_005a7640(*(void **)(param_1 + 0x1f8),(int)piVar1,0);
                    if (iVar5 == 0) {
                      piVar7 = (int *)(**(code **)(*piVar1 + 0x298))();
                      iVar5 = (**(code **)(*piVar7 + 0x28))();
                      if (iVar5 < iVar4) {
                        piVar7 = (int *)(**(code **)(*piVar1 + 0x298))();
                        iVar4 = (**(code **)(*piVar7 + 0x28))();
                        local_8 = piVar1;
                      }
                    }
                  }
                }
              }
            }
          }
          puVar8 = (undefined4 *)puVar8[1];
        } while (puVar8 != &DAT_0104d068);
        if (local_8 != (int *)0x0) {
          FUN_005a90f0(*(void **)(param_1 + 0x1f8),local_8,iVar3);
        }
      }
    }
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  return;
}


//// FUNCTION FUN_005b5440 @ 005b5440 ////

undefined4 * __thiscall FUN_005b5440(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  iVar5 = *(int *)((int)this + 0x3d0);
  if (iVar5 != (int)this + 0x3dc) {
    do {
      puVar3 = *(undefined4 **)(iVar5 + 8);
      if ((puVar3 != (undefined4 *)0x0) && (iVar2 = FUN_005d5360((int)puVar3), iVar2 == param_1)) {
        return puVar3;
      }
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != (int)this + 0x3dc);
  }
  puVar3 = FUN_005d7150(param_1,this);
  piVar4 = (int *)FUN_005d5240((int)puVar3);
  piVar1 = (int *)((int)this + 0x3dc);
  piVar4[1] = (int)piVar1;
  *piVar4 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar4;
  *piVar1 = (int)piVar4;
  return puVar3;
}


//// FUNCTION FUN_005b54c0 @ 005b54c0 ////

uint __thiscall FUN_005b54c0(void *this,int param_1)

{
  int iVar1;
  uint in_EAX;
  
  iVar1 = *(int *)((int)this + 0x3d0);
  while( true ) {
    if (iVar1 == (int)this + 0x3dc) {
      return in_EAX & 0xffffff00;
    }
    if ((*(int *)(iVar1 + 8) != 0) &&
       (in_EAX = FUN_005d5360(*(int *)(iVar1 + 8)), in_EAX == param_1)) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION FUN_005b5500 @ 005b5500 ////

void __thiscall FUN_005b5500(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_004de100(param_1);
  iVar1 = *(int *)(iVar1 + 8);
  iVar2 = FUN_004de100(param_1);
  if (iVar1 != iVar2 + 0x14) {
    do {
      iVar2 = FUN_0048c950(*(int *)(iVar1 + 8));
      if (iVar2 != 0) {
        puVar3 = FUN_005b5440(this,iVar2);
        FUN_005d6290(puVar3,param_1);
      }
      iVar1 = *(int *)(iVar1 + 4);
      iVar2 = FUN_004de100(param_1);
    } while (iVar1 != iVar2 + 0x14);
  }
  if (*(int *)((int)this + 0x1c8) != 0) {
    puVar3 = FUN_005b5440(this,*(int *)((int)this + 0x1c8));
    FUN_005d6290(puVar3,param_1);
  }
  return;
}


//// FUNCTION FUN_005b5570 @ 005b5570 ////

void __thiscall FUN_005b5570(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_004de100(param_1);
  iVar1 = *(int *)(iVar1 + 8);
  iVar2 = FUN_004de100(param_1);
  if (iVar1 != iVar2 + 0x14) {
    do {
      iVar2 = FUN_0048c950(*(int *)(iVar1 + 8));
      if (iVar2 != 0) {
        puVar3 = FUN_005b5440(this,iVar2);
        FUN_005d63e0((int)puVar3);
      }
      iVar1 = *(int *)(iVar1 + 4);
      iVar2 = FUN_004de100(param_1);
    } while (iVar1 != iVar2 + 0x14);
  }
  if (*(int *)((int)this + 0x1c8) != 0) {
    puVar3 = FUN_005b5440(this,*(int *)((int)this + 0x1c8));
    FUN_005d63e0((int)puVar3);
  }
  return;
}


//// FUNCTION FUN_005b55e0 @ 005b55e0 ////

void __thiscall FUN_005b55e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_004de100(param_1);
  iVar1 = *(int *)(iVar1 + 8);
  iVar2 = FUN_004de100(param_1);
  if (iVar1 != iVar2 + 0x14) {
    do {
      iVar2 = FUN_0048c950(*(int *)(iVar1 + 8));
      if (iVar2 != 0) {
        puVar3 = FUN_005b5440(this,iVar2);
        FUN_005d5300((int)puVar3);
      }
      iVar1 = *(int *)(iVar1 + 4);
      iVar2 = FUN_004de100(param_1);
    } while (iVar1 != iVar2 + 0x14);
  }
  if (*(int *)((int)this + 0x1c8) != 0) {
    puVar3 = FUN_005b5440(this,*(int *)((int)this + 0x1c8));
    FUN_005d5300((int)puVar3);
  }
  return;
}


//// FUNCTION FUN_005b5650 @ 005b5650 ////

void __thiscall FUN_005b5650(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_005b5440(this,param_1);
  FUN_005d5250((int)puVar1);
  return;
}


//// FUNCTION FUN_005b5670 @ 005b5670 ////

longlong * __thiscall FUN_005b5670(void *this,longlong *param_1,int param_2)

{
  undefined4 *this_00;
  longlong *plVar1;
  undefined8 local_10;
  longlong local_8;
  
  local_10 = FUN_00acd42c();
  FUN_00471b10(&local_10);
  this_00 = FUN_005b5440(this,param_2);
  plVar1 = FUN_005d5370(this_00,&local_8);
  local_10._0_4_ = (undefined4)*plVar1;
  local_10._4_4_ = *(undefined4 *)((int)plVar1 + 4);
  FUN_00471b10(&local_10);
  *(undefined4 *)param_1 = (undefined4)local_10;
  *(undefined4 *)((int)param_1 + 4) = local_10._4_4_;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005b56f0 @ 005b56f0 ////

void __thiscall FUN_005b56f0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_005b5440(this,param_1);
  FUN_005d5260((int)puVar1);
  return;
}


//// FUNCTION FUN_005b5710 @ 005b5710 ////

void __thiscall FUN_005b5710(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_005b5440(this,param_1);
  FUN_005d5270((int)puVar1);
  return;
}


//// FUNCTION FUN_005b5730 @ 005b5730 ////

void __thiscall FUN_005b5730(void *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_005b5440(this,param_1);
  FUN_005d5280((int)puVar1);
  return;
}


//// FUNCTION FUN_005b5750 @ 005b5750 ////

void __thiscall FUN_005b5750(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0x3d0);
  if (piVar3 != (int *)((int)this + 0x3dc)) {
    while ((puVar1 = (undefined4 *)piVar3[2], puVar1 == (undefined4 *)0x0 ||
           (iVar2 = FUN_005d5360((int)puVar1), iVar2 != param_1))) {
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)((int)this + 0x3dc)) {
        return;
      }
    }
    if ((int *)piVar3[1] != (int *)0x0) {
      *(int *)piVar3[1] = *piVar3;
    }
    if (*piVar3 != 0) {
      *(int *)(*piVar3 + 4) = piVar3[1];
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3 = puVar1 + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


//// FUNCTION FUN_005b57c0 @ 005b57c0 ////

undefined4 __fastcall FUN_005b57c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  for (iVar1 = *(int *)(param_1 + 0x3d0); iVar1 != param_1 + 0x3dc; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 8);
    if ((iVar2 != 0) && (iVar3 = FUN_005d5290(iVar2), iVar3 != 0)) {
      uVar4 = FUN_005d5290(iVar2);
    }
  }
  return uVar4;
}


//// FUNCTION FUN_005b5800 @ 005b5800 ////

undefined4 __fastcall FUN_005b5800(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  for (iVar1 = *(int *)(param_1 + 0x3d0); iVar1 != param_1 + 0x3dc; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 8);
    if ((iVar2 != 0) && (iVar3 = FUN_005d52a0(iVar2), iVar3 != 0)) {
      uVar4 = FUN_005d52a0(iVar2);
    }
  }
  return uVar4;
}


//// FUNCTION FUN_005b5840 @ 005b5840 ////

void __thiscall FUN_005b5840(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  void *this_00;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [20];
  byte abStack_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5c78;
  local_c = ExceptionList;
  cVar1 = *(char *)((int)this + 0x364);
  ExceptionList = &local_c;
  *(char *)((int)this + 0x364) = param_1;
  if (*(int **)((int)this + 0x228) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)((int)this + 0x228) + 0x24))();
    if (iVar2 == 5) {
      if ((param_1 != '\0') && (*(int *)((int)this + 0xa0) != 0)) {
        FUN_004d9a80(*(int *)((int)this + 0xa0));
        FUN_004d93a0(*(int *)((int)this + 0xa0));
      }
      if (param_1 != cVar1) {
        puStack_54 = auStack_48;
        auStack_48[0] = 0;
        uStack_50 = 0;
        uStack_4c = 0x14;
        uStack_4 = 0;
        if (param_1 == '\0') {
          pcVar5 = "SHOOTING_RESUMED";
        }
        else {
          pcVar5 = "SHOOTING_SUSPENDED";
        }
        FUN_00407630(&puStack_54,pcVar5);
        FUN_0041c9c0(abStack_34,puStack_54);
        puVar6 = &DAT_00d17518;
        iVar4 = 0;
        pbVar3 = abStack_34;
        iVar2 = 2;
        this_00 = (void *)FUN_004f3b20();
        FUN_004f3270(this_00,iVar2,pbVar3,iVar4,puVar6);
        if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_54);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005b5940 @ 005b5940 ////

uint __thiscall FUN_005b5940(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  
  iVar2 = *(int *)((int)this + 0xac);
  do {
    if (iVar2 == (int)this + 0xb8) {
      return in_EAX & 0xffffff00;
    }
    if ((*(int *)(iVar2 + 8) != 0) && (in_EAX = FUN_004de100(*(int *)(iVar2 + 8)), in_EAX != 0)) {
      iVar1 = in_EAX + 0x14;
      for (iVar3 = *(int *)(in_EAX + 8); iVar3 != iVar1; iVar3 = *(int *)(iVar3 + 4)) {
        in_EAX = FUN_0048c9f0(*(int *)(iVar3 + 8));
        if (in_EAX == param_1) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
      }
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


//// FUNCTION FUN_005b59c0 @ 005b59c0 ////

void __fastcall FUN_005b59c0(undefined4 *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  float local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5ca0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0104d6bc == '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"project",7);
    local_28 = 7;
    local_2c[7] = '\0';
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
    _strncpy(local_2c,"ProjectExpiryYears",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    local_4 = 1;
    DAT_00e545ac = FUN_00558750(DAT_00f88624,&local_2c,0);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    DAT_0104d6bc = '\x01';
  }
  local_4 = 0xffffffff;
  if (param_1[0x84] == 0) {
    uVar1 = FUN_005b3c00((int)param_1);
    if ((char)uVar1 != '\0') {
      FUN_0043b620(&DAT_00e4fa4c,&local_30,(float *)(param_1 + 0xa2));
      uVar2 = FUN_0043b560();
      if (DAT_00e545ac <= (int)uVar2) {
        FUN_005b1080(param_1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005b5b20 @ 005b5b20 ////

void FUN_005b5b20(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5cc0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0104d6bd == '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"project",7);
    local_28 = 7;
    local_2c[7] = '\0';
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
    _strncpy(local_2c,"MaxProjectCount",0xf);
    local_28 = 0xf;
    local_2c[0xf] = '\0';
    local_4 = 1;
    DAT_00e545b0 = FUN_00558750(DAT_00f88624,&local_2c,0);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    DAT_0104d6bd = '\x01';
  }
  local_4 = 0xffffffff;
  bVar2 = false;
  if (DAT_00e545b0 < DAT_0104d660) {
    do {
      if (bVar2) {
        ExceptionList = local_c;
        return;
      }
      if (DAT_0104d688 != &DAT_0104d694) {
        bVar2 = true;
        puVar6 = DAT_0104d688;
        do {
          iVar1 = puVar6[2];
          if (*(int *)(iVar1 + 0x210) == 0) {
            iVar4 = GetPlayerStudio();
            cVar3 = (**(code **)(**(int **)(iVar1 + 0x228) + 0x30))();
            if (cVar3 == '\0') {
              iVar5 = *(int *)(iVar4 + 200);
              iVar4 = iVar4 + 0xd4;
              if (iVar5 != iVar4) {
                do {
                  if (*(int *)(iVar5 + 8) == iVar1) break;
                  iVar5 = *(int *)(iVar5 + 4);
                } while (iVar5 != iVar4);
                if (iVar5 != iVar4) {
                  puVar6 = (undefined4 *)puVar6[2];
                  if (*(char *)(puVar6 + 0xa6) == '\0') {
                    DAT_0104d660 = DAT_0104d660 + -1;
                    if ((undefined4 *)puVar6[0xa8] != (undefined4 *)0x0) {
                      *(undefined4 *)puVar6[0xa8] = puVar6[0xa7];
                    }
                    if (puVar6[0xa7] != 0) {
                      *(undefined4 *)(puVar6[0xa7] + 4) = puVar6[0xa8];
                    }
                    puVar6[0xa7] = 0;
                    puVar6[0xa8] = 0;
                    iVar1 = puVar6[0x12];
                    *(undefined1 *)(puVar6 + 0xa6) = 1;
                    puVar6[0x12] = iVar1 + -1;
                    if (iVar1 + -1 == 0) {
                      (**(code **)*puVar6)(1);
                    }
                  }
                  bVar2 = false;
                  break;
                }
              }
            }
          }
          puVar6 = (undefined4 *)puVar6[1];
        } while (puVar6 != &DAT_0104d694);
      }
    } while (DAT_00e545b0 < DAT_0104d660);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005b5d40 @ 005b5d40 ////

int __fastcall FUN_005b5d40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = DAT_0104ed78;
  while( true ) {
    if (puVar2 == &DAT_0104ed84) {
      return 0;
    }
    iVar1 = puVar2[2];
    if ((iVar1 != 0) && (iVar3 = CFacilityPreProduction_GetOccupyingRoom(iVar1), iVar3 == param_1))
    break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  return iVar1;
}


//// FUNCTION FUN_005b5d80 @ 005b5d80 ////

void __fastcall FUN_005b5d80(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char local_18 [4];
  int local_14;
  int local_10;
  int local_c [3];
  
  local_10 = param_1;
  local_c[0] = FUN_005a76b0(*(void **)(param_1 + 0x1f8),1,0);
  local_c[1] = FUN_005a76b0(*(void **)(param_1 + 0x1f8),2,0);
  local_c[2] = FUN_005a76b0(*(void **)(param_1 + 0x1f8),3,0);
  local_14 = *(int *)(param_1 + 0xac);
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  if (local_14 != param_1 + 0xb8) {
    do {
      iVar4 = *(int *)(local_14 + 8);
      if ((iVar4 != 0) && (iVar1 = FUN_004de100(iVar4), iVar1 != 0)) {
        iVar1 = FUN_004de100(iVar4);
        iVar1 = *(int *)(iVar1 + 8);
        iVar2 = FUN_004de100(iVar4);
        if (iVar1 != iVar2 + 0x14) {
          do {
            iVar2 = *(int *)(iVar1 + 8);
            if (iVar2 != 0) {
              iVar5 = 0;
              do {
                iVar3 = FUN_0048c9f0(iVar2);
                if (local_c[iVar5] == iVar3) {
                  local_18[iVar5] = '\x01';
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < 3);
            }
            iVar1 = *(int *)(iVar1 + 4);
            iVar2 = FUN_004de100(iVar4);
            param_1 = local_10;
          } while (iVar1 != iVar2 + 0x14);
        }
      }
    } while ((((local_18[0] == '\0') || (local_18[1] == '\0')) || (local_18[2] == '\0')) &&
            (local_14 = *(int *)(local_14 + 4), local_14 != param_1 + 0xb8));
  }
  local_14 = 0;
  do {
    if ((local_18[local_14] == '\0') && (iVar4 = *(int *)(param_1 + 0xac), iVar4 != param_1 + 0xb8))
    {
      do {
        iVar1 = *(int *)(iVar4 + 8);
        if ((iVar1 != 0) && (iVar2 = FUN_004de100(iVar1), iVar2 != 0)) {
          iVar2 = FUN_004de100(iVar1);
          iVar2 = *(int *)(iVar2 + 8);
          iVar5 = FUN_004de100(iVar1);
          if (iVar2 != iVar5 + 0x14) {
            do {
              this = *(void **)(iVar2 + 8);
              if ((this != (void *)0x0) && (iVar5 = FUN_0048c9f0((int)this), iVar5 == 0)) {
                FUN_0048dfe0(this,local_c[local_14]);
                break;
              }
              iVar2 = *(int *)(iVar2 + 4);
              iVar5 = FUN_004de100(iVar1);
            } while (iVar2 != iVar5 + 0x14);
          }
        }
        iVar4 = *(int *)(iVar4 + 4);
        param_1 = local_10;
      } while (iVar4 != local_10 + 0xb8);
    }
    local_14 = local_14 + 1;
    if (2 < local_14) {
      return;
    }
  } while( true );
}


//// FUNCTION FUN_005b5f40 @ 005b5f40 ////

/* WARNING: Removing unreachable block (ram,0x005b606a) */

void __thiscall FUN_005b5f40(void *this,int param_1,int *param_2)

{
  int iVar1;
  void *this_00;
  char cVar2;
  int iVar3;
  void *this_01;
  undefined4 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte abStack_7c [12];
  undefined4 uStack_70;
  undefined4 *puStack_6c;
  void **ppvVar8;
  char local_40 [20];
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5ce0;
  iVar1 = *(int *)((int)this + 0xac);
  ppvVar8 = &local_c;
  local_c = ExceptionList;
  do {
    ExceptionList = ppvVar8;
    if (iVar1 == (int)this + 0xb8) {
      ExceptionList = local_c;
      return;
    }
    this_00 = *(void **)(iVar1 + 8);
    if ((((this_00 != (void *)0x0) && (iVar3 = FUN_004df220((int)this_00), iVar3 == param_1)) &&
        (iVar3 = FUN_004df4a0((int)this_00), iVar3 != 0)) && (*(int *)((int)this_00 + 0x1c0) == 0))
    {
      local_40[0] = '\0';
      ppvVar8 = local_2c;
      local_4 = 0;
      puStack_6c = (undefined4 *)0x5b5fe2;
      this_01 = (void *)FUN_004df4a0((int)this_00);
      puStack_6c = (undefined4 *)0x5b5fe9;
      puStack_6c = FUN_004b63b0(this_01,ppvVar8);
      local_4._0_1_ = 1;
      uStack_70 = 0x5b5ffe;
      cVar2 = (**(code **)(*param_2 + 0x1d4))();
      local_4 = (uint)local_4._1_3_ << 8;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        puStack_6c = (undefined4 *)&UNK_005b6016;
        _free(local_2c[0]);
      }
      if (cVar2 != '\0') {
        pbVar5 = abStack_7c;
        abStack_7c[0] = 0;
        uVar6 = 0;
        uVar7 = 0x14;
        FUN_004015d0(&stack0xffffff78,local_40,0);
        puVar4 = FUN_004bc270(pbVar5,uVar6,uVar7);
        if (puVar4 != (undefined4 *)0x0) {
          puStack_6c = (undefined4 *)0x5b605c;
          FUN_004e9820(this_00,puVar4);
        }
      }
      local_4 = 0xffffffff;
    }
    iVar1 = *(int *)(iVar1 + 4);
    ppvVar8 = ExceptionList;
  } while( true );
}


//// FUNCTION FUN_005b60b0 @ 005b60b0 ////

ushort __fastcall FUN_005b60b0(int param_1)

{
  int iVar1;
  ushort in_AX;
  
  iVar1 = *(int *)(param_1 + 0xac);
  while( true ) {
    if (iVar1 == param_1 + 0xb8) {
      return in_AX & 0xff00;
    }
    in_AX = FUN_004e0fd0(*(float *)(iVar1 + 8));
    if ((char)in_AX != '\0') break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return CONCAT11((char)(in_AX >> 8),1);
}


//// FUNCTION FUN_005b60f0 @ 005b60f0 ////

void __thiscall FUN_005b60f0(void *this,float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  iVar6 = *(int *)((int)this + 0xac);
  local_8 = (int)this + 0xb8;
  local_c = 0.0;
  if (iVar6 != local_8) {
    do {
      iVar2 = FUN_004de100(*(int *)(iVar6 + 8));
      iVar2 = *(int *)(iVar2 + 8);
      iVar3 = FUN_004de100(*(int *)(iVar6 + 8));
      for (; iVar2 != iVar3 + 0x14; iVar2 = *(int *)(iVar2 + 4)) {
        iVar4 = FUN_0048c9f0(*(int *)(iVar2 + 8));
        if (iVar4 == iVar1) {
          pfVar5 = (float *)FUN_0048c9e0(*(void **)(iVar2 + 8),&param_2);
          if (local_c <= *pfVar5) {
            pfVar5 = (float *)FUN_0048c9e0(*(void **)(iVar2 + 8),&local_4);
          }
          else {
            pfVar5 = &local_c;
          }
          local_c = *pfVar5;
        }
      }
      iVar6 = *(int *)(iVar6 + 4);
    } while (iVar6 != local_8);
  }
  *param_1 = local_c;
  return;
}


//// FUNCTION FUN_005b62a0 @ 005b62a0 ////

void __fastcall FUN_005b62a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29d00;
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


//// FUNCTION FUN_005b6340 @ 005b6340 ////

void __fastcall FUN_005b6340(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29d10;
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


//// FUNCTION FUN_005b63d0 @ 005b63d0 ////

void __fastcall FUN_005b63d0(int param_1)

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


//// FUNCTION FUN_005b6400 @ 005b6400 ////

void __fastcall FUN_005b6400(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d29d20;
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


//// FUNCTION FUN_005b64a0 @ 005b64a0 ////

void __fastcall FUN_005b64a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29d30;
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


//// FUNCTION FUN_005b6510 @ 005b6510 ////

void __fastcall FUN_005b6510(int param_1)

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


//// FUNCTION FUN_005b6540 @ 005b6540 ////

void __fastcall FUN_005b6540(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d29d40;
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


//// FUNCTION FUN_005b65e0 @ 005b65e0 ////

void __fastcall FUN_005b65e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29d50;
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


//// FUNCTION FUN_005b6680 @ 005b6680 ////

void __fastcall FUN_005b6680(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29d60;
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


//// FUNCTION FUN_005b6730 @ 005b6730 ////

void __fastcall FUN_005b6730(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d29c94;
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


//// FUNCTION FUN_005b68d0 @ 005b68d0 ////

void __cdecl FUN_005b68d0(int *param_1,int *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005b69f0 @ 005b69f0 ////

undefined4 * __thiscall FUN_005b69f0(void *this,byte param_1)

{
  FUN_005b6730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005b6a10 @ 005b6a10 ////

undefined4 * __thiscall FUN_005b6a10(void *this,byte param_1)

{
  FUN_005b3810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005b6a30 @ 005b6a30 ////

void __fastcall FUN_005b6a30(int *param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  param_1[0xa5] = param_1[0xa5] & 0xfffffffe;
  if (((int *)param_1[0x8a] != (int *)0x0) && ((char)param_1[0xd9] == '\0')) {
    iVar2 = (**(code **)(*(int *)param_1[0x8a] + 0x24))();
    if ((iVar2 == 7) || (param_1[0xb9] != 0)) {
      iVar2 = (**(code **)(*(int *)param_1[0x8a] + 0x24))();
      if ((iVar2 == 6) && ((int *)param_1[0xb9] != (int *)0x0)) {
        iVar2 = (**(code **)(*(int *)param_1[0xb9] + 0x28))();
        if (iVar2 == 0) {
          (**(code **)(*(int *)param_1[0xb9] + 0xc))();
        }
      }
    }
    else {
      iVar2 = FUN_00795a50((int)param_1);
      (**(code **)(param_1[0xb4] + 4))();
      param_1[0xb9] = iVar2;
      (**(code **)param_1[0xb4])();
    }
    (**(code **)(*(int *)param_1[0x8a] + 0x10))();
  }
  (**(code **)(*param_1 + 0x18))();
  uVar3 = FUN_005cc0a0(param_1[0x109]);
  if (((char)uVar3 != '\0') && (param_1[0xe8] != 0)) {
    uVar3 = FUN_005ccce0(param_1[0xe8]);
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_005cc240(param_1[0x109]);
      if ((char)uVar3 != '\0') goto LAB_005b6b5c;
    }
    piVar1 = (int *)param_1[0x90];
    puVar7 = auStack_10;
    puVar4 = (uint *)(**(code **)(*piVar1 + 0x3c))();
    puVar6 = auStack_c;
    puVar5 = (uint *)(**(code **)(*piVar1 + 0x38))();
    iVar2 = puVar4[1] + puVar5[1] + (uint)CARRY4(*puVar4,*puVar5);
    uVar3 = 0x5b6b40;
    FUN_00471b10((longlong *)&stack0xffffffd4);
    this = (void *)param_1[0x109];
    FUN_005cd100((void *)param_1[0xe8],(longlong *)&stack0xffffffd0);
    FUN_005cc8f0(this,(float)puVar6,uVar3,CONCAT44(puVar7,iVar2));
  }
LAB_005b6b5c:
  if ((char)param_1[0x103] != '\0') {
    if ((int *)param_1[0x84] != (int *)0x0) {
      FUN_0053ae70((int *)param_1[0x84]);
    }
    FUN_005b1080(param_1);
  }
  FUN_005b59c0(param_1);
  return;
}


//// FUNCTION FUN_005b6b90 @ 005b6b90 ////

int __fastcall FUN_005b6b90(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float local_8;
  
  iVar2 = *(int *)(param_1 + 0x1ac);
  local_8 = 0.0;
  iVar1 = FUN_00449b50(iVar2);
  pfVar3 = *(float **)(param_1 + 0x114);
  iVar4 = 0;
  if (pfVar3 != *(float **)(param_1 + 0x118)) {
    do {
      if ((local_8 < *pfVar3) || ((*pfVar3 == local_8 && (iVar4 == iVar1 + -1)))) {
        local_8 = *pfVar3;
        iVar2 = FUN_0044a5e0(iVar4 + 1);
      }
      pfVar3 = pfVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (pfVar3 != *(float **)(param_1 + 0x118));
  }
  return iVar2;
}


//// FUNCTION FUN_005b6c20 @ 005b6c20 ////

undefined4 * __thiscall FUN_005b6c20(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00449b50(param_2);
  if (0 < iVar1) {
    if (*(int *)((int)this + 0x114) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x118) - *(int *)((int)this + 0x114) >> 2;
    }
    iVar2 = FUN_00449b50(param_2);
    if (iVar2 <= iVar1) {
      iVar1 = FUN_00449b50(param_2);
      FUN_00407070(param_1,*(float *)(*(int *)((int)this + 0x114) + (iVar1 + -1) * 4));
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_005b6c90 @ 005b6c90 ////

void __thiscall FUN_005b6c90(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != *(int *)((int)this + 0x1c8)) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x228) + 0x24))();
    if (((iVar1 != 7) && (uVar2 = FUN_005b3c00((int)this), (char)uVar2 == '\0')) &&
       (iVar1 = (**(code **)(**(int **)((int)this + 0x228) + 0x24))(), iVar1 != 6)) {
      if ((param_1 == 0) && (*(int *)((int)this + 0x1c8) != 0)) {
        FUN_005b5750(this,*(int *)((int)this + 0x1c8));
      }
      for (iVar1 = *(int *)((int)this + 0xac); iVar1 != (int)this + 0xb8;
          iVar1 = *(int *)(iVar1 + 4)) {
        if (*(int *)(iVar1 + 8) != 0) {
          FUN_004df130(*(int *)(iVar1 + 8));
        }
      }
      *(undefined4 *)((int)this + 0x2c4) = 0;
      if ((DAT_0104a974 != 0) && (0.0 < *(float *)(DAT_0104a974 + 0x6c))) {
        *(undefined4 *)((int)this + 0x2c4) = 0x3f800000;
      }
    }
    (**(code **)(*(int *)((int)this + 0x1b4) + 4))();
    *(int *)((int)this + 0x1c8) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x1b4))();
  }
  return;
}


//// FUNCTION FUN_005b6d70 @ 005b6d70 ////

void __thiscall FUN_005b6d70(void *this,float *param_1)

{
  float *pfVar1;
  float10 fVar2;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = *(float *)((int)this + 0x290);
  fVar2 = FUN_0043b710(&local_10);
  if ((float10)0.0 == fVar2) {
    local_10 = DAT_00e4fa4c;
    *(uint *)((int)this + 0x294) = *(uint *)((int)this + 0x294) | 1;
    pfVar1 = (float *)FUN_005b3d70(this,&local_c);
    FUN_0043b5e0(&local_10,pfVar1);
    pfVar1 = (float *)FUN_005b4030(this,&local_8);
    FUN_0043b5e0(&local_10,pfVar1);
    pfVar1 = (float *)FUN_005b3fc0(this,&local_4);
    FUN_0043b5e0(&local_10,pfVar1);
    *param_1 = local_10;
    return;
  }
  *param_1 = local_10;
  return;
}


//// FUNCTION FUN_005b6e20 @ 005b6e20 ////

int __fastcall FUN_005b6e20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  iVar4 = 0;
  if (iVar1 == 0) {
    return 0;
  }
  iVar5 = *(int *)(iVar1 + 100);
  if (iVar5 == *(int *)(iVar1 + 0x68)) {
    return 0;
  }
  do {
    iVar1 = *(int *)(iVar5 + 0x14);
    if (((iVar1 != 0) && (iVar2 = FUN_005a6470(iVar1), iVar2 != 0)) &&
       (uVar3 = FUN_005a6140(iVar1), (char)uVar3 != '\0')) {
      iVar4 = iVar4 + 1;
    }
    iVar5 = iVar5 + 0x18;
  } while (iVar5 != *(int *)(*(int *)(param_1 + 0x1f8) + 0x68));
  return iVar4;
}


//// FUNCTION FUN_005b6e80 @ 005b6e80 ////

int __fastcall FUN_005b6e80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  iVar3 = 0;
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = *(int *)(iVar1 + 100);
  if (iVar4 == *(int *)(iVar1 + 0x68)) {
    return 0;
  }
  do {
    iVar1 = *(int *)(iVar4 + 0x14);
    if (((iVar1 != 0) && (iVar2 = FUN_005a6470(iVar1), iVar2 != 0)) && (*(int *)(iVar1 + 0x88) == 0)
       ) {
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 0x18;
  } while (iVar4 != *(int *)(*(int *)(param_1 + 0x1f8) + 0x68));
  return iVar3;
}


//// FUNCTION FUN_005b6ee0 @ 005b6ee0 ////

int * __thiscall FUN_005b6ee0(void *this,float *param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  int *local_14;
  float local_10;
  undefined1 auStack_c [12];
  
  iVar6 = *(int *)((int)this + 0x134);
  local_14 = (int *)0x0;
  local_10 = 0.0;
  if (iVar6 == *(int *)((int)this + 0x138)) {
    return (int *)0x0;
  }
  do {
    piVar1 = *(int **)(iVar6 + 0x14);
    piVar3 = local_14;
    fVar2 = local_10;
    if ((piVar1 != (int *)0x0) && (cVar4 = (**(code **)(*piVar1 + 0x1c0))(0,this), cVar4 != '\0')) {
      if (param_1 == (float *)0x0) {
        return piVar1;
      }
      pfVar5 = (float *)(**(code **)(*piVar1 + 0x34))(auStack_c);
      fVar2 = (*param_1 - *pfVar5) * (*param_1 - *pfVar5) +
              (param_1[1] - pfVar5[1]) * (param_1[1] - pfVar5[1]) +
              (param_1[2] - pfVar5[2]) * (param_1[2] - pfVar5[2]);
      piVar3 = piVar1;
      if ((local_14 != (int *)0x0) && (local_10 <= fVar2)) {
        piVar3 = local_14;
        fVar2 = local_10;
      }
    }
    local_10 = fVar2;
    local_14 = piVar3;
    iVar6 = iVar6 + 0x18;
  } while (iVar6 != *(int *)((int)this + 0x138));
  return local_14;
}


//// FUNCTION FUN_005b6fb0 @ 005b6fb0 ////

void __fastcall FUN_005b6fb0(int param_1)

{
  void *this;
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x360) = 0;
  if (*(int *)(param_1 + 0x348) != 0) {
    local_8 = (float)*(int *)(param_1 + 0x35c);
    if (*(int *)(param_1 + 0x35c) < 0) {
      local_8 = local_8 + 4.2949673e+09;
    }
    local_8 = local_8 * 0.1;
    FUN_005d7310();
    pfVar2 = (float *)FUN_005d7980(*(void **)(param_1 + 0x348),&local_8);
    fVar7 = (float10)FUN_00ace9b0();
    fVar7 = ((float10)1.0 - fVar7) * (float10)*pfVar2 * (float10)0.25 +
            (float10)*(float *)(param_1 + 0x360);
    if ((float10)0.0 <= fVar7) {
      if ((float10)1.0 < fVar7) {
        fVar7 = (float10)1.0;
      }
    }
    else {
      fVar7 = (float10)0.0;
    }
    *(float *)(param_1 + 0x360) = (float)fVar7;
  }
  iVar6 = *(int *)(param_1 + 0x350);
  iVar5 = 0;
  if (iVar6 != *(int *)(param_1 + 0x354)) {
    do {
      iVar4 = *(int *)(iVar6 + 0x14);
      if ((iVar4 != 0) && (iVar3 = FUN_005d7990(iVar4), iVar3 != 0)) {
        iVar3 = FUN_005d7990(iVar4);
        iVar3 = FUN_004df4a0(iVar3);
        if (iVar3 != 0) {
          iVar4 = FUN_005d7990(iVar4);
          iVar4 = FUN_004df4a0(iVar4);
          iVar4 = FUN_004b4a60(iVar4);
          iVar5 = iVar5 + iVar4;
        }
      }
      iVar6 = iVar6 + 0x18;
    } while (iVar6 != *(int *)(param_1 + 0x354));
  }
  iVar6 = *(int *)(param_1 + 0x350);
  local_c = 0.0;
  if (iVar6 != *(int *)(param_1 + 0x354)) {
    do {
      this = *(void **)(iVar6 + 0x14);
      if ((this != (void *)0x0) && (iVar4 = FUN_005d7990((int)this), iVar4 != 0)) {
        iVar4 = FUN_005d7990((int)this);
        iVar4 = FUN_004df4a0(iVar4);
        if (iVar4 != 0) {
          iVar4 = FUN_005d7990((int)this);
          iVar4 = FUN_004df4a0(iVar4);
          iVar4 = FUN_004b4a60(iVar4);
          local_8 = (float)iVar5;
          if (iVar5 < 0) {
            local_8 = local_8 + 4.2949673e+09;
          }
          local_8 = (float)iVar4 / local_8;
          pfVar2 = (float *)FUN_005d7980(this,&local_4);
          local_c = local_8 * *pfVar2 + local_c;
        }
      }
      iVar6 = iVar6 + 0x18;
    } while (iVar6 != *(int *)(param_1 + 0x354));
  }
  fVar1 = local_c * 0.75 + *(float *)(param_1 + 0x360);
  if (0.0 <= fVar1) {
    if (fVar1 <= 1.0) {
      *(float *)(param_1 + 0x360) = fVar1;
      return;
    }
    *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x360) = 0;
  return;
}


//// FUNCTION CCinema_GatherPlayerProjectSignText @ 005b7200 ////

void __fastcall CCinema_GatherPlayerProjectSignText(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_104;
  undefined2 *local_100;
  undefined2 *local_fc;
  undefined2 *local_f8;
  wchar_t *local_f4;
  void *local_ec [2];
  uint local_e4;
  wchar_t *local_cc;
  undefined4 local_c8;
  uint local_c4;
  wchar_t local_c0 [10];
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb5d19;
  pvStack_c = ExceptionList;
  local_cc = local_c0;
  local_f4 = (wchar_t *)0x0;
  local_fc = (undefined2 *)0x0;
  local_f8 = (undefined2 *)0x0;
  local_100 = (undefined2 *)0x0;
  local_c0[0] = L'\0';
  local_c8 = 0;
  local_c4 = 10;
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 10;
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 10;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  puVar2 = FUN_0045f620(param_1,local_ec);
  if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec[0]);
  }
  if (puVar2[1] != 0) {
    puVar2 = FUN_0045f620(param_1,local_ec);
    FUN_004036d0(&local_cc,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ec[0]);
    }
    local_f4 = local_cc;
  }
  piVar5 = *(int **)((int)param_1 + 0x1c8);
  if (piVar5 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar5 + 0x5c))(local_ec);
    if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ec[0]);
    }
    if (*(int *)(iVar3 + 4) != 0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(local_ec);
      FUN_004036d0(&local_8c,(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec[0]);
      }
      local_fc = local_8c;
    }
  }
  iVar3 = *(int *)((int)param_1 + 0x1f8);
  local_104 = 0;
  if ((iVar3 != 0) && (iVar6 = *(int *)(iVar3 + 100), iVar6 != *(int *)(iVar3 + 0x68))) {
    do {
      if (1 < local_104) break;
      iVar1 = *(int *)(iVar6 + 0x14);
      if ((iVar1 != 0) && (iVar4 = FUN_005a6470(iVar1), iVar4 != 0)) {
        piVar5 = (int *)FUN_005a6470(iVar1);
        iVar4 = (**(code **)(*piVar5 + 0x5c))(local_ec);
        if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ec[0]);
        }
        if (*(int *)(iVar4 + 4) != 0) {
          if (local_104 == 0) {
            piVar5 = (int *)FUN_005a6470(iVar1);
            puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(apvStack_2c);
            FUN_004036d0(&local_ac,(wchar_t *)*puVar2,puVar2[1]);
            if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_2c[0]);
            }
            local_f8 = local_ac;
          }
          else {
            piVar5 = (int *)FUN_005a6470(iVar1);
            puVar2 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(apvStack_4c);
            FUN_004036d0(&local_6c,(wchar_t *)*puVar2,puVar2[1]);
            if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_4c[0]);
            }
            local_100 = local_6c;
          }
        }
      }
      local_104 = local_104 + 1;
      iVar6 = iVar6 + 0x18;
    } while (iVar6 != *(int *)(iVar3 + 0x68));
  }
  CCinema_BuildAndApplySignTexture(local_f4,local_fc,local_f8,(int)local_100);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if (local_c4 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_cc);
}


//// FUNCTION FUN_005b7570 @ 005b7570 ////

float10 __thiscall FUN_005b7570(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float local_8;
  int local_4;
  
  fVar1 = param_2;
  iVar3 = 0;
  local_8 = 0.0;
  local_4 = 0;
  if (*(void **)(param_1 + 0x348) != (void *)0x0) {
    param_2 = 0.0;
    uVar2 = FUN_005d8f80(*(void **)(param_1 + 0x348),(int)fVar1,&param_2);
    if ((char)uVar2 != '\0') {
      iVar3 = 1;
      local_8 = param_2;
      local_4 = 1;
    }
  }
  iVar4 = *(int *)(param_1 + 0x350);
  if (iVar4 != *(int *)(param_1 + 0x354)) {
    do {
      param_2 = 0.0;
      uVar2 = FUN_005d8f80(*(void **)(iVar4 + 0x14),(int)fVar1,&param_2);
      if ((char)uVar2 != '\0') {
        iVar3 = iVar3 + 1;
        local_8 = param_2 + local_8;
      }
      iVar4 = iVar4 + 0x18;
      local_4 = iVar3;
    } while (iVar4 != *(int *)(param_1 + 0x354));
  }
  if (iVar3 == 0) {
    return (float10)local_8;
  }
  return (float10)local_8 / (float10)local_4;
}


//// FUNCTION FUN_005b7620 @ 005b7620 ////

undefined4 __thiscall FUN_005b7620(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(void **)((int)this + 0x348) != (void *)0x0) {
    iVar1 = FUN_005d8fc0(*(void **)((int)this + 0x348),param_1);
    if (iVar1 != 0) {
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  uVar2 = *(uint *)((int)this + 0x354);
  uVar3 = *(uint *)((int)this + 0x350);
  if (uVar3 != uVar2) {
    do {
      iVar1 = FUN_005d8fc0(*(void **)(uVar3 + 0x14),param_1);
      if (iVar1 != 0) {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      uVar2 = *(uint *)((int)this + 0x354);
      uVar3 = uVar3 + 0x18;
    } while (uVar3 != uVar2);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_005b7680 @ 005b7680 ////

undefined4 * __thiscall FUN_005b7680(void *this,undefined4 *param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  undefined1 local_90 [4];
  undefined **local_8c;
  int local_88;
  int *local_84;
  undefined4 local_78;
  undefined1 local_64 [4];
  undefined **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_4c;
  float local_38 [11];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5d4b;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  pvVar2 = FUN_00857d80(local_64);
  local_4 = 0;
  pfVar3 = FUN_00857ae0(pvVar2,(float)this);
  FUN_00500630(local_38,pfVar3);
  local_4._0_1_ = 2;
  local_60 = &PTR_FUN_00d1aed0;
  if (local_58 != (int *)0x0) {
    *local_58 = local_5c;
  }
  if (local_5c != 0) {
    *(int **)(local_5c + 4) = local_58;
  }
  local_4c = 0;
  local_5c = 0;
  local_58 = (int *)0x0;
  while( true ) {
    pvVar2 = FUN_00857bd0(local_90);
    local_4._0_1_ = 3;
    bVar1 = FUN_00856dd0(local_38,(int)pvVar2);
    local_4._0_1_ = 2;
    local_8c = &PTR_FUN_00d1aed0;
    if (local_84 != (int *)0x0) {
      *local_84 = local_88;
    }
    if (local_88 != 0) {
      *(int **)(local_88 + 4) = local_84;
    }
    local_78 = 0;
    local_88 = 0;
    local_84 = (int *)0x0;
    if (!bVar1) break;
    iVar4 = iVar4 + 1;
    FUN_00857260(local_38);
  }
  if (iVar4 < 1) {
    *param_1 = 0;
  }
  else {
    *param_1 = 0x3f800000;
  }
  FUN_005005e0((int)local_38);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005b77a0 @ 005b77a0 ////

int __fastcall FUN_005b77a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *this;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int local_10;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x1f8) + 100);
  local_10 = 0;
  if (iVar7 == *(int *)(*(int *)(param_1 + 0x1f8) + 0x68)) {
    return 0;
  }
  do {
    iVar1 = *(int *)(iVar7 + 0x14);
    if (iVar1 != 0) {
      iVar9 = *(int *)(param_1 + 0xac);
      pvVar8 = (void *)0x0;
      if (iVar9 != param_1 + 0xb8) {
        do {
          iVar2 = *(int *)(iVar9 + 8);
          if ((iVar2 != 0) && (iVar3 = FUN_004de100(iVar2), iVar3 != 0)) {
            iVar3 = FUN_004de100(iVar2);
            iVar3 = *(int *)(iVar3 + 8);
            iVar4 = FUN_004de100(iVar2);
            if (iVar3 != iVar4 + 0x14) {
              do {
                iVar4 = *(int *)(iVar3 + 8);
                if ((iVar4 != 0) && (iVar5 = FUN_0048c9f0(iVar4), iVar5 == iVar1)) {
                  if (pvVar8 != (void *)0x0) {
                    this = (void *)FUN_0048e140(iVar4);
                    uVar6 = FUN_00430dd0(this,pvVar8);
                    if ((char)uVar6 == '\0') {
                      local_10 = local_10 + 1;
                    }
                  }
                  pvVar8 = (void *)FUN_0048e140(iVar4);
                }
                iVar3 = *(int *)(iVar3 + 4);
                iVar4 = FUN_004de100(iVar2);
              } while (iVar3 != iVar4 + 0x14);
            }
          }
          iVar9 = *(int *)(iVar9 + 4);
        } while (iVar9 != param_1 + 0xb8);
      }
    }
    iVar7 = iVar7 + 0x18;
  } while (iVar7 != *(int *)(*(int *)(param_1 + 0x1f8) + 0x68));
  return local_10;
}


//// FUNCTION FUN_005b78d0 @ 005b78d0 ////

int __fastcall FUN_005b78d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1f8) + 100);
  iVar2 = 0;
  if (iVar3 != *(int *)(*(int *)(param_1 + 0x1f8) + 0x68)) {
    do {
      uVar1 = FUN_005a6140(*(int *)(iVar3 + 0x14));
      if ((char)uVar1 != '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(*(int *)(param_1 + 0x1f8) + 0x68));
  }
  return iVar2;
}


//// FUNCTION FUN_005b7910 @ 005b7910 ////

int __fastcall FUN_005b7910(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1f8) + 100);
  iVar2 = 0;
  if (iVar3 != *(int *)(*(int *)(param_1 + 0x1f8) + 0x68)) {
    do {
      iVar1 = FUN_005a6130(*(int *)(iVar3 + 0x14));
      if (iVar1 == 0) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(*(int *)(param_1 + 0x1f8) + 0x68));
  }
  return iVar2;
}


//// FUNCTION FUN_005b7950 @ 005b7950 ////

void __thiscall FUN_005b7950(void *this,float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int local_8;
  float local_4;
  
  iVar1 = param_2;
  local_4 = 0.0;
  local_8 = 0;
  if ((*(void **)((int)this + 0x348) != (void *)0x0) &&
     (iVar2 = FUN_005d8fc0(*(void **)((int)this + 0x348),param_2), iVar2 != 0)) {
    piVar6 = &param_2;
    pvVar3 = (void *)FUN_005d8fc0(*(void **)((int)this + 0x348),iVar1);
    pfVar4 = (float *)FUN_005d7590(pvVar3,piVar6);
    local_4 = *pfVar4;
    local_8 = 1;
  }
  iVar2 = *(int *)((int)this + 0x350);
  if (iVar2 != *(int *)((int)this + 0x354)) {
    do {
      pvVar3 = *(void **)(iVar2 + 0x14);
      if ((pvVar3 != (void *)0x0) && (iVar5 = FUN_005d8fc0(pvVar3,iVar1), iVar5 != 0)) {
        piVar6 = &param_2;
        pvVar3 = (void *)FUN_005d8fc0(pvVar3,iVar1);
        pfVar4 = (float *)FUN_005d7590(pvVar3,piVar6);
        local_4 = local_4 + *pfVar4;
        local_8 = local_8 + 1;
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)((int)this + 0x354));
  }
  local_4 = local_4 / (float)local_8;
  if (0.0 <= local_4) {
    if (1.0 < local_4) {
      local_4 = 1.0;
    }
    *param_1 = local_4;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_005b7a50 @ 005b7a50 ////

void __thiscall FUN_005b7a50(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_c;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_c = 0;
  iVar4 = FUN_004de100(param_1);
  iVar4 = *(int *)(iVar4 + 8);
  iVar5 = FUN_004de100(param_1);
  param_1 = iVar4;
  if (iVar4 != iVar5 + 0x14) {
    do {
      pvVar1 = *(void **)(param_1 + 8);
      iVar4 = FUN_0048c9f0((int)pvVar1);
      if ((((iVar4 == 0) && (cVar3 = FUN_0048c730((int)pvVar1), cVar3 != '\0')) &&
          (*(int *)((int)pvVar1 + 0x7c) != 2)) &&
         ((pfVar6 = (float *)FUN_0048c9e0(pvVar1,&local_4), 0.0 < *pfVar6 &&
          (iVar4 = *(int *)(*(int *)((int)this + 0x1f8) + 100),
          iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68))))) {
        do {
          iVar5 = *(int *)(iVar4 + 0x14);
          if (((iVar5 != 0) &&
              ((uVar7 = FUN_005a6140(iVar5), (char)uVar7 != '\0' &&
               (iVar8 = FUN_005a64e0(iVar5), iVar8 != 0)))) &&
             (uVar7 = FUN_0048cc00(pvVar1,*(int *)(iVar5 + 0x90)), (char)uVar7 != '\0')) {
            iVar8 = FUN_004de100(iVar2);
            iVar8 = *(int *)(iVar8 + 8);
            iVar9 = FUN_004de100(iVar2);
            if (iVar8 == iVar9 + 0x14) {
LAB_005b7b71:
              if (*(int *)(iVar5 + 0x90) == 2) {
                *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)((int)pvVar1 + 0x7c);
              }
              FUN_0048dfe0(pvVar1,iVar5);
              break;
            }
            while (iVar9 = FUN_0048c9f0(*(int *)(iVar8 + 8)), iVar9 != iVar5) {
              iVar8 = *(int *)(iVar8 + 4);
              iVar9 = FUN_004de100(iVar2);
              if (iVar8 == iVar9 + 0x14) goto LAB_005b7b71;
            }
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
      }
      param_1 = *(int *)(param_1 + 4);
      iVar4 = FUN_004de100(iVar2);
    } while (param_1 != iVar4 + 0x14);
  }
  iVar4 = FUN_004de100(iVar2);
  param_1 = *(int *)(iVar4 + 8);
  iVar4 = FUN_004de100(iVar2);
  if (param_1 != iVar4 + 0x14) {
    do {
      pvVar1 = *(void **)(param_1 + 8);
      iVar4 = FUN_0048c9f0((int)pvVar1);
      if ((((iVar4 == 0) && (cVar3 = FUN_0048c730((int)pvVar1), cVar3 != '\0')) &&
          (*(int *)((int)pvVar1 + 0x7c) != 2)) &&
         (iVar4 = *(int *)(*(int *)((int)this + 0x1f8) + 100),
         iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68))) {
        do {
          iVar5 = *(int *)(iVar4 + 0x14);
          if (((iVar5 != 0) && (uVar7 = FUN_005a6140(iVar5), (char)uVar7 != '\0')) &&
             (uVar7 = FUN_0048cc00(pvVar1,*(int *)(iVar5 + 0x90)), (char)uVar7 != '\0')) {
            iVar8 = FUN_004de100(iVar2);
            iVar8 = *(int *)(iVar8 + 8);
            iVar9 = FUN_004de100(iVar2);
            if (iVar8 == iVar9 + 0x14) {
LAB_005b7c91:
              if (*(int *)(iVar5 + 0x90) == 2) {
                *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)((int)pvVar1 + 0x7c);
              }
              FUN_0048dfe0(pvVar1,iVar5);
              break;
            }
            while (iVar9 = FUN_0048c9f0(*(int *)(iVar8 + 8)), iVar9 != iVar5) {
              iVar8 = *(int *)(iVar8 + 4);
              iVar9 = FUN_004de100(iVar2);
              if (iVar8 == iVar9 + 0x14) goto LAB_005b7c91;
            }
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
      }
      param_1 = *(int *)(param_1 + 4);
      iVar4 = FUN_004de100(iVar2);
    } while (param_1 != iVar4 + 0x14);
  }
  iVar4 = FUN_004de100(iVar2);
  param_1 = *(int *)(iVar4 + 8);
  iVar4 = FUN_004de100(iVar2);
  if (param_1 != iVar4 + 0x14) {
    do {
      pvVar1 = *(void **)(param_1 + 8);
      iVar4 = FUN_0048c9f0((int)pvVar1);
      if (((iVar4 == 0) && (cVar3 = FUN_0048c730((int)pvVar1), cVar3 != '\0')) &&
         ((pfVar6 = (float *)FUN_0048c9e0(pvVar1,&local_4), 0.0 < *pfVar6 &&
          (iVar4 = *(int *)(*(int *)((int)this + 0x1f8) + 100),
          iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68))))) {
        do {
          iVar5 = *(int *)(iVar4 + 0x14);
          if ((((iVar5 != 0) && (uVar7 = FUN_005a6140(iVar5), (char)uVar7 != '\0')) &&
              (iVar8 = FUN_005a64e0(iVar5), iVar8 != 0)) &&
             (uVar7 = FUN_0048cc00(pvVar1,*(int *)(iVar5 + 0x90)), (char)uVar7 != '\0')) {
            iVar8 = FUN_004de100(iVar2);
            iVar8 = *(int *)(iVar8 + 8);
            iVar9 = FUN_004de100(iVar2);
            if (iVar8 == iVar9 + 0x14) {
LAB_005b7dc8:
              FUN_0048dfe0(pvVar1,iVar5);
              break;
            }
            while (iVar9 = FUN_0048c9f0(*(int *)(iVar8 + 8)), iVar9 != iVar5) {
              iVar8 = *(int *)(iVar8 + 4);
              iVar9 = FUN_004de100(iVar2);
              if (iVar8 == iVar9 + 0x14) goto LAB_005b7dc8;
            }
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
      }
      param_1 = *(int *)(param_1 + 4);
      iVar4 = FUN_004de100(iVar2);
    } while (param_1 != iVar4 + 0x14);
  }
  iVar4 = FUN_004de100(iVar2);
  param_1 = *(int *)(iVar4 + 8);
  iVar4 = FUN_004de100(iVar2);
  if (param_1 != iVar4 + 0x14) {
    do {
      pvVar1 = *(void **)(param_1 + 8);
      iVar4 = FUN_0048c9f0((int)pvVar1);
      if (((iVar4 == 0) && (cVar3 = FUN_0048c730((int)pvVar1), cVar3 != '\0')) &&
         (iVar4 = *(int *)(*(int *)((int)this + 0x1f8) + 100),
         iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68))) {
        do {
          iVar5 = *(int *)(iVar4 + 0x14);
          if (((iVar5 != 0) && (uVar7 = FUN_005a6140(iVar5), (char)uVar7 != '\0')) &&
             (uVar7 = FUN_0048cc00(pvVar1,*(int *)(iVar5 + 0x90)), (char)uVar7 != '\0')) {
            iVar8 = FUN_004de100(iVar2);
            iVar8 = *(int *)(iVar8 + 8);
            iVar9 = FUN_004de100(iVar2);
            if (iVar8 == iVar9 + 0x14) {
LAB_005b7ec1:
              FUN_0048dfe0(pvVar1,iVar5);
              break;
            }
            while (iVar9 = FUN_0048c9f0(*(int *)(iVar8 + 8)), iVar9 != iVar5) {
              iVar8 = *(int *)(iVar8 + 4);
              iVar9 = FUN_004de100(iVar2);
              if (iVar8 == iVar9 + 0x14) goto LAB_005b7ec1;
            }
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
      }
      param_1 = *(int *)(param_1 + 4);
      iVar4 = FUN_004de100(iVar2);
    } while (param_1 != iVar4 + 0x14);
  }
  iVar4 = FUN_004de100(iVar2);
  param_1 = *(int *)(iVar4 + 8);
  iVar4 = FUN_004de100(iVar2);
  if (param_1 != iVar4 + 0x14) {
    do {
      pvVar1 = *(void **)(param_1 + 8);
      iVar4 = FUN_0048c9f0((int)pvVar1);
      if ((((iVar4 == 0) && (cVar3 = FUN_0048c730((int)pvVar1), cVar3 != '\0')) &&
          (pfVar6 = (float *)FUN_0048c9e0(pvVar1,&local_4), *pfVar6 == 0.0)) && (local_c < param_2))
      {
        iVar4 = *(int *)(*(int *)((int)this + 0x1f8) + 100);
        if (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68)) {
          do {
            iVar5 = *(int *)(iVar4 + 0x14);
            if ((iVar5 != 0) && (iVar8 = FUN_005a6130(iVar5), iVar8 == 0)) {
              iVar8 = FUN_005a6470(iVar5);
              if (iVar8 != 0) {
                iVar8 = FUN_005a6470(iVar5);
                uVar7 = FUN_0048cc00(pvVar1,*(int *)(iVar8 + 0x4a0));
                if ((char)uVar7 == '\0') goto LAB_005b8090;
              }
              iVar8 = FUN_004de100(iVar2);
              iVar8 = *(int *)(iVar8 + 8);
              iVar9 = FUN_004de100(iVar2);
              if (iVar8 == iVar9 + 0x14) {
LAB_005b8001:
                FUN_0048dfe0(pvVar1,iVar5);
                goto LAB_005b80c1;
              }
              while (iVar9 = FUN_0048c9f0(*(int *)(iVar8 + 8)), iVar9 != iVar5) {
                iVar8 = *(int *)(iVar8 + 4);
                iVar9 = FUN_004de100(iVar2);
                if (iVar8 == iVar9 + 0x14) goto LAB_005b8001;
              }
            }
LAB_005b8090:
            iVar4 = iVar4 + 0x18;
          } while (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
        }
        puVar10 = FUN_005a90f0(*(void **)((int)this + 0x1f8),0,0);
        FUN_0048dfe0(pvVar1,(int)puVar10);
LAB_005b80c1:
        local_c = local_c + 1;
      }
      param_1 = *(int *)(param_1 + 4);
      iVar4 = FUN_004de100(iVar2);
    } while (param_1 != iVar4 + 0x14);
  }
  iVar4 = FUN_004de100(iVar2);
  param_1 = *(int *)(iVar4 + 8);
  iVar4 = FUN_004de100(iVar2);
  if (param_1 != iVar4 + 0x14) {
    do {
      pvVar1 = *(void **)(param_1 + 8);
      iVar4 = FUN_0048c9f0((int)pvVar1);
      if (((iVar4 == 0) && (pfVar6 = (float *)FUN_0048c9e0(pvVar1,&local_4), *pfVar6 == 0.0)) &&
         (local_c < param_2)) {
        iVar4 = *(int *)(*(int *)((int)this + 0x1f8) + 100);
        if (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68)) {
          do {
            iVar5 = *(int *)(iVar4 + 0x14);
            if ((iVar5 != 0) && (iVar8 = FUN_005a6130(iVar5), iVar8 == 0)) {
              iVar8 = FUN_005a6470(iVar5);
              if (iVar8 != 0) {
                iVar8 = FUN_005a6470(iVar5);
                uVar7 = FUN_0048cc00(pvVar1,*(int *)(iVar8 + 0x4a0));
                if ((char)uVar7 == '\0') goto LAB_005b81dd;
              }
              iVar8 = FUN_004de100(iVar2);
              iVar8 = *(int *)(iVar8 + 8);
              iVar9 = FUN_004de100(iVar2);
              if (iVar8 == iVar9 + 0x14) {
LAB_005b81cd:
                FUN_0048dfe0(pvVar1,iVar5);
                goto LAB_005b820e;
              }
              while (iVar9 = FUN_0048c9f0(*(int *)(iVar8 + 8)), iVar9 != iVar5) {
                iVar8 = *(int *)(iVar8 + 4);
                iVar9 = FUN_004de100(iVar2);
                if (iVar8 == iVar9 + 0x14) goto LAB_005b81cd;
              }
            }
LAB_005b81dd:
            iVar4 = iVar4 + 0x18;
          } while (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
        }
        puVar10 = FUN_005a90f0(*(void **)((int)this + 0x1f8),0,0);
        FUN_0048dfe0(pvVar1,(int)puVar10);
LAB_005b820e:
        local_c = local_c + 1;
      }
      param_1 = *(int *)(param_1 + 4);
      iVar4 = FUN_004de100(iVar2);
    } while (param_1 != iVar4 + 0x14);
  }
  return;
}


//// FUNCTION FUN_005b8240 @ 005b8240 ////

void __thiscall FUN_005b8240(void *this,int param_1)

{
  void *this_00;
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = FUN_004de100(param_1);
  local_10 = *(int *)(iVar4 + 8);
  iVar4 = FUN_004de100(param_1);
  if (local_10 != iVar4 + 0x14) {
    do {
      this_00 = *(void **)(local_10 + 8);
      iVar4 = FUN_0048c9f0((int)this_00);
      if ((iVar4 == 0) && (cVar3 = FUN_0048c730((int)this_00), cVar3 != '\0')) {
        iVar4 = *(int *)(*(int *)((int)this + 0x1f8) + 100);
        if (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68)) {
          do {
            iVar1 = *(int *)(iVar4 + 0x14);
            if (iVar1 != 0) {
              iVar5 = FUN_005a6470(iVar1);
              if (iVar5 != 0) {
                iVar5 = FUN_005a6470(iVar1);
                uVar6 = FUN_0048cc00(this_00,*(int *)(iVar5 + 0x4a0));
                if ((char)uVar6 == '\0') goto LAB_005b8355;
              }
              bVar2 = true;
              iVar5 = FUN_004de100(param_1);
              iVar5 = *(int *)(iVar5 + 8);
              iVar7 = FUN_004de100(param_1);
              if (iVar5 != iVar7 + 0x14) {
                do {
                  iVar7 = FUN_0048c9f0(*(int *)(iVar5 + 8));
                  if (iVar7 == iVar1) {
                    bVar2 = false;
                    break;
                  }
                  iVar5 = *(int *)(iVar5 + 4);
                  iVar7 = FUN_004de100(param_1);
                } while (iVar5 != iVar7 + 0x14);
              }
              iVar5 = FUN_005a6130(iVar1);
              if (((iVar5 != 0) ||
                  (pfVar8 = (float *)FUN_0048c9e0(this_00,&local_8), *pfVar8 <= 0.0)) && (bVar2)) {
                FUN_0048dfe0(this_00,iVar1);
                goto LAB_005b83be;
              }
            }
LAB_005b8355:
            iVar4 = iVar4 + 0x18;
          } while (iVar4 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
        }
        pfVar8 = (float *)FUN_0048c9e0(this_00,&local_4);
        if (*pfVar8 <= 0.0) {
          puVar9 = FUN_005a90f0(*(void **)((int)this + 0x1f8),0,0);
        }
        else {
          puVar9 = *(undefined4 **)((int)this + 0x154);
        }
        FUN_0048dfe0(this_00,(int)puVar9);
      }
LAB_005b83be:
      local_10 = *(int *)(local_10 + 4);
      iVar4 = FUN_004de100(param_1);
    } while (local_10 != iVar4 + 0x14);
  }
  return;
}


//// FUNCTION FUN_005b83f0 @ 005b83f0 ////

void __fastcall FUN_005b83f0(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_c;
  
  iVar9 = *(int *)(*(int *)((int)param_1 + 0x1f8) + 100);
  if (iVar9 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68)) {
    do {
      pvVar1 = *(void **)(iVar9 + 0x14);
      if ((((pvVar1 != (void *)0x0) && (iVar6 = FUN_005a6470((int)pvVar1), iVar6 == 0)) &&
          (iVar6 = FUN_005a6130((int)pvVar1), iVar6 == 0)) &&
         (local_c = DAT_0104ced4, DAT_0104ced4 != &DAT_0104cee0)) {
        do {
          piVar2 = (int *)local_c[2];
          if ((piVar2 != (int *)0x0) && (piVar2[0x205] == 4)) {
            bVar4 = false;
            puVar8 = DAT_0104d688;
            if (DAT_0104d688 != &DAT_0104d694) {
              do {
                pvVar3 = (void *)puVar8[2];
                if (((pvVar3 != (void *)0x0) && (pvVar3 != param_1)) &&
                   ((iVar6 = (**(code **)(**(int **)((int)pvVar3 + 0x228) + 0x24))(), iVar6 == 5 &&
                    ((*(void **)((int)pvVar3 + 0x1f8) != (void *)0x0 &&
                     (iVar6 = FUN_005a7640(*(void **)((int)pvVar3 + 0x1f8),(int)piVar2,0),
                     iVar6 != 0)))))) {
                  bVar4 = true;
                  break;
                }
                puVar8 = (undefined4 *)puVar8[1];
              } while (puVar8 != &DAT_0104d694);
            }
            cVar5 = (**(code **)(*piVar2 + 0x1c0))(0,0);
            if (((cVar5 != '\0') &&
                (iVar6 = FUN_005a7640(*(void **)((int)param_1 + 0x1f8),(int)piVar2,0), iVar6 == 0))
               && (!bVar4)) {
              FUN_005b4140(param_1,(int)piVar2,pvVar1);
              uVar7 = FUN_005b54c0(param_1,(int)piVar2);
              if ((char)uVar7 == '\0') {
                iVar6 = *(int *)((int)param_1 + 0x1c8);
                if (((*(void **)((int)param_1 + 0x1f8) != (void *)0x0) &&
                    (uVar7 = FUN_005a73b0(*(void **)((int)param_1 + 0x1f8),'\x01'),
                    (char)uVar7 != '\0')) && (iVar6 != 0)) {
                  puVar8 = FUN_005b5440(param_1,(int)piVar2);
                  FUN_005b57c0((int)param_1);
                  FUN_005d6560((int)puVar8);
                }
              }
              break;
            }
          }
          local_c = (undefined4 *)local_c[1];
        } while (local_c != &DAT_0104cee0);
      }
      iVar9 = iVar9 + 0x18;
    } while (iVar9 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68));
  }
  return;
}


//// FUNCTION FUN_005b85a0 @ 005b85a0 ////

void __fastcall FUN_005b85a0(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x1f8) + 100);
  if (iVar4 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68)) {
    do {
      iVar2 = *(int *)(iVar4 + 0x14);
      if ((iVar2 != 0) && (iVar1 = FUN_005a6470(iVar2), iVar1 != 0)) {
        iVar2 = FUN_005a6470(iVar2);
        puVar3 = FUN_005b5440(param_1,iVar2);
        FUN_005d6560((int)puVar3);
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68));
  }
  if (*(int *)((int)param_1 + 0x1c8) != 0) {
    puVar3 = FUN_005b5440(param_1,*(int *)((int)param_1 + 0x1c8));
    FUN_005d6560((int)puVar3);
  }
  return;
}


//// FUNCTION FUN_005b8610 @ 005b8610 ////

void __fastcall FUN_005b8610(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x1f8) + 100);
  if (iVar4 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68)) {
    do {
      iVar2 = *(int *)(iVar4 + 0x14);
      if ((iVar2 != 0) && (iVar1 = FUN_005a6470(iVar2), iVar1 != 0)) {
        iVar2 = FUN_005a6470(iVar2);
        puVar3 = FUN_005b5440(param_1,iVar2);
        FUN_005d53a0((int)puVar3);
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68));
  }
  if (*(int *)((int)param_1 + 0x1c8) == 0) {
    return;
  }
  puVar3 = FUN_005b5440(param_1,*(int *)((int)param_1 + 0x1c8));
  FUN_005d53a0((int)puVar3);
  return;
}


//// FUNCTION FUN_005b8680 @ 005b8680 ////

void __fastcall FUN_005b8680(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x1f8) + 100);
  if (iVar4 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68)) {
    do {
      iVar2 = *(int *)(iVar4 + 0x14);
      if ((iVar2 != 0) && (iVar1 = FUN_005a6470(iVar2), iVar1 != 0)) {
        iVar2 = FUN_005a6470(iVar2);
        puVar3 = FUN_005b5440(param_1,iVar2);
        FUN_005d6a20((int)puVar3);
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68));
  }
  if (*(int *)((int)param_1 + 0x1c8) == 0) {
    return;
  }
  puVar3 = FUN_005b5440(param_1,*(int *)((int)param_1 + 0x1c8));
  FUN_005d6a20((int)puVar3);
  return;
}


//// FUNCTION FUN_005b86f0 @ 005b86f0 ////

void __fastcall FUN_005b86f0(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x1f8) + 100);
  if (iVar4 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68)) {
    do {
      iVar2 = *(int *)(iVar4 + 0x14);
      if ((iVar2 != 0) && (iVar1 = FUN_005a6470(iVar2), iVar1 != 0)) {
        iVar2 = FUN_005a6470(iVar2);
        puVar3 = FUN_005b5440(param_1,iVar2);
        FUN_005d6c00((int)puVar3);
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != *(int *)(*(int *)((int)param_1 + 0x1f8) + 0x68));
  }
  if (*(int *)((int)param_1 + 0x1c8) == 0) {
    return;
  }
  puVar3 = FUN_005b5440(param_1,*(int *)((int)param_1 + 0x1c8));
  FUN_005d6c00((int)puVar3);
  return;
}


//// FUNCTION FUN_005b8760 @ 005b8760 ////

void __thiscall FUN_005b8760(void *this,float *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  float local_8;
  float local_4;
  
  bVar5 = *(void **)((int)this + 0x348) != (void *)0x0;
  local_8 = 0.0;
  local_4 = 0.0;
  if (bVar5) {
    pfVar2 = (float *)FUN_005d76a0(*(void **)((int)this + 0x348),&local_4);
    local_8 = *pfVar2;
  }
  local_4 = (float)(uint)bVar5;
  fVar3 = (float)(uint)bVar5;
  iVar4 = *(int *)((int)this + 0x350);
  fVar1 = local_4;
  if (iVar4 != *(int *)((int)this + 0x354)) {
    do {
      if (*(void **)(iVar4 + 0x14) != (void *)0x0) {
        pfVar2 = (float *)FUN_005d76a0(*(void **)(iVar4 + 0x14),&local_4);
        local_8 = local_8 + *pfVar2;
        fVar3 = (float)((int)fVar3 + 1);
      }
      iVar4 = iVar4 + 0x18;
      fVar1 = fVar3;
    } while (iVar4 != *(int *)((int)this + 0x354));
  }
  local_4 = fVar1;
  if (local_4 != 0.0) {
    local_8 = local_8 / (float)(int)local_4;
  }
  if (0.0 <= local_8) {
    if (local_8 <= 1.0) {
      *param_1 = local_8;
      return;
    }
    *param_1 = 1.0;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_005b8840 @ 005b8840 ////

void __thiscall FUN_005b8840(void *this,float *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  float local_8;
  float local_4;
  
  bVar5 = *(void **)((int)this + 0x348) != (void *)0x0;
  local_8 = 0.0;
  local_4 = 0.0;
  if (bVar5) {
    pfVar2 = (float *)FUN_005d7700(*(void **)((int)this + 0x348),&local_4);
    local_8 = *pfVar2;
  }
  local_4 = (float)(uint)bVar5;
  fVar3 = (float)(uint)bVar5;
  iVar4 = *(int *)((int)this + 0x350);
  fVar1 = local_4;
  if (iVar4 != *(int *)((int)this + 0x354)) {
    do {
      if (*(void **)(iVar4 + 0x14) != (void *)0x0) {
        pfVar2 = (float *)FUN_005d7700(*(void **)(iVar4 + 0x14),&local_4);
        local_8 = local_8 + *pfVar2;
        fVar3 = (float)((int)fVar3 + 1);
      }
      iVar4 = iVar4 + 0x18;
      fVar1 = fVar3;
    } while (iVar4 != *(int *)((int)this + 0x354));
  }
  local_4 = fVar1;
  if (local_4 != 0.0) {
    local_8 = local_8 / (float)(int)local_4;
  }
  if (0.0 <= local_8) {
    if (local_8 <= 1.0) {
      *param_1 = local_8;
      return;
    }
    *param_1 = 1.0;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_005b8920 @ 005b8920 ////

void __thiscall FUN_005b8920(void *this,float *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  float local_8;
  float local_4;
  
  bVar5 = *(void **)((int)this + 0x348) != (void *)0x0;
  local_8 = 0.0;
  local_4 = 0.0;
  if (bVar5) {
    pfVar2 = (float *)FUN_005d7760(*(void **)((int)this + 0x348),&local_4);
    local_8 = *pfVar2;
  }
  local_4 = (float)(uint)bVar5;
  fVar3 = (float)(uint)bVar5;
  iVar4 = *(int *)((int)this + 0x350);
  fVar1 = local_4;
  if (iVar4 != *(int *)((int)this + 0x354)) {
    do {
      if (*(void **)(iVar4 + 0x14) != (void *)0x0) {
        pfVar2 = (float *)FUN_005d7760(*(void **)(iVar4 + 0x14),&local_4);
        local_8 = local_8 + *pfVar2;
        fVar3 = (float)((int)fVar3 + 1);
      }
      iVar4 = iVar4 + 0x18;
      fVar1 = fVar3;
    } while (iVar4 != *(int *)((int)this + 0x354));
  }
  local_4 = fVar1;
  if (local_4 != 0.0) {
    local_8 = local_8 / (float)(int)local_4;
  }
  if (0.0 <= local_8) {
    if (local_8 <= 1.0) {
      *param_1 = local_8;
      return;
    }
    *param_1 = 1.0;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_005b8a00 @ 005b8a00 ////

float10 __fastcall FUN_005b8a00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float local_8;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0x350);
  iVar2 = 0;
  local_8 = 0.0;
  local_4 = 0;
  if (iVar3 != *(int *)(param_1 + 0x354)) {
    do {
      if (*(int *)(iVar3 + 0x14) != 0) {
        iVar1 = FUN_005d7990(*(int *)(iVar3 + 0x14));
        if (*(float *)(iVar1 + 0xfc) != 0.0) {
          local_8 = *(float *)(iVar1 + 0xfc) + local_8;
          iVar2 = iVar2 + 1;
        }
      }
      iVar3 = iVar3 + 0x18;
      local_4 = iVar2;
    } while (iVar3 != *(int *)(param_1 + 0x354));
  }
  return (float10)local_8 / (float10)local_4;
}


//// FUNCTION FUN_005b8aa0 @ 005b8aa0 ////

void __fastcall FUN_005b8aa0(int param_1)

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


//// FUNCTION FUN_005b8b30 @ 005b8b30 ////

void __cdecl FUN_005b8b30(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d29c84;
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


//// FUNCTION FUN_005b8ba0 @ 005b8ba0 ////

int * __cdecl FUN_005b8ba0(undefined4 *param_1,undefined4 *param_2,int *param_3)

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


//// FUNCTION FUN_005b8c50 @ 005b8c50 ////

void __thiscall FUN_005b8c50(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_4;
  
  pvStack_4 = this;
  iVar1 = (**(code **)(**(int **)((int)this + 0x228) + 0x24))();
  if (iVar1 < 6) {
    puVar2 = (undefined4 *)FUN_005b6d70(this,(float *)&pvStack_4);
    *(undefined4 *)((int)this + 0x28c) = *puVar2;
  }
  *param_1 = *(undefined4 *)((int)this + 0x28c);
  return;
}


//// FUNCTION FUN_005b8c90 @ 005b8c90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005b8c90(void *param_1)

{
  float fVar1;
  float *pfVar2;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_10 = 0.0;
  *(undefined4 *)((int)param_1 + 0x170) = 0;
  FUN_005dd5c0(*(void **)((int)param_1 + 0x388),&local_10);
  fVar1 = _DAT_00e544c4 * local_10 + *(float *)((int)param_1 + 0x170);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)param_1 + 0x170) = fVar1;
  pfVar2 = (float *)CProject_GetQualityWithAwardBoost(param_1,&local_c);
  fVar1 = _DAT_00e544c8 * *pfVar2 + *(float *)((int)param_1 + 0x170);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)param_1 + 0x170) = fVar1;
  pfVar2 = (float *)CProject_GetQualityWithAwardBoost(param_1,&local_8);
  local_c = *pfVar2;
  pfVar2 = (float *)FUN_005b7680(param_1,&local_4);
  fVar1 = _DAT_00e544cc * *pfVar2 + *(float *)((int)param_1 + 0x170);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)param_1 + 0x170) = fVar1;
  if (*(int *)((int)param_1 + 0x330) != 0) {
    FUN_005ce430(*(void **)((int)param_1 + 0x330),*(undefined4 *)((int)param_1 + 0x170));
  }
  return;
}


//// FUNCTION FUN_005b8de0 @ 005b8de0 ////

void __fastcall FUN_005b8de0(int param_1)

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


//// FUNCTION FUN_005b8e30 @ 005b8e30 ////

void __cdecl FUN_005b8e30(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d29c84;
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


//// FUNCTION FUN_005b8ea0 @ 005b8ea0 ////

void __cdecl FUN_005b8ea0(int *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005b8fe0 @ 005b8fe0 ////

void __cdecl FUN_005b8fe0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d29c94;
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


//// FUNCTION FUN_005b9050 @ 005b9050 ////

void __fastcall FUN_005b9050(void *param_1)

{
  int *piVar1;
  
  if (*(int *)((int)param_1 + 0x318) == 0) {
    FUN_005b8c90(param_1);
    piVar1 = FUN_00460cc0(param_1);
    (**(code **)(*(int *)((int)param_1 + 0x304) + 4))();
    *(int **)((int)param_1 + 0x318) = piVar1;
                    /* WARNING: Could not recover jumptable at 0x005b9093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)((int)param_1 + 0x304))();
    return;
  }
  return;
}


//// FUNCTION FUN_005b91d0 @ 005b91d0 ////

void __cdecl FUN_005b91d0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d29c94;
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


//// FUNCTION FUN_005b92a0 @ 005b92a0 ////

void FUN_005b92a0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_005b2f10(param_1);
  }
  return;
}


//// FUNCTION FUN_005b92d0 @ 005b92d0 ////

void __fastcall FUN_005b92d0(int param_1)

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
    FUN_005b2f10(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005b9320 @ 005b9320 ////

undefined4 * FUN_005b9320(undefined4 *param_1,int param_2,int param_3)

{
  FUN_005b8e30(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_005b9350 @ 005b9350 ////

int * FUN_005b9350(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_005b8ea0(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_005b9380 @ 005b9380 ////

void FUN_005b9380(void)

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
  puStack_8 = &LAB_00cb5d68;
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


//// FUNCTION FUN_005b93f0 @ 005b93f0 ////

void __thiscall FUN_005b93f0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_005b1e90((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_005b2f10(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005b9450 @ 005b9450 ////

void FUN_005b9450(void)

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
  puStack_8 = &LAB_00cb5d88;
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


//// FUNCTION FUN_005b94c0 @ 005b94c0 ////

void FUN_005b94c0(void)

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
  puStack_8 = &LAB_00cb5da8;
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


//// FUNCTION FUN_005b9530 @ 005b9530 ////

void FUN_005b9530(void)

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
  puStack_8 = &LAB_00cb5dc8;
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


//// FUNCTION FUN_005b95a0 @ 005b95a0 ////

void FUN_005b95a0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    FUN_005b1fb0(param_1);
  }
  return;
}


//// FUNCTION FUN_005b95d0 @ 005b95d0 ////

void FUN_005b95d0(void)

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
  puStack_8 = &LAB_00cb5de8;
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


//// FUNCTION FUN_005b96f0 @ 005b96f0 ////

void __fastcall FUN_005b96f0(int param_1)

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
    FUN_005b2f10(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005b9760 @ 005b9760 ////

void __fastcall FUN_005b9760(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d29d70;
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


//// FUNCTION FUN_005b97b0 @ 005b97b0 ////

undefined4 * __thiscall FUN_005b97b0(void *this,byte param_1)

{
  FUN_005b9760(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005b9820 @ 005b9820 ////

void FUN_005b9820(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_005b6730(param_1);
  }
  return;
}


//// FUNCTION FUN_005b9850 @ 005b9850 ////

void __fastcall FUN_005b9850(int param_1)

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
    FUN_005b6730(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005b98a0 @ 005b98a0 ////

undefined4 * FUN_005b98a0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_005b91d0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_005b9970 @ 005b9970 ////

void __thiscall FUN_005b9970(void *this,uint param_1)

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
  if (0xfffffff - uVar1 < param_1) {
    uVar1 = FUN_005b9530();
  }
  uVar4 = uVar1 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((param_1 < uVar4) && (uVar1 <= 0xfffffff - uVar4)) {
    param_1 = uVar4;
  }
  uVar4 = *(uint *)((int)this + 0xc) >> 2;
  _Dst = operator_new((uVar1 + param_1) * 4);
  iVar6 = uVar4 * 4;
  pvVar3 = (void *)(iVar6 + *(int *)((int)this + 4));
  sVar2 = ((*(int *)((int)this + 8) * 4 - (int)pvVar3) + *(int *)((int)this + 4) >> 2) * 4;
  pvVar3 = _memmove(_Dst + uVar4,pvVar3,sVar2);
  pvVar3 = (void *)((int)pvVar3 + sVar2);
  if (param_1 < uVar4) {
    _memmove(pvVar3,*(void **)((int)this + 4),((int)(param_1 * 4) >> 2) << 2);
    pvVar3 = (void *)(*(int *)((int)this + 4) + param_1 * 4);
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


//// FUNCTION FUN_005b9b20 @ 005b9b20 ////

void __fastcall FUN_005b9b20(int param_1)

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
    FUN_005b1fb0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005b9b70 @ 005b9b70 ////

void __thiscall FUN_005b9b70(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_005b1da0((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_005b6730(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005b9bd0 @ 005b9bd0 ////

void __thiscall FUN_005b9bd0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cb5e08;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d29c94;
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
      FUN_005b9380();
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
        iVar3 = FUN_005b1500((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_005b8fe0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_005b91d0(puVar5,param_2,(int)&local_34);
      FUN_005b8fe0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_005b9820(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_005b8fe0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_005b98a0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_005b3540(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_005b8fe0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_005b1e50((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_005b3540(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_005b9f00 @ 005b9f00 ////

void __thiscall FUN_005b9f00(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cb5e28;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d29c84;
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
      FUN_005b9450();
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
        iVar3 = FUN_005b1560((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_005b8b30(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_005b8e30(puVar5,param_2,(int)&local_34);
      FUN_005b8b30((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_005b92a0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_005b8b30((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_005b9320(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_005b35c0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_005b8b30((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_005b1ed0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_005b35c0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_005ba260 @ 005ba260 ////

void __thiscall FUN_005ba260(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cb5e48;
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
      FUN_005b95d0();
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
        iVar2 = FUN_005b16d0((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_005b8ba0(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_005b8ea0(piVar4,param_2,&local_40);
      FUN_005b8ba0(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_005b95a0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
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
        FUN_005b8ba0(param_1,piVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_005b9350(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x24,&local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_005b68d0(param_1,(int *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        piVar4 = FUN_005b8ba0(piVar3 + param_2 * -9,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_005b3670((int)param_1,(int)(piVar3 + param_2 * -9),piVar3);
        FUN_005b68d0(param_1,param_1 + param_2 * 9,&local_40);
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


//// FUNCTION FUN_005ba580 @ 005ba580 ////

void __fastcall FUN_005ba580(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d29d7c;
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


//// FUNCTION FUN_005ba5d0 @ 005ba5d0 ////

void __fastcall FUN_005ba5d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d29d88;
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


//// FUNCTION FUN_005ba670 @ 005ba670 ////

void __thiscall FUN_005ba670(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_004d6a00((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00435ec0(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005ba730 @ 005ba730 ////

void __thiscall FUN_005ba730(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_005b1da0((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_005b6730(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005ba7b0 @ 005ba7b0 ////

void __thiscall FUN_005ba7b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    FUN_005b9970(this,1);
  }
  uVar4 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar3 = uVar4 >> 2;
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar3 * 4) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(*(int *)((int)this + 4) + uVar3 * 4) = pvVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)((int)this + 4) + uVar3 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_005ba850 @ 005ba850 ////

undefined4 * __thiscall FUN_005ba850(void *this,byte param_1)

{
  FUN_005ba580(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ba870 @ 005ba870 ////

undefined4 * __thiscall FUN_005ba870(void *this,byte param_1)

{
  FUN_005ba5d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ba890 @ 005ba890 ////

void __thiscall FUN_005ba890(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb5e68;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x18;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x18;
    }
    ExceptionList = &local_c;
    FUN_005b9bd0(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_005b9b70(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = param_3;
  }
  if (param_3 != 0) {
    *(int **)(param_3 + 4) = param_4;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ba970 @ 005ba970 ////

void __thiscall FUN_005ba970(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_005ba9b5;
    }
  }
  iVar1 = 0;
LAB_005ba9b5:
  FUN_005b9bd0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_005ba9e0 @ 005ba9e0 ////

void __thiscall FUN_005ba9e0(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb5e88;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x18;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x18;
    }
    ExceptionList = &local_c;
    FUN_005b9f00(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_005b93f0(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = param_3;
  }
  if (param_3 != 0) {
    *(int **)(param_3 + 4) = param_4;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005baac0 @ 005baac0 ////

void __thiscall FUN_005baac0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_005bab05;
    }
  }
  iVar1 = 0;
LAB_005bab05:
  FUN_005b9f00(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_005bab30 @ 005bab30 ////

void __fastcall FUN_005bab30(int param_1)

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
    FUN_005b3810(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005bab80 @ 005bab80 ////

void __thiscall FUN_005bab80(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_005babc5;
    }
  }
  iVar1 = 0;
LAB_005babc5:
  FUN_005ba260(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_005babf0 @ 005babf0 ////

void __fastcall FUN_005babf0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  while( true ) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x134) != 0) {
      uVar2 = (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x134)) / 0x18;
    }
    if (uVar2 <= *(uint *)(param_1 + 0x300)) break;
    piVar4 = *(int **)(*(int *)(param_1 + 0x138) + -4);
    if (((piVar4 != (int *)0x0) && (uVar3 = FUN_00598ee0((int)piVar4), (char)uVar3 != '\0')) &&
       (piVar4 = (int *)FUN_00ace790(piVar4,0,&TM::CStaff::RTTI_Type_Descriptor,
                                     &TM::CStar::RTTI_Type_Descriptor,0), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 0x224))(piVar4[0x2d4],0);
    }
    if ((*(int *)(param_1 + 0x134) != 0) &&
       (puVar1 = *(undefined4 **)(param_1 + 0x138),
       ((int)puVar1 - *(int *)(param_1 + 0x134)) / 0x18 != 0)) {
      for (puVar5 = puVar1 + -6; puVar5 != puVar1; puVar5 = puVar5 + 6) {
        FUN_00435ec0(puVar5);
      }
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -0x18;
    }
  }
  return;
}


//// FUNCTION FUN_005bacd0 @ 005bacd0 ////

bool __fastcall FUN_005bacd0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = *(int **)(param_1 + 0x134);
  if (piVar2 != *(int **)(param_1 + 0x138)) {
    do {
      if (piVar2[5] == 0) {
        FUN_004d6a00((int)(piVar2 + 6),*(int *)(param_1 + 0x138),piVar2);
        puVar1 = *(undefined4 **)(param_1 + 0x138);
        for (puVar3 = puVar1 + -6; puVar3 != puVar1; puVar3 = puVar3 + 6) {
          FUN_00435ec0(puVar3);
        }
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + -0x18;
      }
      else {
        piVar2 = piVar2 + 6;
      }
    } while (piVar2 != *(int **)(param_1 + 0x138));
  }
  if (*(int *)(param_1 + 0x134) == 0) {
    return (bool)('\x01' - (*(int *)(param_1 + 0x300) != 0));
  }
  return (bool)('\x01' - ((uint)((*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x134)) / 0x18) <
                         *(uint *)(param_1 + 0x300)));
}


//// FUNCTION FUN_005bad80 @ 005bad80 ////

void __fastcall FUN_005bad80(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  while( true ) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0x134) != 0) {
      iVar3 = (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x134)) / 0x18;
    }
    if (iVar3 <= iVar4) break;
    iVar3 = *(int *)(*(int *)(param_1 + 0x134) + 0x14 + iVar5);
    if (((iVar3 != 0) && (uVar2 = FUN_00598ee0(iVar3), (char)uVar2 != '\0')) &&
       (iVar3 = FUN_00ace790(*(int **)(*(int *)(param_1 + 0x134) + iVar5 + 0x14),0,
                             &TM::CStaff::RTTI_Type_Descriptor,&TM::CStar::RTTI_Type_Descriptor,0),
       iVar3 != 0)) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x134) + iVar5 + 0x14) + 0x224))
                (*(undefined4 *)(iVar3 + 0xb50),0);
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x18;
  }
  puVar6 = *(undefined4 **)(param_1 + 0x134);
  if (puVar6 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x138);
  for (; puVar6 != puVar1; puVar6 = puVar6 + 6) {
    FUN_00435ec0(puVar6);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x134));
}


//// FUNCTION FUN_005bae70 @ 005bae70 ////

uint __thiscall FUN_005bae70(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = *(int **)((int)this + 0x134);
  while( true ) {
    if (piVar2 == *(int **)((int)this + 0x138)) {
      return (uint)piVar2 & 0xffffff00;
    }
    if (piVar2[5] == param_1) break;
    piVar2 = piVar2 + 6;
  }
  FUN_004d6a00((int)(piVar2 + 6),*(int *)((int)this + 0x138),piVar2);
  puVar1 = *(undefined4 **)((int)this + 0x138);
  for (puVar4 = puVar1 + -6; puVar4 != puVar1; puVar4 = puVar4 + 6) {
    FUN_00435ec0(puVar4);
  }
  iVar3 = *(int *)((int)this + 0x138) + -0x18;
  *(int *)((int)this + 0x138) = iVar3;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_005baef0 @ 005baef0 ////

void __fastcall FUN_005baef0(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  wchar_t *in_stack_ffffff84;
  uint in_stack_ffffff88;
  uint in_stack_ffffff8c;
  undefined1 *local_4c [3];
  undefined1 auStack_40 [4];
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  void *pvStack_30;
  void *local_2c;
  uint uStack_28;
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb5ea8;
  local_c = ExceptionList;
  if ((*(int *)((int)param_1 + 0x16c) != 0) &&
     (*(int *)((int)param_1 + 0xac) != (int)param_1 + 0xb8)) {
    local_4c[0] = &stack0xffffff84;
    ExceptionList = &local_c;
    FUN_0045f620(param_1,(undefined4 *)&stack0xffffff84);
    FUN_007546f0(*(void **)((int)param_1 + 0x16c),in_stack_ffffff84,in_stack_ffffff88,
                 in_stack_ffffff8c);
    piVar2 = (int *)GetPlayerStudio();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x20))();
    FUN_004036d0((void *)(*(int *)((int)param_1 + 0x16c) + 0xfc),(wchar_t *)*puVar3,puVar3[1]);
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    iVar1 = *(int *)((int)param_1 + 0x16c);
    uVar8 = FUN_0043b560();
    *(int *)(iVar1 + 0x11c) = (int)uVar8;
    iVar1 = *(int *)((int)param_1 + 0x16c);
    puVar3 = (undefined4 *)FUN_00449b40(*(int *)((int)param_1 + 0x1ac));
    FUN_004015d0((void *)(iVar1 + 0xdc),(char *)*puVar3,puVar3[1]);
    plVar4 = (longlong *)(**(code **)(**(int **)((int)param_1 + 0x240) + 0x30))();
    *(float *)(*(int *)((int)param_1 + 0x16c) + 0x120) = (float)*plVar4 * 1.1920929e-07;
    puVar3 = (undefined4 *)CProject_GetQualityWithAwardBoost(param_1,(float *)local_4c);
    *(undefined4 *)(*(int *)((int)param_1 + 0x16c) + 0x124) = *puVar3;
    puVar3 = FUN_00421b80(&local_2c);
    FUN_004036d0((void *)(*(int *)((int)param_1 + 0x16c) + 0x1cc),(wchar_t *)*puVar3,puVar3[1]);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    iVar1 = *(int *)((int)param_1 + 0x16c);
    iVar5 = FUN_004a3870();
    *(int *)(iVar1 + 0x128) = iVar5;
    iStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    pvStack_30 = (void *)0x0;
    iVar1 = *(int *)((int)param_1 + 0xac);
    uStack_4 = 0;
    for (; iVar1 != (int)param_1 + 0xb8; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_007579a0(*(void **)((int)param_1 + 0x16c),*(int *)(*(int *)(iVar1 + 8) + 0x2f8),auStack_40
                  );
    }
    FUN_005b8aa0(*(int *)((int)param_1 + 0x16c) + 0xc0);
    for (uVar7 = uStack_34; uVar7 != (int)pvStack_30 + uStack_34; uVar7 = uVar7 + 1) {
      uVar6 = uVar7 >> 2;
      iVar1 = uVar6 * -4;
      if (uStack_38 <= uVar6) {
        uVar6 = uVar6 - uStack_38;
      }
      local_4c[0] = *(undefined1 **)(*(int *)(iStack_3c + uVar6 * 4) + (uVar7 + iVar1) * 4);
      FUN_005ba7b0((void *)(*(int *)((int)param_1 + 0x16c) + 0xc0),local_4c);
    }
    FUN_005b8aa0((int)auStack_40);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005bb140 @ 005bb140 ////

uint __thiscall FUN_005bb140(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  iVar2 = param_1;
  piVar4 = *(int **)((int)this + 0x354);
  piVar6 = *(int **)((int)this + 0x350);
  if (piVar6 != piVar4) {
    do {
      puVar1 = (undefined4 *)piVar6[5];
      if ((puVar1 != (undefined4 *)0x0) && (iVar3 = FUN_005d7990((int)puVar1), iVar3 == iVar2)) {
        FUN_005ba730((void *)((int)this + 0x34c),&param_1,piVar6);
        uVar5 = (**(code **)*puVar1)(1);
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      piVar4 = *(int **)((int)this + 0x354);
      piVar6 = piVar6 + 6;
    } while (piVar6 != piVar4);
  }
  return (uint)piVar4 & 0xffffff00;
}


//// FUNCTION FUN_005bb1f0 @ 005bb1f0 ////

void __thiscall FUN_005bb1f0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_005b91d0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_005ba970(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005bb2c0 @ 005bb2c0 ////

void __thiscall FUN_005bb2c0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_005b8e30(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_005baac0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005bb350 @ 005bb350 ////

void __fastcall FUN_005bb350(int param_1)

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
    FUN_005b3810(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005bb360 @ 005bb360 ////

void __thiscall FUN_005bb360(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_005b8ea0(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 9;
    return;
  }
  FUN_005bab80(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005bb3f0 @ 005bb3f0 ////

void __thiscall FUN_005bb3f0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_005bb435;
    }
  }
  iVar1 = 0;
LAB_005bb435:
  FUN_005808c0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_005bb460 @ 005bb460 ////

void __fastcall FUN_005bb460(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6060;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x75;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0;
    pcVar5 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  local_4 = 0xffffffff;
  uVar6 = FUN_0098b490("StarRating");
  if ((char)uVar6 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x10c));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x76;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 1;
    pcVar5 = (char *)FUN_00ace33d(0xe4f6b8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("Title");
  if ((char)uVar6 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x1f8));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x77;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 2;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x150));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PDirector");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x150));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x78;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 3;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x284));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PScriptOffice");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x284));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x79;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 4;
    pcVar5 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("ReleaseDate");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x224),4);
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x7a;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 5;
    pcVar5 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("StartDate");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x264),4);
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x7b;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 6;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x74));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("Credits");
  if ((char)uVar6 != '\0') {
    FUN_009897b0(param_1 + 0x74);
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x7c;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 7;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x40));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("Shots");
  if ((char)uVar6 != '\0') {
    FUN_009897b0(param_1 + 0x40);
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x7d;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 8;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x180));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PCast");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x180));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x7e;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 9;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x1b0));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PPhase");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x1b0));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x7f;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 10;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x1e0));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PEquipment");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x1e0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x80;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xb;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x28));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PShoot");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x81;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xc;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x1c8));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PCosts");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x1c8));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x82;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xd;
    pcVar5 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("SnapGenreBoredom");
  if ((char)uVar6 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa8));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x83;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xe;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x168));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PScript");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x168));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x84;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xf;
    pcVar5 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("ProjectID");
  if ((char)uVar6 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x110));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x85;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x10;
    pcVar5 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("GUID");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x130),4);
  }
  uVar6 = FUN_0098b490("ScheduledReleaseDate");
  if (((char)uVar6 != '\0') && (bVar4 = FUN_009896f0("CString"), bVar4)) {
    if (DAT_010583e0 == 0) {
      local_50 = *(undefined1 **)(param_1 + 0x220);
      FUN_0098a3a0(&local_50);
      local_54 = (undefined1 *)**(int **)(param_1 + 0x21c);
      if ((int *)local_54 != *(int **)(param_1 + 0x21c)) {
        do {
          puVar10 = local_54;
          local_4c = local_40;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          FUN_004015d0(&local_4c,*(char **)(local_54 + 0xc),*(uint *)(local_54 + 0x10));
          local_4 = 0x11;
          FUN_0098c550(&local_4c);
          FUN_0098a430((undefined4 *)(puVar10 + 0x2c),4);
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_004b5290((int *)&local_54);
        } while (local_54 != *(undefined1 **)(param_1 + 0x21c));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_54 = (undefined1 *)0x0;
      FUN_004b81f0(param_1 + 0x218);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 0x12;
      SLVAR_LoadUint(&local_54);
      puVar10 = (undefined1 *)0x0;
      if (local_54 != (undefined1 *)0x0) {
        do {
          FUN_0098c550(&local_2c);
          piVar7 = FUN_004b9e10((void *)(param_1 + 0x218),&local_2c);
          FUN_0098a430(piVar7,4);
          puVar10 = puVar10 + 1;
        } while (puVar10 < local_54);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  uVar6 = FUN_0098b490("WritersExperienceGain");
  if ((char)uVar6 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x348) == 0) {
        local_50 = (undefined1 *)0x0;
      }
      else {
        local_50 = (undefined1 *)((*(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x348)) / 0x18);
      }
      FUN_0098a3a0(&local_50);
      local_58 = (undefined1 *)0x0;
      for (local_54 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0x348) != 0 &&
          (local_54 < (undefined1 *)((*(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x348)) / 0x18)
          )); local_54 = local_54 + 1) {
        if (DAT_00e67469 == '\0') {
          local_4c = local_40;
          pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
          puVar11 = &DAT_010581d8;
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            puVar11 = puVar11 + 1;
          }
          DAT_010581d4 = 0x87;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          _strncpy(local_4c,"SLVAR CALLED: ",0xe);
          local_48 = 0xe;
          local_4c[0xe] = '\0';
          local_4 = 0x13;
          pcVar5 = (char *)FUN_00ace33d(0xe54524);
          pcVar9 = pcVar5;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
        }
        uVar6 = FUN_0098b490("WritersExperienceGain[x]");
        if ((char)uVar6 != '\0') {
          FUN_00990970((int *)(local_58 + *(int *)(param_1 + 0x348)));
        }
        local_58 = local_58 + 0x18;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_54 = (undefined1 *)0x0;
      FUN_005b92d0(param_1 + 0x344);
      SLVAR_LoadUint(&local_54);
      local_50 = &stack0xffffff7c;
      FUN_005ba9e0((void *)(param_1 + 0x344),(uint)local_54,&PTR_LAB_00d29c84,0,(int *)0x0);
      local_50 = (undefined1 *)0x0;
      if (local_54 != (undefined1 *)0x0) {
        local_58 = (undefined1 *)0x0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
            puVar11 = &DAT_010581d8;
            for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              puVar11 = puVar11 + 1;
            }
            local_4c = local_40;
            DAT_010581d4 = 0x87;
            local_40[0] = '\0';
            local_48 = 0;
            local_44 = 0x14;
            _strncpy(local_4c,"SLVAR CALLED: ",0xe);
            local_48 = 0xe;
            local_4c[0xe] = '\0';
            local_4 = 0x14;
            iVar8 = FUN_00ace3df((int *)(local_58 + *(int *)(param_1 + 0x348)));
            pcVar5 = (char *)FUN_00ace33d(iVar8);
            pcVar9 = pcVar5;
            do {
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
          }
          uVar6 = FUN_0098b490("WritersExperienceGain[x]");
          if ((char)uVar6 != '\0') {
            FUN_00990970((int *)(local_58 + *(int *)(param_1 + 0x348)));
          }
          local_50 = local_50 + 1;
          local_58 = local_58 + 0x18;
        } while (local_50 < local_54);
      }
    }
  }
  uVar6 = FUN_0098b490("CrewExperienceGain");
  if ((char)uVar6 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x358) == 0) {
        local_50 = (undefined1 *)0x0;
      }
      else {
        local_50 = (undefined1 *)((*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x358)) / 0x18);
      }
      FUN_0098a3a0(&local_50);
      local_54 = (undefined1 *)0x0;
      for (local_58 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0x358) != 0 &&
          (local_58 < (undefined1 *)((*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x358)) / 0x18)
          )); local_58 = local_58 + 1) {
        if (DAT_00e67469 == '\0') {
          local_4c = local_40;
          pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
          puVar11 = &DAT_010581d8;
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            puVar11 = puVar11 + 1;
          }
          DAT_010581d4 = 0x88;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          _strncpy(local_4c,"SLVAR CALLED: ",0xe);
          local_48 = 0xe;
          local_4c[0xe] = '\0';
          local_4 = 0x15;
          iVar8 = FUN_00ace3df((int *)(local_54 + *(int *)(param_1 + 0x358)));
          pcVar5 = (char *)FUN_00ace33d(iVar8);
          pcVar9 = pcVar5;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
        }
        uVar6 = FUN_0098b490("CrewExperienceGain[x]");
        if ((char)uVar6 != '\0') {
          FUN_00990970((int *)(local_54 + *(int *)(param_1 + 0x358)));
        }
        local_54 = local_54 + 0x18;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_58 = (undefined1 *)0x0;
      FUN_005b92d0(param_1 + 0x354);
      SLVAR_LoadUint(&local_58);
      local_50 = &stack0xffffff7c;
      FUN_005ba9e0((void *)(param_1 + 0x354),(uint)local_58,&PTR_LAB_00d29c84,0,(int *)0x0);
      local_50 = (undefined1 *)0x0;
      if (local_58 != (undefined1 *)0x0) {
        local_54 = (undefined1 *)0x0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
            puVar11 = &DAT_010581d8;
            for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              puVar11 = puVar11 + 1;
            }
            local_4c = local_40;
            DAT_010581d4 = 0x88;
            local_40[0] = '\0';
            local_48 = 0;
            local_44 = 0x14;
            _strncpy(local_4c,"SLVAR CALLED: ",0xe);
            local_48 = 0xe;
            local_4c[0xe] = '\0';
            local_4 = 0x16;
            iVar8 = FUN_00ace3df((int *)(local_54 + *(int *)(param_1 + 0x358)));
            pcVar5 = (char *)FUN_00ace33d(iVar8);
            pcVar9 = pcVar5;
            do {
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
          }
          uVar6 = FUN_0098b490("CrewExperienceGain[x]");
          if ((char)uVar6 != '\0') {
            FUN_00990970((int *)(local_54 + *(int *)(param_1 + 0x358)));
          }
          local_50 = local_50 + 1;
          local_54 = local_54 + 0x18;
        } while (local_50 < local_58);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x89;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x17;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0xf4));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PMovie");
  if ((char)uVar6 != '\0') {
    FUN_007598f0((int *)(param_1 + 0xf4));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x8a;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x18;
    pcVar5 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("WrapDate");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x22c),4);
  }
  uVar6 = FUN_0098b490("CrewPoolList");
  if ((char)uVar6 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0xd0) == 0) {
        local_50 = (undefined1 *)0x0;
      }
      else {
        local_50 = (undefined1 *)((*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0)) / 0x18);
      }
      FUN_0098a3a0(&local_50);
      local_54 = (undefined1 *)0x0;
      for (local_58 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0xd0) != 0 &&
          (local_58 < (undefined1 *)((*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0)) / 0x18)))
          ; local_58 = local_58 + 1) {
        if (DAT_00e67469 == '\0') {
          local_4c = local_40;
          pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
          puVar11 = &DAT_010581d8;
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            puVar11 = puVar11 + 1;
          }
          DAT_010581d4 = 0x8b;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          _strncpy(local_4c,"SLVAR CALLED: ",0xe);
          local_48 = 0xe;
          local_4c[0xe] = '\0';
          local_4 = 0x19;
          iVar8 = FUN_00ace3df((int *)(local_54 + *(int *)(param_1 + 0xd0)));
          pcVar5 = (char *)FUN_00ace33d(iVar8);
          pcVar9 = pcVar5;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
        }
        uVar6 = FUN_0098b490("CrewPoolList[x]");
        if ((char)uVar6 != '\0') {
          FUN_00990970((int *)(local_54 + *(int *)(param_1 + 0xd0)));
        }
        local_54 = local_54 + 0x18;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_58 = (undefined1 *)0x0;
      FUN_004d9e90(param_1 + 0xcc);
      SLVAR_LoadUint(&local_58);
      local_50 = &stack0xffffff7c;
      FUN_004daff0((void *)(param_1 + 0xcc),(uint)local_58,&PTR_FUN_00d18c4c,0,(int *)0x0);
      local_50 = (undefined1 *)0x0;
      if (local_58 != (undefined1 *)0x0) {
        local_54 = (undefined1 *)0x0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
            puVar11 = &DAT_010581d8;
            for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              puVar11 = puVar11 + 1;
            }
            local_4c = local_40;
            DAT_010581d4 = 0x8b;
            local_40[0] = '\0';
            local_48 = 0;
            local_44 = 0x14;
            _strncpy(local_4c,"SLVAR CALLED: ",0xe);
            local_48 = 0xe;
            local_4c[0xe] = '\0';
            local_4 = 0x1a;
            iVar8 = FUN_00ace3df((int *)(local_54 + *(int *)(param_1 + 0xd0)));
            pcVar5 = (char *)FUN_00ace33d(iVar8);
            pcVar9 = pcVar5;
            do {
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
          }
          uVar6 = FUN_0098b490("CrewPoolList[x]");
          if ((char)uVar6 != '\0') {
            FUN_00990970((int *)(local_54 + *(int *)(param_1 + 0xd0)));
          }
          local_50 = local_50 + 1;
          local_54 = local_54 + 0x18;
        } while (local_50 < local_58);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x8c;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1b;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x198));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PProjectObject");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x198));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x8d;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1c;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x2a0));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PLeagueTableEntry");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x2a0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x8e;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1d;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x2d0));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PQualityPreProduction");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x2d0));
  }
  uVar6 = FUN_0098b490("PQualityShots");
  if ((char)uVar6 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x2ec) == 0) {
        local_50 = (undefined1 *)0x0;
      }
      else {
        local_50 = (undefined1 *)((*(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x2ec)) / 0x18);
      }
      FUN_0098a3a0(&local_50);
      local_54 = (undefined1 *)0x0;
      for (local_58 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0x2ec) != 0 &&
          (local_58 < (undefined1 *)((*(int *)(param_1 + 0x2f0) - *(int *)(param_1 + 0x2ec)) / 0x18)
          )); local_58 = local_58 + 1) {
        if (DAT_00e67469 == '\0') {
          local_4c = local_40;
          pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
          puVar11 = &DAT_010581d8;
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            puVar11 = puVar11 + 1;
          }
          DAT_010581d4 = 0x8f;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          _strncpy(local_4c,"SLVAR CALLED: ",0xe);
          local_48 = 0xe;
          local_4c[0xe] = '\0';
          local_4 = 0x1e;
          iVar8 = FUN_00ace3df((int *)(local_54 + *(int *)(param_1 + 0x2ec)));
          pcVar5 = (char *)FUN_00ace33d(iVar8);
          pcVar9 = pcVar5;
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 != '\0');
          FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
        }
        uVar6 = FUN_0098b490("PQualityShots[x]");
        if ((char)uVar6 != '\0') {
          FUN_00990970((int *)(local_54 + *(int *)(param_1 + 0x2ec)));
        }
        local_54 = local_54 + 0x18;
      }
    }
    else if (DAT_010583e0 == 1) {
      piVar7 = *(int **)(param_1 + 0x2ec);
      local_58 = (undefined1 *)0x0;
      if (piVar7 != (int *)0x0) {
        piVar3 = *(int **)(param_1 + 0x2f0);
        if (piVar7 != piVar3) {
          piVar7 = piVar7 + 2;
          do {
            piVar7[-2] = (int)&PTR_LAB_00d29c94;
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
            piVar1 = piVar7 + 4;
            piVar7 = piVar7 + 6;
          } while (piVar1 != piVar3);
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x2ec));
      }
      *(undefined4 *)(param_1 + 0x2ec) = 0;
      *(undefined4 *)(param_1 + 0x2f0) = 0;
      *(undefined4 *)(param_1 + 0x2f4) = 0;
      SLVAR_LoadUint(&local_58);
      local_50 = &stack0xffffff7c;
      FUN_005ba890((void *)(param_1 + 0x2e8),(uint)local_58,&PTR_LAB_00d29c94,0,(int *)0x0);
      local_50 = (undefined1 *)0x0;
      if (local_58 != (undefined1 *)0x0) {
        local_54 = (undefined1 *)0x0;
        do {
          if (DAT_00e67469 == '\0') {
            local_4c = local_40;
            pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
            puVar11 = &DAT_010581d8;
            for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              puVar11 = puVar11 + 1;
            }
            DAT_010581d4 = 0x8f;
            local_40[0] = '\0';
            local_48 = 0;
            local_44 = 0x14;
            _strncpy(local_4c,"SLVAR CALLED: ",0xe);
            local_48 = 0xe;
            local_4c[0xe] = '\0';
            local_4 = 0x1f;
            iVar8 = FUN_00ace3df((int *)(local_54 + *(int *)(param_1 + 0x2ec)));
            pcVar5 = (char *)FUN_00ace33d(iVar8);
            pcVar9 = pcVar5;
            do {
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
          }
          uVar6 = FUN_0098b490("PQualityShots[x]");
          if ((char)uVar6 != '\0') {
            FUN_00990970((int *)(local_54 + *(int *)(param_1 + 0x2ec)));
          }
          local_50 = local_50 + 1;
          local_54 = local_54 + 0x18;
        } while (local_50 < local_58);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x90;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x20;
    pcVar5 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("TicksInPreProd");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2f8),4);
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x91;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x21;
    pcVar5 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("Quality");
  if ((char)uVar6 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x2fc));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x92;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x22;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x310));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PSuccess");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x310));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x93;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x23;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x328));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PIncome");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x328));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x94;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x24;
    pcVar5 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PublicInterestPR");
  if ((char)uVar6 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x304));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x95;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x25;
    pcVar5 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PublicInterestMarketing");
  if ((char)uVar6 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x308));
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x96;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x26;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("(int&)(MarketingSpendLevel)");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x30c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x97;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x27;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("(int&)(JourneyType)");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x340),4);
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x98;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x28;
    pcVar5 = (char *)FUN_00ace33d(0xe4fe30);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("CrewNeeded");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x29c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_4c = local_40;
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    DAT_010581d4 = 0x99;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x29;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x134));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PGenreSeed");
  if ((char)uVar6 != '\0') {
    FUN_0044a970((int *)(param_1 + 0x134));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x9a;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x2a;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("ExplicitGenreSeed");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x14c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x9b;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x2b;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0xdc));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PUnfilledRole");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0xdc));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x9c;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x2c;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x364));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("ImportantStaffGains");
  if ((char)uVar6 != '\0') {
    FUN_009897b0(param_1 + 0x364);
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x9d;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x2d;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("SuperStarQualityBoost");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x3a9),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x9e;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x2e;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("SuperDirectorQualityBoost");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x3aa),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0x9f;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x2f;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x3ac));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PGraphInfo");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x3ac));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0xa0;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x30;
    pcVar5 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PreProdFactor");
  if ((char)uVar6 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x260));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0xa1;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x31;
    pcVar5 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("EstimatedCompletionDate");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x228),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0xa2;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x32;
    iVar8 = FUN_00ace3df((int *)(param_1 + 0x2b8));
    pcVar5 = (char *)FUN_00ace33d(iVar8);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("PLegacy");
  if ((char)uVar6 != '\0') {
    FUN_00990970((int *)(param_1 + 0x2b8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar9 = "C:\\movies\\dev\\TheMovies\\Project.cpp";
    puVar11 = &DAT_010581d8;
    for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      puVar11 = puVar11 + 1;
    }
    local_4c = local_40;
    DAT_010581d4 = 0xa3;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,"SLVAR CALLED: ",0xe);
    local_4 = 0x33;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar9 = pcVar5;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar6 = FUN_0098b490("BSuspended");
  if ((char)uVar6 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x300),1);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005be730 @ 005be730 ////

int * __cdecl FUN_005be730(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  ulonglong uVar8;
  byte **ppbVar9;
  byte **ppbVar10;
  undefined1 auStack_6c [4];
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 local_50;
  byte *pbStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  byte abStack_40 [20];
  byte *pbStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  byte abStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cb60f8;
  pvStack_c = ExceptionList;
  local_58 = (undefined4 *)0x0;
  local_54 = (undefined4 *)0x0;
  local_50 = 0;
  local_68 = (undefined4 *)0x0;
  local_64 = (undefined4 *)0x0;
  local_60 = 0;
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &pvStack_c;
  uVar8 = FUN_0043b560();
  iVar3 = (int)uVar8;
  uStack_48 = 0;
  abStack_40[0] = 0;
  uStack_44 = 0x14;
  if (iVar3 < 0x794) {
    pbStack_4c = abStack_40;
    _strncpy((char *)pbStack_4c,"ERA_PRE_30S",0xb);
    uStack_48 = 0xb;
    pbStack_4c[0xb] = 0;
    local_4 = 2;
    FUN_0043a2d0(auStack_5c,&pbStack_4c);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pbStack_4c);
    }
    pbStack_4c = abStack_40;
    abStack_40[0] = 0;
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy((char *)pbStack_4c,"ERA_TIMELESS",0xc);
    uStack_48 = 0xc;
    pbStack_4c[0xc] = 0;
    local_4 = 3;
LAB_005bea1e:
    FUN_0043a2d0(auStack_5c,&pbStack_4c);
  }
  else if (iVar3 < 0x7a8) {
    pbStack_4c = abStack_40;
    _strncpy((char *)pbStack_4c,"ERA_40S_50S",0xb);
    uStack_48 = 0xb;
    pbStack_4c[0xb] = 0;
    local_4 = 4;
    FUN_0043a2d0(auStack_5c,&pbStack_4c);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pbStack_4c);
    }
    pbStack_4c = abStack_40;
    abStack_40[0] = 0;
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy((char *)pbStack_4c,"ERA_TIMELESS",0xc);
    uStack_48 = 0xc;
    pbStack_4c[0xc] = 0;
    local_4 = 5;
    FUN_0043a2d0(auStack_5c,&pbStack_4c);
  }
  else {
    pbStack_4c = abStack_40;
    if (0x7bb < iVar3) {
      _strncpy((char *)abStack_40,"ERA_POST_80S",0xc);
      uStack_48 = 0xc;
      pbStack_4c[0xc] = 0;
      local_4 = 8;
      FUN_0043a2d0(auStack_5c,&pbStack_4c);
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(pbStack_4c);
      }
      pbStack_4c = abStack_40;
      abStack_40[0] = 0;
      uStack_48 = 0;
      uStack_44 = 0x14;
      _strncpy((char *)pbStack_4c,"ERA_TIMELESS",0xc);
      uStack_48 = 0xc;
      pbStack_4c[0xc] = 0;
      local_4 = 9;
      goto LAB_005bea1e;
    }
    _strncpy((char *)pbStack_4c,"ERA_60S_70S",0xb);
    uStack_48 = 0xb;
    pbStack_4c[0xb] = 0;
    local_4 = 6;
    FUN_0043a2d0(auStack_5c,&pbStack_4c);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pbStack_4c);
    }
    pbStack_4c = abStack_40;
    abStack_40[0] = 0;
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy((char *)pbStack_4c,"ERA_TIMELESS",0xc);
    uStack_48 = 0xc;
    pbStack_4c[0xc] = 0;
    local_4 = 7;
    FUN_0043a2d0(auStack_5c,&pbStack_4c);
  }
  if (0x14 < uStack_44) {
    local_4 = 1;
                    /* WARNING: Subroutine does not return */
    _free(pbStack_4c);
  }
  local_4 = 1;
  if (param_2 == 0) goto LAB_005bee1d;
  puVar2 = (undefined4 *)FUN_00449b40(param_2);
  pbStack_4c = abStack_40;
  abStack_40[0] = 0;
  uStack_48 = 0;
  uStack_44 = 0x14;
  FUN_004015d0(&pbStack_4c,(char *)*puVar2,puVar2[1]);
  local_4 = 10;
  FUN_0045f450((int *)&pbStack_4c);
  pbStack_2c = abStack_20;
  abStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy((char *)pbStack_2c,"GENRE_ACTION",0xc);
  uStack_28 = 0xc;
  pbStack_2c[0xc] = 0;
  pbVar5 = pbStack_2c;
  pbVar6 = pbStack_4c;
  do {
    bVar1 = *pbVar6;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_005beaf5:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_005beafa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_005beaf5;
    pbVar6 = pbVar6 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005beafa:
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pbStack_2c);
  }
  pbStack_2c = abStack_20;
  uStack_24 = 0x14;
  uStack_28 = 0;
  abStack_20[0] = 0;
  if (iVar3 == 0) {
    _strncpy((char *)pbStack_2c,"GENRE_WAR",9);
    uStack_28 = 9;
    pbStack_2c[9] = 0;
    local_4 = 0xb;
    FUN_0043a2d0(auStack_6c,&pbStack_2c);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pbStack_2c);
    }
    pbStack_2c = abStack_20;
    abStack_20[0] = 0;
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy((char *)pbStack_2c,"GENRE_WESTERN",0xd);
    uStack_28 = 0xd;
    pbStack_2c[0xd] = 0;
    local_4 = 0xc;
    FUN_0043a2d0(auStack_6c,&pbStack_2c);
    local_4 = 10;
joined_r0x005bed7b:
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pbStack_2c);
    }
  }
  else {
    _strncpy((char *)abStack_20,"GENRE_COMEDY",0xc);
    ppbVar10 = &pbStack_2c;
    ppbVar9 = &pbStack_4c;
    uStack_28 = 0xc;
    pbStack_2c[0xc] = 0;
    uVar4 = FUN_00401ec0(ppbVar9,ppbVar10);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pbStack_2c);
    }
    if ((char)uVar4 == '\0') {
      pbStack_2c = abStack_20;
      abStack_20[0] = 0;
      uStack_28 = 0;
      uStack_24 = 0x14;
      _strncpy((char *)pbStack_2c,"GENRE_HORROR",0xc);
      ppbVar10 = &pbStack_2c;
      ppbVar9 = &pbStack_4c;
      uStack_28 = 0xc;
      pbStack_2c[0xc] = 0;
      uVar4 = FUN_00401ec0(ppbVar9,ppbVar10);
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pbStack_2c);
      }
      uStack_24 = 0x14;
      uStack_28 = 0;
      abStack_20[0] = 0;
      if ((char)uVar4 == '\0') {
        pbStack_2c = abStack_20;
        _strncpy((char *)abStack_20,"GENRE_ROMANCE",0xd);
        ppbVar10 = &pbStack_2c;
        ppbVar9 = &pbStack_4c;
        uStack_28 = 0xd;
        pbStack_2c[0xd] = 0;
        uVar4 = FUN_00401ec0(ppbVar9,ppbVar10);
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pbStack_2c);
        }
        if ((char)uVar4 == '\0') {
          FUN_00401de0(&pbStack_2c,"GENRE_SCI-FI",0xffffffff);
        }
        else {
          FUN_00401de0(&pbStack_2c,"GENRE_THRILLER",0xffffffff);
          local_4 = 0xe;
          FUN_0043a2d0(auStack_6c,&pbStack_2c);
          local_4 = 10;
        }
      }
      else {
        pbStack_2c = abStack_20;
        _strncpy((char *)abStack_20,"GENRE_THRILLER",0xe);
        uStack_28 = 0xe;
        pbStack_2c[0xe] = 0;
        local_4 = 0xd;
        FUN_0043a2d0(auStack_6c,&pbStack_2c);
        local_4 = 10;
      }
      goto joined_r0x005bed7b;
    }
  }
  FUN_0043a2d0(auStack_6c,&pbStack_4c);
  pbStack_2c = abStack_20;
  abStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy((char *)pbStack_2c,"GENRE_GENERIC",0xd);
  uStack_28 = 0xd;
  pbStack_2c[0xd] = 0;
  local_4 = 0xf;
  FUN_0043a2d0(auStack_6c,&pbStack_2c);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pbStack_2c);
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pbStack_4c);
  }
LAB_005bee1d:
  pbStack_2c = abStack_20;
  abStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy((char *)pbStack_2c,"PROJECT_TITLE",0xd);
  uStack_28 = 0xd;
  pbStack_2c[0xd] = 0;
  _local_4 = CONCAT31(uStack_3,0x10);
  FUN_009b52c0(param_1,&pbStack_2c,(int)auStack_5c,(int)auStack_6c);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pbStack_2c);
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_00405fe0(local_68,local_64);
                    /* WARNING: Subroutine does not return */
    _free(local_68);
  }
  local_68 = (undefined4 *)0x0;
  local_64 = (undefined4 *)0x0;
  local_60 = 0;
  if (local_58 != (undefined4 *)0x0) {
    FUN_00405fe0(local_58,local_54);
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_005bef00 @ 005bef00 ////

void __thiscall FUN_005bef00(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  void *local_20 [2];
  uint local_18;
  
  uVar1 = FUN_0046f5e0(param_1);
  if (uVar1 < 0x80000ad0) {
    if (uVar1 == 0x80000acf) {
      piVar3 = *(int **)((int)this + 0x228);
      while ((piVar3 != (int *)0x0 && (iVar2 = (**(code **)(*piVar3 + 0x24))(), iVar2 != 5))) {
        piVar3 = (int *)(**(code **)(*piVar3 + 0x14))();
      }
      if (piVar3 == *(int **)((int)this + 0x228)) {
        return;
      }
      if (piVar3 == (int *)0x0) {
        return;
      }
      iVar2 = (**(code **)(*piVar3 + 0x24))();
      bVar4 = iVar2 == 5;
    }
    else {
      switch(uVar1) {
      case 0x80000a2f:
        FUN_005b47c0((int)this);
        return;
      default:
        goto switchD_005bef38_caseD_80000a30;
      case 0x80000a57:
        goto switchD_005bef38_caseD_80000a57;
      case 0x80000a7f:
        piVar3 = *(int **)((int)this + 0x228);
        while ((piVar3 != (int *)0x0 && (iVar2 = (**(code **)(*piVar3 + 0x24))(), iVar2 != 3))) {
          piVar3 = (int *)(**(code **)(*piVar3 + 0x14))();
        }
        if (piVar3 == *(int **)((int)this + 0x228)) {
          return;
        }
        if (piVar3 == (int *)0x0) {
          return;
        }
        iVar2 = (**(code **)(*piVar3 + 0x24))();
        bVar4 = iVar2 == 3;
        break;
      case 0x80000aa7:
        piVar3 = *(int **)((int)this + 0x228);
        while ((piVar3 != (int *)0x0 && (iVar2 = (**(code **)(*piVar3 + 0x24))(), iVar2 != 4))) {
          piVar3 = (int *)(**(code **)(*piVar3 + 0x14))();
        }
        if (piVar3 == *(int **)((int)this + 0x228)) {
          return;
        }
        if (piVar3 == (int *)0x0) {
          return;
        }
        iVar2 = (**(code **)(*piVar3 + 0x24))();
        bVar4 = iVar2 == 4;
      }
    }
  }
  else {
    if (uVar1 != 0x80000af7) {
      if (uVar1 == 0x80000b1f) {
        piVar3 = *(int **)((int)this + 0x228);
        while ((piVar3 != (int *)0x0 && (iVar2 = (**(code **)(*piVar3 + 0x24))(), iVar2 != 7))) {
          piVar3 = (int *)(**(code **)(*piVar3 + 0x14))();
        }
        if (((piVar3 != *(int **)((int)this + 0x228)) && (piVar3 != (int *)0x0)) &&
           (iVar2 = (**(code **)(*piVar3 + 0x24))(), iVar2 == 7)) {
          if (*(undefined4 **)((int)this + 0x228) != (undefined4 *)0x0) {
            FUN_00401440(*(undefined4 **)((int)this + 0x228));
            FUN_005b12a0((void *)((int)this + 0x214),0);
          }
          FUN_005b12a0((void *)((int)this + 0x214),(int)piVar3);
        }
        FUN_006f6410(this,1);
        FUN_0085f5c0(this);
        return;
      }
      if (uVar1 == 0x80000b47) {
        piVar3 = FUN_005be730((int *)local_20,*(int *)((int)this + 0x1ac));
        FUN_004036d0((void *)((int)this + 0x25c),(wchar_t *)*piVar3,piVar3[1]);
        if (local_18 < 0xb) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
switchD_005bef38_caseD_80000a30:
      FUN_0053c360();
      return;
    }
    piVar3 = *(int **)((int)this + 0x228);
    while ((piVar3 != (int *)0x0 && (iVar2 = (**(code **)(*piVar3 + 0x24))(), iVar2 != 6))) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x14))();
    }
    if (piVar3 == *(int **)((int)this + 0x228)) {
      return;
    }
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar2 = (**(code **)(*piVar3 + 0x24))();
    bVar4 = iVar2 == 6;
  }
  if (bVar4) {
    if (*(undefined4 **)((int)this + 0x228) != (undefined4 *)0x0) {
      FUN_00401440(*(undefined4 **)((int)this + 0x228));
      FUN_005b12a0((void *)((int)this + 0x214),0);
    }
    FUN_005b12a0((void *)((int)this + 0x214),(int)piVar3);
  }
switchD_005bef38_caseD_80000a57:
  return;
}


//// FUNCTION CProject_Destructor @ 005bf220 ////

void __fastcall CProject_Destructor(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb631b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2a148;
  param_1[0x19] = &PTR_LAB_00d2a128;
  puVar1 = (undefined4 *)param_1[0x28];
  local_4 = 0x23;
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x23] + 4))();
    param_1[0x28] = 0;
    (**(code **)param_1[0x23])();
  }
  if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x55])(1);
  }
  (**(code **)(param_1[0x50] + 4))();
  param_1[0x55] = 0;
  (**(code **)param_1[0x50])();
  if ((undefined4 *)param_1[0x96] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x96])(1);
  }
  (**(code **)(param_1[0x91] + 4))();
  param_1[0x96] = 0;
  (**(code **)param_1[0x91])();
  if ((undefined4 *)param_1[0xc6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc6])(1);
  }
  (**(code **)(param_1[0xc1] + 4))();
  param_1[0xc6] = 0;
  (**(code **)param_1[0xc1])();
  if ((undefined4 *)param_1[0x90] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x90])(1);
  }
  (**(code **)(param_1[0x8b] + 4))();
  param_1[0x90] = 0;
  (**(code **)param_1[0x8b])();
  if ((undefined4 *)param_1[0x5b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x5b])(1);
  }
  (**(code **)(param_1[0x56] + 4))();
  param_1[0x5b] = 0;
  (**(code **)param_1[0x56])();
  if ((undefined4 *)param_1[0xd2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd2])(1);
  }
  (**(code **)(param_1[0xcd] + 4))();
  param_1[0xd2] = 0;
  (**(code **)param_1[0xcd])();
  puVar1 = (undefined4 *)param_1[0x8a];
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x85] + 4))();
    param_1[0x8a] = 0;
    (**(code **)param_1[0x85])();
  }
  if ((undefined4 *)param_1[0xe2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe2])(1);
  }
  (**(code **)(param_1[0xdd] + 4))();
  param_1[0xe2] = 0;
  (**(code **)param_1[0xdd])();
  puVar1 = (undefined4 *)param_1[0xe8];
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0xe3] + 4))();
    param_1[0xe8] = 0;
    (**(code **)param_1[0xe3])();
  }
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x109])(1);
  }
  (**(code **)(param_1[0x104] + 4))();
  param_1[0x109] = 0;
  (**(code **)param_1[0x104])();
  if ((undefined4 *)param_1[0x2b] != param_1 + 0x2e) {
    do {
      piVar3 = (int *)param_1[0x2b];
      puVar1 = (undefined4 *)piVar3[2];
      if ((int *)piVar3[1] != (int *)0x0) {
        *(int *)piVar3[1] = *piVar3;
      }
      if (*piVar3 != 0) {
        *(int *)(*piVar3 + 4) = piVar3[1];
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      if (puVar1 != (undefined4 *)0x0) {
        piVar3 = puVar1 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
    } while ((undefined4 *)param_1[0x2b] != param_1 + 0x2e);
  }
  if ((undefined4 *)param_1[0x38] != param_1 + 0x3b) {
    do {
      piVar3 = (int *)param_1[0x38];
      puVar1 = (undefined4 *)piVar3[2];
      if ((int *)piVar3[1] != (int *)0x0) {
        *(int *)piVar3[1] = *piVar3;
      }
      if (*piVar3 != 0) {
        *(int *)(*piVar3 + 4) = piVar3[1];
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    } while ((undefined4 *)param_1[0x38] != param_1 + 0x3b);
  }
  if ((undefined4 *)param_1[0xf4] != param_1 + 0xf7) {
    do {
      piVar3 = (int *)param_1[0xf4];
      puVar1 = (undefined4 *)piVar3[2];
      if ((int *)piVar3[1] != (int *)0x0) {
        *(int *)piVar3[1] = *piVar3;
      }
      if (*piVar3 != 0) {
        *(int *)(*piVar3 + 4) = piVar3[1];
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      if (puVar1 != (undefined4 *)0x0) {
        piVar3 = puVar1 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
    } while ((undefined4 *)param_1[0xf4] != param_1 + 0xf7);
  }
  while ((param_1[0xd4] != 0 && ((int)(param_1[0xd5] - param_1[0xd4]) / 0x18 != 0))) {
    puVar1 = *(undefined4 **)(param_1[0xd5] + -4);
    if (param_1[0xd4] != 0) {
      puVar2 = (undefined4 *)param_1[0xd5];
      iStack_10 = ((int)puVar2 - param_1[0xd4]) / 0x18;
      if (iStack_10 != 0) {
        puVar4 = puVar2 + -6;
        if (puVar4 != puVar2) {
          piVar3 = puVar2 + -4;
          do {
            *puVar4 = &PTR_LAB_00d29c94;
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
        param_1[0xd5] = param_1[0xd5] + -0x18;
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  while ((param_1[0xeb] != 0 &&
         (iStack_10 = (int)(param_1[0xec] - param_1[0xeb]) / 0x18, iStack_10 != 0))) {
    puVar1 = *(undefined4 **)(param_1[0xec] + -4);
    if (param_1[0xeb] != 0) {
      puVar2 = (undefined4 *)param_1[0xec];
      iStack_10 = ((int)puVar2 - param_1[0xeb]) / 0x18;
      if (iStack_10 != 0) {
        puVar4 = puVar2 + -6;
        if (puVar4 != puVar2) {
          piVar3 = puVar2 + -4;
          do {
            *puVar4 = &PTR_LAB_00d29c84;
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
        param_1[0xec] = param_1[0xec] + -0x18;
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  while( true ) {
    if ((param_1[0xef] == 0) ||
       (iStack_10 = (int)(param_1[0xf0] - param_1[0xef]) / 0x18, iStack_10 == 0)) break;
    puVar1 = *(undefined4 **)(param_1[0xf0] + -4);
    if (param_1[0xef] != 0) {
      puVar2 = (undefined4 *)param_1[0xf0];
      iStack_10 = ((int)puVar2 - param_1[0xef]) / 0x18;
      if (iStack_10 != 0) {
        puVar4 = puVar2 + -6;
        if (puVar4 != puVar2) {
          piVar3 = puVar2 + -4;
          do {
            *puVar4 = &PTR_LAB_00d29c84;
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
        param_1[0xf0] = param_1[0xf0] + -0x18;
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  if (param_1[0xbf] != 0) {
    FUN_0084a2a0(param_1[0xbf]);
  }
  if (*(char *)(param_1 + 0xa6) == '\0') {
    if ((undefined4 *)param_1[0xa8] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0xa8] = param_1[0xa7];
    }
    if (param_1[0xa7] != 0) {
      *(undefined4 *)(param_1[0xa7] + 4) = param_1[0xa8];
    }
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    DAT_0104d660 = DAT_0104d660 + -1;
  }
  if ((undefined4 *)param_1[0x49] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x49] = param_1[0x48];
  }
  if (param_1[0x48] != 0) {
    *(undefined4 *)(param_1[0x48] + 4) = param_1[0x49];
  }
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  puVar1 = (undefined4 *)param_1[0x78];
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x73] + 4))();
    param_1[0x78] = 0;
    (**(code **)param_1[0x73])();
  }
  if ((undefined4 *)param_1[0x7e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7e])(1);
  }
  (**(code **)(param_1[0x79] + 4))();
  param_1[0x7e] = 0;
  (**(code **)param_1[0x79])();
  puVar1 = (undefined4 *)param_1[0x84];
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 0x12;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x7f] + 4))();
    param_1[0x84] = 0;
    (**(code **)param_1[0x7f])();
  }
  FUN_005bad80((int)param_1);
  param_1[0x104] = &PTR_LAB_00d29c74;
  if ((undefined4 *)param_1[0x106] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x106] = param_1[0x105];
  }
  if (param_1[0x105] != 0) {
    *(undefined4 *)(param_1[0x105] + 4) = param_1[0x106];
  }
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x109] = 0;
  if ((undefined4 *)param_1[0x106] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x106] = param_1[0x105];
  }
  if (param_1[0x105] != 0) {
    *(undefined4 *)(param_1[0x105] + 4) = param_1[0x106];
  }
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  FUN_005bab30((int)(param_1 + 0xff));
  FUN_005b9760(param_1 + 0xf2);
  FUN_005b92d0((int)(param_1 + 0xee));
  FUN_005b92d0((int)(param_1 + 0xea));
  param_1[0xe3] = &PTR_LAB_00d28e68;
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
  param_1[0xdd] = &PTR_LAB_00d28e58;
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
  FUN_005b9850((int)(param_1 + 0xd3));
  param_1[0xcd] = &PTR_LAB_00d29c94;
  if ((undefined4 *)param_1[0xcf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xcf] = param_1[0xce];
  }
  if (param_1[0xce] != 0) {
    *(undefined4 *)(param_1[0xce] + 4) = param_1[0xcf];
  }
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd2] = 0;
  if ((undefined4 *)param_1[0xcf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xcf] = param_1[0xce];
  }
  if (param_1[0xce] != 0) {
    *(undefined4 *)(param_1[0xce] + 4) = param_1[0xcf];
  }
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[199] = &PTR_LAB_00d25c80;
  if ((undefined4 *)param_1[0xc9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc9] = param_1[200];
  }
  if (param_1[200] != 0) {
    *(undefined4 *)(param_1[200] + 4) = param_1[0xc9];
  }
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xcc] = 0;
  if ((undefined4 *)param_1[0xc9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc9] = param_1[200];
  }
  if (param_1[200] != 0) {
    *(undefined4 *)(param_1[200] + 4) = param_1[0xc9];
  }
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xc1] = &PTR_FUN_00d1aef0;
  if ((undefined4 *)param_1[0xc3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc3] = param_1[0xc2];
  }
  if (param_1[0xc2] != 0) {
    *(undefined4 *)(param_1[0xc2] + 4) = param_1[0xc3];
  }
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc6] = 0;
  if ((undefined4 *)param_1[0xc3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xc3] = param_1[0xc2];
  }
  if (param_1[0xc2] != 0) {
    *(undefined4 *)(param_1[0xc2] + 4) = param_1[0xc3];
  }
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xba] = &PTR_LAB_00d1e56c;
  if ((undefined4 *)param_1[0xbc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xbc] = param_1[0xbb];
  }
  if (param_1[0xbb] != 0) {
    *(undefined4 *)(param_1[0xbb] + 4) = param_1[0xbc];
  }
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbf] = 0;
  if ((undefined4 *)param_1[0xbc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xbc] = param_1[0xbb];
  }
  if (param_1[0xbb] != 0) {
    *(undefined4 *)(param_1[0xbb] + 4) = param_1[0xbc];
  }
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xb4] = &PTR_LAB_00d29d60;
  if ((undefined4 *)param_1[0xb6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb6] = param_1[0xb5];
  }
  if (param_1[0xb5] != 0) {
    *(undefined4 *)(param_1[0xb5] + 4) = param_1[0xb6];
  }
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  if ((undefined4 *)param_1[0xb6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb6] = param_1[0xb5];
  }
  if (param_1[0xb5] != 0) {
    *(undefined4 *)(param_1[0xb5] + 4) = param_1[0xb6];
  }
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xab] = &PTR_LAB_00d1e3c4;
  if ((undefined4 *)param_1[0xad] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xad] = param_1[0xac];
  }
  if (param_1[0xac] != 0) {
    *(undefined4 *)(param_1[0xac] + 4) = param_1[0xad];
  }
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xb0] = 0;
  if ((undefined4 *)param_1[0xad] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xad] = param_1[0xac];
  }
  if (param_1[0xac] != 0) {
    *(undefined4 *)(param_1[0xac] + 4) = param_1[0xad];
  }
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  if ((undefined4 *)param_1[0xa8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa8] = param_1[0xa7];
  }
  if (param_1[0xa7] != 0) {
    *(undefined4 *)(param_1[0xa7] + 4) = param_1[0xa8];
  }
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  local_4 = CONCAT31(local_4._1_3_,0x13);
  FUN_004b8da0(param_1 + 0x9f,&iStack_10,*(int **)param_1[0xa0],(int *)param_1[0xa0]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xa0]);
}


//// FUNCTION FUN_005c0390 @ 005c0390 ////

void __fastcall FUN_005c0390(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  int *local_4;
  
  local_4 = param_1;
  if ((void *)param_1[0x45] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x45]);
  }
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  FUN_00567490(param_1 + 0x44,DAT_00f88664);
  local_4 = (int *)*DAT_00f88660;
  if (local_4 != DAT_00f88660) {
    do {
      iVar2 = FUN_00449b50(local_4[0xb]);
      *(undefined4 *)(param_1[0x45] + (iVar2 + -1) * 4) = 0;
      FUN_00449dd0((int *)&local_4);
    } while (local_4 != DAT_00f88660);
  }
  piVar7 = (int *)param_1[0x2b];
  if (piVar7 != param_1 + 0x2e) {
    do {
      iVar2 = FUN_004df4a0(piVar7[2]);
      if (*(int *)(iVar2 + 100) == 0) {
        local_4 = (int *)0x0;
      }
      else {
        local_4 = (int *)(*(int *)(iVar2 + 0x68) - *(int *)(iVar2 + 100) >> 2);
      }
      fVar1 = (float)(int)local_4;
      if ((int)local_4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      piVar8 = *(int **)(iVar2 + 100);
      if (piVar8 != *(int **)(iVar2 + 0x68)) {
        local_4 = (int *)(1.0 / fVar1);
        do {
          iVar3 = FUN_00449b50(*piVar8);
          piVar8 = piVar8 + 1;
          *(float *)(param_1[0x45] + (iVar3 + -1) * 4) =
               (float)local_4 + *(float *)(param_1[0x45] + (iVar3 + -1) * 4);
        } while (piVar8 != *(int **)(iVar2 + 0x68));
      }
      piVar7 = (int *)piVar7[1];
    } while (piVar7 != param_1 + 0x2e);
  }
  pfVar5 = (float *)param_1[0x45];
  fVar1 = 0.0;
  pfVar6 = (float *)param_1[0x46];
  pfVar4 = pfVar5;
  if (pfVar5 != pfVar6) {
    do {
      fVar1 = fVar1 + *pfVar4;
      pfVar4 = pfVar4 + 1;
    } while (pfVar4 != pfVar6);
    if (fVar1 != 0.0) {
      if (pfVar5 != pfVar6) {
        do {
          pfVar6 = pfVar5 + 1;
          *pfVar5 = (1.0 / fVar1) * *pfVar5;
          pfVar5 = pfVar6;
        } while (pfVar6 != (float *)param_1[0x46]);
      }
      return;
    }
  }
  iVar2 = FUN_00449b50(param_1[0x6b]);
  *(undefined4 *)(param_1[0x45] + (iVar2 + -1) * 4) = 0x3f800000;
  return;
}


//// FUNCTION FUN_005c0510 @ 005c0510 ////

undefined4 __thiscall FUN_005c0510(void *this,void *param_1,int param_2)

{
  int *piVar1;
  void *this_00;
  undefined4 *this_01;
  int iVar2;
  uint uVar3;
  int *piVar4;
  wchar_t *local_20;
  undefined4 local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  this_01 = FUN_004eb920(this,param_1);
  FUN_004e16c0(this_01,param_2,0);
  this_00 = DAT_0104d8e8;
  if (DAT_0104d8e8 != (void *)0x0) {
    iVar2 = FUN_004df220((int)this_01);
    FUN_00604b70(this_00,iVar2);
  }
  piVar4 = this_01 + 0x23;
  piVar1 = (int *)((int)this + 0xb8);
  this_01[0x24] = piVar1;
  *piVar4 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar4;
  *piVar1 = (int)piVar4;
  FUN_005c0390(this);
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_20,(wchar_t *)&lpCaption_00d16918,uVar3);
  iVar2 = _wcscmp(*(wchar_t **)((int)this + 0x25c),local_20);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (iVar2 == 0) {
    piVar4 = FUN_005be730((int *)&local_20,*(int *)((int)this + 0x1ac));
    FUN_004036d0((void *)((int)this + 0x25c),(wchar_t *)*piVar4,piVar4[1]);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  if (*(int *)((int)this + 0x210) != 0) {
    FUN_005d35f0(*(int *)((int)this + 0x210));
    return *(undefined4 *)(*(int *)((int)this + 0xb8) + 8);
  }
  return *(undefined4 *)(*(int *)((int)this + 0xb8) + 8);
}


//// FUNCTION FUN_005c06a0 @ 005c06a0 ////

void __thiscall FUN_005c06a0(void *this,float param_1)

{
  int *piVar1;
  void *this_00;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  undefined1 local_34 [4];
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  fVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6340;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (iVar7 = *(int *)((int)this + 0xac); iVar7 != (int)this + 0xb8; iVar7 = *(int *)(iVar7 + 4)) {
    FUN_004e1b10(*(void **)(iVar7 + 8),(int)fVar2);
  }
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = 0;
  iVar7 = *(int *)(*(int *)((int)this + 0x1f8) + 100);
  local_4 = 0;
  if (iVar7 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68)) {
    do {
      iVar4 = *(int *)(iVar7 + 0x14);
      if ((iVar4 != 0) && (uVar3 = FUN_005b5940(this,iVar4), (char)uVar3 == '\0')) {
        local_18 = &local_24;
        local_1c = (int *)(iVar4 + 0x18);
        local_24 = &PTR_FUN_00d1cafc;
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
        local_4._0_1_ = 1;
        local_10 = iVar4;
        FUN_005a85b0(local_34,(int)&local_24);
        local_4 = (uint)local_4._1_3_ << 8;
        local_24 = &PTR_FUN_00d1cafc;
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        local_10 = 0;
        local_20 = 0;
        local_1c = (int *)0x0;
      }
      iVar7 = iVar7 + 0x18;
    } while (iVar7 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
  }
  piVar6 = local_30;
  if (local_30 != local_2c) {
    do {
      FUN_005a84f0(*(void **)((int)this + 0x1f8),(undefined4 *)piVar6[5]);
      piVar6 = piVar6 + 6;
    } while (piVar6 != local_2c);
  }
  iVar7 = *(int *)(*(int *)((int)this + 0x1f8) + 100);
  if (iVar7 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68)) {
    do {
      this_00 = *(void **)(iVar7 + 0x14);
      if (((this_00 != (void *)0x0) && (iVar4 = FUN_005a64e0((int)this_00), iVar4 != 0)) &&
         (pfVar5 = (float *)FUN_005b60f0(this,&param_1,(int)this_00), *pfVar5 == 0.0)) {
        FUN_005a6480(this_00,0);
      }
      iVar7 = iVar7 + 0x18;
    } while (iVar7 != *(int *)(*(int *)((int)this + 0x1f8) + 0x68));
  }
  if (local_30 != (int *)0x0) {
    if (local_30 != local_2c) {
      piVar6 = local_30 + 2;
      do {
        piVar6[-2] = (int)&PTR_FUN_00d1cafc;
        if ((int *)*piVar6 != (int *)0x0) {
          *(int *)*piVar6 = piVar6[-1];
        }
        if (piVar6[-1] != 0) {
          *(int *)(piVar6[-1] + 4) = *piVar6;
        }
        piVar6[-1] = 0;
        *piVar6 = 0;
        piVar6[3] = 0;
        if ((int *)*piVar6 != (int *)0x0) {
          *(int *)*piVar6 = piVar6[-1];
        }
        if (piVar6[-1] != 0) {
          *(int *)(piVar6[-1] + 4) = *piVar6;
        }
        piVar6[-1] = 0;
        *piVar6 = 0;
        piVar1 = piVar6 + 4;
        piVar6 = piVar6 + 6;
      } while (piVar1 != local_2c);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION CFacilityPreProduction_AddCrewIfAbsent @ 005c08b0 ////

undefined4 __thiscall CFacilityPreProduction_AddCrewIfAbsent(void *this,int param_1)

{
  uint uVar1;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb6358;
  local_c = ExceptionList;
  uVar1 = *(uint *)((int)this + 0x134);
  local_18 = (undefined1 *)&local_24;
  while( true ) {
    if (uVar1 == *(uint *)((int)this + 0x138)) {
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_FUN_00d18c4c;
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
      FUN_004db640((void *)((int)this + 0x130),(int)&local_24);
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)local_1c >> 8),1);
    }
    if (*(int *)(uVar1 + 0x14) == param_1) break;
    uVar1 = uVar1 + 0x18;
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_005c0990 @ 005c0990 ////

void __thiscall FUN_005c0990(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb6378;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d29c94;
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
  FUN_005bb1f0((void *)((int)this + 0x34c),(int)&local_24);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005c0a40 @ 005c0a40 ////

void __thiscall FUN_005c0a40(void *this,int *param_1,float param_2)

{
  void *this_00;
  void **ppvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iStack_44;
  int *piStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_34;
  void *pvStack_30;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb63a0;
  pvStack_c = ExceptionList;
  iVar6 = *(int *)((int)this + 0x3ac);
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (iVar6 != *(int *)((int)this + 0x3b0)) {
    do {
      this_00 = *(void **)(iVar6 + 0x14);
      if (this_00 != (void *)0x0) {
        iVar2 = (**(code **)(*param_1 + 0x80))();
        iVar3 = FUN_005cb9f0((int)this_00);
        if (iVar3 == iVar2) {
          FUN_005cba00(this_00,param_2);
          ExceptionList = pvStack_c;
          return;
        }
      }
      iVar6 = iVar6 + 0x18;
      ppvVar1 = ExceptionList;
    } while (iVar6 != *(int *)((int)this + 0x3b0));
  }
  ExceptionList = ppvVar1;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x5c))(local_2c);
  puStack_8 = (undefined1 *)0x0;
  uVar5 = (**(code **)(*param_1 + 0x80))();
  puStack_34 = FUN_005cbd10(uVar5,puVar4,param_1);
  if (uStack_28 < 0xb) {
    puStack_3c = &stack0xffffffb8;
    iStack_44 = 0;
    piStack_40 = (int *)0x0;
    if (puStack_34 != (undefined4 *)0x0) {
      piStack_40 = puStack_34 + 6;
      iStack_44 = *piStack_40;
      *(int **)(*piStack_40 + 4) = &iStack_44;
      *piStack_40 = (int)&iStack_44;
    }
    puStack_8 = (undefined1 *)0x1;
    FUN_005bb2c0((void *)((int)this + 0x3a8),(int)&stack0xffffffb8);
    if (piStack_40 != (int *)0x0) {
      *piStack_40 = iStack_44;
    }
    if (iStack_44 != 0) {
      *(int **)(iStack_44 + 4) = piStack_40;
    }
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_30);
}


//// FUNCTION FUN_005c0b90 @ 005c0b90 ////

void __thiscall FUN_005c0b90(void *this,int *param_1,float param_2)

{
  void *this_00;
  void **ppvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iStack_44;
  int *piStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_34;
  void *pvStack_30;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb63c0;
  pvStack_c = ExceptionList;
  iVar6 = *(int *)((int)this + 0x3bc);
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (iVar6 != *(int *)((int)this + 0x3c0)) {
    do {
      this_00 = *(void **)(iVar6 + 0x14);
      if (this_00 != (void *)0x0) {
        iVar2 = (**(code **)(*param_1 + 0x80))();
        iVar3 = FUN_005cb9f0((int)this_00);
        if (iVar3 == iVar2) {
          FUN_005cba00(this_00,param_2);
          ExceptionList = pvStack_c;
          return;
        }
      }
      iVar6 = iVar6 + 0x18;
      ppvVar1 = ExceptionList;
    } while (iVar6 != *(int *)((int)this + 0x3c0));
  }
  ExceptionList = ppvVar1;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x5c))(local_2c);
  puStack_8 = (undefined1 *)0x0;
  uVar5 = (**(code **)(*param_1 + 0x80))();
  puStack_34 = FUN_005cbd10(uVar5,puVar4,param_1);
  if (uStack_28 < 0xb) {
    puStack_3c = &stack0xffffffb8;
    iStack_44 = 0;
    piStack_40 = (int *)0x0;
    if (puStack_34 != (undefined4 *)0x0) {
      piStack_40 = puStack_34 + 6;
      iStack_44 = *piStack_40;
      *(int **)(*piStack_40 + 4) = &iStack_44;
      *piStack_40 = (int)&iStack_44;
    }
    puStack_8 = (undefined1 *)0x1;
    FUN_005bb2c0((void *)((int)this + 0x3b8),(int)&stack0xffffffb8);
    if (piStack_40 != (int *)0x0) {
      *piStack_40 = iStack_44;
    }
    if (iStack_44 != 0) {
      *(int **)(iStack_44 + 4) = piStack_40;
    }
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_30);
}


//// FUNCTION FUN_005c0ce0 @ 005c0ce0 ////

void __fastcall FUN_005c0ce0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d29d7c;
  return;
}


//// FUNCTION FUN_005c0d40 @ 005c0d40 ////

void __fastcall FUN_005c0d40(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d29d88;
  return;
}


//// FUNCTION FUN_005c0da0 @ 005c0da0 ////

void __fastcall FUN_005c0da0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d29d70;
  return;
}


//// FUNCTION FUN_005c0e00 @ 005c0e00 ////

void __thiscall FUN_005c0e00(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00580540(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_005bb3f0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005c0e90 @ 005c0e90 ////

void FUN_005c0e90(void)

{
  undefined *local_4;
  
  FUN_0098fd30("GameID",&PTR_DAT_00e544d4,5);
  local_4 = &DAT_0104d680;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104d680;
    DAT_010584cc = DAT_010584cc + 1;
  }
  FUN_0098fd30("(int&)DefaultJourneyType",&DAT_00e544d0,1);
  return;
}


//// FUNCTION CProject_Constructor @ 005c0f10 ////

undefined4 * __fastcall CProject_Constructor(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
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
  puStack_8 = &LAB_00cb6669;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d2a148;
  param_1[0x19] = &PTR_LAB_00d2a128;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_1 + 0x23;
  param_1[0x23] = &PTR_FUN_00d1f03c;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  puVar5 = param_1 + 0x2e;
  param_1[0x30] = 0;
  *puVar5 = 0;
  param_1[0x2f] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x29] = &PTR_LAB_00d29d7c;
  param_1[0x2b] = puVar5;
  *puVar5 = param_1 + 0x2a;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  puVar5 = param_1 + 0x3b;
  param_1[0x3d] = 0;
  *puVar5 = 0;
  param_1[0x3c] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x36] = &PTR_LAB_00d29d88;
  param_1[0x38] = puVar5;
  *puVar5 = param_1 + 0x37;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x53] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = param_1 + 0x50;
  param_1[0x50] = &PTR_FUN_00d1cafc;
  param_1[0x55] = 0;
  param_1[0x59] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = param_1 + 0x56;
  param_1[0x56] = &PTR_LAB_00d29d00;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = param_1 + 0x60;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0x14;
  piVar1 = param_1 + 0x66;
  param_1[0x69] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1a49c;
  param_1[0x6b] = 0;
  param_1[0x70] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = param_1 + 0x6d;
  param_1[0x6d] = &PTR_FUN_00d18c4c;
  param_1[0x72] = 0;
  param_1[0x76] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = param_1 + 0x73;
  param_1[0x73] = &PTR_LAB_00d29d10;
  param_1[0x78] = 0;
  param_1[0x7c] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = param_1 + 0x79;
  param_1[0x79] = &PTR_LAB_00d1f04c;
  param_1[0x7e] = 0;
  param_1[0x82] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = param_1 + 0x7f;
  param_1[0x7f] = &PTR_FUN_00d29d20;
  param_1[0x84] = 0;
  param_1[0x88] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = param_1 + 0x85;
  param_1[0x85] = &PTR_LAB_00d29d30;
  param_1[0x8a] = 0;
  piVar2 = param_1 + 0x8b;
  param_1[0x8e] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d29d40;
  param_1[0x90] = 0;
  param_1[0x94] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = param_1 + 0x91;
  param_1[0x91] = &PTR_LAB_00d29d50;
  param_1[0x96] = 0;
  param_1[0x97] = param_1 + 0x9a;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 10;
  local_4._0_1_ = 0x17;
  iVar3 = FUN_004b6d90();
  param_1[0xa0] = iVar3;
  *(undefined1 *)(iVar3 + 0x31) = 1;
  *(undefined4 *)(param_1[0xa0] + 4) = param_1[0xa0];
  *(undefined4 *)param_1[0xa0] = param_1[0xa0];
  *(undefined4 *)(param_1[0xa0] + 8) = param_1[0xa0];
  param_1[0xa1] = 0;
  local_4._0_1_ = 0x18;
  FUN_0043b520(param_1 + 0xa2,0.0);
  FUN_0043b510(param_1 + 0xa3);
  FUN_0043b510(param_1 + 0xa4);
  param_1[0xa5] = param_1[0xa5] & 0xfffffffe;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  param_1[0xa9] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xae] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = param_1 + 0xab;
  param_1[0xab] = &PTR_LAB_00d1e3c4;
  param_1[0xb0] = 0;
  local_4._0_1_ = 0x1a;
  param_1[0xb1] = 0;
  FUN_0043b510(param_1 + 0xb2);
  param_1[0xb3] = param_1[0xb3] & 0xfffffffe;
  param_1[0xb7] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = param_1 + 0xb4;
  param_1[0xb4] = &PTR_LAB_00d29d60;
  param_1[0xb9] = 0;
  param_1[0xbd] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = param_1 + 0xba;
  param_1[0xba] = &PTR_LAB_00d1e56c;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc4] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = param_1 + 0xc1;
  param_1[0xc1] = &PTR_FUN_00d1aef0;
  param_1[0xc6] = 0;
  param_1[0xca] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = param_1 + 199;
  param_1[199] = &PTR_LAB_00d25c80;
  param_1[0xcc] = 0;
  param_1[0xd0] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = param_1 + 0xcd;
  param_1[0xcd] = &PTR_LAB_00d29c94;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = param_1 + 0xdd;
  param_1[0xdd] = &PTR_LAB_00d28e58;
  param_1[0xe2] = 0;
  param_1[0xe6] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = param_1 + 0xe3;
  param_1[0xe3] = &PTR_LAB_00d28e68;
  param_1[0xe8] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf5] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  puVar5 = param_1 + 0xf7;
  param_1[0xf9] = 0;
  *puVar5 = 0;
  param_1[0xf8] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xf2] = &PTR_LAB_00d29d70;
  param_1[0xf4] = puVar5;
  *puVar5 = param_1 + 0xf3;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0x103) = 0;
  *(undefined1 *)((int)param_1 + 0x40d) = 0;
  *(undefined1 *)((int)param_1 + 0x40e) = 0;
  param_1[0x107] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = param_1 + 0x104;
  param_1[0x104] = &PTR_LAB_00d29c74;
  param_1[0x109] = 0;
  local_4 = CONCAT31(local_4._1_3_,0x29);
  param_1[0xa9] = param_1;
  FUN_00acdb9e(0xe54768);
  iVar3 = FUN_0097dda0();
  param_1[0xaa] = iVar3;
  if (DAT_00e54765 != '\0') {
    iVar3 = 0x29c;
    pcVar6 = "ProjectLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe54768);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    DAT_00e54765 = '\0';
  }
  param_1[0x4a] = param_1;
  FUN_00acdb9e(0xe54768);
  iVar3 = FUN_0097dda0();
  param_1[0x4b] = iVar3;
  if (DAT_00e54764 != '\0') {
    iVar3 = 0x120;
    pcVar6 = "StudioLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe54768);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    DAT_00e54764 = '\0';
  }
  *(undefined1 *)((int)param_1 + 0x61) = 1;
  param_1[0xe9] = DAT_00e544d0;
  FUN_005202b0();
  iVar3 = AudienceTaste_GetMostPopularGenre();
  (**(code **)(*piVar1 + 4))();
  param_1[0x6b] = iVar3;
  (**(code **)*piVar1)();
  *(undefined1 *)(param_1 + 0x6c) = 0;
  (**(code **)(*piVar2 + 4))();
  param_1[0x90] = 0;
  (**(code **)*piVar2)();
  iVar3 = FUN_005389b0();
  param_1[0x65] = iVar3;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"PROJECT_UNTITLED",0x10);
  local_48 = 0x10;
  local_4c[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x2a);
  puVar5 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0(param_1 + 0x97,(wchar_t *)*puVar5,puVar5[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  DAT_0104d660 = DAT_0104d660 + 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005c15a0 @ 005c15a0 ////

undefined4 * __thiscall FUN_005c15a0(void *this,byte param_1)

{
  CProject_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005c15c0 @ 005c15c0 ////

uint __fastcall FUN_005c15c0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 local_c [12];
  
  (**(code **)(**(int **)((int)param_1 + 0x210) + 0x34))(local_c);
  if (*(int *)((int)param_1 + 0x134) == 0) {
    uVar8 = 0;
    uVar6 = 0;
  }
  else {
    iVar5 = *(int *)((int)param_1 + 0x138) - *(int *)((int)param_1 + 0x134);
    uVar6 = iVar5 * 0x2aaaaaab;
    uVar8 = iVar5 / 0x18;
  }
  if (uVar8 < *(uint *)((int)param_1 + 0x300)) {
    do {
      puVar7 = DAT_0104cfc8;
      if (DAT_0104cfc8 != &DAT_0104cfd4) {
        do {
          piVar2 = (int *)puVar7[2];
          cVar3 = (**(code **)(*piVar2 + 0x1c0))(0,0);
          if ((((cVar3 != '\0') && (uVar4 = FUN_00576040((int)piVar2), (char)uVar4 != '\0')) &&
              (*(int **)((int)param_1 + 0x1c8) != piVar2)) &&
             ((iVar5 = FUN_005a7640(*(void **)((int)param_1 + 0x1f8),(int)piVar2,0), iVar5 == 0 &&
              (uVar4 = CFacilityPreProduction_AddCrewIfAbsent(param_1,(int)piVar2),
              (char)uVar4 != '\0')))) break;
          puVar1 = puVar7 + 1;
          puVar7 = (undefined4 *)*puVar1;
        } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
      }
      uVar6 = *(uint *)((int)param_1 + 0x300);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  return uVar6;
}


//// FUNCTION FUN_005c1690 @ 005c1690 ////

void __fastcall FUN_005c1690(void *param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  float10 fVar8;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  if (*(int *)((int)param_1 + 0x330) == 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0.0;
    local_10 = 0;
    FUN_0043b510(&local_c);
    local_20 = *(undefined4 *)((int)param_1 + 0x25c);
    local_4 = 0.0;
    iVar2 = FUN_005b2130((int)param_1);
    iVar2 = FUN_004bdcc0(iVar2);
    puVar3 = (undefined4 *)FUN_00449b40(iVar2);
    local_1c = *puVar3;
    puVar3 = (undefined4 *)CProject_GetQualityWithAwardBoost(param_1,&local_24);
    fVar6 = *(float *)((int)param_1 + 0x170);
    local_18 = *puVar3;
    if (fVar6 == 0.0) {
      pfVar4 = (float *)CProject_GetQualityWithAwardBoost(param_1,&local_24);
      fVar6 = *pfVar4;
      local_24 = fVar6;
    }
    local_14 = fVar6;
    puVar3 = (undefined4 *)FUN_005dd5c0(*(void **)((int)param_1 + 0x388),&local_24);
    local_10 = *puVar3;
    local_c = *(undefined4 *)((int)param_1 + 0x288);
    FUN_005b3960(&local_8,&local_4,(int)param_1);
    puVar3 = FUN_005d0cc0(&local_20);
    piVar1 = (int *)((int)param_1 + 0x31c);
    (**(code **)(*piVar1 + 4))();
    *(undefined4 **)((int)param_1 + 0x330) = puVar3;
    (**(code **)*piVar1)();
    fVar6 = *(float *)((int)param_1 + 0x1c8);
    if (fVar6 != 0.0) {
      this = *(void **)((int)param_1 + 0x330);
      fVar8 = FUN_005b7570((int)param_1,fVar6);
      uVar7 = extraout_ECX;
      FUN_00407070(&stack0xffffffc8,(float)fVar8);
      FUN_005ce700(this,fVar6,uVar7);
      FUN_005c0e00((void *)((int)fVar6 + 0x770),(int)piVar1);
    }
    fVar6 = *(float *)((int)param_1 + 0xac);
    if (fVar6 != (float)((int)param_1 + 0xb8)) {
      do {
        local_24 = fVar6;
        iVar2 = FUN_004de100(*(int *)((int)fVar6 + 8));
        iVar2 = *(int *)(iVar2 + 8);
        iVar5 = FUN_004de100(*(int *)((int)fVar6 + 8));
        if (iVar2 != iVar5 + 0x14) {
          do {
            fVar6 = (float)FUN_0048c950(*(int *)(iVar2 + 8));
            if ((fVar6 != 0.0) &&
               (uVar7 = FUN_005ceaf0(*(void **)((int)param_1 + 0x330),(int)fVar6),
               (char)uVar7 == '\0')) {
              FUN_005b7570((int)param_1,fVar6);
              FUN_005d0a20(*(void **)((int)param_1 + 0x330),(int)fVar6);
              FUN_005c0e00((void *)((int)fVar6 + 0x770),(int)piVar1);
            }
            iVar2 = *(int *)(iVar2 + 4);
            iVar5 = FUN_004de100(*(int *)((int)local_24 + 8));
            fVar6 = local_24;
          } while (iVar2 != iVar5 + 0x14);
        }
        fVar6 = *(float *)((int)fVar6 + 4);
      } while (fVar6 != (float)((int)param_1 + 0xb8));
    }
  }
  return;
}


//// FUNCTION FUN_005c18b0 @ 005c18b0 ////

undefined4 * FUN_005c18b0(void)

{
  undefined4 *puVar1;
  void *this;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb66ac;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x428);
  puVar5 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = CProject_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  this = operator_new(0x1c8);
  local_4 = 1;
  if (this != (void *)0x0) {
    puVar5 = FUN_005ca8c0(this,(int)puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x8b] + 4))();
  puVar1[0x90] = puVar5;
  (**(code **)puVar1[0x8b])();
  puVar5 = operator_new(0x84);
  local_4 = 2;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_005cc9c0(puVar5);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x104] + 4))();
  puVar1[0x109] = puVar5;
  (**(code **)puVar1[0x104])();
  FUN_005b1fd0((int)puVar1);
  puVar5 = FUN_005d4210(puVar1);
  (**(code **)(puVar1[0x7f] + 4))();
  puVar1[0x84] = puVar5;
  (**(code **)puVar1[0x7f])();
  piVar2 = puVar1 + 0xa7;
  puVar1[0xa8] = &DAT_0104d694;
  iVar9 = 0;
  *piVar2 = (int)DAT_0104d694;
  pTVar8 = &TM::CStudioPlayer::RTTI_Type_Descriptor;
  pTVar7 = &TM::CStudio::RTTI_Type_Descriptor;
  *(int **)((int)DAT_0104d694 + 4) = piVar2;
  iVar6 = 0;
  DAT_0104d694 = piVar2;
  piVar2 = (int *)GetPlayerStudio();
  iVar6 = FUN_00ace790(piVar2,iVar6,pTVar7,pTVar8,iVar9);
  piVar2 = puVar1 + 0x48;
  piVar3 = (int *)(iVar6 + 0x204);
  puVar1[0x49] = piVar3;
  *piVar2 = *piVar3;
  *(int **)(*piVar3 + 4) = piVar2;
  *piVar3 = (int)piVar2;
  puVar5 = operator_new(0xe0);
  local_4 = 3;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_005a8e30(puVar5);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x50] + 4))();
  puVar1[0x55] = puVar5;
  (**(code **)puVar1[0x50])();
  FUN_005a6440((void *)puVar1[0x55],0);
  FUN_005a6480((void *)puVar1[0x55],0);
  *(undefined4 *)(puVar1[0x55] + 0x88) = 4;
  *(undefined4 *)(puVar1[0x55] + 0x8c) = 0xffffffff;
  FUN_005a63c0((void *)puVar1[0x55],0);
  iVar6 = puVar1[0x55];
  uVar4 = FUN_00ace02d(L"Unfilled Role");
  FUN_004036d0((void *)(iVar6 + 0x60),L"Unfilled Role",uVar4);
  *(undefined1 *)(puVar1[0x55] + 0x80) = 0;
  FUN_005b5b20();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_005c1ae0 @ 005c1ae0 ////

undefined4 * FUN_005c1ae0(int param_1,float param_2,char param_3)

{
  byte bVar1;
  float fVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  bool bVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 uVar15;
  size_t sVar16;
  uint *puVar17;
  byte *pbVar18;
  char *_Source;
  undefined4 **ppuVar19;
  int iVar20;
  int **ppiVar21;
  byte *pbVar22;
  undefined4 *puVar23;
  float10 fVar24;
  ulonglong uVar25;
  double dVar26;
  uint uVar27;
  uint uVar28;
  char *pcVar29;
  char **ppcVar30;
  undefined4 *local_560;
  uint local_55c;
  char cStack_555;
  char *local_554;
  undefined4 local_550;
  uint local_54c;
  char local_548 [20];
  int *local_534;
  int local_530;
  undefined4 *puStack_52c;
  char cStack_526;
  char cStack_525;
  int local_524;
  float fStack_520;
  int local_51c;
  int local_518;
  undefined4 *puStack_514;
  void *pvStack_510;
  void *pvStack_50c;
  int local_508;
  undefined4 *local_504;
  undefined1 auStack_500 [4];
  int *piStack_4fc;
  int *piStack_4f8;
  int iStack_4f4;
  int iStack_4f0;
  undefined1 auStack_4ec [4];
  void *pvStack_4e8;
  undefined4 *puStack_4e4;
  int iStack_4e0;
  undefined4 *puStack_4dc;
  undefined4 *puStack_4d8;
  undefined4 *puStack_4d4;
  float fStack_4d0;
  int *apiStack_4cc [4];
  undefined1 auStack_4bc [4];
  int *piStack_4b8;
  int *piStack_4b4;
  int iStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  undefined4 *puStack_4a4;
  char *local_4a0;
  uint uStack_49c;
  uint local_498;
  undefined1 *puStack_480;
  undefined4 uStack_47c;
  uint uStack_478;
  undefined1 auStack_474 [20];
  undefined1 auStack_460 [4];
  undefined4 *puStack_45c;
  undefined4 *puStack_458;
  undefined4 uStack_454;
  undefined1 auStack_450 [4];
  undefined4 *puStack_44c;
  undefined4 *puStack_448;
  undefined4 uStack_444;
  char *pcStack_440;
  uint uStack_43c;
  uint uStack_438;
  char acStack_434 [20];
  char *pcStack_420;
  undefined4 uStack_41c;
  uint uStack_418;
  char acStack_414 [20];
  undefined1 auStack_400 [4];
  int iStack_3fc;
  int iStack_3f8;
  undefined4 uStack_3f4;
  byte *pbStack_3f0;
  uint uStack_3ec;
  uint uStack_3e8;
  byte abStack_3e4 [20];
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  undefined1 auStack_3c4 [4];
  int iStack_3c0;
  int iStack_3bc;
  undefined4 uStack_3b8;
  undefined1 auStack_3b4 [4];
  int iStack_3b0;
  int iStack_3ac;
  undefined4 uStack_3a8;
  char *pcStack_3a4;
  undefined4 uStack_3a0;
  uint uStack_39c;
  char acStack_398 [20];
  char *pcStack_384;
  undefined4 uStack_380;
  uint uStack_37c;
  char acStack_378 [20];
  char *pcStack_364;
  undefined4 uStack_360;
  uint uStack_35c;
  char acStack_358 [20];
  char *pcStack_344;
  undefined4 uStack_340;
  uint uStack_33c;
  char acStack_338 [20];
  undefined1 *puStack_324;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined1 auStack_318 [20];
  undefined1 *puStack_304;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined1 auStack_2f8 [20];
  undefined1 *puStack_2e4;
  undefined4 uStack_2e0;
  uint uStack_2dc;
  undefined1 auStack_2d8 [20];
  byte *apbStack_2c4 [2];
  uint uStack_2bc;
  uint *apuStack_2a4 [2];
  uint uStack_29c;
  void *apvStack_284 [2];
  uint uStack_27c;
  void *apvStack_264 [2];
  uint uStack_25c;
  void *apvStack_244 [2];
  uint uStack_23c;
  char acStack_224 [64];
  undefined4 auStack_1e4 [54];
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb69c3;
  pvStack_c = ExceptionList;
  local_55c = 0;
  ExceptionList = &pvStack_c;
  puVar8 = FUN_005c18b0();
  pvVar10 = (void *)puVar8[0x7e];
  local_518 = 1;
  local_560 = (undefined4 *)0xffffffff;
  local_530 = 0;
  local_524 = 0;
  local_504 = puVar8;
  if (param_2 < 0.2 == (param_2 == 0.2)) {
    if (param_2 < 0.4 == (param_2 == 0.4)) {
      if (param_2 < 0.6 == (param_2 == 0.6)) {
        if (param_2 < 0.8 == (param_2 == 0.8)) {
          puVar8[0xe9] = 3;
          local_518 = 4;
          puVar9 = FUN_005a90f0(pvVar10,0,1);
          if (puVar9 != (undefined4 *)0x0) {
            FUN_00401de0(&local_4a0,"costume_actor",0xffffffff);
            local_4 = 0x1b;
            FUN_004335f0(&local_530,&local_4a0,0,3,0,0);
            local_4 = CONCAT31(local_4._1_3_,0x1d);
            if (0x14 < local_498) {
                    /* WARNING: Subroutine does not return */
              _free(local_4a0);
            }
            if (local_530 != 0) {
              *(uint *)(local_530 + 0xa4) = *(uint *)(local_530 + 0xa4) | 1;
              FUN_004319b0(local_530);
              FUN_005a63c0(puVar9,local_530);
            }
            local_4 = 0xffffffff;
            FUN_00430830(&local_530);
          }
          puVar9 = FUN_005a90f0((void *)puVar8[0x7e],0,2);
          if (puVar9 != (undefined4 *)0x0) {
            FUN_00401de0(&local_4a0,"costume_actor",0xffffffff);
            local_4 = 0x1e;
            FUN_004335f0(&local_530,&local_4a0,0,3,0,0);
            local_4 = CONCAT31(local_4._1_3_,0x20);
            if (0x14 < local_498) {
                    /* WARNING: Subroutine does not return */
              _free(local_4a0);
            }
            if (local_530 != 0) {
              *(uint *)(local_530 + 0xa4) = *(uint *)(local_530 + 0xa4) | 1;
              FUN_004319b0(local_530);
              FUN_005a63c0(puVar9,local_530);
            }
            local_4 = 0xffffffff;
            FUN_00430830(&local_530);
          }
          puVar9 = FUN_005a90f0((void *)puVar8[0x7e],0,3);
          if (puVar9 != (undefined4 *)0x0) {
            FUN_00401de0(&local_4a0,"costume_actor",0xffffffff);
            local_4 = 0x21;
            FUN_004335f0(&local_530,&local_4a0,0,3,0,0);
            local_4 = CONCAT31(local_4._1_3_,0x23);
            if (0x14 < local_498) {
                    /* WARNING: Subroutine does not return */
              _free(local_4a0);
            }
            if (local_530 != 0) {
              *(uint *)(local_530 + 0xa4) = *(uint *)(local_530 + 0xa4) | 1;
              FUN_004319b0(local_530);
              FUN_005a63c0(puVar9,local_530);
            }
            local_4 = 0xffffffff;
            FUN_00430830(&local_530);
          }
          local_51c = 0xf;
          local_534 = (int *)0xf;
          local_530 = 4;
          local_508 = 5;
        }
        else {
          puVar8[0xe9] = 2;
          local_518 = 3;
          puVar9 = FUN_005a90f0(pvVar10,0,1);
          if (puVar9 != (undefined4 *)0x0) {
            FUN_00401de0(&local_4a0,"costume_actor",0xffffffff);
            local_4 = 0x12;
            FUN_004335f0((int *)&local_560,&local_4a0,0,3,0,0);
            local_4 = CONCAT31(local_4._1_3_,0x14);
            if (0x14 < local_498) {
                    /* WARNING: Subroutine does not return */
              _free(local_4a0);
            }
            if (local_560 != (undefined4 *)0x0) {
              local_560[0x29] = local_560[0x29] | 1;
              FUN_004319b0((int)local_560);
              FUN_005a63c0(puVar9,local_560);
            }
            local_4 = 0xffffffff;
            FUN_00430830((int *)&local_560);
          }
          puVar9 = FUN_005a90f0((void *)puVar8[0x7e],0,2);
          if (puVar9 != (undefined4 *)0x0) {
            FUN_00401de0(&local_4a0,"costume_actor",0xffffffff);
            local_4 = 0x15;
            FUN_004335f0((int *)&local_560,&local_4a0,0,3,0,0);
            local_4 = CONCAT31(local_4._1_3_,0x17);
            if (0x14 < local_498) {
                    /* WARNING: Subroutine does not return */
              _free(local_4a0);
            }
            if (local_560 != (undefined4 *)0x0) {
              local_560[0x29] = local_560[0x29] | 1;
              FUN_004319b0((int)local_560);
              FUN_005a63c0(puVar9,local_560);
            }
            local_4 = 0xffffffff;
            FUN_00430830((int *)&local_560);
          }
          puVar9 = FUN_005a90f0((void *)puVar8[0x7e],0,3);
          if (puVar9 != (undefined4 *)0x0) {
            FUN_00401de0(&local_4a0,"costume_actor",0xffffffff);
            local_4 = 0x18;
            FUN_004335f0((int *)&local_560,&local_4a0,1,3,0,0);
            local_4 = CONCAT31(local_4._1_3_,0x1a);
            if (0x14 < local_498) {
                    /* WARNING: Subroutine does not return */
              _free(local_4a0);
            }
            if (local_560 != (undefined4 *)0x0) {
              local_560[0x29] = local_560[0x29] | 1;
              FUN_004319b0((int)local_560);
              FUN_005a63c0(puVar9,local_560);
            }
            local_4 = 0xffffffff;
            FUN_00430830((int *)&local_560);
          }
          local_51c = 0xc;
          local_534 = (int *)0x7;
          local_560 = (undefined4 *)0x4;
          local_530 = 3;
          local_508 = 4;
        }
      }
      else {
        puVar8[0xe9] = 2;
        local_518 = 2;
        puVar9 = FUN_005a90f0(pvVar10,0,1);
        if (puVar9 != (undefined4 *)0x0) {
          local_554 = local_548;
          local_548[0] = '\0';
          local_550 = 0;
          local_54c = 0x14;
          _strncpy(local_554,"costume_actor",0xd);
          local_550 = 0xd;
          local_554[0xd] = '\0';
          local_4 = 9;
          FUN_004335f0((int *)&local_560,&local_554,0,3,0,0);
          local_4 = CONCAT31(local_4._1_3_,0xb);
          if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
            _free(local_554);
          }
          if (local_560 != (undefined4 *)0x0) {
            local_560[0x29] = local_560[0x29] | 1;
            FUN_004319b0((int)local_560);
            FUN_005a63c0(puVar9,local_560);
          }
          local_4 = 0xffffffff;
          if ((local_560 != (undefined4 *)0x0) &&
             (iVar20 = local_560[0x12], local_560[0x12] = iVar20 + -1, iVar20 + -1 == 0)) {
            (**(code **)*local_560)();
          }
        }
        puVar9 = FUN_005a90f0((void *)puVar8[0x7e],0,2);
        if (puVar9 != (undefined4 *)0x0) {
          local_554 = local_548;
          local_548[0] = '\0';
          local_550 = 0;
          local_54c = 0x14;
          _strncpy(local_554,"costume_actor",0xd);
          local_550 = 0xd;
          local_554[0xd] = '\0';
          local_4 = 0xc;
          FUN_004335f0((int *)&local_560,&local_554,0,3,0,0);
          local_4 = CONCAT31(local_4._1_3_,0xe);
          if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
            _free(local_554);
          }
          if (local_560 != (undefined4 *)0x0) {
            local_560[0x29] = local_560[0x29] | 1;
            FUN_004319b0((int)local_560);
            FUN_005a63c0(puVar9,local_560);
          }
          local_4 = 0xffffffff;
          if ((local_560 != (undefined4 *)0x0) &&
             (iVar20 = local_560[0x12], local_560[0x12] = iVar20 + -1, iVar20 + -1 == 0)) {
            (**(code **)*local_560)();
          }
        }
        puVar9 = FUN_005a90f0((void *)puVar8[0x7e],0,3);
        if (puVar9 != (undefined4 *)0x0) {
          local_554 = local_548;
          local_548[0] = '\0';
          local_550 = 0;
          local_54c = 0x14;
          _strncpy(local_554,"costume_actor",0xd);
          local_550 = 0xd;
          local_554[0xd] = '\0';
          local_4 = 0xf;
          FUN_004335f0((int *)&local_560,&local_554,1,3,0,0);
          local_4 = CONCAT31(local_4._1_3_,0x11);
          if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
            _free(local_554);
          }
          if (local_560 != (undefined4 *)0x0) {
            local_560[0x29] = local_560[0x29] | 1;
            FUN_004319b0((int)local_560);
            FUN_005a63c0(puVar9,local_560);
          }
          local_4 = 0xffffffff;
          if ((local_560 != (undefined4 *)0x0) &&
             (iVar20 = local_560[0x12], local_560[0x12] = iVar20 + -1, iVar20 + -1 == 0)) {
            (**(code **)*local_560)();
          }
        }
        local_51c = 9;
        local_534 = (int *)0x7;
        local_560 = (undefined4 *)0x3;
        local_530 = 2;
        local_508 = 3;
      }
    }
    else {
      puVar8[0xe9] = 1;
      local_518 = 2;
      puVar9 = FUN_005a90f0(pvVar10,0,1);
      if (puVar9 != (undefined4 *)0x0) {
        local_554 = local_548;
        local_548[0] = '\0';
        local_550 = 0;
        local_54c = 0x14;
        _strncpy(local_554,"costume_actor",0xd);
        local_550 = 0xd;
        local_554[0xd] = '\0';
        local_4 = 3;
        FUN_004335f0((int *)&local_560,&local_554,0,3,0,0);
        local_4 = CONCAT31(local_4._1_3_,5);
        if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
          _free(local_554);
        }
        if (local_560 != (undefined4 *)0x0) {
          local_560[0x29] = local_560[0x29] | 1;
          FUN_004319b0((int)local_560);
          FUN_005a63c0(puVar9,local_560);
        }
        local_4 = 0xffffffff;
        if ((local_560 != (undefined4 *)0x0) &&
           (iVar20 = local_560[0x12], local_560[0x12] = iVar20 + -1, iVar20 + -1 == 0)) {
          (**(code **)*local_560)();
        }
      }
      puVar9 = FUN_005a90f0((void *)puVar8[0x7e],0,2);
      if (puVar9 != (undefined4 *)0x0) {
        local_554 = local_548;
        local_548[0] = '\0';
        local_550 = 0;
        local_54c = 0x14;
        _strncpy(local_554,"costume_actor",0xd);
        local_550 = 0xd;
        local_554[0xd] = '\0';
        local_4 = 6;
        FUN_004335f0((int *)&local_560,&local_554,0,3,0,0);
        local_4 = CONCAT31(local_4._1_3_,8);
        if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
          _free(local_554);
        }
        if (local_560 != (undefined4 *)0x0) {
          local_560[0x29] = local_560[0x29] | 1;
          FUN_004319b0((int)local_560);
          FUN_005a63c0(puVar9,local_560);
        }
        local_4 = 0xffffffff;
        if ((local_560 != (undefined4 *)0x0) &&
           (iVar20 = local_560[0x12], local_560[0x12] = iVar20 + -1, iVar20 + -1 == 0)) {
          (**(code **)*local_560)();
        }
      }
      local_51c = 6;
      local_534 = (int *)0x4;
      local_560 = (undefined4 *)0x2;
      local_530 = 1;
      local_508 = 2;
    }
  }
  else {
    puVar8[0xe9] = 1;
    puVar9 = FUN_005a90f0(pvVar10,0,1);
    if (puVar9 != (undefined4 *)0x0) {
      local_554 = local_548;
      local_548[0] = '\0';
      local_550 = 0;
      local_54c = 0x14;
      _strncpy(local_554,"costume_actor",0xd);
      local_550 = 0xd;
      local_554[0xd] = '\0';
      local_4 = 0;
      FUN_004335f0((int *)&local_560,&local_554,0,3,0,0);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
        _free(local_554);
      }
      if (local_560 != (undefined4 *)0x0) {
        local_560[0x29] = local_560[0x29] | 1;
        FUN_004319b0((int)local_560);
        FUN_005a63c0(puVar9,local_560);
      }
      local_4 = 0xffffffff;
      if ((local_560 != (undefined4 *)0x0) &&
         (iVar20 = local_560[0x12], local_560[0x12] = iVar20 + -1, iVar20 + -1 == 0)) {
        (**(code **)*local_560)();
      }
    }
    local_51c = 4;
    local_534 = (int *)0x4;
    local_560 = (undefined4 *)0x1;
    local_508 = 1;
  }
  pvVar10 = operator_new(0xd8);
  local_4 = 0x24;
  pvStack_50c = pvVar10;
  if (pvVar10 == (void *)0x0) {
    puStack_514 = (undefined4 *)0x0;
  }
  else {
    pcStack_3a4 = acStack_398;
    acStack_398[0] = '\0';
    uStack_3a0 = 0;
    uStack_39c = 0x20;
    pcStack_3a4 = _malloc(0x20);
    _strncpy(pcStack_3a4,"scene/scenecategories",0x15);
    uStack_3a0 = 0x15;
    pcStack_3a4[0x15] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x25);
    local_55c = 1;
    puStack_514 = FUN_0055c6d0(pvVar10,&pcStack_3a4,1);
  }
  local_4 = 0xffffffff;
  if (((local_55c & 1) != 0) && (local_55c = local_55c & 0xfffffffe, 0x14 < uStack_39c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_3a4);
  }
  pvVar10 = operator_new(0xd8);
  local_4 = 0x27;
  pvStack_50c = pvVar10;
  if (pvVar10 == (void *)0x0) {
    puStack_4d8 = (undefined4 *)0x0;
  }
  else {
    pcStack_384 = acStack_378;
    acStack_378[0] = '\0';
    uStack_380 = 0;
    uStack_37c = 0x20;
    pcStack_384 = _malloc(0x20);
    _strncpy(pcStack_384,"scene/stuntscenecategories",0x1a);
    uStack_380 = 0x1a;
    pcStack_384[0x1a] = '\0';
    local_55c = local_55c | 2;
    local_4 = CONCAT31(local_4._1_3_,0x28);
    puStack_4d8 = FUN_0055c6d0(pvVar10,&pcStack_384,1);
  }
  if (((local_55c & 2) != 0) && (local_55c = local_55c & 0xfffffffd, 0x14 < uStack_37c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_384);
  }
  pvStack_4e8 = (void *)0x0;
  puStack_4e4 = (undefined4 *)0x0;
  iStack_4e0 = 0;
  local_4._0_1_ = 0x2a;
  local_4._1_3_ = 0;
  apiStack_4cc[3] = (int *)0x0;
  apiStack_4cc[2] = (int *)0x0;
  apiStack_4cc[1] = (int *)0x0;
  if (param_3 != '\0') {
    local_554 = local_548;
    local_548[0] = '\0';
    local_550 = 0;
    local_54c = 0x14;
    _strncpy(local_554,"set_car",7);
    local_550 = 7;
    local_554[7] = '\0';
    local_4._0_1_ = 0x2b;
    puStack_52c = (undefined4 *)FUN_004cdf30(&local_554);
    local_4._0_1_ = 0x2a;
    if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
      _free(local_554);
    }
    if (puStack_52c != (undefined4 *)0x0) {
      FUN_00459200(auStack_4ec,&puStack_52c);
    }
    local_554 = local_548;
    local_548[0] = '\0';
    local_550 = 0;
    local_54c = 0x14;
    _strncpy(local_554,"set_greenscreen",0xf);
    local_550 = 0xf;
    local_554[0xf] = '\0';
    local_4._0_1_ = 0x2c;
    puStack_52c = (undefined4 *)FUN_004cdf30(&local_554);
    local_4._0_1_ = 0x2a;
    if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
      _free(local_554);
    }
    if (puStack_52c != (undefined4 *)0x0) {
      FUN_00459200(auStack_4ec,&puStack_52c);
    }
    local_554 = local_548;
    local_548[0] = '\0';
    local_550 = 0;
    local_54c = 0x14;
    _strncpy(local_554,"set_roofsection",0xf);
    local_550 = 0xf;
    local_554[0xf] = '\0';
    local_4._0_1_ = 0x2d;
    puStack_52c = (undefined4 *)FUN_004cdf30(&local_554);
    local_4._0_1_ = 0x2a;
    if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
      _free(local_554);
    }
    if (puStack_52c != (undefined4 *)0x0) {
      FUN_00459200(auStack_4ec,&puStack_52c);
    }
    local_554 = local_548;
    local_548[0] = '\0';
    local_550 = 0;
    local_54c = 0x20;
    local_554 = _malloc(0x20);
    _strncpy(local_554,"set_scrolling_miniature",0x17);
    local_550 = 0x17;
    local_554[0x17] = '\0';
    local_4._0_1_ = 0x2e;
    puStack_52c = (undefined4 *)FUN_004cdf30(&local_554);
    local_4._0_1_ = 0x2a;
    if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
      _free(local_554);
    }
    if (puStack_52c != (undefined4 *)0x0) {
      FUN_00459200(auStack_4ec,&puStack_52c);
    }
  }
  apiStack_4cc[0] = FUN_004d4120(0,'\0',(int)puVar8,(int)auStack_4ec);
  if (apiStack_4cc[0] == (int *)0x0) {
    local_554 = local_548;
    local_548[0] = '\0';
    local_550 = 0;
    local_54c = 0x14;
    _strncpy(local_554,"set_stage",9);
    local_550 = 9;
    local_554[9] = '\0';
    local_4._0_1_ = 0x2f;
    apiStack_4cc[0] = FUN_004d3660(&local_554);
    local_4._0_1_ = 0x2a;
    if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
      _free(local_554);
    }
  }
  if ((pvStack_4e8 == (void *)0x0) ||
     ((uint)(iStack_4e0 - (int)pvStack_4e8 >> 2) <= (uint)((int)puStack_4e4 - (int)pvStack_4e8 >> 2)
     )) {
    FUN_00458750(auStack_4ec,puStack_4e4,1,apiStack_4cc);
  }
  else {
    *puStack_4e4 = apiStack_4cc[0];
    puStack_4e4 = puStack_4e4 + 1;
  }
  if (1 < local_518) {
    ppiVar21 = apiStack_4cc;
    iVar20 = local_518 + -1;
    do {
      ppiVar21 = ppiVar21 + 1;
      piVar11 = FUN_004d4120(0,'\0',(int)local_504,(int)auStack_4ec);
      *ppiVar21 = piVar11;
      if (piVar11 == (int *)0x0) {
        *ppiVar21 = apiStack_4cc[0];
      }
      if ((pvStack_4e8 == (void *)0x0) ||
         ((uint)(iStack_4e0 - (int)pvStack_4e8 >> 2) <=
          (uint)((int)puStack_4e4 - (int)pvStack_4e8 >> 2))) {
        FUN_00458750(auStack_4ec,puStack_4e4,1,ppiVar21);
      }
      else {
        *puStack_4e4 = *ppiVar21;
        puStack_4e4 = puStack_4e4 + 1;
      }
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  pcStack_344 = acStack_338;
  acStack_338[0] = '\0';
  uStack_340 = 0;
  uStack_33c = 0x14;
  _strncpy(pcStack_344,"stunts",6);
  uStack_340 = 6;
  pcStack_344[6] = '\0';
  local_4._0_1_ = 0x30;
  FUN_0055c540(auStack_1e4,&pcStack_344);
  if (0x14 < uStack_33c) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_344);
  }
  local_554 = local_548;
  local_548[0] = '\0';
  local_550 = 0;
  local_54c = 0x14;
  _strncpy(local_554,"scripts",7);
  local_550 = 7;
  local_554[7] = '\0';
  local_4._0_1_ = 0x33;
  FUN_00558a50(auStack_1e4,&local_554,(undefined4 *)0x1);
  if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
    _free(local_554);
  }
  local_554 = local_548;
  local_548[0] = '\0';
  local_550 = 0;
  local_54c = 0x20;
  local_554 = _malloc(0x20);
  _strncpy(local_554,"topstuntskillmodifier",0x15);
  local_550 = 0x15;
  local_554[0x15] = '\0';
  local_4._0_1_ = 0x34;
  fVar24 = FUN_00558610(auStack_1e4,&local_554,0.2);
  pvStack_510 = (void *)(float)fVar24;
  if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
    _free(local_554);
  }
  local_554 = local_548;
  local_548[0] = '\0';
  local_550 = 0;
  local_54c = 0x20;
  local_554 = _malloc(0x20);
  _strncpy(local_554,"ignorestuntrisklimit",0x14);
  local_550 = 0x14;
  local_554[0x14] = '\0';
  local_4._0_1_ = 0x35;
  fVar24 = FUN_00558610(auStack_1e4,&local_554,0.2);
  pvStack_50c = (void *)(float)fVar24;
  if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
    _free(local_554);
  }
  local_554 = local_548;
  local_548[0] = '\0';
  local_550 = 0;
  local_54c = 0x20;
  local_554 = _malloc(0x20);
  _strncpy(local_554,"minstuntskillmodifier",0x15);
  local_550 = 0x15;
  local_554[0x15] = '\0';
  local_4._0_1_ = 0x36;
  fVar24 = FUN_00558610(auStack_1e4,&local_554,-0.5);
  fStack_520 = (float)fVar24;
  local_4._0_1_ = 0x32;
  uVar4 = (undefined1)local_4;
  local_4._0_1_ = 0x32;
  if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
    _free(local_554);
  }
  fStack_4ac = 0.0;
  fStack_4a8 = 0.0;
  if (param_3 != '\0') {
    puStack_4d4 = (undefined4 *)0x3e4ccccd;
    fStack_4d0 = 0.2;
    puVar8 = DAT_0104cfc8;
    if (DAT_0104cfc8 != &DAT_0104cfd4) {
      do {
        iVar20 = puVar8[2];
        if ((iVar20 != 0) && (iVar12 = FUN_00577370(iVar20), iVar12 != 0)) {
          iVar12 = FUN_005773c0(iVar20);
          iVar13 = GetPlayerStudio();
          if (iVar12 == iVar13) {
            local_554 = local_548;
            local_548[0] = '\0';
            local_550 = 0;
            local_54c = 0x14;
            _strncpy(local_554,"Stunts",6);
            local_550 = 6;
            local_554[6] = '\0';
            ppcVar30 = &local_554;
            ppuVar19 = &puStack_4a4;
            local_4._0_1_ = 0x37;
            pvVar10 = (void *)FUN_00577370(iVar20);
            pfVar14 = (float *)FUN_00441750(pvVar10,ppuVar19,ppcVar30);
            puStack_52c = (undefined4 *)*pfVar14;
            local_4._0_1_ = 0x32;
            if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
              _free(local_554);
            }
            fVar2 = 0.0;
            iVar20 = -1;
            iVar12 = 0;
            do {
              if (((float)(&puStack_4d4)[iVar12] < (float)puStack_52c) &&
                 ((iVar20 == -1 || (fVar2 < (float)puStack_52c - (float)(&puStack_4d4)[iVar12])))) {
                fVar2 = (float)puStack_52c - (float)(&puStack_4d4)[iVar12];
                iVar20 = iVar12;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < 2);
            if (iVar20 != -1) {
              (&puStack_4d4)[iVar20] = puStack_52c;
            }
          }
        }
        puVar9 = puVar8 + 1;
        puVar8 = (undefined4 *)*puVar9;
        uVar4 = (undefined1)local_4;
      } while ((undefined4 *)*puVar9 != &DAT_0104cfd4);
    }
    local_4._0_1_ = uVar4;
    fStack_4ac = (fStack_4d0 + (float)puStack_4d4) * 0.5 + (float)pvStack_510;
    fStack_520 = fStack_520 + fStack_4ac;
    if (0.0 <= fStack_4ac) {
      if (1.0 < fStack_4ac) {
        fStack_4ac = 1.0;
      }
    }
    else {
      fStack_4ac = 0.0;
    }
    uVar4 = (undefined1)local_4;
    if (0.0 <= fStack_520) {
      fStack_4a8 = fStack_520;
      if (1.0 < fStack_520) {
        fStack_4a8 = 1.0;
      }
    }
    else {
      fStack_4a8 = 0.0;
    }
  }
  local_4._0_1_ = uVar4;
  puVar8 = local_504;
  if (apiStack_4cc[0] != (int *)0x0) {
    puVar8 = operator_new(0xd8);
    puStack_4a4 = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      puStack_52c = (undefined4 *)0x0;
    }
    else {
      pcStack_364 = acStack_358;
      acStack_358[0] = '\0';
      uStack_360 = 0;
      uStack_35c = 0x14;
      _strncpy(pcStack_364,"journey_categories",0x12);
      uStack_360 = 0x12;
      pcStack_364[0x12] = '\0';
      local_55c = local_55c | 4;
      local_4 = CONCAT31(local_4._1_3_,0x39);
      puStack_52c = FUN_0055c6d0(puVar8,&pcStack_364,1);
    }
    local_4 = 0x32;
    if (((local_55c & 4) != 0) && (0x14 < uStack_35c)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_364);
    }
    puStack_45c = (undefined4 *)0x0;
    puStack_458 = (undefined4 *)0x0;
    uStack_454 = 0;
    local_4._1_3_ = 0;
    uVar5 = local_4._1_3_;
    local_4._1_3_ = 0;
    iStack_4f0 = 0;
    local_55c = 0;
    cStack_526 = '\0';
    fStack_520 = 0.0;
    if (0 < local_51c) {
      fStack_3c8 = (float)(int)local_534;
      fStack_3cc = (float)local_51c;
      do {
        pcStack_440 = acStack_434;
        acStack_434[0] = '\0';
        uStack_43c = 0;
        uStack_438 = 0x14;
        puStack_480 = auStack_474;
        auStack_474[0] = 0;
        uStack_47c = 0;
        uStack_478 = 0x14;
        piStack_4fc = (int *)0x0;
        piStack_4f8 = (int *)0x0;
        iStack_4f4 = 0;
        piStack_4b8 = (int *)0x0;
        piStack_4b4 = (int *)0x0;
        iStack_4b0 = 0;
        pvStack_510 = (void *)0x0;
        puStack_44c = (undefined4 *)0x0;
        puStack_448 = (undefined4 *)0x0;
        uStack_444 = 0;
        iStack_3fc = 0;
        iStack_3f8 = 0;
        uStack_3f4 = 0;
        iStack_3b0 = 0;
        iStack_3ac = 0;
        uStack_3a8 = 0;
        iStack_3c0 = 0;
        iStack_3bc = 0;
        uStack_3b8 = 0;
        local_4 = CONCAT31(local_4._1_3_,0x43);
        uVar25 = FUN_00acd42c();
        iVar20 = (int)uVar25;
        if ((iVar20 != iStack_4f0) &&
           (local_55c = local_55c + 1, iStack_4f0 = iVar20, local_518 <= (int)local_55c)) {
          local_55c = 0;
        }
        FUN_004d39b0(apiStack_4cc[local_55c],&pvStack_510);
        cStack_525 = '\0';
        if ((param_3 != '\0') && (local_524 < local_508)) {
          local_534 = (int *)((float)(local_508 - local_524) / (float)(local_51c - (int)fStack_520))
          ;
          fVar24 = FUN_00990dc0(1.0);
          if ((fVar24 < (float10)(float)local_534) || (cStack_526 != '\0')) {
            cStack_525 = '\x01';
            cStack_526 = '\0';
          }
        }
        if (puStack_52c != (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x1;
          puVar8 = (undefined4 *)FUN_00449b40(param_1);
          uVar15 = FUN_00558a50(puStack_52c,puVar8,puVar9);
          if ((char)uVar15 != '\0') {
            pcStack_420 = acStack_414;
            acStack_414[0] = '\0';
            uStack_41c = 0;
            uStack_418 = 0x14;
            iVar20 = local_504[0xe9];
            local_4._0_1_ = 0x44;
            if (iVar20 == 1) {
              _strncpy(acStack_414,"simple",6);
              uStack_41c = 6;
              pcStack_420[6] = '\0';
            }
            else if (iVar20 == 2) {
              _strncpy(acStack_414,"detailed",8);
              uStack_41c = 8;
              pcStack_420[8] = '\0';
            }
            else if (iVar20 == 3) {
              _strncpy(acStack_414,"epic",4);
              uStack_41c = 4;
              pcStack_420[4] = '\0';
            }
            else {
              _strncpy(pcStack_420,"freeform",8);
              uStack_41c = 8;
              pcStack_420[8] = '\0';
            }
            puVar8 = puStack_52c;
            bVar6 = FUN_00558a90(puStack_52c,&pcStack_420,(undefined4 *)0x0);
            if (bVar6) {
              local_554 = local_548;
              local_548[0] = '\0';
              local_550 = 0;
              local_54c = 0x14;
              _strncpy(local_554,"",0);
              local_550 = 0;
              *local_554 = '\0';
              local_4._0_1_ = 0x45;
              sVar16 = _sprintf(acStack_224,(char *)&param_2_00d1b93c);
              FUN_004073f0(&local_554,acStack_224,sVar16);
              FUN_005584e0(puVar8,apuStack_2a4,&local_554);
              local_4._0_1_ = 0x46;
              local_534 = (int *)0x0;
              do {
                puVar8 = FUN_004b6940(apvStack_244,(int)local_534);
                puVar17 = FUN_00ace080(apuStack_2a4[0],(char *)*puVar8);
                if (0x14 < uStack_23c) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_244[0]);
                }
                if (puVar17 != (uint *)0x0) {
                  puVar8 = FUN_004b6940(apvStack_284,(int)local_534);
                  local_4._0_1_ = 0x47;
                  uVar15 = FUN_00558a50(puStack_514,puVar8,(undefined4 *)0x0);
                  local_4._0_1_ = 0x46;
                  if (0x14 < uStack_27c) {
                    /* WARNING: Subroutine does not return */
                    _free(apvStack_284[0]);
                  }
                  if ((char)uVar15 != '\0') {
                    uVar15 = FUN_00558120(puStack_514,0);
                    cVar7 = (char)uVar15;
                    piVar11 = piStack_4f8;
                    while (cVar7 != '\0') {
                      FUN_00558590(puStack_514,apbStack_2c4,4);
                      pvVar10 = pvStack_510;
                      local_4 = CONCAT31(local_4._1_3_,0x48);
                      puStack_4dc = FUN_004cc2f0(pvStack_510,apbStack_2c4);
                      puVar8 = *(undefined4 **)((int)pvVar10 + 4);
                      if (puStack_4dc == puVar8) {
LAB_005c3516:
                        puStack_4d4 = puVar8;
                        ppuVar19 = &puStack_4d4;
                      }
                      else {
                        pbVar22 = (byte *)puStack_4dc[3];
                        pbVar18 = apbStack_2c4[0];
                        do {
                          bVar1 = *pbVar18;
                          bVar6 = bVar1 < *pbVar22;
                          if (bVar1 != *pbVar22) {
LAB_005c3504:
                            iVar20 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                            goto LAB_005c3509;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar18[1];
                          bVar6 = bVar1 < pbVar22[1];
                          if (bVar1 != pbVar22[1]) goto LAB_005c3504;
                          pbVar18 = pbVar18 + 2;
                          pbVar22 = pbVar22 + 2;
                        } while (bVar1 != 0);
                        iVar20 = 0;
LAB_005c3509:
                        if (iVar20 < 0) goto LAB_005c3516;
                        ppuVar19 = &puStack_4dc;
                      }
                      if ((*ppuVar19 != puVar8) &&
                         ((*(char *)(*ppuVar19 + 0x13) == '\0' ||
                          ((iVar20 = FUN_009623a0(apbStack_2c4), iVar20 != 0 &&
                           (cVar7 = FUN_00960f30(iVar20), cVar7 != '\0')))))) {
                        if ((piStack_4fc == (int *)0x0) ||
                           ((uint)(iStack_4f4 - (int)piStack_4fc >> 5) <=
                            (uint)((int)piVar11 - (int)piStack_4fc >> 5))) {
                          FUN_00439fd0(auStack_500,piVar11,1,apbStack_2c4);
                          piVar11 = piStack_4f8;
                        }
                        else {
                          FUN_00439ea0(piVar11,1,apbStack_2c4);
                          piStack_4f8 = piVar11 + 8;
                          piVar11 = piStack_4f8;
                        }
                      }
                      local_4._0_1_ = 0x46;
                      if (0x14 < uStack_2bc) {
                    /* WARNING: Subroutine does not return */
                        _free(apbStack_2c4[0]);
                      }
                      uVar15 = FUN_00558120(puStack_514,2);
                      cVar7 = (char)uVar15;
                    }
                  }
                }
                if (cStack_525 != '\0') {
                  puVar9 = FUN_004b6940(apvStack_264,(int)local_534);
                  puVar8 = puStack_4d8;
                  local_4._0_1_ = 0x49;
                  uVar15 = FUN_00558a50(puStack_4d8,puVar9,(undefined4 *)0x0);
                  local_4._0_1_ = 0x46;
                  if (0x14 < uStack_25c) {
                    /* WARNING: Subroutine does not return */
                    _free(apvStack_264[0]);
                  }
                  if ((char)uVar15 != '\0') {
                    uVar15 = FUN_00558120(puVar8,0);
                    cVar7 = (char)uVar15;
                    while (cVar7 != '\0') {
                      FUN_00558590(puVar8,&local_4a0,4);
                      pbStack_3f0 = abStack_3e4;
                      abStack_3e4[0] = 0;
                      uStack_3ec = 0;
                      uStack_3e8 = 0x14;
                      fStack_3d0 = 0.0;
                      local_4 = CONCAT31(local_4._1_3_,0x4b);
                      puVar8 = puStack_4d8;
                      if (uStack_49c < 0x100) {
                        pcVar29 = local_4a0;
                        do {
                          cVar7 = *pcVar29;
                          pcVar29[(int)(acStack_10c + -(int)local_4a0)] = cVar7;
                          pcVar29 = pcVar29 + 1;
                        } while (cVar7 != '\0');
                        _Source = _strtok(acStack_10c,",");
                        pcVar29 = _Source;
                        do {
                          cVar7 = *pcVar29;
                          pcVar29 = pcVar29 + 1;
                        } while (cVar7 != '\0');
                        uVar27 = (int)pcVar29 - (int)(_Source + 1);
                        if (uStack_3e8 <= uVar27) {
                          if (0x14 < uStack_3e8) {
                    /* WARNING: Subroutine does not return */
                            _free(pbStack_3f0);
                          }
                          uStack_3e8 = uVar27 + 0x20 & 0xffffffe0;
                          pbStack_3f0 = _malloc(uStack_3e8);
                        }
                        _strncpy((char *)pbStack_3f0,_Source,uVar27);
                        pbStack_3f0[uVar27] = 0;
                        uStack_3ec = uVar27;
                        pcVar29 = _strtok((char *)0x0,",");
                        if (pcVar29 != (char *)0x0) {
                          dVar26 = _atof(pcVar29);
                          fStack_3d0 = (float)dVar26;
                          if (0.0 <= fStack_3d0) {
                            if (1.0 < fStack_3d0) {
                              fStack_3d0 = 1.0;
                            }
                          }
                          else {
                            fStack_3d0 = 0.0;
                          }
                        }
                        pvVar10 = pvStack_510;
                        puStack_4dc = FUN_004cc2f0(pvStack_510,&pbStack_3f0);
                        puVar8 = *(undefined4 **)((int)pvVar10 + 4);
                        if (puStack_4dc == puVar8) {
LAB_005c384a:
                          puStack_4a4 = puVar8;
                          ppuVar19 = &puStack_4a4;
                        }
                        else {
                          pbVar22 = (byte *)puStack_4dc[3];
                          pbVar18 = pbStack_3f0;
                          do {
                            bVar1 = *pbVar18;
                            bVar6 = bVar1 < *pbVar22;
                            if (bVar1 != *pbVar22) {
LAB_005c3838:
                              iVar20 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                              goto LAB_005c383d;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar18[1];
                            bVar6 = bVar1 < pbVar22[1];
                            if (bVar1 != pbVar22[1]) goto LAB_005c3838;
                            pbVar18 = pbVar18 + 2;
                            pbVar22 = pbVar22 + 2;
                          } while (bVar1 != 0);
                          iVar20 = 0;
LAB_005c383d:
                          if (iVar20 < 0) goto LAB_005c384a;
                          ppuVar19 = &puStack_4dc;
                        }
                        if ((*ppuVar19 != puVar8) &&
                           ((*(char *)(*ppuVar19 + 0x13) == '\0' ||
                            ((iVar20 = FUN_009623a0(&pbStack_3f0), iVar20 != 0 &&
                             (cVar7 = FUN_00960f30(iVar20), cVar7 != '\0')))))) {
                          FUN_005bb360(auStack_450,&pbStack_3f0);
                        }
                        if (0x14 < uStack_3e8) {
                    /* WARNING: Subroutine does not return */
                          _free(pbStack_3f0);
                        }
                        puVar8 = puStack_4d8;
                      }
                      puStack_4d8 = puVar8;
                      if (0x14 < local_498) {
                        local_4._0_1_ = 0x46;
                    /* WARNING: Subroutine does not return */
                        _free(local_4a0);
                      }
                      local_4._0_1_ = 0x46;
                      uVar15 = FUN_00558120(puVar8,2);
                      cVar7 = (char)uVar15;
                    }
                  }
                }
                local_534 = (int *)((int)local_534 + 1);
              } while ((int)local_534 < 10);
              if (0x14 < uStack_29c) {
                    /* WARNING: Subroutine does not return */
                _free(apuStack_2a4[0]);
              }
              local_4._0_1_ = 0x44;
              if (0x14 < local_54c) {
                    /* WARNING: Subroutine does not return */
                _free(local_554);
              }
            }
            local_534 = piStack_4fc;
            piVar11 = piStack_4fc;
            if (piStack_4fc != piStack_4f8) {
              do {
                piVar3 = piStack_4b4;
                cStack_555 = '\0';
                if (puStack_45c == puStack_458) {
LAB_005c39cb:
                  local_534 = piVar11;
                  if ((piStack_4b8 == (int *)0x0) ||
                     ((uint)(iStack_4b0 - (int)piStack_4b8 >> 5) <=
                      (uint)((int)piStack_4b4 - (int)piStack_4b8 >> 5))) {
                    FUN_00439fd0(auStack_4bc,piStack_4b4,1,piVar11);
                  }
                  else {
                    FUN_00439ea0(piStack_4b4,1,piVar11);
                    piStack_4b4 = piVar3 + 8;
                  }
                }
                else {
                  puVar8 = puStack_45c;
                  do {
                    pbVar22 = (byte *)*puVar8;
                    pbVar18 = (byte *)*piVar11;
                    do {
                      bVar1 = *pbVar18;
                      bVar6 = bVar1 < *pbVar22;
                      if (bVar1 != *pbVar22) {
LAB_005c39a8:
                        iVar20 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_005c39ad;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar18[1];
                      bVar6 = bVar1 < pbVar22[1];
                      if (bVar1 != pbVar22[1]) goto LAB_005c39a8;
                      pbVar18 = pbVar18 + 2;
                      pbVar22 = pbVar22 + 2;
                    } while (bVar1 != 0);
                    iVar20 = 0;
LAB_005c39ad:
                    if (iVar20 == 0) {
                      cStack_555 = '\x01';
                    }
                    puVar8 = puVar8 + 8;
                  } while (puVar8 != puStack_458);
                  if (cStack_555 == '\0') goto LAB_005c39cb;
                }
                local_534 = piVar11 + 8;
                piVar11 = local_534;
              } while (local_534 != piStack_4f8);
            }
            if (cStack_525 == '\0') {
LAB_005c3e4d:
              piVar11 = piStack_4b8;
              uVar27 = local_55c;
              if ((piStack_4b8 != (int *)0x0) &&
                 (iVar20 = (int)piStack_4b4 - (int)piStack_4b8 >> 5, iVar20 != 0)) {
                iVar20 = FUN_00990d30(0,iVar20 + -1);
                FUN_004015d0(&puStack_480,(char *)piVar11[iVar20 * 8],piVar11[iVar20 * 8 + 1]);
                uVar27 = local_55c;
                cVar7 = (**(code **)(*apiStack_4cc[local_55c] + 0x1d4))();
                if (cVar7 != '\0') goto LAB_005c40b9;
              }
              piVar11 = piStack_4fc;
              if ((piStack_4fc != (int *)0x0) &&
                 (iVar20 = (int)piStack_4f8 - (int)piStack_4fc >> 5, iVar20 != 0)) {
                iVar20 = FUN_00990d30(0,iVar20 + -1);
                FUN_004015d0(&puStack_480,(char *)piVar11[iVar20 * 8],piVar11[iVar20 * 8 + 1]);
                cVar7 = (**(code **)(*apiStack_4cc[uVar27] + 0x1d4))();
                if (cVar7 != '\0') goto LAB_005c40b9;
              }
              puStack_304 = auStack_2f8;
              auStack_2f8[0] = 0;
              uStack_300 = 0;
              uStack_2fc = 0x14;
              FUN_004015d0(&puStack_304,"2criticalconversation",0x15);
              piVar11 = apiStack_4cc[uVar27];
              local_4._0_1_ = 0x4c;
              cVar7 = (**(code **)(*piVar11 + 0x1d4))();
              if (0x14 < uStack_2fc) {
                    /* WARNING: Subroutine does not return */
                _free(puStack_304);
              }
              if (cVar7 == '\0') {
                puStack_324 = auStack_318;
                auStack_318[0] = 0;
                uStack_320 = 0;
                uStack_31c = 0x14;
                FUN_004015d0(&puStack_324,"monologue",9);
                local_4._0_1_ = 0x4d;
                cVar7 = (**(code **)(*piVar11 + 0x1d4))();
                if (0x14 < uStack_31c) {
                    /* WARNING: Subroutine does not return */
                  _free(puStack_324);
                }
                if (cVar7 == '\0') {
                  puStack_2e4 = auStack_2d8;
                  auStack_2d8[0] = 0;
                  uStack_2e0 = 0;
                  uStack_2dc = 0x14;
                  FUN_004015d0(&puStack_2e4,"establishstatic001",0x12);
                  local_4._0_1_ = 0x4e;
                  cVar7 = (**(code **)(*piVar11 + 0x1d4))();
                  if (0x14 < uStack_2dc) {
                    /* WARNING: Subroutine does not return */
                    _free(puStack_2e4);
                  }
                  if (cVar7 == '\0') goto LAB_005c40b9;
                  uVar27 = 0x12;
                  pcVar29 = "establishstatic001";
                }
                else {
                  uVar27 = 9;
                  pcVar29 = "monologue";
                }
              }
              else {
                uVar27 = 0x15;
                pcVar29 = "2criticalconversation";
              }
              FUN_004015d0(&puStack_480,pcVar29,uVar27);
            }
            else {
              puVar8 = puStack_448;
              puVar9 = puStack_44c;
              puVar23 = puStack_458;
              if (puStack_44c != puStack_448) {
                do {
                  if (((float)puVar9[8] < fStack_4ac != ((float)puVar9[8] == fStack_4ac)) &&
                     (fStack_4a8 <= (float)puVar9[8])) {
                    FUN_005bb360(auStack_3b4,puVar9);
                  }
                  cStack_555 = '\0';
                  if (puStack_45c == puVar23) {
LAB_005c3b05:
                    FUN_005bb360(auStack_400,puVar9);
                    if (((float)puVar9[8] < fStack_4ac != ((float)puVar9[8] == fStack_4ac)) &&
                       (fStack_4a8 <= (float)puVar9[8])) {
                      FUN_005bb360(auStack_3c4,puVar9);
                    }
                  }
                  else {
                    puVar8 = puStack_45c;
                    do {
                      pbVar22 = (byte *)*puVar8;
                      pbVar18 = (byte *)*puVar9;
                      do {
                        bVar1 = *pbVar18;
                        bVar6 = bVar1 < *pbVar22;
                        if (bVar1 != *pbVar22) {
LAB_005c3ada:
                          iVar20 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_005c3adf;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar18[1];
                        bVar6 = bVar1 < pbVar22[1];
                        if (bVar1 != pbVar22[1]) goto LAB_005c3ada;
                        pbVar18 = pbVar18 + 2;
                        pbVar22 = pbVar22 + 2;
                      } while (bVar1 != 0);
                      iVar20 = 0;
LAB_005c3adf:
                      if (iVar20 == 0) {
                        cStack_555 = '\x01';
                      }
                      puVar8 = puVar8 + 8;
                    } while (puVar8 != puStack_458);
                    puVar8 = puStack_448;
                    puVar23 = puStack_458;
                    if (cStack_555 == '\0') goto LAB_005c3b05;
                  }
                  puVar9 = puVar9 + 9;
                } while (puVar9 != puVar8);
              }
              puVar9 = puStack_44c;
              fVar24 = FUN_00990e30(0.0,1.0);
              iVar12 = iStack_3c0;
              iVar20 = iStack_3fc;
              if ((float10)(float)pvStack_50c <= fVar24) {
                uVar27 = local_55c;
                if ((iStack_3c0 == 0) || (iVar20 = (iStack_3bc - iStack_3c0) / 0x24, iVar20 == 0)) {
LAB_005c3cdd:
                  iVar20 = iStack_3b0;
                  if ((iStack_3b0 != 0) && (iVar12 = (iStack_3ac - iStack_3b0) / 0x24, iVar12 != 0))
                  {
                    iVar12 = FUN_00990d30(0,iVar12 + -1);
                    puVar9 = (undefined4 *)(iVar20 + iVar12 * 0x24);
                    FUN_004015d0(&puStack_480,(char *)*puVar9,puVar9[1]);
                    cVar7 = (**(code **)(*apiStack_4cc[uVar27] + 0x1d4))();
                    if (cVar7 != '\0') {
                      local_524 = local_524 + 1;
                      goto LAB_005c40b9;
                    }
                  }
                  iVar20 = iStack_3fc;
                  if ((iStack_3fc != 0) && (iVar12 = (iStack_3f8 - iStack_3fc) / 0x24, iVar12 != 0))
                  {
                    iVar12 = FUN_00990d30(0,iVar12 + -1);
                    puVar9 = (undefined4 *)(iVar20 + iVar12 * 0x24);
                    FUN_004015d0(&puStack_480,(char *)*puVar9,puVar9[1]);
                    cVar7 = (**(code **)(*apiStack_4cc[uVar27] + 0x1d4))();
                    if (cVar7 != '\0') {
                      local_524 = local_524 + 1;
                      goto LAB_005c40b9;
                    }
                  }
                  puVar9 = puStack_44c;
                  if ((puStack_44c != (undefined4 *)0x0) &&
                     (iVar20 = ((int)puVar8 - (int)puStack_44c) / 0x24, iVar20 != 0)) {
                    iVar20 = FUN_00990d30(0,iVar20 + -1);
                    FUN_004015d0(&puStack_480,(char *)puVar9[iVar20 * 9],(puVar9 + iVar20 * 9)[1]);
                    cVar7 = (**(code **)(*apiStack_4cc[uVar27] + 0x1d4))();
                    goto LAB_005c3e37;
                  }
                  goto LAB_005c3e46;
                }
                iVar20 = FUN_00990d30(0,iVar20 + -1);
                FUN_004015d0(&puStack_480,*(char **)(iVar12 + iVar20 * 0x24),
                             *(uint *)(iVar12 + 4 + iVar20 * 0x24));
                uVar27 = local_55c;
                cVar7 = (**(code **)(*apiStack_4cc[local_55c] + 0x1d4))();
                if (cVar7 == '\0') goto LAB_005c3cdd;
                local_524 = local_524 + 1;
              }
              else {
                if ((iStack_3fc == 0) || (iVar12 = (iStack_3f8 - iStack_3fc) / 0x24, iVar12 == 0)) {
LAB_005c3be9:
                  if ((puVar9 != (undefined4 *)0x0) &&
                     (iVar20 = ((int)puVar8 - (int)puVar9) / 0x24, iVar20 != 0)) {
                    iVar20 = FUN_00990d30(0,iVar20 + -1);
                    FUN_004015d0(&puStack_480,(char *)puVar9[iVar20 * 9],(puVar9 + iVar20 * 9)[1]);
                    cVar7 = (**(code **)(*apiStack_4cc[local_55c] + 0x1d4))();
LAB_005c3e37:
                    if (cVar7 != '\0') goto LAB_005c3e3b;
                  }
LAB_005c3e46:
                  cStack_526 = '\x01';
                  goto LAB_005c3e4d;
                }
                iVar12 = FUN_00990d30(0,iVar12 + -1);
                FUN_004015d0(&puStack_480,*(char **)(iVar20 + iVar12 * 0x24),
                             *(uint *)(iVar20 + 4 + iVar12 * 0x24));
                cVar7 = (**(code **)(*apiStack_4cc[local_55c] + 0x1d4))();
                if (cVar7 == '\0') goto LAB_005c3be9;
LAB_005c3e3b:
                local_524 = local_524 + 1;
              }
            }
LAB_005c40b9:
            local_4 = CONCAT31(local_4._1_3_,0x43);
            if (0x14 < uStack_418) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_420);
            }
          }
        }
        puStack_4dc = (undefined4 *)&stack0xfffffa6c;
        pbVar22 = &stack0xfffffa78;
        uVar27 = 0;
        uVar28 = 0x14;
        FUN_004015d0(&stack0xfffffa6c,pcStack_440,uStack_43c);
        puVar8 = FUN_004bc270(pbVar22,uVar27,uVar28);
        if (puVar8 != (undefined4 *)0x0) {
          iVar20 = FUN_004b4a40((int)puVar8);
          puVar9 = local_504;
          iVar20 = FUN_005c0510(local_504,puVar8,iVar20);
          piVar11 = puVar8 + 0x12;
          *piVar11 = *piVar11 + -1;
          if (*piVar11 == 0) {
            (**(code **)*puVar8)();
          }
          *(int *)(iVar20 + 0x160) = iStack_4f0;
          FUN_005b7a50(puVar9,iVar20,local_530);
          FUN_0043a2d0(auStack_460,&puStack_480);
        }
        FUN_005b9b20((int)auStack_3c4);
        FUN_005b9b20((int)auStack_3b4);
        FUN_005b9b20((int)auStack_400);
        FUN_005b9b20((int)auStack_450);
        piVar11 = piStack_4b8;
        if (piStack_4b8 != (int *)0x0) {
          while( true ) {
            if (piVar11 == piStack_4b4) {
                    /* WARNING: Subroutine does not return */
              _free(piStack_4b8);
            }
            if (0x14 < (uint)piVar11[2]) break;
            piVar11 = piVar11 + 8;
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar11);
        }
        piStack_4b8 = (int *)0x0;
        piStack_4b4 = (int *)0x0;
        iStack_4b0 = 0;
        piVar11 = piStack_4fc;
        if (piStack_4fc != (int *)0x0) {
          while( true ) {
            if (piVar11 == piStack_4f8) {
                    /* WARNING: Subroutine does not return */
              _free(piStack_4fc);
            }
            if (0x14 < (uint)piVar11[2]) break;
            piVar11 = piVar11 + 8;
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar11);
        }
        piStack_4fc = (int *)0x0;
        piStack_4f8 = (int *)0x0;
        iStack_4f4 = 0;
        if (0x14 < uStack_478) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_480);
        }
        local_4._0_1_ = 0x3b;
        if (0x14 < uStack_438) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_440);
        }
        fStack_520 = (float)((int)fStack_520 + 1);
        uVar5 = local_4._1_3_;
      } while ((int)fStack_520 < local_51c);
    }
    local_4._1_3_ = uVar5;
    local_4._0_1_ = 0x3b;
    if (puStack_52c != (undefined4 *)0x0) {
      (**(code **)*puStack_52c)();
    }
    puVar8 = local_504;
    FUN_005b5d80((int)local_504);
    FUN_005c06a0(puVar8,(float)local_560);
    FUN_005a8e00((void *)puVar8[0x7e],(int)puVar8);
    local_4._0_1_ = 0x32;
    puVar9 = puStack_45c;
    if (puStack_45c != (undefined4 *)0x0) {
      while( true ) {
        if (puVar9 == puStack_458) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_45c);
        }
        if (0x14 < (uint)puVar9[2]) break;
        puVar9 = puVar9 + 8;
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)*puVar9);
    }
  }
  if (puStack_514 != (undefined4 *)0x0) {
    (**(code **)*puStack_514)();
  }
  if (puStack_4d8 != (undefined4 *)0x0) {
    (**(code **)*puStack_4d8)();
  }
  local_4 = CONCAT31(local_4._1_3_,0x2a);
  FUN_00558920(auStack_1e4);
  if (pvStack_4e8 == (void *)0x0) {
    ExceptionList = pvStack_c;
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_4e8);
}


//// FUNCTION FUN_005c43c0 @ 005c43c0 ////

undefined4 * __cdecl FUN_005c43c0(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *this;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  byte *in_stack_ffffff40;
  uint in_stack_ffffff44;
  uint in_stack_ffffff48;
  undefined4 uVar9;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb69f8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy((char *)local_2c,"",0);
  local_28 = 0;
  *local_2c = 0;
  pbVar6 = (byte *)*param_1;
  pbVar7 = local_2c;
  do {
    bVar1 = *pbVar6;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_005c4454:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_005c4459;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_005c4454;
    pbVar6 = pbVar6 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005c4459:
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (iVar3 != 0) {
    puVar5 = ScriptDefinition_CreateAndLoad(param_1);
    this = (undefined4 *)FUN_004c4b70(puVar5,'\x01','\x01');
    goto LAB_005c47bd;
  }
  this = FUN_005c18b0();
  piVar4 = FUN_004d4120(0,'\0',0,0);
  if (piVar4 == (int *)0x0) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"set_stage",9);
    local_48 = 9;
    local_4c[9] = '\0';
    local_4 = 0;
    piVar4 = FUN_004d3660(&local_4c);
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (piVar4 != (int *)0x0) goto LAB_005c450a;
  }
  else {
LAB_005c450a:
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 0x14;
    local_2c = local_20;
    local_4 = 1;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy((char *)local_2c,"2criticalconversation",0x15);
    local_28 = 0x15;
    local_2c[0x15] = 0;
    local_4._0_1_ = 2;
    cVar2 = (**(code **)(*piVar4 + 0x1d4))();
    local_4._0_1_ = 1;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (cVar2 == '\0') {
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      _strncpy((char *)local_2c,"monologue",9);
      local_28 = 9;
      local_2c[9] = 0;
      local_4._0_1_ = 3;
      cVar2 = (**(code **)(*piVar4 + 0x1d4))();
      local_4._0_1_ = 1;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (cVar2 != '\0') {
LAB_005c46ee:
        local_4._0_1_ = 1;
        FUN_00403de0(&stack0xffffff40,&local_6c);
        puVar5 = FUN_004bc270(in_stack_ffffff40,in_stack_ffffff44,in_stack_ffffff48);
        goto LAB_005c4707;
      }
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      _strncpy((char *)local_2c,"static1",7);
      local_28 = 7;
      local_2c[7] = 0;
      local_4._0_1_ = 4;
      cVar2 = (**(code **)(*piVar4 + 0x1d4))();
      local_4._0_1_ = 1;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (cVar2 != '\0') goto LAB_005c46ee;
    }
    else {
      FUN_00403de0(&stack0xffffff40,&local_6c);
      puVar5 = FUN_004bc270(in_stack_ffffff40,in_stack_ffffff44,in_stack_ffffff48);
LAB_005c4707:
      if (puVar5 != (undefined4 *)0x0) {
        iVar3 = FUN_004b4a40((int)puVar5);
        FUN_005c0510(this,puVar5,iVar3);
        piVar4 = puVar5 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar5)();
        }
      }
    }
    FUN_005c06a0(this,-NAN);
    FUN_005a8e00((void *)this[0x7e],(int)this);
    piVar4 = FUN_005be730((int *)&local_2c,this[0x6b]);
    FUN_004036d0(this + 0x97,(wchar_t *)*piVar4,piVar4[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_4 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_005b2130((int)this);
LAB_005c47bd:
  FUN_004c3ae0(puVar5,'\x01');
  uVar9 = extraout_ECX;
  FUN_004bdbd0(puVar5,(undefined4 *)&stack0xffffff60);
  FUN_004bd010(puVar5,uVar9);
  FUN_00470a70(DAT_0104917c,this,0x80000a7f,0,0);
  (**(code **)(*(int *)this[0x84] + 0x2c))();
  (**(code **)(*(int *)this[0x84] + 0x30))();
  FUN_005d35f0(this[0x84]);
  FUN_005d0f50(this[0x84]);
  *(undefined1 *)(this[0x84] + 0x15d) = 1;
  FUN_005c4ff0(this[0x90]);
  ExceptionList = pvStack_14;
  return this;
}


//// FUNCTION FUN_005c4890 @ 005c4890 ////

void __cdecl FUN_005c4890(undefined4 *param_1)

{
  FUN_005c43c0(param_1);
  return;
}


//// FUNCTION FUN_005c48c0 @ 005c48c0 ////

undefined4 * __thiscall FUN_005c48c0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 local_54 [14];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6a31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d2f0(local_54);
  local_4 = 1;
  iVar1 = FUN_005b6b90((int)this);
  FUN_0044d270(local_54,iVar1);
  FUN_0043dd00(param_1);
  param_1[0xe] = local_1c;
  *param_1 = &PTR_FUN_00d1a550;
  param_1[0xf] = local_18;
  param_1[0x10] = local_14;
  param_1[0x11] = local_10;
  local_4 = local_4 & 0xffffff00;
  FUN_00526bb0(local_54);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION MovieProjectSystem_Constructor @ 005c4970 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MovieProjectSystem_Constructor(void)

{
  undefined4 uVar1;
  float10 fVar2;
  char *local_128;
  undefined4 local_124;
  uint local_120;
  char local_11c [23];
  char local_105;
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6acf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043a340();
  FUN_005ae310();
  QualityCalc_LoadTuningData();
  IncomeCalc_LoadTuningData();
  FUN_00471840("MT_PROJECT_PHASEDESIGN",-0x7ffff5d1);
  FUN_00471840("MT_PROJECT_PHASEMANAGE",-0x7ffff5a9);
  FUN_00471840("MT_PROJECT_PHASEADVANCETODESIGN",-0x7ffff581);
  FUN_00471840("MT_PROJECT_PHASEADVANCETOPREPRODUCTION",-0x7ffff559);
  FUN_00471840("MT_PROJECT_PHASEADVANCETOSHOOT",-0x7ffff531);
  FUN_00471840("MT_PROJECT_PHASEADVANCETOPOSTPRODUCTION",-0x7ffff509);
  FUN_00471840("MT_PROJECT_PHASEADVANCETORELEASE",-0x7ffff4e1);
  FUN_00471840("MT_PROJECT_RANDOMTITLE",-0x7ffff4b9);
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"cin_setsign",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4 = 0;
  FUN_005434b0();
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"proj_create",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4 = 1;
  FUN_005434b0();
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"proj_showscriptsource",0x15);
  local_100 = 0x15;
  local_104[0x15] = '\0';
  local_4 = 2;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"releasing_movies",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4 = 3;
  FUN_0055c540(local_e4,&local_104);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_128 = local_11c;
  local_11c[0] = '\0';
  local_124 = 0;
  local_120 = 0x14;
  _strncpy(local_128,"pr",2);
  local_124 = 2;
  local_128[2] = '\0';
  local_4._0_1_ = 6;
  uVar1 = FUN_00558a50(local_e4,&local_128,(undefined4 *)0x0);
  local_105 = (char)uVar1;
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (local_105 != '\0') {
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x20;
    local_128 = _malloc(0x20);
    _strncpy(local_128,"star_pr_public_interest_adder",0x1d);
    local_124 = 0x1d;
    local_128[0x1d] = '\0';
    local_4._0_1_ = 7;
    fVar2 = FUN_00558610(local_e4,&local_128,0.0);
    _DAT_00e544bc = (float)fVar2;
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x20;
    local_128 = _malloc(0x20);
    _strncpy(local_128,"movie_pr_public_interest_adder",0x1e);
    local_124 = 0x1e;
    local_128[0x1e] = '\0';
    local_4._0_1_ = 8;
    fVar2 = FUN_00558610(local_e4,&local_128,0.0);
    DAT_00e544c0 = (float)fVar2;
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"prtime",6);
    local_124 = 6;
    local_128[6] = '\0';
    local_4._0_1_ = 9;
    uVar1 = FUN_00558750(local_e4,&local_128,0);
    local_4._0_1_ = 5;
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    FUN_00929120(uVar1);
  }
  local_128 = local_11c;
  local_11c[0] = '\0';
  local_124 = 0;
  local_120 = 0x14;
  _strncpy(local_128,"project",7);
  local_124 = 7;
  local_128[7] = '\0';
  local_4._0_1_ = 10;
  FUN_00558a50(DAT_00f88624,&local_128,(undefined4 *)0x1);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  local_128 = local_11c;
  local_11c[0] = '\0';
  local_124 = 0;
  local_120 = 0x14;
  _strncpy(local_128,"starratingboxoffice",0x13);
  local_124 = 0x13;
  local_128[0x13] = '\0';
  local_4._0_1_ = 0xb;
  fVar2 = FUN_00558610(DAT_00f88624,&local_128,0.0);
  _DAT_00e544c4 = (float)fVar2;
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  local_128 = local_11c;
  local_11c[0] = '\0';
  local_124 = 0;
  local_120 = 0x14;
  _strncpy(local_128,"starratingquality",0x11);
  local_124 = 0x11;
  local_128[0x11] = '\0';
  local_4._0_1_ = 0xc;
  fVar2 = FUN_00558610(DAT_00f88624,&local_128,0.0);
  _DAT_00e544c8 = (float)fVar2;
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  local_128 = local_11c;
  local_11c[0] = '\0';
  local_124 = 0;
  local_120 = 0x14;
  _strncpy(local_128,"starratingawards",0x10);
  local_124 = 0x10;
  local_128[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0xd);
  fVar2 = FUN_00558610(DAT_00f88624,&local_128,0.0);
  _DAT_00e544cc = (float)fVar2;
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005c4f60 @ 005c4f60 ////

void __fastcall FUN_005c4f60(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005c4fa0 @ 005c4fa0 ////

void __fastcall FUN_005c4fa0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005c4fe0 @ 005c4fe0 ////

void FUN_005c4fe0(void)

{
  return;
}


//// FUNCTION FUN_005c4ff0 @ 005c4ff0 ////

void __fastcall FUN_005c4ff0(int param_1)

{
  *(undefined1 *)(param_1 + 0x1b9) = 1;
  return;
}


//// FUNCTION FUN_005c5010 @ 005c5010 ////

undefined1 __fastcall FUN_005c5010(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1b9);
}


//// FUNCTION FUN_005c5030 @ 005c5030 ////

int * __thiscall FUN_005c5030(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005c5270 @ 005c5270 ////

void __thiscall FUN_005c5270(void *this,int *param_1)

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


//// FUNCTION FUN_005c5300 @ 005c5300 ////

void __cdecl FUN_005c5300(int param_1)

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


//// FUNCTION FUN_005c5320 @ 005c5320 ////

void __cdecl FUN_005c5320(int *param_1)

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


//// FUNCTION FUN_005c5350 @ 005c5350 ////

void __fastcall FUN_005c5350(int *param_1)

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


//// FUNCTION FUN_005c53b0 @ 005c53b0 ////

void __fastcall FUN_005c53b0(int *param_1)

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


//// FUNCTION FUN_005c5520 @ 005c5520 ////

longlong * FUN_005c5520(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = FUN_00acd42c();
  FUN_00471b10(&local_10);
  iVar2 = FUN_004a3990();
  if (iVar2 != 0) {
    local_8 = *(undefined4 *)(iVar2 + 0xb0);
    local_4 = *(undefined4 *)(iVar2 + 0xb4);
    FUN_00471b10((longlong *)&local_8);
    local_10 = CONCAT44(local_4,local_8);
    FUN_00471b10(&local_10);
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0xe0);
      *(uint *)(param_2 + 0xe0) = uVar1 + (uint)local_10;
      *(uint *)(param_2 + 0xe4) =
           *(int *)(param_2 + 0xe4) + local_10._4_4_ + (uint)CARRY4(uVar1,(uint)local_10);
      FUN_00471b10((longlong *)(param_2 + 0xe0));
    }
  }
  *(uint *)param_1 = (uint)local_10;
  *(int *)((int)param_1 + 4) = local_10._4_4_;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005c55d0 @ 005c55d0 ////

longlong * FUN_005c55d0(longlong *param_1)

{
  *(undefined4 *)param_1 = DAT_0104d6e0;
  *(undefined4 *)((int)param_1 + 4) = DAT_0104d6e4;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005c5600 @ 005c5600 ////

longlong * __cdecl FUN_005c5600(longlong *param_1,void *param_2)

{
  uint uVar1;
  void *this;
  uint *puVar2;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = FUN_00acd42c();
  FUN_00471b10(&local_18);
  uVar1 = *(uint *)((int)param_2 + 0x234);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    this = (void *)FUN_00938cc0(param_2,uVar1);
    if (this != (void *)0x0) {
      puVar2 = (uint *)FUN_0093c990(this,&local_10);
      local_18 = CONCAT44(local_18._4_4_ + puVar2[1] + (uint)CARRY4((uint)local_18,*puVar2),
                          (uint)local_18 + *puVar2);
      FUN_00471b10(&local_18);
    }
  }
  local_18._4_4_ = (int)(local_18 >> 0x20);
  *(uint *)param_1 = (uint)local_18;
  *(int *)((int)param_1 + 4) = local_18._4_4_;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005c5690 @ 005c5690 ////

void __fastcall FUN_005c5690(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  longlong local_8;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0xc0) + 0x2fc);
  if (piVar2 != (int *)0x0) {
    pvVar5 = (void *)FUN_005295b0(piVar2);
    puVar6 = (uint *)FUN_005c5600(&local_8,pvVar5);
    uVar3 = *puVar6;
    puVar1 = (uint *)(param_1 + 0x70);
    uVar4 = *puVar1;
    *puVar1 = uVar4 + uVar3;
    *(uint *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + puVar6[1] + (uint)CARRY4(uVar4,uVar3);
    FUN_00471b10((longlong *)puVar1);
  }
  return;
}


//// FUNCTION FUN_005c56e0 @ 005c56e0 ////

void __fastcall FUN_005c56e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  float *pfVar4;
  void *pvVar5;
  uint *puVar6;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  undefined1 local_8 [8];
  
  iVar10 = 0;
  pTVar9 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
  pTVar8 = &TM::CPhaseBase::RTTI_Type_Descriptor;
  iVar7 = 0;
  piVar3 = (int *)FUN_005b22a0(*(int *)(param_1 + 0xc0));
  piVar3 = (int *)FUN_00ace790(piVar3,iVar7,pTVar8,pTVar9,iVar10);
  if (piVar3 != (int *)0x0) {
    pfVar4 = (float *)(**(code **)(*piVar3 + 0x38))(local_8);
    if (*pfVar4 < 1.0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x48))();
      if (piVar3 != (int *)0x0) {
        pvVar5 = (void *)FUN_005295b0(piVar3);
        puVar6 = (uint *)FUN_005c5600((longlong *)&stack0xfffffff4,pvVar5);
        uVar1 = *puVar6;
        uVar2 = *(uint *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = uVar2 + uVar1;
        *(uint *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + puVar6[1] + (uint)CARRY4(uVar2,uVar1)
        ;
        FUN_00471b10((longlong *)(param_1 + 0x70));
      }
    }
  }
  return;
}


//// FUNCTION FUN_005c5770 @ 005c5770 ////

undefined4 __fastcall FUN_005c5770(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6aeb;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 0xa8) == 0) && (*(int *)(param_1 + 0xc0) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0xc0) + 0x210) != 0)) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x8c);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00472380(puVar1);
    }
    *(undefined4 **)(param_1 + 0xa8) = puVar1;
    local_4 = 0xffffffff;
    FUN_00471c10(puVar1,*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x210));
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0xa8);
}


//// FUNCTION FUN_005c5810 @ 005c5810 ////

void __fastcall FUN_005c5810(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xa8);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}


//// FUNCTION FUN_005c5840 @ 005c5840 ////

void __thiscall FUN_005c5840(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  void *this_00;
  
  if ((*(int *)((int)this + 0xc0) != 0) &&
     (piVar1 = *(int **)(*(int *)((int)this + 0xc0) + 0x210), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 0x20))();
    if (cVar2 != '\0') {
      this_00 = (void *)FUN_005c5770((int)this);
      if (this_00 != (void *)0x0) {
        FUN_00471b10((longlong *)&stack0xfffffff0);
        FUN_00471f30(this_00,param_1,param_2);
      }
    }
  }
  return;
}


//// FUNCTION FUN_005c58a0 @ 005c58a0 ////

void __fastcall FUN_005c58a0(void *param_1)

{
  int *piVar1;
  int unaff_EDI;
  uint uVar2;
  undefined4 local_24;
  undefined4 local_20;
  uint uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined8 local_8;
  
  uStack_c = DAT_0104d6ec;
  local_10 = DAT_0104d6e8;
  uStack_1c = 0x5c58c3;
  FUN_00471b10((longlong *)&local_10);
  uStack_1c = 0x5c58dc;
  local_8 = FUN_00acd42c();
  uStack_1c = 0x5c58ed;
  FUN_00471b10(&local_8);
  local_10 = (undefined4)local_8;
  uStack_c = local_8._4_4_;
  uStack_1c = 0x5c5906;
  FUN_00471b10((longlong *)&local_10);
  uStack_1c = 0x5c590b;
  piVar1 = (int *)GetPlayerStudio();
  uStack_1c = 1;
  local_24 = local_10;
  local_20 = uStack_c;
  FUN_00471b10((longlong *)&local_24);
  (**(code **)(*piVar1 + 0x2c))();
  uVar2 = *(uint *)((int)param_1 + 0x70);
  *(uint *)((int)param_1 + 0x70) = uVar2 + uStack_1c;
  *(uint *)((int)param_1 + 0x74) =
       *(int *)((int)param_1 + 0x74) + unaff_EDI + (uint)CARRY4(uVar2,uStack_1c);
  FUN_00471b10((longlong *)((int)param_1 + 0x70));
  uVar2 = uStack_1c;
  FUN_00471b10((longlong *)&stack0xffffffd4);
  FUN_005c5840(param_1,uVar2,unaff_EDI);
  return;
}


//// FUNCTION FUN_005c5980 @ 005c5980 ////

void __fastcall FUN_005c5980(void *param_1)

{
  int *piVar1;
  int unaff_EDI;
  uint uVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  uint uStack_14;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = DAT_0104d71c;
  local_8 = DAT_0104d718;
  uStack_14 = 0x5c59a3;
  FUN_00471b10((longlong *)&local_8);
  uStack_14 = 0x5c59a8;
  piVar1 = (int *)GetPlayerStudio();
  uStack_14 = 0;
  local_1c = local_8;
  local_18 = local_4;
  FUN_00471b10((longlong *)&local_1c);
  (**(code **)(*piVar1 + 0x2c))();
  uVar2 = uStack_14;
  iVar3 = unaff_EDI;
  FUN_00471b10((longlong *)&stack0xffffffdc);
  FUN_005c5840(param_1,uVar2,iVar3);
  uVar2 = *(uint *)((int)param_1 + 0x70);
  *(uint *)((int)param_1 + 0x70) = uVar2 + uStack_14;
  *(uint *)((int)param_1 + 0x74) =
       *(int *)((int)param_1 + 0x74) + unaff_EDI + (uint)CARRY4(uVar2,uStack_14);
  FUN_00471b10((longlong *)((int)param_1 + 0x70));
  return;
}


//// FUNCTION FUN_005c5a40 @ 005c5a40 ////

ulonglong * __thiscall FUN_005c5a40(void *this,ulonglong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((param_2 != 0) && (iVar1 = *(int *)((int)this + 0xd8), iVar1 != 0)) {
    *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 200);
    *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(iVar1 + 0xcc);
    FUN_00471b10((longlong *)param_1);
    return param_1;
  }
  uVar2 = FUN_00acd42c();
  *param_1 = uVar2;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_005c5aa0 @ 005c5aa0 ////

void __fastcall FUN_005c5aa0(int param_1)

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


//// FUNCTION FUN_005c5c20 @ 005c5c20 ////

void __thiscall FUN_005c5c20(void *this,int param_1)

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


//// FUNCTION FUN_005c5c80 @ 005c5c80 ////

int * __fastcall FUN_005c5c80(int *param_1)

{
  FUN_005c53b0(param_1);
  return param_1;
}


//// FUNCTION FUN_005c5c90 @ 005c5c90 ////

int * __fastcall FUN_005c5c90(int *param_1)

{
  FUN_005c5350(param_1);
  return param_1;
}


//// FUNCTION FUN_005c5d30 @ 005c5d30 ////

longlong * __thiscall FUN_005c5d30(void *this,longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_00acd42c();
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *(uint *)param_1 = (uint)uVar3 + *(int *)this;
  *(uint *)((int)param_1 + 4) = (int)(uVar3 >> 0x20) + iVar2 + (uint)CARRY4((uint)uVar3,uVar1);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005c5d60 @ 005c5d60 ////

void __fastcall FUN_005c5d60(int *param_1)

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
  puStack_8 = &LAB_00cb6b08;
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


//// FUNCTION FUN_005c5e30 @ 005c5e30 ////

void __fastcall FUN_005c5e30(int param_1)

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
  puStack_8 = &LAB_00cb6b50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x34;
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
    FUN_0098c580((undefined4 *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x35;
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
  uVar3 = FUN_0098b490("TypeOfThing");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x48));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x36;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x68));
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
  uVar3 = FUN_0098b490("PItem");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x68));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x37;
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
  uVar3 = FUN_0098b490("TotalSpentFix");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x80),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x38;
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
  uVar3 = FUN_0098b490("TotalSpentUse");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x88),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x39;
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
  uVar3 = FUN_0098b490("TotalCharged");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x90),8);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005c63a0 @ 005c63a0 ////

void __fastcall FUN_005c63a0(int *param_1)

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
  puStack_8 = &LAB_00cb6b68;
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


//// FUNCTION FUN_005c6470 @ 005c6470 ////

void __fastcall FUN_005c6470(int param_1)

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
  puStack_8 = &LAB_00cb6bd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x3e;
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
  uVar3 = FUN_0098b490("PProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x74));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x3f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x8c));
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
  uVar3 = FUN_0098b490("Director");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x8c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x40;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xa4));
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
  uVar3 = FUN_0098b490("ActorList");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0xa4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x41;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xd8));
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
  uVar3 = FUN_0098b490("CrewList");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0xd8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x42;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("EquipmentList");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x10c);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x43;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x140));
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
  uVar3 = FUN_0098b490("SetList");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x140);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x44;
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
  uVar3 = FUN_0098b490("InitialCostCharged");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x180),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x45;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
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
  uVar3 = FUN_0098b490("CustomScriptwritingCharged");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x181),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x46;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
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
  uVar3 = FUN_0098b490("DailyInclusiveCosts");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x178),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCosts.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x47;
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
  uVar3 = FUN_0098b490("CustomScriptAmountChargedSoFar");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x188),8);
  }
  FUN_005271c0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005c6d80 @ 005c6d80 ////

void __thiscall FUN_005c6d80(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  uint local_38;
  uint local_34;
  void *pvStack_30;
  void *pvStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar1 = *(int *)((int)this + 0xd8);
  local_38 = 0;
  local_34 = 0;
  uVar3 = FUN_005b2780(*(int *)((int)this + 0xc0));
  piVar8 = (int *)(iVar1 + 0xa0);
  (**(code **)(*piVar8 + 4))();
  *(undefined4 *)(iVar1 + 0xb4) = uVar3;
  (**(code **)*piVar8)();
  piVar8 = *(int **)(*(int *)((int)this + 0xd8) + 0xb4);
  if (piVar8 != (int *)0x0) {
    piVar8 = (int *)FUN_00ace790(piVar8,0,&TM::TMBase::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
    if (piVar8 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x5c))(&uStack_28);
      FUN_004036d0((void *)(*(int *)((int)this + 0xd8) + 0x60),(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_2c);
      }
      puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x144))(&pvStack_2c);
      FUN_004036d0((void *)(*(int *)((int)this + 0xd8) + 0x80),(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_30);
      }
      piVar5 = (int *)(**(code **)(*piVar8 + 0x1d4))();
      puVar6 = (uint *)(**(code **)(*piVar5 + 0x10))(&local_38);
      local_38 = *puVar6;
      local_34 = puVar6[1];
      FUN_00471b10((longlong *)&local_38);
      for (piVar5 = (int *)piVar8[0x294]; piVar5 != piVar8 + 0x297; piVar5 = (int *)piVar5[1]) {
        piVar7 = (int *)(**(code **)(*(int *)piVar5[2] + 0x1d4))();
        puVar6 = (uint *)(**(code **)(*piVar7 + 0x10))(&pvStack_30);
        bVar9 = CARRY4(local_38,*puVar6);
        local_38 = local_38 + *puVar6;
        local_34 = local_34 + puVar6[1] + (uint)bVar9;
        FUN_00471b10((longlong *)&local_38);
      }
    }
    piVar8 = (int *)FUN_00ace790(*(int **)(*(int *)((int)this + 0xd8) + 0xb4),0,
                                 &TM::TMBase::RTTI_Type_Descriptor,&TM::CExtra::RTTI_Type_Descriptor
                                 ,0);
    if (piVar8 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x5c))(&uStack_28);
      FUN_004036d0((void *)(*(int *)((int)this + 0xd8) + 0x60),(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_2c);
      }
      puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x144))(&pvStack_2c);
      FUN_004036d0((void *)(*(int *)((int)this + 0xd8) + 0x80),(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_30);
      }
      piVar8 = (int *)(**(code **)(*piVar8 + 0x1d4))();
      puVar6 = (uint *)(**(code **)(*piVar8 + 0x10))(&local_38);
      local_38 = *puVar6;
      local_34 = puVar6[1];
      FUN_00471b10((longlong *)&local_38);
    }
    iVar1 = *(int *)((int)this + 0xd8);
    uVar2 = *(uint *)(iVar1 + 200);
    *(uint *)(iVar1 + 200) = uVar2 + local_38;
    *(uint *)(iVar1 + 0xcc) = *(int *)(iVar1 + 0xcc) + local_34 + (uint)CARRY4(uVar2,local_38);
    FUN_00471b10((longlong *)(iVar1 + 200));
    uVar2 = *(uint *)((int)this + 0x70);
    *(uint *)((int)this + 0x70) = uVar2 + local_38;
    *(uint *)((int)this + 0x74) =
         *(int *)((int)this + 0x74) + local_34 + (uint)CARRY4(uVar2,local_38);
    FUN_00471b10((longlong *)((int)this + 0x70));
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xd8);
      *(uint *)(param_1 + 0xd8) = uVar2 + local_38;
      *(uint *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + local_34 + (uint)CARRY4(uVar2,local_38)
      ;
      FUN_00471b10((longlong *)(param_1 + 0xd8));
    }
  }
  return;
}


//// FUNCTION FUN_005c7040 @ 005c7040 ////

int * __thiscall FUN_005c7040(void *this,int *param_1)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  int iVar7;
  bool bVar8;
  ulonglong uVar9;
  undefined8 local_100;
  wchar_t *local_f8;
  int iStack_f4;
  wchar_t *local_f0;
  int local_ec;
  wchar_t *local_e8;
  uint local_e4;
  uint local_e0;
  wchar_t local_dc [10];
  wchar_t *local_c8;
  int local_c4;
  wchar_t *local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_9c;
  wchar_t local_98 [66];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cb6beb;
  pvStack_14 = ExceptionList;
  local_c0 = (wchar_t *)0x0;
  local_e8 = local_dc;
  local_dc[0] = L'\0';
  local_e4 = 0;
  local_e0 = 10;
  local_c = 0;
  local_100 = 0;
  local_f8 = (wchar_t *)0x0;
  iStack_f4 = 0;
  ExceptionList = &pvStack_14;
  sVar2 = FUN_00ace02d(L"<table width=100% cellspacing=1 bgcolor=#18000000>");
  FUN_0040cae0(&local_e8,L"<table width=100% cellspacing=1 bgcolor=#18000000>",sVar2);
  local_100 = FUN_00acd42c();
  local_9c = (int)(local_100 >> 0x20);
  uVar3 = (uint)local_100;
  FUN_00471b10(&local_100);
  sVar2 = FUN_00ace02d(L"<tr><td><expand id=");
  FUN_0040cae0(&local_e8,L"<tr><td><expand id=",sVar2);
  sVar2 = _swprintf(local_98,0xd18f7c,(wchar_t *)0x1);
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_e8,L">",sVar2);
  sVar2 = FUN_00ace02d(L"<ed><translate>budget_actors</translate></ed>");
  FUN_0040cae0(&local_e8,L"<ed><translate>budget_actors</translate></ed>",sVar2);
  sVar2 = FUN_00ace02d(L"<ed><translate>budget_actors</translate><br>");
  FUN_0040cae0(&local_e8,L"<ed><translate>budget_actors</translate><br>",sVar2);
  sVar2 = FUN_00ace02d(L"<table width=100% cellspacing=1 bgcolor=#18000000>");
  FUN_0040cae0(&local_e8,L"<table width=100% cellspacing=1 bgcolor=#18000000>",sVar2);
  iVar7 = *(int *)((int)this + 0xe4);
  if (iVar7 != (int)this + 0xf0) {
    do {
      local_c0 = *(wchar_t **)(iVar7 + 8);
      local_f0 = (wchar_t *)(*(uint *)(local_c0 + 0x60) + *(uint *)(local_c0 + 0x5c));
      local_ec = *(int *)(local_c0 + 0x62) + *(int *)(local_c0 + 0x5e) +
                 (uint)CARRY4(*(uint *)(local_c0 + 0x60),*(uint *)(local_c0 + 0x5c));
      FUN_00471b10((longlong *)&local_f0);
      local_c8 = (wchar_t *)(*(uint *)(local_c0 + 100) + (int)local_f0);
      local_c4 = *(int *)(local_c0 + 0x66) + local_ec +
                 (uint)CARRY4(*(uint *)(local_c0 + 100),(uint)local_f0);
      FUN_00471b10((longlong *)&local_c8);
      iStack_f4 = local_c4;
      local_f8 = local_c8;
      FUN_00471b10((longlong *)&local_f8);
      if ((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07 != 0.0) {
        sVar2 = FUN_00ace02d(L"<tr><td bgcolor=#00000000 width=64></td><td>");
        FUN_0040cae0(&local_e8,L"<tr><td bgcolor=#00000000 width=64></td><td>",sVar2);
        FUN_0040cae0(&local_e8,*(wchar_t **)(*(int *)(iVar7 + 8) + 0x60),
                     *(size_t *)(*(int *)(iVar7 + 8) + 100));
        sVar2 = FUN_00ace02d(L"</td><td width=96 align=right><money>");
        FUN_0040cae0(&local_e8,L"</td><td width=96 align=right><money>",sVar2);
        sVar2 = _swprintf(local_98,0xd18f84,
                          SUB84((double)((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07),0));
        FUN_0040cae0(&local_e8,local_98,sVar2);
        sVar2 = FUN_00ace02d(L"</money></td></tr>");
        FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
        local_100 = CONCAT44(local_100._4_4_ + iStack_f4 +
                             (uint)CARRY4((uint)local_100,(uint)local_f8),
                             (uint)local_100 + (int)local_f8);
        FUN_00471b10(&local_100);
      }
      iVar7 = *(int *)(iVar7 + 4);
    } while (iVar7 != (int)this + 0xf0);
  }
  sVar2 = FUN_00ace02d(L"</table>");
  FUN_0040cae0(&local_e8,L"</table>",sVar2);
  sVar2 = FUN_00ace02d(L"</ed></expand></td><td width=96 align=right valign=bottom><money>");
  FUN_0040cae0(&local_e8,L"</ed></expand></td><td width=96 align=right valign=bottom><money>",sVar2)
  ;
  sVar2 = _swprintf(local_98,0xd18f84,SUB84((double)((float)(longlong)local_100 * 1.1920929e-07),0))
  ;
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
  local_100 = CONCAT44(local_9c,uVar3);
  FUN_00471b10(&local_100);
  sVar2 = FUN_00ace02d(L"<tr><td><expand id=");
  FUN_0040cae0(&local_e8,L"<tr><td><expand id=",sVar2);
  sVar2 = _swprintf(local_98,0xd18f7c,(wchar_t *)0x2);
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_e8,L">",sVar2);
  sVar2 = FUN_00ace02d(L"<ed><translate>budget_crew</translate></ed>");
  FUN_0040cae0(&local_e8,L"<ed><translate>budget_crew</translate></ed>",sVar2);
  sVar2 = FUN_00ace02d(L"<ed><translate>budget_crew</translate><br>");
  FUN_0040cae0(&local_e8,L"<ed><translate>budget_crew</translate><br>",sVar2);
  sVar2 = FUN_00ace02d(L"<table width=100% cellspacing=1 bgcolor=#18000000>");
  FUN_0040cae0(&local_e8,L"<table width=100% cellspacing=1 bgcolor=#18000000>",sVar2);
  iVar7 = *(int *)((int)this + 0x118);
  if (iVar7 != (int)this + 0x124) {
    do {
      local_c0 = *(wchar_t **)(iVar7 + 8);
      local_f0 = (wchar_t *)(*(uint *)(local_c0 + 0x60) + *(uint *)(local_c0 + 0x5c));
      local_ec = *(int *)(local_c0 + 0x62) + *(int *)(local_c0 + 0x5e) +
                 (uint)CARRY4(*(uint *)(local_c0 + 0x60),*(uint *)(local_c0 + 0x5c));
      FUN_00471b10((longlong *)&local_f0);
      local_c8 = (wchar_t *)(*(uint *)(local_c0 + 100) + (int)local_f0);
      local_c4 = *(int *)(local_c0 + 0x66) + local_ec +
                 (uint)CARRY4(*(uint *)(local_c0 + 100),(uint)local_f0);
      FUN_00471b10((longlong *)&local_c8);
      iStack_f4 = local_c4;
      local_f8 = local_c8;
      FUN_00471b10((longlong *)&local_f8);
      if ((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07 != 0.0) {
        sVar2 = FUN_00ace02d(L"<tr><td bgcolor=#00000000 width=64></td><td>");
        FUN_0040cae0(&local_e8,L"<tr><td bgcolor=#00000000 width=64></td><td>",sVar2);
        FUN_0040cae0(&local_e8,*(wchar_t **)(*(int *)(iVar7 + 8) + 0x60),
                     *(size_t *)(*(int *)(iVar7 + 8) + 100));
        local_c0 = *(wchar_t **)(iVar7 + 8);
        sVar2 = FUN_00ace02d((short *)&DAT_00d2ac08);
        FUN_0040cae0(&local_e8,L" (",sVar2);
        FUN_0040cae0(&local_e8,*(wchar_t **)(local_c0 + 0x40),*(size_t *)(local_c0 + 0x42));
        sVar2 = FUN_00ace02d((short *)&DAT_00d2446c);
        FUN_0040cae0(&local_e8,L")",sVar2);
        sVar2 = FUN_00ace02d(L"</td><td width=96 align=right><money>");
        FUN_0040cae0(&local_e8,L"</td><td width=96 align=right><money>",sVar2);
        sVar2 = _swprintf(local_98,0xd18f84,
                          SUB84((double)((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07),0));
        FUN_0040cae0(&local_e8,local_98,sVar2);
        sVar2 = FUN_00ace02d(L"</money></td></tr>");
        FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
        local_100 = CONCAT44(local_100._4_4_ + iStack_f4 +
                             (uint)CARRY4((uint)local_100,(uint)local_f8),
                             (uint)local_100 + (int)local_f8);
        FUN_00471b10(&local_100);
      }
      iVar7 = *(int *)(iVar7 + 4);
    } while (iVar7 != (int)this + 0x124);
  }
  sVar2 = FUN_00ace02d(L"</table>");
  FUN_0040cae0(&local_e8,L"</table>",sVar2);
  sVar2 = FUN_00ace02d(L"</ed></expand></td><td width=96 align=right valign=bottom><money>");
  FUN_0040cae0(&local_e8,L"</ed></expand></td><td width=96 align=right valign=bottom><money>",sVar2)
  ;
  sVar2 = _swprintf(local_98,0xd18f84,SUB84((double)((float)(longlong)local_100 * 1.1920929e-07),0))
  ;
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
  local_100 = CONCAT44(local_9c,uVar3);
  FUN_00471b10(&local_100);
  sVar2 = FUN_00ace02d(L"<tr><td><expand id=");
  FUN_0040cae0(&local_e8,L"<tr><td><expand id=",sVar2);
  sVar2 = _swprintf(local_98,0xd18f7c,(wchar_t *)0x3);
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_e8,L">",sVar2);
  sVar2 = FUN_00ace02d(L"<ed><translate>budget_sets</translate></ed>");
  FUN_0040cae0(&local_e8,L"<ed><translate>budget_sets</translate></ed>",sVar2);
  sVar2 = FUN_00ace02d(L"<ed><translate>budget_sets</translate><br>");
  FUN_0040cae0(&local_e8,L"<ed><translate>budget_sets</translate><br>",sVar2);
  sVar2 = FUN_00ace02d(L"<table width=100% cellspacing=1 bgcolor=#18000000>");
  FUN_0040cae0(&local_e8,L"<table width=100% cellspacing=1 bgcolor=#18000000>",sVar2);
  iVar7 = *(int *)((int)this + 0x180);
  if (iVar7 != (int)this + 0x18c) {
    do {
      local_c0 = *(wchar_t **)(iVar7 + 8);
      local_f0 = (wchar_t *)(*(uint *)(local_c0 + 0x60) + *(uint *)(local_c0 + 0x5c));
      local_ec = *(int *)(local_c0 + 0x62) + *(int *)(local_c0 + 0x5e) +
                 (uint)CARRY4(*(uint *)(local_c0 + 0x60),*(uint *)(local_c0 + 0x5c));
      FUN_00471b10((longlong *)&local_f0);
      local_c8 = (wchar_t *)(*(uint *)(local_c0 + 100) + (int)local_f0);
      local_c4 = *(int *)(local_c0 + 0x66) + local_ec +
                 (uint)CARRY4(*(uint *)(local_c0 + 100),(uint)local_f0);
      FUN_00471b10((longlong *)&local_c8);
      iStack_f4 = local_c4;
      local_f8 = local_c8;
      FUN_00471b10((longlong *)&local_f8);
      if ((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07 != 0.0) {
        sVar2 = FUN_00ace02d(L"<tr><td bgcolor=#00000000 width=64></td><td>");
        FUN_0040cae0(&local_e8,L"<tr><td bgcolor=#00000000 width=64></td><td>",sVar2);
        FUN_0040cae0(&local_e8,*(wchar_t **)(*(int *)(iVar7 + 8) + 0x60),
                     *(size_t *)(*(int *)(iVar7 + 8) + 100));
        sVar2 = FUN_00ace02d(L"</td><td width=96 align=right><money>");
        FUN_0040cae0(&local_e8,L"</td><td width=96 align=right><money>",sVar2);
        sVar2 = _swprintf(local_98,0xd18f84,
                          SUB84((double)((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07),0));
        FUN_0040cae0(&local_e8,local_98,sVar2);
        sVar2 = FUN_00ace02d(L"</money></td></tr>");
        FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
        local_100 = CONCAT44(local_100._4_4_ + iStack_f4 +
                             (uint)CARRY4((uint)local_100,(uint)local_f8),
                             (uint)local_100 + (int)local_f8);
        FUN_00471b10(&local_100);
      }
      iVar7 = *(int *)(iVar7 + 4);
    } while (iVar7 != (int)this + 0x18c);
  }
  sVar2 = FUN_00ace02d(L"</table>");
  FUN_0040cae0(&local_e8,L"</table>",sVar2);
  sVar2 = FUN_00ace02d(L"</ed></expand></td><td width=96 align=right valign=bottom><money>");
  FUN_0040cae0(&local_e8,L"</ed></expand></td><td width=96 align=right valign=bottom><money>",sVar2)
  ;
  sVar2 = _swprintf(local_98,0xd18f84,SUB84((double)((float)(longlong)local_100 * 1.1920929e-07),0))
  ;
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
  local_100 = CONCAT44(local_9c,uVar3);
  FUN_00471b10(&local_100);
  sVar2 = FUN_00ace02d(L"<tr><td><expand id=");
  FUN_0040cae0(&local_e8,L"<tr><td><expand id=",sVar2);
  sVar2 = _swprintf(local_98,0xd18f7c,(wchar_t *)0x4);
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_e8,L">",sVar2);
  sVar2 = FUN_00ace02d(L"<ed><translate>budget_equipment</translate></ed>");
  FUN_0040cae0(&local_e8,L"<ed><translate>budget_equipment</translate></ed>",sVar2);
  sVar2 = FUN_00ace02d(L"<ed><translate>budget_equipment</translate><br>");
  FUN_0040cae0(&local_e8,L"<ed><translate>budget_equipment</translate><br>",sVar2);
  sVar2 = FUN_00ace02d(L"<table width=100% cellspacing=1 bgcolor=#18000000>");
  FUN_0040cae0(&local_e8,L"<table width=100% cellspacing=1 bgcolor=#18000000>",sVar2);
  iVar7 = *(int *)((int)this + 0x14c);
  if (iVar7 != (int)this + 0x158) {
    do {
      local_c0 = *(wchar_t **)(iVar7 + 8);
      local_f0 = (wchar_t *)(*(uint *)(local_c0 + 0x60) + *(uint *)(local_c0 + 0x5c));
      local_ec = *(int *)(local_c0 + 0x62) + *(int *)(local_c0 + 0x5e) +
                 (uint)CARRY4(*(uint *)(local_c0 + 0x60),*(uint *)(local_c0 + 0x5c));
      FUN_00471b10((longlong *)&local_f0);
      local_c8 = (wchar_t *)(*(uint *)(local_c0 + 100) + (int)local_f0);
      local_c4 = *(int *)(local_c0 + 0x66) + local_ec +
                 (uint)CARRY4(*(uint *)(local_c0 + 100),(uint)local_f0);
      FUN_00471b10((longlong *)&local_c8);
      iStack_f4 = local_c4;
      local_f8 = local_c8;
      FUN_00471b10((longlong *)&local_f8);
      if ((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07 != 0.0) {
        sVar2 = FUN_00ace02d(L"<tr><td bgcolor=#00000000 width=64></td><td>");
        FUN_0040cae0(&local_e8,L"<tr><td bgcolor=#00000000 width=64></td><td>",sVar2);
        FUN_0040cae0(&local_e8,*(wchar_t **)(*(int *)(iVar7 + 8) + 0x60),
                     *(size_t *)(*(int *)(iVar7 + 8) + 100));
        sVar2 = FUN_00ace02d(L"</td><td width=96 align=right><money>");
        FUN_0040cae0(&local_e8,L"</td><td width=96 align=right><money>",sVar2);
        sVar2 = _swprintf(local_98,0xd18f84,
                          SUB84((double)((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07),0));
        FUN_0040cae0(&local_e8,local_98,sVar2);
        sVar2 = FUN_00ace02d(L"</money></td></tr>");
        FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
        local_100 = CONCAT44(local_100._4_4_ + iStack_f4 +
                             (uint)CARRY4((uint)local_100,(uint)local_f8),
                             (uint)local_100 + (int)local_f8);
        FUN_00471b10(&local_100);
      }
      iVar7 = *(int *)(iVar7 + 4);
    } while (iVar7 != (int)this + 0x158);
  }
  sVar2 = FUN_00ace02d(L"</table>");
  FUN_0040cae0(&local_e8,L"</table>",sVar2);
  sVar2 = FUN_00ace02d(L"</ed></expand></td><td width=96 align=right valign=bottom><money>");
  FUN_0040cae0(&local_e8,L"</ed></expand></td><td width=96 align=right valign=bottom><money>",sVar2)
  ;
  sVar2 = _swprintf(local_98,0xd18f84,SUB84((double)((float)(longlong)local_100 * 1.1920929e-07),0))
  ;
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
  local_c0 = (wchar_t *)(*(uint *)((int)this + 0x70) + *(uint *)((int)this + 0x68));
  local_bc = *(int *)((int)this + 0x74) + *(int *)((int)this + 0x6c) +
             (uint)CARRY4(*(uint *)((int)this + 0x70),*(uint *)((int)this + 0x68));
  FUN_00471b10((longlong *)&local_c0);
  local_f0 = (wchar_t *)(*(uint *)((int)this + 0x78) + (int)local_c0);
  local_ec = *(int *)((int)this + 0x7c) + local_bc +
             (uint)CARRY4(*(uint *)((int)this + 0x78),(uint)local_c0);
  FUN_00471b10((longlong *)&local_f0);
  local_f8 = local_f0;
  iStack_f4 = local_ec;
  FUN_00471b10((longlong *)&local_f8);
  sVar2 = FUN_00ace02d(L"<tr><td bgcolor=#00000000></td><td align=right valign=bottom><money>");
  FUN_0040cae0(&local_e8,L"<tr><td bgcolor=#00000000></td><td align=right valign=bottom><money>",
               sVar2);
  sVar2 = _swprintf(local_98,0xd18f84,
                    SUB84((double)((float)CONCAT44(iStack_f4,local_f8) * 1.1920929e-07),0));
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
  sVar2 = FUN_00ace02d(L"</table>");
  FUN_0040cae0(&local_e8,L"</table>",sVar2);
  iVar7 = local_9c;
  local_ac = local_9c;
  local_b0 = uVar3;
  FUN_00471b10((longlong *)&local_b0);
  local_a4 = iVar7;
  local_a8 = uVar3;
  FUN_00471b10((longlong *)&local_a8);
  local_b4 = iVar7;
  local_b8 = uVar3;
  FUN_00471b10((longlong *)&local_b8);
  iVar7 = *(int *)(*(int *)((int)this + 0xc0) + 0xac);
  pwVar6 = (wchar_t *)0x0;
  local_c0 = (wchar_t *)0x0;
  local_f0 = (wchar_t *)0x0;
  local_c8 = (wchar_t *)0x0;
  if (iVar7 != *(int *)((int)this + 0xc0) + 0xb8) {
    do {
      uVar3 = *(uint *)(*(int *)(iVar7 + 8) + 200);
      bVar8 = CARRY4(local_a8,uVar3);
      local_a8 = local_a8 + uVar3;
      local_a4 = local_a4 + *(int *)(*(int *)(iVar7 + 8) + 0xcc) + (uint)bVar8;
      FUN_00471b10((longlong *)&local_a8);
      uVar3 = *(uint *)(*(int *)(iVar7 + 8) + 0xd0);
      bVar8 = CARRY4(local_a8,uVar3);
      local_a8 = local_a8 + uVar3;
      local_a4 = local_a4 + *(int *)(*(int *)(iVar7 + 8) + 0xd4) + (uint)bVar8;
      FUN_00471b10((longlong *)&local_a8);
      uVar9 = FUN_0043b570();
      local_c0 = (wchar_t *)((int)local_c0 + (int)uVar9);
      iVar1 = *(int *)(iVar7 + 8);
      if (*(int *)(iVar1 + 0x1c0) != 0) {
        if (*(int *)(iVar1 + 0x1c0) == 4) {
          local_c8 = (wchar_t *)((int)local_c8 + 1);
        }
        bVar8 = CARRY4(local_b0,*(uint *)(iVar1 + 200));
        local_b0 = local_b0 + *(uint *)(iVar1 + 200);
        local_ac = local_ac + *(int *)(iVar1 + 0xcc) + (uint)bVar8;
        FUN_00471b10((longlong *)&local_b0);
        uVar3 = *(uint *)(*(int *)(iVar7 + 8) + 0xd0);
        bVar8 = CARRY4(local_b0,uVar3);
        local_b0 = local_b0 + uVar3;
        local_ac = local_ac + *(int *)(*(int *)(iVar7 + 8) + 0xd4) + (uint)bVar8;
        FUN_00471b10((longlong *)&local_b0);
        uVar9 = FUN_0043b570();
        pwVar6 = (wchar_t *)((int)pwVar6 + (int)uVar9);
        uVar3 = *(uint *)(*(int *)(iVar7 + 8) + 0xd8);
        bVar8 = CARRY4(local_b8,uVar3);
        local_b8 = local_b8 + uVar3;
        local_b4 = local_b4 + *(int *)(*(int *)(iVar7 + 8) + 0xdc) + (uint)bVar8;
        FUN_00471b10((longlong *)&local_b8);
        uVar3 = *(uint *)(*(int *)(iVar7 + 8) + 0xe0);
        bVar8 = CARRY4(local_b8,uVar3);
        local_b8 = local_b8 + uVar3;
        local_b4 = local_b4 + *(int *)(*(int *)(iVar7 + 8) + 0xe4) + (uint)bVar8;
        FUN_00471b10((longlong *)&local_b8);
        uVar9 = FUN_0043b570();
        local_f0 = (wchar_t *)((int)local_f0 + (int)uVar9);
      }
      iVar7 = *(int *)(iVar7 + 4);
    } while (iVar7 != *(int *)((int)this + 0xc0) + 0xb8);
  }
  sVar2 = FUN_00ace02d(L"<hr>");
  FUN_0040cae0(&local_e8,L"<hr>",sVar2);
  sVar2 = _swprintf(local_98,0xd18f7c,local_c8);
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L" <translate>budget_shots-completed</translate>");
  FUN_0040cae0(&local_e8,L" <translate>budget_shots-completed</translate>",sVar2);
  sVar2 = FUN_00ace02d(
                      L"<br><table><tr><td><translate>budget_running-cost</translate></td><td><money>"
                      );
  FUN_0040cae0(&local_e8,
               L"<br><table><tr><td><translate>budget_running-cost</translate></td><td><money>",
               sVar2);
  sVar2 = _swprintf(local_98,0xd18f84,
                    SUB84((double)((float)CONCAT44(local_b4,local_b8) * 1.1920929e-07),0));
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
  sVar2 = FUN_00ace02d(L"<tr><td><translate>budget_running-costestimate</translate></td><td><money>"
                      );
  FUN_0040cae0(&local_e8,
               L"<tr><td><translate>budget_running-costestimate</translate></td><td><money>",sVar2);
  sVar2 = _swprintf(local_98,0xd18f84,
                    SUB84((double)((float)CONCAT44(local_ac,local_b0) * 1.1920929e-07),0));
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L"</money></td></tr>");
  FUN_0040cae0(&local_e8,L"</money></td></tr>",sVar2);
  sVar2 = FUN_00ace02d(L"<tr><td><translate>budget_total-costestimate</translate></td><td><money>");
  FUN_0040cae0(&local_e8,L"<tr><td><translate>budget_total-costestimate</translate></td><td><money>"
               ,sVar2);
  sVar2 = _swprintf(local_98,0xd18f84,
                    SUB84((double)((float)CONCAT44(local_a4,local_a8) * 1.1920929e-07),0));
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L"</money></td></tr></table>");
  FUN_0040cae0(&local_e8,L"</money></td></tr></table>",sVar2);
  sVar2 = FUN_00ace02d(L"<br><table><tr><td><translate>budget_running-time</translate></td><td>");
  FUN_0040cae0(&local_e8,L"<br><table><tr><td><translate>budget_running-time</translate></td><td>",
               sVar2);
  sVar2 = _swprintf(local_98,0xd18f7c,local_f0);
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L" days</td></tr>");
  FUN_0040cae0(&local_e8,L" days</td></tr>",sVar2);
  sVar2 = FUN_00ace02d(L"<tr><td><translate>budget_running-timeestimate</translate></td><td>");
  FUN_0040cae0(&local_e8,L"<tr><td><translate>budget_running-timeestimate</translate></td><td>",
               sVar2);
  sVar2 = _swprintf(local_98,0xd18f7c,pwVar6);
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L" days</td></tr>");
  FUN_0040cae0(&local_e8,L" days</td></tr>",sVar2);
  sVar2 = FUN_00ace02d(L"<tr><td><translate>budget_total-timeestimate</translate></td><td>");
  FUN_0040cae0(&local_e8,L"<tr><td><translate>budget_total-timeestimate</translate></td><td>",sVar2)
  ;
  sVar2 = _swprintf(local_98,0xd18f7c,local_c0);
  FUN_0040cae0(&local_e8,local_98,sVar2);
  sVar2 = FUN_00ace02d(L" days</td></tr></table>");
  FUN_0040cae0(&local_e8,L" days</td></tr></table>",sVar2);
  uVar3 = local_e4;
  pwVar6 = local_e8;
  *param_1 = (int)(param_1 + 3);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  if (9 < local_e4) {
    uVar4 = local_e4 + 0x20 >> 5;
    param_1[2] = uVar4 << 5;
    pvVar5 = _malloc(uVar4 * 0x40);
    *param_1 = (int)pvVar5;
  }
  _wcsncpy((wchar_t *)*param_1,pwVar6,uVar3);
  param_1[1] = uVar3;
  *(undefined2 *)(*param_1 + uVar3 * 2) = 0;
  if (local_e0 < 0xb) {
    ExceptionList = pvStack_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_e8);
}


//// FUNCTION FUN_005c8230 @ 005c8230 ////

longlong * __cdecl FUN_005c8230(longlong *param_1,float param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  int local_10;
  int iStack_c;
  
  local_20 = FUN_00acd42c();
  FUN_00471b10(&local_20);
  if (param_2 < 0.2) {
    local_20 = FUN_00acd42c();
    goto LAB_005c8472;
  }
  if (0.4 <= param_2) {
    if (param_2 < 0.6) {
      local_10 = DAT_0104d700 - DAT_0104d6f8;
      iStack_c = (DAT_0104d704 - DAT_0104d6fc) - (uint)(DAT_0104d700 < DAT_0104d6f8);
      FUN_00471b10((longlong *)&local_10);
      local_18 = FUN_00acd42c();
      local_18 = local_18 + CONCAT44(DAT_0104d6fc,DAT_0104d6f8);
      FUN_00471b10(&local_18);
      local_20 = local_18;
      goto LAB_005c8472;
    }
    if (param_2 < 0.8) {
      FUN_00442e50(&DAT_0104d708,(longlong *)&local_10,&DAT_0104d700);
      puVar1 = (ulonglong *)FUN_005c5d30(&DAT_0104d700,&local_18);
      local_20 = *puVar1;
      goto LAB_005c8472;
    }
    FUN_00442e50(&DAT_0104d710,(longlong *)&local_10,(uint *)&DAT_0104d708);
    plVar2 = FUN_005c5d30(&DAT_0104d708,&local_18);
    local_20._0_4_ = (undefined4)*plVar2;
    uVar3 = *(undefined4 *)((int)plVar2 + 4);
  }
  else {
    local_10 = DAT_0104d6f8 - DAT_0104d6f0;
    iStack_c = (DAT_0104d6fc - DAT_0104d6f4) - (uint)(DAT_0104d6f8 < DAT_0104d6f0);
    FUN_00471b10((longlong *)&local_10);
    local_18 = FUN_00acd42c();
    local_18 = local_18 + CONCAT44(DAT_0104d6f4,DAT_0104d6f0);
    FUN_00471b10(&local_18);
    local_20._0_4_ = (undefined4)local_18;
    uVar3 = local_18._4_4_;
  }
  local_20 = CONCAT44(uVar3,(undefined4)local_20);
LAB_005c8472:
  FUN_00471b10(&local_20);
  *(undefined4 *)param_1 = (undefined4)local_20;
  *(undefined4 *)((int)param_1 + 4) = local_20._4_4_;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005c84a0 @ 005c84a0 ////

void __thiscall FUN_005c84a0(void *this,float param_1)

{
  int *piVar1;
  int unaff_ESI;
  uint unaff_EDI;
  uint uVar2;
  int iVar3;
  int local_30;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  local_30 = 0x5c84b7;
  FUN_005c8230((longlong *)&local_8,param_1);
  iVar3 = *(int *)((int)this + 0x1c4);
  uVar2 = *(uint *)((int)this + 0x1c0);
  if ((iVar3 <= local_4) && ((iVar3 < local_4 || (uVar2 < local_8)))) {
    local_10 = local_8 - uVar2;
    local_c = (local_4 - iVar3) - (uint)(local_8 < uVar2);
    FUN_00471b10((longlong *)&local_10);
    local_18 = local_10;
    local_14 = local_c;
    FUN_00471b10((longlong *)&local_18);
    piVar1 = (int *)GetPlayerStudio();
    local_30 = local_18;
    FUN_00471b10((longlong *)&local_30);
    (**(code **)(*piVar1 + 0x2c))();
    uVar2 = unaff_EDI;
    iVar3 = unaff_ESI;
    FUN_00471b10((longlong *)&stack0xffffffc8);
    FUN_005c5840(this,uVar2,iVar3);
    uVar2 = *(uint *)((int)this + 0x70);
    *(uint *)((int)this + 0x70) = uVar2 + unaff_EDI;
    *(uint *)((int)this + 0x74) =
         *(int *)((int)this + 0x74) + unaff_ESI + (uint)CARRY4(uVar2,unaff_EDI);
    FUN_00471b10((longlong *)((int)this + 0x70));
    *(int *)((int)this + 0x1c4) = local_10;
    *(int *)((int)this + 0x1c0) = local_14;
    FUN_00471b10((longlong *)((int)this + 0x1c0));
  }
  *(undefined1 *)((int)this + 0x1b9) = 1;
  return;
}


//// FUNCTION FUN_005c85a0 @ 005c85a0 ////

ulonglong * __thiscall FUN_005c85a0(void *this,ulonglong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_00acd42c();
    *param_1 = uVar2;
    FUN_00471b10((longlong *)param_1);
    return param_1;
  }
  iVar1 = *(int *)((int)this + 0xe4);
  do {
    if (iVar1 == (int)this + 0xf0) {
LAB_005c85f2:
      uVar2 = FUN_00acd42c();
      *param_1 = uVar2;
      FUN_00471b10((longlong *)param_1);
      return param_1;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + 0xb4) == param_2) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 200);
        *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)(iVar1 + 0xcc);
        FUN_00471b10((longlong *)param_1);
        return param_1;
      }
      goto LAB_005c85f2;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}


//// FUNCTION FUN_005c8640 @ 005c8640 ////

void __thiscall FUN_005c8640(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d1a200;
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


//// FUNCTION FUN_005c86b0 @ 005c86b0 ////

void __fastcall FUN_005c86b0(int param_1)

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


//// FUNCTION FUN_005c86d0 @ 005c86d0 ////

void __fastcall FUN_005c86d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2aee0;
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


//// FUNCTION FUN_005c87b0 @ 005c87b0 ////

int * __fastcall FUN_005c87b0(int *param_1)

{
  FUN_005c53b0(param_1);
  return param_1;
}


//// FUNCTION FUN_005c87c0 @ 005c87c0 ////

int * __fastcall FUN_005c87c0(int *param_1)

{
  FUN_005c5350(param_1);
  return param_1;
}


//// FUNCTION FUN_005c87d0 @ 005c87d0 ////

void FUN_005c87d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
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


//// FUNCTION FUN_005c8840 @ 005c8840 ////

void FUN_005c8840(void *param_1)

{
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    FUN_005c8840(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_005c88d0 @ 005c88d0 ////

void __fastcall FUN_005c88d0(void *param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong local_28;
  undefined4 uStack_20;
  
  uStack_20 = 0x5c8919;
  piVar1 = (int *)GetPlayerStudio();
  uStack_20 = 0;
  uVar5 = FUN_00acd42c();
  local_28 = uVar5;
  FUN_00471b10((longlong *)&local_28);
  (**(code **)(*piVar1 + 0x2c))();
  *(longlong *)((int)param_1 + 0x70) = uVar5 + *(longlong *)((int)param_1 + 0x70);
  FUN_00471b10((longlong *)((int)param_1 + 0x70));
  uVar6 = uVar5;
  FUN_00471b10((longlong *)&stack0xffffffd0);
  FUN_005c5840(param_1,(int)uVar6,(int)(uVar6 >> 0x20));
  *(undefined1 *)((int)param_1 + 0x1b8) = 1;
  if ((*(int *)((int)param_1 + 0xc0) != 0) &&
     (iVar2 = FUN_005b2130(*(int *)((int)param_1 + 0xc0)), iVar2 != 0)) {
    puVar7 = (undefined4 *)&stack0xffffffe8;
    this = (void *)FUN_005b2130(*(int *)((int)param_1 + 0xc0));
    pfVar3 = (float *)FUN_004bdbd0(this,puVar7);
    plVar4 = FUN_005c8230((longlong *)&stack0xffffffec,*pfVar3);
    *(int *)((int)param_1 + 0x1c0) = (int)*plVar4;
    *(undefined4 *)((int)param_1 + 0x1c4) = *(undefined4 *)((int)plVar4 + 4);
    FUN_00471b10((longlong *)((int)param_1 + 0x1c0));
    return;
  }
  *(ulonglong *)((int)param_1 + 0x1c0) = uVar5;
  FUN_00471b10((longlong *)((int)param_1 + 0x1c0));
  return;
}


//// FUNCTION FUN_005c8a00 @ 005c8a00 ////

void __thiscall FUN_005c8a00(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[4] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((int)puVar3[4] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_005c8a70 @ 005c8a70 ////

void __fastcall FUN_005c8a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c87d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_005c8ab0 @ 005c8ab0 ////

void __fastcall FUN_005c8ab0(int param_1)

{
  FUN_005c8840(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_005c8ae0 @ 005c8ae0 ////

undefined4 *
FUN_005c8ae0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cb6c11;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x28);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[4] = *param_4;
    puVar1[6] = param_4[2];
    puVar1[7] = param_4[3];
    FUN_00471b10((longlong *)(puVar1 + 6));
    *(undefined1 *)(puVar1 + 8) = param_5;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_005c8b90 @ 005c8b90 ////

longlong * FUN_005c8b90(longlong *param_1)

{
  int local_c;
  undefined8 local_8;
  
  local_8 = FUN_00acd42c();
  FUN_00471b10(&local_8);
  FUN_005c8a00(&DAT_0104d6d4,&local_c,(int *)&stack0x00000008);
  if (local_c != DAT_0104d6d8) {
    local_8 = *(ulonglong *)(local_c + 0x18);
    FUN_00471b10(&local_8);
  }
  *(undefined4 *)param_1 = (undefined4)local_8;
  *(undefined4 *)((int)param_1 + 4) = local_8._4_4_;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005c8c10 @ 005c8c10 ////

int __fastcall FUN_005c8c10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c87d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005c8c40 @ 005c8c40 ////

void __fastcall FUN_005c8c40(void *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 unaff_EDI;
  undefined4 uVar3;
  uint local_1c;
  uint local_8;
  int local_4;
  
  FUN_005b0ff0(*(int *)((int)param_1 + 0xc0));
  local_1c = 0x5c8c5f;
  FUN_005c8b90((longlong *)&local_8);
  uVar1 = *(uint *)((int)param_1 + 0x70);
  *(uint *)((int)param_1 + 0x70) = uVar1 + local_8;
  *(uint *)((int)param_1 + 0x74) =
       *(int *)((int)param_1 + 0x74) + local_4 + (uint)CARRY4(uVar1,local_8);
  FUN_00471b10((longlong *)((int)param_1 + 0x70));
  piVar2 = (int *)GetPlayerStudio();
  local_1c = local_8;
  FUN_00471b10((longlong *)&local_1c);
  (**(code **)(*piVar2 + 0x2c))();
  uVar3 = 6;
  FUN_00471b10((longlong *)&stack0xffffffdc);
  FUN_005c5840(param_1,uVar3,unaff_EDI);
  return;
}


//// FUNCTION FUN_005c8cd0 @ 005c8cd0 ////

void __fastcall FUN_005c8cd0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2aef0;
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


//// FUNCTION FUN_005c8d20 @ 005c8d20 ////

undefined4 * __thiscall FUN_005c8d20(void *this,byte param_1)

{
  FUN_005c8cd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005c8d40 @ 005c8d40 ////

void __thiscall
FUN_005c8d40(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cb6c28;
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
  piVar3 = FUN_005c8ae0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_005c8e3b:
        *(undefined1 *)(*piVar4 + 0x20) = 1;
        *(undefined1 *)(piVar5 + 8) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x20) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_005c5c20(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x20) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x20) = 0;
        FUN_005c5270(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[8] == '\0') goto LAB_005c8e3b;
      if (piVar6 == (int *)*piVar2) {
        FUN_005c5270(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x20) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x20) = 0;
      FUN_005c5c20(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x20);
  } while( true );
}


//// FUNCTION FUN_005c8ef0 @ 005c8ef0 ////

void __thiscall FUN_005c8ef0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cb6c48;
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
  FUN_005c53b0((int *)&param_2);
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
      goto LAB_005c9061;
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
      piVar2 = (int *)FUN_005c5320(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x21) == '\0') {
      uVar3 = FUN_005c5300((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_005c9061:
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
            FUN_005c5c20(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x21) == '\0') {
            if ((*(char *)(*piVar4 + 0x20) != '\x01') || (*(char *)(piVar4[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x20) = 1;
                *(undefined1 *)(piVar4 + 8) = 0;
                FUN_005c5270(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 8) = (char)piVar5[8];
              *(undefined1 *)(piVar5 + 8) = 1;
              *(undefined1 *)(piVar4[2] + 0x20) = 1;
              FUN_005c5c20(this,(int)piVar5);
              break;
            }
LAB_005c9124:
            *(undefined1 *)(piVar4 + 8) = 0;
          }
        }
        else {
          if ((char)piVar4[8] == '\0') {
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(piVar5 + 8) = 0;
            FUN_005c5270(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x21) == '\0') {
            if ((*(char *)(piVar4[2] + 0x20) == '\x01') && (*(char *)(*piVar4 + 0x20) == '\x01'))
            goto LAB_005c9124;
            if (*(char *)(*piVar4 + 0x20) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x20) = 1;
              *(undefined1 *)(piVar4 + 8) = 0;
              FUN_005c5c20(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 8) = (char)piVar5[8];
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(*piVar4 + 0x20) = 1;
            FUN_005c5270(this,piVar5);
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


//// FUNCTION FUN_005c91b0 @ 005c91b0 ////

void __fastcall FUN_005c91b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb6cbc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2af1c;
  param_1[0xe] = &PTR_LAB_00d2aefc;
  local_4 = 6;
  if ((undefined4 *)param_1[0x39] != param_1 + 0x3c) {
    do {
      piVar1 = (int *)param_1[0x39];
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
    } while ((undefined4 *)param_1[0x39] != param_1 + 0x3c);
  }
  if ((undefined4 *)param_1[0x46] != param_1 + 0x49) {
    do {
      piVar1 = (int *)param_1[0x46];
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
    } while ((undefined4 *)param_1[0x46] != param_1 + 0x49);
  }
  if ((undefined4 *)param_1[0x53] != param_1 + 0x56) {
    do {
      piVar1 = (int *)param_1[0x53];
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
    } while ((undefined4 *)param_1[0x53] != param_1 + 0x56);
  }
  if ((undefined4 *)param_1[0x60] != param_1 + 99) {
    do {
      piVar1 = (int *)param_1[0x60];
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
    } while ((undefined4 *)param_1[0x60] != param_1 + 99);
  }
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x36])(1);
  }
  (**(code **)(param_1[0x31] + 4))();
  param_1[0x36] = 0;
  (**(code **)param_1[0x31])();
  puVar2 = (undefined4 *)param_1[0x2a];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x2a] = 0;
  }
  FUN_005c8cd0(param_1 + 0x5e);
  FUN_005c8cd0(param_1 + 0x51);
  FUN_005c8cd0(param_1 + 0x44);
  FUN_005c8cd0(param_1 + 0x37);
  param_1[0x31] = &PTR_FUN_00d2aee0;
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
  param_1[0x2b] = &PTR_FUN_00d18c3c;
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


//// FUNCTION FUN_005c9480 @ 005c9480 ////

void __thiscall FUN_005c9480(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool local_4;
  
  piVar2 = param_2;
  piVar5 = *(int **)((int)this + 4);
  local_4 = true;
  if (*(char *)(piVar5[1] + 0x21) == '\0') {
    piVar3 = (int *)piVar5[1];
    do {
      piVar5 = piVar3;
      local_4 = *param_2 < piVar5[4];
      if (local_4) {
        piVar3 = (int *)*piVar5;
      }
      else {
        piVar3 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar3 + 0x21) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_005c8d40(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_005c5350((int *)&param_2);
  }
  if (param_2[4] < *piVar2) {
    puVar4 = (undefined4 *)FUN_005c8d40(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005c9540 @ 005c9540 ////

void __thiscall FUN_005c9540(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005c8840((void *)piVar6[1]);
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
    FUN_005c8ef0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_005c9600 @ 005c9600 ////

undefined4 * __thiscall FUN_005c9600(void *this,byte param_1)

{
  FUN_005c91b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005c9620 @ 005c9620 ////

undefined4 * __thiscall FUN_005c9620(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 local_8 [2];
  
  piVar5 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_005c8d40(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[4]) {
      FUN_005c8d40(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[4] < *param_3) {
      FUN_005c8d40(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[4];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_005c5350((int *)&param_3);
      if (param_3[4] < iVar2) {
        if (*(char *)(param_3[2] + 0x21) != '\0') {
          FUN_005c8d40(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_005c8d40(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[4];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_005c53b0((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[4])) {
        if (*(char *)(param_2[2] + 0x21) != '\0') {
          FUN_005c8d40(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_005c8d40(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_005c9480(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_005c97c0 @ 005c97c0 ////

int * __thiscall FUN_005c97c0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_10 [2];
  undefined4 local_8;
  undefined4 local_4;
  
  piVar3 = *(int **)((int)this + 4);
  if (*(char *)(piVar3[1] + 0x21) == '\0') {
    piVar1 = (int *)piVar3[1];
    do {
      if (piVar1[4] < *param_1) {
        piVar2 = (int *)piVar1[2];
      }
      else {
        piVar2 = (int *)*piVar1;
        piVar3 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0x21) == '\0');
  }
  if ((piVar3 != *(int **)((int)this + 4)) && (piVar3[4] <= *param_1)) {
    return piVar3 + 6;
  }
  local_10[0] = *param_1;
  local_8 = 0;
  local_4 = 0;
  FUN_00471b10((longlong *)&local_8);
  piVar3 = FUN_005c9620(this,&param_1,piVar3,local_10);
  return (int *)(*piVar3 + 0x18);
}


//// FUNCTION FUN_005c9880 @ 005c9880 ////

void __fastcall FUN_005c9880(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_005c9540(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005c98b0 @ 005c98b0 ////

void __fastcall FUN_005c98b0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d2aef0;
  return;
}


//// FUNCTION FUN_005c9910 @ 005c9910 ////

int __fastcall FUN_005c9910(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005c87d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005c9940 @ 005c9940 ////

undefined4 * __fastcall FUN_005c9940(undefined4 *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6da4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005278e0(param_1);
  *param_1 = &PTR_FUN_00d2af1c;
  param_1[0xe] = &PTR_LAB_00d2aefc;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x2b;
  param_1[0x2b] = &PTR_FUN_00d18c3c;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = param_1 + 0x31;
  param_1[0x31] = &PTR_FUN_00d2aee0;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar1 = param_1 + 0x3c;
  param_1[0x3e] = 0;
  *puVar1 = 0;
  param_1[0x3d] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x37] = &PTR_LAB_00d2aef0;
  param_1[0x39] = puVar1;
  *puVar1 = param_1 + 0x38;
  param_1[0x47] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  puVar1 = param_1 + 0x49;
  param_1[0x4b] = 0;
  *puVar1 = 0;
  param_1[0x4a] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x44] = &PTR_LAB_00d2aef0;
  param_1[0x46] = puVar1;
  *puVar1 = param_1 + 0x45;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  puVar1 = param_1 + 0x56;
  param_1[0x58] = 0;
  *puVar1 = 0;
  param_1[0x57] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x51] = &PTR_LAB_00d2aef0;
  param_1[0x53] = puVar1;
  *puVar1 = param_1 + 0x52;
  param_1[0x61] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  puVar1 = param_1 + 99;
  param_1[0x65] = 0;
  *puVar1 = 0;
  param_1[100] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x5e] = &PTR_LAB_00d2aef0;
  param_1[0x60] = puVar1;
  *puVar1 = param_1 + 0x5f;
  local_4 = 0xe;
  uVar2 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x6c) = uVar2;
  FUN_00471b10((longlong *)(param_1 + 0x6c));
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)((int)param_1 + 0x1b9) = 0;
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_00471b10((longlong *)(param_1 + 0x70));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005c9b10 @ 005c9b10 ////

undefined4 * __fastcall FUN_005c9b10(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6df8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d2af84;
  param_1[0xe] = &PTR_LAB_00d2af64;
  param_1[0x18] = param_1 + 0x1b;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 10;
  param_1[0x20] = param_1 + 0x23;
  *(undefined2 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 10;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = param_1 + 0x28;
  param_1[0x28] = &PTR_FUN_00d1a200;
  param_1[0x2d] = 0;
  local_4._0_1_ = 4;
  uVar3 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x2e) = uVar3;
  FUN_00471b10((longlong *)(param_1 + 0x2e));
  *(ulonglong *)(param_1 + 0x30) = uVar3;
  FUN_00471b10((longlong *)(param_1 + 0x30));
  *(ulonglong *)(param_1 + 0x32) = uVar3;
  FUN_00471b10((longlong *)(param_1 + 0x32));
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x36] = param_1;
  FUN_00ace33d(0xe54814);
  iVar1 = FUN_0097dda0();
  iVar5 = 0xd0;
  param_1[0x37] = iVar1;
  pcVar4 = "Link";
  pcVar2 = (char *)FUN_00ace33d(0xe54814);
  FUN_0097df60(pcVar2,pcVar4,iVar5);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005c9c80 @ 005c9c80 ////

undefined4 * __thiscall FUN_005c9c80(void *this,byte param_1)

{
  FUN_005c9ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005c9ca0 @ 005c9ca0 ////

void __fastcall FUN_005c9ca0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb6e18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x28] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2a] = param_1[0x29];
  }
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[0x29] + 4) = param_1[0x2a];
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2a] = param_1[0x29];
  }
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[0x29] + 4) = param_1[0x2a];
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if (10 < (uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  if (10 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
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


//// FUNCTION FUN_005c9dd0 @ 005c9dd0 ////

undefined4 * FUN_005c9dd0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6e3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x1c8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005c9940(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_005c9e30 @ 005c9e30 ////

void __thiscall FUN_005c9e30(void *this,int *param_1,int param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  void *pvVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  uint local_48;
  uint local_44;
  void *pvStack_40;
  void *pvStack_3c;
  uint local_38;
  uint uStack_34;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cb6e5b;
  local_14 = ExceptionList;
  if (param_1 != (int *)0x0) {
    iVar10 = *(int *)((int)this + 0xe4);
    local_48 = 0;
    local_44 = 0;
    for (; iVar10 != (int)this + 0xf0; iVar10 = *(int *)(iVar10 + 4)) {
      if (*(int **)(*(int *)(iVar10 + 8) + 0xb4) == param_1) {
        puVar4 = *(undefined4 **)(iVar10 + 8);
        ExceptionList = &local_14;
        if (puVar4 != (undefined4 *)0x0) goto LAB_005c9f02;
        break;
      }
    }
    ExceptionList = &local_14;
    puVar4 = operator_new(0xe0);
    local_c = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_005c9b10(puVar4);
    }
    local_c = 0xffffffff;
    (**(code **)(puVar4[0x28] + 4))();
    puVar4[0x2d] = param_1;
    (**(code **)puVar4[0x28])();
    piVar8 = puVar4 + 0x34;
    piVar11 = (int *)((int)this + 0xf0);
    puVar4[0x35] = piVar11;
    *piVar8 = *piVar11;
    *(int **)(*piVar11 + 4) = piVar8;
    *piVar11 = (int)piVar8;
LAB_005c9f02:
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x5c))(&local_38);
    uVar1 = puVar5[1];
    pwVar2 = (wchar_t *)*puVar5;
    if ((uint)puVar4[0x1a] <= uVar1) {
      if (10 < (uint)puVar4[0x1a]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar4[0x18]);
      }
      uVar6 = uVar1 + 0x20 & 0xffffffe0;
      puVar4[0x1a] = uVar6;
      pvVar7 = _malloc(uVar6 * 2);
      puVar4[0x18] = pvVar7;
    }
    _wcsncpy((wchar_t *)puVar4[0x18],pwVar2,uVar1);
    puVar4[0x19] = uVar1;
    *(undefined2 *)(puVar4[0x18] + uVar1 * 2) = 0;
    if (10 < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_3c);
    }
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x144))(&pvStack_3c);
    uVar1 = puVar5[1];
    pwVar2 = (wchar_t *)*puVar5;
    if ((uint)puVar4[0x22] <= uVar1) {
      if (10 < (uint)puVar4[0x22]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar4[0x20]);
      }
      uVar6 = uVar1 + 0x20 & 0xffffffe0;
      puVar4[0x22] = uVar6;
      pvVar7 = _malloc(uVar6 * 2);
      puVar4[0x20] = pvVar7;
    }
    _wcsncpy((wchar_t *)puVar4[0x20],pwVar2,uVar1);
    puVar4[0x21] = uVar1;
    *(undefined2 *)(puVar4[0x20] + uVar1 * 2) = 0;
    if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_40);
    }
    piVar8 = (int *)(**(code **)(*param_1 + 0x1d4))();
    puVar9 = (uint *)(**(code **)(*piVar8 + 0x10))(&stack0xffffffa0);
    local_48 = *puVar9;
    local_44 = puVar9[1];
    FUN_00471b10((longlong *)&local_48);
    iVar10 = FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                          &TM::CStar::RTTI_Type_Descriptor,0);
    if (iVar10 != 0) {
      for (iVar3 = *(int *)(iVar10 + 0xa50); iVar3 != iVar10 + 0xa5c; iVar3 = *(int *)(iVar3 + 4)) {
        piVar8 = (int *)(**(code **)(**(int **)(iVar3 + 8) + 0x1d4))();
        puVar9 = (uint *)(**(code **)(*piVar8 + 0x10))(&pvStack_40);
        bVar12 = CARRY4(local_48,*puVar9);
        local_48 = local_48 + *puVar9;
        local_44 = local_44 + puVar9[1] + (uint)bVar12;
        FUN_00471b10((longlong *)&local_48);
      }
    }
    uVar1 = puVar4[0x32];
    puVar4[0x32] = uVar1 + local_48;
    puVar4[0x33] = puVar4[0x33] + local_44 + (uint)CARRY4(uVar1,local_48);
    FUN_00471b10((longlong *)(puVar4 + 0x32));
    uVar1 = *(uint *)((int)this + 0x70);
    *(uint *)((int)this + 0x70) = uVar1 + local_48;
    *(uint *)((int)this + 0x74) =
         *(int *)((int)this + 0x74) + local_44 + (uint)CARRY4(uVar1,local_48);
    FUN_00471b10((longlong *)((int)this + 0x70));
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0xd8);
      *(uint *)(param_2 + 0xd8) = uVar1 + local_48;
      *(uint *)(param_2 + 0xdc) = *(int *)(param_2 + 0xdc) + local_44 + (uint)CARRY4(uVar1,local_48)
      ;
      FUN_00471b10((longlong *)(param_2 + 0xd8));
    }
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_005ca130 @ 005ca130 ////

void __thiscall FUN_005ca130(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar2 = FUN_004de100(param_1);
    for (iVar1 = *(int *)(iVar2 + 8); iVar1 != iVar2 + 0x14; iVar1 = *(int *)(iVar1 + 4)) {
      iVar4 = param_1;
      piVar3 = (int *)FUN_0048c950(*(int *)(iVar1 + 8));
      FUN_005c9e30(this,piVar3,iVar4);
      iVar4 = FUN_0048c9f0(*(int *)(iVar1 + 8));
      if (iVar4 != 0) {
        iVar4 = param_1;
        iVar5 = FUN_0048c9f0(*(int *)(iVar1 + 8));
        piVar3 = (int *)FUN_005a64e0(iVar5);
        FUN_005c9e30(this,piVar3,iVar4);
      }
    }
  }
  return;
}


//// FUNCTION FUN_005ca1a0 @ 005ca1a0 ////

void __fastcall FUN_005ca1a0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(int *)((int)param_1 + 0xc0) != 0) &&
     (iVar1 = FUN_005b2220(*(int *)((int)param_1 + 0xc0)), iVar1 != 0)) {
    iVar1 = FUN_005b2220(*(int *)((int)param_1 + 0xc0));
    iVar1 = *(int *)(iVar1 + 100);
    iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xc0));
    if (iVar1 != *(int *)(iVar2 + 0x68)) {
      do {
        iVar2 = *(int *)(iVar1 + 0x14);
        if ((iVar2 != 0) && (iVar3 = FUN_005a6470(iVar2), iVar3 != 0)) {
          iVar3 = 0;
          piVar4 = (int *)FUN_005a6470(iVar2);
          FUN_005c9e30(param_1,piVar4,iVar3);
          iVar3 = 0;
          piVar4 = (int *)FUN_005a64e0(iVar2);
          FUN_005c9e30(param_1,piVar4,iVar3);
        }
        iVar1 = iVar1 + 0x18;
        iVar2 = FUN_005b2220(*(int *)((int)param_1 + 0xc0));
      } while (iVar1 != *(int *)(iVar2 + 0x68));
    }
  }
  return;
}


//// FUNCTION FUN_005ca230 @ 005ca230 ////

void __thiscall FUN_005ca230(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  int *piVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  int local_64;
  uint local_5c;
  uint local_58;
  void *pvStack_50;
  undefined1 local_4c [4];
  uint uStack_48;
  void *pvStack_34;
  undefined1 auStack_30 [4];
  uint uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6e7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar5 = FUN_005b25c0(*(int *)((int)this + 0xc0));
  if (iVar5 != 0) {
    local_5c = 0;
    local_58 = 0;
    piVar12 = (int *)(iVar5 + 0xac);
    local_64 = 4;
    do {
      iVar5 = piVar12[-1];
      if (iVar5 != *piVar12) {
        do {
          piVar10 = *(int **)(iVar5 + 0x14);
          if (piVar10 != (int *)0x0) {
            for (iVar2 = *(int *)((int)this + 0x118); iVar2 != (int)this + 0x124;
                iVar2 = *(int *)(iVar2 + 4)) {
              if (*(int **)(*(int *)(iVar2 + 8) + 0xb4) == piVar10) {
                puVar6 = *(undefined4 **)(iVar2 + 8);
                if (puVar6 != (undefined4 *)0x0) goto LAB_005ca335;
                break;
              }
            }
            puVar6 = operator_new(0xe0);
            local_4 = 0;
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = FUN_005c9b10(puVar6);
            }
            local_4 = 0xffffffff;
            (**(code **)(puVar6[0x28] + 4))();
            puVar6[0x2d] = piVar10;
            (**(code **)puVar6[0x28])();
            piVar1 = puVar6 + 0x34;
            piVar13 = (int *)((int)this + 0x124);
            puVar6[0x35] = piVar13;
            *piVar1 = *piVar13;
            *(int **)(*piVar13 + 4) = piVar1;
            *piVar13 = (int)piVar1;
LAB_005ca335:
            puVar7 = (undefined4 *)(**(code **)(*piVar10 + 0x5c))(local_4c);
            uVar3 = puVar7[1];
            pwVar4 = (wchar_t *)*puVar7;
            if ((uint)puVar6[0x1a] <= uVar3) {
              if (10 < (uint)puVar6[0x1a]) {
                    /* WARNING: Subroutine does not return */
                _free((void *)puVar6[0x18]);
              }
              uVar8 = uVar3 + 0x20 >> 5;
              puVar6[0x1a] = uVar8 << 5;
              pvVar9 = _malloc(uVar8 * 0x40);
              puVar6[0x18] = pvVar9;
            }
            _wcsncpy((wchar_t *)puVar6[0x18],pwVar4,uVar3);
            puVar6[0x19] = uVar3;
            *(undefined2 *)(puVar6[0x18] + uVar3 * 2) = 0;
            if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_50);
            }
            puVar7 = (undefined4 *)(**(code **)(*piVar10 + 0x144))(auStack_30);
            uVar3 = puVar7[1];
            pwVar4 = (wchar_t *)*puVar7;
            if ((uint)puVar6[0x22] <= uVar3) {
              if (10 < (uint)puVar6[0x22]) {
                    /* WARNING: Subroutine does not return */
                _free((void *)puVar6[0x20]);
              }
              uVar8 = uVar3 + 0x20 & 0xffffffe0;
              puVar6[0x22] = uVar8;
              pvVar9 = _malloc(uVar8 * 2);
              puVar6[0x20] = pvVar9;
            }
            _wcsncpy((wchar_t *)puVar6[0x20],pwVar4,uVar3);
            puVar6[0x21] = uVar3;
            *(undefined2 *)(puVar6[0x20] + uVar3 * 2) = 0;
            if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_34);
            }
            piVar10 = (int *)(**(code **)(*piVar10 + 0x1d4))();
            puVar11 = (uint *)(**(code **)(*piVar10 + 0x10))(&local_5c);
            local_5c = *puVar11;
            local_58 = puVar11[1];
            FUN_00471b10((longlong *)&local_5c);
            uVar3 = puVar6[0x32];
            puVar6[0x32] = uVar3 + local_5c;
            puVar6[0x33] = puVar6[0x33] + local_58 + (uint)CARRY4(uVar3,local_5c);
            FUN_00471b10((longlong *)(puVar6 + 0x32));
            uVar3 = *(uint *)((int)this + 0x70);
            *(uint *)((int)this + 0x70) = uVar3 + local_5c;
            *(uint *)((int)this + 0x74) =
                 *(int *)((int)this + 0x74) + local_58 + (uint)CARRY4(uVar3,local_5c);
            FUN_00471b10((longlong *)((int)this + 0x70));
            if (param_1 != 0) {
              uVar3 = *(uint *)(param_1 + 0xd8);
              *(uint *)(param_1 + 0xd8) = uVar3 + local_5c;
              *(uint *)(param_1 + 0xdc) =
                   *(int *)(param_1 + 0xdc) + local_58 + (uint)CARRY4(uVar3,local_5c);
              FUN_00471b10((longlong *)(param_1 + 0xd8));
            }
          }
          iVar5 = iVar5 + 0x18;
        } while (iVar5 != *piVar12);
      }
      piVar12 = piVar12 + 4;
      local_64 = local_64 + -1;
    } while (local_64 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ca530 @ 005ca530 ////

void __fastcall FUN_005ca530(uint param_1)

{
  int *piVar1;
  uint uVar2;
  wchar_t *pwVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  void *pvVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint local_68;
  undefined4 *local_64;
  uint uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *pcStack_50;
  undefined4 local_4c;
  uint uStack_48;
  char acStack_44 [20];
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_00cb6ea3;
  pvStack_c = ExceptionList;
  local_5c = 0;
  local_58 = 0;
  ExceptionList = &pvStack_c;
  local_68 = param_1;
  iVar4 = FUN_005b25d0(*(int *)(param_1 + 0xc0));
  piVar5 = (int *)FUN_004df220(iVar4);
  iVar4 = *(int *)(param_1 + 0x180);
  do {
    if (iVar4 == param_1 + 0x18c) {
LAB_005ca59b:
      local_64 = operator_new(0xe0);
      local_4 = 0;
      if (local_64 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_005c9b10(local_64);
      }
      local_4 = -1;
      (**(code **)(puVar6[0x28] + 4))();
      puVar6[0x2d] = piVar5;
      (**(code **)puVar6[0x28])();
      piVar10 = puVar6 + 0x34;
      piVar1 = (int *)(local_68 + 0x18c);
      puVar6[0x35] = piVar1;
      *piVar10 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar10;
      *piVar1 = (int)piVar10;
      param_1 = local_68;
LAB_005ca601:
      puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(&local_4c);
      uVar2 = puVar7[1];
      pwVar3 = (wchar_t *)*puVar7;
      if ((uint)puVar6[0x1a] <= uVar2) {
        if (10 < (uint)puVar6[0x1a]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[0x18]);
        }
        uVar8 = uVar2 + 0x20 & 0xffffffe0;
        puVar6[0x1a] = uVar8;
        pvVar9 = _malloc(uVar8 * 2);
        puVar6[0x18] = pvVar9;
      }
      _wcsncpy((wchar_t *)puVar6[0x18],pwVar3,uVar2);
      puVar6[0x19] = uVar2;
      *(undefined2 *)(puVar6[0x18] + uVar2 * 2) = 0;
      if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_50);
      }
      pcStack_50 = acStack_44;
      acStack_44[0] = '\0';
      local_4c = 0;
      uStack_48 = 0x14;
      _strncpy(pcStack_50,"set_set",7);
      local_4c = 7;
      pcStack_50[7] = '\0';
      puStack_8 = (undefined1 *)0x1;
      puVar7 = FUN_009b5030(apvStack_30,&pcStack_50);
      uVar2 = puVar7[1];
      pwVar3 = (wchar_t *)*puVar7;
      if ((uint)puVar6[0x22] <= uVar2) {
        if (10 < (uint)puVar6[0x22]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[0x20]);
        }
        uVar8 = uVar2 + 0x20 >> 5;
        puVar6[0x22] = uVar8 << 5;
        pvVar9 = _malloc(uVar8 * 0x40);
        puVar6[0x20] = pvVar9;
      }
      _wcsncpy((wchar_t *)puVar6[0x20],pwVar3,uVar2);
      puVar6[0x21] = uVar2;
      *(undefined2 *)(puVar6[0x20] + uVar2 * 2) = 0;
      if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_30[0]);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_50);
      }
      piVar10 = (int *)FUN_005291b0((int)piVar5);
      puVar11 = (uint *)(**(code **)(*piVar10 + 0x10))(&local_68);
      local_64 = (undefined4 *)*puVar11;
      uStack_60 = puVar11[1];
      FUN_00471b10((longlong *)&local_64);
      uVar2 = puVar6[0x32];
      puVar6[0x32] = uVar2 + (int)local_64;
      puVar6[0x33] = puVar6[0x33] + uStack_60 + (uint)CARRY4(uVar2,(uint)local_64);
      FUN_00471b10((longlong *)(puVar6 + 0x32));
      uVar2 = *(uint *)(param_1 + 0x70);
      puVar11 = (uint *)(param_1 + 0x70);
      *puVar11 = uVar2 + (int)local_64;
      *(uint *)(param_1 + 0x74) =
           *(int *)(param_1 + 0x74) + uStack_60 + (uint)CARRY4(uVar2,(uint)local_64);
      FUN_00471b10((longlong *)puVar11);
      iVar4 = local_4;
      if (local_4 != 0) {
        uVar2 = *(uint *)(local_4 + 0xd8);
        *(uint *)(local_4 + 0xd8) = uVar2 + (int)local_64;
        *(uint *)(local_4 + 0xdc) =
             *(int *)(local_4 + 0xdc) + uStack_60 + (uint)CARRY4(uVar2,(uint)local_64);
        FUN_00471b10((longlong *)(local_4 + 0xd8));
      }
      piVar5 = (int *)FUN_005291b0((int)piVar5);
      puVar12 = (uint *)(**(code **)(*piVar5 + 0x2c))(&local_5c);
      local_68 = *puVar12;
      local_64 = (undefined4 *)puVar12[1];
      FUN_00471b10((longlong *)&local_68);
      uVar2 = puVar6[0x30];
      puVar6[0x30] = uVar2 + local_68;
      puVar6[0x31] = (int)local_64 + (uint)CARRY4(uVar2,local_68) + puVar6[0x31];
      FUN_00471b10((longlong *)(puVar6 + 0x30));
      uVar2 = *puVar11;
      *puVar11 = uVar2 + local_68;
      *(uint *)(param_1 + 0x74) =
           (int)local_64 + (uint)CARRY4(uVar2,local_68) + *(int *)(param_1 + 0x74);
      FUN_00471b10((longlong *)puVar11);
      if (iVar4 != 0) {
        uVar2 = *(uint *)(iVar4 + 0xe0);
        *(uint *)(iVar4 + 0xe0) = uVar2 + local_68;
        *(uint *)(iVar4 + 0xe4) =
             (int)local_64 + (uint)CARRY4(uVar2,local_68) + *(int *)(iVar4 + 0xe4);
        FUN_00471b10((longlong *)(iVar4 + 0xe0));
      }
      ExceptionList = pvStack_18;
      return;
    }
    if (*(int **)(*(int *)(iVar4 + 8) + 0xb4) == piVar5) {
      puVar6 = *(undefined4 **)(iVar4 + 8);
      if (puVar6 != (undefined4 *)0x0) goto LAB_005ca601;
      goto LAB_005ca59b;
    }
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}


//// FUNCTION FUN_005ca8c0 @ 005ca8c0 ////

undefined4 * __thiscall FUN_005ca8c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6f6f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005278e0(this);
  puVar4 = (undefined4 *)0x0;
  *(undefined ***)this = &PTR_FUN_00d2af1c;
  *(undefined ***)((int)this + 0x38) = &PTR_LAB_00d2aefc;
  *(undefined4 *)((int)this + 0xa8) = 0;
  piVar1 = (int *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0xb8) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 **)((int)this + 0xb8) = (undefined4 *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0xac) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0xc0) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0xb4) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0xc4);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(int **)((int)this + 0xd0) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2aee0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  puVar3 = (undefined4 *)((int)this + 0xf0);
  *(undefined4 *)((int)this + 0xf8) = 0;
  *puVar3 = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined ***)((int)this + 0xdc) = &PTR_LAB_00d2aef0;
  *(undefined4 **)((int)this + 0xe4) = puVar3;
  *puVar3 = (undefined4 *)((int)this + 0xe0);
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  puVar3 = (undefined4 *)((int)this + 0x124);
  *(undefined4 *)((int)this + 300) = 0;
  *puVar3 = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined ***)((int)this + 0x110) = &PTR_LAB_00d2aef0;
  *(undefined4 **)((int)this + 0x118) = puVar3;
  *puVar3 = (undefined4 *)((int)this + 0x114);
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  puVar3 = (undefined4 *)((int)this + 0x158);
  *(undefined4 *)((int)this + 0x160) = 0;
  *puVar3 = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined ***)((int)this + 0x144) = &PTR_LAB_00d2aef0;
  *(undefined4 **)((int)this + 0x14c) = puVar3;
  *puVar3 = (undefined4 *)((int)this + 0x148);
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  puVar3 = (undefined4 *)((int)this + 0x18c);
  *(undefined4 *)((int)this + 0x194) = 0;
  *puVar3 = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined ***)((int)this + 0x178) = &PTR_LAB_00d2aef0;
  *(undefined4 **)((int)this + 0x180) = puVar3;
  *puVar3 = (undefined4 *)((int)this + 0x17c);
  local_4._0_1_ = 0xe;
  local_4._1_3_ = 0;
  uVar5 = FUN_00acd42c();
  *(ulonglong *)((int)this + 0x1b0) = uVar5;
  FUN_00471b10((longlong *)((int)this + 0x1b0));
  local_14 = (undefined4)uVar5;
  local_10 = (undefined4)(uVar5 >> 0x20);
  *(undefined1 *)((int)this + 0x1b8) = 0;
  *(undefined1 *)((int)this + 0x1b9) = 0;
  *(undefined4 *)((int)this + 0x1c0) = local_14;
  *(undefined4 *)((int)this + 0x1c4) = local_10;
  FUN_00471b10((longlong *)((int)this + 0x1c0));
  puVar3 = operator_new(0xe0);
  local_4._0_1_ = 0xf;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = FUN_005c9b10(puVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,0xe);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0xd8) = puVar4;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005caaf0 @ 005caaf0 ////

longlong * __thiscall FUN_005caaf0(void *this,longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined8 local_30;
  uint local_28;
  int local_24;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  uint local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  local_30 = FUN_00acd42c();
  FUN_00471b10(&local_30);
  local_24 = *(int *)((int)this + 0x6c);
  local_28 = *(uint *)((int)this + 0x68);
  puVar1 = (uint *)((int)this + 0x68);
  FUN_00471b10((longlong *)&local_28);
  local_10 = *(uint *)((int)this + 0x70);
  local_c = *(int *)((int)this + 0x74);
  FUN_00471b10((longlong *)&local_10);
  piVar3 = (int *)FUN_005b22a0(*(int *)((int)this + 0xc0));
  uVar4 = (**(code **)(*piVar3 + 0x24))();
  switch(uVar4) {
  case 2:
    FUN_005c5690((int)this);
    break;
  case 4:
    iVar5 = FUN_005b5d40(*(int *)((int)this + 0xc0));
    if (iVar5 != 0) {
      FUN_005c56e0((int)this);
      FUN_005ca1a0(this);
      FUN_005c6d80(this,0);
    }
    break;
  case 5:
    iVar5 = *(int *)(*(int *)((int)this + 0xc0) + 0xa0);
    if (iVar5 == 0) break;
    iVar5 = FUN_004d6c00(iVar5);
    if (*(int *)(*(int *)(*(int *)((int)this + 0xc0) + 0xa0) + 0x124) != 0) {
      FUN_005ca130(this,iVar5);
      FUN_005c6d80(this,iVar5);
      FUN_005ca230(this,iVar5);
      FUN_005ca530((uint)this);
    }
    if (*(char *)(*(int *)(*(int *)((int)this + 0xc0) + 0xa0) + 0x128) == '\0') break;
    puVar6 = (uint *)FUN_005c5520((longlong *)&iStack_8,iVar5);
    goto LAB_005cac36;
  case 7:
    uVar4 = FUN_005b3c00(*(int *)((int)this + 0xc0));
    if ((char)uVar4 != '\0') break;
    puVar6 = (uint *)FUN_005c55d0((longlong *)&uStack_18);
LAB_005cac36:
    FUN_00442970(&local_30,puVar6);
  }
  uVar4 = (uint)local_30;
  uVar7 = local_30._4_4_;
  FUN_00471b10((longlong *)&stack0xffffffbc);
  FUN_005c5840(this,uVar4,uVar7);
  uVar2 = *puVar1;
  *puVar1 = uVar2 + (uint)local_30;
  *(uint *)((int)this + 0x6c) =
       *(int *)((int)this + 0x6c) + local_30._4_4_ + (uint)CARRY4(uVar2,(uint)local_30);
  FUN_00471b10((longlong *)puVar1);
  uStack_20 = *puVar1 - local_28;
  iStack_1c = (*(int *)((int)this + 0x6c) - local_24) - (uint)(*puVar1 < local_28);
  FUN_00471b10((longlong *)&uStack_20);
  uStack_18 = uStack_20 + *(uint *)((int)this + 0x70);
  iStack_14 = iStack_1c + *(int *)((int)this + 0x74) +
              (uint)CARRY4(uStack_20,*(uint *)((int)this + 0x70));
  FUN_00471b10((longlong *)&uStack_18);
  iStack_8 = uStack_18 - local_10;
  iStack_4 = (iStack_14 - local_c) - (uint)(uStack_18 < local_10);
  FUN_00471b10((longlong *)&iStack_8);
  *(int *)((int)this + 0x1b0) = iStack_8;
  *(int *)((int)this + 0x1b4) = iStack_4;
  FUN_00471b10((longlong *)((int)this + 0x1b0));
  iStack_4 = local_30._4_4_;
  iStack_8 = (uint)local_30;
  FUN_00471b10((longlong *)&iStack_8);
  *(int *)param_1 = iStack_8;
  *(int *)((int)param_1 + 4) = iStack_4;
  FUN_00471b10(param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}


//// FUNCTION FUN_005cad60 @ 005cad60 ////

undefined4 * FUN_005cad60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb6f8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005c9b10(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_005cadc0 @ 005cadc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cadc0(void)

{
  char cVar1;
  char *pcVar2;
  ulonglong *puVar3;
  char *pcVar4;
  float10 fVar5;
  ulonglong uVar6;
  char *local_12c;
  undefined4 local_128;
  uint local_124;
  char local_120 [20];
  float local_10c;
  float local_108;
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb70a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe547d8);
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_104,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_005cad60,&local_104);
  local_4 = 0xffffffff;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  FUN_0098f9e0(0x989790);
  pcVar2 = (char *)FUN_00acdb9e(0xe547f4);
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_104,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 1;
  FUN_0098fa50(FUN_005c9dd0,&local_104);
  local_4 = 0xffffffff;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  FUN_0098f9e0(0x989790);
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"misc_costs",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4 = 2;
  FUN_0055c540(local_e4,&local_104);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"scripts",7);
  local_128 = 7;
  local_12c[7] = '\0';
  local_4._0_1_ = 5;
  FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x1);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"start_1_star_script",0x13);
  local_128 = 0x13;
  local_12c[0x13] = '\0';
  local_4._0_1_ = 6;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  DAT_0104d6c0 = (float)fVar5;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"start_2_star_script",0x13);
  local_128 = 0x13;
  local_12c[0x13] = '\0';
  local_4._0_1_ = 7;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  _DAT_0104d6c4 = (float)fVar5;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"start_3_star_script",0x13);
  local_128 = 0x13;
  local_12c[0x13] = '\0';
  local_4._0_1_ = 8;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  _DAT_0104d6c8 = (float)fVar5;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"start_4_star_script",0x13);
  local_128 = 0x13;
  local_12c[0x13] = '\0';
  local_4._0_1_ = 9;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  _DAT_0104d6cc = (float)fVar5;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"start_5_star_script",0x13);
  local_128 = 0x13;
  local_12c[0x13] = '\0';
  local_4._0_1_ = 10;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  DAT_0104d6d0 = (float)fVar5;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"project",7);
  local_128 = 7;
  local_12c[7] = '\0';
  local_4._0_1_ = 0xb;
  FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x1);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"daily_cinema_fees",0x11);
  local_128 = 0x11;
  local_12c[0x11] = '\0';
  local_4._0_1_ = 0xc;
  FUN_00558610(local_e4,&local_12c,0.0);
  uVar6 = FUN_00acd42c();
  DAT_0104d6e4 = (undefined4)(uVar6 >> 0x20);
  DAT_0104d6e0 = (undefined4)uVar6;
  FUN_00471b10((longlong *)&DAT_0104d6e0);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"daily_movie_pr_room_fee",0x17);
  local_128 = 0x17;
  local_12c[0x17] = '\0';
  local_4._0_1_ = 0xd;
  FUN_00558610(local_e4,&local_12c,0.0);
  uVar6 = FUN_00acd42c();
  DAT_0104d6ec = (undefined4)(uVar6 >> 0x20);
  DAT_0104d6e8 = (undefined4)uVar6;
  FUN_00471b10((longlong *)&DAT_0104d6e8);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x40;
  local_12c = _malloc(0x40);
  _strncpy(local_12c,"custom_script_fees_1_star_script",0x20);
  local_128 = 0x20;
  local_12c[0x20] = '\0';
  local_4._0_1_ = 0xe;
  FUN_00558610(local_e4,&local_12c,0.0);
  uVar6 = FUN_00acd42c();
  DAT_0104d6f4 = (undefined4)(uVar6 >> 0x20);
  DAT_0104d6f0 = (undefined4)uVar6;
  FUN_00471b10((longlong *)&DAT_0104d6f0);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x40;
  local_12c = _malloc(0x40);
  _strncpy(local_12c,"custom_script_fees_2_star_script",0x20);
  local_128 = 0x20;
  local_12c[0x20] = '\0';
  local_4._0_1_ = 0xf;
  FUN_00558610(local_e4,&local_12c,0.0);
  uVar6 = FUN_00acd42c();
  DAT_0104d6fc = (undefined4)(uVar6 >> 0x20);
  DAT_0104d6f8 = (undefined4)uVar6;
  FUN_00471b10((longlong *)&DAT_0104d6f8);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x40;
  local_12c = _malloc(0x40);
  _strncpy(local_12c,"custom_script_fees_3_star_script",0x20);
  local_128 = 0x20;
  local_12c[0x20] = '\0';
  local_4._0_1_ = 0x10;
  FUN_00558610(local_e4,&local_12c,0.0);
  uVar6 = FUN_00acd42c();
  DAT_0104d704 = (undefined4)(uVar6 >> 0x20);
  DAT_0104d700 = (undefined4)uVar6;
  FUN_00471b10((longlong *)&DAT_0104d700);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x40;
  local_12c = _malloc(0x40);
  _strncpy(local_12c,"custom_script_fees_4_star_script",0x20);
  local_128 = 0x20;
  local_12c[0x20] = '\0';
  local_4._0_1_ = 0x11;
  FUN_00558610(local_e4,&local_12c,0.0);
  _DAT_0104d708 = FUN_00acd42c();
  FUN_00471b10((longlong *)&DAT_0104d708);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x40;
  local_12c = _malloc(0x40);
  _strncpy(local_12c,"custom_script_fees_5_star_script",0x20);
  local_128 = 0x20;
  local_12c[0x20] = '\0';
  local_4._0_1_ = 0x12;
  FUN_00558610(local_e4,&local_12c,0.0);
  _DAT_0104d710 = FUN_00acd42c();
  FUN_00471b10((longlong *)&DAT_0104d710);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"skipped_shot_charge",0x13);
  local_128 = 0x13;
  local_12c[0x13] = '\0';
  local_4._0_1_ = 0x13;
  FUN_00558610(local_e4,&local_12c,0.0);
  uVar6 = FUN_00acd42c();
  DAT_0104d71c = (undefined4)(uVar6 >> 0x20);
  DAT_0104d718 = (undefined4)uVar6;
  FUN_00471b10((longlong *)&DAT_0104d718);
  local_4._0_1_ = 4;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_10c = 0.0;
  puVar3 = (ulonglong *)FUN_005c97c0(&DAT_0104d6d4,(int *)&local_10c);
  uVar6 = FUN_00acd42c();
  *puVar3 = uVar6;
  FUN_00471b10((longlong *)puVar3);
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"marketing_spend_lowest",0x16);
  local_128 = 0x16;
  local_12c[0x16] = '\0';
  local_4._0_1_ = 0x14;
  local_10c = 1.4013e-45;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  local_108 = (float)fVar5;
  puVar3 = (ulonglong *)FUN_005c97c0(&DAT_0104d6d4,(int *)&local_10c);
  uVar6 = FUN_00acd42c();
  *puVar3 = uVar6;
  FUN_00471b10((longlong *)puVar3);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"marketing_spend_low",0x13);
  local_128 = 0x13;
  local_12c[0x13] = '\0';
  local_4._0_1_ = 0x15;
  local_108 = 2.8026e-45;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  local_10c = (float)fVar5;
  puVar3 = (ulonglong *)FUN_005c97c0(&DAT_0104d6d4,(int *)&local_108);
  uVar6 = FUN_00acd42c();
  *puVar3 = uVar6;
  FUN_00471b10((longlong *)puVar3);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"marketing_spend_medium",0x16);
  local_128 = 0x16;
  local_12c[0x16] = '\0';
  local_4._0_1_ = 0x16;
  local_108 = 4.2039e-45;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  local_10c = (float)fVar5;
  puVar3 = (ulonglong *)FUN_005c97c0(&DAT_0104d6d4,(int *)&local_108);
  uVar6 = FUN_00acd42c();
  *puVar3 = uVar6;
  FUN_00471b10((longlong *)puVar3);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"marketing_spend_high",0x14);
  local_128 = 0x14;
  local_12c[0x14] = '\0';
  local_4._0_1_ = 0x17;
  local_108 = 5.60519e-45;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  local_10c = (float)fVar5;
  puVar3 = (ulonglong *)FUN_005c97c0(&DAT_0104d6d4,(int *)&local_108);
  uVar6 = FUN_00acd42c();
  *puVar3 = uVar6;
  FUN_00471b10((longlong *)puVar3);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"marketing_spend_highest",0x17);
  local_128 = 0x17;
  local_12c[0x17] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x18);
  local_108 = 7.00649e-45;
  fVar5 = FUN_00558610(local_e4,&local_12c,0.0);
  local_10c = (float)fVar5;
  puVar3 = (ulonglong *)FUN_005c97c0(&DAT_0104d6d4,(int *)&local_108);
  uVar6 = FUN_00acd42c();
  *puVar3 = uVar6;
  FUN_00471b10((longlong *)puVar3);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005cb9a0 @ 005cb9a0 ////

void __fastcall FUN_005cb9a0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005cb9d0 @ 005cb9d0 ////

void FUN_005cb9d0(void)

{
  return;
}


//// FUNCTION FUN_005cb9f0 @ 005cb9f0 ////

undefined4 __fastcall FUN_005cb9f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}


//// FUNCTION FUN_005cba00 @ 005cba00 ////

void __thiscall FUN_005cba00(void *this,float param_1)

{
  *(float *)((int)this + 0x90) = param_1 + *(float *)((int)this + 0x90);
  return;
}


//// FUNCTION FUN_005cba20 @ 005cba20 ////

float10 __fastcall FUN_005cba20(int param_1)

{
  return (float10)*(float *)(param_1 + 0x90);
}


//// FUNCTION FUN_005cba30 @ 005cba30 ////

int __fastcall FUN_005cba30(int param_1)

{
  return param_1 + 0x94;
}


//// FUNCTION FUN_005cba70 @ 005cba70 ////

void __fastcall FUN_005cba70(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb70c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2b18c;
  param_1[0x19] = &PTR_LAB_00d2b16c;
  local_4 = 0;
  if (10 < (uint)param_1[0x27]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x25]);
  }
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005cbb00 @ 005cbb00 ////

void __fastcall FUN_005cbb00(int *param_1)

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
  puStack_8 = &LAB_00cb70e8;
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


//// FUNCTION FUN_005cbbd0 @ 005cbbd0 ////

undefined4 * __fastcall FUN_005cbbd0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *param_1 = &PTR_FUN_00d2b18c;
  param_1[0x19] = &PTR_LAB_00d2b16c;
  param_1[0x25] = param_1 + 0x28;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 10;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005cbc50 @ 005cbc50 ////

undefined4 * __thiscall FUN_005cbc50(void *this,byte param_1)

{
  FUN_005cba70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005cbc70 @ 005cbc70 ////

undefined4 * __thiscall
FUN_005cbc70(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 100));
  *(undefined4 *)((int)this + 0x90) = param_3;
  *(undefined4 *)((int)this + 0x8c) = param_1;
  *(undefined ***)this = &PTR_FUN_00d2b18c;
  *(undefined4 *)((int)this + 100) = &PTR_LAB_00d2b16c;
  *(undefined4 *)((int)this + 0x94) = (undefined2 *)((int)this + 0xa0);
  *(undefined2 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x94),(wchar_t *)*param_2,param_2[1]);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005cbd10 @ 005cbd10 ////

undefined4 * __cdecl FUN_005cbd10(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb714b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xb4);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_005cbc70(this,param_1,param_2,param_3);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_005cbd80 @ 005cbd80 ////

void __fastcall FUN_005cbd80(int param_1)

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
  puStack_8 = &LAB_00cb7178;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCrewEffects.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 8;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Guid");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCrewEffects.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 9;
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
  uVar3 = FUN_0098b490("ExperienceGain");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectCrewEffects.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 10;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("Name");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x30));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005cc060 @ 005cc060 ////

void __fastcall FUN_005cc060(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005cc090 @ 005cc090 ////

void FUN_005cc090(void)

{
  return;
}


//// FUNCTION FUN_005cc0a0 @ 005cc0a0 ////

undefined4 __fastcall FUN_005cc0a0(int param_1)

{
  if (30.416666 < DAT_00e4fa4c - *(float *)(param_1 + 0x80)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_005cc0d0 @ 005cc0d0 ////

int __fastcall FUN_005cc0d0(int param_1)

{
  return param_1 + 0x60;
}


//// FUNCTION FUN_005cc0e0 @ 005cc0e0 ////

int __fastcall FUN_005cc0e0(int param_1)

{
  return param_1 + 0x70;
}


//// FUNCTION FUN_005cc160 @ 005cc160 ////

void __fastcall FUN_005cc160(int *param_1)

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
  puStack_8 = &LAB_00cb7198;
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


//// FUNCTION FUN_005cc240 @ 005cc240 ////

undefined4 __fastcall FUN_005cc240(int param_1)

{
  float fVar1;
  float fVar2;
  uint in_EAX;
  int iVar3;
  short sVar4;
  
  if (*(int *)(param_1 + 100) != 0) {
    iVar3 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
    in_EAX = iVar3 >> 2;
    if (2 < in_EAX) {
      fVar1 = *(float *)(*(int *)(param_1 + 0x68) + -4);
      fVar2 = ABS(fVar1 - *(float *)(*(int *)(param_1 + 0x68) + -8));
      sVar4 = (short)(iVar3 >> 0x12);
      in_EAX = CONCAT22(sVar4,(ushort)(fVar2 < 10.0) << 8 | (ushort)NAN(fVar2) << 10 |
                              (ushort)(fVar2 == 10.0) << 0xe);
      if ((fVar2 < 10.0) &&
         (in_EAX = CONCAT22(sVar4,(ushort)(fVar1 < 10.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                  (ushort)(fVar1 == 10.0) << 0xe),
         fVar1 < 10.0 == 0 && (fVar1 == 10.0) == 0)) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_005cc290 @ 005cc290 ////

void __fastcall FUN_005cc290(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb71d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0098b490("IncomeSeries");
  if ((char)uVar2 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x2c) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2;
      }
      FUN_0098a3a0(&local_30);
      for (local_34 = 0;
          (*(int *)(param_1 + 0x2c) != 0 &&
          (local_34 < (uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectGraphInfo.cpp";
          pcVar3 = (char *)&DAT_010581d8;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar3 = pcVar3 + 4;
          }
          local_2c = local_20;
          *pcVar3 = *pcVar5;
          DAT_010581d4 = 9;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 0;
          pcVar3 = (char *)FUN_00ace33d(0xe4f6dc);
          pcVar5 = pcVar3;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        uVar2 = FUN_0098b490("IncomeSeries[x]");
        if ((char)uVar2 != '\0') {
          FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x2c) + local_34 * 4),4);
        }
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_0054d510(param_1 + 0x28);
      SLVAR_LoadUint(&local_34);
      FUN_00567490((void *)(param_1 + 0x28),local_34);
      local_30 = 0;
      if (local_34 != 0) {
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectGraphInfo.cpp";
            pcVar3 = (char *)&DAT_010581d8;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar3 = pcVar3 + 4;
            }
            local_2c = local_20;
            *pcVar3 = *pcVar5;
            DAT_010581d4 = 9;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 1;
            pcVar3 = (char *)FUN_00ace33d(0xe4f6dc);
            pcVar5 = pcVar3;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
          }
          uVar2 = FUN_0098b490("IncomeSeries[x]");
          if ((char)uVar2 != '\0') {
            FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x2c) + local_30 * 4),4);
          }
          local_30 = local_30 + 1;
        } while (local_30 < local_34);
      }
    }
  }
  uVar2 = FUN_0098b490("ExpenditureSeries");
  if ((char)uVar2 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x3c) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2;
      }
      FUN_0098a3a0(&local_30);
      for (local_34 = 0;
          (*(int *)(param_1 + 0x3c) != 0 &&
          (local_34 < (uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectGraphInfo.cpp";
          pcVar3 = (char *)&DAT_010581d8;
          for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar3 = pcVar3 + 4;
          }
          local_2c = local_20;
          *pcVar3 = *pcVar5;
          DAT_010581d4 = 10;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 2;
          pcVar3 = (char *)FUN_00ace33d(0xe4f6dc);
          pcVar5 = pcVar3;
          do {
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        uVar2 = FUN_0098b490("ExpenditureSeries[x]");
        if ((char)uVar2 != '\0') {
          FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x3c) + local_34 * 4),4);
        }
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      if (*(void **)(param_1 + 0x3c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x3c));
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      SLVAR_LoadUint(&local_34);
      FUN_00567490((void *)(param_1 + 0x38),local_34);
      local_30 = 0;
      if (local_34 != 0) {
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectGraphInfo.cpp";
            pcVar3 = (char *)&DAT_010581d8;
            for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar3 = pcVar3 + 4;
            }
            local_2c = local_20;
            *pcVar3 = *pcVar5;
            DAT_010581d4 = 10;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 3;
            pcVar3 = (char *)FUN_00ace33d(0xe4f6dc);
            pcVar5 = pcVar3;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
          }
          uVar2 = FUN_0098b490("ExpenditureSeries[x]");
          if ((char)uVar2 != '\0') {
            FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x3c) + local_30 * 4),4);
          }
          local_30 = local_30 + 1;
        } while (local_30 < local_34);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectGraphInfo.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar5;
    DAT_010581d4 = 0xb;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar3 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar2 = FUN_0098b490("LastSampleDate");
  if ((char)uVar2 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x48),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005cc8f0 @ 005cc8f0 ////

void __thiscall FUN_005cc8f0(void *this,float param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = *(int *)((int)this + 100);
  param_1 = (float)CONCAT44(param_2,param_1) * 1.1920929e-07;
  if ((iVar1 == 0) ||
     ((uint)(*(int *)((int)this + 0x6c) - iVar1 >> 2) <=
      (uint)(*(int *)((int)this + 0x68) - iVar1 >> 2))) {
    FUN_00481520((void *)((int)this + 0x60),*(undefined4 **)((int)this + 0x68),1,&param_1);
  }
  else {
    pfVar2 = *(float **)((int)this + 0x68);
    *pfVar2 = param_1;
    *(float **)((int)this + 0x68) = pfVar2 + 1;
  }
  iVar1 = *(int *)((int)this + 0x74);
  param_1 = (float)param_3 * 1.1920929e-07;
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0x78) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x7c) - iVar1 >> 2))) {
    pfVar2 = *(float **)((int)this + 0x78);
    *pfVar2 = param_1;
    *(float **)((int)this + 0x78) = pfVar2 + 1;
    *(undefined4 *)((int)this + 0x80) = DAT_00e4fa4c;
    return;
  }
  FUN_00481520((void *)((int)this + 0x70),*(undefined4 **)((int)this + 0x78),1,&param_1);
  *(undefined4 *)((int)this + 0x80) = DAT_00e4fa4c;
  return;
}


//// FUNCTION FUN_005cc9c0 @ 005cc9c0 ////

undefined4 * __fastcall FUN_005cc9c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7219;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d2b28c;
  *param_1 = &PTR_FUN_00d2b284;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = DAT_00e4fa4c;
  iVar1 = param_1[0x19];
  local_4 = CONCAT31(local_4._1_3_,3);
  local_14 = 0;
  if ((iVar1 == 0) || ((uint)(param_1[0x1b] - iVar1 >> 2) <= (uint)(param_1[0x1a] - iVar1 >> 2))) {
    FUN_00481520(param_1 + 0x18,(undefined4 *)param_1[0x1a],1,&local_14);
  }
  else {
    puVar2 = (undefined4 *)param_1[0x1a];
    *puVar2 = 0;
    param_1[0x1a] = puVar2 + 1;
  }
  iVar1 = param_1[0x19];
  local_14 = 0;
  if ((iVar1 == 0) || ((uint)(param_1[0x1b] - iVar1 >> 2) <= (uint)(param_1[0x1a] - iVar1 >> 2))) {
    FUN_00481520(param_1 + 0x18,(undefined4 *)param_1[0x1a],1,&local_14);
  }
  else {
    puVar2 = (undefined4 *)param_1[0x1a];
    *puVar2 = 0;
    param_1[0x1a] = puVar2 + 1;
  }
  iVar1 = param_1[0x1d];
  local_14 = 0;
  if ((iVar1 == 0) || ((uint)(param_1[0x1f] - iVar1 >> 2) <= (uint)(param_1[0x1e] - iVar1 >> 2))) {
    FUN_00481520(param_1 + 0x1c,(undefined4 *)param_1[0x1e],1,&local_14);
  }
  else {
    puVar2 = (undefined4 *)param_1[0x1e];
    *puVar2 = 0;
    param_1[0x1e] = puVar2 + 1;
  }
  iVar1 = param_1[0x1d];
  local_14 = 0;
  if ((iVar1 != 0) && ((uint)(param_1[0x1e] - iVar1 >> 2) < (uint)(param_1[0x1f] - iVar1 >> 2))) {
    puVar2 = (undefined4 *)param_1[0x1e];
    *puVar2 = 0;
    param_1[0x1e] = puVar2 + 1;
    ExceptionList = local_c;
    return param_1;
  }
  FUN_00481520(param_1 + 0x1c,(undefined4 *)param_1[0x1e],1,&local_14);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005ccb90 @ 005ccb90 ////

undefined4 * __thiscall FUN_005ccb90(void *this,byte param_1)

{
  FUN_005ccbb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ccbb0 @ 005ccbb0 ////

void __fastcall FUN_005ccbb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7238;
  local_c = ExceptionList;
  local_4 = 0;
  if ((void *)param_1[0x1d] != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1d]);
  }
  ExceptionList = &local_c;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if ((void *)param_1[0x19] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x19]);
  }
  param_1[0x19] = 0;
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


//// FUNCTION FUN_005ccc40 @ 005ccc40 ////

void __fastcall FUN_005ccc40(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005ccce0 @ 005ccce0 ////

undefined4 __fastcall FUN_005ccce0(int param_1)

{
  if ((float)*(longlong *)(param_1 + 0x90) * 1.1920929e-07 == 0.0) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_005ccd10 @ 005ccd10 ////

longlong * __thiscall FUN_005ccd10(void *this,longlong *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 0x9c);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005ccd40 @ 005ccd40 ////

void __fastcall FUN_005ccd40(int *param_1)

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
  puStack_8 = &LAB_00cb7258;
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


//// FUNCTION FUN_005cd100 @ 005cd100 ////

longlong * __thiscall FUN_005cd100(void *this,longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 0x90);
  uVar2 = *(uint *)((int)this + 0x98);
  iVar3 = *(int *)((int)this + 0x9c);
  iVar4 = *(int *)((int)this + 0x94);
  *(uint *)param_1 = uVar2 - uVar1;
  *(uint *)((int)param_1 + 4) = (iVar3 - iVar4) - (uint)(uVar2 < uVar1);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005cd140 @ 005cd140 ////

void __fastcall FUN_005cd140(int param_1)

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
  puStack_8 = &LAB_00cb72d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x15;
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
  uVar3 = FUN_0098b490("Pool");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x16;
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
  uVar3 = FUN_0098b490("InitialPool");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x34),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x17;
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
  uVar3 = FUN_0098b490("AdderMaximum");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x3c),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x18;
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
  uVar3 = FUN_0098b490("DailyPercentage");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x44),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x19;
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
  uVar3 = FUN_0098b490("DailyPercentageMultiplier");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x48),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x1a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
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
  uVar3 = FUN_0098b490("GL_TANNOY_TRIGGERED");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x68),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x1b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("DayOfTannoyAnnouncement");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 100),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x1c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
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
  uVar3 = FUN_0098b490("PRecipient");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x4c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectIncome.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x1d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x6c));
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
  uVar3 = FUN_0098b490("PProjectObject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x6c));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005cd930 @ 005cd930 ////

undefined4 * __fastcall FUN_005cd930(undefined4 *param_1)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7303;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  param_1[0x19] = &PTR_LAB_00d2b3a0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_00d2b380;
  uVar1 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x24) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0x24));
  *(ulonglong *)(param_1 + 0x26) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0x26));
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = param_1 + 0x2c;
  param_1[0x2c] = &PTR_FUN_00d1e55c;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x32] = 0xffffffff;
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x37] = param_1 + 0x34;
  param_1[0x34] = &PTR_FUN_00d29d20;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005cda40 @ 005cda40 ////

void __fastcall FUN_005cda40(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7318;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2b380;
  param_1[0x19] = &PTR_LAB_00d2b3a0;
  param_1[0x34] = &PTR_FUN_00d29d20;
  local_4 = 0;
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
  param_1[0x2c] = &PTR_FUN_00d1e55c;
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
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CProjectIncome_CreateForPlayerProject @ 005cdb80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl CProjectIncome_CreateForPlayerProject(void *param_1)

{
  ulonglong *puVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *local_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb733b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_14 = operator_new(0xe8);
  puVar6 = (undefined4 *)0x0;
  local_4 = 0;
  if (local_14 != (undefined4 *)0x0) {
    puVar6 = FUN_005cd930(local_14);
  }
  uVar3 = *(undefined4 *)((int)param_1 + 0x210);
  local_4 = 0xffffffff;
  (**(code **)(puVar6[0x34] + 4))();
  puVar6[0x39] = uVar3;
  (**(code **)puVar6[0x34])();
  uVar3 = GetPlayerStudio();
  (**(code **)(puVar6[0x2c] + 4))();
  puVar6[0x31] = uVar3;
  (**(code **)puVar6[0x2c])();
  iVar4 = FUN_005b2b70((int)param_1);
  FUN_005dcf80(iVar4);
  FUN_00ace9b0();
  puVar1 = (ulonglong *)(puVar6 + 0x24);
  uVar7 = FUN_00acd42c();
  *puVar1 = uVar7;
  FUN_00471b10((longlong *)puVar1);
  puVar6[0x26] = (int)*puVar1;
  puVar6[0x27] = puVar6[0x25];
  FUN_00471b10((longlong *)(puVar6 + 0x26));
  pfVar5 = (float *)FUN_005b1050(param_1,&local_14);
  fVar2 = *pfVar5;
  pfVar5 = (float *)FUN_005b2bd0(param_1,&uStack_10);
  fVar2 = fVar2 + *pfVar5;
  if (fVar2 < 0.0) {
LAB_005cdce2:
    fVar2 = 0.0;
  }
  else {
    if (fVar2 <= 1.0) {
      if (fVar2 < 0.0) goto LAB_005cdce2;
      if (fVar2 <= 1.0) goto LAB_005cdd03;
    }
    fVar2 = 1.0;
  }
LAB_005cdd03:
  fVar2 = (1.0 - _DAT_00e54840) + _DAT_00e54840 * fVar2;
  uVar7 = FUN_00acd42c();
  *(ulonglong *)(puVar6 + 0x28) = uVar7;
  FUN_00471b10((longlong *)(puVar6 + 0x28));
  puVar6[0x2a] = _DAT_00e54838 * fVar2;
  puVar6[0x2b] = _DAT_00e5483c * fVar2 + 1.0;
  ExceptionList = pvStack_c;
  return puVar6;
}


//// FUNCTION CProjectIncome_CreateForAIProject @ 005cdd90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl CProjectIncome_CreateForAIProject(void *param_1,char param_2)

{
  ulonglong *puVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  float fStack_18;
  undefined8 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb735b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0xe8);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_005cd930(puVar3);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar3[0x34] + 4))();
  puVar3[0x39] = 0;
  (**(code **)puVar3[0x34])();
  uVar4 = FUN_005a2aa0((int)param_1);
  (**(code **)(puVar3[0x2c] + 4))();
  puVar3[0x31] = uVar4;
  (**(code **)puVar3[0x2c])();
  iVar5 = FUN_005a2c10((int)param_1);
  FUN_005dcf80(iVar5);
  puVar1 = (ulonglong *)(puVar3 + 0x24);
  FUN_00ace9b0();
  uVar6 = FUN_00acd42c();
  *puVar1 = uVar6;
  FUN_00471b10((longlong *)puVar1);
  puVar3[0x26] = (int)*puVar1;
  puVar3[0x27] = puVar3[0x25];
  FUN_00471b10((longlong *)(puVar3 + 0x26));
  if (param_2 != '\0') {
    uStack_14 = FUN_00acd42c();
    FUN_00471b10(&uStack_14);
    *(undefined4 *)puVar1 = (undefined4)uStack_14;
    puVar3[0x25] = uStack_14._4_4_;
    FUN_00471b10((longlong *)puVar1);
  }
  FUN_005a2ae0(param_1,&fStack_18);
  fVar2 = (1.0 - _DAT_00e54840) + _DAT_00e54840 * fStack_18;
  uVar6 = FUN_00acd42c();
  *(ulonglong *)(puVar3 + 0x28) = uVar6;
  FUN_00471b10((longlong *)(puVar3 + 0x28));
  puVar3[0x2a] = _DAT_00e54838 * fVar2;
  puVar3[0x2b] = _DAT_00e5483c * fVar2 + 1.0;
  ExceptionList = pvStack_c;
  return puVar3;
}


//// FUNCTION FUN_005cdf70 @ 005cdf70 ////

undefined4 * FUN_005cdf70(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb737b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005cd930(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION IncomeCalc_LoadTuningData @ 005cdfd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void IncomeCalc_LoadTuningData(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  float10 fVar5;
  char *local_128;
  undefined4 local_124;
  uint local_120;
  char local_11c [23];
  char local_105;
  undefined1 *local_104;
  undefined4 local_100;
  uint local_fc;
  undefined1 local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb73fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe5484c);
  local_104 = local_f8;
  local_f8[0] = 0;
  local_100 = 0;
  local_fc = 0x14;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_104,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_005cdf70,&local_104);
  local_4 = 0xffffffff;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  FUN_0098f9e0(0x989790);
  local_128 = local_11c;
  local_11c[0] = '\0';
  local_124 = 0;
  local_120 = 0x14;
  _strncpy(local_128,"releasing_movies",0x10);
  local_124 = 0x10;
  local_128[0x10] = '\0';
  local_4 = 1;
  FUN_0055c540(local_e4,&local_128);
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  local_128 = local_11c;
  local_11c[0] = '\0';
  local_124 = 0;
  local_120 = 0x14;
  _strncpy(local_128,"income",6);
  local_124 = 6;
  local_128[6] = '\0';
  local_4._0_1_ = 4;
  uVar3 = FUN_00558a50(local_e4,&local_128,(undefined4 *)0x0);
  local_105 = (char)uVar3;
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(local_128);
  }
  if (local_105 != '\0') {
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"revenue_base",0xc);
    local_124 = 0xc;
    local_128[0xc] = '\0';
    local_4._0_1_ = 5;
    DAT_00e54830 = FUN_00558750(local_e4,&local_128,0);
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"revenue_multiplier",0x12);
    local_124 = 0x12;
    local_128[0x12] = '\0';
    local_4._0_1_ = 6;
    DAT_00e54834 = FUN_00558750(local_e4,&local_128,0);
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"base_percentage",0xf);
    local_124 = 0xf;
    local_128[0xf] = '\0';
    local_4._0_1_ = 7;
    fVar5 = FUN_00558610(local_e4,&local_128,0.0);
    _DAT_00e54838 = (float)fVar5;
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"increase_percentage",0x13);
    local_124 = 0x13;
    local_128[0x13] = '\0';
    local_4._0_1_ = 8;
    fVar5 = FUN_00558610(local_e4,&local_128,0.0);
    _DAT_00e5483c = (float)fVar5;
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"pi_effect",9);
    local_124 = 9;
    local_128[9] = '\0';
    local_4._0_1_ = 9;
    fVar5 = FUN_00558610(local_e4,&local_128,0.0);
    _DAT_00e54840 = (float)fVar5;
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
    local_128 = local_11c;
    local_11c[0] = '\0';
    local_124 = 0;
    local_120 = 0x14;
    _strncpy(local_128,"adder_percentage",0x10);
    local_124 = 0x10;
    local_128[0x10] = '\0';
    local_4 = CONCAT31(local_4._1_3_,10);
    fVar5 = FUN_00558610(local_e4,&local_128,0.0);
    _DAT_00e54844 = (float)fVar5;
    if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
      _free(local_128);
    }
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ce3e0 @ 005ce3e0 ////

undefined4 * __thiscall FUN_005ce3e0(void *this,byte param_1)

{
  FUN_005cda40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ce400 @ 005ce400 ////

void __fastcall FUN_005ce400(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005ce430 @ 005ce430 ////

void __thiscall FUN_005ce430(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xb8) = param_1;
  return;
}


//// FUNCTION FUN_005ce440 @ 005ce440 ////

void FUN_005ce440(void)

{
  return;
}


//// FUNCTION FUN_005ce450 @ 005ce450 ////

int * __thiscall FUN_005ce450(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005ce480 @ 005ce480 ////

int __fastcall FUN_005ce480(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_005ce5b0 @ 005ce5b0 ////

int * __thiscall FUN_005ce5b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005ce610 @ 005ce610 ////

int * __cdecl FUN_005ce610(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_005ce650 @ 005ce650 ////

undefined4 * __cdecl FUN_005ce650(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005ce700 @ 005ce700 ////

void __thiscall FUN_005ce700(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*(int *)((int)this + 0xcc) + 4))();
  *(undefined4 *)((int)this + 0xe0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xcc))();
  *(undefined4 *)((int)this + 0xe4) = param_2;
  return;
}


//// FUNCTION FUN_005ce940 @ 005ce940 ////

void __cdecl FUN_005ce940(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_005ce9d0 @ 005ce9d0 ////

void __fastcall FUN_005ce9d0(int *param_1)

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
  puStack_8 = &LAB_00cb7418;
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


//// FUNCTION FUN_005ceaa0 @ 005ceaa0 ////

void FUN_005ceaa0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0104d728;
  if (DAT_0104d728 != &DAT_0104d734) {
    do {
      if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[2])(1);
        puVar1 = DAT_0104d728;
      }
    } while (puVar1 != &DAT_0104d734);
  }
  return;
}


//// FUNCTION PlayerMovies_Begin @ 005cead0 ////

void __cdecl PlayerMovies_Begin(undefined4 *param_1)

{
  *param_1 = DAT_0104d728;
  return;
}


//// FUNCTION PlayerMovies_End @ 005ceae0 ////

void __cdecl PlayerMovies_End(undefined4 *param_1)

{
  *param_1 = &DAT_0104d734;
  return;
}


//// FUNCTION FUN_005ceaf0 @ 005ceaf0 ////

undefined4 __thiscall FUN_005ceaf0(void *this,int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)((int)this + 0xec);
      (iVar1 != *(int *)((int)this + 0xf0) && (*(int *)(iVar1 + 0x14) != param_1));
      iVar1 = iVar1 + 0x18) {
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != *(int *)((int)this + 0xf0));
}


//// FUNCTION FUN_005cebb0 @ 005cebb0 ////

void __fastcall FUN_005cebb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2b430;
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


//// FUNCTION FUN_005cecc0 @ 005cecc0 ////

undefined4 * __thiscall FUN_005cecc0(void *this,byte param_1)

{
  FUN_005cebb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ced20 @ 005ced20 ////

void __thiscall FUN_005ced20(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  local_4 = 0;
  if (param_2 == *(int *)((int)this + 0xe0)) {
    *param_1 = *(undefined4 *)((int)this + 0xe4);
    return;
  }
  iVar1 = *(int *)((int)this + 0xf0);
  iVar2 = *(int *)((int)this + 0xec);
  iVar3 = iVar2;
  if (iVar2 != iVar1) {
    do {
      if (*(int *)(iVar3 + 0x14) == param_2) break;
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != iVar1);
    if (iVar3 != iVar1) {
      local_4 = *(undefined4 *)(*(int *)((int)this + 0xfc) + ((iVar3 - iVar2) / 0x18) * 4);
    }
  }
  *param_1 = local_4;
  return;
}


//// FUNCTION FUN_005cedc0 @ 005cedc0 ////

void __cdecl FUN_005cedc0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d2b430;
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


//// FUNCTION FUN_005cee30 @ 005cee30 ////

void __thiscall FUN_005cee30(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005cee70 @ 005cee70 ////

void __cdecl FUN_005cee70(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d2b430;
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


//// FUNCTION FUN_005cef40 @ 005cef40 ////

void __fastcall FUN_005cef40(int param_1)

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


//// FUNCTION FUN_005ceff0 @ 005ceff0 ////

void __fastcall FUN_005ceff0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2b440;
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


//// FUNCTION FUN_005cf040 @ 005cf040 ////

undefined4 * __thiscall FUN_005cf040(void *this,byte param_1)

{
  FUN_005ceff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005cf060 @ 005cf060 ////

undefined4 * FUN_005cf060(undefined4 *param_1,int param_2,int param_3)

{
  FUN_005cee70(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_005cf090 @ 005cf090 ////

void FUN_005cf090(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_005cebb0(param_1);
  }
  return;
}


//// FUNCTION FUN_005cf0c0 @ 005cf0c0 ////

void FUN_005cf0c0(void)

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
  puStack_8 = &LAB_00cb7438;
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


//// FUNCTION FUN_005cf180 @ 005cf180 ////

void __fastcall FUN_005cf180(int param_1)

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
    FUN_005cebb0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005cf1d0 @ 005cf1d0 ////

void __thiscall FUN_005cf1d0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_005ce610((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_005cebb0(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005cf230 @ 005cf230 ////

void __thiscall FUN_005cf230(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cb7458;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d2b430;
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
      FUN_005cf0c0();
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
        iVar3 = FUN_005ce480((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_005cedc0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_005cee70(puVar5,param_2,(int)&local_34);
      FUN_005cedc0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_005cf090(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_005cedc0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_005cf060(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_005ce940(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_005cedc0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_005ce650((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_005ce940(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_005cf590 @ 005cf590 ////

void __thiscall FUN_005cf590(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7478;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x18;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x18;
    }
    ExceptionList = &local_c;
    FUN_005cf230(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_005cf1d0(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = param_3;
  }
  if (param_3 != 0) {
    *(int **)(param_3 + 4) = param_4;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005cf670 @ 005cf670 ////

void __thiscall FUN_005cf670(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_005cf6b5;
    }
  }
  iVar1 = 0;
LAB_005cf6b5:
  FUN_005cf230(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_005cf6e0 @ 005cf6e0 ////

void __thiscall FUN_005cf6e0(void *this,uint param_1)

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
    FUN_0050f0a0(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if ((iVar2 != 0) && (param_1 < (uint)((int)*(undefined4 **)((int)this + 8) - iVar2 >> 2))) {
    FUN_005cee30(this,&param_1,(undefined4 *)(iVar2 + param_1 * 4),*(undefined4 **)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_005cf750 @ 005cf750 ////

void __fastcall FUN_005cf750(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2b46c;
  param_1[0xe] = &PTR_LAB_00d2b44c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19] = param_1[0x18];
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x19];
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if ((void *)param_1[0x3f] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3f]);
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_005cf180((int)(param_1 + 0x3a));
  param_1[0x33] = &PTR_LAB_00d2b430;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (0x14 < (uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x24]);
  }
  if (10 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
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


//// FUNCTION FUN_005cf8d0 @ 005cf8d0 ////

void __thiscall FUN_005cf8d0(void *this,uint param_1)

{
  FUN_005cf590(this,param_1,&PTR_LAB_00d2b430,0,(int *)0x0);
  return;
}


//// FUNCTION FUN_005cf910 @ 005cf910 ////

void __thiscall FUN_005cf910(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_005cee70(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_005cf670(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005cfa10 @ 005cfa10 ////

void __fastcall FUN_005cfa10(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint local_38;
  uint local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc;
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
  uVar3 = FUN_0098b490("Title");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x38));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xd;
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
  uVar3 = FUN_0098b490("MajorGenre");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x58));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xe;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("Quality");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x78));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xf;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
    FUN_00566d60((undefined4 *)(param_1 + 0x80));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x10;
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
  uVar3 = FUN_0098b490("ReleaseStarRating");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x7c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x11;
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
  uVar3 = FUN_0098b490("SuccessOverall");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x84));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x12;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("ReleaseDate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x88),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x13;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x94));
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
  uVar3 = FUN_0098b490("PDirector");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x94));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x14;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
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
  uVar3 = FUN_0098b490("DirectorPerformance");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xac));
  }
  uVar3 = FUN_0098b490("Actors");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0xb4) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = (*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4)) / 0x18;
      }
      FUN_0098a3a0(&local_30);
      local_38 = 0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0xb4) != 0 &&
          (local_34 < (uint)((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4)) / 0x18)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
          puVar6 = &DAT_010581d8;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar6 = puVar6 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
          DAT_010581d4 = 0x15;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 9;
          iVar4 = FUN_00ace3df((int *)(*(int *)(param_1 + 0xb4) + local_38));
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
        uVar3 = FUN_0098b490("Actors[x]");
        if ((char)uVar3 != '\0') {
          FUN_00990970((int *)(*(int *)(param_1 + 0xb4) + local_38));
        }
        local_38 = local_38 + 0x18;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_005cf180(param_1 + 0xb0);
      SLVAR_LoadUint(&local_34);
      FUN_005cf8d0((void *)(param_1 + 0xb0),local_34);
      local_30 = 0;
      if (local_34 != 0) {
        local_38 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
            puVar6 = &DAT_010581d8;
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar6 = puVar6 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
            DAT_010581d4 = 0x15;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 10;
            iVar4 = FUN_00ace3df((int *)(*(int *)(param_1 + 0xb4) + local_38));
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
          uVar3 = FUN_0098b490("Actors[x]");
          if ((char)uVar3 != '\0') {
            FUN_00990970((int *)(*(int *)(param_1 + 0xb4) + local_38));
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 0x18;
        } while (local_30 < local_34);
      }
    }
  }
  uVar3 = FUN_0098b490("ActorPerformances");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0xc4) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2;
      }
      FUN_0098a3a0(&local_30);
      for (local_34 = 0;
          (*(int *)(param_1 + 0xc4) != 0 &&
          (local_34 < (uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 2)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
          puVar6 = &DAT_010581d8;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar6 = puVar6 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
          DAT_010581d4 = 0x16;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 0xb;
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
        uVar3 = FUN_0098b490("ActorPerformances[x]");
        if ((char)uVar3 != '\0') {
          FUN_00566d60((undefined4 *)(*(int *)(param_1 + 0xc4) + local_34 * 4));
        }
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      if (*(void **)(param_1 + 0xc4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0xc4));
      }
      *(undefined4 *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      SLVAR_LoadUint(&local_34);
      FUN_005cf6e0((void *)(param_1 + 0xc0),local_34);
      local_38 = 0;
      if (local_34 != 0) {
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
            puVar6 = &DAT_010581d8;
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar6 = puVar6 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
            DAT_010581d4 = 0x16;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 0xc;
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
          uVar3 = FUN_0098b490("ActorPerformances[x]");
          if ((char)uVar3 != '\0') {
            FUN_00566d60((undefined4 *)(*(int *)(param_1 + 0xc4) + local_38 * 4));
          }
          local_38 = local_38 + 1;
        } while (local_38 < local_34);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x17;
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
  uVar3 = FUN_0098b490("TotalStuntLevels");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x8c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectLegacy.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x18;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
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
  uVar3 = FUN_0098b490("BestStunt");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x90));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005d09a0 @ 005d09a0 ////

void FUN_005d09a0(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104d720;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104d720;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_005d0a00 @ 005d0a00 ////

undefined4 * __thiscall FUN_005d0a00(void *this,byte param_1)

{
  FUN_005cf750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d0a20 @ 005d0a20 ////

void __thiscall FUN_005d0a20(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7548;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d2b430;
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
  FUN_005cf910((void *)((int)this + 0xe8),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_LAB_00d2b430;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_0050f980((void *)((int)this + 0xf8),(undefined4 *)&stack0x00000008);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005d0af0 @ 005d0af0 ////

void __fastcall FUN_005d0af0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d2b440;
  return;
}


//// FUNCTION FUN_005d0b50 @ 005d0b50 ////

undefined4 * __fastcall FUN_005d0b50(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb75e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d2b46c;
  param_1[0xe] = &PTR_LAB_00d2b44c;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = param_1 + 0x1f;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 10;
  param_1[0x24] = param_1 + 0x27;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x14;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  local_4._0_1_ = 4;
  param_1[0x2f] = 0;
  FUN_0043b510(param_1 + 0x30);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = param_1 + 0x33;
  param_1[0x33] = &PTR_LAB_00d2b430;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  param_1[0x1a] = param_1;
  FUN_00acdb9e(0xe548c4);
  iVar1 = FUN_0097dda0();
  param_1[0x1b] = iVar1;
  if (s___AV__InList_VCProjectLegacy_TM__00e5489c[0x27] != '\0') {
    iVar1 = 0x60;
    pcVar3 = "LegacyLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe548c4);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VCProjectLegacy_TM__00e5489c[0x27] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005d0cc0 @ 005d0cc0 ////

undefined4 * __cdecl FUN_005d0cc0(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb75fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x108);
  puVar3 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = FUN_005d0b50(puVar2);
  }
  FUN_00568cb0(param_1,&local_2c);
  FUN_004036d0(puVar3 + 0x1c,local_2c,local_28);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0048f010((void *)((int)param_1 + 4),&local_2c);
  FUN_004015d0(puVar3 + 0x24,(char *)local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  puVar3[0x2c] = *(undefined4 *)((int)param_1 + 8);
  puVar3[0x2e] = *(undefined4 *)((int)param_1 + 0xc);
  puVar3[0x2d] = *(undefined4 *)((int)param_1 + 0xc);
  puVar3[0x30] = *(undefined4 *)((int)param_1 + 0x14);
  puVar3[0x2f] = *(undefined4 *)((int)param_1 + 0x10);
  puVar3[0x31] = *(undefined4 *)((int)param_1 + 0x18);
  puVar3[0x32] = *(undefined4 *)((int)param_1 + 0x1c);
  piVar1 = puVar3 + 0x18;
  puVar3[0x19] = &DAT_0104d734;
  *piVar1 = (int)DAT_0104d734;
  *(int **)((int)DAT_0104d734 + 4) = piVar1;
  DAT_0104d734 = piVar1;
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_005d0e40 @ 005d0e40 ////

void __thiscall FUN_005d0e40(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 0x7c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x7c))(1);
    *(undefined4 *)((int)this + 0x7c) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 0x7c) = param_1;
  return;
}


//// FUNCTION FUN_005d0e70 @ 005d0e70 ////

void __fastcall FUN_005d0e70(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005d0ea0 @ 005d0ea0 ////

void FUN_005d0ea0(void)

{
  return;
}


//// FUNCTION FUN_005d0ec0 @ 005d0ec0 ////

void __thiscall FUN_005d0ec0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)((int)this + 0x100);
  uVar2 = *(undefined4 *)((int)this + 0x104);
  fVar3 = *(float *)((int)this + 0x108);
  if (*(void **)((int)this + 0x11c) != (void *)0x0) {
    iVar4 = FUN_0097e350(*(void **)((int)this + 0x11c),0);
    if (iVar4 != 0) {
      fVar3 = (*(float *)(iVar4 + 0xdc) + *(float *)(iVar4 + 0xd0) + fVar3) - 2.0;
      goto LAB_005d0f0e;
    }
  }
  fVar3 = fVar3 + 4.5;
LAB_005d0f0e:
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = fVar3;
  return;
}


//// FUNCTION FUN_005d0f50 @ 005d0f50 ////

void __fastcall FUN_005d0f50(int param_1)

{
  void *pvVar1;
  int iVar2;
  float10 fVar3;
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
  
  local_18 = *(float *)(param_1 + 0x100);
  local_14 = *(float *)(param_1 + 0x104);
  local_10 = *(float *)(param_1 + 0x108) + 1.0;
  local_28 = 0.0;
  iVar2 = 0x24;
  do {
    pvVar1 = (void *)FUN_009af7b0(DAT_0105cbec,&local_18,(int *)&lpType_0000000a,0xf,
                                  (undefined *)0x0);
    if (pvVar1 != (void *)0x0) {
      fVar3 = (float10)fcos((float10)local_28);
      local_1c = 0.5;
      local_24 = (float)fVar3;
      fVar3 = (float10)fsin((float10)local_28);
      local_20 = (float)fVar3;
      FUN_00412e20(&local_24);
      local_24 = local_24 * 3.0;
      local_20 = local_20 * 3.0;
      local_1c = local_1c * 3.0;
      FUN_009ae120(pvVar1,&local_24);
      *(undefined4 *)((int)pvVar1 + 0x58) = 0x3cb851ec;
      local_28 = local_28 + 0.17453294;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0xc;
  do {
    local_c = local_18;
    local_8 = local_14;
    local_4 = local_10;
    fVar3 = FUN_00990e30(-0.25,0.25);
    local_c = (float)(fVar3 + (float10)local_c);
    fVar3 = FUN_00990e30(-0.25,0.25);
    local_8 = (float)(fVar3 + (float10)local_8);
    fVar3 = FUN_00990e30(-0.5,1.0);
    local_4 = (float)fVar3;
    pvVar1 = (void *)FUN_009af7b0(DAT_0105cbec,&local_c,(int *)&lpType_0000000a,0xf,(undefined *)0x0
                                 );
    if (pvVar1 != (void *)0x0) {
      local_24 = 0.0;
      local_20 = 0.0;
      local_1c = 0.5;
      FUN_00412e20(&local_24);
      local_24 = local_24 + local_24;
      local_20 = local_20 + local_20;
      local_1c = local_1c + local_1c;
      FUN_009ae120(pvVar1,&local_24);
      *(undefined4 *)((int)pvVar1 + 0x58) = 0x3cb851ec;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_005d1110 @ 005d1110 ////

void __fastcall FUN_005d1110(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_c [12];
  
  iVar1 = FUN_00566c70();
  param_1[0xa1] = iVar1;
  piVar2 = (int *)(**(code **)(*param_1 + 0x34))(local_c);
  param_1[0xa2] = *piVar2;
  param_1[0xa3] = piVar2[1];
  param_1[0xa4] = piVar2[2];
  piVar2 = (int *)(**(code **)(*param_1 + 0x4c))(&stack0xffffffec);
  param_1[0xa5] = *piVar2;
  return;
}


//// FUNCTION FUN_005d1170 @ 005d1170 ////

int * __thiscall FUN_005d1170(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005d1340 @ 005d1340 ////

void __thiscall FUN_005d1340(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x39) == '\0') {
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


//// FUNCTION FUN_005d13a0 @ 005d13a0 ////

void __cdecl FUN_005d13a0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x39);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x39);
  }
  return;
}


//// FUNCTION FUN_005d13c0 @ 005d13c0 ////

void __cdecl FUN_005d13c0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x39);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x39);
  }
  return;
}


//// FUNCTION FUN_005d13e0 @ 005d13e0 ////

void __fastcall FUN_005d13e0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x39) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x39) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x39);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x39);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x39);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x39);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_005d1670 @ 005d1670 ////

float * __thiscall FUN_005d1670(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(void **)((int)this + 0x11c) != (void *)0x0) {
    iVar1 = FUN_0097e350(*(void **)((int)this + 0x11c),0);
    if (iVar1 != 0) {
      local_c = *(float *)(iVar1 + 200);
      local_8 = *(float *)(iVar1 + 0xcc);
      local_4 = *(float *)(iVar1 + 0xd0) + *(float *)(iVar1 + 0xdc);
      FUN_0040b490((void *)(*(int *)((int)this + 0x11c) + 0x18),&local_c);
      goto LAB_005d16e9;
    }
  }
  pfVar2 = (float *)FUN_00538af0(this,&local_c);
  local_c = *pfVar2;
  local_8 = pfVar2[1];
  local_4 = pfVar2[2];
LAB_005d16e9:
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return param_1;
}


//// FUNCTION FUN_005d1710 @ 005d1710 ////

uint __fastcall FUN_005d1710(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x170) != 0) {
    piVar1 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x170));
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if (iVar2 == 5) {
      FUN_008c1ec0(*(int *)(param_1 + 0x170));
    }
  }
  uVar3 = FUN_0053bd70(param_1);
  if ((char)uVar3 == '\0') {
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    uVar3 = 1;
    DAT_010b93a4 = 1;
    if (*(int *)(param_1 + 0x1e0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x1e0) + 0x1fd) = 1;
      return uVar3;
    }
  }
  return uVar3;
}


//// FUNCTION FUN_005d1770 @ 005d1770 ////

void __fastcall FUN_005d1770(int param_1)

{
  if (param_1 + -0xa0 == DAT_0104c6c8) {
    if (DAT_010504c4 != (void *)0x0) {
      FUN_0091ee70(DAT_010504c4,(int *)0x0);
    }
    FUN_008c1cb0();
    FUN_00932560(0);
    if (*(char *)(param_1 + 0x1a0) != '\0') {
      (**(code **)(*(int *)(param_1 + -0xa0) + 0xcc))(1,1);
    }
    *(undefined1 *)(param_1 + 0x1a0) = 1;
    DAT_010b93a4 = 0;
    FUN_00418a40(DAT_00f87aa0,'\0');
    FUN_0053a240(param_1 + -0xa0);
    return;
  }
  return;
}


//// FUNCTION FUN_005d1940 @ 005d1940 ////

undefined4 __fastcall FUN_005d1940(int param_1)

{
  return *(undefined4 *)(param_1 + 0x210);
}


//// FUNCTION FUN_005d1980 @ 005d1980 ////

void __thiscall FUN_005d1980(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x218) + 4))();
  *(undefined4 *)((int)this + 0x22c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x218))();
  return;
}


//// FUNCTION FUN_005d1a10 @ 005d1a10 ////

uint __fastcall FUN_005d1a10(int param_1)

{
  undefined2 uVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  float fVar4;
  undefined2 extraout_var;
  
  if (*(int *)(param_1 + 0x210) != 0) {
    iVar2 = FUN_005b25d0(*(int *)(param_1 + 0x210));
    in_EAX = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_005b22a0(*(int *)(param_1 + 0x210));
      in_EAX = 0;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x210));
        in_EAX = (**(code **)(*piVar3 + 0x24))();
        if (in_EAX == 5) {
          fVar4 = (float)FUN_005b25d0(*(int *)(param_1 + 0x210));
          uVar1 = FUN_004e0fd0(fVar4);
          in_EAX = CONCAT31((int3)(CONCAT22(extraout_var,uVar1) >> 8),1);
          if ((char)uVar1 != '\0') {
            return in_EAX;
          }
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_005d1a70 @ 005d1a70 ////

void __thiscall FUN_005d1a70(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_005d1b80 @ 005d1b80 ////

void __thiscall FUN_005d1b80(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x39) == '\0') {
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


//// FUNCTION FUN_005d1be0 @ 005d1be0 ////

int * __fastcall FUN_005d1be0(int *param_1)

{
  FUN_005d13e0(param_1);
  return param_1;
}


//// FUNCTION FUN_005d1c40 @ 005d1c40 ////

void __fastcall FUN_005d1c40(int *param_1)

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
  puStack_8 = &LAB_00cb7618;
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


//// FUNCTION FUN_005d1d10 @ 005d1d10 ////

void __fastcall FUN_005d1d10(int param_1)

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
  puStack_8 = &LAB_00cb7650;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectObject.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x184));
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
  uVar3 = FUN_0098b490("PProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x184));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectObject.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x1a0));
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
  uVar3 = FUN_0098b490("PLastBuildingOver");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x1a0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectObject.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x35;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 500));
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
  uVar3 = FUN_0098b490("PReleaseClone");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 500));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectObject.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x36;
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
  uVar3 = FUN_0098b490("BShouldReturnOnCancel");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x1c8),1);
  }
  FUN_0053b000(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005d2300 @ 005d2300 ////

undefined4 * __thiscall FUN_005d2300(void *this,byte param_1)

{
  FUN_005d2320(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d2320 @ 005d2320 ////

void __fastcall FUN_005d2320(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d23e0 @ 005d23e0 ////

undefined4 * __thiscall FUN_005d23e0(void *this,byte param_1)

{
  FUN_005d2400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d2400 @ 005d2400 ////

void __fastcall FUN_005d2400(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d24e0 @ 005d24e0 ////

undefined4 * __thiscall FUN_005d24e0(void *this,byte param_1)

{
  FUN_005d2500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d2500 @ 005d2500 ////

void __fastcall FUN_005d2500(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d25d0 @ 005d25d0 ////

undefined4 * __thiscall FUN_005d25d0(void *this,byte param_1)

{
  FUN_005d25f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d25f0 @ 005d25f0 ////

void __fastcall FUN_005d25f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d26d0 @ 005d26d0 ////

undefined4 * __thiscall FUN_005d26d0(void *this,byte param_1)

{
  FUN_005d26f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d26f0 @ 005d26f0 ////

void __fastcall FUN_005d26f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d27d0 @ 005d27d0 ////

undefined4 * __thiscall FUN_005d27d0(void *this,byte param_1)

{
  FUN_005d27f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d27f0 @ 005d27f0 ////

void __fastcall FUN_005d27f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d28d0 @ 005d28d0 ////

undefined4 * __thiscall FUN_005d28d0(void *this,byte param_1)

{
  FUN_005d28f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d28f0 @ 005d28f0 ////

void __fastcall FUN_005d28f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d29d0 @ 005d29d0 ////

undefined4 * __thiscall FUN_005d29d0(void *this,byte param_1)

{
  FUN_005d29f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d29f0 @ 005d29f0 ////

void __fastcall FUN_005d29f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d2ac0 @ 005d2ac0 ////

undefined4 * __thiscall FUN_005d2ac0(void *this,byte param_1)

{
  FUN_005d2ae0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d2ae0 @ 005d2ae0 ////

void __fastcall FUN_005d2ae0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005d2b20 @ 005d2b20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d2b20(int *param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
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
  int local_18;
  float local_14;
  float local_10;
  int local_c;
  
  if (param_1[0xa1] == 0) {
    pfVar1 = (float *)(param_1 + 0x40);
    uVar9 = FUN_00445f00(param_1 + 0xa6,pfVar1);
    if ((char)uVar9 != '\0') {
      DAT_0104d754 = *(uint *)(DAT_0104cdf4 + 0x3c);
      param_1[0xa6] = (int)*pfVar1;
      param_1[0xa7] = param_1[0x41];
      param_1[0xa8] = param_1[0x42];
    }
    if (((*(char *)((int)param_1 + 0x15d) != '\0') &&
        (*(int *)(DAT_0104cdf4 + 0x3c) - 10U < DAT_0104d754)) && (param_1 != DAT_0104c6c8)) {
      if ((_DAT_0104d790 & 1) == 0) {
        _DAT_0104d790 = _DAT_0104d790 | 1;
        _DAT_0104d78c = 9.0;
      }
      FUN_009840b0(&local_38,pfVar1);
      local_50 = 0.0;
      local_4c = 0.0;
      for (puVar3 = DAT_0104d760; puVar3 != &DAT_0104d76c; puVar3 = (undefined4 *)puVar3[1]) {
        piVar2 = (int *)puVar3[2];
        if ((piVar2 != param_1) && (piVar2 != DAT_0104c6c8)) {
          FUN_009840b0(&local_20,piVar2 + 0x40);
          fVar4 = (local_38 - local_20) * (local_38 - local_20) +
                  (local_34 - local_1c) * (local_34 - local_1c);
          if (fVar4 < _DAT_0104d78c) {
            if (fVar4 <= 1e-05) {
              fVar7 = FUN_00990e30(-1.0,1.0);
              local_40 = (float)fVar7;
              fVar7 = FUN_00990e30(-1.0,1.0);
              local_48 = (float)fVar7;
              local_44 = local_40;
              local_24 = local_40;
              local_28 = local_48;
              FUN_00412c90(&local_48);
              fVar7 = (float10)local_48 * (float10)0.1;
              fVar4 = local_44 * 0.1;
            }
            else {
              FUN_009840b0(&local_14,piVar2 + 0x40);
              local_48 = local_38 - local_14;
              local_44 = local_34 - local_10;
              local_30 = local_48;
              local_2c = local_44;
              fVar7 = FUN_00412c90(&local_48);
              local_40 = (float)((float10)3.0 - fVar7);
              fVar7 = ((float10)3.0 - fVar7) * (float10)local_48;
              fVar4 = local_44 * local_40;
            }
            local_50 = (float)((float10)local_50 + fVar7);
            local_4c = fVar4 + local_4c;
          }
        }
      }
      if ((float)param_1[0x42] < 1.0) {
        local_14 = 0.0;
        local_10 = 0.0;
        local_c = 0;
        FUN_009840b0(&local_40,&local_14);
        local_18 = param_1[0x42];
        local_1c = (float)param_1[0x41] + 1.5;
        local_20 = *pfVar1;
        FUN_009840b0(&local_14,&local_20);
        local_48 = local_14;
        local_44 = local_10;
        pfVar6 = (float *)FUN_0046d1c0(&local_14,&local_48,0x81);
        local_20 = *pfVar1;
        local_18 = param_1[0x42];
        local_40 = (*pfVar6 - local_48) + local_40;
        local_3c = local_3c + (pfVar6[1] - local_44);
        local_1c = (float)param_1[0x41] - 1.5;
        FUN_009840b0(&local_14,&local_20);
        local_48 = local_14;
        local_44 = local_10;
        pfVar6 = (float *)FUN_0046d1c0(&local_14,&local_48,0x81);
        local_1c = (float)param_1[0x41];
        local_18 = param_1[0x42];
        local_40 = (*pfVar6 - local_48) + local_40;
        local_3c = (pfVar6[1] - local_44) + local_3c;
        local_20 = *pfVar1 + 1.5;
        FUN_009840b0(&local_14,&local_20);
        local_48 = local_14;
        local_44 = local_10;
        pfVar6 = (float *)FUN_0046d1c0(&local_14,&local_48,0x81);
        local_18 = param_1[0x42];
        local_1c = (float)param_1[0x41];
        local_40 = (*pfVar6 - local_48) + local_40;
        local_3c = (pfVar6[1] - local_44) + local_3c;
        local_20 = *pfVar1 - 1.5;
        FUN_009840b0(&local_14,&local_20);
        local_48 = local_14;
        local_44 = local_10;
        pfVar6 = (float *)FUN_0046d1c0(&local_14,&local_48,0x81);
        local_40 = (*pfVar6 - local_48) + local_40;
        local_3c = (pfVar6[1] - local_44) + local_3c;
        if (1e-09 < local_3c * local_3c + local_40 * local_40) {
          FUN_00412c90(&local_40);
          local_50 = local_40 * 3.0 + local_50;
          local_4c = local_3c * 3.0 + local_4c;
        }
      }
      if (1e-09 < local_50 * local_50 + local_4c * local_4c) {
        fVar7 = FUN_00990aa0();
        if ((float10)1.0 < fVar7) {
          fVar7 = (float10)1.0;
        }
        param_1[0x42] = param_1[0x42];
        local_14 = (float)((float10)local_50 * fVar7);
        *pfVar1 = local_14 + *pfVar1;
        param_1[0x41] = (int)(float)(fVar7 * (float10)local_4c + (float10)(float)param_1[0x41]);
        DAT_0104d754 = *(uint *)(DAT_0104cdf4 + 0x3c);
      }
    }
    (**(code **)(*param_1 + 0x8c))(DAT_00e5287c,DAT_00e52878,0,0);
    fVar7 = FUN_00990aa0();
    fVar7 = FUN_004012c0((float)(fVar7 * (float10)3.1415927));
    pfVar6 = (float *)(param_1 + 0x31);
    fVar7 = FUN_004012c0((float)(fVar7 + (float10)(float)param_1[0x31]));
    *pfVar6 = (float)fVar7;
    if (6.2831855 < *pfVar6) {
      fVar7 = FUN_004012c0(*pfVar6 - 6.2831855);
      *pfVar6 = (float)fVar7;
    }
    (**(code **)(*param_1 + 0x28))(pfVar1,pfVar6);
    FUN_0053d3a0();
    return;
  }
  if (param_1[0x47] != 0) {
    iVar5 = FUN_00566c70();
    local_40 = (float)(iVar5 - param_1[0xa1]);
    local_48 = (float)(int)local_40;
    if ((int)local_40 < 0) {
      local_48 = local_48 + 4.2949673e+09;
    }
    if (local_48 < 3000.0) {
      local_40 = 1.0;
      if (300.0 <= local_48) {
        local_48 = (3000.0 - local_48) * 0.00037037037;
        local_40 = local_48;
      }
      else {
        local_48 = local_48 * 0.0033333332;
      }
      local_48 = local_48 + local_48;
      fVar7 = (float10)FUN_00ace9b0();
      fVar7 = fVar7 * (float10)30.0 + (float10)(float)param_1[0xa5];
      local_c = param_1[0xa4];
      fVar8 = (float10)fcos(fVar7);
      local_14 = (float)(fVar8 * (float10)local_48 + (float10)(float)param_1[0xa2]);
      fVar8 = (float10)fsin(fVar7);
      local_10 = (float)(fVar8 * (float10)local_48 + (float10)(float)param_1[0xa3]);
      fVar7 = FUN_004012c0((float)-fVar7);
      local_48 = (float)fVar7;
      (**(code **)(*param_1 + 0x28))(&local_14,&local_48);
      FUN_00527c00((void *)(param_1[0x47] + 0x18),local_48,local_48,local_48);
      FUN_0053d3a0();
      return;
    }
    uVar9 = 0x3f800000;
    fVar7 = FUN_004012c0(0.0);
    (**(code **)(*(int *)param_1[0x47] + 0x20))(param_1 + 0x40,(float)fVar7,uVar9);
    FUN_00527b80((void *)(param_1[0x47] + 0x18),1e-05,1e-05,1e-05);
    FUN_0053d3a0();
    return;
  }
  param_1[0xa1] = 1;
  FUN_0053d3a0();
  return;
}


//// FUNCTION FUN_005d35f0 @ 005d35f0 ////

void __fastcall FUN_005d35f0(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  byte *pbVar6;
  char *pcVar7;
  char acStack_64 [4];
  uint uStack_60;
  undefined1 uStack_54;
  undefined4 uStack_4c;
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7788;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 100) == '\0') {
    return;
  }
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x210));
  iVar3 = (**(code **)(*piVar2 + 0x1c))(local_48);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(iVar3 + 0x38);
  FUN_00526bb0(&uStack_4c);
  piVar2 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x210));
  uVar4 = (**(code **)(*piVar2 + 0x24))();
  *(undefined4 *)(param_1 + 0x24c) = uVar4;
  piVar2 = (int *)FUN_005b22a0(*(int *)(param_1 + 0x210));
  pfVar5 = (float *)(**(code **)(*piVar2 + 0x38))(&stack0xffffff90);
  *(bool *)(param_1 + 0x250) = 1.0 <= *pfVar5;
  *(undefined4 *)(param_1 + 0x268) = DAT_00e4fa4c;
  acStack_64[0] = '\0';
  _strncpy(acStack_64,"p_film_cannister",0x10);
  uStack_54 = 0;
  local_c = (void *)0x0;
  switch(*(undefined4 *)(param_1 + 0x24c)) {
  case 2:
  case 3:
    if ((*(int *)(param_1 + 0x254) == 0) || (*(int *)(param_1 + 0x254) == 4)) {
      pcVar7 = "p_icon_done";
    }
    else {
      pcVar7 = "p_icon_write";
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x254) == 0) || (*(int *)(param_1 + 0x254) == 4)) {
      if (*(char *)(param_1 + 0x250) == '\0') {
        pcVar7 = "p_icon_rehersing";
      }
      else {
        pcVar7 = "p_icon_rehersal";
      }
    }
    else {
      pcVar7 = "p_icon_ready";
    }
    break;
  case 5:
    if ((*(int *)(param_1 + 0x254) == 0) || (*(int *)(param_1 + 0x254) == 4))
    goto switchD_005d36e6_caseD_6;
    pcVar7 = "p_icon_progress";
    break;
  case 6:
switchD_005d36e6_caseD_6:
    pcVar7 = "p_icon_finished";
    break;
  case 7:
    pcVar7 = "p_icon_release";
    break;
  default:
    goto switchD_005d36e6_default;
  }
  FUN_00403e20(&stack0xffffff90,pcVar7);
switchD_005d36e6_default:
  uVar1 = FUN_005b60b0(*(int *)(param_1 + 0x210));
  if ((char)uVar1 != '\0') {
    FUN_004073f0(&stack0xffffff90,"_stunt",6);
  }
  FUN_004073f0(&stack0xffffff90,".msh",4);
  pbVar6 = FUN_009de1d0(acStack_64,1);
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x18))(pbVar6);
  if (pbVar6 != (byte *)0x0) {
    FUN_009de3b0(pbVar6);
  }
  if (uStack_60 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(&DAT_00000014);
}


//// FUNCTION FUN_005d3800 @ 005d3800 ////

void __cdecl FUN_005d3800(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined1 local_48 [8];
  undefined1 auStack_40 [20];
  float local_2c;
  float local_24;
  float local_20;
  
  if (param_1 != (int *)0x0) {
    fVar11 = (float10)fcos(-(float10)(float)param_1[0x31]);
    local_20 = (float)fVar11;
    fVar11 = (float10)fsin(-(float10)(float)param_1[0x31]);
    local_2c = (float)fVar11;
    local_24 = (float)-fVar11;
    puVar10 = DAT_0104d760;
    if (DAT_0104d760 != &DAT_0104d76c) {
      do {
        piVar4 = (int *)puVar10[2];
        if ((piVar4 != (int *)0x0) && ((int *)piVar4[0x8b] == param_1)) {
          pfVar8 = (float *)(**(code **)(*param_1 + 0x34))(local_48);
          pfVar9 = (float *)(**(code **)(*piVar4 + 0x34))(auStack_40);
          fVar5 = *pfVar9 - *pfVar8;
          fVar6 = pfVar9[1] - pfVar8[1];
          fVar2 = pfVar9[2];
          fVar3 = pfVar8[2];
          fVar7 = (fVar2 - fVar3) * 0.0;
          piVar4[0x4c] = (int)(local_20 * fVar5 + fVar6 * local_24 + fVar7);
          piVar4[0x4d] = (int)(local_2c * fVar5 + fVar6 * local_20 + fVar7);
          piVar4[0x4e] = (int)((fVar6 + fVar5) * 0.0 + (fVar2 - fVar3));
        }
        puVar1 = puVar10 + 1;
        puVar10 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104d76c);
    }
  }
  return;
}


//// FUNCTION FUN_005d3930 @ 005d3930 ////

void __cdecl FUN_005d3930(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float unaff_EBX;
  undefined4 *puVar11;
  float10 fVar12;
  undefined1 local_3c [16];
  float local_2c;
  float local_24;
  float local_20;
  
  if (param_1 != (int *)0x0) {
    fVar12 = (float10)fcos((float10)(float)param_1[0x31]);
    local_20 = (float)fVar12;
    fVar12 = (float10)fsin((float10)(float)param_1[0x31]);
    local_2c = (float)fVar12;
    local_24 = (float)-fVar12;
    puVar11 = DAT_0104d760;
    if (DAT_0104d760 != &DAT_0104d76c) {
      do {
        piVar4 = (int *)puVar11[2];
        if ((piVar4 != (int *)0x0) && ((int *)piVar4[0x8b] == param_1)) {
          fVar5 = (float)piVar4[0x4c];
          fVar6 = (float)piVar4[0x4e];
          fVar7 = (float)piVar4[0x4d] * local_24;
          fVar8 = local_20 * fVar5;
          fVar9 = (float)piVar4[0x4d] * local_20;
          fVar5 = local_2c * fVar5;
          pfVar10 = (float *)(**(code **)(*param_1 + 0x34))(local_3c);
          fVar2 = pfVar10[1];
          fVar3 = pfVar10[2];
          piVar4[0x4c] = (int)(unaff_EBX + *pfVar10);
          piVar4[0x4d] = (int)(fVar8 + fVar7 + fVar6 * 0.0 + fVar2);
          piVar4[0x4e] = (int)(fVar5 + fVar9 + fVar6 * 0.0 + fVar3);
          (**(code **)(*piVar4 + 0xcc))(1,1);
        }
        puVar1 = puVar11 + 1;
        puVar11 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104d76c);
    }
  }
  return;
}


//// FUNCTION FUN_005d3a60 @ 005d3a60 ////

void __fastcall FUN_005d3a60(int *param_1)

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


//// FUNCTION FUN_005d3ad0 @ 005d3ad0 ////

void __fastcall FUN_005d3ad0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2ba10;
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


//// FUNCTION FUN_005d3b20 @ 005d3b20 ////

int * __fastcall FUN_005d3b20(int *param_1)

{
  FUN_005d13e0(param_1);
  return param_1;
}


//// FUNCTION FUN_005d3b30 @ 005d3b30 ////

void FUN_005d3b30(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xe) = 1;
  *(undefined1 *)((int)puVar1 + 0x39) = 0;
  return;
}


//// FUNCTION FUN_005d3ba0 @ 005d3ba0 ////

undefined4 * __fastcall FUN_005d3ba0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *piVar6;
  float10 fVar7;
  char *pcVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7851;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053ba80(param_1);
  *param_1 = &PTR_FUN_00d2ba6c;
  param_1[0x1e] = &PTR_LAB_00d2ba48;
  param_1[0x28] = &PTR_FUN_00d2ba30;
  param_1[0x82] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = param_1 + 0x7f;
  param_1[0x7f] = &PTR_FUN_00d18c3c;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x89] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = param_1 + 0x86;
  param_1[0x86] = &PTR_FUN_00d16bec;
  param_1[0x8b] = 0;
  piVar6 = param_1 + 0x8c;
  param_1[0x8e] = 0;
  *piVar6 = 0;
  param_1[0x8d] = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  FUN_0043b460(param_1 + 0x96);
  FUN_0043b510(param_1 + 0x9a);
  param_1[0x9e] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = param_1 + 0x9b;
  param_1[0x9b] = &PTR_LAB_00d2ba10;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x8e] = param_1;
  FUN_00acdb9e(0xe54a84);
  iVar2 = FUN_0097dda0();
  param_1[0x8f] = iVar2;
  if (s___AV__CP_VCReleasedFilmClone_TM__00e54a5c[0x27] != '\0') {
    iVar2 = 0x230;
    pcVar8 = "ProbjectLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe54a84);
    FUN_0097df60(pcVar3,pcVar8,iVar2);
    s___AV__CP_VCReleasedFilmClone_TM__00e54a5c[0x27] = '\0';
  }
  param_1[0x8d] = &DAT_0104d76c;
  *piVar6 = (int)DAT_0104d76c;
  *(int **)((int)DAT_0104d76c + 4) = piVar6;
  DAT_0104d76c = piVar6;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x42] = 0;
  fVar7 = FUN_004012c0(0.0);
  param_1[0x31] = (float)fVar7;
  param_1[0x9a] = DAT_00e4fa4c;
  param_1[0x96] = 10;
  param_1[0x95] = 0;
  param_1[0x93] = 7;
  puVar4 = FUN_00433eb0();
  param_1[0x47] = puVar4;
  puVar4[0x27] = puVar4[0x27] | 2;
  *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) | 0x4000000;
  FUN_0097e330((void *)param_1[0x47],1);
  (**(code **)(*(int *)param_1[0x47] + 0x20))();
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined1 *)((int)param_1 + 0x15e) = 0;
  pcVar3 = "project_root";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b5fc;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  pcVar3 = "project_tip";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b570;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  pcVar3 = "project_phase";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b5b4;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  pcVar3 = "project_people";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b640;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  pcVar3 = "project_stuntschedule";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b6d0;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  pcVar3 = "project_stuntdouble";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b71c;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  pcVar3 = "project_shootschedule";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b684;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  pcVar3 = "project_shootschedule_additional";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b764;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  pcVar3 = "project_awards";
  pvVar5 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar5,pcVar3);
  if (!bVar1) {
    piVar6 = operator_new(0x90);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar6);
      *piVar6 = (int)&PTR_FUN_00d2b7bc;
    }
    pvVar5 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar5,piVar6);
  }
  ExceptionList = (void *)0x0;
  return param_1;
}


//// FUNCTION FUN_005d4210 @ 005d4210 ////

undefined4 * __cdecl FUN_005d4210(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb786b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2a4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005d3ba0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x7f] + 4))();
  puVar2[0x84] = param_1;
  (**(code **)puVar2[0x7f])();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_005d4290 @ 005d4290 ////

void __fastcall FUN_005d4290(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb78ce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2ba6c;
  param_1[0x1e] = &PTR_LAB_00d2ba48;
  param_1[0x28] = &PTR_FUN_00d2ba30;
  puVar2 = (undefined4 *)param_1[0xa0];
  local_4 = 5;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x9b] + 4))();
    param_1[0xa0] = 0;
    (**(code **)param_1[0x9b])();
  }
  if ((undefined4 *)param_1[0x8d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8d] = param_1[0x8c];
  }
  if (param_1[0x8c] != 0) {
    *(undefined4 *)(param_1[0x8c] + 4) = param_1[0x8d];
  }
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x9b] = &PTR_LAB_00d2ba10;
  if ((undefined4 *)param_1[0x9d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9d] = param_1[0x9c];
  }
  if (param_1[0x9c] != 0) {
    *(undefined4 *)(param_1[0x9c] + 4) = param_1[0x9d];
  }
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  if ((undefined4 *)param_1[0x9d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9d] = param_1[0x9c];
  }
  if (param_1[0x9c] != 0) {
    *(undefined4 *)(param_1[0x9c] + 4) = param_1[0x9d];
  }
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  if ((undefined4 *)param_1[0x8d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8d] = param_1[0x8c];
  }
  if (param_1[0x8c] != 0) {
    *(undefined4 *)(param_1[0x8c] + 4) = param_1[0x8d];
  }
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x86] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0x88] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x88] = param_1[0x87];
  }
  if (param_1[0x87] != 0) {
    *(undefined4 *)(param_1[0x87] + 4) = param_1[0x88];
  }
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  if ((undefined4 *)param_1[0x88] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x88] = param_1[0x87];
  }
  if (param_1[0x87] != 0) {
    *(undefined4 *)(param_1[0x87] + 4) = param_1[0x88];
  }
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  puVar2 = (undefined4 *)param_1[0x85];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x85] = 0;
  param_1[0x7f] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x81] = param_1[0x80];
  }
  if (param_1[0x80] != 0) {
    *(undefined4 *)(param_1[0x80] + 4) = param_1[0x81];
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x81] = param_1[0x80];
  }
  if (param_1[0x80] != 0) {
    *(undefined4 *)(param_1[0x80] + 4) = param_1[0x81];
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  local_4 = 0xffffffff;
  FUN_0053bbe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005d4500 @ 005d4500 ////

void __fastcall FUN_005d4500(int *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  ulonglong uVar8;
  float local_40;
  undefined4 auStack_3c [15];
  
  bVar2 = false;
  if ((param_1[0xa1] != 0) && (uVar4 = FUN_00566c70(), param_1[0xa1] + 3000U <= uVar4)) {
    if ((void *)param_1[0x66] != (void *)0x0) {
      FUN_0093e3a0((void *)param_1[0x66],(int)param_1);
    }
    if (param_1[0x84] != 0) {
      iVar5 = FUN_005b2330(param_1[0x84]);
      FUN_005c5810(iVar5);
    }
    piVar6 = param_1 + 0x12;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 != 0) {
      return;
    }
    (**(code **)*param_1)(1);
    return;
  }
  FUN_00539330(param_1);
  CProject_GetQualityWithAwardBoost((void *)param_1[0x84],&local_40);
  uVar8 = FUN_00acd42c();
  uVar4 = (uint)(100 / (ulonglong)(3 - (int)uVar8));
  param_1[0x92] = uVar4;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  param_1[0x92] = uVar4;
  if ((DAT_0104c6e0 == param_1) && (*(int *)(param_1[0x84] + 0x2fc) != 0)) {
    piVar6 = (int *)FUN_005b22a0(param_1[0x84]);
    iVar5 = (**(code **)(*piVar6 + 0x24))();
    if (iVar5 == 2) {
      piVar6 = (int *)FUN_005b22a0(param_1[0x84]);
      cVar3 = (**(code **)(*piVar6 + 0x28))();
      if (((cVar3 == '\0') && (param_1[0x7e] != 1)) && (DAT_0104c6c8 != param_1)) {
        FUN_00528390(*(int *)(param_1[0x84] + 0x2fc));
      }
    }
  }
  piVar6 = (int *)FUN_005b22a0(param_1[0x84]);
  iVar5 = (**(code **)(*piVar6 + 0x24))();
  if (iVar5 == param_1[0x93]) {
    uVar4 = FUN_0043b490((uint *)(param_1 + 0x96));
    if ((char)uVar4 == '\0') goto LAB_005d46cc;
    piVar6 = (int *)FUN_005b22a0(param_1[0x84]);
    pfVar7 = (float *)(**(code **)(*piVar6 + 0x38))(&local_40);
    if (1.0 <= *pfVar7 == (bool)(char)param_1[0x94]) {
      piVar6 = (int *)FUN_005b22a0(param_1[0x84]);
      iVar5 = (**(code **)(*piVar6 + 0x1c))(auStack_3c);
      bVar2 = true;
      if (*(int *)(iVar5 + 0x38) != param_1[0x95]) goto LAB_005d46ae;
      bVar1 = false;
    }
    else {
LAB_005d46ae:
      bVar1 = true;
    }
    if (bVar2) {
      FUN_00526bb0(auStack_3c);
    }
    if (!bVar1) goto LAB_005d46cc;
  }
  FUN_005d35f0((int)param_1);
LAB_005d46cc:
  FUN_0053a3a0(param_1);
  FUN_0053d480((int)param_1);
  if (((param_1[0x7e] == 2) && (30.0 < (float)param_1[0x42])) && (param_1[0x84] != 0)) {
    *(undefined1 *)(param_1[0x84] + 0x40c) = 1;
  }
  return;
}


//// FUNCTION FUN_005d4710 @ 005d4710 ////

void __fastcall FUN_005d4710(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d3b30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_005d4750 @ 005d4750 ////

undefined4 * __thiscall FUN_005d4750(void *this,byte param_1)

{
  FUN_005d4290(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d4770 @ 005d4770 ////

int __fastcall FUN_005d4770(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d3b30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005d47a0 @ 005d47a0 ////

void __fastcall FUN_005d47a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2bb5c;
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


//// FUNCTION FUN_005d47f0 @ 005d47f0 ////

undefined4 * __thiscall FUN_005d47f0(void *this,byte param_1)

{
  FUN_005d47a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d4810 @ 005d4810 ////

void __fastcall FUN_005d4810(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d2bb5c;
  return;
}


//// FUNCTION FUN_005d4870 @ 005d4870 ////

void __fastcall FUN_005d4870(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7908;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0048fbd0((void *)(param_1 + 0x20),&local_10,(int *)**(int **)(param_1 + 0x24),
               *(int **)(param_1 + 0x24));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x24));
}


//// FUNCTION FUN_005d48f0 @ 005d48f0 ////

void __fastcall FUN_005d48f0(int param_1)

{
  FUN_005d4870(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_005d4900 @ 005d4900 ////

void * __thiscall FUN_005d4900(void *this,byte param_1)

{
  FUN_005d48f0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d4940 @ 005d4940 ////

void __thiscall FUN_005d4940(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cb7928;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x39) != '\0') {
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
  FUN_005d13e0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x39) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x39) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x39) == '\0') {
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
      iVar1 = param_2[0xe];
      *(char *)(param_2 + 0xe) = (char)_Memory[0xe];
      *(char *)(_Memory + 0xe) = (char)iVar1;
      goto LAB_005d4ab1;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x39) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x39) == '\0') {
      piVar2 = (int *)FUN_005d13c0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x39) == '\0') {
      uVar3 = FUN_005d13a0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_005d4ab1:
  if ((char)_Memory[0xe] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xe] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xe] == '\0') {
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_005d1b80(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x39) == '\0') {
            if ((*(char *)(*piVar4 + 0x38) != '\x01') || (*(char *)(piVar4[2] + 0x38) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x38) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x38) = 1;
                *(undefined1 *)(piVar4 + 0xe) = 0;
                FUN_005d1340(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xe) = (char)piVar5[0xe];
              *(undefined1 *)(piVar5 + 0xe) = 1;
              *(undefined1 *)(piVar4[2] + 0x38) = 1;
              FUN_005d1b80(this,(int)piVar5);
              break;
            }
LAB_005d4b74:
            *(undefined1 *)(piVar4 + 0xe) = 0;
          }
        }
        else {
          if ((char)piVar4[0xe] == '\0') {
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_005d1340(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x39) == '\0') {
            if ((*(char *)(piVar4[2] + 0x38) == '\x01') && (*(char *)(*piVar4 + 0x38) == '\x01'))
            goto LAB_005d4b74;
            if (*(char *)(*piVar4 + 0x38) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x38) = 1;
              *(undefined1 *)(piVar4 + 0xe) = 0;
              FUN_005d1b80(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xe) = (char)piVar5[0xe];
            *(undefined1 *)(piVar5 + 0xe) = 1;
            *(undefined1 *)(*piVar4 + 0x38) = 1;
            FUN_005d1340(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xe) = 1;
  }
  FUN_005d4870((int)(_Memory + 3));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_005d4c10 @ 005d4c10 ////

void FUN_005d4c10(void *param_1)

{
  if (*(char *)((int)param_1 + 0x39) == '\0') {
    FUN_005d4c10(*(void **)((int)param_1 + 8));
    FUN_005d48f0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_005d4c50 @ 005d4c50 ////

void __fastcall FUN_005d4c50(int param_1)

{
  FUN_005d4c10(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_005d4c80 @ 005d4c80 ////

void __thiscall FUN_005d4c80(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005d4c10((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x39) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x39) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x39);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x39);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x39);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x39);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_005d4940(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_005d4da0 @ 005d4da0 ////

void __fastcall FUN_005d4da0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_005d4c80(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005d4dd0 @ 005d4dd0 ////

int __fastcall FUN_005d4dd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d3b30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005d4e00 @ 005d4e00 ////

undefined4 * __fastcall FUN_005d4e00(undefined4 *param_1)

{
  int iVar1;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7953;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d2bb68;
  FUN_0048f010(&stack0x00000004,&local_2c);
  param_1[0x14] = param_1 + 0x17;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x14;
  FUN_004015d0(param_1 + 0x14,local_2c,local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = FUN_005d3b30();
  param_1[0x1d] = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1d];
  *(undefined4 *)param_1[0x1d] = param_1[0x1d];
  *(undefined4 *)(param_1[0x1d] + 8) = param_1[0x1d];
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005d4ec0 @ 005d4ec0 ////

undefined4 * __thiscall FUN_005d4ec0(void *this,byte param_1)

{
  FUN_005d4ee0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d4ee0 @ 005d4ee0 ////

void __fastcall FUN_005d4ee0(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb797e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2bb68;
  local_4 = 2;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1f])(1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005d4c80(param_1 + 0x1c,&local_10,*(int **)param_1[0x1d],(int *)param_1[0x1d]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1d]);
}


//// FUNCTION FUN_005d4f90 @ 005d4f90 ////

void __fastcall FUN_005d4f90(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *this;
  void *pvVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb79dd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar4 = operator_new(0x80);
  pvVar6 = (void *)0x0;
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_005d4e00(puVar4);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x214);
  local_4 = 0xffffffff;
  if (puVar2 != puVar4) {
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)();
      }
    }
    *(undefined4 **)(param_1 + 0x214) = puVar4;
  }
  pvVar5 = operator_new(0x30);
  local_4 = 1;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    pvVar5 = (void *)FUN_00901c40(pvVar5,0);
  }
  local_4 = 0xffffffff;
  FUN_00901ec0(pvVar5,"project_root",(undefined4 *)0x0);
  this = operator_new(0x30);
  local_4 = 2;
  if (this != (void *)0x0) {
    pvVar6 = (void *)FUN_00901c40(this,5);
  }
  local_4 = 0xffffffff;
  FUN_00901e60(pvVar5,(int)pvVar6);
  FUN_00901ec0(pvVar6,"project_tip",(undefined4 *)0x0);
  pvVar6 = operator_new(0x30);
  local_4 = 3;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = (void *)FUN_00901c40(pvVar6,2);
  }
  local_4 = 0xffffffff;
  FUN_00901e60(pvVar5,(int)pvVar6);
  FUN_00901ec0(pvVar6,"project_phase",(undefined4 *)0x0);
  pvVar6 = operator_new(0x30);
  local_4 = 4;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = (void *)FUN_00901c40(pvVar6,2);
  }
  local_4 = 0xffffffff;
  FUN_00901e60(pvVar5,(int)pvVar6);
  FUN_00901ec0(pvVar6,"project_people",(undefined4 *)0x0);
  pvVar6 = operator_new(0x30);
  local_4 = 5;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = (void *)FUN_00901c40(pvVar6,4);
  }
  local_4 = 0xffffffff;
  FUN_00901e60(pvVar5,(int)pvVar6);
  FUN_00901ec0(pvVar6,"project_shootschedule",(undefined4 *)0x0);
  pvVar6 = operator_new(0x30);
  local_4 = 6;
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = (void *)FUN_00901c40(pvVar6,4);
  }
  local_4 = 0xffffffff;
  FUN_00901e60(pvVar5,(int)pvVar6);
  FUN_00901ec0(pvVar6,"project_stats",(undefined4 *)0x0);
  iVar3 = *(int *)(param_1 + 0x214);
  puVar4 = *(undefined4 **)(iVar3 + 0x7c);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)();
  }
  *(void **)(iVar3 + 0x7c) = pvVar5;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005d51f0 @ 005d51f0 ////

void __fastcall FUN_005d51f0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005d5220 @ 005d5220 ////

void FUN_005d5220(void)

{
  return;
}


//// FUNCTION FUN_005d5240 @ 005d5240 ////

int __fastcall FUN_005d5240(int param_1)

{
  return param_1 + 0x110;
}


//// FUNCTION FUN_005d5250 @ 005d5250 ////

float10 __fastcall FUN_005d5250(int param_1)

{
  return (float10)*(float *)(param_1 + 0xd4);
}


//// FUNCTION FUN_005d5260 @ 005d5260 ////

float10 __fastcall FUN_005d5260(int param_1)

{
  return (float10)*(float *)(param_1 + 0xd8);
}


//// FUNCTION FUN_005d5270 @ 005d5270 ////

float10 __fastcall FUN_005d5270(int param_1)

{
  return (float10)*(float *)(param_1 + 0x108);
}


//// FUNCTION FUN_005d5280 @ 005d5280 ////

float10 __fastcall FUN_005d5280(int param_1)

{
  return (float10)*(float *)(param_1 + 0xdc);
}


//// FUNCTION FUN_005d5290 @ 005d5290 ////

undefined4 __fastcall FUN_005d5290(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf4);
}


//// FUNCTION FUN_005d52a0 @ 005d52a0 ////

undefined4 __fastcall FUN_005d52a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}


//// FUNCTION FUN_005d5300 @ 005d5300 ////

void __fastcall FUN_005d5300(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ace790(*(int **)(param_1 + 0xa0),0,&TM::CStaff::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  (**(code **)(*(int *)(param_1 + 0xbc) + 4))();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0xbc))();
  return;
}


//// FUNCTION FUN_005d5360 @ 005d5360 ////

undefined4 __fastcall FUN_005d5360(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}


//// FUNCTION FUN_005d5370 @ 005d5370 ////

longlong * __thiscall FUN_005d5370(void *this,longlong *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0xe0);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 0xe4);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_005d53a0 @ 005d53a0 ////

void __fastcall FUN_005d53a0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0xe8) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}


//// FUNCTION FUN_005d53d0 @ 005d53d0 ////

void __fastcall FUN_005d53d0(int *param_1)

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
  puStack_8 = &LAB_00cb79f8;
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


//// FUNCTION FUN_005d54a0 @ 005d54a0 ////

void __fastcall FUN_005d54a0(int param_1)

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
  puStack_8 = &LAB_00cb7a90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("POwner");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x40));
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
    FUN_00990970((int *)(param_1 + 0x40));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x13;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x58));
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
  uVar3 = FUN_0098b490("PCurrentShot");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x58));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x14;
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
  uVar3 = FUN_0098b490("StressGain");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x70),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x15;
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
  uVar3 = FUN_0098b490("GenreExperienceGain");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x74),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("StarRatingGain");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x78),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 6;
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
  uVar3 = FUN_0098b490("WagesEarned");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x7c),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 7;
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
  uVar3 = FUN_0098b490("ShotStarted");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x98),1);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 8;
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
  uVar3 = FUN_0098b490("StressStartOfShot");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x9c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 9;
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
  uVar3 = FUN_0098b490("GenreExperienceStartOfShot");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xa0),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1b;
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
  uVar3 = FUN_0098b490("SalaryAtStart");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x84),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
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
  uVar3 = FUN_0098b490("StarRatingAtStart");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x8c));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xc;
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
  uVar3 = FUN_0098b490("StartTick");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x90),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 0xd;
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
  uVar3 = FUN_0098b490("EndTick");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x94),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x1f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
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
  uVar3 = FUN_0098b490("StuntExperienceGain");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xa4),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ProjectStaffEnhancement.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
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
  uVar3 = FUN_0098b490("StuntExperienceStartOfShot");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xa8),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005d6290 @ 005d6290 ////

void __thiscall FUN_005d6290(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  char **ppcVar7;
  undefined4 local_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7aa8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)FUN_00ace790(*(int **)((int)this + 0xa0),0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar1 != (int *)0x0) {
    puVar4 = &local_34;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00473120(iVar2);
    puVar4 = (undefined4 *)FUN_004731e0(pvVar3,puVar4);
    *(undefined4 *)((int)this + 0x100) = *puVar4;
  }
  iVar2 = *(int *)((int)this + 0xa0);
  iVar5 = FUN_005b6b90(*(int *)((int)this + 0xb8));
  puVar6 = (undefined4 *)FUN_00449b40(iVar5);
  puVar4 = &local_34;
  pvVar3 = (void *)FUN_00577370(iVar2);
  puVar4 = (undefined4 *)FUN_00441750(pvVar3,puVar4,puVar6);
  pcStack_2c = acStack_20;
  *(undefined4 *)((int)this + 0x104) = *puVar4;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"Stunts",6);
  uStack_28 = 6;
  pcStack_2c[6] = '\0';
  ppcVar7 = &pcStack_2c;
  puVar4 = &uStack_30;
  uStack_4 = 0;
  pvVar3 = (void *)FUN_00577370(*(int *)((int)this + 0xa0));
  puVar4 = (undefined4 *)FUN_00441750(pvVar3,puVar4,ppcVar7);
  *(undefined4 *)((int)this + 0x10c) = *puVar4;
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  *(undefined1 *)((int)this + 0xfc) = 1;
  (**(code **)(*(int *)((int)this + 0xbc) + 4))();
  *(undefined4 *)((int)this + 0xd0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xbc))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005d63e0 @ 005d63e0 ////

void __fastcall FUN_005d63e0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char **ppcVar10;
  undefined4 local_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7ac8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_00ace790(*(int **)(param_1 + 0xa0),0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar3 != (int *)0x0) {
    puVar9 = &local_34;
    iVar4 = (**(code **)(*piVar3 + 0x27c))();
    pvVar5 = (void *)FUN_00473120(iVar4);
    pfVar6 = (float *)FUN_004731e0(pvVar5,puVar9);
    fVar1 = *pfVar6;
    fVar2 = *(float *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(float *)(param_1 + 0xd4) = (fVar1 - fVar2) + *(float *)(param_1 + 0xd4);
  }
  iVar4 = *(int *)(param_1 + 0xa0);
  iVar7 = FUN_005b6b90(*(int *)(param_1 + 0xb8));
  puVar8 = (undefined4 *)FUN_00449b40(iVar7);
  puVar9 = &local_34;
  pvVar5 = (void *)FUN_00577370(iVar4);
  pfVar6 = (float *)FUN_00441750(pvVar5,puVar9,puVar8);
  pcStack_2c = acStack_20;
  *(float *)(param_1 + 0xd8) = (*pfVar6 - *(float *)(param_1 + 0x104)) + *(float *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x104) = 0;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"Stunts",6);
  uStack_28 = 6;
  pcStack_2c[6] = '\0';
  ppcVar10 = &pcStack_2c;
  puVar9 = &uStack_30;
  uStack_4 = 0;
  pvVar5 = (void *)FUN_00577370(*(int *)(param_1 + 0xa0));
  pfVar6 = (float *)FUN_00441750(pvVar5,puVar9,ppcVar10);
  uStack_4 = 0xffffffff;
  *(float *)(param_1 + 0x108) =
       (*pfVar6 - *(float *)(param_1 + 0x10c)) + *(float *)(param_1 + 0x108);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  (**(code **)(*(int *)(param_1 + 0xbc) + 4))();
  *(undefined4 *)(param_1 + 0xd0) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0xbc))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005d6560 @ 005d6560 ////

void __fastcall FUN_005d6560(int param_1)

{
  uint *puVar1;
  uint uVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  void *pvVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  ulonglong uVar13;
  int unaff_retaddr;
  char **ppcVar14;
  float fStack_4c;
  char *pcStack_48;
  float afStack_44 [2];
  ulonglong uStack_3c;
  uint uStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  char acStack_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7af0;
  pvStack_c = ExceptionList;
  puVar1 = (uint *)(param_1 + 0xe8);
  ExceptionList = &pvStack_c;
  if ((float)*(longlong *)(param_1 + 0xe8) * 1.1920929e-07 != 0.0) {
    fVar3 = (float)*(int *)(param_1 + 0xf4);
    if (*(int *)(param_1 + 0xf4) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    ExceptionList = &pvStack_c;
    if (fVar3 != 0.0) {
      ExceptionList = &pvStack_c;
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0xa0) + 0x1d4))();
      (**(code **)(*piVar4 + 0x4c))(&uStack_34);
      fStack_4c = (float)(uStack_34 + *puVar1);
      pcStack_48 = pcStack_30 + (uint)CARRY4(uStack_34,*puVar1) + *(int *)(param_1 + 0xec);
      FUN_00471b10((longlong *)&fStack_4c);
      uStack_3c = FUN_00acd42c();
      FUN_00471b10((longlong *)&uStack_3c);
      iVar5 = *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0xf4);
      fStack_4c = (float)iVar5;
      if (iVar5 < 0) {
        fStack_4c = fStack_4c + 4.2949673e+09;
      }
      fVar12 = FUN_0043b970(0xe4fa4c);
      FUN_0043b520(afStack_44,(float)((float10)fStack_4c / fVar12));
      fStack_4c = (float)(longlong)uStack_3c * 1.1920929e-07;
      FUN_0043b710(afStack_44);
      puVar6 = (uint *)(param_1 + 0xe0);
      uVar13 = FUN_00acd42c();
      uVar2 = *puVar6;
      *puVar6 = uVar2 + (uint)uVar13;
      *(uint *)(param_1 + 0xe4) =
           *(int *)(param_1 + 0xe4) + (int)(uVar13 >> 0x20) + (uint)CARRY4(uVar2,(uint)uVar13);
      FUN_00471b10((longlong *)puVar6);
    }
  }
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0xa0) + 0x1d4))();
  puVar6 = (uint *)(**(code **)(*piVar4 + 0x4c))(&uStack_34);
  *puVar1 = *puVar6;
  *(uint *)(param_1 + 0xec) = puVar6[1];
  FUN_00471b10((longlong *)puVar1);
  if (unaff_retaddr == 0) {
    unaff_retaddr = *(int *)(DAT_0104cdf4 + 0x3c);
  }
  *(int *)(param_1 + 0xf4) = unaff_retaddr;
  piVar4 = (int *)FUN_00ace790(*(int **)(param_1 + 0xa0),0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar4 != (int *)0x0) {
    if (*(float *)(param_1 + 0xf0) != 0.0) {
      fVar3 = *(float *)(param_1 + 0xf0);
      pfVar7 = (float *)FUN_00585ff0(piVar4,&pcStack_48);
      fVar3 = *pfVar7 - fVar3;
      if (0.0 <= fVar3) {
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
      }
      else {
        fVar3 = 0.0;
      }
      *(float *)(param_1 + 0xdc) = fVar3 + *(float *)(param_1 + 0xdc);
    }
    puVar8 = (undefined4 *)FUN_00585ff0(piVar4,(undefined4 *)&stack0x00000000);
    *(undefined4 *)(param_1 + 0xf0) = *puVar8;
    if (*(float *)(param_1 + 0x100) != 0.0) {
      fVar3 = *(float *)(param_1 + 0x100);
      ppcVar14 = &pcStack_48;
      iVar5 = (**(code **)(*piVar4 + 0x27c))();
      pvVar9 = (void *)FUN_00473120(iVar5);
      pfVar7 = (float *)FUN_004731e0(pvVar9,ppcVar14);
      fVar3 = *pfVar7 - fVar3;
      if (0.0 <= fVar3) {
        if (1.0 < fVar3) {
          fVar3 = 1.0;
        }
      }
      else {
        fVar3 = 0.0;
      }
      *(float *)(param_1 + 0xd4) = fVar3 + *(float *)(param_1 + 0xd4);
    }
    puVar8 = (undefined4 *)register0x00000010;
    iVar5 = (**(code **)(*piVar4 + 0x27c))();
    pvVar9 = (void *)FUN_00473120(iVar5);
    puVar8 = (undefined4 *)FUN_004731e0(pvVar9,puVar8);
    *(undefined4 *)(param_1 + 0x100) = *puVar8;
  }
  if (*(float *)(param_1 + 0x104) != 0.0) {
    fVar3 = *(float *)(param_1 + 0x104);
    iVar5 = *(int *)(param_1 + 0xa0);
    iVar10 = FUN_005b6b90(*(int *)(param_1 + 0xb8));
    puVar8 = (undefined4 *)FUN_00449b40(iVar10);
    ppcVar14 = &pcStack_48;
    pvVar9 = (void *)FUN_00577370(iVar5);
    pfVar7 = (float *)FUN_00441750(pvVar9,ppcVar14,puVar8);
    fVar3 = *pfVar7 - fVar3;
    if (0.0 <= fVar3) {
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
    }
    else {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + 0xd8) = fVar3 + *(float *)(param_1 + 0xd8);
  }
  iVar5 = *(int *)(param_1 + 0xa0);
  iVar10 = FUN_005b6b90(*(int *)(param_1 + 0xb8));
  puVar11 = (undefined4 *)FUN_00449b40(iVar10);
  puVar8 = (undefined4 *)register0x00000010;
  pvVar9 = (void *)FUN_00577370(iVar5);
  puVar8 = (undefined4 *)FUN_00441750(pvVar9,puVar8,puVar11);
  *(undefined4 *)(param_1 + 0x104) = *puVar8;
  if (*(float *)(param_1 + 0x10c) != 0.0) {
    pcStack_30 = acStack_24;
    acStack_24[0] = '\0';
    uStack_2c = 0;
    uStack_28 = 0x14;
    _strncpy(pcStack_30,"Stunts",6);
    uStack_2c = 6;
    pcStack_30[6] = '\0';
    ppcVar14 = &pcStack_30;
    puStack_8 = (undefined1 *)0x0;
    puVar8 = (undefined4 *)register0x00000010;
    pvVar9 = (void *)FUN_00577370(*(int *)(param_1 + 0xa0));
    pfVar7 = (float *)FUN_00441750(pvVar9,puVar8,ppcVar14);
    *(float *)(param_1 + 0x108) =
         (*pfVar7 - *(float *)(param_1 + 0x10c)) + *(float *)(param_1 + 0x108);
    if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_30);
    }
  }
  pcStack_30 = acStack_24;
  acStack_24[0] = '\0';
  uStack_2c = 0;
  uStack_28 = 0x14;
  _strncpy(pcStack_30,"Stunts",6);
  uStack_2c = 6;
  pcStack_30[6] = '\0';
  ppcVar14 = &pcStack_30;
  pfVar7 = afStack_44;
  puStack_8 = (undefined1 *)0x1;
  pvVar9 = (void *)FUN_00577370(*(int *)(param_1 + 0xa0));
  puVar8 = (undefined4 *)FUN_00441750(pvVar9,pfVar7,ppcVar14);
  *(undefined4 *)(param_1 + 0x10c) = *puVar8;
  if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_30);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_005d6a20 @ 005d6a20 ////

void __fastcall FUN_005d6a20(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char **ppcVar9;
  undefined4 local_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7b08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_00ace790(*(int **)(param_1 + 0xa0),0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    fVar1 = *(float *)(param_1 + 0x100);
    puVar8 = &local_34;
    iVar3 = (**(code **)(*piVar2 + 0x27c))();
    pvVar4 = (void *)FUN_00473120(iVar3);
    pfVar5 = (float *)FUN_004731e0(pvVar4,puVar8);
    fVar1 = *pfVar5 - fVar1;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(float *)(param_1 + 0xd4) = fVar1 + *(float *)(param_1 + 0xd4);
  }
  fVar1 = *(float *)(param_1 + 0x104);
  iVar3 = *(int *)(param_1 + 0xa0);
  iVar6 = FUN_005b6b90(*(int *)(param_1 + 0xb8));
  puVar7 = (undefined4 *)FUN_00449b40(iVar6);
  puVar8 = &local_34;
  pvVar4 = (void *)FUN_00577370(iVar3);
  pfVar5 = (float *)FUN_00441750(pvVar4,puVar8,puVar7);
  fVar1 = *pfVar5 - fVar1;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(float *)(param_1 + 0xd8) = fVar1 + *(float *)(param_1 + 0xd8);
  if (*(float *)(param_1 + 0x10c) != 0.0) {
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"Stunts",6);
    uStack_28 = 6;
    pcStack_2c[6] = '\0';
    ppcVar9 = &pcStack_2c;
    puVar8 = &uStack_30;
    uStack_4 = 0;
    pvVar4 = (void *)FUN_00577370(*(int *)(param_1 + 0xa0));
    pfVar5 = (float *)FUN_00441750(pvVar4,puVar8,ppcVar9);
    *(float *)(param_1 + 0x108) =
         (*pfVar5 - *(float *)(param_1 + 0x10c)) + *(float *)(param_1 + 0x108);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005d6c00 @ 005d6c00 ////

void __fastcall FUN_005d6c00(int param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  ulonglong uVar5;
  float local_20;
  int iStack_1c;
  int local_18;
  ulonglong uStack_14;
  uint uStack_c;
  int aiStack_8 [2];
  
  piVar2 = (int *)FUN_00ace790(*(int **)(param_1 + 0xa0),0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    FUN_00591bf0(piVar2);
    local_20 = *(float *)(param_1 + 0xf0);
    pfVar3 = (float *)FUN_00585ff0(piVar2,&local_18);
    fVar1 = *pfVar3 - local_20;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)(param_1 + 0xdc) = fVar1;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xa0) + 0x1d4))();
  (**(code **)(*piVar2 + 0x4c))(aiStack_8);
  iStack_1c = *(uint *)(param_1 + 0xe8) + uStack_c;
  local_18 = *(int *)(param_1 + 0xec) + aiStack_8[0] +
             (uint)CARRY4(*(uint *)(param_1 + 0xe8),uStack_c);
  FUN_00471b10((longlong *)&iStack_1c);
  uStack_14 = FUN_00acd42c();
  FUN_00471b10((longlong *)&uStack_14);
  iStack_1c = *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0xf4);
  fVar1 = (float)iStack_1c;
  if (iStack_1c < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar4 = FUN_0043b970(0xe4fa4c);
  FUN_0043b520(&local_20,(float)((float10)fVar1 / fVar4));
  FUN_0043b710(&local_20);
  uVar5 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0xe0) = uVar5;
  FUN_00471b10((longlong *)(param_1 + 0xe0));
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  return;
}


//// FUNCTION FUN_005d6dc0 @ 005d6dc0 ////

undefined4 * __fastcall FUN_005d6dc0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7b6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d2bcc0;
  param_1[0x19] = &PTR_LAB_00d2bca0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_1 + 0x23;
  param_1[0x23] = &PTR_FUN_00d18c4c;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = param_1 + 0x29;
  param_1[0x29] = &PTR_FUN_00d18c3c;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = param_1 + 0x2f;
  param_1[0x2f] = &PTR_FUN_00d1ec60;
  param_1[0x34] = 0;
  local_4._0_1_ = 4;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  uVar3 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x38) = uVar3;
  FUN_00471b10((longlong *)(param_1 + 0x38));
  *(ulonglong *)(param_1 + 0x3a) = uVar3;
  FUN_00471b10((longlong *)(param_1 + 0x3a));
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x46] = param_1;
  FUN_00acdb9e(0xe54af4);
  iVar1 = FUN_0097dda0();
  param_1[0x47] = iVar1;
  if (s___AVCToolTipSet_TM___00e54adc[0x15] != '\0') {
    iVar1 = 0x110;
    pcVar4 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe54af4);
    FUN_0097df60(pcVar2,pcVar4,iVar1);
    s___AVCToolTipSet_TM___00e54adc[0x15] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005d6f70 @ 005d6f70 ////

void __fastcall FUN_005d6f70(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7b88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2bcc0;
  param_1[0x19] = &PTR_LAB_00d2bca0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x45] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x45] = param_1[0x44];
  }
  if (param_1[0x44] != 0) {
    *(undefined4 *)(param_1[0x44] + 4) = param_1[0x45];
  }
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x2f] = &PTR_FUN_00d1ec60;
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x31] = param_1[0x30];
  }
  if (param_1[0x30] != 0) {
    *(undefined4 *)(param_1[0x30] + 4) = param_1[0x31];
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x31] = param_1[0x30];
  }
  if (param_1[0x30] != 0) {
    *(undefined4 *)(param_1[0x30] + 4) = param_1[0x31];
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x29] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2b] = param_1[0x2a];
  }
  if (param_1[0x2a] != 0) {
    *(undefined4 *)(param_1[0x2a] + 4) = param_1[0x2b];
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2b] = param_1[0x2a];
  }
  if (param_1[0x2a] != 0) {
    *(undefined4 *)(param_1[0x2a] + 4) = param_1[0x2b];
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x23] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x25] = param_1[0x24];
  }
  if (param_1[0x24] != 0) {
    *(undefined4 *)(param_1[0x24] + 4) = param_1[0x25];
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x25] = param_1[0x24];
  }
  if (param_1[0x24] != 0) {
    *(undefined4 *)(param_1[0x24] + 4) = param_1[0x25];
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005d7150 @ 005d7150 ////

undefined4 * __cdecl FUN_005d7150(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7bab;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x120);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005d6dc0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x23] + 4))();
  puVar2[0x28] = param_1;
  (**(code **)puVar2[0x23])();
  (**(code **)(puVar2[0x29] + 4))();
  puVar2[0x2e] = param_2;
  (**(code **)puVar2[0x29])();
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_005d7200 @ 005d7200 ////

undefined4 * __thiscall FUN_005d7200(void *this,byte param_1)

{
  FUN_005d6f70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d7220 @ 005d7220 ////

void __fastcall FUN_005d7220(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005d7270 @ 005d7270 ////

void __fastcall FUN_005d7270(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005d7310 @ 005d7310 ////

undefined4 FUN_005d7310(void)

{
  return DAT_0104d7d8;
}


//// FUNCTION FUN_005d7320 @ 005d7320 ////

int __fastcall FUN_005d7320(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_005d74e0 @ 005d74e0 ////

int * __thiscall FUN_005d74e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005d7510 @ 005d7510 ////

int * __cdecl FUN_005d7510(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_005d7550 @ 005d7550 ////

undefined4 * __cdecl FUN_005d7550(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005d7590 @ 005d7590 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005d7590(void *this,undefined4 *param_1)

{
  if (_DAT_0104d7a0 - _DAT_0104d79c != 0.0) {
    FUN_00407070(param_1,(*(float *)((int)this + 0x8c) - _DAT_0104d79c) /
                         (_DAT_0104d7a0 - _DAT_0104d79c));
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_005d75f0 @ 005d75f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_005d75f0(float param_1)

{
  float10 fVar1;
  
  fVar1 = ((float10)param_1 - (float10)_DAT_0104d7d0) /
          ((float10)_DAT_0104d7d4 - (float10)_DAT_0104d7d0);
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_005d7640 @ 005d7640 ////

void __thiscall FUN_005d7640(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa8);
  return;
}


//// FUNCTION FUN_005d76a0 @ 005d76a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005d76a0(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0xb0) - _DAT_0104d7b0) / (_DAT_0104d7b4 - _DAT_0104d7b0);
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


//// FUNCTION FUN_005d7700 @ 005d7700 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005d7700(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0xb4) - _DAT_0104d7bc) / (_DAT_0104d7c0 - _DAT_0104d7bc);
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


//// FUNCTION FUN_005d7760 @ 005d7760 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005d7760(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0xb8) - _DAT_0104d7c4) / (_DAT_0104d7c8 - _DAT_0104d7c4);
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


//// FUNCTION FUN_005d7800 @ 005d7800 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005d7800(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float local_8;
  undefined1 local_4 [4];
  
  local_8 = 1.0;
  if (*(int *)(param_1 + 0x74) != 0) {
    piVar1 = (int *)FUN_004df220(*(int *)(param_1 + 0x74));
    if (piVar1 != (int *)0x0) {
      pfVar2 = (float *)(**(code **)(*piVar1 + 0xb8))(local_4);
      local_8 = *pfVar2;
    }
  }
  return ((float10)_DAT_0104d7c0 - (float10)_DAT_0104d7bc) * (float10)local_8 +
         (float10)_DAT_0104d7bc;
}


//// FUNCTION FUN_005d78a0 @ 005d78a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005d78a0(int *param_1,int *param_2)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  
  if ((param_1 != param_2) && ((param_1 != (int *)0x0 || (param_2 != (int *)0x0)))) {
    fVar1 = _DAT_00e54b38 - _DAT_00e54b34;
    pfVar2 = (float *)FUN_00597820((float *)&param_2,param_1,param_2);
    fVar3 = (float10)fVar1 * (float10)*pfVar2;
    if (fVar3 < (float10)0.0) {
      return (float10)0.0 + (float10)_DAT_00e54b34;
    }
    if ((float10)1.0 < fVar3) {
      fVar3 = (float10)1.0;
    }
    return fVar3 + (float10)_DAT_00e54b34;
  }
  return (float10)_DAT_00e54b30;
}


//// FUNCTION FUN_005d7920 @ 005d7920 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005d7920(int *param_1)

{
  float *pfVar1;
  float10 fVar2;
  
  if (param_1 == (int *)0x0) {
    fVar2 = (float10)_DAT_00e54b3c;
  }
  else {
    pfVar1 = (float *)(**(code **)(*param_1 + 0x1e4))(&param_1);
    fVar2 = ((float10)_DAT_00e54b40 - (float10)_DAT_00e54b3c) * (float10)*pfVar1 +
            (float10)_DAT_00e54b3c;
    if (*pfVar1 < _DAT_00e53304) {
      return fVar2 * (float10)_DAT_00e54b44;
    }
  }
  return fVar2;
}


//// FUNCTION FUN_005d7980 @ 005d7980 ////

void __thiscall FUN_005d7980(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x90);
  return;
}


//// FUNCTION FUN_005d7990 @ 005d7990 ////

undefined4 __fastcall FUN_005d7990(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}


//// FUNCTION CStar_GetMoodPerformanceFactor @ 005d79a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 CStar_GetMoodPerformanceFactor(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 fVar8;
  int **ppiVar9;
  undefined4 uStack_c;
  float local_8;
  float fStack_4;
  
  piVar2 = param_1;
  local_8 = (1.0 - (_DAT_0104d7cc + _DAT_0104d7cc)) * 0.33333334;
  iVar3 = (**(code **)(*param_1 + 0x27c))();
  iVar3 = FUN_004725b0(iVar3);
  FUN_00566e40(iVar3);
  fStack_4 = (float)extraout_ST0;
  ppiVar9 = &param_1;
  pvVar4 = (void *)(**(code **)(*piVar2 + 0x27c))();
  puVar5 = CProjectCastEffect_GetEffectiveLowerMoodThreshold(pvVar4,ppiVar9);
  param_1 = (int *)*puVar5;
  puVar5 = &uStack_c;
  pvVar4 = (void *)(**(code **)(*piVar2 + 0x27c))();
  pfVar6 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(pvVar4,puVar5);
  fVar1 = *pfVar6;
  if ((((((float)param_1 < 0.0) || (1.0 < (float)param_1)) || (fVar1 < 0.0)) ||
      ((1.0 < fVar1 || (fVar7 = (float10)fStack_4, fVar7 < (float10)0.0)))) ||
     ((float10)1.0 < fVar7)) {
    return (float10)_DAT_0104d79c;
  }
  if (((float)param_1 <= 0.0) || ((float10)(float)param_1 <= fVar7)) {
    if ((fVar1 <= 0.0) || ((float10)fVar1 <= fVar7)) {
      if (fVar1 == 1.0) goto LAB_005d7b5e;
      fVar8 = (float10)1.0 - (float10)local_8;
      fVar7 = ((float10)1.0 - fVar8) * ((fVar7 - (float10)fVar1) / ((float10)1.0 - (float10)fVar1));
    }
    else {
      fVar8 = (float10)0.0;
      if ((fVar1 != (float)param_1) && ((float)param_1 != 0.0)) {
        fVar8 = ((float10)fStack_4 - (float10)(float)param_1) /
                ((float10)fVar1 - (float10)(float)param_1);
      }
      fVar7 = (float10)_DAT_0104d7cc + (float10)local_8;
      fVar8 = (((float10)1.0 - fVar7) - fVar7) * fVar8;
    }
    fVar7 = fVar7 + fVar8;
  }
  else {
    fVar7 = (fVar7 / (float10)(float)param_1) * (float10)local_8;
  }
LAB_005d7b5e:
  return ((float10)_DAT_0104d7a0 - (float10)_DAT_0104d79c) * fVar7 + (float10)_DAT_0104d79c;
}


//// FUNCTION FUN_005d7b90 @ 005d7b90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005d7b90(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  float10 fVar6;
  
  piVar2 = (int *)FUN_005b2780(*(int *)(*(int *)(param_1 + 0x74) + 0xb4));
  piVar1 = param_2;
  if (param_2 == piVar2) {
    return (float10)1.0;
  }
  param_2 = (int *)0x0;
  pvVar3 = (void *)FUN_00ace790(piVar1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                &TM::CStar::RTTI_Type_Descriptor,0);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)FUN_00ace790(piVar1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                  &TM::CExtra::RTTI_Type_Descriptor,0);
    if (pvVar3 == (void *)0x0) goto LAB_005d7c56;
    pvVar4 = (void *)FUN_005b6b90(*(int *)(*(int *)(param_1 + 0x74) + 0xb4));
    puVar5 = (undefined4 *)FUN_0056f940(pvVar3,&param_2,pvVar4);
  }
  else {
    pvVar4 = (void *)FUN_005b6b90(*(int *)(*(int *)(param_1 + 0x74) + 0xb4));
    puVar5 = (undefined4 *)FUN_005882e0(pvVar3,(float)&param_2,pvVar4);
  }
  param_2 = (int *)*puVar5;
LAB_005d7c56:
  fVar6 = ((float10)_DAT_0104d7a8 - (float10)_DAT_0104d7a4) * (float10)(float)param_2;
  if (fVar6 < (float10)0.0) {
    return (float10)0.0 + (float10)_DAT_0104d7a4;
  }
  if ((float10)1.0 < fVar6) {
    fVar6 = (float10)1.0;
  }
  return fVar6 + (float10)_DAT_0104d7a4;
}


//// FUNCTION FUN_005d7cb0 @ 005d7cb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005d7cb0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  float10 fVar6;
  
  piVar2 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
  piVar1 = param_2;
  if (param_2 == piVar2) {
    return (float10)1.0;
  }
  param_2 = (int *)0x0;
  pvVar3 = (void *)FUN_00ace790(piVar1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                &TM::CStar::RTTI_Type_Descriptor,0);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)FUN_00ace790(piVar1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                  &TM::CExtra::RTTI_Type_Descriptor,0);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = (void *)FUN_005b6b90(*(int *)(param_1 + 0x8c));
      puVar5 = (undefined4 *)FUN_0056f940(pvVar3,&param_2,pvVar4);
      param_2 = (int *)*puVar5;
    }
  }
  else {
    pvVar4 = (void *)FUN_005b6b90(*(int *)(param_1 + 0x8c));
    puVar5 = (undefined4 *)FUN_005882e0(pvVar3,(float)&param_2,pvVar4);
    param_2 = (int *)*puVar5;
  }
  fVar6 = ((float10)_DAT_0104d7a8 - (float10)_DAT_0104d7a4) * (float10)(float)param_2;
  if (fVar6 < (float10)0.0) {
    return (float10)0.0 + (float10)_DAT_0104d7a4;
  }
  if ((float10)1.0 < fVar6) {
    fVar6 = (float10)1.0;
  }
  return fVar6 + (float10)_DAT_0104d7a4;
}


//// FUNCTION FUN_005d7f30 @ 005d7f30 ////

void __cdecl FUN_005d7f30(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_005d7f90 @ 005d7f90 ////

void __fastcall FUN_005d7f90(int *param_1)

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
  puStack_8 = &LAB_00cb7bc8;
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


//// FUNCTION FUN_005d8060 @ 005d8060 ////

void __fastcall FUN_005d8060(int param_1)

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
  puStack_8 = &LAB_00cb7c18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("PStaff");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("Overall");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x40),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 2;
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
  uVar3 = FUN_0098b490("OverallUnweighted");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x50));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("StaffExperience");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x44),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x24;
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
  uVar3 = FUN_0098b490("StaffMood");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x54),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x25;
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
  uVar3 = FUN_0098b490("StaffGenreFit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x48),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x26;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("StarRating");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4c),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005d8690 @ 005d8690 ////

void __fastcall FUN_005d8690(int *param_1)

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
  puStack_8 = &LAB_00cb7c38;
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


//// FUNCTION FUN_005d87a0 @ 005d87a0 ////

float10 __thiscall FUN_005d87a0(int param_1,int *param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *pvVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  int *piVar14;
  float local_8;
  float local_4;
  
  iVar11 = *(int *)(*(int *)(param_1 + 0x74) + 0x194);
  fVar8 = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  fVar9 = local_4;
  if (iVar11 != *(int *)(param_1 + 0x74) + 0x1a0) {
    do {
      iVar3 = FUN_0048c9f0(*(int *)(iVar11 + 8));
      if (iVar3 != 0) {
        iVar3 = FUN_0048c9f0(*(int *)(iVar11 + 8));
        uVar4 = FUN_005a6140(iVar3);
        if ((char)uVar4 != '\0') {
          iVar13 = 0;
          pTVar12 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar10 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar3 = 0;
          piVar5 = (int *)FUN_0048c950(*(int *)(iVar11 + 8));
          piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar10,pTVar12,iVar13);
          if (((piVar5 != (int *)0x0) && (piVar5 != param_2)) &&
             (cVar1 = (**(code **)(*piVar5 + 0x13c))(), cVar1 != '\0')) {
            iVar3 = FUN_005873c0((int)piVar5);
            bVar2 = FUN_0042a720(iVar3);
            if (bVar2) {
              pfVar7 = &local_4;
              piVar14 = param_2;
              pvVar6 = (void *)FUN_005873c0((int)piVar5);
              pfVar7 = FUN_0042e910(pvVar6,pfVar7,(int)piVar14);
              local_8 = local_8 + *pfVar7;
              fVar8 = (float)((int)fVar8 + 1);
            }
          }
        }
      }
      iVar11 = *(int *)(iVar11 + 4);
      fVar9 = fVar8;
    } while (iVar11 != *(int *)(param_1 + 0x74) + 0x1a0);
  }
  local_4 = fVar9;
  fVar9 = local_4;
  if (param_3 == '\0') {
    iVar3 = 0;
    pTVar12 = &TM::CStar::RTTI_Type_Descriptor;
    pTVar10 = &TM::CStaff::RTTI_Type_Descriptor;
    iVar11 = 0;
    piVar5 = (int *)FUN_005b2780(*(int *)(*(int *)(param_1 + 0x74) + 0xb4));
    iVar11 = FUN_00ace790(piVar5,iVar11,pTVar10,pTVar12,iVar3);
    if ((iVar11 != 0) && (iVar3 = FUN_005873c0(iVar11), iVar3 != 0)) {
      iVar3 = FUN_005873c0(iVar11);
      bVar2 = FUN_0042a720(iVar3);
      if (bVar2) {
        pfVar7 = (float *)&param_3;
        pvVar6 = (void *)FUN_005873c0(iVar11);
        pfVar7 = FUN_0042e910(pvVar6,pfVar7,(int)param_2);
        fVar9 = (float)((int)fVar9 + 2);
        local_8 = *pfVar7 + *pfVar7 + local_8;
        local_4 = fVar9;
      }
    }
  }
  if (fVar9 == 0.0) {
    return (float10)0.5;
  }
  return (float10)local_8 / (float10)(int)local_4;
}


//// FUNCTION FUN_005d8920 @ 005d8920 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005d8920(int param_1)

{
  void *this;
  float *pfVar1;
  undefined4 *puVar2;
  char **ppcVar3;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7c58;
  local_c = ExceptionList;
  if (param_1 == 0) {
    return (float10)_DAT_00e54b20;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"Stunts",6);
  local_28 = 6;
  local_2c[6] = '\0';
  ppcVar3 = &local_2c;
  puVar2 = &local_30;
  local_4 = 0;
  this = (void *)FUN_00577370(param_1);
  pfVar1 = (float *)FUN_00441750(this,puVar2,ppcVar3);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return ((float10)_DAT_00e54b24 - (float10)_DAT_00e54b20) * (float10)*pfVar1 +
         (float10)_DAT_00e54b20;
}


//// FUNCTION FUN_005d8ab0 @ 005d8ab0 ////

void __fastcall FUN_005d8ab0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2bd54;
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


//// FUNCTION FUN_005d8bb0 @ 005d8bb0 ////

undefined4 * __thiscall FUN_005d8bb0(void *this,byte param_1)

{
  FUN_005d8ab0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005d8bd0 @ 005d8bd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005d8bd0(int *param_1,int *param_2,float param_3,char param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (_DAT_00e54b2c - _DAT_00e54b28) * param_3;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = _DAT_00e54b28 + fVar1;
  if (param_4 == '\0') {
    _param_4 = DAT_00e54b48;
  }
  else {
    _param_4 = DAT_00e54b4c;
  }
  fVar2 = FUN_005d78a0(param_1,param_2);
  fVar3 = FUN_005d7920(param_2);
  fVar4 = FUN_005d8920((int)param_2);
  return fVar4 * (float10)(float)(fVar3 * (float10)(float)fVar2) * (float10)fVar1 *
         (float10)_param_4;
}


//// FUNCTION FUN_005d8c80 @ 005d8c80 ////

float10 __thiscall FUN_005d8c80(int param_1,int *param_2,char param_3)

{
  float fVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  void *pvVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  int iVar14;
  int *piVar15;
  float local_8;
  float local_4;
  
  fVar10 = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  iVar4 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  fVar1 = local_4;
  if (iVar4 != 0) {
    iVar4 = FUN_005b2220(*(int *)(param_1 + 0x8c));
    iVar4 = *(int *)(iVar4 + 100);
    iVar5 = FUN_005b2220(*(int *)(param_1 + 0x8c));
    fVar1 = local_4;
    if (iVar4 != *(int *)(iVar5 + 0x68)) {
      do {
        iVar5 = *(int *)(iVar4 + 0x14);
        if ((iVar5 != 0) && (uVar6 = FUN_005a6140(iVar5), (char)uVar6 != '\0')) {
          iVar14 = 0;
          pTVar13 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar12 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar11 = 0;
          piVar7 = (int *)FUN_005a6470(iVar5);
          piVar7 = (int *)FUN_00ace790(piVar7,iVar11,pTVar12,pTVar13,iVar14);
          if ((piVar7 != (int *)0x0) &&
             ((piVar7 != param_2 && (cVar2 = (**(code **)(*piVar7 + 0x13c))(), cVar2 != '\0')))) {
            iVar5 = FUN_005873c0((int)piVar7);
            bVar3 = FUN_0042a720(iVar5);
            if (bVar3) {
              pfVar9 = &local_4;
              piVar15 = param_2;
              pvVar8 = (void *)FUN_005873c0((int)piVar7);
              pfVar9 = FUN_0042e910(pvVar8,pfVar9,(int)piVar15);
              local_8 = local_8 + *pfVar9;
              fVar10 = (float)((int)fVar10 + 1);
            }
          }
        }
        iVar4 = iVar4 + 0x18;
        iVar5 = FUN_005b2220(*(int *)(param_1 + 0x8c));
        fVar1 = fVar10;
      } while (iVar4 != *(int *)(iVar5 + 0x68));
    }
  }
  local_4 = fVar1;
  if (param_3 == '\0') {
    iVar5 = 0;
    pTVar13 = &TM::CStar::RTTI_Type_Descriptor;
    pTVar12 = &TM::CStaff::RTTI_Type_Descriptor;
    iVar4 = 0;
    piVar7 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
    iVar4 = FUN_00ace790(piVar7,iVar4,pTVar12,pTVar13,iVar5);
    if ((iVar4 != 0) && (iVar5 = FUN_005873c0(iVar4), iVar5 != 0)) {
      iVar5 = FUN_005873c0(iVar4);
      bVar3 = FUN_0042a720(iVar5);
      if (bVar3) {
        pfVar9 = (float *)&param_3;
        pvVar8 = (void *)FUN_005873c0(iVar4);
        pfVar9 = FUN_0042e910(pvVar8,pfVar9,(int)param_2);
        fVar10 = (float)((int)fVar10 + 2);
        local_8 = *pfVar9 + *pfVar9 + local_8;
        local_4 = fVar10;
      }
    }
  }
  if (fVar10 == 0.0) {
    return (float10)0.5;
  }
  return (float10)local_8 / (float10)(int)local_4;
}


