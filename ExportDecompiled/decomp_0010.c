//// FUNCTION CStudioAI_ChooseGenre @ 00515180 ////

int __fastcall CStudioAI_ChooseGenre(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_c;
  int local_8;
  int local_4;
  
  local_4 = 0;
  FUN_005202b0();
  iVar3 = AudienceTaste_GetMostPopularGenre();
  fVar5 = FUN_00990dc0(1.0);
  if ((float10)*(float *)(param_1 + 0x284) <= fVar5) {
    local_8 = **(int **)(param_1 + 0x27c);
    local_c = 0.0;
    if ((int *)local_8 != *(int **)(param_1 + 0x27c)) {
      do {
        iVar2 = local_8;
        puVar1 = (undefined4 *)(local_8 + 0xc);
        iVar4 = GenreKey_ToEnum(puVar1);
        if (iVar4 != iVar3) {
          fVar5 = FUN_00990dc0(*(float *)(iVar2 + 0x2c) + local_c);
          if ((float10)local_c < fVar5) {
            local_4 = GenreKey_ToEnum(puVar1);
          }
          local_c = local_c + *(float *)(iVar2 + 0x2c);
        }
        FUN_00440230(&local_8);
      } while (local_8 != *(int *)(param_1 + 0x27c));
    }
    return local_4;
  }
  return iVar3;
}


//// FUNCTION FUN_00515250 @ 00515250 ////

void * FUN_00515250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00515120(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION CStudioAI_MakeMovie @ 00515290 ////

void __thiscall CStudioAI_MakeMovie(void *this,char param_1)

{
  int *piVar1;
  undefined4 *this_00;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_8;
  
  iVar2 = *(int *)((int)this + 0x94);
  iVar6 = 0;
  if (iVar2 != (int)this + 0xa0) {
    do {
      iVar2 = *(int *)(iVar2 + 4);
      iVar6 = iVar6 + 1;
    } while (iVar2 != (int)this + 0xa0);
    if (iVar6 != 0) {
      this_00 = FUN_005a6010();
      FUN_005a2ab0(this_00,this);
      iVar2 = FUN_00514320((int)this);
      fVar7 = FUN_005a1f10(iVar2);
      if ((float10)0.0 <= fVar7) {
        if ((float10)1.0 < fVar7) {
          fVar7 = (float10)1.0;
        }
      }
      else {
        fVar7 = (float10)0.0;
      }
      this_00[0x45] = (float)fVar7;
      iVar2 = CStudioAI_ChooseGenre((int)this);
      FUN_005a2930(this_00,iVar2);
      FUN_005a3050((int)this_00);
      iVar6 = 0;
      for (iVar2 = *(int *)((int)this + 0x94); iVar2 != (int)this + 0xa0;
          iVar2 = *(int *)(iVar2 + 4)) {
        iVar6 = iVar6 + 1;
      }
      uVar3 = FUN_00990d30(0,iVar6);
      iVar2 = *(int *)((int)this + 0x94);
      uVar5 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar5 = uVar5 - 1;
          iVar2 = *(int *)(iVar2 + 4);
        } while (uVar5 != 0);
      }
      FUN_005a2960(this_00,*(undefined4 *)(iVar2 + 8));
      FUN_00514790(this,this_00,uVar3);
      FUN_005a2500(this_00,(float)fVar7);
      FUN_005a5bc0((int)this_00);
      fVar7 = FUN_00990e30(-*(float *)((int)this + 0x28c),*(float *)((int)this + 0x28c));
      fVar7 = fVar7 + (float10)*(float *)((int)this + 0x288);
      if ((float10)0.0 <= fVar7) {
        if (fVar7 <= (float10)1.0) {
          local_8 = (float)fVar7;
        }
        else {
          local_8 = 1.0;
        }
      }
      else {
        local_8 = 0.0;
      }
      uVar8 = extraout_ECX;
      FUN_00407070(&stack0xffffffe8,local_8);
      FUN_005a2520(this_00,uVar8);
      FUN_005a2af0((int)this_00);
      FUN_005a3ea0((int)this_00);
      Release_PushGenreSaturationEntry_AI((int)this_00);
      FUN_005a36b0((int)this_00);
      FUN_005a3770((int)this_00);
      FUN_005a3240(this_00,param_1 == '\0');
      FUN_005a4160(this_00);
      piVar4 = (int *)FUN_005a2510((int)this_00);
      piVar1 = (int *)((int)this + 0x244);
      piVar4[1] = (int)piVar1;
      *piVar4 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar4;
      *piVar1 = (int)piVar4;
      for (iVar2 = *(int *)((int)this + 0x94); iVar2 != (int)this + 0xa0;
          iVar2 = *(int *)(iVar2 + 4)) {
      }
      (**(code **)(*(int *)this + 0x44))();
      iVar2 = FUN_0054b120();
      if (iVar2 != 0) {
        FUN_0054b120();
        FUN_0054af70();
      }
    }
  }
  return;
}


//// FUNCTION CStudioAI_DecideAndReleaseMovie @ 005154a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CStudioAI_DecideAndReleaseMovie(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = CStudioAI_ComputeSuccessDifference(param_1);
  param_1[0xa6] = (int)(float)fVar3;
  fVar3 = CStudioAI_MeanSuccessDifference();
  local_10 = (float)fVar3;
  fVar3 = CStudioAI_RmsSuccessDifference();
  fVar3 = ((float10)_DAT_0104bd90 - (float10)local_10) * (float10)_DAT_0104bd74 +
          ((float10)_DAT_0104bd94 - fVar3) * (float10)_DAT_0104bd78 * (float10)(float)param_1[0xa6];
  if ((float10)0.0 <= fVar3) {
    if ((float10)1.0 < fVar3) {
      fVar3 = (float10)1.0;
    }
  }
  else {
    fVar3 = (float10)0.0;
  }
  local_10 = (float)fVar3;
  local_8 = (float)fVar3;
  FUN_0043b620(&DAT_00e4fa4c,&local_c,(float *)(param_1 + 0x5a));
  FUN_0043b5f0(&local_c,(float *)&DAT_0104bd98);
  pfVar1 = (float *)FUN_0043b620(&DAT_0104bd9c,&local_4,(float *)&DAT_0104bd98);
  fVar3 = FUN_0043b710(pfVar1);
  FUN_0043b520(&local_14,(float)(fVar3 * (float10)0.5));
  fVar3 = FUN_0043b710(&local_14);
  if (fVar3 <= (float10)0.0) {
    fVar3 = (float10)local_8;
  }
  else {
    uVar2 = FUN_0043b6e0(&local_c,&local_14);
    if ((char)uVar2 == '\0') {
      pfVar1 = (float *)FUN_0043b620(&local_c,&local_4,&local_14);
      fVar3 = FUN_0043b710(pfVar1);
      local_8 = (float)fVar3;
      fVar3 = FUN_0043b710(&local_14);
      fVar3 = ((float10)1.0 - (float10)local_10) * ((float10)local_8 / fVar3) + (float10)local_10;
    }
    else {
      fVar3 = FUN_0043b710(&local_c);
      local_8 = (float)fVar3;
      fVar3 = FUN_0043b710(&local_14);
      fVar3 = ((float10)local_8 / fVar3) * (float10)local_10;
    }
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
    }
    else {
      fVar3 = (float10)0.0;
    }
  }
  if ((float10)_DAT_0104bd88 < fVar3) {
    CStudioAI_MakeMovie(param_1,'\x01');
  }
  for (; 0.5 < _DAT_0104bd70; _DAT_0104bd70 = _DAT_0104bd70 - 1.0) {
    CStudioAI_MakeMovie(param_1,'\x01');
  }
  return;
}


//// FUNCTION FUN_00515680 @ 00515680 ////

void __thiscall FUN_00515680(void *this,int param_1)

{
  if (0 < param_1) {
    do {
      CStudioAI_MakeMovie(this,'\0');
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


//// FUNCTION CStudioAI_Tick @ 005156b0 ////

void __fastcall CStudioAI_Tick(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cacfe9;
  local_c = ExceptionList;
  bVar2 = false;
  ExceptionList = &local_c;
  FUN_0050cc00(param_1);
  uVar3 = FUN_0043b490((uint *)(param_1 + 0x88));
  if ((char)uVar3 == '\0') {
    ExceptionList = local_c;
    return;
  }
  uVar4 = FUN_0043b680(&DAT_00e4fa4c,(float *)(param_1 + 0xa8));
  if ((char)uVar4 == '\0') {
    piVar5 = (int *)param_1[0x25];
    uVar3 = 0;
    if (piVar5 == param_1 + 0x28) goto LAB_0051571f;
    do {
      piVar5 = (int *)piVar5[1];
      uVar3 = uVar3 + 1;
    } while (piVar5 != param_1 + 0x28);
    if (uVar3 < 2) goto LAB_0051571f;
  }
  else {
LAB_0051571f:
    piVar5 = FUN_00595380((int *)0x2);
    (**(code **)(*param_1 + 0x30))(piVar5);
    (**(code **)(*piVar5 + 0x120))(1);
    FUN_00514110((int)param_1);
  }
  uVar4 = FUN_0043b680(&DAT_00e4fa4c,(float *)(param_1 + 0xa9));
  if ((char)uVar4 == '\0') {
    if (DAT_0104bd84 != '\0') {
      pcStack_2c = acStack_20;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x14;
      _strncpy(pcStack_2c,"facility_stage",0xe);
      uStack_28 = 0xe;
      pcStack_2c[0xe] = '\0';
      uStack_4 = 0;
      bVar2 = true;
      iVar6 = FUN_00845f70(&pcStack_2c);
      if (iVar6 != 0) goto LAB_005157bf;
    }
    bVar1 = false;
  }
  else {
LAB_005157bf:
    bVar1 = true;
  }
  uStack_4 = 0xffffffff;
  if ((bVar2) && (0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  if (bVar1) {
    FUN_00514a10(param_1);
    FUN_005137c0((int)param_1);
  }
  FUN_00514730((int)param_1);
  CStudioAI_DecideAndReleaseMovie(param_1);
  CStudioAI_DriftPrestigeAndWellBeing((int)param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00515830 @ 00515830 ////

void __fastcall FUN_00515830(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d21ad8;
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


//// FUNCTION FUN_00515880 @ 00515880 ////

undefined4 * __thiscall FUN_00515880(void *this,byte param_1)

{
  FUN_00515830(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005158a0 @ 005158a0 ////

void __thiscall
FUN_005158a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cad008;
  local_c = ExceptionList;
  if (0x71c71c5 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_00515250(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x30);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x30) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xc] == '\0') {
LAB_0051599b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004de950(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_004de9f0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0051599b;
      if (piVar6 == (int *)*piVar2) {
        FUN_004de9f0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_004de950(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00515a50 @ 00515a50 ////

void __thiscall FUN_00515a50(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x31) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00515ab4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00515ab9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00515ab4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00515ab9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x31) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_005158a0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00513a50((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_005158a0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00515b70 @ 00515b70 ////

undefined4 * __thiscall FUN_00515b70(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_005158a0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_005158a0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_005158a0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00513a50((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_005158a0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_005158a0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_004dea90((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00515cf2;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_005158a0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_005158a0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00515cf2:
  puVar4 = (undefined4 *)FUN_00515a50(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00515d20 @ 00515d20 ////

int * __thiscall FUN_00515d20(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00cad028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_005145d0(this,param_1);
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
  piVar2 = FUN_00515b70(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION CStudioAI_LoadTuningData @ 00515e00 ////

void CStudioAI_LoadTuningData(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
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
  puStack_8 = &LAB_00cad100;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x54;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar4 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar5 = FUN_0098b490("InitialStars");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x1ac),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x55;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar4 = (char *)FUN_00ace33d(0xe4e3b0);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("EndStars");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x1b0),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x56;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar4 = (char *)FUN_00ace33d(0xe4fbd4);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("Capital");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x1b4),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x57;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar7 = FUN_00ace3df((int *)(local_34 + 0x1cc));
    pcVar4 = (char *)FUN_00ace33d(iVar7);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("Movies");
  if ((char)uVar5 != '\0') {
    FUN_009897b0(local_34 + 0x1cc);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x58;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("Happiness");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x200));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x59;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("OriginalWellBeing");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x204));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x5a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("OriginalPrestige");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x208));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x5b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PrestigeVar");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x20c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x5c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("StarWellBeingVar");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x210));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x5d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PopularGenrePropensity");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x220));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x5e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PRMarketingLevel");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x224));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x5f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PRMarketingVar");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x228));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x60;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xc;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("MinStarGenreExp");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x22c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x61;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xd;
    pcVar4 = (char *)FUN_00ace33d(0xe4e09c);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("MaxStarGenreExp");
  if ((char)uVar5 != '\0') {
    FUN_00566d60((undefined4 *)(local_34 + 0x230));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x62;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
    pcVar4 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("SuccessDifference");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x234),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 99;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
    pcVar4 = (char *)FUN_00ace33d(0xe4f6dc);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("NumStarMultiplier");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x238),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 100;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x10;
    pcVar4 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("NextStar");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x23c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x65;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x11;
    pcVar4 = (char *)FUN_00ace33d(0xe4fe18);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar9 = 0;
  uVar5 = FUN_0098b490("NextDesertion");
  if ((char)uVar5 != '\0') {
    FUN_0098a430((undefined4 *)(local_34 + 0x240),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x66;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x12;
    iVar7 = FUN_00ace3df((int *)(local_34 + 0x248));
    pcVar4 = (char *)FUN_00ace33d(iVar7);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PAIResearchSchedule");
  if ((char)uVar5 != '\0') {
    FUN_00990970((int *)(local_34 + 0x248));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x67;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x13;
    iVar7 = FUN_00ace3df((int *)(local_34 + 0x260));
    pcVar4 = (char *)FUN_00ace33d(iVar7);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PAIScriptQuality");
  if ((char)uVar5 != '\0') {
    FUN_00990970((int *)(local_34 + 0x260));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x68;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x14;
    iVar7 = FUN_00ace3df((int *)(local_34 + 0x278));
    pcVar4 = (char *)FUN_00ace33d(iVar7);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("PAIBurnRate");
  if ((char)uVar5 != '\0') {
    FUN_00990970((int *)(local_34 + 0x278));
  }
  if (DAT_00e67469 == '\0') {
    pcVar8 = "C:\\movies\\dev\\TheMovies\\StudioAI.cpp";
    pcVar4 = (char *)&DAT_010581d8;
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar4 = pcVar4 + 4;
    }
    local_2c = local_20;
    *pcVar4 = *pcVar8;
    DAT_010581d4 = 0x69;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x15;
    pcVar4 = (char *)FUN_00ace33d(0xe4fcd0);
    pcVar8 = pcVar4;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar4,(int)pcVar8 - (int)(pcVar4 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar5 = FUN_0098b490("SourceName");
  uVar2 = local_34;
  if ((char)uVar5 != '\0') {
    FUN_0098c550((undefined4 *)(local_34 + 0x18c));
  }
  uVar5 = FUN_0098b490("GenrePropensities");
  if (((char)uVar5 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_30 = *(undefined4 *)(uVar2 + 0x21c);
      FUN_0098a3a0(&local_30);
      local_34 = **(int **)(uVar2 + 0x218);
      if ((int *)local_34 != *(int **)(uVar2 + 0x218)) {
        do {
          uVar9 = local_34;
          local_2c = local_20;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          FUN_004015d0(&local_2c,*(char **)(local_34 + 0xc),*(uint *)(local_34 + 0x10));
          local_4 = 0x16;
          FUN_0098c550(&local_2c);
          FUN_00566d60((undefined4 *)(uVar9 + 0x2c));
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          FUN_00440230((int *)&local_34);
        } while (local_34 != *(uint *)(uVar2 + 0x218));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_004417e0((int)(uVar2 + 0x214));
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 0x17;
      SLVAR_LoadUint(&local_34);
      if (local_34 != 0) {
        do {
          FUN_0098c550(&local_2c);
          piVar6 = FUN_00442050((void *)(uVar2 + 0x214),&local_2c);
          FUN_00566d60(piVar6);
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_34);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  FUN_0050b950(uVar2);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CStudioAI_Destructor @ 005172b0 ////

void __fastcall CStudioAI_Destructor(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cad16c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d21c7c;
  param_1[0x19] = &PTR_FUN_00d21c58;
  local_4 = 6;
  if ((undefined4 *)param_1[0x8e] != param_1 + 0x91) {
    do {
      piVar1 = (int *)param_1[0x8e];
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
    } while ((undefined4 *)param_1[0x8e] != param_1 + 0x91);
  }
  if ((undefined4 *)param_1[0xb0] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb0])(1);
  }
  (**(code **)(param_1[0xab] + 4))();
  param_1[0xb0] = 0;
  (**(code **)param_1[0xab])();
  if ((undefined4 *)param_1[0xb6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb6])(1);
  }
  (**(code **)(param_1[0xb1] + 4))();
  param_1[0xb6] = 0;
  (**(code **)param_1[0xb1])();
  if ((undefined4 *)param_1[0xbc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xbc])(1);
  }
  (**(code **)(param_1[0xb7] + 4))();
  param_1[0xbc] = 0;
  (**(code **)param_1[0xb7])();
  param_1[0xb7] = &PTR_LAB_00d21ac8;
  if ((undefined4 *)param_1[0xb9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb9] = param_1[0xb8];
  }
  if (param_1[0xb8] != 0) {
    *(undefined4 *)(param_1[0xb8] + 4) = param_1[0xb9];
  }
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xbc] = 0;
  if ((undefined4 *)param_1[0xb9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb9] = param_1[0xb8];
  }
  if (param_1[0xb8] != 0) {
    *(undefined4 *)(param_1[0xb8] + 4) = param_1[0xb9];
  }
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xb1] = &PTR_LAB_00d21ac8;
  if ((undefined4 *)param_1[0xb3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb3] = param_1[0xb2];
  }
  if (param_1[0xb2] != 0) {
    *(undefined4 *)(param_1[0xb2] + 4) = param_1[0xb3];
  }
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb6] = 0;
  if ((undefined4 *)param_1[0xb3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xb3] = param_1[0xb2];
  }
  if (param_1[0xb2] != 0) {
    *(undefined4 *)(param_1[0xb2] + 4) = param_1[0xb3];
  }
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xab] = &PTR_LAB_00d21ab8;
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
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00441db0(param_1 + 0x9e,&uStack_10,*(int **)param_1[0x9f],(int *)param_1[0x9f]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x9f]);
}


//// FUNCTION FUN_00517510 @ 00517510 ////

void __thiscall FUN_00517510(void *this,byte param_1)

{
  FUN_00517a20((void *)((int)this + -100),param_1);
  return;
}


//// FUNCTION FUN_00517520 @ 00517520 ////

void __thiscall FUN_00517520(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  void *this_00;
  int *piVar8;
  float10 fVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 uStack_4c;
  undefined8 uStack_2c;
  void *pvStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00cad188;
  pvStack_c = ExceptionList;
  uStack_4c = CONCAT44(0x51754a,(undefined4)uStack_4c);
  ExceptionList = &pvStack_c;
  piVar4 = (int *)(**(code **)(*param_1 + 0x1d4))();
  uStack_2c = CONCAT44(&uStack_4c,(undefined4)uStack_2c);
  uStack_4c = FUN_00acd42c();
  FUN_00471b10(&uStack_4c);
  (**(code **)(*piVar4 + 4))();
  piVar4 = piStack_4;
  piVar5 = (int *)FUN_00ace790(piStack_4,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if ((piVar5 != (int *)0x0) && (iVar6 = FUN_005892b0((int)piVar5), iVar6 == 0)) {
    FUN_00591bf0(piVar5);
    piStack_1c = (int *)FUN_004e12f0();
    *(undefined1 *)((int)piStack_1c + 0x31) = 1;
    piStack_1c[1] = (int)piStack_1c;
    *piStack_1c = (int)piStack_1c;
    piStack_1c[2] = (int)piStack_1c;
    uStack_18 = 0;
    piVar8 = *(int **)((int)this + 0x27c);
    piVar4 = (int *)*piVar8;
    pvStack_c = (void *)0x0;
    while (piVar4 != piVar8) {
      fVar11 = (float)piVar4[0xb];
      pfVar7 = (float *)FUN_00515d20(&pvStack_20,piVar4 + 3);
      fVar9 = FUN_00990d60();
      *pfVar7 = (float)(fVar9 * (float10)fVar11);
      FUN_00440230((int *)&stack0xffffffc4);
      piVar8 = *(int **)((int)this + 0x27c);
    }
    fVar9 = FUN_00990d60();
    iVar6 = 2;
    if (fVar9 <= (float10)0.5) {
      iVar6 = 3;
    }
    do {
      fVar11 = -1.0;
      piVar4 = (int *)*piStack_1c;
      piVar8 = (int *)0x0;
      while (piVar4 != piStack_1c) {
        if (fVar11 < (float)piVar4[0xb]) {
          fVar11 = (float)piVar4[0xb];
          piVar8 = piVar4;
        }
        if (*(char *)((int)piVar4 + 0x31) == '\0') {
          piVar2 = (int *)piVar4[2];
          if (*(char *)((int)piVar2 + 0x31) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x31);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x31);
              piVar4 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar4[1] + 0x31);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
            while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
              cVar1 = *(char *)(piVar4[1] + 0x31);
              piVar3 = (int *)piVar4[1];
              piVar2 = piVar4;
            }
          }
        }
      }
      piVar4 = piVar8 + 3;
      fVar9 = FUN_00990e30(*(float *)((int)this + 0x290),*(float *)((int)this + 0x294));
      fVar11 = (float)fVar9;
      this_00 = (void *)FUN_00577370((int)piVar5);
      FUN_00442490(this_00,piVar4,fVar11);
      FUN_004e2ec0(&pvStack_20,&uStack_2c,piVar8);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    pvStack_c = (void *)0xffffffff;
    FUN_004e3480(&pvStack_20,(undefined4 *)&uStack_2c,(int *)*piStack_1c,piStack_1c);
                    /* WARNING: Subroutine does not return */
    _free(piStack_1c);
  }
  piVar5 = (int *)(**(code **)(*piVar4 + 0x1d4))();
  (**(code **)(*piVar5 + 0x58))();
  FUN_00990e30(-100.0,100.0);
  uVar10 = FUN_00acd42c();
  uStack_2c = uVar10 + uStack_2c;
  FUN_00471b10(&uStack_2c);
  piVar5 = (int *)(**(code **)(*piVar4 + 0x1d4))();
  puStack_8 = &stack0xffffffa8;
  FUN_00471b10((longlong *)&stack0xffffffa8);
  (**(code **)(*piVar5 + 0x48))();
  FUN_00575fe0((int)piVar4);
  ExceptionList = pvStack_20;
  return;
}


//// FUNCTION FUN_005177e0 @ 005177e0 ////

void __fastcall FUN_005177e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d21ad8;
  return;
}


//// FUNCTION CStudioAI_Constructor @ 00517840 ////

undefined4 * __fastcall CStudioAI_Constructor(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad232;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0050ff90(param_1);
  *param_1 = &PTR_FUN_00d21c7c;
  param_1[0x19] = &PTR_FUN_00d21c58;
  param_1[0x7c] = param_1 + 0x7f;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x14;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  param_1[0x84] = 2;
  param_1[0x85] = 5;
  uVar3 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x86) = uVar3;
  FUN_00471b10((longlong *)(param_1 + 0x86));
  FUN_0043b440(param_1 + 0x88,0x3c);
  param_1[0x8f] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  puVar1 = param_1 + 0x91;
  param_1[0x93] = 0;
  *puVar1 = 0;
  param_1[0x92] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x8c] = &PTR_LAB_00d21ad8;
  param_1[0x8e] = puVar1;
  *puVar1 = param_1 + 0x8d;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  local_4._0_1_ = 4;
  param_1[0x9d] = 0;
  iVar2 = FUN_00441140();
  param_1[0x9f] = iVar2;
  *(undefined1 *)(iVar2 + 0x31) = 1;
  *(undefined4 *)(param_1[0x9f] + 4) = param_1[0x9f];
  *(undefined4 *)param_1[0x9f] = param_1[0x9f];
  *(undefined4 *)(param_1[0x9f] + 8) = param_1[0x9f];
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  local_4._0_1_ = 5;
  param_1[0xa5] = 0;
  FUN_0043b510(param_1 + 0xa8);
  FUN_0043b510(param_1 + 0xa9);
  param_1[0xaa] = 0;
  param_1[0xae] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = param_1 + 0xab;
  param_1[0xab] = &PTR_LAB_00d21ab8;
  param_1[0xb0] = 0;
  param_1[0xb4] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = param_1 + 0xb1;
  param_1[0xb1] = &PTR_LAB_00d21ac8;
  param_1[0xb6] = 0;
  param_1[0xba] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = param_1 + 0xb7;
  param_1[0xb7] = &PTR_LAB_00d21ac8;
  param_1[0xbc] = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_0043b470(param_1 + 0x88);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00517a20 @ 00517a20 ////

undefined4 * __thiscall FUN_00517a20(void *this,byte param_1)

{
  CStudioAI_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION CStudioAI_CreateRandomNew @ 00517a40 ////

int * CStudioAI_CreateRandomNew(void)

{
  int *piVar1;
  undefined4 *_Memory;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char *local_4c;
  uint local_48;
  undefined4 local_44;
  char local_40 [16];
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad25b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _Memory = operator_new(0x2f8);
  local_4 = 0;
  if (_Memory == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = CStudioAI_Constructor(_Memory);
  }
  local_4 = 0xffffffff;
  iVar3 = FUN_00990d30(1,6);
  piVar2[0x62] = iVar3;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"STUDIO_NAME",0xb);
  local_48 = 0xb;
  local_4c[0xb] = '\0';
  local_4 = 1;
  puVar4 = FUN_009b7190(&local_2c,&local_4c,'\x01',0);
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar2 + 0x1c))(puVar4);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  piVar1 = piVar2 + 0x50;
  piVar2[0x51] = (int)&DAT_0104bcfc;
  *piVar1 = (int)DAT_0104bcfc;
  *(int **)((int)DAT_0104bcfc + 4) = piVar1;
  DAT_0104bcfc = piVar1;
  ExceptionList = pvStack_10;
  return piVar2;
}


//// FUNCTION CStudioAI_CreateFromTemplateWithAnnouncement @ 00517b60 ////

int * __cdecl CStudioAI_CreateFromTemplateWithAnnouncement(undefined4 *param_1)

{
  uint _Count;
  wchar_t *_Source;
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  wchar_t *_Dest;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uStack_80;
  undefined4 uVar10;
  undefined4 uVar11;
  char **ppcVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  char *local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  char acStack_44 [20];
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad28b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_50 = operator_new(0x2f8);
  local_4 = 0;
  if (local_50 == (char *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = CStudioAI_Constructor((undefined4 *)local_50);
  }
  local_4 = 0xffffffff;
  FUN_004015d0(piVar1 + 0x7c,(char *)*param_1,param_1[1]);
  FUN_009b5030(&local_2c,param_1);
  local_4 = 1;
  (**(code **)(*piVar1 + 0x1c))();
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  iVar7 = param_1[8];
  piVar1[0x99] = iVar7;
  piVar1[0x9a] = iVar7;
  piVar1[0x9d] = param_1[9];
  iVar7 = param_1[10];
  piVar1[0x4b] = iVar7;
  piVar1[0x9b] = iVar7;
  piVar1[0x9c] = param_1[0xb];
  piVar1[0xa1] = param_1[0xc];
  piVar1[0xa2] = param_1[0xd];
  piVar1[0xa3] = param_1[0xe];
  piVar1[0xa4] = param_1[0xf];
  piVar1[0xa5] = param_1[0x10];
  uVar13 = param_1[0x14];
  uVar10 = param_1[0x13];
  uVar11 = param_1[0x12];
  uVar15 = param_1[0x11];
  uStack_80 = 0x517c8d;
  pvVar2 = (void *)FUN_00514320((int)piVar1);
  uStack_80 = 0x517c94;
  FUN_005a1eb0(pvVar2,uVar15,uVar11,uVar10,uVar13);
  uVar13 = param_1[0x16];
  uVar10 = param_1[0x15];
  uVar15 = 0;
  uVar11 = 0;
  uStack_80 = 0x517ca7;
  pvVar2 = (void *)FUN_005143a0((int)piVar1);
  uStack_80 = 0x517cae;
  FUN_005a1eb0(pvVar2,uVar10,uVar11,uVar13,uVar15);
  piVar5 = *(int **)param_1[0x18];
  if (piVar5 != (int *)param_1[0x18]) {
    do {
      iVar7 = piVar5[4];
      puVar3 = (undefined4 *)FUN_00449b40(piVar5[3]);
      piVar4 = FUN_00442050(piVar1 + 0x9e,puVar3);
      *piVar4 = iVar7;
      FUN_0050a340((int *)&stack0x00000000);
    } while (piVar5 != (int *)param_1[0x18]);
  }
  piVar1[0x84] = param_1[0x1a];
  uVar8 = FUN_00acd42c();
  iVar7 = piVar1[0x84];
  piVar1[0x85] = (int)uVar8;
  if ((int)uVar8 < iVar7) {
    piVar1[0x85] = iVar7;
  }
  if (0 < iVar7) {
    iVar7 = 0;
    do {
      piVar5 = FUN_00595380((int *)0x2);
      (**(code **)(*piVar1 + 0x30))();
      (**(code **)(*piVar5 + 0x120))();
      iVar7 = iVar7 + 1;
    } while (iVar7 < piVar1[0x84]);
  }
  FUN_00514110((int)piVar1);
  FUN_0043b520(&stack0x00000000,1940.0);
  FUN_005137c0((int)piVar1);
  piVar1[0x86] = param_1[0x1c];
  piVar1[0x87] = param_1[0x1d];
  FUN_00471b10((longlong *)(piVar1 + 0x86));
  piVar5 = (int *)GetPlayerStudio();
  iVar7 = (**(code **)(*piVar5 + 0x54))();
  puVar3 = (undefined4 *)FUN_00464750(iVar7);
  _Dest = (wchar_t *)&uStack_80;
  uStack_80 = uStack_80 & 0xffff0000;
  uVar9 = 10;
  _Count = puVar3[1];
  _Source = (wchar_t *)*puVar3;
  if (9 < _Count) {
    uVar6 = _Count + 0x20 >> 5;
    uVar9 = uVar6 << 5;
    _Dest = _malloc(uVar6 * 0x40);
  }
  _wcsncpy(_Dest,_Source,_Count);
  _Dest[_Count] = L'\0';
  iVar7 = FUN_009efa60(_Dest,_Count,uVar9);
  if (DAT_00e52284 == iVar7) {
    DAT_00e52284 = DAT_00e52284 + 1;
  }
  puVar3 = FUN_00464e10(DAT_00e52284,'\0');
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)(*piVar1 + 0x50))();
  }
  DAT_00e52284 = DAT_00e52284 + 1;
  iVar7 = FUN_009ef730();
  if (iVar7 <= DAT_00e52284) {
    DAT_00e52284 = 1;
  }
  piVar5 = FUN_00460cc0(piVar1);
  (**(code **)(piVar1[0x73] + 4))();
  piVar1[0x78] = (int)piVar5;
  (**(code **)piVar1[0x73])();
  piVar5 = piVar1 + 0x50;
  piVar1[0x51] = (int)&DAT_0104bcfc;
  *piVar5 = (int)DAT_0104bcfc;
  *(int **)((int)DAT_0104bcfc + 4) = piVar5;
  DAT_0104bcfc = piVar5;
  if (300 < *DAT_00f87b04) {
    local_50 = acStack_44;
    acStack_44[0] = '\0';
    uStack_4c = 0;
    uStack_48 = 0x20;
    local_50 = _malloc(0x20);
    uStack_80 = 0x517ed5;
    _strncpy(local_50,"TANNOY_NEW_STUDIOOPENED",0x17);
    uStack_4c = 0x17;
    local_50[0x17] = '\0';
    iVar14 = 3;
    ppcVar12 = &local_50;
    iVar7 = 2;
    puStack_8 = (undefined1 *)0x2;
    uStack_80 = 0x517f03;
    FUN_004f3b20();
    uStack_80 = 0x517f0a;
    FUN_004f8a00(iVar7,ppcVar12,iVar14);
    if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
  }
  ExceptionList = pvStack_10;
  return piVar1;
}


//// FUNCTION FUN_00517f70 @ 00517f70 ////

void __fastcall FUN_00517f70(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00517fa0 @ 00517fa0 ////

void FUN_00517fa0(void)

{
  return;
}


//// FUNCTION FUN_00517fb0 @ 00517fb0 ////

undefined4 __fastcall FUN_00517fb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x230);
}


//// FUNCTION FUN_00518050 @ 00518050 ////

int __fastcall FUN_00518050(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}


//// FUNCTION FUN_00518080 @ 00518080 ////

int * __thiscall FUN_00518080(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005180e0 @ 005180e0 ////

int __fastcall FUN_005180e0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_005182f0 @ 005182f0 ////

void __cdecl FUN_005182f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}


//// FUNCTION FUN_00518350 @ 00518350 ////

int * __thiscall FUN_00518350(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005183d0 @ 005183d0 ////

undefined4 * __cdecl FUN_005183d0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00518410 @ 00518410 ////

void __cdecl FUN_00518410(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return;
}


//// FUNCTION FUN_00518450 @ 00518450 ////

void __cdecl FUN_00518450(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00518490 @ 00518490 ////

void __cdecl FUN_00518490(void *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cad2b1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00494f40(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00518570 @ 00518570 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00518570(int param_1)

{
  float *pfVar1;
  float unaff_ESI;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  local_8 = DAT_00e52190;
  pfVar1 = (float *)FUN_00452af0(DAT_00f88720,&local_c);
  local_8 = local_8 * *pfVar1;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  local_c = DAT_00e52194;
  puVar2 = local_4;
  pfVar1 = (float *)(**(code **)(*DAT_00f890c0 + 0x188))();
  fVar4 = unaff_ESI * *pfVar1;
  if (0.0 <= fVar4) {
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  pfVar1 = (float *)(**(code **)(*DAT_00f890c0 + 0xb8))(&local_8);
  fVar3 = DAT_00e5219c;
  fVar5 = (float)puVar2 + fVar4 + (1.0 - *pfVar1) * _DAT_00e52198;
  pfVar1 = (float *)FUN_00465f40(&local_c);
  fVar4 = DAT_00e521a0;
  fVar3 = fVar3 * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar3 = fVar3 + fVar5;
  pfVar1 = (float *)FUN_00466060(&local_c);
  fVar5 = DAT_00e521a4;
  fVar4 = fVar4 * *pfVar1;
  if (0.0 <= fVar4) {
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.0;
  }
  fVar4 = fVar4 + fVar3;
  pfVar1 = (float *)FUN_00466180(&local_c);
  fVar5 = fVar5 * *pfVar1;
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  pfVar1 = (float *)FUN_00466290(&local_c);
  fVar4 = fVar5 + fVar4 + (1.0 - *pfVar1) * _DAT_00e521a8;
  if (0.0 <= fVar4) {
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    *(float *)(param_1 + 300) = fVar4;
    return;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}


//// FUNCTION FUN_00518a80 @ 00518a80 ////

void __cdecl FUN_00518a80(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00518b50 @ 00518b50 ////

void * __cdecl FUN_00518b50(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cad2d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_00494f40(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00518bd0 @ 00518bd0 ////

void __fastcall FUN_00518bd0(int *param_1)

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
  puStack_8 = &LAB_00cad2e8;
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


//// FUNCTION FUN_00518d00 @ 00518d00 ////

uint FUN_00518d00(void)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad308;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"moviemaking",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 0;
  ResearchCategory_NameToEnum(&local_40,&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0049d9d0(&local_44);
  piVar2 = (int *)FUN_0049d9e0(&local_30);
  if (local_44 != *piVar2) {
    do {
      local_3c = *(undefined4 *)(*(int *)(local_44 + 8) + 0xa0);
      bVar1 = FUN_0049ba50(&local_3c,&local_40);
      if ((bVar1) && (bVar1 = FUN_0049c760(*(int *)(local_44 + 8)), bVar1)) {
        local_38 = *(undefined4 *)(*(int *)(local_44 + 8) + 0x134);
        uVar3 = FUN_0043b6e0(&local_38,(float *)&stack0x00000004);
        if ((char)uVar3 != '\0') {
          local_34 = *(undefined4 *)(*(int *)(local_44 + 8) + 0xa4);
          uVar3 = FUN_0043b680(&local_34,(float *)&stack0x00000004);
          if ((char)uVar3 != '\0') {
            ExceptionList = local_c;
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
        }
      }
      local_44 = *(int *)(local_44 + 4);
      piVar2 = (int *)FUN_0049d9e0(&local_30);
    } while (local_44 != *piVar2);
  }
  ExceptionList = local_c;
  return (uint)piVar2 & 0xffffff00;
}


//// FUNCTION FUN_00518e80 @ 00518e80 ////

void __thiscall FUN_00518e80(void *this,float *param_1)

{
  int iVar1;
  void *pvVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  float local_38;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad328;
  local_c = ExceptionList;
  local_38 = 0.0;
  puVar4 = DAT_0104cfc8;
  ExceptionList = &local_c;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      iVar1 = puVar4[2];
      pvVar2 = (void *)FUN_005773c0(iVar1);
      if (pvVar2 == this) {
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"Stunts",6);
        local_28 = 6;
        local_2c[6] = '\0';
        ppcVar6 = &local_2c;
        puVar5 = &local_30;
        local_4 = 0;
        pvVar2 = (void *)FUN_00577370(iVar1);
        pfVar3 = (float *)FUN_00441750(pvVar2,puVar5,ppcVar6);
        local_38 = *pfVar3 + local_38;
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
      }
      puVar5 = puVar4 + 1;
      puVar4 = (undefined4 *)*puVar5;
    } while ((undefined4 *)*puVar5 != &DAT_0104cfd4);
    if (local_38 < 0.0) {
      local_38 = 0.0;
    }
    else if (1.0 < local_38) {
      local_38 = 1.0;
    }
  }
  *param_1 = local_38;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00518fb0 @ 00518fb0 ////

void __thiscall FUN_00518fb0(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  void *this_00;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  float local_c;
  int local_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)((int)this + 0x94);
  iVar6 = 0;
  uVar5 = 0;
  local_c = 0.0;
  local_8 = 0;
  if (iVar1 == (int)this + 0xa0) {
LAB_00518fed:
    iVar1 = *(int *)((int)this + 0x94);
    if (iVar1 == (int)this + 0xa0) goto LAB_005190fd;
    do {
      if (*(void **)(iVar1 + 8) != (void *)0x0) {
        pfVar2 = (float *)FUN_00585ff0(*(void **)(iVar1 + 8),&local_8);
        local_c = local_c + *pfVar2;
        iVar6 = iVar6 + 1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != (int)this + 0xa0);
  }
  else {
    do {
      iVar1 = *(int *)(iVar1 + 4);
      uVar5 = uVar5 + 1;
    } while (iVar1 != (int)this + 0xa0);
    if (uVar5 < 4) goto LAB_00518fed;
    local_8 = FUN_0045f400();
    iVar1 = *(int *)(local_8 + 0x98);
    local_8 = local_8 + 0xa4;
    if (iVar1 == local_8) goto LAB_005190fd;
    do {
      if (2 < iVar6) break;
      if (*(int **)(iVar1 + 8) != (int *)0x0) {
        iVar10 = 0;
        pTVar9 = &TM::CStar::RTTI_Type_Descriptor;
        pTVar8 = &TM::TMObject::RTTI_Type_Descriptor;
        iVar7 = 0;
        piVar3 = (int *)(**(code **)(**(int **)(iVar1 + 8) + 4))();
        this_00 = (void *)FUN_00ace790(piVar3,iVar7,pTVar8,pTVar9,iVar10);
        if ((this_00 != (void *)0x0) &&
           (pvVar4 = (void *)FUN_005773c0((int)this_00), pvVar4 == this)) {
          pfVar2 = (float *)FUN_00585ff0(this_00,&uStack_4);
          local_c = local_c + *pfVar2;
          iVar6 = iVar6 + 1;
        }
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != local_8);
  }
  if (iVar6 != 0) {
    local_c = local_c / (float)iVar6;
  }
  if (local_c < 0.0) {
    *param_1 = 0.0;
    return;
  }
  if (1.0 < local_c) {
    *param_1 = 1.0;
    return;
  }
LAB_005190fd:
  *param_1 = local_c;
  return;
}


//// FUNCTION FUN_00519120 @ 00519120 ////

void __fastcall FUN_00519120(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 extraout_ST0;
  float local_8;
  
  iVar4 = 0;
  local_8 = 0.0;
  puVar3 = DAT_0104d05c;
  if (DAT_0104d05c != &DAT_0104d068) {
    do {
      iVar2 = (**(code **)(*(int *)puVar3[2] + 0x27c))();
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*(int *)puVar3[2] + 0x27c))();
        iVar2 = FUN_004725b0(iVar2);
        FUN_00566e40(iVar2);
        iVar4 = iVar4 + 1;
        local_8 = (float)(extraout_ST0 + (float10)local_8);
      }
      puVar3 = (undefined4 *)puVar3[1];
    } while (puVar3 != &DAT_0104d068);
    if (0 < iVar4) {
      fVar1 = *(float *)(param_1 + 0x2b4) * 0.99 + (local_8 / (float)iVar4) * 0.01;
      if (fVar1 < 0.0) {
        *(undefined4 *)(param_1 + 0x2b4) = 0;
        return;
      }
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
      *(float *)(param_1 + 0x2b4) = fVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00519290 @ 00519290 ////

void __fastcall FUN_00519290(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d21d50;
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


//// FUNCTION FUN_00519330 @ 00519330 ////

void __cdecl FUN_00519330(void *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cad351;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_00494f40(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0xc);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00519430 @ 00519430 ////

undefined4 * __thiscall FUN_00519430(void *this,byte param_1)

{
  FUN_00519290(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00519450 @ 00519450 ////

void __fastcall FUN_00519450(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar1 = param_1[0x89];
  param_1[0x89] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    uVar4 = FUN_00990d30(1,4);
    uVar7 = 0;
    for (piVar2 = (int *)param_1[0x3f]; piVar2 != param_1 + 0x42; piVar2 = (int *)piVar2[1]) {
      uVar7 = uVar7 + 1;
    }
    if ((uVar7 < uVar4) && (puVar5 = FUN_004ca690(0), puVar5 != (undefined4 *)0x0)) {
      puVar6 = puVar5 + 0x23;
      puVar5[0x24] = &DAT_0104ac5c;
      *puVar6 = DAT_0104ac5c;
      *(undefined4 **)((int)DAT_0104ac5c + 4) = puVar6;
      DAT_0104ac5c = puVar6;
    }
    FUN_00990e30(1.0,2.0);
    uVar8 = FUN_00acd42c();
    param_1[0x89] = (int)uVar8;
  }
  uVar7 = FUN_0043b490((uint *)(param_1 + 0xa9));
  if ((char)uVar7 != '\0') {
    FUN_00518570((int)param_1);
  }
  bVar3 = FUN_0043b920(0xe4fa4c);
  if (bVar3) {
    FUN_00519120((int)param_1);
  }
  FUN_0050cc00(param_1);
  return;
}


//// FUNCTION FUN_005195b0 @ 005195b0 ////

void __thiscall FUN_005195b0(void *this,int param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  
  if (param_1 < 0xd) {
    iVar1 = *(int *)((int)this + 600);
    if (iVar1 != *(int *)((int)this + 0x25c)) {
      while (*(int *)((int)*(void **)(iVar1 + 0x14) + 0x15c) != param_1) {
        iVar1 = iVar1 + 0x18;
        if (iVar1 == *(int *)((int)this + 0x25c)) {
          return;
        }
      }
      FUN_00952220(*(void **)(iVar1 + 0x14),param_2,param_3);
    }
  }
  return;
}


//// FUNCTION FUN_00519690 @ 00519690 ////

void FUN_00519690(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *local_4;
  
  local_4 = (int *)*DAT_0104ad78;
  if (local_4 != DAT_0104ad78) {
    do {
      FUN_00494fb0(local_4 + 0xb,0,DAT_00e4fa4c);
      FUN_004cc430((int *)&local_4);
    } while (local_4 != DAT_0104ad78);
  }
  piVar4 = (int *)*DAT_00f88688;
  if (piVar4 != DAT_00f88688) {
    do {
      FUN_00494fb0(piVar4 + 4,0,DAT_00e4fa4c);
      if (*(char *)((int)piVar4 + 0x1d) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x1d);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x1d);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x1d);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x1d);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != DAT_00f88688);
  }
  return;
}


//// FUNCTION FUN_00519810 @ 00519810 ////

void * FUN_00519810(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_00519330(param_1,param_2,param_3);
  return (void *)((int)param_1 + param_2 * 0xc);
}


//// FUNCTION FUN_00519860 @ 00519860 ////

void __cdecl FUN_00519860(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d21d50;
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


//// FUNCTION FUN_005198d0 @ 005198d0 ////

void __fastcall FUN_005198d0(int param_1)

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


//// FUNCTION FUN_00519970 @ 00519970 ////

void __cdecl FUN_00519970(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d21d50;
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


//// FUNCTION FUN_00519a10 @ 00519a10 ////

void __fastcall FUN_00519a10(int param_1)

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


//// FUNCTION FUN_00519a40 @ 00519a40 ////

void __fastcall FUN_00519a40(int param_1)

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


//// FUNCTION FUN_00519af0 @ 00519af0 ////

void FUN_00519af0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00519290(param_1);
  }
  return;
}


//// FUNCTION FUN_00519b20 @ 00519b20 ////

void __fastcall FUN_00519b20(int param_1)

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
    FUN_00519290(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00519b70 @ 00519b70 ////

undefined4 * FUN_00519b70(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00519970(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00519ba0 @ 00519ba0 ////

void FUN_00519ba0(void)

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
  puStack_8 = &LAB_00cad368;
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


//// FUNCTION FUN_00519c10 @ 00519c10 ////

void FUN_00519c10(void)

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
  puStack_8 = &LAB_00cad388;
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


//// FUNCTION FUN_00519c80 @ 00519c80 ////

void __fastcall FUN_00519c80(int param_1)

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
    FUN_00519290(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00519d80 @ 00519d80 ////

void __thiscall FUN_00519d80(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cad3a8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d21d50;
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
      FUN_00519ba0();
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
        iVar3 = FUN_005180e0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00519860(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00519970(puVar5,param_2,(int)&local_34);
      FUN_00519860((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00519af0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00519860((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00519b70(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00518a80(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00519860((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_005183d0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00518a80(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_0051a0b0 @ 0051a0b0 ////

void __thiscall FUN_0051a0b0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_20 [3];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cad3c0;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  ExceptionList = &local_10;
  FUN_00494f40(local_20,param_3);
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0xc;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if (0x15555555U - iVar2 < param_2) {
      FUN_00519c10();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x15555555 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_00518050((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0xc);
      local_8 = 0;
      pvVar5 = FUN_00518b50(*(undefined4 **)((int)this + 4),param_1,pvVar4);
      FUN_00519330(pvVar5,param_2,local_20);
      FUN_00518b50(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0xc));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0xc + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((int)pvVar4 + (param_2 + iVar3) * 0xc);
      *(void **)((int)this + 4) = pvVar4;
      ExceptionList = local_10;
      return;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar1 - (int)param_1) / 0xc) < param_2) {
      FUN_00518b50(param_1,puVar1,param_1 + param_2 * 3);
      local_8 = 2;
      FUN_00519810(*(void **)((int)this + 8),
                   param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0xc,local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0xc;
      *(int *)((int)this + 8) = iVar3;
      FUN_005182f0(param_1,(undefined4 *)(iVar3 + param_2 * -0xc),local_20);
      ExceptionList = local_10;
      return;
    }
    pvVar4 = FUN_00518b50(puVar1 + param_2 * -3,puVar1,puVar1);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00518450(param_1,puVar1 + param_2 * -3,puVar1);
    FUN_005182f0(param_1,param_1 + param_2 * 3,local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0051a360 @ 0051a360 ////

void __fastcall FUN_0051a360(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  while ((*(int *)(param_1 + 600) != 0 &&
         ((*(int *)(param_1 + 0x25c) - *(int *)(param_1 + 600)) / 0x18 != 0))) {
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 600) + 0x14);
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
    piVar1 = *(int **)(param_1 + 600);
    (**(code **)(*piVar1 + 4))();
    piVar1[5] = 0;
    (**(code **)*piVar1)();
    piVar2 = *(int **)(param_1 + 0x25c);
    piVar1 = *(int **)(param_1 + 600) + 6;
    piVar4 = *(int **)(param_1 + 600);
    while (piVar1 != piVar2) {
      (**(code **)(*piVar4 + 4))();
      piVar4[5] = piVar4[0xb];
      (**(code **)*piVar4)();
      piVar1 = piVar4 + 0xc;
      piVar4 = piVar4 + 6;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x25c);
    for (puVar5 = puVar3 + -6; puVar5 != puVar3; puVar5 = puVar5 + 6) {
      FUN_00519290(puVar5);
    }
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -0x18;
  }
  return;
}


//// FUNCTION FUN_0051a450 @ 0051a450 ////

void __thiscall FUN_0051a450(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_0051a495;
    }
  }
  iVar1 = 0;
LAB_0051a495:
  FUN_00519d80(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_0051a4c0 @ 0051a4c0 ////

void __thiscall FUN_0051a4c0(void *this,uint param_1)

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
    uVar3 = (*(int *)((int)this + 8) - iVar4) / 0xc;
  }
  if (param_1 <= uVar3) {
    if (((iVar4 != 0) &&
        (puVar2 = *(undefined4 **)((int)this + 8), param_1 < (uint)(((int)puVar2 - iVar4) / 0xc)))
       && (puVar1 = (undefined4 *)(iVar4 + param_1 * 0xc), puVar1 != puVar2)) {
      uVar5 = FUN_00518410(puVar2,puVar2,puVar1);
      *(undefined4 *)((int)this + 8) = uVar5;
    }
    return;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)((int)this + 8) - iVar4) / 0xc;
  }
  FUN_0051a0b0(this,*(undefined4 **)((int)this + 8),param_1 - iVar4,(undefined4 *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_0051a570 @ 0051a570 ////

void __thiscall FUN_0051a570(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0xc != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0xc;
      goto LAB_0051a5b3;
    }
  }
  iVar1 = 0;
LAB_0051a5b3:
  FUN_0051a0b0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0xc;
  return;
}


//// FUNCTION FUN_0051a5e0 @ 0051a5e0 ////

void __fastcall FUN_0051a5e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cad43a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d21d84;
  param_1[0x19] = &PTR_LAB_00d21d64;
  local_4 = 7;
  if ((undefined4 *)param_1[0x7e] != param_1 + 0x81) {
    do {
      piVar1 = (int *)param_1[0x7e];
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
    } while ((undefined4 *)param_1[0x7e] != param_1 + 0x81);
  }
  FUN_0051a360((int)param_1);
  if ((void *)param_1[0xa6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa6]);
  }
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  if ((void *)param_1[0xa2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa2]);
  }
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  if ((void *)param_1[0x9e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x9e]);
  }
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  if ((undefined4 *)param_1[0x9a] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x9a],(undefined4 *)param_1[0x9b]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x9a]);
  }
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  FUN_00519b20((int)(param_1 + 0x95));
  if (10 < (uint)param_1[0x8f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x8d]);
  }
  FUN_0050dda0(param_1 + 0x7c);
  local_4 = 0xffffffff;
  FUN_0050e820(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0051a780 @ 0051a780 ////

void __thiscall FUN_0051a780(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00519970(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_0051a450(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0051a810 @ 0051a810 ////

void __thiscall FUN_0051a810(void *this,uint param_1)

{
  float *pfVar1;
  float fVar2;
  undefined1 auStack_18 [12];
  void *local_4;
  
  fVar2 = DAT_00e4fa4c;
  local_4 = this;
  pfVar1 = (float *)FUN_0043b520(&local_4,0.1);
  FUN_00495060(auStack_18,0.0,*pfVar1,fVar2);
  FUN_0051a4c0(this,param_1);
  return;
}


//// FUNCTION FUN_0051a860 @ 0051a860 ////

void __thiscall FUN_0051a860(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0xc) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0xc))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00519330(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0xc;
    return;
  }
  FUN_0051a570(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0051a8e0 @ 0051a8e0 ////

void __fastcall FUN_0051a8e0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  float fVar8;
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
  puStack_8 = &LAB_00cad4b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar6;
    DAT_010581d4 = 0x30;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar5 = FUN_00ace3df((int *)(param_1 + 0x18c));
    pcVar2 = (char *)FUN_00ace33d(iVar5);
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
  uVar3 = FUN_0098b490("ProjectList");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x18c);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar6;
    DAT_010581d4 = 0x31;
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
  uVar3 = FUN_0098b490("GUID");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x1cc),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar6;
    DAT_010581d4 = 0x32;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar2 = (char *)FUN_00ace33d(0xe4f6b8);
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
  uVar3 = FUN_0098b490("PlayerName");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x1d0));
  }
  uVar3 = FUN_0098b490("SLSetMapStrings");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x204) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x204) >> 5;
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (local_38 = 0;
          (*(int *)(param_1 + 0x204) != 0 &&
          (local_38 < (uint)(*(int *)(param_1 + 0x208) - *(int *)(param_1 + 0x204) >> 5)));
          local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
          pcVar2 = (char *)&DAT_010581d8;
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar2 = pcVar2 + 4;
          }
          local_2c = local_20;
          *pcVar2 = *pcVar6;
          DAT_010581d4 = 0x33;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 3;
          pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
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
        uVar3 = FUN_0098b490("SLSetMapStrings[x]");
        if ((char)uVar3 != '\0') {
          FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0x204) + local_34));
        }
        local_34 = local_34 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = 0;
      FUN_004063f0(param_1 + 0x200);
      SLVAR_LoadUint(&local_38);
      FUN_004c16a0((void *)(param_1 + 0x200),local_38);
      local_30 = 0;
      if (local_38 != 0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
            pcVar2 = (char *)&DAT_010581d8;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar2 = pcVar2 + 4;
            }
            local_2c = local_20;
            *pcVar2 = *pcVar6;
            DAT_010581d4 = 0x33;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 4;
            pcVar2 = (char *)FUN_00ace33d(0xe4fcd0);
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
          uVar3 = FUN_0098b490("SLSetMapStrings[x]");
          if ((char)uVar3 != '\0') {
            FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0x204) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  uVar3 = FUN_0098b490("SLSetMapBoredoms");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x214) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = (*(int *)(param_1 + 0x218) - *(int *)(param_1 + 0x214)) / 0xc;
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (uVar7 = 0;
          (*(int *)(param_1 + 0x214) != 0 &&
          (uVar7 < (uint)((*(int *)(param_1 + 0x218) - *(int *)(param_1 + 0x214)) / 0xc)));
          uVar7 = uVar7 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
          pcVar2 = (char *)&DAT_010581d8;
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar2 = pcVar2 + 4;
          }
          local_2c = local_20;
          *pcVar2 = *pcVar6;
          DAT_010581d4 = 0x34;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 5;
          pcVar2 = (char *)FUN_00ace33d(0xe52344);
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
        uVar3 = FUN_0098b490("SLSetMapBoredoms[x]");
        if ((char)uVar3 != '\0') {
          FUN_00495030((undefined4 *)(*(int *)(param_1 + 0x214) + local_34));
        }
        local_34 = local_34 + 0xc;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = 0;
      if (*(void **)(param_1 + 0x214) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x214));
      }
      *(undefined4 *)(param_1 + 0x214) = 0;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x21c) = 0;
      SLVAR_LoadUint(&local_38);
      FUN_0051a810((void *)(param_1 + 0x210),local_38);
      local_30 = 0;
      if (local_38 != 0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
            pcVar2 = (char *)&DAT_010581d8;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar2 = pcVar2 + 4;
            }
            local_2c = local_20;
            *pcVar2 = *pcVar6;
            DAT_010581d4 = 0x34;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 6;
            pcVar2 = (char *)FUN_00ace33d(0xe52344);
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
          uVar3 = FUN_0098b490("SLSetMapBoredoms[x]");
          if ((char)uVar3 != '\0') {
            FUN_00495030((undefined4 *)(*(int *)(param_1 + 0x214) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0xc;
        } while (local_30 < local_38);
      }
    }
  }
  uVar3 = FUN_0098b490("SLGenreMapFingerPrints");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x224) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 2;
      }
      FUN_0098a3a0(&local_30);
      for (local_38 = 0;
          (*(int *)(param_1 + 0x224) != 0 &&
          (local_38 < (uint)(*(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x224) >> 2)));
          local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
          pcVar2 = (char *)&DAT_010581d8;
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar2 = pcVar2 + 4;
          }
          local_2c = local_20;
          *pcVar2 = *pcVar6;
          DAT_010581d4 = 0x35;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 7;
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
        uVar3 = FUN_0098b490("SLGenreMapFingerPrints[x]");
        if ((char)uVar3 != '\0') {
          FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x224) + local_38 * 4),4);
        }
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = 0;
      if (*(void **)(param_1 + 0x224) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x224));
      }
      *(undefined4 *)(param_1 + 0x224) = 0;
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined4 *)(param_1 + 0x22c) = 0;
      SLVAR_LoadUint(&local_38);
      FUN_004c1290((void *)(param_1 + 0x220),local_38);
      local_34 = 0;
      if (local_38 != 0) {
        do {
          if (DAT_00e67469 == '\0') {
            pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
            pcVar2 = (char *)&DAT_010581d8;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar2 = pcVar2 + 4;
            }
            local_2c = local_20;
            *pcVar2 = *pcVar6;
            DAT_010581d4 = 0x35;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 8;
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
          uVar3 = FUN_0098b490("SLGenreMapFingerPrints[x]");
          if ((char)uVar3 != '\0') {
            FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x224) + local_34 * 4),4);
          }
          local_34 = local_34 + 1;
        } while (local_34 < local_38);
      }
    }
  }
  uVar3 = FUN_0098b490("SLGenreMapBoredoms");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x234) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = (*(int *)(param_1 + 0x238) - *(int *)(param_1 + 0x234)) / 0xc;
      }
      FUN_0098a3a0(&local_30);
      local_38 = 0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0x234) != 0 &&
          (local_34 < (uint)((*(int *)(param_1 + 0x238) - *(int *)(param_1 + 0x234)) / 0xc)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
          pcVar2 = (char *)&DAT_010581d8;
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar2 = pcVar2 + 4;
          }
          local_2c = local_20;
          *pcVar2 = *pcVar6;
          DAT_010581d4 = 0x36;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 9;
          pcVar2 = (char *)FUN_00ace33d(0xe52344);
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
        uVar3 = FUN_0098b490("SLGenreMapBoredoms[x]");
        if ((char)uVar3 != '\0') {
          FUN_00495030((undefined4 *)(*(int *)(param_1 + 0x234) + local_38));
        }
        local_38 = local_38 + 0xc;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = 0;
      if (*(void **)(param_1 + 0x234) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x234));
      }
      *(undefined4 *)(param_1 + 0x234) = 0;
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      SLVAR_LoadUint(&local_38);
      uVar7 = local_38;
      fVar8 = DAT_00e4fa4c;
      pfVar4 = (float *)FUN_0043b520(&local_30,0.1);
      FUN_00495060(&stack0xffffffa8,0.0,*pfVar4,fVar8);
      FUN_0051a4c0((void *)(param_1 + 0x230),uVar7);
      local_30 = 0;
      if (local_38 != 0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
            pcVar2 = (char *)&DAT_010581d8;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar2 = pcVar2 + 4;
            }
            local_2c = local_20;
            *pcVar2 = *pcVar6;
            DAT_010581d4 = 0x36;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 10;
            pcVar2 = (char *)FUN_00ace33d(0xe52344);
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
          uVar3 = FUN_0098b490("SLGenreMapBoredoms[x]");
          if ((char)uVar3 != '\0') {
            FUN_00495030((undefined4 *)(*(int *)(param_1 + 0x234) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0xc;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\StudioPlayer.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar6;
    DAT_010581d4 = 0x37;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
    pcVar2 = (char *)FUN_00ace33d(0xe4e09c);
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
  uVar3 = FUN_0098b490("AvStarMood");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x250));
  }
  FUN_0050b950(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051b850 @ 0051b850 ////

undefined4 * __thiscall FUN_0051b850(void *this,byte param_1)

{
  FUN_0051a5e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0051b870 @ 0051b870 ////

void __thiscall FUN_0051b870(void *this,int *param_1)

{
  int iVar1;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad4c8;
  local_c = ExceptionList;
  if (param_1 != (int *)0x0) {
    for (iVar1 = *(int *)((int)this + 600); iVar1 != *(int *)((int)this + 0x25c);
        iVar1 = iVar1 + 0x18) {
      if (*(int *)(*(int *)(iVar1 + 0x14) + 0x15c) == param_1[0x57]) {
        ExceptionList = &local_c;
        (**(code **)*param_1)(1);
        ExceptionList = local_10;
        return;
      }
    }
    local_1c = param_1 + 6;
    local_18 = &local_24;
    local_10 = param_1;
    local_24 = &PTR_LAB_00d21d50;
    local_20 = *local_1c;
    ExceptionList = &local_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
    local_4 = 0;
    FUN_0051a780((void *)((int)this + 0x254),(int)&local_24);
    local_4 = 0xffffffff;
    local_24 = &PTR_LAB_00d21d50;
    if (local_1c != (int *)0x0) {
      *local_1c = local_20;
    }
    if (local_20 != 0) {
      *(int **)(local_20 + 4) = local_1c;
    }
    local_10 = (int *)0x0;
    local_20 = 0;
    local_1c = (int *)0x0;
    FUN_00956840(DAT_010507c0,param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051b980 @ 0051b980 ////

void __fastcall FUN_0051b980(void *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad538;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x164);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00958b60(pvVar1,5);
  }
  local_4 = 0xffffffff;
  FUN_0051b870(param_1,piVar2);
  puVar3 = operator_new(0x160);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00958d50(puVar3);
  }
  local_4 = 0xffffffff;
  FUN_0051b870(param_1,piVar2);
  pvVar1 = operator_new(0x160);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00958e20(pvVar1,5);
  }
  local_4 = 0xffffffff;
  FUN_0051b870(param_1,piVar2);
  pvVar1 = operator_new(0x164);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00958f40(pvVar1,4,4);
  }
  local_4 = 0xffffffff;
  FUN_0051b870(param_1,piVar2);
  pvVar1 = operator_new(0x164);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00958f40(pvVar1,8,3);
  }
  local_4 = 0xffffffff;
  FUN_0051b870(param_1,piVar2);
  pvVar1 = operator_new(0x164);
  local_4 = 5;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00958f40(pvVar1,8,2);
  }
  local_4 = 0xffffffff;
  FUN_0051b870(param_1,piVar2);
  pvVar1 = operator_new(0x164);
  local_4 = 6;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00958f40(pvVar1,4,5);
  }
  local_4 = 0xffffffff;
  FUN_0051b870(param_1,piVar2);
  pvVar1 = operator_new(0x160);
  local_4 = 7;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009589c0(pvVar1,5);
  }
  local_4 = 0xffffffff;
  FUN_0051b870(param_1,piVar2);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051bb70 @ 0051bb70 ////

void __fastcall FUN_0051bb70(int param_1)

{
  char cVar1;
  uint _Count;
  char *_Source;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *local_40;
  int local_3c;
  undefined4 local_38 [3];
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3c = param_1;
  ISerializable_WriteObjectHeader();
  if (*(undefined4 **)(param_1 + 0x204) != (undefined4 *)0x0) {
    FUN_00405fe0(*(undefined4 **)(param_1 + 0x204),*(undefined4 **)(param_1 + 0x208));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x204));
  }
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if (*(void **)(param_1 + 0x214) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x214));
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  local_40 = (int *)*DAT_0104ad78;
  iVar5 = param_1;
  if (local_40 != DAT_0104ad78) {
    do {
      piVar6 = local_40;
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _Count = local_40[4];
      _Source = (char *)local_40[3];
      if (0x13 < _Count) {
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy(local_2c,_Source,_Count);
      local_2c[_Count] = '\0';
      iVar5 = *(int *)(param_1 + 0x204);
      local_4 = 0;
      local_28 = _Count;
      if ((iVar5 == 0) ||
         ((uint)(*(int *)(param_1 + 0x20c) - iVar5 >> 5) <=
          (uint)(*(int *)(param_1 + 0x208) - iVar5 >> 5))) {
        FUN_00439fd0((void *)(param_1 + 0x200),*(int **)(param_1 + 0x208),1,&local_2c);
      }
      else {
        piVar2 = *(int **)(param_1 + 0x208);
        FUN_00439ea0(piVar2,1,&local_2c);
        *(int **)(param_1 + 0x208) = piVar2 + 8;
      }
      FUN_00494f40(local_38,piVar6 + 0xb);
      FUN_0051a860((void *)(local_3c + 0x210),local_38);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_004cc430((int *)&local_40);
      iVar5 = local_3c;
    } while (local_40 != DAT_0104ad78);
  }
  if (*(void **)(iVar5 + 0x224) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar5 + 0x224));
  }
  *(undefined4 *)(iVar5 + 0x224) = 0;
  *(undefined4 *)(iVar5 + 0x228) = 0;
  *(undefined4 *)(iVar5 + 0x22c) = 0;
  if (*(void **)(iVar5 + 0x234) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar5 + 0x234));
  }
  *(undefined4 *)(iVar5 + 0x234) = 0;
  *(undefined4 *)(iVar5 + 0x238) = 0;
  *(undefined4 *)(iVar5 + 0x23c) = 0;
  piVar6 = (int *)*DAT_00f88688;
  if (piVar6 != DAT_00f88688) {
    do {
      iVar3 = *(int *)(iVar5 + 0x224);
      local_3c = piVar6[3];
      if ((iVar3 == 0) ||
         ((uint)(*(int *)(iVar5 + 0x22c) - iVar3 >> 2) <=
          (uint)(*(int *)(iVar5 + 0x228) - iVar3 >> 2))) {
        FUN_004c0700((void *)(iVar5 + 0x220),*(undefined4 **)(iVar5 + 0x228),1,&local_3c);
      }
      else {
        piVar2 = *(int **)(iVar5 + 0x228);
        *piVar2 = local_3c;
        *(int **)(iVar5 + 0x228) = piVar2 + 1;
      }
      FUN_00494f40(local_38,piVar6 + 4);
      FUN_0051a860((void *)(iVar5 + 0x230),local_38);
      if (*(char *)((int)piVar6 + 0x1d) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x1d);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x1d);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x1d);
          piVar4 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x1d);
            piVar4 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != DAT_00f88688);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051be40 @ 0051be40 ////

undefined4 __fastcall FUN_0051be40(int param_1)

{
  uint _Count;
  char *_Source;
  void **ppvVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cad578;
  local_c = ExceptionList;
  local_3c = *(undefined4 **)(param_1 + 0x214);
  puVar4 = *(undefined4 **)(param_1 + 0x204);
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (puVar4 != *(undefined4 **)(param_1 + 0x208)) {
    do {
      ExceptionList = ppvVar1;
      local_4 = 0xffffffff;
      _Count = puVar4[1];
      _Source = (char *)*puVar4;
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      if (0x13 < _Count) {
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy(local_2c,_Source,_Count);
      local_2c[_Count] = '\0';
      local_4 = 0;
      local_28 = _Count;
      FUN_00494f40(&local_38,local_3c);
      puVar2 = (uint *)FUN_004d12e0(&DAT_0104ad74,&local_2c);
      *puVar2 = local_38;
      puVar2[1] = local_34;
      puVar2[2] = local_30;
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      puVar4 = puVar4 + 8;
      local_3c = local_3c + 3;
      ppvVar1 = ExceptionList;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x208));
  }
  local_4 = 0xffffffff;
  puVar4 = *(undefined4 **)(param_1 + 0x204);
  if (puVar4 != (undefined4 *)0x0) {
    while( true ) {
      if (puVar4 == *(undefined4 **)(param_1 + 0x208)) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x204));
      }
      if (0x14 < (uint)puVar4[2]) break;
      puVar4 = puVar4 + 8;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)*puVar4);
  }
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if (*(void **)(param_1 + 0x214) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x214));
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  piVar5 = *(int **)(param_1 + 0x224);
  puVar4 = *(undefined4 **)(param_1 + 0x234);
  if (piVar5 != *(int **)(param_1 + 0x228)) {
    do {
      local_3c = (undefined4 *)*piVar5;
      FUN_00494f40(&local_38,puVar4);
      puVar2 = FUN_0044d070(&DAT_00f88684,(uint *)&local_3c);
      *puVar2 = local_38;
      puVar2[1] = local_34;
      puVar2[2] = local_30;
      piVar5 = piVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (piVar5 != *(int **)(param_1 + 0x228));
  }
  if (*(void **)(param_1 + 0x224) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x224));
  }
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  if (*(void **)(param_1 + 0x234) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x234));
  }
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  uVar3 = FUN_0051b980((void *)(param_1 + -100));
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0051c080 @ 0051c080 ////

undefined4 * __fastcall FUN_0051c080(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0050ff90(param_1);
  *param_1 = &PTR_FUN_00d21d84;
  param_1[0x19] = &PTR_LAB_00d21d64;
  param_1[0x7f] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  puVar1 = param_1 + 0x81;
  param_1[0x83] = 0;
  *puVar1 = 0;
  param_1[0x82] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x7c] = &PTR_LAB_00d214c8;
  param_1[0x7e] = puVar1;
  *puVar1 = param_1 + 0x7d;
  param_1[0x8d] = param_1 + 0x90;
  *(undefined2 *)(param_1 + 0x90) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 10;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  local_4._0_1_ = 9;
  local_4._1_3_ = 0;
  FUN_0043b460(param_1 + 0xa9);
  param_1[0xad] = 0x3f000000;
  puVar1 = FUN_00421b80(local_2c);
  local_4._0_1_ = 10;
  FUN_0050cc70(param_1,puVar1);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  param_1[0x89] = 0;
  param_1[0x62] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  iVar2 = FUN_00990d30(8,0xc);
  param_1[0xa9] = iVar2;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0051c200 @ 0051c200 ////

undefined4 * FUN_0051c200(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad63b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2b8);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0051c080(puVar1);
  }
  local_4 = 0xffffffff;
  piVar2 = FUN_00460cc0(puVar1);
  (**(code **)(puVar1[0x73] + 4))();
  puVar1[0x78] = piVar2;
  (**(code **)puVar1[0x73])();
  iVar3 = _rand();
  puVar1[0x8c] = iVar3;
  puVar4 = FUN_00464e10(0,'\0');
  (**(code **)(puVar1[0x54] + 4))();
  puVar1[0x59] = puVar4;
  (**(code **)puVar1[0x54])();
  piVar2 = puVar1 + 0x50;
  puVar1[0x51] = &DAT_0104bcfc;
  *piVar2 = (int)DAT_0104bcfc;
  *(int **)((int)DAT_0104bcfc + 4) = piVar2;
  DAT_0104bcfc = piVar2;
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_0051c2e0 @ 0051c2e0 ////

void __fastcall FUN_0051c2e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0051c310 @ 0051c310 ////

void FUN_0051c310(void)

{
  return;
}


//// FUNCTION FUN_0051c320 @ 0051c320 ////

void FUN_0051c320(void)

{
  return;
}


//// FUNCTION FUN_0051c350 @ 0051c350 ////

undefined4 __thiscall FUN_0051c350(void *this,float param_1)

{
  if ((float)*(longlong *)this * 1.1920929e-07 < param_1) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0051c380 @ 0051c380 ////

void __fastcall FUN_0051c380(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad65b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x275);
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


//// FUNCTION FUN_0051c430 @ 0051c430 ////

void __fastcall FUN_0051c430(void *param_1)

{
  int **ppiVar1;
  int *piStack_8;
  
  piStack_8 = *(int **)((int)param_1 + 0xec);
  ppiVar1 = &piStack_8;
  (**(code **)(*piStack_8 + 0x80))();
  CBasicReview_SelectComments(param_1,(float)ppiVar1);
  return;
}


//// FUNCTION FUN_0051c450 @ 0051c450 ////

void __fastcall FUN_0051c450(int *param_1)

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
  puStack_8 = &LAB_00cad678;
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


//// FUNCTION FUN_0051c520 @ 0051c520 ////

void __fastcall FUN_0051c520(int param_1)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  undefined1 local_20 [4];
  uint uStack_1c;
  
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0xec) + 0x20))(local_20);
    FUN_004036d0((void *)(param_1 + 0xf0),(wchar_t *)*puVar1,puVar1[1]);
    if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_ESI);
    }
  }
  return;
}


//// FUNCTION FUN_0051c570 @ 0051c570 ////

undefined4 * __thiscall
FUN_0051c570(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
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
  
  puStack_8 = &LAB_00cad698;
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
      puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 0xec) + 0x20))(local_2c);
      sVar1 = FUN_00ace02d(L"<phrase key=studioname>");
      FUN_0040cae0(&local_4c,L"<phrase key=studioname>",sVar1);
      FUN_0040cae0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
      sVar1 = FUN_00ace02d(L"</phrase>");
      FUN_0040cae0(&local_4c,L"</phrase>",sVar1);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      goto LAB_0051c6d1;
    }
    sVar1 = FUN_00ace02d(L"<phrase key=moviename>");
    FUN_0040cae0(&local_4c,L"<phrase key=moviename>",sVar1);
    sVar1 = param_4[1];
    pwVar3 = (wchar_t *)*param_4;
  }
  else {
    sVar1 = FUN_00ace02d(L"<phrase key=starname>");
    FUN_0040cae0(&local_4c,L"<phrase key=starname>",sVar1);
    sVar1 = param_3[1];
    pwVar3 = (wchar_t *)*param_3;
  }
  FUN_0040cae0(&local_4c,pwVar3,sVar1);
  sVar1 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(&local_4c,L"</phrase>",sVar1);
LAB_0051c6d1:
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


//// FUNCTION FUN_0051c740 @ 0051c740 ////

void __thiscall FUN_0051c740(void *this,float param_1,int param_2,undefined4 *param_3)

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
  puStack_8 = &LAB_00cad6cb;
  local_c = ExceptionList;
  iVar4 = param_2 * 0x48;
  fVar1 = *(float *)(&DAT_0104bdd4 + iVar4);
  fVar2 = *(float *)(&DAT_0104bdd8 + iVar4);
  ExceptionList = &local_c;
  puVar3 = FUN_004312e0(local_2c,(undefined4 *)(&DAT_0104bde8 + iVar4),"_TOOLTIP");
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
            (this,param_1,*(float *)(&DAT_0104bddc + iVar4),*(float *)(&DAT_0104bde0 + iVar4),
             (int)puVar3,*(int *)(&DAT_0104bdd0 + iVar4),'\0');
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051c860 @ 0051c860 ////

undefined4 * FUN_0051c860(undefined4 *param_1,float param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad6f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_0040e0c0((int *)local_2c,(int)(&DAT_0104be08 + param_3 * 0x48),param_2);
  local_4 = 0;
  puVar2 = FUN_0047aee0(local_4c,(undefined4 *)(&DAT_0104bde8 + param_3 * 0x48),piVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_009b7190(param_1,puVar2,'\0',0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0051c910 @ 0051c910 ////

void __fastcall FUN_0051c910(void *param_1)

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
  puStack_8 = &LAB_00cad710;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x80))(local_50);
  fVar1 = *pfVar2;
  FUN_0051c860(apvStack_30,fVar1,0);
  puStack_8 = (undefined1 *)0x0;
  FUN_0051c570(param_1,local_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  FUN_0051c740(param_1,fVar1,0,local_50);
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


//// FUNCTION FUN_0051c9d0 @ 0051c9d0 ////

void __fastcall FUN_0051c9d0(void *param_1)

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
  puStack_8 = &LAB_00cad730;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)(**(code **)(*DAT_00f890c0 + 0xb8))(local_50);
  fVar1 = *pfVar2;
  FUN_0051c860(apvStack_30,fVar1,1);
  puStack_8 = (undefined1 *)0x0;
  FUN_0051c570(param_1,local_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  FUN_0051c740(param_1,fVar1,1,local_50);
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


//// FUNCTION FUN_0051ca90 @ 0051ca90 ////

void __fastcall FUN_0051ca90(void *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad750;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar2 = (float *)FUN_00452af0(DAT_00f88720,&local_50);
  fVar1 = *pfVar2;
  FUN_0051c860(local_2c,fVar1,3);
  local_4 = 0;
  FUN_0051c570(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0051c740(param_1,fVar1,3,local_4c);
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


//// FUNCTION FUN_0051cb50 @ 0051cb50 ////

void __fastcall FUN_0051cb50(void *param_1)

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
  puStack_8 = &LAB_00cad770;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar2 = (float *)FUN_00466290(&local_50);
  fVar1 = *pfVar2;
  FUN_0051c860(local_2c,fVar1,4);
  local_4 = 0;
  FUN_0051c570(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0051c740(param_1,fVar1,4,local_4c);
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


//// FUNCTION FUN_0051cc10 @ 0051cc10 ////

void __fastcall FUN_0051cc10(void *param_1)

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
  puStack_8 = &LAB_00cad790;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar2 = (float *)FUN_00466180(&local_50);
  fVar1 = *pfVar2;
  FUN_0051c860(local_2c,fVar1,5);
  local_4 = 0;
  FUN_0051c570(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0051c740(param_1,fVar1,5,local_4c);
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


//// FUNCTION FUN_0051ccd0 @ 0051ccd0 ////

void __fastcall FUN_0051ccd0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  void **ppvVar4;
  char cVar5;
  void *pvVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float fStack_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cad7b0;
  local_c = ExceptionList;
  puVar9 = DAT_0105086c;
  ppvVar4 = &local_c;
  if (DAT_0105086c == &DAT_01050878) {
    return;
  }
  do {
    ExceptionList = ppvVar4;
    piVar2 = (int *)puVar9[2];
    pvVar6 = (void *)(**(code **)(*piVar2 + 8))();
    uVar7 = FUN_00413450(pvVar6,"facility_catering",0,0x11);
    if (uVar7 == 0xffffffff) {
      pvVar6 = (void *)(**(code **)(*piVar2 + 8))();
      uVar7 = FUN_00413450(pvVar6,"facility_bar",0,0xc);
      if (uVar7 != 0xffffffff) goto LAB_0051cd3b;
    }
    else {
LAB_0051cd3b:
      cVar5 = FUN_00960f30(piVar2);
      if (cVar5 != '\0') {
        pfVar8 = (float *)FUN_00465f40(&fStack_50);
        fVar3 = *pfVar8;
        FUN_0051c860(apvStack_2c,fVar3,6);
        uStack_4 = 0;
        FUN_0051c570(param_1,apvStack_4c,apvStack_2c,(undefined4 *)0x0,(undefined4 *)0x0);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_0051c740(param_1,fVar3,6,apvStack_4c);
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        if (uStack_24 < 0xb) {
          ExceptionList = local_c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
    puVar1 = puVar9 + 1;
    puVar9 = (undefined4 *)*puVar1;
    ppvVar4 = ExceptionList;
    if ((undefined4 *)*puVar1 == &DAT_01050878) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_0051ce00 @ 0051ce00 ////

void __fastcall FUN_0051ce00(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  void *this;
  uint uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fStack_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cad7d0;
  local_c = ExceptionList;
  puVar7 = DAT_0105086c;
  ExceptionList = &local_c;
  if (DAT_0105086c != &DAT_01050878) {
    while( true ) {
      piVar2 = (int *)puVar7[2];
      this = (void *)(**(code **)(*piVar2 + 8))();
      uVar5 = FUN_00413450(this,"facility_toilet",0,0xf);
      if ((uVar5 != 0xffffffff) && (cVar4 = FUN_00960f30(piVar2), cVar4 != '\0')) break;
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
      if ((undefined4 *)*puVar1 == &DAT_01050878) {
        ExceptionList = local_c;
        return;
      }
    }
    pfVar6 = (float *)FUN_00466060(&fStack_50);
    fVar3 = *pfVar6;
    FUN_0051c860(apvStack_2c,fVar3,7);
    uStack_4 = 0;
    FUN_0051c570(param_1,apvStack_4c,apvStack_2c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_0051c740(param_1,fVar3,7,apvStack_4c);
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051cf10 @ 0051cf10 ////

void __fastcall FUN_0051cf10(void *param_1)

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
  puStack_8 = &LAB_00cad7f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)(**(code **)(*DAT_00f890c0 + 0x188))(local_50);
  fVar1 = *pfVar2;
  FUN_0051c860(apvStack_30,fVar1,8);
  puStack_8 = (undefined1 *)0x0;
  FUN_0051c570(param_1,local_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  FUN_0051c740(param_1,fVar1,8,local_50);
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


//// FUNCTION FUN_0051cfd0 @ 0051cfd0 ////

void FUN_0051cfd0(void)

{
  wchar_t *_Source;
  uint _Count;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int local_80;
  int local_7c;
  float local_78;
  undefined4 local_74;
  void *local_70;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad818;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  PlayerMovies_Begin(&local_80);
  PlayerMovies_End(&local_7c);
  if (local_80 != local_7c) {
    do {
      if (iVar3 == 0) {
LAB_0051d051:
        iVar3 = *(int *)(local_80 + 8);
      }
      else {
        local_78 = *(float *)(iVar3 + 0xc0);
        local_74 = *(undefined4 *)(*(int *)(local_80 + 8) + 0xc0);
        uVar1 = FUN_0043b680(&local_74,&local_78);
        if ((char)uVar1 != '\0') goto LAB_0051d051;
      }
      local_80 = *(int *)(local_80 + 4);
    } while (local_80 != local_7c);
    if (iVar3 != 0) {
      FUN_009b7190(local_2c,(undefined4 *)&DAT_0104c220,'\0',0);
      _Source = *(wchar_t **)(iVar3 + 0x70);
      local_4 = 0;
      local_60[0] = L'\0';
      local_68 = 0;
      _Count = *(uint *)(iVar3 + 0x74);
      local_6c = local_60;
      local_64 = 10;
      if (9 < _Count) {
        uVar2 = _Count + 0x20 >> 5;
        local_64 = uVar2 << 5;
        local_6c = _malloc(uVar2 * 0x40);
      }
      _wcsncpy(local_6c,_Source,_Count);
      local_6c[_Count] = L'\0';
      local_4._0_1_ = 1;
      local_68 = _Count;
      FUN_0051c570(local_70,local_4c,local_2c,(undefined4 *)0x0,&local_6c);
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_0051c740(local_70,*(float *)(iVar3 + 0xb8),0xf,local_4c);
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
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


//// FUNCTION FUN_0051d170 @ 0051d170 ////

void __fastcall FUN_0051d170(void *param_1)

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
  puStack_8 = &LAB_00cad840;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x90))(local_50);
  fVar1 = *pfVar2;
  FUN_0051c860(apvStack_30,fVar1,0x10);
  puStack_8 = (undefined1 *)0x0;
  FUN_0051c570(param_1,local_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  FUN_0051c740(param_1,fVar1,0x10,local_50);
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


//// FUNCTION FUN_0051d230 @ 0051d230 ////

void __fastcall FUN_0051d230(void *param_1)

{
  float fVar1;
  void **ppvVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_54;
  int local_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cad860;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  local_50 = 0;
  local_54 = 0.0;
  puVar7 = DAT_0104c4d8;
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  iVar3 = local_50;
  if (DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      cVar4 = (**(code **)(*(int *)puVar7[2] + 0x10c))();
      if (cVar4 != '\0') {
        pfVar5 = (float *)(**(code **)(*(int *)puVar7[2] + 0xb8))(&local_50);
        if (*pfVar5 < *DAT_0104be9c) {
          local_54 = *pfVar5 + local_54;
          iVar6 = iVar6 + 1;
        }
      }
      puVar7 = (undefined4 *)puVar7[1];
      ppvVar2 = ExceptionList;
      iVar3 = iVar6;
    } while (puVar7 != &DAT_0104c4e4);
  }
  local_50 = iVar3;
  ExceptionList = ppvVar2;
  if (DAT_0104bda8 <= local_50) {
    fVar1 = (float)local_50;
    FUN_009b7190(local_2c,(undefined4 *)&DAT_0104be78,'\0',0);
    uStack_4 = 0;
    FUN_0051c570(param_1,apvStack_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_0051c740(param_1,local_54 / fVar1,2,apvStack_4c);
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0051d360 @ 0051d360 ////

void __fastcall FUN_0051d360(void *param_1)

{
  int *this;
  int iVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float local_98;
  undefined2 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined2 local_84 [10];
  undefined1 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64 [20];
  undefined4 local_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad893;
  local_c = ExceptionList;
  iVar4 = *(int *)((int)param_1 + 0xec);
  iVar1 = *(int *)(iVar4 + 0x94);
  uVar6 = 0;
  if (iVar1 != iVar4 + 0xa0) {
    do {
      iVar1 = *(int *)(iVar1 + 4);
      uVar6 = uVar6 + 1;
    } while (iVar1 != iVar4 + 0xa0);
    if (1 < uVar6) {
      iVar1 = *(int *)(iVar4 + 0x94);
      piVar5 = (int *)0x0;
      local_98 = -3.4028235e+38;
      ExceptionList = &local_c;
      if (iVar1 != iVar4 + 0xa0) {
        do {
          this = *(int **)(iVar1 + 8);
          pfVar2 = (float *)FUN_00585ff0(this,&local_50);
          if (local_98 < *pfVar2) {
            piVar5 = this;
            local_98 = *pfVar2;
          }
          iVar1 = *(int *)(iVar1 + 4);
        } while (iVar1 != iVar4 + 0xa0);
        if ((piVar5 != (int *)0x0) && (*DAT_0104c0dc <= local_98)) {
          ppuVar3 = &PTR_DAT_00e52380;
          if (piVar5[0x128] != 0) {
            ppuVar3 = &PTR_DAT_00e52360;
          }
          local_70 = local_64;
          local_64[0] = 0;
          local_6c = 0;
          local_68 = 0x14;
          FUN_004015d0(&local_70,*ppuVar3,(uint)ppuVar3[1]);
          local_90 = local_84;
          local_84[0] = 0;
          local_8c = 0;
          local_88 = 10;
          local_4 = 1;
          iVar4 = FUN_009b5f90((undefined4 *)&DAT_0104c0b8,0xffffffff,&local_70);
          if (iVar4 != 0) {
            FUN_004036d0(&local_90,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
          }
          (**(code **)(*piVar5 + 0x5c))(local_2c);
          local_4._0_1_ = 2;
          FUN_0051c570(param_1,apvStack_4c,&local_90,local_2c,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_0051c740(param_1,local_98,10,apvStack_4c);
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (10 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
            _free(local_70);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051d570 @ 0051d570 ////

void __fastcall FUN_0051d570(void *param_1)

{
  int *this;
  int iVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float local_98;
  undefined2 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined2 local_84 [10];
  undefined1 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64 [20];
  undefined4 local_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad8c3;
  local_c = ExceptionList;
  iVar4 = *(int *)((int)param_1 + 0xec);
  iVar1 = *(int *)(iVar4 + 0x94);
  uVar6 = 0;
  if (iVar1 != iVar4 + 0xa0) {
    do {
      iVar1 = *(int *)(iVar1 + 4);
      uVar6 = uVar6 + 1;
    } while (iVar1 != iVar4 + 0xa0);
    if (1 < uVar6) {
      iVar1 = *(int *)(iVar4 + 0x94);
      piVar5 = (int *)0x0;
      local_98 = 3.4028235e+38;
      ExceptionList = &local_c;
      if (iVar1 != iVar4 + 0xa0) {
        do {
          this = *(int **)(iVar1 + 8);
          pfVar2 = (float *)FUN_00585ff0(this,&local_50);
          if (*pfVar2 < local_98) {
            piVar5 = this;
            local_98 = *pfVar2;
          }
          iVar1 = *(int *)(iVar1 + 4);
        } while (iVar1 != iVar4 + 0xa0);
        if ((piVar5 != (int *)0x0) && (local_98 < *DAT_0104c124 != (local_98 == *DAT_0104c124))) {
          ppuVar3 = &PTR_DAT_00e52380;
          if (piVar5[0x128] != 0) {
            ppuVar3 = &PTR_DAT_00e52360;
          }
          local_70 = local_64;
          local_64[0] = 0;
          local_6c = 0;
          local_68 = 0x14;
          FUN_004015d0(&local_70,*ppuVar3,(uint)ppuVar3[1]);
          local_90 = local_84;
          local_84[0] = 0;
          local_8c = 0;
          local_88 = 10;
          local_4 = 1;
          iVar4 = FUN_009b5f90((undefined4 *)&DAT_0104c100,0xffffffff,&local_70);
          if (iVar4 != 0) {
            FUN_004036d0(&local_90,*(wchar_t **)(iVar4 + 0x40),*(uint *)(iVar4 + 0x44));
          }
          (**(code **)(*piVar5 + 0x5c))(local_2c);
          local_4._0_1_ = 2;
          FUN_0051c570(param_1,apvStack_4c,&local_90,local_2c,(undefined4 *)0x0);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_0051c740(param_1,local_98,0xb,apvStack_4c);
          if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (10 < local_88) {
                    /* WARNING: Subroutine does not return */
            _free(local_90);
          }
          if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
            _free(local_70);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051d780 @ 0051d780 ////

void __fastcall FUN_0051d780(void *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float local_78;
  int local_74;
  int local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_005b2720();
  if (DAT_0104c18c <= uVar2) {
    local_78 = -3.4028235e+38;
    iVar3 = 0;
    PlayerMovies_Begin(&local_74);
    PlayerMovies_End(&local_70);
    if (local_74 != local_70) {
      do {
        fVar1 = *(float *)(*(int *)(local_74 + 8) + 0xb0);
        if (local_78 < fVar1) {
          iVar3 = *(int *)(local_74 + 8);
          local_78 = fVar1;
        }
        local_74 = *(int *)(local_74 + 4);
      } while (local_74 != local_70);
      if ((iVar3 != 0) && (*DAT_0104c1b4 <= local_78)) {
        FUN_009b7190(local_2c,(undefined4 *)&DAT_0104c190,'\0',0);
        local_6c = local_60;
        local_4 = 0;
        local_60[0] = 0;
        local_68 = 0;
        local_64 = 10;
        FUN_004036d0(&local_6c,*(wchar_t **)(iVar3 + 0x70),*(uint *)(iVar3 + 0x74));
        local_4._0_1_ = 1;
        FUN_0051c570(param_1,local_4c,local_2c,(undefined4 *)0x0,&local_6c);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_0051c740(param_1,local_78,0xd,local_4c);
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051d900 @ 0051d900 ////

void __fastcall FUN_0051d900(void *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float local_78;
  int local_74;
  int local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_005b2720();
  if (DAT_0104c1d4 <= uVar2) {
    local_78 = 3.4028235e+38;
    iVar3 = 0;
    PlayerMovies_Begin(&local_74);
    PlayerMovies_End(&local_70);
    if (local_74 != local_70) {
      do {
        fVar1 = *(float *)(*(int *)(local_74 + 8) + 0xb0);
        if (fVar1 < local_78) {
          iVar3 = *(int *)(local_74 + 8);
          local_78 = fVar1;
        }
        local_74 = *(int *)(local_74 + 4);
      } while (local_74 != local_70);
      if ((iVar3 != 0) && (local_78 < *DAT_0104c1fc != (local_78 == *DAT_0104c1fc))) {
        FUN_009b7190(local_2c,(undefined4 *)&DAT_0104c1d8,'\0',0);
        local_6c = local_60;
        local_4 = 0;
        local_60[0] = 0;
        local_68 = 0;
        local_64 = 10;
        FUN_004036d0(&local_6c,*(wchar_t **)(iVar3 + 0x70),*(uint *)(iVar3 + 0x74));
        local_4._0_1_ = 1;
        FUN_0051c570(param_1,local_4c,local_2c,(undefined4 *)0x0,&local_6c);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_0051c740(param_1,local_78,0xe,local_4c);
        if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051da80 @ 0051da80 ////

void __fastcall FUN_0051da80(void *param_1)

{
  longlong lVar1;
  float fVar2;
  longlong *plVar3;
  undefined1 local_54 [4];
  void *apvStack_50 [2];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cad940;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  plVar3 = (longlong *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x24))(local_54);
  lVar1 = *plVar3;
  if ((float)lVar1 * 1.1920929e-07 < 0.0) {
    fVar2 = *DAT_0104c2d4;
    FUN_009b7190(apvStack_30,(undefined4 *)&DAT_0104c2b0,'\0',0);
    puStack_8 = (undefined1 *)0x0;
    FUN_0051c570(param_1,apvStack_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    FUN_0051c740(param_1,-((float)lVar1 * 1.1920929e-07) * (-1.0 / fVar2),0x11,apvStack_50);
    if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_50[0]);
    }
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_30[0]);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0051db80 @ 0051db80 ////

void __fastcall FUN_0051db80(void *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  longlong *plVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined1 auStack_58 [4];
  undefined1 local_54 [4];
  void *apvStack_50 [2];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cad960;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  plVar5 = (longlong *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x24))(local_54);
  lVar2 = *plVar5;
  if (*DAT_0104c31c < (float)lVar2 * 1.1920929e-07) {
    puVar7 = DAT_0104bcf0;
    if (DAT_0104bcf0 != &DAT_0104bcfc) {
      do {
        piVar3 = (int *)puVar7[2];
        cVar4 = (**(code **)(*piVar3 + 0x3c))();
        if ((cVar4 != '\0') &&
           (plVar5 = (longlong *)(**(code **)(*piVar3 + 0x24))(auStack_58),
           (float)lVar2 * 1.1920929e-07 < (float)*plVar5 * 1.1920929e-07)) {
          ExceptionList = pvStack_10;
          return;
        }
        puVar1 = puVar7 + 1;
        puVar7 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104bcfc);
    }
    FUN_009b7190(apvStack_30,(undefined4 *)&DAT_0104c2f8,'\0',0);
    puStack_8 = (undefined1 *)0x0;
    FUN_0051c570(param_1,apvStack_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    pfVar6 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x90))(&stack0xffffffa4);
    FUN_0051c740(param_1,*pfVar6,0x12,apvStack_50);
    if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_50[0]);
    }
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_30[0]);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0051dcc0 @ 0051dcc0 ////

void __fastcall FUN_0051dcc0(void *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  longlong *plVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined1 auStack_58 [4];
  undefined1 local_54 [4];
  void *apvStack_50 [2];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cad980;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  plVar5 = (longlong *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x24))(local_54);
  lVar2 = *plVar5;
  if ((float)lVar2 * 1.1920929e-07 < *DAT_0104c364) {
    puVar7 = DAT_0104bcf0;
    if (DAT_0104bcf0 != &DAT_0104bcfc) {
      do {
        piVar3 = (int *)puVar7[2];
        cVar4 = (**(code **)(*piVar3 + 0x3c))();
        if ((cVar4 != '\0') &&
           (plVar5 = (longlong *)(**(code **)(*piVar3 + 0x24))(auStack_58),
           (float)*plVar5 * 1.1920929e-07 < (float)lVar2 * 1.1920929e-07)) {
          ExceptionList = pvStack_10;
          return;
        }
        puVar1 = puVar7 + 1;
        puVar7 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104bcfc);
    }
    FUN_009b7190(apvStack_30,(undefined4 *)&DAT_0104c340,'\0',0);
    puStack_8 = (undefined1 *)0x0;
    FUN_0051c570(param_1,apvStack_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    pfVar6 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x90))(&stack0xffffffa4);
    FUN_0051c740(param_1,*pfVar6,0x13,apvStack_50);
    if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_50[0]);
    }
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_30[0]);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0051de00 @ 0051de00 ////

void __fastcall FUN_0051de00(void *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  ulonglong uVar6;
  float local_b4;
  void *local_b0 [2];
  uint local_a8;
  void *local_90 [2];
  uint local_88;
  void *local_64 [2];
  uint local_5c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cad9df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar6 = FUN_0043b560();
  iVar3 = FUN_0085bb00();
  if ((iVar3 <= (int)uVar6) && ((DAT_0104a974 == 0 || (*(float *)(DAT_0104a974 + 0x78) != 2.0)))) {
    pvVar4 = FUN_00857d80(local_64);
    local_4 = 0;
    pfVar5 = FUN_00857ae0(pvVar4,*(float *)((int)param_1 + 0xec));
    FUN_00500630(local_38,pfVar5);
    local_4._0_1_ = 2;
    FUN_005005e0((int)local_64);
    pvVar4 = FUN_00857bd0(local_90);
    local_4._0_1_ = 3;
    bVar2 = FUN_00856db0(local_38,(int)pvVar4);
    local_4._0_1_ = 2;
    FUN_005005e0((int)local_90);
    if (bVar2) {
      FUN_0047aee0(local_90,(undefined4 *)&DAT_0104c388,&PTR_DAT_00e523a0);
      local_4._0_1_ = 4;
      FUN_009b7190(local_b0,local_90,'\0',0);
      local_4._0_1_ = 5;
      FUN_0051c570(param_1,local_64,local_b0,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_0051c740(param_1,0.0,0x14,local_64);
      if (10 < local_5c) {
                    /* WARNING: Subroutine does not return */
        _free(local_64[0]);
      }
      if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0[0]);
      }
      local_b0[0] = local_90[0];
      if (0x14 < local_88) {
LAB_0051e004:
                    /* WARNING: Subroutine does not return */
        _free(local_b0[0]);
      }
    }
    else {
      pfVar5 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x98))(&local_b4);
      fVar1 = *pfVar5;
      local_b4 = fVar1;
      FUN_0051c860(local_b0,fVar1,0x14);
      local_4._0_1_ = 7;
      FUN_0051c570(param_1,local_90,local_b0,(undefined4 *)0x0,(undefined4 *)0x0);
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_0051c740(param_1,fVar1,0x14,local_90);
      if (10 < local_88) {
                    /* WARNING: Subroutine does not return */
        _free(local_90[0]);
      }
      if (10 < local_a8) goto LAB_0051e004;
    }
    FUN_005005e0((int)local_38);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051e030 @ 0051e030 ////

void __fastcall FUN_0051e030(void *param_1)

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
  puStack_8 = &LAB_00cada00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x9c))(local_50);
  fVar1 = *pfVar2;
  if (*DAT_0104c3f4 < fVar1) {
    FUN_009b7190(apvStack_30,(undefined4 *)&DAT_0104c3d0,'\0',0);
    puStack_8 = (undefined1 *)0x0;
    FUN_0051c570(param_1,local_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
    FUN_0051c740(param_1,fVar1,0x15,local_50);
    if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_30[0]);
    }
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0051e100 @ 0051e100 ////

float10 FUN_0051e100(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_0043b560();
  iVar1 = (int)uVar5;
  if (iVar1 <= *DAT_0104bdc0) {
    return (float10)(float)DAT_0104bdc0[1];
  }
  if (iVar1 < *(int *)(DAT_0104bdc4 + -8)) {
    fVar4 = (float10)1.0;
    iVar2 = 0;
    iVar3 = (DAT_0104bdc4 - (int)DAT_0104bdc0 >> 3) + -1;
    if (0 < iVar3) {
      while ((iVar1 < DAT_0104bdc0[iVar2 * 2] || (DAT_0104bdc0[iVar2 * 2 + 2] < iVar1))) {
        iVar2 = iVar2 + 1;
        if (iVar3 <= iVar2) {
          return fVar4;
        }
      }
      fVar4 = ((float10)(float)DAT_0104bdc0[iVar2 * 2 + 3] -
              (float10)(float)DAT_0104bdc0[iVar2 * 2 + 1]) *
              ((float10)(iVar1 - DAT_0104bdc0[iVar2 * 2]) /
              (float10)(DAT_0104bdc0[iVar2 * 2 + 2] - DAT_0104bdc0[iVar2 * 2])) +
              (float10)(float)DAT_0104bdc0[iVar2 * 2 + 1];
    }
    return fVar4;
  }
  return (float10)*(float *)(DAT_0104bdc4 + -4);
}


//// FUNCTION FUN_0051e190 @ 0051e190 ////

void __fastcall FUN_0051e190(void *param_1)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  void *local_50 [2];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cada20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)(**(code **)(**(int **)((int)param_1 + 0xec) + 0x94))(local_50);
  fVar1 = *pfVar2;
  fVar3 = FUN_0051e100();
  FUN_0051c860(apvStack_30,(float)(fVar3 * (float10)fVar1),9);
  puStack_8 = (undefined1 *)0x0;
  FUN_0051c570(param_1,local_50,apvStack_30,(undefined4 *)0x0,(undefined4 *)0x0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  FUN_0051c740(param_1,(float)(fVar3 * (float10)fVar1),9,local_50);
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


//// FUNCTION FUN_0051e260 @ 0051e260 ////

void __fastcall FUN_0051e260(void *param_1)

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
  puStack_8 = &LAB_00cada40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_005b2720();
  if (DAT_0104c144 <= uVar2) {
    pfVar3 = (float *)FUN_0050a860(*(void **)((int)param_1 + 0xec),&local_50);
    fVar1 = *pfVar3;
    fVar4 = FUN_0051e100();
    FUN_0051c860(local_2c,(float)(fVar4 * (float10)fVar1),0xc);
    local_4 = 0;
    FUN_0051c570(param_1,local_4c,local_2c,(undefined4 *)0x0,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0051c740(param_1,(float)(fVar4 * (float10)fVar1),0xc,local_4c);
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


//// FUNCTION FUN_0051e340 @ 0051e340 ////

void __fastcall FUN_0051e340(void *param_1)

{
  if (*(int *)((int)param_1 + 0xec) != 0) {
    FUN_0051c910(param_1);
    FUN_0051c9d0(param_1);
    FUN_0051d230(param_1);
    FUN_0051ca90(param_1);
    FUN_0051cb50(param_1);
    FUN_0051cc10(param_1);
    FUN_0051ccd0(param_1);
    FUN_0051ce00(param_1);
    FUN_0051cf10(param_1);
    FUN_0051e190(param_1);
    FUN_0051d360(param_1);
    FUN_0051d570(param_1);
    FUN_0051e260(param_1);
    FUN_0051d780(param_1);
    FUN_0051d900(param_1);
    FUN_0051cfd0();
    FUN_0051d170(param_1);
    FUN_0051da80(param_1);
    FUN_0051db80(param_1);
    FUN_0051dcc0(param_1);
    FUN_0051de00(param_1);
    if ((DAT_0104a974 == 0) || (*(float *)(DAT_0104a974 + 0x80) == 0.0)) {
      FUN_0051e030(param_1);
    }
    FUN_0040d9d0((int)param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_0051e420 @ 0051e420 ////

void __fastcall FUN_0051e420(int param_1)

{
  uint uVar1;
  
  FUN_00410060(param_1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0xf0),(wchar_t *)&lpCaption_00d16918,uVar1);
  if (*(undefined4 **)(param_1 + 0x114) != (undefined4 *)0x0) {
    FUN_00481090(*(undefined4 **)(param_1 + 0x114),*(undefined4 **)(param_1 + 0x118));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x114));
  }
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}


//// FUNCTION FUN_0051e490 @ 0051e490 ////

int * __fastcall FUN_0051e490(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cada74;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00410910(param_1);
  *param_1 = (int)&PTR_FUN_00d21f6c;
  param_1[0xe] = (int)&PTR_LAB_00d21f4c;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = (int)(param_1 + 0x36);
  param_1[0x36] = (int)&PTR_FUN_00d1e55c;
  param_1[0x3b] = 0;
  param_1[0x3c] = (int)(param_1 + 0x3f);
  *(undefined2 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 10;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0051e530 @ 0051e530 ////

void __fastcall FUN_0051e530(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cadab2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d21f6c;
  param_1[0xe] = &PTR_LAB_00d21f4c;
  local_4 = 3;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_0051e420((int)param_1);
  (**(code **)(param_1[0x36] + 4))();
  param_1[0x3b] = 0;
  (**(code **)param_1[0x36])();
  if ((undefined4 *)param_1[0x45] != (undefined4 *)0x0) {
    FUN_00481090((undefined4 *)param_1[0x45],(undefined4 *)param_1[0x46]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x45]);
  }
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  if (10 < (uint)param_1[0x3e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3c]);
  }
  param_1[0x36] = &PTR_FUN_00d1e55c;
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


//// FUNCTION FUN_0051e640 @ 0051e640 ////

int * __cdecl FUN_0051e640(int param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadacb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x120);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_0051e490(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0x36] + 4))();
  piVar2[0x3b] = param_1;
  (**(code **)piVar2[0x36])();
  (**(code **)(*piVar2 + 8))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0051e6c0 @ 0051e6c0 ////

void __fastcall FUN_0051e6c0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint local_38;
  int local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadb00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StudioReview.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x24;
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
  uVar3 = FUN_0098b490("StudioName");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0xb8));
  }
  uVar3 = FUN_0098b490("CurrrentStudioStars");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 5;
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (local_38 = 0;
          (*(int *)(param_1 + 0xdc) != 0 &&
          (local_38 < (uint)(*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 5)));
          local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\StudioReview.cpp";
          pcVar2 = (char *)&DAT_010581d8;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
        uVar3 = FUN_0098b490("CurrrentStudioStars[x]");
        if ((char)uVar3 != '\0') {
          FUN_0098c580((undefined4 *)(*(int *)(param_1 + 0xdc) + local_34));
        }
        local_34 = local_34 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = 0;
      FUN_004811f0(param_1 + 0xd8);
      SLVAR_LoadUint(&local_38);
      FUN_00482430((void *)(param_1 + 0xd8),local_38);
      local_30 = 0;
      if (local_38 != 0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\StudioReview.cpp";
            pcVar2 = (char *)&DAT_010581d8;
            for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
          uVar3 = FUN_0098b490("CurrrentStudioStars[x]");
          if ((char)uVar3 != '\0') {
            FUN_0098c580((undefined4 *)(*(int *)(param_1 + 0xdc) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\StudioReview.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 3;
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
  uVar3 = FUN_0098b490("PAssociatedStudio");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xa0));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051eb90 @ 0051eb90 ////

undefined4 * __thiscall FUN_0051eb90(void *this,byte param_1)

{
  FUN_0051e530(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0051ebb0 @ 0051ebb0 ////

void __fastcall FUN_0051ebb0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00cadb18;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0xec);
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x94);
    if (iVar5 != iVar1 + 0xa0) {
      ExceptionList = &local_c;
      do {
        uStack_4 = 0xffffffff;
        puVar4 = (undefined4 *)(**(code **)(**(int **)(iVar5 + 8) + 0x5c))(local_2c);
        iVar2 = *(int *)(param_1 + 0x114);
        uStack_4 = 0;
        if ((iVar2 == 0) ||
           ((uint)(*(int *)(param_1 + 0x11c) - iVar2 >> 5) <=
            (uint)(*(int *)(param_1 + 0x118) - iVar2 >> 5))) {
          FUN_00481700((void *)(param_1 + 0x110),*(int **)(param_1 + 0x118),1,puVar4);
        }
        else {
          piVar3 = *(int **)(param_1 + 0x118);
          FUN_0047b760(piVar3,1,puVar4);
          *(int **)(param_1 + 0x118) = piVar3 + 8;
        }
        uStack_4 = 0xffffffff;
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        iVar5 = *(int *)(iVar5 + 4);
      } while (iVar5 != iVar1 + 0xa0);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0051eca0 @ 0051eca0 ////

void __cdecl FUN_0051eca0(void *param_1,undefined4 *param_2,int param_3)

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
  puStack_8 = &LAB_00cadb7f;
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
                *(undefined4 *)(&DAT_0104bdd0 + iVar3) = uVar2;
                fVar4 = FUN_00567d60(&local_6c);
                *(float *)(&DAT_0104bdd4 + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_ac);
                *(float *)(&DAT_0104bdd8 + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_cc);
                *(float *)(&DAT_0104bddc + iVar3) = (float)fVar4;
                fVar4 = FUN_00567d60(&local_8c);
                *(float *)(&DAT_0104bde0 + iVar3) = (float)fVar4;
                uVar2 = FUN_00567d80(&local_4c);
                *(undefined4 *)(&DAT_0104bde4 + iVar3) = uVar2;
                FUN_00401e30(&DAT_0104bde8 + iVar3,&local_ec);
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
                    FUN_004823e0(&DAT_0104be08 + iVar3,&fStack_130);
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


//// FUNCTION FUN_0051f0d0 @ 0051f0d0 ////

void __fastcall FUN_0051f0d0(int *param_1)

{
  int **ppiVar1;
  int *piStack_8;
  
  piStack_8 = (int *)0x51f0d8;
  (**(code **)(*param_1 + 4))();
  piStack_8 = (int *)0x51f0df;
  FUN_0051c520((int)param_1);
  piStack_8 = (int *)0x51f0e6;
  FUN_0051ebb0((int)param_1);
  piStack_8 = (int *)param_1[0x3b];
  ppiVar1 = &piStack_8;
  (**(code **)(*piStack_8 + 0x80))();
  CBasicReview_SelectComments(param_1,(float)ppiVar1);
  return;
}


//// FUNCTION FUN_0051f100 @ 0051f100 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051f100(void)

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
  uint *puVar12;
  byte *pbVar13;
  float10 fVar14;
  float local_2c4;
  undefined1 *local_2c0;
  undefined4 local_2bc;
  uint local_2b8;
  undefined1 local_2b4 [20];
  char *local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  char local_294 [20];
  undefined4 local_280;
  undefined4 local_27c;
  float local_278;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 auStack_268 [4];
  float *local_264;
  float *local_260;
  int local_25c;
  uint *local_258;
  void *local_254;
  float *local_250;
  uint local_24c [5];
  byte *local_238;
  undefined4 local_234;
  uint local_230;
  byte local_22c [20];
  char *local_218;
  undefined4 local_214;
  uint local_210;
  char local_20c [20];
  byte *local_1f8;
  undefined4 local_1f4;
  uint local_1f0;
  byte local_1ec [20];
  byte *local_1d8;
  undefined4 local_1d4;
  uint local_1d0;
  byte local_1cc [20];
  undefined1 *puStack_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined1 auStack_1ac [20];
  undefined1 *puStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  undefined1 auStack_18c [20];
  undefined1 *puStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined1 auStack_16c [20];
  undefined1 *puStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined1 auStack_14c [20];
  undefined1 *puStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined1 auStack_12c [20];
  undefined1 *puStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined1 auStack_10c [20];
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
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cadc6e;
  local_14 = ExceptionList;
  local_218 = local_20c;
  local_20c[0] = '\0';
  local_214 = 0;
  local_210 = 0x20;
  ExceptionList = &local_14;
  local_218 = _malloc(0x20);
  _strncpy(local_218,"data/reviews/studioreview.csv",0x1d);
  local_214 = 0x1d;
  local_218[0x1d] = '\0';
  local_2a0 = local_294;
  local_c = 0;
  local_294[0] = '\0';
  local_29c = 0;
  local_298 = 0x14;
  _strncpy(local_2a0,"",0);
  local_29c = 0;
  *local_2a0 = '\0';
  local_280 = 0;
  local_27c = 0;
  local_c._0_1_ = 1;
  bVar3 = FUN_00553a50(&local_2a0,&local_218);
  if (bVar3) {
    local_2c0 = local_2b4;
    local_2b4[0] = 0;
    local_2bc = 0;
    local_2b8 = 0x14;
    local_78 = local_6c;
    local_6c[0] = 0;
    local_74 = 0;
    local_70 = 0x14;
    local_c._0_1_ = 3;
    FUN_0040c920(&local_2a0,&local_2c0);
    pfVar10 = (float *)0x0;
    local_278 = 0.0;
    local_264 = (float *)0x0;
    local_260 = (float *)0x0;
    local_25c = 0;
    local_1d8 = local_1cc;
    local_1cc[0] = 0;
    local_1d4 = 0;
    local_1d0 = 0x14;
    local_c = CONCAT31(local_c._1_3_,5);
    bVar3 = FUN_00547e50(&local_2c0,0,&local_1d8);
    if (bVar3) {
      do {
        local_258 = local_24c;
        local_24c[0] = local_24c[0] & 0xffffff00;
        local_254 = (void *)0x0;
        local_250 = (float *)&DAT_00000014;
        _strncpy((char *)local_258,"",0);
        local_254 = (void *)0x0;
        *(byte *)local_258 = 0;
        pbVar11 = local_1d8;
        puVar12 = local_258;
        do {
          bVar1 = *pbVar11;
          bVar3 = bVar1 < (byte)*puVar12;
          if (bVar1 != (byte)*puVar12) {
LAB_0051f33c:
            iVar4 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
            goto LAB_0051f341;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar3 = bVar1 < *(byte *)((int)puVar12 + 1);
          if (bVar1 != *(byte *)((int)puVar12 + 1)) goto LAB_0051f33c;
          pbVar11 = pbVar11 + 2;
          puVar12 = (uint *)((int)puVar12 + 2);
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0051f341:
        if (&DAT_00000014 < local_250) {
                    /* WARNING: Subroutine does not return */
          _free(local_258);
        }
        if (iVar4 == 0) break;
        local_2c4 = (float)FUN_00567d80(&local_1d8);
        if ((local_264 == (float *)0x0) ||
           ((uint)(local_25c - (int)local_264 >> 2) <= (uint)((int)pfVar10 - (int)local_264 >> 2)))
        {
          FUN_0040ec60(auStack_268,pfVar10,1,&local_2c4);
        }
        else {
          *pfVar10 = local_2c4;
          local_260 = pfVar10 + 1;
        }
        pfVar10 = local_260;
        local_278 = (float)((int)local_278 + 1);
        bVar3 = FUN_00547e50(&local_2c0,(int)local_278,&local_1d8);
      } while (bVar3);
    }
    FUN_0040c920(&local_2a0,&local_2c0);
    pfVar10 = (float *)0x0;
    local_2c4 = 0.0;
    local_254 = (void *)0x0;
    local_250 = (float *)0x0;
    local_24c[0] = 0;
    local_1f8 = local_1ec;
    local_1ec[0] = 0;
    local_1f4 = 0;
    local_1f0 = 0x14;
    local_c._0_1_ = 7;
    bVar3 = FUN_00547e50(&local_2c0,0,&local_1f8);
    if (bVar3) {
      do {
        local_238 = local_22c;
        local_22c[0] = 0;
        local_234 = 0;
        local_230 = 0x14;
        _strncpy((char *)local_238,"",0);
        local_234 = 0;
        *local_238 = 0;
        pbVar11 = local_1f8;
        pbVar13 = local_238;
        do {
          bVar1 = *pbVar11;
          bVar3 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_0051f4d4:
            iVar4 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
            goto LAB_0051f4d9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar11[1];
          bVar3 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_0051f4d4;
          pbVar11 = pbVar11 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0051f4d9:
        if (0x14 < local_230) {
                    /* WARNING: Subroutine does not return */
          _free(local_238);
        }
        if (iVar4 == 0) break;
        fVar14 = FUN_00567d60(&local_1f8);
        local_278 = (float)fVar14;
        if ((local_254 == (void *)0x0) ||
           ((uint)((int)(local_24c[0] - (int)local_254) >> 2) <=
            (uint)((int)pfVar10 - (int)local_254 >> 2))) {
          FUN_00481520(&local_258,pfVar10,1,&local_278);
        }
        else {
          *pfVar10 = local_278;
          local_250 = pfVar10 + 1;
        }
        pfVar10 = local_250;
        local_2c4 = (float)((int)local_2c4 + 1);
        bVar3 = FUN_00547e50(&local_2c0,(int)local_2c4,&local_1f8);
      } while (bVar3);
    }
    if (local_264 == (float *)0x0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)((int)local_260 - (int)local_264 >> 2);
    }
    if (local_254 == (void *)0x0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (float)((int)pfVar10 - (int)local_254 >> 2);
    }
    if ((int)fVar9 < (int)fVar5) {
      fVar5 = fVar9;
    }
    if (0 < (int)fVar5) {
      iVar4 = (int)local_254 - (int)local_264;
      pfVar10 = local_264;
      local_2c4 = fVar5;
      do {
        puVar2 = DAT_0104bdc4;
        local_274 = *(undefined4 *)((int)pfVar10 + iVar4);
        local_278 = *pfVar10;
        if ((DAT_0104bdc0 == 0) ||
           ((uint)(DAT_0104bdc8 - DAT_0104bdc0 >> 3) <=
            (uint)((int)DAT_0104bdc4 - DAT_0104bdc0 >> 3))) {
          FUN_00481c20(&DAT_0104bdbc,DAT_0104bdc4,1,&local_278);
        }
        else {
          FUN_0047b040(DAT_0104bdc4,1,&local_278);
          DAT_0104bdc4 = puVar2 + 2;
        }
        pfVar10 = pfVar10 + 1;
        local_2c4 = (float)((int)local_2c4 + -1);
      } while (local_2c4 != 0.0);
    }
    FUN_0040c920(&local_2a0,&local_2c0);
    FUN_00547e50(&local_2c0,0,&local_78);
    fVar9 = (float)FUN_00567d80(&local_78);
    if (0 < (int)fVar9) {
      do {
        local_2c4 = fVar9;
        FUN_0040c920(&local_2a0,&local_2c0);
        puStack_d8 = auStack_cc;
        auStack_cc[0] = 0;
        uStack_d4 = 0;
        uStack_d0 = 0x14;
        puStack_1b8 = auStack_1ac;
        auStack_1ac[0] = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0x14;
        puStack_38 = auStack_2c;
        auStack_2c[0] = 0;
        uStack_34 = 0;
        uStack_30 = 0x14;
        local_238 = local_22c;
        local_22c[0] = 0;
        local_234 = 0;
        local_230 = 0x14;
        local_c = CONCAT31(local_c._1_3_,0xb);
        bVar3 = FUN_00547e50(&local_2c0,0,&puStack_d8);
        if ((((bVar3) && (bVar3 = FUN_00547e50(&local_2c0,1,&puStack_1b8), bVar3)) &&
            (bVar3 = FUN_00547e50(&local_2c0,2,&puStack_38), bVar3)) &&
           (bVar3 = FUN_00547e50(&local_2c0,3,&local_238), bVar3)) {
          uVar6 = FUN_00567d80(&local_238);
          uVar7 = FUN_00567d80(&puStack_38);
          uVar8 = FUN_00567d80(&puStack_1b8);
          fVar14 = FUN_00567d60(&puStack_d8);
          local_278 = (float)fVar14;
          local_274 = uVar8;
          uStack_270 = uVar7;
          uStack_26c = uVar6;
          FUN_004824d0(&DAT_0104bdac,&local_278);
        }
        if (0x14 < local_230) {
                    /* WARNING: Subroutine does not return */
          _free(local_238);
        }
        if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_38);
        }
        if (0x14 < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_1b8);
        }
        local_c._0_1_ = 7;
        if (0x14 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_d8);
        }
        local_2c4 = (float)((int)local_2c4 + -1);
        fVar9 = local_2c4;
      } while (local_2c4 != 0.0);
    }
    FUN_0051eca0(&local_2a0,&local_2c0,0);
    FUN_0051eca0(&local_2a0,&local_2c0,1);
    FUN_0040c920(&local_2a0,&local_2c0);
    puStack_b8 = auStack_ac;
    auStack_ac[0] = 0;
    uStack_b4 = 0;
    uStack_b0 = 0x14;
    puStack_f8 = auStack_ec;
    auStack_ec[0] = 0;
    uStack_f4 = 0;
    uStack_f0 = 0x14;
    puStack_138 = auStack_12c;
    auStack_12c[0] = 0;
    uStack_134 = 0;
    uStack_130 = 0x14;
    puStack_178 = auStack_16c;
    auStack_16c[0] = 0;
    uStack_174 = 0;
    uStack_170 = 0x14;
    puStack_198 = auStack_18c;
    auStack_18c[0] = 0;
    uStack_194 = 0;
    uStack_190 = 0x14;
    puStack_98 = auStack_8c;
    auStack_8c[0] = 0;
    uStack_94 = 0;
    uStack_90 = 0x14;
    puStack_118 = auStack_10c;
    auStack_10c[0] = 0;
    uStack_114 = 0;
    uStack_110 = 0x14;
    puStack_58 = auStack_4c;
    auStack_4c[0] = 0;
    uStack_54 = 0;
    uStack_50 = 0x14;
    puStack_158 = auStack_14c;
    auStack_14c[0] = 0;
    uStack_154 = 0;
    uStack_150 = 0x14;
    local_c = CONCAT31(local_c._1_3_,0x14);
    bVar3 = FUN_00547e50(&local_2c0,0,&puStack_b8);
    if (((((bVar3) && (bVar3 = FUN_00547e50(&local_2c0,1,&puStack_f8), bVar3)) &&
         ((bVar3 = FUN_00547e50(&local_2c0,2,&puStack_138), bVar3 &&
          ((bVar3 = FUN_00547e50(&local_2c0,3,&puStack_178), bVar3 &&
           (bVar3 = FUN_00547e50(&local_2c0,4,&puStack_198), bVar3)))))) &&
        (bVar3 = FUN_00547e50(&local_2c0,5,&puStack_98), bVar3)) &&
       (((bVar3 = FUN_00547e50(&local_2c0,6,&puStack_118), bVar3 &&
         (bVar3 = FUN_00547e50(&local_2c0,7,&puStack_58), bVar3)) &&
        (bVar3 = FUN_00547e50(&local_2c0,8,&puStack_158), bVar3)))) {
      _DAT_0104be60 = FUN_00567d80(&puStack_b8);
      fVar14 = FUN_00567d60(&puStack_f8);
      _DAT_0104be64 = (float)fVar14;
      fVar14 = FUN_00567d60(&puStack_138);
      _DAT_0104be68 = (float)fVar14;
      fVar14 = FUN_00567d60(&puStack_178);
      _DAT_0104be6c = (float)fVar14;
      fVar14 = FUN_00567d60(&puStack_198);
      _DAT_0104be70 = (float)fVar14;
      _DAT_0104be74 = FUN_00567d80(&puStack_98);
      FUN_00401e30(&DAT_0104be78,&puStack_118);
      DAT_0104bda8 = FUN_00567d80(&puStack_58);
      fVar14 = FUN_00567d60(&puStack_158);
      local_2c4 = (float)fVar14;
      FUN_004823e0(&DAT_0104be98,&local_2c4);
    }
    FUN_0051eca0(&local_2a0,&local_2c0,3);
    FUN_0051eca0(&local_2a0,&local_2c0,4);
    FUN_0051eca0(&local_2a0,&local_2c0,5);
    FUN_0051eca0(&local_2a0,&local_2c0,6);
    FUN_0051eca0(&local_2a0,&local_2c0,7);
    FUN_0051eca0(&local_2a0,&local_2c0,8);
    FUN_0051eca0(&local_2a0,&local_2c0,9);
    FUN_0051eca0(&local_2a0,&local_2c0,10);
    FUN_0051eca0(&local_2a0,&local_2c0,0xb);
    FUN_0051eca0(&local_2a0,&local_2c0,0xc);
    FUN_0051eca0(&local_2a0,&local_2c0,0xd);
    FUN_0051eca0(&local_2a0,&local_2c0,0xe);
    FUN_0051eca0(&local_2a0,&local_2c0,0xf);
    FUN_0051eca0(&local_2a0,&local_2c0,0x10);
    FUN_0051eca0(&local_2a0,&local_2c0,0x11);
    FUN_0051eca0(&local_2a0,&local_2c0,0x12);
    FUN_0051eca0(&local_2a0,&local_2c0,0x13);
    FUN_0051eca0(&local_2a0,&local_2c0,0x14);
    FUN_0051eca0(&local_2a0,&local_2c0,0x15);
    if (0x14 < uStack_150) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_158);
    }
    if (0x14 < uStack_50) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_58);
    }
    if (0x14 < uStack_110) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_118);
    }
    if (0x14 < uStack_90) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_98);
    }
    if (0x14 < uStack_190) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_198);
    }
    if (0x14 < uStack_170) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_178);
    }
    if (0x14 < uStack_130) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_138);
    }
    if (0x14 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_f8);
    }
    if (0x14 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_b8);
    }
    if (0x14 < local_1f0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1f8);
    }
    if (local_254 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_254);
    }
    if (0x14 < local_1d0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1d8);
    }
    if (local_264 != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_264);
    }
    if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
      _free(local_78);
    }
    if (0x14 < local_2b8) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c0);
    }
    local_c = local_c & 0xffffff00;
    FUN_00552ce0(&local_2a0);
  }
  else {
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00552ce0(&local_2a0);
  }
  if (0x14 < local_210) {
                    /* WARNING: Subroutine does not return */
    _free(local_218);
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_0051ff20 @ 0051ff20 ////

void __fastcall FUN_0051ff20(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)param_1);
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0051ff60 @ 0051ff60 ////

void FUN_0051ff60(void)

{
  DAT_0104c404 = 0;
  return;
}


//// FUNCTION FUN_0051ff70 @ 0051ff70 ////

undefined4 __cdecl FUN_0051ff70(int param_1)

{
  if (((param_1 < 4) && (-1 < param_1)) && ((&DAT_0104c400)[param_1] != '\0')) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0051ff90 @ 0051ff90 ////

short __cdecl FUN_0051ff90(undefined4 *param_1)

{
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = FUN_0043b710((float *)&DAT_0104c40c);
  fVar3 = (float10)0.0;
  bVar1 = fVar3 < fVar2 | (byte)((ushort)((ushort)(NAN(fVar3) || NAN(fVar2)) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar3 == fVar2) << 0xe) >> 8);
  if (fVar3 != fVar2) {
    *param_1 = DAT_0104c40c;
    return CONCAT11(bVar1,1);
  }
  return (ushort)bVar1 << 8;
}


//// FUNCTION FUN_0051ffc0 @ 0051ffc0 ////

short __cdecl FUN_0051ffc0(undefined4 *param_1)

{
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = FUN_0043b710((float *)&DAT_0104c410);
  fVar3 = (float10)0.0;
  bVar1 = fVar3 < fVar2 | (byte)((ushort)((ushort)(NAN(fVar3) || NAN(fVar2)) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar3 == fVar2) << 0xe) >> 8);
  if (fVar3 != fVar2) {
    *param_1 = DAT_0104c410;
    return CONCAT11(bVar1,1);
  }
  return (ushort)bVar1 << 8;
}


//// FUNCTION FUN_0051fff0 @ 0051fff0 ////

void __cdecl FUN_0051fff0(int param_1,undefined1 param_2)

{
  if ((param_1 < 4) && (-1 < param_1)) {
    (&DAT_0104c400)[param_1] = param_2;
  }
  return;
}


//// FUNCTION FUN_00520010 @ 00520010 ////

void FUN_00520010(void)

{
  float10 fVar1;
  
  fVar1 = FUN_0043b710((float *)&DAT_0104c40c);
  if ((float10)0.0 == fVar1) {
    DAT_0104c40c = DAT_00e4fa4c;
  }
  return;
}


//// FUNCTION FUN_00520040 @ 00520040 ////

void FUN_00520040(void)

{
  float10 fVar1;
  
  fVar1 = FUN_0043b710((float *)&DAT_0104c410);
  if ((float10)0.0 == fVar1) {
    DAT_0104c410 = DAT_00e4fa4c;
  }
  return;
}


//// FUNCTION FUN_00520070 @ 00520070 ////

void FUN_00520070(void)

{
  return;
}


//// FUNCTION FUN_005200b0 @ 005200b0 ////

void FUN_005200b0(void)

{
  FUN_0098fc90("StuntOptions",&DAT_0104c400,1,4);
  FUN_0098fd30("FirstTrainerBuilt",&DAT_0104c40c,3);
  FUN_0098fd30("FirstStuntMovieReleased",&DAT_0104c410,3);
  return;
}


//// FUNCTION FUN_00520170 @ 00520170 ////

void __fastcall FUN_00520170(int *param_1)

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
  puStack_8 = &LAB_00cadc88;
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


//// FUNCTION FUN_00520230 @ 00520230 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00520230(void)

{
  DAT_0104c404 = 1;
  _DAT_0104c400 = 0;
  FUN_0043b700(&DAT_0104c40c,0.0);
  FUN_0043b700(&DAT_0104c410,0.0);
  _DAT_0104c400 = CONCAT12(1,_DAT_0104c400);
  return;
}


//// FUNCTION FUN_005202b0 @ 005202b0 ////

undefined4 FUN_005202b0(void)

{
  return DAT_0104c414;
}


//// FUNCTION FUN_00520350 @ 00520350 ////

int __fastcall FUN_00520350(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}


//// FUNCTION FUN_00520500 @ 00520500 ////

void __cdecl FUN_00520500(int *param_1)

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


//// FUNCTION FUN_00520540 @ 00520540 ////

void __thiscall FUN_00520540(void *this,int *param_1)

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


//// FUNCTION FUN_00520680 @ 00520680 ////

void __cdecl FUN_00520680(int param_1)

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


//// FUNCTION FUN_005206b0 @ 005206b0 ////

void __fastcall FUN_005206b0(int *param_1)

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


//// FUNCTION FUN_00520740 @ 00520740 ////

void __cdecl FUN_00520740(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_005208d0 @ 005208d0 ////

void __fastcall FUN_005208d0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_005208f0 @ 005208f0 ////

void FUN_005208f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104c414;
  if (DAT_0104c414 != (undefined4 *)0x0) {
    iVar1 = DAT_0104c414[0x12];
    DAT_0104c414[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_0104c414 = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_00520a30 @ 00520a30 ////

void __fastcall FUN_00520a30(int *param_1)

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


//// FUNCTION FUN_00520b40 @ 00520b40 ////

void __thiscall FUN_00520b40(void *this,int param_1)

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


//// FUNCTION FUN_00520ba0 @ 00520ba0 ////

int * __fastcall FUN_00520ba0(int *param_1)

{
  FUN_005206b0(param_1);
  return param_1;
}


//// FUNCTION FUN_00520c40 @ 00520c40 ////

void __cdecl FUN_00520c40(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00520cc0 @ 00520cc0 ////

void * __thiscall FUN_00520cc0(void *this,byte param_1)

{
  FUN_005208d0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00520ce0 @ 00520ce0 ////

undefined4 * __thiscall
FUN_00520ce0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = (undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 4),(char *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x24) = param_3;
  return this;
}


//// FUNCTION FUN_00520d70 @ 00520d70 ////

int * __fastcall FUN_00520d70(int *param_1)

{
  FUN_00520a30(param_1);
  return param_1;
}


//// FUNCTION FUN_00520da0 @ 00520da0 ////

undefined4 * __thiscall FUN_00520da0(void *this,undefined4 *param_1)

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
LAB_00520de4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00520de9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00520de4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00520de9:
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


//// FUNCTION FUN_00520e10 @ 00520e10 ////

int * __fastcall FUN_00520e10(int *param_1)

{
  FUN_005206b0(param_1);
  return param_1;
}


//// FUNCTION FUN_00520e70 @ 00520e70 ////

void FUN_00520e70(void)

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


//// FUNCTION FUN_00520ee0 @ 00520ee0 ////

void * FUN_00520ee0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00520f40 @ 00520f40 ////

undefined4 * __cdecl FUN_00520f40(int param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar3 = param_2 + -0x28;
    puVar2 = param_3 + -10;
    *puVar2 = *(undefined4 *)(param_2 + -0x28);
    _Count = *(uint *)(param_2 + -0x20);
    _Source = *(char **)(param_2 + -0x24);
    if ((uint)param_3[-7] <= _Count) {
      if (0x14 < (uint)param_3[-7]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_3[-9]);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-7] = _Size;
      pvVar1 = _malloc(_Size);
      param_3[-9] = pvVar1;
    }
    _strncpy((char *)param_3[-9],_Source,_Count);
    param_3[-8] = _Count;
    *(undefined1 *)(_Count + param_3[-9]) = 0;
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = puVar2;
    param_2 = iVar3;
  } while (iVar3 != param_1);
  return puVar2;
}


//// FUNCTION FUN_00521030 @ 00521030 ////

uint FUN_00521030(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_20 [2];
  uint local_18;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_004015d0(param_2,"",0);
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_00413450(param_1,",",0,1);
  if (uVar1 == 0xffffffff) {
    FUN_004015d0(param_2,(char *)*param_1,param_1[1]);
    uVar3 = FUN_004015d0(param_1,"",0);
  }
  else {
    puVar2 = FUN_00430770(param_1,local_20,0,uVar1);
    FUN_004015d0(param_2,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    puVar2 = FUN_00430770(param_1,local_20,uVar1 + 1,0xffffffff);
    uVar3 = FUN_004015d0(param_1,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00521110 @ 00521110 ////

int * __fastcall FUN_00521110(int *param_1)

{
  FUN_00520a30(param_1);
  return param_1;
}


//// FUNCTION FUN_00521150 @ 00521150 ////

void __fastcall FUN_00521150(int param_1)

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


//// FUNCTION FUN_00521180 @ 00521180 ////

undefined4 * FUN_00521180(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005211b0 @ 005211b0 ////

void __fastcall FUN_005211b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00520e70();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00521210 @ 00521210 ////

void __cdecl FUN_00521210(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    param_1[9] = param_3[9];
    param_1 = param_1 + 10;
  } while( true );
}


//// FUNCTION FUN_005212e0 @ 005212e0 ////

undefined4 * __cdecl FUN_005212e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
        *(undefined1 *)(puVar2[-2] + _Count) = 0;
        puVar2[6] = param_1[9];
      }
      param_1 = param_1 + 10;
      param_3 = param_3 + 10;
      puVar2 = puVar2 + 10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_00521390 @ 00521390 ////

undefined4 * __cdecl FUN_00521390(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
        *(undefined1 *)(puVar2[-2] + _Count) = 0;
        puVar2[6] = param_1[9];
      }
      param_1 = param_1 + 10;
      param_3 = param_3 + 10;
      puVar2 = puVar2 + 10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_00521440 @ 00521440 ////

float * __thiscall FUN_00521440(void *this,float *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  int *piVar6;
  float *this_00;
  
  piVar6 = (int *)**(int **)((int)this + 0x68);
  pfVar5 = (float *)0x0;
  if (piVar6 != *(int **)((int)this + 0x68)) {
    do {
      this_00 = (float *)piVar6[0xc];
      if (this_00 != (float *)piVar6[0xd]) {
        do {
          uVar4 = FUN_0043b680(this_00,param_1);
          if (((char)uVar4 != '\0') &&
             ((pfVar5 == (float *)0x0 || (uVar4 = FUN_0043b6c0(this_00,pfVar5), (char)uVar4 != '\0')
              ))) {
            pfVar5 = this_00;
          }
          this_00 = this_00 + 10;
        } while (this_00 != (float *)piVar6[0xd]);
      }
      if (*(char *)((int)piVar6 + 0x3d) == '\0') {
        piVar2 = (int *)piVar6[2];
        if (*(char *)((int)piVar2 + 0x3d) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x3d);
          piVar6 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x3d);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x3d);
          piVar3 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x3d);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int **)((int)this + 0x68));
  }
  return pfVar5;
}


//// FUNCTION FUN_005214f0 @ 005214f0 ////

void __thiscall FUN_005214f0(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00520da0(this,param_2);
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


//// FUNCTION FUN_00521550 @ 00521550 ////

void __fastcall FUN_00521550(int param_1)

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


//// FUNCTION FUN_00521580 @ 00521580 ////

int __fastcall FUN_00521580(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00520e70();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005215b0 @ 005215b0 ////

void __cdecl FUN_005215b0(undefined4 *param_1,int param_2,undefined4 *param_3)

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
        puVar2[6] = param_3[9];
      }
      param_1 = param_1 + 10;
      puVar2 = puVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION AudienceTaste_GetGenreTrend @ 005216e0 ////

void __thiscall AudienceTaste_GetGenreTrend(void *this,float *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *this_00;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  
  FUN_005214f0((void *)((int)this + 100),(int *)&param_2,param_2);
  puVar1 = param_2;
  if ((param_2 != *(undefined4 **)((int)this + 0x68)) &&
     ((float *)param_2[0xc] != (float *)param_2[0xd])) {
    pfVar3 = (float *)param_2[0xc];
    pfVar4 = (float *)0x0;
    do {
      this_00 = pfVar3;
      uVar2 = FUN_0043b680(this_00,(float *)&DAT_00e4fa4c);
      if ((char)uVar2 != '\0') break;
      pfVar3 = this_00 + 10;
      pfVar4 = this_00;
    } while (this_00 + 10 != (float *)puVar1[0xd]);
    if (pfVar4 != (float *)0x0) {
      pfVar3 = (float *)FUN_0043b620(&DAT_00e4fa4c,(float *)&param_2,pfVar4);
      fVar5 = FUN_0043b710(pfVar3);
      fVar6 = (float10)1.4426950408889634 * -(fVar5 * (float10)*(float *)((int)this + 0x70));
      fVar5 = ROUND(fVar6);
      fVar6 = (float10)f2xm1(fVar6 - fVar5);
      fVar5 = (float10)fscale((float10)1 + fVar6,fVar5);
      fVar5 = ((float10)pfVar4[9] - (float10)0.5) * fVar5 + (float10)0.5;
      if (fVar5 < (float10)0.0) {
        *param_1 = 0.0;
        return;
      }
      if ((float10)1.0 < fVar5) {
        *param_1 = 1.0;
        return;
      }
      goto LAB_005217d1;
    }
  }
  fVar5 = (float10)0.5;
LAB_005217d1:
  *param_1 = (float)fVar5;
  return;
}


//// FUNCTION AudienceTaste_GetMostPopularGenre @ 005217e0 ////

int AudienceTaste_GetMostPopularGenre(void)

{
  void *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  float local_c;
  float local_8;
  int *local_4;
  
  local_4 = (int *)*DAT_00f88660;
  iVar3 = 0;
  local_8 = 0.0;
  if (local_4 != DAT_00f88660) {
    do {
      piVar1 = local_4;
      this = DAT_0104c414;
      puVar2 = (undefined4 *)FUN_00449b40(local_4[0xb]);
      AudienceTaste_GetGenreTrend(this,&local_c,puVar2);
      if ((iVar3 == 0) || (local_8 < local_c)) {
        iVar3 = piVar1[0xb];
        local_8 = local_c;
      }
      FUN_00449dd0((int *)&local_4);
    } while (local_4 != DAT_00f88660);
  }
  return iVar3;
}


//// FUNCTION FUN_00521900 @ 00521900 ////

void __fastcall FUN_00521900(void *param_1)

{
  uint uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  size_t sVar4;
  ulonglong uVar5;
  int local_e4;
  float local_e0;
  wchar_t *local_dc;
  uint local_d8;
  uint local_d4;
  wchar_t local_d0 [10];
  float local_bc;
  void *local_b8 [2];
  uint local_b0;
  wchar_t local_98 [66];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cadcab;
  local_14 = ExceptionList;
  local_dc = local_d0;
  local_d0[0] = L'\0';
  local_d8 = 0;
  local_d4 = 10;
  local_c = 0;
  local_e4 = **(int **)((int)param_1 + 0x68);
  ExceptionList = &local_14;
  if ((int *)local_e4 != *(int **)((int)param_1 + 0x68)) {
    do {
      puVar3 = (undefined4 *)(local_e4 + 0xc);
      uVar1 = FUN_00413450(puVar3,"set",0,3);
      if (uVar1 != 0) {
        pfVar2 = (float *)AudienceTaste_GetGenreTrend(param_1,&local_bc,puVar3);
        local_e0 = *pfVar2;
        uVar1 = FUN_00ace02d(L".......... .......... ");
        if (local_d4 <= uVar1) {
          if (10 < local_d4) {
                    /* WARNING: Subroutine does not return */
            _free(local_dc);
          }
          local_d4 = uVar1 + 0x20 & 0xffffffe0;
          local_dc = _malloc(local_d4 * 2);
        }
        _wcsncpy(local_dc,L".......... .......... ",uVar1);
        local_dc[uVar1] = L'\0';
        local_d8 = uVar1;
        puVar3 = FUN_009b5030(local_b8,puVar3);
        sVar4 = _swprintf(local_98,0xd18f84,SUB84((double)local_e0,0));
        FUN_0040cae0(&local_dc,local_98,sVar4);
        sVar4 = FUN_00ace02d((short *)&DAT_00d22070);
        FUN_0040cae0(&local_dc,L"  ",sVar4);
        FUN_0040cae0(&local_dc,(wchar_t *)*puVar3,puVar3[1]);
        if (10 < local_b0) {
                    /* WARNING: Subroutine does not return */
          _free(local_b8[0]);
        }
        uVar5 = FUN_00acd42c();
        local_dc[-(int)uVar5] = L'|';
        FUN_00544a20(DAT_0104c8f4,&local_dc);
      }
      FUN_00520a30(&local_e4);
    } while (local_e4 != *(int *)((int)param_1 + 0x68));
    if (10 < local_d4) {
                    /* WARNING: Subroutine does not return */
      _free(local_dc);
    }
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00521ae0 @ 00521ae0 ////

undefined4 * FUN_00521ae0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_005215b0(param_1,param_2,param_3);
  return param_1 + param_2 * 10;
}


//// FUNCTION FUN_00521b10 @ 00521b10 ////

void FUN_00521b10(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_005208d0(param_1);
  }
  return;
}


//// FUNCTION FUN_00521b50 @ 00521b50 ////

void __fastcall FUN_00521b50(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x28) {
    FUN_005208d0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00521ba0 @ 00521ba0 ////

void FUN_00521ba0(void)

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
  puStack_8 = &LAB_00cadcc8;
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


//// FUNCTION FUN_00521c10 @ 00521c10 ////

void FUN_00521c10(void)

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
  puStack_8 = &LAB_00cadce8;
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


//// FUNCTION FUN_00521c80 @ 00521c80 ////

void __fastcall FUN_00521c80(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x28) {
    FUN_005208d0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00521d30 @ 00521d30 ////

void __thiscall FUN_00521d30(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [20];
  undefined4 local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cadd08;
  local_10 = ExceptionList;
  local_44 = *param_3;
  local_14 = &stack0xffffffb0;
  local_40 = local_34;
  local_34[0] = 0;
  local_3c = 0;
  local_38 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_40,(char *)param_3[1],param_3[2]);
  local_20 = param_3[9];
  iVar2 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x28;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x28;
    }
    if (0x6666666U - iVar1 < param_2) {
      FUN_00521c10();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x28;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x6666666 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x28;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_00520350((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 0x28);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_00521390(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_005215b0(puVar4,param_2,&local_44);
      FUN_00521390(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 10);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x28;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_00521b10(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar5 * 10;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 10;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puVar3 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar3 - (int)param_1) / 0x28) < param_2) {
        FUN_00521390(param_1,puVar3,param_1 + param_2 * 10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00521ae0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x28,
                     &local_44);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x28;
        *(int *)((int)this + 8) = iVar2;
        FUN_00521210(param_1,(undefined4 *)(iVar2 + param_2 * -0x28),&local_44);
      }
      else {
        puVar4 = FUN_00521390(puVar3 + param_2 * -10,puVar3,puVar3);
        *(undefined4 **)((int)this + 8) = puVar4;
        FUN_00520f40((int)param_1,(int)(puVar3 + param_2 * -10),puVar3);
        FUN_00521210(param_1,param_1 + param_2 * 10,&local_44);
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


//// FUNCTION FUN_00522050 @ 00522050 ////

void __thiscall FUN_00522050(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00521ba0();
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
      _Dst = FUN_00521180((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00520ee0(param_1,iVar5,param_1 + param_2);
      FUN_00521180(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00520740(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00520ee0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00520c40(param_1,(int)pvVar3,iVar5);
    FUN_00520740(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00522240 @ 00522240 ////

void __fastcall FUN_00522240(undefined4 *param_1)

{
  FUN_00521b50((int)(param_1 + 8));
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00522270 @ 00522270 ////

void __thiscall FUN_00522270(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x28 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x28;
      goto LAB_005222b5;
    }
  }
  iVar1 = 0;
LAB_005222b5:
  FUN_00521d30(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x28;
  return;
}


//// FUNCTION FUN_00522330 @ 00522330 ////

int __thiscall FUN_00522330(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cadd20;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x6666666 < uVar1) {
      uVar1 = FUN_00521c10();
    }
    puVar2 = operator_new(uVar1 * 0x28);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1 * 10;
    local_8 = 0;
    puVar2 = FUN_005212e0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_00522400 @ 00522400 ////

undefined4 * __thiscall FUN_00522400(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadd38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_00522330((void *)((int)this + 0x20),(int)(param_1 + 8));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00522470 @ 00522470 ////

void __fastcall FUN_00522470(int param_1)

{
  FUN_00521b50(param_1 + 0x2c);
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION AudienceTaste_PushTimelineEntry @ 00522490 ////

void __thiscall AudienceTaste_PushTimelineEntry(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x28) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x28))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_005215b0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 10;
    return;
  }
  FUN_00522270(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00522570 @ 00522570 ////

undefined4 * __thiscall FUN_00522570(void *this,undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadd58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_00522330((void *)((int)this + 0x20),param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00522620 @ 00522620 ////

void * __thiscall FUN_00522620(void *this,byte param_1)

{
  FUN_00522470((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00522640 @ 00522640 ////

undefined4 *
FUN_00522640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cadd81;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x40);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_00522400(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0xf) = param_5;
    *(undefined1 *)((int)puVar1 + 0x3d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_005226f0 @ 005226f0 ////

void __thiscall
FUN_005226f0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cadd98;
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
  piVar3 = FUN_00522640(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_005227eb:
        *(undefined1 *)(*piVar4 + 0x3c) = 1;
        *(undefined1 *)(piVar5 + 0xf) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x3c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00520b40(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x3c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x3c) = 0;
        FUN_00520540(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xf] == '\0') goto LAB_005227eb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00520540(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x3c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x3c) = 0;
      FUN_00520b40(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x3c);
  } while( true );
}


//// FUNCTION FUN_005228b0 @ 005228b0 ////

void __thiscall FUN_005228b0(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00522914:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00522919;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00522914;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00522919:
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
      puVar5 = (undefined4 *)FUN_005226f0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_005206b0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_005226f0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_005229d0 @ 005229d0 ////

void __thiscall FUN_005229d0(void *this,undefined4 param_1,int *param_2)

{
  int *_Memory;
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
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
  puStack_8 = &LAB_00caddb8;
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
  FUN_00520a30((int *)&param_2);
  piVar3 = (int *)*_Memory;
  if (*(char *)((int)piVar3 + 0x3d) == '\0') {
    piVar6 = piVar3;
    if ((*(char *)(_Memory[2] + 0x3d) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar3[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar3 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar3 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x3d) == '\0') {
          piVar6[1] = (int)piVar3;
        }
        *piVar3 = (int)piVar6;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar4 = (int *)_Memory[1];
        if ((int *)*piVar4 == _Memory) {
          *piVar4 = (int)param_2;
        }
        else {
          piVar4[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar5 = param_2[0xf];
      *(char *)(param_2 + 0xf) = (char)_Memory[0xf];
      *(char *)(_Memory + 0xf) = (char)iVar5;
      goto LAB_00522b3f;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar3 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x3d) == '\0') {
    piVar6[1] = (int)piVar3;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar6;
  }
  else if ((int *)*piVar3 == _Memory) {
    *piVar3 = (int)piVar6;
  }
  else {
    piVar3[2] = (int)piVar6;
  }
  piVar4 = *(int **)((int)this + 4);
  if ((int *)*piVar4 == _Memory) {
    piVar1 = piVar3;
    if (*(char *)((int)piVar6 + 0x3d) == '\0') {
      piVar1 = (int *)FUN_00520500(piVar6);
    }
    *piVar4 = (int)piVar1;
  }
  iVar5 = *(int *)((int)this + 4);
  if (*(int **)(iVar5 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x3d) == '\0') {
      uVar2 = FUN_00520680((int)piVar6);
      *(undefined4 *)(iVar5 + 8) = uVar2;
    }
    else {
      *(int **)(iVar5 + 8) = piVar3;
    }
  }
LAB_00522b3f:
  if ((char)_Memory[0xf] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar4 = piVar3;
        if ((char)piVar6[0xf] != '\x01') break;
        piVar3 = (int *)*piVar4;
        if (piVar6 == piVar3) {
          piVar3 = (int *)piVar4[2];
          if ((char)piVar3[0xf] == '\0') {
            *(undefined1 *)(piVar3 + 0xf) = 1;
            *(undefined1 *)(piVar4 + 0xf) = 0;
            FUN_00520b40(this,(int)piVar4);
            piVar3 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar3 + 0x3d) == '\0') {
            if ((*(char *)(*piVar3 + 0x3c) != '\x01') || (*(char *)(piVar3[2] + 0x3c) != '\x01')) {
              if (*(char *)(piVar3[2] + 0x3c) == '\x01') {
                *(undefined1 *)(*piVar3 + 0x3c) = 1;
                *(undefined1 *)(piVar3 + 0xf) = 0;
                FUN_00520540(this,piVar3);
                piVar3 = (int *)piVar4[2];
              }
              *(char *)(piVar3 + 0xf) = (char)piVar4[0xf];
              *(undefined1 *)(piVar4 + 0xf) = 1;
              *(undefined1 *)(piVar3[2] + 0x3c) = 1;
              FUN_00520b40(this,(int)piVar4);
              break;
            }
LAB_00522c08:
            *(undefined1 *)(piVar3 + 0xf) = 0;
          }
        }
        else {
          if ((char)piVar3[0xf] == '\0') {
            *(undefined1 *)(piVar3 + 0xf) = 1;
            *(undefined1 *)(piVar4 + 0xf) = 0;
            FUN_00520540(this,piVar4);
            piVar3 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar3 + 0x3d) == '\0') {
            if ((*(char *)(piVar3[2] + 0x3c) == '\x01') && (*(char *)(*piVar3 + 0x3c) == '\x01'))
            goto LAB_00522c08;
            if (*(char *)(*piVar3 + 0x3c) == '\x01') {
              *(undefined1 *)(piVar3[2] + 0x3c) = 1;
              *(undefined1 *)(piVar3 + 0xf) = 0;
              FUN_00520b40(this,(int)piVar3);
              piVar3 = (int *)*piVar4;
            }
            *(char *)(piVar3 + 0xf) = (char)piVar4[0xf];
            *(undefined1 *)(piVar4 + 0xf) = 1;
            *(undefined1 *)(*piVar3 + 0x3c) = 1;
            FUN_00520540(this,piVar4);
            break;
          }
        }
        piVar3 = (int *)piVar4[1];
        piVar6 = piVar4;
      } while (piVar4 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xf) = 1;
  }
  iVar5 = _Memory[0xc];
  if (iVar5 == 0) {
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
    if (iVar5 == _Memory[0xd]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)_Memory[0xc]);
    }
    if (0x14 < *(uint *)(iVar5 + 0xc)) break;
    iVar5 = iVar5 + 0x28;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(iVar5 + 4));
}


//// FUNCTION FUN_00522ce0 @ 00522ce0 ////

void FUN_00522ce0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    FUN_00522ce0(*(void **)((int)param_1 + 8));
    FUN_00522470((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00522d20 @ 00522d20 ////

undefined4 * __thiscall FUN_00522d20(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_005226f0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_005226f0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_005226f0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_005206b0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x3d) != '\0') {
          FUN_005226f0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_005226f0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00520a30((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00522ea2;
      }
      if (*(char *)(param_2[2] + 0x3d) != '\0') {
        FUN_005226f0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_005226f0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00522ea2:
  puVar4 = (undefined4 *)FUN_005228b0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00522ed0 @ 00522ed0 ////

void __fastcall FUN_00522ed0(int param_1)

{
  FUN_00522ce0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00522f00 @ 00522f00 ////

int * __thiscall FUN_00522f00(void *this,undefined4 *param_1)

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
  void *local_3c [2];
  uint local_34;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadde0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = FUN_00520da0(this,param_1);
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
  piVar5 = FUN_00522570(local_3c,puVar2,(int)local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = FUN_00522d20(this,&param_1,piVar3,piVar5);
  iVar1 = *piVar3;
  FUN_00521b50((int)local_1c);
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c[0]);
  }
  FUN_00521b50((int)local_4c);
  ExceptionList = local_c;
  return (int *)(iVar1 + 0x2c);
}


//// FUNCTION FUN_00522fd0 @ 00522fd0 ////

void __thiscall FUN_00522fd0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00522ce0((void *)piVar6[1]);
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
    FUN_005229d0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION AudienceTaste_LoadTimelineSeeds @ 00523090 ////

void AudienceTaste_LoadTimelineSeeds(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  void *this;
  void *_Memory;
  byte *pbVar10;
  uint *puVar11;
  bool bVar12;
  float10 fVar13;
  byte **ppbVar14;
  char **ppcVar15;
  int *local_1dc;
  int local_1d8;
  int *piStack_1d4;
  undefined1 local_1d0 [4];
  void *local_1cc;
  undefined4 *local_1c8;
  int local_1c4;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  uint local_1b8;
  undefined1 local_1b4 [20];
  undefined1 *puStack_1a0;
  byte *local_19c;
  int local_198;
  uint local_194;
  byte local_190 [20];
  char *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  char local_170 [20];
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 *local_154;
  undefined4 local_150;
  uint local_14c;
  undefined1 local_148 [20];
  undefined1 *local_134;
  undefined4 local_130;
  uint local_12c;
  undefined1 local_128 [20];
  char *local_114;
  undefined4 local_110;
  uint local_10c;
  char local_108 [20];
  undefined1 *local_f4;
  int local_f0;
  uint local_ec;
  undefined1 local_e8 [20];
  undefined1 *local_d4;
  undefined4 local_d0;
  uint local_cc;
  undefined1 local_c8 [20];
  char *local_b4;
  undefined4 local_b0;
  uint local_ac;
  char local_a8 [20];
  char *local_94;
  undefined4 local_90;
  uint local_8c;
  char local_88 [20];
  uint *local_74;
  undefined1 *local_70;
  uint local_6c;
  uint local_68 [7];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cade6e;
  pvStack_c = ExceptionList;
  local_17c = local_170;
  local_170[0] = '\0';
  local_178 = 0;
  local_174 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_17c,"",0);
  local_178 = 0;
  *local_17c = '\0';
  local_15c = 0;
  local_158 = 0;
  local_4 = 0;
  puVar4 = FUN_0040d6b0(&local_154,"data/rule/",param_1);
  puVar4 = FUN_004312e0(&local_134,puVar4,".csv");
  local_4._0_1_ = 2;
  bVar2 = FUN_00553a50(&local_17c,puVar4);
  if (0x14 < local_12c) {
                    /* WARNING: Subroutine does not return */
    _free(local_134);
  }
  if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
    _free(local_154);
  }
  if (bVar2) {
    local_1c0 = local_1b4;
    local_1b4[0] = 0;
    local_1bc = 0;
    local_1b8 = 0x14;
    local_134 = local_128;
    local_128[0] = 0;
    local_130 = 0;
    local_12c = 0x14;
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    local_154 = local_148;
    local_148[0] = 0;
    local_150 = 0;
    local_14c = 0x14;
    local_19c = local_190;
    local_190[0] = 0;
    local_198 = 0;
    local_194 = 0x14;
    local_f4 = local_e8;
    local_e8[0] = 0;
    local_f0 = 0;
    local_ec = 0x14;
    local_d4 = local_c8;
    local_c8[0] = 0;
    local_d0 = 0;
    local_cc = 0x14;
    local_4._0_1_ = 9;
    uVar5 = FUN_00552520(&local_17c,&local_1c0);
    if ((char)uVar5 != '\0') {
      _Memory = (void *)0x0;
      local_1cc = (void *)0x0;
      local_1c8 = (undefined4 *)0x0;
      local_1c4 = 0;
      local_4._0_1_ = 10;
      FUN_0048ad50((int *)&local_1c0);
      bVar2 = false;
      do {
        FUN_00521030(&local_1c0,&local_19c);
        local_2c = local_20;
        local_20[0] = 0;
        local_28 = 0;
        local_24 = 0x14;
        _strncpy((char *)local_2c,"[constants]",0xb);
        local_28 = 0xb;
        local_2c[0xb] = 0;
        pbVar6 = local_19c;
        pbVar10 = local_2c;
        do {
          bVar1 = *pbVar6;
          bVar12 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_00523344:
            iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00523349;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar12 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_00523344;
          pbVar6 = pbVar6 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00523349:
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        if (iVar7 == 0) {
          bVar2 = true;
        }
        else {
          local_74 = local_68;
          local_68[0] = local_68[0] & 0xffffff00;
          local_70 = (undefined1 *)0x0;
          local_6c = 0x14;
          _strncpy((char *)local_74,"[timeline]",10);
          local_70 = &lpType_0000000a;
          *(byte *)((int)local_74 + 10) = 0;
          iVar7 = local_1d8;
          pbVar6 = local_19c;
          puVar11 = local_74;
          do {
            bVar1 = *pbVar6;
            bVar12 = bVar1 < (byte)*puVar11;
            if (bVar1 != (byte)*puVar11) {
LAB_005233f4:
              iVar8 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_005233f9;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar12 = bVar1 < *(byte *)((int)puVar11 + 1);
            if (bVar1 != *(byte *)((int)puVar11 + 1)) goto LAB_005233f4;
            pbVar6 = pbVar6 + 2;
            puVar11 = (uint *)((int)puVar11 + 2);
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_005233f9:
          if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
            _free(local_74);
          }
          if (iVar8 == 0) break;
          if ((bVar2) && (uVar9 = FUN_00521030(&local_1c0,&local_d4), (char)uVar9 != '\0')) {
            local_114 = local_108;
            local_108[0] = '\0';
            local_110 = 0;
            local_10c = 0x14;
            _strncpy(local_114,"halflife",8);
            ppcVar15 = &local_114;
            ppbVar14 = &local_19c;
            local_110 = 8;
            local_114[8] = '\0';
            uVar9 = FUN_00401ec0(ppbVar14,ppcVar15);
            if (0x14 < local_10c) {
                    /* WARNING: Subroutine does not return */
              _free(local_114);
            }
            if ((char)uVar9 == '\0') {
              local_b4 = local_a8;
              local_a8[0] = '\0';
              local_b0 = 0;
              local_ac = 0x14;
              _strncpy(local_b4,"spread",6);
              ppcVar15 = &local_b4;
              ppbVar14 = &local_19c;
              local_b0 = 6;
              local_b4[6] = '\0';
              uVar9 = FUN_00401ec0(ppbVar14,ppcVar15);
              if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
                _free(local_b4);
              }
              if ((char)uVar9 == '\0') {
                local_94 = local_88;
                local_88[0] = '\0';
                local_90 = 0;
                local_8c = 0x14;
                _strncpy(local_94,"fullspread",10);
                ppcVar15 = &local_94;
                ppbVar14 = &local_19c;
                local_90 = 10;
                local_94[10] = '\0';
                uVar9 = FUN_00401ec0(ppbVar14,ppcVar15);
                if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
                  _free(local_94);
                }
                if ((char)uVar9 == '\0') goto LAB_00523642;
                fVar13 = FUN_00567d60(&local_d4);
                this = (void *)(iVar7 + 0x78);
              }
              else {
                fVar13 = FUN_00567d60(&local_d4);
                this = (void *)(iVar7 + 0x74);
              }
              FUN_0043b700(this,(float)fVar13);
            }
            else {
              fVar13 = FUN_00567d60(&local_d4);
              puVar4 = (undefined4 *)FUN_0043b520(&puStack_1a0,(float)fVar13);
              piStack_1d4 = (int *)*puVar4;
              fVar13 = (float10)log2((float10)2.0);
              local_1dc = (int *)(float)((float10)0.6931471805599453 * fVar13);
              fVar13 = FUN_0043b710((float *)&piStack_1d4);
              *(float *)(iVar7 + 0x70) = (float)((float10)(float)local_1dc / fVar13);
            }
          }
        }
LAB_00523642:
        uVar5 = FUN_00552520(&local_17c,&local_1c0);
      } while ((char)uVar5 != '\0');
      iVar7 = local_1d8;
      FUN_00521030(&local_1c0,&local_4c);
      FUN_00521030(&local_1c0,&local_154);
      uVar9 = FUN_00521030(&local_1c0,&local_f4);
      cVar3 = (char)uVar9;
      while (cVar3 != '\0') {
        if (local_f0 == 0) {
          local_1dc = (int *)0x0;
          if ((_Memory == (void *)0x0) ||
             ((uint)(local_1c4 - (int)_Memory >> 2) <= (uint)((int)local_1c8 - (int)_Memory >> 2)))
          {
LAB_00523721:
            FUN_00522050(local_1d0,local_1c8,1,&local_1dc);
            _Memory = local_1cc;
          }
          else {
            *local_1c8 = 0;
            local_1c8 = local_1c8 + 1;
          }
        }
        else {
          local_1dc = FUN_00522f00((void *)(iVar7 + 100),&local_f4);
          if ((_Memory == (void *)0x0) ||
             ((uint)(local_1c4 - (int)_Memory >> 2) <= (uint)((int)local_1c8 - (int)_Memory >> 2)))
          goto LAB_00523721;
          *local_1c8 = local_1dc;
          local_1c8 = local_1c8 + 1;
        }
        uVar9 = FUN_00521030(&local_1c0,&local_f4);
        cVar3 = (char)uVar9;
      }
      uVar5 = FUN_00552520(&local_17c,&local_1c0);
      cVar3 = (char)uVar5;
      while (cVar3 != '\0') {
        uVar9 = FUN_00521030(&local_1c0,&local_134);
        if ((((char)uVar9 != '\0') &&
            (uVar9 = FUN_00521030(&local_1c0,&local_4c), (char)uVar9 != '\0')) &&
           (uVar9 = FUN_00521030(&local_1c0,&local_154), (char)uVar9 != '\0')) {
          FUN_0043b710((float *)(iVar7 + 0x74));
          fVar13 = FUN_00567d60(&local_4c);
          FUN_0043b520(&local_1d8,(float)fVar13);
          uVar5 = 0;
          while (((_Memory != (void *)0x0 && (uVar5 < (uint)((int)local_1c8 - (int)_Memory >> 2)))
                 && (uVar9 = FUN_00521030(&local_1c0,&local_19c), (char)uVar9 != '\0'))) {
            if ((local_198 != 0) && (*(int *)((int)_Memory + uVar5 * 4) != 0)) {
              fVar13 = FUN_00567d60(&local_19c);
              FUN_00407070(&local_1dc,(float)fVar13);
              piStack_1d4 = local_1dc;
              puStack_1a0 = &stack0xfffffe0c;
              puVar4 = FUN_00520ce0(&local_74,local_1d8,&local_134,local_1dc);
              local_4._0_1_ = 0xb;
              AudienceTaste_PushTimelineEntry(*(void **)((int)_Memory + uVar5 * 4),puVar4);
              local_4._0_1_ = 10;
              if (0x14 < local_68[0]) {
                    /* WARNING: Subroutine does not return */
                _free(local_70);
              }
            }
            uVar5 = uVar5 + 1;
          }
        }
        uVar5 = FUN_00552520(&local_17c,&local_1c0);
        cVar3 = (char)uVar5;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    if (0x14 < local_cc) {
                    /* WARNING: Subroutine does not return */
      _free(local_d4);
    }
    if (0x14 < local_ec) {
                    /* WARNING: Subroutine does not return */
      _free(local_f4);
    }
    if (0x14 < local_194) {
                    /* WARNING: Subroutine does not return */
      _free(local_19c);
    }
    if (0x14 < local_14c) {
                    /* WARNING: Subroutine does not return */
      _free(local_154);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (0x14 < local_12c) {
                    /* WARNING: Subroutine does not return */
      _free(local_134);
    }
    if (0x14 < local_1b8) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c0);
    }
  }
  local_4 = 0xffffffff;
  FUN_00552ce0(&local_17c);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00523a00 @ 00523a00 ////

void __fastcall FUN_00523a00(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00522fd0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00523a30 @ 00523a30 ////

int __fastcall FUN_00523a30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00520e70();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION AudienceTaste_Init @ 00523a60 ////

undefined4 * __fastcall AudienceTaste_Init(undefined4 *param_1)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float local_3c;
  float local_38;
  undefined4 *local_34;
  undefined1 local_30 [4];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cade9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = param_1;
  FUN_0053c420(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d22104;
  iVar1 = FUN_00520e70();
  param_1[0x1a] = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1a];
  *(undefined4 *)param_1[0x1a] = param_1[0x1a];
  *(undefined4 *)(param_1[0x1a] + 8) = param_1[0x1a];
  param_1[0x1b] = 0;
  local_4._0_1_ = 1;
  param_1[0x1c] = 0x3f316873;
  FUN_0043b520(param_1 + 0x1d,1.0);
  FUN_0043b520(param_1 + 0x1e,1910.0);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"timeline",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4._0_1_ = 2;
  AudienceTaste_LoadTimelineSeeds(&local_2c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pfVar2 = (float *)FUN_0043b520(local_30,4.0);
  local_3c = *pfVar2;
  fVar3 = (float10)log2((float10)2.0);
  local_38 = (float)((float10)0.6931471805599453 * fVar3);
  fVar3 = FUN_0043b710(&local_3c);
  param_1[0x1c] = (float)((float10)local_38 / fVar3);
  pfVar2 = (float *)FUN_0043b520(local_30,1800.0);
  pfVar2 = FUN_00521440(param_1,pfVar2);
  param_1[0x1f] = pfVar2;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00523bb0 @ 00523bb0 ////

void * __thiscall FUN_00523bb0(void *this,byte param_1)

{
  FUN_00523bd0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00523bd0 @ 00523bd0 ////

void __fastcall FUN_00523bd0(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cadeb8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00522fd0((void *)(param_1 + 100),&local_10,(int *)**(int **)(param_1 + 0x68),
               *(int **)(param_1 + 0x68));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x68));
}


//// FUNCTION AudienceTaste_Constructor @ 00523c50 ////

/* WARNING: Removing unreachable block (ram,0x00523cee) */

void AudienceTaste_Constructor(void)

{
  undefined4 *puVar1;
  char local_20 [10];
  undefined1 local_16;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadee3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x80);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_0104c414 = (undefined4 *)0x0;
  }
  else {
    DAT_0104c414 = AudienceTaste_Init(puVar1);
  }
  local_20[0] = '\0';
  _strncpy(local_20,"taste_show",10);
  local_16 = 0;
  local_4 = 1;
  FUN_005434b0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00523d10 @ 00523d10 ////

undefined1 __fastcall FUN_00523d10(int param_1)

{
  return *(undefined1 *)(param_1 + 0xa68);
}


//// FUNCTION FUN_00523d20 @ 00523d20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00523d20(void)

{
  _DAT_0104c418 = *(int *)(DAT_0104cdf4 + 0x3c) + 1;
  return;
}


//// FUNCTION FUN_00523e20 @ 00523e20 ////

int * __thiscall FUN_00523e20(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00523ea0 @ 00523ea0 ////

undefined4 FUN_00523ea0(void)

{
  return DAT_0104c434;
}


//// FUNCTION FUN_00523eb0 @ 00523eb0 ////

void FUN_00523eb0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104c434;
  if (DAT_0104c434 != (undefined4 *)0x0) {
    iVar1 = DAT_0104c434[0x12];
    DAT_0104c434[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104c420[1])();
    DAT_0104c434 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00523ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104c420)();
    return;
  }
  return;
}


//// FUNCTION FUN_00523f00 @ 00523f00 ////

void __fastcall FUN_00523f00(int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0xa68) != '\0') {
    iVar3 = 6;
    do {
      puVar1 = (ushort *)(iVar3 + -6 + *(int *)(param_1 + 100));
      uVar2 = *puVar1;
      *puVar1 = (byte)((byte)(uVar2 >> 6) ^ (byte)uVar2) & 0x3f ^ uVar2;
      puVar1 = (ushort *)(iVar3 + -4 + *(int *)(param_1 + 100));
      uVar2 = *puVar1;
      *puVar1 = (byte)((byte)(uVar2 >> 6) ^ (byte)uVar2) & 0x3f ^ uVar2;
      puVar1 = (ushort *)(iVar3 + -2 + *(int *)(param_1 + 100));
      uVar2 = *puVar1;
      *puVar1 = (byte)((byte)(uVar2 >> 6) ^ (byte)uVar2) & 0x3f ^ uVar2;
      puVar1 = (ushort *)(iVar3 + *(int *)(param_1 + 100));
      uVar2 = *puVar1;
      *puVar1 = (byte)((byte)(uVar2 >> 6) ^ (byte)uVar2) & 0x3f ^ uVar2;
      puVar1 = (ushort *)(iVar3 + 2 + *(int *)(param_1 + 100));
      uVar2 = *puVar1;
      iVar3 = iVar3 + 10;
      *puVar1 = (byte)((byte)(uVar2 >> 6) ^ (byte)uVar2) & 0x3f ^ uVar2;
    } while (iVar3 < 0xa006);
    piVar4 = (int *)(param_1 + 0x7c);
    iVar3 = 0x3e;
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        (**(code **)(*(int *)*piVar4 + 0xd8))(0,piVar4[1]);
        (**(code **)(*(int *)*piVar4 + 0xd8))(1,piVar4[2]);
        (**(code **)(*(int *)*piVar4 + 0xd8))(2,piVar4[3]);
        (**(code **)(*(int *)*piVar4 + 0xd8))(3,piVar4[4]);
      }
      piVar4 = piVar4 + 10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined1 *)(param_1 + 0xa68) = 0;
  }
  return;
}


//// FUNCTION FUN_00524020 @ 00524020 ////

int __thiscall FUN_00524020(void *this,int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  cVar2 = (**(code **)(*param_1 + 0xdc))();
  if (cVar2 == '\0') {
    return 1;
  }
  uVar5 = 0x40;
  uVar3 = 0;
  piVar4 = (int *)((int)this + 0x7c);
  do {
    if ((int *)*piVar4 == param_1) {
      return uVar3 + 2;
    }
    if ((uVar5 == 0x40) && ((int *)*piVar4 == (int *)0x0)) {
      uVar5 = uVar3;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 10;
  } while (uVar3 < 0x3e);
  if (uVar5 < 0x3e) {
    puVar1 = (undefined4 *)((int)this + uVar5 * 0x28 + 0x68);
    (**(code **)(*(int *)((int)this + uVar5 * 0x28 + 0x68) + 4))();
    puVar1[5] = param_1;
    (**(code **)*puVar1)();
    return uVar5 + 2;
  }
  return 0;
}


//// FUNCTION FUN_00524160 @ 00524160 ////

void FUN_00524160(int *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = param_2[1];
  *param_1 = (int)ROUND((*param_2 - -160.0) * 0.5);
  param_1[1] = (int)ROUND((fVar1 - -24.0) * 0.5);
  return;
}


//// FUNCTION FUN_005241c0 @ 005241c0 ////

void FUN_005241c0(float *param_1,int param_2,int param_3)

{
  *param_1 = (float)(param_2 * 2 + -0xa0) + 1.0;
  param_1[1] = (float)(param_3 * 2 + -0x18) + 1.0;
  return;
}


//// FUNCTION FUN_00524240 @ 00524240 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00524240(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
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
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (_DAT_0104c41c != 0.0) {
    local_48 = 0;
    local_44 = -0x18;
    local_40 = param_1;
    do {
      iVar3 = local_44;
      iVar5 = 0;
      local_4c = -0xa0;
      do {
        iVar2 = local_4c;
        if ((((-0xa1 < local_4c) && (local_4c < 0xa0)) && (-0x19 < iVar3)) &&
           ((iVar3 < 0xe8 &&
            (puVar1 = (ushort *)(*(int *)(local_40 + 100) + (local_48 + iVar5) * 2),
            puVar1 != (ushort *)0x0)))) {
          if (0x3f < (*puVar1 & 0xfc0)) {
            local_38 = (float)local_4c + 1.0;
            iVar9 = 1;
            uVar8 = 0x3f800000;
            local_10 = 0;
            local_3c = *(undefined4 *)(&DAT_00e523f8 + ((*puVar1 >> 6) - 1 & 7) * 4);
            puVar7 = &local_3c;
            local_34 = (float)local_44 + 1.0;
            local_18 = local_38 + 0.1;
            pfVar6 = &local_18;
            local_14 = local_34 + 0.1;
            local_30 = local_38;
            local_2c = local_34;
            pvVar4 = (void *)FUN_0054ae80();
            FUN_0054aba0(pvVar4,pfVar6,puVar7,uVar8,iVar9);
          }
          if ((*puVar1 & 0x3f) != 0) {
            iVar9 = 1;
            local_28 = (float)local_4c + 1.0;
            uVar8 = 0x3f800000;
            puVar7 = &local_4c;
            local_24 = (float)local_44 + 1.0;
            local_4 = 0;
            local_4c = CONCAT13(0x40,(int3)*(undefined4 *)(&DAT_00e523f8 + (*puVar1 - 1 & 7) * 4));
            local_c = local_28 - 0.1;
            pfVar6 = &local_c;
            local_8 = local_24 - 0.1;
            local_20 = local_28;
            local_1c = local_24;
            pvVar4 = (void *)FUN_0054ae80();
            FUN_0054aba0(pvVar4,pfVar6,puVar7,uVar8,iVar9);
          }
        }
        local_4c = iVar2 + 2;
        iVar5 = iVar5 + 1;
      } while (local_4c < 0xa0);
      local_44 = iVar3 + 2;
      local_48 = local_48 + 0xa0;
    } while (local_44 < 0xe8);
  }
  return;
}


//// FUNCTION FUN_00524430 @ 00524430 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_00524430(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iStack_18;
  int iStack_14;
  undefined1 local_c [12];
  
  if ((_DAT_0104c448 & 1) == 0) {
    _DAT_0104c448 = _DAT_0104c448 | 1;
  }
  _DAT_0104c43c = 0.0;
  _DAT_0104c438 = 0.0;
  _DAT_0104c444 = 0.0;
  _DAT_0104c440 = 0.0;
  iVar1 = FUN_00524020(this,param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x34))(local_c);
    FUN_009840b0(&stack0xffffffe0,puVar2);
    FUN_00524160(&iStack_18,(float *)&stack0xffffffe0);
    _DAT_0104c438 =
         (float)((iStack_18 - *(int *)((int)this + iVar1 * 0x28 + 0x34)) * 2 + -0xa0) + 1.0;
    _DAT_0104c43c =
         (float)((iStack_14 - *(int *)((int)this + iVar1 * 0x28 + 0x3c)) * 2 + -0x18) + 1.0;
    _DAT_0104c440 =
         (float)((*(int *)((int)this + iVar1 * 0x28 + 0x30) + iStack_18) * 2 + -0xa0) + 1.0;
    _DAT_0104c444 =
         (float)((*(int *)((int)this + iVar1 * 0x28 + 0x38) + iStack_14) * 2 + -0x18) + 1.0;
  }
  return &DAT_0104c438;
}


//// FUNCTION FUN_00524570 @ 00524570 ////

uint __thiscall FUN_00524570(void *this,int *param_1)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint3 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint unaff_EBX;
  int iVar16;
  int iVar17;
  int unaff_ESI;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined4 uStack_68;
  char cVar23;
  undefined4 uVar22;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  float fStack_28;
  float afStack_24 [2];
  float fStack_1c;
  float fStack_18;
  char cStack_10;
  undefined2 uVar24;
  
  iVar8 = (**(code **)(*param_1 + 0xd4))();
  iVar9 = (**(code **)(*param_1 + 0xd4))(1);
  iStack_2c = iVar9;
  (**(code **)(*param_1 + 0xd4))(2);
  uStack_54 = (**(code **)(*param_1 + 0xd4))(3);
  if (((((iVar8 < 1) && (iVar9 < 1)) && (iStack_40 < 1)) && ((int)uStack_54 < 1)) ||
     (uStack_30 = uStack_54, uStack_54 = FUN_00524020(this,param_1), uStack_54 < 2)) {
    return uStack_54 & 0xffffff00;
  }
  if (uStack_54 < 0x40) {
    iStack_4c = *(int *)((int)this + uStack_54 * 0x28 + 0x30);
  }
  else {
    iStack_4c = 0;
  }
  iStack_50 = 0;
  if (uStack_54 < 0x40) {
    iVar9 = *(int *)((int)this + uStack_54 * 0x28 + 0x34);
    iStack_50 = *(int *)((int)this + uStack_54 * 0x28 + 0x3c);
  }
  else {
    iVar9 = 0;
  }
  puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x34))(afStack_24);
  FUN_009840b0(&fStack_1c,puVar10);
  FUN_00524160((int *)&uStack_30,&fStack_1c);
  cStack_10 = '\x01';
  bVar3 = false;
  if (iStack_4c < iVar8) {
    iVar8 = uStack_30 + 1 + iStack_50;
    iVar18 = iStack_2c - uStack_54;
    iVar11 = iStack_2c + iStack_4c;
    if (iVar11 < iVar18) goto LAB_0052478d;
    iVar16 = iVar18 * 2 + -0x18;
    iVar19 = (iVar18 * 0xa0 + iVar8) * 2;
    do {
      if ((((-1 < iVar8) && (iVar8 < 0xa0)) &&
          ((-0x19 < iVar16 &&
           ((iVar16 < 0xe8 &&
            (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + iVar19), puVar12 != (ushort *)0x0)))))) &&
         ((uVar1 = *puVar12, (uVar1 & 0xfc0) != 0 && ((uVar1 >> 6 & 0x3f) != unaff_EBX)))) {
        bVar3 = true;
        break;
      }
      if (cStack_10 != '\0') {
        fStack_28 = (float)(iVar8 * 2 + -0xa0) + 1.0;
        afStack_24[0] = (float)iVar16 + 1.0;
        fStack_1c = fStack_28;
        fStack_18 = afStack_24[0];
        uVar20 = WorldToOccupancyGridCoord(&fStack_1c);
        uVar13 = FUN_00450840((uint)uVar20,(int)((ulonglong)uVar20 >> 0x20));
        if ((char)uVar13 == '\0') {
          cStack_10 = '\0';
        }
      }
      iVar18 = iVar18 + 1;
      iVar16 = iVar16 + 2;
      iVar19 = iVar19 + 0x140;
    } while (iVar18 <= iVar11);
    if ((cStack_10 != '\0') || (bVar7 = true, bVar3)) goto LAB_0052478d;
  }
  else {
LAB_0052478d:
    bVar7 = false;
  }
  cStack_10 = '\x01';
  bVar3 = false;
  if (unaff_ESI < iStack_38) {
    iVar18 = uStack_30 - unaff_ESI;
    iVar8 = iStack_2c + iStack_4c;
    iVar11 = iStack_2c - uStack_54;
    iVar16 = iVar18 + -1;
    if (iVar8 < iVar11) goto LAB_005248fb;
    iVar19 = iVar11 * 2 + -0x18;
    iVar17 = (iVar11 * 0xa0 + iVar16) * 2;
    do {
      if (((((-1 < iVar16) && (iVar16 < 0xa0)) && (-0x19 < iVar19)) &&
          ((iVar19 < 0xe8 &&
           (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + iVar17), puVar12 != (ushort *)0x0)))) &&
         ((uVar1 = *puVar12, (uVar1 & 0xfc0) != 0 && ((uVar1 >> 6 & 0x3f) != unaff_EBX)))) {
        bVar3 = true;
        break;
      }
      if (cStack_10 != '\0') {
        fStack_28 = (float)(iVar18 + -0xa1 + iVar16) + 1.0;
        afStack_24[0] = (float)iVar19 + 1.0;
        fStack_1c = fStack_28;
        fStack_18 = afStack_24[0];
        lVar21 = WorldToOccupancyGridCoord(&fStack_1c);
        iVar14 = (int)lVar21;
        if (((iVar14 < 0) || (0xff < iVar14)) ||
           ((lVar21 < 0 ||
            ((0xffffffffff < lVar21 ||
             (iVar14 = iVar14 * 0x100 + (int)((ulonglong)lVar21 >> 0x20),
             iVar15 = (int)(iVar14 + (iVar14 >> 0x1f & 7U)) >> 3,
             (*(byte *)(iVar15 + g_OccupancyGrid256_A) &
             (byte)(1 << ((char)iVar14 + (char)iVar15 * -8 & 0x1fU))) == 0)))))) {
          cStack_10 = '\0';
        }
      }
      iVar11 = iVar11 + 1;
      iVar19 = iVar19 + 2;
      iVar17 = iVar17 + 0x140;
    } while (iVar11 <= iVar8);
    if ((cStack_10 != '\0') || (bVar5 = true, bVar3)) goto LAB_005248fb;
  }
  else {
LAB_005248fb:
    bVar5 = false;
  }
  cStack_10 = '\x01';
  bVar3 = false;
  if (iStack_4c < iStack_44) {
    iVar8 = iStack_2c + 1 + iStack_4c;
    iVar18 = uStack_30 - unaff_ESI;
    iVar11 = uStack_30 + iStack_50;
    if (iVar11 < iVar18) goto LAB_00524a5c;
    iVar16 = iVar18 * 2 + -0xa0;
    do {
      if ((((-0xa1 < iVar16) && (iVar16 < 0xa0)) && (-1 < iVar8)) &&
         (((iVar8 < 0x80 &&
           (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + (iVar8 * 0xa0 + iVar18) * 2),
           puVar12 != (ushort *)0x0)) &&
          ((uVar1 = *puVar12, (uVar1 & 0xfc0) != 0 && ((uVar1 >> 6 & 0x3f) != unaff_EBX)))))) {
        bVar3 = true;
        break;
      }
      if (cStack_10 != '\0') {
        fStack_28 = (float)iVar16 + 1.0;
        afStack_24[0] = (float)(iVar8 * 2 + -0x18) + 1.0;
        fStack_1c = fStack_28;
        fStack_18 = afStack_24[0];
        lVar21 = WorldToOccupancyGridCoord(&fStack_1c);
        iVar19 = (int)lVar21;
        if (((iVar19 < 0) || (0xff < iVar19)) ||
           ((lVar21 < 0 ||
            ((0xffffffffff < lVar21 ||
             (iVar19 = iVar19 * 0x100 + (int)((ulonglong)lVar21 >> 0x20),
             iVar17 = (int)(iVar19 + (iVar19 >> 0x1f & 7U)) >> 3,
             (*(byte *)(iVar17 + g_OccupancyGrid256_A) &
             (byte)(1 << ((char)iVar19 + (char)iVar17 * -8 & 0x1fU))) == 0)))))) {
          cStack_10 = '\0';
        }
      }
      iVar18 = iVar18 + 1;
      iVar16 = iVar16 + 2;
    } while (iVar18 <= iVar11);
    if ((cStack_10 != '\0') || (bVar4 = true, bVar3)) goto LAB_00524a5c;
  }
  else {
LAB_00524a5c:
    bVar4 = false;
  }
  uVar6 = 0;
  cStack_10 = '\x01';
  bVar3 = false;
  if ((int)uStack_54 < iStack_34) {
    iVar11 = iStack_2c - uStack_54;
    iVar16 = uStack_30 - unaff_ESI;
    iVar8 = uStack_30 + iStack_50;
    iVar18 = iVar11 + -1;
    if (iVar8 < iVar16) goto LAB_00524bbe;
    iVar19 = iVar16 * 2 + -0xa0;
    do {
      if ((((-0xa1 < iVar19) && (iVar19 < 0xa0)) && (-1 < iVar18)) &&
         (((iVar18 < 0x80 &&
           (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + (iVar18 * 0xa0 + iVar16) * 2),
           puVar12 != (ushort *)0x0)) &&
          ((uVar1 = *puVar12, (uVar1 & 0xfc0) != 0 && ((uVar1 >> 6 & 0x3f) != unaff_EBX)))))) {
        bVar3 = true;
        break;
      }
      if (cStack_10 != '\0') {
        fStack_28 = (float)iVar19 + 1.0;
        afStack_24[0] = (float)(iVar11 + -0x19 + iVar18) + 1.0;
        fStack_1c = fStack_28;
        fStack_18 = afStack_24[0];
        lVar21 = WorldToOccupancyGridCoord(&fStack_1c);
        iVar17 = (int)lVar21;
        if (((iVar17 < 0) || (0xff < iVar17)) ||
           ((lVar21 < 0 ||
            ((0xffffffffff < lVar21 ||
             (iVar17 = iVar17 * 0x100 + (int)((ulonglong)lVar21 >> 0x20),
             iVar14 = (int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3,
             (*(byte *)(iVar14 + g_OccupancyGrid256_A) &
             (byte)(1 << ((char)iVar17 + (char)iVar14 * -8 & 0x1fU))) == 0)))))) {
          cStack_10 = '\0';
        }
      }
      iVar16 = iVar16 + 1;
      iVar19 = iVar19 + 2;
    } while (iVar16 <= iVar8);
    if ((cStack_10 != '\0') || (bVar2 = true, bVar3)) goto LAB_00524bbe;
  }
  else {
LAB_00524bbe:
    bVar2 = false;
  }
  uStack_68 = 0;
  if (bVar7) {
    if (bVar4) {
      iVar8 = uStack_30 + 1 + iStack_50;
      iVar11 = iStack_2c + 1 + iStack_4c;
      if (((((-1 < iVar8) && (iVar8 < 0xa0)) && (-1 < iVar11)) &&
          ((iVar11 < 0x80 &&
           (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + (iVar11 * 0xa0 + iVar8) * 2),
           puVar12 != (ushort *)0x0)))) &&
         ((uVar1 = *puVar12, (uVar1 & 0xfc0) == 0 || ((uVar1 >> 6 & 0x3f) == unaff_EBX)))) {
        iStack_50 = iStack_50 + 1;
        uStack_68 = 0x10000;
      }
    }
    else {
      iStack_50 = iStack_50 + 1;
      uStack_68 = 0x10000;
    }
  }
  if (bVar4) {
    if (bVar5) {
      iVar11 = (uStack_30 - unaff_ESI) + -1;
      iVar8 = iStack_2c + 1 + iStack_4c;
      if ((((iVar11 < 0) || (0x9f < iVar11)) ||
          ((iVar8 < 0 ||
           ((0x7f < iVar8 ||
            (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + (iVar8 * 0xa0 + iVar11) * 2),
            puVar12 == (ushort *)0x0)))))) ||
         ((uVar1 = *puVar12, (uVar1 & 0xfc0) != 0 && ((uVar1 >> 6 & 0x3f) != unaff_EBX))))
      goto LAB_00524cc2;
    }
    iStack_4c = iStack_4c + 1;
    uVar6 = 0x10000;
  }
LAB_00524cc2:
  iVar8 = (uint)uVar6 << 8;
  if (bVar5) {
    if (bVar2) {
      iVar11 = (iStack_2c - uStack_54) + -1;
      iVar18 = (uStack_30 - unaff_ESI) + -1;
      if (((((iVar18 < 0) || (0x9f < iVar18)) || (iVar11 < 0)) ||
          ((0x7f < iVar11 ||
           (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + (iVar11 * 0xa0 + iVar18) * 2),
           puVar12 == (ushort *)0x0)))) ||
         ((uVar1 = *puVar12, (uVar1 & 0xfc0) != 0 && ((uVar1 >> 6 & 0x3f) != unaff_EBX))))
      goto LAB_00524d38;
    }
    unaff_ESI = unaff_ESI + 1;
    iVar8 = CONCAT31(uVar6,1);
  }
LAB_00524d38:
  uVar24 = (undefined2)((uint)iVar8 >> 0x10);
  uVar22 = CONCAT22(uVar24,(ushort)(byte)iVar8);
  if (bVar2) {
    if (bVar7) {
      iVar11 = uStack_30 + 1 + iStack_50;
      iVar18 = (iStack_2c - uStack_54) + -1;
      if ((((iVar11 < 0) || (0x9f < iVar11)) ||
          ((iVar18 < 0 ||
           ((0x7f < iVar18 ||
            (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + (iVar18 * 0xa0 + iVar11) * 2),
            puVar12 == (ushort *)0x0)))))) ||
         ((uVar1 = *puVar12, (uVar1 & 0xfc0) != 0 && ((uVar1 >> 6 & 0x3f) != unaff_EBX))))
      goto LAB_00524da5;
    }
    uStack_54 = uStack_54 + 1;
    uVar22 = CONCAT22(uVar24,CONCAT11(1,(byte)iVar8));
  }
LAB_00524da5:
  uVar13 = unaff_EBX;
  if (unaff_EBX < 0x40) {
    uVar13 = iVar9 + unaff_EBX * 0x28;
    *(int *)(uVar13 + 0x30) = iStack_50;
    *(int *)(uVar13 + 0x34) = unaff_ESI;
    *(int *)(uVar13 + 0x38) = iStack_4c;
    *(uint *)(uVar13 + 0x3c) = uStack_54;
  }
  iVar8 = CONCAT31((int3)(uVar13 >> 8),uStack_68._2_1_);
  if (uStack_68._2_1_ != '\0') {
    iVar8 = iStack_2c - uStack_54;
    iVar11 = iStack_50 + uStack_30;
    uStack_68 = 0x1000000;
    if (iVar8 <= iStack_4c + iStack_2c) {
      iVar18 = (iVar8 * 0xa0 + iVar11) * 2;
      do {
        if ((((-1 < iVar11) && (iVar11 < 0xa0)) && (-1 < iVar8)) &&
           (((iVar8 < 0x80 &&
             (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + iVar18), puVar12 != (ushort *)0x0)) &&
            (uVar1 = *puVar12, (uVar1 & 0xfc0) == 0)))) {
          *puVar12 = ((ushort)(unaff_EBX << 6) ^ uVar1) & 0xfc0 ^ uVar1;
        }
        iVar8 = iVar8 + 1;
        iVar18 = iVar18 + 0x140;
      } while (iVar8 <= iStack_4c + iStack_2c);
    }
  }
  iVar8 = CONCAT31((int3)((uint)iVar8 >> 8),(char)uVar22);
  if ((char)uVar22 != '\0') {
    iVar11 = uStack_30 - unaff_ESI;
    iVar8 = iStack_2c - uStack_54;
    uStack_68._3_1_ = 1;
    if (iVar8 <= iStack_2c + iStack_4c) {
      iVar18 = (iVar8 * 0xa0 + iVar11) * 2;
      do {
        if (((-1 < iVar11) && (iVar11 < 0xa0)) &&
           ((-1 < iVar8 &&
            (((iVar8 < 0x80 &&
              (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + iVar18), puVar12 != (ushort *)0x0)) &&
             (uVar1 = *puVar12, (uVar1 & 0xfc0) == 0)))))) {
          *puVar12 = ((ushort)(unaff_EBX << 6) ^ uVar1) & 0xfc0 ^ uVar1;
        }
        iVar8 = iVar8 + 1;
        iVar18 = iVar18 + 0x140;
      } while (iVar8 <= iStack_2c + iStack_4c);
    }
  }
  cVar23 = (char)((uint)uVar22 >> 0x18);
  iVar8 = CONCAT31((int3)((uint)iVar8 >> 8),cVar23);
  if (cVar23 != '\0') {
    iStack_4c = iStack_2c + iStack_4c;
    uStack_68._3_1_ = 1;
    for (iVar8 = uStack_30 - unaff_ESI; iVar8 <= (int)(uStack_30 + iStack_50); iVar8 = iVar8 + 1) {
      if (((-1 < iVar8) && (iVar8 < 0xa0)) &&
         (((-1 < iStack_4c &&
           ((iStack_4c < 0x80 &&
            (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + (iStack_4c * 0xa0 + iVar8) * 2),
            puVar12 != (ushort *)0x0)))) && (uVar1 = *puVar12, (uVar1 & 0xfc0) == 0)))) {
        *puVar12 = ((ushort)(unaff_EBX << 6) ^ uVar1) & 0xfc0 ^ uVar1;
      }
    }
  }
  cVar23 = (char)((uint)uVar22 >> 8);
  iVar8 = CONCAT31((int3)((uint)iVar8 >> 8),cVar23);
  if (cVar23 != '\0') {
    iStack_2c = iStack_2c - uStack_54;
    uStack_68._3_1_ = 1;
    for (iVar8 = uStack_30 - unaff_ESI; iVar8 <= (int)(uStack_30 + iStack_50); iVar8 = iVar8 + 1) {
      if (((((-1 < iVar8) && (iVar8 < 0xa0)) && (-1 < iStack_2c)) &&
          ((iStack_2c < 0x80 &&
           (puVar12 = (ushort *)(*(int *)(iVar9 + 100) + (iStack_2c * 0xa0 + iVar8) * 2),
           puVar12 != (ushort *)0x0)))) && (uVar1 = *puVar12, (uVar1 & 0xfc0) == 0)) {
        *puVar12 = ((ushort)(unaff_EBX << 6) ^ uVar1) & 0xfc0 ^ uVar1;
      }
    }
  }
  return CONCAT31((int3)((uint)iVar8 >> 8),uStack_68._3_1_);
}


//// FUNCTION FUN_00524ff0 @ 00524ff0 ////

int __thiscall FUN_00524ff0(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)ROUND((*param_1 - -160.0) * 0.5);
  iVar2 = (int)ROUND((param_1[1] - -24.0) * 0.5);
  if ((((-1 < iVar1) && (iVar1 < 0xa0)) && (-1 < iVar2)) && (iVar2 < 0x80)) {
    return *(int *)((int)this + 100) + (iVar2 * 0xa0 + iVar1) * 2;
  }
  return 0;
}


//// FUNCTION FUN_00525070 @ 00525070 ////

int __thiscall FUN_00525070(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)ROUND((*param_1 - -160.0) * 0.5);
  iVar2 = (int)ROUND((param_1[1] - -24.0) * 0.5);
  if ((((-1 < iVar1) && (iVar1 < 0xa0)) && (-1 < iVar2)) && (iVar2 < 0x80)) {
    return *(int *)((int)this + 100) + (iVar2 * 0xa0 + iVar1) * 2;
  }
  return 0;
}


//// FUNCTION FUN_005250f0 @ 005250f0 ////

void FUN_005250f0(float *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *param_1 = (float)(*param_2 * 2 + -0xa0) + 1.0;
  param_1[1] = (float)(iVar1 * 2 + -0x18) + 1.0;
  return;
}


//// FUNCTION FUN_00525140 @ 00525140 ////

void __fastcall FUN_00525140(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d22130;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00525190 @ 00525190 ////

void __fastcall FUN_00525190(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d22130;
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


//// FUNCTION FUN_005251e0 @ 005251e0 ////

void __fastcall FUN_005251e0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d16bec;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00525200 @ 00525200 ////

void __fastcall FUN_00525200(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16bec;
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


//// FUNCTION FUN_00525250 @ 00525250 ////

void __fastcall FUN_00525250(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cadf0e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d22140;
  local_4 = 1;
  FUN_0078ba40();
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x19]);
}


//// FUNCTION FUN_00525310 @ 00525310 ////

undefined4 __thiscall FUN_00525310(void *this,int *param_1)

{
  float *pfVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
  pbVar2 = (byte *)FUN_00525070(this,pfVar1);
  if (pbVar2 == (byte *)0x0) {
    return 0;
  }
  uVar3 = *pbVar2 & 0x3f;
  if ((1 < uVar3) && (uVar3 < 0x40)) {
    return *(undefined4 *)((int)this + uVar3 * 0x28 + 0x2c);
  }
  return 0;
}


//// FUNCTION FUN_00525370 @ 00525370 ////

undefined4 __thiscall FUN_00525370(void *this,int *param_1)

{
  float *pfVar1;
  ushort *puVar2;
  uint uVar3;
  undefined1 local_c [12];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x34))(local_c);
  puVar2 = (ushort *)FUN_00525070(this,pfVar1);
  if (puVar2 == (ushort *)0x0) {
    return 0;
  }
  uVar3 = *puVar2 >> 6 & 0x3f;
  if ((1 < uVar3) && (uVar3 < 0x40)) {
    return *(undefined4 *)((int)this + uVar3 * 0x28 + 0x2c);
  }
  return 0;
}


//// FUNCTION FUN_005253d0 @ 005253d0 ////

void __thiscall FUN_005253d0(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  void *pvStack_40;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float fStack_10;
  float afStack_c [3];
  
  cVar2 = (**(code **)(*param_1 + 0xe0))();
  if ((cVar2 != '\0') && (uVar3 = FUN_00524020(this,param_1), uVar3 != 0)) {
    if ((1 < uVar3) && (uVar3 < 0x40)) {
      *(undefined4 *)((int)this + uVar3 * 0x28 + 0x30) = 0;
      *(undefined4 *)((int)this + uVar3 * 0x28 + 0x34) = 0;
      *(undefined4 *)((int)this + uVar3 * 0x28 + 0x38) = 0;
      *(undefined4 *)((int)this + uVar3 * 0x28 + 0x3c) = 0;
    }
    piVar4 = (int *)FUN_00527fc0((int)param_1);
    if (piVar4 != (int *)0x0) {
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x34))(afStack_c);
      FUN_009840b0(&fStack_2c,puVar5);
      FUN_00524160(&iStack_24,&fStack_2c);
      iVar8 = 0;
      iStack_4c = 0;
      iStack_44 = 0;
      iStack_48 = 0;
      iVar9 = 0;
      if (0 < piVar4[1]) {
        do {
          iVar6 = piVar4[2];
          iVar10 = 0;
          if (0 < iVar6) {
            do {
              if ((*(byte *)(iVar6 * iVar9 + *piVar4 + iVar10) & 3) != 0) {
                afStack_c[1] = 0.0;
                uStack_14 = 0;
                fStack_1c = ((float)iVar9 * 0.5 + (float)piVar4[3]) - 256.0;
                fStack_18 = ((float)iVar10 * 0.5 + (float)piVar4[4]) - 256.0;
                fStack_10 = fStack_1c;
                afStack_c[0] = fStack_18;
                puVar7 = (ushort *)FUN_00525070(pvStack_40,&fStack_1c);
                if (puVar7 != (ushort *)0x0) {
                  *puVar7 = *puVar7 ^ ((ushort)(uVar3 << 6) ^ *puVar7) & 0xfc0;
                  FUN_009840b0(&fStack_2c,&fStack_1c);
                  iVar6 = (int)ROUND((fStack_2c - -160.0) * 0.5);
                  iVar1 = (int)ROUND((fStack_28 - -24.0) * 0.5);
                  if (iVar6 < iStack_24 - iVar8) {
                    iVar8 = iStack_24 - iVar6;
                  }
                  if (iStack_4c + iStack_24 < iVar6) {
                    iStack_4c = iVar6 - iStack_24;
                  }
                  if (iVar1 < iStack_20 - iStack_44) {
                    iStack_44 = iStack_20 - iVar1;
                  }
                  if (iStack_48 + iStack_20 < iVar1) {
                    iStack_48 = iVar1 - iStack_20;
                  }
                }
              }
              iVar6 = piVar4[2];
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar6);
          }
          iVar9 = iVar9 + 1;
          this = pvStack_40;
        } while (iVar9 < piVar4[1]);
      }
      if ((1 < uVar3) && (uVar3 < 0x40)) {
        *(int *)((int)this + uVar3 * 0x28 + 0x30) = iStack_4c;
        *(int *)((int)this + uVar3 * 0x28 + 0x34) = iVar8;
        *(int *)((int)this + uVar3 * 0x28 + 0x38) = iStack_48;
        *(int *)((int)this + uVar3 * 0x28 + 0x3c) = iStack_44;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00525610 @ 00525610 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00525610(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  float *pfVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_c [12];
  
  puVar7 = DAT_0104c4d8;
  if (DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      cVar3 = (**(code **)(*(int *)puVar7[2] + 0xe0))();
      if (cVar3 == '\0') {
        piVar2 = (int *)puVar7[2];
        uVar8 = 0;
        pfVar4 = (float *)(**(code **)(*piVar2 + 0x34))(auStack_c);
        pbVar5 = (byte *)FUN_00525070(param_1,pfVar4);
        if (pbVar5 != (byte *)0x0) {
          uVar6 = *pbVar5 & 0x3f;
          if ((uVar6 < 2) || (0x3f < uVar6)) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)((int)param_1 + uVar6 * 0x28 + 0x2c);
          }
        }
        (**(code **)(*piVar2 + 0xe4))(uVar8);
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104c4e4);
  }
  _DAT_0104c418 = *(int *)(DAT_0104cdf4 + 0x3c) + 1;
  return;
}


//// FUNCTION FUN_005256b0 @ 005256b0 ////

undefined4 * __fastcall FUN_005256b0(undefined4 *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  void *pvVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadf3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d22140;
  _eh_vector_constructor_iterator_(param_1 + 0x1a,0x28,0x40,FUN_005251e0,FUN_00525200);
  local_4 = CONCAT31(local_4._1_3_,1);
  pvVar3 = operator_new(0xa000);
  param_1[0x19] = pvVar3;
  iVar4 = 6;
  do {
    puVar1 = (ushort *)(iVar4 + -6 + param_1[0x19]);
    *puVar1 = *puVar1 & 0xf03f;
    pbVar2 = (byte *)(iVar4 + -6 + param_1[0x19]);
    *pbVar2 = *pbVar2 & 0xc0;
    puVar1 = (ushort *)(iVar4 + -4 + param_1[0x19]);
    *puVar1 = *puVar1 & 0xf03f;
    pbVar2 = (byte *)(iVar4 + -4 + param_1[0x19]);
    *pbVar2 = *pbVar2 & 0xc0;
    puVar1 = (ushort *)(iVar4 + -2 + param_1[0x19]);
    *puVar1 = *puVar1 & 0xf03f;
    pbVar2 = (byte *)(iVar4 + -2 + param_1[0x19]);
    *pbVar2 = *pbVar2 & 0xc0;
    *(ushort *)(param_1[0x19] + iVar4) = *(ushort *)(param_1[0x19] + iVar4) & 0xf03f;
    *(byte *)(iVar4 + param_1[0x19]) = *(byte *)(iVar4 + param_1[0x19]) & 0xc0;
    puVar1 = (ushort *)(iVar4 + 2 + param_1[0x19]);
    *puVar1 = *puVar1 & 0xf03f;
    pbVar2 = (byte *)(iVar4 + 2 + param_1[0x19]);
    *pbVar2 = *pbVar2 & 0xc0;
    iVar4 = iVar4 + 10;
  } while (iVar4 < 0xa006);
  *(undefined1 *)(param_1 + 0x29a) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005257c0 @ 005257c0 ////

undefined4 * __thiscall FUN_005257c0(void *this,byte param_1)

{
  FUN_00525250(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005257e0 @ 005257e0 ////

void __fastcall FUN_005257e0(void *param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *(undefined1 *)((int)param_1 + 0xa68) = 1;
  iVar5 = 6;
  do {
    puVar1 = (ushort *)(*(int *)((int)param_1 + 100) + -6 + iVar5);
    *puVar1 = *puVar1 & 0xf03f;
    puVar1 = (ushort *)(*(int *)((int)param_1 + 100) + -4 + iVar5);
    *puVar1 = *puVar1 & 0xf03f;
    puVar1 = (ushort *)(*(int *)((int)param_1 + 100) + -2 + iVar5);
    *puVar1 = *puVar1 & 0xf03f;
    puVar1 = (ushort *)(*(int *)((int)param_1 + 100) + iVar5);
    *puVar1 = *puVar1 & 0xf03f;
    puVar1 = (ushort *)(*(int *)((int)param_1 + 100) + 2 + iVar5);
    *puVar1 = *puVar1 & 0xf03f;
    iVar5 = iVar5 + 10;
  } while (iVar5 < 0xa006);
  puVar7 = DAT_0104c4d8;
  if (DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      cVar4 = (**(code **)(*(int *)puVar7[2] + 0x118))();
      if (cVar4 == '\0') {
        cVar4 = (**(code **)(*(int *)puVar7[2] + 0x138))();
        if (cVar4 == '\0') {
          uVar6 = FUN_00524020(param_1,(int *)puVar7[2]);
          if ((1 < uVar6) && (uVar6 < 0x40)) {
            puVar2 = (undefined4 *)((int)param_1 + uVar6 * 0x28 + 0x30);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
          }
        }
        else {
          FUN_005253d0(param_1,(int *)puVar7[2]);
        }
      }
      puVar2 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != &DAT_0104c4e4);
  }
  do {
    bVar3 = true;
    puVar7 = DAT_0104c4d8;
    if (DAT_0104c4d8 == &DAT_0104c4e4) {
      return;
    }
    do {
      cVar4 = (**(code **)(*(int *)puVar7[2] + 0x118))();
      if (((cVar4 == '\0') && (cVar4 = (**(code **)(*(int *)puVar7[2] + 0x138))(), cVar4 != '\0'))
         && (uVar6 = FUN_00524570(param_1,(int *)puVar7[2]), (char)uVar6 != '\0')) {
        bVar3 = false;
      }
      puVar7 = (undefined4 *)puVar7[1];
    } while (puVar7 != &DAT_0104c4e4);
  } while (!bVar3);
  return;
}


//// FUNCTION FUN_00525910 @ 00525910 ////

void __fastcall FUN_00525910(void *param_1)

{
  FUN_00523f00((int)param_1);
  FUN_00525610(param_1);
  return;
}


//// FUNCTION TerrainBlobRenderer_Constructor @ 00525920 ////

/* WARNING: Removing unreachable block (ram,0x005259e5) */

void TerrainBlobRenderer_Constructor(void)

{
  undefined4 *puVar1;
  char acStack_20 [13];
  undefined1 uStack_13;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadf63;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa6c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_005256b0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104c420[1])();
  DAT_0104c434 = puVar1;
  (*(code *)*DAT_0104c420)();
  acStack_20[0] = '\0';
  _strncpy(acStack_20,"ter_showblobs",0xd);
  uStack_13 = 0;
  local_4 = 1;
  CVarSystem_Register_STUBBED();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00525b30 @ 00525b30 ////

/* WARNING: Removing unreachable block (ram,0x00525bb7) */

void __fastcall FUN_00525b30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  float10 fVar8;
  ulonglong uVar9;
  undefined4 local_38;
  int local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  fVar8 = FUN_00566c00(DAT_0104cdf4);
  fVar1 = *(float *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x4c);
  if (*(float *)(param_1 + 0x7c) < 1.0) {
    uVar9 = FUN_00acd42c();
    uVar7 = (undefined1)uVar9;
    if (0xff < ((uint)uVar9 & 0xff)) {
      uVar7 = 0xff;
    }
  }
  else {
    uVar7 = 0xff;
  }
  iVar6 = *(int *)(param_1 + 0x58);
  local_38 = CONCAT13(uVar7,(int3)uVar5);
  local_20 = 0xffffffff;
  FUN_009a8100(&local_24);
  local_20 = local_38;
  local_14 = 0;
  local_10 = DAT_0104c44c;
  local_24 = iVar6;
  local_1c = (float)(((float10)1.0 - fVar8) * (float10)fVar3 + fVar8 * (float10)fVar1);
  local_18 = (float)((float10)(float)(((float10)1.0 - fVar8) * (float10)fVar4) +
                    fVar8 * (float10)fVar2);
  FUN_009a85a0(&local_24);
  return;
}


//// FUNCTION FUN_00525c80 @ 00525c80 ////

/* WARNING: Removing unreachable block (ram,0x00525cc2) */

void __fastcall FUN_00525c80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d22180;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x21] = param_1[0x20];
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = param_1[0x21];
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = param_1[0x21];
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if ((uint)param_1[0x18] < 0xb) {
    FUN_00526bb0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x16]);
}


//// FUNCTION FUN_00525d00 @ 00525d00 ////

void FUN_00525d00(void)

{
  uint uVar1;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadf78;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&DAT_00d22184);
  FUN_004036d0(&local_2c,L"h2",uVar1);
  local_4 = 0;
  DAT_0104c44c = FUN_0082db00(&local_2c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00525d90 @ 00525d90 ////

void FUN_00525d90(void)

{
  int iVar1;
  int *_Memory;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104c458;
  if (DAT_0104c458 != &DAT_0104c464) {
    do {
      if ((undefined4 *)puVar2[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar2[2])(1);
        puVar2 = DAT_0104c458;
      }
    } while (puVar2 != &DAT_0104c464);
  }
  _Memory = DAT_0104c44c;
  if (DAT_0104c44c != (int *)0x0) {
    iVar1 = DAT_0104c44c[1];
    DAT_0104c44c[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    DAT_0104c44c = (int *)0x0;
  }
  return;
}


//// FUNCTION FUN_00525df0 @ 00525df0 ////

void FUN_00525df0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = DAT_0104c458;
  if (DAT_0104c458 != &DAT_0104c464) {
    do {
      iVar1 = 1;
      puVar3 = puVar2;
      do {
        iVar1 = iVar1 + -1;
        if (puVar3 == (undefined4 *)0x0) break;
        puVar3 = (undefined4 *)puVar3[1];
      } while (0 < iVar1);
      puVar2 = (undefined4 *)puVar2[2];
      if (puVar2[0xf] == 0) {
        puVar2[0x1f] = puVar2[0x1e];
        puVar2[0x1e] = (float)puVar2[0x1e] - 0.25;
        puVar2[0x12] = puVar2[0x10];
        puVar2[0x13] = puVar2[0x11];
        puVar2[0x10] = (float)puVar2[0x10] - (float)puVar2[0x14];
        puVar2[0x11] = (float)puVar2[0x11] - (float)puVar2[0x15];
        if ((DAT_0105c404 < (float)puVar2[0x11]) ||
           ((float)puVar2[0x1e] < 0.0 != ((float)puVar2[0x1e] == 0.0))) goto LAB_00525e84;
        puVar2[0x15] = (float)puVar2[0x15] - 10.0;
      }
      else {
LAB_00525e84:
        (**(code **)*puVar2)(1);
      }
      puVar2 = puVar3;
    } while (puVar3 != &DAT_0104c464);
  }
  return;
}


//// FUNCTION FUN_00525ea0 @ 00525ea0 ////

void FUN_00525ea0(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104c458; puVar1 != &DAT_0104c464; puVar1 = (undefined4 *)puVar1[1]) {
    FUN_00525b30(puVar1[2]);
  }
  return;
}


//// FUNCTION FUN_00525ed0 @ 00525ed0 ////

undefined4 * __thiscall FUN_00525ed0(void *this,byte param_1)

{
  FUN_00525c80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00525ef0 @ 00525ef0 ////

void __fastcall FUN_00525ef0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d22190;
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


//// FUNCTION FUN_00525f40 @ 00525f40 ////

undefined4 * __thiscall FUN_00525f40(void *this,byte param_1)

{
  FUN_00525ef0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00525f60 @ 00525f60 ////

void __fastcall FUN_00525f60(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d22190;
  return;
}


//// FUNCTION FUN_00525fc0 @ 00525fc0 ////

undefined4 * __thiscall
FUN_00525fc0(void *this,int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  uint _Count;
  wchar_t *_Source;
  float fVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadfd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d22180;
  *(undefined1 *)((int)this + 0x38) = 0xff;
  *(undefined1 *)((int)this + 0x39) = 0xff;
  *(undefined1 *)((int)this + 0x3a) = 0xff;
  *(undefined1 *)((int)this + 0x3b) = 0xff;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined2 **)((int)this + 0x58) = (undefined2 *)((int)this + 100);
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 10;
  piVar2 = (int *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x88) = 0;
  *piVar2 = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  local_4 = 2;
  puVar8 = DAT_0104c458;
  if ((int **)DAT_0104c458 != &DAT_0104c464) {
    do {
      if (1.0 < *(float *)(puVar8[2] + 0x78)) {
        *(undefined4 *)(puVar8[2] + 0x78) = 0x3f800000;
      }
      puVar1 = puVar8 + 1;
      puVar8 = (undefined4 *)*puVar1;
    } while ((int **)*puVar1 != &DAT_0104c464);
  }
  *(void **)((int)this + 0x88) = this;
  FUN_00acdb9e(0xe524ac);
  iVar4 = FUN_0097dda0();
  *(int *)((int)this + 0x8c) = iVar4;
  if (s___AV__InList_VCTextFloater_TM____00e52484[0x25] != '\0') {
    iVar4 = 0x80;
    pcVar9 = "Link";
    pcVar5 = (char *)FUN_00acdb9e(0xe524ac);
    FUN_0097df60(pcVar5,pcVar9,iVar4);
    s___AV__InList_VCTextFloater_TM____00e52484[0x25] = '\0';
  }
  *(int ***)((int)this + 0x84) = &DAT_0104c464;
  *piVar2 = (int)DAT_0104c464;
  *(int **)((int)DAT_0104c464 + 4) = piVar2;
  DAT_0104c464 = piVar2;
  FUN_009a8180(DAT_0104c44c,local_14,(ushort *)*param_3);
  *(float *)((int)this + 0x40) = *param_2;
  fVar3 = *(float *)((int)this + 0x40) - local_14[0] * 0.5;
  *(float *)((int)this + 0x44) = param_2[1];
  *(float *)((int)this + 0x40) = fVar3;
  if (0.0 <= fVar3) {
    if (DAT_0105c400 < local_14[0] + fVar3) {
      *(float *)((int)this + 0x40) = DAT_0105c400 - local_14[0];
    }
  }
  else {
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x38) = *param_4;
  *(int *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x78) = 0x40000000;
  *(undefined4 *)((int)this + 0x7c) = 0x40000000;
  _Count = param_3[1];
  _Source = (wchar_t *)*param_3;
  if (*(uint *)((int)this + 0x60) <= _Count) {
    if (10 < *(uint *)((int)this + 0x60)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x58));
    }
    uVar6 = _Count + 0x20 & 0xffffffe0;
    *(uint *)((int)this + 0x60) = uVar6;
    pvVar7 = _malloc(uVar6 * 2);
    *(void **)((int)this + 0x58) = pvVar7;
  }
  _wcsncpy(*(wchar_t **)((int)this + 0x58),_Source,_Count);
  *(uint *)((int)this + 0x5c) = _Count;
  *(undefined2 *)(*(int *)((int)this + 0x58) + _Count * 2) = 0;
  if (param_1 == 0) {
    fVar3 = (DAT_0105c400 * 0.5 - *param_2) / DAT_0105c400;
    *(undefined4 *)((int)this + 0x54) = 0x41f00000;
    *(float *)((int)this + 0x50) = fVar3 * 0.0;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00526220 @ 00526220 ////

void __cdecl FUN_00526220(int param_1,float *param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cadfeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x90);
  local_4 = 0;
  if (this != (void *)0x0) {
    FUN_00525fc0(this,param_1,param_2,param_3,param_4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00526280 @ 00526280 ////

void __fastcall FUN_00526280(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d221a0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1[0xf] + 4) = param_1[0x10];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1[0xf] + 4) = param_1[0x10];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_00526370 @ 00526370 ////

undefined4 * __thiscall FUN_00526370(void *this,byte param_1)

{
  FUN_00526280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00526390 @ 00526390 ////

undefined4 * __thiscall FUN_00526390(void *this,char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_stack_00000024;
  undefined1 in_stack_00000028;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cae026;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d221a0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x50) = (undefined1 *)((int)this + 0x5c);
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0x14;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004015d0((undefined4 *)((int)this + 0x50),param_1,param_2);
  *(undefined1 *)((int)this + 0x70) = in_stack_00000028;
  *(undefined4 *)((int)this + 0x38) = in_stack_00000024;
  *(void **)((int)this + 0x44) = this;
  FUN_00acdb9e(0xe524e8);
  iVar1 = FUN_0097dda0();
  *(int *)((int)this + 0x48) = iVar1;
  if (s___AVCThought_TM___00e524d4[0x12] != '\0') {
    iVar1 = 0x3c;
    pcVar3 = "ListPtr";
    pcVar2 = (char *)FUN_00acdb9e(0xe524e8);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVCThought_TM___00e524d4[0x12] = '\0';
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00526490 @ 00526490 ////

undefined4 __thiscall FUN_00526490(void *this,float *param_1)

{
  uint uVar1;
  
  if (*(char *)((int)this + 0x38) == '\0') {
    uVar1 = FUN_0043b6e0((void *)((int)this + 0x10),param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_0043b6a0((void *)((int)this + 0x14),param_1);
      if ((char)uVar1 != '\0') {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
    }
  }
  else {
    uVar1 = FUN_0043b640((void *)((int)this + 0x10),param_1);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_005264e0 @ 005264e0 ////

undefined4 * __fastcall FUN_005264e0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cae043;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_4 = 0;
  FUN_0043b510(param_1 + 4);
  FUN_0043b510(param_1 + 5);
  param_1[6] = param_1 + 9;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 10;
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[2] = param_1;
  FUN_00acdb9e(0xe52504);
  iVar1 = FUN_0097dda0();
  param_1[3] = iVar1;
  if (s__PAVCThought_TM___00e524f0[0x12] != '\0') {
    iVar1 = 0;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe52504);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s__PAVCThought_TM___00e524f0[0x12] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005265b0 @ 005265b0 ////

undefined4 * __thiscall
FUN_005265b0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cae063;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  local_4 = 0;
  FUN_0043b510((undefined4 *)((int)this + 0x10));
  FUN_0043b510((undefined4 *)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x18) = (undefined2 *)((int)this + 0x24);
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 10;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(void **)((int)this + 8) = this;
  FUN_00acdb9e(0xe52504);
  iVar1 = FUN_0097dda0();
  *(int *)((int)this + 0xc) = iVar1;
  if (s__PAVCTimeSlot_TM___00e5250c[0x13] != '\0') {
    iVar1 = 0;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe52504);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s__PAVCTimeSlot_TM___00e5250c[0x13] = '\0';
  }
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = *param_2;
  FUN_004036d0((undefined4 *)((int)this + 0x18),(wchar_t *)*param_3,param_3[1]);
  *(undefined1 *)((int)this + 0x38) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005266b0 @ 005266b0 ////

void __fastcall FUN_005266b0(int *param_1)

{
  if (10 < (uint)param_1[8]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_005266f0 @ 005266f0 ////

void __fastcall FUN_005266f0(int *param_1)

{
  undefined4 uStack_8;
  int *piStack_4;
  
  FUN_005386c0((int)param_1);
  if (((param_1[0x38] < 1) && (param_1[0x47] != 0)) && (param_1[0x84] != 0)) {
    (**(code **)(*param_1 + 0xd0))();
    uStack_8 = 2;
    piStack_4 = param_1;
    (**(code **)(*(int *)param_1[0x47] + 0x10))(&uStack_8,1);
  }
  return;
}


//// FUNCTION FUN_00526750 @ 00526750 ////

void __fastcall FUN_00526750(int *param_1)

{
  if ((param_1[0x47] != 0) && (param_1[0x84] != 0)) {
    (**(code **)(*param_1 + 0xd0))();
                    /* WARNING: Could not recover jumptable at 0x00526778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[0x47] + 8))();
    return;
  }
  return;
}


//// FUNCTION FUN_005267a0 @ 005267a0 ////

void __fastcall FUN_005267a0(int param_1)

{
  FUN_0053a180(param_1);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
  return;
}


//// FUNCTION FUN_005267f0 @ 005267f0 ////

void __fastcall FUN_005267f0(undefined4 *param_1)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cae078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d221ec;
  param_1[0x1e] = &PTR_LAB_00d221cc;
  param_1[0x28] = &PTR_FUN_00d221b4;
  local_4 = 0;
  if ((param_1[0x47] != 0) && (this = *(void **)(param_1[0x47] + 0x78), this != (void *)0x0)) {
    FUN_00a019d0(this,(void *)0x0,0xffffffff);
  }
  if ((void *)param_1[0x84] != (void *)0x0) {
    FUN_00985de0((void *)param_1[0x84]);
    param_1[0x84] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0053bbe0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00526890 @ 00526890 ////

void __thiscall FUN_00526890(void *this,void *param_1)

{
  void *this_00;
  
  if (param_1 != (void *)0x0) {
    FUN_00984680((int)param_1);
  }
  if (*(void **)((int)this + 0x210) != (void *)0x0) {
    FUN_00985de0(*(void **)((int)this + 0x210));
    *(undefined4 *)((int)this + 0x210) = 0;
  }
  *(void **)((int)this + 0x210) = param_1;
  if ((*(int *)((int)this + 0x11c) != 0) &&
     (this_00 = *(void **)(*(int *)((int)this + 0x11c) + 0x78), this_00 != (void *)0x0)) {
    FUN_00a019d0(this_00,param_1,0xffffffff);
  }
  return;
}


//// FUNCTION FUN_005268e0 @ 005268e0 ////

void __fastcall FUN_005268e0(int *param_1)

{
  if (((char)param_1[0x57] == '\0') && (*(void **)(param_1[0x47] + 0x78) != (void *)0x0)) {
    FUN_00a019d0(*(void **)(param_1[0x47] + 0x78),(void *)param_1[0x84],0xffffffff);
  }
  FUN_0053a3a0(param_1);
  return;
}


//// FUNCTION FUN_00526910 @ 00526910 ////

void __fastcall FUN_00526910(int param_1)

{
  float fVar1;
  void *this;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  ulonglong uVar6;
  float local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  if (((*(int *)(param_1 + 0x11c) != 0) &&
      (this = *(void **)(*(int *)(param_1 + 0x11c) + 0x78), *(char *)(param_1 + 0x15c) == '\0')) &&
     (this != (void *)0x0)) {
    fVar4 = FUN_00566c00(DAT_0104cdf4);
    fVar1 = (float)fVar4;
    piVar2 = *(int **)(param_1 + 0x11c);
    local_4 = fVar1 * *(float *)(param_1 + 0x108);
    fVar5 = (float10)1.0 - (float10)fVar1;
    local_20 = (float)(fVar5 * (float10)*(float *)(param_1 + 0x150));
    local_1c = (float)(fVar5 * (float10)*(float *)(param_1 + 0x154));
    local_18 = (float)(fVar5 * (float10)*(float *)(param_1 + 0x14c) +
                      fVar4 * (float10)*(float *)(param_1 + 0x100));
    local_14 = local_20 + fVar1 * *(float *)(param_1 + 0x104);
    local_10 = local_1c + local_4;
    pfVar3 = FUN_00429400(local_28,*(float *)(param_1 + 0x158),*(float *)(param_1 + 0xc4),fVar1);
    (**(code **)(*piVar2 + 0x20))(&local_18,*pfVar3,*(undefined4 *)(param_1 + 200));
    uVar6 = FUN_00acd42c();
    FUN_00a03180(this,(int)uVar6);
  }
  return;
}


//// FUNCTION FUN_00526a50 @ 00526a50 ////

void __fastcall FUN_00526a50(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x210);
  if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x33) != '\0')) &&
      (((byte)((uint)**(undefined4 **)(iVar1 + 0x6c) >> 0x1b) & 1) != 0)) &&
     (*(char *)(param_1 + 0x20c) == '\0')) {
    uVar2 = FUN_00acd42c();
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + (int)uVar2;
    return;
  }
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 100;
  return;
}


//// FUNCTION FUN_00526ab0 @ 00526ab0 ////

undefined4 * __fastcall FUN_00526ab0(undefined4 *param_1)

{
  void *pvVar1;
  float10 fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053ba80(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d221ec;
  param_1[0x1e] = &PTR_LAB_00d221cc;
  param_1[0x28] = &PTR_FUN_00d221b4;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  pvVar1 = (void *)FUN_00447aa0(0);
  FUN_00526890(param_1,pvVar1);
  if (pvVar1 != (void *)0x0) {
    FUN_00985de0(pvVar1);
  }
  fVar2 = FUN_00990e30(0.95,1.05);
  param_1[0x82] = (float)fVar2;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00526b60 @ 00526b60 ////

undefined4 * __thiscall FUN_00526b60(void *this,byte param_1)

{
  FUN_005267f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00526bb0 @ 00526bb0 ////

void __fastcall FUN_00526bb0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cae0bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d16b44;
  local_4 = 0;
  if ((undefined4 *)param_1[3] != param_1 + 6) {
    do {
      (**(code **)(**(int **)(param_1[3] + 8) + 4))();
    } while ((undefined4 *)param_1[3] != param_1 + 6);
  }
  FUN_00409470(param_1 + 1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00526c20 @ 00526c20 ////

void __fastcall FUN_00526c20(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00526ca0 @ 00526ca0 ////

void __thiscall FUN_00526ca0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x90) = param_1;
  *(undefined4 *)((int)this + 0x94) = param_2;
  FUN_00471b10((longlong *)((int)this + 0x90));
  return;
}


//// FUNCTION FUN_00526cc0 @ 00526cc0 ////

longlong * __thiscall FUN_00526cc0(void *this,longlong *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 0x94);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00526d40 @ 00526d40 ////

ulonglong * __fastcall FUN_00526d40(int *param_1)

{
  ulonglong uVar1;
  ulonglong *unaff_retaddr;
  undefined1 local_8 [8];
  
  (**(code **)(*param_1 + 8))(local_8);
  uVar1 = FUN_00acd42c();
  *unaff_retaddr = uVar1;
  FUN_00471b10((longlong *)unaff_retaddr);
  return unaff_retaddr;
}


//// FUNCTION FUN_00526da0 @ 00526da0 ////

longlong * __thiscall FUN_00526da0(void *this,longlong *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 0x9c);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00526e20 @ 00526e20 ////

longlong * __thiscall FUN_00526e20(void *this,longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((int)this + 0x68);
  *(undefined1 *)((int)this + 0x60) = 1;
  uVar2 = *puVar1;
  *puVar1 = uVar2 + *(uint *)((int)this + 0xa0);
  *(uint *)((int)this + 0x6c) =
       *(int *)((int)this + 0x6c) + *(int *)((int)this + 0xa4) +
       (uint)CARRY4(uVar2,*(uint *)((int)this + 0xa0));
  FUN_00471b10((longlong *)puVar1);
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0xa0);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 0xa4);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00526e70 @ 00526e70 ////

uint * __fastcall FUN_00526e70(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint unaff_ESI;
  uint *unaff_retaddr;
  uint local_10;
  uint uStack_c;
  uint uStack_8;
  
  (**(code **)(*param_1 + 0x10))(&local_10);
  puVar1 = (uint *)(param_1 + 0x1a);
  uVar2 = *puVar1;
  *puVar1 = uVar2 + unaff_ESI;
  param_1[0x1b] = param_1[0x1b] + local_10 + (uint)CARRY4(uVar2,unaff_ESI);
  FUN_00471b10((longlong *)puVar1);
  uStack_8 = local_10;
  uStack_c = unaff_ESI;
  FUN_00471b10((longlong *)&uStack_c);
  unaff_retaddr[1] = uStack_8;
  *unaff_retaddr = uStack_c;
  FUN_00471b10((longlong *)unaff_retaddr);
  unaff_retaddr[2] = 4;
  return unaff_retaddr;
}


//// FUNCTION FUN_00526ef0 @ 00526ef0 ////

longlong * __thiscall FUN_00526ef0(void *this,longlong *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x70);
  *(uint *)((int)this + 0x70) = uVar1 + *(uint *)((int)this + 0x98);
  *(uint *)((int)this + 0x74) =
       *(int *)((int)this + 0x74) + *(int *)((int)this + 0x9c) +
       (uint)CARRY4(uVar1,*(uint *)((int)this + 0x98));
  FUN_00471b10((longlong *)((int)this + 0x70));
  *(undefined4 *)param_1 = *(undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 0x9c);
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00526fa0 @ 00526fa0 ////

void __fastcall FUN_00526fa0(int param_1)

{
  uint uVar1;
  undefined8 local_8;
  
  local_8 = FUN_00acd42c();
  FUN_00471b10(&local_8);
  uVar1 = *(uint *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = uVar1 + (uint)local_8;
  *(uint *)(param_1 + 0x7c) =
       *(int *)(param_1 + 0x7c) + local_8._4_4_ + (uint)CARRY4(uVar1,(uint)local_8);
  FUN_00471b10((longlong *)(param_1 + 0x78));
  return;
}


//// FUNCTION FUN_00526ff0 @ 00526ff0 ////

void __fastcall FUN_00526ff0(int *param_1)

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
  puStack_8 = &LAB_00cae0d8;
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


//// FUNCTION FUN_005270c0 @ 005270c0 ////

/* WARNING: Removing unreachable block (ram,0x0052712a) */

void __fastcall FUN_005270c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cae0f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d222f4;
  param_1[0xe] = &PTR_LAB_00d222d0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x21] = param_1[0x20];
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = param_1[0x21];
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 4) = param_1[0x21];
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005271c0 @ 005271c0 ////

void __fastcall FUN_005271c0(int param_1)

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
  puStack_8 = &LAB_00cae148;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMCosts.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
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
  uVar3 = FUN_0098b490("TotalSpentFix");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x30),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMCosts.cpp";
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
  uVar3 = FUN_0098b490("TotalSpentUse");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x38),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMCosts.cpp";
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
  uVar3 = FUN_0098b490("TotalCharged");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x40),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMCosts.cpp";
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
  uVar3 = FUN_0098b490("AnnualCost");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x58),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMCosts.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("DailyRate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x60),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMCosts.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("PurchaseCost");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x68),8);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMCosts.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("Bought");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),1);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005277f0 @ 005277f0 ////

undefined4 * __thiscall FUN_005277f0(void *this,byte param_1)

{
  FUN_005270c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00527810 @ 00527810 ////

void __fastcall FUN_00527810(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d223c0;
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


//// FUNCTION FUN_00527860 @ 00527860 ////

undefined4 * __thiscall FUN_00527860(void *this,byte param_1)

{
  FUN_00527810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00527880 @ 00527880 ////

void __fastcall FUN_00527880(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d223c0;
  return;
}


//// FUNCTION FUN_005278e0 @ 005278e0 ////

undefined4 * __fastcall FUN_005278e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  ulonglong uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae1a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d222f4;
  param_1[0xe] = &PTR_LAB_00d222d0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar4 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x1a) = uVar4;
  FUN_00471b10((longlong *)(param_1 + 0x1a));
  *(ulonglong *)(param_1 + 0x1c) = uVar4;
  FUN_00471b10((longlong *)(param_1 + 0x1c));
  piVar1 = param_1 + 0x20;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  *piVar1 = 0;
  param_1[0x21] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(ulonglong *)(param_1 + 0x24) = uVar4;
  FUN_00471b10((longlong *)(param_1 + 0x24));
  *(ulonglong *)(param_1 + 0x26) = uVar4;
  FUN_00471b10((longlong *)(param_1 + 0x26));
  *(ulonglong *)(param_1 + 0x28) = uVar4;
  FUN_00471b10((longlong *)(param_1 + 0x28));
  param_1[0x22] = param_1;
  FUN_00acdb9e(0xe5254c);
  iVar2 = FUN_0097dda0();
  param_1[0x23] = iVar2;
  if (DAT_00e52548 != '\0') {
    iVar2 = 0x80;
    pcVar5 = "CostsLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5254c);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    DAT_00e52548 = '\0';
  }
  param_1[0x21] = &DAT_0104c498;
  *piVar1 = (int)DAT_0104c498;
  *(int **)((int)DAT_0104c498 + 4) = piVar1;
  DAT_0104c498 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00527a40 @ 00527a40 ////

undefined4 * __cdecl FUN_00527a40(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae1bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x50);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00a04fc0(this,param_1,param_2,param_3);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00527b50 @ 00527b50 ////

void __fastcall FUN_00527b50(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00527b80 @ 00527b80 ////

void __thiscall FUN_00527b80(void *this,float param_1,float param_2,float param_3)

{
  *(float *)this = param_1 * *(float *)this;
  *(float *)((int)this + 0xc) = param_1 * *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x18) = param_1 * *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x24) = param_1 * *(float *)((int)this + 0x24);
  *(float *)((int)this + 4) = param_2 * *(float *)((int)this + 4);
  *(float *)((int)this + 0x10) = param_2 * *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x1c) = param_2 * *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x28) = param_2 * *(float *)((int)this + 0x28);
  *(float *)((int)this + 8) = param_3 * *(float *)((int)this + 8);
  *(float *)((int)this + 0x14) = param_3 * *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x20) = param_3 * *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x2c) = param_3 * *(float *)((int)this + 0x2c);
  return;
}


//// FUNCTION FUN_00527c00 @ 00527c00 ////

void __thiscall FUN_00527c00(void *this,float param_1,float param_2,float param_3)

{
  *(float *)this = param_1 * *(float *)this;
  *(float *)((int)this + 4) = param_1 * *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1 * *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = param_2 * *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x10) = param_2 * *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = param_2 * *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) = param_3 * *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) = param_3 * *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x20) = param_3 * *(float *)((int)this + 0x20);
  return;
}


//// FUNCTION FUN_00527db0 @ 00527db0 ////

void __thiscall FUN_00527db0(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)fcos((float10)param_1);
  fVar3 = (float10)fsin((float10)param_1);
  fVar1 = *(float *)this;
  *(float *)this =
       (float)(fVar2 * (float10)*(float *)this - fVar3 * (float10)*(float *)((int)this + 4));
  *(float *)((int)this + 4) =
       (float)(fVar2 * (float10)*(float *)((int)this + 4) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0xc);
  *(float *)((int)this + 0xc) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0xc) -
              fVar3 * (float10)*(float *)((int)this + 0x10));
  *(float *)((int)this + 0x10) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x10) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x18) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x18) -
              fVar3 * (float10)*(float *)((int)this + 0x1c));
  *(float *)((int)this + 0x1c) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x1c) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x24) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x24) -
              fVar3 * (float10)*(float *)((int)this + 0x28));
  *(float *)((int)this + 0x28) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x28) +
              (float10)(float)(fVar3 * (float10)fVar1));
  return;
}


//// FUNCTION FUN_00527e40 @ 00527e40 ////

void __fastcall FUN_00527e40(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00527e42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1ac))();
  return;
}


//// FUNCTION FUN_00527e60 @ 00527e60 ////

void __thiscall FUN_00527e60(void *this,float *param_1)

{
  float *pfVar1;
  float10 fVar2;
  float local_14 [2];
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (*(int **)((int)this + 0x3a0) == (int *)0x0) {
    local_c = *(float *)((int)this + 0x100);
    local_8 = *(float *)((int)this + 0x104);
    local_4 = *(undefined4 *)((int)this + 0x108);
    fVar2 = FUN_00990e30(*(float *)((int)this + 0xcc) * -0.5,*(float *)((int)this + 0xcc) * 0.5);
    local_c = (float)(fVar2 + (float10)local_c);
    fVar2 = FUN_00990e30(*(float *)((int)this + 0xcc) * -0.5,*(float *)((int)this + 0xcc) * 0.5);
    local_8 = (float)(fVar2 + (float10)local_8);
  }
  else {
    pfVar1 = (float *)FUN_0046da60(local_14,*(int **)((int)this + 0x3a0));
    local_c = *pfVar1;
    local_8 = pfVar1[1];
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = 3.0;
  return;
}


//// FUNCTION FUN_00527f30 @ 00527f30 ////

void __thiscall FUN_00527f30(void *this,float *param_1,float *param_2)

{
  if ((((*(float *)((int)this + 0x100) != *param_1) || (*(float *)((int)this + 0x104) != param_1[1])
       ) || (*(float *)((int)this + 0x108) != param_1[2])) ||
     (*(float *)((int)this + 0xc4) != *param_2)) {
    (**(code **)(*(int *)this + 0x1a8))(*param_1,param_1[1],param_1[2],param_2);
  }
  return;
}


//// FUNCTION FUN_00527fc0 @ 00527fc0 ////

undefined4 __fastcall FUN_00527fc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3a0);
}


//// FUNCTION FUN_00527fd0 @ 00527fd0 ////

void __fastcall FUN_00527fd0(int *param_1)

{
  (**(code **)(*param_1 + 0x1b4))();
  param_1[0xb8] = param_1[0xb8] & 0xfffff7df;
  FUN_0043b700(param_1 + 0xb2,0.0);
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)((int)param_1 + 0x2e5) = 0;
  param_1[0xb8] = param_1[0xb8] & 0xfffff8efU | 0x40;
  return;
}


//// FUNCTION FUN_00528040 @ 00528040 ////

undefined4 * __fastcall FUN_00528040(int *param_1)

{
  undefined4 *puVar1;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = FUN_005389c0(param_1);
  return puVar1;
}


//// FUNCTION FUN_00528060 @ 00528060 ////

void __fastcall FUN_00528060(int param_1)

{
  int *piVar1;
  
  if (*(void **)(param_1 + 0x11c) != (void *)0x0) {
    piVar1 = FUN_0097fc60(*(void **)(param_1 + 0x11c),*(int **)(param_1 + 0x3a4),1);
    *(int **)(param_1 + 0x3a4) = piVar1;
    piVar1 = FUN_0097fc60(*(void **)(param_1 + 0x11c),*(int **)(param_1 + 0x3a0),2);
    *(int **)(param_1 + 0x3a0) = piVar1;
    return;
  }
  if (*(undefined4 **)(param_1 + 0x3a4) != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)**(undefined4 **)(param_1 + 0x3a4));
  }
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  if (*(undefined4 **)(param_1 + 0x3a0) != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)**(undefined4 **)(param_1 + 0x3a0));
  }
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  return;
}


//// FUNCTION FUN_00528140 @ 00528140 ////

undefined4 __fastcall FUN_00528140(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x408) == 0) {
    puVar1 = FUN_0055c3c0((undefined4 *)(param_1 + 0x33c));
    *(undefined4 **)(param_1 + 0x408) = puVar1;
  }
  return *(undefined4 *)(param_1 + 0x408);
}


//// FUNCTION FUN_005281a0 @ 005281a0 ////

undefined1 __fastcall FUN_005281a0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x2e4);
}


//// FUNCTION FUN_00528220 @ 00528220 ////

void __thiscall FUN_00528220(void *this,char param_1)

{
  if (param_1 != '\0') {
    FUN_0046d730(*(int **)((int)this + 0x3a0),0x3ff,1);
    FUN_0046d730(*(int **)((int)this + 0x3a0),0x2f,0x40);
    return;
  }
  FUN_0046d730(*(int **)((int)this + 0x3a0),-0x3ff,1);
  FUN_0046d730(*(int **)((int)this + 0x3a0),-0x2f,0x40);
  return;
}


//// FUNCTION FUN_00528280 @ 00528280 ////

void __fastcall FUN_00528280(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  *(undefined1 *)(param_1 + 0xbb) = 1;
  uVar2 = FUN_00990ae0(param_1,param_2);
  param_1[0xed] = (int)uVar2 + 0x28a;
  puVar1 = (undefined4 *)param_1[0xf1];
  param_1[0xae] = 3;
  if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x27) & 0x40) != 0)) {
    FUN_009e45b0(puVar1);
  }
  if ((int *)param_1[0x47] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x47] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
    FUN_00527b80((void *)(param_1[0x47] + 0x18),1.0,1.0,1.0);
  }
  (**(code **)(*param_1 + 0xf4))();
  param_1[0xac] = 0;
  if (-1 < param_1[0xad]) {
    FUN_009b11d0(param_1[0xad]);
  }
  param_1[0xad] = -1;
  return;
}


//// FUNCTION FUN_00528340 @ 00528340 ////

void __fastcall FUN_00528340(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = FUN_00413cc0(DAT_00f87aa0);
  if (bVar1) {
    uVar2 = FUN_00554030(0x73);
    if ((char)uVar2 != '\0') {
      FUN_00470a70(DAT_0104917c,DAT_00f87aa0,0x4b2,param_1 + -0xa0,0);
    }
  }
  FUN_00539be0(param_1);
  return;
}


//// FUNCTION FUN_00528390 @ 00528390 ////

void __fastcall FUN_00528390(int param_1)

{
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  return;
}


//// FUNCTION FUN_005283b0 @ 005283b0 ////

void __fastcall FUN_005283b0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x2b0) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x2b0) + -1, *(int *)(param_1 + 0x2b0) = iVar1, iVar1 == 0)) {
    if (-1 < *(int *)(param_1 + 0x2b4)) {
      FUN_009b11d0(*(int *)(param_1 + 0x2b4));
    }
    *(undefined4 *)(param_1 + 0x2b4) = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_00528410 @ 00528410 ////

void __fastcall FUN_00528410(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x11c);
  if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x27) & 0x40) != 0)) {
    FUN_009e45b0(puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x3c4);
  if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x27) & 0x40) != 0)) {
    FUN_009e45b0(puVar1);
  }
  return;
}


//// FUNCTION FUN_00528450 @ 00528450 ////

int __fastcall FUN_00528450(int param_1)

{
  return param_1 + 0x35c;
}


//// FUNCTION FUN_00528460 @ 00528460 ////

int __fastcall FUN_00528460(int param_1)

{
  return param_1 + 0x33c;
}


//// FUNCTION FUN_00528470 @ 00528470 ////

int __fastcall FUN_00528470(int param_1)

{
  return param_1 + 0x37c;
}


//// FUNCTION FUN_00528480 @ 00528480 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00528480(int param_1)

{
  return (float10)_DAT_00e52588 * (float10)*(float *)(param_1 + 700);
}


//// FUNCTION FUN_005284a0 @ 005284a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005284a0(int param_1)

{
  if ((_DAT_0104c4c8 == 0.0) && ((*(byte *)(param_1 + 0x2e0) & 0x10) == 0)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00528500 @ 00528500 ////

uint __fastcall FUN_00528500(int param_1)

{
  return *(uint *)(param_1 + 0x39c) & 1;
}


//// FUNCTION FUN_00528510 @ 00528510 ////

void __fastcall FUN_00528510(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(*param_1 + 0xa0))();
  iVar1 = param_1[0xe8];
  if (iVar1 == 0) {
    param_1[0xb8] = param_1[0xb8] & 0xfffffffb;
  }
  else if ((*(float *)(iVar1 + 0xc) != (float)param_1[0xea]) ||
          (*(float *)(iVar1 + 0x10) != (float)param_1[0xeb])) {
    param_1[0xea] = *(int *)(iVar1 + 0xc);
    param_1[0xeb] = *(int *)(iVar1 + 0x10);
    uVar2 = (**(code **)(*param_1 + 0x134))();
    param_1[0xb8] = param_1[0xb8] ^ ((uVar2 & 0xff) << 2 ^ param_1[0xb8]) & 4;
    return;
  }
  return;
}


//// FUNCTION FUN_00528590 @ 00528590 ////

void __thiscall FUN_00528590(void *this,float *param_1)

{
  float local_c;
  float local_8;
  
  FUN_00538af0(this,&local_c);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = 0.0;
  return;
}


//// FUNCTION FUN_005285d0 @ 005285d0 ////

void __thiscall FUN_005285d0(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00538af0(this,&local_c);
  if (*(void **)((int)this + 0x11c) != (void *)0x0) {
    iVar1 = FUN_0097e350(*(void **)((int)this + 0x11c),0);
    if (iVar1 != 0) {
      iVar1 = FUN_0097e350(*(void **)((int)this + 0x11c),0);
      iVar2 = FUN_0097e350(*(void **)((int)this + 0x11c),0);
      local_4 = *(float *)(iVar1 + 0xdc) + *(float *)(iVar2 + 0xd0);
    }
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


//// FUNCTION FUN_00528660 @ 00528660 ////

void FUN_00528660(void)

{
  FUN_00535b90();
  if (DAT_0104c4cc != (void *)0x0) {
    FUN_009de3b0(DAT_0104c4cc);
    DAT_0104c4cc = (void *)0x0;
  }
  return;
}


//// FUNCTION FUN_005286d0 @ 005286d0 ////

void __thiscall FUN_005286d0(void *this,byte param_1)

{
  *(uint *)((int)this + 0x9c) =
       *(uint *)((int)this + 0x9c) ^
       ((uint)param_1 << 0x19 ^ *(uint *)((int)this + 0x9c)) & 0x2000000;
  return;
}


//// FUNCTION FUN_00528710 @ 00528710 ////

void __fastcall FUN_00528710(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x20))
              (param_1 + 0x100,*(undefined4 *)(param_1 + 0xc4),0x3f800000);
    fVar1 = (float10)0.0;
    fVar2 = (float10)1.0;
    do {
      fVar3 = (float10)fsin((float10)3.1415927 * fVar2 * (float10)0.5);
      fVar1 = ((float10)1.0 / fVar2) * fVar3 + fVar1;
      fVar2 = fVar2 + (float10)2.0;
    } while (fVar2 < (float10)11.0);
    FUN_00527b80((void *)(*(int *)(param_1 + 0x11c) + 0x18),1.0,1.0,
                 (float)(fVar1 * (float10)1.2732395 * (float10)0.0 + (float10)1.0));
  }
  return;
}


//// FUNCTION FUN_005287e0 @ 005287e0 ////

int * __thiscall FUN_005287e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00528830 @ 00528830 ////

int * __thiscall FUN_00528830(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00528860 @ 00528860 ////

int * __thiscall FUN_00528860(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00528930 @ 00528930 ////

void __fastcall FUN_00528930(int param_1)

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


//// FUNCTION FUN_00528af0 @ 00528af0 ////

void __cdecl FUN_00528af0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00528ba0 @ 00528ba0 ////

int __fastcall FUN_00528ba0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00528ec0 @ 00528ec0 ////

int * __thiscall FUN_00528ec0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00528fe0 @ 00528fe0 ////

undefined4 * __cdecl FUN_00528fe0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00529070 @ 00529070 ////

void __thiscall FUN_00529070(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x94);
  param_1[1] = *(undefined4 *)((int)this + 0x98);
  param_1[2] = *(undefined4 *)((int)this + 0x9c);
  return;
}


//// FUNCTION FUN_005290a0 @ 005290a0 ////

void __fastcall FUN_005290a0(int *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  (**(code **)(*param_1 + 0x148))();
  puVar1 = (undefined4 *)param_1[0x47];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0x47] = 0;
  }
  (**(code **)(*param_1 + 0x1a4))(param_1 + 0xcf,0);
  param_1[0x40] = (int)((float)param_1[0x40] + 1.0);
  param_1[0x41] = (int)((float)param_1[0x41] + 1.0);
  param_1[0x42] = (int)((float)param_1[0x42] + 1.0);
  (**(code **)(*param_1 + 0x28))(&stack0xffffffe0,param_1 + 0x31);
  return;
}


//// FUNCTION FUN_00529180 @ 00529180 ////

void __fastcall FUN_00529180(int param_1)

{
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_008b2150(*(int *)(param_1 + 0x304));
    return;
  }
  return;
}


//// FUNCTION FUN_005291b0 @ 005291b0 ////

undefined4 __fastcall FUN_005291b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2a0);
}


//// FUNCTION FUN_005291c0 @ 005291c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005291c0(int *param_1)

{
  float *pfVar1;
  int *local_4;
  
  local_4 = param_1;
  pfVar1 = (float *)(**(code **)(*param_1 + 0xb8))(&local_4);
  return ((float10)*pfVar1 * (float10)0.5 + (float10)_DAT_00e52588 * (float10)(float)param_1[0xaf])
         - (float10)0.5;
}


//// FUNCTION FUN_00529220 @ 00529220 ////

void __thiscall FUN_00529220(void *this)

{
  uint uVar1;
  void *pvVar2;
  int *in_stack_00000010;
  
  FUN_00538840(this,(int *)&stack0x00000004,in_stack_00000010);
  if (*(int **)((int)this + 0x3bc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x3bc) + 0x20))
              (&stack0x00000004,*in_stack_00000010,0x3f800000);
    if (*(char *)((int)this + 0x3c8) != '\0') {
      FUN_00527c00((void *)(*(int *)((int)this + 0x3bc) + 0x18),1.0,1.0,0.01);
    }
  }
  (**(code **)(*(int *)this + 0x1b8))();
  if (*(int *)((int)this + 0x304) != 0) {
    FUN_008b21b0(*(int *)((int)this + 0x304));
  }
  if (*(int *)((int)this + 0x2b8) == 0) {
    (**(code **)(*(int *)this + 0xa0))();
    uVar1 = (**(code **)(*(int *)this + 0x134))();
    *(uint *)((int)this + 0x2e0) =
         *(uint *)((int)this + 0x2e0) ^ ((uVar1 & 0xff) << 2 ^ *(uint *)((int)this + 0x2e0)) & 4;
  }
  pvVar2 = (void *)FUN_00523ea0();
  FUN_005257e0(pvVar2);
  return;
}


//// FUNCTION FUN_005292e0 @ 005292e0 ////

void __fastcall FUN_005292e0(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  int iStack_14;
  int iStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if ((param_1[0xe8] != 0) && (param_1[0xae] != 0)) {
    fVar3 = (float10)(**(code **)(*param_1 + 0x15c))();
    if ((float)fVar3 != 0.0) {
      iVar1 = FUN_009e6b20((undefined4 *)param_1[0xe8]);
      if ((float)iVar1 * 0.002 <= 0.0) {
        return;
      }
      iVar2 = param_1[0xe8];
      iStack_10 = 0;
      if (0 < *(int *)(iVar2 + 4)) {
        do {
          iStack_14 = 0;
          if (0 < *(int *)(iVar2 + 8)) {
            do {
              if ((*(byte *)(((int *)param_1[0xe8])[2] * iStack_10 + *(int *)param_1[0xe8] +
                            iStack_14) & 1) != 0) {
                fStack_8 = ((float)iStack_14 * 0.5 + *(float *)(iVar2 + 0x10)) - 256.0;
                uStack_4 = 0;
                fStack_c = ((float)iStack_10 * 0.5 + *(float *)(iVar2 + 0xc)) - 256.0;
                FUN_00454b10(DAT_00f88720,&fStack_c,((float)fVar3 / ((float)iVar1 * 0.002)) * 0.0625
                            );
              }
              iVar2 = param_1[0xe8];
              iStack_14 = iStack_14 + 1;
            } while (iStack_14 < *(int *)(iVar2 + 8));
          }
          iVar2 = param_1[0xe8];
          iStack_10 = iStack_10 + 1;
        } while (iStack_10 < *(int *)(iVar2 + 4));
      }
    }
  }
  return;
}


//// FUNCTION FUN_00529440 @ 00529440 ////

void __thiscall FUN_00529440(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  
  (**(code **)(*(int *)((int)this + 0x1a0) + 4))();
  *(undefined4 *)((int)this + 0x1b4) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x1a0))();
  piVar1 = (int *)((int)this + 0x204);
  if (*(int **)((int)this + 0x208) != (int *)0x0) {
    **(int **)((int)this + 0x208) = *piVar1;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)((int)this + 0x208);
  }
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  if (*(int *)((int)this + 0x1b4) != 0) {
    piVar2 = (int *)(*(int *)((int)this + 0x1b4) + 0x17c);
    *(int **)((int)this + 0x208) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00529500 @ 00529500 ////

undefined4 __fastcall FUN_00529500(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar4 = (**(code **)(*param_1 + 0x19c))();
  if ((char)uVar4 == '\0') {
    if ((param_1[0x7f] != 0) && (iVar2 = *(int *)(param_1[0x7f] + 0x210), iVar2 != 0)) {
      *(undefined1 *)(iVar2 + 0x1c4) = 0;
    }
    uVar5 = 0;
    if (param_1[0x7f] != 0) {
      cVar3 = (**(code **)(*param_1 + 0xc4))();
      if (cVar3 != '\0') {
        uVar5 = FUN_00938ee0(param_1[0x7f]);
        return uVar5 & 0xffffff00;
      }
      uVar5 = FUN_00938690(param_1[0x7f]);
    }
    return uVar5 & 0xffffff00;
  }
  piVar1 = (int *)param_1[0x7f];
  if (piVar1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x3ca) != '\0') {
      uVar4 = (**(code **)(*piVar1 + 0xe0))();
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    uVar4 = (**(code **)(*piVar1 + 0xdc))(1);
  }
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_005295b0 @ 005295b0 ////

int __fastcall FUN_005295b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1[0x7f] == 0) && ((void *)param_1[0x47] != (void *)0x0)) {
    iVar1 = FUN_0097e350((void *)param_1[0x47],0);
    if (iVar1 != 0) {
      iVar1 = FUN_0097e350((void *)param_1[0x47],0);
      if ((*(byte *)(iVar1 + 0xe4) & 0x40) != 0) {
        puVar2 = FUN_0093af40(param_1);
        (**(code **)(param_1[0x7a] + 4))();
        param_1[0x7f] = (int)puVar2;
        (**(code **)param_1[0x7a])();
      }
    }
  }
  return param_1[0x7f];
}


//// FUNCTION FUN_00529650 @ 00529650 ////

void __fastcall FUN_00529650(int param_1)

{
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_00938f20(*(int *)(param_1 + 0x1fc));
    return;
  }
  return;
}


//// FUNCTION FUN_00529660 @ 00529660 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00529660(int *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  float fVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  float unaff_ESI;
  float unaff_EDI;
  ulonglong uVar10;
  undefined4 *puVar11;
  int *piVar12;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  (**(code **)(*param_1 + 0x198))();
  if (param_1[0xae] == 0) {
    (**(code **)(*param_1 + 0x120))();
  }
  iVar3 = FUN_00523ea0();
  cVar1 = FUN_00523d10(iVar3);
  iVar3 = extraout_ECX;
  uVar6 = extraout_EDX;
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(*param_1 + 0xe0))(), iVar3 = extraout_ECX_00, uVar6 = extraout_EDX_00,
     cVar1 == '\0')) {
    piVar12 = param_1;
    pvVar4 = (void *)FUN_00523ea0();
    iVar3 = FUN_00525370(pvVar4,piVar12);
    (**(code **)(param_1[0x6e] + 4))();
    param_1[0x73] = iVar3;
    (**(code **)param_1[0x6e])();
    iVar3 = param_1[0x6d];
    uVar6 = extraout_EDX_01;
    if (iVar3 != param_1[0x73]) {
      (**(code **)(param_1[0x74] + 4))();
      param_1[0x79] = param_1[0x6d];
      (**(code **)param_1[0x74])();
      uVar10 = FUN_00990ae0(extraout_ECX_01,extraout_EDX_02);
      uVar6 = (undefined4)(uVar10 >> 0x20);
      param_1[0x80] = (int)uVar10;
      iVar3 = extraout_ECX_02;
    }
  }
  if ((param_1[0x80] != 0) && (param_1[0x73] != param_1[0x79])) {
    uVar10 = FUN_00990ae0(iVar3,uVar6);
    fVar5 = (float)((int)uVar10 - param_1[0x80]);
    if (0x5dc < (uint)fVar5) {
      param_1[0x80] = 0;
      FUN_0053d3a0();
      return;
    }
    iVar3 = 0xff;
    if (1000 < (uint)fVar5) {
      fStack_28 = fVar5;
      uVar10 = FUN_00acd42c();
      iVar3 = (int)uVar10;
    }
    if ((_DAT_0104c544 & 1) == 0) {
      _DAT_0104c544 = _DAT_0104c544 | 1;
      _DAT_0104c538 = 0.0;
      _DAT_0104c53c = 0.0;
      _DAT_0104c540 = 0.015;
    }
    piVar12 = (int *)param_1[0x73];
    bVar2 = (byte)iVar3;
    if ((piVar12 != (int *)0x0) && ((*(byte *)(param_1 + 0xb8) & 4) != 0)) {
      fStack_2c = (float)param_1[0x33] + 0.1;
      uVar6 = (**(code **)(*param_1 + 0x34))(&fStack_18);
      pfVar7 = &fStack_28;
      pfVar9 = &fStack_10;
      pvVar4 = (void *)(**(code **)(*piVar12 + 0x34))(pfVar9,pfVar7,uVar6);
      FUN_00411ca0(pvVar4,pfVar9,pfVar7);
      FUN_00412e20(&fStack_2c);
      fStack_2c = fStack_2c * unaff_ESI;
      fStack_28 = fStack_28 * unaff_ESI;
      fStack_24 = fStack_24 * unaff_ESI;
      pfVar7 = (float *)(**(code **)(*param_1 + 0x34))(&fStack_14);
      fStack_1c = _DAT_0104c540 + pfVar7[2];
      puVar11 = (undefined4 *)&stack0xffffffcc;
      fStack_20 = _DAT_0104c53c + pfVar7[1];
      fStack_24 = _DAT_0104c538 + *pfVar7;
      pfVar7 = &fStack_24;
      fVar5 = unaff_EDI;
      pvVar4 = (void *)FUN_0044f780();
      FUN_0044f700(pvVar4,pfVar7,fVar5,puVar11);
      if (iVar3 < 0) {
        bVar2 = 0;
      }
      else if (0xff < iVar3) {
        bVar2 = 0xff;
      }
      unaff_ESI = (float)CONCAT22((short)(((uint)bVar2 << 0x18) >> 0x10),0xff00);
      pfVar8 = (float *)(**(code **)(*param_1 + 0x34))(&fStack_18);
      pfVar7 = &fStack_28;
      pfVar9 = &fStack_18;
      fStack_1c = fStack_1c + pfVar8[2];
      fStack_18 = fStack_24 + *pfVar8 + _DAT_0104c538;
      fStack_14 = fStack_20 + pfVar8[1] + _DAT_0104c53c;
      fStack_10 = fStack_1c + _DAT_0104c540;
      fVar5 = fStack_2c * 0.5;
      pvVar4 = (void *)FUN_0044f780();
      FUN_0044f700(pvVar4,pfVar9,fVar5,pfVar7);
    }
    piVar12 = (int *)param_1[0x79];
    if (piVar12 != (int *)0x0) {
      fStack_2c = (float)param_1[0x33];
      pfVar7 = (float *)(**(code **)(*param_1 + 0x34))(auStack_c);
      pfVar9 = (float *)(**(code **)(*piVar12 + 0x34))(&fStack_1c);
      fStack_2c = *pfVar9 - *pfVar7;
      fStack_28 = pfVar9[1] - pfVar7[1];
      fStack_24 = pfVar9[2] - pfVar7[2];
      FUN_00412e20(&fStack_2c);
      fStack_2c = fStack_2c * unaff_ESI;
      fStack_28 = fStack_28 * unaff_ESI;
      fStack_24 = fStack_24 * unaff_ESI;
      pfVar7 = (float *)(**(code **)(*param_1 + 0x34))(&fStack_14);
      fStack_1c = _DAT_0104c540 + pfVar7[2];
      puVar11 = (undefined4 *)&stack0xffffffcc;
      fStack_20 = _DAT_0104c53c + pfVar7[1];
      fStack_24 = _DAT_0104c538 + *pfVar7;
      pfVar7 = &fStack_24;
      pvVar4 = (void *)FUN_0044f780();
      FUN_0044f700(pvVar4,pfVar7,unaff_EDI,puVar11);
      pfVar8 = (float *)(**(code **)(*param_1 + 0x34))(&fStack_18);
      pfVar7 = &fStack_28;
      pfVar9 = &fStack_18;
      fStack_1c = fStack_1c + pfVar8[2];
      fStack_18 = fStack_24 + *pfVar8 + _DAT_0104c538;
      fStack_14 = fStack_20 + pfVar8[1] + _DAT_0104c53c;
      fStack_10 = fStack_1c + _DAT_0104c540;
      fVar5 = fStack_2c * 0.5;
      pvVar4 = (void *)FUN_0044f780();
      FUN_0044f700(pvVar4,pfVar9,fVar5,pfVar7);
    }
  }
  FUN_0053d3a0();
  return;
}


//// FUNCTION FUN_00529ae0 @ 00529ae0 ////

undefined4 __fastcall FUN_00529ae0(int *param_1)

{
  char cVar1;
  float *pfVar2;
  int *piStack_4;
  
  if ((char)param_1[0xb8] < '\0') {
    piStack_4 = param_1;
    cVar1 = (**(code **)(*param_1 + 0xc4))();
    if (cVar1 == '\0') {
      pfVar2 = (float *)(**(code **)(*param_1 + 0xf0))(&piStack_4);
      if (1.0 <= *pfVar2) {
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00529b30 @ 00529b30 ////

void __fastcall FUN_00529b30(int *param_1)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  float fVar6;
  float10 fVar7;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_48;
  int local_44;
  float local_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 local_30 [9];
  float local_c;
  int local_8;
  float local_4;
  
  fVar6 = (float)param_1[0x40];
  local_44 = param_1[0x41];
  local_40 = (float)param_1[0x42];
  bVar1 = false;
  if ((*(byte *)(param_1 + 0xe7) & 1) == 0) {
    bVar1 = true;
    if ((void *)param_1[0x47] != (void *)0x0) {
      uStack_54 = (float)((uint)uStack_54 & 0xffffff);
      FUN_009833d0((void *)param_1[0x47],local_30,(byte *)0xd22420,(int)&uStack_54 + 3);
      if (uStack_54._3_1_ != '\0') {
        local_44 = local_8;
        local_40 = local_4;
        fVar6 = local_c;
      }
    }
  }
  else {
    fVar2 = (float)param_1[0x85];
    if ((*(byte *)(param_1 + 0xb8) & 8) != 0) {
      fVar7 = FUN_00990e30(0.0,6.2831855);
      fVar7 = FUN_004012c0((float)fVar7);
      fVar2 = (float)fVar7;
      local_50 = fVar2;
    }
    fVar7 = (float10)(**(code **)(*param_1 + 0x140))(fVar2);
    fVar7 = FUN_004012c0((float)fVar7);
    uStack_54 = (float)fVar7;
    iVar4 = *param_1;
    uVar3 = (**(code **)(iVar4 + 0x34))(&local_40,&uStack_54);
    (**(code **)(iVar4 + 0x28))(uVar3);
  }
  (**(code **)(*param_1 + 0x128))(1);
  FUN_005e1de0(param_1);
  if (bVar1) {
    uStack_3c = uStack_48;
    iStack_38 = local_44;
    local_40 = fVar6;
    uVar3 = FUN_009a1b30(&DAT_0105c2e8,&local_40,(float *)&uStack_54);
    if ((char)uVar3 != '\0') {
      FUN_00554d30(&uStack_54);
    }
  }
  iVar4 = FUN_0097e350((void *)param_1[0x47],0);
  if (iVar4 == 0) {
    pbVar5 = FUN_009de1d0((char *)param_1[0xdf],1);
    (**(code **)(*(int *)param_1[0x47] + 0x18))(pbVar5);
    if (pbVar5 != (byte *)0x0) {
      FUN_009de3b0(pbVar5);
    }
    *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) | 2;
  }
  return;
}


//// FUNCTION FUN_00529d80 @ 00529d80 ////

void __thiscall FUN_00529d80(void *this,float *param_1)

{
  int *this_00;
  float10 extraout_ST0;
  ulonglong uVar1;
  float fVar2;
  undefined4 auStack_3c [9];
  float fStack_18;
  char acStack_8 [8];
  
  this_00 = *(int **)((int)this + 0x11c);
  if ((this_00 != (int *)0x0) && (DAT_00f890c0 != 0)) {
    (**(code **)(*this_00 + 0x20))(param_1,*(undefined4 *)((int)this + 0xc4),0x3f800000);
    acStack_8[0] = '\0';
    FUN_009833d0(this_00,auStack_3c,(byte *)"_sp_pavement_0",(int)acStack_8);
    if (acStack_8[0] != '\0') {
      fVar2 = fStack_18;
      if (fStack_18 <= *(float *)(DAT_00f890c0 + 0x44c)) {
        fVar2 = *(float *)(DAT_00f890c0 + 0x44c);
      }
      if (*(float *)(DAT_00f890c0 + 0x454) <= fVar2) {
        fVar2 = *(float *)(DAT_00f890c0 + 0x454);
      }
      uVar1 = FUN_00acd42c();
      *param_1 = (((float)((-0x80 - (int)uVar1) * 2) + *param_1) - fVar2) + 1.0;
      uVar1 = FUN_00acd42c();
      param_1[1] = (float)((((float10)((-0x80 - (int)uVar1) * 2) + (float10)param_1[1]) -
                           extraout_ST0) + (float10)1.0);
      (**(code **)(*this_00 + 0x20))(param_1,*(undefined4 *)((int)this + 0xc4),0x3f800000);
    }
  }
  return;
}


//// FUNCTION FUN_00529ef0 @ 00529ef0 ////

undefined4 __fastcall FUN_00529ef0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x304);
}


//// FUNCTION FUN_00529f00 @ 00529f00 ////

undefined4 __cdecl FUN_00529f00(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  
  piVar1 = param_1;
  pfVar2 = (float *)(**(code **)(*param_1 + 0xf0))(&param_1);
  if (0.95 <= *pfVar2) {
    pfVar2 = (float *)(**(code **)(*piVar1 + 0xb8))(&stack0xfffffff8);
    if (0.5 <= *pfVar2) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION FUN_00529f90 @ 00529f90 ////

undefined4 __fastcall FUN_00529f90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  return CONCAT31((int3)(iVar1 >> 10),iVar1 >> 2 == 0);
}


//// FUNCTION FUN_00529fc0 @ 00529fc0 ////

undefined4 __cdecl FUN_00529fc0(undefined4 *param_1,undefined4 *param_2)

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
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0);
}


//// FUNCTION FUN_0052a140 @ 0052a140 ////

void __thiscall FUN_0052a140(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d22448;
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


//// FUNCTION FUN_0052a1a0 @ 0052a1a0 ////

void __fastcall FUN_0052a1a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d22448;
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


//// FUNCTION FUN_0052a250 @ 0052a250 ////

void __cdecl FUN_0052a250(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0052a400 @ 0052a400 ////

int __thiscall FUN_0052a400(void *this,int param_1)

{
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}


//// FUNCTION FUN_0052a570 @ 0052a570 ////

void __cdecl FUN_0052a570(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}


//// FUNCTION FUN_0052a5a0 @ 0052a5a0 ////

void __cdecl FUN_0052a5a0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_0052a610 @ 0052a610 ////

void __cdecl
FUN_0052a610(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  while ((param_2 != param_4 || (param_3 != param_5))) {
    param_5 = param_5 - 1;
    uVar4 = param_5;
    if (*(uint *)(param_4 + 8) <= param_5) {
      uVar4 = param_5 - *(uint *)(param_4 + 8);
    }
    param_7 = param_7 - 1;
    uVar3 = param_7;
    if (*(uint *)(param_6 + 8) <= param_7) {
      uVar3 = param_7 - *(uint *)(param_6 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(param_4 + 4) + uVar4 * 4);
    puVar2 = *(undefined4 **)(*(int *)(param_6 + 4) + uVar3 * 4);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
  }
  param_1[1] = param_7;
  *param_1 = param_6;
  return;
}


//// FUNCTION FUN_0052a680 @ 0052a680 ////

void __cdecl
FUN_0052a680(int *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  for (; (param_2 != param_4 || (param_3 != param_5)); param_3 = param_3 + 1) {
    uVar4 = param_3;
    if (*(uint *)(param_2 + 8) <= param_3) {
      uVar4 = param_3 - *(uint *)(param_2 + 8);
    }
    uVar3 = param_7;
    if (*(uint *)(param_6 + 8) <= param_7) {
      uVar3 = param_7 - *(uint *)(param_6 + 8);
    }
    puVar1 = *(undefined4 **)(*(int *)(param_2 + 4) + uVar4 * 4);
    puVar2 = *(undefined4 **)(*(int *)(param_6 + 4) + uVar3 * 4);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    param_7 = param_7 + 1;
    puVar2[3] = puVar1[3];
  }
  param_1[1] = param_7;
  *param_1 = param_6;
  return;
}


//// FUNCTION FUN_0052a760 @ 0052a760 ////

undefined4 * __thiscall FUN_0052a760(void *this,byte param_1)

{
  FUN_0052a1a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0052a780 @ 0052a780 ////

void __fastcall FUN_0052a780(int *param_1)

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
  puStack_8 = &LAB_00cae1d8;
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


//// FUNCTION FUN_0052a850 @ 0052a850 ////

void __fastcall FUN_0052a850(int param_1)

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
  puStack_8 = &LAB_00cae250;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x92;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("SourcePath");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x2c4));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x93;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x214));
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
  uVar3 = FUN_0098b490("PFixedAssetCosts");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x214));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x94;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("Knackered");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x26c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x95;
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
  uVar3 = FUN_0098b490("NearlyKnackered");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x26d),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x96;
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
  uVar3 = FUN_0098b490("StateOfRepair");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x24c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x97;
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
  uVar3 = FUN_0098b490("(int&)(State)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x240),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x98;
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
  uVar3 = FUN_0098b490("BuildWorkDone");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x340),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x99;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x128));
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
  uVar3 = FUN_0098b490("PPossessor");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x128));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x9a;
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
  uVar3 = FUN_0098b490("BuildWorkNeeded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x264),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x9b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
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
  uVar3 = FUN_0098b490("DecayBegin");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x254),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x9c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x170));
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
  uVar3 = FUN_0098b490("PFloorPlan");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x170));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\TMFixedAsset.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x9d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
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
  uVar3 = FUN_0098b490("IsAlwaysAvailable");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x379),1);
  }
  FUN_00539430(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0052b300 @ 0052b300 ////

void FUN_0052b300(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104c4d8; puVar1 != &DAT_0104c4e4; puVar1 = (undefined4 *)puVar1[1]) {
    (**(code **)(*(int *)puVar1[2] + 0x170))();
  }
  return;
}


//// FUNCTION FUN_0052b330 @ 0052b330 ////

/* WARNING: Removing unreachable block (ram,0x0052b3b9) */

void __fastcall FUN_0052b330(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *_Dest;
  bool bVar4;
  byte local_14 [20];
  
  _Dest = local_14;
  local_14[0] = 0;
  _strncpy((char *)_Dest,"",0);
  local_14[0] = 0;
  pbVar2 = (byte *)param_1[0xcf];
  do {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *_Dest;
    if (bVar1 != *_Dest) {
LAB_0052b3a6:
      iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_0052b3ab;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < _Dest[1];
    if (bVar1 != _Dest[1]) goto LAB_0052b3a6;
    pbVar2 = pbVar2 + 2;
    _Dest = _Dest + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0052b3ab:
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
    (**(code **)(*param_1 + 0x14c))(1);
    if (param_1[0xc1] != 0) {
      FUN_008b20c0(param_1[0xc1]);
    }
  }
  return;
}


//// FUNCTION FUN_0052b400 @ 0052b400 ////

void FUN_0052b400(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104c4d8; puVar1 != &DAT_0104c4e4; puVar1 = (undefined4 *)puVar1[1]) {
    (**(code **)(*(int *)puVar1[2] + 0x168))();
  }
  return;
}


//// FUNCTION FUN_0052b430 @ 0052b430 ////

void __fastcall FUN_0052b430(int param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  void *this;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  float10 fVar11;
  float local_130;
  int local_12c;
  float local_128;
  void *local_124;
  char *local_120;
  undefined4 local_11c;
  uint local_118;
  char local_114 [20];
  float local_100;
  float local_fc;
  char *local_f8;
  undefined4 local_f4;
  uint local_f0;
  char local_ec [20];
  char *local_d8;
  undefined4 local_d4;
  uint local_d0;
  char local_cc [20];
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  byte *local_ac;
  undefined4 local_a8;
  uint local_a4;
  byte local_a0 [20];
  byte *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae2af;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_12c = param_1;
  if (*(int *)(param_1 + 0x408) == 0) {
    ExceptionList = &local_c;
    puVar5 = FUN_0055c3c0((undefined4 *)(param_1 + 0x33c));
    *(undefined4 **)(param_1 + 0x408) = puVar5;
  }
  this = *(void **)(param_1 + 0x408);
  local_120 = local_114;
  local_114[0] = '\0';
  local_11c = 0;
  local_118 = 0x20;
  local_124 = this;
  local_120 = _malloc(0x20);
  _strncpy(local_120,"extra_info/ornaments",0x14);
  local_11c = 0x14;
  local_120[0x14] = '\0';
  local_4 = 0;
  FUN_00558a50(this,&local_120,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_120);
  }
  cVar4 = FUN_00558bb0(this,6);
  if (cVar4 != '\0') {
    FUN_00558bb0(this,0);
    do {
      local_120 = local_114;
      local_114[0] = '\0';
      local_11c = 0;
      local_118 = 0x14;
      _strncpy(local_120,"type",4);
      local_11c = 4;
      local_120[4] = '\0';
      local_4 = 1;
      FUN_005584e0(this,local_6c,&local_120);
      if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
        _free(local_120);
      }
      local_f8 = local_ec;
      local_ec[0] = '\0';
      local_f4 = 0;
      local_f0 = 0x14;
      _strncpy(local_f8,"offset",6);
      local_f4 = 6;
      local_f8[6] = '\0';
      local_4._0_1_ = 4;
      puVar5 = FUN_005584e0(this,local_4c,&local_f8);
      local_4._0_1_ = 5;
      FUN_00567da0(&local_100,puVar5,'\0');
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      if (0x14 < local_f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_f8);
      }
      local_d8 = local_cc;
      local_cc[0] = '\0';
      local_d4 = 0;
      local_d0 = 0x14;
      _strncpy(local_d8,"angle",5);
      local_d4 = 5;
      local_d8[5] = '\0';
      local_4._0_1_ = 6;
      FUN_005584e0(this,local_8c,&local_d8);
      local_4 = CONCAT31(local_4._1_3_,8);
      if (0x14 < local_d0) {
                    /* WARNING: Subroutine does not return */
        _free(local_d8);
      }
      local_ac = local_a0;
      local_130 = 0.0;
      local_a0[0] = 0;
      local_a8 = 0;
      local_a4 = 0x14;
      _strncpy((char *)local_ac,"RANDOM",6);
      local_a8 = 6;
      local_ac[6] = 0;
      pbVar8 = local_8c[0];
      pbVar9 = local_ac;
      do {
        bVar3 = *pbVar8;
        bVar10 = bVar3 < *pbVar9;
        if (bVar3 != *pbVar9) {
LAB_0052b714:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0052b719;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar8[1];
        bVar10 = bVar3 < pbVar9[1];
        if (bVar3 != pbVar9[1]) goto LAB_0052b714;
        pbVar8 = pbVar8 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar3 != 0);
      iVar6 = 0;
LAB_0052b719:
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      if (iVar6 == 0) {
        fVar11 = FUN_00990e30(0.0,6.2831855);
      }
      else {
        fVar11 = FUN_00567d60(local_8c);
      }
      local_128 = (float)fVar11;
      fVar11 = FUN_004012c0(local_128);
      local_130 = (float)fVar11;
      puVar5 = FUN_0040d6b0(local_2c,"ornament/",local_6c);
      local_4._0_1_ = 9;
      piVar7 = FUN_0048bfd0(puVar5,'\0');
      iVar6 = local_12c;
      local_4 = CONCAT31(local_4._1_3_,8);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      local_b0 = *(undefined4 *)(local_12c + 0x108);
      local_b4 = local_fc + *(float *)(local_12c + 0x104);
      local_b8 = local_100 + *(float *)(local_12c + 0x100);
      (**(code **)(*piVar7 + 0x28))(&local_b8,&local_130);
      FUN_0048ab00(piVar7);
      piVar1 = piVar7 + 0x104;
      piVar2 = (int *)(iVar6 + 0x26c);
      piVar7[0x105] = (int)piVar2;
      *piVar1 = *piVar2;
      *(int **)(*piVar2 + 4) = piVar1;
      *piVar2 = (int)piVar1;
      if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      local_4 = 0xffffffff;
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c[0]);
      }
      cVar4 = FUN_00558bb0(local_124,2);
      this = local_124;
    } while (cVar4 != '\0');
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0052b8a0 @ 0052b8a0 ////

undefined4 __fastcall FUN_0052b8a0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  float fVar5;
  void *this;
  longlong *plVar6;
  uint *puVar7;
  undefined1 auStack_28 [4];
  uint auStack_24 [2];
  longlong alStack_1c [2];
  undefined1 local_c [12];
  
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x34))(local_c);
  FUN_009840b0(&stack0xffffffd0,puVar2);
  uVar3 = FUN_004512c0((void *)(DAT_00f890c0 + 0x44c),(float *)&stack0xffffffd0);
  if ((((char)uVar3 != '\0') && ((int *)param_1[0xe8] != (int *)0x0)) &&
     (uVar3 = FUN_0046d400((int *)param_1[0xe8],0x41), (char)uVar3 != '\0')) {
    if (((int *)param_1[0xe9] != (int *)0x0) &&
       (uVar3 = FUN_0046d400((int *)param_1[0xe9],0xc1), (char)uVar3 == '\0')) {
      return 0;
    }
    piVar1 = (int *)param_1[0xa8];
    if ((((char)piVar1[0x18] == '\0') && (*(char *)((int)param_1 + 0x3f1) == '\0')) &&
       (DAT_0104d970 == '\0')) {
      piVar4 = (int *)GetPlayerStudio();
      fVar5 = (float)(**(code **)(*piVar1 + 0x18))(auStack_28,0);
      puVar7 = auStack_24;
      plVar6 = alStack_1c;
      this = (void *)(**(code **)(*piVar4 + 0x24))();
      plVar6 = FUN_00442e50(this,plVar6,puVar7);
      uVar3 = FUN_0048a980(plVar6,fVar5);
      if ((char)uVar3 == '\0') {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0052b990 @ 0052b990 ////

ulonglong * __fastcall FUN_0052b990(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 local_c [8];
  ulonglong *puStack_4;
  
  piVar1 = (int *)param_1[0xa8];
  puVar4 = local_c;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xb8))(puVar4);
  (**(code **)(*piVar1 + 0x18))(local_c,puVar4,*puVar2);
  uVar3 = FUN_00acd42c();
  *puStack_4 = uVar3;
  FUN_00471b10((longlong *)puStack_4);
  return puStack_4;
}


//// FUNCTION FUN_0052ba00 @ 0052ba00 ////

void __fastcall FUN_0052ba00(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 *local_34;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae2e1;
  local_c = ExceptionList;
  local_2c = local_20;
  bVar5 = false;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_2c,"task_repairman",0xe);
  local_28 = 0xe;
  local_2c[0xe] = 0;
  local_4 = 0;
  FUN_008b1ee0(*(void **)(param_1 + 0x304),&local_2c,0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_34 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      iVar2 = FUN_005998e0(local_34[2]);
      if (iVar2 == 0) {
LAB_0052bb52:
        bVar7 = false;
      }
      else {
        local_2c = local_20;
        local_20[0] = 0;
        local_28 = 0;
        local_24 = 0x14;
        _strncpy((char *)local_2c,"task_repairman",0xe);
        local_28 = 0xe;
        local_2c[0xe] = 0;
        bVar5 = true;
        local_4 = 1;
        iVar3 = FUN_00401c30(iVar2);
        pbVar4 = *(byte **)(iVar3 + 100);
        pbVar6 = local_2c;
        do {
          bVar1 = *pbVar4;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0052bb44:
            iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0052bb49;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0052bb44;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_0052bb49:
        bVar7 = true;
        if (iVar3 != 0) goto LAB_0052bb52;
      }
      local_4 = 0xffffffff;
      if ((bVar5) && (bVar5 = false, 0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if ((bVar7) && (iVar3 = FUN_008bc6c0(*(int *)(iVar2 + 0x274)), iVar3 == param_1)) {
        FUN_00401780(iVar2);
      }
      local_34 = (undefined4 *)local_34[1];
    } while (local_34 != &DAT_0104cfd4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0052bd10 @ 0052bd10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_0052bd10(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 unaff_EDI;
  float unaff_retaddr;
  float fVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  char ***pppcVar11;
  char **ppcVar12;
  undefined4 uStack_3c;
  char **local_38;
  undefined4 uStack_34;
  uint uStack_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [8];
  void *pvStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae320;
  local_c = ExceptionList;
  uStack_3c._3_1_ = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return uStack_3c._3_1_;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"Lot",3);
  local_28 = 3;
  local_2c[3] = '\0';
  ppcVar12 = &local_2c;
  pppcVar11 = &local_38;
  local_4 = 0;
  pvVar2 = (void *)FUN_00577370(iVar1);
  FUN_00441750(pvVar2,pppcVar11,ppcVar12);
  local_4 = 0xffffffff;
  if (local_24 < 0x15) {
    pfVar3 = (float *)(**(code **)(*(int *)this + 0xb8))();
    fVar7 = unaff_retaddr + *pfVar3;
    if (0.0 <= fVar7) {
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
    }
    else {
      fVar7 = 0.0;
    }
    iVar1 = *(int *)this;
    local_38 = (char **)&stack0xffffffb0;
    FUN_00407070(&stack0xffffffb0,fVar7);
    (**(code **)(iVar1 + 0xbc))();
    pfVar3 = (float *)(**(code **)(*(int *)this + 0xb8))(&local_4);
    if (*pfVar3 == 1.0) {
      iVar1 = GetPlayerStudio();
      if (iVar1 != 0) {
        iVar10 = 0;
        pTVar9 = &TM::CStudioPlayer::RTTI_Type_Descriptor;
        pTVar8 = &TM::CStudio::RTTI_Type_Descriptor;
        iVar1 = 0;
        piVar4 = (int *)GetPlayerStudio();
        pvVar2 = (void *)FUN_00ace790(piVar4,iVar1,pTVar8,pTVar9,iVar10);
        if (pvVar2 != (void *)0x0) {
          local_38 = &local_2c;
          local_2c = (char *)((uint)local_2c & 0xffffff00);
          uStack_34 = 0;
          uStack_30 = 0x20;
          local_38 = _malloc(0x20);
          _strncpy((char *)local_38,"PIP_BUILDING_REPAIRED_INCREASED",0x1f);
          uStack_34 = 0x1f;
          *(char *)((int)local_38 + 0x1f) = '\0';
          uStack_10 = 1;
          FUN_005195b0(pvVar2,7,&local_38,1);
          uStack_10 = 0xffffffff;
          if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
            _free(local_38);
          }
        }
      }
      FUN_0052ba00((int)this);
      uVar6 = 1;
    }
    else {
      uVar6 = (undefined1)((uint)unaff_EDI >> 0x18);
    }
    puVar5 = (undefined4 *)FUN_0043b600(&DAT_00e4fa4c,(float *)&uStack_3c,(float *)&DAT_0104c534);
    *(undefined4 *)((int)this + 0x2cc) = *puVar5;
    ExceptionList = pvStack_18;
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0052bf80 @ 0052bf80 ////

void __thiscall FUN_0052bf80(void *this,undefined4 *param_1,char param_2)

{
  uint *puVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  void *unaff_EBP;
  void *unaff_EDI;
  float10 fVar6;
  void **ppvVar7;
  char **ppcVar8;
  char *pcStack_e4;
  void *pvStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  int *piStack_cc;
  undefined4 *puStack_c4;
  uint *local_c0;
  int **local_bc;
  uint local_b8;
  uint local_b4;
  int *local_b0 [2];
  undefined1 *puStack_a8;
  int *piStack_a0;
  void *pvStack_9c;
  void *local_98;
  uint uStack_94;
  uint local_90;
  undefined1 *local_78;
  undefined4 local_74;
  uint local_70;
  undefined1 local_6c [16];
  float afStack_5c [3];
  void *pvStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined4 uStack_30;
  void *pvStack_2c;
  uint uStack_24;
  undefined1 uStack_18;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae492;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004015d0((undefined4 *)((int)this + 0x33c),(char *)*param_1,param_1[1]);
  if (*(int *)((int)this + 0x340) == 0) {
    ExceptionList = local_c;
    return;
  }
  if (*(int *)((int)this + 0x408) == 0) {
    puVar2 = FUN_0055c3c0((undefined4 *)((int)this + 0x33c));
    *(undefined4 **)((int)this + 0x408) = puVar2;
  }
  this_00 = *(void **)((int)this + 0x408);
  local_bc = local_b0;
  local_b0[0] = (int *)((uint)local_b0[0] & 0xffffff00);
  local_b8 = 0;
  local_b4 = 0x14;
  _strncpy((char *)local_bc,"",0);
  local_b8 = 0;
  *(char *)local_bc = '\0';
  local_4 = 0;
  FUN_00558a50(this_00,&local_bc,(undefined4 *)0x1);
  if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_bc);
  }
  local_bc = local_b0;
  local_b0[0] = (int *)((uint)local_b0[0] & 0xffffff00);
  local_b8 = 0;
  local_b4 = 0x14;
  _strncpy((char *)local_bc,"mesh",4);
  local_b8 = 4;
  *(char *)(local_bc + 1) = '\0';
  local_4 = 1;
  puVar2 = FUN_005584e0(this_00,&local_98,&local_bc);
  FUN_004015d0((void *)((int)this + 0x37c),(char *)*puVar2,puVar2[1]);
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_bc);
  }
  local_bc = local_b0;
  local_b0[0] = (int *)((uint)local_b0[0] & 0xffffff00);
  local_b8 = 0;
  local_b4 = 0x14;
  _strncpy((char *)local_bc,"classiness",10);
  local_b8 = 10;
  *(char *)((int)local_bc + 10) = '\0';
  local_4 = 2;
  fVar6 = FUN_00558610(this_00,&local_bc,1.0);
  if ((float10)0.0 <= fVar6) {
    if ((float10)1.0 < fVar6) {
      fVar6 = (float10)1.0;
    }
  }
  else {
    fVar6 = (float10)0.0;
  }
  local_c0 = (uint *)(float)fVar6;
  *(uint **)((int)this + 0x2c0) = local_c0;
  if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_bc);
  }
  local_bc = local_b0;
  local_b0[0] = (int *)((uint)local_b0[0] & 0xffffff00);
  local_b8 = 0;
  local_b4 = 0x14;
  _strncpy((char *)local_bc,"initialrotation",0xf);
  local_b8 = 0xf;
  *(char *)((int)local_bc + 0xf) = '\0';
  local_4 = 3;
  fVar6 = FUN_00558610(this_00,&local_bc,0.0);
  local_c0 = (uint *)(float)(fVar6 * (float10)0.017453292);
  fVar6 = FUN_004012c0((float)local_c0);
  local_c0 = (uint *)(float)fVar6;
  *(uint **)((int)this + 0x214) = local_c0;
  local_4 = 0xffffffff;
  if (0x14 < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_bc);
  }
  puVar2 = FUN_00433eb0();
  *(undefined4 **)((int)this + 0x11c) = puVar2;
  puVar2[0x27] = puVar2[0x27] | 0x80;
  puVar1 = (uint *)(*(int *)((int)this + 0x11c) + 0x9c);
  *puVar1 = *puVar1 | 0x100;
  local_78 = local_6c;
  local_6c[0] = 0;
  local_74 = 0;
  local_70 = 0x14;
  local_4 = 4;
  if ((*(int *)((int)this + 0x380) == 0) || (param_2 != '\0')) {
    (**(code **)(**(int **)((int)this + 0x11c) + 0x18))();
  }
  else {
    local_c0 = (uint *)FUN_009de1d0(*(char **)((int)this + 0x37c),1);
    (**(code **)(**(int **)((int)this + 0x11c) + 0x18))();
    if (puStack_c4 != (undefined4 *)0x0) {
      FUN_009de3b0(puStack_c4);
    }
    puVar1 = (uint *)(*(int *)((int)this + 0x11c) + 0x9c);
    *puVar1 = *puVar1 | 2;
  }
  iVar3 = FUN_004302c0((void *)((int)this + 0x33c),&DAT_00d1e524,0xffffffff,1);
  if (iVar3 == -1) {
    FUN_004015d0((void *)((int)this + 0x35c),*(char **)((int)this + 0x33c),
                 *(uint *)((int)this + 0x340));
  }
  else {
    puVar2 = FUN_00430770((void *)((int)this + 0x33c),&pvStack_9c,iVar3 + 1,0xffffffff);
    FUN_004015d0((void *)((int)this + 0x35c),(char *)*puVar2,puVar2[1]);
    if (0x14 < uStack_94) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_9c);
    }
  }
  local_c0 = &local_b4;
  local_b4 = local_b4 & 0xffffff00;
  local_bc = (int **)0x0;
  local_b8 = 0x14;
  _strncpy((char *)local_c0,"fertility",9);
  local_bc = (int **)0x9;
  *(char *)((int)local_c0 + 9) = '\0';
  puStack_8._0_1_ = 5;
  uVar4 = FUN_00558a50(this_00,&local_c0,(undefined4 *)0x0);
  if (0x14 < local_b8) {
                    /* WARNING: Subroutine does not return */
    _free(local_c0);
  }
  if ((char)uVar4 != '\0') {
    local_c0 = &local_b4;
    local_b4 = local_b4 & 0xffffff00;
    local_bc = (int **)0x0;
    local_b8 = 0x14;
    _strncpy((char *)local_c0,"blanket",7);
    local_bc = (int **)0x7;
    *(char *)((int)local_c0 + 7) = '\0';
    puStack_8._0_1_ = 6;
    fVar6 = FUN_00558610(this_00,&local_c0,0.0);
    *(float *)((int)this + 0x2a4) = (float)fVar6;
    if (0x14 < local_b8) {
                    /* WARNING: Subroutine does not return */
      _free(local_c0);
    }
  }
  local_c0 = &local_b4;
  local_b4 = local_b4 & 0xffffff00;
  local_bc = (int **)0x0;
  local_b8 = 0x14;
  _strncpy((char *)local_c0,"description",0xb);
  local_bc = (int **)0xb;
  *(char *)((int)local_c0 + 0xb) = '\0';
  puStack_8._0_1_ = 7;
  FUN_00558a50(this_00,&local_c0,(undefined4 *)0x1);
  if (0x14 < local_b8) {
                    /* WARNING: Subroutine does not return */
    _free(local_c0);
  }
  local_c0 = &local_b4;
  local_b4 = local_b4 & 0xffffff00;
  local_bc = (int **)0x0;
  local_b8 = 0x14;
  _strncpy((char *)local_c0,"name",4);
  local_bc = (int **)0x4;
  *(char *)(local_c0 + 1) = '\0';
  puStack_8._0_1_ = 8;
  FUN_005584e0(this_00,&uStack_30,&local_c0);
  puStack_8._0_1_ = 10;
  if (0x14 < local_b8) {
                    /* WARNING: Subroutine does not return */
    _free(local_c0);
  }
  if (pvStack_2c != (void *)0x0) {
    puVar2 = FUN_009b5030(&pvStack_9c,&uStack_30);
    FUN_004036d0((void *)((int)this + 0x31c),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < uStack_94) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_9c);
    }
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"attractiveness",0xe);
  pvStack_e0 = (void *)0xe;
  pcStack_e4[0xe] = '\0';
  puStack_8._0_1_ = 0xb;
  fVar6 = FUN_00558610(this_00,&pcStack_e4,0.0);
  *(float *)((int)this + 700) = (float)fVar6;
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"ownable",7);
  pvStack_e0 = (void *)0x7;
  pcStack_e4[7] = '\0';
  puStack_8._0_1_ = 0xc;
  iVar3 = FUN_00558750(this_00,&pcStack_e4,0);
  *(uint *)((int)this + 0x2e0) =
       *(uint *)((int)this + 0x2e0) ^
       ((uint)(iVar3 != 0) << 10 ^ *(uint *)((int)this + 0x2e0)) & 0x400;
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"randomangle",0xb);
  pvStack_e0 = (void *)0xb;
  pcStack_e4[0xb] = '\0';
  puStack_8._0_1_ = 0xd;
  iVar3 = FUN_00558750(this_00,&pcStack_e4,0);
  *(uint *)((int)this + 0x2e0) =
       *(uint *)((int)this + 0x2e0) ^ ((uint)(iVar3 != 0) << 3 ^ *(uint *)((int)this + 0x2e0)) & 8;
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"capacity",8);
  pvStack_e0 = (void *)0x8;
  pcStack_e4[8] = '\0';
  puStack_8._0_1_ = 0xe;
  fVar6 = FUN_00558610(this_00,&pcStack_e4,0.0);
  *(float *)((int)this + 0x318) = (float)fVar6;
  puStack_8._0_1_ = 10;
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  if (*(int *)((int)this + 0x2a0) == 0) {
    puStack_c4 = FUN_00445e10(this);
    (**(code **)(*(int *)((int)this + 0x28c) + 4))();
    *(undefined4 **)((int)this + 0x2a0) = puStack_c4;
    (*(code *)**(undefined4 **)((int)this + 0x28c))();
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"maintenance",0xb);
  pvStack_e0 = (void *)0xb;
  pcStack_e4[0xb] = '\0';
  puStack_8._0_1_ = 0xf;
  uVar4 = FUN_00558a50(this_00,&pcStack_e4,(undefined4 *)0x0);
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  if ((char)uVar4 != '\0') {
    pcStack_e4 = (char *)&uStack_d8;
    uStack_d8 = uStack_d8 & 0xffffff00;
    pvStack_e0 = (void *)0x0;
    uStack_dc = 0x14;
    _strncpy(pcStack_e4,"decaytime",9);
    pvStack_e0 = (void *)0x9;
    pcStack_e4[9] = '\0';
    puStack_8._0_1_ = 0x10;
    fVar6 = FUN_00558610(this_00,&pcStack_e4,0.0);
    FUN_0043b520(&piStack_a0,(float)fVar6);
    (**(code **)(*(int *)this + 0xc0))();
    if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_e4);
    }
    pcStack_e4 = (char *)&uStack_d8;
    uStack_d8 = uStack_d8 & 0xffffff00;
    pvStack_e0 = (void *)0x0;
    uStack_dc = 0x14;
    _strncpy(pcStack_e4,"repairwork",10);
    pvStack_e0 = (void *)0xa;
    pcStack_e4[10] = '\0';
    puStack_8._0_1_ = 0x11;
    fVar6 = FUN_00558610(this_00,&pcStack_e4,0.0);
    *(float *)((int)this + 0x2d0) = (float)fVar6;
    if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_e4);
    }
    pcStack_e4 = (char *)&uStack_d8;
    uStack_d8 = uStack_d8 & 0xffffff00;
    pvStack_e0 = (void *)0x0;
    uStack_dc = 0x14;
    _strncpy(pcStack_e4,"buildingwork",0xc);
    pvStack_e0 = (void *)0xc;
    pcStack_e4[0xc] = '\0';
    puStack_8._0_1_ = 0x12;
    fVar6 = FUN_00558610(this_00,&pcStack_e4,0.0);
    *(float *)((int)this + 0x2d4) = (float)fVar6;
    if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_e4);
    }
    pcStack_e4 = (char *)&uStack_d8;
    uStack_d8 = uStack_d8 & 0xffffff00;
    pvStack_e0 = (void *)0x0;
    uStack_dc = 0x14;
    _strncpy(pcStack_e4,"rebuildingwork",0xe);
    pvStack_e0 = (void *)0xe;
    pcStack_e4[0xe] = '\0';
    puStack_8._0_1_ = 0x13;
    fVar6 = FUN_00558610(this_00,&pcStack_e4,0.0);
    *(float *)((int)this + 0x2d8) = (float)fVar6;
    if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_e4);
    }
    *(undefined4 *)((int)this + 0x2dc) = *(undefined4 *)((int)this + 0x2d4);
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"camera",6);
  pvStack_e0 = (void *)0x6;
  pcStack_e4[6] = '\0';
  puStack_8._0_1_ = 0x14;
  uVar4 = FUN_00558a50(this_00,&pcStack_e4,(undefined4 *)0x0);
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  if ((char)uVar4 != '\0') {
    pcStack_e4 = (char *)&uStack_d8;
    uStack_d8 = uStack_d8 & 0xffffff00;
    pvStack_e0 = (void *)0x0;
    uStack_dc = 0x14;
    _strncpy(pcStack_e4,"primary",7);
    pvStack_e0 = (void *)0x7;
    pcStack_e4[7] = '\0';
    puStack_8._0_1_ = 0x15;
    uVar4 = FUN_00558a50(this_00,&pcStack_e4,(undefined4 *)0x0);
    if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_e4);
    }
    if ((char)uVar4 != '\0') {
      pcStack_e4 = (char *)&uStack_d8;
      uStack_d8 = uStack_d8 & 0xffffff00;
      pvStack_e0 = (void *)0x0;
      uStack_dc = 0x14;
      _strncpy(pcStack_e4,"viewposition",0xc);
      pvStack_e0 = (void *)0xc;
      pcStack_e4[0xc] = '\0';
      puStack_8._0_1_ = 0x16;
      FUN_005584e0(this_00,&pvStack_9c,&pcStack_e4);
      if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_e4);
      }
      pcStack_e4 = (char *)&uStack_d8;
      uStack_d8 = uStack_d8 & 0xffffff00;
      pvStack_e0 = (void *)0x0;
      uStack_dc = 0x14;
      _strncpy(pcStack_e4,"viewfocus",9);
      pvStack_e0 = (void *)0x9;
      pcStack_e4[9] = '\0';
      puStack_8._0_1_ = 0x19;
      FUN_005584e0(this_00,&pvStack_50,&pcStack_e4);
      puStack_8._0_1_ = 0x1b;
      if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_e4);
      }
      if ((local_98 != (void *)0x0) || (iStack_4c != 0)) {
        *(undefined1 *)((int)this + 0xfc) = 1;
        puVar2 = (undefined4 *)FUN_00567e30(afStack_5c,&pvStack_9c,'\0');
        *(undefined4 *)((int)this + 0xe4) = *puVar2;
        *(undefined4 *)((int)this + 0xe8) = puVar2[1];
        *(undefined4 *)((int)this + 0xec) = puVar2[2];
        puVar2 = (undefined4 *)FUN_00567e30(afStack_5c,&pvStack_50,'\0');
        *(undefined4 *)((int)this + 0xf0) = *puVar2;
        *(undefined4 *)((int)this + 0xf4) = puVar2[1];
        *(undefined4 *)((int)this + 0xf8) = puVar2[2];
      }
      if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_50);
      }
      if (0x14 < uStack_94) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_9c);
      }
    }
  }
  pcStack_e4 = (char *)&uStack_d8;
  *(undefined1 *)((int)this + 0x3f1) = 0;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"blueprint",9);
  pvStack_e0 = (void *)0x9;
  pcStack_e4[9] = '\0';
  puStack_8._0_1_ = 0x1c;
  uVar4 = FUN_00558a50(this_00,&pcStack_e4,(undefined4 *)0x0);
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  if ((char)uVar4 == '\0') goto LAB_0052cd87;
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"path",4);
  pvStack_e0 = (void *)0x4;
  pcStack_e4[4] = '\0';
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x1d);
  FUN_005584e0(this_00,&pvStack_9c,&pcStack_e4);
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"group_catering",0xe);
  ppcVar8 = &pcStack_e4;
  ppvVar7 = &pvStack_9c;
  pvStack_e0 = (void *)0xe;
  pcStack_e4[0xe] = '\0';
  uVar4 = FUN_00401ec0(ppvVar7,ppcVar8);
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  if ((char)uVar4 == '\0') {
    pcStack_e4 = (char *)&uStack_d8;
    uStack_d8 = uStack_d8 & 0xffffff00;
    pvStack_e0 = (void *)0x0;
    uStack_dc = 0x14;
    _strncpy(pcStack_e4,"group_toilets",0xd);
    ppcVar8 = &pcStack_e4;
    ppvVar7 = &pvStack_9c;
    pvStack_e0 = (void *)0xd;
    pcStack_e4[0xd] = '\0';
    uVar4 = FUN_00401ec0(ppvVar7,ppcVar8);
    if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_e4);
    }
    if ((char)uVar4 != '\0') {
      uVar5 = *(uint *)((int)this + 0x2e0) | 0x4000;
      goto LAB_0052cd05;
    }
  }
  else {
    uVar5 = *(uint *)((int)this + 0x2e0) | 0x2000;
LAB_0052cd05:
    *(uint *)((int)this + 0x2e0) = uVar5;
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"availableindebt",0xf);
  pvStack_e0 = (void *)0xf;
  pcStack_e4[0xf] = '\0';
  puStack_8._0_1_ = 0x20;
  iVar3 = FUN_00558750(this_00,&pcStack_e4,0);
  *(bool *)((int)this + 0x3f1) = iVar3 != 0;
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  if (0x14 < uStack_94) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_9c);
  }
LAB_0052cd87:
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"finance",7);
  pvStack_e0 = (void *)0x7;
  pcStack_e4[7] = '\0';
  puStack_8._0_1_ = 0x21;
  FUN_00558a50(this_00,&pcStack_e4,(undefined4 *)0x1);
  if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e4);
  }
  pcStack_e4 = (char *)&uStack_d8;
  uStack_d8 = uStack_d8 & 0xffffff00;
  pvStack_e0 = (void *)0x0;
  uStack_dc = 0x14;
  _strncpy(pcStack_e4,"annualcost",10);
  pvStack_e0 = (void *)0xa;
  pcStack_e4[10] = '\0';
  piStack_a0 = *(int **)((int)this + 0x2a0);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x22);
  FUN_00558610(this_00,&pcStack_e4,0.0);
  puStack_c4 = (undefined4 *)&stack0xffffff00;
  FUN_00acd42c();
  FUN_00471b10((longlong *)&stack0xffffff00);
  (**(code **)(*piStack_a0 + 4))();
  if (&DAT_00000014 < pcStack_e4) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  pvStack_e0 = (void *)((uint)pvStack_e0 & 0xffffff00);
  pcStack_e4 = (char *)0x14;
  _strncpy((char *)&pvStack_e0,"dailyrate",9);
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_d8._1_1_ = 0;
  piStack_cc = *(int **)((int)this + 0x2a0);
  uStack_10 = 0x23;
  FUN_00558610(this_00,(undefined4 *)&stack0xffffff14,0.0);
  puStack_a8 = &stack0xfffffef8;
  FUN_00acd42c();
  FUN_00471b10((longlong *)&stack0xfffffef8);
  (**(code **)(*piStack_cc + 0x1c))();
  if (&DAT_00000014 < &pvStack_e0) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  _strncpy(&stack0xffffff18,"purchasecost",0xc);
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_dc._0_1_ = 0;
  local_b0[0] = *(int **)((int)this + 0x2a0);
  uStack_18 = 0x24;
  FUN_00558610(this_00,(undefined4 *)&stack0xffffff0c,0.0);
  puStack_d4 = &stack0xfffffef0;
  FUN_00acd42c();
  FUN_00471b10((longlong *)&stack0xfffffef0);
  (**(code **)(*local_b0[0] + 0x14))();
  local_4 = CONCAT31(local_4._1_3_,10);
  if (uStack_d8 < 0x15) {
    puVar2 = (undefined4 *)FUN_0043b600(&DAT_00e4fa4c,(float *)&pvStack_9c,(float *)&DAT_0104c534);
    *(undefined4 *)((int)this + 0x2cc) = *puVar2;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2c);
    }
    if (local_70 < 0x15) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_78);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_e0);
}


//// FUNCTION FUN_0052d010 @ 0052d010 ////

void __fastcall FUN_0052d010(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  float *pfVar15;
  float *pfVar16;
  size_t _Count;
  float local_f4;
  float local_f0;
  float local_ec;
  char local_e8 [8];
  uint local_e0;
  ushort local_dc;
  undefined1 local_da;
  int local_c8;
  int local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  char *local_78;
  uint local_74;
  uint local_70;
  char local_6c [20];
  char *pcStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  char acStack_4c [20];
  char *pcStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  char acStack_2c [24];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cae4e2;
  local_14 = ExceptionList;
  if ((*(void **)(param_1 + 0x11c) != (void *)0x0) &&
     (ExceptionList = &local_14, iVar4 = FUN_0097e350(*(void **)(param_1 + 0x11c),0), iVar4 != 0)) {
    local_f4 = 0.0;
    iVar4 = FUN_0097e350(*(void **)(param_1 + 0x11c),0);
    iVar4 = FUN_009da0d0(iVar4);
    iVar12 = 0;
    bVar3 = false;
    local_c4 = iVar4;
    if (0 < iVar4) {
      do {
        pfVar16 = &local_f0;
        pfVar15 = &local_f4;
        iVar7 = iVar12;
        pvVar5 = (void *)FUN_0097e350(*(void **)(param_1 + 0x11c),0);
        pcVar6 = FUN_009da0e0(pvVar5,iVar7,pfVar15,pfVar16);
        iVar7 = FUN_009ac120(pcVar6,"build_");
        if (iVar7 != -1) {
          bVar3 = true;
          break;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar4);
    }
    local_c8 = 0;
    if (0 < iVar4) {
      do {
        _Count = 0x20;
        pfVar16 = &local_f0;
        pfVar15 = &local_f4;
        iVar12 = local_c8;
        pvVar5 = (void *)FUN_0097e350(*(void **)(param_1 + 0x11c),0);
        pcVar6 = FUN_009da0e0(pvVar5,iVar12,pfVar15,pfVar16);
        _strncpy(local_e8,pcVar6,_Count);
        if (local_e8[0] != '_') {
          iVar12 = 0xc;
          bVar14 = true;
          pcVar6 = local_e8;
          pcVar13 = "deleteasset";
          do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar14 = *pcVar6 == *pcVar13;
            pcVar6 = pcVar6 + 1;
            pcVar13 = pcVar13 + 1;
          } while (bVar14);
          if (!bVar14) {
            pcVar6 = local_e8;
            piVar11 = (int *)0x0;
            uVar10 = 0;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            if (pcVar6 != local_e8 + 1) {
              do {
                if (local_e8[uVar10] == '_') {
                  local_e8[uVar10] = '\0';
                }
                pcVar6 = local_e8;
                uVar10 = uVar10 + 1;
                do {
                  cVar2 = *pcVar6;
                  pcVar6 = pcVar6 + 1;
                } while (cVar2 != '\0');
              } while (uVar10 < (uint)((int)pcVar6 - (int)(local_e8 + 1)));
            }
            puVar8 = operator_new(0x2f0);
            local_c = 0;
            if (puVar8 != (undefined4 *)0x0) {
              piVar11 = FUN_008b2b80(puVar8);
            }
            local_90 = local_f0;
            iVar4 = 7;
            bVar14 = true;
            pcVar6 = local_e8;
            pcVar13 = "repair";
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar14 = *pcVar6 == *pcVar13;
              pcVar6 = pcVar6 + 1;
              pcVar13 = pcVar13 + 1;
            } while (bVar14);
            local_8c = local_ec;
            local_88 = 0x3ca3d70a;
            if (bVar14) {
              builtin_strncpy(local_e8,"task_rep",8);
              local_e0._0_1_ = 'a';
              local_e0._1_1_ = 'i';
              local_e0._2_1_ = 'r';
              local_e0._3_1_ = 'm';
              local_dc = 0x6e61;
              local_da = 0;
            }
            iVar4 = 6;
            bVar14 = true;
            pcVar6 = local_e8;
            pcVar13 = "build";
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar14 = *pcVar6 == *pcVar13;
              pcVar6 = pcVar6 + 1;
              pcVar13 = pcVar13 + 1;
            } while (bVar14);
            if (bVar14) {
              builtin_strncpy(local_e8,"task_bui",8);
              local_e0._0_1_ = 'l';
              local_e0._1_1_ = 'd';
              local_e0._2_1_ = 'e';
              local_e0._3_1_ = 'r';
              local_dc = local_dc & 0xff00;
            }
            iVar4 = 10;
            bVar14 = true;
            pcVar6 = local_e8;
            pcVar13 = "leansmoke";
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar14 = *pcVar6 == *pcVar13;
              pcVar6 = pcVar6 + 1;
              pcVar13 = pcVar13 + 1;
            } while (bVar14);
            if (bVar14) {
              builtin_strncpy(local_e8,"leanspot",8);
              local_e0 = local_e0 & 0xffffff00;
            }
            local_78 = local_6c;
            pcVar6 = local_e8;
            local_6c[0] = '\0';
            local_74 = 0;
            local_70 = 0x14;
            do {
              cVar2 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            uVar10 = (int)pcVar6 - (int)(local_e8 + 1);
            if (0x13 < uVar10) {
              local_70 = uVar10 + 0x20 & 0xffffffe0;
              local_78 = _malloc(local_70);
            }
            _strncpy(local_78,local_e8,uVar10);
            local_74 = uVar10;
            local_78[uVar10] = '\0';
            local_c = 1;
            (**(code **)(*piVar11 + 0x28))(&local_78,param_1);
            local_c = 0xffffffff;
            if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
              _free(local_78);
            }
            piVar9 = (int *)(*(int *)(param_1 + 0x304) + 0xdc);
            piVar1 = piVar11 + 0x50;
            piVar11[0x51] = (int)piVar9;
            *piVar1 = *piVar9;
            *(int **)(*piVar9 + 4) = piVar1;
            *piVar9 = (int)piVar1;
            iVar4 = 10;
            bVar14 = true;
            pcVar6 = local_e8;
            pcVar13 = "moveasset";
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar14 = *pcVar6 == *pcVar13;
              pcVar6 = pcVar6 + 1;
              pcVar13 = pcVar13 + 1;
            } while (bVar14);
            if (bVar14) {
              fStack_a4 = 0.0;
              fStack_a8 = 0.0;
              fStack_ac = 0.0;
              fStack_b4 = 0.0;
              fStack_b8 = 0.0;
              fStack_bc = 0.0;
              fStack_a0 = 1.0;
              fStack_b0 = 1.0;
              fStack_c0 = 1.0;
              fStack_9c = 2.0;
              fStack_98 = 0.0;
              fStack_94 = 0.0;
              FUN_00527db0(&fStack_c0,local_f4);
              fStack_84 = fStack_a8 * 0.02 + (fStack_b4 + fStack_c0) * 0.0 + fStack_9c + local_f0;
              fStack_80 = fStack_a4 * 0.02 + (fStack_b0 + fStack_bc) * 0.0 + fStack_98 + local_ec;
              fStack_7c = fStack_a0 * 0.02 + (fStack_b8 + fStack_ac) * 0.0 + fStack_94;
              puVar8 = operator_new(0x2f0);
              local_c = 2;
              if (puVar8 == (undefined4 *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                piVar11 = FUN_008b2b80(puVar8);
              }
              pcStack_58 = acStack_4c;
              acStack_4c[0] = '\0';
              uStack_54 = 0;
              uStack_50 = 0x14;
              _strncpy(pcStack_58,"deleteasset",0xb);
              uStack_54 = 0xb;
              pcStack_58[0xb] = '\0';
              local_c = 3;
              (**(code **)(*piVar11 + 0x28))(&pcStack_58,param_1);
              local_c = 0xffffffff;
              if (0x14 < uStack_50) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_58);
              }
              piVar1 = piVar11 + 0x50;
              piVar9 = (int *)(*(int *)(param_1 + 0x304) + 0xdc);
              piVar11[0x51] = (int)piVar9;
              *piVar1 = *piVar9;
              *(int **)(*piVar9 + 4) = piVar1;
              *piVar9 = (int)piVar1;
            }
            local_c = 0xffffffff;
            iVar4 = 0xf;
            bVar14 = true;
            pcVar6 = local_e8;
            pcVar13 = "task_repairman";
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar14 = *pcVar6 == *pcVar13;
              pcVar6 = pcVar6 + 1;
              pcVar13 = pcVar13 + 1;
            } while (bVar14);
            if ((!bVar14) || (bVar3)) {
              iVar4 = 6;
              bVar14 = true;
              pcVar6 = local_e8;
              pcVar13 = "build";
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar14 = *pcVar6 == *pcVar13;
                pcVar6 = pcVar6 + 1;
                pcVar13 = pcVar13 + 1;
              } while (bVar14);
              if (bVar14) goto LAB_0052d5a3;
            }
            else {
LAB_0052d5a3:
              puVar8 = operator_new(0x2f0);
              local_c = 4;
              if (puVar8 == (undefined4 *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                piVar11 = FUN_008b2b80(puVar8);
              }
              pcStack_38 = acStack_2c;
              acStack_2c[0] = '\0';
              uStack_34 = 0;
              uStack_30 = 0x14;
              _strncpy(pcStack_38,"task_builder",0xc);
              uStack_34 = 0xc;
              pcStack_38[0xc] = '\0';
              local_c = 5;
              (**(code **)(*piVar11 + 0x28))(&pcStack_38,param_1);
              local_c = 0xffffffff;
              if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_38);
              }
              piVar1 = piVar11 + 0x50;
              piVar9 = (int *)(*(int *)(param_1 + 0x304) + 0xdc);
              piVar11[0x51] = (int)piVar9;
              *piVar1 = *piVar9;
              *(int **)(*piVar9 + 4) = piVar1;
              *piVar9 = (int)piVar1;
            }
            local_c = 0xffffffff;
            iVar4 = local_c4;
          }
        }
        local_c8 = local_c8 + 1;
      } while (local_c8 < iVar4);
    }
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_0052d710 @ 0052d710 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052d710(int *param_1)

{
  if ((param_1[0xb8] & 1U) == 0) {
    if ((param_1[0xb8] & 0x4000U) != 0) {
      _DAT_00f89040 = _DAT_00f89040 + (float)param_1[0xc6];
    }
    if ((param_1[0xb8] & 0x2000U) != 0) {
      _DAT_00f89044 = _DAT_00f89044 + (float)param_1[0xc6];
    }
    (**(code **)(*param_1 + 0xa0))();
    if (param_1[0xe8] != 0) {
      param_1[0xb8] = param_1[0xb8] | 1;
      (**(code **)(*param_1 + 0x1b0))();
      FUN_0052b430((int)param_1);
      (**(code **)(*param_1 + 0x14c))(1);
      *(undefined1 *)(param_1 + 0xf5) = 0;
      DAT_00e52590 = 0;
      FUN_00450c90(DAT_00f88720);
      FUN_00450ca0(DAT_00f88720);
      return;
    }
    *(undefined1 *)(param_1 + 0xf5) = 1;
  }
  return;
}


//// FUNCTION FUN_0052d7c0 @ 0052d7c0 ////

uint __cdecl FUN_0052d7c0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *this;
  undefined4 *puVar6;
  int *unaff_retaddr;
  
  if (DAT_0104c518 == (int *)0x0) {
    if (DAT_0104c6e0 == (int *)0x0) {
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x34))();
      FUN_009840b0(&stack0xffffffe8,puVar6);
      uVar5 = FUN_0046d260((float *)&stack0xffffffe8,1);
      return uVar5;
    }
    piVar3 = (int *)(**(code **)(*DAT_0104c6e0 + 200))();
    (*(code *)DAT_0104c504[1])();
    DAT_0104c518 = piVar3;
    uVar5 = (*(code *)*DAT_0104c504)();
    if (DAT_0104c518 == (int *)0x0) goto LAB_0052d88e;
    iVar4 = FUN_005295b0(DAT_0104c518);
  }
  else {
    piVar3 = (int *)(**(code **)(*DAT_0104c518 + 0xf0))();
    if (*piVar3 != 0x3f800000) {
      return (uint)piVar3 & 0xffffff00;
    }
    iVar4 = FUN_005295b0(DAT_0104c518);
  }
  uVar5 = 0;
  if (iVar4 != 0) {
    this = (void *)FUN_005295b0(DAT_0104c518);
    bVar1 = FUN_009389a0(this,unaff_retaddr);
    if (bVar1) {
      piVar3 = (int *)FUN_005295b0(DAT_0104c518);
      cVar2 = (**(code **)(*piVar3 + 0x20))();
      if (cVar2 != '\0') {
        return 1;
      }
    }
    return 0;
  }
LAB_0052d88e:
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_0052d8c0 @ 0052d8c0 ////

/* WARNING: Removing unreachable block (ram,0x0052daed) */
/* WARNING: Removing unreachable block (ram,0x0052da8c) */

int * FUN_0052d8c0(int *param_1)

{
  uint _Count;
  char *_Source;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint _Size;
  void *pvVar4;
  int iVar5;
  ulonglong uVar6;
  char *local_b0;
  uint local_a8;
  char local_a4 [20];
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  char local_84 [20];
  undefined4 local_70;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae506;
  pvStack_c = ExceptionList;
  local_90 = local_84;
  local_70 = 0;
  local_84[0] = '\0';
  local_8c = 0;
  local_88 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_90,"BUILDING_SITE",0xd);
  local_8c = 0xd;
  local_90[0xd] = '\0';
  local_b0 = local_a4;
  local_a4[0] = '\0';
  local_a8 = 0x14;
  local_4 = 1;
  if (DAT_0105bea4 != (code *)0x0) {
    (*DAT_0105bea4)();
  }
  uVar6 = FUN_00acd42c();
  iVar5 = (int)uVar6;
  do {
    if (iVar5 < 0) {
      if (local_a8 == 0) {
        local_a8 = 0x20;
        local_b0 = _malloc(0x20);
      }
      _strncpy(local_b0,"",0);
      *local_b0 = '\0';
      param_1[2] = 0x14;
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      _strncpy((char *)*param_1,local_b0,0);
      param_1[1] = 0;
      *(undefined1 *)*param_1 = 0;
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
joined_r0x0052dbce:
      if (local_88 < 0x15) {
        ExceptionList = pvStack_c;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    puVar2 = FUN_00569d60(apvStack_2c,iVar5);
    puVar3 = FUN_004312e0(apvStack_4c,&local_90,"_");
    puVar2 = FUN_0047aee0(apvStack_6c,puVar3,puVar2);
    _Count = puVar2[1];
    _Source = (char *)*puVar2;
    if (local_a8 <= _Count) {
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_a8 = _Count + 0x20 & 0xffffffe0;
      local_b0 = _malloc(local_a8);
    }
    _strncpy(local_b0,_Source,_Count);
    local_b0[_Count] = '\0';
    if (0x14 < uStack_64) {
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
    cVar1 = FUN_009b09f0((int)local_b0);
    if (cVar1 != '\0') {
      param_1[2] = 0x14;
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_1[2] = _Size;
        pvVar4 = _malloc(_Size);
        *param_1 = (int)pvVar4;
      }
      _strncpy((char *)*param_1,local_b0,_Count);
      param_1[1] = _Count;
      *(undefined1 *)(_Count + *param_1) = 0;
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      goto joined_r0x0052dbce;
    }
    iVar5 = iVar5 + -1;
  } while( true );
}


//// FUNCTION FUN_0052de50 @ 0052de50 ////

undefined4 * __thiscall FUN_0052de50(void *this,undefined4 *param_1)

{
  bool bVar1;
  void *this_00;
  undefined4 *puVar2;
  bool bVar3;
  void *local_20 [2];
  uint local_18;
  
  bVar3 = false;
  if (*(int *)((int)this + 800) != 0) goto LAB_0052df37;
  this_00 = (void *)FUN_009623a0((undefined4 *)((int)this + 0x35c));
  if (this_00 == (void *)0x0) {
LAB_0052dea0:
    bVar1 = false;
  }
  else {
    puVar2 = FUN_00430430(this_00,local_20);
    bVar3 = true;
    bVar1 = true;
    if (puVar2[1] == 0) goto LAB_0052dea0;
  }
  if ((bVar3) && (10 < local_18)) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  if (bVar1) {
    puVar2 = FUN_00430430(this_00,local_20);
    FUN_004036d0((void *)((int)this + 0x31c),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  else {
    puVar2 = FUN_009b5030(local_20,(undefined4 *)((int)this + 0x35c));
    FUN_004036d0((void *)((int)this + 0x31c),(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
LAB_0052df37:
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x31c),*(uint *)((int)this + 800));
  return param_1;
}


//// FUNCTION FUN_0052df70 @ 0052df70 ////

undefined4 * __cdecl FUN_0052df70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae543;
  local_c = ExceptionList;
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
  puVar2 = FUN_004312e0(local_2c,param_1,".dds");
  local_4 = 1;
  pvVar4 = FUN_0099bb50((char *)*puVar2,0,0,0,'\0');
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (*(void **)((int)puVar1[1] + 0x18) != pvVar4) {
    Engine_SetResourceReference((void *)puVar1[1],(int)pvVar4);
  }
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  puVar1[10] = 0;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xb] = 0;
  puVar1[2] = 0xffffffff;
  puVar1[0xc] = 0x3f800000;
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_0052e0b0 @ 0052e0b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_0052e0b0(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int *this;
  bool bVar5;
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
  puStack_8 = &LAB_00cae571;
  local_c = ExceptionList;
  bVar5 = false;
  if (*(uint *)(param_1 + 0x380) < 4) {
    return (int *)0x0;
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_4c,*(char **)(param_1 + 0x37c),*(uint *)(param_1 + 0x380));
  *local_4c = 'b';
  local_4c[1] = 'l';
  local_4c[2] = 'p';
  local_4 = 0;
  if (_DAT_0104c4c4 == 0.0) {
    puVar2 = FUN_0040d6b0(local_2c,"data/meshes/",&local_4c);
    bVar5 = true;
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar3 = FUN_009d3660(puVar2,(uint *)0x0);
    bVar1 = true;
    if ((char)uVar3 != '\0') goto LAB_0052e17a;
  }
  bVar1 = false;
LAB_0052e17a:
  local_4 = 0;
  if ((bVar5) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (bVar1) {
    pbVar4 = FUN_009de1d0(local_4c,1);
    *(undefined1 *)(param_1 + 0x3c8) = 0;
  }
  else {
    pbVar4 = FUN_009de1d0(*(char **)(param_1 + 0x37c),1);
    *(undefined1 *)(param_1 + 0x3c8) = 1;
  }
  this = FUN_00433eb0();
  this[0x27] = this[0x27] & 0xfffffe7fU | 2;
  (**(code **)(*this + 0x18))(pbVar4);
  FUN_0097e730(this,2,'\x01');
  FUN_0097e730(this,3,'\x01');
  if (pbVar4 != (byte *)0x0) {
    FUN_009de3b0(pbVar4);
  }
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    FUN_00527c00(this + 6,1.0,1.0,0.01);
  }
  if (local_44 < 0x15) {
    ExceptionList = local_c;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_0052e260 @ 0052e260 ////

void __fastcall FUN_0052e260(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  char *local_74;
  undefined4 local_70;
  uint local_6c;
  char local_68 [20];
  void *local_54 [2];
  uint local_4c;
  undefined4 local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae598;
  local_c = ExceptionList;
  if (((*(int *)(param_1 + 0x3c0) == 0) || (*(int *)(param_1 + 0x3c4) == 0)) &&
     (3 < *(uint *)(param_1 + 0x380))) {
    local_74 = local_68;
    local_68[0] = '\0';
    local_70 = 0;
    local_6c = 0x14;
    ExceptionList = &local_c;
    FUN_004015d0(&local_74,*(char **)(param_1 + 0x37c),*(uint *)(param_1 + 0x380));
    *local_74 = 'b';
    local_74[1] = 'l';
    local_4 = 0;
    local_74[2] = 'p';
    FUN_009d3b00(local_34);
    puVar2 = FUN_0040d6b0(local_54,"data/meshes/",&local_74);
    local_4._0_1_ = 2;
    uVar3 = FUN_009d3660(puVar2,(uint *)0x0);
    local_4._0_1_ = 1;
    if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_54[0]);
    }
    if ((char)uVar3 != '\0') {
      if (*(int *)(param_1 + 0x3c4) == 0) {
        pbVar4 = FUN_009de1d0(local_74,1);
        puVar2 = FUN_00433eb0();
        *(undefined4 **)(param_1 + 0x3c4) = puVar2;
        puVar2[0x27] = puVar2[0x27] | 0x80;
        puVar1 = (uint *)(*(int *)(param_1 + 0x3c4) + 0x9c);
        *puVar1 = *puVar1 | 0x100;
        puVar1 = (uint *)(*(int *)(param_1 + 0x3c4) + 0x9c);
        *puVar1 = *puVar1 | 2;
        (**(code **)(**(int **)(param_1 + 0x3c4) + 0x18))(pbVar4);
        FUN_0097e730(*(void **)(param_1 + 0x3c4),1,'\x01');
        FUN_0097e730(*(void **)(param_1 + 0x3c4),3,'\x01');
        if (pbVar4 != (byte *)0x0) {
          FUN_009de3b0(pbVar4);
        }
      }
      if (*(int *)(param_1 + 0x3c0) == 0) {
        pbVar4 = FUN_009de1d0(local_74,1);
        puVar2 = FUN_00433eb0();
        *(undefined4 **)(param_1 + 0x3c0) = puVar2;
        puVar2[0x27] = puVar2[0x27] & 0xffffff7f;
        puVar1 = (uint *)(*(int *)(param_1 + 0x3c0) + 0x9c);
        *puVar1 = *puVar1 & 0xfffffeff;
        puVar1 = (uint *)(*(int *)(param_1 + 0x3c0) + 0x9c);
        *puVar1 = *puVar1 & 0xfffffffd;
        (**(code **)(**(int **)(param_1 + 0x3c0) + 0x18))(pbVar4);
        FUN_0097e730(*(void **)(param_1 + 0x3c0),1,'\x01');
        FUN_0097e730(*(void **)(param_1 + 0x3c0),2,'\x01');
        if (pbVar4 != (byte *)0x0) {
          FUN_009de3b0(pbVar4);
        }
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_009d3750(local_34);
    if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_74);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0052e490 @ 0052e490 ////

void __fastcall FUN_0052e490(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float unaff_EDI;
  
  piVar1 = (int *)(param_1 + -0x78);
  (**(code **)(*(int *)(param_1 + -0x78) + 0x1a4))(param_1 + 0x2c4,0);
  FUN_00445630(*(void **)(param_1 + 0x228),piVar1);
  if (0.0 <= unaff_EDI) {
    if (1.0 < unaff_EDI) {
      unaff_EDI = 1.0;
    }
  }
  else {
    unaff_EDI = 0.0;
  }
  (**(code **)(*piVar1 + 0xbc))(unaff_EDI);
  iVar3 = *(int *)(param_1 + 0x240);
  if (iVar3 == 1) {
    uVar2 = (**(code **)(*piVar1 + 0x1bc))();
    *(undefined4 *)(param_1 + 0x344) = uVar2;
  }
  else if ((iVar3 != 2) && (iVar3 != 3)) goto LAB_0052e531;
  FUN_0052e260((int)piVar1);
LAB_0052e531:
  iVar3 = (**(code **)(*piVar1 + 0x34))(&stack0xffffffe8);
  if (*(float *)(iVar3 + 4) < -10.0) {
    FUN_00527fd0(piVar1);
  }
  FUN_00538fc0(param_1);
  return;
}


//// FUNCTION FUN_0052e570 @ 0052e570 ////

void __thiscall FUN_0052e570(void *this,char param_1)

{
  float *pfVar1;
  int *piVar2;
  void *this_00;
  int iVar3;
  TypeDescriptor *pTVar4;
  TypeDescriptor *pTVar5;
  int iVar6;
  char *pcVar7;
  float local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae5c0;
  local_c = ExceptionList;
  if (param_1 == '\0') {
    if (*(int *)((int)this + 0x2a0) == 0) {
      return;
    }
    if (*(char *)(*(int *)((int)this + 0x2a0) + 0x60) == '\0') {
      return;
    }
  }
  ExceptionList = &local_c;
  if (((*(uint *)((int)this + 0x2e0) & 0x2000) == 0) ||
     (ExceptionList = &local_c, pfVar1 = (float *)FUN_00465f40(&local_30), 1.0 <= *pfVar1)) {
    if ((*(uint *)((int)this + 0x2e0) & 0x4000) == 0) {
      ExceptionList = local_c;
      return;
    }
    pfVar1 = (float *)FUN_00466060(&local_30);
    if (1.0 <= *pfVar1) {
      ExceptionList = local_c;
      return;
    }
    iVar6 = 0;
    pTVar5 = &TM::CStudioPlayer::RTTI_Type_Descriptor;
    pTVar4 = &TM::CStudio::RTTI_Type_Descriptor;
    iVar3 = 0;
    piVar2 = (int *)GetPlayerStudio();
    this_00 = (void *)FUN_00ace790(piVar2,iVar3,pTVar4,pTVar5,iVar6);
    if (this_00 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"PIP_PLACING_TOILETS_",0x14);
    local_28 = 0x14;
    local_2c[0x14] = '\0';
    local_4 = 1;
    if (param_1 == '\0') {
      pcVar7 = "DOWN";
    }
    else {
      pcVar7 = "UP";
    }
    FUN_00407630(&local_2c,pcVar7);
    iVar3 = 5;
  }
  else {
    iVar6 = 0;
    pTVar5 = &TM::CStudioPlayer::RTTI_Type_Descriptor;
    pTVar4 = &TM::CStudio::RTTI_Type_Descriptor;
    iVar3 = 0;
    piVar2 = (int *)GetPlayerStudio();
    this_00 = (void *)FUN_00ace790(piVar2,iVar3,pTVar4,pTVar5,iVar6);
    if (this_00 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"PIP_PLACING_CATERING_",0x15);
    local_28 = 0x15;
    local_2c[0x15] = '\0';
    local_4 = 0;
    if (param_1 == '\0') {
      FUN_00407630(&local_2c,"DOWN");
      iVar3 = 4;
    }
    else {
      FUN_00407630(&local_2c,"UP");
      iVar3 = 4;
    }
  }
  FUN_005195b0(this_00,iVar3,&local_2c,param_1);
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0052e780 @ 0052e780 ////

void __fastcall FUN_0052e780(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cae5d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xae] = 5;
  (**(code **)(*param_1 + 0x1c4))();
  FUN_004a3b50(param_1 + 0xd7);
  if (param_1[0x102] == 0) {
    puVar1 = FUN_0055c3c0(param_1 + 0xcf);
    param_1[0x102] = (int)puVar1;
    if (puVar1 == (undefined4 *)0x0) goto LAB_0052e884;
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x20;
  pcStack_2c = _malloc(0x20);
  _strncpy(pcStack_2c,"stunttrain/DeviceLevel",0x16);
  uStack_28 = 0x16;
  pcStack_2c[0x16] = '\0';
  uStack_4 = 0;
  if (param_1[0x102] == 0) {
    puVar1 = FUN_0055c3c0(param_1 + 0xcf);
    param_1[0x102] = (int)puVar1;
  }
  uVar2 = FUN_00558490((void *)param_1[0x102],&pcStack_2c);
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  if ((char)uVar2 != '\0') {
    FUN_00520010();
  }
LAB_0052e884:
  iVar3 = FUN_005295b0(param_1);
  if ((iVar3 != 0) && (*(char *)(DAT_00f87b04 + 4) == '\0')) {
    FUN_00938fa0(param_1[0x7f]);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0052e8c0 @ 0052e8c0 ////

void FUN_0052e8c0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  int iVar5;
  uint unaff_EBX;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  int *unaff_retaddr;
  char **ppcVar9;
  char *local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  char acStack_24 [20];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cae609;
  pvStack_c = ExceptionList;
  local_30 = (char *)0x0;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 4))(&param_2);
  iVar5 = 0xf;
  bVar8 = true;
  pcVar6 = (char *)*puVar1;
  pcVar7 = "experience_lot";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar8 = *pcVar6 == *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (!bVar8) {
    ExceptionList = pvStack_10;
    return;
  }
  iVar5 = FUN_00ace790(unaff_retaddr,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar5 == 0) {
    ExceptionList = pvStack_10;
    return;
  }
  if (*(int *)(iVar5 + 0x4c4) != 3) {
    ExceptionList = pvStack_10;
    return;
  }
  iVar2 = FUN_005773c0(iVar5);
  iVar3 = GetPlayerStudio();
  if (iVar2 == iVar3) {
    local_30 = acStack_24;
    acStack_24[0] = '\0';
    uStack_2c = 0;
    uStack_28 = 0x14;
    _strncpy(local_30,"Lot",3);
    uStack_2c = 3;
    local_30[3] = '\0';
    ppcVar9 = &local_30;
    puStack_8 = (undefined1 *)0x0;
    unaff_EBX = 1;
    this = (void *)FUN_00577370(iVar5);
    pfVar4 = (float *)FUN_00441750(this,(undefined4 *)register0x00000010,ppcVar9);
    bVar8 = true;
    if (0.0 < *pfVar4) goto LAB_0052e9c3;
  }
  bVar8 = false;
LAB_0052e9c3:
  if (((unaff_EBX & 1) != 0) && (0x14 < uStack_28)) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  if (bVar8) {
    *param_2 = 0x3f800000;
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0052ea60 @ 0052ea60 ////

void __fastcall FUN_0052ea60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d22784;
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


//// FUNCTION FUN_0052eb30 @ 0052eb30 ////

void __fastcall FUN_0052eb30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d22794;
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


//// FUNCTION FUN_0052eba0 @ 0052eba0 ////

void __fastcall FUN_0052eba0(int param_1)

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


//// FUNCTION FUN_0052ebd0 @ 0052ebd0 ////

void __fastcall FUN_0052ebd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d227a4;
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


//// FUNCTION FUN_0052ece0 @ 0052ece0 ////

void * FUN_0052ece0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0052ed10 @ 0052ed10 ////

void __fastcall FUN_0052ed10(int param_1)

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


//// FUNCTION FUN_0052eec0 @ 0052eec0 ////

void __cdecl FUN_0052eec0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  char *local_4c;
  uint local_48;
  uint uStack_44;
  void *local_2c;
  int local_28;
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae638;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &pvStack_c;
  FUN_004015d0(&local_6c,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_0056a1d0((int *)&local_6c);
  FUN_0056ac50(&local_4c,&local_6c);
  local_4._0_1_ = 1;
  FUN_0056ac50(&local_2c,&local_6c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (((local_48 != 0) && (local_28 != 0)) &&
     (FUN_00567d60(&local_2c), puVar3 = DAT_0104c4d8, DAT_0104c4d8 != &DAT_0104c4e4)) {
    do {
      uVar2 = FUN_00413450((void *)(puVar3[2] + 0x35c),local_4c,0,local_48);
      if (uVar2 != 0xffffffff) {
        (**(code **)(*(int *)puVar3[2] + 0xbc))();
      }
      puVar1 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104c4e4);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (local_64 < 0x15) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_0052f0e0 @ 0052f0e0 ////

void __fastcall FUN_0052f0e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x260) != param_1 + 0x26c) {
    do {
      piVar1 = *(int **)(param_1 + 0x260);
      puVar2 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    } while (*(int *)(param_1 + 0x260) != param_1 + 0x26c);
  }
  piVar3 = *(int **)(param_1 + 0x260);
  piVar1 = (int *)(param_1 + 0x26c);
  while (piVar3 != piVar1) {
    *piVar3 = 0;
    piVar3 = (int *)piVar3[1];
    *(undefined4 *)(*piVar3 + 4) = 0;
  }
  *(int **)(param_1 + 0x260) = piVar1;
  *piVar1 = param_1 + 0x25c;
  return;
}


//// FUNCTION FUN_0052f170 @ 0052f170 ////

void __fastcall FUN_0052f170(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CSet::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    piVar2 = (int *)GetPlayerStudio();
  }
  else {
    piVar2 = (int *)GetPlayerStudio();
  }
  iVar1 = *piVar2;
  FUN_0052b990(param_1);
  (**(code **)(iVar1 + 0x28))();
  return;
}


//// FUNCTION FUN_0052f1c0 @ 0052f1c0 ////

uint __thiscall FUN_0052f1c0(void *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  byte *apbStack_20 [2];
  uint uStack_18;
  
  uVar5 = *(uint *)((int)this + 0x310);
  uVar7 = *(uint *)((int)this + 0x30c);
  if (uVar7 != uVar5) {
    do {
      cVar2 = (**(code **)(**(int **)(uVar7 + 0x14) + 0x38))(param_2);
      if (((cVar2 != '\0') && (iVar3 = FUN_008be620(*(int *)(uVar7 + 0x14)), iVar3 != 0)) &&
         ((param_3 == '\0' || (*(int *)(iVar3 + 0x6c) < *(int *)(iVar3 + 0x23c))))) {
        FUN_0048f010(&param_1,apbStack_20);
        pbVar4 = *(byte **)(*(int *)(uVar7 + 0x14) + 0xb0);
        pbVar6 = apbStack_20[0];
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0052f25e:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0052f263;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0052f25e;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_0052f263:
        if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
          _free(apbStack_20[0]);
        }
        if (iVar3 == 0) {
          return CONCAT31((int3)(uStack_18 >> 8),1);
        }
      }
      uVar5 = *(uint *)((int)this + 0x310);
      uVar7 = uVar7 + 0x18;
    } while (uVar7 != uVar5);
  }
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_0052f2b0 @ 0052f2b0 ////

int __thiscall FUN_0052f2b0(void *this,float *param_1,undefined4 param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  int local_38;
  float local_34;
  byte *apbStack_20 [2];
  uint uStack_18;
  
  iVar10 = *(int *)((int)this + 0x30c);
  local_34 = 3.4028235e+38;
  local_38 = 0;
  iVar8 = 0;
  if (iVar10 != *(int *)((int)this + 0x310)) {
    do {
      cVar5 = (**(code **)(**(int **)(iVar10 + 0x14) + 0x38))(param_2);
      iVar8 = local_38;
      fVar2 = local_34;
      if (((cVar5 != '\0') && (iVar6 = FUN_008be620(*(int *)(iVar10 + 0x14)), iVar6 != 0)) &&
         (*(int *)(iVar6 + 0x6c) < *(int *)(iVar6 + 0x23c))) {
        FUN_0048f010(&stack0x0000000c,apbStack_20);
        pbVar7 = *(byte **)(*(int *)(iVar10 + 0x14) + 0xb0);
        pbVar9 = apbStack_20[0];
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_0052f359:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0052f35e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_0052f359;
          pbVar7 = pbVar7 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_0052f35e:
        if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
          _free(apbStack_20[0]);
        }
        if (iVar6 == 0) {
          iVar8 = *(int *)(iVar10 + 0x14);
          fVar2 = *param_1 - *(float *)(iVar8 + 0x94);
          fVar4 = param_1[1] - *(float *)(iVar8 + 0x98);
          fVar3 = param_1[2] - *(float *)(iVar8 + 0x9c);
          fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
          if ((local_38 != 0) && (local_34 <= fVar2)) {
            iVar8 = local_38;
            fVar2 = local_34;
          }
        }
      }
      local_34 = fVar2;
      local_38 = iVar8;
      iVar10 = iVar10 + 0x18;
      iVar8 = local_38;
    } while (iVar10 != *(int *)((int)this + 0x310));
  }
  return iVar8;
}


//// FUNCTION FUN_0052f410 @ 0052f410 ////

void __thiscall FUN_0052f410(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0046f5e0(param_1);
  if (iVar2 == -0x7ffff93b) {
    if ((*(byte *)((int)this + 0x2e0) & 2) == 0) {
      cVar1 = (**(code **)(*(int *)this + 0x104))();
      if (cVar1 != '\0') {
        FUN_0052f170(this);
        (**(code **)(*(int *)this + 0xac))();
        iVar2 = *(int *)((int)this + 0x48) + -1;
        *(uint *)((int)this + 0x2e0) = *(uint *)((int)this + 0x2e0) | 2;
        *(int *)((int)this + 0x48) = iVar2;
        if (iVar2 == 0) {
          (*(code *)**(undefined4 **)this)(1);
        }
      }
    }
  }
  else {
    if (iVar2 != -0x7ffff913) {
      FUN_00538700(this,param_1);
      return;
    }
    if (*(int *)((int)this + 0x2b8) != 0) {
      cVar1 = (**(code **)(*(int *)this + 0x108))();
      if (cVar1 != '\0') {
        (**(code **)(*(int *)this + 0x124))();
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_0052f4b0 @ 0052f4b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052f4b0(int *param_1)

{
  undefined4 *puVar1;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    FUN_00539cb0((int)param_1);
    if ((param_1[0xb8] & 0x4000U) != 0) {
      _DAT_00f89040 = _DAT_00f89040 - (float)param_1[0xc6];
    }
    if ((param_1[0xb8] & 0x2000U) != 0) {
      _DAT_00f89044 = _DAT_00f89044 - (float)param_1[0xc6];
    }
    param_1[0x67] = 0;
    param_1[0xb8] = param_1[0xb8] & 0xfffffffe;
    (**(code **)(*param_1 + 0x1b4))();
    FUN_0052f0e0((int)param_1);
    puVar1 = (undefined4 *)param_1[0x47];
    if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x27) & 0x40) != 0)) {
      FUN_009e45b0(puVar1);
    }
    puVar1 = (undefined4 *)param_1[0xf1];
    if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x27) & 0x40) != 0)) {
      FUN_009e45b0(puVar1);
    }
    if (param_1[0xe8] != 0) {
      (**(code **)(*param_1 + 0x14c))(0);
    }
    DAT_00e52590 = 0;
    FUN_00450c90(DAT_00f88720);
    FUN_00450ca0(DAT_00f88720);
    return;
  }
  return;
}


//// FUNCTION FUN_0052f5a0 @ 0052f5a0 ////

int * __cdecl FUN_0052f5a0(float *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 *puVar5;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 auStack_c [12];
  
  piVar4 = (int *)0x0;
  local_1c = 0.0;
  puVar5 = DAT_0104c4d8;
  if (DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)puVar5[2];
        pfVar3 = (float *)(**(code **)(*piVar4 + 0x34))(local_18);
        local_1c = (*param_1 - *pfVar3) * (*param_1 - *pfVar3) +
                   (param_1[1] - pfVar3[1]) * (param_1[1] - pfVar3[1]) +
                   (param_1[2] - pfVar3[2]) * (param_1[2] - pfVar3[2]);
      }
      else {
        pfVar3 = (float *)(**(code **)(*(int *)puVar5[2] + 0x34))(auStack_c);
        fVar2 = (*param_1 - *pfVar3) * (*param_1 - *pfVar3) +
                (param_1[1] - pfVar3[1]) * (param_1[1] - pfVar3[1]) +
                (param_1[2] - pfVar3[2]) * (param_1[2] - pfVar3[2]);
        if (fVar2 < local_1c) {
          piVar4 = (int *)puVar5[2];
          local_1c = fVar2;
        }
      }
      puVar1 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104c4e4);
  }
  return piVar4;
}


//// FUNCTION FUN_0052f660 @ 0052f660 ////

undefined4 __thiscall FUN_0052f660(void *this,int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)((int)this + 0x3f8);
      (piVar1 != *(int **)((int)this + 0x3fc) && (*piVar1 != param_1)); piVar1 = piVar1 + 1) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != *(int **)((int)this + 0x3fc));
}


//// FUNCTION FUN_0052f690 @ 0052f690 ////

void __fastcall FUN_0052f690(int param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined1 *puVar5;
  void *local_54 [2];
  uint local_4c;
  uint local_34 [3];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae658;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x2b0) == 0) {
    ExceptionList = &local_c;
    FUN_0052d8c0((int *)local_54);
    local_4 = 0;
    if ((*(void **)(param_1 + 0x11c) != (void *)0x0) &&
       (iVar1 = FUN_0097e350(*(void **)(param_1 + 0x11c),0), iVar1 != 0)) {
      FUN_0041c9c0(local_34,local_54[0]);
      local_18 = *(float *)(iVar1 + 0xe0) * 0.0625;
      local_10 = *(int *)(param_1 + 0x11c);
      local_28 = *(undefined4 *)(local_10 + 0x3c);
      local_24 = *(undefined4 *)(local_10 + 0x40);
      local_20 = *(undefined4 *)(local_10 + 0x44);
      local_34[0] = local_34[0] | 5;
      puVar5 = &DAT_00d17518;
      iVar4 = 0;
      puVar3 = local_34;
      iVar1 = 2;
      this = (void *)FUN_004f3b20();
      uVar2 = FUN_004f3270(this,iVar1,(byte *)puVar3,iVar4,puVar5);
      *(undefined4 *)(param_1 + 0x2b4) = uVar2;
    }
    if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_54[0]);
    }
  }
  *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0052f790 @ 0052f790 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052f790(int *param_1)

{
  float fVar1;
  void *pvVar2;
  bool bVar3;
  int **ppiVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  float unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  float local_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  void *local_50 [2];
  uint local_48;
  void *local_30;
  undefined4 local_2c;
  int local_28;
  void *local_24;
  int local_20;
  undefined4 local_1c;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae678;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (_DAT_0104c4b8 != 0.0) {
    ExceptionList = &local_c;
    FUN_00568790(local_50,param_1 + 0xcf);
    pvVar2 = local_50[0];
    local_4 = 0;
    local_2c = 0xffffffff;
    FUN_009a8100(&local_30);
    local_28 = param_1[0x40];
    local_24 = (void *)param_1[0x41];
    local_20 = param_1[0x42];
    local_6c = -2.0;
    local_30 = pvVar2;
    local_1c = DAT_00f885c0;
    local_2c = 0xc0000000;
    FUN_009a8ec0(&local_30,'\0');
    local_4 = 0xffffffff;
    if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50[0]);
    }
  }
  local_4 = 0xffffffff;
  if (_DAT_0104c4bc != 0.0) {
    ExceptionList = local_c;
    return;
  }
  FUN_005386c0((int)param_1);
  uVar6 = extraout_EDX;
  if ((DAT_00f87aa0 != 0) && (bVar3 = FUN_00413cc0(DAT_00f87aa0), uVar6 = extraout_EDX_00, bVar3)) {
    ExceptionList = local_c;
    return;
  }
  piVar5 = (int *)param_1[0x91];
  if (piVar5 != (int *)param_1[0x92]) {
    do {
      if ((int *)*piVar5 != (int *)0x0) {
        (**(code **)(*(int *)*piVar5 + 0x10))(0,1);
        uVar6 = extraout_EDX_01;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)param_1[0x92]);
  }
  if (0 < param_1[0x38]) {
    ExceptionList = local_c;
    return;
  }
  switch(param_1[0xae]) {
  case 0:
    if ((int *)param_1[0xef] == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piStack_68 = (int *)0x2;
    piStack_64 = param_1;
    (**(code **)(*(int *)param_1[0xef] + 0x10))(&piStack_68,1);
    (**(code **)(*param_1 + 0x8c))(0xffc80000,0xff,0,param_1[0xef]);
    ExceptionList = local_24;
    return;
  case 1:
    *(undefined1 *)(param_1 + 0x18) = 1;
    if ((param_1[0xf0] == 0) && (param_1[0xf1] == 0)) {
      FUN_0052e260((int)param_1);
    }
    if (((int *)param_1[0xf1] != (int *)0x0) && (param_1[0xf0] != 0)) {
      (**(code **)(*(int *)param_1[0xf1] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
      fVar1 = (float)param_1[0xed];
      if (param_1[0xed] < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      uVar11 = FUN_00990ae0(extraout_ECX,extraout_EDX_02);
      fVar7 = (float10)(int)uVar11;
      if ((int)uVar11 < 0) {
        fVar7 = fVar7 + (float10)4.2949673e+09;
      }
      fVar8 = (float10)param_1[0xaa];
      if (param_1[0xaa] < 0) {
        fVar8 = fVar8 + (float10)4.2949673e+09;
      }
      fVar7 = (float10)1.0 - ((float10)fVar1 - fVar7) / fVar8;
      if ((float10)1e-05 <= fVar7) {
        if (fVar7 < (float10)1.0 != (fVar7 == (float10)1.0)) goto LAB_0052fa21;
      }
      else {
        fVar7 = (float10)1e-05;
LAB_0052fa21:
        fVar8 = (float10)0.0;
        fVar9 = (float10)1.0;
        do {
          fVar10 = (float10)fsin(fVar9 * fVar7 * (float10)3.1415927 * (float10)0.5);
          fVar8 = ((float10)1.0 / fVar9) * fVar10 + fVar8;
          fVar9 = fVar9 + (float10)2.0;
        } while (fVar9 < (float10)11.0);
        FUN_00527b80((void *)(param_1[0xf1] + 0x18),1.0,1.0,
                     (float)(((float10)1.0 - fVar7) * fVar8 * (float10)1.2732395 + fVar7));
      }
      local_6c = 2.8026e-45;
      piStack_68 = param_1;
      (**(code **)(*(int *)param_1[0xf1] + 0x10))(&local_6c,1);
    }
    piVar5 = (int *)param_1[0xef];
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piStack_60 = (int *)0x2;
    ppiVar4 = &piStack_60;
    piStack_5c = param_1;
    goto LAB_0052fe1e;
  case 2:
    if ((int *)param_1[0xf1] == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    if (param_1[0xf0] == 0) {
      ExceptionList = local_c;
      return;
    }
    piStack_68 = (int *)0x2;
    piStack_64 = param_1;
    (**(code **)(*(int *)param_1[0xf1] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
    (**(code **)(*(int *)param_1[0xf1] + 0x10))(&stack0xffffff8c,1);
    (**(code **)(*(int *)param_1[0xf0] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
    FUN_00527b80((void *)(param_1[0xf0] + 0x18),1.0,1.0,(float)param_1[0xee] / (float)param_1[0xb7])
    ;
    piVar5 = (int *)param_1[0xf0];
    ppiVar4 = &piStack_68;
    goto LAB_0052fe1e;
  case 3:
    *(undefined1 *)(param_1 + 0x18) = 1;
    if ((param_1[0xf1] != 0) && (param_1[0xf0] != 0)) {
      local_6c = (float)param_1[0xed];
      if (param_1[0xed] < 0) {
        local_6c = local_6c + 4.2949673e+09;
      }
      uVar11 = FUN_00990ae0(param_1[0xed],uVar6);
      piStack_68 = (int *)uVar11;
      fVar1 = (float)(int)piStack_68;
      if ((int)piStack_68 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_6c = (local_6c - fVar1) * 0.0016666667;
      if (0.0 < local_6c) {
        piStack_60 = (int *)0x2;
        piStack_5c = param_1;
        (**(code **)(*(int *)param_1[0xf1] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
        FUN_00527b80((void *)(param_1[0xf1] + 0x18),1.0,1.0,unaff_EDI);
        (**(code **)(*(int *)param_1[0xf1] + 0x10))(&local_6c,1);
        (**(code **)(*(int *)param_1[0xf0] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
        FUN_00527b80((void *)(param_1[0xf0] + 0x18),1.0,1.0,unaff_EDI);
        (**(code **)(*(int *)param_1[0xf0] + 0x10))(0,1);
      }
    }
    if ((int *)param_1[0x47] == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    piStack_60 = (int *)0x2;
    piStack_5c = param_1;
    (**(code **)(*(int *)param_1[0x47] + 0x10))(&piStack_60,1);
    ExceptionList = pvStack_14;
    return;
  case 4:
    *(undefined1 *)(param_1 + 0x18) = 1;
    if ((int *)param_1[0x47] == (int *)0x0) {
      ExceptionList = local_c;
      return;
    }
    (**(code **)(*(int *)param_1[0x47] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
    local_6c = (float)param_1[0xed];
    if (param_1[0xed] < 0) {
      local_6c = local_6c + 4.2949673e+09;
    }
    uVar11 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_03);
    piStack_68 = (int *)uVar11;
    fVar7 = (float10)(int)piStack_68;
    if ((int)piStack_68 < 0) {
      fVar7 = fVar7 + (float10)4.2949673e+09;
    }
    fVar8 = (float10)param_1[0xaa];
    if (param_1[0xaa] < 0) {
      fVar8 = fVar8 + (float10)4.2949673e+09;
    }
    fVar7 = (float10)1.0 - ((float10)local_6c - fVar7) / fVar8;
    if ((float10)1e-05 <= fVar7) {
      if (fVar7 < (float10)1.0 == (fVar7 == (float10)1.0)) {
        piStack_60 = (int *)0x2;
        ppiVar4 = &piStack_60;
        piStack_5c = param_1;
        break;
      }
    }
    else {
      fVar7 = (float10)1e-05;
    }
    fVar8 = (float10)0.0;
    fVar9 = (float10)1.0;
    do {
      fVar10 = (float10)fsin(fVar9 * fVar7 * (float10)3.1415927 * (float10)0.5);
      fVar8 = ((float10)1.0 / fVar9) * fVar10 + fVar8;
      fVar9 = fVar9 + (float10)2.0;
    } while (fVar9 < (float10)11.0);
    FUN_00527b80((void *)(param_1[0x47] + 0x18),1.0,1.0,
                 (float)(((float10)1.0 - fVar7) * fVar8 * (float10)1.2732395 + fVar7));
    piStack_60 = (int *)0x2;
    ppiVar4 = &piStack_60;
    piStack_5c = param_1;
    break;
  default:
    (**(code **)(*param_1 + 0x8c))(DAT_00e5287c,DAT_00e52878,0,0);
    piStack_58 = (int *)0x2;
    ppiVar4 = &piStack_58;
    piStack_54 = param_1;
  }
  piVar5 = (int *)param_1[0x47];
LAB_0052fe1e:
  (**(code **)(*piVar5 + 0x10))(ppiVar4,1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0052fe50 @ 0052fe50 ////

void FUN_0052fe50(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104c4d8; puVar1 != &DAT_0104c4e4; puVar1 = (undefined4 *)puVar1[1]) {
    (**(code **)(*(int *)puVar1[2] + 0xa8))();
  }
  return;
}


//// FUNCTION FUN_0052fe80 @ 0052fe80 ////

/* WARNING: Removing unreachable block (ram,0x0052ff74) */

void __fastcall FUN_0052fe80(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 unaff_EBX;
  char acStack_40 [6];
  undefined1 uStack_3a;
  void *pvStack_30;
  undefined1 auStack_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cae698;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00418a40(DAT_00f87aa0,'\0');
  pvVar1 = (void *)FUN_00523ea0();
  FUN_00525910(pvVar1);
  FUN_0052e570(param_1,'\x01');
  (**(code **)(*param_1 + 0x144))();
  FUN_005d3930(param_1);
  if (param_1[0x7f] != 0) {
    FUN_00938fa0(param_1[0x7f]);
  }
  FUN_004a3bf0(param_1 + 0xd7);
  acStack_40[0] = '\0';
  _strncpy(acStack_40,"PLACE_",6);
  uStack_3a = 0;
  uStack_4 = 0;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xfc))(auStack_2c);
  FUN_004073f0(&stack0xffffffb0,(char *)*puVar2,puVar2[1]);
  if (uStack_28 < 0x15) {
    FUN_005392c0(unaff_EBX);
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_30);
}


//// FUNCTION FUN_0052ff90 @ 0052ff90 ////

void __fastcall FUN_0052ff90(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x28))(param_1 + 0x86,param_1 + 0x89);
  (**(code **)(*param_1 + 0x120))();
  param_1[0xb8] = param_1[0xb8] | 4;
  (**(code **)(*param_1 + 300))();
  iVar1 = param_1[0x8a];
  param_1[0xae] = iVar1;
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*param_1 + 0x1bc))();
    param_1[0xef] = iVar1;
  }
  else if ((iVar1 != 2) && (iVar1 != 3)) goto LAB_0052fff1;
  FUN_0052e260((int)param_1);
LAB_0052fff1:
  param_1[0xee] = param_1[0x8b];
  if (((int *)param_1[0xef] != (int *)0x0) &&
     ((**(code **)(*(int *)param_1[0xef] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000),
     (char)param_1[0xf2] != '\0')) {
    FUN_00527c00((void *)(param_1[0xef] + 0x18),1.0,1.0,0.01);
  }
  if ((int *)param_1[0xf1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf1] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
    FUN_009e4330((void *)param_1[0xf1]);
  }
  return;
}


//// FUNCTION FUN_00530080 @ 00530080 ////

undefined4 * __fastcall FUN_00530080(int param_1)

{
  undefined4 *puVar1;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d6b0(local_2c,"thumbs/sets/",(undefined4 *)(param_1 + 0x37c));
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"",0);
  local_48 = 0;
  *local_4c = '\0';
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,".msh",4);
  local_68 = 4;
  local_6c[4] = '\0';
  local_4._0_1_ = 2;
  FUN_00569860((int *)local_2c,&local_6c,&local_4c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  puVar1 = FUN_0052df70(local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_005301a0 @ 005301a0 ////

void FUN_005301a0(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104c4d8; puVar1 != &DAT_0104c4e4; puVar1 = (undefined4 *)puVar1[1]) {
    (**(code **)(*(int *)puVar1[2] + 0x158))();
  }
  return;
}


//// FUNCTION FUN_005301d0 @ 005301d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005301d0(void)

{
  int *piVar1;
  void *pvVar2;
  float10 fVar3;
  ulonglong uVar4;
  char *local_12c;
  undefined4 local_128;
  uint local_124;
  char local_120 [20];
  int *local_10c;
  int *local_108;
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cae815;
  local_c = ExceptionList;
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_12c,"ass_hide",8);
  local_128 = 8;
  local_12c[8] = '\0';
  local_4 = 0;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ass_shownames",0xd);
  local_128 = 0xd;
  local_12c[0xd] = '\0';
  local_4 = 1;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ass_repair",10);
  local_128 = 10;
  local_12c[10] = '\0';
  local_4 = 2;
  FUN_005434b0();
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ass_build",9);
  local_128 = 9;
  local_12c[9] = '\0';
  local_4 = 3;
  FUN_005434c0();
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ass_build_all",0xd);
  local_128 = 0xd;
  local_12c[0xd] = '\0';
  local_4 = 4;
  FUN_005434b0();
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ass_buildabit",0xd);
  local_128 = 0xd;
  local_12c[0xd] = '\0';
  local_4 = 5;
  FUN_005434c0();
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ass_moveanything",0x10);
  local_128 = 0x10;
  local_12c[0x10] = '\0';
  local_4 = 6;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ass_dummyplacing",0x10);
  local_128 = 0x10;
  local_12c[0x10] = '\0';
  local_4 = 7;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ass_nicenessfactor",0x12);
  local_128 = 0x12;
  local_12c[0x12] = '\0';
  local_4 = 8;
  CVarSystem_Register_STUBBED();
  local_4 = 0xffffffff;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  piVar1 = operator_new(0x74);
  local_4 = 9;
  local_10c = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    local_108 = (int *)&stack0xfffffec0;
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d1ec80;
    piVar1[0x1c] = (int)&PTR_PTR_00e525c0;
  }
  local_4 = 0xffffffff;
  pvVar2 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar2,piVar1);
  piVar1 = operator_new(0x74);
  local_4 = 10;
  local_108 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    local_10c = (int *)&stack0xfffffec0;
    FUN_004ce5d0(piVar1);
    *piVar1 = (int)&PTR_FUN_00d1ec80;
    piVar1[0x1c] = (int)&PTR_PTR_00e525d0;
  }
  local_4 = 0xffffffff;
  pvVar2 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar2,piVar1);
  local_108 = operator_new(0xa0);
  local_4 = 0xb;
  if (local_108 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    local_10c = (int *)&stack0xfffffeb8;
    piVar1 = FUN_009055b0(local_108,(undefined4 *)"build_level",1,3);
  }
  local_4 = 0xffffffff;
  pvVar2 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar2,piVar1);
  local_108 = operator_new(0xa0);
  local_4 = 0xc;
  if (local_108 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    local_10c = (int *)&stack0xfffffebc;
    piVar1 = FUN_00905420(local_108,(undefined4 *)"repair_level",1);
  }
  local_4 = 0xffffffff;
  pvVar2 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar2,piVar1);
  FUN_00471840("MT_ASSET_DESTROY",-0x7ffff93b);
  FUN_00471840("MT_ASSET_MOVE",-0x7ffff913);
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"set",3);
  local_128 = 3;
  local_12c[3] = '\0';
  local_4 = 0xd;
  FUN_00558a50(DAT_00f88624,&local_12c,(undefined4 *)0x1);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"TickInterval",0xc);
  local_128 = 0xc;
  local_12c[0xc] = '\0';
  local_4 = 0xe;
  _DAT_00e5258c = FUN_00558750(DAT_00f88624,&local_12c,0);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"assethovertime",0xe);
  local_128 = 0xe;
  local_12c[0xe] = '\0';
  local_4 = 0xf;
  FUN_00558610(DAT_00f88624,&local_12c,0.0);
  uVar4 = FUN_00acd42c();
  _DAT_00e52594 = (undefined4)uVar4;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"asset",5);
  local_128 = 5;
  local_12c[5] = '\0';
  local_4 = 0x10;
  FUN_00558a50(DAT_00f88624,&local_12c,(undefined4 *)0x1);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"decaydelay",10);
  local_128 = 10;
  local_12c[10] = '\0';
  local_4 = 0x11;
  fVar3 = FUN_00558610(DAT_00f88624,&local_12c,0.0);
  FUN_0043b700(&DAT_0104c534,(float)fVar3);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"buildworkperhammermin",0x15);
  local_128 = 0x15;
  local_12c[0x15] = '\0';
  local_4 = 0x12;
  fVar3 = FUN_00558610(DAT_00f88624,&local_12c,0.0);
  _DAT_00e52598 = (float)fVar3;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"buildworkperhammermax",0x15);
  local_128 = 0x15;
  local_12c[0x15] = '\0';
  local_4 = 0x13;
  fVar3 = FUN_00558610(DAT_00f88624,&local_12c,0.0);
  _DAT_00e5259c = (float)fVar3;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"repairworkperhammermin",0x16);
  local_128 = 0x16;
  local_12c[0x16] = '\0';
  local_4 = 0x14;
  fVar3 = FUN_00558610(DAT_00f88624,&local_12c,0.0);
  _DAT_00e525a0 = (float)fVar3;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x20;
  local_12c = _malloc(0x20);
  _strncpy(local_12c,"repairworkperhammermax",0x16);
  local_128 = 0x16;
  local_12c[0x16] = '\0';
  local_4 = 0x15;
  fVar3 = FUN_00558610(DAT_00f88624,&local_12c,0.0);
  _DAT_00e525a4 = (float)fVar3;
  local_4 = 0xffffffff;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  DAT_0104c4cc = FUN_009de1d0("p_under_construction.msh",1);
  if (*(float *)(DAT_0104c4cc + 0xd4) <= *(float *)(DAT_0104c4cc + 0xd8)) {
    _DAT_00e525b0 = *(float *)(DAT_0104c4cc + 0xd8);
  }
  else {
    _DAT_00e525b0 = *(float *)(DAT_0104c4cc + 0xd4);
  }
  local_12c = local_120;
  _DAT_00e525b0 = _DAT_00e525b0 + _DAT_00e525b0;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"interface",9);
  local_128 = 9;
  local_12c[9] = '\0';
  local_4 = 0x16;
  FUN_00558a50(DAT_00f88624,&local_12c,(undefined4 *)0x1);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"outlinewidth",0xc);
  local_128 = 0xc;
  local_12c[0xc] = '\0';
  local_4 = 0x17;
  fVar3 = FUN_00558610(DAT_00f88624,&local_12c,0.0);
  _DAT_00e66fc4 = (float)fVar3;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ground",6);
  local_128 = 6;
  local_12c[6] = '\0';
  local_4 = 0x18;
  FUN_0055c540(local_e4,&local_12c);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"nicenessfactor",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0x1b;
  fVar3 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e52588 = (float)fVar3;
  local_4 = CONCAT31(local_4._1_3_,0x1a);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  FUN_00535590();
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00530cd0 @ 00530cd0 ////

float10 __cdecl FUN_00530cd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  bool bVar8;
  int local_c;
  float local_8;
  undefined1 local_4 [4];
  
  local_8 = 0.0;
  local_c = 0;
  puVar6 = DAT_0104c4d8;
  if (DAT_0104c4d8 != &DAT_0104c4e4) {
    do {
      pbVar7 = (byte *)*param_1;
      pbVar3 = (byte *)((int *)puVar6[2])[0xd7];
      do {
        bVar2 = *pbVar3;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_00530d34:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00530d39;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_00530d34;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00530d39:
      if (iVar4 == 0) {
        local_c = local_c + 1;
        pfVar5 = (float *)(**(code **)(*(int *)puVar6[2] + 0xb8))(local_4);
        local_8 = local_8 + *pfVar5;
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104c4e4);
    if (local_c != 0) {
      return (float10)local_8 / (float10)local_c;
    }
  }
  return (float10)-1.0;
}


//// FUNCTION FUN_00530d90 @ 00530d90 ////

void FUN_00530d90(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104c4d8; puVar1 != &DAT_0104c4e4; puVar1 = (undefined4 *)puVar1[1]) {
    (**(code **)(*(int *)puVar1[2] + 0xbc))(0x3f800000);
  }
  return;
}


//// FUNCTION FUN_00530e50 @ 00530e50 ////

void __thiscall FUN_00530e50(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined ***)this = &PTR_FUN_00d22970;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = &PTR_FUN_00d16bec;
  *(int *)((int)this + 0x18) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0xc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00530ea0 @ 00530ea0 ////

void __fastcall FUN_00530ea0(int param_1)

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


//// FUNCTION FUN_00530f00 @ 00530f00 ////

undefined4 * FUN_00530f00(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00530f50 @ 00530f50 ////

void __thiscall
FUN_00530f50(void *this,int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = param_3 - uVar1;
  iVar3 = param_5 - param_3;
  uVar5 = *(int *)((int)this + 0x10) + uVar1;
  if (uVar2 < uVar5 - param_5) {
    FUN_0052a610(&param_2,(int)this,uVar1,param_2,param_3,param_4,param_5);
    if (iVar3 != 0) {
      iVar4 = *(int *)((int)this + 0x10);
      do {
        if (iVar4 != 0) {
          uVar5 = *(int *)((int)this + 0xc) + 1;
          *(uint *)((int)this + 0xc) = uVar5;
          if (*(uint *)((int)this + 8) <= uVar5) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar4;
    }
  }
  else {
    FUN_0052a680(&param_2,param_4,param_5,(int)this,uVar5,param_2,param_3);
    if (iVar3 != 0) {
      iVar4 = *(int *)((int)this + 0x10);
      do {
        if ((iVar4 != 0) && (iVar4 = iVar4 + -1, iVar4 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar4;
    }
  }
  iVar3 = *(int *)((int)this + 0xc);
  *param_1 = (int)this;
  param_1[1] = iVar3 + uVar2;
  return;
}


//// FUNCTION FUN_00531040 @ 00531040 ////

void __fastcall FUN_00531040(int param_1)

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


//// FUNCTION FUN_005310c0 @ 005310c0 ////

void __cdecl FUN_005310c0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d22448;
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


//// FUNCTION FUN_00531130 @ 00531130 ////

bool __thiscall FUN_00531130(void *this,int param_1)

{
  int *piVar1;
  int *_Dst;
  
  piVar1 = *(int **)((int)this + 0x3fc);
  _Dst = *(int **)((int)this + 0x3f8);
  if (_Dst != piVar1) {
    do {
      if (*_Dst == param_1) break;
      _Dst = _Dst + 1;
    } while (_Dst != piVar1);
    if (_Dst != piVar1) {
      _memmove(_Dst,_Dst + 1,(*(int *)((int)this + 0x3fc) - (int)(_Dst + 1) >> 2) << 2);
      *(int *)((int)this + 0x3fc) = *(int *)((int)this + 0x3fc) + -4;
      *(int *)((int)this + 0x404) = *(int *)((int)this + 0x404) + -1;
    }
  }
  return *(int *)((int)this + 0x404) == 0;
}


//// FUNCTION FUN_005311a0 @ 005311a0 ////

void __thiscall FUN_005311a0(void *this,int param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((*(int **)((int)this + 0x1fc) != (int *)0x0) && (*(int *)((int)this + 0x11c) != 0)) {
    cVar1 = (**(code **)(**(int **)((int)this + 0x1fc) + 0x20))();
    if (cVar1 != '\0') {
      bVar2 = FUN_00531130(this,param_1);
      if (bVar2) {
        *(undefined1 *)(*(int *)((int)this + 0x1fc) + 0x254) = 0;
        if (*(char *)(*(int *)((int)this + 0x1fc) + 0x255) == '\0') {
          FUN_00938e60(*(int *)((int)this + 0x1fc));
        }
        *(uint *)(*(int *)((int)this + 0x11c) + 0x9c) =
             *(uint *)(*(int *)((int)this + 0x11c) + 0x9c) & 0xfdffffff;
        FUN_005392c0("UI_BUILDING_FLOORPLAN_CLOSED");
      }
    }
  }
  return;
}


//// FUNCTION FUN_00531220 @ 00531220 ////

void __fastcall FUN_00531220(int *param_1)

{
  undefined4 uVar1;
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined8 uVar2;
  
  uVar1 = FUN_00529f00(param_1);
  if ((char)uVar1 != '\0') {
    this = operator_new(0x1c);
    if (this != (void *)0x0) {
      uVar2 = FUN_00530e50(this,(int)param_1);
      FUN_009020f0(extraout_ECX_00,(int)((ulonglong)uVar2 >> 0x20),(int)uVar2);
      return;
    }
    FUN_009020f0(extraout_ECX,extraout_EDX,0);
  }
  return;
}


//// FUNCTION FUN_00531260 @ 00531260 ////

undefined4 * __thiscall FUN_00531260(void *this,byte param_1)

{
  FUN_00531280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00531280 @ 00531280 ////

void __fastcall FUN_00531280(undefined4 *param_1)

{
  param_1[1] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[3] = param_1[2];
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 4) = param_1[3];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[3] = param_1[2];
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 4) = param_1[3];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_00d22400;
  return;
}


//// FUNCTION FUN_005312e0 @ 005312e0 ////

void __fastcall FUN_005312e0(int param_1)

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


//// FUNCTION FUN_00531310 @ 00531310 ////

void __cdecl FUN_00531310(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d22448;
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


//// FUNCTION FUN_005313e0 @ 005313e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005313e0(int param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  LONG LVar9;
  int *piVar10;
  undefined4 *puVar11;
  float local_14;
  int local_c;
  int local_8;
  float local_4;
  
  if ((*(int *)(param_1 + 0x244) != 0) &&
     (*(int *)(param_1 + 0x248) - *(int *)(param_1 + 0x244) >> 2 != 0)) {
    local_14 = 0.0;
    iVar8 = FUN_00566c70();
    fVar4 = (float)iVar8;
    if (iVar8 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)*(int *)(param_1 + 0x250);
    if (*(int *)(param_1 + 0x250) < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar4 = fVar4 - fVar5;
    if (*(char *)(param_1 + 0x2e4) == '\0') {
      if (*(char *)(param_1 + 0x254) != '\0') {
        puVar11 = *(undefined4 **)(param_1 + 0x244);
        if (puVar11 != *(undefined4 **)(param_1 + 0x248)) {
          do {
            puVar3 = (undefined4 *)*puVar11;
            if ((puVar3 != (undefined4 *)0x0) && ((*(byte *)(puVar3 + 0x27) & 0x40) != 0)) {
              FUN_009e45b0(puVar3);
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 != *(undefined4 **)(param_1 + 0x248));
        }
        *(undefined1 *)(param_1 + 0x254) = 0;
      }
      piVar10 = *(int **)(param_1 + 0x244);
      bVar6 = true;
      if (piVar10 != *(int **)(param_1 + 0x248)) {
        do {
          piVar1 = (int *)*piVar10;
          if (piVar1 != (int *)0x0) {
            local_c = piVar1[0xf];
            local_8 = piVar1[0x10];
            local_4 = (float)piVar1[0x11];
            if (fVar4 < local_14) {
              bVar6 = false;
            }
            else {
              fVar5 = (fVar4 - local_14) * 0.001;
              local_4 = _DAT_00e525bc * fVar5 * fVar5 * 0.5;
              if (local_4 < DAT_00e525b4) {
                bVar6 = false;
                (**(code **)(*piVar1 + 0x20))(&local_c,piVar1[0x20],piVar1[0x1f]);
              }
              else {
                puVar11 = (undefined4 *)*piVar10;
                if (puVar11 != (undefined4 *)0x0) {
                  LVar9 = InterlockedDecrement(puVar11 + 4);
                  uVar7 = DAT_0105b588;
                  if ((LVar9 == 0) && (DAT_0105b588 = 1, puVar11 != (undefined4 *)0x0)) {
                    (**(code **)*puVar11)(1);
                  }
                  DAT_0105b588 = uVar7;
                  *piVar10 = 0;
                }
              }
            }
          }
          local_14 = _DAT_00e525b8 + local_14;
          piVar10 = piVar10 + 1;
        } while (piVar10 != *(int **)(param_1 + 0x248));
        if (!bVar6) {
          return;
        }
      }
      if (*(void **)(param_1 + 0x244) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x244));
      }
      *(undefined4 *)(param_1 + 0x244) = 0;
      *(undefined4 *)(param_1 + 0x248) = 0;
      *(undefined4 *)(param_1 + 0x24c) = 0;
    }
    else if (*(char *)(param_1 + 0x254) == '\0') {
      piVar10 = *(int **)(param_1 + 0x244);
      bVar6 = true;
      if (piVar10 != *(int **)(param_1 + 0x248)) {
        do {
          piVar1 = (int *)*piVar10;
          if (piVar1 != (int *)0x0) {
            local_c = piVar1[0xf];
            local_8 = piVar1[0x10];
            local_4 = (float)piVar1[0x11];
            if ((0.0 < local_4) && (local_14 <= fVar4)) {
              fVar5 = (fVar4 - local_14) * 0.001;
              local_4 = DAT_00e525b4 - _DAT_00e525bc * fVar5 * fVar5 * 0.5;
              if (local_4 < 0.0 != (local_4 == 0.0)) {
                local_4 = 0.0;
              }
              (**(code **)(*piVar1 + 0x20))(&local_c,piVar1[0x20],piVar1[0x1f]);
            }
            if (local_4 != 0.0) {
              bVar6 = false;
            }
          }
          local_14 = _DAT_00e525b8 + local_14;
          piVar10 = piVar10 + 1;
        } while (piVar10 != *(int **)(param_1 + 0x248));
        if (!bVar6) {
          return;
        }
      }
      puVar11 = *(undefined4 **)(param_1 + 0x244);
      *(undefined1 *)(param_1 + 0x254) = 1;
      if (puVar11 != *(undefined4 **)(param_1 + 0x248)) {
        do {
          pvVar2 = (void *)*puVar11;
          if ((pvVar2 != (void *)0x0) && ((*(byte *)((int)pvVar2 + 0x9c) & 0x40) == 0)) {
            FUN_009e4330(pvVar2);
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != *(undefined4 **)(param_1 + 0x248));
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00531720 @ 00531720 ////

void __fastcall FUN_00531720(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x244);
  if (puVar4 != *(undefined4 **)(param_1 + 0x248)) {
    do {
      puVar1 = (undefined4 *)*puVar4;
      if (puVar1 != (undefined4 *)0x0) {
        if ((*(byte *)(puVar1 + 0x27) & 0x40) != 0) {
          FUN_009e45b0(puVar1);
        }
        LVar3 = InterlockedDecrement(puVar1 + 4);
        uVar2 = DAT_0105b588;
        DAT_0105b588 = uVar2;
        if (LVar3 == 0) {
          DAT_0105b588 = 1;
          (**(code **)*puVar1)(1);
          DAT_0105b588 = uVar2;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x248));
  }
  if (*(void **)(param_1 + 0x244) == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x24c) = 0;
    *(undefined1 *)(param_1 + 0x254) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x244));
}


//// FUNCTION FUN_00531b00 @ 00531b00 ////

void FUN_00531b00(void)

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
  puStack_8 = &LAB_00cae848;
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


//// FUNCTION FUN_00531b70 @ 00531b70 ////

undefined4 * FUN_00531b70(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00531310(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00531bf0 @ 00531bf0 ////

void FUN_00531bf0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_0052a1a0(param_1);
  }
  return;
}


//// FUNCTION FUN_00531c20 @ 00531c20 ////

void FUN_00531c20(void)

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
  puStack_8 = &LAB_00cae868;
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


//// FUNCTION FUN_00531c90 @ 00531c90 ////

void FUN_00531c90(void)

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
  puStack_8 = &LAB_00cae888;
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


//// FUNCTION FUN_00531d10 @ 00531d10 ////

void __thiscall FUN_00531d10(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00531b00();
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
      _Dst = FUN_00530f00((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0052ece0(param_1,iVar5,param_1 + param_2);
      FUN_00530f00(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00528af0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0052ece0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0052a250(param_1,(int)pvVar3,iVar5);
    FUN_00528af0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00531f40 @ 00531f40 ////

void __fastcall FUN_00531f40(int param_1)

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
    FUN_0052a1a0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00531f90 @ 00531f90 ////

void __thiscall FUN_00531f90(void *this,uint param_1)

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
    uVar1 = FUN_00531c90();
  }
  uVar4 = uVar1 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((param_1 < uVar4) && (uVar1 <= 0xfffffff - uVar4)) {
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


//// FUNCTION FUN_005320e0 @ 005320e0 ////

void __thiscall FUN_005320e0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cae8a8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d22448;
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
      FUN_00531c20();
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
        iVar3 = FUN_00528ba0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_005310c0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00531310(puVar5,param_2,(int)&local_34);
      FUN_005310c0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00531bf0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_005310c0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00531b70(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_0052a5a0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_005310c0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00528fe0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_0052a5a0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00532440 @ 00532440 ////

void __fastcall FUN_00532440(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d229c4;
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


//// FUNCTION FUN_005324e0 @ 005324e0 ////

void __thiscall FUN_005324e0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    FUN_00531f90(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar2 * 4) == 0) {
    pvVar1 = operator_new(0x10);
    *(void **)(*(int *)((int)this + 4) + uVar2 * 4) = pvVar1;
  }
  FUN_0052a570(*(undefined4 **)(*(int *)((int)this + 4) + uVar2 * 4),param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_00532550 @ 00532550 ////

undefined4 * __thiscall FUN_00532550(void *this,byte param_1)

{
  FUN_00532440(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00532570 @ 00532570 ////

void __thiscall FUN_00532570(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_005325b5;
    }
  }
  iVar1 = 0;
LAB_005325b5:
  FUN_005320e0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_005325e0 @ 005325e0 ////

void FUN_005325e0(void *param_1,undefined4 *param_2,undefined4 *param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_009840b0(&local_20,param_2);
  FUN_009840b0(&local_18,param_3);
  if ((param_4 < 0.0 != (param_4 == 0.0)) ||
     (param_4 * param_4 <
      (local_20 - local_18) * (local_20 - local_18) + (local_1c - local_14) * (local_1c - local_14))
     ) {
    uVar8 = *(uint *)((int)param_1 + 0xc);
    uVar9 = *(int *)((int)param_1 + 0x10) + uVar8;
    for (; uVar8 != uVar9; uVar8 = uVar8 + 1) {
      uVar1 = *(uint *)((int)param_1 + 8);
      uVar6 = uVar8;
      if (uVar1 <= uVar8) {
        uVar6 = uVar8 - uVar1;
      }
      iVar2 = *(int *)(*(int *)((int)param_1 + 4) + uVar6 * 4);
      fVar4 = local_20 - *(float *)(iVar2 + 8);
      fVar5 = local_1c - *(float *)(iVar2 + 0xc);
      if (fVar4 * fVar4 + fVar5 * fVar5 < 0.01) {
        uVar6 = uVar8;
        if (uVar1 <= uVar8) {
          uVar6 = uVar8 - uVar1;
        }
        pfVar3 = *(float **)(*(int *)((int)param_1 + 4) + uVar6 * 4);
        fVar4 = local_18 - *pfVar3;
        fVar5 = local_14 - pfVar3[1];
        if (fVar4 * fVar4 + fVar5 * fVar5 < 0.01) {
          FUN_00530f50(param_1,(int *)&local_10,(int)param_1,uVar8,(int)param_1,uVar8 + 1);
          return;
        }
      }
    }
    local_10 = local_20;
    local_4 = local_14;
    local_c = local_1c;
    local_8 = local_18;
    if (*(uint *)((int)param_1 + 8) <= *(int *)((int)param_1 + 0x10) + 1U) {
      FUN_00531f90(param_1,1);
    }
    uVar9 = *(int *)((int)param_1 + 0xc) + *(int *)((int)param_1 + 0x10);
    if (*(uint *)((int)param_1 + 8) <= uVar9) {
      uVar9 = uVar9 - *(uint *)((int)param_1 + 8);
    }
    if (*(int *)(*(int *)((int)param_1 + 4) + uVar9 * 4) == 0) {
      pvVar7 = operator_new(0x10);
      *(void **)(*(int *)((int)param_1 + 4) + uVar9 * 4) = pvVar7;
    }
    FUN_0052a570(*(undefined4 **)(*(int *)((int)param_1 + 4) + uVar9 * 4),&local_10);
    *(int *)((int)param_1 + 0x10) = *(int *)((int)param_1 + 0x10) + 1;
  }
  return;
}


//// FUNCTION FUN_00532770 @ 00532770 ////

void __fastcall FUN_00532770(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_008b2b00(*(int *)(param_1 + 0x304));
  }
  iVar3 = *(int *)(param_1 + 0x30c);
  if (iVar3 != *(int *)(param_1 + 0x310)) {
    do {
      puVar4 = *(undefined4 **)(iVar3 + 0x14);
      if (puVar4 != (undefined4 *)0x0) {
        piVar1 = puVar4 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0x310));
  }
  puVar4 = *(undefined4 **)(param_1 + 0x30c);
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
    return;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x310);
  for (; puVar4 != puVar2; puVar4 = puVar4 + 6) {
    FUN_0052a1a0(puVar4);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x30c));
}


//// FUNCTION FUN_00532810 @ 00532810 ////

void __thiscall FUN_00532810(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00531310(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00532570(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005328f0 @ 005328f0 ////

void __fastcall FUN_005328f0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cae9d2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d22a0c;
  param_1[0x1e] = &PTR_LAB_00d229e8;
  param_1[0x28] = &PTR_FUN_00d229d0;
  local_4 = 0x13;
  FUN_00532770((int)param_1);
  FUN_0052f0e0((int)param_1);
  FUN_00531720((int)param_1);
  if ((undefined4 *)param_1[0xa8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xa8])(1);
  }
  (**(code **)(param_1[0xa3] + 4))();
  param_1[0xa8] = 0;
  (**(code **)param_1[0xa3])();
  if ((undefined4 *)param_1[0xe9] != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)param_1[0xe9]);
  }
  param_1[0xe9] = 0;
  if ((undefined4 *)param_1[0xe8] != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)param_1[0xe8]);
  }
  param_1[0xe8] = 0;
  if ((undefined4 *)param_1[0x57] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x57] = param_1[0x56];
  }
  if (param_1[0x56] != 0) {
    *(undefined4 *)(param_1[0x56] + 4) = param_1[0x57];
  }
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  if ((undefined4 *)param_1[0x53] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x53] = param_1[0x52];
  }
  if (param_1[0x52] != 0) {
    *(undefined4 *)(param_1[0x52] + 4) = param_1[0x53];
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x82] = param_1[0x81];
  }
  if (param_1[0x81] != 0) {
    *(undefined4 *)(param_1[0x81] + 4) = param_1[0x82];
  }
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  if ((undefined4 *)param_1[0xc1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc1])(1);
  }
  (**(code **)(param_1[0xbc] + 4))();
  param_1[0xc1] = 0;
  (**(code **)param_1[0xbc])();
  puVar2 = (undefined4 *)param_1[0xef];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0xef] = 0;
  }
  puVar2 = (undefined4 *)param_1[0xf0];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0xf0] = 0;
  }
  puVar2 = (undefined4 *)param_1[0xf1];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0xf1] = 0;
  }
  puVar2 = (undefined4 *)param_1[0x7f];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x7a] + 4))();
    param_1[0x7f] = 0;
    (**(code **)param_1[0x7a])();
  }
  puVar2 = (undefined4 *)param_1[0xfb];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xf6] + 4))();
    param_1[0xfb] = 0;
    (**(code **)param_1[0xf6])();
  }
  if ((void *)param_1[0xfe] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xfe]);
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0xf6] = &PTR_FUN_00d166dc;
  if ((undefined4 *)param_1[0xf8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf8] = param_1[0xf7];
  }
  if (param_1[0xf7] != 0) {
    *(undefined4 *)(param_1[0xf7] + 4) = param_1[0xf8];
  }
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xfb] = 0;
  if ((undefined4 *)param_1[0xf8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf8] = param_1[0xf7];
  }
  if (param_1[0xf7] != 0) {
    *(undefined4 *)(param_1[0xf7] + 4) = param_1[0xf8];
  }
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  if (0x14 < (uint)param_1[0xe1]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xdf]);
  }
  if (0x14 < (uint)param_1[0xd9]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd7]);
  }
  if ((uint)param_1[0xd1] < 0x15) {
    if (10 < (uint)param_1[0xc9]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[199]);
    }
    FUN_00531f40((int)(param_1 + 0xc2));
    param_1[0xbc] = &PTR_FUN_00d227a4;
    if ((undefined4 *)param_1[0xbe] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0xbe] = param_1[0xbd];
    }
    if (param_1[0xbd] != 0) {
      *(undefined4 *)(param_1[0xbd] + 4) = param_1[0xbe];
    }
    param_1[0xbd] = 0;
    param_1[0xbe] = 0;
    param_1[0xc1] = 0;
    if ((undefined4 *)param_1[0xbe] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0xbe] = param_1[0xbd];
    }
    if (param_1[0xbd] != 0) {
      *(undefined4 *)(param_1[0xbd] + 4) = param_1[0xbe];
    }
    param_1[0xbd] = 0;
    param_1[0xbe] = 0;
    param_1[0xa3] = &PTR_LAB_00d22794;
    if ((undefined4 *)param_1[0xa5] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0xa5] = param_1[0xa4];
    }
    if (param_1[0xa4] != 0) {
      *(undefined4 *)(param_1[0xa4] + 4) = param_1[0xa5];
    }
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    param_1[0xa8] = 0;
    if ((undefined4 *)param_1[0xa5] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0xa5] = param_1[0xa4];
    }
    if (param_1[0xa4] != 0) {
      *(undefined4 *)(param_1[0xa4] + 4) = param_1[0xa5];
    }
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    FUN_00457dd0(param_1 + 0x96);
    if ((void *)param_1[0x91] == (void *)0x0) {
      param_1[0x91] = 0;
      param_1[0x92] = 0;
      param_1[0x93] = 0;
      if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x82] = param_1[0x81];
      }
      if (param_1[0x81] != 0) {
        *(undefined4 *)(param_1[0x81] + 4) = param_1[0x82];
      }
      param_1[0x81] = 0;
      param_1[0x82] = 0;
      param_1[0x7a] = &PTR_LAB_00d22784;
      if ((undefined4 *)param_1[0x7c] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x7c] = param_1[0x7b];
      }
      if (param_1[0x7b] != 0) {
        *(undefined4 *)(param_1[0x7b] + 4) = param_1[0x7c];
      }
      param_1[0x7b] = 0;
      param_1[0x7c] = 0;
      param_1[0x7f] = 0;
      if ((undefined4 *)param_1[0x7c] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x7c] = param_1[0x7b];
      }
      if (param_1[0x7b] != 0) {
        *(undefined4 *)(param_1[0x7b] + 4) = param_1[0x7c];
      }
      param_1[0x7b] = 0;
      param_1[0x7c] = 0;
      param_1[0x74] = &PTR_FUN_00d16bec;
      if ((undefined4 *)param_1[0x76] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x76] = param_1[0x75];
      }
      if (param_1[0x75] != 0) {
        *(undefined4 *)(param_1[0x75] + 4) = param_1[0x76];
      }
      param_1[0x75] = 0;
      param_1[0x76] = 0;
      param_1[0x79] = 0;
      if ((undefined4 *)param_1[0x76] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x76] = param_1[0x75];
      }
      if (param_1[0x75] != 0) {
        *(undefined4 *)(param_1[0x75] + 4) = param_1[0x76];
      }
      param_1[0x75] = 0;
      param_1[0x76] = 0;
      param_1[0x6e] = &PTR_FUN_00d16bec;
      if ((undefined4 *)param_1[0x70] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x70] = param_1[0x6f];
      }
      if (param_1[0x6f] != 0) {
        *(undefined4 *)(param_1[0x6f] + 4) = param_1[0x70];
      }
      param_1[0x6f] = 0;
      param_1[0x70] = 0;
      param_1[0x73] = 0;
      if ((undefined4 *)param_1[0x70] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x70] = param_1[0x6f];
      }
      if (param_1[0x6f] != 0) {
        *(undefined4 *)(param_1[0x6f] + 4) = param_1[0x70];
      }
      param_1[0x6f] = 0;
      param_1[0x70] = 0;
      param_1[0x68] = &PTR_FUN_00d16bec;
      if ((undefined4 *)param_1[0x6a] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x6a] = param_1[0x69];
      }
      if (param_1[0x69] != 0) {
        *(undefined4 *)(param_1[0x69] + 4) = param_1[0x6a];
      }
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6d] = 0;
      if ((undefined4 *)param_1[0x6a] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x6a] = param_1[0x69];
      }
      if (param_1[0x69] != 0) {
        *(undefined4 *)(param_1[0x69] + 4) = param_1[0x6a];
      }
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      FUN_004687d0(param_1 + 0x5a);
      if ((undefined4 *)param_1[0x57] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x57] = param_1[0x56];
      }
      if (param_1[0x56] != 0) {
        *(undefined4 *)(param_1[0x56] + 4) = param_1[0x57];
      }
      param_1[0x56] = 0;
      param_1[0x57] = 0;
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
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x91]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xcf]);
}


//// FUNCTION FUN_00533020 @ 00533020 ////

void __fastcall FUN_00533020(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  int iVar8;
  void *pvVar9;
  undefined ***pppuVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  bool bVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  uint *puVar17;
  uint uVar18;
  uint local_128;
  float *pfVar19;
  float *pfVar20;
  undefined4 *local_fc;
  float local_f8;
  float local_f4;
  void *local_f0;
  float local_ec;
  float local_e8;
  int local_e4;
  undefined **local_e0;
  int local_dc;
  int *local_d8;
  undefined ***local_d4;
  undefined4 *local_cc;
  undefined **local_c8;
  int local_c4;
  int *local_c0;
  undefined ***local_bc;
  undefined4 *local_b4;
  undefined **local_b0;
  int local_ac;
  int *local_a8;
  undefined ***local_a4;
  undefined4 *local_9c;
  undefined1 *local_98;
  float local_94;
  undefined **local_90;
  int local_8c;
  int *local_88;
  undefined ***local_84;
  undefined4 *local_7c;
  byte *local_78;
  undefined4 local_74;
  uint local_70;
  byte local_6c [20];
  byte *local_58;
  undefined4 local_54;
  uint local_50;
  byte local_4c [20];
  undefined **local_38 [6];
  undefined4 local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00caea68;
  local_14 = ExceptionList;
  local_e4 = *(int *)(param_1[0xc1] + 0xd0);
  ExceptionList = &local_14;
  if (local_e4 != param_1[0xc1] + 0xdc) {
    do {
      iVar5 = *(int *)(local_e4 + 8);
      local_58 = local_4c;
      local_4c[0] = 0;
      local_54 = 0;
      local_50 = 0x14;
      _strncpy((char *)local_58,"task_repairman",0xe);
      local_54 = 0xe;
      local_58[0xe] = 0;
      pbVar2 = *(byte **)(iVar5 + 0x180);
      puVar11 = (undefined4 *)(iVar5 + 0x180);
      pbVar12 = local_58;
      do {
        bVar1 = *pbVar2;
        bVar13 = bVar1 < *pbVar12;
        if (bVar1 != *pbVar12) {
LAB_005330fc:
          iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_00533101;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar13 = bVar1 < pbVar12[1];
        if (bVar1 != pbVar12[1]) goto LAB_005330fc;
        pbVar2 = pbVar2 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00533101:
      if (0x14 < local_50) {
                    /* WARNING: Subroutine does not return */
        _free(local_58);
      }
      if (iVar3 == 0) {
        local_f0 = operator_new(0x1c0);
        local_c = 0;
        if (local_f0 == (void *)0x0) {
          local_9c = (undefined4 *)0x0;
        }
        else {
          local_9c = FUN_008c2ab0(local_f0,iVar5);
        }
        local_a4 = &local_b0;
        local_ac = 0;
        local_a8 = (int *)0x0;
        local_b0 = &PTR_LAB_00d22448;
        if (local_9c != (undefined4 *)0x0) {
          local_a8 = local_9c + 6;
          local_ac = *local_a8;
          *(int **)(*local_a8 + 4) = &local_ac;
          *local_a8 = (int)&local_ac;
        }
        local_c = 1;
        FUN_00532810(param_1 + 0xc2,(int)&local_b0);
        local_c = 0xffffffff;
        local_b0 = &PTR_LAB_00d22448;
        if (local_a8 != (int *)0x0) {
          *local_a8 = local_ac;
        }
        if (local_ac != 0) {
          *(int **)(local_ac + 4) = local_a8;
        }
        local_9c = (undefined4 *)0x0;
        local_ac = 0;
        local_a8 = (int *)0x0;
      }
      else {
        local_78 = local_6c;
        local_6c[0] = 0;
        local_74 = 0;
        local_70 = 0x14;
        _strncpy((char *)local_78,"task_builder",0xc);
        local_74 = 0xc;
        local_78[0xc] = 0;
        pbVar2 = (byte *)*puVar11;
        pbVar12 = local_78;
        do {
          bVar1 = *pbVar2;
          bVar13 = bVar1 < *pbVar12;
          if (bVar1 != *pbVar12) {
LAB_0053326c:
            iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_00533275;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar13 = bVar1 < pbVar12[1];
          if (bVar1 != pbVar12[1]) goto LAB_0053326c;
          pbVar2 = pbVar2 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00533275:
        if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
          _free(local_78);
        }
        if (iVar3 == 0) {
          local_f0 = operator_new(0x1c0);
          local_c = 2;
          if (local_f0 == (void *)0x0) {
            local_cc = (undefined4 *)0x0;
          }
          else {
            local_cc = FUN_008bf020(local_f0,iVar5);
          }
          local_d4 = &local_e0;
          local_dc = 0;
          local_d8 = (int *)0x0;
          local_e0 = &PTR_LAB_00d22448;
          if (local_cc != (undefined4 *)0x0) {
            local_d8 = local_cc + 6;
            local_dc = *local_d8;
            *(int **)(*local_d8 + 4) = &local_dc;
            *local_d8 = (int)&local_dc;
          }
          local_c = 3;
          FUN_00532810(param_1 + 0xc2,(int)&local_e0);
          local_c = 0xffffffff;
          local_e0 = &PTR_LAB_00d22448;
          if (local_d8 != (int *)0x0) {
            *local_d8 = local_dc;
          }
          if (local_dc != 0) {
            *(int **)(local_dc + 4) = local_d8;
          }
          local_cc = (undefined4 *)0x0;
          local_dc = 0;
          local_d8 = (int *)0x0;
        }
        else {
          uVar4 = FUN_00413450(puVar11,"moveasset",0,9);
          if (uVar4 == 0) {
            local_f0 = operator_new(0x1c0);
            local_c = 4;
            if (local_f0 == (void *)0x0) {
              local_fc = (undefined4 *)0x0;
            }
            else {
              local_fc = FUN_008c1a90(local_f0,iVar5);
            }
            local_c = 0xffffffff;
            fVar14 = FUN_004012c0(0.0);
            local_f4 = (float)fVar14;
            if (((void *)param_1[0x47] != (void *)0x0) &&
               (iVar5 = FUN_0097e350((void *)param_1[0x47],0), iVar5 != 0)) {
              iVar5 = FUN_0097e350((void *)param_1[0x47],0);
              iVar5 = FUN_009da0d0(iVar5);
              iVar3 = 0;
              if (0 < iVar5) {
                do {
                  puVar11 = local_20;
                  pfVar19 = &local_f4;
                  iVar8 = iVar3;
                  pvVar6 = (void *)FUN_0097e350((void *)param_1[0x47],0);
                  pcVar7 = FUN_009da0e0(pvVar6,iVar8,pfVar19,puVar11);
                  iVar8 = FUN_009ac120(pcVar7,"moveasset");
                  if (iVar8 != -1) {
                    fVar14 = FUN_004012c0(local_f4 + *(float *)(param_1[0x47] + 0x80));
                    local_f4 = (float)fVar14;
                    break;
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar5);
              }
            }
            FUN_008c06f0(local_fc,local_f4);
            local_bc = &local_c8;
            local_c4 = 0;
            local_c0 = (int *)0x0;
            local_c8 = &PTR_LAB_00d22448;
            local_b4 = local_fc;
            if (local_fc != (undefined4 *)0x0) {
              local_c0 = local_fc + 6;
              local_c4 = *local_c0;
              *(int **)(*local_c0 + 4) = &local_c4;
              *local_c0 = (int)&local_c4;
            }
            local_c = 5;
            FUN_00532810(param_1 + 0xc2,(int)&local_c8);
            local_c = 0xffffffff;
            local_c8 = &PTR_LAB_00d22448;
            if (local_c0 != (int *)0x0) {
              *local_c0 = local_c4;
            }
            if (local_c4 != 0) {
              *(int **)(local_c4 + 4) = local_c0;
            }
            local_b4 = (undefined4 *)0x0;
            local_c4 = 0;
            local_c0 = (int *)0x0;
          }
          else {
            uVar4 = FUN_00413450(puVar11,"deleteasset",0,0xb);
            if (uVar4 == 0) {
              local_f0 = operator_new(0x1c0);
              local_c = 6;
              if (local_f0 == (void *)0x0) {
                local_7c = (undefined4 *)0x0;
              }
              else {
                local_7c = FUN_008c0520(local_f0,iVar5);
              }
              local_84 = &local_90;
              local_8c = 0;
              local_88 = (int *)0x0;
              local_90 = &PTR_LAB_00d22448;
              if (local_7c != (undefined4 *)0x0) {
                local_88 = local_7c + 6;
                local_8c = *local_88;
                *(int **)(*local_88 + 4) = &local_8c;
                *local_88 = (int)&local_8c;
              }
              local_c = 7;
              FUN_00532810(param_1 + 0xc2,(int)&local_90);
              pppuVar10 = &local_90;
LAB_00533812:
              local_c = 0xffffffff;
              FUN_0052a1a0(pppuVar10);
            }
            else {
              uVar4 = FUN_00413450(puVar11,"setnextshot",0,0xb);
              if (uVar4 == 0) {
                local_128 = 0x5335fa;
                pvVar6 = (void *)FUN_00ace790(param_1,0,&TM::TMFixedAsset::RTTI_Type_Descriptor,
                                              &TM::CSet::RTTI_Type_Descriptor,0);
                if (pvVar6 != (void *)0x0) {
                  fVar14 = FUN_004012c0(0.0);
                  local_f8 = (float)fVar14;
                  if (((void *)param_1[0x47] != (void *)0x0) &&
                     (iVar5 = FUN_0097e350((void *)param_1[0x47],0), iVar5 != 0)) {
                    iVar5 = FUN_0097e350((void *)param_1[0x47],0);
                    iVar5 = FUN_009da0d0(iVar5);
                    iVar3 = 0;
                    if (0 < iVar5) {
                      do {
                        pfVar19 = &local_ec;
                        pfVar20 = &local_f8;
                        iVar8 = iVar3;
                        pvVar9 = (void *)FUN_0097e350((void *)param_1[0x47],0);
                        pcVar7 = FUN_009da0e0(pvVar9,iVar8,pfVar20,pfVar19);
                        iVar8 = FUN_009ac120(pcVar7,"setnextshot");
                        if (iVar8 != -1) {
                          fVar14 = FUN_004012c0(local_f8 + *(float *)(param_1[0x47] + 0x80));
                          local_f8 = (float)fVar14;
                          break;
                        }
                        iVar3 = iVar3 + 1;
                      } while (iVar3 < iVar5);
                    }
                  }
                  local_94 = local_ec;
                  fVar14 = (float10)fcos((float10)*(float *)(param_1[0x47] + 0x80));
                  fVar15 = (float10)fsin((float10)*(float *)(param_1[0x47] + 0x80));
                  fVar16 = (float10)local_e8;
                  local_e8 = (float)((float10)local_e8 * fVar14 + fVar15 * (float10)local_ec);
                  local_ec = (float)(fVar14 * (float10)local_ec + fVar16 * -fVar15);
                  pvVar9 = operator_new(0x248);
                  local_c = 8;
                  local_f0 = pvVar9;
                  if (pvVar9 == (void *)0x0) {
                    puVar11 = (undefined4 *)0x0;
                  }
                  else {
                    local_98 = &stack0xfffffecc;
                    puVar17 = &local_128;
                    local_128 = local_128 & 0xffffff00;
                    uVar4 = 0;
                    uVar18 = 0x14;
                    FUN_004015d0(&stack0xfffffecc,"button_shooting",0xf);
                    local_98 = &stack0xfffffeb8;
                    puVar11 = FUN_008c1f50(pvVar9,local_ec + (float)param_1[0x40],
                                           local_e8 + (float)param_1[0x41],param_1[0x42],local_f8,0,
                                           (char *)puVar17,uVar4,uVar18);
                  }
                  local_c = 0xffffffff;
                  FUN_004cbd90(pvVar6,puVar11);
                }
              }
              else if (*(char *)(iVar5 + 0x239) == '\0') {
                local_98 = operator_new(0x1c0);
                local_c = 9;
                if (local_98 == (undefined1 *)0x0) {
                  puVar11 = (undefined4 *)0x0;
                }
                else {
                  puVar11 = FUN_008c3660(local_98,iVar5);
                }
                FUN_0052a140(local_38,(int)puVar11);
                local_c = 10;
                FUN_00532810(param_1 + 0xc2,(int)local_38);
                pppuVar10 = local_38;
                goto LAB_00533812;
              }
            }
          }
        }
      }
      local_e4 = *(int *)(local_e4 + 4);
    } while (local_e4 != param_1[0xc1] + 0xdc);
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00533850 @ 00533850 ////

void __fastcall FUN_00533850(int *param_1)

{
  int *piVar1;
  void *this;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *local_50;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caead9;
  local_c = ExceptionList;
  if (((param_1[0xb8] & 0x800U) != 0) && (param_1[0xc1] != 0)) {
    ExceptionList = &local_c;
    if (param_1[0x102] == 0) {
      ExceptionList = &local_c;
      puVar4 = FUN_0055c3c0(param_1 + 0xcf);
      param_1[0x102] = (int)puVar4;
    }
    this = (void *)param_1[0x102];
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"extra_info/explainer",0x14);
    local_48 = 0x14;
    local_4c[0x14] = '\0';
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
    _strncpy(local_4c,"ShareSliders",0xc);
    local_48 = 0xc;
    local_4c[0xc] = '\0';
    local_4 = 1;
    iVar5 = FUN_00558750(this,&local_4c,0);
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (iVar5 != 0) {
      pvVar6 = operator_new(0x568);
      local_4 = 2;
      if (pvVar6 == (void *)0x0) {
        local_50 = (undefined4 *)0x0;
      }
      else {
        local_50 = FUN_008bb5c0(pvVar6,param_1);
      }
      local_4 = 0xffffffff;
      (**(code **)(param_1[0xf6] + 4))();
      param_1[0xfb] = (int)local_50;
      (**(code **)param_1[0xf6])();
    }
    cVar3 = FUN_00558bb0(this,6);
    if (cVar3 != '\0') {
      FUN_00558bb0(this,0);
      FUN_004035b0(param_1[0xc1] + 200);
      do {
        FUN_005562f0(this,apvStack_2c,1);
        local_4c = local_40;
        local_4 = 3;
        local_40[0] = '\0';
        local_48 = 0;
        local_44 = 0x14;
        _strncpy(local_4c,"IsComposite",0xb);
        local_48 = 0xb;
        local_4c[0xb] = '\0';
        local_4._0_1_ = 4;
        iVar7 = FUN_00558750(this,&local_4c,0);
        local_4._0_1_ = 3;
        uVar2 = (undefined1)local_4;
        local_4._0_1_ = 3;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if (iVar7 == 0) {
          local_4._0_1_ = uVar2;
          puVar4 = operator_new(0x2f0);
          local_4._0_1_ = 6;
          if (puVar4 == (undefined4 *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = FUN_008b2b80(puVar4);
          }
          local_4 = CONCAT31(local_4._1_3_,3);
          (**(code **)(*piVar8 + 0x24))(param_1 + 0xcf,apvStack_2c,param_1);
          piVar1 = piVar8 + 0x50;
          piVar9 = (int *)(param_1[0xc1] + 0xdc);
          piVar8[0x51] = (int)piVar9;
          *piVar1 = *piVar9;
          *(int **)(*piVar9 + 4) = piVar1;
          *piVar9 = (int)piVar1;
          if (iVar5 != 0) goto LAB_00533b4d;
        }
        else {
          pvVar6 = operator_new(0x2f0);
          local_4._0_1_ = 5;
          if (pvVar6 == (void *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = FUN_008b6370(pvVar6,param_1 + 0xcf,apvStack_2c,(int)param_1);
          }
          piVar1 = piVar8 + 0x50;
          piVar9 = (int *)(param_1[0xc1] + 0xdc);
          piVar8[0x51] = (int)piVar9;
          *piVar1 = *piVar9;
          *(int **)(*piVar9 + 4) = piVar1;
          local_4 = CONCAT31(local_4._1_3_,3);
          *piVar9 = (int)piVar1;
LAB_00533b4d:
          (**(code **)(*piVar8 + 0x34))(param_1[0xfb]);
          *(int *)(param_1[0xfb] + 0x48) = *(int *)(param_1[0xfb] + 0x48) + 1;
          (**(code **)(*piVar8 + 0x2c))();
        }
        local_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        cVar3 = FUN_00558bb0(this,2);
      } while (cVar3 != '\0');
    }
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"extra_info/explainer",0x14);
    local_48 = 0x14;
    local_4c[0x14] = '\0';
    local_4 = 7;
    FUN_00558a50(this,&local_4c,(undefined4 *)0x1);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"combinequeues",0xd);
    local_48 = 0xd;
    local_4c[0xd] = '\0';
    local_4 = 8;
    iVar5 = FUN_00558750(this,&local_4c,0);
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (iVar5 != 0) {
      FUN_008b2020(param_1[0xc1]);
    }
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"waitforall",10);
    local_48 = 10;
    local_4c[10] = '\0';
    local_4 = 9;
    iVar5 = FUN_00558750(this,&local_4c,0);
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (iVar5 != 0) {
      FUN_008b2000((void *)param_1[0xc1],0);
    }
    FUN_0052d010((int)param_1);
    FUN_008b1eb0((void *)param_1[0xc1],0);
    FUN_00533020(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00533d30 @ 00533d30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00533d30(float param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  int iVar10;
  ushort *puVar11;
  float fVar12;
  undefined4 unaff_EDI;
  float10 fVar13;
  float local_9c;
  float local_98;
  float local_94;
  float local_8c;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  int *local_58;
  undefined1 local_54 [4];
  int local_50;
  float local_4c;
  float local_48;
  undefined1 *local_44;
  float fStack_40;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00caeb03;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_70 = param_1;
  FUN_00531720((int)param_1);
  iVar10 = 0;
  if ((*(void **)((int)param_1 + 0x11c) != (void *)0x0) &&
     (iVar6 = FUN_0097e350(*(void **)((int)param_1 + 0x11c),0), iVar6 != 0)) {
    iVar6 = FUN_0097e350(*(void **)((int)param_1 + 0x11c),0);
    if (*(int *)(iVar6 + 0x60) == 0) {
      iVar6 = FUN_0097e350(*(void **)((int)param_1 + 0x11c),0);
      iVar6 = *(int *)(iVar6 + 0x5c);
      local_68 = 0.5;
    }
    else {
      iVar6 = FUN_0097e350(*(void **)((int)param_1 + 0x11c),0);
      iVar6 = *(int *)(iVar6 + 0x60);
      local_68 = -0.5;
    }
    if (iVar6 != 0) {
      local_50 = 0;
      local_4c = 0.0;
      local_48 = 0.0;
      local_44 = (undefined1 *)0x0;
      fVar12 = _DAT_00e525b0 + _DAT_00e525b0;
      puVar11 = *(ushort **)(iVar6 + 0xc);
      local_c = 0;
      local_6c = fVar12;
      if (0 < *(int *)(iVar6 + 4)) {
        do {
          FUN_005325e0(local_54,(undefined4 *)(*(int *)(iVar6 + 8) + (uint)*puVar11 * 0xc),
                       (undefined4 *)(*(int *)(iVar6 + 8) + (uint)puVar11[1] * 0xc),fVar12);
          FUN_005325e0(local_54,(undefined4 *)(*(int *)(iVar6 + 8) + (uint)puVar11[1] * 0xc),
                       (undefined4 *)(*(int *)(iVar6 + 8) + (uint)puVar11[2] * 0xc),fVar12);
          FUN_005325e0(local_54,(undefined4 *)(*(int *)(iVar6 + 8) + (uint)puVar11[2] * 0xc),
                       (undefined4 *)(*(int *)(iVar6 + 8) + (uint)*puVar11 * 0xc),fVar12);
          puVar11 = puVar11 + 3;
          iVar10 = iVar10 + 1;
          param_1 = local_70;
        } while (iVar10 < *(int *)(iVar6 + 4));
      }
      iVar10 = *(int *)((int)param_1 + 0x11c);
      for (fVar12 = local_48; local_28 = fVar12, fVar12 != (float)((int)local_44 + (int)local_48);
          fVar12 = (float)((int)fVar12 + 1)) {
        fVar7 = fVar12;
        if ((uint)local_4c <= (uint)fVar12) {
          fVar7 = (float)((int)fVar12 - (int)local_4c);
        }
        pfVar1 = *(float **)(local_50 + (int)fVar7 * 4);
        fVar7 = *pfVar1;
        fVar2 = pfVar1[1];
        fVar8 = fVar12;
        if ((uint)local_4c <= (uint)fVar12) {
          fVar8 = (float)((int)fVar12 - (int)local_4c);
        }
        iVar6 = *(int *)(local_50 + (int)fVar8 * 4);
        fVar8 = *(float *)(iVar6 + 0xc);
        fVar3 = *(float *)(iVar6 + 8);
        local_64 = fVar8 - fVar2;
        local_5c = 0;
        local_60 = -(fVar3 - fVar7);
        FUN_00412e20(&local_64);
        local_64 = local_64 * local_68;
        local_60 = local_60 * local_68;
        fVar5 = local_68 * 0.0;
        fVar7 = fVar7 + local_64;
        fVar2 = local_60 + fVar2;
        fVar3 = fVar3 + local_64;
        fVar8 = local_60 + fVar8;
        local_98 = fVar2 * *(float *)(iVar10 + 0x24) +
                   fVar5 * *(float *)(iVar10 + 0x30) + fVar7 * *(float *)(iVar10 + 0x18) +
                   *(float *)(iVar10 + 0x3c);
        local_94 = fVar2 * *(float *)(iVar10 + 0x28) +
                   fVar5 * *(float *)(iVar10 + 0x34) + fVar7 * *(float *)(iVar10 + 0x1c) +
                   *(float *)(iVar10 + 0x40);
        fVar2 = fVar8 * *(float *)(iVar10 + 0x24) +
                fVar5 * *(float *)(iVar10 + 0x30) + fVar3 * *(float *)(iVar10 + 0x18) +
                *(float *)(iVar10 + 0x3c);
        fVar7 = fVar8 * *(float *)(iVar10 + 0x28) +
                fVar5 * *(float *)(iVar10 + 0x34) + fVar3 * *(float *)(iVar10 + 0x1c) +
                *(float *)(iVar10 + 0x40);
        fVar8 = local_98 - fVar2;
        fVar3 = local_94 - fVar7;
        fVar8 = SQRT(fVar8 * fVar8 + fVar3 * fVar3);
        fVar13 = FUN_00acf400((double)(fVar8 / (_DAT_00e525b0 + _DAT_00e525b0)),(short)unaff_EDI);
        local_8c = (float)fVar13;
        if (local_8c < 1.0) {
          local_8c = 1.0;
        }
        local_30 = 0;
        local_74 = 0.0;
        fVar8 = (fVar8 - local_8c * _DAT_00e525b0) / local_8c + _DAT_00e525b0;
        local_78 = fVar7 - local_94;
        local_7c = fVar2 - local_98;
        local_38 = local_7c;
        local_34 = local_78;
        FUN_00412e20(&local_7c);
        local_7c = local_7c * fVar8;
        local_78 = local_78 * fVar8;
        local_74 = local_74 * fVar8;
        local_98 = local_7c * 0.5 + local_98;
        local_94 = local_78 * 0.5 + local_94;
        fVar13 = (float10)fpatan((float10)local_78,(float10)local_7c);
        fVar13 = FUN_004012c0((float)fVar13);
        local_6c = (float)fVar13;
        local_9c = 0.0;
        fVar7 = param_1;
        if (0.0 < local_8c) {
          do {
            local_58 = operator_new(0x110);
            local_c._0_1_ = 1;
            if (local_58 == (int *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = MeshInstance_Constructor(local_58);
            }
            piVar9[0x27] = piVar9[0x27] & 0xfffffffdU | 0x80;
            local_c = (uint)local_c._1_3_ << 8;
            local_58 = piVar9;
            (**(code **)(*piVar9 + 0x18))();
            local_44 = &stack0xffffff44;
            fVar13 = FUN_00990e30(-0.15,0.15);
            FUN_004012c0((float)(fVar13 + (float10)local_70));
            fStack_40 = DAT_00e525b4;
            fVar13 = FUN_00990e30(-0.1,0.1);
            local_44 = (undefined1 *)(float)fVar13;
            fVar13 = FUN_00990e30(-0.1,0.1);
            local_28 = (float)(fVar13 + (float10)local_9c);
            fStack_24 = (float)local_44 + local_98;
            fStack_20 = fStack_40 + local_94;
            (**(code **)(*piVar9 + 0x20))(&local_28);
            iVar6 = *(int *)((int)param_1 + 0x244);
            if ((iVar6 == 0) ||
               ((uint)(*(int *)((int)param_1 + 0x24c) - iVar6 >> 2) <=
                (uint)(*(int *)((int)param_1 + 0x248) - iVar6 >> 2))) {
              FUN_004688e0((void *)((int)param_1 + 0x240),*(undefined4 **)((int)param_1 + 0x248),1,
                           &local_58);
            }
            else {
              puVar4 = *(undefined4 **)((int)param_1 + 0x248);
              *puVar4 = piVar9;
              *(undefined4 **)((int)param_1 + 0x248) = puVar4 + 1;
            }
            local_98 = local_7c + local_98;
            local_9c = (float)((int)local_9c + 1);
            local_94 = local_78 + local_94;
            fVar7 = local_70;
            fVar12 = local_28;
          } while ((float)(int)local_9c < local_8c);
        }
        param_1 = fVar7;
      }
      FUN_00531040((int)local_54);
    }
  }
  *(undefined1 *)((int)param_1 + 0x254) = 0;
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00534300 @ 00534300 ////

void __fastcall FUN_00534300(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d229c4;
  return;
}


//// FUNCTION FUN_00534360 @ 00534360 ////

void __thiscall FUN_00534360(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 0x3f8);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0x3fc) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x400) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0x3fc);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 0x3fc) = puVar2 + 1;
    *(int *)((int)this + 0x404) = *(int *)((int)this + 0x404) + 1;
    return;
  }
  FUN_00531d10((void *)((int)this + 0x3f4),*(undefined4 **)((int)this + 0x3fc),1,&param_1);
  *(int *)((int)this + 0x404) = *(int *)((int)this + 0x404) + 1;
  return;
}


//// FUNCTION FUN_005343d0 @ 005343d0 ////

void __fastcall FUN_005343d0(int *param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  char **ppcVar10;
  char *pcStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  char acStack_50 [20];
  undefined4 auStack_3c [9];
  undefined4 auStack_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caeb40;
  local_c = ExceptionList;
  if ((DAT_0104a974 != 0) && (0.0 < *(float *)(DAT_0104a974 + 0x68))) {
    param_1[0xb1] = 0x3f800000;
    *(undefined1 *)(param_1 + 0xb9) = 0;
    *(undefined1 *)((int)param_1 + 0x2e5) = 0;
    return;
  }
  ExceptionList = &local_c;
  cVar2 = (**(code **)(*param_1 + 0x10c))();
  if ((cVar2 != '\0') &&
     (uVar3 = FUN_0043b6c0(param_1 + 0xb3,(float *)&DAT_00e4fa4c), (char)uVar3 != '\0')) {
    fVar8 = FUN_0043b710((float *)(param_1 + 0xb2));
    if ((float10)0.0 != fVar8) {
      fVar8 = FUN_0043b970(0xe4fa4c);
      fVar9 = FUN_0043b710((float *)(param_1 + 0xb2));
      FUN_00407100(param_1 + 0xb1,(float)((float10)(float)((float10)1.0 / fVar8) / fVar9));
    }
    if (1.0 <= (float)param_1[0xb1]) {
      pcStack_5c = acStack_50;
      acStack_50[0] = '\0';
      uStack_58 = 0;
      uStack_54 = 0x14;
      _strncpy(pcStack_5c,"task_repairman",0xe);
      uStack_58 = 0xe;
      pcStack_5c[0xe] = '\0';
      uStack_4 = 0;
      FUN_008b1ee0((void *)param_1[0xc1],&pcStack_5c,0);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_54) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_5c);
      }
    }
  }
  fVar1 = (float)param_1[0xb1];
  if ((char)param_1[0xb9] == '\0') {
    if (fVar1 < 0.05 != (fVar1 == 0.05)) {
      if (param_1[0x7f] != 0) {
        FUN_00938f20(param_1[0x7f]);
      }
      *(undefined1 *)(param_1 + 0xb9) = 1;
      param_1[0xba] = DAT_00e4fa4c;
      iVar4 = FUN_00566c70();
      param_1[0x94] = iVar4;
      FUN_00533d30((float)param_1);
      pcStack_5c = acStack_50;
      acStack_50[0] = '\0';
      uStack_58 = 0;
      uStack_54 = 0x20;
      pcStack_5c = _malloc(0x20);
      _strncpy(pcStack_5c,"TANNOY_BUILDINGS_IN_DISREPAIR",0x1d);
      uStack_58 = 0x1d;
      pcStack_5c[0x1d] = '\0';
      iVar5 = 2;
      ppcVar10 = &pcStack_5c;
      iVar4 = 2;
      uStack_4 = 1;
      FUN_004f3b20();
      FUN_004f8a00(iVar4,ppcVar10,iVar5);
      if (0x14 < uStack_54) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_5c);
      }
    }
  }
  else {
    if (0.95 <= fVar1) {
      *(undefined1 *)(param_1 + 0xb9) = 0;
      iVar4 = FUN_00566c70();
      param_1[0x94] = iVar4;
    }
    iVar5 = (**(code **)(*param_1 + 0x80))();
    iVar4 = *(int *)(DAT_0104cdf4 + 0x3c);
    puVar7 = (undefined4 *)param_1[0x91];
    iVar6 = 0;
    if (puVar7 != (undefined4 *)param_1[0x92]) {
      do {
        if (((void *)*puVar7 != (void *)0x0) && ((iVar5 + iVar4) % (iVar6 + 0x1e) == 0)) {
          FUN_009833d0((void *)*puVar7,auStack_3c,(byte *)"_sp_flash",0);
          FUN_00527a40(auStack_18,0xffff4000,0x3f800000);
        }
        iVar6 = (iVar6 + 1) % 0x14;
        puVar7 = puVar7 + 1;
      } while (puVar7 != (undefined4 *)param_1[0x92]);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005346f0 @ 005346f0 ////

undefined4 * __thiscall FUN_005346f0(void *this,byte param_1)

{
  FUN_005328f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00534710 @ 00534710 ////

undefined4 * __fastcall FUN_00534710(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caeb6e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008ab900(param_1);
  *param_1 = &PTR_FUN_00d22c70;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  puVar1 = param_1 + 0x37;
  param_1[0x39] = 0;
  *puVar1 = 0;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *puVar1 = param_1 + 0x33;
  param_1[0x34] = puVar1;
  param_1[0x32] = &PTR_LAB_00d229c4;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005347b0 @ 005347b0 ////

undefined4 * __thiscall FUN_005347b0(void *this,byte param_1)

{
  FUN_005347d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005347d0 @ 005347d0 ////

void __fastcall FUN_005347d0(undefined4 *param_1)

{
  FUN_00532440(param_1 + 0x32);
  FUN_008ab6b0(param_1);
  return;
}


//// FUNCTION FUN_005347f0 @ 005347f0 ////

void __fastcall FUN_005347f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  ulonglong uVar5;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
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
  puStack_8 = &LAB_00caeb98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (((DAT_0104c518 == param_1) && (ExceptionList = &pvStack_c, DAT_00f885f4 != param_1)) &&
     ((DAT_00f885f4 != DAT_0104c6c8 || (ExceptionList = &pvStack_c, DAT_00f885f4 == (int *)0x0)))) {
    ExceptionList = &pvStack_c;
    if ((int *)param_1[0x7f] != (int *)0x0) {
      ExceptionList = &pvStack_c;
      (**(code **)(*(int *)param_1[0x7f] + 0xdc))(0);
    }
    (*(code *)DAT_0104c504[1])();
    DAT_0104c518 = (int *)0x0;
    (*(code *)*DAT_0104c504)();
  }
  if (((char)param_1[0xfc] != '\0') && (param_1[0x7f] != 0)) {
    FUN_00938ea0(param_1[0x7f]);
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  if ((((float)param_1[0x33] == 0.0) && ((void *)param_1[0x47] != (void *)0x0)) &&
     (iVar2 = FUN_0097e350((void *)param_1[0x47],0), iVar2 != 0)) {
    iVar2 = FUN_0097e350((void *)param_1[0x47],0);
    if (*(float *)(iVar2 + 0xd4) <= *(float *)(iVar2 + 0xd8)) {
      iVar2 = *(int *)(iVar2 + 0xd8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xd4);
    }
    param_1[0x33] = iVar2;
  }
  if ((char)param_1[0xf5] != '\0') {
    (**(code **)(*param_1 + 0x144))();
  }
  iVar2 = param_1[0xf3];
  uVar4 = *(int *)(DAT_0104cdf4 + 0x3c) - iVar2;
  if (DAT_00e525a8 < uVar4) {
    FUN_005311a0(param_1,(int)param_1);
    uVar4 = extraout_ECX;
    iVar2 = extraout_EDX;
  }
  switch(param_1[0xae]) {
  case 0:
    (**(code **)(*param_1 + 0x120))();
    break;
  case 1:
    uVar4 = param_1[0xe7] & 0xfffffffe;
    param_1[0xe7] = uVar4;
    if ((param_1[0xf0] == 0) && (param_1[0xf1] == 0)) {
      FUN_0052e260((int)param_1);
      uVar4 = 0;
      iVar2 = extraout_EDX_00;
      if ((int *)param_1[0xf1] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0xf1] + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
        FUN_009e4330((void *)param_1[0xf1]);
        uVar4 = extraout_ECX_00;
        iVar2 = extraout_EDX_01;
      }
    }
    uVar5 = FUN_00990ae0(uVar4,iVar2);
    if ((uint)param_1[0xed] <= (uint)uVar5) {
      piVar1 = (int *)param_1[0xf1];
      param_1[0xee] = 0x3f800000;
      param_1[0xae] = 2;
      if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 0x27) & 0x40) == 0)) {
        (**(code **)(*piVar1 + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
        FUN_009e4330((void *)param_1[0xf1]);
      }
    }
    break;
  case 2:
    param_1[0xe7] = param_1[0xe7] & 0xfffffffe;
    FUN_008b1eb0((void *)param_1[0xc1],0);
    pcStack_6c = acStack_60;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x14;
    _strncpy(pcStack_6c,"task_builder",0xc);
    uStack_68 = 0xc;
    pcStack_6c[0xc] = '\0';
    uStack_4 = 0;
    FUN_008b1ee0((void *)param_1[0xc1],&pcStack_6c,1);
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_6c);
    }
    if ((float)param_1[0xb7] <= (float)param_1[0xee]) {
      (**(code **)(*param_1 + 0x194))();
    }
    goto LAB_00534a9e;
  case 3:
    param_1[0xe7] = param_1[0xe7] & 0xfffffffe;
    uVar5 = FUN_00990ae0(uVar4,iVar2);
    if ((uint)uVar5 < (uint)param_1[0xed]) break;
    (**(code **)(*param_1 + 0x1c0))();
    goto LAB_00534cdf;
  case 4:
    param_1[0xe7] = param_1[0xe7] & 0xfffffffe;
    uVar5 = FUN_00990ae0(uVar4,iVar2);
    if ((uint)param_1[0xed] <= (uint)uVar5) {
      (**(code **)(*param_1 + 0x1c0))();
      param_1[0xb7] = param_1[0xb6];
    }
    (**(code **)(*param_1 + 0xf4))();
LAB_00534a9e:
    if ((undefined4 *)param_1[0xef] != (undefined4 *)0x0) {
      FUN_0040a5b0((undefined4 *)param_1[0xef]);
      param_1[0xef] = 0;
    }
    break;
  case 5:
    if ((undefined4 *)param_1[0xf0] != (undefined4 *)0x0) {
      FUN_0040a5b0((undefined4 *)param_1[0xf0]);
      param_1[0xf0] = 0;
    }
    if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
      FUN_0040a5b0((undefined4 *)param_1[0xf1]);
      param_1[0xf1] = 0;
    }
    param_1[0xe7] = param_1[0xe7] & 0xfffffffe;
    piVar1 = (int *)param_1[0x47];
    iStack_78 = piVar1[0xf];
    iStack_74 = piVar1[0x10];
    iStack_70 = piVar1[0x11];
    uVar3 = FUN_00445f00(&iStack_78,(float *)(param_1 + 0x40));
    if ((((char)uVar3 != '\0') || ((float)piVar1[0x20] != (float)param_1[0x31])) ||
       (piVar1[0x1f] != 0x3f800000)) {
      (**(code **)(*piVar1 + 0x20))(param_1 + 0x40,param_1[0x31],0x3f800000);
    }
    FUN_005343d0(param_1);
    FUN_00451090(DAT_00f88720,(float)param_1[0xa9]);
    FUN_008b1eb0((void *)param_1[0xc1],1);
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"task_builder",0xc);
    uStack_48 = 0xc;
    pcStack_4c[0xc] = '\0';
    uStack_4 = 1;
    FUN_008b1ee0((void *)param_1[0xc1],&pcStack_4c,0);
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    if ((char)param_1[0xb9] != '\0') {
      FUN_00401de0(apvStack_2c,"heal",0xffffffff);
      uStack_4 = 2;
      FUN_008b1ee0((void *)param_1[0xc1],apvStack_2c,0);
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      uVar3 = FUN_00529f90((int)(param_1 + 0x90));
      if ((char)uVar3 != '\0') {
        FUN_00533d30((float)param_1);
      }
    }
    if (((char)param_1[0xbb] == '\0') && ((float)param_1[0xb7] <= (float)param_1[0xee])) {
      (**(code **)(*param_1 + 0x194))();
    }
    (**(code **)(*param_1 + 0xf4))();
    *(undefined1 *)(param_1 + 0x18) = 0;
LAB_00534cdf:
    param_1[0xb7] = param_1[0xb6];
  }
  FUN_00539af0(param_1);
  FUN_0053d480((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00534d30 @ 00534d30 ////

void __thiscall FUN_00534d30(void *this,int param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  bVar1 = FUN_00413cc0(DAT_00f87aa0);
  if (!bVar1) {
    if (((*(int *)((int)this + 0x1fc) == 0) && (*(int *)((int)this + 0x11c) != 0)) &&
       (*(int *)((int)this + 0x2b8) == 5)) {
      puVar4 = FUN_0093af40(this);
      (**(code **)(*(int *)((int)this + 0x1e8) + 4))();
      *(undefined4 **)((int)this + 0x1fc) = puVar4;
      (*(code *)**(undefined4 **)((int)this + 0x1e8))();
    }
    if ((((*(int *)((int)this + 0x11c) != 0) && (*(int *)((int)this + 0x1fc) != 0)) &&
        ((((byte)((uint)*(undefined4 *)(*(int *)((int)this + 0x11c) + 0x9c) >> 0x19) & 1) != 0 ||
         ((sVar3 = FUN_005546e0(), (char)sVar3 != '\0' || (param_2 != '\0')))))) &&
       (*(int *)((int)this + 0x2b8) == 5)) {
      uVar5 = FUN_0052f660(this,param_1);
      if ((char)uVar5 == '\0') {
        if ((((*(uint *)((int)this + 0x2e0) & 0x1000) != 0) &&
            (iVar6 = FUN_0097e350(*(void **)((int)this + 0x11c),0), iVar6 != 0)) &&
           (iVar6 = FUN_0097e350(*(void **)((int)this + 0x11c),0),
           (*(uint *)(iVar6 + 0xe4) & 0x100000) == 0)) {
          FUN_005286d0(*(void **)((int)this + 0x11c),1);
        }
        cVar2 = (**(code **)(**(int **)((int)this + 0x1fc) + 0x20))();
        if ((cVar2 == '\0') && (*(char *)((int)this + 0x3f0) == '\0')) {
          *(undefined1 *)((int)this + 0x3f0) = 1;
          FUN_005392c0("UI_BUILDING_FLOORPLAN_REVEALED");
        }
        *(undefined1 *)(*(int *)((int)this + 0x1fc) + 0x254) = 1;
        FUN_00534360(this,param_1);
      }
      *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    }
  }
  return;
}


//// FUNCTION FUN_00534e80 @ 00534e80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00534e80(int *param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  if (param_1[0xae] != 0) {
    uVar2 = (**(code **)(*param_1 + 0xc4))();
    uVar1 = (uint)uVar2;
    if ((char)uVar2 == '\0') {
      if (DAT_00f885f4 == param_1) {
        (*(code *)DAT_0104c504[1])();
        DAT_0104c518 = param_1;
        (*(code *)*DAT_0104c504)();
        if ((_DAT_0104c4c0 != 0.0) ||
           ((uVar1 = param_1[0x7f], uVar1 != 0 && (*(char *)(uVar1 + 0x255) != '\0')))) {
          uVar1 = FUN_00534d30(param_1,(int)param_1,'\0');
        }
      }
      else {
        uVar3 = FUN_00990ae0(extraout_ECX,(int)((ulonglong)uVar2 >> 0x20));
        uVar1 = (uint)uVar3;
        param_1[0x103] = uVar1;
        if ((DAT_0104c518 != param_1) || (DAT_00f885f4 != DAT_0104c6c8)) goto LAB_00534f21;
      }
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
LAB_00534f21:
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00534f30 @ 00534f30 ////

undefined4 * __fastcall FUN_00534f30(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caecf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539710(param_1);
  puVar6 = (undefined4 *)0x0;
  *param_1 = &PTR_FUN_00d22a0c;
  param_1[0x1e] = &PTR_LAB_00d229e8;
  param_1[0x28] = &PTR_FUN_00d229d0;
  local_4 = 0;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  piVar1 = param_1 + 0x56;
  param_1[0x58] = 0;
  *piVar1 = 0;
  param_1[0x57] = 0;
  param_1[0x5d] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  puVar5 = param_1 + 0x5f;
  param_1[0x61] = 0;
  *puVar5 = 0;
  param_1[0x60] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x5a] = &PTR_LAB_00d1b6c8;
  param_1[0x5c] = puVar5;
  *puVar5 = param_1 + 0x5b;
  param_1[0x6b] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = param_1 + 0x68;
  param_1[0x68] = &PTR_FUN_00d16bec;
  param_1[0x6d] = 0;
  param_1[0x71] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = param_1 + 0x6e;
  param_1[0x6e] = &PTR_FUN_00d16bec;
  param_1[0x73] = 0;
  param_1[0x77] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = param_1 + 0x74;
  param_1[0x74] = &PTR_FUN_00d16bec;
  param_1[0x79] = 0;
  param_1[0x7d] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = param_1 + 0x7a;
  param_1[0x7a] = &PTR_LAB_00d22784;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  fVar7 = FUN_004012c0(0.0);
  param_1[0x85] = (float)fVar7;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  puVar5 = param_1 + 0x9b;
  param_1[0x9d] = 0;
  *puVar5 = 0;
  param_1[0x9c] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x96] = &PTR_LAB_00d1a8e0;
  param_1[0x98] = puVar5;
  *puVar5 = param_1 + 0x97;
  param_1[0xa6] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = param_1 + 0xa3;
  param_1[0xa3] = &PTR_LAB_00d22794;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 10;
  param_1[0xac] = 0;
  param_1[0xad] = 0xffffffff;
  param_1[0xae] = 5;
  param_1[0xb0] = 0x3f800000;
  local_4._0_1_ = 0xf;
  param_1[0xb1] = 0x3f800000;
  FUN_0043b510(param_1 + 0xb2);
  FUN_0043b520(param_1 + 0xb3,0.0);
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = param_1[0xb8] & 0xffff8834 | 0x834;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)((int)param_1 + 0x2e5) = 0;
  FUN_0043b510(param_1 + 0xba);
  piVar2 = param_1 + 0xbc;
  param_1[0xbf] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d227a4;
  param_1[0xc1] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = param_1 + 0xca;
  *(undefined2 *)(param_1 + 0xca) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 10;
  param_1[0xcf] = param_1 + 0xd2;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0x14;
  param_1[0xd7] = param_1 + 0xda;
  *(undefined1 *)(param_1 + 0xda) = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0x14;
  param_1[0xdf] = param_1 + 0xe2;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0x14;
  *(undefined1 *)((int)param_1 + 0x3ca) = 1;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  param_1[0xf3] = 0;
  param_1[0xe7] = param_1[0xe7] | 1;
  param_1[0xf9] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = param_1 + 0xf6;
  param_1[0xf6] = &PTR_FUN_00d166dc;
  param_1[0xfb] = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x94] = 0;
  param_1[0xba] = DAT_00e4fa4c;
  local_4 = CONCAT31(local_4._1_3_,0x17);
  param_1[0x67] = 0;
  param_1[0x83] = param_1;
  FUN_00acdb9e(0xe52798);
  iVar3 = FUN_0097dda0();
  param_1[0x84] = iVar3;
  if (s___AVCAssetExplainerList_TM___00e52778[0x1f] != '\0') {
    iVar3 = 0x204;
    pcVar8 = "PossessionLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe52798);
    FUN_0097df60(pcVar4,pcVar8,iVar3);
    s___AVCAssetExplainerList_TM___00e52778[0x1f] = '\0';
  }
  param_1[0x54] = param_1;
  FUN_00acdb9e(0xe52798);
  iVar3 = FUN_0097dda0();
  param_1[0x55] = iVar3;
  if (s___AVCAssetExplainerList_TM___00e52778[0x1e] != '\0') {
    iVar3 = 0x148;
    pcVar8 = "ConnectionLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe52798);
    FUN_0097df60(pcVar4,pcVar8,iVar3);
    s___AVCAssetExplainerList_TM___00e52778[0x1e] = '\0';
  }
  param_1[0x58] = param_1;
  FUN_00acdb9e(0xe52798);
  iVar3 = FUN_0097dda0();
  param_1[0x59] = iVar3;
  if (s___AVCAssetExplainerList_TM___00e52778[0x1d] != '\0') {
    iVar3 = 0x158;
    pcVar8 = "AssetLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe52798);
    FUN_0097df60(pcVar4,pcVar8,iVar3);
    s___AVCAssetExplainerList_TM___00e52778[0x1d] = '\0';
  }
  param_1[0x57] = &DAT_0104c4e4;
  *piVar1 = (int)DAT_0104c4e4;
  *(int **)((int)DAT_0104c4e4 + 4) = piVar1;
  DAT_0104c4e4 = piVar1;
  param_1[0xf4] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0x47] = 0;
  puVar5 = operator_new(0xfc);
  local_4._0_1_ = 0x18;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = FUN_00534710(puVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,0x17);
  (**(code **)(*piVar2 + 4))();
  param_1[0xc1] = puVar6;
  (**(code **)*piVar2)();
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005354b0 @ 005354b0 ////

undefined1 __fastcall FUN_005354b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x485);
}


//// FUNCTION FUN_005354c0 @ 005354c0 ////

float10 __thiscall FUN_005354c0(int *param_1,float *param_2)

{
  char cVar1;
  float10 fVar2;
  
  if (param_1[0x47] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if (cVar1 == '\0') {
      fVar2 = FUN_0097f880((void *)param_1[0x47],param_2,(undefined4 *)0x0);
      return fVar2;
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00535510 @ 00535510 ////

void __fastcall FUN_00535510(int *param_1,undefined4 param_2)

{
  FUN_00528280(param_1,param_2);
  FUN_005392c0("BUILDING_COMPLETED");
  return;
}


//// FUNCTION FUN_00535570 @ 00535570 ////

void __fastcall FUN_00535570(int param_1)

{
  FUN_00528340(param_1);
  FUN_00528390(param_1 + -0xa0);
  *(undefined1 *)(param_1 + 0x329) = 1;
  return;
}


//// FUNCTION FUN_00535590 @ 00535590 ////

void FUN_00535590(void)

{
  return;
}


//// FUNCTION FUN_005355e0 @ 005355e0 ////

int __fastcall FUN_005355e0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30;
}


//// FUNCTION FUN_005356b0 @ 005356b0 ////

void __cdecl FUN_005356b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0xc;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0xc; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_005357a0 @ 005357a0 ////

undefined4 __thiscall FUN_005357a0(void *this,float *param_1)

{
  if ((((*(float *)this == *param_1) && (*(float *)((int)this + 8) == param_1[2])) &&
      (*(float *)((int)this + 0xc) == param_1[3])) && (*(float *)((int)this + 4) == param_1[1])) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00535800 @ 00535800 ////

void __fastcall FUN_00535800(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 auStack_30 [12];
  
  if ((((*(char *)((int)param_1 + 0x486) != '\0') || (*(char *)((int)param_1 + 0x487) != '\0')) &&
      ((void *)param_1[0x47] != (void *)0x0)) &&
     (iVar3 = FUN_0097e350((void *)param_1[0x47],0), (*(uint *)(iVar3 + 0xe4) >> 6 & 1) != 0)) {
    cVar2 = (**(code **)(*param_1 + 0x118))();
    pcVar1 = (char *)((int)param_1 + 0x485);
    if (cVar2 == '\0') {
      FUN_009833d0((void *)param_1[0x47],auStack_30,(byte *)"_sp_pavement_0",(int)pcVar1);
    }
    else {
      *pcVar1 = '\0';
    }
    *(undefined1 *)((int)param_1 + 0x486) = 0;
    if (*(char *)((int)param_1 + 0x487) != '\0') {
      if (*pcVar1 != '\0') {
        FUN_004662f0();
      }
      *(undefined1 *)((int)param_1 + 0x487) = 0;
    }
  }
  FUN_005347f0(param_1);
  return;
}


//// FUNCTION FUN_005358a0 @ 005358a0 ////

void __fastcall FUN_005358a0(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x3c9) != '\0') ||
     ((param_1[0x47] != 0 && ((*(uint *)(param_1[0x47] + 0x9c) >> 0x19 & 1) != 0)))) {
    (**(code **)(*param_1 + 0x1a0))();
    *(undefined1 *)((int)param_1 + 0x3c9) = 0;
  }
  *(undefined1 *)((int)param_1 + 0x3ca) = 1;
  FUN_00529660(param_1);
  return;
}


//// FUNCTION FUN_005358f0 @ 005358f0 ////

void __fastcall FUN_005358f0(int *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  LONG LVar7;
  int iVar8;
  undefined4 local_14;
  int *local_10 [4];
  
  FUN_0052f790(param_1);
  if ((DAT_00f87aa0 == 0) || (bVar2 = FUN_00413cc0(DAT_00f87aa0), !bVar2)) {
    puVar4 = (undefined4 *)param_1[0x108];
    if (puVar4 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar4 + 4);
      uVar1 = DAT_0105b588;
      if ((LVar7 == 0) && (DAT_0105b588 = 1, puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)();
      }
      DAT_0105b588 = uVar1;
      param_1[0x108] = 0;
    }
  }
  else {
    if ((param_1[0x108] == 0) && (DAT_0105be08 < 2)) {
      piVar3 = (int *)(**(code **)(*param_1 + 0x1bc))();
      param_1[0x108] = (int)piVar3;
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x4c))();
      iVar6 = *piVar3;
      uVar5 = (**(code **)(*param_1 + 0x34))(local_10,*puVar4,0x3f800000);
      (**(code **)(iVar6 + 0x20))(uVar5);
    }
    local_14 = 2;
    bVar2 = true;
    local_10[0] = param_1;
    if ((((void *)param_1[0x108] != (void *)0x0) &&
        (iVar6 = FUN_0097e350((void *)param_1[0x108],0), iVar6 != 0)) &&
       ((*(byte *)(iVar6 + 0xe4) & 0x40) != 0)) {
      bVar2 = false;
      iVar8 = 0;
      if (0 < *(int *)(iVar6 + 0x38)) {
        piVar3 = *(int **)(iVar6 + 0x3c);
        do {
          if ((*(byte *)(*piVar3 + 0x54) & 8) == 0) {
            bVar2 = true;
            break;
          }
          iVar8 = iVar8 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar8 < *(int *)(iVar6 + 0x38));
      }
    }
    switch(param_1[0xae]) {
    case 0:
      piVar3 = (int *)param_1[0xef];
      break;
    case 1:
    case 2:
    case 3:
      piVar3 = (int *)param_1[0xf1];
      if (piVar3 != (int *)0x0) goto LAB_005359f1;
    case 4:
    case 5:
      if (!bVar2) {
        puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x4c))();
        iVar6 = *(int *)param_1[0x108];
        uVar5 = (**(code **)(*param_1 + 0x34))(local_10,*puVar4,0x3f800000);
        (**(code **)(iVar6 + 0x20))(uVar5);
        (**(code **)(*(int *)param_1[0x108] + 0x10))(&stack0xffffffd8,1);
        return;
      }
      piVar3 = (int *)param_1[0x47];
      break;
    default:
      goto switchD_005359c6_default;
    }
    if (piVar3 != (int *)0x0) {
LAB_005359f1:
      (**(code **)(*piVar3 + 0x10))(&local_14);
      return;
    }
  }
switchD_005359c6_default:
  return;
}


//// FUNCTION FUN_00535ab0 @ 00535ab0 ////

void __thiscall FUN_00535ab0(void *this,float *param_1,float *param_2)

{
  if ((((*param_1 != *(float *)((int)this + 0x100)) || (param_1[1] != *(float *)((int)this + 0x104))
       ) || (param_1[2] != *(float *)((int)this + 0x108))) ||
     (*param_2 != *(float *)((int)this + 0xc4))) {
    (**(code **)(*(int *)this + 0x148))();
    (**(code **)(*(int *)this + 0x1ac))(param_1,param_2);
    (**(code **)(*(int *)this + 0x144))();
  }
  return;
}


//// FUNCTION FUN_00535b30 @ 00535b30 ////

void __fastcall FUN_00535b30(int *param_1)

{
  FUN_00531220(param_1);
  (*(code *)DAT_00f885f8[1])();
                    /* WARNING: Could not recover jumptable at 0x00535b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_00f8860c = param_1;
  (*(code *)*DAT_00f885f8)();
  return;
}


//// FUNCTION FUN_00535b60 @ 00535b60 ////

void __fastcall FUN_00535b60(int *param_1)

{
  FUN_00531220(param_1);
  (*(code *)DAT_00f885f8[1])();
                    /* WARNING: Could not recover jumptable at 0x00535b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_00f8860c = param_1;
  (*(code *)*DAT_00f885f8)();
  return;
}


//// FUNCTION FUN_00535b90 @ 00535b90 ////

void FUN_00535b90(void)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  if (DAT_0104c554 != (undefined4 *)0x0) {
    _Memory = (void *)DAT_0104c554[0x10];
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    DAT_0104c554[0x10] = 0;
    puVar1 = DAT_0104c554;
    LVar3 = InterlockedDecrement(DAT_0104c554 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0104c554 = (undefined4 *)0x0;
    DAT_0105b588 = uVar2;
  }
  return;
}


//// FUNCTION FUN_00535c00 @ 00535c00 ////

undefined4 __fastcall FUN_00535c00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 1;
  }
  iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x30;
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0);
}


//// FUNCTION FUN_00535d00 @ 00535d00 ////

void __cdecl FUN_00535d00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -0xc;
    param_3 = param_3 + -0xc;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00535d50 @ 00535d50 ////

void FUN_00535d50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  DAT_0104c550 = 0;
  puVar2 = DAT_0104c560;
  if (DAT_0104c560 != &DAT_0104c56c) {
    do {
      (**(code **)(*(int *)puVar2[2] + 0x1c8))();
      puVar1 = puVar2 + 1;
      puVar2 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104c56c);
  }
  return;
}


//// FUNCTION FUN_00535d90 @ 00535d90 ////

void __fastcall FUN_00535d90(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  int aiStack_5c [2];
  int aiStack_54 [2];
  int aiStack_4c [2];
  undefined1 auStack_44 [20];
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1[0xe8] != 0) {
    pfVar1 = (float *)(**(code **)(*param_1 + 0xf0))(&local_68);
    if (0.0 < *pfVar1) {
      FUN_00452ec0((int *)param_1[0xe8]);
      iVar3 = 0x19;
      do {
        puVar11 = (undefined *)0x0;
        puVar8 = (undefined *)0x4;
        iVar6 = 7;
        piVar4 = aiStack_5c;
        uVar2 = (**(code **)(*param_1 + 0x7c))();
        FUN_009af7b0(DAT_0105cbec,uVar2,piVar4,iVar6,puVar8);
        iVar9 = 0;
        puVar8 = (undefined *)0xb;
        iVar6 = 8;
        piVar4 = aiStack_54;
        uVar2 = (**(code **)(*param_1 + 0x7c))();
        FUN_009af7b0(DAT_0105cbec,uVar2,piVar4,iVar6,puVar8);
        piVar7 = (int *)0x0;
        puVar8 = &lpType_0000000a;
        iVar6 = 8;
        piVar4 = aiStack_4c;
        uVar2 = (**(code **)(*param_1 + 0x7c))();
        FUN_009af7b0(DAT_0105cbec,uVar2,piVar4,iVar6,puVar8);
        uVar2 = (**(code **)(*param_1 + 0x7c))(auStack_44,8,0xc,0);
        FUN_009af7b0(DAT_0105cbec,uVar2,piVar7,iVar9,puVar11);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      (**(code **)(*param_1 + 0x38))(&local_68);
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_28 = 0xffffffff;
      uStack_2c = FUN_009b01a0("BUILDING_DEMOLISH_01");
      uStack_30 = uStack_30 | 1;
      puVar10 = &DAT_00d17518;
      iVar6 = 0;
      puVar5 = &uStack_30;
      iVar3 = 2;
      uStack_20 = local_68;
      uStack_1c = uStack_64;
      this = (void *)FUN_004f3b20();
      FUN_004f3270(this,iVar3,(byte *)puVar5,iVar6,puVar10);
      FUN_009582c0(param_1 + 0x40);
      (**(code **)(*param_1 + 0x1b8))();
      FUN_004ac6f0();
    }
  }
  return;
}


//// FUNCTION FUN_00535f10 @ 00535f10 ////

uint __fastcall FUN_00535f10(int *param_1)

{
  void *this;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  uint uStack_4c;
  float afStack_40 [2];
  undefined4 auStack_38 [9];
  undefined4 auStack_14 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  if ((char)uVar1 != '\0') {
    uVar1 = param_1[0xae];
    iVar5 = 0;
    if ((uVar1 != 0) && (this = (void *)param_1[0x47], this != (void *)0x0)) {
      iVar2 = FUN_0097e350(this,0);
      uVar1 = 0;
      if (iVar2 != 0) {
        *(undefined1 *)((int)param_1 + 0x485) = 0;
        uVar1 = FUN_0040b670(auStack_38);
        uStack_4c = 0;
        if (0 < *(int *)(iVar2 + 0x48)) {
          do {
            iVar4 = 0xf;
            bVar10 = true;
            pcVar6 = (char *)(*(int *)(iVar2 + 0x4c) + iVar5);
            pcVar8 = "_sp_pavement_0";
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar10 = *pcVar6 == *pcVar8;
              pcVar6 = pcVar6 + 1;
              pcVar8 = pcVar8 + 1;
            } while (bVar10);
            if (bVar10) {
              *(undefined1 *)((int)param_1 + 0x485) = 1;
              puVar7 = (undefined4 *)(*(int *)(iVar2 + 0x4c) + 0x20 + iVar5);
              puVar9 = auStack_38;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
              FUN_009aa830(auStack_38,(float *)((int)this + 0x18));
              FUN_009840b0(afStack_40,auStack_14);
              uVar11 = WorldToOccupancyGridCoord(afStack_40);
              uVar3 = FUN_009e2630((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
              if ((char)uVar3 != '\0') {
                return CONCAT31((int3)((uint)uVar3 >> 8),1);
              }
            }
            uVar1 = uStack_4c + 1;
            iVar5 = iVar5 + 0x50;
            uStack_4c = uVar1;
          } while ((int)uVar1 < *(int *)(iVar2 + 0x48));
        }
      }
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00536010 @ 00536010 ////

void __fastcall FUN_00536010(int *param_1)

{
  void *this;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  int iStack_4c;
  float afStack_40 [2];
  undefined4 auStack_38 [9];
  undefined4 auStack_14 [4];
  
  cVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((cVar1 != '\0') && (iVar4 = 0, param_1[0xae] != 0)) &&
      (this = (void *)param_1[0x47], this != (void *)0x0)) &&
     (iVar2 = FUN_0097e350(this,0), iVar2 != 0)) {
    *(undefined1 *)((int)param_1 + 0x485) = 0;
    FUN_0040b670(auStack_38);
    iStack_4c = 0;
    if (0 < *(int *)(iVar2 + 0x48)) {
      do {
        iVar3 = 0xf;
        bVar9 = true;
        pcVar5 = (char *)(*(int *)(iVar2 + 0x4c) + iVar4);
        pcVar7 = "_sp_pavement_0";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar9 = *pcVar5 == *pcVar7;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar9);
        if (bVar9) {
          *(undefined1 *)((int)param_1 + 0x485) = 1;
          puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x4c) + 0x20 + iVar4);
          puVar8 = auStack_38;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_009aa830(auStack_38,(float *)((int)this + 0x18));
          FUN_009840b0(afStack_40,auStack_14);
          uVar10 = WorldToOccupancyGridCoord(afStack_40);
          FUN_009e25a0((uint)uVar10,(int)((ulonglong)uVar10 >> 0x20));
        }
        iStack_4c = iStack_4c + 1;
        iVar4 = iVar4 + 0x50;
      } while (iStack_4c < *(int *)(iVar2 + 0x48));
    }
  }
  return;
}


//// FUNCTION FUN_00536100 @ 00536100 ////

void __fastcall FUN_00536100(int *param_1)

{
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0xa0))();
  uVar1 = extraout_ECX;
  uVar2 = extraout_EDX;
  if (param_1[0xe8] != 0) {
    FUN_004ac6f0();
    uVar1 = extraout_ECX_00;
    uVar2 = extraout_EDX_00;
  }
  uVar3 = FUN_00990ae0(uVar1,uVar2);
  param_1[0xed] = (int)uVar3 + 0x32 + param_1[0xaa];
  if (((float)param_1[0xb7] <= 0.0) ||
     ((DAT_0104a974 != 0 && (*(float *)(DAT_0104a974 + 0x74) != 0.0)))) {
    param_1[0xae] = 4;
  }
  else {
    param_1[0xae] = 1;
  }
  (**(code **)(*param_1 + 0x38))(&uStack_34);
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_24 = 0xffffffff;
  uStack_28 = FUN_009b01a0("BUILDING_PLACEMENT_LARGE_01");
  puVar7 = &DAT_00d17518;
  uStack_2c = uStack_2c | 1;
  iVar6 = 0;
  puVar5 = &uStack_2c;
  iVar4 = 2;
  uStack_1c = uStack_34;
  uStack_18 = uStack_30;
  this = (void *)FUN_004f3b20();
  FUN_004f3270(this,iVar4,(byte *)puVar5,iVar6,puVar7);
  FUN_009582c0(param_1 + 0x40);
  FUN_0052fe80(param_1);
  return;
}


//// FUNCTION FUN_00536260 @ 00536260 ////

void __cdecl FUN_00536260(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0xc;
  }
  return;
}


//// FUNCTION FUN_00536290 @ 00536290 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00536290(void *this,int param_1,float *param_2,char param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *this_00;
  int iVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 *local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  int local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 *local_a4;
  undefined4 *local_a0;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6a;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_1e;
  float local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caed1e;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0x10);
  this_00 = (undefined4 *)0x0;
  if (0 < iVar3) {
    ExceptionList = &local_c;
    this_00 = FUN_00452010();
    FUN_009e6720(this_00,iVar3 * 4,iVar3 * 2);
    this_00[0xc] = this_00[0xc] & 0xfffffff7;
    local_a4 = operator_new(0x24);
    local_4 = 0;
    if (local_a4 == (undefined4 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_009910f0(local_a4);
    }
    this_00[0x10] = iVar3;
    *(undefined1 *)(iVar3 + 0xc) = 6;
    *(uint *)(this_00[0x10] + 0x10) = *(uint *)(this_00[0x10] + 0x10) & 0xbfffffff;
    *(uint *)(this_00[0x10] + 0x10) = *(uint *)(this_00[0x10] + 0x10) | 0x80000000;
    *(uint *)(this_00[0x10] + 0x14) = *(uint *)(this_00[0x10] + 0x14) & 0xfffffffe;
    *(uint *)(this_00[0x10] + 0x10) = *(uint *)(this_00[0x10] + 0x10) & 0xfeffffff;
    *(uint *)(this_00[0x10] + 0x10) = *(uint *)(this_00[0x10] + 0x10) | 0x2000000;
    *(uint *)(this_00[0x10] + 0x10) = *(uint *)(this_00[0x10] + 0x10) | 0x8000000;
    local_4 = 0xffffffff;
    *(uint *)(this_00[0x10] + 0x10) = *(uint *)(this_00[0x10] + 0x10) | 0x10000000;
    pvVar4 = FUN_0099bb50("fx_constructiontape.dds",0,0,0,'\0');
    if (*(void **)((int)this_00[0x10] + 0x18) != pvVar4) {
      Engine_SetResourceReference((void *)this_00[0x10],(int)pvVar4);
    }
    if (pvVar4 != (void *)0x0) {
      FUN_0099b400(pvVar4);
    }
    local_44 = *(int *)((int)this + 0x11c);
    pfVar8 = (float *)this_00[10];
    local_b0 = *(float *)(local_44 + 0x3c);
    local_ac = *(float *)(local_44 + 0x40);
    local_a8 = *(undefined4 *)(local_44 + 0x44);
    pfVar9 = pfVar8 + 4;
    sVar7 = 0;
    local_a0 = (undefined4 *)this_00[0xb];
    for (local_98 = *(float *)(param_1 + 0xc);
        local_98 != (float)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc));
        local_98 = (float)((int)local_98 + 1)) {
      local_d0 = *(float *)(param_1 + 8);
      fVar6 = local_98;
      if ((uint)local_d0 <= (uint)local_98) {
        fVar6 = (float)((int)local_98 - (int)local_d0);
      }
      local_b4 = *(int *)(param_1 + 4);
      pfVar1 = *(float **)(local_b4 + (int)fVar6 * 4);
      fVar6 = *pfVar1;
      local_bc = pfVar1[1];
      fVar5 = local_98;
      if ((uint)local_d0 <= (uint)local_98) {
        fVar5 = (float)((int)local_98 - (int)local_d0);
      }
      iVar3 = *(int *)(local_b4 + (int)fVar5 * 4);
      puVar2 = *(undefined4 **)(iVar3 + 8);
      local_c8 = *(float *)(iVar3 + 0xc);
      local_cc = puVar2;
      local_c0 = fVar6;
      if (param_3 != '\0') {
        fVar5 = *(float *)(local_44 + 0x30) * 0.0;
        local_c0 = fVar6 * *(float *)(local_44 + 0x18) + local_bc * *(float *)(local_44 + 0x24) +
                   fVar5 + *(float *)(local_44 + 0x3c);
        local_d0 = *(float *)(local_44 + 0x34) * 0.0;
        local_bc = local_bc * *(float *)(local_44 + 0x28) + fVar6 * *(float *)(local_44 + 0x1c) +
                   *(float *)(local_44 + 0x40) + local_d0;
        local_cc = (undefined4 *)
                   ((float)puVar2 * *(float *)(local_44 + 0x18) +
                    local_c8 * *(float *)(local_44 + 0x24) + fVar5 + *(float *)(local_44 + 0x3c));
        local_c8 = local_c8 * *(float *)(local_44 + 0x28) +
                   (float)puVar2 * *(float *)(local_44 + 0x1c) + *(float *)(local_44 + 0x40) +
                   local_d0;
        local_a4 = puVar2;
      }
      local_dc = local_bc - local_c8;
      local_d4 = 0.0;
      local_d8 = (float)local_cc - local_c0;
      fVar10 = FUN_00412e20(&local_dc);
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_84 = local_d4 * _DAT_00e527dc;
      local_8c = (float)local_cc + local_dc * _DAT_00e527dc;
      local_88 = local_d8 * _DAT_00e527dc + local_c8;
      local_78 = local_c0 + local_dc * _DAT_00e527dc;
      local_74 = local_d8 * _DAT_00e527dc + local_bc;
      pfVar8[3] = *param_2;
      local_64 = local_c0 - local_b0;
      *pfVar8 = local_64;
      local_60 = local_bc - local_ac;
      pfVar8[1] = local_60;
      local_50 = local_78 - local_b0;
      pfVar8[2] = 0.0;
      pfVar9[1] = 0.0;
      local_4c = local_74 - local_ac;
      *pfVar9 = 0.0;
      pfVar8[9] = *param_2;
      local_90 = _DAT_00e527e0;
      pfVar8[6] = local_50;
      local_90 = local_90 * _DAT_00e527dc;
      pfVar8[7] = local_4c;
      pfVar8[8] = local_84;
      local_2c = local_8c - local_b0;
      pfVar9[7] = local_90;
      local_94 = 0;
      local_28 = local_88 - local_ac;
      pfVar9[6] = 0.0;
      pfVar8[0xf] = *param_2;
      local_80 = (float)fVar10 * _DAT_00e527e0;
      pfVar8[0xc] = local_2c;
      pfVar8[0xd] = local_28;
      pfVar8[0xe] = local_84;
      local_18 = (float)local_cc - local_b0;
      pfVar9[0xc] = local_80;
      pfVar9[0xd] = local_90;
      local_14 = local_c8 - local_ac;
      pfVar8[0x15] = *param_2;
      pfVar8[0x12] = local_18;
      pfVar8[0x13] = local_14;
      local_10 = 0;
      pfVar8[0x14] = 0.0;
      pfVar9[0x12] = local_80;
      local_7c = 0;
      pfVar9[0x13] = 0.0;
      local_6a = CONCAT22(sVar7 + 1,sVar7);
      *local_a0 = local_6a;
      *(short *)(local_a0 + 1) = sVar7 + 2;
      pfVar8 = pfVar8 + 0x18;
      pfVar9 = pfVar9 + 0x18;
      local_1e = CONCAT22(sVar7 + 3,sVar7 + 2);
      *(undefined4 *)((int)local_a0 + 6) = local_1e;
      *(short *)((int)local_a0 + 10) = sVar7;
      sVar7 = sVar7 + 4;
      local_a0 = local_a0 + 3;
      local_70 = local_84;
      local_48 = local_84;
      local_40 = local_8c;
      local_3c = local_88;
      local_38 = local_84;
      local_34 = local_80;
      local_30 = local_90;
      local_24 = local_84;
    }
  }
  ExceptionList = local_c;
  return this_00;
}


//// FUNCTION FUN_00536820 @ 00536820 ////

void __cdecl FUN_00536820(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0xc;
  }
  return;
}


//// FUNCTION FUN_005368d0 @ 005368d0 ////

undefined4 * FUN_005368d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00536820(param_1,param_2,param_3);
  return param_1 + param_2 * 0xc;
}


//// FUNCTION FUN_00536900 @ 00536900 ////

void __fastcall FUN_00536900(int param_1)

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


//// FUNCTION FUN_00536930 @ 00536930 ////

void __fastcall FUN_00536930(int *param_1)

{
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    FUN_0052d710(param_1);
    if (param_1[0xe8] != 0) {
      FUN_00453110(param_1[0xe8]);
    }
    FUN_00451110();
  }
  if ((void *)param_1[0x11e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11e]);
  }
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  *(undefined1 *)((int)param_1 + 0x487) = 1;
  return;
}


//// FUNCTION FUN_005369a0 @ 005369a0 ////

void __fastcall FUN_005369a0(int *param_1)

{
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    return;
  }
  if ((void *)param_1[0x11e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11e]);
  }
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  FUN_0052f4b0(param_1);
  param_1[0x67] = 0;
  FUN_00451110();
  return;
}


//// FUNCTION FUN_005369f0 @ 005369f0 ////

void __fastcall FUN_005369f0(int *param_1)

{
  float *pfVar1;
  int *local_4;
  
  local_4 = param_1;
  FUN_009582c0(param_1 + 0x40);
  if (param_1[0xe8] != 0) {
    pfVar1 = (float *)(**(code **)(*param_1 + 0xf0))(&local_4);
    if (0.0 < *pfVar1) {
      FUN_00452ec0((int *)param_1[0xe8]);
    }
  }
  if ((void *)param_1[0x11e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11e]);
  }
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  FUN_00529b30(param_1);
  return;
}


//// FUNCTION FUN_00536a80 @ 00536a80 ////

void __fastcall FUN_00536a80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d22d58;
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


//// FUNCTION FUN_00536ad0 @ 00536ad0 ////

undefined4 * __thiscall FUN_00536ad0(void *this,byte param_1)

{
  FUN_00536a80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00536af0 @ 00536af0 ////

void FUN_00536af0(void)

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
  puStack_8 = &LAB_00caed38;
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


//// FUNCTION FUN_00536b60 @ 00536b60 ////

void __fastcall FUN_00536b60(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caed82;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d22d9c;
  param_1[0x1e] = &PTR_LAB_00d22d7c;
  param_1[0x28] = &PTR_FUN_00d22d64;
  local_4 = 3;
  if ((undefined4 *)param_1[0x105] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x105] = param_1[0x104];
  }
  if (param_1[0x104] != 0) {
    *(undefined4 *)(param_1[0x104] + 4) = param_1[0x105];
  }
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  if (param_1[0x10e] != 0) {
    pvVar1 = *(void **)(param_1[0x10e] + 0x40);
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)(param_1[0x10e] + 0x40) = 0;
    puVar2 = (undefined4 *)param_1[0x10e];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x10e] = 0;
    }
  }
  if (param_1[0x109] != 0) {
    pvVar1 = *(void **)(param_1[0x109] + 0x40);
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)(param_1[0x109] + 0x40) = 0;
    puVar2 = (undefined4 *)param_1[0x109];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x109] = 0;
    }
  }
  puVar2 = (undefined4 *)param_1[0x108];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0x108] = 0;
  }
  if ((void *)param_1[0x11e] == (void *)0x0) {
    param_1[0x11e] = 0;
    param_1[0x11f] = 0;
    param_1[0x120] = 0;
    FUN_00457dd0(param_1 + 0x110);
    if ((undefined4 *)param_1[0x105] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x105] = param_1[0x104];
    }
    if (param_1[0x104] != 0) {
      *(undefined4 *)(param_1[0x104] + 4) = param_1[0x105];
    }
    param_1[0x104] = 0;
    param_1[0x105] = 0;
    local_4 = 0xffffffff;
    FUN_005328f0(param_1);
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x11e]);
}


//// FUNCTION FUN_00536dc0 @ 00536dc0 ////

void __thiscall FUN_00536dc0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_44 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caed90;
  local_10 = ExceptionList;
  puVar2 = local_44;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0xc) - iVar5) / 0x30;
  }
  if (param_2 != 0) {
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar5) / 0x30;
    }
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb0;
    if (0x5555555U - iVar1 < param_2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb0;
      FUN_00536af0();
      uVar6 = extraout_ECX;
    }
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar5) / 0x30;
    }
    if (uVar6 < iVar1 + param_2) {
      if (0x5555555 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (*(int *)((int)this + 8) - iVar5) / 0x30;
      }
      if (uVar6 < iVar5 + param_2) {
        iVar5 = FUN_005355e0((int)this);
        uVar6 = iVar5 + param_2;
      }
      puVar2 = operator_new(uVar6 * 0x30);
      local_8 = 0;
      puVar3 = (undefined4 *)FUN_00536260(*(undefined4 **)((int)this + 4),param_1,puVar2);
      FUN_00536820(puVar3,param_2,local_44);
      FUN_00536260(param_1,*(undefined4 **)((int)this + 8),puVar3 + param_2 * 0xc);
      iVar5 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar5 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x30;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar2 + uVar6 * 0xc;
      *(undefined4 **)((int)this + 8) = puVar2 + (param_2 + iVar5) * 0xc;
      *(undefined4 **)((int)this + 4) = puVar2;
      ExceptionList = local_10;
      return;
    }
    puVar2 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar2 - (int)param_1) / 0x30) < param_2) {
      FUN_00536260(param_1,puVar2,param_1 + param_2 * 0xc);
      local_8 = 2;
      FUN_005368d0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x30,local_44);
      iVar5 = *(int *)((int)this + 8) + param_2 * 0x30;
      *(int *)((int)this + 8) = iVar5;
      FUN_005356b0(param_1,(undefined4 *)(iVar5 + param_2 * -0x30),local_44);
      ExceptionList = local_10;
      return;
    }
    uVar4 = FUN_00536260(puVar2 + param_2 * -0xc,puVar2,puVar2);
    *(undefined4 *)((int)this + 8) = uVar4;
    FUN_00535d00(param_1,puVar2 + param_2 * -0xc,puVar2);
    FUN_005356b0(param_1,param_1 + param_2 * 0xc,local_44);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00537080 @ 00537080 ////

undefined4 * __thiscall FUN_00537080(void *this,byte param_1)

{
  FUN_00536b60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005370b0 @ 005370b0 ////

void __thiscall FUN_005370b0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x30 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x30;
      goto LAB_005370f5;
    }
  }
  iVar1 = 0;
LAB_005370f5:
  FUN_00536dc0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x30 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00537870 @ 00537870 ////

void __thiscall FUN_00537870(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x30) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x30))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00536820(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 0xc;
    return;
  }
  FUN_005370b0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00537900 @ 00537900 ////

void __fastcall FUN_00537900(int *param_1)

{
  void *this;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  bool bVar9;
  int iStack_38;
  undefined4 auStack_30 [12];
  
  iVar4 = 0;
  if ((void *)param_1[0x11e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11e]);
  }
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  cVar1 = (**(code **)(*param_1 + 0x180))();
  if (((cVar1 != '\0') && (this = (void *)param_1[0x47], this != (void *)0x0)) &&
     (iVar2 = FUN_0097e350(this,0), iVar2 != 0)) {
    *(undefined1 *)((int)param_1 + 0x485) = 0;
    auStack_30[0xb] = 0;
    auStack_30[10] = 0;
    auStack_30[9] = 0;
    auStack_30[7] = 0;
    auStack_30[6] = 0;
    auStack_30[5] = 0;
    auStack_30[3] = 0;
    auStack_30[2] = 0;
    auStack_30[1] = 0;
    auStack_30[8] = 0x3f800000;
    auStack_30[4] = 0x3f800000;
    auStack_30[0] = 0x3f800000;
    iStack_38 = 0;
    if (0 < *(int *)(iVar2 + 0x48)) {
      do {
        iVar3 = 0xf;
        bVar9 = true;
        pcVar5 = (char *)(*(int *)(iVar2 + 0x4c) + iVar4);
        pcVar7 = "_sp_pavement_0";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar9 = *pcVar5 == *pcVar7;
          pcVar5 = pcVar5 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar9);
        if (bVar9) {
          *(undefined1 *)((int)param_1 + 0x485) = 1;
          puVar6 = (undefined4 *)(iVar4 + 0x20 + *(int *)(iVar2 + 0x4c));
          puVar8 = auStack_30;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_009aa830(auStack_30,(float *)((int)this + 0x18));
          FUN_00537870(param_1 + 0x11d,auStack_30);
        }
        iStack_38 = iStack_38 + 1;
        iVar4 = iVar4 + 0x50;
      } while (iStack_38 < *(int *)(iVar2 + 0x48));
    }
  }
  return;
}


//// FUNCTION FUN_00537a60 @ 00537a60 ////

void __fastcall FUN_00537a60(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d22d58;
  return;
}


//// FUNCTION FUN_00537ac0 @ 00537ac0 ////

undefined4 * __fastcall FUN_00537ac0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caee28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00534f30(param_1);
  piVar1 = param_1 + 0x104;
  *param_1 = &PTR_FUN_00d22d9c;
  param_1[0x1e] = &PTR_LAB_00d22d7c;
  param_1[0x28] = &PTR_FUN_00d22d64;
  param_1[0x106] = 0;
  *piVar1 = 0;
  param_1[0x105] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10b] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x113] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  puVar2 = param_1 + 0x115;
  param_1[0x117] = 0;
  *puVar2 = 0;
  param_1[0x116] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x110] = &PTR_LAB_00d1a8e0;
  param_1[0x112] = puVar2;
  *puVar2 = param_1 + 0x111;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  local_4 = 5;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined1 *)((int)param_1 + 0x485) = 0;
  *(undefined1 *)((int)param_1 + 0x486) = 1;
  *(undefined1 *)((int)param_1 + 0x487) = 0;
  uVar5 = FUN_00acd42c();
  param_1[0xaa] = (int)uVar5;
  param_1[0x67] = 0;
  param_1[0x106] = param_1;
  FUN_00acdb9e(0xe5284c);
  iVar3 = FUN_0097dda0();
  param_1[0x107] = iVar3;
  if (s___AV__InList_VTMFixedAssetLarge__00e52820[0x2a] != '\0') {
    iVar3 = 0x410;
    pcVar6 = "LargeLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5284c);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    s___AV__InList_VTMFixedAssetLarge__00e52820[0x2a] = '\0';
  }
  param_1[0x105] = &DAT_0104c56c;
  *piVar1 = (int)DAT_0104c56c;
  *(int **)((int)DAT_0104c56c + 4) = piVar1;
  DAT_0104c56c = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005382a0 @ 005382a0 ////

undefined4 * __fastcall FUN_005382a0(undefined4 *param_1)

{
  FUN_00534f30(param_1);
  param_1[0xb8] = param_1[0xb8] & 0xfffffdff;
  *param_1 = &PTR_FUN_00d22fb4;
  param_1[0x1e] = &PTR_LAB_00d22f90;
  param_1[0x28] = &PTR_FUN_00d22f78;
  return param_1;
}


//// FUNCTION FUN_005382e0 @ 005382e0 ////

undefined4 * __thiscall FUN_005382e0(void *this,byte param_1)

{
  thunk_FUN_005328f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00538300 @ 00538300 ////

void __thiscall FUN_00538300(void *this,float *param_1,float *param_2)

{
  if ((((*param_1 != *(float *)((int)this + 0x100)) || (param_1[1] != *(float *)((int)this + 0x104))
       ) || (param_1[2] != *(float *)((int)this + 0x108))) ||
     ((*param_2 != *(float *)((int)this + 0xc4) ||
      ((*param_1 * *param_1 + param_1[2] * param_1[2] + param_1[1] * param_1[1] == 0.0 &&
       (*param_2 == 0.0)))))) {
    (**(code **)(*(int *)this + 0x148))();
    (**(code **)(*(int *)this + 0x1ac))(param_1,param_2);
    (**(code **)(*(int *)this + 0x144))();
  }
  return;
}


//// FUNCTION FUN_005384e0 @ 005384e0 ////

void __fastcall FUN_005384e0(int *param_1)

{
  undefined1 uVar1;
  LONG LVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint in_stack_ffffff90;
  int iVar7;
  int in_stack_ffffff94;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caee6b;
  pvStack_c = ExceptionList;
  puVar5 = (undefined4 *)param_1[0xef];
  ExceptionList = &pvStack_c;
  if (puVar5 != (undefined4 *)0x0) {
    in_stack_ffffff94 = 0x538511;
    ExceptionList = &pvStack_c;
    LVar2 = InterlockedDecrement(puVar5 + 4);
    uVar1 = DAT_0105b588;
    if ((LVar2 == 0) && (DAT_0105b588 = 1, puVar5 != (undefined4 *)0x0)) {
      in_stack_ffffff94 = 0x53852e;
      (**(code **)*puVar5)();
    }
    DAT_0105b588 = uVar1;
    param_1[0xef] = 0;
  }
  (**(code **)(*param_1 + 0x1c0))();
  pvVar3 = DAT_00f87ed8;
  if ((char)((int *)param_1[0xa8])[0x18] == '\0') {
    iVar9 = 5;
    (**(code **)(*(int *)param_1[0xa8] + 0x24))(&stack0xffffff90);
    FUN_00442ae0(pvVar3,in_stack_ffffff90,in_stack_ffffff94,iVar9);
    pvVar3 = operator_new(0x160);
    uStack_4 = 0;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_005291b0((int)param_1);
      puVar8 = auStack_54;
      (**(code **)(*piVar4 + 0x18))();
      FUN_00acd42c();
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x34))();
      piVar4 = FUN_00959040(pvVar3,puVar5,(int)puVar8);
    }
    uStack_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar4);
  }
  (**(code **)(*param_1 + 0x144))();
  (**(code **)(*param_1 + 0x38))();
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_30 = 0xffffffff;
  uStack_34 = FUN_009b01a0("BUILDING_PLACEMENT_SMALL_01");
  puVar8 = &DAT_00d17518;
  uStack_2c = uStack_50;
  iVar7 = 0;
  puVar6 = &uStack_38;
  uStack_38 = uStack_38 | 1;
  iVar9 = 2;
  uStack_28 = uStack_4c;
  uStack_24 = uStack_48;
  pvVar3 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar3,iVar9,(byte *)puVar6,iVar7,puVar8);
  FUN_0052fe80(param_1);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00538690 @ 00538690 ////

void __fastcall FUN_00538690(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005386c0 @ 005386c0 ////

void __fastcall FUN_005386c0(int param_1)

{
  if (0 < *(int *)(param_1 + 0xe0)) {
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
  }
  *(undefined1 *)(param_1 + 0x11a) = *(undefined1 *)(param_1 + 0x119);
  *(undefined1 *)(param_1 + 0x119) = 0;
  return;
}


//// FUNCTION FUN_00538700 @ 00538700 ////

void __thiscall FUN_00538700(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0046f5e0(param_1);
  switch(uVar1) {
  case 0x80000285:
    (**(code **)(*(int *)this + 0x94))();
    return;
  default:
    FUN_0053c360();
    return;
  case 0x800002ad:
    (**(code **)(*(int *)this + 0x98))();
    return;
  case 0x800002d5:
    *(undefined1 *)((int)this + 0x140) = 1;
    return;
  case 0x800002fd:
    *(undefined1 *)((int)this + 0x140) = 0;
    return;
  }
}


//// FUNCTION FUN_00538800 @ 00538800 ////

void __thiscall FUN_00538800(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x28))(param_1,(int)this + 0xc4);
  return;
}


//// FUNCTION FUN_00538840 @ 00538840 ////

void __thiscall FUN_00538840(void *this,int *param_1,int *param_2)

{
  *(int *)((int)this + 0x100) = *param_1;
  *(int *)((int)this + 0x104) = param_1[1];
  *(int *)((int)this + 0x108) = param_1[2];
  *(int *)((int)this + 0xc4) = *param_2;
  if (*(int **)((int)this + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x11c) + 0x20))(param_1,*param_2,0x3f800000);
  }
  (**(code **)(*(int *)this + 0x90))();
  return;
}


//// FUNCTION FUN_00538980 @ 00538980 ////

undefined4 __fastcall FUN_00538980(int param_1)

{
  return *(undefined4 *)(param_1 + 0x13c);
}


//// FUNCTION FUN_00538990 @ 00538990 ////

void __thiscall FUN_00538990(void *this,undefined1 *param_1)

{
  *param_1 = 1;
  *(undefined1 *)((int)this + 0x7a) = 1;
  *(undefined1 *)((int)this + 0x79) = 1;
  return;
}


//// FUNCTION FUN_005389b0 @ 005389b0 ////

int FUN_005389b0(void)

{
  int iVar1;
  
  iVar1 = DAT_00e52870;
  DAT_00e52870 = DAT_00e52870 + 1;
  return iVar1;
}


//// FUNCTION FUN_005389c0 @ 005389c0 ////

undefined4 * __fastcall FUN_005389c0(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caee8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xa8);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00902530(this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00538af0 @ 00538af0 ////

void __thiscall FUN_00538af0(void *this,float *param_1)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(void **)((int)this + 0x11c) != (void *)0x0) {
    iVar1 = FUN_0097e350(*(void **)((int)this + 0x11c),0);
    if (iVar1 != 0) {
      local_c = *(float *)(iVar1 + 200);
      local_8 = *(float *)(iVar1 + 0xcc);
      local_4 = *(float *)(iVar1 + 0xd0);
      if (*(char *)((int)this + 0xfc) != '\0') {
        local_c = local_c + *(float *)((int)this + 0xf0);
        local_8 = local_8 + *(float *)((int)this + 0xf4);
        local_4 = local_4 + *(float *)((int)this + 0xf8);
      }
      FUN_0040b490((void *)(*(int *)((int)this + 0x11c) + 0x18),&local_c);
      goto LAB_00538bbb;
    }
  }
  local_c = *(float *)((int)this + 0x100);
  local_8 = *(float *)((int)this + 0x104);
  local_4 = *(float *)((int)this + 0x108);
  if (*(char *)((int)this + 0xfc) != '\0') {
    local_c = local_c + *(float *)((int)this + 0xf0);
    local_8 = local_8 + *(float *)((int)this + 0xf4);
    local_4 = local_4 + *(float *)((int)this + 0xf8);
  }
LAB_00538bbb:
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}


//// FUNCTION FUN_00538c60 @ 00538c60 ////

bool __fastcall FUN_00538c60(int param_1)

{
  int iVar1;
  
  if ((*(void **)(param_1 + 0x11c) != (void *)0x0) && (*(char *)(param_1 + 100) != '\0')) {
    iVar1 = FUN_0097e350(*(void **)(param_1 + 0x11c),0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x11c) + 0xb0);
      if ((iVar1 <= DAT_0105bec0) && (iVar1 != -1)) {
        return DAT_0105bec0 + -1 <= iVar1;
      }
      return false;
    }
  }
  return false;
}


//// FUNCTION FUN_00538cb0 @ 00538cb0 ////

void __fastcall FUN_00538cb0(undefined4 param_1)

{
  (*(code *)DAT_00f885f8[1])();
                    /* WARNING: Could not recover jumptable at 0x00538cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DAT_00f8860c = param_1;
  (*(code *)*DAT_00f885f8)();
  return;
}


//// FUNCTION FUN_00538d30 @ 00538d30 ////

uint __fastcall FUN_00538d30(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 in_EAX;
  uint uVar3;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0x11a));
  if ((((*(char *)(param_1 + 0x11a) != '\0') && (uVar3 = *(uint *)(param_1 + 0x11c), uVar3 != 0)) &&
      (*(int *)(*(int *)(*(int *)(DAT_00f87aa0 + 0xa4) + 8) + 0x18) != 0x502)) &&
     ((*(byte *)(uVar3 + 0x9c) & 2) != 0)) {
    uVar3 = CONCAT31((int3)(uVar3 >> 8),*(char *)(param_1 + 0x141));
    if (*(char *)(param_1 + 0x141) != '\0') {
LAB_00538dda:
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    uVar3 = FUN_0053c9f0();
    if ((char)uVar3 == '\0') {
      iVar1 = *(int *)(param_1 + 0x110);
      *(undefined4 *)(param_1 + 0x110) = 0;
      if ((DAT_00f885f4 != 0) && (*(int *)(DAT_00f885f4 + 0x11c) == *(int *)(param_1 + 0x11c))) {
        bVar2 = FUN_005e9250(DAT_0104d82c);
        if (!bVar2) {
          *(int *)(param_1 + 0x110) = iVar1 + 1;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x110);
      if ((*(int *)(param_1 + 0x114) < (int)uVar3) ||
         (uVar3 = CONCAT31((int3)(uVar3 >> 8),*(char *)(param_1 + 0x140)),
         *(char *)(param_1 + 0x140) != '\0')) goto LAB_00538dda;
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00538ef0 @ 00538ef0 ////

void __cdecl FUN_00538ef0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float local_18;
  float local_14;
  float local_10;
  
  FUN_009a1a20(&DAT_0105c2e8,param_2,&local_18,0.0);
  fVar1 = (param_3 - DAT_0105c3b0) / (local_10 - DAT_0105c3b0);
  if (0.0001 < ABS(fVar1)) {
    local_18 = DAT_0105c3a8 + (local_18 - DAT_0105c3a8) * fVar1;
    local_14 = (local_14 - DAT_0105c3ac) * fVar1 + DAT_0105c3ac;
    local_10 = (local_10 - DAT_0105c3b0) * fVar1 + DAT_0105c3b0;
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}


