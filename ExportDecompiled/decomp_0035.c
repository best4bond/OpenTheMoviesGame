//// FUNCTION FUN_008c1950 @ 008c1950 ////

undefined1 FUN_008c1950(void)

{
  return DAT_01050374;
}


//// FUNCTION FUN_008c1a90 @ 008c1a90 ////

undefined4 * __thiscall FUN_008c1a90(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
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
  puStack_8 = &LAB_00ced2b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008be6d0(this,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d652d4;
  *(undefined4 *)((int)this + 0xe8) = 0x40000000;
  FUN_004015d0((void *)((int)this + 0x124),"ui/button_move.dds",0x12);
  FUN_004015d0((void *)((int)this + 0x144),"ui/button_move_h.dds",0x14);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"TOOLTIP_DROPICON_MOVE",0x15);
  local_48 = 0x15;
  local_4c[0x15] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_004015d0((void *)((int)this + 0xb0),"move",4);
  iVar1 = *(int *)((int)this + 0x1bc);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(iVar1 + 0x218);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(iVar1 + 0x21c);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(iVar1 + 0x220);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(iVar1 + 0x218);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(iVar1 + 0x21c);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(iVar1 + 0x220);
  *(undefined1 *)((int)this + 0x186) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008c1bf0 @ 008c1bf0 ////

undefined4 * __thiscall FUN_008c1bf0(void *this,byte param_1)

{
  thunk_FUN_008be750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c1cb0 @ 008c1cb0 ////

void FUN_008c1cb0(void)

{
  if (DAT_0105038c != (int *)0x0) {
    (**(code **)(*DAT_0105038c + 0x5c))();
    *(undefined1 *)(DAT_0105038c + 0x87) = 0;
    (*(code *)DAT_01050378[1])();
    DAT_0105038c = (int *)0x0;
                    /* WARNING: Could not recover jumptable at 0x008c1cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_01050378)();
    return;
  }
  return;
}


//// FUNCTION FUN_008c1d00 @ 008c1d00 ////

undefined4 __fastcall FUN_008c1d00(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x244) + 0xc4))();
  if ((char)uVar1 == '\0') {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x244) + 0x16c))();
    if ((char)uVar1 != '\0') {
      iVar2 = FUN_00ace790(DAT_0104c6c8,0,&TM::TMMobile::RTTI_Type_Descriptor,
                           &TM::CProjectObject::RTTI_Type_Descriptor,0);
      uVar1 = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_005d1940(iVar2);
        uVar1 = 0;
        if (iVar3 != 0) {
          iVar3 = FUN_004cba90(*(int *)(param_1 + 0x244));
          uVar1 = 0;
          if (iVar3 != 0) {
            iVar3 = *(int *)(param_1 + 0x244);
            iVar2 = FUN_005d1940(iVar2);
            uVar4 = FUN_005b25d0(iVar2);
            uVar1 = FUN_004cba90(iVar3);
            if (uVar1 != uVar4) goto LAB_008c1d8c;
          }
          return CONCAT31((int3)(uVar1 >> 8),1);
        }
      }
LAB_008c1d8c:
      return uVar1 & 0xffffff00;
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_008c1ec0 @ 008c1ec0 ////

int __cdecl FUN_008c1ec0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    iVar2 = FUN_005b25d0(param_1);
    if (iVar2 == 0) {
      FUN_005b3c50(param_1);
    }
    else {
      iVar2 = FUN_004df220(iVar2);
      if ((iVar2 != 0) && (puVar3 = DAT_01050398, DAT_01050398 != &DAT_010503a4)) {
        while ((iVar1 = puVar3[2], iVar1 == 0 || (*(int *)(iVar1 + 0x244) != iVar2))) {
          puVar3 = (undefined4 *)puVar3[1];
          if (puVar3 == &DAT_010503a4) {
            return 0;
          }
        }
        (*(code *)DAT_01050378[1])();
        DAT_0105038c = iVar1;
        (*(code *)*DAT_01050378)();
        *(undefined1 *)(iVar1 + 0x21c) = 1;
        return iVar1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_008c1f50 @ 008c1f50 ////

undefined4 * __thiscall
FUN_008c1f50(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,uint param_7,uint param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  void *this_00;
  int *in_stack_00000038;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ced2f4;
  local_c = ExceptionList;
  pcVar5 = &stack0xffffff84;
  local_4 = 0;
  uVar7 = 0;
  uVar8 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffff78,param_6,param_7);
  CRoomPointExplainer_Constructor
            (this,param_1,param_2,param_3,param_4,*(undefined4 *)((int)this + 0x1b8),pcVar5,uVar7,
             uVar8);
  piVar3 = (int *)((int)this + 0x220);
  *(undefined ***)this = &PTR_FUN_00d65384;
  *(undefined1 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *piVar3 = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  piVar1 = (int *)((int)this + 0x234);
  *(undefined4 *)((int)this + 0x23c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 **)((int)this + 0x23c) = (undefined4 *)((int)this + 0x230);
  *(undefined4 *)((int)this + 0x230) = &PTR_LAB_00d1e3c4;
  *(int **)((int)this + 0x244) = in_stack_00000038;
  if (in_stack_00000038 != (int *)0x0) {
    piVar2 = in_stack_00000038 + 6;
    *(int **)((int)this + 0x238) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  *(void **)((int)this + 0x228) = this;
  FUN_00acdb9e(0xe5f0f8);
  iVar4 = FUN_0097dda0();
  *(int *)((int)this + 0x22c) = iVar4;
  if (DAT_00e5f0f4 != '\0') {
    iVar4 = 0x220;
    pcVar9 = "NextShotLink";
    pcVar5 = (char *)FUN_00acdb9e(0xe5f0f8);
    FUN_0097df60(pcVar5,pcVar9,iVar4);
    DAT_00e5f0f4 = '\0';
  }
  *(int ***)((int)this + 0x224) = &DAT_010503a4;
  *piVar3 = (int)DAT_010503a4;
  local_4c = local_40;
  *(int **)((int)DAT_010503a4 + 4) = piVar3;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  DAT_010503a4 = piVar3;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"SITT_ACTION_ADVANCEROOM_SHOOT",0x1d);
  local_48 = 0x1d;
  local_4c[0x1d] = '\0';
  local_4._0_1_ = 4;
  puVar6 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar6,puVar6[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  *(undefined1 *)((int)this + 0x1ef) = 0;
  *(undefined1 *)((int)this + 0x1f0) = 1;
  if (in_stack_00000038 != (int *)0x0) {
    iVar4 = FUN_005295b0(in_stack_00000038);
    if (iVar4 != 0) {
      uVar7 = 0;
      this_00 = (void *)FUN_005295b0(in_stack_00000038);
      iVar4 = FUN_00938cc0(this_00,uVar7);
      if (iVar4 != 0) {
        FUN_009318b0(this,iVar4);
      }
    }
  }
  *(undefined4 *)((int)this + 0xe8) = 0x3fcccccd;
  if (0x14 < param_8) {
                    /* WARNING: Subroutine does not return */
    _free(param_6);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008c2210 @ 008c2210 ////

void __fastcall FUN_008c2210(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d65384;
  if ((undefined4 *)param_1[0x89] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x89] = param_1[0x88];
  }
  if (param_1[0x88] != 0) {
    *(undefined4 *)(param_1[0x88] + 4) = param_1[0x89];
  }
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = &PTR_LAB_00d1e3c4;
  if ((undefined4 *)param_1[0x8e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8e] = param_1[0x8d];
  }
  if (param_1[0x8d] != 0) {
    *(undefined4 *)(param_1[0x8d] + 4) = param_1[0x8e];
  }
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  if ((undefined4 *)param_1[0x8e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8e] = param_1[0x8d];
  }
  if (param_1[0x8d] != 0) {
    *(undefined4 *)(param_1[0x8d] + 4) = param_1[0x8e];
  }
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  if ((undefined4 *)param_1[0x89] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x89] = param_1[0x88];
  }
  if (param_1[0x88] != 0) {
    *(undefined4 *)(param_1[0x88] + 4) = param_1[0x89];
  }
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  CRoomPointExplainer_Destructor(param_1);
  return;
}


//// FUNCTION FUN_008c2300 @ 008c2300 ////

undefined4 * __thiscall FUN_008c2300(void *this,byte param_1)

{
  FUN_008c2210(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c2320 @ 008c2320 ////

void __fastcall FUN_008c2320(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6540c;
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


//// FUNCTION FUN_008c2370 @ 008c2370 ////

undefined4 * __thiscall FUN_008c2370(void *this,byte param_1)

{
  FUN_008c2320(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c2390 @ 008c2390 ////

void __fastcall FUN_008c2390(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6540c;
  return;
}


//// FUNCTION FUN_008c2410 @ 008c2410 ////

undefined4 __thiscall FUN_008c2410(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x1bc) != 0) {
    uVar1 = FUN_00495bf0(*(int *)((int)this + 0x1bc));
    if ((char)uVar1 == '\0') goto LAB_008c2461;
  }
  uVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x1bc) + 0x164) + 0xc4))();
  if (((char)uVar1 == '\0') && (*(int *)(param_1 + 0x4c4) < 8)) {
    uVar2 = FUN_005773c0(param_1);
    uVar1 = GetPlayerStudio();
    if (uVar2 == uVar1) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
LAB_008c2461:
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_008c2470 @ 008c2470 ////

undefined4 * __thiscall
FUN_008c2470(void *this,undefined4 param_1,char *param_2,uint param_3,uint param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ced354;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_008c10f0(this);
  piVar1 = (int *)((int)this + 0x1a8);
  *(undefined ***)this = &PTR_FUN_00d6547c;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(int **)((int)this + 0x1b4) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165ec;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = (undefined1 *)((int)this + 0x1cc);
  *(undefined1 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0x14;
  local_4._0_1_ = 3;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x1bc) = param_1;
  (**(code **)*piVar1)();
  *(undefined4 *)((int)this + 0xe8) = 0x40800000;
  FUN_004015d0((undefined4 *)((int)this + 0x1c0),param_2,param_3);
  FUN_004015d0((void *)((int)this + 0x124),"ui/button_queuebarge.dds",0x18);
  FUN_004015d0((void *)((int)this + 0x144),"ui/button_queuebarge_h.dds",0x1a);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"TOOLTIP_DROPICON_FORCEQUEUE",0x1b);
  local_48 = 0x1b;
  local_4c[0x1b] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  puVar2 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_004015d0((void *)((int)this + 0xb0),"queue",5);
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008c2600 @ 008c2600 ////

void __thiscall FUN_008c2600(void *this,int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  float fVar8;
  char **ppcVar9;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced384;
  local_c = ExceptionList;
  bVar1 = false;
  ExceptionList = &local_c;
  iVar3 = FUN_0059c530((int)param_1);
  if (iVar3 != 0) {
    fVar8 = 1.0;
    pvVar4 = (void *)FUN_0059c530((int)param_1);
    FUN_00842f90(pvVar4,fVar8);
  }
  CQueue_RefreshEntryPointPosition(*(void **)((int)this + 0x1bc),param_1);
  if (*(int *)(*(int *)((int)this + 0x1bc) + 0x164) != 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"facility_catering1",0x12);
    local_28 = 0x12;
    local_2c[0x12] = '\0';
    ppcVar9 = &local_2c;
    local_4 = 0;
    bVar1 = true;
    puVar5 = (undefined4 *)FUN_00528450(*(int *)(*(int *)((int)this + 0x1bc) + 0x164));
    uVar6 = FUN_00401ec0(puVar5,ppcVar9);
    bVar2 = true;
    if ((char)uVar6 != '\0') goto LAB_008c26f0;
  }
  bVar2 = false;
LAB_008c26f0:
  local_4 = 0xffffffff;
  if ((bVar1) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar2) {
    piVar7 = (int *)FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
    if (piVar7 != (int *)0x0) {
      pvVar4 = operator_new(0x160);
      local_4 = 1;
      if (pvVar4 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = CastingPerkPip_Constructor(pvVar4,10,piVar7,0);
      }
      local_4 = 0xffffffff;
      FUN_00956840(DAT_010507c0,piVar7);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008c2790 @ 008c2790 ////

undefined4 * __thiscall FUN_008c2790(void *this,byte param_1)

{
  FUN_008c27b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c27b0 @ 008c27b0 ////

void __fastcall FUN_008c27b0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x72]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x70]);
  }
  param_1[0x6a] = &PTR_FUN_00d165ec;
  if ((undefined4 *)param_1[0x6c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6c] = param_1[0x6b];
  }
  if (param_1[0x6b] != 0) {
    *(undefined4 *)(param_1[0x6b] + 4) = param_1[0x6c];
  }
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  if ((undefined4 *)param_1[0x6c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6c] = param_1[0x6b];
  }
  if (param_1[0x6b] != 0) {
    *(undefined4 *)(param_1[0x6b] + 4) = param_1[0x6c];
  }
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  FUN_008c0d90(param_1);
  return;
}


//// FUNCTION FUN_008c2860 @ 008c2860 ////

float10 __thiscall FUN_008c2860(int param_1,int param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_00598ee0(param_2);
    if ((char)uVar1 != '\0') {
      return (float10)*(float *)(param_1 + 0xe8) * (float10)0.3;
    }
  }
  fVar2 = FUN_008c06e0(param_1);
  return fVar2;
}


//// FUNCTION FUN_008c2ab0 @ 008c2ab0 ////

undefined4 * __thiscall FUN_008c2ab0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
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
  puStack_8 = &LAB_00ced3a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008be6d0(this,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d65504;
  FUN_004015d0((void *)((int)this + 0x124),"ui/button_repair.dds",0x14);
  FUN_004015d0((void *)((int)this + 0x144),"ui/button_repair_h.dds",0x16);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"TOOLTIP_DROPICON_REPAIR",0x17);
  local_48 = 0x17;
  local_4c[0x17] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_004015d0((void *)((int)this + 0xb0),"repair",6);
  iVar1 = *(int *)((int)this + 0x1bc);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(iVar1 + 0x218);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(iVar1 + 0x21c);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(iVar1 + 0x220);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(iVar1 + 0x218);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(iVar1 + 0x21c);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(iVar1 + 0x220);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008c2c00 @ 008c2c00 ////

undefined4 * __thiscall FUN_008c2c00(void *this,byte param_1)

{
  thunk_FUN_008be750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c2c30 @ 008c2c30 ////

void __thiscall FUN_008c2c30(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x164))();
  if (cVar2 == '\0') {
    iVar1 = *param_1;
    uVar4 = 1;
    uVar3 = FUN_0059bb90((int)param_1);
    (**(code **)(iVar1 + 0x128))(uVar3,uVar4);
    FUN_008b7ea0(this,param_1);
  }
  return;
}


//// FUNCTION FUN_008c2c70 @ 008c2c70 ////

uint __thiscall FUN_008c2c70(void *this,int *param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar2 = (**(code **)(*(int *)this + 0x38))();
  if ((char)uVar2 != '\0') {
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x34))();
    FUN_009840b0(&stack0xffffffc0,puVar3);
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    (**(code **)(**(int **)(*(int *)((int)this + 0x1bc) + 0x124) + 0xd8))(&uStack_20,param_1);
    uStack_34 = uStack_28;
    uStack_30 = uStack_24;
    uStack_2c = uStack_20;
    FUN_009840b0(&stack0xffffffc0,&uStack_34);
    fVar1 = SQRT(((float)&uStack_34 - unaff_EDI) * ((float)&uStack_34 - unaff_EDI) +
                 ((float)param_1 - unaff_ESI) * ((float)param_1 - unaff_ESI));
    uVar2 = CONCAT22(extraout_var,
                     (ushort)(fVar1 < 4.0) << 8 | (ushort)NAN(fVar1) << 10 |
                     (ushort)(fVar1 == 4.0) << 0xe);
    if (fVar1 < 4.0) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_008c2dd0 @ 008c2dd0 ////

undefined4 __thiscall FUN_008c2dd0(void *this,int *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined3 extraout_var;
  
  iVar3 = FUN_004d6c00(*(int *)((int)this + 0x1bc));
  uVar5 = 0;
  if ((iVar3 != 0) && (uVar5 = *(uint *)((int)this + 0x1bc), *(int *)(uVar5 + 0x124) != 0)) {
    piVar4 = (int *)FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                 &TM::CStaff::RTTI_Type_Descriptor,0);
    uVar5 = 0;
    if (piVar4 != (int *)0x0) {
      uVar1 = *(uint *)((int)this + 0x1bc);
      uVar5 = (**(code **)(*piVar4 + 0x1ec))();
      if (uVar5 == uVar1) {
        bVar2 = FUN_0059c510((int)piVar4);
        uVar5 = CONCAT31(extraout_var,bVar2);
        if (bVar2) {
          return CONCAT31(extraout_var,1);
        }
      }
    }
  }
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_008c2e70 @ 008c2e70 ////

undefined4 * __thiscall FUN_008c2e70(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
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
  puStack_8 = &LAB_00ced3dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008c10f0(this);
  piVar1 = (int *)((int)this + 0x1a8);
  *(undefined ***)this = &PTR_FUN_00d655c4;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(int **)((int)this + 0x1b4) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1f03c;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 **)((int)this + 0x1cc) = (undefined4 *)((int)this + 0x1c0);
  *(undefined4 *)((int)this + 0x1c0) = &PTR_FUN_00d6513c;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x1bc) = param_1;
  (**(code **)*piVar1)();
  FUN_004015d0((void *)((int)this + 100),"readyposition",0xd);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"TOOLTIP_DROPICON_SHOOT",0x16);
  local_48 = 0x16;
  local_4c[0x16] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar2 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_004015d0((void *)((int)this + 0x124),"ui/button_rehearse.dds",0x16);
  FUN_004015d0((void *)((int)this + 0x144),"ui/button_rehearse_h.dds",0x18);
  FUN_004015d0((void *)((int)this + 0xb0),"shoot",5);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008c2fe0 @ 008c2fe0 ////

undefined4 * __thiscall FUN_008c2fe0(void *this,byte param_1)

{
  FUN_008c3000(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c3000 @ 008c3000 ////

void __fastcall FUN_008c3000(undefined4 *param_1)

{
  param_1[0x70] = &PTR_FUN_00d6513c;
  if ((undefined4 *)param_1[0x72] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x72] = param_1[0x71];
  }
  if (param_1[0x71] != 0) {
    *(undefined4 *)(param_1[0x71] + 4) = param_1[0x72];
  }
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  if ((undefined4 *)param_1[0x72] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x72] = param_1[0x71];
  }
  if (param_1[0x71] != 0) {
    *(undefined4 *)(param_1[0x71] + 4) = param_1[0x72];
  }
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x6a] = &PTR_FUN_00d1f03c;
  if ((undefined4 *)param_1[0x6c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6c] = param_1[0x6b];
  }
  if (param_1[0x6b] != 0) {
    *(undefined4 *)(param_1[0x6b] + 4) = param_1[0x6c];
  }
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = 0;
  if ((undefined4 *)param_1[0x6c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x6c] = param_1[0x6b];
  }
  if (param_1[0x6b] != 0) {
    *(undefined4 *)(param_1[0x6b] + 4) = param_1[0x6c];
  }
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  FUN_008c0d90(param_1);
  return;
}


//// FUNCTION FUN_008c3160 @ 008c3160 ////

bool __thiscall FUN_008c3160(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *unaff_EBX;
  uint local_30;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ced408;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_008bc6c0(*(int *)((int)this + 0x1bc));
  if ((piVar3 != (int *)0x0) &&
     (pfVar4 = (float *)(**(code **)(*piVar3 + 0xf0))(&local_30), *pfVar4 != 1.0)) {
    ExceptionList = pvStack_c;
    return false;
  }
  iVar1 = param_1;
  iVar5 = FUN_008be630(this,param_1,'\x01');
  if ((char)iVar5 == '\0') {
    cVar2 = (**(code **)(*piVar3 + 0xc4))();
    if (cVar2 != '\0') {
      ExceptionList = pvStack_c;
      return false;
    }
    if (7 < *(int *)(iVar1 + 0x4c4)) {
      ExceptionList = pvStack_c;
      return false;
    }
    param_1 = 0;
    iVar5 = FUN_005773c0(iVar1);
    iVar6 = GetPlayerStudio();
    if (iVar5 != iVar6) {
      ExceptionList = pvStack_c;
      return false;
    }
    uVar7 = FUN_00598ee0(iVar1);
    if (((char)uVar7 != '\0') || (*(int *)(iVar1 + 0x4c4) == 2)) {
      FUN_00401de0(apvStack_2c,"stunttrain",0xffffffff);
      uStack_4 = 0;
      cVar2 = (**(code **)(**(int **)((int)this + 0x1bc) + 4))(&param_1,iVar1,apvStack_2c);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (cVar2 != '\0') {
        ExceptionList = pvStack_c;
        return true;
      }
    }
    uVar7 = FUN_00598ee0(iVar1);
    if ((char)uVar7 != '\0') {
      FUN_00401de0(apvStack_2c,"visittrailer",0xffffffff);
      uStack_4 = 1;
      cVar2 = (**(code **)(**(int **)((int)this + 0x1bc) + 4))(&param_1,iVar1,apvStack_2c);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if ((cVar2 != '\0') && (iVar5 = FUN_0084b200((int)piVar3), iVar5 == iVar1)) {
        ExceptionList = pvStack_c;
        return true;
      }
      FUN_00401de0(apvStack_2c,"propinteract",0xffffffff);
      uStack_4 = 2;
      cVar2 = (**(code **)(**(int **)((int)this + 0x1bc) + 4))(&param_1,iVar1,apvStack_2c);
      if (local_30 < 0x15) {
        ExceptionList = pvStack_18;
        return cVar2 != '\0';
      }
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
  }
  ExceptionList = pvStack_c;
  return false;
}


//// FUNCTION FUN_008c3380 @ 008c3380 ////

void __fastcall FUN_008c3380(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  char **ppcVar9;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  void *local_2c [2];
  uint local_24;
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced465;
  pvStack_c = ExceptionList;
  bVar8 = false;
  local_34 = 0;
  ExceptionList = &pvStack_c;
  FUN_008c08e0(param_1,param_2);
  local_38 = "stunttrain";
  local_30 = "urgent";
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_0048f010(&local_38,local_2c);
    iVar3 = *(int *)(param_1 + 0x1bc);
    local_4 = 0;
    bVar8 = true;
    local_34 = 1;
    uVar2 = FUN_00401ec0((undefined4 *)(iVar3 + 0x74),local_2c);
    if ((param_3[0x131] < 8 & (byte)uVar2) != 0) {
      iVar3 = FUN_008bc6c0(iVar3);
      bVar1 = true;
      if (iVar3 != 0) goto LAB_008c341d;
    }
  }
  bVar1 = false;
LAB_008c341d:
  local_4 = 0xffffffff;
  if ((bVar8) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (bVar1) {
    pvVar4 = operator_new(0x19c);
    local_4 = 1;
    if (pvVar4 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      iVar3 = FUN_008bc6c0(*(int *)(param_1 + 0x1bc));
      iVar5 = FUN_00ace790(param_3,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                           &TM::CStaff::RTTI_Type_Descriptor,0);
      puVar6 = DesireStuntTrain_Constructor(pvVar4,iVar5,iVar3);
    }
    local_4 = 0xffffffff;
    ppcVar9 = &local_38;
    pvVar4 = operator_new(0x160);
    local_4 = 2;
    if (pvVar4 == (void *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = CastingPerkPip_Constructor(pvVar4,0xe,param_3,0);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar7);
    pvVar4 = operator_new(0x160);
    local_4 = 3;
    if (pvVar4 == (void *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = CastingPerkPip_Constructor(pvVar4,0xf,param_3,0);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar7);
  }
  else {
    pvVar4 = operator_new(0x128);
    local_4 = 4;
    if (pvVar4 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = DesireUrgent_Constructor(pvVar4,param_3);
    }
    local_4 = 0xffffffff;
    ppcVar9 = &local_30;
  }
  TMCharacter_AddResidentDesire(param_3,(int)puVar6);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1bc) + 8))();
  if (iVar3 != 0) {
    piVar7 = param_3;
    pvVar4 = (void *)(**(code **)(**(int **)(param_1 + 0x1bc) + 0x10))();
    FUN_00497f40(pvVar4,(int)piVar7);
    *(uint *)(iVar3 + 0x210) = *(uint *)(iVar3 + 0x210) | 2;
    TMCharacter_AddAction(param_3,iVar3);
    puStack_8 = &stack0xffffffa8;
    FUN_0059c8e0(param_3,*ppcVar9);
    *(undefined4 *)(iVar3 + 0x240) = 2;
  }
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_008c35e0 @ 008c35e0 ////

uint __fastcall FUN_008c35e0(int param_1)

{
  uint uVar1;
  bool bVar2;
  void *local_20 [2];
  uint local_18;
  
  bVar2 = false;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_0048f010(&PTR_s_stunttrain_00e5f1f4,local_20);
    bVar2 = true;
    uVar1 = FUN_00401ec0((undefined4 *)(*(int *)(param_1 + 0x1bc) + 0x74),local_20);
    if ((char)uVar1 != '\0') {
      uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
      goto LAB_008c3637;
    }
  }
  uVar1 = uVar1 & 0xffffff00;
LAB_008c3637:
  if ((bVar2) && (0x14 < local_18)) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return uVar1;
}


//// FUNCTION FUN_008c3660 @ 008c3660 ////

undefined4 * __thiscall FUN_008c3660(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  size_t sVar5;
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
  puStack_8 = &LAB_00ced480;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008be6d0(this,param_1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d656b4;
  uVar2 = FUN_008c35e0((int)this);
  if ((char)uVar2 == '\0') {
    FUN_004073f0((void *)((int)this + 0x124),"ui/button_star.dds",0x12);
    sVar5 = 0x14;
    pcVar4 = "ui/button_star_h.dds";
  }
  else {
    FUN_004073f0((void *)((int)this + 0x124),"ui/button_stuntpractice.dds",0x1b);
    sVar5 = 0x1d;
    pcVar4 = "ui/button_stuntpractice_h.dds";
  }
  FUN_004073f0((void *)((int)this + 0x144),pcVar4,sVar5);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"TOOLTIP_DROPICON_INTERACT",0x19);
  local_48 = 0x19;
  local_4c[0x19] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar3 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_004015d0((void *)((int)this + 0xb0),"training",8);
  iVar1 = *(int *)((int)this + 0x1bc);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(iVar1 + 0x218);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(iVar1 + 0x21c);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(iVar1 + 0x220);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(iVar1 + 0x218);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(iVar1 + 0x21c);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(iVar1 + 0x220);
  *(undefined4 *)((int)this + 0x114) = 0x3ecccccd;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008c37e0 @ 008c37e0 ////

undefined4 * __thiscall FUN_008c37e0(void *this,byte param_1)

{
  thunk_FUN_008be750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c3810 @ 008c3810 ////

void __fastcall FUN_008c3810(int *param_1)

{
  undefined4 uVar1;
  
  FUN_008c09e0(param_1);
  if (param_1[0x39] != 0) {
    uVar1 = FUN_008c35e0((int)param_1);
    if ((char)uVar1 == '\0') {
      FUN_00789150((void *)param_1[0x39],0x3f000000);
    }
  }
  return;
}


//// FUNCTION FUN_008c3840 @ 008c3840 ////

void __fastcall FUN_008c3840(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d65724;
  return;
}


//// FUNCTION FUN_008c3900 @ 008c3900 ////

void __fastcall FUN_008c3900(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION GlobalStatRegistry_Get @ 008c3930 ////

undefined4 GlobalStatRegistry_Get(void)

{
                    /* CORRECTED (was GameProgressFlags_Get): this returns a much broader global
                       singleton than the name implied. It holds both simple boolean progress flags
                       (e.g. the AMM-tutorial-seen flags at +0x8f/+0x90/+0x91) AND, per FUN_0057e540
                       (renamed GlobalStatRegistry_RegisterAllStatDescriptors), a huge
                       self-describing catalog of ~100 named stat/mood/addiction/experience
                       descriptor objects ("attractiveness", "mood_work_stress", "addictions_food",
                       "experience_stunts", "star_genre_fit", etc), each with its own vtable (a
                       distinct getter implementation). Also touched by CResearchPack_Constructor
                       and ~90 other call sites. Treat this as a general-purpose global registry
                       singleton, not a narrow flags struct. */
  return DAT_010503d4;
}


//// FUNCTION FUN_008c3940 @ 008c3940 ////

undefined4 * __thiscall FUN_008c3940(void *this,byte param_1)

{
  FUN_009147b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c3960 @ 008c3960 ////

void * __thiscall FUN_008c3960(void *this,byte param_1)

{
  FUN_008f7390(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c3980 @ 008c3980 ////

int * __thiscall FUN_008c3980(void *this,byte param_1)

{
  FUN_00913f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c39a0 @ 008c39a0 ////

undefined4 __fastcall FUN_008c39a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


//// FUNCTION FUN_008c39b0 @ 008c39b0 ////

undefined1 __fastcall FUN_008c39b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x8c);
}


//// FUNCTION GameProgressFlags_HasSeenAMMIntro @ 008c39e0 ////

undefined1 __fastcall GameProgressFlags_HasSeenAMMIntro(int param_1)

{
  return *(undefined1 *)(param_1 + 0x8f);
}


//// FUNCTION GameProgressFlags_SetSeenAMMIntro @ 008c39f0 ////

void __fastcall GameProgressFlags_SetSeenAMMIntro(int param_1)

{
  *(undefined1 *)(param_1 + 0x8f) = 1;
  return;
}


//// FUNCTION GameProgressFlags_HasSeenAMMNewFeatures @ 008c3a00 ////

undefined1 __fastcall GameProgressFlags_HasSeenAMMNewFeatures(int param_1)

{
  return *(undefined1 *)(param_1 + 0x91);
}


//// FUNCTION GameProgressFlags_SetSeenAMMNewFeatures @ 008c3a10 ////

void __fastcall GameProgressFlags_SetSeenAMMNewFeatures(int param_1)

{
  *(undefined1 *)(param_1 + 0x91) = 1;
  return;
}


//// FUNCTION GameProgressFlags_HasSeenAMMStunt @ 008c3a20 ////

undefined1 __fastcall GameProgressFlags_HasSeenAMMStunt(int param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}


//// FUNCTION GameProgressFlags_SetSeenAMMStunt @ 008c3a30 ////

void __fastcall GameProgressFlags_SetSeenAMMStunt(int param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}


//// FUNCTION FUN_008c3ae0 @ 008c3ae0 ////

int * __thiscall FUN_008c3ae0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008c3bb0 @ 008c3bb0 ////

void __thiscall FUN_008c3bb0(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_008c3c70 @ 008c3c70 ////

void __thiscall FUN_008c3c70(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_008c4230 @ 008c4230 ////

void __thiscall FUN_008c4230(void *this,int *param_1)

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


//// FUNCTION FUN_008c42d0 @ 008c42d0 ////

void __thiscall FUN_008c42d0(void *this,int *param_1)

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


//// FUNCTION FUN_008c44d0 @ 008c44d0 ////

void __cdecl FUN_008c44d0(int param_1)

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


//// FUNCTION FUN_008c44f0 @ 008c44f0 ////

void __cdecl FUN_008c44f0(int *param_1)

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


//// FUNCTION FUN_008c4520 @ 008c4520 ////

void __cdecl FUN_008c4520(int param_1)

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


//// FUNCTION FUN_008c4540 @ 008c4540 ////

void __cdecl FUN_008c4540(int *param_1)

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


//// FUNCTION FUN_008c4570 @ 008c4570 ////

void __cdecl FUN_008c4570(int param_1)

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


//// FUNCTION FUN_008c4590 @ 008c4590 ////

void __cdecl FUN_008c4590(int *param_1)

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


//// FUNCTION FUN_008c45c0 @ 008c45c0 ////

void __cdecl FUN_008c45c0(int param_1)

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


//// FUNCTION FUN_008c45e0 @ 008c45e0 ////

void __cdecl FUN_008c45e0(int *param_1)

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


//// FUNCTION FUN_008c4620 @ 008c4620 ////

void __fastcall FUN_008c4620(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x39) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x39) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x39);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x39);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x39) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x39) == '\0');
    if (*(char *)((int)piVar4 + 0x39) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008c4680 @ 008c4680 ////

void __fastcall FUN_008c4680(int *param_1)

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


//// FUNCTION FUN_008c46e0 @ 008c46e0 ////

void __fastcall FUN_008c46e0(int *param_1)

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


//// FUNCTION FUN_008c4740 @ 008c4740 ////

void __fastcall FUN_008c4740(int *param_1)

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


//// FUNCTION FUN_008c47a0 @ 008c47a0 ////

void __fastcall FUN_008c47a0(int *param_1)

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


//// FUNCTION FUN_008c4800 @ 008c4800 ////

void __fastcall FUN_008c4800(int *param_1)

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


//// FUNCTION FUN_008c4860 @ 008c4860 ////

void __fastcall FUN_008c4860(int *param_1)

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


//// FUNCTION FUN_008c48c0 @ 008c48c0 ////

void __fastcall FUN_008c48c0(int *param_1)

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


//// FUNCTION FUN_008c4920 @ 008c4920 ////

void __fastcall FUN_008c4920(int *param_1)

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


//// FUNCTION FUN_008c4a00 @ 008c4a00 ////

void __cdecl FUN_008c4a00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_008c4a40 @ 008c4a40 ////

void __cdecl FUN_008c4a40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_008c4df0 @ 008c4df0 ////

void __thiscall FUN_008c4df0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return;
}


//// FUNCTION FUN_008c5040 @ 008c5040 ////

void __fastcall FUN_008c5040(undefined4 *param_1)

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


//// FUNCTION FUN_008c5410 @ 008c5410 ////

void __thiscall FUN_008c5410(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_008c5610 @ 008c5610 ////

void __fastcall FUN_008c5610(int *param_1)

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


//// FUNCTION FUN_008c5690 @ 008c5690 ////

void __fastcall FUN_008c5690(int *param_1)

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


//// FUNCTION FUN_008c56e0 @ 008c56e0 ////

undefined4 * __thiscall FUN_008c56e0(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
LAB_008c5724:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_008c5729;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_008c5724;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_008c5729:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x15) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_008c5770 @ 008c5770 ////

undefined4 * __thiscall FUN_008c5770(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
LAB_008c57b4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_008c57b9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_008c57b4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_008c57b9:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x15) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_008c5800 @ 008c5800 ////

undefined4 * __thiscall FUN_008c5800(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
LAB_008c5844:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_008c5849;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_008c5844;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_008c5849:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x15) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_008c5890 @ 008c5890 ////

undefined4 * __thiscall FUN_008c5890(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
LAB_008c58d4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_008c58d9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_008c58d4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_008c58d9:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x15) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_008c59c0 @ 008c59c0 ////

undefined4 * __thiscall FUN_008c59c0(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x39) == '\0') {
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
LAB_008c5a04:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_008c5a09;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_008c5a04;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_008c5a09:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x39) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_008c5b80 @ 008c5b80 ////

void __thiscall FUN_008c5b80(void *this,int param_1)

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


//// FUNCTION FUN_008c5bf0 @ 008c5bf0 ////

void __thiscall FUN_008c5bf0(void *this,int param_1)

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


//// FUNCTION FUN_008c5c60 @ 008c5c60 ////

void __thiscall FUN_008c5c60(void *this,int param_1)

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


//// FUNCTION FUN_008c5cc0 @ 008c5cc0 ////

void __thiscall FUN_008c5cc0(void *this,int *param_1)

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


//// FUNCTION FUN_008c5d30 @ 008c5d30 ////

void __thiscall FUN_008c5d30(void *this,int param_1)

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


//// FUNCTION FUN_008c5d90 @ 008c5d90 ////

void __thiscall FUN_008c5d90(void *this,int *param_1)

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


//// FUNCTION FUN_008c5e00 @ 008c5e00 ////

int * __fastcall FUN_008c5e00(int *param_1)

{
  FUN_008c4620(param_1);
  return param_1;
}


//// FUNCTION FUN_008c5e10 @ 008c5e10 ////

int * __fastcall FUN_008c5e10(int *param_1)

{
  FUN_008c46e0(param_1);
  return param_1;
}


//// FUNCTION FUN_008c5e20 @ 008c5e20 ////

int * __fastcall FUN_008c5e20(int *param_1)

{
  FUN_008c4680(param_1);
  return param_1;
}


//// FUNCTION FUN_008c5e30 @ 008c5e30 ////

int * __fastcall FUN_008c5e30(int *param_1)

{
  FUN_008c47a0(param_1);
  return param_1;
}


//// FUNCTION FUN_008c5e40 @ 008c5e40 ////

int * __fastcall FUN_008c5e40(int *param_1)

{
  FUN_008c4740(param_1);
  return param_1;
}


//// FUNCTION FUN_008c5e50 @ 008c5e50 ////

int * __fastcall FUN_008c5e50(int *param_1)

{
  FUN_008c4860(param_1);
  return param_1;
}


//// FUNCTION FUN_008c5e60 @ 008c5e60 ////

int * __fastcall FUN_008c5e60(int *param_1)

{
  FUN_008c4800(param_1);
  return param_1;
}


//// FUNCTION FUN_008c5e70 @ 008c5e70 ////

int * __fastcall FUN_008c5e70(int *param_1)

{
  FUN_008c4920(param_1);
  return param_1;
}


//// FUNCTION FUN_008c5e80 @ 008c5e80 ////

int * __fastcall FUN_008c5e80(int *param_1)

{
  FUN_008c48c0(param_1);
  return param_1;
}


//// FUNCTION FUN_008c60d0 @ 008c60d0 ////

void __cdecl FUN_008c60d0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    while (piVar1 = piVar1 + 1, piVar1 != param_3) {
      if (*(float *)(*piVar1 + 4) < *(float *)(*param_2 + 4)) {
        param_2 = piVar1;
      }
    }
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008c61c0 @ 008c61c0 ////

void __cdecl FUN_008c61c0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_008c61f0 @ 008c61f0 ////

void __cdecl FUN_008c61f0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_008c62c0 @ 008c62c0 ////

undefined4 * __thiscall FUN_008c62c0(void *this,byte param_1)

{
  FUN_008c62e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c62e0 @ 008c62e0 ////

void __fastcall FUN_008c62e0(undefined4 *param_1)

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


//// FUNCTION FUN_008c6320 @ 008c6320 ////

undefined4 * __thiscall FUN_008c6320(void *this,byte param_1)

{
  FUN_008c6340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6340 @ 008c6340 ////

void __fastcall FUN_008c6340(undefined4 *param_1)

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


//// FUNCTION FUN_008c6380 @ 008c6380 ////

undefined4 * __thiscall FUN_008c6380(void *this,byte param_1)

{
  FUN_008c63a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c63a0 @ 008c63a0 ////

void __fastcall FUN_008c63a0(undefined4 *param_1)

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


//// FUNCTION FUN_008c63e0 @ 008c63e0 ////

undefined4 * __thiscall FUN_008c63e0(void *this,byte param_1)

{
  FUN_008c6400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6400 @ 008c6400 ////

void __fastcall FUN_008c6400(undefined4 *param_1)

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


//// FUNCTION FUN_008c6440 @ 008c6440 ////

undefined4 * __thiscall FUN_008c6440(void *this,byte param_1)

{
  FUN_008c6460(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6460 @ 008c6460 ////

void __fastcall FUN_008c6460(undefined4 *param_1)

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


//// FUNCTION FUN_008c64a0 @ 008c64a0 ////

undefined4 * __thiscall FUN_008c64a0(void *this,byte param_1)

{
  FUN_008c64c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c64c0 @ 008c64c0 ////

void __fastcall FUN_008c64c0(undefined4 *param_1)

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


//// FUNCTION FUN_008c6500 @ 008c6500 ////

undefined4 * __thiscall FUN_008c6500(void *this,byte param_1)

{
  FUN_008c6520(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6520 @ 008c6520 ////

void __fastcall FUN_008c6520(undefined4 *param_1)

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


//// FUNCTION FUN_008c6560 @ 008c6560 ////

undefined4 * __thiscall FUN_008c6560(void *this,byte param_1)

{
  FUN_008c6580(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6580 @ 008c6580 ////

void __fastcall FUN_008c6580(undefined4 *param_1)

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


//// FUNCTION FUN_008c65c0 @ 008c65c0 ////

undefined4 * __thiscall FUN_008c65c0(void *this,byte param_1)

{
  FUN_008c5040(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c65e0 @ 008c65e0 ////

undefined4 * __thiscall FUN_008c65e0(void *this,byte param_1)

{
  FUN_008c6600(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6600 @ 008c6600 ////

void __fastcall FUN_008c6600(undefined4 *param_1)

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


//// FUNCTION FUN_008c6640 @ 008c6640 ////

undefined4 * __thiscall FUN_008c6640(void *this,byte param_1)

{
  FUN_008c6660(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6660 @ 008c6660 ////

void __fastcall FUN_008c6660(undefined4 *param_1)

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


//// FUNCTION FUN_008c66a0 @ 008c66a0 ////

undefined4 * __thiscall FUN_008c66a0(void *this,byte param_1)

{
  FUN_008c66c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c66c0 @ 008c66c0 ////

void __fastcall FUN_008c66c0(undefined4 *param_1)

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


//// FUNCTION FUN_008c6700 @ 008c6700 ////

undefined4 * __thiscall FUN_008c6700(void *this,byte param_1)

{
  FUN_008c6720(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6720 @ 008c6720 ////

void __fastcall FUN_008c6720(undefined4 *param_1)

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


//// FUNCTION FUN_008c6760 @ 008c6760 ////

undefined4 * __thiscall FUN_008c6760(void *this,byte param_1)

{
  FUN_008c6780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6780 @ 008c6780 ////

void __fastcall FUN_008c6780(undefined4 *param_1)

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


//// FUNCTION FUN_008c67c0 @ 008c67c0 ////

undefined4 * __thiscall FUN_008c67c0(void *this,byte param_1)

{
  FUN_008c67e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c67e0 @ 008c67e0 ////

void __fastcall FUN_008c67e0(undefined4 *param_1)

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


//// FUNCTION FUN_008c6820 @ 008c6820 ////

undefined4 * __thiscall FUN_008c6820(void *this,byte param_1)

{
  FUN_008c6840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6840 @ 008c6840 ////

void __fastcall FUN_008c6840(undefined4 *param_1)

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


//// FUNCTION FUN_008c6880 @ 008c6880 ////

undefined4 * __thiscall FUN_008c6880(void *this,byte param_1)

{
  FUN_008c68a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c68a0 @ 008c68a0 ////

void __fastcall FUN_008c68a0(undefined4 *param_1)

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


//// FUNCTION FUN_008c68e0 @ 008c68e0 ////

undefined4 * __thiscall FUN_008c68e0(void *this,byte param_1)

{
  FUN_008c6900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6900 @ 008c6900 ////

void __fastcall FUN_008c6900(undefined4 *param_1)

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


//// FUNCTION FUN_008c6940 @ 008c6940 ////

undefined4 * __thiscall FUN_008c6940(void *this,byte param_1)

{
  FUN_008c6960(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6960 @ 008c6960 ////

void __fastcall FUN_008c6960(undefined4 *param_1)

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


//// FUNCTION FUN_008c69a0 @ 008c69a0 ////

undefined4 * __thiscall FUN_008c69a0(void *this,byte param_1)

{
  FUN_008c69c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c69c0 @ 008c69c0 ////

void __fastcall FUN_008c69c0(undefined4 *param_1)

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


//// FUNCTION FUN_008c6a00 @ 008c6a00 ////

undefined4 * __thiscall FUN_008c6a00(void *this,byte param_1)

{
  FUN_008c6a20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c6a20 @ 008c6a20 ////

void __fastcall FUN_008c6a20(undefined4 *param_1)

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


//// FUNCTION FUN_008c6a60 @ 008c6a60 ////

void __fastcall FUN_008c6a60(int *param_1)

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
  puStack_8 = &LAB_00ced498;
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


//// FUNCTION FUN_008c6b30 @ 008c6b30 ////

uint __thiscall FUN_008c6b30(void *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  uint in_EAX;
  int iVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  void *pvVar5;
  float fVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_28 [40];
  
  if ((param_1 != (char *)0x0) &&
     (in_EAX = CONCAT31((int3)(in_EAX >> 8),*param_1 == '\0'), *param_1 != '\0')) {
    iVar3 = FUN_004f3b20();
    cVar1 = FUN_004f32f0(iVar3);
    in_EAX = CONCAT31(extraout_var,cVar1);
    if (cVar1 == '\0') {
      if (*(int *)((int)this + 0x88) != -1) {
        bVar2 = FUN_009b1140(*(int *)((int)this + 0x88));
        if (bVar2) {
          if (-1 < *(int *)((int)this + 0x88)) {
            FUN_009b11d0(*(int *)((int)this + 0x88));
          }
          *(undefined4 *)((int)this + 0x88) = 0xffffffff;
        }
      }
      puVar8 = &DAT_00d17518;
      iVar7 = 0;
      pbVar4 = (byte *)FUN_0041c9c0(local_28,param_1);
      iVar3 = 2;
      pvVar5 = (void *)FUN_004f3b20();
      fVar6 = (float)FUN_004f3270(pvVar5,iVar3,pbVar4,iVar7,puVar8);
      *(float *)((int)this + 0x88) = fVar6;
      pvVar5 = (void *)FUN_004f3b20();
      FUN_004f30c0(pvVar5,fVar6);
      return (uint)(*(int *)((int)this + 0x88) != -1);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_008c6bf0 @ 008c6bf0 ////

uint __thiscall FUN_008c6bf0(void *this,char *param_1)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  undefined3 extraout_var;
  byte *pbVar3;
  void *pvVar4;
  float fVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_28 [40];
  
  if ((param_1 != (char *)0x0) &&
     (in_EAX = CONCAT31((int3)(in_EAX >> 8),*param_1 == '\0'), *param_1 != '\0')) {
    iVar2 = FUN_004f3b20();
    cVar1 = FUN_004f32f0(iVar2);
    in_EAX = CONCAT31(extraout_var,cVar1);
    if (cVar1 == '\0') {
      puVar7 = &DAT_00d17518;
      iVar6 = 0;
      pbVar3 = (byte *)FUN_0041c9c0(local_28,param_1);
      iVar2 = 2;
      pvVar4 = (void *)FUN_004f3b20();
      fVar5 = (float)FUN_004f3270(pvVar4,iVar2,pbVar3,iVar6,puVar7);
      *(float *)((int)this + 0x88) = fVar5;
      pvVar4 = (void *)FUN_004f3b20();
      FUN_004f30c0(pvVar4,fVar5);
      return (uint)(*(int *)((int)this + 0x88) != -1);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_008c6c70 @ 008c6c70 ////

undefined ** __fastcall FUN_008c6c70(float param_1)

{
  int *piVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int *piVar6;
  float local_4;
  
  piVar1 = *(int **)((int)param_1 + 0xac);
  ppuVar3 = (undefined **)0x0;
  for (piVar6 = *(int **)((int)param_1 + 0xa8); piVar6 != piVar1; piVar6 = piVar6 + 1) {
    iVar2 = *piVar6;
    ppuVar4 = FUN_00912780(iVar2);
    ppuVar5 = ppuVar3;
    local_4 = param_1;
    if (((ppuVar4 != (undefined **)0x0) &&
        (local_4 = *(float *)(iVar2 + 4), ppuVar5 = ppuVar4, ppuVar3 != (undefined **)0x0)) &&
       (local_4 <= param_1)) {
      ppuVar5 = ppuVar3;
      local_4 = param_1;
    }
    ppuVar3 = ppuVar5;
    param_1 = local_4;
  }
  return ppuVar3;
}


//// FUNCTION FUN_008c6cd0 @ 008c6cd0 ////

byte __cdecl FUN_008c6cd0(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  char *local_4;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = 9;
    bVar5 = true;
    pcVar3 = param_1;
    pcVar4 = "GreyBlue";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      local_4 = "LightBlue";
      uVar1 = FUN_00529fc0(&param_1,&local_4);
      if ((char)uVar1 != '\0') {
        return 1;
      }
      local_4 = "Green";
      uVar1 = FUN_00529fc0(&param_1,&local_4);
      if ((char)uVar1 != '\0') {
        return 2;
      }
      local_4 = "Magenta";
      uVar1 = FUN_00529fc0(&param_1,&local_4);
      if ((char)uVar1 != '\0') {
        return 3;
      }
      local_4 = "DarkBlue";
      uVar1 = FUN_00529fc0(&param_1,&local_4);
      if ((char)uVar1 != '\0') {
        return 4;
      }
      local_4 = "Orange";
      uVar1 = FUN_00529fc0(&param_1,&local_4);
      return -((char)uVar1 != '\0') & 5;
    }
  }
  return 0;
}


//// FUNCTION FUN_008c6e20 @ 008c6e20 ////

void __thiscall FUN_008c6e20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d65f98;
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


//// FUNCTION FUN_008c6e70 @ 008c6e70 ////

void __fastcall FUN_008c6e70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d65f98;
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


//// FUNCTION FUN_008c6f40 @ 008c6f40 ////

void __fastcall FUN_008c6f40(int param_1)

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


//// FUNCTION FUN_008c6f60 @ 008c6f60 ////

void __fastcall FUN_008c6f60(int param_1)

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


//// FUNCTION FUN_008c6f80 @ 008c6f80 ////

void __fastcall FUN_008c6f80(int param_1)

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


//// FUNCTION FUN_008c6fa0 @ 008c6fa0 ////

void __fastcall FUN_008c6fa0(int param_1)

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


//// FUNCTION FUN_008c70f0 @ 008c70f0 ////

void __fastcall FUN_008c70f0(int param_1)

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


//// FUNCTION FUN_008c7150 @ 008c7150 ////

void __fastcall FUN_008c7150(int param_1)

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


//// FUNCTION FUN_008c72c0 @ 008c72c0 ////

int * __fastcall FUN_008c72c0(int *param_1)

{
  FUN_008c46e0(param_1);
  return param_1;
}


//// FUNCTION FUN_008c72d0 @ 008c72d0 ////

int * __fastcall FUN_008c72d0(int *param_1)

{
  FUN_008c4680(param_1);
  return param_1;
}


//// FUNCTION FUN_008c72e0 @ 008c72e0 ////

int * __fastcall FUN_008c72e0(int *param_1)

{
  FUN_008c47a0(param_1);
  return param_1;
}


//// FUNCTION FUN_008c72f0 @ 008c72f0 ////

int * __fastcall FUN_008c72f0(int *param_1)

{
  FUN_008c4740(param_1);
  return param_1;
}


//// FUNCTION FUN_008c7300 @ 008c7300 ////

int * __fastcall FUN_008c7300(int *param_1)

{
  FUN_008c4860(param_1);
  return param_1;
}


//// FUNCTION FUN_008c7310 @ 008c7310 ////

int * __fastcall FUN_008c7310(int *param_1)

{
  FUN_008c4800(param_1);
  return param_1;
}


//// FUNCTION FUN_008c7320 @ 008c7320 ////

int * __fastcall FUN_008c7320(int *param_1)

{
  FUN_008c4920(param_1);
  return param_1;
}


//// FUNCTION FUN_008c7330 @ 008c7330 ////

int * __fastcall FUN_008c7330(int *param_1)

{
  FUN_008c48c0(param_1);
  return param_1;
}


//// FUNCTION FUN_008c7340 @ 008c7340 ////

int * __fastcall FUN_008c7340(int *param_1)

{
  FUN_008c4620(param_1);
  return param_1;
}


//// FUNCTION FUN_008c7350 @ 008c7350 ////

void FUN_008c7350(void)

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


//// FUNCTION FUN_008c73a0 @ 008c73a0 ////

void FUN_008c73a0(void)

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


//// FUNCTION FUN_008c73f0 @ 008c73f0 ////

void FUN_008c73f0(void)

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


//// FUNCTION FUN_008c7440 @ 008c7440 ////

void FUN_008c7440(void)

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


//// FUNCTION FUN_008c7510 @ 008c7510 ////

undefined4 * __thiscall
FUN_008c7510(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  iVar2 = param_4[1];
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    puVar3 = *(undefined4 **)((int)this + 0x10);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(int *)((int)this + 0x10) = iVar2;
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x15) = 0;
  return this;
}


//// FUNCTION FUN_008c7570 @ 008c7570 ////

undefined4 * __thiscall
FUN_008c7570(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  iVar2 = param_4[1];
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    puVar3 = *(undefined4 **)((int)this + 0x10);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(int *)((int)this + 0x10) = iVar2;
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x15) = 0;
  return this;
}


//// FUNCTION FUN_008c75d0 @ 008c75d0 ////

undefined4 * __thiscall
FUN_008c75d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  iVar2 = param_4[1];
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    puVar3 = *(undefined4 **)((int)this + 0x10);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(int *)((int)this + 0x10) = iVar2;
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x15) = 0;
  return this;
}


//// FUNCTION FUN_008c7630 @ 008c7630 ////

undefined4 * __thiscall
FUN_008c7630(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = 0;
  iVar2 = param_4[1];
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    puVar3 = *(undefined4 **)((int)this + 0x10);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(int *)((int)this + 0x10) = iVar2;
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x15) = 0;
  return this;
}


//// FUNCTION FUN_008c76d0 @ 008c76d0 ////

void * FUN_008c76d0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_008c7700 @ 008c7700 ////

void * FUN_008c7700(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_008c7730 @ 008c7730 ////

void __fastcall FUN_008c7730(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_008c7750 @ 008c7750 ////

void __fastcall FUN_008c7750(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_008c7770 @ 008c7770 ////

void __fastcall FUN_008c7770(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_008c7790 @ 008c7790 ////

void __fastcall FUN_008c7790(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_008c77b0 @ 008c77b0 ////

undefined4 * __fastcall FUN_008c77b0(undefined4 *param_1)

{
  char *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_009042a0(param_1);
  *param_1 = &PTR_FUN_00d65fa8;
  FUN_0048f010(&stack0x00000004,&local_20);
  param_1[0x24] = param_1 + 0x27;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x14;
  FUN_004015d0(param_1 + 0x24,local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_008c7830 @ 008c7830 ////

undefined4 * __thiscall FUN_008c7830(void *this,byte param_1)

{
  FUN_008c7850(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7850 @ 008c7850 ////

void __fastcall FUN_008c7850(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x24]);
  }
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


//// FUNCTION FUN_008c78a0 @ 008c78a0 ////

void __fastcall FUN_008c78a0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d172b0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_1 + 6;
  param_1[6] = &PTR_FUN_00d172b0;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_1 + 0xc;
  param_1[0xc] = &PTR_FUN_00d172b0;
  param_1[0x11] = 0;
  return;
}


//// FUNCTION FUN_008c78f0 @ 008c78f0 ////

undefined4 * __fastcall FUN_008c78f0(undefined4 *param_1)

{
  char *local_20;
  uint local_1c;
  uint local_18;
  
  *param_1 = &PTR_FUN_00d65fec;
  FUN_0048f010(&stack0x00000004,&local_20);
  param_1[1] = param_1 + 4;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0x14;
  FUN_004015d0(param_1 + 1,local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_008c7980 @ 008c7980 ////

undefined4 * __thiscall FUN_008c7980(void *this,byte param_1)

{
  FUN_008c79a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c79a0 @ 008c79a0 ////

void __fastcall FUN_008c79a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d65fec;
  if (0x14 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_008c79f0 @ 008c79f0 ////

undefined4 * __thiscall FUN_008c79f0(void *this,byte param_1)

{
  FUN_008c7a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7a10 @ 008c7a10 ////

void __fastcall FUN_008c7a10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7a70 @ 008c7a70 ////

undefined4 * __thiscall FUN_008c7a70(void *this,byte param_1)

{
  FUN_008c7a90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7a90 @ 008c7a90 ////

void __fastcall FUN_008c7a90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7af0 @ 008c7af0 ////

undefined4 * __thiscall FUN_008c7af0(void *this,byte param_1)

{
  FUN_008c7b10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7b10 @ 008c7b10 ////

void __fastcall FUN_008c7b10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7b70 @ 008c7b70 ////

undefined4 * __thiscall FUN_008c7b70(void *this,byte param_1)

{
  FUN_008c7b90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7b90 @ 008c7b90 ////

void __fastcall FUN_008c7b90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7bf0 @ 008c7bf0 ////

undefined4 * __thiscall FUN_008c7bf0(void *this,byte param_1)

{
  FUN_008c7c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7c10 @ 008c7c10 ////

void __fastcall FUN_008c7c10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7c70 @ 008c7c70 ////

undefined4 * __thiscall FUN_008c7c70(void *this,byte param_1)

{
  FUN_008c7c90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7c90 @ 008c7c90 ////

void __fastcall FUN_008c7c90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7cf0 @ 008c7cf0 ////

undefined4 * __thiscall FUN_008c7cf0(void *this,byte param_1)

{
  FUN_008c7d10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7d10 @ 008c7d10 ////

void __fastcall FUN_008c7d10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7d70 @ 008c7d70 ////

undefined4 * __thiscall FUN_008c7d70(void *this,byte param_1)

{
  FUN_008c7d90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7d90 @ 008c7d90 ////

void __fastcall FUN_008c7d90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7df0 @ 008c7df0 ////

undefined4 * __thiscall FUN_008c7df0(void *this,byte param_1)

{
  FUN_008c7e10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7e10 @ 008c7e10 ////

void __fastcall FUN_008c7e10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7e70 @ 008c7e70 ////

undefined4 * __thiscall FUN_008c7e70(void *this,byte param_1)

{
  FUN_008c7e90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7e90 @ 008c7e90 ////

void __fastcall FUN_008c7e90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7ef0 @ 008c7ef0 ////

undefined4 * __thiscall FUN_008c7ef0(void *this,byte param_1)

{
  FUN_008c7f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7f10 @ 008c7f10 ////

void __fastcall FUN_008c7f10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7f70 @ 008c7f70 ////

undefined4 * __thiscall FUN_008c7f70(void *this,byte param_1)

{
  FUN_008c7f90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c7f90 @ 008c7f90 ////

void __fastcall FUN_008c7f90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c7ff0 @ 008c7ff0 ////

undefined4 * __thiscall FUN_008c7ff0(void *this,byte param_1)

{
  FUN_008c8010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8010 @ 008c8010 ////

void __fastcall FUN_008c8010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c8070 @ 008c8070 ////

undefined4 * __thiscall FUN_008c8070(void *this,byte param_1)

{
  FUN_008c8090(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8090 @ 008c8090 ////

void __fastcall FUN_008c8090(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c80f0 @ 008c80f0 ////

undefined4 * __thiscall FUN_008c80f0(void *this,byte param_1)

{
  FUN_008c8110(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8110 @ 008c8110 ////

void __fastcall FUN_008c8110(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c8170 @ 008c8170 ////

undefined4 * __thiscall FUN_008c8170(void *this,byte param_1)

{
  FUN_008c8190(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8190 @ 008c8190 ////

void __fastcall FUN_008c8190(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c81f0 @ 008c81f0 ////

undefined4 * __thiscall FUN_008c81f0(void *this,byte param_1)

{
  FUN_008c8210(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8210 @ 008c8210 ////

void __fastcall FUN_008c8210(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c8270 @ 008c8270 ////

undefined4 * __thiscall FUN_008c8270(void *this,byte param_1)

{
  FUN_008c8290(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8290 @ 008c8290 ////

void __fastcall FUN_008c8290(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c8330 @ 008c8330 ////

undefined4 * __thiscall FUN_008c8330(void *this,byte param_1)

{
  FUN_008c8350(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8350 @ 008c8350 ////

void __fastcall FUN_008c8350(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c83b0 @ 008c83b0 ////

float10 FUN_008c83b0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_c;
  float fStack_8;
  
  fVar1 = *(float *)(DAT_00f87aa0 + 0xd0);
  fVar2 = *(float *)(DAT_00f87aa0 + 0xd4);
  fVar3 = *(float *)(DAT_00f87aa0 + 0xd8);
  (**(code **)(*param_1 + 0x38))();
  fVar4 = (float10)fVar3 - (float10)(float)&local_c;
  fVar5 = (float10)local_c - (float10)fVar1;
  fVar6 = (float10)fStack_8 - (float10)fVar2;
  return SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
}


//// FUNCTION FUN_008c8420 @ 008c8420 ////

undefined4 * __thiscall FUN_008c8420(void *this,byte param_1)

{
  FUN_008c8440(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8440 @ 008c8440 ////

void __fastcall FUN_008c8440(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c84a0 @ 008c84a0 ////

float10 FUN_008c84a0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  float *pfVar3;
  float fVar4;
  float local_c [3];
  
  fVar4 = *(float *)(DAT_00f87aa0 + 0xd0);
  fVar1 = *(float *)(DAT_00f87aa0 + 0xd8);
  pfVar3 = local_c;
  (**(code **)(*param_1 + 0x38))(pfVar3,fVar4,*(undefined4 *)(DAT_00f87aa0 + 0xd4));
  fVar2 = (float10)fVar1 - (float10)(float)pfVar3;
  return SQRT(fVar2 * fVar2 +
              ((float10)local_c[0] - (float10)fVar4) * ((float10)local_c[0] - (float10)fVar4) +
              (float10)0.0 * (float10)0.0);
}


//// FUNCTION FUN_008c8510 @ 008c8510 ////

undefined4 * __thiscall FUN_008c8510(void *this,byte param_1)

{
  FUN_008c8530(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8530 @ 008c8530 ////

void __fastcall FUN_008c8530(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c8560 @ 008c8560 ////

void __cdecl FUN_008c8560(void *param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced4c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(&stack0x00000008,&local_2c);
  local_4 = 0;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,local_2c,local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_00558750(param_1,&local_4c,*unaff_ESI);
  *unaff_ESI = uVar1;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008c8610 @ 008c8610 ////

void __cdecl FUN_008c8610(void *param_1)

{
  float *unaff_ESI;
  float10 fVar1;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced4e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(&stack0x00000008,&local_2c);
  local_4 = 0;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,local_2c,local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  fVar1 = FUN_00558610(param_1,&local_4c,*unaff_ESI);
  *unaff_ESI = (float)fVar1;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008c86c0 @ 008c86c0 ////

void __cdecl FUN_008c86c0(void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  char *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(&stack0x0000000c,&local_4c);
  local_6c = local_60;
  local_4 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  FUN_004015d0(&local_6c,local_4c,local_48);
  local_4._0_1_ = 1;
  FUN_005584e0(param_1,&local_2c,&local_6c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (local_28 != 0) {
    puVar1 = (undefined4 *)FUN_00569b90(&local_70,(int *)&local_2c);
    *param_2 = *puVar1;
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008c87c0 @ 008c87c0 ////

void __fastcall FUN_008c87c0(undefined4 *param_1)

{
  param_1[0xc] = &PTR_FUN_00d172b0;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe] = param_1[0xd];
  }
  if (param_1[0xd] != 0) {
    *(undefined4 *)(param_1[0xd] + 4) = param_1[0xe];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe] = param_1[0xd];
  }
  if (param_1[0xd] != 0) {
    *(undefined4 *)(param_1[0xd] + 4) = param_1[0xe];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[6] = &PTR_FUN_00d172b0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_00d172b0;
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


//// FUNCTION FUN_008c88a0 @ 008c88a0 ////

void __fastcall FUN_008c88a0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *this;
  ulonglong uVar4;
  undefined4 *local_54 [5];
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  uint uStack_28;
  undefined4 *puStack_24;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = FUN_005e9250(DAT_0104d82c);
  if (bVar1) {
    ExceptionList = local_c;
    return;
  }
  if (*(char *)(DAT_00f87b04 + 4) != '\0') {
    ExceptionList = local_c;
    return;
  }
  FUN_008c78a0(local_54);
  local_4 = 0;
  (*(code *)local_54[0][1])();
  uStack_40 = 0;
  (*(code *)*local_54[0])();
  uVar2 = FUN_00447cf0();
  (*(code *)puStack_3c[1])();
  uStack_28 = uVar2;
  (*(code *)*puStack_3c)();
  iVar3 = FUN_0053ca20();
  (*(code *)puStack_24[1])();
  iStack_10 = iVar3;
  (*(code *)*puStack_24)();
  uVar4 = FUN_00acd42c();
  switch((int)uVar4) {
  case 0:
    this = *(void **)(param_1 + 0x38);
    break;
  case 1:
    this = *(void **)(param_1 + 0x34);
    break;
  case 2:
    this = *(void **)(param_1 + 0x3c);
    break;
  case 3:
    this = *(void **)(param_1 + 0x34);
    break;
  default:
    goto switchD_008c896c_default;
  }
  FUN_009145f0(this,0,(int)local_54);
switchD_008c896c_default:
  *(undefined1 *)(param_1 + 0x8c) = 0;
  FUN_008c87c0(local_54);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008c89d0 @ 008c89d0 ////

undefined4 FUN_008c89d0(float param_1,uint param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)param_3[1];
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3[2] - (int)piVar1 >> 2;
  }
  if (uVar2 < param_2) {
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  FUN_008c60d0(&param_3,piVar1,(int *)param_3[2]);
  if (*(float *)(*param_3 + 4) < param_1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_008c8a30 @ 008c8a30 ////

void __thiscall FUN_008c8a30(void *this,float param_1)

{
  FUN_008c89d0(param_1,DAT_00e5f214,(int *)((int)this + 0x94));
  return;
}


//// FUNCTION FUN_008c8a50 @ 008c8a50 ////

void __thiscall FUN_008c8a50(void *this,float param_1)

{
  FUN_008c89d0(param_1,DAT_00e5f210,(int *)((int)this + 0xa4));
  return;
}


//// FUNCTION FUN_008c8d70 @ 008c8d70 ////

void __thiscall FUN_008c8d70(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00470660(this,param_2);
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


//// FUNCTION FUN_008c8dd0 @ 008c8dd0 ////

void __fastcall FUN_008c8dd0(int param_1)

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


//// FUNCTION FUN_008c8e30 @ 008c8e30 ////

void __fastcall FUN_008c8e30(int param_1)

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


//// FUNCTION FUN_008c8f20 @ 008c8f20 ////

undefined4 * __thiscall FUN_008c8f20(void *this,byte param_1)

{
  FUN_008c8f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c8f40 @ 008c8f40 ////

void __fastcall FUN_008c8f40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c9030 @ 008c9030 ////

undefined4 * __thiscall FUN_008c9030(void *this,byte param_1)

{
  FUN_008c9050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c9050 @ 008c9050 ////

void __fastcall FUN_008c9050(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c9140 @ 008c9140 ////

undefined4 * __thiscall FUN_008c9140(void *this,byte param_1)

{
  FUN_008c9160(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c9160 @ 008c9160 ////

void __fastcall FUN_008c9160(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_008c9190 @ 008c9190 ////

void __fastcall FUN_008c9190(int param_1)

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


//// FUNCTION FUN_008c9200 @ 008c9200 ////

undefined4 * FUN_008c9200(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008c9230 @ 008c9230 ////

undefined4 * FUN_008c9230(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_008c9260 @ 008c9260 ////

void __fastcall FUN_008c9260(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c7350();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008c92a0 @ 008c92a0 ////

void __fastcall FUN_008c92a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c73a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008c92e0 @ 008c92e0 ////

void __fastcall FUN_008c92e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c73f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008c9320 @ 008c9320 ////

void __fastcall FUN_008c9320(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c7440();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008c9360 @ 008c9360 ////

void * FUN_008c9360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ced551;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x18);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_008c7510(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008c93f0 @ 008c93f0 ////

void * FUN_008c93f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ced571;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x18);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_008c7570(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008c9480 @ 008c9480 ////

void * FUN_008c9480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ced591;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x18);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_008c75d0(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008c9510 @ 008c9510 ////

void * FUN_008c9510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ced5b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x18);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_008c7630(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008c95a0 @ 008c95a0 ////

void * __thiscall FUN_008c95a0(void *this,byte param_1)

{
  FUN_008c7730((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c95c0 @ 008c95c0 ////

void * __thiscall FUN_008c95c0(void *this,byte param_1)

{
  FUN_008c7750((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c95e0 @ 008c95e0 ////

void * __thiscall FUN_008c95e0(void *this,byte param_1)

{
  FUN_008c7770((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c9600 @ 008c9600 ////

void * __thiscall FUN_008c9600(void *this,byte param_1)

{
  FUN_008c7790((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008c9620 @ 008c9620 ////

void FUN_008c9620(void)

{
  void *this;
  undefined4 *puVar1;
  int *this_00;
  undefined **local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined ***local_48;
  undefined4 local_40;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined ***local_30;
  undefined4 local_28;
  undefined **local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined ***local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced5d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x7c);
  local_4 = 0;
  if (this == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    puVar1 = operator_new(0x24);
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (int *)FUN_00913ca0(this,0);
    }
    else {
      puVar1 = FUN_008c78f0(puVar1);
      this_00 = (int *)FUN_00913ca0(this,puVar1);
    }
  }
  local_48 = &local_54;
  local_30 = &local_3c;
  local_18 = &local_24;
  local_50 = 0;
  local_4c = 0;
  local_54 = &PTR_FUN_00d172b0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = &PTR_FUN_00d172b0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_24 = &PTR_FUN_00d172b0;
  local_10 = 0;
  local_4 = 1;
  FUN_00415640((int)&local_54);
  local_40 = 0;
  (*(code *)*local_54)();
  (*(code *)local_3c[1])();
  local_28 = 0;
  (*(code *)*local_3c)();
  (*(code *)local_24[1])();
  local_10 = 0;
  (*(code *)*local_24)();
  FUN_009120d0(this_00,0,(undefined4 *)0x0,(int)&local_54);
  FUN_00914440(this_00,&local_54,(int *)0x0,&local_54,(int *)0x0);
  if (this_00 != (int *)0x0) {
    FUN_00913f10(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  FUN_008c87c0(&local_54);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008c97c0 @ 008c97c0 ////

int __thiscall FUN_008c97c0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00591070((void *)((int)this + 100),(int *)&param_1,param_1);
  puVar1 = param_1;
  if ((DAT_0104cdf4 != 0) && (param_1 != *(undefined4 **)((int)this + 0x68))) {
    iVar2 = FUN_00566c70();
    return iVar2 - puVar1[0xb];
  }
  return 0x7fffffff;
}


//// FUNCTION FUN_008c9810 @ 008c9810 ////

int __thiscall FUN_008c9810(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00591070((void *)((int)this + 0x70),(int *)&param_1,param_1);
  puVar1 = param_1;
  if ((DAT_0104cdf4 != 0) && (param_1 != *(undefined4 **)((int)this + 0x74))) {
    iVar2 = FUN_00566c70();
    return iVar2 - puVar1[0xb];
  }
  return 0x7fffffff;
}


//// FUNCTION FUN_008c9860 @ 008c9860 ////

undefined4 __thiscall FUN_008c9860(void *this,undefined4 *param_1)

{
  FUN_008c8d70((void *)((int)this + 0x40),(int *)&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x44)) {
    return param_1[0xb];
  }
  return 0;
}


//// FUNCTION FUN_008c9890 @ 008c9890 ////

undefined4 __thiscall FUN_008c9890(void *this,undefined4 *param_1)

{
  FUN_008c8d70((void *)((int)this + 0x4c),(int *)&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x50)) {
    return param_1[0xb];
  }
  return 0;
}


//// FUNCTION FUN_008c98c0 @ 008c98c0 ////

undefined4 __thiscall FUN_008c98c0(void *this,undefined4 *param_1)

{
  FUN_008c8d70((void *)((int)this + 0x58),(int *)&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x5c)) {
    return param_1[0xb];
  }
  return 0;
}


//// FUNCTION FUN_008c98f0 @ 008c98f0 ////

undefined4 __thiscall FUN_008c98f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_4;
  
  local_4 = this;
  local_4 = FUN_008c56e0(this,&param_1);
  puVar1 = *(undefined4 **)((int)this + 4);
  if (local_4 != puVar1) {
    uVar2 = FUN_00852b60(&param_1,local_4 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &local_4;
      goto LAB_008c992c;
    }
  }
  ppuVar3 = &param_1;
LAB_008c992c:
  if (*ppuVar3 != puVar1) {
    return (*ppuVar3)[4];
  }
  return 0;
}


//// FUNCTION FUN_008c9950 @ 008c9950 ////

bool __thiscall FUN_008c9950(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  puVar2 = FUN_008c56e0(this,&param_1);
  if (puVar2 != puVar1) {
    uVar3 = FUN_00852b60(&param_1,puVar2 + 3);
    if ((char)uVar3 == '\0') {
      return puVar2 != puVar1;
    }
  }
  return false;
}


//// FUNCTION FUN_008c99b0 @ 008c99b0 ////

undefined4 __thiscall FUN_008c99b0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  undefined4 *local_4;
  
  local_4 = this;
  local_4 = FUN_008c5770((void *)((int)this + 0xc),&param_1);
  if (local_4 != *(undefined4 **)((int)this + 0x10)) {
    uVar1 = FUN_00852b60(&param_1,local_4 + 3);
    if ((char)uVar1 == '\0') {
      ppuVar2 = &local_4;
      goto LAB_008c99f2;
    }
  }
  ppuVar2 = &param_1;
LAB_008c99f2:
  if (*ppuVar2 != *(undefined4 **)((int)this + 0x10)) {
    return (*ppuVar2)[4];
  }
  return 0;
}


//// FUNCTION FUN_008c9a10 @ 008c9a10 ////

bool __thiscall FUN_008c9a10(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)((int)this + 0x10);
  puVar3 = FUN_008c5770((void *)((int)this + 0xc),&param_1);
  puVar2 = *(undefined4 **)((int)this + 0x10);
  if (puVar3 != puVar2) {
    uVar4 = FUN_00852b60(&param_1,puVar3 + 3);
    if ((char)uVar4 == '\0') {
      return puVar3 != puVar1;
    }
  }
  return puVar2 != puVar1;
}


//// FUNCTION FUN_008c9a80 @ 008c9a80 ////

undefined4 __thiscall FUN_008c9a80(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  undefined4 *local_4;
  
  local_4 = this;
  local_4 = FUN_008c5800((void *)((int)this + 0x18),&param_1);
  if (local_4 != *(undefined4 **)((int)this + 0x1c)) {
    uVar1 = FUN_00852b60(&param_1,local_4 + 3);
    if ((char)uVar1 == '\0') {
      ppuVar2 = &local_4;
      goto LAB_008c9ac2;
    }
  }
  ppuVar2 = &param_1;
LAB_008c9ac2:
  if (*ppuVar2 != *(undefined4 **)((int)this + 0x1c)) {
    return (*ppuVar2)[4];
  }
  return 0;
}


//// FUNCTION FUN_008c9ae0 @ 008c9ae0 ////

undefined4 __thiscall FUN_008c9ae0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  undefined4 *local_4;
  
  local_4 = this;
  local_4 = FUN_008c5890((void *)((int)this + 0x24),&param_1);
  if (local_4 != *(undefined4 **)((int)this + 0x28)) {
    uVar1 = FUN_00852b60(&param_1,local_4 + 3);
    if ((char)uVar1 == '\0') {
      ppuVar2 = &local_4;
      goto LAB_008c9b22;
    }
  }
  ppuVar2 = &param_1;
LAB_008c9b22:
  if (*ppuVar2 != *(undefined4 **)((int)this + 0x28)) {
    return (*ppuVar2)[4];
  }
  return 0;
}


//// FUNCTION FUN_008c9b40 @ 008c9b40 ////

void __thiscall FUN_008c9b40(void *this,int param_1)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = *(int **)((int)this + 0x9c);
  _Dst = *(int **)((int)this + 0x98);
  if (_Dst != piVar1) {
    do {
      if (*_Dst == param_1) break;
      _Dst = _Dst + 1;
    } while (_Dst != piVar1);
    if (_Dst != piVar1) {
      _memmove(_Dst,_Dst + 1,(*(int *)((int)this + 0x9c) - (int)(_Dst + 1) >> 2) << 2);
      *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + -4;
    }
  }
  return;
}


//// FUNCTION FUN_008c9ba0 @ 008c9ba0 ////

void __thiscall FUN_008c9ba0(void *this,int param_1)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = *(int **)((int)this + 0xac);
  _Dst = *(int **)((int)this + 0xa8);
  if (_Dst != piVar1) {
    do {
      if (*_Dst == param_1) break;
      _Dst = _Dst + 1;
    } while (_Dst != piVar1);
    if (_Dst != piVar1) {
      _memmove(_Dst,_Dst + 1,(*(int *)((int)this + 0xac) - (int)(_Dst + 1) >> 2) << 2);
      *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + -4;
    }
  }
  return;
}


//// FUNCTION FUN_008c9c00 @ 008c9c00 ////

int __fastcall FUN_008c9c00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c7350();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008c9c30 @ 008c9c30 ////

int __fastcall FUN_008c9c30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c73a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008c9c60 @ 008c9c60 ////

int __fastcall FUN_008c9c60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c73f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008c9c90 @ 008c9c90 ////

int __fastcall FUN_008c9c90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c7440();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008c9d20 @ 008c9d20 ////

undefined4 * __thiscall FUN_008c9d20(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ced5e0;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_00470a20(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 0xc));
    if (*(char *)((int)local_18 + 0x31) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_008c9d20(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_008c9d20(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_008c9dd0 @ 008c9dd0 ////

undefined4 * __thiscall FUN_008c9dd0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ced5f0;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_0048f330(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 0xb));
    if (*(char *)((int)local_18 + 0x2d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_008c9dd0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_008c9dd0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_008c9ea0 @ 008c9ea0 ////

void FUN_008c9ea0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_008c9ea0(*(void **)((int)param_1 + 8));
    FUN_008c7730((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008c9ee0 @ 008c9ee0 ////

void FUN_008c9ee0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_008c9ee0(*(void **)((int)param_1 + 8));
    FUN_008c7750((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008c9f20 @ 008c9f20 ////

void __thiscall FUN_008c9f20(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_008c9d20(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x31) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x31);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x31);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x31);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x31);
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


//// FUNCTION FUN_008c9fb0 @ 008c9fb0 ////

void __thiscall
FUN_008c9fb0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ced608;
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
  piVar3 = FUN_008c9360(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_008ca0ab:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008c5b80(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_008c4230(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_008ca0ab;
      if (piVar6 == (int *)*piVar2) {
        FUN_008c4230(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_008c5b80(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_008ca160 @ 008ca160 ////

void __thiscall
FUN_008ca160(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ced628;
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
  piVar3 = FUN_008c93f0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_008ca25b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008c5bf0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_008c42d0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_008ca25b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008c42d0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_008c5bf0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_008ca310 @ 008ca310 ////

void __thiscall
FUN_008ca310(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ced648;
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
  piVar3 = FUN_008c9480(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_008ca40b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008c5c60(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_008c5cc0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_008ca40b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008c5cc0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_008c5c60(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_008ca4c0 @ 008ca4c0 ////

void __thiscall
FUN_008ca4c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ced668;
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
  piVar3 = FUN_008c9510(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_008ca5bb:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008c5d30(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_008c5d90(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_008ca5bb;
      if (piVar6 == (int *)*piVar2) {
        FUN_008c5d90(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_008c5d30(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_008ca670 @ 008ca670 ////

void FUN_008ca670(void)

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
  puStack_8 = &LAB_00ced688;
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


//// FUNCTION FUN_008ca6e0 @ 008ca6e0 ////

void FUN_008ca6e0(void)

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
  puStack_8 = &LAB_00ced6a8;
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


//// FUNCTION FUN_008ca750 @ 008ca750 ////

void __thiscall FUN_008ca750(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_008c9dd0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x2d) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x2d);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x2d);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x2d);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x2d);
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


//// FUNCTION FUN_008ca7e0 @ 008ca7e0 ////

void __thiscall FUN_008ca7e0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
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
  puStack_8 = &LAB_00ced6c8;
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
  FUN_008c46e0((int *)&param_2);
  piVar5 = (int *)*_Memory;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar7 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar5[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar5 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)_Memory[1];
        if ((int *)*piVar6 == _Memory) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_008ca94f;
    }
  }
  else {
    piVar7 = (int *)_Memory[2];
  }
  piVar5 = (int *)_Memory[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == _Memory) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == _Memory) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar3 = (int *)FUN_008c44f0(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar4 = FUN_008c44d0((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_008ca94f:
  if ((char)_Memory[5] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[5] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008c5b80(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(*piVar5 + 0x14) != '\x01') || (*(char *)(piVar5[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x14) = 1;
                *(undefined1 *)(piVar5 + 5) = 0;
                FUN_008c4230(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 5) = (char)piVar6[5];
              *(undefined1 *)(piVar6 + 5) = 1;
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              FUN_008c5b80(this,(int)piVar6);
              break;
            }
LAB_008caa18:
            *(undefined1 *)(piVar5 + 5) = 0;
          }
        }
        else {
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008c4230(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(piVar5[2] + 0x14) == '\x01') && (*(char *)(*piVar5 + 0x14) == '\x01'))
            goto LAB_008caa18;
            if (*(char *)(*piVar5 + 0x14) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              *(undefined1 *)(piVar5 + 5) = 0;
              FUN_008c5b80(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 5) = (char)piVar6[5];
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(*piVar5 + 0x14) = 1;
            FUN_008c4230(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  puVar2 = (undefined4 *)_Memory[4];
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  _Memory[4] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008caac0 @ 008caac0 ////

void __thiscall FUN_008caac0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
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
  puStack_8 = &LAB_00ced6e8;
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
  FUN_008c47a0((int *)&param_2);
  piVar5 = (int *)*_Memory;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar7 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar5[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar5 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)_Memory[1];
        if ((int *)*piVar6 == _Memory) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_008cac2f;
    }
  }
  else {
    piVar7 = (int *)_Memory[2];
  }
  piVar5 = (int *)_Memory[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == _Memory) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == _Memory) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar3 = (int *)FUN_008c4540(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar4 = FUN_008c4520((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_008cac2f:
  if ((char)_Memory[5] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[5] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008c5bf0(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(*piVar5 + 0x14) != '\x01') || (*(char *)(piVar5[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x14) = 1;
                *(undefined1 *)(piVar5 + 5) = 0;
                FUN_008c42d0(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 5) = (char)piVar6[5];
              *(undefined1 *)(piVar6 + 5) = 1;
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              FUN_008c5bf0(this,(int)piVar6);
              break;
            }
LAB_008cacf8:
            *(undefined1 *)(piVar5 + 5) = 0;
          }
        }
        else {
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008c42d0(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(piVar5[2] + 0x14) == '\x01') && (*(char *)(*piVar5 + 0x14) == '\x01'))
            goto LAB_008cacf8;
            if (*(char *)(*piVar5 + 0x14) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              *(undefined1 *)(piVar5 + 5) = 0;
              FUN_008c5bf0(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 5) = (char)piVar6[5];
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(*piVar5 + 0x14) = 1;
            FUN_008c42d0(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  puVar2 = (undefined4 *)_Memory[4];
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  _Memory[4] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008cada0 @ 008cada0 ////

void __thiscall FUN_008cada0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
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
  puStack_8 = &LAB_00ced708;
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
  FUN_008c4860((int *)&param_2);
  piVar5 = (int *)*_Memory;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar7 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar5[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar5 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)_Memory[1];
        if ((int *)*piVar6 == _Memory) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_008caf0f;
    }
  }
  else {
    piVar7 = (int *)_Memory[2];
  }
  piVar5 = (int *)_Memory[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == _Memory) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == _Memory) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar3 = (int *)FUN_008c4590(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar4 = FUN_008c4570((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_008caf0f:
  if ((char)_Memory[5] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[5] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008c5c60(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(*piVar5 + 0x14) != '\x01') || (*(char *)(piVar5[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x14) = 1;
                *(undefined1 *)(piVar5 + 5) = 0;
                FUN_008c5cc0(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 5) = (char)piVar6[5];
              *(undefined1 *)(piVar6 + 5) = 1;
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              FUN_008c5c60(this,(int)piVar6);
              break;
            }
LAB_008cafd8:
            *(undefined1 *)(piVar5 + 5) = 0;
          }
        }
        else {
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008c5cc0(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(piVar5[2] + 0x14) == '\x01') && (*(char *)(*piVar5 + 0x14) == '\x01'))
            goto LAB_008cafd8;
            if (*(char *)(*piVar5 + 0x14) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              *(undefined1 *)(piVar5 + 5) = 0;
              FUN_008c5c60(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 5) = (char)piVar6[5];
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(*piVar5 + 0x14) = 1;
            FUN_008c5cc0(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  puVar2 = (undefined4 *)_Memory[4];
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  _Memory[4] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008cb080 @ 008cb080 ////

void __thiscall FUN_008cb080(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
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
  puStack_8 = &LAB_00ced728;
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
  FUN_008c4920((int *)&param_2);
  piVar5 = (int *)*_Memory;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar7 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar5[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar5 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)_Memory[1];
        if ((int *)*piVar6 == _Memory) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_008cb1ef;
    }
  }
  else {
    piVar7 = (int *)_Memory[2];
  }
  piVar5 = (int *)_Memory[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == _Memory) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == _Memory) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar3 = (int *)FUN_008c45e0(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar4 = FUN_008c45c0((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_008cb1ef:
  if ((char)_Memory[5] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[5] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008c5d30(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(*piVar5 + 0x14) != '\x01') || (*(char *)(piVar5[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x14) = 1;
                *(undefined1 *)(piVar5 + 5) = 0;
                FUN_008c5d90(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 5) = (char)piVar6[5];
              *(undefined1 *)(piVar6 + 5) = 1;
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              FUN_008c5d30(this,(int)piVar6);
              break;
            }
LAB_008cb2b8:
            *(undefined1 *)(piVar5 + 5) = 0;
          }
        }
        else {
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008c5d90(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(piVar5[2] + 0x14) == '\x01') && (*(char *)(*piVar5 + 0x14) == '\x01'))
            goto LAB_008cb2b8;
            if (*(char *)(*piVar5 + 0x14) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              *(undefined1 *)(piVar5 + 5) = 0;
              FUN_008c5d30(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 5) = (char)piVar6[5];
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(*piVar5 + 0x14) = 1;
            FUN_008c5d90(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  puVar2 = (undefined4 *)_Memory[4];
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  _Memory[4] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008cb360 @ 008cb360 ////

void FUN_008cb360(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_008cb360(*(void **)((int)param_1 + 8));
    FUN_008c7770((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008cb3a0 @ 008cb3a0 ////

void FUN_008cb3a0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_008cb3a0(*(void **)((int)param_1 + 8));
    FUN_008c7790((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008cb3e0 @ 008cb3e0 ////

void __fastcall FUN_008cb3e0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  piVar3 = (int *)(param_1 + 0x34);
  iVar2 = 3;
  do {
    FUN_009145b0(*piVar3);
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00470bb0(*(void **)(*(int *)(param_1 + 0x80) + 4));
  *(int *)(*(int *)(param_1 + 0x80) + 4) = *(int *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(int *)(*(int *)(param_1 + 0x80) + 8) = *(int *)(param_1 + 0x80);
  FUN_00423710(*(void **)(*(int *)(param_1 + 0x68) + 4));
  *(int *)(*(int *)(param_1 + 0x68) + 4) = *(int *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(int *)(*(int *)(param_1 + 0x68) + 8) = *(int *)(param_1 + 0x68);
  FUN_00423710(*(void **)(*(int *)(param_1 + 0x74) + 4));
  *(int *)(*(int *)(param_1 + 0x74) + 4) = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(int *)(*(int *)(param_1 + 0x74) + 8) = *(int *)(param_1 + 0x74);
  FUN_00470bb0(*(void **)(*(int *)(param_1 + 0x44) + 4));
  *(int *)(*(int *)(param_1 + 0x44) + 4) = *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(int *)(*(int *)(param_1 + 0x44) + 8) = *(int *)(param_1 + 0x44);
  FUN_00470bb0(*(void **)(*(int *)(param_1 + 0x50) + 4));
  *(int *)(*(int *)(param_1 + 0x50) + 4) = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(int *)(*(int *)(param_1 + 0x50) + 8) = *(int *)(param_1 + 0x50);
  FUN_00470bb0(*(void **)(*(int *)(param_1 + 0x5c) + 4));
  *(int *)(*(int *)(param_1 + 0x5c) + 4) = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(int *)(*(int *)(param_1 + 0x5c) + 8) = *(int *)(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 0x8c) = 1;
  *(undefined1 *)(param_1 + 0x8d) = DAT_010503d0;
  uVar1 = DAT_010503d1;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x8e) = uVar1;
  return;
}


//// FUNCTION FUN_008cb520 @ 008cb520 ////

void __fastcall FUN_008cb520(int param_1)

{
  FUN_008c9ea0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008cb550 @ 008cb550 ////

void __fastcall FUN_008cb550(int param_1)

{
  FUN_008c9ee0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008cb620 @ 008cb620 ////

void __thiscall FUN_008cb620(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_008cb684:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_008cb689;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_008cb684;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_008cb689:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x15) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_008c9fb0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_008c4680((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00852b60(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_008c9fb0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_008cb740 @ 008cb740 ////

void __thiscall FUN_008cb740(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_008cb7a4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_008cb7a9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_008cb7a4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_008cb7a9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x15) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_008ca160(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_008c4740((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00852b60(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_008ca160(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_008cb860 @ 008cb860 ////

void __thiscall FUN_008cb860(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_008cb8c4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_008cb8c9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_008cb8c4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_008cb8c9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x15) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_008ca310(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_008c4800((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00852b60(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_008ca310(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_008cb980 @ 008cb980 ////

void __thiscall FUN_008cb980(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008c9ea0((void *)piVar6[1]);
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
    FUN_008cada0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008cba40 @ 008cba40 ////

void __thiscall FUN_008cba40(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_008cbaa4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_008cbaa9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_008cbaa4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_008cbaa9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x15) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_008ca4c0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_008c48c0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00852b60(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_008ca4c0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_008cbb60 @ 008cbb60 ////

void __thiscall FUN_008cbb60(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008c9ee0((void *)piVar6[1]);
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
    FUN_008cb080(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008cbc20 @ 008cbc20 ////

void __thiscall FUN_008cbc20(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_008ca670();
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
      _Dst = FUN_008c9200((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_008c76d0(param_1,iVar5,param_1 + param_2);
      FUN_008c9200(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_008c4a00(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_008c76d0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_008c61c0(param_1,(int)pvVar3,iVar5);
    FUN_008c4a00(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_008cbe00 @ 008cbe00 ////

void __thiscall FUN_008cbe00(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_008ca6e0();
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
      _Dst = FUN_008c9230((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_008c7700(param_1,iVar5,param_1 + param_2);
      FUN_008c9230(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_008c4a40(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_008c7700(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_008c61f0(param_1,(int)pvVar3,iVar5);
    FUN_008c4a40(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_008cbfe0 @ 008cbfe0 ////

void __fastcall FUN_008cbfe0(int param_1)

{
  FUN_008cb360(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008cc010 @ 008cc010 ////

void __fastcall FUN_008cc010(int param_1)

{
  FUN_008cb3a0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008cc0d0 @ 008cc0d0 ////

undefined4 * __thiscall FUN_008cc0d0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_008c9fb0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00852b60(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_008c9fb0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00852b60(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_008c9fb0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00852b60(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c4680((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00852b60(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x15) != '\0') {
          FUN_008c9fb0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_008c9fb0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00852b60(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c46e0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00852b60(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_008cc252;
      }
      if (*(char *)(param_2[2] + 0x15) != '\0') {
        FUN_008c9fb0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_008c9fb0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_008cc252:
  puVar4 = (undefined4 *)FUN_008cb620(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_008cc280 @ 008cc280 ////

undefined4 * __thiscall FUN_008cc280(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_008ca160(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00852b60(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_008ca160(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00852b60(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_008ca160(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00852b60(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c4740((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00852b60(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x15) != '\0') {
          FUN_008ca160(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_008ca160(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00852b60(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c47a0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00852b60(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_008cc402;
      }
      if (*(char *)(param_2[2] + 0x15) != '\0') {
        FUN_008ca160(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_008ca160(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_008cc402:
  puVar4 = (undefined4 *)FUN_008cb740(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_008cc430 @ 008cc430 ////

undefined4 * __thiscall FUN_008cc430(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_008ca310(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00852b60(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_008ca310(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00852b60(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_008ca310(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00852b60(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c4800((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00852b60(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x15) != '\0') {
          FUN_008ca310(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_008ca310(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00852b60(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c4860((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00852b60(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_008cc5b2;
      }
      if (*(char *)(param_2[2] + 0x15) != '\0') {
        FUN_008ca310(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_008ca310(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_008cc5b2:
  puVar4 = (undefined4 *)FUN_008cb860(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_008cc610 @ 008cc610 ////

undefined4 * __thiscall FUN_008cc610(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_008ca4c0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00852b60(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_008ca4c0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00852b60(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_008ca4c0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00852b60(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c48c0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00852b60(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x15) != '\0') {
          FUN_008ca4c0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_008ca4c0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00852b60(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c4920((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00852b60(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_008cc792;
      }
      if (*(char *)(param_2[2] + 0x15) != '\0') {
        FUN_008ca4c0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_008ca4c0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_008cc792:
  puVar4 = (undefined4 *)FUN_008cba40(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_008cc890 @ 008cc890 ////

void __thiscall FUN_008cc890(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008cb360((void *)piVar6[1]);
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
    FUN_008ca7e0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008cc950 @ 008cc950 ////

void __thiscall FUN_008cc950(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008cb3a0((void *)piVar6[1]);
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
    FUN_008caac0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008ccc10 @ 008ccc10 ////

int * __thiscall FUN_008ccc10(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced750;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_008c56e0(this,param_1);
  if (piVar1 != *(int **)((int)this + 4)) {
    uVar2 = FUN_00852b60(param_1,piVar1 + 3);
    if ((char)uVar2 == '\0') {
      ExceptionList = local_c;
      return piVar1 + 4;
    }
  }
  local_14[0] = *param_1;
  local_14[1] = 0;
  local_4 = 1;
  piVar1 = FUN_008cc0d0(this,&local_18,piVar1,local_14);
  ExceptionList = local_c;
  return (int *)(*piVar1 + 0x10);
}


//// FUNCTION FUN_008cccb0 @ 008cccb0 ////

int * __thiscall FUN_008cccb0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced770;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_008c5770(this,param_1);
  if (piVar1 != *(int **)((int)this + 4)) {
    uVar2 = FUN_00852b60(param_1,piVar1 + 3);
    if ((char)uVar2 == '\0') {
      ExceptionList = local_c;
      return piVar1 + 4;
    }
  }
  local_14[0] = *param_1;
  local_14[1] = 0;
  local_4 = 1;
  piVar1 = FUN_008cc280(this,&local_18,piVar1,local_14);
  ExceptionList = local_c;
  return (int *)(*piVar1 + 0x10);
}


//// FUNCTION FUN_008ccd50 @ 008ccd50 ////

int * __thiscall FUN_008ccd50(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced790;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_008c5800(this,param_1);
  if (piVar1 != *(int **)((int)this + 4)) {
    uVar2 = FUN_00852b60(param_1,piVar1 + 3);
    if ((char)uVar2 == '\0') {
      ExceptionList = local_c;
      return piVar1 + 4;
    }
  }
  local_14[0] = *param_1;
  local_14[1] = 0;
  local_4 = 1;
  piVar1 = FUN_008cc430(this,&local_18,piVar1,local_14);
  ExceptionList = local_c;
  return (int *)(*piVar1 + 0x10);
}


//// FUNCTION FUN_008cce20 @ 008cce20 ////

int * __thiscall FUN_008cce20(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_18;
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced7b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_008c5890(this,param_1);
  if (piVar1 != *(int **)((int)this + 4)) {
    uVar2 = FUN_00852b60(param_1,piVar1 + 3);
    if ((char)uVar2 == '\0') {
      ExceptionList = local_c;
      return piVar1 + 4;
    }
  }
  local_14[0] = *param_1;
  local_14[1] = 0;
  local_4 = 1;
  piVar1 = FUN_008cc610(this,&local_18,piVar1,local_14);
  ExceptionList = local_c;
  return (int *)(*piVar1 + 0x10);
}


//// FUNCTION FUN_008ccff0 @ 008ccff0 ////

void * __thiscall FUN_008ccff0(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ced7c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0048f380();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_008ca750(this,param_1);
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008cd080 @ 008cd080 ////

/* WARNING: Removing unreachable block (ram,0x008cd0c8) */
/* WARNING: Removing unreachable block (ram,0x008cd0d4) */
/* WARNING: Removing unreachable block (ram,0x008cd0e0) */

undefined4 * __thiscall FUN_008cd080(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ced7e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d66314;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 1;
  FUN_00481520((void *)((int)this + 8),*(undefined4 **)((int)this + 0x10),1,&param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008cd1b0 @ 008cd1b0 ////

undefined4 * __thiscall FUN_008cd1b0(void *this,byte param_1)

{
  FUN_008cd1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008cd1d0 @ 008cd1d0 ////

void __fastcall FUN_008cd1d0(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_LAB_00d65724;
  return;
}


//// FUNCTION SITTSystem_LoadDeveloperFlags @ 008cd200 ////

void __fastcall SITTSystem_LoadDeveloperFlags(int param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Loads ~35 named developer/debug toggle flags via the SLVAR system
                       (FUN_0098b490 = HasFlag, FUN_0098a430 = SetFlag at a byte offset). Embeds the
                       literal source path "C:\movies\dev\TheMovies\SITTSystem.cpp" in its debug
                       logging, confirming this whole system's real internal name is SITT (matches
                       the earlier-found CSITTActionActivator /
                       CBubbleEventFunctor<CSITTActionActivator> / SITT_TUTORIAL_POPBUBBLE from the
                       AMM tutorial trace -- SITT is a genuine Lionhead-internal name, not a guess,
                       though what it stands for is still unknown). Confirms the three AMM tutorial
                       flags independently: BHasSeenAMMTutorialBubble /
                       BHasSeenAMMStuntTutorialBubble / BHasSeenAMMNewFeaturesTutorialBubble match
                       exactly the HasSeenAMMIntro/Stunt/NewFeatures flags found earlier via
                       GlobalStatRegistry. Also reveals several flags for features that sound cut or
                       hidden-by-default: BEnableSellRoom, BEnablePostProdRoom,
                       BEnableMovieViewerRoom (Sell Room / Post-Production Room / Movie Viewer Room
                       -- none of these rooms are known to exist in the shipped game under those
                       names). Worth a dedicated follow-up to check if any of these three rooms have
                       any other trace in the binary/data files. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced910;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = FUN_0098b490("TooltipDisplayCount");
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_54 = *(char **)(param_1 + 0x30);
      FUN_0098a3a0(&local_54);
      local_58 = **(int **)(param_1 + 0x2c);
      if ((int *)local_58 != *(int **)(param_1 + 0x2c)) {
        do {
          uVar9 = local_58;
          local_4c = local_40;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          FUN_004015d0(&local_4c,*(char **)(local_58 + 0xc),*(uint *)(local_58 + 0x10));
          local_4 = 0;
          FUN_0098c550(&local_4c);
          FUN_0098a430((undefined4 *)(uVar9 + 0x2c),4);
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_0046ff50((int *)&local_58);
        } while (local_58 != *(uint *)(param_1 + 0x2c));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_58 = 0;
      FUN_00470c50(param_1 + 0x28);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 1;
      SLVAR_LoadUint(&local_58);
      uVar9 = 0;
      if (local_58 != 0) {
        do {
          FUN_0098c550(&local_2c);
          piVar6 = FUN_00471710((void *)(param_1 + 0x28),&local_2c);
          FUN_0098a430(piVar6,4);
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_58);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  uVar4 = FUN_0098b490("TooltipDismissCount");
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_54 = *(char **)(param_1 + 0x3c);
      FUN_0098a3a0(&local_54);
      local_58 = **(int **)(param_1 + 0x38);
      if ((int *)local_58 != *(int **)(param_1 + 0x38)) {
        do {
          uVar2 = local_58;
          local_4c = local_40;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          uVar9 = *(uint *)(local_58 + 0x10);
          local_50 = *(char **)(local_58 + 0xc);
          if (0x13 < uVar9) {
            local_44 = uVar9 + 0x20 & 0xffffffe0;
            local_4c = _malloc(local_44);
          }
          _strncpy(local_4c,local_50,uVar9);
          local_4c[uVar9] = '\0';
          local_4 = 2;
          local_48 = uVar9;
          FUN_0098c550(&local_4c);
          FUN_0098a430((undefined4 *)(uVar2 + 0x2c),4);
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_0046ff50((int *)&local_58);
        } while (local_58 != *(uint *)(param_1 + 0x38));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_58 = 0;
      FUN_00470c50(param_1 + 0x34);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 3;
      SLVAR_LoadUint(&local_58);
      uVar9 = 0;
      if (local_58 != 0) {
        do {
          FUN_0098c550(&local_2c);
          piVar6 = FUN_00471710((void *)(param_1 + 0x34),&local_2c);
          FUN_0098a430(piVar6,4);
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_58);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe0;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 4;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDJDisabled");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x40),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe1;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 5;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BTannoyDisabled");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x41),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe2;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 6;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BNewsDisabled");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x42),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe3;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 7;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BLockCamera");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x43),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe4;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 8;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawTimeline");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x44),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe5;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 9;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawTimeControls");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x45),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe6;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 10;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawNodules");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x47),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe7;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xb;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawRosette");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x48),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe8;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xc;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawBankBalance");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x49),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xe9;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xd;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawHudCardButtons");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4a),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xea;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xe;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BPipsEnabled");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4b),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xeb;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0xf;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawChartPosition");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xec;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x10;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BPauseDateAdvancement");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4d),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xed;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x11;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BAllAvailableInDebt");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4e),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xee;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x12;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BQueuesClosed");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4f),1);
  }
  uVar4 = FUN_0098b490("QueueClosedMap");
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_50 = *(char **)(param_1 + 0x58);
      FUN_0098a3a0(&local_50);
      local_58 = **(int **)(param_1 + 0x54);
      if ((int *)local_58 != *(int **)(param_1 + 0x54)) {
        do {
          uVar2 = local_58;
          local_4c = local_40;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          uVar9 = *(uint *)(local_58 + 0x10);
          local_54 = *(char **)(local_58 + 0xc);
          if (0x13 < uVar9) {
            local_44 = uVar9 + 0x20 & 0xffffffe0;
            local_4c = _malloc(local_44);
          }
          _strncpy(local_4c,local_54,uVar9);
          local_4c[uVar9] = '\0';
          local_4 = 0x13;
          local_48 = uVar9;
          FUN_0098c550(&local_4c);
          FUN_0098a430((undefined4 *)(uVar2 + 0x2c),1);
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_00495810((int *)&local_58);
        } while (local_58 != *(uint *)(param_1 + 0x54));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_58 = 0;
      FUN_004980e0(*(void **)(*(int *)(param_1 + 0x54) + 4));
      *(int *)(*(int *)(param_1 + 0x54) + 4) = *(int *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(int *)(*(int *)(param_1 + 0x54) + 8) = *(int *)(param_1 + 0x54);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 0x14;
      SLVAR_LoadUint(&local_58);
      uVar9 = 0;
      if (local_58 != 0) {
        do {
          FUN_0098c550(&local_2c);
          piVar6 = FUN_00499620((void *)(param_1 + 0x50),&local_2c);
          FUN_0098a430(piVar6,1);
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_58);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf0;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x15;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BHasSeenAMMTutorialBubble");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x5c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf1;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x16;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDisableScriptCanning");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x5f),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf2;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x17;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDisableAssetDestruction");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x60),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf3;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x18;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDisableAssetMoving");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x61),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf4;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x19;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BIsTutorialSkipped");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x62),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf5;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1a;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BResumeNewGameOnExit");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 100),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf6;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1b;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BHasSeenAMMStuntTutorialBubble");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x5e),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf7;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1c;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BIsStuntTutorialSkipped");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 99),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf8;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1d;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawStuntAchievements");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x46),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xf9;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1e;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BHasSeenAMMNewFeaturesTutorialBubble");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x5d),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xfa;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x1f;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BDrawStuntScriptIcons");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x65),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xfb;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x20;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BEnableCustomScriptWriting");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x66),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xfc;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x21;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BEnableSellRoom");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x67),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xfd;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x22;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BEnablePostProdRoom");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x68),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\SITTSystem.cpp";
    puVar10 = &DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      puVar10 = puVar10 + 1;
    }
    local_4c = local_40;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((int)puVar10 + 2) = pcVar8[2];
    DAT_010581d4 = 0xfe;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"SLVAR CALLED: ",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    local_4 = 0x23;
    pcVar5 = (char *)FUN_00ace33d(0xe4e3bc);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  uVar4 = FUN_0098b490("BEnableMovieViewerRoom");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x69),1);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008cf140 @ 008cf140 ////

void __fastcall FUN_008cf140(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008cb980(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008cf170 @ 008cf170 ////

void __fastcall FUN_008cf170(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008cbb60(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008cf370 @ 008cf370 ////

void FUN_008cf370(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 local_1c;
  undefined local_18 [4];
  int *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ced928;
  pvStack_c = ExceptionList;
  uVar4 = 0;
  iVar3 = 0;
  iVar2 = 2;
  ExceptionList = &pvStack_c;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f31c0(pvVar1,iVar2,iVar3,uVar4);
  uVar4 = 0;
  iVar3 = 2;
  iVar2 = 2;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f31c0(pvVar1,iVar2,iVar3,uVar4);
  uVar4 = 0;
  iVar3 = 1;
  iVar2 = 2;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f31c0(pvVar1,iVar2,iVar3,uVar4);
  FUN_0041fd40(DAT_00f87b04,0);
  DAT_00e59c88 = 1;
  DAT_00e59c84 = 1;
  DAT_00e59c85 = 1;
  DAT_00e59c86 = 1;
  DAT_00e59c87 = 1;
  s___AVWExtraIconManager_TM___00e5b930[0x1b] = '\x01';
  s___AVCPipList_TM___00e6649c[0x12] = '\x01';
  DAT_00e5b97c = 1;
  DAT_0104e7a3 = 0;
  FUN_0043b9b0();
  DAT_0104d970 = 0;
  FUN_0091b2c0(0);
  FUN_008c02b0(0);
  FUN_008c1940(0);
  local_14 = (int *)FUN_00496f90();
  *(undefined1 *)((int)local_14 + 0x31) = 1;
  local_14[1] = (int)local_14;
  *local_14 = (int)local_14;
  local_14[2] = (int)local_14;
  local_10 = 0;
  local_4 = 0;
  FUN_00495160(0);
  FUN_00499d10(local_18);
  FUN_00472510(1,'\0');
  FUN_00472510(0,'\0');
  FUN_00472510(2,'\0');
  FUN_00472510(3,'\0');
  FUN_00472750('\0');
  FUN_00472780('\0');
  FUN_0042a6f0('\0');
  FUN_00406f60(0,'\0');
  FUN_00406f60(1,'\0');
  local_4 = 0xffffffff;
  FUN_00498d20(local_18,&local_1c,(int *)*local_14,local_14);
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}


//// FUNCTION FUN_008cf500 @ 008cf500 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cf500(void *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  undefined1 local_f8 [4];
  undefined4 *local_f4;
  undefined4 *local_f0;
  int local_ec;
  undefined1 *local_e8;
  int local_e4;
  int local_e0;
  undefined1 local_dc [4];
  undefined4 *local_d8;
  undefined4 *local_d4;
  undefined4 local_d0;
  byte *local_cc;
  undefined4 local_c8;
  uint local_c4;
  byte local_c0 [20];
  byte *local_ac;
  undefined4 local_a8;
  uint local_a4;
  byte local_a0 [20];
  byte *local_8c;
  undefined4 local_88;
  uint local_84;
  byte local_80 [20];
  void *local_6c;
  int local_68;
  uint local_64;
  void *local_4c [2];
  uint local_44;
  byte *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ced979;
  local_c = ExceptionList;
  puVar10 = (undefined4 *)0x0;
  puVar6 = (undefined4 *)0x0;
  local_f4 = (undefined4 *)0x0;
  local_f0 = (undefined4 *)0x0;
  local_ec = 0;
  local_4 = 0;
  local_d8 = (undefined4 *)0x0;
  local_d4 = (undefined4 *)0x0;
  local_d0 = 0;
  ExceptionList = &local_c;
  if ((DAT_01050410 & 1) == 0) {
    DAT_01050410 = DAT_01050410 | 1;
    DAT_010503f0 = &DAT_010503fc;
    DAT_010503fc = 0;
    _DAT_010503f4 = 0;
    DAT_010503f8 = 0x14;
    ExceptionList = &local_c;
    _strncpy(&DAT_010503fc,"modes",5);
    _DAT_010503f4 = 5;
    DAT_010503f0[5] = 0;
    _atexit(FUN_00d13d60);
  }
  local_cc = local_c0;
  local_c0[0] = 0;
  local_c8 = 0;
  local_c4 = 0x14;
  _strncpy((char *)local_cc,"activators",10);
  local_c8 = 10;
  local_cc[10] = 0;
  local_4._0_1_ = 2;
  uVar3 = FUN_00558a50(param_1,&local_cc,(undefined4 *)0x1);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  if (((char)uVar3 != '\0') && (cVar2 = FUN_00558bb0(param_1,6), cVar2 != '\0')) {
    puVar10 = (undefined4 *)0x0;
    do {
      if (puVar10 != puVar6) {
        puVar6 = _memmove(puVar10,puVar6,0);
        local_f0 = puVar6;
      }
      FUN_005584e0(param_1,&local_6c,&DAT_010503f0);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (local_68 == 0) {
        puVar7 = (undefined4 *)(local_e0 + 0x34);
        iVar11 = 3;
        puVar5 = local_f4;
        do {
          if ((puVar5 == (undefined4 *)0x0) ||
             ((uint)(local_ec - (int)puVar5 >> 2) <= (uint)((int)puVar6 - (int)puVar5 >> 2))) {
            FUN_008cbe00(local_f8,puVar6,1,puVar7);
            puVar5 = local_f4;
          }
          else {
            *puVar6 = *puVar7;
            local_f0 = puVar6 + 1;
          }
          puVar7 = puVar7 + 1;
          iVar11 = iVar11 + -1;
          puVar6 = local_f0;
          puVar10 = local_f4;
        } while (iVar11 != 0);
      }
      else {
        local_e8 = &stack0xfffffeec;
        FUN_0056cc90(local_6c,0x3b,local_dc);
        local_e4 = 0;
        for (local_e8 = (undefined1 *)0x0;
            (local_d8 != (undefined4 *)0x0 &&
            (local_e8 < (undefined1 *)((int)local_d4 - (int)local_d8 >> 5)));
            local_e8 = local_e8 + 1) {
          local_cc = local_c0;
          local_c0[0] = 0;
          local_c8 = 0;
          local_c4 = 0x14;
          _strncpy((char *)local_cc,"normal",6);
          iVar11 = local_e4;
          local_c8 = 6;
          local_cc[6] = 0;
          pbVar4 = *(byte **)((int)local_d8 + iVar11);
          pbVar8 = local_cc;
          do {
            bVar1 = *pbVar4;
            bVar12 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_008cf819:
              iVar11 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_008cf81e;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar12 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_008cf819;
            pbVar4 = pbVar4 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar11 = 0;
LAB_008cf81e:
          if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_cc);
          }
          if (iVar11 == 0) {
            puVar10 = (undefined4 *)(local_e0 + 0x34);
LAB_008cf9a3:
            if ((local_f4 == (undefined4 *)0x0) ||
               ((uint)(local_ec - (int)local_f4 >> 2) <= (uint)((int)puVar6 - (int)local_f4 >> 2)))
            {
              FUN_008cbe00(local_f8,puVar6,1,puVar10);
              puVar6 = local_f0;
            }
            else {
              *puVar6 = *puVar10;
              local_f0 = puVar6 + 1;
              puVar6 = local_f0;
            }
          }
          else {
            local_ac = local_a0;
            local_a0[0] = 0;
            local_a8 = 0;
            local_a4 = 0x14;
            _strncpy((char *)local_ac,(char *)&PTR_LAB_00d66600,3);
            iVar11 = local_e4;
            local_a8 = 3;
            local_ac[3] = 0;
            pbVar4 = *(byte **)((int)local_d8 + iVar11);
            pbVar8 = local_ac;
            do {
              bVar1 = *pbVar4;
              bVar12 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_008cf8bd:
                iVar11 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_008cf8c2;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar12 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_008cf8bd;
              pbVar4 = pbVar4 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar11 = 0;
LAB_008cf8c2:
            if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
              _free(local_ac);
            }
            if (iVar11 == 0) {
              puVar10 = (undefined4 *)(local_e0 + 0x38);
              goto LAB_008cf9a3;
            }
            local_8c = local_80;
            local_80[0] = 0;
            local_88 = 0;
            local_84 = 0x14;
            _strncpy((char *)local_8c,"sandbox",7);
            iVar11 = local_e4;
            local_88 = 7;
            local_8c[7] = 0;
            pbVar4 = *(byte **)((int)local_d8 + iVar11);
            pbVar8 = local_8c;
            do {
              bVar1 = *pbVar4;
              bVar12 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_008cf979:
                iVar11 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_008cf97e;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar12 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_008cf979;
              pbVar4 = pbVar4 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            iVar11 = 0;
LAB_008cf97e:
            if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
              _free(local_8c);
            }
            if (iVar11 == 0) {
              puVar10 = (undefined4 *)(local_e0 + 0x3c);
              goto LAB_008cf9a3;
            }
          }
          local_e4 = local_e4 + 0x20;
          puVar10 = local_f4;
        }
      }
      uVar3 = FUN_00558120(param_1,0);
      cVar2 = (char)uVar3;
      while (cVar2 != '\0') {
        FUN_00558de0(param_1,local_2c);
        local_4._0_1_ = 4;
        pbVar4 = local_2c[0];
        pbVar8 = DAT_010503f0;
        do {
          bVar1 = *pbVar4;
          bVar12 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_008cf9fb:
            iVar11 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_008cfa00;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar12 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_008cf9fb;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_008cfa00:
        if (iVar11 != 0) {
          FUN_00558590(param_1,local_4c,4);
          local_4._0_1_ = 5;
          for (uVar9 = 0;
              (puVar10 != (undefined4 *)0x0 && (uVar9 < (uint)((int)puVar6 - (int)puVar10 >> 2)));
              uVar9 = uVar9 + 1) {
            local_e8 = &stack0xfffffef4;
            FUN_009149d0((void *)puVar10[uVar9],local_4c[0]);
          }
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
        }
        local_4 = CONCAT31(local_4._1_3_,3);
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        uVar3 = FUN_00558120(param_1,2);
        cVar2 = (char)uVar3;
      }
      local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      cVar2 = FUN_00558bb0(param_1,2);
    } while (cVar2 != '\0');
  }
  puVar6 = local_d8;
  if (local_d8 == (undefined4 *)0x0) {
    local_d8 = (undefined4 *)0x0;
    local_d4 = (undefined4 *)0x0;
    local_d0 = 0;
    if (puVar10 == (undefined4 *)0x0) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(puVar10);
  }
  while( true ) {
    if (puVar6 == local_d4) {
                    /* WARNING: Subroutine does not return */
      _free(local_d8);
    }
    if (0x14 < (uint)puVar6[2]) break;
    puVar6 = puVar6 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*puVar6);
}


//// FUNCTION FUN_008cfb50 @ 008cfb50 ////

void __fastcall FUN_008cfb50(int param_1)

{
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ced998;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008cf370();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"tutorial2_skip",0xe);
  uStack_28 = 0xe;
  pcStack_2c[0xe] = '\0';
  uStack_4 = 0;
  FUN_004a3af0(&pcStack_2c);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  *(undefined1 *)(param_1 + 0x8d) = 1;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008cfbf0 @ 008cfbf0 ////

void __fastcall FUN_008cfbf0(int param_1)

{
  FUN_008cf370();
  *(undefined1 *)(param_1 + 0x8e) = 1;
  return;
}


//// FUNCTION FUN_008cfc10 @ 008cfc10 ////

void __fastcall FUN_008cfc10(int param_1)

{
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ced9b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008cf370();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"tutorial2_skip",0xe);
  uStack_28 = 0xe;
  pcStack_2c[0xe] = '\0';
  uStack_4 = 0;
  FUN_004a3af0(&pcStack_2c);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  *(undefined1 *)(param_1 + 0x8d) = 1;
  *(undefined1 *)(param_1 + 0x8e) = 1;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008cfcb0 @ 008cfcb0 ////

void __thiscall FUN_008cfcb0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_0104cdf4 != 0) {
    piVar1 = FUN_00593a30((void *)((int)this + 100),param_1);
    iVar2 = FUN_00566c70();
    *piVar1 = iVar2;
  }
  piVar1 = FUN_00471710((void *)((int)this + 0x7c),param_1);
  *piVar1 = *piVar1 + 1;
  return;
}


//// FUNCTION FUN_008cfcf0 @ 008cfcf0 ////

void __thiscall FUN_008cfcf0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_0104cdf4 != 0) {
    piVar1 = FUN_00593a30((void *)((int)this + 0x70),param_1);
    iVar2 = FUN_00566c70();
    *piVar1 = iVar2;
  }
  piVar1 = FUN_00471710((void *)((int)this + 0x7c),param_1);
  if (*piVar1 != 0) {
    piVar1 = FUN_00471710((void *)((int)this + 0x7c),param_1);
    *piVar1 = *piVar1 + -1;
  }
  return;
}


//// FUNCTION FUN_008cfd40 @ 008cfd40 ////

void __thiscall FUN_008cfd40(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00471710((void *)((int)this + 0x40),param_1);
  *piVar1 = *piVar1 + 1;
  return;
}


//// FUNCTION FUN_008cfd60 @ 008cfd60 ////

void __thiscall FUN_008cfd60(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00471710((void *)((int)this + 0x40),param_1);
  *piVar1 = *piVar1 + -1;
  return;
}


//// FUNCTION FUN_008cfd80 @ 008cfd80 ////

void __thiscall FUN_008cfd80(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00471710((void *)((int)this + 0x4c),param_1);
  *piVar1 = *piVar1 + 1;
  return;
}


//// FUNCTION FUN_008cfda0 @ 008cfda0 ////

void __thiscall FUN_008cfda0(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00471710((void *)((int)this + 0x58),param_1);
  *piVar1 = *piVar1 + 1;
  return;
}


//// FUNCTION FUN_008cfdc0 @ 008cfdc0 ////

void __thiscall FUN_008cfdc0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 **ppuVar7;
  int *piVar8;
  undefined4 *apuStack_8 [2];
  
  piVar4 = param_1;
  (**(code **)(*param_1 + 0xc))(&param_1);
  puVar5 = FUN_008c56e0(this,(undefined4 *)&stack0x00000000);
  puVar2 = *(undefined4 **)((int)this + 4);
  if (puVar5 != puVar2) {
    uVar6 = FUN_00852b60((undefined4 *)&stack0x00000000,puVar5 + 3);
    if ((char)uVar6 == '\0') {
      ppuVar7 = (undefined4 **)&stack0xfffffff4;
      goto LAB_008cfe11;
    }
  }
  apuStack_8[0] = puVar2;
  ppuVar7 = apuStack_8;
LAB_008cfe11:
  if (*ppuVar7 == puVar2) {
    piVar8 = FUN_008ccc10(this,(int *)&stack0x00000000);
    piVar3 = (int *)*piVar8;
    if (piVar3 != piVar4) {
      if (piVar3 != (int *)0x0) {
        piVar1 = piVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar3)(1);
        }
      }
      *piVar8 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008cfe50 @ 008cfe50 ////

void __thiscall FUN_008cfe50(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 **ppuVar7;
  int *piVar8;
  undefined4 *apuStack_8 [2];
  
  piVar4 = param_1;
  (**(code **)(*param_1 + 0xc))(&param_1);
  puVar5 = FUN_008c5770((void *)((int)this + 0xc),(undefined4 *)&stack0x00000000);
  puVar2 = *(undefined4 **)((int)this + 0x10);
  if (puVar5 != puVar2) {
    uVar6 = FUN_00852b60((undefined4 *)&stack0x00000000,puVar5 + 3);
    if ((char)uVar6 == '\0') {
      ppuVar7 = (undefined4 **)&stack0xfffffff4;
      goto LAB_008cfea6;
    }
  }
  apuStack_8[0] = puVar2;
  ppuVar7 = apuStack_8;
LAB_008cfea6:
  if (*ppuVar7 == *(undefined4 **)((int)this + 0x10)) {
    piVar8 = FUN_008cccb0((void *)((int)this + 0xc),(int *)&stack0x00000000);
    piVar3 = (int *)*piVar8;
    if (piVar3 != piVar4) {
      if (piVar3 != (int *)0x0) {
        piVar1 = piVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar3)(1);
        }
      }
      *piVar8 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008cfee0 @ 008cfee0 ////

void __thiscall FUN_008cfee0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 **ppuVar5;
  int *piVar6;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar3 = param_1;
  param_1 = (undefined4 *)param_1[0x14];
  local_8 = FUN_008c5800((void *)((int)this + 0x18),&param_1);
  puVar2 = *(undefined4 **)((int)this + 0x1c);
  if (local_8 != puVar2) {
    uVar4 = FUN_00852b60(&param_1,local_8 + 3);
    if ((char)uVar4 == '\0') {
      ppuVar5 = &local_8;
      goto LAB_008cff30;
    }
  }
  local_4 = puVar2;
  ppuVar5 = &local_4;
LAB_008cff30:
  if (*ppuVar5 == *(undefined4 **)((int)this + 0x1c)) {
    piVar6 = FUN_008ccd50((void *)((int)this + 0x18),(int *)&param_1);
    puVar2 = (undefined4 *)*piVar6;
    if (puVar2 != puVar3) {
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      *piVar6 = (int)puVar3;
    }
  }
  return;
}


//// FUNCTION FUN_008cff70 @ 008cff70 ////

void __thiscall FUN_008cff70(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 **ppuVar5;
  int *piVar6;
  undefined4 *local_8;
  undefined4 *local_4;
  
  puVar3 = param_1;
  param_1 = (undefined4 *)param_1[0x14];
  local_8 = FUN_008c5890((void *)((int)this + 0x24),&param_1);
  puVar2 = *(undefined4 **)((int)this + 0x28);
  if (local_8 != puVar2) {
    uVar4 = FUN_00852b60(&param_1,local_8 + 3);
    if ((char)uVar4 == '\0') {
      ppuVar5 = &local_8;
      goto LAB_008cffc0;
    }
  }
  local_4 = puVar2;
  ppuVar5 = &local_4;
LAB_008cffc0:
  if (*ppuVar5 == *(undefined4 **)((int)this + 0x28)) {
    piVar6 = FUN_008cce20((void *)((int)this + 0x24),(int *)&param_1);
    puVar2 = (undefined4 *)*piVar6;
    if (puVar2 != puVar3) {
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      *piVar6 = (int)puVar3;
    }
  }
  return;
}


//// FUNCTION FUN_008d0000 @ 008d0000 ////

void __thiscall FUN_008d0000(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *local_4;
  
  if (*(int *)((int)this + 0x98) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0x9c) - *(int *)((int)this + 0x98) >> 2;
  }
  local_4 = this;
  if (DAT_00e5f214 <= uVar3) {
    FUN_008c60d0(&local_4,*(int **)((int)this + 0x98),*(int **)((int)this + 0x9c));
    FUN_00913d40(*local_4);
  }
  iVar1 = *(int *)((int)this + 0x98);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0x9c) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0xa0) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0x9c);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 0x9c) = puVar2 + 1;
    return;
  }
  FUN_008cbc20((void *)((int)this + 0x94),*(undefined4 **)((int)this + 0x9c),1,&param_1);
  return;
}


//// FUNCTION FUN_008d00a0 @ 008d00a0 ////

void __thiscall FUN_008d00a0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *local_4;
  
  if (*(int *)((int)this + 0xa8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0xac) - *(int *)((int)this + 0xa8) >> 2;
  }
  local_4 = this;
  if (DAT_00e5f210 <= uVar3) {
    FUN_008c60d0(&local_4,*(int **)((int)this + 0xa8),*(int **)((int)this + 0xac));
    FUN_00913210(*local_4);
  }
  iVar1 = *(int *)((int)this + 0xa8);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0xac) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0xb0) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0xac);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 0xac) = puVar2 + 1;
    return;
  }
  FUN_008cbc20((void *)((int)this + 0xa4),*(undefined4 **)((int)this + 0xac),1,&param_1);
  return;
}


//// FUNCTION FUN_008d0140 @ 008d0140 ////

undefined4 * __cdecl FUN_008d0140(void *param_1)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  void *pvVar7;
  undefined4 *puVar8;
  int *_Memory;
  int *piVar9;
  int *piVar10;
  int *local_120;
  uint local_11c;
  undefined4 *local_118;
  uint *local_110;
  int *local_10c;
  int *local_108;
  uint local_104 [5];
  char *local_f0;
  undefined4 local_ec;
  uint local_e8;
  char local_e4 [20];
  char *local_d0;
  undefined4 local_cc;
  uint local_c8;
  char local_c4 [20];
  char *local_b0;
  undefined4 local_ac;
  uint local_a8;
  char local_a4 [20];
  undefined1 *local_90;
  void *local_8c;
  int local_88;
  uint local_84;
  void *local_6c;
  int local_68;
  uint local_64;
  void *local_4c [2];
  uint local_44;
  char *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  undefined4 uVar6;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ceda8e;
  local_c = ExceptionList;
  local_110 = local_104;
  local_104[0] = local_104[0] & 0xffffff00;
  local_10c = (int *)0x0;
  local_108 = (int *)0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_110,"roottext",8);
  local_10c = (int *)0x8;
  *(char *)(local_110 + 2) = '\0';
  local_4 = 0;
  FUN_005584e0(param_1,&local_6c,&local_110);
  if (0x14 < local_108) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  local_110 = local_104;
  local_104[0] = local_104[0] & 0xffffff00;
  local_10c = (int *)0x0;
  local_108 = (int *)0x14;
  _strncpy((char *)local_110,"rootitem",8);
  local_10c = (int *)0x8;
  *(char *)(local_110 + 2) = '\0';
  local_4._0_1_ = 3;
  FUN_005584e0(param_1,&local_8c,&local_110);
  if (0x14 < local_108) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  local_110 = local_104;
  local_104[0] = local_104[0] & 0xffffff00;
  local_10c = (int *)0x0;
  local_108 = (int *)0x14;
  _strncpy((char *)local_110,"colour",6);
  local_10c = (int *)0x6;
  *(char *)((int)local_110 + 6) = '\0';
  local_4._0_1_ = 6;
  FUN_005584e0(param_1,local_2c,&local_110);
  if (0x14 < local_108) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  local_f0 = local_e4;
  local_e4[0] = '\0';
  local_ec = 0;
  local_e8 = 0x14;
  _strncpy(local_f0,"bias",4);
  local_ec = 4;
  local_f0[4] = '\0';
  local_4._0_1_ = 9;
  uVar5 = FUN_00558750(param_1,&local_f0,0);
  local_4._0_1_ = 8;
  if (0x14 < local_e8) {
                    /* WARNING: Subroutine does not return */
    _free(local_f0);
  }
  bVar3 = FUN_008c6cd0(local_2c[0]);
  uVar6 = CONCAT31(extraout_var,bVar3);
  if (local_88 == 0) {
    if (local_68 != 0) {
      puVar8 = operator_new(0xb0);
      local_4._0_1_ = 0xb;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = FUN_008c77b0(puVar8);
      }
      local_4._0_1_ = 8;
      pvVar7 = operator_new(0x30);
      local_4._0_1_ = 0xc;
      if (pvVar7 == (void *)0x0) {
        local_118 = (undefined4 *)0x0;
      }
      else {
        local_118 = FUN_00901d30(pvVar7,(int)puVar8,uVar5,uVar6);
      }
      iVar1 = puVar8[0x12];
      local_4._0_1_ = 8;
      puVar8[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar8)();
      }
      goto LAB_008d0427;
    }
    pvVar7 = operator_new(0x30);
    local_4._0_1_ = 0xd;
    if (pvVar7 != (void *)0x0) {
      local_118 = (undefined4 *)FUN_00901c40(pvVar7,uVar6);
      goto LAB_008d0427;
    }
  }
  else {
    pvVar7 = operator_new(0x30);
    local_4._0_1_ = 10;
    if (pvVar7 != (void *)0x0) {
      local_118 = FUN_00901c90(pvVar7,local_8c,uVar5,uVar6);
      goto LAB_008d0427;
    }
  }
  local_118 = (undefined4 *)0x0;
LAB_008d0427:
  _Memory = (int *)0x0;
  piVar10 = (int *)0x0;
  local_10c = (int *)0x0;
  local_108 = (int *)0x0;
  local_104[0] = 0;
  local_4._0_1_ = 0xe;
  cVar4 = FUN_00558bb0(param_1,6);
  if (cVar4 != '\0') {
    cVar4 = FUN_00558bb0(param_1,0);
    while (cVar4 != '\0') {
      FUN_005562f0(param_1,&local_d0,0);
      local_4 = CONCAT31(local_4._1_3_,0xf);
      if ((_Memory == (int *)0x0) ||
         ((uint)((int)(local_104[0] - (int)_Memory) >> 5) <=
          (uint)((int)piVar10 - (int)_Memory >> 5))) {
        FUN_00439fd0(&local_110,piVar10,1,&local_d0);
        _Memory = local_10c;
      }
      else {
        FUN_00439ea0(piVar10,1,&local_d0);
        local_108 = piVar10 + 8;
      }
      piVar10 = local_108;
      local_4._0_1_ = 0xe;
      if (0x14 < local_c8) {
                    /* WARNING: Subroutine does not return */
        _free(local_d0);
      }
      cVar4 = FUN_00558bb0(param_1,2);
    }
  }
  local_11c = 0;
  local_120 = _Memory;
  do {
    if (_Memory == (int *)0x0) {
LAB_008d0759:
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      ExceptionList = local_c;
      return local_118;
    }
    if ((uint)((int)piVar10 - (int)_Memory >> 5) <= local_11c) {
      if (_Memory != (int *)0x0) {
        piVar9 = _Memory;
        if (_Memory == piVar10) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        do {
          if (0x14 < (uint)piVar9[2]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*piVar9);
          }
          piVar9 = piVar9 + 8;
        } while (piVar9 != piVar10);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      goto LAB_008d0759;
    }
    uVar5 = FUN_00558a50(param_1,local_120,(undefined4 *)0x0);
    if ((char)uVar5 != '\0') {
      local_f0 = local_e4;
      local_e4[0] = '\0';
      local_ec = 0;
      local_e8 = 0x14;
      _strncpy(local_f0,"item",4);
      local_ec = 4;
      local_f0[4] = '\0';
      local_4._0_1_ = 0x10;
      uVar5 = FUN_00558490(param_1,&local_f0);
      local_4._0_1_ = 0xe;
      uVar2 = (undefined1)local_4;
      local_4._0_1_ = 0xe;
      if (0x14 < local_e8) {
                    /* WARNING: Subroutine does not return */
        _free(local_f0);
      }
      if ((char)uVar5 == '\0') {
        local_4._0_1_ = uVar2;
        puVar8 = FUN_008d0140(param_1);
        FUN_00901e60(local_118,(int)puVar8);
      }
      else {
        local_b0 = local_a4;
        local_a4[0] = '\0';
        local_ac = 0;
        local_a8 = 0x14;
        _strncpy(local_b0,"item",4);
        local_ac = 4;
        local_b0[4] = '\0';
        local_4._0_1_ = 0x11;
        FUN_005584e0(param_1,local_4c,&local_b0);
        if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        local_d0 = local_c4;
        local_c4[0] = '\0';
        local_cc = 0;
        local_c8 = 0x14;
        _strncpy(local_d0,"bias",4);
        local_cc = 4;
        local_d0[4] = '\0';
        local_4._0_1_ = 0x14;
        puVar8 = (undefined4 *)FUN_00558750(param_1,&local_d0,0);
        local_4._0_1_ = 0x13;
        if (0x14 < local_c8) {
                    /* WARNING: Subroutine does not return */
          _free(local_d0);
        }
        local_90 = &stack0xfffffec8;
        FUN_00901ec0(local_118,local_4c[0],puVar8);
        local_4._0_1_ = 0xe;
        _Memory = local_10c;
        piVar10 = local_108;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
      }
    }
    local_11c = local_11c + 1;
    local_120 = local_120 + 8;
  } while( true );
}


//// FUNCTION FUN_008d07d0 @ 008d07d0 ////

int * __thiscall FUN_008d07d0(void *this,float param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this_00;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cedab3;
  local_c = ExceptionList;
  piVar1 = (int *)0x0;
  if ((*(int *)((int)this + 4) != 0) && (**(char **)this == '=')) {
    ExceptionList = &local_c;
    puVar2 = FUN_00430770(this,local_2c,1,0xffffffff);
    local_4 = 0;
    piVar1 = FUN_008f3160((char *)*puVar2);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if ((piVar1 != (int *)0x0) && (param_1 != 1.0)) {
      this_00 = operator_new(0x18);
      local_4 = 1;
      if (this_00 == (void *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_008cd080(this_00,param_1);
      }
      local_4 = 0xffffffff;
      piVar1 = FUN_008f0db0((int)piVar1,(int)puVar2);
      ExceptionList = local_c;
      return piVar1;
    }
  }
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_008d08c0 @ 008d08c0 ////

uint FUN_008d08c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  void *this;
  int iVar8;
  undefined4 uVar9;
  float10 fVar10;
  uint *local_124;
  undefined4 *local_120;
  undefined4 *local_11c;
  uint local_118 [5];
  undefined4 *local_104;
  undefined1 *local_100;
  float local_fc;
  void *local_f8;
  char *local_f4;
  undefined4 local_f0;
  uint local_ec;
  char local_e8 [20];
  char *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  char local_c8 [20];
  undefined4 local_b4;
  undefined4 local_b0;
  char *local_ac;
  int local_a8;
  uint local_a4;
  char local_a0 [20];
  void *local_8c [2];
  uint local_84;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  char *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cedb0d;
  local_c = ExceptionList;
  local_d4 = local_c8;
  local_c8[0] = '\0';
  local_d0 = 0;
  local_cc = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_d4,"",0);
  local_d0 = 0;
  *local_d4 = '\0';
  local_b4 = 0;
  local_b0 = 0;
  local_4 = 0;
  FUN_0048f010(&stack0x00000004,&local_4c);
  local_124 = local_118;
  local_118[0] = local_118[0] & 0xffffff00;
  local_120 = (undefined4 *)0x0;
  local_11c = (undefined4 *)0x14;
  FUN_004015d0(&local_124,local_4c,local_48);
  puVar5 = FUN_0040d6b0(local_2c,"data/rule/",&local_124);
  FUN_004312e0(local_8c,puVar5,".csv");
  local_4._0_1_ = 1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_00553310(local_8c);
  bVar3 = FUN_00553a50(&local_d4,local_8c);
  if (bVar3) {
    local_ac = local_a0;
    local_a0[0] = '\0';
    local_a8 = 0;
    local_a4 = 0x14;
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 0x14;
    local_f4 = local_e8;
    local_e8[0] = '\0';
    local_f0 = 0;
    local_ec = 0x14;
    _strncpy(local_f4,"",0);
    local_f0 = 0;
    *local_f4 = '\0';
    local_4 = CONCAT31(local_4._1_3_,4);
    uVar6 = FUN_00552520(&local_d4,&local_ac);
    cVar4 = (char)uVar6;
    while (cVar4 != '\0') {
      if ((local_a8 != 0) && (*local_ac != '#')) {
        local_120 = (undefined4 *)0x0;
        local_11c = (undefined4 *)0x0;
        local_118[0] = 0;
        local_104 = (undefined4 *)&stack0xfffffec0;
        local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_0056cc90(local_ac,0x2c,&local_124);
        puVar5 = local_120;
        if ((local_120 == (undefined4 *)0x0) || ((uint)((int)local_11c - (int)local_120 >> 5) < 5))
        {
LAB_008d0c86:
          local_4 = CONCAT31(local_4._1_3_,4);
          if (local_120 != (undefined4 *)0x0) {
            FUN_00405fe0(local_120,local_11c);
                    /* WARNING: Subroutine does not return */
            _free(local_120);
          }
        }
        else {
          local_104 = local_120 + 0x18;
          uVar9 = 0;
          puVar1 = local_120 + 8;
          puVar2 = local_120 + 0x20;
          local_fc = 1.0;
          if (local_120[1] != 0) {
            FUN_004015d0(&local_f4,(char *)*local_120,local_120[1]);
          }
          if (puVar5[9] != 0) {
            local_100 = &stack0xfffffec8;
            uVar9 = FUN_008c9ae0(local_f8,(undefined4 *)*puVar1);
          }
          if (puVar5[0x21] != 0) {
            fVar10 = FUN_00567d60(puVar2);
            local_fc = (float)fVar10;
          }
          piVar7 = FUN_008d07d0(local_104,local_fc);
          if (piVar7 != (int *)0x0) {
            local_100 = operator_new(0x18);
            local_4._0_1_ = 6;
            if (local_100 == (void *)0x0) {
              this = (void *)0x0;
            }
            else {
              this = (void *)FUN_008f8550(local_100,piVar7,uVar9);
            }
            local_4 = CONCAT31(local_4._1_3_,5);
            iVar8 = 0xa0;
            for (uVar6 = 5;
                (local_120 != (undefined4 *)0x0 &&
                (uVar6 < (uint)((int)local_11c - (int)local_120 >> 5))); uVar6 = uVar6 + 1) {
              puVar5 = FUN_008eff30((undefined4 *)(iVar8 + (int)local_120));
              if (puVar5 != (undefined4 *)0x0) {
                FUN_008f8610(this,puVar5);
              }
              iVar8 = iVar8 + 0x20;
            }
            local_100 = &stack0xfffffec4;
            FUN_008f7530(*(void **)((int)local_f8 + 0x30),local_f4,this);
            goto LAB_008d0c86;
          }
          local_4 = CONCAT31(local_4._1_3_,4);
          if (local_120 != (undefined4 *)0x0) {
            FUN_00405fe0(local_120,local_11c);
                    /* WARNING: Subroutine does not return */
            _free(local_120);
          }
        }
        local_120 = (undefined4 *)0x0;
        local_11c = (undefined4 *)0x0;
        local_118[0] = 0;
      }
      uVar6 = FUN_00552520(&local_d4,&local_ac);
      cVar4 = (char)uVar6;
    }
    if (0x14 < local_ec) {
                    /* WARNING: Subroutine does not return */
      _free(local_f4);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    local_4 = 0xffffffff;
    uVar9 = FUN_00552ce0(&local_d4);
    uVar6 = CONCAT31((int3)((uint)uVar9 >> 8),1);
  }
  else {
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    local_4 = 0xffffffff;
    uVar6 = FUN_00552ce0(&local_d4);
    uVar6 = uVar6 & 0xffffff00;
  }
  ExceptionList = local_c;
  return uVar6;
}


//// FUNCTION FUN_008d0dd0 @ 008d0dd0 ////

int __fastcall FUN_008d0dd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c73f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008d0e00 @ 008d0e00 ////

int __fastcall FUN_008d0e00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c7440();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008d0e50 @ 008d0e50 ////

undefined4 * __thiscall FUN_008d0e50(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cedb28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_008ccff0((void *)((int)this + 0x20),(int)(param_1 + 8));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008d0ec0 @ 008d0ec0 ////

undefined4 * __fastcall FUN_008d0ec0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cedb69;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d66654;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d6664c;
  iVar1 = FUN_004706e0();
  param_1[0x19] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x19] + 4) = param_1[0x19];
  *(undefined4 *)param_1[0x19] = param_1[0x19];
  *(undefined4 *)(param_1[0x19] + 8) = param_1[0x19];
  param_1[0x1a] = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_004706e0();
  param_1[0x1c] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1c];
  *(undefined4 *)param_1[0x1c] = param_1[0x1c];
  *(undefined4 *)(param_1[0x1c] + 8) = param_1[0x1c];
  param_1[0x1d] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  *(undefined1 *)((int)param_1 + 0x7a) = 0;
  *(undefined1 *)((int)param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined1 *)((int)param_1 + 0x7d) = 1;
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  *(undefined1 *)((int)param_1 + 0x7f) = 1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((int)param_1 + 0x81) = 1;
  *(undefined1 *)((int)param_1 + 0x82) = 1;
  *(undefined1 *)((int)param_1 + 0x83) = 1;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  *(undefined1 *)((int)param_1 + 0x86) = 0;
  *(undefined1 *)((int)param_1 + 0x87) = 0;
  iVar1 = FUN_00496f90();
  param_1[0x23] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x23] + 4) = param_1[0x23];
  *(undefined4 *)param_1[0x23] = param_1[0x23];
  *(undefined4 *)(param_1[0x23] + 8) = param_1[0x23];
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x95) = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  *(undefined1 *)((int)param_1 + 0x97) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((int)param_1 + 0x99) = 0;
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  *(undefined1 *)((int)param_1 + 0x9e) = 1;
  *(undefined1 *)((int)param_1 + 0x9f) = 1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008d1050 @ 008d1050 ////

void * __thiscall FUN_008d1050(void *this,byte param_1)

{
  FUN_008d1070((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008d1070 @ 008d1070 ////

void __fastcall FUN_008d1070(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cedbc5;
  pvStack_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  FUN_00498d20((void *)(param_1 + 0x88),&local_10,(int *)**(int **)(param_1 + 0x8c),
               *(int **)(param_1 + 0x8c));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x8c));
}


//// FUNCTION FUN_008d1190 @ 008d1190 ////

void __fastcall FUN_008d1190(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008cc890(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008d11c0 @ 008d11c0 ////

void __fastcall FUN_008d11c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008cc950(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008d11f0 @ 008d11f0 ////

void __fastcall FUN_008d11f0(int param_1,undefined4 param_2)

{
  undefined4 *_Memory;
  void *_Memory_00;
  undefined4 *puVar1;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cedc57;
  pvStack_c = ExceptionList;
  local_4 = 0xb;
  puVar1 = (undefined4 *)(param_1 + 0x34);
  local_14 = 3;
  do {
    _Memory = (undefined4 *)*puVar1;
    local_10 = param_1;
    if (_Memory != (undefined4 *)0x0) {
      ExceptionList = &pvStack_c;
      FUN_009147b0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    puVar1 = puVar1 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  _Memory_00 = *(void **)(param_1 + 0x30);
  if (_Memory_00 != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_008f7390(_Memory_00);
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  if (*(void **)(param_1 + 0x98) != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x98));
  }
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_009020f0(param_1,param_2,0);
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(void **)(param_1 + 0x98) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_00471450((void *)(param_1 + 0x7c),&local_14,(int *)**(int **)(param_1 + 0x80),
               *(int **)(param_1 + 0x80));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x80));
}


//// FUNCTION FUN_008d14e0 @ 008d14e0 ////

void __fastcall FUN_008d14e0(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cedeb7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x90);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65738;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65770;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 2;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d657b4;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 3;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d657ec;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 4;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65834;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 5;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d6587c;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 6;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d658c4;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 7;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d6590c;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 8;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d6599c;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 9;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65a14;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 10;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65a94;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0xb;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65b0c;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0xc;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65b7c;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0xd;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65bfc;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0xe;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65c7c;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0xf;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65cfc;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0x10;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65d6c;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0x11;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65dec;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0x12;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65e5c;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x90);
  local_4 = 0x13;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d65edc;
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x14;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d662a0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x15;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d662c0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x16;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d662e0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x17;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66240;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x18;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66260;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x19;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66280;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x1a;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66040;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x1b;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66060;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x1c;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66080;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x1d;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d660a0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x1e;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d660c0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x1f;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d660e0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x20;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66100;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x21;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66120;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x22;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66140;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x23;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66160;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x24;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66180;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x25;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d661a0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x26;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66220;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  pvVar2 = operator_new(0xa0);
  local_4 = 0x27;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00907400(pvVar2,(undefined4 *)"movie_pr");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  pvVar2 = operator_new(0x98);
  local_4 = 0x28;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_009060f0(pvVar2,"studio_niceness");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  pvVar2 = operator_new(0x98);
  local_4 = 0x29;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00906200(pvVar2,"studio_connectedness");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  pvVar2 = operator_new(0x98);
  local_4 = 0x2a;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00906310(pvVar2,"studio_repair");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  pvVar2 = operator_new(0x98);
  local_4 = 0x2b;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00906420(pvVar2,"studio_catering");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  pvVar2 = operator_new(0x98);
  local_4 = 0x2c;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00906530(pvVar2,"studio_sanitation");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  pvVar2 = operator_new(0x98);
  local_4 = 0x2d;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00906640(pvVar2,"studio_ornaments");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  pvVar2 = operator_new(0x98);
  local_4 = 0x2e;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00906750(pvVar2,"studio_cleanliness");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  pvVar2 = operator_new(0xa0);
  local_4 = 0x2f;
  if (pvVar2 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00905ec0(pvVar2,(undefined4 *)"trailer_quality");
  }
  local_4 = 0xffffffff;
  FUN_008cfdc0(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x30;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d661c0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x31;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d661e0;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x32;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66200;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x33;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66000;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  piVar1 = operator_new(0x70);
  local_4 = 0x34;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d66020;
  }
  local_4 = 0xffffffff;
  FUN_008cfe50(param_1,piVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008d23b0 @ 008d23b0 ////

void __fastcall FUN_008d23b0(int param_1)

{
  FUN_008cb3e0(param_1);
  if (DAT_010503d0 == '\0') {
    if (DAT_010503d1 == '\0') {
      FUN_008cf370();
    }
    else {
      FUN_008cf370();
      *(undefined1 *)(param_1 + 0x8e) = 1;
    }
  }
  else if (DAT_010503d1 == '\0') {
    FUN_008cfb50(param_1);
  }
  else {
    FUN_008cfc10(param_1);
  }
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 0x78) != 0.0)) {
    FUN_00495160(0);
    return;
  }
  FUN_00495160(1);
  return;
}


//// FUNCTION FUN_008d2430 @ 008d2430 ////

void __fastcall FUN_008d2430(void *param_1)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_534;
  char *local_530;
  undefined4 local_52c;
  uint local_528;
  char local_524 [20];
  undefined4 local_510;
  undefined4 local_50c;
  void *local_508;
  char *local_504;
  undefined4 local_500;
  uint local_4fc;
  char local_4f8 [20];
  char *local_4e4;
  undefined4 local_4e0;
  uint local_4dc;
  char local_4d8 [20];
  char *local_4c4;
  undefined4 local_4c0;
  uint local_4bc;
  char local_4b8 [20];
  char *local_4a4;
  undefined4 local_4a0;
  uint local_49c;
  char local_498 [20];
  char *local_484;
  undefined4 local_480;
  uint local_47c;
  char local_478 [20];
  char *local_464;
  undefined4 local_460;
  uint local_45c;
  char local_458 [20];
  char *local_444;
  undefined4 local_440;
  uint local_43c;
  char local_438 [20];
  char *local_424;
  undefined4 local_420;
  uint local_41c;
  char local_418 [20];
  char *local_404;
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [20];
  char *local_3e4;
  undefined4 local_3e0;
  uint local_3dc;
  char local_3d8 [20];
  char *local_3c4;
  undefined4 local_3c0;
  uint local_3bc;
  char local_3b8 [20];
  char *local_3a4;
  undefined4 local_3a0;
  uint local_39c;
  char local_398 [20];
  char *local_384;
  undefined4 local_380;
  uint local_37c;
  char local_378 [20];
  char *local_364;
  undefined4 local_360;
  uint local_35c;
  char local_358 [20];
  char *local_344;
  undefined4 local_340;
  uint local_33c;
  char local_338 [20];
  char *local_324;
  undefined4 local_320;
  uint local_31c;
  char local_318 [20];
  char *local_304;
  undefined4 local_300;
  uint local_2fc;
  char local_2f8 [20];
  undefined4 local_2e4 [54];
  void *local_20c [2];
  uint local_204;
  void *local_1ec [2];
  uint local_1e4;
  void *local_1cc [2];
  uint local_1c4;
  void *local_1ac [2];
  uint local_1a4;
  void *local_18c [2];
  uint local_184;
  void *local_16c [2];
  uint local_164;
  void *local_14c [2];
  uint local_144;
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
  puStack_8 = &LAB_00cedff1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_508 = param_1;
  FUN_00559fb0(local_2e4);
  local_4 = 0;
  piVar10 = (int *)((int)param_1 + 0x34);
  iVar9 = 3;
  do {
    FUN_00914720(*piVar10);
    piVar10 = piVar10 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_008c9ee0(*(void **)(*(int *)((int)param_1 + 0x28) + 4));
  *(int *)(*(int *)((int)param_1 + 0x28) + 4) = *(int *)((int)param_1 + 0x28);
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x28) = *(undefined4 *)((int)param_1 + 0x28);
  local_530 = local_524;
  *(int *)(*(int *)((int)param_1 + 0x28) + 8) = *(int *)((int)param_1 + 0x28);
  local_524[0] = '\0';
  local_52c = 0;
  local_528 = 0x14;
  _strncpy(local_530,"SITT",4);
  local_52c = 4;
  local_530[4] = '\0';
  local_4._0_1_ = 1;
  cVar3 = FUN_0055be10(local_2e4,&local_530,'\0');
  if (0x14 < local_528) {
                    /* WARNING: Subroutine does not return */
    _free(local_530);
  }
  if (cVar3 != '\0') {
    local_530 = local_524;
    local_524[0] = '\0';
    local_52c = 0;
    local_528 = 0x14;
    _strncpy(local_530,"SITT",4);
    local_52c = 4;
    local_530[4] = '\0';
    local_4._0_1_ = 2;
    uVar4 = FUN_00558a50(local_2e4,&local_530,(undefined4 *)0x0);
    local_4._0_1_ = 0;
    if (0x14 < local_528) {
                    /* WARNING: Subroutine does not return */
      _free(local_530);
    }
    if ((char)uVar4 != '\0') {
      local_534 = 0x3e800000;
      local_50c = 0x3f000000;
      local_510 = 0x3e800000;
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c86c0(local_2e4,&DAT_00e5f220);
      FUN_008c86c0(local_2e4,&DAT_00e5f224);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8560(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008c8610(local_2e4);
      FUN_008d56b0(0,local_50c,local_534);
      FUN_008d56b0(1,0x3dcccccd,local_510);
      FUN_008cf500(local_2e4);
      local_530 = local_524;
      local_524[0] = '\0';
      local_52c = 0;
      local_528 = 0x14;
      _strncpy(local_530,"actions",7);
      local_52c = 7;
      local_530[7] = '\0';
      local_4._0_1_ = 3;
      uVar4 = FUN_00558a50(local_2e4,&local_530,(undefined4 *)0x1);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0x14 < local_528) {
                    /* WARNING: Subroutine does not return */
        _free(local_530);
      }
      if ((char)uVar4 != '\0') {
        cVar3 = FUN_00558bb0(local_2e4,6);
        while (cVar3 != '\0') {
          FUN_005562f0(local_2e4,local_1ec,1);
          local_4._0_1_ = 4;
          puVar5 = operator_new(400);
          local_4._0_1_ = 5;
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            puVar5 = FUN_009115c0(puVar5);
          }
          local_530 = local_524;
          local_524[0] = '\0';
          local_52c = 0;
          local_528 = 0x14;
          _strncpy(local_530,"build",5);
          local_52c = 5;
          local_530[5] = '\0';
          local_4._0_1_ = 6;
          FUN_005584e0(local_2e4,local_20c,&local_530);
          local_4._0_1_ = 8;
          if (0x14 < local_528) {
                    /* WARNING: Subroutine does not return */
            _free(local_530);
          }
          FUN_00911990(puVar5,local_20c);
          local_404 = local_3f8;
          local_534 = 0xffffffff;
          local_3f8[0] = '\0';
          local_400 = 0;
          local_3fc = 0x14;
          _strncpy(local_404,"command",7);
          local_400 = 7;
          local_404[7] = '\0';
          local_4._0_1_ = 9;
          puVar6 = FUN_005584e0(local_2e4,local_8c,&local_404);
          local_4._0_1_ = 10;
          FUN_00911480(puVar5,puVar6);
          if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c[0]);
          }
          if (0x14 < local_3fc) {
                    /* WARNING: Subroutine does not return */
            _free(local_404);
          }
          local_4a4 = local_498;
          local_498[0] = '\0';
          local_4a0 = 0;
          local_49c = 0x14;
          _strncpy(local_4a4,"tutorial",8);
          local_4a0 = 8;
          local_4a4[8] = '\0';
          local_4 = CONCAT31(local_4._1_3_,0xb);
          puVar6 = FUN_005584e0(local_2e4,local_2c,&local_4a4);
          uVar1 = puVar6[1];
          pcVar2 = (char *)*puVar6;
          if ((uint)puVar5[0x26] <= uVar1) {
            if (0x14 < (uint)puVar5[0x26]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar5[0x24]);
            }
            uVar7 = uVar1 + 0x20 & 0xffffffe0;
            puVar5[0x26] = uVar7;
            pvVar8 = _malloc(uVar7);
            puVar5[0x24] = pvVar8;
          }
          _strncpy((char *)puVar5[0x24],pcVar2,uVar1);
          puVar5[0x25] = uVar1;
          *(undefined1 *)(puVar5[0x24] + uVar1) = 0;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (0x14 < local_49c) {
                    /* WARNING: Subroutine does not return */
            _free(local_4a4);
          }
          local_4c4 = local_4b8;
          local_4b8[0] = '\0';
          local_4c0 = 0;
          local_4bc = 0x14;
          _strncpy(local_4c4,"tutorial_footer",0xf);
          local_4c0 = 0xf;
          local_4c4[0xf] = '\0';
          local_4 = CONCAT31(local_4._1_3_,0xc);
          puVar6 = FUN_005584e0(local_2e4,local_18c,&local_4c4);
          uVar1 = puVar6[1];
          pcVar2 = (char *)*puVar6;
          if ((uint)puVar5[0x2e] <= uVar1) {
            if (0x14 < (uint)puVar5[0x2e]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar5[0x2c]);
            }
            uVar7 = uVar1 + 0x20 & 0xffffffe0;
            puVar5[0x2e] = uVar7;
            pvVar8 = _malloc(uVar7);
            puVar5[0x2c] = pvVar8;
          }
          _strncpy((char *)puVar5[0x2c],pcVar2,uVar1);
          puVar5[0x2d] = uVar1;
          *(undefined1 *)(puVar5[0x2c] + uVar1) = 0;
          if (0x14 < local_184) {
                    /* WARNING: Subroutine does not return */
            _free(local_18c[0]);
          }
          if (0x14 < local_4bc) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c4);
          }
          local_364 = local_358;
          local_358[0] = '\0';
          local_360 = 0;
          local_35c = 0x14;
          _strncpy(local_364,"tutorial_target",0xf);
          local_360 = 0xf;
          local_364[0xf] = '\0';
          local_4 = CONCAT31(local_4._1_3_,0xd);
          puVar6 = FUN_005584e0(local_2e4,local_cc,&local_364);
          uVar1 = puVar6[1];
          pcVar2 = (char *)*puVar6;
          if ((uint)puVar5[0x36] <= uVar1) {
            if (0x14 < (uint)puVar5[0x36]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar5[0x34]);
            }
            uVar7 = uVar1 + 0x20 & 0xffffffe0;
            puVar5[0x36] = uVar7;
            pvVar8 = _malloc(uVar7);
            puVar5[0x34] = pvVar8;
          }
          _strncpy((char *)puVar5[0x34],pcVar2,uVar1);
          puVar5[0x35] = uVar1;
          *(undefined1 *)(puVar5[0x34] + uVar1) = 0;
          if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_cc[0]);
          }
          if (0x14 < local_35c) {
                    /* WARNING: Subroutine does not return */
            _free(local_364);
          }
          local_464 = local_458;
          local_458[0] = '\0';
          local_460 = 0;
          local_45c = 0x14;
          _strncpy(local_464,"tutorial_limit",0xe);
          local_460 = 0xe;
          local_464[0xe] = '\0';
          local_4._0_1_ = 0xe;
          uVar4 = FUN_00558750(local_2e4,&local_464,0);
          puVar5[0x5d] = uVar4;
          if (0x14 < local_45c) {
                    /* WARNING: Subroutine does not return */
            _free(local_464);
          }
          local_3a4 = local_398;
          local_398[0] = '\0';
          local_3a0 = 0;
          local_39c = 0x14;
          _strncpy(local_3a4,"sound",5);
          local_3a0 = 5;
          local_3a4[5] = '\0';
          local_4 = CONCAT31(local_4._1_3_,0xf);
          puVar6 = FUN_005584e0(local_2e4,local_14c,&local_3a4);
          uVar1 = puVar6[1];
          pcVar2 = (char *)*puVar6;
          if ((uint)puVar5[0x4e] <= uVar1) {
            if (0x14 < (uint)puVar5[0x4e]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar5[0x4c]);
            }
            uVar7 = uVar1 + 0x20 & 0xffffffe0;
            puVar5[0x4e] = uVar7;
            pvVar8 = _malloc(uVar7);
            puVar5[0x4c] = pvVar8;
          }
          _strncpy((char *)puVar5[0x4c],pcVar2,uVar1);
          puVar5[0x4d] = uVar1;
          *(undefined1 *)(puVar5[0x4c] + uVar1) = 0;
          if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
            _free(local_14c[0]);
          }
          if (0x14 < local_39c) {
                    /* WARNING: Subroutine does not return */
            _free(local_3a4);
          }
          local_424 = local_418;
          local_418[0] = '\0';
          local_420 = 0;
          local_41c = 0x14;
          _strncpy(local_424,"tannoy",6);
          local_420 = 6;
          local_424[6] = '\0';
          local_4 = CONCAT31(local_4._1_3_,0x10);
          puVar6 = FUN_005584e0(local_2e4,local_4c,&local_424);
          uVar1 = puVar6[1];
          pcVar2 = (char *)*puVar6;
          if ((uint)puVar5[0x56] <= uVar1) {
            if (0x14 < (uint)puVar5[0x56]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar5[0x54]);
            }
            uVar7 = uVar1 + 0x20 & 0xffffffe0;
            puVar5[0x56] = uVar7;
            pvVar8 = _malloc(uVar7);
            puVar5[0x54] = pvVar8;
          }
          _strncpy((char *)puVar5[0x54],pcVar2,uVar1);
          puVar5[0x55] = uVar1;
          *(undefined1 *)(puVar5[0x54] + uVar1) = 0;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
          if (0x14 < local_41c) {
                    /* WARNING: Subroutine does not return */
            _free(local_424);
          }
          local_324 = local_318;
          local_318[0] = '\0';
          local_320 = 0;
          local_31c = 0x14;
          _strncpy(local_324,"tannoy_priority",0xf);
          local_320 = 0xf;
          local_324[0xf] = '\0';
          local_4._0_1_ = 0x11;
          uVar4 = FUN_00558750(local_2e4,&local_324,3);
          puVar5[0x5c] = uVar4;
          local_4._0_1_ = 8;
          if (0x14 < local_31c) {
                    /* WARNING: Subroutine does not return */
            _free(local_324);
          }
          FUN_008c86c0(local_2e4,&local_534);
          local_3e4 = local_3d8;
          puVar5[0x5f] = local_534;
          local_3d8[0] = '\0';
          local_3e0 = 0;
          local_3dc = 0x14;
          _strncpy(local_3e4,"force_display",0xd);
          local_3e0 = 0xd;
          local_3e4[0xd] = '\0';
          local_4._0_1_ = 0x12;
          puVar6 = FUN_005584e0(local_2e4,local_10c,&local_3e4);
          iVar9 = __stricmp((char *)*puVar6,(char *)&PTR_LAB_00d4c7e0);
          *(char *)(puVar5 + 0x62) = '\x01' - (iVar9 != 0);
          if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
            _free(local_10c[0]);
          }
          if (0x14 < local_3dc) {
                    /* WARNING: Subroutine does not return */
            _free(local_3e4);
          }
          local_4e4 = local_4d8;
          local_4d8[0] = '\0';
          local_4e0 = 0;
          local_4dc = 0x14;
          _strncpy(local_4e4,"emergency",9);
          local_4e0 = 9;
          local_4e4[9] = '\0';
          local_4._0_1_ = 0x13;
          puVar6 = FUN_005584e0(local_2e4,local_1cc,&local_4e4);
          iVar9 = __stricmp((char *)*puVar6,(char *)&PTR_LAB_00d4c7e0);
          *(char *)((int)puVar5 + 0x189) = '\x01' - (iVar9 != 0);
          if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1cc[0]);
          }
          if (0x14 < local_4dc) {
                    /* WARNING: Subroutine does not return */
            _free(local_4e4);
          }
          local_484 = local_478;
          local_478[0] = '\0';
          local_480 = 0;
          local_47c = 0x14;
          _strncpy(local_484,"information",0xb);
          local_480 = 0xb;
          local_484[0xb] = '\0';
          local_4._0_1_ = 0x14;
          puVar6 = FUN_005584e0(local_2e4,local_1ac,&local_484);
          iVar9 = __stricmp((char *)*puVar6,(char *)&PTR_LAB_00d4c7e0);
          *(char *)((int)puVar5 + 0x18a) = '\x01' - (iVar9 != 0);
          if (0x14 < local_1a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1ac[0]);
          }
          if (0x14 < local_47c) {
                    /* WARNING: Subroutine does not return */
            _free(local_484);
          }
          local_444 = local_438;
          local_438[0] = '\0';
          local_440 = 0;
          local_43c = 0x14;
          _strncpy(local_444,"stream",6);
          local_440 = 6;
          local_444[6] = '\0';
          local_4._0_1_ = 0x15;
          puVar6 = FUN_005584e0(local_2e4,local_16c,&local_444);
          iVar9 = __stricmp((char *)*puVar6,(char *)&PTR_LAB_00d4c7e0);
          *(char *)((int)puVar5 + 0x18b) = '\x01' - (iVar9 != 0);
          if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
            _free(local_16c[0]);
          }
          if (0x14 < local_43c) {
                    /* WARNING: Subroutine does not return */
            _free(local_444);
          }
          local_504 = local_4f8;
          local_4f8[0] = '\0';
          local_500 = 0;
          local_4fc = 0x20;
          local_504 = _malloc(0x20);
          _strncpy(local_504,"stream_source_cursor",0x14);
          local_500 = 0x14;
          local_504[0x14] = '\0';
          local_4._0_1_ = 0x16;
          puVar6 = FUN_005584e0(local_2e4,local_12c,&local_504);
          iVar9 = __stricmp((char *)*puVar6,(char *)&PTR_LAB_00d4c7e0);
          *(char *)(puVar5 + 99) = '\x01' - (iVar9 != 0);
          if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
            _free(local_12c[0]);
          }
          if (0x14 < local_4fc) {
                    /* WARNING: Subroutine does not return */
            _free(local_504);
          }
          local_3c4 = local_3b8;
          local_3b8[0] = '\0';
          local_3c0 = 0;
          local_3bc = 0x14;
          _strncpy(local_3c4,"bubble_sound",0xc);
          local_3c0 = 0xc;
          local_3c4[0xc] = '\0';
          local_4._0_1_ = 0x17;
          puVar6 = FUN_005584e0(local_2e4,local_ec,&local_3c4);
          iVar9 = __stricmp((char *)*puVar6,(char *)&PTR_LAB_00d4c7e0);
          *(char *)((int)puVar5 + 0x18d) = '\x01' - (iVar9 != 0);
          if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ec[0]);
          }
          if (0x14 < local_3bc) {
                    /* WARNING: Subroutine does not return */
            _free(local_3c4);
          }
          local_384 = local_378;
          local_378[0] = '\0';
          local_380 = 0;
          local_37c = 0x14;
          _strncpy(local_384,"room",4);
          local_380 = 4;
          local_384[4] = '\0';
          local_4 = CONCAT31(local_4._1_3_,0x18);
          puVar6 = FUN_005584e0(local_2e4,local_ac,&local_384);
          uVar1 = puVar6[1];
          pcVar2 = (char *)*puVar6;
          if ((uint)puVar5[0x3e] <= uVar1) {
            if (0x14 < (uint)puVar5[0x3e]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar5[0x3c]);
            }
            uVar7 = uVar1 + 0x20 & 0xffffffe0;
            puVar5[0x3e] = uVar7;
            pvVar8 = _malloc(uVar7);
            puVar5[0x3c] = pvVar8;
          }
          _strncpy((char *)puVar5[0x3c],pcVar2,uVar1);
          puVar5[0x3d] = uVar1;
          *(undefined1 *)(puVar5[0x3c] + uVar1) = 0;
          if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac[0]);
          }
          if (0x14 < local_37c) {
                    /* WARNING: Subroutine does not return */
            _free(local_384);
          }
          local_344 = local_338;
          local_338[0] = '\0';
          local_340 = 0;
          local_33c = 0x14;
          _strncpy(local_344,"icon",4);
          local_340 = 4;
          local_344[4] = '\0';
          local_4 = CONCAT31(local_4._1_3_,0x19);
          puVar6 = FUN_005584e0(local_2e4,local_6c,&local_344);
          uVar1 = puVar6[1];
          pcVar2 = (char *)*puVar6;
          if ((uint)puVar5[0x46] <= uVar1) {
            if (0x14 < (uint)puVar5[0x46]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar5[0x44]);
            }
            uVar7 = uVar1 + 0x20 & 0xffffffe0;
            puVar5[0x46] = uVar7;
            pvVar8 = _malloc(uVar7);
            puVar5[0x44] = pvVar8;
          }
          _strncpy((char *)puVar5[0x44],pcVar2,uVar1);
          puVar5[0x45] = uVar1;
          *(undefined1 *)(puVar5[0x44] + uVar1) = 0;
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c[0]);
          }
          if (0x14 < local_33c) {
                    /* WARNING: Subroutine does not return */
            _free(local_344);
          }
          local_304 = local_2f8;
          local_2f8[0] = '\0';
          local_300 = 0;
          local_2fc = 0x14;
          _strncpy(local_304,"timeout",7);
          local_300 = 7;
          local_304[7] = '\0';
          local_4._0_1_ = 0x1a;
          uVar4 = FUN_00558750(local_2e4,&local_304,0);
          puVar5[0x5e] = uVar4;
          local_4._0_1_ = 8;
          if (0x14 < local_2fc) {
                    /* WARNING: Subroutine does not return */
            _free(local_304);
          }
          local_534 = DAT_00e5f220;
          FUN_008c86c0(local_2e4,&local_534);
          puVar5[0x60] = local_534;
          local_534 = DAT_00e5f224;
          FUN_008c86c0(local_2e4,&local_534);
          puVar5[0x61] = local_534;
          FUN_008cff70(local_508,puVar5);
          if (0x14 < local_204) {
                    /* WARNING: Subroutine does not return */
            _free(local_20c[0]);
          }
          local_4 = (uint)local_4._1_3_ << 8;
          if (0x14 < local_1e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1ec[0]);
          }
          cVar3 = FUN_00558bb0(local_2e4,2);
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_2e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008d3a40 @ 008d3a40 ////

int __fastcall FUN_008d3a40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c7350();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008d3a70 @ 008d3a70 ////

int __fastcall FUN_008d3a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008c73a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008d3aa0 @ 008d3aa0 ////

undefined4 * __thiscall FUN_008d3aa0(void *this,undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee008;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_008ccff0((void *)((int)this + 0x20),param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008d3b50 @ 008d3b50 ////

undefined4 * FUN_008d3b50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee02b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_008d0ec0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_008d3bb0 @ 008d3bb0 ////

void * __fastcall FUN_008d3bb0(void *param_1,undefined4 param_2,byte param_3)

{
  FUN_008d11f0((int)param_1,param_2);
  if ((param_3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}


//// FUNCTION FUN_008d3bd0 @ 008d3bd0 ////

undefined4 *
FUN_008d3bd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cee051;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x3c);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_008d0e50(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0xe) = param_5;
    *(undefined1 *)((int)puVar1 + 0x39) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_008d3c70 @ 008d3c70 ////

void FUN_008d3c70(void)

{
  void *_Memory;
  undefined4 extraout_EDX;
  
  if (DAT_010503ec != (undefined4 *)0x0) {
    (**(code **)*DAT_010503ec)(1);
  }
  (*(code *)DAT_010503d8[1])();
  DAT_010503ec = (undefined4 *)0x0;
  (*(code *)*DAT_010503d8)();
  _Memory = DAT_010503d4;
  if (DAT_010503d4 != (void *)0x0) {
    FUN_008d11f0((int)DAT_010503d4,extraout_EDX);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_010503d4 = (void *)0x0;
  return;
}


//// FUNCTION FUN_008d3cd0 @ 008d3cd0 ////

void __thiscall
FUN_008d3cd0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cee068;
  local_c = ExceptionList;
  if (0x5d1745b < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_008d3bd0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x38);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x38) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xe] == '\0') {
LAB_008d3dcb:
        *(undefined1 *)(*piVar4 + 0x38) = 1;
        *(undefined1 *)(piVar5 + 0xe) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x38) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_005d1b80(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x38) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x38) = 0;
        FUN_005d1340(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xe] == '\0') goto LAB_008d3dcb;
      if (piVar6 == (int *)*piVar2) {
        FUN_005d1340(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x38) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x38) = 0;
      FUN_005d1b80(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x38);
  } while( true );
}


//// FUNCTION FUN_008d3e80 @ 008d3e80 ////

void __thiscall FUN_008d3e80(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x39) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_008d3ee4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_008d3ee9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_008d3ee4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_008d3ee9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x39) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_008d3cd0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_008c4620((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_008d3cd0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_008d3fa0 @ 008d3fa0 ////

undefined4 * __thiscall FUN_008d3fa0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_008d3cd0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_008d3cd0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_008d3cd0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_008c4620((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x39) != '\0') {
          FUN_008d3cd0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_008d3cd0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_005d13e0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_008d4122;
      }
      if (*(char *)(param_2[2] + 0x39) != '\0') {
        FUN_008d3cd0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_008d3cd0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_008d4122:
  puVar4 = (undefined4 *)FUN_008d3e80(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_008d4150 @ 008d4150 ////

int * __thiscall FUN_008d4150(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uStack_48;
  undefined1 local_44 [4];
  int *local_40;
  undefined4 local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee090;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_008c59c0(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    uVar3 = FUN_00441060(puVar1,piVar2 + 3);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return piVar2 + 0xb;
    }
  }
  local_40 = (int *)FUN_0048f380();
  *(undefined1 *)((int)local_40 + 0x2d) = 1;
  local_40[1] = (int)local_40;
  *local_40 = (int)local_40;
  local_40[2] = (int)local_40;
  local_3c = 0;
  local_4 = 0;
  piVar4 = FUN_008d3aa0(local_38,puVar1,(int)local_44);
  local_4._0_1_ = 1;
  FUN_008d3fa0(this,&param_1,piVar2,piVar4);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d4870((int)local_38);
  local_4 = 0xffffffff;
  FUN_0048fbd0(local_44,&uStack_48,(int *)*local_40,local_40);
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}


//// FUNCTION FUN_008d4260 @ 008d4260 ////

void __fastcall FUN_008d4260(int param_1)

{
  int *this;
  undefined4 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *local_94;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [20];
  undefined1 *local_74;
  undefined4 local_70;
  uint local_6c;
  undefined1 local_68 [20];
  char *local_54;
  uint local_50;
  uint local_4c;
  char *local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee0c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(&stack0x00000008,&local_54);
  local_4 = 0;
  FUN_0048f010(&stack0x00000004,&local_34);
  local_94 = local_88;
  local_88[0] = 0;
  local_90 = 0;
  local_8c = 0x14;
  FUN_004015d0(&local_94,local_54,local_50);
  local_74 = local_68;
  local_68[0] = 0;
  local_70 = 0;
  local_6c = 0x14;
  FUN_004015d0(&local_74,local_34,local_30);
  ppuVar2 = &local_94;
  puVar1 = local_14;
  local_4 = CONCAT31(local_4._1_3_,3);
  this = FUN_008d4150((void *)(param_1 + 0x70),&local_74);
  FUN_0048fab0(this,puVar1,ppuVar2);
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008d4390 @ 008d4390 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_008d4390(void *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_e0 [4];
  int *local_dc;
  int *local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  char *local_ac;
  undefined4 local_a8;
  uint local_a4;
  char local_a0 [20];
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  void *local_6c;
  int local_68;
  uint local_64;
  void *local_4c [2];
  uint local_44;
  byte *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cee11f;
  local_c = ExceptionList;
  local_dc = (int *)0x0;
  local_d8 = (int *)0x0;
  local_d4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((DAT_01050434 & 1) == 0) {
    DAT_01050434 = DAT_01050434 | 1;
    DAT_01050414 = &DAT_01050420;
    DAT_01050420 = 0;
    _DAT_01050418 = 0;
    DAT_0105041c = 0x14;
    ExceptionList = &local_c;
    _strncpy(&DAT_01050420,"modes",5);
    _DAT_01050418 = 5;
    DAT_01050414[5] = 0;
    _atexit(FUN_00d13d80);
  }
  local_cc = local_c0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x14;
  _strncpy(local_cc,"activators",10);
  local_c8 = 10;
  local_cc[10] = '\0';
  local_4._0_1_ = 1;
  uVar3 = FUN_00558a50(param_1,&local_cc,(undefined4 *)0x1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  if ((char)uVar3 != '\0') {
    cVar2 = FUN_00558bb0(param_1,6);
    while (cVar2 != '\0') {
      FUN_005584e0(param_1,&local_6c,&DAT_01050414);
      local_4._0_1_ = 2;
      if (local_68 == 0) {
        piVar4 = local_d8;
        if (local_dc != local_d8) {
          piVar4 = FUN_004bee00(local_d8,local_d8,local_dc);
          for (piVar7 = piVar4; piVar7 != local_d8; piVar7 = piVar7 + 8) {
            if (0x14 < (uint)piVar7[2]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)*piVar7);
            }
          }
        }
        local_d8 = piVar4;
        local_cc = local_c0;
        local_c0[0] = '\0';
        local_c8 = 0;
        local_c4 = 0x14;
        _strncpy(local_cc,"normal",6);
        local_c8 = 6;
        local_cc[6] = '\0';
        local_4._0_1_ = 3;
        FUN_0043a2d0(local_e0,&local_cc);
        if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc);
        }
        local_ac = local_a0;
        local_a0[0] = '\0';
        local_a8 = 0;
        local_a4 = 0x14;
        _strncpy(local_ac,(char *)&PTR_LAB_00d66600,3);
        local_a8 = 3;
        local_ac[3] = '\0';
        local_4._0_1_ = 4;
        FUN_0043a2d0(local_e0,&local_ac);
        if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac);
        }
        local_8c = local_80;
        local_80[0] = '\0';
        local_88 = 0;
        local_84 = 0x14;
        _strncpy(local_8c,"sandbox",7);
        local_88 = 7;
        local_8c[7] = '\0';
        local_4._0_1_ = 5;
        FUN_0043a2d0(local_e0,&local_8c);
        local_4._0_1_ = 2;
        if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
          _free(local_8c);
        }
      }
      else {
        local_d0 = &stack0xffffff04;
        FUN_0056cc90(local_6c,0x3b,local_e0);
      }
      uVar3 = FUN_00558120(param_1,0);
      cVar2 = (char)uVar3;
      while (cVar2 != '\0') {
        FUN_00558de0(param_1,local_2c);
        local_4._0_1_ = 6;
        pbVar5 = local_2c[0];
        pbVar8 = DAT_01050414;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_008d46e2:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_008d46e7;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_008d46e2;
          pbVar5 = pbVar5 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_008d46e7:
        if (iVar6 != 0) {
          FUN_00558590(param_1,local_4c,4);
          local_4._0_1_ = 7;
          for (uVar9 = 0;
              (local_dc != (int *)0x0 && (uVar9 < (uint)((int)local_d8 - (int)local_dc >> 5)));
              uVar9 = uVar9 + 1) {
            local_d0 = &stack0xffffff08;
            FUN_008d4260(param_2);
          }
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
        }
        local_4._0_1_ = 2;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        uVar3 = FUN_00558120(param_1,2);
        cVar2 = (char)uVar3;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      cVar2 = FUN_00558bb0(param_1,2);
    }
  }
  piVar4 = local_dc;
  if (local_dc == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  while( true ) {
    if (piVar4 == local_d8) {
                    /* WARNING: Subroutine does not return */
      _free(local_dc);
    }
    if (0x14 < (uint)piVar4[2]) break;
    piVar4 = piVar4 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*piVar4);
}


//// FUNCTION FUN_008d4830 @ 008d4830 ////

uint FUN_008d4830(undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *this;
  undefined4 *puVar4;
  uint uVar5;
  char *local_150;
  undefined4 local_14c;
  uint local_148;
  char local_144 [20];
  char *local_130;
  undefined4 local_12c;
  uint local_128;
  char local_124 [20];
  void *local_110;
  undefined1 *local_10c;
  undefined4 *local_108;
  void *local_104;
  int local_100;
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee180;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_4 = 0;
  cVar2 = FUN_0055be10(local_e4,param_1,'\0');
  if (cVar2 != '\0') {
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"",0);
    local_12c = 0;
    *local_130 = '\0';
    local_4._0_1_ = 1;
    uVar3 = FUN_00558a50(local_e4,&local_130,(undefined4 *)0x0);
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    if ((char)uVar3 != '\0') {
      local_130 = local_124;
      local_124[0] = '\0';
      local_12c = 0;
      local_128 = 0x14;
      _strncpy(local_130,"name",4);
      local_12c = 4;
      local_130[4] = '\0';
      local_4._0_1_ = 2;
      FUN_005584e0(local_e4,&local_104,&local_130);
      local_4._0_1_ = 4;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 4;
      if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
        _free(local_130);
      }
      if (local_100 != 0) {
        local_108 = operator_new(0x80);
        local_4._0_1_ = 5;
        if (local_108 == (undefined4 *)0x0) {
          this = (undefined4 *)0x0;
        }
        else {
          local_10c = &stack0xfffffe9c;
          this = FUN_005d4e00(local_108);
        }
        local_150 = local_144;
        local_144[0] = '\0';
        local_14c = 0;
        local_148 = 0x14;
        _strncpy(local_150,"activators",10);
        local_14c = 10;
        local_150[10] = '\0';
        local_4._0_1_ = 6;
        uVar3 = FUN_00558a50(local_e4,&local_150,(undefined4 *)0x0);
        local_4._0_1_ = 4;
        if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
          _free(local_150);
        }
        if ((char)uVar3 != '\0') {
          FUN_008d4390(local_e4,(int)this);
        }
        local_150 = local_144;
        local_144[0] = '\0';
        local_14c = 0;
        local_148 = 0x14;
        _strncpy(local_150,"root",4);
        local_14c = 4;
        local_150[4] = '\0';
        local_4._0_1_ = 7;
        uVar3 = FUN_00558a50(local_e4,&local_150,(undefined4 *)0x0);
        local_4 = CONCAT31(local_4._1_3_,4);
        if (local_148 < 0x15) {
          if ((char)uVar3 != '\0') {
            puVar4 = FUN_008d0140(local_e4);
            FUN_005d0e40(this,puVar4);
          }
          FUN_008cfee0(local_110,this);
          if (local_fc < 0x15) {
            local_4 = 0xffffffff;
            uVar3 = FUN_00558920(local_e4);
            ExceptionList = local_c;
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
                    /* WARNING: Subroutine does not return */
          _free(local_104);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_150);
      }
      if (0x14 < local_fc) {
        local_4._0_1_ = uVar1;
                    /* WARNING: Subroutine does not return */
        _free(local_104);
      }
    }
  }
  local_4 = 0xffffffff;
  uVar5 = FUN_00558920(local_e4);
  ExceptionList = local_c;
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_008d4b30 @ 008d4b30 ////

void __fastcall FUN_008d4b30(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee1b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008c9ea0(*(void **)(*(int *)(param_1 + 0x1c) + 4));
  *(int *)(*(int *)(param_1 + 0x1c) + 4) = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  local_124 = local_118;
  *(int *)(*(int *)(param_1 + 0x1c) + 8) = *(int *)(param_1 + 0x1c);
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"SITTSets",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_124);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  cVar1 = FUN_00558bb0(local_e4,0);
  do {
    if (cVar1 == '\0') {
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
    cVar1 = FUN_00558bb0(local_e4,6);
    if (cVar1 != '\0') {
      puVar2 = FUN_00556390(local_e4,local_104);
      local_4._0_1_ = 3;
      FUN_008d4830(puVar2);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      FUN_00558bb0(local_e4,5);
    }
    cVar1 = FUN_00558bb0(local_e4,2);
  } while( true );
}


//// FUNCTION FUN_008d4c80 @ 008d4c80 ////

void __fastcall FUN_008d4c80(void *param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee1cb;
  local_c = ExceptionList;
  pvVar1 = *(void **)((int)param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_008f7390(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_008f7500((int)pvVar1);
  }
  local_4 = 0xffffffff;
  *(int *)((int)param_1 + 0x30) = iVar2;
  FUN_008d2430(param_1);
  FUN_008d08c0();
  FUN_008d08c0();
  FUN_008d08c0();
  FUN_008d08c0();
  FUN_008d08c0();
  FUN_008d08c0();
  FUN_008d4b30((int)param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION SITT_TutorialSystem_Constructor @ 008d4da0 ////

void * __fastcall SITT_TutorialSystem_Constructor(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee2ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_008c7350();
  *(int *)((int)param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)param_1 + 4) + 4) = *(int *)((int)param_1 + 4);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
  *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 8) = 0;
  local_4 = 0;
  iVar1 = FUN_008c73a0();
  *(int *)((int)param_1 + 0x10) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)param_1 + 0x10) + 4) = *(int *)((int)param_1 + 0x10);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
  *(int *)(*(int *)((int)param_1 + 0x10) + 8) = *(int *)((int)param_1 + 0x10);
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  local_4._0_1_ = 1;
  iVar1 = FUN_008c73f0();
  *(int *)((int)param_1 + 0x1c) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)param_1 + 0x1c) + 4) = *(int *)((int)param_1 + 0x1c);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)param_1 + 0x1c);
  *(int *)(*(int *)((int)param_1 + 0x1c) + 8) = *(int *)((int)param_1 + 0x1c);
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_008c7440();
  *(int *)((int)param_1 + 0x28) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)param_1 + 0x28) + 4) = *(int *)((int)param_1 + 0x28);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x28) = *(undefined4 *)((int)param_1 + 0x28);
  *(int *)(*(int *)((int)param_1 + 0x28) + 8) = *(int *)((int)param_1 + 0x28);
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  local_4._0_1_ = 3;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  iVar1 = FUN_004706e0();
  *(int *)((int)param_1 + 0x44) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)param_1 + 0x44) + 4) = *(int *)((int)param_1 + 0x44);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x44) = *(undefined4 *)((int)param_1 + 0x44);
  *(int *)(*(int *)((int)param_1 + 0x44) + 8) = *(int *)((int)param_1 + 0x44);
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  local_4._0_1_ = 4;
  iVar1 = FUN_004706e0();
  *(int *)((int)param_1 + 0x50) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)param_1 + 0x50) + 4) = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x50) = *(undefined4 *)((int)param_1 + 0x50);
  *(int *)(*(int *)((int)param_1 + 0x50) + 8) = *(int *)((int)param_1 + 0x50);
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  local_4._0_1_ = 5;
  iVar1 = FUN_004706e0();
  *(int *)((int)param_1 + 0x5c) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)param_1 + 0x5c) + 4) = *(int *)((int)param_1 + 0x5c);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_1 + 0x5c);
  *(int *)(*(int *)((int)param_1 + 0x5c) + 8) = *(int *)((int)param_1 + 0x5c);
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  local_4._0_1_ = 6;
  iVar1 = FUN_004220b0();
  *(int *)((int)param_1 + 0x68) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)param_1 + 0x68) + 4) = *(int *)((int)param_1 + 0x68);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)((int)param_1 + 0x68);
  *(int *)(*(int *)((int)param_1 + 0x68) + 8) = *(int *)((int)param_1 + 0x68);
  *(undefined4 *)((int)param_1 + 0x6c) = 0;
  local_4._0_1_ = 7;
  iVar1 = FUN_004220b0();
  *(int *)((int)param_1 + 0x74) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)param_1 + 0x74) + 4) = *(int *)((int)param_1 + 0x74);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x74) = *(undefined4 *)((int)param_1 + 0x74);
  *(int *)(*(int *)((int)param_1 + 0x74) + 8) = *(int *)((int)param_1 + 0x74);
  *(undefined4 *)((int)param_1 + 0x78) = 0;
  local_4._0_1_ = 8;
  iVar1 = FUN_004706e0();
  *(int *)((int)param_1 + 0x80) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)param_1 + 0x80) + 4) = *(int *)((int)param_1 + 0x80);
  *(undefined4 *)*(undefined4 *)((int)param_1 + 0x80) = *(undefined4 *)((int)param_1 + 0x80);
  *(int *)(*(int *)((int)param_1 + 0x80) + 8) = *(int *)((int)param_1 + 0x80);
  *(undefined4 *)((int)param_1 + 0x84) = 0;
  *(undefined4 *)((int)param_1 + 0x88) = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x8c) = 1;
  *(undefined1 *)((int)param_1 + 0x8d) = 1;
  *(undefined1 *)((int)param_1 + 0x8e) = 0;
  *(undefined1 *)((int)param_1 + 0x8f) = 0;
  *(undefined1 *)((int)param_1 + 0x90) = 0;
  *(undefined1 *)((int)param_1 + 0x91) = 0;
  *(undefined4 *)((int)param_1 + 0x98) = 0;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  puVar4 = (undefined4 *)((int)param_1 + 0x34);
  iVar1 = 3;
  do {
    local_4._0_1_ = 0xb;
    puVar2 = operator_new(0x30);
    local_4._0_1_ = 0xc;
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00914970(puVar2);
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
    iVar1 = iVar1 + -1;
    local_4._0_1_ = 0xb;
  } while (iVar1 != 0);
  FUN_008d4c80(param_1);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"SITT Assistance",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4._0_1_ = 0xd;
  DAT_00e5f21c = Config_GetOrCreateInt(DAT_0104c7e4,&local_2c,3);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sitt_float_vals",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4._0_1_ = 0xe;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sitt_reload",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4._0_1_ = 0xf;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sitt_skip_tutorial",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4._0_1_ = 0x10;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"sitt_skip_stunt_tutorial",0x18);
  local_28 = 0x18;
  local_2c[0x18] = '\0';
  local_4._0_1_ = 0x11;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sitt_usebubbles",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4._0_1_ = 0x12;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"sitt_showemergencyicons",0x17);
  local_28 = 0x17;
  local_2c[0x17] = '\0';
  local_4._0_1_ = 0x13;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sitt_tutorial",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4._0_1_ = 0x14;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sitt_expandparents",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x15);
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008d5380 @ 008d5380 ////

void FUN_008d5380(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  void *pvVar4;
  char *pcVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee2ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe5f9f8);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_008d3b50,&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0098f9e0(0x8cc040);
  FUN_0098fdd0("PInstance",&DAT_010503d8);
  puVar3 = operator_new(0xa4);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_008d0ec0(puVar3);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_010503d8[1])();
  DAT_010503ec = puVar3;
  (*(code *)*DAT_010503d8)();
  pvVar4 = operator_new(0xb4);
  local_4 = 2;
  if (pvVar4 == (void *)0x0) {
    DAT_010503d4 = (void *)0x0;
  }
  else {
    DAT_010503d4 = SITT_TutorialSystem_Constructor(pvVar4);
  }
  local_4 = 0xffffffff;
  FUN_008d14e0(DAT_010503d4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008d5570 @ 008d5570 ////

void __fastcall FUN_008d5570(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d66d4c;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[300]);
}


//// FUNCTION FUN_008d55e0 @ 008d55e0 ////

void __thiscall FUN_008d55e0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(&DAT_00e5fa28 + param_1 * 8);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(&DAT_00e5fa2c + param_1 * 8);
  return;
}


//// FUNCTION FUN_008d5650 @ 008d5650 ////

void __fastcall FUN_008d5650(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x4b0));
}


//// FUNCTION FUN_008d5670 @ 008d5670 ////

void __fastcall FUN_008d5670(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x4b4));
}


//// FUNCTION FUN_008d5690 @ 008d5690 ////

void __fastcall FUN_008d5690(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x4b8));
}


//// FUNCTION FUN_008d56b0 @ 008d56b0 ////

void __cdecl FUN_008d56b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(&DAT_00e5fa70 + param_1 * 4) = param_2;
  *(undefined4 *)(&DAT_00e5fa7c + param_1 * 4) = param_3;
  return;
}


//// FUNCTION FUN_008d56d0 @ 008d56d0 ////

void __thiscall FUN_008d56d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 0x4c))
            (*(undefined4 *)(&DAT_00e5fa70 + param_1 * 4),
             *(undefined4 *)(&DAT_00e5fa7c + param_1 * 4));
  return;
}


//// FUNCTION FUN_008d57c0 @ 008d57c0 ////

undefined4 * __thiscall FUN_008d57c0(void *this,byte param_1)

{
  FUN_008d5570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008d57e0 @ 008d57e0 ////

undefined4 __fastcall FUN_008d57e0(int param_1)

{
  if ((*(char *)(param_1 + 0x4ad) != '\0') &&
     ((*(float *)(param_1 + 0x70) != 0.0 || (*(float *)(param_1 + 0x74) != 0.0)))) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_008d5830 @ 008d5830 ////

uint __thiscall FUN_008d5830(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float local_60 [24];
  
  uVar3 = FUN_008d57e0((int)this);
  if ((char)uVar3 != '\0') {
    fVar1 = *(float *)((int)this + 0x164);
    fVar2 = *(float *)((int)this + 0x160);
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                     (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                     (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 == fVar1) {
      FUN_00401380(local_60,8,0xc,&LAB_00403300);
      FUN_008db390((void *)((int)this + 0xb8),local_60);
      uVar3 = FUN_008dabf0((int)local_60,0xc,2,param_1);
      return uVar3;
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_008d58a0 @ 008d58a0 ////

void __thiscall FUN_008d58a0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float local_60 [24];
  
  pfVar4 = local_60;
  iVar5 = 0xc;
  do {
    *pfVar4 = 0.0;
    pfVar4[1] = 0.0;
    pfVar4 = pfVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_008db390((void *)((int)this + 0xb8),local_60);
  *param_1 = local_60[0];
  param_1[1] = local_60[1];
  fVar1 = *(float *)((int)this + 0x14c);
  fVar2 = *(float *)((int)this + 0x74);
  fVar3 = param_1[1];
  *param_2 = fVar1 * *(float *)((int)this + 0x70) + *param_1;
  param_2[1] = fVar1 * fVar2 + fVar3;
  return;
}


//// FUNCTION FUN_008d5930 @ 008d5930 ////

void __fastcall FUN_008d5930(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  int extraout_ECX;
  float fVar4;
  char cVar5;
  char cVar6;
  float local_8 [2];
  
  if ((*(int *)((int)param_1 + 0x50) != 0) && (*(char *)((int)param_1 + 0x4ac) != '\0')) {
    uVar1 = FUN_008d57e0((int)param_1);
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_008dc370(extraout_ECX);
      if (((char)uVar2 != '\0') && (*(int *)((int)param_1 + 0x54) != 0)) {
        fVar4 = *(float *)((int)param_1 + 0x14c);
        cVar6 = '\0';
        cVar5 = '\0';
        uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + 0x6c);
        local_8[0] = fVar4;
        pfVar3 = (float *)FUN_008dd030(param_1,local_8);
        FUN_008db750((void *)((int)param_1 + 0xb8),uVar1,pfVar3,fVar4,cVar5,cVar6);
      }
    }
  }
  return;
}


//// FUNCTION FUN_008d59a0 @ 008d59a0 ////

void __fastcall FUN_008d59a0(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float *pfVar3;
  int extraout_ECX;
  float fVar4;
  float local_8 [2];
  
  if (*(int *)((int)param_1 + 0x50) != 0) {
    uVar1 = FUN_008d57e0((int)param_1);
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_008dc370(extraout_ECX);
      if ((char)uVar2 != '\0') {
        if ((*(char *)((int)param_1 + 0x4ac) != '\0') && (*(int *)((int)param_1 + 0x54) == 0)) {
          fVar4 = *(float *)((int)param_1 + 0x14c);
          uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + 0x6c);
          local_8[0] = fVar4;
          pfVar3 = (float *)FUN_008dd030(param_1,local_8);
          FUN_008db8a0((void *)((int)param_1 + 0xb8),uVar1,pfVar3,fVar4);
          return;
        }
        FUN_008db650((void *)((int)param_1 + 0xb8));
      }
    }
  }
  return;
}


//// FUNCTION FUN_008d5e20 @ 008d5e20 ////

void __thiscall FUN_008d5e20(void *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  void *this_00;
  float10 fVar4;
  
  fVar1 = param_2 * 0.125;
  fVar2 = fVar1 * 0.125;
  *(float *)((int)this + 0x124) = param_1;
  iVar3 = 0;
  this_00 = (void *)((int)this + 0x1dc);
  do {
    fVar4 = FUN_00990e30(-fVar1,fVar1);
    FUN_00415910((void *)((int)this_00 + -0x30),(float)fVar4,0.0,0.0);
    fVar4 = FUN_00990e30(-fVar1,fVar1);
    FUN_00415910(this_00,(float)fVar4,0.0,0.0);
    if ((iVar3 == 2) || (iVar3 == 3)) {
      param_2 = -param_1;
    }
    else {
      param_2 = param_1;
    }
    fVar4 = FUN_00990e30(-fVar2,fVar2);
    FUN_00415910((void *)((int)this_00 + 0x30),(float)((fVar4 + (float10)1.0) * (float10)param_2),
                 0.0,0.0);
    if ((iVar3 == 0) || (iVar3 == 3)) {
      param_2 = -param_1;
    }
    else {
      param_2 = param_1;
    }
    fVar4 = FUN_00990e30(fVar2,fVar2);
    FUN_00415910((void *)((int)this_00 + 0x60),(float)((fVar4 + (float10)1.0) * (float10)param_2),
                 0.0,0.0);
    iVar3 = iVar3 + 1;
    this_00 = (void *)((int)this_00 + 0xc0);
  } while (iVar3 < 4);
  FUN_00415910((void *)((int)this + 0x14c),1.0,0.0,0.25);
  return;
}


//// FUNCTION FUN_008d5f80 @ 008d5f80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_008d5f80(undefined4 *param_1)

{
  undefined4 *this;
  float *this_00;
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008db210(param_1 + 0x2e);
  FUN_008dd920(param_1);
  *param_1 = &PTR_FUN_00d66d4c;
  param_1[0x49] = 0x3f800000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  this = param_1 + 0x53;
  this_00 = (float *)(param_1 + 0x5f);
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  *this = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x57] = 0;
  param_1[0x5c] = 0;
  param_1[0x56] = 0;
  param_1[0x5b] = 0;
  param_1[0x55] = 0;
  local_4 = 0;
  param_1[0x60] = 0;
  *this_00 = 0.0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[99] = 0;
  param_1[0x68] = 0;
  param_1[0x62] = 0;
  param_1[0x67] = 0;
  param_1[0x61] = 0;
  puVar2 = param_1 + 0x6b;
  iVar3 = 0x10;
  do {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[4] = 0;
    puVar2[9] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_1 + 299) = 1;
  fVar1 = _DAT_01050438;
  *(undefined1 *)((int)param_1 + 0x4ad) = 1;
  param_1[0x55] = 0;
  param_1[0x5b] = 0;
  param_1[0x56] = 0;
  param_1[0x5c] = 0;
  param_1[0x57] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  if (fVar1 == 0.0) {
    param_1[0x54] = 0x3f800000;
    *this = 0x3f800000;
    param_1[0x5a] = 0x3f800000;
    param_1[0x60] = 0x3f800000;
    *this_00 = 1.0;
    param_1[0x66] = 0x3f800000;
    param_1[0x65] = 0;
    param_1[100] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[99] = 0;
    param_1[0x68] = 0;
    param_1[0x62] = 0;
    param_1[0x67] = 0;
    param_1[0x61] = 0;
  }
  else {
    param_1[0x54] = 0;
    *this = 0;
    param_1[0x5a] = 0;
    FUN_00415910(this,1.0,0.0,0.25);
    param_1[0x60] = 0;
    *this_00 = 0.0;
    param_1[0x66] = 0;
    param_1[0x65] = 0;
    param_1[100] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[99] = 0;
    param_1[0x68] = 0;
    param_1[0x62] = 0;
    param_1[0x67] = 0;
    param_1[0x61] = 0;
    FUN_00415910(this_00,DAT_00e5fa20,0.0,0.25);
  }
  fVar1 = *this_00;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[0x44] = fVar1;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  FUN_008d5e20(param_1,0.01,0.0);
  *(undefined1 *)((int)param_1 + 0x4af) = 0;
  *(undefined1 *)((int)param_1 + 0x4ae) = 1;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008d62f0 @ 008d62f0 ////

void __cdecl FUN_008d62f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x11);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_008d6310 @ 008d6310 ////

void __cdecl FUN_008d6310(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return;
}


//// FUNCTION FUN_008d6350 @ 008d6350 ////

void __thiscall FUN_008d6350(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
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


//// FUNCTION FUN_008d64c0 @ 008d64c0 ////

void __fastcall FUN_008d64c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_008d6580 @ 008d6580 ////

void __fastcall FUN_008d6580(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x11) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x11);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x11);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x11) == '\0');
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008d67b0 @ 008d67b0 ////

void __thiscall FUN_008d67b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
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


//// FUNCTION FUN_008d6860 @ 008d6860 ////

int * __fastcall FUN_008d6860(int *param_1)

{
  FUN_008d64c0(param_1);
  return param_1;
}


//// FUNCTION FUN_008d6950 @ 008d6950 ////

int * __fastcall FUN_008d6950(int *param_1)

{
  FUN_008d6580(param_1);
  return param_1;
}


//// FUNCTION FUN_008d6a30 @ 008d6a30 ////

int * __cdecl FUN_008d6a30(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    if (param_3 != param_2) {
      iVar2 = *param_2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
      }
      puVar3 = (undefined4 *)*param_3;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
      *param_3 = iVar2;
    }
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_008d6a80 @ 008d6a80 ////

void __cdecl FUN_008d6a80(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee331;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (int *)0x0) {
    ExceptionList = &local_c;
    *param_1 = 0;
    iVar2 = *param_2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
      puVar3 = (undefined4 *)*param_1;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
    }
    *param_1 = iVar2;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008d6b20 @ 008d6b20 ////

bool __cdecl FUN_008d6b20(void *param_1,void *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float local_18;
  float afStack_14 [2];
  float local_c [2];
  float fStack_4;
  
  piVar2 = *(int **)((int)param_1 + 0x68);
  piVar3 = *(int **)((int)param_2 + 0x68);
  if (piVar2 == (int *)0x0) {
    if (piVar3 != (int *)0x0) {
      return false;
    }
    iVar4 = FUN_008dd030(param_1,&local_18);
    iVar5 = FUN_008dd030(param_2,local_c);
    if (*(float *)(iVar5 + 4) <= *(float *)(iVar4 + 4)) {
      return false;
    }
    return true;
  }
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x1c))();
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*piVar3 + 0x1c))(), cVar1 == '\0')) {
      return false;
    }
    cVar1 = (**(code **)(*piVar3 + 0x1c))();
    if ((cVar1 != '\0') && (cVar1 = (**(code **)(*piVar2 + 0x1c))(), cVar1 == '\0')) {
      return true;
    }
    piVar2 = (int *)FUN_00ace790(piVar2,0,&TM::CBubbleAnchor::RTTI_Type_Descriptor,
                                 &TM::CBubbleAnchor3D::RTTI_Type_Descriptor,0);
    piVar3 = (int *)FUN_00ace790(piVar3,0,&TM::CBubbleAnchor::RTTI_Type_Descriptor,
                                 &TM::CBubbleAnchor3D::RTTI_Type_Descriptor,0);
    if ((((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) &&
        (cVar1 = (**(code **)(*piVar2 + 0x24))(local_c), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*piVar3 + 0x24))(&stack0xffffffe4), cVar1 != '\0')) {
      pfVar6 = (float *)(DAT_00f87aa0 + 0xd0);
      fVar7 = FUN_00412f80(pfVar6,afStack_14);
      fStack_4 = (float)fVar7;
      fVar7 = FUN_00412f80(pfVar6,(float *)&stack0xffffffe0);
      if (ABS((float10)fStack_4 - fVar7) < (float10)0.01) {
        return param_2 < param_1;
      }
      if ((float10)fStack_4 <= fVar7) {
        return false;
      }
      return true;
    }
  }
  return true;
}


//// FUNCTION FUN_008d6cf0 @ 008d6cf0 ////

int * __fastcall FUN_008d6cf0(int *param_1)

{
  FUN_008d64c0(param_1);
  return param_1;
}


//// FUNCTION FUN_008d6d30 @ 008d6d30 ////

void __fastcall FUN_008d6d30(int *param_1)

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


//// FUNCTION FUN_008d6d90 @ 008d6d90 ////

int * __fastcall FUN_008d6d90(int *param_1)

{
  FUN_008d6580(param_1);
  return param_1;
}


//// FUNCTION FUN_008d6dd0 @ 008d6dd0 ////

undefined4 * __thiscall
FUN_008d6dd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  iVar2 = *param_4;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    puVar3 = *(undefined4 **)((int)this + 0xc);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(int *)((int)this + 0xc) = iVar2;
  *(undefined1 *)((int)this + 0x10) = param_5;
  *(undefined1 *)((int)this + 0x11) = 0;
  return this;
}


//// FUNCTION FUN_008d6e50 @ 008d6e50 ////

void __cdecl FUN_008d6e50(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_1 != param_3) {
      iVar2 = *param_3;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
      }
      puVar3 = (undefined4 *)*param_1;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
      *param_1 = iVar2;
    }
  }
  return;
}


//// FUNCTION FUN_008d6eb0 @ 008d6eb0 ////

void __fastcall FUN_008d6eb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_008d6ef0 @ 008d6ef0 ////

int * __thiscall FUN_008d6ef0(void *this,byte param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008d6f20 @ 008d6f20 ////

void __cdecl FUN_008d6f20(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar5 = param_2;
  piVar1 = param_1;
  puStack_8 = &LAB_00cee348;
  pvStack_c = ExceptionList;
  piVar2 = (int *)*param_1;
  ExceptionList = &pvStack_c;
  if (piVar2 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    piVar2[0x12] = piVar2[0x12] + 1;
  }
  local_4 = 0;
  piVar6 = piVar2;
  if (param_1 != param_2) {
    iVar3 = *param_2;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
    }
    puVar4 = (undefined4 *)*param_1;
    param_1 = piVar2;
    if (puVar4 != (undefined4 *)0x0) {
      piVar6 = puVar4 + 0x12;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
    *piVar1 = iVar3;
    piVar6 = param_1;
  }
  param_1 = piVar6;
  if ((int **)piVar5 != &param_1) {
    if (piVar2 != (int *)0x0) {
      piVar2[0x12] = piVar2[0x12] + 1;
    }
    puVar4 = (undefined4 *)*piVar5;
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
    *piVar5 = (int)piVar2;
  }
  local_4 = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    piVar1 = piVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar2)(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008d6fd0 @ 008d6fd0 ////

void __cdecl
FUN_008d6fd0(int param_1,int param_2,int param_3,undefined4 *param_4,undefined *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee368;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar7 = (param_2 + -1) / 2;
    piVar1 = (int *)(param_1 + iVar7 * 4);
    cVar6 = (*(code *)param_5)(*(undefined4 *)(param_1 + iVar7 * 4),param_4);
    if (cVar6 == '\0') break;
    piVar2 = (int *)(param_1 + param_2 * 4);
    param_2 = iVar7;
    if (piVar2 != piVar1) {
      iVar7 = *piVar1;
      if (iVar7 != 0) {
        *(int *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + 1;
      }
      puVar4 = (undefined4 *)*piVar2;
      if (puVar4 != (undefined4 *)0x0) {
        piVar1 = puVar4 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
      *piVar2 = iVar7;
    }
  }
  puVar4 = param_4;
  ppuVar3 = (undefined4 **)(param_1 + param_2 * 4);
  if (ppuVar3 != &param_4) {
    if (param_4 != (undefined4 *)0x0) {
      param_4[0x12] = param_4[0x12] + 1;
    }
    puVar5 = *ppuVar3;
    if (puVar5 != (undefined4 *)0x0) {
      piVar1 = puVar5 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(1);
      }
    }
    *ppuVar3 = puVar4;
  }
  local_4 = 0xffffffff;
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008d70c0 @ 008d70c0 ////

void __cdecl FUN_008d70c0(undefined4 **param_1,undefined4 **param_2,undefined4 **param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 **ppuVar6;
  int iVar7;
  undefined4 ***pppuVar8;
  int iVar9;
  int iVar10;
  undefined4 **ppuVar11;
  undefined4 **ppuVar12;
  undefined4 **ppuVar13;
  int local_20;
  undefined4 **ppuStack_1c;
  undefined4 **ppuStack_18;
  undefined4 **ppuStack_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee388;
  local_c = ExceptionList;
  iVar9 = (int)param_3 - (int)param_1 >> 2;
  iVar10 = (int)param_2 - (int)param_1 >> 2;
  iVar7 = iVar10;
  local_20 = iVar9;
  while (iVar5 = iVar7, iVar5 != 0) {
    iVar7 = local_20 % iVar5;
    local_20 = iVar5;
  }
  if ((local_20 < iVar9) && (0 < local_20)) {
    ppuVar12 = param_1 + local_20;
    ExceptionList = &local_c;
    do {
      puVar2 = *ppuVar12;
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[0x12] = puVar2[0x12] + 1;
      }
      local_10 = puVar2;
      local_4 = 0;
      if (ppuVar12 + iVar10 == param_3) {
        pppuVar8 = &param_1;
      }
      else {
        ppuStack_1c = ppuVar12 + iVar10;
        pppuVar8 = &ppuStack_1c;
      }
      ppuVar11 = ppuVar12;
      ppuVar6 = *pppuVar8;
      ppuVar13 = ppuVar12;
      param_2 = ppuVar12;
      if (*pppuVar8 != ppuVar12) {
        do {
          ppuVar12 = ppuVar6;
          if (ppuVar11 != ppuVar12) {
            puVar3 = *ppuVar12;
            if (puVar3 != (undefined4 *)0x0) {
              puVar3[0x12] = puVar3[0x12] + 1;
            }
            puVar4 = *ppuVar11;
            if (puVar4 != (undefined4 *)0x0) {
              piVar1 = puVar4 + 0x12;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                (**(code **)*puVar4)(1);
              }
            }
            *ppuVar11 = puVar3;
            ppuVar13 = param_2;
          }
          iVar7 = (int)param_3 - (int)ppuVar12 >> 2;
          if (iVar10 < iVar7) {
            ppuStack_18 = ppuVar12 + iVar10;
            pppuVar8 = &ppuStack_18;
          }
          else {
            ppuStack_14 = param_1 + (iVar10 - iVar7);
            pppuVar8 = &ppuStack_14;
          }
          ppuVar11 = ppuVar12;
          ppuVar6 = *pppuVar8;
        } while (*pppuVar8 != ppuVar13);
      }
      if (ppuVar12 != &local_10) {
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[0x12] = puVar2[0x12] + 1;
        }
        puVar3 = *ppuVar12;
        if (puVar3 != (undefined4 *)0x0) {
          piVar1 = puVar3 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(1);
            ppuVar13 = param_2;
          }
        }
        *ppuVar12 = puVar2;
      }
      local_4 = 0xffffffff;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
          ppuVar13 = param_2;
        }
      }
      ppuVar12 = ppuVar13 + -1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008d7240 @ 008d7240 ////

void __fastcall FUN_008d7240(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 100);
  for (puVar2 = *(undefined4 **)(param_1 + 0x60); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_008dd6a0((int *)*puVar2);
  }
  puVar1 = *(undefined4 **)(param_1 + 100);
  for (puVar2 = *(undefined4 **)(param_1 + 0x60); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_008dd6d0((void *)*puVar2,1);
  }
  return;
}


//// FUNCTION FUN_008d7290 @ 008d7290 ////

int * __thiscall FUN_008d7290(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)this + 100);
  puVar3 = *(undefined4 **)((int)this + 0x60);
  while( true ) {
    if (puVar3 == puVar1) {
      return (int *)0x0;
    }
    piVar2 = FUN_008ddf50((void *)*puVar3,param_1);
    if (piVar2 != (int *)0x0) break;
    puVar3 = puVar3 + 1;
  }
  return piVar2;
}


//// FUNCTION FUN_008d72c0 @ 008d72c0 ////

void __fastcall FUN_008d72c0(int param_1)

{
  int local_4;
  
  local_4 = **(int **)(param_1 + 0x54);
  if ((int *)local_4 != *(int **)(param_1 + 0x54)) {
    do {
      (**(code **)(**(int **)(local_4 + 0xc) + 0x2c))();
      FUN_008d64c0(&local_4);
    } while (local_4 != *(int *)(param_1 + 0x54));
  }
  return;
}


//// FUNCTION FUN_008d72f0 @ 008d72f0 ////

void __thiscall FUN_008d72f0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_008d7360 @ 008d7360 ////

void * FUN_008d7360(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cee3b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x14);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_008d6dd0(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_008d7400 @ 008d7400 ////

void FUN_008d7400(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 4) = 1;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}


//// FUNCTION FUN_008d7440 @ 008d7440 ////

void * __thiscall FUN_008d7440(void *this,byte param_1)

{
  FUN_008d6eb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008d7490 @ 008d7490 ////

void __cdecl FUN_008d7490(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(*param_2,*param_1);
  if (cVar1 != '\0') {
    FUN_008d6f20(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(*param_3,*param_2);
  if (cVar1 != '\0') {
    FUN_008d6f20(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(*param_2,*param_1);
  if (cVar1 != '\0') {
    FUN_008d6f20(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_008d7500 @ 008d7500 ////

/* WARNING: Removing unreachable block (ram,0x008d75da) */
/* WARNING: Removing unreachable block (ram,0x008d75df) */

void __cdecl
FUN_008d7500(int param_1,int param_2,int param_3,undefined4 *param_4,undefined *param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee3c8;
  local_4 = 0;
  iVar6 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar5 = iVar6 * 2 + 2;
    if (param_3 <= iVar5) break;
    cVar4 = (*(code *)param_5)();
    if (cVar4 != '\0') {
      iVar5 = iVar6 * 2 + 1;
    }
    piVar1 = (int *)(param_1 + iVar5 * 4);
    piVar2 = (int *)(param_1 + iVar6 * 4);
    iVar6 = iVar5;
    if (piVar2 != piVar1) {
      iVar5 = *piVar1;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + 1;
      }
      puVar3 = (undefined4 *)*piVar2;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)();
        }
      }
      *piVar2 = iVar5;
    }
  }
  if (iVar5 == param_3) {
    piVar2 = (int *)(param_1 + -4 + param_3 * 4);
    piVar1 = (int *)(param_1 + iVar6 * 4);
    if (piVar1 != piVar2) {
      iVar6 = *piVar2;
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x48) = *(int *)(iVar6 + 0x48) + 1;
      }
      puVar3 = (undefined4 *)*piVar1;
      if (puVar3 != (undefined4 *)0x0) {
        piVar2 = puVar3 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar3)();
        }
      }
      *piVar1 = iVar6;
    }
    iVar6 = param_3 + -1;
  }
  if (param_4 != (undefined4 *)0x0) {
    param_4[0x12] = param_4[0x12] + 1;
  }
  FUN_008d6fd0(param_1,iVar6,param_2,param_4,param_5);
  local_4 = 0xffffffff;
  if (param_4 != (undefined4 *)0x0) {
    piVar1 = param_4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_4)();
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008d7650 @ 008d7650 ////

/* WARNING: Removing unreachable block (ram,0x008d76bb) */
/* WARNING: Removing unreachable block (ram,0x008d76c0) */

void __cdecl
FUN_008d7650(int *param_1,int param_2,int *param_3,undefined4 *param_4,undefined *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee3e8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_3 != param_1) {
    iVar2 = *param_1;
    ExceptionList = &pvStack_c;
    if (iVar2 != 0) {
      ExceptionList = &pvStack_c;
      *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    }
    puVar3 = (undefined4 *)*param_3;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)();
      }
    }
    *param_3 = iVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    param_4[0x12] = param_4[0x12] + 1;
  }
  FUN_008d7500((int)param_1,0,param_2 - (int)param_1 >> 2,param_4,param_5);
  local_4 = 0xffffffff;
  if (param_4 != (undefined4 *)0x0) {
    piVar1 = param_4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_4)();
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008d7710 @ 008d7710 ////

void __fastcall FUN_008d7710(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008d7400();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008d7750 @ 008d7750 ////

void FUN_008d7750(int *param_1)

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


//// FUNCTION FUN_008d7770 @ 008d7770 ////

int * __cdecl FUN_008d7770(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cee411;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    local_8 = 1;
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
      iVar2 = *param_1;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
        puVar3 = (undefined4 *)*param_3;
        if (puVar3 != (undefined4 *)0x0) {
          piVar1 = puVar3 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(1);
          }
        }
      }
      *param_3 = iVar2;
    }
    param_3 = param_3 + 1;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_008d7820 @ 008d7820 ////

void __cdecl FUN_008d7820(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_008d7490(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_008d7490(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_008d7490(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_008d7490(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_008d7490(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_008d78d0 @ 008d78d0 ////

/* WARNING: Removing unreachable block (ram,0x008d7914) */
/* WARNING: Removing unreachable block (ram,0x008d7919) */

void __cdecl FUN_008d78d0(int param_1,int param_2,undefined *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar3 = iVar3 + -1;
    puVar1 = *(undefined4 **)(param_1 + iVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[0x12] = puVar1[0x12] + 1;
    }
    FUN_008d7500(param_1,iVar3,iVar2,puVar1,param_3);
  }
  return;
}


//// FUNCTION FUN_008d7970 @ 008d7970 ////

/* WARNING: Removing unreachable block (ram,0x008d799b) */
/* WARNING: Removing unreachable block (ram,0x008d79a0) */

void __cdecl FUN_008d7970(int *param_1,int param_2,undefined *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + -4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x12] = puVar1[0x12] + 1;
  }
  FUN_008d7650(param_1,param_2 + -4,(int *)(param_2 + -4),puVar1,param_3);
  return;
}


//// FUNCTION FUN_008d79c0 @ 008d79c0 ////

int __fastcall FUN_008d79c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008d7400();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008d7a00 @ 008d7a00 ////

void FUN_008d7a00(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_008d7a00(*(void **)((int)param_1 + 8));
    FUN_008d6eb0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008d7a40 @ 008d7a40 ////

void __cdecl FUN_008d7a40(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cee431;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
      iVar2 = *param_3;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
        puVar3 = (undefined4 *)*param_1;
        if (puVar3 != (undefined4 *)0x0) {
          piVar1 = puVar3 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(1);
          }
        }
      }
      *param_1 = iVar2;
    }
    param_1 = param_1 + 1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008d7af0 @ 008d7af0 ////

void __cdecl FUN_008d7af0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
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
  return;
}


//// FUNCTION FUN_008d7b60 @ 008d7b60 ////

void __cdecl FUN_008d7b60(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_008d7820(param_2,piVar4,param_3 + -1,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],*piStack_8), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(*piStack_8,piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -1;
  }
  do {
    piVar4 = piVar4 + 1;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(*piVar4,*piStack_8), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(*piStack_8,*piVar4);
  } while (cVar2 == '\0');
joined_r0x008d7c05:
  do {
    piVar3 = piStack_8;
    if (param_3 <= piVar1) {
joined_r0x008d7c4b:
      for (; param_2 < piStack_8; piStack_8 = piStack_8 + -1) {
        piVar3 = piVar3 + -1;
        cVar2 = (*(code *)param_4)(*piVar3,*piVar5);
        piVar4 = local_4;
        if (cVar2 == '\0') {
          cVar2 = (*(code *)param_4)(*piVar5,*piVar3);
          if (cVar2 != '\0') break;
          piVar5 = piVar5 + -1;
          FUN_008d6f20(piVar5,piVar3);
        }
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_008d6f20(piVar5,piVar4);
        }
        piVar4 = piVar4 + 1;
        FUN_008d6f20(piVar5,piVar1);
        piVar1 = piVar1 + 1;
        local_4 = piVar4;
        piVar5 = piVar5 + 1;
      }
      else {
        piStack_8 = piStack_8 + -1;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -1;
          if (piStack_8 != piVar5) {
            FUN_008d6f20(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -1;
          FUN_008d6f20(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_008d6f20(piVar1,piStack_8);
          piVar1 = piVar1 + 1;
        }
      }
      goto joined_r0x008d7c05;
    }
    cVar2 = (*(code *)param_4)(*piVar5,*piVar1);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(*piVar1,*piVar5);
      if (cVar2 != '\0') goto joined_r0x008d7c4b;
      local_4 = piVar4 + 1;
      FUN_008d6f20(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 1;
  } while( true );
}


//// FUNCTION FUN_008d7d70 @ 008d7d70 ////

void __cdecl FUN_008d7d70(undefined4 **param_1,undefined4 **param_2,undefined *param_3)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  char cVar3;
  undefined4 **ppuVar4;
  
  ppuVar2 = param_1;
  if (param_1 != param_2) {
    while (ppuVar2 = ppuVar2 + 1, ppuVar2 != param_2) {
      cVar3 = (*(code *)param_3)(*ppuVar2,*param_1);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)param_3)(*ppuVar2,ppuVar2[-1]);
        ppuVar1 = ppuVar2;
        if (cVar3 != '\0') {
          do {
            ppuVar4 = ppuVar1 + -1;
            cVar3 = (*(code *)param_3)(*ppuVar2,ppuVar1[-2]);
            ppuVar1 = ppuVar4;
          } while (cVar3 != '\0');
          if ((ppuVar4 != ppuVar2) && (ppuVar2 != ppuVar2 + 1)) {
            FUN_008d70c0(ppuVar4,ppuVar2,ppuVar2 + 1);
          }
        }
      }
      else if ((param_1 != ppuVar2) && (ppuVar2 != ppuVar2 + 1)) {
        FUN_008d70c0(param_1,ppuVar2,ppuVar2 + 1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_008d7e50 @ 008d7e50 ////

void __fastcall FUN_008d7e50(int param_1)

{
  FUN_008d7a00(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_008d7ef0 @ 008d7ef0 ////

void __cdecl FUN_008d7ef0(int *param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1;
  while (1 < iVar1 >> 2) {
    FUN_008d7970(param_1,param_2,param_3);
    param_2 = param_2 + -4;
    iVar1 = param_2 - (int)param_1;
  }
  return;
}


//// FUNCTION FUN_008d7f30 @ 008d7f30 ////

void __thiscall FUN_008d7f30(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
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
  puStack_8 = &LAB_00cee448;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x11) != '\0') {
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
  FUN_008d64c0((int *)&param_2);
  piVar5 = (int *)*_Memory;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(_Memory[2] + 0x11) == '\0') && (piVar7 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar5[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar5 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)_Memory[1];
        if ((int *)*piVar6 == _Memory) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[4];
      *(char *)(param_2 + 4) = (char)_Memory[4];
      *(char *)(_Memory + 4) = (char)iVar1;
      goto LAB_008d809f;
    }
  }
  else {
    piVar7 = (int *)_Memory[2];
  }
  piVar5 = (int *)_Memory[1];
  if (*(char *)((int)piVar7 + 0x11) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == _Memory) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == _Memory) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      piVar3 = (int *)FUN_008d6310(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar4 = FUN_008d62f0((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_008d809f:
  if ((char)_Memory[4] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[4] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[4] == '\0') {
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(piVar6 + 4) = 0;
            FUN_008d67b0(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x11) == '\0') {
            if ((*(char *)(*piVar5 + 0x10) != '\x01') || (*(char *)(piVar5[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x10) = 1;
                *(undefined1 *)(piVar5 + 4) = 0;
                FUN_008d6350(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 4) = (char)piVar6[4];
              *(undefined1 *)(piVar6 + 4) = 1;
              *(undefined1 *)(piVar5[2] + 0x10) = 1;
              FUN_008d67b0(this,(int)piVar6);
              break;
            }
LAB_008d8168:
            *(undefined1 *)(piVar5 + 4) = 0;
          }
        }
        else {
          if ((char)piVar5[4] == '\0') {
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(piVar6 + 4) = 0;
            FUN_008d6350(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x11) == '\0') {
            if ((*(char *)(piVar5[2] + 0x10) == '\x01') && (*(char *)(*piVar5 + 0x10) == '\x01'))
            goto LAB_008d8168;
            if (*(char *)(*piVar5 + 0x10) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x10) = 1;
              *(undefined1 *)(piVar5 + 4) = 0;
              FUN_008d67b0(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 4) = (char)piVar6[4];
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(*piVar5 + 0x10) = 1;
            FUN_008d6350(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  puVar2 = (undefined4 *)_Memory[3];
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  _Memory[3] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008d8210 @ 008d8210 ////

void __thiscall
FUN_008d8210(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

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
  puStack_8 = &LAB_00cee468;
  local_c = ExceptionList;
  if (0x3ffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_008d7360(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x10);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x10) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[4] == '\0') {
LAB_008d830b:
        *(undefined1 *)(*piVar4 + 0x10) = 1;
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x10) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008d67b0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
        FUN_008d6350(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[4] == '\0') goto LAB_008d830b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008d6350(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
      FUN_008d67b0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x10);
  } while( true );
}


//// FUNCTION FUN_008d83c0 @ 008d83c0 ////

int * FUN_008d83c0(int *param_1,int param_2,int *param_3)

{
  FUN_008d7a40(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_008d83f0 @ 008d83f0 ////

void __thiscall FUN_008d83f0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008d7a00((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x11) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x11);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x11);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x11);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x11);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_008d7f30(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_008d84b0 @ 008d84b0 ////

void FUN_008d84b0(int *param_1,int *param_2)

{
  FUN_008d7af0(param_1,param_2);
  return;
}


//// FUNCTION FUN_008d84d0 @ 008d84d0 ////

void FUN_008d84d0(void)

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
  puStack_8 = &LAB_00cee488;
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


//// FUNCTION FUN_008d8540 @ 008d8540 ////

void __cdecl FUN_008d8540(undefined4 **param_1,undefined4 **param_2,int param_3,undefined *param_4)

{
  undefined4 **ppuVar1;
  int iVar2;
  undefined4 **local_8;
  undefined4 **local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_008d85d7:
      if (1 < iVar2) {
        FUN_008d7d70(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_008d78d0((int)param_1,(int)param_2,param_4);
        }
        FUN_008d7ef0((int *)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_008d85d7;
    }
    FUN_008d7b60(&local_8,(int *)param_1,(int *)param_2,param_4);
    ppuVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_008d8540(param_1,local_8,param_3,param_4);
      param_1 = ppuVar1;
    }
    else {
      FUN_008d8540(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_008d8630 @ 008d8630 ////

void __thiscall FUN_008d8630(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_4;
  
  puVar2 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[0x12] = param_1[0x12] + 1;
  }
  local_4 = this;
  FUN_008d72f0((void *)((int)this + 0x50),&local_4,(uint *)&param_1);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (local_4 != *(int **)((int)this + 0x54)) {
    puVar2 = (undefined4 *)local_4[3];
    puVar2[0x12] = puVar2[0x12] + 1;
    FUN_008d7f30((void *)((int)this + 0x50),&param_1,local_4);
    FUN_008dd8e0((int)puVar2);
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}


//// FUNCTION FUN_008d86b0 @ 008d86b0 ////

void __thiscall FUN_008d86b0(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_008d8210(this,&param_2,'\x01',puVar5,(int *)puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_008d6580((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_008d8210(this,&param_2,local_4,puVar5,(int *)puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008d8830 @ 008d8830 ////

void __thiscall FUN_008d8830(void *this,int *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00cee4a8;
  local_10 = ExceptionList;
  piVar1 = (int *)*param_3;
  ExceptionList = &local_10;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_10;
    piVar1[0x12] = piVar1[0x12] + 1;
  }
  iVar6 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar6 >> 2;
  }
  uVar7 = CONCAT44(iVar6,iVar2);
  param_3 = piVar1;
  if (param_2 != 0) {
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    if (0x3fffffffU - iVar6 < param_2) {
      uVar7 = FUN_008d84d0();
    }
    iVar6 = (int)((ulonglong)uVar7 >> 0x20);
    uVar3 = (uint)uVar7;
    if (iVar6 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    if (uVar3 < iVar2 + param_2) {
      if (0x3fffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar6 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar6 >> 2;
      }
      if (uVar3 < iVar2 + param_2) {
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
        }
        uVar3 = iVar6 + param_2;
      }
      piVar4 = operator_new(uVar3 * 4);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar5 = FUN_008d7770(*(int **)((int)this + 4),param_1,piVar4);
      FUN_008d7a40(piVar5,param_2,(int *)&param_3);
      FUN_008d7770(param_1,*(int **)((int)this + 8),piVar5 + param_2);
      piVar5 = *(int **)((int)this + 4);
      local_8 = 0;
      if (piVar5 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - (int)piVar5 >> 2;
      }
      if (piVar5 != (int *)0x0) {
        FUN_008d7af0(piVar5,*(int **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar4 + uVar3;
      *(int **)((int)this + 8) = piVar4 + param_2 + iVar6;
      *(int **)((int)this + 4) = piVar4;
    }
    else {
      piVar5 = *(int **)((int)this + 8);
      if ((uint)((int)piVar5 - (int)param_1 >> 2) < param_2) {
        FUN_008d7770(param_1,piVar5,param_1 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_008d83c0(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 2),(int *)&param_3);
        iVar6 = *(int *)((int)this + 8) + param_2 * 4;
        *(int *)((int)this + 8) = iVar6;
        local_8 = 0;
        FUN_008d6e50(param_1,(int *)(iVar6 + param_2 * -4),(int *)&param_3);
      }
      else {
        piVar4 = FUN_008d7770(piVar5 + -param_2,piVar5,piVar5);
        *(int **)((int)this + 8) = piVar4;
        FUN_008d6a30(param_1,piVar5 + -param_2,piVar5);
        FUN_008d6e50(param_1,param_1 + param_2,(int *)&param_3);
      }
    }
  }
  local_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    piVar5 = piVar1 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*piVar1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008d8b00 @ 008d8b00 ////

void __fastcall FUN_008d8b00(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x58);
  while (iVar1 != 0) {
    FUN_008d8630(param_1,*(undefined4 **)(**(int **)((int)param_1 + 0x54) + 0xc));
    iVar1 = *(int *)((int)param_1 + 0x58);
  }
  return;
}


//// FUNCTION FUN_008d8b30 @ 008d8b30 ////

void __thiscall FUN_008d8b30(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  puStack_8 = &LAB_00cee4c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[0x14] = this;
  param_1[0x12] = param_1[0x12] + 1;
  local_4 = 0;
  FUN_008d86b0((void *)((int)this + 0x50),local_14,(uint *)&param_1);
  iVar1 = puVar2[0x12];
  local_4 = 0xffffffff;
  puVar2[0x12] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008d8be0 @ 008d8be0 ////

void __fastcall FUN_008d8be0(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    FUN_008d7af0(*(int **)(param_1 + 4),*(int **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_008d8cb0 @ 008d8cb0 ////

void __fastcall FUN_008d8cb0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_008d83f0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008d8ce0 @ 008d8ce0 ////

void __fastcall FUN_008d8ce0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *_Memory;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00cee4fe;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d66da4;
  iVar1 = param_1[0x16];
  local_4 = 2;
  while (iVar1 != 0) {
    FUN_008d8630(param_1,*(undefined4 **)(*(int *)param_1[0x15] + 0xc));
    iVar1 = param_1[0x16];
  }
  _Memory = (undefined4 *)param_1[0x1b];
  if (_Memory == (undefined4 *)0x0) {
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4 = CONCAT31(local_4._1_3_,1);
    if ((int *)param_1[0x18] == (int *)0x0) {
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_008d83f0(param_1 + 0x14,&local_10,*(int **)param_1[0x15],(int *)param_1[0x15]);
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0x15]);
    }
    FUN_008d7af0((int *)param_1[0x18],(int *)param_1[0x19]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  FUN_008d97a0(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008d8dd0 @ 008d8dd0 ////

int __fastcall FUN_008d8dd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008d7400();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008d8e00 @ 008d8e00 ////

void __thiscall FUN_008d8e00(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_008d7a40(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 1;
    return;
  }
  FUN_008d8830(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_008d8e70 @ 008d8e70 ////

undefined4 * __fastcall FUN_008d8e70(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee539;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d66da4;
  iVar1 = FUN_008d7400();
  param_1[0x15] = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(undefined4 *)(param_1[0x15] + 4) = param_1[0x15];
  *(undefined4 *)param_1[0x15] = param_1[0x15];
  *(undefined4 *)(param_1[0x15] + 8) = param_1[0x15];
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  local_4._0_1_ = 2;
  piVar2 = operator_new(8);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_008d9660(piVar2);
  }
  param_1[0x1b] = piVar2;
  param_1[0x1c] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008d8f20 @ 008d8f20 ////

undefined4 * __thiscall FUN_008d8f20(void *this,byte param_1)

{
  FUN_008d8ce0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008d8f40 @ 008d8f40 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008d8f40(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  undefined3 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *_Memory;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 local_48 [4];
  int *local_44;
  int *local_40;
  int local_3c;
  undefined1 auStack_38 [4];
  float *local_34;
  undefined4 *local_30;
  int local_2c;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 *local_20;
  int local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cee570;
  pvStack_14 = ExceptionList;
  _Memory = (int *)0x0;
  piVar7 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_3c = 0;
  local_24 = (void *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  pfVar10 = (float *)0x0;
  local_34 = (float *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x60);
  local_84 = *(undefined4 **)(param_1 + 100);
  local_c._1_3_ = 0;
  uVar3 = local_c._1_3_;
  local_c._0_1_ = 2;
  local_c._1_3_ = 0;
  ExceptionList = &pvStack_14;
  ppvVar2 = &pvStack_14;
  if (puVar4 != local_84) {
    do {
      puVar5 = (undefined4 *)*puVar4;
      if ((*(char *)(puVar5 + 0x2d) == '\0') && (*(char *)((int)puVar5 + 0xb5) == '\0')) {
        FUN_008dddf0(puVar5,&local_80,&local_78);
        puVar5[0x12] = puVar5[0x12] + 1;
        local_c = CONCAT31(local_c._1_3_,3);
        local_88 = puVar5;
        if ((_Memory == (int *)0x0) ||
           ((uint)(local_3c - (int)_Memory >> 2) <= (uint)((int)piVar7 - (int)_Memory >> 2))) {
          FUN_008d8830(local_48,piVar7,1,(int *)&local_88);
          _Memory = local_44;
        }
        else {
          FUN_008d7a40(piVar7,1,(int *)&local_88);
          local_40 = piVar7 + 1;
        }
        piVar7 = local_40;
        iVar8 = puVar5[0x12];
        local_c._0_1_ = 2;
        puVar5[0x12] = iVar8 + -1;
        if (iVar8 + -1 == 0) {
          (**(code **)*puVar5)(1);
        }
        puVar5 = local_20;
        if ((local_24 == (void *)0x0) ||
           ((uint)(local_1c - (int)local_24 >> 3) <= (uint)((int)local_20 - (int)local_24 >> 3))) {
          FUN_0046e9b0(local_28,local_20,1,&local_80);
        }
        else {
          FUN_0046deb0(local_20,1,&local_80);
          local_20 = puVar5 + 2;
        }
        puVar5 = local_30;
        if ((pfVar10 == (float *)0x0) ||
           ((uint)(local_2c - (int)pfVar10 >> 3) <= (uint)((int)local_30 - (int)pfVar10 >> 3))) {
          FUN_0046e9b0(auStack_38,local_30,1,&local_78);
          pfVar10 = local_34;
        }
        else {
          FUN_0046deb0(local_30,1,&local_78);
          local_30 = puVar5 + 2;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != local_84);
    ppvVar2 = ExceptionList;
    uVar3 = local_c._1_3_;
    if (_Memory != (int *)0x0) {
      local_8c = (undefined4 *)((int)piVar7 - (int)_Memory >> 2);
      goto LAB_008d914f;
    }
  }
  local_c._1_3_ = uVar3;
  ExceptionList = ppvVar2;
  local_8c = (undefined4 *)0x0;
LAB_008d914f:
  local_88 = (undefined4 *)0x0;
  pfVar11 = pfVar10;
  if (local_8c != (undefined4 *)0x0) {
    iVar8 = (int)local_24 - (int)pfVar10;
    do {
      puVar4 = (undefined4 *)_Memory[(int)local_88];
      fStack_60 = *(float *)((int)pfVar10 + iVar8);
      uStack_5c = *(undefined4 *)((int)pfVar10 + iVar8 + 4);
      fStack_68 = *pfVar10;
      fStack_64 = pfVar10[1];
      puVar6 = (undefined4 *)0x0;
      fStack_50 = -(float)puVar4[0x26];
      fStack_7c = -(float)puVar4[0x27] * _DAT_00e5fab4;
      local_80 = fStack_50 * _DAT_00e5fab4;
      puVar5 = local_88;
      local_84 = puVar4;
      do {
        if (puVar5 != puVar6) {
          fStack_70 = *(float *)((int)pfVar11 + iVar8);
          uStack_6c = *(undefined4 *)((int)pfVar11 + iVar8 + 4);
          local_78 = *pfVar11;
          fStack_74 = pfVar11[1];
          FUN_008dc950(&fStack_58,&fStack_60,&fStack_68,&fStack_70,&local_78);
          local_80 = local_80 - fStack_58 * _DAT_00e5fab0;
          fStack_7c = fStack_7c - fStack_54 * _DAT_00e5fab0;
          puVar4 = local_84;
          puVar5 = local_88;
        }
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        pfVar11 = pfVar11 + 2;
      } while (puVar6 < local_8c);
      if (0.001 < fStack_7c * fStack_7c + local_80 * local_80) {
        FUN_008ddd20(puVar4,&local_80);
        puVar5 = local_88;
      }
      local_88 = (undefined4 *)((int)puVar5 + 1);
      pfVar10 = pfVar10 + 2;
      _Memory = local_44;
      piVar7 = local_40;
      pfVar11 = local_34;
    } while (local_88 < local_8c);
  }
  if (pfVar11 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pfVar11);
  }
  if (local_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_c = 0xffffffff;
  if (_Memory != (int *)0x0) {
    local_24 = (void *)0x0;
    for (piVar9 = _Memory; piVar9 != piVar7; piVar9 = piVar9 + 1) {
      puVar4 = (undefined4 *)*piVar9;
      if (puVar4 != (undefined4 *)0x0) {
        piVar1 = puVar4 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
      *piVar9 = 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_008d9310 @ 008d9310 ////

void __fastcall FUN_008d9310(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  if (*(int **)(param_1 + 0x60) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    local_4 = **(int **)(param_1 + 0x54);
    if ((int *)local_4 != *(int **)(param_1 + 0x54)) {
      do {
        if (*(int *)(*(int *)(local_4 + 0xc) + 0x54) == 0) {
          iVar1 = *(int *)(param_1 + 0x60);
          if ((iVar1 == 0) ||
             ((uint)(*(int *)(param_1 + 0x68) - iVar1 >> 2) <=
              (uint)(*(int *)(param_1 + 100) - iVar1 >> 2))) {
            FUN_008d8830((void *)(param_1 + 0x5c),*(int **)(param_1 + 100),1,(int *)(local_4 + 0xc))
            ;
          }
          else {
            piVar2 = *(int **)(param_1 + 100);
            FUN_008d7a40(piVar2,1,(int *)(local_4 + 0xc));
            *(int **)(param_1 + 100) = piVar2 + 1;
          }
        }
        FUN_008d64c0(&local_4);
      } while (local_4 != *(int *)(param_1 + 0x54));
    }
    FUN_008d8540(*(undefined4 ***)(param_1 + 0x60),*(undefined4 ***)(param_1 + 100),
                 (int)*(undefined4 ***)(param_1 + 100) - (int)*(undefined4 ***)(param_1 + 0x60) >> 2
                 ,FUN_008d6b20);
    return;
  }
  local_4 = param_1;
  FUN_008d7af0(*(int **)(param_1 + 0x60),*(int **)(param_1 + 100));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x60));
}


//// FUNCTION FUN_008d93f0 @ 008d93f0 ////

void __thiscall FUN_008d93f0(void *this,float param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  
  puVar1 = *(undefined4 **)((int)this + 100);
  for (puVar5 = *(undefined4 **)((int)this + 0x60); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    FUN_008dd2b0((void *)*puVar5,param_1);
    FUN_008de050((void *)*puVar5,param_1);
  }
  while( true ) {
    piVar7 = *(int **)((int)this + 0x54);
    piVar6 = (int *)*piVar7;
    if (piVar6 != piVar7) {
      do {
        cVar4 = (**(code **)(*(int *)piVar6[3] + 0x10))();
        if (cVar4 != '\0') {
          piVar7 = piVar6;
        }
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          piVar2 = (int *)piVar6[2];
          if (*(char *)((int)piVar2 + 0x11) == '\0') {
            cVar4 = *(char *)(*piVar2 + 0x11);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar4 == '\0') {
              cVar4 = *(char *)(*piVar2 + 0x11);
              piVar6 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar4 = *(char *)(piVar6[1] + 0x11);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
            while ((piVar6 = piVar3, cVar4 == '\0' && (piVar2 == (int *)piVar6[2]))) {
              cVar4 = *(char *)(piVar6[1] + 0x11);
              piVar3 = (int *)piVar6[1];
              piVar2 = piVar6;
            }
          }
        }
      } while (piVar6 != *(int **)((int)this + 0x54));
    }
    if (piVar7 == *(int **)((int)this + 0x54)) break;
    FUN_008d8630(this,(undefined4 *)piVar7[3]);
  }
  FUN_008d8f40((int)this);
  return;
}


//// FUNCTION FUN_008d94c0 @ 008d94c0 ////

void __fastcall FUN_008d94c0(void *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_00990ae0(param_1,param_2);
  iVar2 = (int)uVar4;
  FUN_008d9310((int)param_1);
  if (*(int *)((int)param_1 + 0x70) == 0) {
    *(int *)((int)param_1 + 0x70) = iVar2;
  }
  iVar3 = iVar2 - *(int *)((int)param_1 + 0x70);
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  FUN_008d93f0(param_1,fVar1 * 0.001);
  *(int *)((int)param_1 + 0x70) = iVar2;
  return;
}


//// FUNCTION FUN_008d9510 @ 008d9510 ////

undefined4 __cdecl FUN_008d9510(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 9:
    return 0x20;
  case 1:
    return 0x1c;
  case 2:
  case 6:
    return 0x24;
  case 3:
    return 0x10;
  case 4:
  case 10:
    return 0x18;
  case 5:
    return 0x14;
  case 7:
    return 0x28;
  case 8:
    return 0xc;
  default:
    return 0;
  }
}


//// FUNCTION FUN_008d9580 @ 008d9580 ////

undefined4 __cdecl FUN_008d9580(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x112;
  case 1:
    return 0x144;
  case 2:
    return 0x244;
  case 3:
    return 0x42;
  case 4:
    return 0x142;
  case 5:
    return 0x102;
  case 6:
    return 0x152;
  case 7:
    return 0x212;
  case 8:
    return 2;
  case 9:
    return 0x242;
  case 10:
    return 0x104;
  default:
    return 0;
  }
}


//// FUNCTION FUN_008d9610 @ 008d9610 ////

undefined4 FUN_008d9610(void)

{
  if (DAT_010bb230 != 0) {
    return *(undefined4 *)(DAT_010bb230 + 4);
  }
  return 0;
}


//// FUNCTION FUN_008d9620 @ 008d9620 ////

undefined4 __cdecl FUN_008d9620(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (DAT_010bb234 != (void *)0x0) {
    uVar1 = FUN_00a3a530(DAT_010bb234,param_1,param_2);
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_008d9640 @ 008d9640 ////

void FUN_008d9640(void)

{
  if (DAT_010bb234 != (int *)0x0) {
    FUN_00a3a5d0(DAT_010bb234);
    return;
  }
  return;
}


//// FUNCTION FUN_008d9650 @ 008d9650 ////

undefined4 FUN_008d9650(void)

{
  if (DAT_010bb234 != (undefined4 *)0x0) {
    return *DAT_010bb234;
  }
  return 0;
}


//// FUNCTION FUN_008d9660 @ 008d9660 ////

int * __fastcall FUN_008d9660(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee596;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x24);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_009910f0(puVar1);
  }
  local_4 = 0xffffffff;
  *param_1 = iVar2;
  puVar1 = operator_new(0x24);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_009910f0(puVar1);
  }
  param_1[1] = iVar2;
  *(undefined1 *)(*param_1 + 0xc) = 6;
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xbfffffff;
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) | 0x80000000;
  *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xfffffffe;
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) | 0x8000000;
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) | 0x10000000;
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xfeffffff;
  *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) | 0x2000000;
  local_4 = 0xffffffff;
  if (*(int *)(*param_1 + 0x18) != 0) {
    Engine_SetResourceReference((void *)*param_1,0);
  }
  *(undefined1 *)(param_1[1] + 0xc) = 7;
  *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) & 0xbfffffff;
  *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) | 0x80000000;
  *(uint *)(param_1[1] + 0x14) = *(uint *)(param_1[1] + 0x14) & 0xfffffffe;
  *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) | 0x8000000;
  *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) | 0x10000000;
  *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) & 0xfeffffff;
  *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) | 0x2000000;
  if (*(int *)(param_1[1] + 0x18) != 0) {
    Engine_SetResourceReference((void *)param_1[1],0);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008d97a0 @ 008d97a0 ////

void __fastcall FUN_008d97a0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  return;
}


//// FUNCTION FUN_008d97f0 @ 008d97f0 ////

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FUN_008d97f0(void *this,float *param_1,int *param_2,undefined4 *param_3,uint param_4,
            undefined4 param_5,undefined4 param_6,float param_7,float param_8,char param_9)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float *pfVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char unaff_retaddr;
  undefined4 uVar13;
  int local_3c [2];
  undefined1 local_34 [4];
  void *local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  undefined4 local_8;
  float local_4;
  
  uVar4 = param_4;
  piVar10 = param_2;
  uVar8 = 0;
  if ((((param_4 != 0) && (param_2 != (int *)0x0)) && (*(int *)this != 0)) &&
     (*(int *)((int)this + 4) != 0)) {
    local_3c[1] = 0;
    local_30 = this;
    pfVar2 = (float *)FUN_00a3ac00(param_2,(int)(local_3c + 1));
    if (pfVar2 != (float *)0x0) {
      local_3c[0] = 0;
      local_c = (undefined4 *)FUN_008d9620(uVar4,local_3c);
      if (local_c == (undefined4 *)0x0) {
        FUN_00a3a4e0();
        return;
      }
      if (0 < (int)piVar10) {
        local_8 = 0;
        local_4 = 0.0;
        pfVar9 = param_1;
        do {
          *pfVar2 = 0.0;
          pfVar2[1] = 0.0;
          pfVar2[2] = 0.0;
          pfVar2[3] = 0.0;
          pfVar2[4] = 0.0;
          pfVar2[5] = 0.0;
          pfVar2[6] = 0.0;
          *pfVar2 = param_7 + *pfVar9;
          fVar1 = pfVar9[1];
          pfVar2[2] = 0.0;
          pfVar2[3] = 1.0;
          pfVar2[1] = param_8 + fVar1;
          if ((param_9 == '\0') || ((uVar8 & 1) == 0)) {
            local_1c = (int)ROUND(pfVar9[4] * 255.0);
            local_18 = (int)ROUND(pfVar9[3] * 255.0);
            local_14 = (int)ROUND(pfVar9[2] * 255.0);
            local_2c = pfVar9[5] * 255.0;
            local_10 = (int)ROUND(local_2c);
            pfVar3 = (float *)FUN_0040a530(&param_1,local_10,local_14,local_18,local_1c);
            pfVar2[4] = *pfVar3;
          }
          else {
            local_28 = (int)ROUND(pfVar9[4] * 255.0);
            local_24 = (int)ROUND(pfVar9[3] * 255.0);
            local_2c = pfVar9[2] * 255.0;
            local_20 = (int)ROUND(local_2c);
            pfVar3 = (float *)FUN_0040a530(local_34,0,local_20,local_24,local_28);
            pfVar2[4] = *pfVar3;
          }
          pfVar2[5] = 0.0;
          pfVar2[6] = local_4;
          uVar8 = uVar8 + 1;
          pfVar9 = pfVar9 + 6;
          pfVar2 = pfVar2 + 7;
          piVar10 = param_2;
          uVar4 = param_4;
        } while ((int)uVar8 < (int)param_2);
      }
      puVar11 = param_3;
      puVar12 = local_c;
      for (uVar8 = (uVar4 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      if (DAT_010bb234 != (int *)0x0) {
        FUN_00a3a5d0(DAT_010bb234);
      }
      FUN_00a3a4e0();
      piVar7 = g_pDirect3DDevice;
      (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x144);
      if (DAT_010bb230 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(DAT_010bb230 + 4);
      }
      uVar13 = 0;
      (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar5,0,0x1c);
      if (DAT_010bb234 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *DAT_010bb234;
      }
      (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,iVar6);
      if (unaff_retaddr == '\0') {
        piVar7 = (int *)*piVar7;
      }
      else {
        piVar7 = (int *)piVar7[1];
      }
      LH_ApplyMeshMaterial(piVar7);
      (**(code **)(*g_pDirect3DDevice + 0x148))
                (g_pDirect3DDevice,4,uVar13,0,piVar10,uVar5,local_14 / 3);
    }
  }
  return;
}


//// FUNCTION FUN_008d9ab0 @ 008d9ab0 ////

void __cdecl
FUN_008d9ab0(float *param_1,float param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7)

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
  
  fVar6 = ((-*param_5 + *param_4) - *param_6) + *param_3;
  fVar7 = ((-param_5[1] + param_4[1]) - param_6[1]) + param_3[1];
  fVar9 = ((*param_5 - (*param_4 + *param_4)) + *param_6 + *param_6) - *param_3;
  fVar8 = ((param_5[1] - (param_4[1] + param_4[1])) + param_6[1] + param_6[1]) - param_3[1];
  fVar1 = *param_4;
  fVar2 = *param_3;
  fVar3 = param_4[1];
  fVar4 = param_3[1];
  if (param_7 != (float *)0x0) {
    *param_7 = fVar6 * 3.0 * param_2 * param_2 + (fVar9 + fVar9) * param_2 + (fVar1 - fVar2);
    param_7[1] = fVar7 * 3.0 * param_2 * param_2 + (fVar8 + fVar8) * param_2 + (fVar3 - fVar4);
  }
  fVar5 = param_3[1];
  *param_1 = fVar6 * param_2 * param_2 * param_2 + fVar9 * param_2 * param_2 +
             (fVar1 - fVar2) * param_2 + *param_3;
  param_1[1] = fVar7 * param_2 * param_2 * param_2 + fVar8 * param_2 * param_2 +
               (fVar3 - fVar4) * param_2 + fVar5;
  return;
}


//// FUNCTION FUN_008d9cc0 @ 008d9cc0 ////

int __cdecl
FUN_008d9cc0(int param_1,float *param_2,char param_3,float param_4,float *param_5,int param_6,
            int param_7,int param_8,float *param_9,char param_10)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float local_68;
  float *local_64;
  float local_60;
  int local_5c;
  float *local_54;
  float local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar5 = param_2;
  iVar9 = (int)param_2 / 3;
  iVar6 = iVar9 * (int)param_4;
  if (param_3 == '\0') {
    iVar6 = iVar6 + 1;
  }
  if ((param_5 != (float *)0x0) && (iVar9 != 0)) {
    if (param_9 != (float *)0x0) {
      if (param_3 == '\0') {
        pfVar13 = (float *)(param_1 + -8 + (int)param_2 * 8);
      }
      else {
        local_8 = 0.0;
        local_4 = 0.0;
        pfVar13 = &local_8;
      }
      *param_9 = *pfVar13;
      param_9[1] = pfVar13[1];
    }
    fVar4 = (float)(int)param_4;
    local_68 = param_4;
    param_4 = 0.0;
    local_5c = 0;
    if (0 < iVar9) {
      iVar2 = (int)param_2 * 8;
      pfVar13 = (float *)(param_1 + 0x10);
      do {
        local_54 = pfVar13 + 2;
        if ((float *)(iVar2 + param_1) <= local_54) {
          local_54 = pfVar13 + (int)pfVar5 * -2 + 2;
        }
        if (param_9 != (float *)0x0) {
          *param_9 = *param_9 + pfVar13[-4];
          param_9[1] = pfVar13[-3] + param_9[1];
        }
        if ((local_5c == iVar9 + -1) && (param_3 == '\0')) {
          local_68 = (float)((int)local_68 + 1);
        }
        local_60 = 0.0;
        if (0 < (int)local_68) {
          local_4c = local_68;
          do {
            FUN_008d9ab0(&local_30,local_60,pfVar13 + -4,pfVar13 + -2,pfVar13,local_54,&local_38);
            if ((local_38 != 0.0) || (fVar3 = local_34, local_34 != 0.0)) {
              local_4 = -local_38;
              local_38 = local_34;
              local_8 = local_34;
              if ((local_34 != 0.0) || (fVar3 = local_4, local_4 != 0.0)) {
                fVar3 = 1.0 / SQRT(local_34 * local_34 + local_4 * local_4);
                local_38 = local_34 * fVar3;
                fVar3 = fVar3 * local_4;
              }
            }
            local_34 = fVar3;
            if (param_10 == '\0') {
              iVar7 = 0;
              if (3 < param_8) {
                pfVar12 = (float *)(param_6 + 0x20);
                pfVar11 = (float *)(param_7 + 8);
                param_2 = (float *)((param_8 - 4U >> 2) + 1);
                iVar7 = (int)param_2 * 4;
                pfVar8 = param_5 + 2;
                pfVar10 = param_5;
                do {
                  fVar3 = pfVar11[-2];
                  *pfVar10 = local_38 * fVar3 + local_30;
                  pfVar10[1] = fVar3 * local_34 + local_2c;
                  *pfVar8 = pfVar12[-8];
                  pfVar8[1] = pfVar12[-7];
                  pfVar8[2] = pfVar12[-6];
                  pfVar8[3] = pfVar12[-5];
                  fVar3 = pfVar11[-1];
                  pfVar10[6] = local_38 * fVar3 + local_30;
                  pfVar10[7] = fVar3 * local_34 + local_2c;
                  pfVar8[6] = pfVar12[-4];
                  pfVar8[7] = pfVar12[-3];
                  pfVar8[8] = pfVar12[-2];
                  pfVar8[9] = pfVar12[-1];
                  fVar3 = *pfVar11;
                  pfVar10[0xc] = local_38 * fVar3 + local_30;
                  pfVar10[0xd] = fVar3 * local_34 + local_2c;
                  pfVar8[0xc] = *pfVar12;
                  pfVar8[0xd] = pfVar12[1];
                  pfVar8[0xe] = pfVar12[2];
                  pfVar8[0xf] = pfVar12[3];
                  pfVar1 = pfVar11 + 1;
                  param_5 = pfVar10 + 0x18;
                  pfVar11 = pfVar11 + 4;
                  local_c = *pfVar1 * local_34;
                  local_20 = local_38 * *pfVar1 + local_30;
                  pfVar10[0x12] = local_20;
                  local_1c = local_c + local_2c;
                  pfVar10[0x13] = local_1c;
                  pfVar8[0x12] = pfVar12[4];
                  pfVar8[0x13] = pfVar12[5];
                  pfVar8[0x14] = pfVar12[6];
                  pfVar8[0x15] = pfVar12[7];
                  pfVar12 = pfVar12 + 0x10;
                  param_2 = (float *)((int)param_2 + -1);
                  pfVar8 = pfVar8 + 0x18;
                  pfVar10 = param_5;
                } while (param_2 != (float *)0x0);
              }
              if (iVar7 < param_8) {
                param_2 = param_5 + 2;
                pfVar10 = (float *)(iVar7 * 0x10 + param_6);
                pfVar8 = param_5;
                do {
                  fVar3 = *(float *)(param_7 + iVar7 * 4);
                  param_5 = pfVar8 + 6;
                  local_c = fVar3 * local_34;
                  local_20 = local_38 * fVar3 + local_30;
                  *pfVar8 = local_20;
                  local_1c = local_c + local_2c;
                  pfVar8[1] = local_1c;
                  *param_2 = *pfVar10;
                  param_2[1] = pfVar10[1];
                  param_2[2] = pfVar10[2];
                  param_2[3] = pfVar10[3];
                  param_2 = param_2 + 6;
                  iVar7 = iVar7 + 1;
                  pfVar10 = pfVar10 + 4;
                  pfVar8 = param_5;
                } while (iVar7 < param_8);
              }
            }
            else {
              iVar7 = 0;
              if (3 < param_8) {
                param_2 = (float *)(param_6 + 0x20);
                pfVar8 = (float *)(param_7 + 8);
                pfVar10 = (float *)(param_7 + param_8 * 4);
                local_64 = (float *)((param_8 - 4U >> 2) + 1);
                iVar7 = (int)local_64 * 4;
                pfVar11 = param_5 + 2;
                pfVar12 = param_5;
                do {
                  fVar3 = (*pfVar10 - pfVar8[-2]) * param_4 + pfVar8[-2];
                  *pfVar12 = local_38 * fVar3 + local_30;
                  pfVar12[1] = local_2c + fVar3 * local_34;
                  *pfVar11 = param_2[-8];
                  pfVar11[1] = param_2[-7];
                  pfVar11[2] = param_2[-6];
                  pfVar11[3] = param_2[-5];
                  fVar3 = (pfVar10[1] - pfVar8[-1]) * param_4 + pfVar8[-1];
                  pfVar12[6] = local_38 * fVar3 + local_30;
                  pfVar12[7] = local_2c + fVar3 * local_34;
                  pfVar11[6] = param_2[-4];
                  pfVar11[7] = param_2[-3];
                  pfVar11[8] = param_2[-2];
                  pfVar11[9] = param_2[-1];
                  fVar3 = (pfVar10[2] - *pfVar8) * param_4 + *pfVar8;
                  pfVar12[0xc] = local_38 * fVar3 + local_30;
                  pfVar12[0xd] = local_2c + fVar3 * local_34;
                  pfVar11[0xc] = *param_2;
                  pfVar11[0xd] = param_2[1];
                  pfVar11[0xe] = param_2[2];
                  pfVar11[0xf] = param_2[3];
                  pfVar1 = pfVar10 + 3;
                  param_5 = pfVar12 + 0x18;
                  pfVar10 = pfVar10 + 4;
                  fVar3 = (*pfVar1 - pfVar8[1]) * param_4 + pfVar8[1];
                  pfVar8 = pfVar8 + 4;
                  local_14 = fVar3 * local_34;
                  local_28 = local_38 * fVar3 + local_30;
                  pfVar12[0x12] = local_28;
                  local_24 = local_2c + local_14;
                  pfVar12[0x13] = local_24;
                  pfVar11[0x12] = param_2[4];
                  pfVar11[0x13] = param_2[5];
                  pfVar11[0x14] = param_2[6];
                  pfVar11[0x15] = param_2[7];
                  param_2 = param_2 + 0x10;
                  local_64 = (float *)((int)local_64 + -1);
                  pfVar11 = pfVar11 + 0x18;
                  pfVar12 = param_5;
                } while (local_64 != (float *)0x0);
              }
              if (iVar7 < param_8) {
                pfVar10 = (float *)(iVar7 * 0x10 + param_6);
                local_64 = (float *)(param_7 + (iVar7 + param_8) * 4);
                pfVar8 = param_5;
                param_2 = param_5 + 2;
                do {
                  fVar3 = *(float *)(param_7 + iVar7 * 4);
                  param_5 = pfVar8 + 6;
                  fVar3 = (*local_64 - fVar3) * param_4 + fVar3;
                  local_14 = fVar3 * local_34;
                  local_28 = local_38 * fVar3 + local_30;
                  *pfVar8 = local_28;
                  local_24 = local_2c + local_14;
                  pfVar8[1] = local_24;
                  *param_2 = *pfVar10;
                  param_2[1] = pfVar10[1];
                  param_2[2] = pfVar10[2];
                  param_2[3] = pfVar10[3];
                  iVar7 = iVar7 + 1;
                  local_64 = local_64 + 1;
                  pfVar10 = pfVar10 + 4;
                  pfVar8 = param_5;
                  param_2 = param_2 + 6;
                } while (iVar7 < param_8);
              }
              param_4 = param_4 + (1.0 / fVar4) / (float)iVar9;
            }
            local_60 = local_60 + 1.0 / fVar4;
            local_4c = (float)((int)local_4c + -1);
          } while (local_4c != 0.0);
        }
        local_5c = local_5c + 1;
        pfVar13 = pfVar13 + 6;
      } while (local_5c < iVar9);
    }
    if (param_9 != (float *)0x0) {
      if (param_3 == '\0') {
        iVar9 = iVar9 + 1;
      }
      *param_9 = (1.0 / (float)iVar9) * *param_9;
      param_9[1] = (1.0 / (float)iVar9) * param_9[1];
    }
  }
  return iVar6 * param_8;
}


//// FUNCTION FUN_008da4f0 @ 008da4f0 ////

/* WARNING: Removing unreachable block (ram,0x008da878) */
/* WARNING: Removing unreachable block (ram,0x008da789) */
/* WARNING: Removing unreachable block (ram,0x008da741) */
/* WARNING: Removing unreachable block (ram,0x008da68a) */
/* WARNING: Removing unreachable block (ram,0x008da65c) */
/* WARNING: Removing unreachable block (ram,0x008da6ab) */
/* WARNING: Removing unreachable block (ram,0x008da767) */
/* WARNING: Removing unreachable block (ram,0x008da851) */
/* WARNING: Removing unreachable block (ram,0x008da899) */
/* WARNING: Removing unreachable block (ram,0x008da621) */

void FUN_008da4f0(int param_1,float *param_2,float param_3,uint param_4,uint param_5,float param_6,
                 float param_7)

{
  float *pfVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  float *_Memory;
  int iVar6;
  int iVar7;
  short *psVar8;
  float fVar9;
  float fVar10;
  short *psVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  float local_7c;
  char local_70;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  void *local_44;
  float local_40;
  float local_3c;
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
  float local_8;
  float local_4;
  
  local_70 = '\0';
  if (0.0 <= param_7) {
    iVar14 = 2;
    cVar4 = '\0';
    if (param_7 != 0.0) goto LAB_008da549;
  }
  else {
    param_7 = 0.0;
    cVar4 = '\x01';
  }
  local_70 = cVar4;
  iVar14 = 4;
LAB_008da549:
  iVar5 = ((int)param_2 / 3) * (int)param_3 * iVar14;
  _Memory = operator_new((iVar5 + 1) * 0x18);
  pfVar1 = _Memory + iVar5 * 6;
  iVar6 = iVar5 / iVar14;
  iVar7 = (iVar14 * 2 + -1) * iVar6;
  psVar8 = operator_new(iVar7 * 6);
  local_50 = param_6 * 0.5;
  local_54 = local_50 + 1.0;
  local_4c = param_6 * -0.5;
  local_48 = local_4c - 1.0;
  if (local_70 != '\0') {
    local_4c = 0.0;
    local_48 = 0.0;
  }
  local_24 = (float)(param_5 >> 0x18) * 0.003921569;
  if (param_7 == 0.0) {
    local_30 = (float)(param_5 >> 0x10 & 0xff) * 0.003921569;
    local_2c = (float)(param_5 >> 8 & 0xff) * 0.003921569;
    local_28 = (float)(param_5 & 0xff) * 0.003921569;
    fVar9 = (float)(param_4 >> 0x10 & 0xff) * 0.003921569;
    fVar10 = (float)(param_4 >> 8 & 0xff) * 0.003921569;
    local_7c = (float)(param_4 & 0xff) * 0.003921569;
    local_20 = local_30;
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = local_24;
    local_10 = fVar9;
    local_c = fVar10;
    local_8 = local_7c;
    local_4 = local_24;
  }
  else {
    fVar9 = (float)(param_5 >> 0x10 & 0xff) * 0.003921569;
    fVar10 = (float)(param_4 >> 8 & 0xff) * 0.003921569;
    local_7c = (float)(param_4 & 0xff) * 0.003921569;
    local_50 = 0.0;
    local_30 = fVar9;
    local_2c = fVar10;
    local_28 = local_7c;
  }
  local_34 = 0;
  pfVar1[2] = fVar9;
  pfVar1[3] = fVar10;
  pfVar1[4] = local_7c;
  pfVar1[5] = local_24;
  local_40 = local_30;
  local_3c = local_2c;
  local_38 = local_28;
  FUN_008d9cc0(param_1,param_2,'\x01',param_3,_Memory,(int)&local_40,(int)&local_54,iVar14,pfVar1,
               '\0');
  if (param_7 == 0.0) {
    psVar11 = psVar8;
    iVar14 = iVar6 + -1;
    iVar12 = 0;
    if (0 < iVar6) {
      do {
        sVar2 = (short)iVar14 * 4;
        *psVar11 = sVar2 + 3;
        sVar3 = (short)iVar12 * 4;
        sVar16 = sVar3 + 3;
        psVar11[1] = sVar16;
        psVar11[2] = (short)iVar5;
        psVar11[3] = sVar16;
        sVar13 = sVar3 + 2;
        psVar11[4] = sVar13;
        psVar11[5] = sVar2 + 2;
        psVar11[6] = sVar2 + 2;
        psVar11[7] = sVar2 + 3;
        psVar11[8] = sVar16;
        psVar11[9] = sVar13;
        sVar17 = sVar3 + 1;
        psVar11[10] = sVar17;
        sVar16 = sVar2 + 1;
        psVar11[0xb] = sVar16;
        psVar11[0xc] = sVar16;
        psVar11[0xd] = sVar2 + 2;
        psVar11[0xe] = sVar13;
        psVar11[0xf] = sVar17;
        psVar11[0x10] = sVar3;
        psVar11[0x11] = sVar2;
        psVar11[0x12] = sVar2;
        psVar11[0x13] = sVar16;
        psVar11[0x14] = sVar17;
        psVar11 = psVar11 + 0x15;
        iVar15 = iVar12 + 1;
        iVar14 = iVar12;
        iVar12 = iVar15;
      } while (iVar15 < iVar6);
    }
  }
  else {
    iVar14 = 0;
    psVar11 = psVar8;
    iVar12 = iVar6 + -1;
    if (0 < iVar6) {
      do {
        iVar15 = iVar14;
        sVar3 = (short)iVar12 * 2;
        *psVar11 = sVar3 + 1;
        sVar2 = (short)iVar15 * 2;
        sVar13 = sVar2 + 1;
        psVar11[1] = sVar13;
        psVar11[2] = (short)iVar5;
        psVar11[3] = sVar13;
        psVar11[4] = sVar2;
        psVar11[5] = sVar3;
        psVar11[6] = sVar3;
        psVar11[7] = sVar3 + 1;
        psVar11[8] = sVar13;
        psVar11 = psVar11 + 9;
        iVar14 = iVar15 + 1;
        iVar12 = iVar15;
      } while (iVar15 + 1 < iVar6);
    }
  }
  FUN_008d97f0(local_44,_Memory,(int *)(iVar5 + 1),(undefined4 *)psVar8,iVar7 * 3,0x3f800000,
               0x3f800000,param_7,param_7,local_70);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008dab00 @ 008dab00 ////

int __cdecl FUN_008dab00(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float local_2c;
  int local_28;
  int local_24;
  float local_10 [3];
  
  local_24 = param_2 / 3;
  iVar1 = local_24 * param_3;
  if (((param_4 != (undefined4 *)0x0) && (local_24 != 0)) && (0 < local_24)) {
    pfVar4 = (float *)(param_1 + 0x10);
    do {
      pfVar3 = pfVar4 + 2;
      if ((float *)(param_2 * 8 + param_1) <= pfVar3) {
        pfVar3 = pfVar4 + param_2 * -2 + 2;
      }
      local_2c = 0.0;
      if (0 < param_3) {
        local_28 = param_3;
        do {
          puVar2 = (undefined4 *)
                   FUN_008d9ab0(local_10,local_2c,pfVar4 + -4,pfVar4 + -2,pfVar4,pfVar3,(float *)0x0
                               );
          local_2c = local_2c + 1.0 / (float)param_3;
          *param_4 = *puVar2;
          param_4[1] = puVar2[1];
          param_4 = param_4 + 2;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      pfVar4 = pfVar4 + 6;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return iVar1;
}


//// FUNCTION FUN_008dabf0 @ 008dabf0 ////

void FUN_008dabf0(int param_1,int param_2,int param_3,float *param_4)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  float *_Memory;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  
  iVar3 = (param_2 / 3) * param_3;
  _Memory = operator_new(iVar3 * 8);
  FUN_008dab00(param_1,param_2,param_3,_Memory);
  if (0 < iVar3) {
    pfVar5 = _Memory;
    uVar6 = 1;
    while (uVar4 = (iVar3 <= (int)uVar6) - 1 & uVar6,
          fVar2 = (_Memory[uVar4 * 2] - *pfVar5) * (param_4[1] - pfVar5[1]) -
                  (*param_4 - *pfVar5) * (_Memory[uVar4 * 2 + 1] - pfVar5[1]),
          fVar2 < 0.0 == (fVar2 == 0.0)) {
      pfVar5 = pfVar5 + 2;
      bVar1 = iVar3 <= (int)uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008dacb0 @ 008dacb0 ////

/* WARNING: Removing unreachable block (ram,0x008dae0b) */
/* WARNING: Removing unreachable block (ram,0x008dade4) */
/* WARNING: Removing unreachable block (ram,0x008dae30) */
/* WARNING: Removing unreachable block (ram,0x008dadc1) */

void FUN_008dacb0(int param_1,float *param_2,float param_3,uint param_4,float param_5,float param_6,
                 float param_7)

{
  int iVar1;
  float fVar2;
  short sVar3;
  int *piVar4;
  float *_Memory;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int local_78;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  void *local_44;
  float local_40;
  float local_3c;
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
  float local_8;
  undefined4 local_4;
  
  iVar10 = 3;
  if (param_7 == 0.0) {
    iVar10 = 4;
  }
  piVar4 = (int *)((((int)param_2 / 3) * (int)param_3 + 1) * iVar10);
  _Memory = operator_new((int)piVar4 * 0x18);
  iVar1 = (int)piVar4 / iVar10 + -1;
  uVar7 = (iVar10 * 6 + -6) * iVar1;
  psVar5 = operator_new(uVar7 * 2);
  local_60 = param_5 * 0.5;
  local_64 = local_60 + 1.0;
  local_58 = param_5 * -0.5 - 1.0;
  fVar2 = param_6 * 0.5 + 1.0;
  local_4c = param_6 * -0.5;
  local_48 = local_4c - 1.0;
  local_24 = (float)(param_4 >> 0x18) * 0.003921569;
  local_40 = (float)(param_4 >> 0x10 & 0xff) * 0.003921569;
  local_3c = (float)(param_4 >> 8 & 0xff) * 0.003921569;
  local_38 = (float)(param_4 & 0xff) * 0.003921569;
  local_34 = 0;
  local_4 = 0;
  local_5c = param_5 * -0.5;
  local_54 = fVar2;
  local_50 = param_6 * 0.5;
  local_14 = local_24;
  if (param_7 != 0.0) {
    local_60 = 0.0;
    local_54 = 0.0;
    local_14 = 0.0;
    local_5c = local_58;
    local_58 = fVar2;
    local_50 = local_48;
  }
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  local_20 = local_40;
  local_1c = local_3c;
  local_18 = local_38;
  local_10 = local_40;
  local_c = local_3c;
  local_8 = local_38;
  FUN_008d9cc0(param_1,param_2,'\0',param_3,_Memory,(int)&local_40,(int)&local_64,iVar10,
               (float *)0x0,'\x01');
  if (param_7 == 0.0) {
    local_78 = 0;
    psVar6 = psVar5;
    if (0 < iVar1) {
      do {
        sVar3 = (short)(local_78 << 2);
        *psVar6 = sVar3 + 3;
        sVar8 = sVar3 + 2;
        psVar6[1] = sVar8;
        sVar9 = sVar3 + 6;
        psVar6[2] = sVar9;
        psVar6[3] = sVar9;
        psVar6[4] = sVar3 + 7;
        psVar6[5] = sVar3 + 3;
        psVar6[6] = sVar8;
        sVar12 = sVar3 + 1;
        psVar6[7] = sVar12;
        sVar11 = sVar3 + 5;
        psVar6[8] = sVar11;
        psVar6[9] = sVar11;
        psVar6[10] = sVar9;
        psVar6[0xb] = sVar8;
        psVar6[0xc] = sVar12;
        psVar6[0xd] = sVar3;
        psVar6[0xe] = sVar3 + 4;
        psVar6[0xf] = sVar3 + 4;
        psVar6[0x10] = sVar11;
        psVar6[0x11] = sVar12;
        local_78 = local_78 + 1;
        psVar6 = psVar6 + 0x12;
      } while (local_78 < iVar1);
    }
  }
  else {
    iVar10 = 0;
    psVar6 = psVar5;
    if (0 < iVar1) {
      do {
        sVar3 = (short)iVar10 * 3;
        *psVar6 = sVar3 + 2;
        sVar8 = sVar3 + 1;
        psVar6[1] = sVar8;
        sVar11 = sVar3 + 4;
        psVar6[2] = sVar11;
        psVar6[3] = sVar11;
        psVar6[4] = sVar3 + 5;
        psVar6[5] = sVar3 + 2;
        psVar6[6] = sVar8;
        psVar6[7] = sVar3;
        psVar6[8] = sVar3 + 3;
        psVar6[9] = sVar3 + 3;
        psVar6[10] = sVar11;
        psVar6[0xb] = sVar8;
        psVar6 = psVar6 + 0xc;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
    }
  }
  FUN_008d97f0(local_44,_Memory,piVar4,(undefined4 *)psVar5,uVar7,0x3f800000,0x3f800000,param_7,
               param_7,'\0');
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008db170 @ 008db170 ////

void __thiscall FUN_008db170(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + param_1 * 4 + 8) = param_2;
  return;
}


//// FUNCTION FUN_008db180 @ 008db180 ////

void __thiscall FUN_008db180(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + param_1 * 4 + 0x18) = param_2;
  return;
}


//// FUNCTION FUN_008db210 @ 008db210 ////

void __fastcall FUN_008db210(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x16] = 0x3f800000;
  param_1[0x17] = 0xffc0c0c0;
  param_1[0x18] = 0xff808080;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0x40400000;
  return;
}


//// FUNCTION FUN_008db240 @ 008db240 ////

void __thiscall
FUN_008db240(void *this,undefined4 *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  iVar5 = 0;
  fVar3 = param_2[1];
  fVar4 = *param_2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(float *)((int)this + 0x10) = fVar4 * 0.5;
  *(float *)((int)this + 0x14) = fVar3 * 0.5;
  *(float *)((int)this + 8) = -fVar1 * 0.5;
  *(float *)((int)this + 0xc) = -fVar2 * 0.5;
  fVar1 = param_4 * 0.125;
  fVar2 = fVar1 * 0.125;
  pfVar6 = (float *)((int)this + 0x1c);
  do {
    fVar7 = FUN_00990e30(-fVar1,fVar1);
    pfVar6[-1] = (float)fVar7;
    fVar7 = FUN_00990e30(-fVar1,fVar1);
    *pfVar6 = (float)fVar7;
    if ((iVar5 == 2) || (iVar5 == 3)) {
      param_4 = -param_3;
    }
    else {
      param_4 = param_3;
    }
    fVar7 = FUN_00990e30(-fVar2,fVar2);
    pfVar6[1] = (float)((fVar7 + (float10)1.0) * (float10)param_4);
    if ((iVar5 == 0) || (iVar5 == 3)) {
      param_4 = -param_3;
    }
    else {
      param_4 = param_3;
    }
    fVar7 = FUN_00990e30(fVar2,fVar2);
    iVar5 = iVar5 + 1;
    pfVar6[2] = (float)((fVar7 + (float10)1.0) * (float10)param_4);
    pfVar6 = pfVar6 + 4;
  } while (iVar5 < 4);
  return;
}


//// FUNCTION FUN_008db390 @ 008db390 ////

void __thiscall FUN_008db390(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  undefined4 unaff_EDI;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  int local_4c;
  
  fVar1 = *(float *)((int)this + 0xc);
  local_4c = 0;
  fVar2 = *(float *)((int)this + 4);
  *param_1 = *(float *)this + *(float *)((int)this + 8);
  pfVar7 = (float *)((int)this + 0x20);
  param_1[1] = fVar1 + fVar2;
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = *(float *)((int)this + 4);
  param_1[6] = *(float *)((int)this + 0x10) + *(float *)this;
  param_1[7] = fVar1 + fVar2;
  fVar1 = *(float *)((int)this + 0x14);
  fVar2 = *(float *)((int)this + 4);
  param_1[0xc] = *(float *)((int)this + 0x10) + *(float *)this;
  param_1[0xd] = fVar1 + fVar2;
  fVar1 = *(float *)((int)this + 0x14);
  fVar2 = *(float *)((int)this + 4);
  param_1[0x12] = *(float *)this + *(float *)((int)this + 8);
  param_1[0x13] = fVar1 + fVar2;
  fVar1 = param_1[0xc] - *param_1;
  fVar2 = param_1[0xd] - param_1[1];
  pfVar5 = param_1;
  do {
    fVar3 = pfVar7[-1];
    fVar8 = FUN_00acf400((double)(fVar1 * pfVar7[-2]),(short)unaff_EDI);
    fVar9 = FUN_00acf400((double)(fVar2 * fVar3),(short)unaff_EDI);
    *pfVar5 = (float)fVar8 + *pfVar5;
    pfVar5[1] = (float)(fVar9 + (float10)pfVar5[1]);
    fVar3 = pfVar7[1];
    fVar8 = FUN_00acf400((double)(fVar1 * *pfVar7),(short)unaff_EDI);
    fVar9 = FUN_00acf400((double)(fVar2 * fVar3),(short)unaff_EDI);
    pfVar5[2] = (float)fVar8 + *pfVar5;
    pfVar5[3] = (float)(fVar9 + (float10)pfVar5[1]);
    fVar3 = pfVar7[1];
    fVar8 = FUN_00acf400((double)(fVar1 * *pfVar7),(short)unaff_EDI);
    fVar9 = FUN_00acf400((double)(fVar2 * fVar3),(short)unaff_EDI);
    uVar4 = local_4c + 3U & 0x80000003;
    fVar3 = pfVar5[1];
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    param_1[uVar4 * 6 + 4] = *pfVar5 - (float)fVar8;
    local_4c = local_4c + 1;
    pfVar7 = pfVar7 + 4;
    pfVar5 = pfVar5 + 6;
    param_1[uVar4 * 6 + 5] = (float)((float10)fVar3 - fVar9);
  } while (local_4c < 4);
  iVar6 = 0xc;
  do {
    fVar1 = param_1[1];
    fVar8 = FUN_00acf400((double)*param_1,(short)unaff_EDI);
    fVar9 = FUN_00acf400((double)fVar1,(short)unaff_EDI);
    *param_1 = (float)fVar8;
    param_1[1] = (float)fVar9;
    param_1 = param_1 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


//// FUNCTION FUN_008db5b0 @ 008db5b0 ////

int __thiscall FUN_008db5b0(void *this,undefined4 *param_1,int param_2,float *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float local_60;
  float local_5c;
  float local_48;
  float local_44;
  float local_30;
  float local_2c;
  float local_18;
  float local_14;
  
  FUN_008db390(this,&local_60);
  iVar1 = FUN_008dab00((int)&local_60,0xc,param_2,(undefined4 *)0x0);
  *param_3 = local_60;
  param_3[2] = local_48;
  param_3[1] = local_5c;
  param_3[4] = local_30;
  param_3[3] = local_44;
  param_3[6] = local_18;
  param_3[5] = local_2c;
  param_3[7] = local_14;
  puVar2 = operator_new(iVar1 * 8);
  *param_1 = puVar2;
  FUN_008dab00((int)&local_60,0xc,param_2,puVar2);
  return iVar1;
}


//// FUNCTION FUN_008db650 @ 008db650 ////

void __fastcall FUN_008db650(void *param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint uVar2;
  float10 fVar3;
  ulonglong uVar4;
  float fStack00000004;
  float local_60 [24];
  
  FUN_008db390(param_1,local_60);
  uVar1 = (int)ROUND(*(float *)((int)param_1 + 0x58) * 128.0) << 0x18;
  FUN_008da4f0((int)local_60,(float *)0xc,1.4013e-44,uVar1,uVar1,6.0,4.0);
  fStack00000004 = *(float *)((int)param_1 + 0x58) * 255.0;
  uVar2 = *(uint *)((int)param_1 + 0x5c) & 0xffffff | (int)ROUND(fStack00000004) << 0x18;
  uVar1 = *(uint *)((int)param_1 + 0x60) & 0xffffff | (int)ROUND(fStack00000004) << 0x18;
  if (*(char *)((int)param_1 + 100) != '\0') {
    uVar4 = FUN_00990ae0(extraout_ECX,extraout_EDX);
    fStack00000004 = (float)uVar4;
    fVar3 = (float10)(int)fStack00000004;
    if ((int)fStack00000004 < 0) {
      fVar3 = fVar3 + (float10)4.2949673e+09;
    }
    fVar3 = (float10)fsin(fVar3 * (float10)0.001);
    FUN_008da4f0((int)local_60,(float *)0xc,1.4013e-44,uVar2,uVar1,
                 (float)((fVar3 + (float10)1.0) * (float10)0.5 * (float10)20.0 + (float10)30.0),-1.0
                );
  }
  FUN_008da4f0((int)local_60,(float *)0xc,1.4013e-44,uVar2,uVar1,*(float *)((int)param_1 + 0x68),0.0
              );
  return;
}


//// FUNCTION FUN_008db750 @ 008db750 ////

void __thiscall
FUN_008db750(void *this,undefined4 param_1,float *param_2,float param_3,char param_4,char param_5)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  local_40 = *param_2;
  local_3c = param_2[1];
  local_28 = *(float *)this;
  local_24 = *(float *)((int)this + 4);
  fVar2 = SQRT((local_40 - local_28) * (local_40 - local_28) +
               (local_3c - local_24) * (local_3c - local_24)) * 5.0;
  local_38 = (local_40 + *(float *)this) * 0.5 + fVar2 * *(float *)((int)this + 0x18);
  local_34 = (local_3c + *(float *)((int)this + 4)) * 0.5 + fVar2 * *(float *)((int)this + 0x1c);
  iVar1 = (int)ROUND(*(float *)((int)this + 0x58) * 255.0);
  if (param_4 == '\0') {
    fVar2 = param_3 * 5.0;
    uVar3 = *(uint *)((int)this + 0x60);
    _param_5 = fVar2;
  }
  else {
    bVar4 = param_5 == '\0';
    _param_5 = 0.0;
    if (bVar4) {
      fVar2 = param_3 * 25.0;
      uVar3 = *(uint *)((int)this + 0x60) & 0xffffff | iVar1 << 0x18;
      goto LAB_008db86e;
    }
    uVar3 = *(uint *)((int)this + 0x5c);
    fVar2 = param_3 * 15.0;
  }
  uVar3 = uVar3 & 0xffffff | iVar1 << 0x18;
LAB_008db86e:
  local_30 = local_38;
  local_2c = local_34;
  FUN_008dacb0((int)&local_40,(float *)0x4,7.00649e-45,uVar3,_param_5,fVar2,0.0);
  return;
}


//// FUNCTION FUN_008db8a0 @ 008db8a0 ////

void __thiscall FUN_008db8a0(void *this,undefined4 param_1,float *param_2,float param_3)

{
  FUN_008db750(this,param_1,param_2,param_3,'\x01','\0');
  FUN_008db650(this);
  FUN_008db750(this,param_1,param_2,param_3,'\x01','\x01');
  return;
}


//// FUNCTION FUN_008db920 @ 008db920 ////

void __fastcall FUN_008db920(void *param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float fStack_c;
  float fStack_8;
  
  (**(code **)(**(int **)((int)param_1 + 0x4bc) + 0x84))(0);
  piVar1 = *(int **)((int)param_1 + 0x4bc);
  fVar2 = (float10)(**(code **)(*piVar1 + 0x14))();
  fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
  fStack_c = (float)fVar3;
  fStack_8 = (float)fVar2;
  FUN_00747290(*(void **)(*(int *)((int)param_1 + 0x4bc) + 0x2d4),&fStack_c);
  *(float *)((int)param_1 + 0x4d0) = fStack_c;
  *(float *)((int)param_1 + 0x4d4) = fStack_8;
  fStack_c = fStack_c + *(float *)((int)param_1 + 0x4c8);
  fStack_8 = fStack_8 + *(float *)((int)param_1 + 0x4cc);
  if (*(float *)((int)param_1 + 0x124) < 0.3) {
    fStack_c = fStack_c + 16.0;
    fStack_8 = fStack_8 + 16.0;
  }
  if (fStack_c <= 16.0) {
    fStack_c = 16.0;
  }
  if (fStack_8 <= 16.0) {
    fStack_8 = 16.0;
  }
  if (fStack_8 <= fStack_c * 3.0) {
    if (fStack_8 * 3.0 < fStack_c) {
      fStack_8 = fStack_8 + 6.0;
    }
  }
  else {
    fStack_c = fStack_c + 6.0;
  }
  *(float *)((int)param_1 + 0x4c0) = fStack_c - *(float *)((int)param_1 + 0x4d0);
  *(float *)((int)param_1 + 0x4c4) = fStack_8 - *(float *)((int)param_1 + 0x4d4);
  FUN_008dc2d0(param_1,(int *)&fStack_c);
  return;
}


//// FUNCTION BubbleWindow_TickChildBubbles @ 008dbab0 ////

void __fastcall BubbleWindow_TickChildBubbles(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x4bc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4bc) + 0x28))();
    iVar1 = *(int *)(*(int *)(param_1 + 0x4bc) + 0x124);
    if (iVar1 != *(int *)(param_1 + 0x4bc) + 0x130) {
      do {
        (**(code **)(**(int **)(iVar1 + 8) + 0x28))();
        iVar1 = *(int *)(iVar1 + 4);
      } while (iVar1 != *(int *)(param_1 + 0x4bc) + 0x130);
    }
  }
  return;
}


//// FUNCTION FUN_008dbb00 @ 008dbb00 ////

void __fastcall FUN_008dbb00(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float unaff_EBX;
  float unaff_ESI;
  undefined2 unaff_DI;
  int iVar6;
  float fVar7;
  undefined4 *puStack_28;
  float local_20;
  float local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_28 = (undefined4 *)0x8dbb0b;
  FUN_008d59a0(param_1);
  if (*(char *)((int)param_1 + 0x4ad) != '\0') {
    puStack_28 = (undefined4 *)0x8dbb20;
    uVar2 = FUN_008dc370((int)param_1);
    if (((char)uVar2 != '\0') && ((char)param_1[0x2d] == '\0')) {
      local_20 = 0.0;
      local_4 = 0;
      local_c = 0;
      local_1c = 0.0;
      puStack_28 = &local_10;
      local_8 = 0;
      local_10 = 0;
      (**(code **)(*param_1 + 0x48))();
      if (param_1[0x12f] != 0) {
        local_20 = (float)param_1[0x130] * 0.5 + (float)puStack_28;
        local_1c = (float)param_1[0x131] * 0.5 + unaff_ESI;
        FUN_007472f0(*(void **)(param_1[0x12f] + 0x2d4),&local_20);
        iVar6 = *(int *)param_1[0x12f];
        FUN_00acf400((double)local_20,unaff_DI);
        iVar3 = FUN_0071b2a0();
        fVar4 = (float)FUN_0071b910(iVar3);
        fVar7 = 1.4013e-45;
        (**(code **)(iVar6 + 0x5c))();
        iVar6 = *(int *)param_1[0x12f];
        FUN_00acf400((double)(float)puStack_28,SUB42(fVar7,0));
        iVar3 = FUN_0071b2a0();
        uVar5 = FUN_0071b910(iVar3);
        (**(code **)(iVar6 + 100))(1,uVar5);
        fVar4 = (float)&local_20 - fVar4;
        if ((float)param_1[0x135] < fVar4) {
          fVar4 = (float)param_1[0x135];
        }
        puStack_28 = (undefined4 *)(unaff_EBX - fVar7);
        if ((float)param_1[0x134] < (float)puStack_28) {
          puStack_28 = (undefined4 *)param_1[0x134];
        }
        FUN_007472f0(*(void **)(param_1[0x12f] + 0x2d4),&puStack_28);
        (**(code **)(*(int *)param_1[0x12f] + 0x74))(puStack_28,fVar4);
        iVar6 = 0;
        while( true ) {
          cVar1 = (**(code **)(*(int *)param_1[0x12f] + 0x50))(1);
          if ((cVar1 == '\0') || (0x13 < iVar6)) break;
          iVar6 = iVar6 + 1;
        }
        (**(code **)(*(int *)param_1[0x12f] + 0x2c))();
        *(undefined1 *)(param_1 + 0x137) = 1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_008dbd10 @ 008dbd10 ////

float10 __fastcall FUN_008dbd10(int param_1)

{
  float10 fVar1;
  
  if (*(int **)(param_1 + 0x4bc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dbd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x4bc) + 0x10))();
    return fVar1;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_008dbd30 @ 008dbd30 ////

float10 __fastcall FUN_008dbd30(int param_1)

{
  float10 fVar1;
  
  if (*(int **)(param_1 + 0x4bc) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dbd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x4bc) + 0x14))();
    return fVar1;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_008dbd50 @ 008dbd50 ////

undefined4 * __thiscall FUN_008dbd50(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee5b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008d5f80(this);
  *(undefined ***)this = &PTR_FUN_00d66dc4;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    puVar2 = *(undefined4 **)((int)this + 0x4bc);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  *(int *)((int)this + 0x4bc) = param_1;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined1 *)((int)this + 0x4dc) = 0;
  if (*(int **)((int)this + 0x4bc) != (int *)0x0) {
    iVar3 = **(int **)((int)this + 0x4bc);
    uVar6 = 0;
    iVar4 = FUN_0071b2a0();
    uVar5 = FUN_0071b910(iVar4);
    (**(code **)(iVar3 + 0x5c))(1,uVar5,uVar6);
    iVar3 = **(int **)((int)this + 0x4bc);
    uVar6 = 0;
    iVar4 = FUN_0071b2a0();
    uVar5 = FUN_0071b910(iVar4);
    (**(code **)(iVar3 + 100))(1,uVar5,uVar6);
  }
  FUN_008db920(this);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_008dbe40 @ 008dbe40 ////

undefined4 * __fastcall FUN_008dbe40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cee5c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008d5f80(param_1);
  *param_1 = &PTR_FUN_00d66dc4;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined1 *)(param_1 + 0x137) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008dbeb0 @ 008dbeb0 ////

void __fastcall FUN_008dbeb0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee5e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d66dc4;
  puVar2 = (undefined4 *)param_1[0x12f];
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_008d5570(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008dbf20 @ 008dbf20 ////

void __thiscall FUN_008dbf20(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x4c8) = *param_1;
  *(undefined4 *)((int)this + 0x4cc) = param_1[1];
  FUN_008db920(this);
  return;
}


//// FUNCTION FUN_008dbf40 @ 008dbf40 ////

void __thiscall FUN_008dbf40(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x4bc) + 0x54))(param_1);
  FUN_008db920(this);
  return;
}


//// FUNCTION FUN_008dbf60 @ 008dbf60 ////

void __thiscall FUN_008dbf60(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x4bc) != param_1) {
    *(undefined1 *)((int)this + 0x4dc) = 0;
  }
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x4bc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 0x4bc) = param_1;
  FUN_008db920(this);
  return;
}


//// FUNCTION FUN_008dbfb0 @ 008dbfb0 ////

void __thiscall
FUN_008dbfb0(void *this,undefined4 *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  size_t sVar1;
  int iVar2;
  wchar_t *_Format;
  wchar_t local_80 [64];
  
  _Format = (wchar_t *)(*(int *)((int)this + 0x4d8) + 1);
  *(wchar_t **)((int)this + 0x4d8) = _Format;
  sVar1 = FUN_00ace02d(L"<a href=%");
  FUN_0040cae0(param_2,L"<a href=%",sVar1);
  sVar1 = _swprintf(local_80,0xd18f7c,_Format);
  FUN_0040cae0(param_2,local_80,sVar1);
  sVar1 = FUN_00ace02d(L"><u>");
  FUN_0040cae0(param_2,L"><u>",sVar1);
  FUN_0040cae0(param_2,(wchar_t *)*param_1,param_1[1]);
  sVar1 = FUN_00ace02d(L"</u></a>");
  FUN_0040cae0(param_2,L"</u></a>",sVar1);
  iVar2 = FUN_00ace790(*(int **)((int)this + 0x4bc),0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WHTML::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    (*(code *)**(undefined4 **)(iVar2 + 0x344))(_Format,param_3,param_4);
  }
  return;
}


//// FUNCTION FUN_008dc0a0 @ 008dc0a0 ////

undefined4 * __cdecl FUN_008dc0a0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  void *this;
  undefined4 *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee60b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x4e0);
  local_4 = 0;
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_008dbd50(this,(int)param_1);
  }
  local_4 = 0xffffffff;
  FUN_008d55e0(this_00,0);
  FUN_008d56d0(this_00,0);
  *(undefined1 *)(this_00 + 299) = 1;
  piVar1 = param_1 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  FUN_008dcf70(this_00,param_2);
  ExceptionList = pvStack_c;
  return this_00;
}


//// FUNCTION FUN_008dc140 @ 008dc140 ////

undefined4 * __cdecl FUN_008dc140(undefined4 *param_1)

{
  int *piVar1;
  int *this;
  void *this_00;
  undefined4 *this_01;
  float unaff_retaddr;
  void *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee636;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = operator_new(0x3fc);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00833290(local_10);
  }
  local_4 = 0xffffffff;
  local_14 = (void *)0xff000000;
  FUN_00830550(this,8,(char *)&local_14);
  (**(code **)(*this + 0x78))(param_1);
  this[0xd5] = (int)(unaff_retaddr - 20.0);
  this_00 = operator_new(0x4e0);
  puStack_8 = (undefined1 *)0x1;
  if (this_00 == (void *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    this_01 = FUN_008dbd50(this_00,(int)this);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_008d55e0(this_01,0);
  FUN_008d56d0(this_01,0);
  *(undefined1 *)(this_01 + 299) = 1;
  (**(code **)(*(int *)this_01[0x12f] + 0x54))(param_1);
  FUN_008db920(this_01);
  piVar1 = this + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*this)(1);
  }
  FUN_008dcf70(this_01,param_1);
  ExceptionList = local_14;
  return this_01;
}


//// FUNCTION FUN_008dc260 @ 008dc260 ////

undefined4 * __thiscall FUN_008dc260(void *this,byte param_1)

{
  FUN_008dbeb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008dc2b0 @ 008dc2b0 ////

undefined1 __fastcall FUN_008dc2b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54);
  while (iVar1 = iVar2, iVar1 != 0) {
    param_1 = iVar1;
    iVar2 = *(int *)(iVar1 + 0x54);
  }
  return *(undefined1 *)(param_1 + 0x6c);
}


//// FUNCTION FUN_008dc2d0 @ 008dc2d0 ////

void __thiscall FUN_008dc2d0(void *this,int *param_1)

{
  *(int *)((int)this + 0x70) = *param_1;
  *(int *)((int)this + 0x74) = param_1[1];
  (**(code **)(*(int *)this + 0x40))();
  return;
}


//// FUNCTION FUN_008dc2f0 @ 008dc2f0 ////

void __thiscall FUN_008dc2f0(void *this,int *param_1,int *param_2)

{
  *(int *)((int)this + 0x78) = *param_1;
  *(int *)((int)this + 0x7c) = param_1[1];
  *(int *)((int)this + 0x80) = *param_1;
  *(int *)((int)this + 0x84) = param_1[1];
  *(int *)((int)this + 0x88) = *param_2;
  *(int *)((int)this + 0x8c) = param_2[1];
  (**(code **)(*(int *)this + 0x40))();
  return;
}


//// FUNCTION FUN_008dc330 @ 008dc330 ////

void __thiscall FUN_008dc330(void *this,int *param_1,int *param_2)

{
  *(int *)((int)this + 0x80) = *param_1;
  *(int *)((int)this + 0x84) = param_1[1];
  *(int *)((int)this + 0x88) = *param_2;
  *(int *)((int)this + 0x8c) = param_2[1];
  (**(code **)(*(int *)this + 0x40))();
  return;
}


