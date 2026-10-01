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


//// FUNCTION FUN_005d8e10 @ 005d8e10 ////

float10 __fastcall FUN_005d8e10(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  char **ppcVar6;
  float local_3c;
  int local_38;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7c78;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar2 = param_1 + 0x78;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x74) + 0xa0;
  }
  if (*(int *)(iVar2 + 0x14) != 0) {
    local_3c = 0.0;
    local_38 = 0;
    ExceptionList = &local_c;
    iVar2 = FUN_005b10e0(*(int *)(iVar2 + 0x14));
    if ((iVar2 != 0) && (iVar4 = *(int *)(iVar2 + 4), iVar4 != 0)) {
      local_30 = (*(int *)(iVar2 + 8) - iVar4) / 0x18;
      if ((local_30 != 0) && (iVar4 != *(int *)(iVar2 + 8))) {
        do {
          iVar1 = *(int *)(iVar4 + 0x14);
          if (iVar1 != 0) {
            local_2c = local_20;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"Movies",6);
            local_28 = 6;
            local_2c[6] = '\0';
            ppcVar6 = &local_2c;
            piVar5 = &local_30;
            local_4 = 0;
            this = (void *)FUN_00577370(iVar1);
            pfVar3 = (float *)FUN_00441750(this,piVar5,ppcVar6);
            local_3c = *pfVar3 + local_3c;
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
            local_38 = local_38 + 1;
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != *(int *)(iVar2 + 8));
        if (local_38 != 0) {
          local_3c = local_3c / (float)local_38;
        }
      }
    }
    ExceptionList = local_c;
    return (float10)local_3c;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_005d8f80 @ 005d8f80 ////

uint __thiscall FUN_005d8f80(void *this,int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x98);
  while( true ) {
    if (uVar2 == *(uint *)((int)this + 0x9c)) {
      return uVar2 & 0xffffff00;
    }
    if (*(int *)(*(int *)(uVar2 + 0x14) + 0x74) == param_1) break;
    uVar2 = uVar2 + 0x18;
  }
  uVar1 = *(undefined4 *)(*(int *)(uVar2 + 0x14) + 0x88);
  *param_2 = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_005d8fc0 @ 005d8fc0 ////

int __thiscall FUN_005d8fc0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x98);
  while( true ) {
    if (iVar1 == *(int *)((int)this + 0x9c)) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 0x14) + 0x74) == param_1) break;
    iVar1 = iVar1 + 0x18;
  }
  return *(int *)(iVar1 + 0x14);
}


//// FUNCTION FUN_005d8ff0 @ 005d8ff0 ////

float10 __thiscall FUN_005d8ff0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined2 uVar2;
  void *pvVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  float extraout_ECX;
  float10 fVar8;
  float fVar9;
  
  if (*(float *)(param_1 + 0x74) != 0.0) {
    uVar2 = FUN_004e0fd0(*(float *)(param_1 + 0x74));
    if ((char)uVar2 != '\0') {
      pvVar3 = (void *)FUN_004e0620(*(void **)(param_1 + 0x74),param_3);
      if (pvVar3 != (void *)0x0) {
        pfVar4 = (float *)FUN_0048c9e0(pvVar3,&param_3);
        if (0.0 < *pfVar4) {
          iVar5 = FUN_0048c950((int)pvVar3);
          if (iVar5 != 0) {
            piVar6 = (int *)FUN_0048c950((int)pvVar3);
            iVar5 = 0;
            piVar7 = piVar6;
            pvVar3 = (void *)FUN_005b2220(param_2);
            iVar5 = FUN_005a7640(pvVar3,(int)piVar7,iVar5);
            piVar7 = (int *)FUN_005a6470(iVar5);
            if ((piVar6 != (int *)0x0) && (piVar7 != (int *)0x0)) {
              iVar5 = *(int *)(param_1 + 0x74);
              cVar1 = FUN_004de210(iVar5);
              cVar1 = '\x01' - (cVar1 != '\0');
              pfVar4 = (float *)&stack0xffffffe4;
              fVar9 = extraout_ECX;
              pvVar3 = (void *)FUN_004df4a0(iVar5);
              FUN_004b58b0(pvVar3,pfVar4);
              fVar8 = FUN_005d8bd0(piVar7,piVar6,fVar9,cVar1);
              return fVar8;
            }
            return (float10)0.0;
          }
        }
      }
      return (float10)0.0;
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_005d9130 @ 005d9130 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005d9130(int param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  int local_40;
  float local_3c;
  int local_38;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7c98;
  local_c = ExceptionList;
  local_3c = 0.0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar2 = *(int *)(param_1 + 0x8c);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 0xb4);
  }
  ExceptionList = &local_c;
  iVar2 = FUN_005b25c0(iVar2);
  if (iVar2 != 0) {
    piVar4 = (int *)(iVar2 + 0xac);
    local_38 = 4;
    do {
      if (piVar4[-1] != *piVar4) {
        piVar5 = (int *)(piVar4[-1] + 0x14);
        do {
          iVar2 = *piVar5;
          if (iVar2 != 0) {
            local_2c = local_20;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"Movies",6);
            local_28 = 6;
            local_2c[6] = '\0';
            ppcVar8 = &local_2c;
            puVar7 = &local_30;
            local_4 = 0;
            this = (void *)FUN_00577370(iVar2);
            pfVar3 = (float *)FUN_00441750(this,puVar7,ppcVar8);
            local_3c = *pfVar3 + local_3c;
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
            local_40 = local_40 + 1;
          }
          piVar1 = piVar5 + 1;
          piVar5 = piVar5 + 6;
        } while (piVar1 != (int *)*piVar4);
      }
      piVar4 = piVar4 + 4;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
    if (local_40 != 0) {
      fVar6 = (float10)local_3c / (float10)local_40;
      goto LAB_005d926b;
    }
  }
  fVar6 = FUN_005d8e10(param_1);
LAB_005d926b:
  ExceptionList = local_c;
  return ((float10)_DAT_0104d7c8 - (float10)_DAT_0104d7c4) * fVar6 + (float10)_DAT_0104d7c4;
}


//// FUNCTION FUN_005d9290 @ 005d9290 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_005d9290(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  float local_10;
  int *local_c;
  float local_8;
  undefined4 local_4;
  
  iVar2 = FUN_005a2c00(param_2);
  puVar3 = (undefined4 *)FUN_00449b40(iVar2);
  pfVar5 = &local_8;
  pvVar4 = (void *)FUN_00577370(param_1);
  pfVar5 = (float *)FUN_00441750(pvVar4,pfVar5,puVar3);
  local_8 = *pfVar5;
  local_c = (int *)*DAT_00f88660;
  iVar8 = 0;
  local_10 = 0.0;
  piVar7 = DAT_00f88660;
  if (local_c != DAT_00f88660) {
    do {
      if (local_c[0xb] != iVar2) {
        puVar6 = (undefined4 *)FUN_00449b40(local_c[0xb]);
        puVar3 = &local_4;
        pvVar4 = (void *)FUN_00577370(param_1);
        pfVar5 = (float *)FUN_00441750(pvVar4,puVar3,puVar6);
        local_10 = local_10 + *pfVar5;
        iVar8 = iVar8 + 1;
        piVar7 = DAT_00f88660;
      }
      FUN_00449dd0((int *)&local_c);
    } while (local_c != piVar7);
    if (iVar8 != 0) {
      local_10 = local_10 / (float)iVar8;
      fVar1 = (1.0 - local_8) * 0.5;
      if (fVar1 < local_10) {
        local_10 = fVar1;
      }
    }
  }
  return ((float10)local_10 + (float10)local_8) * ((float10)_DAT_0104d798 - (float10)_DAT_0104d794)
         + (float10)_DAT_0104d794;
}


//// FUNCTION FUN_005d9390 @ 005d9390 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005d9390(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *local_c;
  float local_8;
  undefined4 local_4;
  
  fVar1 = param_2;
  if (*(int *)(param_1 + 0x74) == 0) {
    iVar2 = *(int *)(param_1 + 0x8c);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x74) + 0xb4);
  }
  iVar2 = FUN_005b6b90(iVar2);
  puVar3 = (undefined4 *)FUN_00449b40(iVar2);
  pfVar5 = &local_8;
  pvVar4 = (void *)FUN_00577370((int)param_2);
  pfVar5 = (float *)FUN_00441750(pvVar4,pfVar5,puVar3);
  local_8 = *pfVar5;
  local_c = (int *)*DAT_00f88660;
  iVar8 = 0;
  param_2 = 0.0;
  piVar7 = DAT_00f88660;
  if (local_c != DAT_00f88660) {
    do {
      if (local_c[0xb] != iVar2) {
        puVar6 = (undefined4 *)FUN_00449b40(local_c[0xb]);
        puVar3 = &local_4;
        pvVar4 = (void *)FUN_00577370((int)fVar1);
        pfVar5 = (float *)FUN_00441750(pvVar4,puVar3,puVar6);
        param_2 = param_2 + *pfVar5;
        iVar8 = iVar8 + 1;
        piVar7 = DAT_00f88660;
      }
      FUN_00449dd0((int *)&local_c);
    } while (local_c != piVar7);
    if (iVar8 != 0) {
      param_2 = param_2 / (float)iVar8;
      fVar1 = (1.0 - local_8) * 0.5;
      if (fVar1 < param_2) {
        param_2 = fVar1;
      }
    }
  }
  return ((float10)param_2 + (float10)local_8) * ((float10)_DAT_0104d798 - (float10)_DAT_0104d794) +
         (float10)_DAT_0104d794;
}


//// FUNCTION FUN_005d94b0 @ 005d94b0 ////

void __cdecl FUN_005d94b0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d2bd54;
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


//// FUNCTION FUN_005d9520 @ 005d9520 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005d9520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  float local_8;
  float local_4;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x74) + 0x194);
  local_4 = 0.0;
  local_8 = 0.0;
  if (iVar5 != *(int *)(param_1 + 0x74) + 0x1a0) {
    do {
      iVar1 = FUN_0048c9f0(*(int *)(iVar5 + 8));
      if (iVar1 != 0) {
        iVar1 = FUN_0048c9f0(*(int *)(iVar5 + 8));
        uVar2 = FUN_005a6140(iVar1);
        if ((char)uVar2 != '\0') {
          iVar8 = 0;
          pTVar7 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar6 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar1 = 0;
          piVar3 = (int *)FUN_0048c950(*(int *)(iVar5 + 8));
          piVar3 = (int *)FUN_00ace790(piVar3,iVar1,pTVar6,pTVar7,iVar8);
          if (((piVar3 != (int *)0x0) && (iVar1 = FUN_005873c0((int)piVar3), iVar1 != 0)) &&
             (iVar1 = FUN_005873c0((int)piVar3), *(int *)(iVar1 + 0xcc) != iVar1 + 0xd8)) {
            if (*(int *)(param_1 + 0x74) == 0) {
              fVar4 = FUN_005d8c80(param_1,piVar3,'\0');
            }
            else {
              fVar4 = FUN_005d87a0(param_1,piVar3,'\0');
            }
            local_4 = (float)(fVar4 + (float10)local_4);
            local_8 = local_8 + 1.0;
          }
        }
      }
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != *(int *)(param_1 + 0x74) + 0x1a0);
  }
  iVar1 = 0;
  pTVar7 = &TM::CStar::RTTI_Type_Descriptor;
  pTVar6 = &TM::CStaff::RTTI_Type_Descriptor;
  iVar5 = 0;
  piVar3 = (int *)FUN_005b2780(*(int *)(*(int *)(param_1 + 0x74) + 0xb4));
  piVar3 = (int *)FUN_00ace790(piVar3,iVar5,pTVar6,pTVar7,iVar1);
  if (((piVar3 == (int *)0x0) || (iVar5 = FUN_005873c0((int)piVar3), iVar5 == 0)) ||
     (iVar5 = FUN_005873c0((int)piVar3), *(int *)(iVar5 + 0xcc) == iVar5 + 0xd8)) {
    fVar4 = (float10)local_4;
  }
  else if (*(int *)(param_1 + 0x74) == 0) {
    fVar4 = FUN_005d8c80(param_1,piVar3,'\x01');
    fVar4 = fVar4 + (float10)local_4;
    local_8 = local_8 + 1.0;
  }
  else {
    fVar4 = FUN_005d87a0(param_1,piVar3,'\x01');
    fVar4 = fVar4 + (float10)local_4;
    local_8 = local_8 + 1.0;
  }
  if (local_8 != 0.0) {
    fVar4 = (fVar4 / (float10)local_8 - ((float10)1.0 - (float10)_DAT_0104d7b8) * (float10)0.5) /
            (float10)_DAT_0104d7b8;
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
    }
    else {
      fVar4 = (float10)0.0;
    }
  }
  return ((float10)_DAT_0104d7b4 - (float10)_DAT_0104d7b0) * fVar4 + (float10)_DAT_0104d7b0;
}


//// FUNCTION FUN_005d9710 @ 005d9710 ////

float10 __fastcall FUN_005d9710(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  float local_8;
  float local_4;
  
  local_4 = 0.0;
  local_8 = 0.0;
  iVar1 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  if (iVar1 != 0) {
    iVar1 = FUN_005b2220(*(int *)(param_1 + 0x8c));
    iVar1 = *(int *)(iVar1 + 100);
    iVar2 = FUN_005b2220(*(int *)(param_1 + 0x8c));
    if (iVar1 != *(int *)(iVar2 + 0x68)) {
      do {
        iVar2 = *(int *)(iVar1 + 0x14);
        if ((iVar2 != 0) && (uVar3 = FUN_005a6140(iVar2), (char)uVar3 != '\0')) {
          iVar9 = 0;
          pTVar8 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar7 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar6 = 0;
          piVar4 = (int *)FUN_005a6470(iVar2);
          piVar4 = (int *)FUN_00ace790(piVar4,iVar6,pTVar7,pTVar8,iVar9);
          if ((piVar4 != (int *)0x0) &&
             ((iVar2 = FUN_005873c0((int)piVar4), iVar2 != 0 &&
              (iVar2 = FUN_005873c0((int)piVar4), *(int *)(iVar2 + 0xcc) != iVar2 + 0xd8)))) {
            if (*(int *)(param_1 + 0x74) == 0) {
              fVar5 = FUN_005d8c80(param_1,piVar4,'\0');
            }
            else {
              fVar5 = FUN_005d87a0(param_1,piVar4,'\0');
            }
            local_4 = (float)(fVar5 + (float10)local_4);
            local_8 = local_8 + 1.0;
          }
        }
        iVar1 = iVar1 + 0x18;
        iVar2 = FUN_005b2220(*(int *)(param_1 + 0x8c));
      } while (iVar1 != *(int *)(iVar2 + 0x68));
    }
  }
  iVar2 = 0;
  pTVar8 = &TM::CStar::RTTI_Type_Descriptor;
  pTVar7 = &TM::CStaff::RTTI_Type_Descriptor;
  iVar1 = 0;
  piVar4 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
  piVar4 = (int *)FUN_00ace790(piVar4,iVar1,pTVar7,pTVar8,iVar2);
  if (((piVar4 == (int *)0x0) || (iVar1 = FUN_005873c0((int)piVar4), iVar1 == 0)) ||
     (iVar1 = FUN_005873c0((int)piVar4), *(int *)(iVar1 + 0xcc) == iVar1 + 0xd8)) {
    fVar5 = (float10)local_4;
  }
  else if (*(int *)(param_1 + 0x74) == 0) {
    fVar5 = FUN_005d8c80(param_1,piVar4,'\x01');
    fVar5 = fVar5 + (float10)local_4;
    local_8 = local_8 + 1.0;
  }
  else {
    fVar5 = FUN_005d87a0(param_1,piVar4,'\x01');
    fVar5 = fVar5 + (float10)local_4;
    local_8 = local_8 + 1.0;
  }
  if (local_8 != 0.0) {
    fVar5 = fVar5 / (float10)local_8;
  }
  return fVar5;
}


//// FUNCTION FUN_005d98e0 @ 005d98e0 ////

void __cdecl FUN_005d98e0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d2bd54;
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


//// FUNCTION FUN_005d9980 @ 005d9980 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005d9980(int param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_005d9710(param_1);
  fVar1 = (fVar1 - ((float10)1.0 - (float10)_DAT_0104d7b8) * (float10)0.5) / (float10)_DAT_0104d7b8;
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  return ((float10)_DAT_0104d7b4 - (float10)_DAT_0104d7b0) * fVar1 + (float10)_DAT_0104d7b0;
}


//// FUNCTION FUN_005d99e0 @ 005d99e0 ////

void __cdecl FUN_005d99e0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_005d8ab0(param_1);
  }
  return;
}


//// FUNCTION FUN_005d9a80 @ 005d9a80 ////

void FUN_005d9a80(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_005d8ab0(param_1);
  }
  return;
}


//// FUNCTION FUN_005d9ab0 @ 005d9ab0 ////

void __fastcall FUN_005d9ab0(int param_1)

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
    FUN_005d8ab0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005d9b00 @ 005d9b00 ////

undefined4 * FUN_005d9b00(undefined4 *param_1,int param_2,int param_3)

{
  FUN_005d98e0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_005d9b30 @ 005d9b30 ////

void __thiscall FUN_005d9b30(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_005d7510((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_005d8ab0(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005d9b90 @ 005d9b90 ////

void FUN_005d9b90(void)

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
  puStack_8 = &LAB_00cb7cb8;
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


//// FUNCTION FUN_005d9c00 @ 005d9c00 ////

void __fastcall FUN_005d9c00(int param_1)

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
    FUN_005d8ab0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_005d9cc0 @ 005d9cc0 ////

void __thiscall FUN_005d9cc0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cb7cd8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d2bd54;
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
      FUN_005d9b90();
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
        iVar3 = FUN_005d7320((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_005d94b0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_005d98e0(puVar5,param_2,(int)&local_34);
      FUN_005d94b0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_005d9a80(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_005d94b0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_005d9b00(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_005d7f30(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_005d94b0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_005d7550((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_005d7f30(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_005d9ff0 @ 005d9ff0 ////

void __fastcall FUN_005d9ff0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb7d43;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2bd84;
  param_1[0xe] = &PTR_LAB_00d2bd64;
  local_4 = 4;
  while( true ) {
    if ((param_1[0x26] == 0) || ((int)(param_1[0x27] - param_1[0x26]) / 0x18 == 0)) break;
    puVar1 = *(undefined4 **)(param_1[0x27] + -4);
    if ((param_1[0x26] != 0) &&
       (puVar2 = (undefined4 *)param_1[0x27], ((int)puVar2 - param_1[0x26]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d2bd54;
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
      param_1[0x27] = param_1[0x27] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_005d9ab0((int)(param_1 + 0x25));
  param_1[0x1e] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x18] = &PTR_FUN_00d1ec60;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005da220 @ 005da220 ////

void __thiscall FUN_005da220(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7d58;
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
    FUN_005d9cc0(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_005d9b30(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
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


//// FUNCTION FUN_005da300 @ 005da300 ////

void __thiscall FUN_005da300(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_005da345;
    }
  }
  iVar1 = 0;
LAB_005da345:
  FUN_005d9cc0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_005da370 @ 005da370 ////

undefined4 * __thiscall FUN_005da370(void *this,byte param_1)

{
  FUN_005d9ff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005da390 @ 005da390 ////

void __thiscall FUN_005da390(void *this,uint param_1)

{
  FUN_005da220(this,param_1,&PTR_LAB_00d2bd54,0,(int *)0x0);
  return;
}


//// FUNCTION FUN_005da3d0 @ 005da3d0 ////

void __thiscall FUN_005da3d0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_005d98e0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_005da300(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_005da460 @ 005da460 ////

void __fastcall FUN_005da460(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
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
  puStack_8 = &LAB_00cb7dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    DAT_010581d4 = 0x66;
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
  uVar3 = FUN_0098b490("PShot");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x67;
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
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    DAT_010581d4 = 0x68;
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
  uVar3 = FUN_0098b490("Overall");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x58));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    DAT_010581d4 = 0x69;
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
  uVar3 = FUN_0098b490("MeanStarPerformances");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x6c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    DAT_010581d4 = 0x6a;
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
  uVar3 = FUN_0098b490("MeanStarPerformancesUnweighted");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x70));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    DAT_010581d4 = 0x6b;
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
  uVar3 = FUN_0098b490("ScriptQuality");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x74),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    DAT_010581d4 = 0x6c;
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
  uVar3 = FUN_0098b490("StarRelationships");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x78),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    DAT_010581d4 = 0x6d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
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
  uVar3 = FUN_0098b490("SetRepair");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x7c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
    puVar7 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar7 = puVar7 + 1;
    }
    DAT_010581d4 = 0x6e;
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
  uVar3 = FUN_0098b490("CrewExperience");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x80),4);
  }
  uVar3 = FUN_0098b490("StarPerformances");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x60) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x18;
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (local_38 = 0;
          (*(int *)(param_1 + 0x60) != 0 &&
          (local_38 < (uint)((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x18)));
          local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          local_2c = local_20;
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
          puVar7 = &DAT_010581d8;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar7 = puVar7 + 1;
          }
          DAT_010581d4 = 0x6f;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 9;
          pcVar2 = (char *)FUN_00ace33d(0xe54b5c);
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
        uVar3 = FUN_0098b490("StarPerformances[x]");
        if ((char)uVar3 != '\0') {
          FUN_00990970((int *)(*(int *)(param_1 + 0x60) + local_34));
        }
        local_34 = local_34 + 0x18;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = 0;
      FUN_005d9ab0(param_1 + 0x5c);
      SLVAR_LoadUint(&local_38);
      FUN_005da390((void *)(param_1 + 0x5c),local_38);
      local_30 = 0;
      if (local_38 != 0) {
        iVar4 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            local_2c = local_20;
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Quality.cpp";
            puVar7 = &DAT_010581d8;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar7 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar7 = puVar7 + 1;
            }
            DAT_010581d4 = 0x6f;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 10;
            iVar6 = FUN_00ace3df((int *)(*(int *)(param_1 + 0x60) + iVar4));
            pcVar2 = (char *)FUN_00ace33d(iVar6);
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
          uVar3 = FUN_0098b490("StarPerformances[x]");
          if ((char)uVar3 != '\0') {
            FUN_00990970((int *)(*(int *)(param_1 + 0x60) + iVar4));
          }
          local_30 = local_30 + 1;
          iVar4 = iVar4 + 0x18;
        } while (local_30 < local_38);
      }
    }
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005daf20 @ 005daf20 ////

undefined4 * __fastcall FUN_005daf20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7de8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d2be44;
  param_1[0xe] = &PTR_LAB_00d2be24;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = param_1 + 0x18;
  param_1[0x18] = &PTR_FUN_00d18c4c;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005dafc0 @ 005dafc0 ////

undefined4 * __thiscall FUN_005dafc0(void *this,byte param_1)

{
  FUN_005dafe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005dafe0 @ 005dafe0 ////

void __fastcall FUN_005dafe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb7e08;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  param_1[0x18] = &PTR_FUN_00d18c4c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0xe;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005db080 @ 005db080 ////

undefined4 * __fastcall FUN_005db080(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7e49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d2bd84;
  param_1[0xe] = &PTR_LAB_00d2bd64;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = param_1 + 0x18;
  param_1[0x18] = &PTR_FUN_00d1ec60;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_1 + 0x1e;
  param_1[0x1e] = &PTR_FUN_00d18c3c;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005db140 @ 005db140 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_005db140(int param_1,int *param_2)

{
  float fVar1;
  int *this;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 *local_28;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  undefined4 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7e73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (int *)FUN_00ace790(param_2,0,&TM::CStaff::RTTI_Type_Descriptor,
                             &TM::CStar::RTTI_Type_Descriptor,0);
  piVar2 = (int *)FUN_00ace790(param_2,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CExtra::RTTI_Type_Descriptor,0);
  if (param_2 == (int *)0x0) {
    ExceptionList = local_c;
    return (float10)0.0;
  }
  local_28 = operator_new(0x90);
  local_4 = 0;
  if (local_28 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_005daf20(local_28);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar3[0x18] + 4))();
  puVar3[0x1d] = param_2;
  (**(code **)puVar3[0x18])();
  if (this == (int *)0x0) {
    fVar5 = FUN_005d9390(param_1,(float)piVar2);
    puVar3[0x1f] = (float)fVar5;
    param_2 = _DAT_0104d79c;
    puVar3[0x23] = _DAT_0104d79c;
    if (*(int *)(param_1 + 0x74) == 0) {
      fVar5 = FUN_005d7cb0(param_1,piVar2);
    }
    else {
      fVar5 = FUN_005d7b90(param_1,piVar2);
    }
    puVar3[0x20] = (float)fVar5;
    puVar3[0x21] = 0xbf800000;
  }
  else {
    fVar5 = FUN_005d9390(param_1,(float)this);
    puVar3[0x1f] = (float)fVar5;
    fVar5 = CStar_GetMoodPerformanceFactor(this);
    param_2 = (int *)(float)fVar5;
    puVar3[0x23] = (float)fVar5;
    if (*(int *)(param_1 + 0x74) == 0) {
      fVar5 = FUN_005d7cb0(param_1,this);
    }
    else {
      fVar5 = FUN_005d7b90(param_1,this);
    }
    puVar3[0x20] = (float)fVar5;
    puVar4 = (undefined4 *)FUN_00585ff0(this,&local_28);
    puVar3[0x21] = *puVar4;
  }
  fVar1 = (float)puVar3[0x1f] * (float)puVar3[0x20] * (float)param_2;
  puVar3[0x1e] = fVar1;
  fVar5 = FUN_005d75f0(fVar1);
  if ((float10)0.0 <= fVar5) {
    if ((float10)1.0 < fVar5) {
      fVar5 = (float10)1.0;
    }
  }
  else {
    fVar5 = (float10)0.0;
  }
  puVar3[0x22] = (float)fVar5;
  piStack_1c = puVar3 + 6;
  pppuStack_18 = &ppuStack_24;
  ppuStack_24 = &PTR_LAB_00d2bd54;
  iStack_20 = *piStack_1c;
  *(int **)(*piStack_1c + 4) = &iStack_20;
  *piStack_1c = (int)&iStack_20;
  local_4 = 1;
  puStack_10 = puVar3;
  FUN_005da3d0((void *)(param_1 + 0x94),(int)&ppuStack_24);
  FUN_005d8ab0(&ppuStack_24);
  ExceptionList = local_c;
  return (float10)(float)puVar3[0x1e];
}


//// FUNCTION FUN_005db360 @ 005db360 ////

undefined4 * FUN_005db360(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7e8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x90);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005daf20(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_005db3c0 @ 005db3c0 ////

undefined4 * FUN_005db3c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb7eab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xbc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005db080(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION QualityCalc_LoadTuningData @ 005db420 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void QualityCalc_LoadTuningData(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  float10 fVar5;
  char *local_21c;
  undefined4 local_218;
  uint local_214;
  char local_210 [20];
  char *local_1fc;
  undefined4 local_1f8;
  uint local_1f4;
  char local_1f0 [20];
  char *local_1dc;
  undefined4 local_1d8;
  uint local_1d4;
  char local_1d0 [20];
  undefined4 local_1bc [54];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb80f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe54b8c);
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_21c,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_005db3c0,&local_21c);
  local_4 = 0xffffffff;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  FUN_0098f9e0(0x989790);
  pcVar2 = (char *)FUN_00acdb9e(0xe54bac);
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_21c,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  local_4 = 1;
  FUN_0098fa50(FUN_005db360,&local_21c);
  local_4 = 0xffffffff;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  FUN_0098f9e0(0x989790);
  local_1dc = local_1d0;
  local_1d0[0] = '\0';
  local_1d8 = 0;
  local_1d4 = 0x14;
  _strncpy(local_1dc,"releasing_movies",0x10);
  local_1d8 = 0x10;
  local_1dc[0x10] = '\0';
  local_4 = 2;
  FUN_0055c540(local_1bc,&local_1dc);
  if (0x14 < local_1d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1dc);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"min_max",7);
  local_218 = 7;
  local_21c[7] = '\0';
  local_4._0_1_ = 5;
  uVar3 = FUN_00558a50(local_1bc,&local_21c,(undefined4 *)0x0);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  if ((char)uVar3 != '\0') {
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"star_genre_experience_min",0x19);
    local_218 = 0x19;
    local_21c[0x19] = '\0';
    local_4._0_1_ = 6;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d794 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"star_genre_experience_max",0x19);
    local_218 = 0x19;
    local_21c[0x19] = '\0';
    local_4._0_1_ = 7;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d798 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"star_mood_min",0xd);
    local_218 = 0xd;
    local_21c[0xd] = '\0';
    local_4._0_1_ = 8;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d79c = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"star_mood_max",0xd);
    local_218 = 0xd;
    local_21c[0xd] = '\0';
    local_4._0_1_ = 9;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7a0 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"stars_genre_fit_min",0x13);
    local_218 = 0x13;
    local_21c[0x13] = '\0';
    local_4._0_1_ = 10;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7a4 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"stars_genre_fit_max",0x13);
    local_218 = 0x13;
    local_21c[0x13] = '\0';
    local_4._0_1_ = 0xb;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7a8 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"star_relationship_min",0x15);
    local_218 = 0x15;
    local_21c[0x15] = '\0';
    local_4._0_1_ = 0xc;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7b0 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"star_relationship_max",0x15);
    local_218 = 0x15;
    local_21c[0x15] = '\0';
    local_4._0_1_ = 0xd;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7b4 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"star_relationship_range_width",0x1d);
    local_218 = 0x1d;
    local_21c[0x1d] = '\0';
    local_4._0_1_ = 0xe;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7b8 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"set_repair_value_min",0x14);
    local_218 = 0x14;
    local_21c[0x14] = '\0';
    local_4._0_1_ = 0xf;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7bc = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"set_repair_value_max",0x14);
    local_218 = 0x14;
    local_21c[0x14] = '\0';
    local_4._0_1_ = 0x10;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7c0 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"crew_min",8);
    local_218 = 8;
    local_21c[8] = '\0';
    local_4._0_1_ = 0x11;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7c4 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"crew_max",8);
    local_218 = 8;
    local_21c[8] = '\0';
    local_4._0_1_ = 0x12;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7c8 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"unspread_performance_min",0x18);
    local_218 = 0x18;
    local_21c[0x18] = '\0';
    local_4._0_1_ = 0x13;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7d0 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"unspread_performance_max",0x18);
    local_218 = 0x18;
    local_21c[0x18] = '\0';
    local_4._0_1_ = 0x14;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7d4 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"overall",7);
  local_218 = 7;
  local_21c[7] = '\0';
  local_4._0_1_ = 0x15;
  uVar3 = FUN_00558a50(local_1bc,&local_21c,(undefined4 *)0x0);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  if ((char)uVar3 != '\0') {
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"quality_overall_max_adder",0x19);
    local_218 = 0x19;
    local_21c[0x19] = '\0';
    local_4._0_1_ = 0x16;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_00e54b50 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x20;
    local_21c = _malloc(0x20);
    _strncpy(local_21c,"quality_overall_max_shifter",0x1b);
    local_218 = 0x1b;
    local_21c[0x1b] = '\0';
    local_4._0_1_ = 0x17;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_00e54b54 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x40;
    local_21c = _malloc(0x40);
    _strncpy(local_21c,"quality_overall_shifter_mid_point",0x21);
    local_218 = 0x21;
    local_21c[0x21] = '\0';
    local_4._0_1_ = 0x18;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_00e54b58 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"script_quality",0xe);
  local_218 = 0xe;
  local_21c[0xe] = '\0';
  local_4._0_1_ = 0x19;
  uVar3 = FUN_00558a50(local_1bc,&local_21c,(undefined4 *)0x0);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  if ((char)uVar3 != '\0') {
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"1_star",6);
    local_218 = 6;
    local_21c[6] = '\0';
    local_4._0_1_ = 0x1a;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7dc = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"2_star",6);
    local_218 = 6;
    local_21c[6] = '\0';
    local_4._0_1_ = 0x1b;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7e0 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"3_star",6);
    local_218 = 6;
    local_21c[6] = '\0';
    local_4._0_1_ = 0x1c;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7e4 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"4_star",6);
    local_218 = 6;
    local_21c[6] = '\0';
    local_4._0_1_ = 0x1d;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7e8 = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"5_star",6);
    local_218 = 6;
    local_21c[6] = '\0';
    local_4._0_1_ = 0x1e;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7ec = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"pre_production",0xe);
  local_218 = 0xe;
  local_21c[0xe] = '\0';
  local_4._0_1_ = 0x1f;
  uVar3 = FUN_00558a50(local_1bc,&local_21c,(undefined4 *)0x0);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  if ((char)uVar3 != '\0') {
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"pre_production",0xe);
    local_218 = 0xe;
    local_21c[0xe] = '\0';
    local_4._0_1_ = 0x20;
    DAT_0104d7d8 = FUN_00558750(local_1bc,&local_21c,0);
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"star_mood_step",0xe);
  local_218 = 0xe;
  local_21c[0xe] = '\0';
  local_4._0_1_ = 0x21;
  uVar3 = FUN_00558a50(local_1bc,&local_21c,(undefined4 *)0x0);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  if ((char)uVar3 != '\0') {
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"star_mood_step",0xe);
    local_218 = 0xe;
    local_21c[0xe] = '\0';
    local_4._0_1_ = 0x22;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7cc = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"genre_fit",9);
  local_218 = 9;
  local_21c[9] = '\0';
  local_4._0_1_ = 0x23;
  uVar3 = FUN_00558a50(local_1bc,&local_21c,(undefined4 *)0x0);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  if ((char)uVar3 != '\0') {
    local_21c = local_210;
    local_210[0] = '\0';
    local_218 = 0;
    local_214 = 0x14;
    _strncpy(local_21c,"max_from_ideal",0xe);
    local_218 = 0xe;
    local_21c[0xe] = '\0';
    local_4._0_1_ = 0x24;
    fVar5 = FUN_00558610(local_1bc,&local_21c,0.0);
    _DAT_0104d7ac = (float)fVar5;
    if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
      _free(local_21c);
    }
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"stunts",6);
  local_218 = 6;
  local_21c[6] = '\0';
  local_4._0_1_ = 0x25;
  FUN_0055c540(local_e4,&local_21c);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"performance",0xb);
  local_1f8 = 0xb;
  local_1fc[0xb] = '\0';
  local_4._0_1_ = 0x28;
  uVar3 = FUN_00558a50(local_e4,&local_1fc,(undefined4 *)0x0);
  local_4._0_1_ = 0x27;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  if ((char)uVar3 != '\0') {
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"stuntskillminimum",0x11);
    local_1f8 = 0x11;
    local_1fc[0x11] = '\0';
    local_4._0_1_ = 0x29;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b20 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"stuntskillmaximum",0x11);
    local_1f8 = 0x11;
    local_1fc[0x11] = '\0';
    local_4._0_1_ = 0x2a;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b24 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"stuntlevelminimum",0x11);
    local_1f8 = 0x11;
    local_1fc[0x11] = '\0';
    local_4._0_1_ = 0x2b;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b28 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"stuntlevelmaximum",0x11);
    local_1f8 = 0x11;
    local_1fc[0x11] = '\0';
    local_4._0_1_ = 0x2c;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b2c = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"likenessbonus",0xd);
    local_1f8 = 0xd;
    local_1fc[0xd] = '\0';
    local_4._0_1_ = 0x2d;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b30 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"likenessminimum",0xf);
    local_1f8 = 0xf;
    local_1fc[0xf] = '\0';
    local_4._0_1_ = 0x2e;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b34 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"likenessmaximum",0xf);
    local_1f8 = 0xf;
    local_1fc[0xf] = '\0';
    local_4._0_1_ = 0x2f;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b38 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"healthminimum",0xd);
    local_1f8 = 0xd;
    local_1fc[0xd] = '\0';
    local_4._0_1_ = 0x30;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b3c = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"healthmaximum",0xd);
    local_1f8 = 0xd;
    local_1fc[0xd] = '\0';
    local_4._0_1_ = 0x31;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b40 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"injurymultiplier",0x10);
    local_1f8 = 0x10;
    local_1fc[0x10] = '\0';
    local_4._0_1_ = 0x32;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    _DAT_00e54b44 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"successminimum",0xe);
    local_1f8 = 0xe;
    local_1fc[0xe] = '\0';
    local_4._0_1_ = 0x33;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    DAT_00e54b48 = (float)fVar5;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
    local_1fc = local_1f0;
    local_1f0[0] = '\0';
    local_1f8 = 0;
    local_1f4 = 0x14;
    _strncpy(local_1fc,"successmaximum",0xe);
    local_1f8 = 0xe;
    local_1fc[0xe] = '\0';
    local_4._0_1_ = 0x34;
    fVar5 = FUN_00558610(local_e4,&local_1fc,0.0);
    DAT_00e54b4c = (float)fVar5;
    local_4._0_1_ = 0x27;
    if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1fc);
    }
  }
  local_4._0_1_ = 0x27;
  ReleaseCalc_LoadTuningData();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00558920(local_e4);
  local_4 = 0xffffffff;
  FUN_00558920(local_1bc);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005dc900 @ 005dc900 ////

float10 __fastcall FUN_005dc900(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  void *this;
  float extraout_ECX;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float local_10;
  int local_c;
  undefined4 local_4;
  
  iVar7 = *(int *)(*(int *)(param_1 + 0x74) + 0x194);
  local_c = 0;
  local_10 = 0.0;
  if (iVar7 != *(int *)(param_1 + 0x74) + 0x1a0) {
    do {
      iVar2 = FUN_0048c9f0(*(int *)(iVar7 + 8));
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_0048c950(*(int *)(iVar7 + 8));
        piVar4 = (int *)FUN_005a6470(iVar2);
        if ((piVar3 != (int *)0x0) && (uVar5 = FUN_005a6140(iVar2), (char)uVar5 != '\0')) {
          pfVar6 = (float *)FUN_0048c9e0(*(void **)(iVar7 + 8),&local_4);
          if (*pfVar6 <= 0.0) {
            fVar8 = FUN_005db140(param_1,piVar3);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x74);
            cVar1 = FUN_004de210(iVar2);
            cVar1 = '\x01' - (cVar1 != '\0');
            pfVar6 = (float *)&stack0xffffffd8;
            fVar9 = extraout_ECX;
            this = (void *)FUN_004df4a0(iVar2);
            FUN_004b58b0(this,pfVar6);
            fVar8 = FUN_005d8bd0(piVar4,piVar3,fVar9,cVar1);
          }
          local_c = local_c + 1;
          local_10 = (float)(fVar8 + (float10)local_10);
        }
      }
      iVar7 = *(int *)(iVar7 + 4);
    } while (iVar7 != *(int *)(param_1 + 0x74) + 0x1a0);
  }
  piVar3 = (int *)FUN_005b2780(*(int *)(*(int *)(param_1 + 0x74) + 0xb4));
  fVar8 = FUN_005db140(param_1,piVar3);
  fVar8 = fVar8 + (float10)local_10;
  if (local_c + 1 != 0) {
    fVar8 = fVar8 / (float10)(local_c + 1);
  }
  return fVar8;
}


//// FUNCTION FUN_005dca10 @ 005dca10 ////

float10 __fastcall FUN_005dca10(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  int local_8;
  float local_4;
  
  local_8 = 0;
  local_4 = 0.0;
  iVar1 = FUN_005b2220(*(int *)(param_1 + 0x8c));
  if (iVar1 != 0) {
    iVar1 = FUN_005b2220(*(int *)(param_1 + 0x8c));
    iVar1 = *(int *)(iVar1 + 100);
    iVar2 = FUN_005b2220(*(int *)(param_1 + 0x8c));
    if (iVar1 != *(int *)(iVar2 + 0x68)) {
      do {
        iVar2 = *(int *)(iVar1 + 0x14);
        if (iVar2 != 0) {
          FUN_005a64e0(iVar2);
          piVar3 = (int *)FUN_005a6470(iVar2);
          if ((piVar3 != (int *)0x0) && (uVar4 = FUN_005a6140(iVar2), (char)uVar4 != '\0')) {
            fVar5 = FUN_005db140(param_1,piVar3);
            local_8 = local_8 + 1;
            local_4 = (float)(fVar5 + (float10)local_4);
          }
        }
        iVar1 = iVar1 + 0x18;
        iVar2 = FUN_005b2220(*(int *)(param_1 + 0x8c));
      } while (iVar1 != *(int *)(iVar2 + 0x68));
    }
  }
  iVar1 = FUN_005b2780(*(int *)(param_1 + 0x8c));
  if (iVar1 == 0) {
    fVar5 = (float10)local_4;
  }
  else {
    piVar3 = (int *)FUN_005b2780(*(int *)(param_1 + 0x8c));
    fVar5 = FUN_005db140(param_1,piVar3);
    fVar5 = fVar5 + (float10)local_4;
    local_8 = local_8 + 1;
  }
  if (local_8 != 0) {
    fVar5 = fVar5 / (float10)local_8;
  }
  return fVar5;
}


//// FUNCTION CQualityRating_Compute @ 005dcb10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall CQualityRating_Compute(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *this_00;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float local_8;
  float local_4;
  
  if (*(int *)((int)this + 0x74) == 0) {
    fVar9 = FUN_005dca10((int)this);
  }
  else {
    fVar9 = FUN_005dc900((int)this);
  }
  *(float *)((int)this + 0xa4) = (float)fVar9;
  fVar9 = (fVar9 - (float10)_DAT_0104d7d0) / ((float10)_DAT_0104d7d4 - (float10)_DAT_0104d7d0);
  local_8 = (float)fVar9;
  if (fVar9 < (float10)0.0) {
    local_8 = 0.0;
    goto LAB_005dcba5;
  }
  if (local_8 <= 1.0) {
    if (local_8 < 0.0) {
      local_8 = 0.0;
      goto LAB_005dcba5;
    }
    if (local_8 <= 1.0) goto LAB_005dcba5;
  }
  local_8 = 1.0;
LAB_005dcba5:
  *(float *)((int)this + 0xa8) = local_8;
  if (*(int *)((int)this + 0x74) == 0) {
    iVar8 = *(int *)((int)this + 0x8c);
    pfVar7 = &local_4;
  }
  else {
    iVar8 = *(int *)(*(int *)((int)this + 0x74) + 0xb4);
    pfVar7 = &local_8;
  }
  this_00 = (void *)FUN_005b2130(iVar8);
  puVar5 = (undefined4 *)FUN_004bdbc0(this_00,pfVar7);
  *(undefined4 *)((int)this + 0xac) = *puVar5;
  if (*(int *)((int)this + 0x74) == 0) {
    fVar9 = FUN_005d9980((int)this);
  }
  else {
    fVar9 = FUN_005d9520((int)this);
  }
  *(float *)((int)this + 0xb0) = (float)fVar9;
  local_8 = 1.0;
  if ((*(int *)((int)this + 0x74) != 0) &&
     (piVar6 = (int *)FUN_004df220(*(int *)((int)this + 0x74)), piVar6 != (int *)0x0)) {
    pfVar7 = (float *)(**(code **)(*piVar6 + 0xb8))(&local_4);
    local_8 = *pfVar7;
  }
  *(float *)((int)this + 0xb4) = (_DAT_0104d7c0 - _DAT_0104d7bc) * local_8 + _DAT_0104d7bc;
  if (*(int *)((int)this + 0x74) == 0) {
    *(undefined4 *)((int)this + 0xb8) = 0x3f800000;
  }
  else {
    fVar9 = FUN_005d9130((int)this);
    *(float *)((int)this + 0xb8) = (float)fVar9;
  }
  fVar1 = *(float *)((int)this + 0xac) - _DAT_00e54b58;
  fVar1 = ((*(float *)((int)this + 0xb4) * *(float *)((int)this + 0xb8) *
            *(float *)((int)this + 0xb0) * *(float *)((int)this + 0xa4) - 1.0) +
          (fVar1 + fVar1) * -1.0 * _DAT_00e54b54) * _DAT_00e54b50;
  if (0.0 < fVar1) {
    fVar4 = 0.8;
    fVar2 = fVar1;
    fVar1 = 0.0;
    do {
      fVar3 = fVar2;
      if (0.1 < fVar2) {
        fVar3 = 0.1;
      }
      fVar2 = fVar2 - 0.1;
      fVar3 = fVar3 * fVar4;
      fVar4 = fVar4 * 0.8;
      fVar1 = fVar3 + fVar1;
    } while (0.0 < fVar2);
  }
  fVar1 = fVar1 + *(float *)((int)this + 0xac);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)((int)this + 0x90) = fVar1;
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_005dcd60 @ 005dcd60 ////

undefined4 * __thiscall FUN_005dcd60(void *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8137;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_00d2bd84;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d2bd64;
  piVar1 = (int *)((int)this + 100);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 **)((int)this + 0x6c) = (undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x60) = &PTR_FUN_00d1ec60;
  *(float *)((int)this + 0x74) = param_1;
  if (param_1 != 0.0) {
    piVar2 = (int *)((int)param_1 + 0x18);
    *(int **)((int)this + 0x68) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_FUN_00d18c3c;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  CQualityRating_Compute(this,&param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005dce50 @ 005dce50 ////

undefined4 * __thiscall FUN_005dce50(void *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8187;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_00d2bd84;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d2bd64;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 **)((int)this + 0x6c) = (undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x60) = &PTR_FUN_00d1ec60;
  *(undefined4 *)((int)this + 0x74) = 0;
  piVar1 = (int *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x84) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_FUN_00d18c3c;
  *(float *)((int)this + 0x8c) = param_1;
  if (param_1 != 0.0) {
    piVar2 = (int *)((int)param_1 + 0x18);
    *(int **)((int)this + 0x80) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  CQualityRating_Compute(this,&param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005dcf40 @ 005dcf40 ////

void __fastcall FUN_005dcf40(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005dcf80 @ 005dcf80 ////

float10 __fastcall FUN_005dcf80(int param_1)

{
  return (float10)*(float *)(param_1 + 0x90);
}


//// FUNCTION FUN_005dcfa0 @ 005dcfa0 ////

float10 __fastcall FUN_005dcfa0(int param_1)

{
  return (float10)*(float *)(param_1 + 0xa4);
}


//// FUNCTION CProjectSuccess_ComputePublicInterestFactor @ 005dcfd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
CProjectSuccess_ComputePublicInterestFactor(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = param_3 * 0.5;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
    if (1.0 < fVar1) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  if (fVar2 < param_1) {
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
LAB_005dd079:
        param_1 = 1.0;
      }
      else if (fVar1 < 0.0) {
        param_1 = 0.0;
      }
      else {
        param_1 = fVar1;
        if (1.0 < fVar1) goto LAB_005dd079;
      }
    }
    else {
      param_1 = 0.0;
    }
  }
  fVar1 = param_2 + param_1;
  if (fVar1 < 0.0) {
    fVar3 = (float10)0.0;
    goto LAB_005dd0f7;
  }
  if (fVar1 <= 1.0) {
    fVar3 = (float10)fVar1;
    if (fVar1 < 0.0) {
      fVar3 = (float10)0.0;
      goto LAB_005dd0f7;
    }
    if (fVar1 <= 1.0) goto LAB_005dd0f7;
  }
  fVar3 = (float10)1.0;
LAB_005dd0f7:
  if (param_3 == 0.0) {
    fVar3 = (float10)0.0;
  }
  else {
    if (fVar3 < (float10)param_3 == (fVar3 == (float10)param_3)) {
      fVar3 = (float10)FUN_00ace9b0();
    }
    else {
      fVar3 = (float10)param_3 - fVar3;
      if ((float10)0.0 <= fVar3) {
        if ((float10)1.0 < fVar3) {
          fVar3 = (float10)1.0;
        }
        fVar3 = fVar3 / (float10)param_3;
      }
      else {
        fVar3 = (float10)0.0 / (float10)param_3;
      }
    }
    fVar3 = (float10)1.0 - fVar3;
  }
  fVar4 = (float10)0.0;
  if ((0.0 <= fVar1) && ((1.0 < fVar1 || (0.0 < fVar1)))) {
    param_3 = param_2 - param_1;
    if (0.0 <= param_3) {
      if (1.0 < param_3) {
        param_3 = 1.0;
      }
    }
    else {
      param_3 = 0.0;
    }
    fVar4 = (float10)param_2 + (float10)param_1;
    if ((float10)0.0 <= fVar4) {
      if ((float10)1.0 < fVar4) {
        fVar4 = (float10)1.0;
      }
      fVar4 = ABS((float10)param_3) / fVar4;
    }
    else {
      fVar4 = ABS((float10)param_3) / (float10)0.0;
    }
  }
  return ((float10)1.0 - (float10)_DAT_00e54bd0 * fVar4) * fVar3;
}


//// FUNCTION FUN_005dd2d0 @ 005dd2d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005dd2d0(float param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_4;
  
  local_4 = param_1;
  FUN_005a2ae0(*(void **)((int)param_1 + 0x8c),&local_4);
  iVar2 = *(int *)((int)param_1 + 0x8c);
  fVar1 = *(float *)(iVar2 + 0x110);
  if (((NAN(local_4) || NAN(fVar1)) || local_4 < fVar1 == (local_4 == fVar1)) ||
     (*(float *)(iVar2 + 0x110) == 0.0)) {
    local_4 = local_4 - *(float *)(iVar2 + 0x110);
    if (0.0 <= local_4) {
      if (1.0 < local_4) {
        local_4 = 1.0;
      }
    }
    else {
      local_4 = 0.0;
    }
    fVar3 = (float10)FUN_00ace9b0();
  }
  else {
    fVar3 = (float10)*(float *)(iVar2 + 0x110) - (float10)local_4;
    if ((float10)0.0 <= fVar3) {
      if ((float10)1.0 < fVar3) {
        fVar3 = (float10)1.0;
      }
      fVar3 = fVar3 / (float10)*(float *)(iVar2 + 0x110);
    }
    else {
      fVar3 = (float10)0.0 / (float10)*(float *)(iVar2 + 0x110);
    }
  }
  return (float10)_DAT_00e54bd0 * ((float10)1.0 - fVar3) *
         ((float10)_DAT_00e54bd8 - (float10)_DAT_00e54bd4) + (float10)_DAT_00e54bd4;
}


//// FUNCTION Release_ComputeGenrePopularityAndSaturation @ 005dd3d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl Release_ComputeGenrePopularityAndSaturation(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  undefined4 *puVar9;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54 [18];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb81a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = (undefined4 *)FUN_00449b40(param_1);
  pfVar6 = &local_5c;
  pvVar5 = (void *)FUN_005202b0();
  pfVar6 = (float *)AudienceTaste_GetGenreTrend(pvVar5,pfVar6,puVar4);
  local_5c = *pfVar6;
  iVar7 = AwardBonusManager_Get();
  if (iVar7 != 0) {
    iVar7 = 10;
    pvVar5 = (void *)AwardBonusManager_Get();
    cVar3 = AwardBonusManager_IsBonusActive(pvVar5,iVar7);
    if (cVar3 != '\0') {
      pvVar5 = (void *)0x0;
      iVar7 = 10;
      AwardBonusManager_Get();
      fVar8 = AwardBonus_GetValue(iVar7,pvVar5);
      goto LAB_005dd43d;
    }
  }
  fVar8 = (float10)local_5c;
LAB_005dd43d:
  local_5c = (float)(((float10)_DAT_00e54bec - (float10)_DAT_00e54be8) * fVar8 +
                    (float10)_DAT_00e54be8);
  FUN_0044d2f0(local_54);
  local_4 = 0;
  FUN_0044d270(local_54,param_1);
  puVar4 = local_54;
  puVar9 = &local_58;
  GenreSaturationTracker_GetInstance();
  pfVar6 = (float *)GenreSaturationTracker_Query(puVar9,(float)puVar4);
  fVar1 = *pfVar6;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
    if (1.0 < fVar1) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  *param_2 = fVar2;
  local_4 = 0xffffffff;
  fVar1 = ((1.0 - fVar1) * (1.0 - _DAT_00e54c08) + _DAT_00e54c08) * local_5c;
  FUN_00526bb0(local_54);
  ExceptionList = local_c;
  return (float10)fVar1;
}


//// FUNCTION FUN_005dd510 @ 005dd510 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_005dd510(float *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (param_2 - _DAT_00e54be8 * _DAT_00e54c08) /
          (_DAT_00e54bec - _DAT_00e54be8 * _DAT_00e54c08);
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


//// FUNCTION CProjectSuccess_GetTechPioneeringFactor @ 005dd570 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall CProjectSuccess_GetTechPioneeringFactor(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    piVar2 = (int *)FUN_005a2aa0(*(int *)(param_1 + 0x8c));
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x154);
  }
  else {
    piVar2 = (int *)GetPlayerStudio();
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x2c8);
  }
  cVar1 = (**(code **)(*piVar2 + 0x88))(uVar3);
  if (cVar1 != '\0') {
    return (float10)_DAT_00e54c14;
  }
  return (float10)1.0;
}


//// FUNCTION FUN_005dd5c0 @ 005dd5c0 ////

void __thiscall FUN_005dd5c0(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0x90);
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


//// FUNCTION FUN_005dd610 @ 005dd610 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005dd610(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0x94) - _DAT_00e54bd4) / (_DAT_00e54bd8 - _DAT_00e54bd4);
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


//// FUNCTION Release_GetNormalizedStarPower @ 005dd670 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Release_GetNormalizedStarPower(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0x98) - _DAT_00e54bdc) / (_DAT_00e54be0 - _DAT_00e54bdc);
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


//// FUNCTION FUN_005dd6d0 @ 005dd6d0 ////

void __thiscall FUN_005dd6d0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xa8);
  return;
}


//// FUNCTION FUN_005dd6e0 @ 005dd6e0 ////

void __thiscall FUN_005dd6e0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xac);
  return;
}


//// FUNCTION FUN_005dd6f0 @ 005dd6f0 ////

void __thiscall FUN_005dd6f0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xb0);
  return;
}


//// FUNCTION FUN_005dd700 @ 005dd700 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005dd700(int *param_1,float *param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_4;
  
  piVar1 = param_1;
  piVar3 = (int *)FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  pvVar4 = (void *)FUN_00ace790(piVar1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                &TM::CExtra::RTTI_Type_Descriptor,0);
  if (piVar3 == (int *)0x0) {
    pfVar5 = FUN_0056f510(pvVar4,&local_4);
  }
  else {
    pfVar5 = (float *)(**(code **)(*piVar3 + 0x254))(&param_1);
  }
  param_1 = (int *)*pfVar5;
  iVar6 = AwardBonusManager_Get();
  if (iVar6 != 0) {
    iVar6 = 3;
    pvVar4 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar4,iVar6);
    if (cVar2 != '\0') {
      pvVar4 = (void *)0x0;
      iVar6 = 3;
      AwardBonusManager_Get();
      fVar7 = AwardBonus_GetValue(iVar6,pvVar4);
      fVar7 = fVar7 * (float10)(float)param_1;
      goto LAB_005dd792;
    }
  }
  fVar7 = (float10)(float)param_1;
LAB_005dd792:
  if ((float10)0.0 <= fVar7) {
    fVar8 = fVar7;
    if ((float10)1.0 < fVar7) {
      fVar8 = (float10)1.0;
    }
  }
  else {
    fVar8 = (float10)0.0;
  }
  *param_2 = (float)fVar8;
  return ((float10)1.0 - fVar7) * ((float10)1.0 - (float10)_DAT_00e54c04) + (float10)_DAT_00e54c04;
}


//// FUNCTION FUN_005dd7f0 @ 005dd7f0 ////

void __thiscall FUN_005dd7f0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xb4);
  return;
}


//// FUNCTION FUN_005dd800 @ 005dd800 ////

void __fastcall FUN_005dd800(int *param_1)

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
  puStack_8 = &LAB_00cb81c8;
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


//// FUNCTION CProjectSuccess_RegisterSaveFields @ 005dd8d0 ////

void __fastcall CProjectSuccess_RegisterSaveFields(int param_1)

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
  puStack_8 = &LAB_00cb8240;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
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
  uVar3 = FUN_0098b490("PProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x18;
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
  uVar3 = FUN_0098b490("PProjectAI");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x40));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
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
    FUN_0098a430((undefined4 *)(param_1 + 0x58),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
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
  uVar3 = FUN_0098b490("PublicInterest");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x5c),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
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
  uVar3 = FUN_0098b490("CastStarRatings");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x60),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
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
  uVar3 = FUN_0098b490("EraFit");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 100),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
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
  uVar3 = FUN_0098b490("WeightedBoredoms");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x68),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 7;
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
  uVar3 = FUN_0098b490("UnweightedBoredoms");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x70));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("UnweightedSetsBoredom");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x74));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
    puVar6 = &DAT_010581d8;
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
    local_4 = 9;
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
  uVar3 = FUN_0098b490("UnweightedStarsBoredom");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x78));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x21;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
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
  uVar3 = FUN_0098b490("UnweightedGenreBoredom");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x7c));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Success.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x22;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
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
  uVar3 = FUN_0098b490("Technology");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x6c),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION Release_GetNormalizedGenrePopularity @ 005de3a0 ////

undefined4 __thiscall Release_GetNormalizedGenrePopularity(void *this,float *param_1)

{
  undefined4 extraout_ECX;
  
  FUN_005dd510(param_1,*(float *)((int)this + 0x9c));
  return extraout_ECX;
}


//// FUNCTION FUN_005de3c0 @ 005de3c0 ////

undefined4 __cdecl FUN_005de3c0(float *param_1,int param_2)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  float local_4;
  
  fVar1 = Release_ComputeGenrePopularityAndSaturation(param_2,&local_4);
  local_4 = (float)fVar1;
  FUN_005dd510(param_1,local_4);
  return extraout_ECX;
}


//// FUNCTION CProjectSuccess_ComputeBoredomFactor @ 005de3f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall CProjectSuccess_ComputeBoredomFactor(int param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  void *this;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x74) + 0xac);
  local_14 = 0.0;
  local_18 = 0.0;
  local_10 = 0.0;
  local_1c = 0;
  if (iVar6 != *(int *)(param_1 + 0x74) + 0xb8) {
    do {
      this = (void *)FUN_004df220(*(int *)(iVar6 + 8));
      iVar3 = AwardBonusManager_Get();
      if (iVar3 == 0) {
LAB_005de4a9:
        pfVar5 = FUN_004d3720(this,&local_4);
        fVar1 = *pfVar5;
      }
      else {
        iVar3 = 3;
        pvVar4 = (void *)AwardBonusManager_Get();
        cVar2 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
        if (cVar2 == '\0') goto LAB_005de4a9;
        pvVar4 = (void *)0x0;
        iVar3 = 3;
        AwardBonusManager_Get();
        fVar10 = AwardBonus_GetValue(iVar3,pvVar4);
        local_8 = (float)fVar10;
        pfVar5 = FUN_004d3720(this,&local_c);
        fVar1 = local_8 * *pfVar5;
        if (0.0 <= fVar1) {
          if (1.0 < fVar1) {
            fVar1 = 1.0;
          }
        }
        else {
          fVar1 = 0.0;
        }
      }
      local_18 = local_18 + fVar1;
      iVar6 = *(int *)(iVar6 + 4);
      local_1c = local_1c + 1;
      local_14 = (1.0 - fVar1) * (1.0 - _DAT_00e54bfc) + _DAT_00e54bfc + local_14;
    } while (iVar6 != *(int *)(param_1 + 0x74) + 0xb8);
    if (local_1c != 0) {
      fVar1 = local_18 / (float)local_1c;
      if (0.0 <= fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      *(float *)(param_1 + 0xac) = fVar1;
    }
  }
  iVar9 = 0;
  local_c = 0.0;
  local_8 = 0.0;
  iVar6 = FUN_005b2220(*(int *)(param_1 + 0x74));
  iVar6 = *(int *)(iVar6 + 100);
  iVar3 = FUN_005b2220(*(int *)(param_1 + 0x74));
  fVar1 = local_8;
  if (iVar6 != *(int *)(iVar3 + 0x68)) {
    do {
      iVar3 = *(int *)(iVar6 + 0x14);
      if (((iVar3 != 0) && (uVar7 = FUN_005a6140(iVar3), (char)uVar7 != '\0')) &&
         (piVar8 = (int *)FUN_005a6470(iVar3), piVar8 != (int *)0x0)) {
        fVar10 = FUN_005dd700(piVar8,&local_10);
        local_1c = local_1c + 1;
        local_14 = (float)(fVar10 + (float10)local_14);
        iVar9 = iVar9 + 1;
        local_18 = local_10 + local_18;
        local_c = local_10 + local_c;
      }
      iVar6 = iVar6 + 0x18;
      iVar3 = FUN_005b2220(*(int *)(param_1 + 0x74));
      fVar1 = (float)iVar9;
    } while (iVar6 != *(int *)(iVar3 + 0x68));
  }
  local_8 = fVar1;
  iVar6 = FUN_005b2780(*(int *)(param_1 + 0x74));
  if (iVar6 != 0) {
    pfVar5 = &local_10;
    piVar8 = (int *)FUN_005b2780(*(int *)(param_1 + 0x74));
    fVar10 = FUN_005dd700(piVar8,pfVar5);
    local_1c = local_1c + 1;
    iVar9 = iVar9 + 1;
    local_14 = (float)(fVar10 + (float10)local_14);
    local_18 = local_10 + local_18;
    local_c = local_10 + local_c;
    local_8 = (float)iVar9;
  }
  if (iVar9 != 0) {
    local_c = local_c / (float)(int)local_8;
    if (0.0 <= local_c) {
      if (1.0 < local_c) {
        local_c = 1.0;
      }
    }
    else {
      local_c = 0.0;
    }
    *(float *)(param_1 + 0xb0) = local_c;
  }
  if (local_1c == 0) {
    *param_2 = 0.0;
    return (float10)0.0;
  }
  fVar10 = (float10)1.0 / (float10)local_1c;
  fVar11 = (float10)local_18 * fVar10;
  if ((float10)0.0 <= fVar11) {
    if ((float10)1.0 < fVar11) {
      fVar11 = (float10)1.0;
    }
    *param_2 = (float)fVar11;
    return fVar10 * (float10)local_14;
  }
  *param_2 = 0.0;
  return fVar10 * (float10)local_14;
}


//// FUNCTION FUN_005de6f0 @ 005de6f0 ////

void __thiscall FUN_005de6f0(void *this,void *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  float *pfVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  
  iVar1 = FUN_005b2220(*(int *)((int)this + 0x74));
  iVar1 = *(int *)(iVar1 + 100);
  iVar2 = FUN_005b2220(*(int *)((int)this + 0x74));
  this_00 = param_1;
  if (iVar1 != *(int *)(iVar2 + 0x68)) {
    do {
      if ((*(int *)(iVar1 + 0x14) != 0) &&
         (uVar3 = FUN_005a6140(*(int *)(iVar1 + 0x14)), (char)uVar3 != '\0')) {
        iVar9 = 0;
        pTVar8 = &TM::CStar::RTTI_Type_Descriptor;
        pTVar7 = &TM::CStaff::RTTI_Type_Descriptor;
        iVar2 = 0;
        piVar4 = (int *)FUN_005a6470(*(int *)(iVar1 + 0x14));
        pvVar5 = (void *)FUN_00ace790(piVar4,iVar2,pTVar7,pTVar8,iVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00585ff0(pvVar5,&param_1);
          for (pfVar6 = *(float **)((int)this_00 + 4);
              (pfVar6 != *(float **)((int)this_00 + 8) && ((float)param_1 < *pfVar6));
              pfVar6 = pfVar6 + 1) {
          }
          FUN_0050f0a0(this_00,pfVar6,1,&param_1);
        }
      }
      iVar1 = iVar1 + 0x18;
      iVar2 = FUN_005b2220(*(int *)((int)this + 0x74));
    } while (iVar1 != *(int *)(iVar2 + 0x68));
  }
  iVar2 = 0;
  pTVar8 = &TM::CStar::RTTI_Type_Descriptor;
  pTVar7 = &TM::CStaff::RTTI_Type_Descriptor;
  iVar1 = 0;
  piVar4 = (int *)FUN_005b2780(*(int *)((int)this + 0x74));
  pvVar5 = (void *)FUN_00ace790(piVar4,iVar1,pTVar7,pTVar8,iVar2);
  if (pvVar5 != (void *)0x0) {
    FUN_00585ff0(pvVar5,&param_1);
    for (pfVar6 = *(float **)((int)this_00 + 4);
        (pfVar6 != *(float **)((int)this_00 + 8) && ((float)param_1 < *pfVar6)); pfVar6 = pfVar6 + 1
        ) {
    }
    FUN_0050f0a0(this_00,pfVar6,1,&param_1);
  }
  return;
}


//// FUNCTION FUN_005de800 @ 005de800 ////

void __thiscall FUN_005de800(void *this,void *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  void *this_01;
  float *pfVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  int iVar7;
  void *local_4;
  
  local_4 = this;
  iVar1 = FUN_005a2b70(*(int *)((int)this + 0x8c));
  iVar1 = *(int *)(iVar1 + 100);
  iVar2 = FUN_005a2b70(*(int *)((int)this + 0x8c));
  this_00 = param_1;
  if (iVar1 != *(int *)(iVar2 + 0x68)) {
    do {
      iVar7 = 0;
      pTVar6 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar5 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar2 = 0;
      piVar3 = (int *)FUN_005a6470(*(int *)(iVar1 + 0x14));
      this_01 = (void *)FUN_00ace790(piVar3,iVar2,pTVar5,pTVar6,iVar7);
      if (this_01 != (void *)0x0) {
        FUN_00585ff0(this_01,&param_1);
        for (pfVar4 = *(float **)((int)this_00 + 4);
            (pfVar4 != *(float **)((int)this_00 + 8) && ((float)param_1 < *pfVar4));
            pfVar4 = pfVar4 + 1) {
        }
        FUN_0050f0a0(this_00,pfVar4,1,&param_1);
      }
      iVar1 = iVar1 + 0x18;
      iVar2 = FUN_005a2b70(*(int *)((int)this + 0x8c));
    } while (iVar1 != *(int *)(iVar2 + 0x68));
  }
  FUN_00585ff0(*(void **)(*(int *)((int)this + 0x8c) + 0xc0),&local_4);
  for (pfVar4 = *(float **)((int)this_00 + 4);
      (pfVar4 != *(float **)((int)this_00 + 8) && ((float)local_4 < *pfVar4)); pfVar4 = pfVar4 + 1)
  {
  }
  FUN_0050f0a0(this_00,pfVar4,1,&local_4);
  return;
}


//// FUNCTION CProjectSuccess_ComputeCastStarRatingsFactor @ 005de8f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall CProjectSuccess_ComputeCastStarRatingsFactor(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float local_20;
  undefined1 local_1c [4];
  float *local_18;
  float *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8258;
  local_c = ExceptionList;
  local_18 = (float *)0x0;
  local_14 = (float *)0x0;
  local_10 = 0;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x74) == 0) {
    ExceptionList = &local_c;
    FUN_005de800(param_1,local_1c);
    local_20 = *(float *)(*(int *)((int)param_1 + 0x8c) + 0x110);
  }
  else {
    ExceptionList = &local_c;
    FUN_005de6f0(param_1,local_1c);
    pfVar4 = (float *)CProject_GetQualityWithAwardBoost(*(void **)((int)param_1 + 0x74),&local_20);
    local_20 = *pfVar4;
  }
  fVar1 = 0.0;
  fVar3 = _DAT_00e54be4;
  for (pfVar4 = local_18; pfVar4 != local_14; pfVar4 = pfVar4 + 1) {
    fVar2 = fVar3 * *pfVar4;
    if (0.0 <= fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    fVar1 = fVar2 + fVar1;
    fVar3 = fVar3 * fVar3;
  }
  if (local_20 < 0.2) {
    local_20 = 0.2;
  }
  fVar1 = fVar1 / (local_20 * 3.0 - 0.3);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar1 = (_DAT_00e54be0 - _DAT_00e54bdc) * fVar1;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  local_20 = fVar1 + _DAT_00e54bdc;
  if (local_18 == (float *)0x0) {
    ExceptionList = local_c;
    return (float10)local_20;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}


//// FUNCTION FUN_005dea70 @ 005dea70 ////

undefined4 * __fastcall FUN_005dea70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d2c254;
  param_1[0xe] = &PTR_LAB_00d2c234;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = &PTR_FUN_00d18c3c;
  param_1[0x1b] = param_1 + 0x18;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = param_1 + 0x1e;
  param_1[0x1e] = &PTR_LAB_00d23ea0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005deb20 @ 005deb20 ////

undefined4 * __thiscall FUN_005deb20(void *this,byte param_1)

{
  FUN_005deb40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005deb40 @ 005deb40 ////

void __fastcall FUN_005deb40(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8298;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  param_1[0x1e] = &PTR_LAB_00d23ea0;
  local_4 = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  if ((undefined4 *)param_1[0x20] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x20] = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x20];
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x18] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0xe;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION GenrePopularitySnapshot_Constructor @ 005dec40 ////

undefined4 * __thiscall GenrePopularitySnapshot_Constructor(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb82b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_00d2c254;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d2c234;
  piVar1 = (int *)((int)this + 100);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 **)((int)this + 0x6c) = (undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x60) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x74) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x68) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_LAB_00d23ea0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION GenrePopularitySnapshot_Constructor_AI @ 005ded00 ////

undefined4 * __thiscall GenrePopularitySnapshot_Constructor_AI(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb82d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_00d2c254;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d2c234;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 **)((int)this + 0x6c) = (undefined4 *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x60) = &PTR_FUN_00d18c3c;
  *(undefined4 *)((int)this + 0x74) = 0;
  piVar1 = (int *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x84) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_LAB_00d23ea0;
  *(int *)((int)this + 0x8c) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x80) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION CProjectSuccess_Recompute @ 005dedc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CProjectSuccess_Recompute(void *param_1)

{
  void *pvVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  void **ppvVar5;
  float extraout_ECX;
  float extraout_ECX_00;
  float10 fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  float *pfVar10;
  void *local_4;
  
  pvVar1 = *(void **)((int)param_1 + 0x74);
  local_4 = param_1;
  if (pvVar1 == (void *)0x0) {
    fVar6 = FUN_005dd2d0((float)param_1);
  }
  else {
    pvVar9 = param_1;
    CProject_GetQualityWithAwardBoost(pvVar1,(float *)&stack0xfffffff0);
    fVar8 = extraout_ECX;
    FUN_005b1050(pvVar1,(undefined4 *)&stack0xffffffec);
    fVar7 = extraout_ECX_00;
    FUN_005b2bd0(pvVar1,(undefined4 *)&stack0xffffffe8);
    fVar6 = CProjectSuccess_ComputePublicInterestFactor(fVar7,fVar8,(float)pvVar9);
    fVar6 = ((float10)_DAT_00e54bd8 - (float10)_DAT_00e54bd4) * fVar6 + (float10)_DAT_00e54bd4;
  }
  *(float *)((int)param_1 + 0x94) = (float)fVar6;
  fVar6 = CProjectSuccess_ComputeCastStarRatingsFactor(param_1);
  *(float *)((int)param_1 + 0x98) = (float)fVar6;
  if (*(int *)((int)param_1 + 0x74) == 0) {
    local_4 = (void *)0x3f000000;
    *(undefined4 *)((int)param_1 + 0x9c) = 0x3f800000;
    *(undefined4 *)((int)param_1 + 0xa0) = 0x3f800000;
    *(undefined4 *)((int)param_1 + 0xa8) = 0x3f000000;
  }
  else {
    pfVar10 = (float *)((int)param_1 + 0xb4);
    iVar4 = FUN_005b6b90(*(int *)((int)param_1 + 0x74));
    fVar6 = Release_ComputeGenrePopularityAndSaturation(iVar4,pfVar10);
    *(float *)((int)param_1 + 0x9c) = (float)fVar6;
    fVar6 = CProjectSuccess_ComputeBoredomFactor((int)param_1,(float *)((int)param_1 + 0xa8));
    *(float *)((int)param_1 + 0xa0) = (float)fVar6;
  }
  fVar6 = CProjectSuccess_GetTechPioneeringFactor((int)param_1);
  *(float *)((int)param_1 + 0xa4) = (float)fVar6;
  ppvVar5 = &local_4;
  if (*(void **)((int)param_1 + 0x74) == (void *)0x0) {
    local_4 = *(void **)(*(int *)((int)param_1 + 0x8c) + 0x110);
  }
  else {
    ppvVar5 = (void **)CProject_GetQualityWithAwardBoost
                                 (*(void **)((int)param_1 + 0x74),(float *)ppvVar5);
  }
  pvVar1 = *ppvVar5;
  if (((float)pvVar1 < -1e-06) || (1.000001 < (float)pvVar1)) {
    pvVar1 = (void *)0x3f800000;
  }
  fVar7 = ((*(float *)((int)param_1 + 0xa4) * *(float *)((int)param_1 + 0x98) *
            *(float *)((int)param_1 + 0x9c) * *(float *)((int)param_1 + 0xa0) *
            *(float *)((int)param_1 + 0x94) - 1.0) +
          (((float)pvVar1 - _DAT_00e54c20) + ((float)pvVar1 - _DAT_00e54c20)) * -1.0 * _DAT_00e54c1c
          ) * _DAT_00e54c18;
  if (0.0 < fVar7) {
    fVar3 = 0.8;
    fVar8 = fVar7;
    fVar7 = 0.0;
    do {
      fVar2 = fVar8;
      if (0.1 < fVar8) {
        fVar2 = 0.1;
      }
      fVar8 = fVar8 - 0.1;
      fVar2 = fVar2 * fVar3;
      fVar3 = fVar3 * 0.8;
      fVar7 = fVar2 + fVar7;
    } while (0.0 < fVar8);
  }
  *(float *)((int)param_1 + 0x90) = fVar7 + (float)pvVar1;
  if (fVar7 + (float)pvVar1 < 0.0) {
    *(undefined4 *)((int)param_1 + 0x90) = 0;
  }
  return;
}


//// FUNCTION FUN_005defa0 @ 005defa0 ////

undefined4 * FUN_005defa0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb82fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005dea70(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION ReleaseCalc_LoadTuningData @ 005df000 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ReleaseCalc_LoadTuningData(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  float10 fVar5;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  undefined1 *local_104;
  undefined4 local_100;
  uint local_fc;
  undefined1 local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8439;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe54c24);
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
  FUN_0098fa50(FUN_005defa0,&local_104);
  local_4 = 0xffffffff;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  FUN_0098f9e0(0x989790);
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"releasing_movies",0x10);
  local_120 = 0x10;
  local_124[0x10] = '\0';
  local_4 = 1;
  FUN_0055c540(local_e4,&local_124);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"min_max",7);
  local_120 = 7;
  local_124[7] = '\0';
  local_4._0_1_ = 4;
  uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if ((char)uVar3 != '\0') {
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"public_interest_min",0x13);
    local_120 = 0x13;
    local_124[0x13] = '\0';
    local_4._0_1_ = 5;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54bd4 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"public_interest_max",0x13);
    local_120 = 0x13;
    local_124[0x13] = '\0';
    local_4._0_1_ = 6;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54bd8 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"star_ratings_of_cast_min",0x18);
    local_120 = 0x18;
    local_124[0x18] = '\0';
    local_4._0_1_ = 7;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54bdc = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"star_ratings_of_cast_max",0x18);
    local_120 = 0x18;
    local_124[0x18] = '\0';
    local_4._0_1_ = 8;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54be0 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"technology_min",0xe);
    local_120 = 0xe;
    local_124[0xe] = '\0';
    local_4._0_1_ = 9;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c0c = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"technology_max",0xe);
    local_120 = 0xe;
    local_124[0xe] = '\0';
    local_4._0_1_ = 10;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c10 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"genre_popularity_min",0x14);
    local_120 = 0x14;
    local_124[0x14] = '\0';
    local_4._0_1_ = 0xb;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54be8 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"genre_popularity_max",0x14);
    local_120 = 0x14;
    local_124[0x14] = '\0';
    local_4._0_1_ = 0xc;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54bec = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"overall",7);
  local_120 = 7;
  local_124[7] = '\0';
  local_4._0_1_ = 0xd;
  uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if ((char)uVar3 != '\0') {
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"success_overall_max_adder",0x19);
    local_120 = 0x19;
    local_124[0x19] = '\0';
    local_4._0_1_ = 0xe;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c18 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"success_overall_max_shifter",0x1b);
    local_120 = 0x1b;
    local_124[0x1b] = '\0';
    local_4._0_1_ = 0xf;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c1c = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x40;
    local_124 = _malloc(0x40);
    _strncpy(local_124,"success_overall_shifter_mid_point",0x21);
    local_120 = 0x21;
    local_124[0x21] = '\0';
    local_4._0_1_ = 0x10;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c20 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x20;
  local_124 = _malloc(0x20);
  _strncpy(local_124,"star_ratings_proportion",0x17);
  local_120 = 0x17;
  local_124[0x17] = '\0';
  local_4._0_1_ = 0x11;
  uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if ((char)uVar3 != '\0') {
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"star_ratings_proportion",0x17);
    local_120 = 0x17;
    local_124[0x17] = '\0';
    local_4._0_1_ = 0x12;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54be4 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"public_interest",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 0x13;
  uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if ((char)uVar3 != '\0') {
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"public_interest_ratio",0x15);
    local_120 = 0x15;
    local_124[0x15] = '\0';
    local_4._0_1_ = 0x14;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54bd0 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"boredom",7);
  local_120 = 7;
  local_124[7] = '\0';
  local_4._0_1_ = 0x15;
  uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if ((char)uVar3 != '\0') {
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"set_boredom_bound",0x11);
    local_120 = 0x11;
    local_124[0x11] = '\0';
    local_4._0_1_ = 0x16;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54bfc = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"costume_boredom_bound",0x15);
    local_120 = 0x15;
    local_124[0x15] = '\0';
    local_4._0_1_ = 0x17;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c00 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"star_boredom_bound",0x12);
    local_120 = 0x12;
    local_124[0x12] = '\0';
    local_4._0_1_ = 0x18;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c04 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x14;
    _strncpy(local_124,"genre_boredom_bound",0x13);
    local_120 = 0x13;
    local_124[0x13] = '\0';
    local_4._0_1_ = 0x19;
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c08 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"tech",4);
  local_120 = 4;
  local_124[4] = '\0';
  local_4._0_1_ = 0x1a;
  uVar3 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  if ((char)uVar3 != '\0') {
    local_124 = local_118;
    local_118[0] = '\0';
    local_120 = 0;
    local_11c = 0x20;
    local_124 = _malloc(0x20);
    _strncpy(local_124,"technology_pioneering_bonus",0x1b);
    local_120 = 0x1b;
    local_124[0x1b] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x1b);
    fVar5 = FUN_00558610(local_e4,&local_124,0.0);
    _DAT_00e54c14 = (float)fVar5;
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005dfb50 @ 005dfb50 ////

void __fastcall FUN_005dfb50(int param_1)

{
  FUN_009abe50((char *)(param_1 + 0x24));
  return;
}


//// FUNCTION FUN_005dfb60 @ 005dfb60 ////

undefined4 __fastcall FUN_005dfb60(int *param_1)

{
  char cVar1;
  uint in_EAX;
  undefined3 extraout_var;
  
  if (*param_1 == 2) {
    cVar1 = FUN_00553f70(0x73);
    in_EAX = CONCAT31(extraout_var,cVar1);
    if (cVar1 != '\0') {
      in_EAX = FUN_00553fd0(0x73);
      if ((char)in_EAX == '\0') {
        *param_1 = 3;
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
    *param_1 = 0;
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_005dfba0 @ 005dfba0 ////

undefined4 * __fastcall FUN_005dfba0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  FUN_009aba60((undefined1 *)(param_1 + 9));
  return param_1;
}


//// FUNCTION FUN_005dfbc0 @ 005dfbc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005dfbc0(int *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar1 = *param_1;
  local_20 = '\0';
  if (iVar1 == 1) {
    cVar2 = FUN_00553f70(0x73);
    if (cVar2 != '\0') {
      uVar3 = FUN_00553fd0(0x73);
      if ((char)uVar3 == '\0') {
        local_14 = DAT_0104cd00 + _DAT_00e52ca4 * (float)param_1[1];
        local_10 = DAT_0104cce4 - (DAT_0104cd04 + _DAT_00e52ca4 * (float)param_1[2]);
        param_1[1] = (int)((DAT_0104cce0 - local_14) + (float)param_1[1]);
        param_1[2] = (int)(local_10 + (float)param_1[2]);
        local_1c = DAT_0104cd00 + _DAT_00e52ca4 * (float)param_1[1];
        local_18 = _DAT_00e52ca4 * (float)param_1[2] + DAT_0104cd04;
        FUN_00554d30(&local_1c);
        local_c = local_1c;
        local_8 = local_18;
        local_4 = 0;
        FUN_009aba80(&local_c);
        local_20 = '\x01';
        if (_DAT_00e52ca0 * _DAT_00e52ca0 <
            (float)param_1[2] * (float)param_1[2] + (float)param_1[1] * (float)param_1[1]) {
          *param_1 = 2;
          FUN_009abb70(param_1 + 9,'\x01');
          return;
        }
        goto LAB_005dfbf8;
      }
    }
  }
  else {
    if ((iVar1 != 2) && (iVar1 != 3)) goto LAB_005dfbf8;
    cVar2 = FUN_00553f70(0x73);
    if (cVar2 != '\0') {
      uVar3 = FUN_00553fd0(0x73);
      if ((char)uVar3 == '\0') goto LAB_005dfbf8;
    }
  }
  *param_1 = 0;
LAB_005dfbf8:
  FUN_009abb70(param_1 + 9,local_20);
  return;
}


//// FUNCTION FUN_005dfd20 @ 005dfd20 ////

undefined4 __fastcall FUN_005dfd20(int *param_1)

{
  float fVar1;
  char cVar2;
  uint in_EAX;
  undefined3 extraout_var;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    if (DAT_0104d8e8 != (int *)0x0) {
      in_EAX = (**(code **)(*DAT_0104d8e8 + 0x110))();
      if ((char)in_EAX != '\0') goto LAB_005dfda2;
    }
    cVar2 = FUN_00553f70(0x73);
    in_EAX = CONCAT31(extraout_var,cVar2);
    if (cVar2 != '\0') {
      in_EAX = FUN_00553fa0(0x73);
      if ((char)in_EAX != '\0') {
        fVar1 = DAT_0104cce4 - DAT_0104cd04;
        param_1[1] = (int)(DAT_0104cce0 - DAT_0104cd00);
        param_1[2] = (int)fVar1;
        uVar3 = FUN_009abb70(param_1 + 9,'\x01');
        *param_1 = 1;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
  }
LAB_005dfda2:
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_005dfdb0 @ 005dfdb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005dfdb0(int *param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *extraout_ECX;
  int *piVar8;
  float *pfVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  float local_30 [12];
  
  local_30[0xb] = 0.0;
  local_30[10] = 0.0;
  local_30[9] = 0.0;
  local_30[7] = 0.0;
  local_30[6] = 0.0;
  local_30[5] = 0.0;
  local_30[3] = 0.0;
  local_30[2] = 0.0;
  local_30[1] = 0.0;
  local_30[8] = 1.0;
  local_30[4] = 1.0;
  local_30[0] = 1.0;
  if ((*param_1 == 1) || (*param_1 == 2)) {
    pfVar9 = (float *)(param_1 + 3);
    fVar6 = (DAT_0105c4d8 + DAT_0105c4cc) * 0.0 + DAT_0105c4e4 * 0.0 + _DAT_0105c4f0;
    fVar4 = (DAT_0105c4dc + DAT_0105c4d0) * 0.0 + DAT_0105c4e8 * 0.0 + _DAT_0105c4f4;
    fVar1 = (float)param_1[1];
    fVar2 = -(float)param_1[2];
    fVar5 = DAT_0105c4cc * fVar1 + DAT_0105c4d8 * fVar2 + DAT_0105c4e4 * 0.0 + _DAT_0105c4f0;
    fVar3 = DAT_0105c4d0 * fVar1 + fVar2 * DAT_0105c4dc + DAT_0105c4e8 * 0.0 + _DAT_0105c4f4;
    *pfVar9 = (DAT_0105c4c8 * fVar1 + DAT_0105c4d4 * fVar2 + DAT_0105c4e0 * 0.0 + _DAT_0105c4ec) -
              ((DAT_0105c4d4 + DAT_0105c4c8) * 0.0 + DAT_0105c4e0 * 0.0 + _DAT_0105c4ec);
    param_1[4] = (int)(fVar5 - fVar6);
    fVar1 = _DAT_00e54c48;
    param_1[5] = (int)(fVar3 - fVar4);
    fVar1 = fVar1 / _DAT_00e52ca0;
    *pfVar9 = fVar1 * *pfVar9;
    param_1[4] = (int)(fVar1 * (float)param_1[4]);
    param_1[5] = (int)(fVar1 * (float)param_1[5]);
    local_30[6] = *pfVar9;
    local_30[7] = (float)param_1[4];
    fVar1 = SQRT((float)param_1[2] * (float)param_1[2] + (float)param_1[1] * (float)param_1[1]) /
            _DAT_00e52ca0;
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = (int)fVar1;
  }
  else if ((float)param_1[6] <= 0.0) {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    piVar8 = param_1;
    if ((char)param_1[7] != '\0') {
      uVar12 = FUN_00990ae0(param_1,param_2);
      param_2 = (undefined4)(uVar12 >> 0x20);
      param_1[8] = (int)uVar12;
      *(undefined1 *)(param_1 + 7) = 0;
      piVar8 = extraout_ECX;
    }
    uVar12 = FUN_00990ae0(piVar8,param_2);
    iVar7 = (int)uVar12 - param_1[8];
    fVar1 = (float)iVar7;
    if (iVar7 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar10 = (float10)FUN_00ace9b0();
    if ((float10)0.01 <= fVar10 * (float10)(float)param_1[6]) {
      fVar11 = (float10)fcos((float10)(fVar1 * 0.001) * (float10)20.0);
      fVar11 = fVar11 * fVar10 * (float10)(float)param_1[6];
      local_30[6] = (float)(fVar11 * (float10)(float)param_1[3]);
      local_30[7] = (float)(fVar11 * (float10)(float)param_1[4]);
    }
    else {
      param_1[6] = 0;
    }
  }
  pfVar9 = local_30;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *param_3 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_005e0060 @ 005e0060 ////

void __thiscall FUN_005e0060(void *this,byte param_1,byte param_2)

{
  *(uint *)((int)this + 0x98) =
       ((param_2 & 1) << 1 | param_1 & 1) << 7 | *(uint *)((int)this + 0x98) & 0xfffffe7f;
  return;
}


//// FUNCTION FUN_005e0150 @ 005e0150 ////

bool FUN_005e0150(void)

{
  return 0 < DAT_0104d7f0;
}


//// FUNCTION FUN_005e0160 @ 005e0160 ////

void FUN_005e0160(void)

{
  return;
}


//// FUNCTION FUN_005e0170 @ 005e0170 ////

void FUN_005e0170(void)

{
  return;
}


//// FUNCTION FUN_005e0180 @ 005e0180 ////

void __fastcall FUN_005e0180(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005e0182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}


//// FUNCTION FUN_005e01e0 @ 005e01e0 ////

int * __thiscall FUN_005e01e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005e0220 @ 005e0220 ////

int * __thiscall FUN_005e0220(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005e0260 @ 005e0260 ////

undefined4 * __fastcall FUN_005e0260(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8463;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0053cac0(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d2c454;
  param_1[0x19] = &PTR_LAB_00d2c43c;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (DAT_0104d808 != (int *)0x0) {
    (**(code **)(*DAT_0104d808 + 0x28))();
  }
  (*(code *)DAT_0104d7f4[1])();
  DAT_0104d808 = param_1;
  (*(code *)*DAT_0104d7f4)();
  iVar5 = 0;
  DAT_0104d7f0 = DAT_0104d7f0 + 1;
  uVar4 = 0;
  uVar3 = 0x2fb;
  uVar1 = FUN_006a36e0();
  FUN_00470a70(DAT_0104917c,uVar1,uVar3,uVar4,iVar5);
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar2 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  param_1[0x2f] = (int)uVar2 + -1;
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_005e0370 @ 005e0370 ////

void __fastcall FUN_005e0370(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb849f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2c454;
  param_1[0x19] = &PTR_LAB_00d2c43c;
  local_4 = 1;
  (**(code **)(*(int *)param_1[0x22] + 0x28))();
  puVar2 = (undefined4 *)param_1[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x22] = 0;
  }
  if (DAT_0104917c != (void *)0x0) {
    iVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x373;
    uVar3 = FUN_00642110();
    FUN_00470a70(DAT_0104917c,uVar3,uVar4,uVar5,iVar6);
    iVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x323;
    uVar3 = FUN_00642110();
    FUN_00470a70(DAT_0104917c,uVar3,uVar4,uVar5,iVar6);
  }
  DAT_0104d7f0 = DAT_0104d7f0 + -1;
  local_4 = local_4 & 0xffffff00;
  FUN_0053cbd0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005e0450 @ 005e0450 ////

void __thiscall FUN_005e0450(void *this,float *param_1,int *param_2)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float local_24;
  void *pvStack_20;
  float fStack_1c;
  float local_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00cb84bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(float *)((int)this + 0x98) = *param_1;
  *(float *)((int)this + 0x9c) = param_1[1];
  *(float *)((int)this + 0xa0) = param_1[2];
  puVar5 = &DAT_0104cce0;
  pfVar4 = &local_24;
  *(int *)((int)this + 0xb0) = *param_2;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  pfVar3 = (float *)(**(code **)(*(int *)this + 0x1c))(pfVar4,&DAT_0104cce0,local_18,0);
  FUN_009a1a20(&DAT_0105c2e8,pfVar3,pfVar4,(float)puVar5);
  pvStack_4 = (void *)-(DAT_0105c3b0 / (local_18[0] - DAT_0105c3b0));
  local_24 = (local_18[0] - DAT_0105c3b0) * (float)pvStack_4 + DAT_0105c3b0;
  fVar1 = (fStack_1c - DAT_0105c3ac) * (float)pvStack_4 + DAT_0105c3ac;
  pvVar2 = (void *)(DAT_0105c3a8 + ((float)pvStack_20 - DAT_0105c3a8) * (float)pvStack_4);
  local_18[0] = param_1[2];
  *(float *)((int)this + 0xa4) = (float)pvVar2;
  *(float *)((int)this + 0xa8) = fVar1;
  *(float *)((int)this + 0xac) = local_18[0];
  pvStack_20 = pvVar2;
  fStack_1c = fVar1;
  pvStack_4 = operator_new(0x118);
  pvStack_c = (void *)0x0;
  if (pvStack_4 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_007897f0(pvStack_4,1);
  }
  pvStack_c = (void *)0xffffffff;
  *(undefined4 **)((int)this + 0x88) = puVar5;
  FUN_00789140(puVar5,0);
  FUN_00789150(*(void **)((int)this + 0x88),DAT_00e598f8 + DAT_00e598f8);
  (**(code **)(**(int **)((int)this + 0x88) + 0x24))("ui/3dmenu_move.dds","ui/3dmenu_move.dds",0);
  *(uint *)(*(int *)((int)this + 0x88) + 0x98) =
       *(uint *)(*(int *)((int)this + 0x88) + 0x98) & 0xfffffeff | 0x80;
  FUN_007890d0(*(void **)((int)this + 0x88),&stack0xffffffd4,(undefined4 *)&stack0xffffffd4);
  pfVar4 = (float *)((int)this + 0x8c);
  *pfVar4 = (float)pvVar2;
  *(float *)((int)this + 0x90) = fVar1;
  *(float *)((int)this + 0x94) = local_24;
  *pfVar4 = *pfVar4 - *(float *)((int)this + 0xa4);
  *(float *)((int)this + 0x90) = *(float *)((int)this + 0x90) - *(float *)((int)this + 0xa8);
  *(float *)((int)this + 0x94) = *(float *)((int)this + 0x94) - *(float *)((int)this + 0xac);
  *pfVar4 = *(float *)((int)this + 0x98) + *pfVar4;
  *(float *)((int)this + 0x90) = *(float *)((int)this + 0x9c) + *(float *)((int)this + 0x90);
  *(float *)((int)this + 0x94) = *(float *)((int)this + 0xa0) + *(float *)((int)this + 0x94);
  ExceptionList = pvStack_20;
  return;
}


//// FUNCTION FUN_005e0670 @ 005e0670 ////

void __fastcall FUN_005e0670(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_0053c870((int)(param_1 + 0x19));
  iVar6 = param_1[0x30];
  if (iVar6 == 5) {
    if ((DAT_0104e110 == '\0') || (DAT_0104d8e8 != 0)) {
      cVar2 = (**(code **)(*param_1 + 0x34))();
      if (cVar2 != '\0') {
        if (DAT_010504c4 != (void *)0x0) {
          FUN_0091ea30(DAT_010504c4,0);
        }
        iVar6 = 0;
        uVar5 = 0;
        uVar4 = 0x323;
        uVar3 = FUN_006a36e0();
        FUN_00470a70(DAT_0104917c,uVar3,uVar4,uVar5,iVar6);
        return;
      }
    }
    param_1[0x30] = 0;
    if (DAT_0104e110 == '\0') {
      FUN_005392c0("UI_NO_BUILDING_PLACEMENT");
    }
  }
  else {
    if (iVar6 == 6) {
      if ((char)param_1[0x31] == '\0') {
        cVar2 = (**(code **)(*param_1 + 0x2c))();
        if (cVar2 == '\0') {
          if (DAT_010504c4 != (void *)0x0) {
            FUN_0091ea30(DAT_010504c4,0);
          }
                    /* WARNING: Could not recover jumptable at 0x005e06ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x3c))();
          return;
        }
      }
      FUN_005392c0("UI_INHAND_OBJECT_DELETE");
                    /* WARNING: Could not recover jumptable at 0x005e06df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))();
      return;
    }
    if (iVar6 == 7) {
      piVar1 = param_1 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_1)(1);
      }
      return;
    }
  }
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_005e0760 @ 005e0760 ////

float * __fastcall FUN_005e0760(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  ulonglong uVar6;
  float local_c;
  
  uVar6 = FUN_00990ae0(param_1,param_2);
  if ((uint)uVar6 < *(uint *)(param_1 + 0xbc)) {
    fVar1 = *(float *)(param_1 + 0xb0);
    fVar2 = *(float *)(param_1 + 0xb8);
    fVar3 = fVar1 - fVar2;
    if (fVar3 < 3.1415927) {
      local_c = fVar2;
      if (fVar3 < -3.1415927 != (fVar3 == -3.1415927)) {
        local_c = fVar2 - 6.2831855;
      }
    }
    else {
      local_c = fVar2 + 6.2831855;
    }
    uVar6 = FUN_00990ae0(fVar2,(int)(uVar6 >> 0x20));
    iVar4 = *(int *)(param_1 + 0xbc) - (int)uVar6;
    fVar5 = (float10)iVar4;
    if (iVar4 < 0) {
      fVar5 = fVar5 + (float10)4.2949673e+09;
    }
    fVar5 = (float10)fcos(fVar5 * (float10)0.005 * (float10)3.1415927);
    fVar5 = ((float10)1.0 - fVar5) * (float10)0.5;
    fVar5 = FUN_004012c0((float)(fVar5 * (float10)local_c + ((float10)1.0 - fVar5) * (float10)fVar1)
                        );
    *param_3 = (float)fVar5;
    return param_3;
  }
  *param_3 = *(float *)(param_1 + 0xb0);
  return param_3;
}


//// FUNCTION FUN_005e0870 @ 005e0870 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e0870(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = _DAT_0105c414;
  fVar1 = param_2[1];
  fVar2 = DAT_0105c404 * 260.0;
  *param_1 = _DAT_0105c410 + (*param_2 - DAT_0105c400 * 512.0 * 0.0009765625) * 1.1428572;
  param_1[1] = fVar3 + (fVar1 - fVar2 * 0.0013020834) * 1.1428572;
  return;
}


//// FUNCTION FUN_005e15e0 @ 005e15e0 ////

uint __fastcall FUN_005e15e0(int *param_1)

{
  float fVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 uVar3;
  
  fVar1 = DAT_0105c3c0 * ((float)param_1[0x29] - DAT_0105c3a8) +
          DAT_0105c3c4 * ((float)param_1[0x2a] - DAT_0105c3ac) +
          DAT_0105c3c8 * ((float)param_1[0x2b] - DAT_0105c3b0);
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                   (ushort)(fVar1 == 0.0) << 0xe);
  if (fVar1 >= 0.0) {
    uVar3 = 0;
    if (param_1[0x37] != 0) {
      (**(code **)(*param_1 + 0x4c))(param_1 + 0x29);
      (**(code **)(*param_1 + 0x48))(param_1[0x2c]);
      (**(code **)(*param_1 + 0x40))();
      uVar2 = (**(code **)(*param_1 + 0x44))();
      if ((char)uVar2 == '\0') goto LAB_005e166a;
      (**(code **)(*(int *)param_1[0x37] + 300))();
      (**(code **)(param_1[0x32] + 4))();
      param_1[0x37] = 0;
      uVar3 = (**(code **)param_1[0x32])();
    }
    param_1[0x30] = 7;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
LAB_005e166a:
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_005e16b0 @ 005e16b0 ////

undefined4 FUN_005e16b0(void)

{
  undefined4 uVar1;
  
  if (DAT_0104d808 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005e16bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_0104d808 + 0x30))();
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_005e16d0 @ 005e16d0 ////

void FUN_005e16d0(void)

{
  if (DAT_0104d808 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005e16dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0104d808 + 0x28))();
    return;
  }
  return;
}


//// FUNCTION FUN_005e16e0 @ 005e16e0 ////

void FUN_005e16e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104d808;
  if (DAT_0104d808 != (undefined4 *)0x0) {
    iVar1 = DAT_0104d808[0x12];
    DAT_0104d808[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104d7f4[1])();
    DAT_0104d808 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x005e1720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104d7f4)();
    return;
  }
  return;
}


//// FUNCTION FUN_005e17d0 @ 005e17d0 ////

void __fastcall FUN_005e17d0(int param_1)

{
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_00a202a0(*(int *)(*(int *)(param_1 + 0xdc) + 300));
    FUN_004d5440(*(void **)(param_1 + 0xdc),(undefined4 *)(param_1 + 0xa4),(float *)(param_1 + 0xb0)
                );
  }
  return;
}


//// FUNCTION FUN_005e1840 @ 005e1840 ////

void __fastcall FUN_005e1840(int param_1)

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


//// FUNCTION FUN_005e1870 @ 005e1870 ////

undefined4 * __thiscall FUN_005e1870(void *this,byte param_1)

{
  FUN_005e0370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e1890 @ 005e1890 ////

void __fastcall FUN_005e1890(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *this;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb84db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar2);
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_006a36e0();
  (**(code **)(this[0xe] + 4))();
  this[0x13] = uVar3;
  (**(code **)this[0xe])();
  FUN_0046f5d0(this,0x34b);
  if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0xdc) + 0x80))();
    puVar2 = FUN_00569d60(apvStack_2c,uVar3);
    FUN_004015d0(this + 0x1f,(char *)*puVar2,puVar2[1]);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  if (DAT_010504c4 != (void *)0x0) {
    FUN_0091ea30(DAT_010504c4,0);
  }
  FUN_004707d0(DAT_0104917c,(int)this);
  puVar2 = *(undefined4 **)(param_1 + 0xdc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 200) + 4))();
    *(undefined4 *)(param_1 + 0xdc) = 0;
    (*(code *)**(undefined4 **)(param_1 + 200))();
  }
  *(undefined4 *)(param_1 + 0xc0) = 7;
  iVar4 = FUN_00523ea0();
  if (iVar4 != 0) {
    pvVar5 = (void *)FUN_00523ea0();
    FUN_005257e0(pvVar5);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005e19d0 @ 005e19d0 ////

void __fastcall FUN_005e19d0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d2c534;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_005e1a20 @ 005e1a20 ////

void __fastcall FUN_005e1a20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2c534;
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


//// FUNCTION FUN_005e1aa0 @ 005e1aa0 ////

void __fastcall FUN_005e1aa0(int param_1)

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


//// FUNCTION FUN_005e1ac0 @ 005e1ac0 ////

void __fastcall FUN_005e1ac0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c544;
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


//// FUNCTION FUN_005e1b10 @ 005e1b10 ////

undefined4 * __fastcall FUN_005e1b10(undefined4 *param_1)

{
  FUN_005e0260(param_1);
  *param_1 = &PTR_FUN_00d2c56c;
  param_1[0x19] = &PTR_LAB_00d2c554;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = param_1 + 0x32;
  param_1[0x32] = &PTR_FUN_00d16bec;
  param_1[0x37] = 0;
  return param_1;
}


//// FUNCTION FUN_005e1b80 @ 005e1b80 ////

void __fastcall FUN_005e1b80(undefined4 *param_1)

{
  param_1[0x32] = &PTR_FUN_00d16bec;
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
  FUN_005e0370(param_1);
  return;
}


//// FUNCTION FUN_005e1c00 @ 005e1c00 ////

undefined4 * __thiscall FUN_005e1c00(void *this,undefined4 param_1)

{
  float *pfVar1;
  int *piVar2;
  int local_18 [2];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8506;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005e0260(this);
  piVar2 = (int *)((int)this + 200);
  *(undefined ***)this = &PTR_FUN_00d2c56c;
  *(undefined ***)((int)this + 100) = &PTR_LAB_00d2c554;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(int **)((int)this + 0xd4) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0xdc) = 0;
  local_4 = 1;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0xdc) = param_1;
  (**(code **)*piVar2)();
  FUN_00470a70(DAT_0104917c,DAT_00f87aa0,0x57a,param_1,0);
  piVar2 = local_18;
  pfVar1 = (float *)(**(code **)(**(int **)((int)this + 0xdc) + 0x34))
                              (piVar2,*(int **)((int)this + 0xdc) + 0x31);
  FUN_005e0450(this,pfVar1,piVar2);
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_005e1d10 @ 005e1d10 ////

undefined4 * __thiscall FUN_005e1d10(void *this,undefined4 param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8526;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e0260(this);
  piVar1 = (int *)((int)this + 200);
  *(undefined ***)this = &PTR_FUN_00d2c64c;
  *(undefined ***)((int)this + 100) = &PTR_LAB_00d2c630;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(int **)((int)this + 0xd4) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2c544;
  *(undefined4 *)((int)this + 0xdc) = 0;
  local_4 = 1;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0xdc) = param_1;
  (**(code **)*piVar1)();
  iVar2 = *(int *)((int)this + 0xdc);
  *(undefined1 *)((int)this + 0xe0) = param_2._0_1_;
  fVar3 = FUN_004012c0(*(float *)(iVar2 + 0x11c));
  param_2 = (float)fVar3;
  local_18 = *(float *)(iVar2 + 0x120);
  local_14 = *(undefined4 *)(iVar2 + 0x124);
  local_10 = *(undefined4 *)(iVar2 + 0x128);
  FUN_005e0450(this,&local_18,(int *)&param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e1de0 @ 005e1de0 ////

undefined4 * __cdecl FUN_005e1de0(undefined4 param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb853b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xe0);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_005e1c00(this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_005e1e40 @ 005e1e40 ////

undefined4 * __thiscall FUN_005e1e40(void *this,byte param_1)

{
  FUN_005e1b80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e1e60 @ 005e1e60 ////

undefined4 * __cdecl FUN_005e1e60(undefined4 param_1,float param_2)

{
  undefined4 *this;
  undefined4 *puVar1;
  float10 fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb855b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xe0);
  local_4 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    FUN_005e1c00(this,param_1);
    *this = &PTR_FUN_00d2c5dc;
    this[0x19] = &PTR_LAB_00d2c5c0;
    *(undefined1 *)(this + 0x31) = 1;
    fVar2 = FUN_004012c0(param_2);
    this[0x2c] = (float)fVar2;
    puVar1 = this;
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_005e1ef0 @ 005e1ef0 ////

undefined4 * __thiscall FUN_005e1ef0(void *this,byte param_1)

{
  thunk_FUN_005e1b80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e1f20 @ 005e1f20 ////

undefined4 * __cdecl FUN_005e1f20(undefined4 param_1,float param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb857b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xe4);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_005e1d10(this,param_1,param_2);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_005e1f90 @ 005e1f90 ////

undefined4 * __thiscall FUN_005e1f90(void *this,byte param_1)

{
  FUN_005e1fb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e1fb0 @ 005e1fb0 ////

void __fastcall FUN_005e1fb0(undefined4 *param_1)

{
  param_1[0x32] = &PTR_FUN_00d2c544;
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
  FUN_005e0370(param_1);
  return;
}


//// FUNCTION FUN_005e2030 @ 005e2030 ////

void __fastcall FUN_005e2030(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c6a0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005e2080 @ 005e2080 ////

undefined4 * __thiscall FUN_005e2080(void *this,byte param_1)

{
  FUN_005e2030(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e20b0 @ 005e20b0 ////

undefined4 * __fastcall FUN_005e20b0(undefined4 *param_1)

{
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d2c6a0;
  return param_1;
}


//// FUNCTION FUN_005e20d0 @ 005e20d0 ////

undefined4 * __fastcall FUN_005e20d0(undefined4 *param_1)

{
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d2c6c8;
  return param_1;
}


//// FUNCTION FUN_005e2100 @ 005e2100 ////

void __fastcall FUN_005e2100(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c6a0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005e2110 @ 005e2110 ////

undefined4 * __thiscall FUN_005e2110(void *this,byte param_1)

{
  FUN_005e2100(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e2130 @ 005e2130 ////

void __thiscall FUN_005e2130(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x51c) = param_1;
  *(undefined4 *)((int)this + 0x520) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  return;
}


//// FUNCTION FUN_005e2180 @ 005e2180 ////

int * __thiscall FUN_005e2180(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005e2210 @ 005e2210 ////

undefined4 * __thiscall FUN_005e2210(void *this,undefined4 *param_1,undefined4 *param_2)

{
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d2c6fc;
  *(undefined4 *)((int)this + 0x50) = *param_1;
  *(undefined4 *)((int)this + 0x54) = param_1[1];
  *(undefined4 *)((int)this + 0x58) = *param_2;
  *(undefined4 *)((int)this + 0x5c) = param_2[1];
  return this;
}


//// FUNCTION FUN_005e2290 @ 005e2290 ////

undefined4 * __thiscall FUN_005e2290(void *this,byte param_1)

{
  FUN_005e22b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e22b0 @ 005e22b0 ////

void __fastcall FUN_005e22b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c6a0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005e22c0 @ 005e22c0 ////

undefined4 * __thiscall FUN_005e22c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d2c724;
  *(undefined4 *)((int)this + 0x50) = *param_1;
  *(undefined4 *)((int)this + 0x54) = param_1[1];
  *(undefined4 *)((int)this + 0x58) = param_1[2];
  *(undefined4 *)((int)this + 0x5c) = *param_2;
  *(undefined4 *)((int)this + 0x60) = param_2[1];
  return this;
}


//// FUNCTION FUN_005e2340 @ 005e2340 ////

undefined4 * __thiscall FUN_005e2340(void *this,byte param_1)

{
  FUN_005e2360(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e2360 @ 005e2360 ////

void __fastcall FUN_005e2360(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c6a0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005e23a0 @ 005e23a0 ////

void __fastcall FUN_005e23a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  
  if (((*(int **)(param_1 + 0x2c) != (int *)0x0) && (*(int *)(param_1 + 0x5c) != 0)) &&
     (*(int *)(param_1 + 0x44) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))();
    piVar1 = *(int **)(param_1 + 0x2c);
    fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x5c) + 0x10))();
    fVar5 = (float10)(**(code **)(*piVar1 + 0x10))();
    if ((float10)(float)fVar4 <= fVar5) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x5c) + 0x10))();
    }
    fVar7 = *(float *)(param_1 + 0x44);
    (**(code **)(**(int **)(param_1 + 0x2c) + 100))(1,fVar7,0);
    fVar6 = *(float *)(param_1 + 0x44);
    (**(code **)(**(int **)(param_1 + 0x5c) + 100))(1,fVar6,unaff_EBX);
    iVar2 = **(int **)(param_1 + 0x5c);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    fVar4 = (float10)(**(code **)(iVar2 + 0x10))();
    (**(code **)(iVar2 + 0x5c))(1,uVar3,(float)(((float10)fVar7 - fVar4) * (float10)0.5));
    iVar2 = **(int **)(param_1 + 0x2c);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    fVar4 = (float10)(**(code **)(iVar2 + 0x10))();
    (**(code **)(iVar2 + 0x5c))(1,uVar3,(float)(((float10)fVar6 - fVar4) * (float10)0.5));
    (**(code **)(**(int **)(param_1 + 0x44) + 0x84))(0);
  }
  return;
}


//// FUNCTION FUN_005e2490 @ 005e2490 ////

void __thiscall FUN_005e2490(void *this,undefined4 param_1)

{
  if (*(int **)((int)this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x10c))(param_1,1);
    (**(code **)(**(int **)((int)this + 0x14) + 0x108))(5,1);
  }
  return;
}


//// FUNCTION FUN_005e25a0 @ 005e25a0 ////

void __thiscall FUN_005e25a0(void *this,undefined4 param_1)

{
  if (*(int **)((int)this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x54))(param_1);
    (**(code **)(**(int **)((int)this + 0x2c) + 0x84))(0);
    FUN_005e23a0((int)this);
  }
  return;
}


//// FUNCTION FUN_005e2600 @ 005e2600 ////

void __fastcall FUN_005e2600(int *param_1)

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


//// FUNCTION FUN_005e26a0 @ 005e26a0 ////

void __fastcall FUN_005e26a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2c758;
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


//// FUNCTION FUN_005e2720 @ 005e2720 ////

undefined4 * __thiscall FUN_005e2720(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb85b4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008dbe40(this);
  *(undefined ***)this = &PTR_FUN_00d2c76c;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x4e0) = (undefined2 *)((int)this + 0x4ec);
  *(undefined2 *)((int)this + 0x4ec) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 10;
  uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 0x4e0),(wchar_t *)&lpCaption_00d16918,uVar5);
  piVar1 = (int *)((int)this + 0x504);
  *(undefined4 *)((int)this + 0x50c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 **)((int)this + 0x50c) = (undefined4 *)((int)this + 0x500);
  *(undefined4 *)((int)this + 0x500) = &PTR_FUN_00d18c2c;
  *(int *)((int)this + 0x514) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x508) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  iVar3 = *(int *)((int)this + 0x514);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined4 *)((int)this + 0x51c) = 0;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 1;
  }
  puVar4 = *(undefined4 **)((int)this + 0x4bc);
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(1);
    }
  }
  *(int *)((int)this + 0x4bc) = iVar3;
  FUN_008d55e0(this,0);
  FUN_008d56d0(this,0);
  *(undefined1 *)((int)this + 0x4ac) = 1;
  FUN_008dbf60(this,*(int *)((int)this + 0x514));
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_005e28f0 @ 005e28f0 ////

void __fastcall FUN_005e28f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c76c;
  param_1[0x140] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x142] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x142] = param_1[0x141];
  }
  if (param_1[0x141] != 0) {
    *(undefined4 *)(param_1[0x141] + 4) = param_1[0x142];
  }
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x145] = 0;
  if ((undefined4 *)param_1[0x142] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x142] = param_1[0x141];
  }
  if (param_1[0x141] != 0) {
    *(undefined4 *)(param_1[0x141] + 4) = param_1[0x142];
  }
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  if (10 < (uint)param_1[0x13a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x138]);
  }
  FUN_008dbeb0(param_1);
  return;
}


//// FUNCTION FUN_005e2990 @ 005e2990 ////

void __fastcall FUN_005e2990(void *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb85c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00568cb0(&stack0x00000004,&local_2c);
  iVar1 = _wcscmp(*(wchar_t **)((int)param_1 + 0x4e0),local_2c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (iVar1 != 0) {
    FUN_00568cb0(&stack0x00000004,&local_2c);
    FUN_004036d0((undefined4 *)((int)param_1 + 0x4e0),local_2c,local_28);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    sVar2 = FUN_00ace02d(L"<x6><nobr>");
    FUN_0040cae0(&local_4c,L"<x6><nobr>",sVar2);
    FUN_0040cae0(&local_4c,*(wchar_t **)((int)param_1 + 0x4e0),*(size_t *)((int)param_1 + 0x4e4));
    sVar2 = FUN_00ace02d(L"</nobr></x6>");
    FUN_0040cae0(&local_4c,L"</nobr></x6>",sVar2);
    FUN_008dbf40(param_1,&local_4c);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e2ae0 @ 005e2ae0 ////

void FUN_005e2ae0(void)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_0104d810 != (int *)0x0) {
    (**(code **)(*DAT_0104d810 + 0xc))(0x3f000000);
    piVar2 = DAT_0104d810;
    if ((DAT_0104d810 != (int *)0x0) &&
       (iVar1 = DAT_0104d810[0x12], DAT_0104d810[0x12] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)*piVar2)(1);
    }
    DAT_0104d810 = (int *)0x0;
  }
  return;
}


//// FUNCTION FUN_005e2b20 @ 005e2b20 ////

void __fastcall FUN_005e2b20(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (param_1[0x18] != 0) {
    uVar3 = 0;
    FUN_008d5670(param_1[0x18]);
    (**(code **)(*(int *)param_1[0x18] + 0xc))(0x3f000000,uVar3);
    puVar2 = (undefined4 *)param_1[0x18];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    param_1[0x18] = 0;
    (**(code **)(*param_1 + 4))();
    param_1[5] = 0;
                    /* WARNING: Could not recover jumptable at 0x005e2b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
  return;
}


//// FUNCTION FUN_005e2b70 @ 005e2b70 ////

void __fastcall FUN_005e2b70(int *param_1)

{
  FUN_005e2b20(param_1);
  if (((code *)param_1[0x19] != (code *)0x0) && (param_1[0x1f] != 0)) {
    (*(code *)param_1[0x19])(param_1[0x1f]);
  }
  return;
}


//// FUNCTION FUN_005e2b90 @ 005e2b90 ////

undefined4 * __fastcall FUN_005e2b90(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *this;
  char local_18 [4];
  undefined4 *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb860f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_14 = param_1;
  FUN_008dbe40(param_1);
  *param_1 = &PTR_FUN_00d2c76c;
  local_4 = 0;
  param_1[0x138] = param_1 + 0x13b;
  *(undefined2 *)(param_1 + 0x13b) = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 10;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x138,(wchar_t *)&lpCaption_00d16918,uVar3);
  param_1[0x143] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = param_1 + 0x140;
  param_1[0x140] = &PTR_FUN_00d18c2c;
  param_1[0x145] = 0;
  local_4._0_1_ = 2;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  local_18[3] = 0xff;
  local_18[2] = 0;
  local_18[1] = 0;
  local_18[0] = '\0';
  local_10 = operator_new(0x3fc);
  local_4._0_1_ = 3;
  if (local_10 == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = FUN_00833290(local_10);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00830550(this,8,local_18);
  if (this != (undefined4 *)0x0) {
    this[0x12] = this[0x12] + 1;
  }
  puVar2 = (undefined4 *)param_1[0x12f];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)();
    }
  }
  param_1[0x12f] = this;
  FUN_008d55e0(param_1,0);
  FUN_008d56d0(param_1,0);
  local_10 = (undefined4 *)&stack0xffffffd8;
  *(undefined1 *)(param_1 + 299) = 1;
  FUN_005e2990(param_1);
  piVar1 = this + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*this)();
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_005e2ce0 @ 005e2ce0 ////

undefined4 * __thiscall FUN_005e2ce0(void *this,byte param_1)

{
  FUN_005e28f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e2d00 @ 005e2d00 ////

void __fastcall FUN_005e2d00(int *param_1)

{
  BubbleWindow_TickChildBubbles((int)param_1);
  if ((param_1[0x147] == 0) ||
     ((uint)(*(int *)(DAT_0104cdf4 + 0x3c) - param_1[0x148]) <= (uint)param_1[0x147])) {
    if ((DAT_0104d810 == param_1) && (param_1[0x146] < DAT_0105bec0)) {
      FUN_005e2ae0();
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0xc))(0x3f000000);
  }
  return;
}


//// FUNCTION FUN_005e2d50 @ 005e2d50 ////

void __cdecl FUN_005e2d50(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  char in_stack_00000018;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8641;
  local_c = ExceptionList;
  if (DAT_0104d80c != DAT_0105bec0) {
    DAT_0104d80c = DAT_0105bec0;
    ExceptionList = &local_c;
    if ((DAT_0104d810 == (undefined4 *)0x0) ||
       (ExceptionList = &local_c,
       iVar2 = _wcscmp((wchar_t *)DAT_0104d810[0x138],(wchar_t *)*param_1), iVar2 != 0)) {
      FUN_005e2ae0();
      puVar3 = operator_new(0x528);
      local_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_005e2b90(puVar3);
      }
      local_4 = 0xffffffff;
      puVar8 = puVar3;
      if (in_stack_00000018 == '\0') {
        uVar6 = DAT_0104cce0;
        uVar7 = DAT_0104cce4;
        iVar2 = FUN_0071b2a0();
        FUN_00747460(*(void **)(iVar2 + 0x2d4),local_14,uVar6,uVar7);
        pvVar4 = operator_new(0x60);
        local_4 = 2;
        if (pvVar4 == (void *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_005e2210(pvVar4,local_14,(undefined4 *)&DAT_00e54eec);
        }
        local_4 = 0xffffffff;
        FUN_008dcf70(puVar3,puVar5);
        iVar2 = FUN_0071b2a0();
        pvVar4 = (void *)FUN_0071b910(iVar2);
      }
      else {
        pvVar4 = operator_new(100);
        local_4 = 1;
        if (pvVar4 == (void *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = FUN_005e22c0(pvVar4,(undefined4 *)&stack0x0000000c,(undefined4 *)&DAT_00e54eec);
        }
        local_4 = 0xffffffff;
        FUN_008dcf70(puVar3,puVar5);
        iVar2 = FUN_0071b2a0();
        pvVar4 = (void *)FUN_0071b920(iVar2);
      }
      FUN_00640700(pvVar4,puVar8);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[0x12] = puVar3[0x12] + 1;
      }
      puVar8 = DAT_0104d810;
      if ((DAT_0104d810 != (undefined4 *)0x0) &&
         (iVar2 = DAT_0104d810[0x12], DAT_0104d810[0x12] = iVar2 + -1, iVar2 + -1 == 0)) {
        (**(code **)*puVar8)();
      }
      piVar1 = puVar3 + 0x12;
      DAT_0104d810 = puVar3;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)();
      }
    }
    DAT_0104d810[0x146] = DAT_0105bec0 + param_2;
    ExceptionList = local_c;
    return;
  }
  return;
}


//// FUNCTION FUN_005e2f20 @ 005e2f20 ////

void __fastcall FUN_005e2f20(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb868f;
  pvStack_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  FUN_005e2b20(param_1);
  param_1[0x1a] = (int)&PTR_FUN_00d1a200;
  if ((int *)param_1[0x1c] != (int *)0x0) {
    *(int *)param_1[0x1c] = param_1[0x1b];
  }
  if (param_1[0x1b] != 0) {
    *(int *)(param_1[0x1b] + 4) = param_1[0x1c];
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  if ((int *)param_1[0x1c] != (int *)0x0) {
    *(int *)param_1[0x1c] = param_1[0x1b];
  }
  if (param_1[0x1b] != 0) {
    *(int *)(param_1[0x1b] + 4) = param_1[0x1c];
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar2 = (undefined4 *)param_1[0x18];
  local_4 = CONCAT31(local_4._1_3_,3);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x18] = 0;
  param_1[0x12] = (int)&PTR_FUN_00d18c2c;
  if ((int *)param_1[0x14] != (int *)0x0) {
    *(int *)param_1[0x14] = param_1[0x13];
  }
  if (param_1[0x13] != 0) {
    *(int *)(param_1[0x13] + 4) = param_1[0x14];
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  if ((int *)param_1[0x14] != (int *)0x0) {
    *(int *)param_1[0x14] = param_1[0x13];
  }
  if (param_1[0x13] != 0) {
    *(int *)(param_1[0x13] + 4) = param_1[0x14];
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xc] = (int)&PTR_FUN_00d18c2c;
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
  param_1[6] = (int)&PTR_FUN_00d195f8;
  if ((int *)param_1[8] != (int *)0x0) {
    *(int *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(int *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  if ((int *)param_1[8] != (int *)0x0) {
    *(int *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(int *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (int)&PTR_LAB_00d2c758;
  if ((int *)param_1[2] != (int *)0x0) {
    *(int *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(int *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  if ((int *)param_1[2] != (int *)0x0) {
    *(int *)param_1[2] = param_1[1];
  }
  if (param_1[1] != 0) {
    *(int *)(param_1[1] + 4) = param_1[2];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005e30e0 @ 005e30e0 ////

void __thiscall FUN_005e30e0(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  size_t sVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *puVar10;
  int *unaff_EBP;
  int *piVar11;
  float10 fVar12;
  undefined4 *unaff_retaddr;
  int *_Memory;
  undefined1 *in_stack_ffffff6c;
  uint uStack_8c;
  undefined2 auStack_48 [12];
  float fStack_30;
  undefined2 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined2 auStack_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cb86f2;
  pvStack_c = ExceptionList;
  piVar11 = (int *)0x0;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 100) = 0;
  pvVar3 = operator_new(0x480);
  local_4 = (undefined4 *)0x0;
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_007ac3f0(pvVar3,param_3,0,0);
  }
  local_4 = (undefined4 *)0xffffffff;
  (**(code **)(*(int *)this + 4))();
  *(undefined4 **)((int)this + 0x14) = puVar4;
  (*(code *)**(undefined4 **)this)();
  puStack_2c = auStack_20;
  auStack_20[0] = 0;
  uStack_28 = 0;
  uStack_24 = 10;
  local_4 = (undefined4 *)0x1;
  uVar5 = FUN_00ace02d(L"<nobr><x6>");
  FUN_004036d0(&puStack_2c,L"<nobr><x6>",uVar5);
  FUN_0040cae0(&puStack_2c,(wchar_t *)*param_1,param_1[1]);
  sVar6 = FUN_00ace02d(L"</x6></nobr>");
  FUN_0040cae0(&puStack_2c,L"</x6></nobr>",sVar6);
  puVar4 = operator_new(0x3fc);
  local_4._0_1_ = 2;
  if (puVar4 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(puVar4);
  }
  local_4 = (undefined4 *)CONCAT31(local_4._1_3_,1);
  (**(code **)(*(int *)((int)this + 0x18) + 4))();
  *(int **)((int)this + 0x2c) = piVar7;
  (*(code *)**(undefined4 **)((int)this + 0x18))();
  (**(code **)(*piVar7 + 0x54))(&puStack_2c);
  (**(code **)(*piVar7 + 0x84))(0);
  local_4 = operator_new(0x344);
  pvStack_c._0_1_ = 3;
  if (local_4 != (undefined4 *)0x0) {
    piVar11 = FUN_007432f0(local_4);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
  (**(code **)(*(int *)((int)this + 0x48) + 4))();
  *(int **)((int)this + 0x5c) = piVar11;
  (*(code *)**(undefined4 **)((int)this + 0x48))();
  if (unaff_retaddr[1] == 0) {
    pvVar3 = (void *)0x1;
    (**(code **)(**(int **)((int)this + 0x14) + 100))(1,piVar11,0);
    (**(code **)(**(int **)((int)this + 0x14) + 0x5c))(1,piVar11,0);
    uStack_8c = 0x5e33c0;
    (**(code **)(*piVar11 + 0xc))(*(undefined4 *)((int)this + 0x14),1);
  }
  else {
    local_4 = operator_new(0x3fc);
    pvStack_c._0_1_ = 4;
    if (local_4 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = FUN_00833290(local_4);
    }
    auStack_48[0] = 0;
    pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,5);
    uVar5 = FUN_00ace02d(L"<nobr><x6>");
    FUN_004036d0(&stack0xffffffac,L"<nobr><x6>",uVar5);
    FUN_0040cae0(&stack0xffffffac,(wchar_t *)*unaff_retaddr,unaff_retaddr[1]);
    sVar6 = FUN_00ace02d(L"</x6></nobr>");
    FUN_0040cae0(&stack0xffffffac,L"</x6></nobr>",sVar6);
    (**(code **)(*piVar7 + 0x54))(&stack0xffffffac);
    (**(code **)(*piVar7 + 0x84))(0);
    fVar12 = (float10)(**(code **)(*piVar7 + 0x10))();
    pvStack_c = (void *)(float)fVar12;
    pvVar3 = (void *)0x0;
    (**(code **)(*piVar7 + 0x5c))(1,piVar11);
    (**(code **)(**(int **)((int)this + 0x14) + 100))(1,piVar11,0);
    uStack_8c = uStack_24;
    in_stack_ffffff6c = (undefined1 *)0x1;
    (**(code **)(**(int **)((int)this + 0x14) + 0x5c))(1,piVar11);
    iVar9 = *piVar7;
    fVar12 = (float10)(**(code **)(**(int **)((int)this + 0x14) + 0x14))();
    fStack_30 = (float)fVar12;
    fVar12 = (float10)(**(code **)(*piVar7 + 0x14))();
    _Memory = piVar11;
    (**(code **)(iVar9 + 100))(1,piVar11,(float)(((float10)fStack_30 - fVar12) * (float10)0.5));
    (**(code **)(*piVar11 + 0xc))(piVar7,1);
    (**(code **)(*piVar11 + 0xc))(*(undefined4 *)((int)this + 0x14),1);
    unaff_EBP = (int *)CONCAT31((int3)((uint)auStack_48 >> 8),1);
    if (&lpType_0000000a < in_stack_ffffff6c) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  (**(code **)(*piVar11 + 0x84))(0);
  puVar4 = operator_new(0x344);
  if (puVar4 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_007432f0(puVar4);
  }
  (**(code **)(*(int *)((int)this + 0x30) + 4))();
  *(int **)((int)this + 0x44) = piVar7;
  (*(code *)**(undefined4 **)((int)this + 0x30))();
  (**(code **)(*piVar7 + 0xc))(piVar11,1);
  (**(code **)(*piVar7 + 0xc))(puVar4,1);
  FUN_005e23a0((int)this);
  pvVar8 = operator_new(0x528);
  if (pvVar8 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_005e2720(pvVar8,(int)piVar7);
  }
  cVar2 = (**(code **)(*unaff_EBP + 0x18))();
  puVar10 = puVar4;
  if (cVar2 == '\0') {
    iVar9 = FUN_0071b2a0();
    pvVar8 = (void *)FUN_0071b920(iVar9);
  }
  else {
    iVar9 = FUN_0071b2a0();
    pvVar8 = (void *)FUN_0071b910(iVar9);
  }
  FUN_00640700(pvVar8,puVar10);
  FUN_008dcf70(puVar4,unaff_EBP);
  piVar11 = piVar7 + 0x12;
  *piVar11 = *piVar11 + -1;
  if (*piVar11 == 0) {
    (**(code **)*piVar7)(1);
  }
  FUN_008d55e0(puVar4,2);
  puVar10 = operator_new(0xc);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    *puVar10 = &PTR_LAB_00d2c750;
    puVar10[1] = this;
    puVar10[2] = FUN_005e2b70;
  }
  FUN_008d5670((int)puVar4);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[0x12] = puVar4[0x12] + 1;
  }
  puVar1 = *(undefined4 **)((int)this + 0x60);
  if (puVar1 != (undefined4 *)0x0) {
    piVar11 = puVar1 + 0x12;
    *piVar11 = *piVar11 + -1;
    if (*piVar11 == 0) {
      (**(code **)*puVar1)(1,puVar10);
    }
  }
  *(undefined4 **)((int)this + 0x60) = puVar4;
  piVar11 = puVar4 + 0x12;
  *piVar11 = *piVar11 + -1;
  if (*piVar11 == 0) {
    (**(code **)*puVar4)(1);
  }
  if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_ffffff6c);
  }
  ExceptionList = pvVar3;
  return;
}


//// FUNCTION FUN_005e3530 @ 005e3530 ////

undefined4 * __thiscall FUN_005e3530(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8757;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d2c758;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x24) = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x18) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 **)((int)this + 0x3c) = (undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x30) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 **)((int)this + 0x54) = (undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x48) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 **)((int)this + 0x74) = (undefined4 *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x68) = &PTR_FUN_00d1a200;
  *(undefined4 *)((int)this + 0x7c) = 0;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar2);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_6c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4._0_1_ = 7;
  puVar4 = FUN_009b5030(local_2c,&local_6c);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_005e30e0(this,puVar4,&local_4c,3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e36e0 @ 005e36e0 ////

undefined4 * __thiscall FUN_005e36e0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb87b7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d2c758;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x24) = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x18) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 **)((int)this + 0x3c) = (undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x30) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 **)((int)this + 0x54) = (undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x48) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 **)((int)this + 0x74) = (undefined4 *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x68) = &PTR_FUN_00d1a200;
  *(undefined4 *)((int)this + 0x7c) = 0;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_005e30e0(this,param_1,&local_2c,3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e3800 @ 005e3800 ////

undefined4 * __thiscall FUN_005e3800(void *this,undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb880f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d2c758;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 **)((int)this + 0x24) = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x18) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 **)((int)this + 0x3c) = (undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x30) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 **)((int)this + 0x54) = (undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x48) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 **)((int)this + 0x74) = (undefined4 *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x68) = &PTR_FUN_00d1a200;
  *(undefined4 *)((int)this + 0x7c) = 0;
  local_4 = 5;
  FUN_005e30e0(this,param_1,param_2,param_3);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e3910 @ 005e3910 ////

void __fastcall FUN_005e3910(int param_1)

{
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}


//// FUNCTION FUN_005e3920 @ 005e3920 ////

void __thiscall FUN_005e3920(void *this,undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 local_24 [8];
  undefined4 uStack_1c;
  
  if (*(char *)((int)this + 0x74) == '\0') {
    *(undefined4 *)((int)this + 0x14) = param_1;
    *(undefined4 *)((int)this + 0x10) = 0;
    pvVar2 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e54f14);
    if (*(int *)((int)this + 0x14) != 1) {
      if (*(int *)((int)this + 0x14) != 2) {
        pvVar2 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e54f14);
        puVar6 = local_24;
        local_24[0] = 0;
        uVar7 = 0;
        uVar8 = 0x14;
        pcVar3 = PTR_DAT_00e54f74;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_004015d0(&stack0xffffffd0,PTR_DAT_00e54f74,(int)pcVar3 - (int)(PTR_DAT_00e54f74 + 1));
        uVar8 = FUN_0088a2b0(pvVar2,puVar6,uVar7,uVar8);
        uStack_1c = 0x5e39ba;
        FUN_00881c00(*(void **)this,PTR_DAT_00e54f14,uVar8);
        FUN_00888870(*(int *)((int)pvVar2 + 0x164));
        return;
      }
      pcVar3 = *(char **)((int)this + 0x54);
      puVar6 = local_24;
      local_24[0] = 0;
      uVar7 = 0;
      uVar8 = 0x14;
      pcVar4 = pcVar3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&stack0xffffffd0,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
      uVar8 = FUN_0088a2b0(pvVar2,puVar6,uVar7,uVar8);
      uStack_1c = 0x5e3a19;
      FUN_00881b40(*(void **)this,PTR_DAT_00e54f14,uVar8);
      FUN_00888870(*(int *)((int)pvVar2 + 0x164));
      return;
    }
    pcVar3 = *(char **)((int)this + 0x34);
    puVar6 = local_24;
    local_24[0] = 0;
    uVar7 = 0;
    uVar8 = 0x14;
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xffffffd0,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    iVar5 = FUN_0088a2b0(pvVar2,puVar6,uVar7,uVar8);
    uStack_1c = 0x5e3a79;
    FUN_00881b40(*(void **)this,PTR_DAT_00e54f14,iVar5 + 1);
    pcVar3 = *(char **)((int)this + 0x54);
    puVar6 = local_24;
    local_24[0] = 0;
    uVar7 = 0;
    uVar8 = 0x14;
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xffffffd0,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    FUN_0088a2b0(pvVar2,puVar6,uVar7,uVar8);
  }
  return;
}


//// FUNCTION FUN_005e3ac0 @ 005e3ac0 ////

void __fastcall FUN_005e3ac0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *this;
  char *pcVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined1 local_2c [12];
  undefined4 uStack_20;
  
  uStack_20 = 0x5e3ad6;
  this = (void *)FUN_008819d0((void *)*param_1,PTR_DAT_00e54f14);
  iVar2 = *(int *)((int)this + 0x260);
  if (param_1[5] == 1) {
    if (param_1[3] == iVar2) goto LAB_005e3b0c;
    iVar6 = param_1[4];
    iVar5 = iVar6 + 1;
    param_1[4] = iVar5;
    bVar8 = SBORROW4(iVar5,0x8c);
    iVar6 = iVar6 + -0x8b;
    bVar7 = iVar5 == 0x8c;
  }
  else {
    if (param_1[5] != 2) {
      pcVar3 = (char *)param_1[0xd];
      puVar9 = local_2c;
      local_2c[0] = 0;
      uVar10 = 0;
      uVar11 = 0x14;
      pcVar4 = pcVar3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&stack0xffffffc8,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
      iVar6 = FUN_0088a2b0(this,puVar9,uVar10,uVar11);
      if (iVar6 <= iVar2) {
        uStack_20 = 0x5e3b8c;
        FUN_005e3920(param_1,0);
      }
      return;
    }
    if (param_1[3] == iVar2) goto LAB_005e3b0c;
    iVar6 = param_1[4] + 1;
    param_1[4] = iVar6;
    iVar5 = 0xa0;
    if (param_1[6] != 0) {
      iVar5 = 0x8c;
    }
    bVar8 = SBORROW4(iVar6,iVar5);
    iVar6 = iVar6 - iVar5;
    bVar7 = iVar6 == 0;
  }
  if (!bVar7 && bVar8 == iVar6 < 0) {
    uStack_20 = 0x5e3b08;
    FUN_005e3920(param_1,0);
  }
LAB_005e3b0c:
  param_1[3] = iVar2;
  return;
}


//// FUNCTION FUN_005e3ba0 @ 005e3ba0 ////

void __thiscall FUN_005e3ba0(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 *this_00;
  undefined4 *this_01;
  undefined4 uVar1;
  char *in_stack_00000024;
  uint in_stack_00000028;
  uint in_stack_0000002c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8830;
  local_c = ExceptionList;
  this_00 = (undefined4 *)((int)this + 0x34);
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_004015d0(this_00,param_1,param_2);
  this_01 = (undefined4 *)((int)this + 0x54);
  FUN_004015d0(this_01,in_stack_00000024,in_stack_00000028);
  uVar1 = FUN_00883180(*(void **)this,PTR_DAT_00e54f14,(char *)*this_00);
  if ((char)uVar1 == '\0') {
    FUN_004015d0(this_00,"up",2);
  }
  uVar1 = FUN_00883180(*(void **)this,PTR_DAT_00e54f14,(char *)*this_01);
  if ((char)uVar1 == '\0') {
    FUN_004015d0(this_01,"down",4);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  if (0x14 < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000024);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e3c70 @ 005e3c70 ////

void __fastcall FUN_005e3c70(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8861;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)*param_1;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *param_1 = 0;
  }
  if (0x14 < (uint)param_1[0x17]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x15]);
  }
  if (0x14 < (uint)param_1[0xf]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd]);
  }
  param_1[7] = (int)&PTR_FUN_00d18c2c;
  if ((int *)param_1[9] != (int *)0x0) {
    *(int *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(int *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  if ((int *)param_1[9] != (int *)0x0) {
    *(int *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(int *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005e3d30 @ 005e3d30 ////

void __thiscall FUN_005e3d30(void *this,float param_1)

{
  int iVar1;
  
  iVar1 = FUN_008819d0(*(void **)this,PTR_DAT_00e54f14);
  if (iVar1 != 0) {
    if (*(float *)((int)this + 4) < param_1) {
      *(undefined4 *)((int)this + 0x14) = 1;
      FUN_005e3920(this,*(undefined4 *)((int)this + 0x14));
      return;
    }
    if (param_1 < *(float *)((int)this + 4)) {
      *(undefined4 *)((int)this + 0x14) = 2;
    }
    FUN_005e3920(this,*(undefined4 *)((int)this + 0x14));
  }
  return;
}


//// FUNCTION FUN_005e3d90 @ 005e3d90 ////

void __thiscall FUN_005e3d90(void *this,float param_1)

{
  void *this_00;
  int iVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_4c [8];
  undefined4 uStack_44;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8880;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00acd42c();
  uStack_44 = 0x5e3dc6;
  FUN_00569d60(&local_2c,(int)uVar2);
  puVar3 = local_4c;
  local_4c[0] = 0;
  uVar4 = 0;
  uVar5 = 0x14;
  local_4 = 0;
  FUN_004015d0(&stack0xffffffa8,local_2c,local_28);
  local_4 = local_4 & 0xffffff00;
  this_00 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e54ef4);
  uVar5 = FUN_0088a2b0(this_00,puVar3,uVar4,uVar5);
  if (*(uint *)((int)this + 8) != uVar5) {
    iVar1 = FUN_008819d0(*(void **)this,PTR_DAT_00e54ef4);
    if (iVar1 != 0) {
      uStack_44 = 0x5e3e3d;
      FUN_00881b40(*(void **)this,PTR_DAT_00e54ef4,uVar5);
    }
    *(uint *)((int)this + 8) = uVar5;
  }
  FUN_005e3d30(this,param_1);
  *(float *)((int)this + 4) = param_1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e3e80 @ 005e3e80 ////

undefined4 * __thiscall FUN_005e3e80(void *this,void *param_1,int param_2,int param_3,float param_4)

{
  int *piVar1;
  undefined4 *this_00;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 local_54 [8];
  undefined4 uStack_4c;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb88c1;
  local_c = ExceptionList;
  piVar1 = (int *)((int)this + 0x1c);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int **)((int)this + 0x28) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x30) = 0;
  this_00 = (undefined4 *)((int)this + 0x34);
  *this_00 = (undefined1 *)((int)this + 0x40);
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x14;
  *(undefined1 **)((int)this + 0x54) = (undefined1 *)((int)this + 0x60);
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0x14;
  local_4 = 2;
  if ((param_2 == 0) && ((param_3 == 1 || (param_3 == 2)))) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  else {
    *(int *)((int)this + 0x18) = param_3;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x74) = 0;
  uStack_4c = 0x5e3f1f;
  FUN_004015d0(this_00,PTR_DAT_00e54f34,DAT_00e54f38);
  uStack_4c = 0x5e3f34;
  FUN_004015d0((void *)((int)this + 0x54),PTR_DAT_00e54f54,DAT_00e54f58);
  uStack_4c = 0x5e3f48;
  uVar3 = FUN_00883180(param_1,PTR_DAT_00e54f14,(char *)*this_00);
  if ((char)uVar3 == '\0') {
    uStack_4c = 0x5e3f5a;
    FUN_004015d0(this_00,"up",2);
  }
  uStack_4c = 0x5e3f70;
  uVar3 = FUN_00883180(param_1,PTR_DAT_00e54f14,*(char **)((int)this + 0x54));
  if ((char)uVar3 == '\0') {
    uStack_4c = 0x5e3f83;
    FUN_004015d0((void *)((int)this + 0x54),"down",4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  (**(code **)(*piVar1 + 4))();
  *(int *)((int)this + 0x30) = param_2;
  (**(code **)*piVar1)();
  *(void **)this = param_1;
  *(int *)((int)param_1 + 0x48) = *(int *)((int)param_1 + 0x48) + 1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(float *)((int)this + 4) = param_4;
  FUN_005e3d90(this,param_4);
  uVar6 = FUN_00acd42c();
  *(int *)((int)this + 8) = (int)uVar6;
  uStack_4c = 0x5e3fd8;
  FUN_00569d60(&local_2c,(int)uVar6);
  puVar7 = local_54;
  local_54[0] = 0;
  uVar3 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffffa0,local_2c,local_28);
  local_4 = CONCAT31(local_4._1_3_,3);
  pvVar4 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e54ef4);
  uVar3 = FUN_0088a2b0(pvVar4,puVar7,uVar3,uVar8);
  *(undefined4 *)((int)this + 8) = uVar3;
  pvVar4 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e54f14);
  puVar7 = local_54;
  local_54[0] = 0;
  uVar3 = 0;
  uVar8 = 0x14;
  pcVar5 = PTR_DAT_00e54f74;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_004015d0(&stack0xffffffa0,PTR_DAT_00e54f74,(int)pcVar5 - (int)(PTR_DAT_00e54f74 + 1));
  uVar8 = FUN_0088a2b0(pvVar4,puVar7,uVar3,uVar8);
  uStack_4c = 0x5e407d;
  FUN_00881c00(*(void **)this,PTR_DAT_00e54f14,uVar8);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e4120 @ 005e4120 ////

void __fastcall FUN_005e4120(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb88d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2c844;
  local_4 = 0;
  if (param_1[0xa3] == 0) {
    local_4 = 0xffffffff;
    FUN_005e7b80(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0xa3] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1[0xa3] + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xa3]);
}


//// FUNCTION FUN_005e41f0 @ 005e41f0 ////

void __thiscall FUN_005e41f0(void *this,void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x28c);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x3c);
    uVar2 = *(undefined4 *)((int)this + 0x38);
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
    *(undefined4 *)(iVar3 + 0x14) = uVar1;
    iVar3 = *(int *)((int)this + 0x28c);
    uVar1 = *(undefined4 *)((int)this + 0x40);
    uVar2 = *(undefined4 *)((int)this + 0x44);
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = uVar1;
    *(undefined4 *)(iVar3 + 0x20) = uVar2;
    FUN_007477d0(param_1,*(int *)((int)this + 0x28c));
  }
  FUN_005e7c00(this,param_1);
  return;
}


//// FUNCTION FUN_005e4290 @ 005e4290 ////

undefined4 * __thiscall FUN_005e4290(void *this,char param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb890b;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"ui/outline.dds",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 0;
  FUN_005e8fd0(this,&local_2c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined ***)this = &PTR_FUN_00d2c844;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(char *)((int)this + 0x288) = param_1;
  *(undefined4 *)((int)this + 0x26c) = 0x40800000;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x270) = 0x3f800000;
  *(undefined4 *)((int)this + 0x27c) = 0;
  if (param_1 != '\0') {
    puVar2 = operator_new(0x3c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0041f350(puVar2);
    }
    *(undefined4 **)((int)this + 0x28c) = puVar2;
    puVar2 = operator_new(0x24);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_009910f0(puVar2);
    }
    *(undefined4 *)(*(int *)((int)this + 0x28c) + 4) = uVar3;
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x28c) + 4) + 0xc) = 6;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x28c) + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    *(undefined4 *)(*(int *)((int)this + 0x28c) + 8) = 0xffd8efe1;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e4400 @ 005e4400 ////

undefined4 * __thiscall FUN_005e4400(void *this,byte param_1)

{
  FUN_005e4120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e4420 @ 005e4420 ////

void __fastcall FUN_005e4420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c878;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_005e4440 @ 005e4440 ////

undefined4 * __thiscall FUN_005e4440(void *this,byte param_1)

{
  FUN_005e4420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e4460 @ 005e4460 ////

void __fastcall FUN_005e4460(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2c894;
  local_4 = 0;
  if (param_1[0x15] == 0) {
    local_4 = 0xffffffff;
    *param_1 = &PTR_FUN_00d2c878;
    FUN_00526bb0(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0x15] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x15]);
}


//// FUNCTION FUN_005e4500 @ 005e4500 ////

void * FUN_005e4500(void *param_1)

{
  FUN_0040a530(param_1,0xff,0xff,0xff,0xff);
  return param_1;
}


//// FUNCTION FUN_005e4530 @ 005e4530 ////

void __thiscall FUN_005e4530(void *this,void *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar7 = FUN_00acd42c();
  uVar8 = FUN_00acd42c();
  local_14 = 0;
  if (0 < (int)uVar7) {
    do {
      local_10 = 0;
      if (0 < (int)uVar8) {
        do {
          iVar6 = *(int *)((int)this + 0x54);
          fVar2 = *(float *)((int)this + 0x50);
          iVar1 = local_10 + 1;
          fVar3 = *(float *)((int)this + 0x38);
          fVar4 = *(float *)((int)this + 0x4c);
          fVar5 = *(float *)((int)this + 0x3c);
          *(undefined4 *)(iVar6 + 0x18) = 0;
          *(float *)(iVar6 + 0x10) = (float)local_14 * fVar2 + fVar3;
          *(float *)(iVar6 + 0x14) = (float)local_10 * fVar4 + fVar5;
          iVar6 = *(int *)((int)this + 0x54);
          fVar2 = *(float *)((int)this + 0x50);
          fVar3 = *(float *)((int)this + 0x38);
          fVar4 = *(float *)((int)this + 0x4c);
          fVar5 = *(float *)((int)this + 0x3c);
          *(undefined4 *)(iVar6 + 0x24) = 0;
          *(float *)(iVar6 + 0x1c) = (float)(local_14 + 1) * fVar2 + fVar3;
          *(float *)(iVar6 + 0x20) = (float)iVar1 * fVar4 + fVar5;
          FUN_007477d0(param_1,*(int *)((int)this + 0x54));
          local_10 = iVar1;
        } while (iVar1 < (int)uVar8);
      }
      local_14 = local_14 + 1;
    } while (local_14 < (int)uVar7);
  }
  return;
}


//// FUNCTION FUN_005e4620 @ 005e4620 ////

undefined4 * __thiscall FUN_005e4620(void *this,byte param_1)

{
  FUN_005e4460(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e4640 @ 005e4640 ////

undefined4 * __fastcall FUN_005e4640(undefined4 *param_1)

{
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d2c878;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}


//// FUNCTION FUN_005e4670 @ 005e4670 ////

undefined4 * __thiscall
FUN_005e4670(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  void *this_00;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8953;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d2c894;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x54) = puVar2;
  pvVar3 = FUN_0099bb50((char *)*param_1,0,0,0,'\0');
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(*(int *)((int)this + 0x54) + 4) = uVar4;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x54) + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x54) + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  this_00 = *(void **)(*(int *)((int)this + 0x54) + 4);
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)((int)this_00 + 0x18) != pvVar3) {
    Engine_SetResourceReference(this_00,(int)pvVar3);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_0099b400(pvVar3);
  }
  *(undefined4 *)((int)this + 0x4c) = param_3;
  *(undefined4 *)((int)this + 0x50) = param_2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e4780 @ 005e4780 ////

void __fastcall FUN_005e4780(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2c8b0;
  local_4 = 0;
  if (param_1[0x13] == 0) {
    local_4 = 0xffffffff;
    *param_1 = &PTR_FUN_00d2c878;
    FUN_00526bb0(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0x13] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x13]);
}


//// FUNCTION FUN_005e4850 @ 005e4850 ////

undefined4 * __thiscall FUN_005e4850(void *this,byte param_1)

{
  FUN_005e4780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e4870 @ 005e4870 ////

undefined4 * __fastcall FUN_005e4870(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8993;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00d2c8b0;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  param_1[0x13] = puVar2;
  puVar2 = operator_new(0x24);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x13] + 4) = uVar3;
  *(undefined1 *)(*(int *)(param_1[0x13] + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(param_1[0x13] + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  *(undefined4 *)(param_1[0x13] + 8) = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005e4960 @ 005e4960 ////

void __fastcall FUN_005e4960(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb89a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2c8cc;
  local_4 = 0;
  if (param_1[0x13] == 0) {
    local_4 = 0xffffffff;
    *param_1 = &PTR_FUN_00d2c878;
    FUN_00526bb0(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0x13] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x13]);
}


//// FUNCTION FUN_005e4a30 @ 005e4a30 ////

undefined4 * __thiscall FUN_005e4a30(void *this,byte param_1)

{
  FUN_005e4960(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e4a50 @ 005e4a50 ////

undefined4 * __thiscall FUN_005e4a50(void *this,char *param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  void *this_00;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb89db;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_FUN_00d2c8cc;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  *(undefined4 **)((int)this + 0x4c) = puVar2;
  pvVar3 = FUN_0099bb50(param_1,0,0,0,'\0');
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(*(int *)((int)this + 0x4c) + 4) = uVar4;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x4c) + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x4c) + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  this_00 = *(void **)(*(int *)((int)this + 0x4c) + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(void **)((int)this_00 + 0x18) != pvVar3) {
    Engine_SetResourceReference(this_00,(int)pvVar3);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_0099b400(pvVar3);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e4ba0 @ 005e4ba0 ////

void __fastcall FUN_005e4ba0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c8e8;
  FUN_005e7b80(param_1);
  return;
}


//// FUNCTION FUN_005e4bb0 @ 005e4bb0 ////

undefined4 * __thiscall FUN_005e4bb0(void *this,byte param_1)

{
  FUN_005e4ba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e4bd0 @ 005e4bd0 ////

undefined4 * __thiscall FUN_005e4bd0(void *this,void *param_1,undefined4 param_2,uint param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8a00;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005e8fd0(this,&param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined ***)this = &PTR_FUN_00d2c908;
  *(undefined4 *)((int)this + 0x26c) = 0x42000000;
  FUN_005e7a00(this,0x41400000);
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e4c50 @ 005e4c50 ////

undefined4 * __thiscall FUN_005e4c50(void *this,byte param_1)

{
  thunk_FUN_005e7b80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e4d30 @ 005e4d30 ////

void __fastcall FUN_005e4d30(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8a18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2c954;
  local_4 = 0;
  puVar3 = param_1 + 0x15;
  iVar2 = 3;
  do {
    if ((void *)*puVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*puVar3);
    }
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_1[0x13] != 0) {
    pvVar1 = *(void **)(param_1[0x13] + 4);
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x13]);
  }
  if (param_1[0x14] == 0) {
    local_4 = 0xffffffff;
    *param_1 = &PTR_FUN_00d2c878;
    FUN_00526bb0(param_1);
    ExceptionList = local_c;
    return;
  }
  pvVar1 = *(void **)(param_1[0x14] + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x14]);
}


//// FUNCTION FUN_005e4e10 @ 005e4e10 ////

void __thiscall
FUN_005e4e10(void *this,float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float10 fVar4;
  int local_4;
  
  *(float *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x44) = param_4;
  piVar3 = (int *)((int)this + 0x54);
  local_4 = 3;
  do {
    if (*(char *)(*piVar3 + 0x24) == '\0') {
      *(undefined1 *)(*piVar3 + 0x24) = 1;
      fVar1 = *(float *)((int)this + 0x40) - *(float *)((int)this + 0x38);
      fVar2 = *(float *)((int)this + 0x44) - *(float *)((int)this + 0x3c);
      *(float *)(*piVar3 + 4) = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
      fVar4 = FUN_00990e30(-0.1,0.1);
      *(float *)(*piVar3 + 0xc) = (float)((fVar4 + (float10)0.43) * (float10)fVar2);
      *(float *)(*piVar3 + 0x20) = *(float *)(*piVar3 + 4) * 0.00390625;
    }
    piVar3 = piVar3 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}


//// FUNCTION FUN_005e4ff0 @ 005e4ff0 ////

undefined4 * __thiscall FUN_005e4ff0(void *this,byte param_1)

{
  FUN_005e4d30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e5010 @ 005e5010 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_005e5010(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 local_28;
  int local_24;
  undefined4 *local_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8a59;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00d2c954;
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  param_1[0x13] = puVar2;
  pvVar3 = FUN_0099bb50(PTR_DAT_00e550dc,0,0,0,'\0');
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x13] + 4) = uVar4;
  *(undefined1 *)(*(int *)(param_1[0x13] + 4) + 0xc) = 6;
  *(uint *)(*(int *)(param_1[0x13] + 4) + 0x10) =
       *(uint *)(*(int *)(param_1[0x13] + 4) + 0x10) & 0xbfffffff;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)((int)*(void **)(param_1[0x13] + 4) + 0x18) != pvVar3) {
    Engine_SetResourceReference(*(void **)(param_1[0x13] + 4),(int)pvVar3);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_0099b400(pvVar3);
  }
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0041f350(puVar2);
  }
  param_1[0x14] = puVar2;
  pvVar3 = FUN_0099bb50(PTR_DAT_00e550fc,0,0,0,'\0');
  puVar2 = operator_new(0x24);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009910f0(puVar2);
  }
  *(undefined4 *)(param_1[0x14] + 4) = uVar4;
  *(undefined1 *)(*(int *)(param_1[0x14] + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(param_1[0x14] + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  puVar1 = (uint *)(*(int *)(param_1[0x14] + 4) + 0x10);
  *puVar1 = *puVar1 | 0x8000000;
  puVar1 = (uint *)(*(int *)(param_1[0x14] + 4) + 0x10);
  *puVar1 = *puVar1 | 0x10000000;
  local_4._0_1_ = 0;
  if (*(void **)((int)*(void **)(param_1[0x14] + 4) + 0x18) != pvVar3) {
    Engine_SetResourceReference(*(void **)(param_1[0x14] + 4),(int)pvVar3);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_0099b400(pvVar3);
  }
  if ((_DAT_0104d820 & 1) == 0) {
    _DAT_0104d820 = _DAT_0104d820 | 1;
    DAT_0104d814 = 0x3d00adfd;
    _DAT_0104d818 = 0xbec104fb;
    _DAT_0104d81c = 0x3ea0d97c;
  }
  local_20 = param_1 + 0x15;
  puVar2 = &DAT_0104d814;
  local_24 = 0x19;
  do {
    puVar5 = operator_new(0x28);
    local_4._0_1_ = 3;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      if (local_24 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_24;
        if (0xff < local_24) {
          iVar6 = 0xff;
        }
      }
      local_28 = CONCAT13((char)iVar6,0xff0000);
      local_28 = CONCAT22(local_28._2_2_,0xff00);
      local_28 = CONCAT31(local_28._1_3_,0xff);
      fVar7 = FUN_00990e30(-0.001,0.001);
      fVar8 = FUN_00990e30(-0.5,0.5);
      fVar9 = FUN_00990e30(-128.0,128.0);
      *puVar5 = *puVar2;
      puVar5[2] = (float)(fVar9 + (float10)512.0);
      puVar5[1] = 0;
      puVar5[3] = 0;
      puVar5[4] = (float)(fVar8 + (float10)1.0);
      puVar5[5] = local_28;
      puVar5[6] = (float)(fVar7 + (float10)0.005);
      puVar5[7] = 0;
      puVar5[8] = 0;
      *(undefined1 *)(puVar5 + 9) = 0;
    }
    local_24 = local_24 + 0x29;
    *local_20 = puVar5;
    local_20 = local_20 + 1;
    puVar2 = puVar2 + 1;
    local_4._0_1_ = 0;
  } while (local_24 < 0x94);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005e5420 @ 005e5420 ////

void FUN_005e5420(void)

{
  return;
}


//// FUNCTION FUN_005e5440 @ 005e5440 ////

undefined4 * __fastcall FUN_005e5440(undefined4 *param_1)

{
  FUN_00833290(param_1);
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  *param_1 = &PTR_FUN_00d2c9e4;
  param_1[0x14] = &PTR_FUN_00d2c9c8;
  param_1[0xd1] = &PTR_FUN_00d2c9bc;
  param_1[0x7e] = DAT_0105c400;
  param_1[0x7d] = DAT_0105c404;
  return param_1;
}


//// FUNCTION FUN_005e54d0 @ 005e54d0 ////

void __thiscall FUN_005e54d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_3;
  return;
}


//// FUNCTION FUN_005e54f0 @ 005e54f0 ////

int * __thiscall FUN_005e54f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005e55b0 @ 005e55b0 ////

void __fastcall FUN_005e55b0(float *param_1)

{
  uint *puVar1;
  float fVar2;
  undefined1 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar3 = DAT_0105cc5c;
  puStack_8 = &LAB_00cb8a99;
  local_c = ExceptionList;
  DAT_0105cc5c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  pvVar4 = FUN_0099bb50("ui/progressbar.dds",0,0,0,'\0');
  pvVar5 = FUN_0099bb50("ui/progressbar_green.dds",0,0,0,'\0');
  pfVar8 = param_1 + 0xd;
  local_20 = 3;
  do {
    puVar6 = operator_new(0x3c);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_0041f350(puVar6);
    }
    pfVar8[-3] = (float)puVar6;
    puVar6 = operator_new(0x24);
    local_4._0_1_ = 1;
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_009910f0(puVar6);
    }
    *(undefined4 *)((int)pfVar8[-3] + 4) = uVar7;
    *(undefined1 *)(*(int *)((int)pfVar8[-3] + 4) + 0xc) = 6;
    local_4 = (uint)local_4._1_3_ << 8;
    if (*(void **)((int)*(void **)((int)pfVar8[-3] + 4) + 0x18) != pvVar4) {
      Engine_SetResourceReference(*(void **)((int)pfVar8[-3] + 4),(int)pvVar4);
    }
    puVar1 = (uint *)(*(int *)((int)pfVar8[-3] + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    *(undefined4 *)((int)pfVar8[-3] + 8) = 0xffffffff;
    puVar6 = operator_new(0x3c);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_0041f350(puVar6);
    }
    *pfVar8 = (float)puVar6;
    puVar6 = operator_new(0x24);
    local_4._0_1_ = 2;
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_009910f0(puVar6);
    }
    *(undefined4 *)((int)*pfVar8 + 4) = uVar7;
    *(undefined1 *)(*(int *)((int)*pfVar8 + 4) + 0xc) = 6;
    local_4 = (uint)local_4._1_3_ << 8;
    if (*(void **)((int)*(void **)((int)*pfVar8 + 4) + 0x18) != pvVar5) {
      Engine_SetResourceReference(*(void **)((int)*pfVar8 + 4),(int)pvVar5);
    }
    puVar1 = (uint *)(*(int *)((int)*pfVar8 + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    fVar2 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    local_20 = local_20 + -1;
    *(undefined4 *)((int)fVar2 + 8) = 0xffffffff;
  } while (local_20 != 0);
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
  }
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  fVar2 = param_1[10];
  *(undefined4 *)((int)fVar2 + 0x28) = 0;
  *(undefined4 *)((int)fVar2 + 0x2c) = 0;
  fVar2 = param_1[10];
  *(undefined4 *)((int)fVar2 + 0x30) = 0x3e800000;
  *(undefined4 *)((int)fVar2 + 0x34) = 0x3f800000;
  fVar2 = param_1[0xb];
  *(undefined4 *)((int)fVar2 + 0x28) = 0x3e800000;
  *(undefined4 *)((int)fVar2 + 0x2c) = 0;
  fVar2 = param_1[0xb];
  *(undefined4 *)((int)fVar2 + 0x30) = 0x3f000000;
  *(undefined4 *)((int)fVar2 + 0x34) = 0x3f800000;
  fVar2 = param_1[0xc];
  *(undefined4 *)((int)fVar2 + 0x28) = 0x3f400000;
  *(undefined4 *)((int)fVar2 + 0x2c) = 0;
  fVar2 = param_1[0xc];
  *(undefined4 *)((int)fVar2 + 0x30) = 0x3f800000;
  *(undefined4 *)((int)fVar2 + 0x34) = 0x3f800000;
  *(float *)((int)param_1[10] + 0x10) = param_1[7];
  *(float *)((int)param_1[10] + 0x14) = param_1[9];
  *(float *)((int)param_1[10] + 0x1c) = param_1[7] + 64.0;
  *(float *)((int)param_1[10] + 0x20) = *param_1 * 64.0 + param_1[9];
  *(float *)((int)param_1[0xb] + 0x10) = param_1[7] + 64.0;
  *(float *)((int)param_1[0xb] + 0x14) = param_1[9];
  *(float *)((int)param_1[0xb] + 0x1c) = param_1[8] - 64.0;
  *(float *)((int)param_1[0xb] + 0x20) = *param_1 * 64.0 + param_1[9];
  *(float *)((int)param_1[0xc] + 0x10) = param_1[8] - 64.0;
  *(float *)((int)param_1[0xc] + 0x14) = param_1[9];
  *(float *)((int)param_1[0xc] + 0x1c) = param_1[8];
  *(float *)((int)param_1[0xc] + 0x20) = *param_1 * 64.0 + param_1[9];
  pvVar4 = FUN_0099bb50(*(char **)(DAT_00f87b04 + 0x8c),0,0,0,'\0');
  puVar6 = operator_new(0x3c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_0041f350(puVar6);
  }
  param_1[0x18] = (float)puVar6;
  puVar6 = operator_new(0x24);
  local_4._0_1_ = 3;
  if (puVar6 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_009910f0(puVar6);
  }
  *(undefined4 *)((int)param_1[0x18] + 4) = uVar7;
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(void **)((int)*(void **)((int)param_1[0x18] + 4) + 0x18) != pvVar4) {
    Engine_SetResourceReference(*(void **)((int)param_1[0x18] + 4),(int)pvVar4);
  }
  *(undefined1 *)(*(int *)((int)param_1[0x18] + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)((int)param_1[0x18] + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  *(uint *)(*(int *)((int)param_1[0x18] + 4) + 0x10) =
       *(uint *)(*(int *)((int)param_1[0x18] + 4) + 0x10) & 0x7fffffff;
  *(undefined4 *)((int)param_1[0x18] + 0x10) = 0;
  *(undefined4 *)((int)param_1[0x18] + 0x14) = 0;
  *(float *)((int)param_1[0x18] + 0x1c) = (float)DAT_00e67b84;
  *(float *)((int)param_1[0x18] + 0x20) = (float)DAT_00e67b88;
  *(undefined1 *)(param_1 + 0x17) = 1;
  if (pvVar4 != (void *)0x0) {
    FUN_0099b400(pvVar4);
    DAT_0105cc5c = uVar3;
    ExceptionList = local_c;
    return;
  }
  DAT_0105cc5c = uVar3;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e59c0 @ 005e59c0 ////

undefined4 * __thiscall FUN_005e59c0(void *this,byte param_1)

{
  thunk_FUN_008330d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e59f0 @ 005e59f0 ////

void __thiscall FUN_005e59f0(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)((int)this + 0x20);
  fVar2 = *(float *)((int)this + 0x1c);
  if (0.0 < param_1) {
    fVar4 = param_1;
    if (64.0 < param_1) {
      fVar4 = 64.0;
    }
    fVar5 = fVar4 * 0.015625;
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    iVar3 = *(int *)((int)this + 0x34);
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    iVar3 = *(int *)((int)this + 0x34);
    *(float *)(iVar3 + 0x30) = fVar5 * 0.25;
    *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
    *(undefined4 *)(*(int *)((int)this + 0x34) + 0x10) = *(undefined4 *)((int)this + 0x1c);
    *(undefined4 *)(*(int *)((int)this + 0x34) + 0x14) = *(undefined4 *)((int)this + 0x24);
    *(float *)(*(int *)((int)this + 0x34) + 0x1c) = fVar4 + *(float *)((int)this + 0x1c);
    *(float *)(*(int *)((int)this + 0x34) + 0x20) =
         *(float *)this * 64.0 + *(float *)((int)this + 0x24);
    BuildAndDrawPrimitive(*(int *)((int)this + 0x34));
  }
  if (64.0 < param_1) {
    fVar2 = (fVar1 - fVar2) - 128.0;
    fVar1 = param_1 - 64.0;
    if (fVar2 < param_1 - 64.0) {
      fVar1 = fVar2;
    }
    iVar3 = *(int *)((int)this + 0x38);
    *(undefined4 *)(iVar3 + 0x28) = 0x3e800000;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    iVar3 = *(int *)((int)this + 0x38);
    *(undefined4 *)(iVar3 + 0x30) = 0x3e808312;
    *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
    *(float *)(*(int *)((int)this + 0x38) + 0x10) = *(float *)((int)this + 0x1c) + 64.0;
    *(undefined4 *)(*(int *)((int)this + 0x38) + 0x14) = *(undefined4 *)((int)this + 0x24);
    *(float *)(*(int *)((int)this + 0x38) + 0x1c) = fVar1 + *(float *)((int)this + 0x1c) + 64.0;
    *(float *)(*(int *)((int)this + 0x38) + 0x20) =
         *(float *)this * 64.0 + *(float *)((int)this + 0x24);
    BuildAndDrawPrimitive(*(int *)((int)this + 0x38));
  }
  fVar1 = (*(float *)((int)this + 0x20) - *(float *)((int)this + 0x1c)) - 64.0;
  if (fVar1 < param_1) {
    fVar1 = param_1 - fVar1;
    fVar2 = fVar1 * 0.015625;
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    iVar3 = *(int *)((int)this + 0x3c);
    *(undefined4 *)(iVar3 + 0x28) = 0x3f400000;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    iVar3 = *(int *)((int)this + 0x3c);
    *(float *)(iVar3 + 0x30) = fVar2 * 0.25 + 0.75;
    *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
    *(float *)(*(int *)((int)this + 0x3c) + 0x10) = *(float *)((int)this + 0x20) - 64.0;
    *(undefined4 *)(*(int *)((int)this + 0x3c) + 0x14) = *(undefined4 *)((int)this + 0x24);
    *(float *)(*(int *)((int)this + 0x3c) + 0x1c) = (*(float *)((int)this + 0x20) - 64.0) + fVar1;
    *(float *)(*(int *)((int)this + 0x3c) + 0x20) =
         *(float *)this * 64.0 + *(float *)((int)this + 0x24);
    BuildAndDrawPrimitive(*(int *)((int)this + 0x3c));
    return;
  }
  return;
}


//// FUNCTION FUN_005e5c80 @ 005e5c80 ////

void __thiscall FUN_005e5c80(void *this,float param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)((int)this + 0x5c) == '\0') {
    FUN_005e55b0(this);
  }
  piVar1 = (int *)((int)this + 0x28);
  iVar2 = 3;
  do {
    BuildAndDrawPrimitive(*piVar1);
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_005e59f0(this,(*(float *)((int)this + 0x20) - *(float *)((int)this + 0x1c)) * param_1);
  return;
}


//// FUNCTION FUN_005e5cd0 @ 005e5cd0 ////

void __thiscall FUN_005e5cd0(void *this,float param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  float local_4;
  
  if (*(char *)((int)this + 0x5c) == '\0') {
    FUN_005e55b0(this);
  }
  local_4 = param_1;
  if (1.0 < param_1) {
    local_4 = 1.0;
  }
  if (param_2 == '\0') {
    BuildAndDrawPrimitive(*(int *)((int)this + 0x60));
  }
  (**(code **)(**(int **)((int)this + 0x58) + 0x2c))();
  piVar2 = (int *)((int)this + 0x28);
  iVar1 = 3;
  do {
    BuildAndDrawPrimitive(*piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_005e59f0(this,(*(float *)((int)this + 0x20) - *(float *)((int)this + 0x1c)) * local_4);
  return;
}


//// FUNCTION FUN_005e5d70 @ 005e5d70 ////

void __fastcall FUN_005e5d70(int param_1)

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


//// FUNCTION FUN_005e5e80 @ 005e5e80 ////

void __fastcall FUN_005e5e80(int param_1)

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


//// FUNCTION FUN_005e5ea0 @ 005e5ea0 ////

void __fastcall FUN_005e5ea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2cb20;
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


//// FUNCTION FUN_005e5ef0 @ 005e5ef0 ////

void __fastcall FUN_005e5ef0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8abb;
  pvStack_c = ExceptionList;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = puVar1 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x44) + 4))();
    *(undefined4 *)(param_1 + 0x58) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x44))();
  }
  piVar3 = (int *)(param_1 + 0x34);
  local_14 = 3;
  while (piVar3[-3] == 0) {
    if (*piVar3 != 0) {
      pvVar2 = *(void **)(*piVar3 + 4);
      if (pvVar2 != (void *)0x0) {
        FUN_00990ec0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
        _free(pvVar2);
      }
      *(undefined4 *)(*piVar3 + 4) = 0;
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar3);
    }
    piVar3 = piVar3 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      if (*(int *)(param_1 + 0x60) != 0) {
        pvVar2 = *(void **)(*(int *)(param_1 + 0x60) + 4);
        if (pvVar2 != (void *)0x0) {
          FUN_00990ec0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
          _free(pvVar2);
        }
        *(undefined4 *)(*(int *)(param_1 + 0x60) + 4) = 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0x60));
    }
  }
  pvVar2 = *(void **)(piVar3[-3] + 4);
  if (pvVar2 != (void *)0x0) {
    FUN_00990ec0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(undefined4 *)(piVar3[-3] + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)piVar3[-3]);
}


//// FUNCTION FUN_005e6050 @ 005e6050 ////

undefined4 __fastcall FUN_005e6050(float *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  size_t sVar6;
  uint3 uVar7;
  float10 fVar8;
  float fVar9;
  void *_Memory;
  uint uVar10;
  wchar_t awStack_a4 [60];
  void *pvStack_2c;
  wchar_t *pwStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb8af7;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x374);
  local_4._0_1_ = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0071bf20(puVar3);
  }
  local_4._0_1_ = 0;
  puVar4 = operator_new(0x3fc);
  local_4._0_1_ = 2;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00833290(puVar4);
  }
  uVar10 = 0;
  _Memory = (void *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar5 + 0x5c))(1,puVar3);
  (**(code **)(*piVar5 + 100))(1,puVar3,0);
  sVar6 = FUN_00ace02d((short *)&PTR_LAB_00d2cb5c);
  FUN_0040cae0(&stack0xffffff34,(wchar_t *)&PTR_LAB_00d2cb5c,sVar6);
  sVar6 = FUN_00ace02d(L"<font = default size = ");
  FUN_0040cae0(&stack0xffffff34,L"<font = default size = ",sVar6);
  sVar6 = _swprintf(awStack_a4,0xd18f7c,pwStack_14);
  FUN_0040cae0(&stack0xffffff34,awStack_a4,sVar6);
  sVar6 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xffffff34,L">",sVar6);
  FUN_0040cae0(&stack0xffffff34,(wchar_t *)PTR_DAT_00e551bc,DAT_00e551c0);
  sVar6 = FUN_00ace02d(L"</font></p>");
  FUN_0040cae0(&stack0xffffff34,L"</font></p>",sVar6);
  piVar5[0xd5] = (int)((param_1[3] - param_1[1]) * param_1[0x19]);
  (**(code **)(*piVar5 + 0x54))(&stack0xffffff34);
  (**(code **)(*piVar5 + 0x84))(0);
  do {
    cVar2 = (**(code **)(*piVar5 + 0x50))(1);
  } while (cVar2 != '\0');
  fVar8 = (float10)(**(code **)(*piVar5 + 0x14))();
  fVar9 = (float)fVar8;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  piVar1 = piVar5 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar5)(1);
  }
  uVar7 = (uint3)(uVar10 >> 8);
  if (fVar9 < *param_1 * 0.0) {
    if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    ExceptionList = pvStack_2c;
    return CONCAT31(uVar7,1);
  }
  if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_2c;
  return (uint)uVar7 << 8;
}


//// FUNCTION FUN_005e62a0 @ 005e62a0 ////

int __fastcall FUN_005e62a0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  size_t sVar6;
  uint3 uVar7;
  float10 fVar8;
  float fVar9;
  void *_Memory;
  uint uVar10;
  undefined2 local_a8 [2];
  wchar_t awStack_a4 [60];
  void *pvStack_2c;
  wchar_t *pwStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cb8b37;
  pvStack_c = ExceptionList;
  local_a8[0] = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x374);
  local_4._0_1_ = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0071bf20(puVar3);
  }
  local_4._0_1_ = 0;
  puVar4 = operator_new(0x3fc);
  local_4._0_1_ = 2;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00833290(puVar4);
  }
  uVar10 = 0;
  _Memory = (void *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar5 + 0x5c))(1,puVar3);
  (**(code **)(*piVar5 + 100))(1,puVar3,0);
  sVar6 = FUN_00ace02d((short *)&PTR_LAB_00d2cb5c);
  FUN_0040cae0(&stack0xffffff34,(wchar_t *)&PTR_LAB_00d2cb5c,sVar6);
  sVar6 = FUN_00ace02d(L"<font = default size = ");
  FUN_0040cae0(&stack0xffffff34,L"<font = default size = ",sVar6);
  sVar6 = _swprintf(awStack_a4,0xd18f7c,pwStack_14);
  FUN_0040cae0(&stack0xffffff34,awStack_a4,sVar6);
  sVar6 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&stack0xffffff34,L">",sVar6);
  FUN_0040cae0(&stack0xffffff34,(wchar_t *)PTR_DAT_00e551bc,DAT_00e551c0);
  sVar6 = FUN_00ace02d(L"</font></p>");
  FUN_0040cae0(&stack0xffffff34,L"</font></p>",sVar6);
  piVar5[0xd5] = (int)((*(float *)(param_1 + 0xc) - *(float *)(param_1 + 4)) *
                      *(float *)(param_1 + 100));
  (**(code **)(*piVar5 + 0x54))(&stack0xffffff34);
  (**(code **)(*piVar5 + 0x84))(0);
  do {
    cVar2 = (**(code **)(*piVar5 + 0x50))(1);
  } while (cVar2 != '\0');
  fVar8 = (float10)(**(code **)(*piVar5 + 0x10))();
  fVar9 = (float)fVar8;
  *(float *)(param_1 + 0x6c) = fVar9;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  piVar1 = piVar5 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar5)(1);
  }
  uVar7 = (uint3)(uVar10 >> 8);
  if (fVar9 < (float)local_a8 * *(float *)(param_1 + 100)) {
    if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    ExceptionList = pvStack_2c;
    return (uint)uVar7 << 8;
  }
  if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_2c;
  return CONCAT31(uVar7,1);
}


//// FUNCTION FUN_005e64f0 @ 005e64f0 ////

void __fastcall FUN_005e64f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  size_t sVar10;
  ulonglong uVar11;
  void *local_138;
  undefined2 *local_134;
  uint local_130;
  undefined4 local_12c;
  undefined2 local_128 [10];
  float local_114;
  float local_110;
  wchar_t local_10c [64];
  wchar_t local_8c [62];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8b5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 6) != '\0') {
    ExceptionList = &pvStack_c;
    param_1[5] = 1.96182e-44;
    while (0xc < (int)param_1[5]) {
      uVar9 = FUN_005e6050(param_1);
      if ((char)uVar9 != '\0') break;
      param_1[5] = (float)((int)param_1[5] + -1);
    }
  }
  fVar5 = param_1[3];
  fVar6 = param_1[4];
  fVar7 = param_1[1];
  fVar1 = param_1[0x19];
  fVar8 = param_1[2];
  fVar2 = *param_1;
  fVar3 = param_1[0x19];
  fVar4 = *param_1;
  local_138 = (void *)((param_1[8] - param_1[7]) * 1.15);
  uVar9 = FUN_005e62a0((int)param_1);
  if ((char)uVar9 == '\0') {
    local_138 = (void *)param_1[0x1b];
  }
  local_134 = local_128;
  local_110 = fVar6 * fVar2 - fVar8 * fVar4;
  local_128[0] = 0;
  local_114 = fVar5 * fVar1 - fVar7 * fVar3;
  local_130 = 0;
  local_12c = 10;
  local_4 = 0;
  sVar10 = FUN_00ace02d(L"<table>");
  FUN_0040cae0(&local_134,L"<table>",sVar10);
  sVar10 = FUN_00ace02d(L"<tr><td height = ");
  FUN_0040cae0(&local_134,L"<tr><td height = ",sVar10);
  uVar11 = FUN_00acd42c();
  sVar10 = _swprintf(local_10c,0xd18f7c,(wchar_t *)uVar11);
  FUN_0040cae0(&local_134,local_10c,sVar10);
  sVar10 = FUN_00ace02d(L" width = ");
  FUN_0040cae0(&local_134,L" width = ",sVar10);
  uVar11 = FUN_00acd42c();
  sVar10 = _swprintf(local_10c,0xd18f7c,(wchar_t *)uVar11);
  FUN_0040cae0(&local_134,local_10c,sVar10);
  sVar10 = FUN_00ace02d(L"></td></tr>");
  FUN_0040cae0(&local_134,L"></td></tr>",sVar10);
  sVar10 = FUN_00ace02d(L"<tr><td width = ");
  FUN_0040cae0(&local_134,L"<tr><td width = ",sVar10);
  uVar11 = FUN_00acd42c();
  sVar10 = _swprintf(local_10c,0xd18f7c,(wchar_t *)uVar11);
  FUN_0040cae0(&local_134,local_10c,sVar10);
  sVar10 = FUN_00ace02d(L"></td>");
  FUN_0040cae0(&local_134,L"></td>",sVar10);
  sVar10 = FUN_00ace02d(L"<td width = ");
  FUN_0040cae0(&local_134,L"<td width = ",sVar10);
  uVar11 = FUN_00acd42c();
  sVar10 = _swprintf(local_10c,0xd18f7c,(wchar_t *)uVar11);
  FUN_0040cae0(&local_134,local_10c,sVar10);
  sVar10 = FUN_00ace02d(L" height = ");
  FUN_0040cae0(&local_134,L" height = ",sVar10);
  uVar11 = FUN_00acd42c();
  sVar10 = _swprintf(local_10c,0xd18f7c,(wchar_t *)uVar11);
  FUN_0040cae0(&local_134,local_10c,sVar10);
  sVar10 = FUN_00ace02d(L"><font = default size = ");
  FUN_0040cae0(&local_134,L"><font = default size = ",sVar10);
  sVar10 = _swprintf(local_8c,0xd18f7c,(wchar_t *)param_1[5]);
  FUN_0040cae0(&local_134,local_8c,sVar10);
  sVar10 = FUN_00ace02d((short *)&DAT_00d19724);
  FUN_0040cae0(&local_134,L">",sVar10);
  FUN_0040cae0(&local_134,(wchar_t *)PTR_DAT_00e551bc,DAT_00e551c0);
  sVar10 = FUN_00ace02d(L"</font></td></tr></table>");
  FUN_0040cae0(&local_134,L"</font></td></tr></table>",sVar10);
  (**(code **)(*(int *)param_1[0x16] + 0x54))(&local_134);
  if (10 < local_130) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_005e68a0 @ 005e68a0 ////

void __fastcall FUN_005e68a0(int param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *local_70;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  undefined1 local_60 [20];
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t *local_2c;
  size_t local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8b78;
  local_c = ExceptionList;
  local_6c = (wchar_t *)local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_6c,"SPLASHSCREEN_TIPS",0x11);
  local_68 = 0x11;
  *(char *)((int)local_6c + 0x11) = '\0';
  local_4 = 0;
  FUN_009b7190(&local_4c,&local_6c,'\0',0);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_70 = L"<br><br>";
  FUN_00568cb0(&local_70,&local_6c);
  uVar1 = FUN_0055d250(&local_4c,(ushort *)local_6c,0,local_68);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (uVar1 == 0xffffffff) {
    FUN_004036d0(&PTR_DAT_00e551bc,local_4c,local_48);
  }
  else {
    FUN_004211c0(&local_4c,&local_2c,0,uVar1);
    iVar2 = FUN_00ace02d(L"<br><br>");
    FUN_004211c0(&local_4c,&local_6c,iVar2 + uVar1,0xffffffff);
    *(uint *)(param_1 + 0x68) = local_68;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&PTR_DAT_00e551bc,(wchar_t *)&lpCaption_00d16918,uVar1);
    sVar3 = FUN_00ace02d(L"<table><tr><td align=center><x0>");
    FUN_0040cae0(&PTR_DAT_00e551bc,L"<table><tr><td align=center><x0>",sVar3);
    FUN_0040cae0(&PTR_DAT_00e551bc,local_2c,local_28);
    sVar3 = FUN_00ace02d(L"</x0></td></tr>");
    FUN_0040cae0(&PTR_DAT_00e551bc,L"</x0></td></tr>",sVar3);
    sVar3 = FUN_00ace02d(L"<tr><td height=10></td></tr>");
    FUN_0040cae0(&PTR_DAT_00e551bc,L"<tr><td height=10></td></tr>",sVar3);
    sVar3 = FUN_00ace02d(L"<tr><td><font color=#000000>");
    FUN_0040cae0(&PTR_DAT_00e551bc,L"<tr><td><font color=#000000>",sVar3);
    FUN_0040cae0(&PTR_DAT_00e551bc,local_6c,local_68);
    sVar3 = FUN_00ace02d(L"</font></td></tr></table>");
    FUN_0040cae0(&PTR_DAT_00e551bc,L"</font></td></tr></table>",sVar3);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e6af0 @ 005e6af0 ////

void __fastcall FUN_005e6af0(float *param_1)

{
  FUN_005e68a0((int)param_1);
  FUN_005e64f0(param_1);
  return;
}


//// FUNCTION FUN_005e6b20 @ 005e6b20 ////

float * __thiscall FUN_005e6b20(void *this,float param_1,float param_2,float param_3)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined2 *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined2 local_20 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8bae;
  pvStack_c = ExceptionList;
  fVar3 = DAT_0104d828 + 590.0;
  ExceptionList = &pvStack_c;
  *(float *)((int)this + 4) = DAT_0104d828;
  *(undefined4 *)((int)this + 8) = 0x43e10000;
  *(float *)((int)this + 0xc) = fVar3;
  *(undefined4 *)((int)this + 0x10) = 0x442a0000;
  *(undefined4 *)((int)this + 0x14) = 0x18;
  *(undefined1 *)((int)this + 0x18) = 1;
  piVar1 = (int *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(int **)((int)this + 0x50) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2cb20;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x4b;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  local_4 = 0;
  *(float *)((int)this + 100) = (float)DAT_00e67b84 * 0.0009765625;
  fVar3 = (float)DAT_00e67b88;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(float *)this = fVar3 * 0.0013020834;
  *(float *)((int)this + 0x1c) = param_1 * *(float *)((int)this + 100);
  *(float *)((int)this + 0x20) = param_2 * *(float *)((int)this + 100);
  *(float *)((int)this + 0x24) = param_3 * *(float *)this;
  uVar7 = FUN_00990ae0((undefined4 *)((int)this + 0x34),(undefined4 *)((int)this + 0x28));
  *(int *)((int)this + 0x40) = (int)uVar7;
  puVar5 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_005e5440(puVar5);
  }
  local_4._0_1_ = 0;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x58) = puVar5;
  (**(code **)*piVar1)();
  *(undefined4 *)(*(int *)((int)this + 0x58) + 0x9c) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x58) + 0xe4) = DAT_0105c404;
  *(undefined4 *)(*(int *)((int)this + 0x58) + 0xc0) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x58) + 0x108) = DAT_0105c400;
  puVar2 = (uint *)(*(int *)((int)this + 0x58) + 0x114);
  *puVar2 = *puVar2 & 0xfffffffd;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar6 = FUN_00ace02d(
                      L"<table><tr><td height = 565 width = 200></td></tr><tr><td width = 250></td><td width = 530></td></tr></table>"
                      );
  FUN_004036d0(&local_2c,
               L"<table><tr><td height = 565 width = 200></td></tr><tr><td width = 250></td><td width = 530></td></tr></table>"
               ,uVar6);
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(**(int **)((int)this + 0x58) + 0x54))(&local_2c);
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (10 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  do {
    cVar4 = (**(code **)(**(int **)((int)this + 0x58) + 0x50))(1);
  } while (cVar4 != '\0');
  if (DAT_00e551c0 == 0) {
    FUN_005e68a0((int)this);
  }
  FUN_005e64f0(this);
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_005e6d10 @ 005e6d10 ////

void __thiscall FUN_005e6d10(void *this,undefined4 *param_1)

{
  FUN_004036d0(&PTR_DAT_00e551bc,(wchar_t *)*param_1,param_1[1]);
  FUN_005e64f0(this);
  return;
}


//// FUNCTION FUN_005e6d60 @ 005e6d60 ////

undefined4 __fastcall FUN_005e6d60(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_005e6d80 @ 005e6d80 ////

void __thiscall FUN_005e6d80(void *this,undefined4 param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 local_24 [8];
  undefined4 uStack_1c;
  
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  pvVar2 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e55220);
  if (*(int *)((int)this + 0x14) == 1) {
    puVar5 = local_24;
    local_24[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    pcVar3 = PTR_DAT_00e55240;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xffffffd0,PTR_DAT_00e55240,(int)pcVar3 - (int)(PTR_DAT_00e55240 + 1));
    iVar4 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
    uStack_1c = 0x5e6eda;
    FUN_00881b40(*(void **)this,PTR_DAT_00e55220,iVar4 + 1);
    puVar5 = local_24;
    local_24[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    pcVar3 = PTR_DAT_00e55260;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xffffffd0,PTR_DAT_00e55260,(int)pcVar3 - (int)(PTR_DAT_00e55260 + 1));
    FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
    return;
  }
  if (*(int *)((int)this + 0x14) != 2) {
    pvVar2 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e55220);
    puVar5 = local_24;
    local_24[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    pcVar3 = PTR_DAT_00e55280;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xffffffd0,PTR_DAT_00e55280,(int)pcVar3 - (int)(PTR_DAT_00e55280 + 1));
    uVar7 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
    uStack_1c = 0x5e6e0f;
    FUN_00881c00(*(void **)this,PTR_DAT_00e55220,uVar7);
    FUN_00888870(*(int *)((int)pvVar2 + 0x164));
    return;
  }
  puVar5 = local_24;
  local_24[0] = 0;
  uVar6 = 0;
  uVar7 = 0x14;
  pcVar3 = PTR_DAT_00e55260;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&stack0xffffffd0,PTR_DAT_00e55260,(int)pcVar3 - (int)(PTR_DAT_00e55260 + 1));
  uVar7 = FUN_0088a2b0(pvVar2,puVar5,uVar6,uVar7);
  uStack_1c = 0x5e6e77;
  FUN_00881b40(*(void **)this,PTR_DAT_00e55220,uVar7);
  FUN_00888870(*(int *)((int)pvVar2 + 0x164));
  return;
}


//// FUNCTION FUN_005e6f20 @ 005e6f20 ////

void __fastcall FUN_005e6f20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  char *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 local_2c [12];
  undefined4 uStack_20;
  
  uStack_20 = 0x5e6f36;
  this = (void *)FUN_008819d0((void *)*param_1,PTR_DAT_00e55220);
  iVar2 = *(int *)((int)this + 0x260);
  if (param_1[5] == 1) {
    if (param_1[3] == iVar2) goto LAB_005e6f6c;
    iVar5 = param_1[4];
    iVar4 = iVar5 + 1;
    param_1[4] = iVar4;
    bVar7 = SBORROW4(iVar4,0x8c);
    iVar5 = iVar5 + -0x8b;
    bVar6 = iVar4 == 0x8c;
  }
  else {
    if (param_1[5] != 2) {
      puVar8 = local_2c;
      local_2c[0] = 0;
      uVar9 = 0;
      uVar10 = 0x14;
      pcVar3 = PTR_DAT_00e55240;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&stack0xffffffc8,PTR_DAT_00e55240,(int)pcVar3 - (int)(PTR_DAT_00e55240 + 1));
      iVar5 = FUN_0088a2b0(this,puVar8,uVar9,uVar10);
      if (iVar5 <= iVar2) {
        uStack_20 = 0x5e6ff6;
        FUN_005e6d80(param_1,0);
      }
      return;
    }
    if (param_1[3] == iVar2) goto LAB_005e6f6c;
    iVar5 = param_1[4] + 1;
    param_1[4] = iVar5;
    iVar4 = 0xa0;
    if (param_1[6] != 0) {
      iVar4 = 0x8c;
    }
    bVar7 = SBORROW4(iVar5,iVar4);
    iVar5 = iVar5 - iVar4;
    bVar6 = iVar5 == 0;
  }
  if (!bVar6 && bVar7 == iVar5 < 0) {
    uStack_20 = 0x5e6f68;
    FUN_005e6d80(param_1,0);
  }
LAB_005e6f6c:
  param_1[3] = iVar2;
  return;
}


//// FUNCTION FUN_005e7000 @ 005e7000 ////

void __fastcall FUN_005e7000(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8bcb;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)*param_1;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *param_1 = 0;
  }
  param_1[7] = (int)&PTR_FUN_00d18c2c;
  if ((int *)param_1[9] != (int *)0x0) {
    *(int *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(int *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  if ((int *)param_1[9] != (int *)0x0) {
    *(int *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(int *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005e7090 @ 005e7090 ////

void __thiscall FUN_005e7090(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_008819d0(*(void **)this,PTR_DAT_00e55220);
  if (iVar2 == 0) {
    *(int *)((int)this + 8) = param_1;
    return;
  }
  if ((0 < *(int *)((int)this + 0x18)) && (*(int *)((int)this + 0x18) < 3)) {
    iVar2 = FUN_00ace790(*(int **)((int)this + 0x30),0,&TM::WWindow::RTTI_Type_Descriptor,
                         &TM::WHudIcon::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x4b0) + 0x14);
      *(undefined4 *)((int)this + 0x14) = uVar1;
      FUN_005e6d80(this,uVar1);
      *(int *)((int)this + 8) = param_1;
      return;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    FUN_005e6d80(this,*(undefined4 *)((int)this + 0x14));
    *(int *)((int)this + 8) = param_1;
    return;
  }
  if (*(int *)((int)this + 8) < param_1) {
    *(undefined4 *)((int)this + 0x14) = 1;
    FUN_005e6d80(this,*(undefined4 *)((int)this + 0x14));
    *(int *)((int)this + 8) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 0x14) = 2;
  FUN_005e6d80(this,*(undefined4 *)((int)this + 0x14));
  *(int *)((int)this + 8) = param_1;
  return;
}


//// FUNCTION FUN_005e7160 @ 005e7160 ////

void __fastcall FUN_005e7160(undefined4 *param_1)

{
  void *this;
  int iVar1;
  ulonglong uVar2;
  undefined1 *puStack00000004;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8bf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00acd42c();
  uStack_40 = 0x5e7196;
  FUN_00569d60(&local_2c,(int)uVar2);
  puStack00000004 = &stack0xffffffac;
  puVar3 = local_48;
  local_48[0] = 0;
  uVar4 = 0;
  uVar5 = 0x14;
  local_4 = 0;
  FUN_004015d0(&stack0xffffffac,local_2c,local_28);
  local_4 = local_4 & 0xffffff00;
  this = (void *)FUN_008819d0((void *)*param_1,PTR_DAT_00e55200);
  uVar5 = FUN_0088a2b0(this,puVar3,uVar4,uVar5);
  if (param_1[2] != uVar5) {
    iVar1 = FUN_008819d0((void *)*param_1,PTR_DAT_00e55200);
    if (iVar1 != 0) {
      uStack_40 = 0x5e720d;
      FUN_00881b40((void *)*param_1,PTR_DAT_00e55200,uVar5);
    }
    FUN_005e7090(param_1,uVar5);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e7240 @ 005e7240 ////

int * __thiscall FUN_005e7240(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 local_54 [8];
  undefined4 uStack_4c;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8c1b;
  local_c = ExceptionList;
  piVar1 = (int *)((int)this + 0x1c);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int **)((int)this + 0x28) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 0;
  if ((param_2 == 0) && ((param_3 == 1 || (param_3 == 2)))) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  else {
    *(int *)((int)this + 0x18) = param_3;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  (**(code **)(*piVar1 + 4))();
  *(int *)((int)this + 0x30) = param_2;
  (**(code **)*piVar1)();
  *(int *)this = param_1;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  FUN_005e7160(this);
  uVar5 = FUN_00acd42c();
  *(int *)((int)this + 8) = (int)uVar5;
  uStack_4c = 0x5e72ed;
  FUN_00569d60(&local_2c,(int)uVar5);
  puVar6 = local_54;
  local_54[0] = 0;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffffa0,local_2c,local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  pvVar3 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e55200);
  uVar7 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  *(undefined4 *)((int)this + 8) = uVar7;
  pvVar3 = (void *)FUN_008819d0(*(void **)this,PTR_DAT_00e55220);
  puVar6 = local_54;
  local_54[0] = 0;
  uVar7 = 0;
  uVar8 = 0x14;
  pcVar4 = PTR_DAT_00e55280;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_004015d0(&stack0xffffffa0,PTR_DAT_00e55280,(int)pcVar4 - (int)(PTR_DAT_00e55280 + 1));
  uVar8 = FUN_0088a2b0(pvVar3,puVar6,uVar7,uVar8);
  uStack_4c = 0x5e7397;
  FUN_00881c00(*(void **)this,PTR_DAT_00e55220,uVar8);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e73d0 @ 005e73d0 ////

void __fastcall FUN_005e73d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2ce70;
  FUN_005e7b80(param_1);
  return;
}


//// FUNCTION FUN_005e73e0 @ 005e73e0 ////

undefined4 * __thiscall FUN_005e73e0(void *this,undefined4 *param_1)

{
  FUN_005e8fd0(this,param_1);
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x274) = 0x41400000;
  *(undefined4 *)((int)this + 0x278) = 0x41400000;
  *(undefined4 *)((int)this + 0x270) = 0x41400000;
  *(undefined4 *)((int)this + 0x27c) = 0x41400000;
  *(undefined ***)this = &PTR_FUN_00d2ce70;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0x41a00000;
  return this;
}


//// FUNCTION FUN_005e7470 @ 005e7470 ////

undefined4 * __thiscall FUN_005e7470(void *this,byte param_1)

{
  FUN_005e73d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e76d0 @ 005e76d0 ////

void __fastcall FUN_005e76d0(int param_1)

{
  float fVar1;
  undefined2 unaff_DI;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST0;
  float10 extraout_ST1;
  ulonglong uVar4;
  ulonglong uVar5;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x48) + 0x9c);
  fVar2 = FUN_00acf400((double)*(float *)(*(int *)(param_1 + 0x48) + 0xc0),unaff_DI);
  fVar3 = FUN_00acf400((double)fVar1,unaff_DI);
  *(float *)(param_1 + 0x29c) = (float)fVar3;
  *(float *)(param_1 + 0x298) = (float)fVar2;
  fVar1 = *(float *)(*(int *)(param_1 + 0x48) + 0xe4);
  fVar2 = FUN_00acf400((double)*(float *)(*(int *)(param_1 + 0x48) + 0x108),unaff_DI);
  fVar3 = FUN_00acf400((double)fVar1,unaff_DI);
  *(float *)(param_1 + 0x2a0) = (float)fVar2;
  *(float *)(param_1 + 0x2a4) = (float)fVar3;
  *(float *)(param_1 + 0x298) = *(float *)(param_1 + 0x298) - *(float *)(param_1 + 0x274);
  *(float *)(param_1 + 0x29c) = *(float *)(param_1 + 0x29c) - *(float *)(param_1 + 0x270);
  *(float *)(param_1 + 0x2a0) = *(float *)(param_1 + 0x278) + *(float *)(param_1 + 0x2a0);
  *(float *)(param_1 + 0x2a4) = *(float *)(param_1 + 0x27c) + *(float *)(param_1 + 0x2a4);
  uVar4 = FUN_00acd42c();
  *(int *)(param_1 + 0x28c) = (int)uVar4 + -2;
  uVar5 = FUN_00acd42c();
  *(int *)(param_1 + 0x288) = (int)uVar5 + -2;
  *(float *)(param_1 + 0x290) = (float)(extraout_ST1 / (float10)(int)uVar4);
  *(float *)(param_1 + 0x294) = (float)(extraout_ST0 / (float10)(int)uVar5);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x298) + *(float *)(param_1 + 0x290);
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x29c) + *(float *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0x2a0) - *(float *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x2a0);
  *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0x29c) + *(float *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(float *)(param_1 + 0x14c) = *(float *)(param_1 + 0x298) + *(float *)(param_1 + 0x290);
  *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x29c) + *(float *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x2a0) - *(float *)(param_1 + 0x290);
  *(float *)(param_1 + 0x15c) = *(float *)(param_1 + 0x2a4) - *(float *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x298);
  *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x2a4) - *(float *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x298) + *(float *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(float *)(param_1 + 0x23c) = *(float *)(param_1 + 0x2a0) - *(float *)(param_1 + 0x290);
  *(float *)(param_1 + 0x240) = *(float *)(param_1 + 0x2a4) - *(float *)(param_1 + 0x294);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)(param_1 + 0x250) = 0;
  return;
}


//// FUNCTION FUN_005e7a00 @ 005e7a00 ////

void __thiscall FUN_005e7a00(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x274) = param_1;
  *(undefined4 *)((int)this + 0x270) = param_1;
  *(undefined4 *)((int)this + 0x27c) = param_1;
  *(undefined4 *)((int)this + 0x278) = param_1;
  return;
}


//// FUNCTION FUN_005e7a30 @ 005e7a30 ////

void __thiscall FUN_005e7a30(void *this,undefined4 *param_1)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8c3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = FUN_0099bb50((char *)*param_1,0,0,0,'\0');
  puVar3 = operator_new(0x24);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_009910f0(puVar3);
  }
  *(int *)((int)this + 0x268) = iVar4;
  *(undefined1 *)(iVar4 + 0xc) = 6;
  puVar1 = (uint *)(*(int *)((int)this + 0x268) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  puVar1 = (uint *)(*(int *)((int)this + 0x268) + 0x10);
  *puVar1 = *puVar1 & 0xfeffffff;
  local_4 = 0xffffffff;
  if (*(void **)((int)*(void **)((int)this + 0x268) + 0x18) != pvVar2) {
    Engine_SetResourceReference(*(void **)((int)this + 0x268),(int)pvVar2);
  }
  puVar3 = (undefined4 *)((int)this + 0x54);
  iVar4 = 3;
  do {
    puVar3[-1] = *(undefined4 *)((int)this + 0x268);
    *puVar3 = 0xffffffff;
    puVar3[0xe] = *(undefined4 *)((int)this + 0x268);
    puVar3[0xf] = 0xffffffff;
    puVar3[0x1d] = *(undefined4 *)((int)this + 0x268);
    puVar3[0x1e] = 0xffffffff;
    puVar3 = puVar3 + 0x2d;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (pvVar2 != (void *)0x0) {
    FUN_0099b400(pvVar2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e7b80 @ 005e7b80 ////

void __fastcall FUN_005e7b80(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2ce90;
  _Memory = (void *)param_1[0x9a];
  local_4 = 0;
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x9a] = 0;
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_00d2c878;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e7c00 @ 005e7c00 ////

void __thiscall FUN_005e7c00(void *this,void *param_1)

{
  float *pfVar1;
  undefined4 unaff_EDI;
  int iVar2;
  
  (**(code **)(*(int *)this + 0x18))();
  pfVar1 = (float *)((int)this + 0x60);
  iVar2 = 9;
  do {
    FUN_00acf400((double)pfVar1[-1],(short)unaff_EDI);
    FUN_00acf400((double)*pfVar1,(short)unaff_EDI);
    FUN_00acf400((double)pfVar1[2],(short)unaff_EDI);
    FUN_00acf400((double)pfVar1[3],(short)unaff_EDI);
    pfVar1[-1] = pfVar1[-1] + 0.5;
    *pfVar1 = *pfVar1 + 0.5;
    pfVar1[2] = pfVar1[2] + 0.5;
    pfVar1[3] = pfVar1[3] + 0.5;
    FUN_007477d0(param_1,(int)(pfVar1 + -5));
    pfVar1 = pfVar1 + 0xf;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_005e7cc0 @ 005e7cc0 ////

undefined4 * __thiscall FUN_005e7cc0(void *this,byte param_1)

{
  FUN_005e7b80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e7ce0 @ 005e7ce0 ////

void __thiscall FUN_005e7ce0(void *this,undefined1 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)((int)this + 0x74);
  uVar2 = *(undefined4 *)((int)this + 0x78);
  uVar3 = *(undefined4 *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0xec);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0xf0);
  iVar6 = (int)this + 0x4c;
  uVar4 = *(undefined4 *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0xf4);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0xf8);
  *(undefined4 *)((int)this + 0xf4) = uVar4;
  *(undefined4 *)((int)this + 0xf8) = uVar3;
  *(undefined4 *)((int)this + 0xec) = uVar1;
  *(undefined4 *)((int)this + 0xf0) = uVar2;
  uVar1 = *(undefined4 *)((int)this + 0x128);
  uVar2 = *(undefined4 *)((int)this + 300);
  uVar3 = *(undefined4 *)((int)this + 0x130);
  uVar4 = *(undefined4 *)((int)this + 0x134);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x1a0);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)this + 0x1a4);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)((int)this + 0x1a8);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1a8) = uVar3;
  *(undefined4 *)((int)this + 0x1ac) = uVar4;
  *(undefined4 *)((int)this + 0x1a0) = uVar1;
  *(undefined4 *)((int)this + 0x1a4) = uVar2;
  uVar1 = *(undefined4 *)((int)this + 0x1dc);
  uVar2 = *(undefined4 *)((int)this + 0x1e0);
  uVar3 = *(undefined4 *)((int)this + 0x1e4);
  uVar4 = *(undefined4 *)((int)this + 0x1e8);
  *(undefined4 *)((int)this + 0x1dc) = *(undefined4 *)((int)this + 0x254);
  *(undefined4 *)((int)this + 0x1e0) = *(undefined4 *)((int)this + 600);
  *(undefined4 *)((int)this + 0x1e4) = *(undefined4 *)((int)this + 0x25c);
  *(undefined4 *)((int)this + 0x1e8) = *(undefined4 *)((int)this + 0x260);
  *(undefined4 *)((int)this + 0x25c) = uVar3;
  *(undefined4 *)((int)this + 0x260) = uVar4;
  *(undefined4 *)((int)this + 0x254) = uVar1;
  *(undefined4 *)((int)this + 600) = uVar2;
  iVar5 = 9;
  do {
    FUN_0099a080(iVar6);
    iVar6 = iVar6 + 0x3c;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined1 *)((int)this + 0x284) = param_1;
  return;
}


//// FUNCTION FUN_005e7e20 @ 005e7e20 ////

void __thiscall FUN_005e7e20(void *this,undefined1 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined4 *)((int)this + 0x74);
  uVar2 = *(undefined4 *)((int)this + 0x78);
  uVar3 = *(undefined4 *)((int)this + 0x80);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x1dc);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x1e0);
  iVar6 = (int)this + 0x4c;
  uVar4 = *(undefined4 *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x1e4);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x1e8);
  *(undefined4 *)((int)this + 0x1e4) = uVar4;
  *(undefined4 *)((int)this + 0x1e8) = uVar3;
  *(undefined4 *)((int)this + 0x1dc) = uVar1;
  *(undefined4 *)((int)this + 0x1e0) = uVar2;
  uVar1 = *(undefined4 *)((int)this + 0xb0);
  uVar2 = *(undefined4 *)((int)this + 0xb4);
  uVar3 = *(undefined4 *)((int)this + 0xb8);
  uVar4 = *(undefined4 *)((int)this + 0xbc);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0x218);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + 0x21c);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)((int)this + 0x220);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 0x224);
  *(undefined4 *)((int)this + 0x220) = uVar3;
  *(undefined4 *)((int)this + 0x224) = uVar4;
  *(undefined4 *)((int)this + 0x218) = uVar1;
  *(undefined4 *)((int)this + 0x21c) = uVar2;
  uVar1 = *(undefined4 *)((int)this + 0xec);
  uVar2 = *(undefined4 *)((int)this + 0xf0);
  uVar3 = *(undefined4 *)((int)this + 0xf4);
  uVar4 = *(undefined4 *)((int)this + 0xf8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)((int)this + 0x254);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)((int)this + 600);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)((int)this + 0x25c);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)((int)this + 0x260);
  *(undefined4 *)((int)this + 0x25c) = uVar3;
  *(undefined4 *)((int)this + 0x260) = uVar4;
  *(undefined4 *)((int)this + 0x254) = uVar1;
  *(undefined4 *)((int)this + 600) = uVar2;
  iVar5 = 9;
  do {
    FUN_0099a090(iVar6);
    iVar6 = iVar6 + 0x3c;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined1 *)((int)this + 0x285) = param_1;
  return;
}


//// FUNCTION FUN_005e7f60 @ 005e7f60 ////

void __fastcall FUN_005e7f60(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x74) = 0;
  *(undefined4 *)((int)param_1 + 0x78) = 0;
  *(undefined4 *)((int)param_1 + 0x7c) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x80) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0xb0) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0xbc) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0xec) = 0x3f400000;
  *(undefined4 *)((int)param_1 + 0xf0) = 0;
  *(undefined4 *)((int)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xf8) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x128) = 0;
  *(undefined4 *)((int)param_1 + 300) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x130) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x134) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x164) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x168) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x16c) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x170) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x1a0) = 0x3f400000;
  *(undefined4 *)((int)param_1 + 0x1a4) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x1a8) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x1ac) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x1dc) = 0;
  *(undefined4 *)((int)param_1 + 0x1e0) = 0x3f400000;
  *(undefined4 *)((int)param_1 + 0x1e4) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x1e8) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x218) = 0x3e800000;
  *(undefined4 *)((int)param_1 + 0x220) = 0x3f000000;
  *(undefined4 *)((int)param_1 + 0x21c) = 0x3f400000;
  *(undefined4 *)((int)param_1 + 600) = 0x3f400000;
  *(undefined4 *)((int)param_1 + 0x224) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x254) = 0x3f400000;
  *(undefined4 *)((int)param_1 + 0x25c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x260) = 0x3f800000;
  if (*(char *)((int)param_1 + 0x284) != '\0') {
    FUN_005e7ce0(param_1,1);
  }
  if (*(char *)((int)param_1 + 0x285) != '\0') {
    FUN_005e7e20(param_1,1);
  }
  return;
}


//// FUNCTION FUN_005e8210 @ 005e8210 ////

void __fastcall FUN_005e8210(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)((int)param_1 + 0x280) == 1) {
    local_10 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x274);
    local_c = *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x270);
    fVar1 = *(float *)((int)param_1 + 0x278) + *(float *)((int)param_1 + 0x40);
    local_14 = *(float *)((int)param_1 + 0x27c) + *(float *)((int)param_1 + 0x44);
  }
  else {
    local_10 = *(float *)(*(int *)((int)param_1 + 0x48) + 0xc0);
    local_c = *(float *)(*(int *)((int)param_1 + 0x48) + 0x9c);
    fVar1 = *(float *)(*(int *)((int)param_1 + 0x48) + 0x108);
    local_14 = *(float *)(*(int *)((int)param_1 + 0x48) + 0xe4);
  }
  *(float *)((int)param_1 + 0x5c) = local_10;
  *(float *)((int)param_1 + 0x60) = local_c;
  *(undefined4 *)((int)param_1 + 100) = 0;
  fVar3 = local_c + *(float *)((int)param_1 + 0x26c);
  if (local_14 <= fVar3) {
    fVar3 = local_14;
  }
  fVar2 = local_10 + *(float *)((int)param_1 + 0x26c);
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  *(float *)((int)param_1 + 0x68) = fVar2;
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  *(float *)((int)param_1 + 0x6c) = fVar3;
  fVar3 = local_10 + *(float *)((int)param_1 + 0x26c);
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  *(float *)((int)param_1 + 0x98) = fVar3;
  *(float *)((int)param_1 + 0x9c) = local_c;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  fVar3 = local_c + *(float *)((int)param_1 + 0x26c);
  if (local_14 <= fVar3) {
    fVar3 = local_14;
  }
  fVar2 = fVar1 - *(float *)((int)param_1 + 0x26c);
  if (fVar2 <= local_10) {
    fVar2 = local_10;
  }
  *(float *)((int)param_1 + 0xa4) = fVar2;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(float *)((int)param_1 + 0xa8) = fVar3;
  fVar3 = fVar1 - *(float *)((int)param_1 + 0x26c);
  if (fVar3 <= local_10) {
    fVar3 = local_10;
  }
  *(float *)((int)param_1 + 0xd4) = fVar3;
  *(float *)((int)param_1 + 0xd8) = local_c;
  *(undefined4 *)((int)param_1 + 0xdc) = 0;
  fVar3 = local_c + *(float *)((int)param_1 + 0x26c);
  if (local_14 <= fVar3) {
    fVar3 = local_14;
  }
  *(undefined4 *)((int)param_1 + 0xe8) = 0;
  *(float *)((int)param_1 + 0xe0) = fVar1;
  *(float *)((int)param_1 + 0xe4) = fVar3;
  fVar3 = local_c + *(float *)((int)param_1 + 0x26c);
  if (local_14 <= fVar3) {
    fVar3 = local_14;
  }
  *(float *)((int)param_1 + 0x114) = fVar3;
  *(float *)((int)param_1 + 0x110) = local_10;
  *(undefined4 *)((int)param_1 + 0x118) = 0;
  fVar3 = local_14 - *(float *)((int)param_1 + 0x26c);
  if (fVar3 <= local_c) {
    fVar3 = local_c;
  }
  fVar2 = local_10 + *(float *)((int)param_1 + 0x26c);
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  *(float *)((int)param_1 + 0x11c) = fVar2;
  *(undefined4 *)((int)param_1 + 0x124) = 0;
  *(float *)((int)param_1 + 0x120) = fVar3;
  fVar3 = local_c + *(float *)((int)param_1 + 0x26c);
  if (local_14 <= fVar3) {
    fVar3 = local_14;
  }
  fVar2 = local_10 + *(float *)((int)param_1 + 0x26c);
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  *(float *)((int)param_1 + 0x14c) = fVar2;
  *(undefined4 *)((int)param_1 + 0x154) = 0;
  *(float *)((int)param_1 + 0x150) = fVar3;
  fVar3 = local_14 - *(float *)((int)param_1 + 0x26c);
  if (fVar3 <= local_c) {
    fVar3 = local_c;
  }
  fVar2 = fVar1 - *(float *)((int)param_1 + 0x26c);
  if (fVar2 <= local_10) {
    fVar2 = local_10;
  }
  *(float *)((int)param_1 + 0x158) = fVar2;
  *(undefined4 *)((int)param_1 + 0x160) = 0;
  *(float *)((int)param_1 + 0x15c) = fVar3;
  fVar3 = local_c + *(float *)((int)param_1 + 0x26c);
  if (local_14 <= fVar3) {
    fVar3 = local_14;
  }
  fVar2 = fVar1 - *(float *)((int)param_1 + 0x26c);
  if (fVar2 <= local_10) {
    fVar2 = local_10;
  }
  *(float *)((int)param_1 + 0x188) = fVar2;
  *(undefined4 *)((int)param_1 + 400) = 0;
  *(float *)((int)param_1 + 0x18c) = fVar3;
  fVar3 = local_14 - *(float *)((int)param_1 + 0x26c);
  if (fVar3 <= local_c) {
    fVar3 = local_c;
  }
  *(undefined4 *)((int)param_1 + 0x19c) = 0;
  *(float *)((int)param_1 + 0x194) = fVar1;
  *(float *)((int)param_1 + 0x198) = fVar3;
  fVar3 = local_14 - *(float *)((int)param_1 + 0x26c);
  if (fVar3 <= local_c) {
    fVar3 = local_c;
  }
  *(float *)((int)param_1 + 0x1c8) = fVar3;
  *(float *)((int)param_1 + 0x1c4) = local_10;
  *(undefined4 *)((int)param_1 + 0x1cc) = 0;
  fVar3 = local_10 + *(float *)((int)param_1 + 0x26c);
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  *(float *)((int)param_1 + 0x1d0) = fVar3;
  *(float *)((int)param_1 + 0x1d4) = local_14;
  *(undefined4 *)((int)param_1 + 0x1d8) = 0;
  fVar3 = local_14 - *(float *)((int)param_1 + 0x26c);
  if (fVar3 <= local_c) {
    fVar3 = local_c;
  }
  fVar2 = local_10 + *(float *)((int)param_1 + 0x26c);
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  *(float *)((int)param_1 + 0x200) = fVar2;
  *(undefined4 *)((int)param_1 + 0x208) = 0;
  *(float *)((int)param_1 + 0x204) = fVar3;
  fVar3 = fVar1 - *(float *)((int)param_1 + 0x26c);
  if (fVar3 <= local_10) {
    fVar3 = local_10;
  }
  *(float *)((int)param_1 + 0x20c) = fVar3;
  *(float *)((int)param_1 + 0x210) = local_14;
  *(undefined4 *)((int)param_1 + 0x214) = 0;
  fVar3 = local_14 - *(float *)((int)param_1 + 0x26c);
  if (fVar3 <= local_c) {
    fVar3 = local_c;
  }
  fVar2 = fVar1 - *(float *)((int)param_1 + 0x26c);
  if (fVar2 <= local_10) {
    fVar2 = local_10;
  }
  *(float *)((int)param_1 + 0x23c) = fVar2;
  *(undefined4 *)((int)param_1 + 0x244) = 0;
  *(float *)((int)param_1 + 0x240) = fVar3;
  *(float *)((int)param_1 + 0x24c) = local_14;
  *(float *)((int)param_1 + 0x248) = fVar1;
  *(undefined4 *)((int)param_1 + 0x250) = 0;
  FUN_005e7f60(param_1);
  if (*(int *)((int)param_1 + 0x280) == 0) {
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x5c);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0x5c) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0x74) = fVar1 * 0.25 + *(float *)((int)param_1 + 0x74);
      }
      *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0x68) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x60)) {
      *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0x6c) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x44);
    }
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x98);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0x98) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0xb0) = fVar1 * 0.25 + *(float *)((int)param_1 + 0xb0);
      }
      *(undefined4 *)((int)param_1 + 0x98) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0xa4) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0xa4) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x9c)) {
      *(undefined4 *)((int)param_1 + 0x9c) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0xa8) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0xa8) = *(undefined4 *)((int)param_1 + 0x44);
    }
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0xd4);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0xd4) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0xec) = fVar1 * 0.25 + *(float *)((int)param_1 + 0xec);
      }
      *(undefined4 *)((int)param_1 + 0xd4) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0xe0) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0xe0) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0xd8)) {
      *(undefined4 *)((int)param_1 + 0xd8) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0xe4) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0xe4) = *(undefined4 *)((int)param_1 + 0x44);
    }
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x110);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0x110) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0x128) = fVar1 * 0.25 + *(float *)((int)param_1 + 0x128);
      }
      *(undefined4 *)((int)param_1 + 0x110) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0x11c) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0x11c) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x114)) {
      *(undefined4 *)((int)param_1 + 0x114) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0x120) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0x120) = *(undefined4 *)((int)param_1 + 0x44);
    }
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x14c);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0x14c) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0x164) = fVar1 * 0.25 + *(float *)((int)param_1 + 0x164);
      }
      *(undefined4 *)((int)param_1 + 0x14c) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0x158) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0x158) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x150)) {
      *(undefined4 *)((int)param_1 + 0x150) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0x15c) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0x15c) = *(undefined4 *)((int)param_1 + 0x44);
    }
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x188);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0x188) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0x1a0) = fVar1 * 0.25 + *(float *)((int)param_1 + 0x1a0);
      }
      *(undefined4 *)((int)param_1 + 0x188) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0x194) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0x194) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x18c)) {
      *(undefined4 *)((int)param_1 + 0x18c) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0x198) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0x198) = *(undefined4 *)((int)param_1 + 0x44);
    }
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x1c4);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0x1c4) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0x1dc) = fVar1 * 0.25 + *(float *)((int)param_1 + 0x1dc);
      }
      *(undefined4 *)((int)param_1 + 0x1c4) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0x1d0) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0x1d0) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x1c8)) {
      *(undefined4 *)((int)param_1 + 0x1c8) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0x1d4) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0x1d4) = *(undefined4 *)((int)param_1 + 0x44);
    }
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x200);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0x200) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0x218) = fVar1 * 0.25 + *(float *)((int)param_1 + 0x218);
      }
      *(undefined4 *)((int)param_1 + 0x200) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0x20c) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0x20c) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x204)) {
      *(undefined4 *)((int)param_1 + 0x204) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0x210) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0x210) = *(undefined4 *)((int)param_1 + 0x44);
    }
    fVar1 = *(float *)((int)param_1 + 0x38) - *(float *)((int)param_1 + 0x23c);
    if (0.0 < fVar1) {
      if (*(float *)((int)param_1 + 0x23c) < *(float *)((int)param_1 + 0x38)) {
        fVar1 = fVar1 / *(float *)((int)param_1 + 0x26c);
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        *(float *)((int)param_1 + 0x254) = fVar1 * 0.25 + *(float *)((int)param_1 + 0x254);
      }
      *(undefined4 *)((int)param_1 + 0x23c) = *(undefined4 *)((int)param_1 + 0x38);
    }
    if (0.0 < *(float *)((int)param_1 + 0x248) - *(float *)((int)param_1 + 0x40)) {
      *(undefined4 *)((int)param_1 + 0x248) = *(undefined4 *)((int)param_1 + 0x40);
    }
    if (0.0 < *(float *)((int)param_1 + 0x3c) - *(float *)((int)param_1 + 0x240)) {
      *(undefined4 *)((int)param_1 + 0x240) = *(undefined4 *)((int)param_1 + 0x3c);
    }
    if (0.0 < *(float *)((int)param_1 + 0x24c) - *(float *)((int)param_1 + 0x44)) {
      *(undefined4 *)((int)param_1 + 0x24c) = *(undefined4 *)((int)param_1 + 0x44);
    }
  }
  if (*(float *)((int)param_1 + 0x68) < *(float *)((int)param_1 + 0x5c)) {
    *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)((int)param_1 + 0x5c);
  }
  if (*(float *)((int)param_1 + 0x6c) < *(float *)((int)param_1 + 0x60)) {
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x60);
  }
  if (*(float *)((int)param_1 + 0xa4) < *(float *)((int)param_1 + 0x98)) {
    *(undefined4 *)((int)param_1 + 0xa4) = *(undefined4 *)((int)param_1 + 0x98);
  }
  if (*(float *)((int)param_1 + 0xa8) < *(float *)((int)param_1 + 0x9c)) {
    *(undefined4 *)((int)param_1 + 0xa8) = *(undefined4 *)((int)param_1 + 0x9c);
  }
  if (*(float *)((int)param_1 + 0xe0) < *(float *)((int)param_1 + 0xd4)) {
    *(undefined4 *)((int)param_1 + 0xe0) = *(undefined4 *)((int)param_1 + 0xd4);
  }
  if (*(float *)((int)param_1 + 0xe4) < *(float *)((int)param_1 + 0xd8)) {
    *(undefined4 *)((int)param_1 + 0xe4) = *(undefined4 *)((int)param_1 + 0xd8);
  }
  if (*(float *)((int)param_1 + 0x11c) < *(float *)((int)param_1 + 0x110)) {
    *(undefined4 *)((int)param_1 + 0x11c) = *(undefined4 *)((int)param_1 + 0x110);
  }
  if (*(float *)((int)param_1 + 0x120) < *(float *)((int)param_1 + 0x114)) {
    *(undefined4 *)((int)param_1 + 0x120) = *(undefined4 *)((int)param_1 + 0x114);
  }
  if (*(float *)((int)param_1 + 0x158) < *(float *)((int)param_1 + 0x14c)) {
    *(undefined4 *)((int)param_1 + 0x158) = *(undefined4 *)((int)param_1 + 0x14c);
  }
  if (*(float *)((int)param_1 + 0x15c) < *(float *)((int)param_1 + 0x150)) {
    *(undefined4 *)((int)param_1 + 0x15c) = *(undefined4 *)((int)param_1 + 0x150);
  }
  if (*(float *)((int)param_1 + 0x194) < *(float *)((int)param_1 + 0x188)) {
    *(undefined4 *)((int)param_1 + 0x194) = *(undefined4 *)((int)param_1 + 0x188);
  }
  if (*(float *)((int)param_1 + 0x198) < *(float *)((int)param_1 + 0x18c)) {
    *(undefined4 *)((int)param_1 + 0x198) = *(undefined4 *)((int)param_1 + 0x18c);
  }
  if (*(float *)((int)param_1 + 0x1d0) < *(float *)((int)param_1 + 0x1c4)) {
    *(undefined4 *)((int)param_1 + 0x1d0) = *(undefined4 *)((int)param_1 + 0x1c4);
  }
  if (*(float *)((int)param_1 + 0x1d4) < *(float *)((int)param_1 + 0x1c8)) {
    *(undefined4 *)((int)param_1 + 0x1d4) = *(undefined4 *)((int)param_1 + 0x1c8);
  }
  if (*(float *)((int)param_1 + 0x20c) < *(float *)((int)param_1 + 0x200)) {
    *(undefined4 *)((int)param_1 + 0x20c) = *(undefined4 *)((int)param_1 + 0x200);
  }
  if (*(float *)((int)param_1 + 0x210) < *(float *)((int)param_1 + 0x204)) {
    *(undefined4 *)((int)param_1 + 0x210) = *(undefined4 *)((int)param_1 + 0x204);
  }
  if (*(float *)((int)param_1 + 0x248) < *(float *)((int)param_1 + 0x23c)) {
    *(undefined4 *)((int)param_1 + 0x248) = *(undefined4 *)((int)param_1 + 0x23c);
  }
  if (*(float *)((int)param_1 + 0x24c) < *(float *)((int)param_1 + 0x240)) {
    *(undefined4 *)((int)param_1 + 0x24c) = *(undefined4 *)((int)param_1 + 0x240);
  }
  return;
}


//// FUNCTION FUN_005e8fd0 @ 005e8fd0 ////

undefined4 * __thiscall FUN_005e8fd0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8c78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d2ce90;
  puVar2 = (undefined4 *)((int)this + 0x4c);
  iVar1 = 9;
  do {
    FUN_0041f350(puVar2);
    puVar2 = puVar2 + 0xf;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)((int)this + 0x26c) = DAT_00e552c4;
  *(undefined4 *)((int)this + 0x270) = DAT_00e552c0;
  *(undefined4 *)((int)this + 0x274) = DAT_00e552c0;
  *(undefined4 *)((int)this + 0x278) = DAT_00e552c0;
  *(undefined4 *)((int)this + 0x27c) = DAT_00e552c0;
  *(undefined4 *)((int)this + 0x280) = 1;
  *(undefined1 *)((int)this + 0x284) = 0;
  *(undefined1 *)((int)this + 0x285) = 0;
  FUN_005e7f60(this);
  FUN_005e7a30(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005e90b0 @ 005e90b0 ////

void __cdecl FUN_005e90b0(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_2 == 2) {
    pcVar1 = "ui/icon_stunt_addon_content.dds";
  }
  else {
    if (param_2 == 3) {
      *param_1 = "ui/icon_downloaded_content.dds";
      return;
    }
    if (param_2 == 4) {
      *param_1 = "ui/icon_modded_content.dds";
      return;
    }
  }
  *param_1 = pcVar1;
  return;
}


//// FUNCTION FUN_005e90f0 @ 005e90f0 ////

int * __cdecl FUN_005e90f0(char *param_1)

{
  int *piVar1;
  void *this;
  char *pcVar2;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8cb4;
  local_c = ExceptionList;
  piVar1 = (int *)0x0;
  pcVar2 = (char *)0x0;
  if (param_1 == (char *)0x2) {
    pcVar2 = "ui/icon_stunt_addon_content.dds";
  }
  else if (param_1 == (char *)0x3) {
    pcVar2 = "ui/icon_downloaded_content.dds";
  }
  else if (param_1 == (char *)0x4) {
    pcVar2 = "ui/icon_modded_content.dds";
  }
  if (pcVar2 != (char *)0x0) {
    ExceptionList = &local_c;
    param_1 = pcVar2;
    this = operator_new(0x360);
    local_4 = 0;
    piVar1 = (int *)0x0;
    if (this != (void *)0x0) {
      FUN_0048f010(&param_1,local_2c);
      param_1 = &stack0xffffffb0;
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar1 = FUN_0069d820(this,local_2c,0,0,0x3f800000,0x3f800000);
    }
    local_4 = 0xffffffff;
    if ((this != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    (**(code **)(*piVar1 + 0x74))();
  }
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_005e91f0 @ 005e91f0 ////

void __cdecl FUN_005e91f0(int *param_1,char *param_2)

{
  int *piVar1;
  
  piVar1 = FUN_005e90f0(param_2);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x68))(2,param_1,0);
    (**(code **)(*piVar1 + 0x60))(2,param_1,0);
    (**(code **)(*param_1 + 0xc))(piVar1,1);
  }
  return;
}


//// FUNCTION FUN_005e9250 @ 005e9250 ////

bool __fastcall FUN_005e9250(int param_1)

{
  return *(int *)(param_1 + 0x90) != 3;
}


//// FUNCTION FUN_005e9260 @ 005e9260 ////

void __fastcall FUN_005e9260(int param_1)

{
  FUN_0053d480(param_1);
  if (*(int *)(param_1 + 0x90) != 3) {
    FUN_0053c870(param_1 + 100);
    return;
  }
  return;
}


//// FUNCTION FUN_005e9280 @ 005e9280 ////

void __fastcall FUN_005e9280(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00990ae0(param_1,param_2);
  fVar1 = (float)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0x88) = fVar1;
  *(undefined4 *)(param_1 + 0x8c) = DAT_0104db38;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = param_3;
  return;
}


//// FUNCTION FUN_005e93d0 @ 005e93d0 ////

void __cdecl FUN_005e93d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_005e94c0 @ 005e94c0 ////

void FUN_005e94c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104d82c;
  if (DAT_0104d82c != (undefined4 *)0x0) {
    iVar1 = DAT_0104d82c[0x12];
    DAT_0104d82c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_0104d82c = (undefined4 *)0x0;
  }
  return;
}


//// FUNCTION FUN_005e9720 @ 005e9720 ////

void __cdecl FUN_005e9720(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_005e97f0 @ 005e97f0 ////

void * FUN_005e97f0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_005e9820 @ 005e9820 ////

void __fastcall FUN_005e9820(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00423320(DAT_00f87b04);
  if (((iVar1 != 2) && (*(char *)(DAT_00f87b04 + 0x86) != '\0')) &&
     (puVar2 = *(undefined4 **)(param_1 + 0xa0), puVar2 != *(undefined4 **)(param_1 + 0xa4))) {
    do {
      (*(code *)*puVar2)();
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 0xa4));
  }
  return;
}


//// FUNCTION FUN_005e9870 @ 005e9870 ////

void __fastcall FUN_005e9870(int param_1)

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


//// FUNCTION FUN_005e98a0 @ 005e98a0 ////

undefined4 * FUN_005e98a0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005e98d0 @ 005e98d0 ////

void __fastcall FUN_005e98d0(int param_1,undefined4 param_2)

{
  float fVar1;
  int extraout_ECX;
  int iVar2;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  
  iVar2 = param_1;
  if (*(int *)(param_1 + 0x90) == 1) {
    FUN_004201a0(DAT_00f87b04,*(undefined1 *)(param_1 + 0xac));
    iVar2 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  uVar3 = FUN_00990ae0(iVar2,param_2);
  fVar1 = (float)(int)uVar3;
  if ((int)uVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0x88) = fVar1;
  *(undefined4 *)(param_1 + 0x90) = 2;
  FUN_005e9820(param_1);
  return;
}


//// FUNCTION FUN_005e9930 @ 005e9930 ////

void __fastcall FUN_005e9930(int param_1)

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


//// FUNCTION FUN_005e9960 @ 005e9960 ////

void __fastcall FUN_005e9960(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8cc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2cf24;
  param_1[0x19] = &PTR_LAB_00d2cf0c;
  local_4 = 0;
  if ((void *)param_1[0x28] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x28]);
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_0053cbd0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005e99f0 @ 005e99f0 ////

undefined4 * __thiscall FUN_005e99f0(void *this,byte param_1)

{
  FUN_005e9960(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005e9a10 @ 005e9a10 ////

void FUN_005e9a10(void)

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
  puStack_8 = &LAB_00cb8ce8;
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


//// FUNCTION FUN_005e9ad0 @ 005e9ad0 ////

void __thiscall FUN_005e9ad0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_005e9a10();
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
      _Dst = FUN_005e98a0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_005e97f0(param_1,iVar5,param_1 + param_2);
      FUN_005e98a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_005e93d0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_005e97f0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_005e9720(param_1,(int)pvVar3,iVar5);
    FUN_005e93d0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_005e9d10 @ 005e9d10 ////

undefined4 * __fastcall FUN_005e9d10(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8d13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0053cac0(param_1 + 0x19);
  param_1[0x19] = &PTR_LAB_00d2cf0c;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_00d2cf24;
  param_1[0x24] = 3;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005e9d90 @ 005e9d90 ////

void FUN_005e9d90(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8d2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xb0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    DAT_0104d82c = FUN_005e9d10(puVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0104d82c = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005e9e50 @ 005e9e50 ////

void __thiscall FUN_005e9e50(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  for (piVar2 = *(int **)((int)this + 0xa0); piVar2 != *(int **)((int)this + 0xa4);
      piVar2 = piVar2 + 1) {
    if (*piVar2 == param_1) {
      return;
    }
  }
  iVar1 = *(int *)((int)this + 0xa0);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0xa4) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0xa8) - iVar1 >> 2))) {
    piVar2 = *(int **)((int)this + 0xa4);
    *piVar2 = param_1;
    *(int **)((int)this + 0xa4) = piVar2 + 1;
    return;
  }
  FUN_005e9ad0((void *)((int)this + 0x9c),*(undefined4 **)((int)this + 0xa4),1,&param_1);
  return;
}


//// FUNCTION FUN_005e9f10 @ 005e9f10 ////

void __thiscall FUN_005e9f10(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x94);
  param_1[1] = *(undefined4 *)((int)this + 0x98);
  return;
}


//// FUNCTION FUN_005e9f70 @ 005e9f70 ////

void __thiscall FUN_005e9f70(void *this,int *param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  ulonglong uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x10));
  *(undefined4 *)((int)this + 0x9c) = local_8;
  *(undefined4 *)((int)this + 0xa0) = local_4;
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x1c));
  *(undefined4 *)((int)this + 0xa4) = local_8;
  *(undefined4 *)((int)this + 0xa8) = local_4;
  FUN_009840b0(&local_10,(undefined4 *)(*param_1 + 0x10));
  (**(code **)(*(int *)this + 0x20))(&local_10);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)(iVar1 + 0x14) = local_10;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  FUN_009840b0(&uStack_c,(undefined4 *)(*param_1 + 0x1c));
  local_10 = local_8;
  (**(code **)(*(int *)this + 0x20))(&stack0xffffffec);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x1c) = unaff_ESI;
  *(undefined4 *)(iVar1 + 0x20) = uStack_c;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(uint *)((int)this + 0xac) = (uint)*(byte *)(*param_1 + 0xb);
  uVar2 = FUN_00acd42c();
  if ((int)uVar2 < 0) {
    *(undefined1 *)(*param_1 + 0xb) = 0;
    return;
  }
  if (0xff < (int)uVar2) {
    *(undefined1 *)(*param_1 + 0xb) = 0xff;
    return;
  }
  *(char *)(*param_1 + 0xb) = (char)uVar2;
  return;
}


//// FUNCTION FUN_005ea0e0 @ 005ea0e0 ////

void __fastcall FUN_005ea0e0(int param_1)

{
  float10 fVar1;
  
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0xec) + 0x14))();
    *(float *)(param_1 + 0xb0) = (float)(fVar1 / (float10)*(float *)(param_1 + 0xbc));
  }
  return;
}


//// FUNCTION FUN_005ea100 @ 005ea100 ////

void __fastcall FUN_005ea100(int param_1)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  
  piVar1 = *(int **)(param_1 + 0xec);
  if (piVar1 != (int *)0x0) {
    fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
    piVar2 = *(int **)(param_1 + 0xec);
    *(float *)(param_1 + 0x94) = (float)(fVar3 * (float10)0.5 + (float10)(float)piVar1[0x30]);
    fVar3 = (float10)(**(code **)(*piVar2 + 0x14))();
    *(float *)(param_1 + 0x98) = (float)(fVar3 * (float10)0.5 + (float10)(float)piVar2[0x27]);
  }
  return;
}


//// FUNCTION FUN_005ea150 @ 005ea150 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ea150(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar12;
  ulonglong uVar13;
  
  piVar1 = *(int **)(param_1 + 0xec);
  iVar10 = param_1;
  if (piVar1 != (int *)0x0) {
    fVar12 = (float10)(**(code **)(*piVar1 + 0x10))();
    piVar2 = *(int **)(param_1 + 0xec);
    *(float *)(param_1 + 0x94) = (float)(fVar12 * (float10)0.5 + (float10)(float)piVar1[0x30]);
    fVar12 = (float10)(**(code **)(*piVar2 + 0x14))();
    *(float *)(param_1 + 0x98) = (float)(fVar12 * (float10)0.5 + (float10)(float)piVar2[0x27]);
    iVar10 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  uVar13 = FUN_00990ae0(iVar10,param_2);
  iVar10 = (int)uVar13;
  iVar11 = iVar10 - *(int *)(param_1 + 0xf4);
  fVar5 = (float)iVar11;
  if (iVar11 < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  if (((float)_DAT_00e552e8 - (float)_DAT_00e552e8 * 0.5 * *(float *)(param_1 + 0xc0) < fVar5) &&
     (cVar9 = FUN_004201b0(DAT_00f87b04), cVar9 == '\0')) {
    switch(*(undefined4 *)(param_1 + 0xf0)) {
    case 0:
      fVar5 = *(float *)(param_1 + 0xbc) -
              (*(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xb4)) * 0.2;
      *(float *)(param_1 + 0xbc) = fVar5;
      *(float *)(param_1 + 0xc4) = (255.0 - DAT_00e552e4) * 0.2 + *(float *)(param_1 + 0xc4);
      bVar3 = fVar5 < *(float *)(param_1 + 0xb4) != (fVar5 == *(float *)(param_1 + 0xb4));
      if (bVar3) {
        *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
      }
      bVar4 = 255.0 <= *(float *)(param_1 + 0xc4);
      if (bVar4) {
        *(undefined4 *)(param_1 + 0xc4) = 0x437f0000;
      }
      if ((bVar3) && (bVar4)) {
        *(int *)(param_1 + 0xf4) = iVar10;
        *(undefined4 *)(param_1 + 0xf0) = 2;
        return;
      }
      break;
    case 1:
      fVar5 = (*(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xb4)) * 0.2 +
              *(float *)(param_1 + 0xbc);
      *(float *)(param_1 + 0xbc) = fVar5;
      *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - (255.0 - DAT_00e552e4) * 0.2;
      bVar3 = *(float *)(param_1 + 0xb8) <= fVar5;
      if (bVar3) {
        *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb8);
      }
      bVar4 = *(float *)(param_1 + 0xc4) < DAT_00e552e4 !=
              (*(float *)(param_1 + 0xc4) == DAT_00e552e4);
      if (bVar4) {
        *(float *)(param_1 + 0xc4) = DAT_00e552e4;
      }
      if ((bVar3) && (bVar4)) {
        *(int *)(param_1 + 0xf4) = iVar10;
        *(undefined4 *)(param_1 + 0xf0) = 0;
        return;
      }
      break;
    case 2:
      fVar5 = (*(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xb4)) * 0.33333334 +
              *(float *)(param_1 + 0xb4);
      fVar6 = (*(float *)(param_1 + 0xb8) - fVar5) * 0.2 + *(float *)(param_1 + 0xbc);
      *(float *)(param_1 + 0xbc) = fVar6;
      fVar8 = 255.0 - (255.0 - DAT_00e552e4) * 0.16666667;
      fVar7 = *(float *)(param_1 + 0xc4) - (255.0 - DAT_00e552e4) * 0.2;
      *(float *)(param_1 + 0xc4) = fVar7;
      if (fVar5 <= fVar6) {
        *(float *)(param_1 + 0xbc) = fVar5;
      }
      bVar3 = fVar7 < fVar8 != (fVar7 == fVar8);
      if (bVar3) {
        *(float *)(param_1 + 0xc4) = fVar8;
      }
      if ((fVar5 <= fVar6) && (bVar3)) {
        *(int *)(param_1 + 0xf4) = iVar10;
        *(undefined4 *)(param_1 + 0xf0) = 3;
        return;
      }
      break;
    case 3:
      fVar5 = *(float *)(param_1 + 0xbc) -
              (*(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xb4)) * 0.2;
      *(float *)(param_1 + 0xbc) = fVar5;
      *(float *)(param_1 + 0xc4) = (255.0 - DAT_00e552e4) * 0.2 + *(float *)(param_1 + 0xc4);
      bVar3 = fVar5 < *(float *)(param_1 + 0xb4) != (fVar5 == *(float *)(param_1 + 0xb4));
      if (bVar3) {
        *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
      }
      bVar4 = 255.0 <= *(float *)(param_1 + 0xc4);
      if (bVar4) {
        *(undefined4 *)(param_1 + 0xc4) = 0x437f0000;
      }
      if ((bVar3) && (bVar4)) {
        *(undefined4 *)(param_1 + 0xf0) = 1;
      }
    }
    *(int *)(param_1 + 0xf4) = iVar10;
  }
  return;
}


//// FUNCTION FUN_005ea4c0 @ 005ea4c0 ////

void __thiscall FUN_005ea4c0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  if (*(int **)((int)this + 0xec) != (int *)0x0) {
    fVar7 = (float10)(**(code **)(**(int **)((int)this + 0xec) + 0x14))();
    *(float *)((int)this + 0xb0) = (float)(fVar7 / (float10)*(float *)((int)this + 0xbc));
  }
  fVar1 = *(float *)((int)this + 0xb0);
  fVar2 = *(float *)((int)this + 0xb0);
  fVar3 = *param_1;
  fVar4 = *(float *)((int)this + 0x94);
  fVar5 = param_1[1];
  fVar6 = *(float *)((int)this + 0x98);
  *param_1 = *(float *)((int)this + 0x94);
  param_1[1] = *(float *)((int)this + 0x98);
  *param_1 = (fVar3 - fVar4) * fVar2 + *param_1;
  param_1[1] = (fVar5 - fVar6) * fVar1 + param_1[1];
  return;
}


//// FUNCTION FUN_005ea540 @ 005ea540 ////

void __thiscall FUN_005ea540(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  
  if (*(int **)((int)this + 0xec) != (int *)0x0) {
    fVar6 = (float10)(**(code **)(**(int **)((int)this + 0xec) + 0x14))();
    *(float *)((int)this + 0xb0) = (float)(fVar6 / (float10)*(float *)((int)this + 0xbc));
  }
  fVar5 = 1.0 / *(float *)((int)this + 0xb0);
  fVar1 = *param_1;
  fVar2 = *(float *)((int)this + 0x94);
  fVar3 = param_1[1];
  fVar4 = *(float *)((int)this + 0x98);
  *param_1 = *(float *)((int)this + 0x94);
  param_1[1] = *(float *)((int)this + 0x98);
  *param_1 = (fVar1 - fVar2) * fVar5 + *param_1;
  param_1[1] = (fVar3 - fVar4) * fVar5 + param_1[1];
  return;
}


//// FUNCTION FUN_005ea5c0 @ 005ea5c0 ////

void __thiscall FUN_005ea5c0(void *this,int param_1)

{
  float10 fVar1;
  
  if (*(int **)((int)this + 0xec) != (int *)0x0) {
    fVar1 = (float10)(**(code **)(**(int **)((int)this + 0xec) + 0x14))();
    *(float *)((int)this + 0xb0) = (float)(fVar1 / (float10)*(float *)((int)this + 0xbc));
  }
  (**(code **)(*(int *)this + 0x20))(param_1 + 8);
  *(float *)(param_1 + 0x14) = *(float *)((int)this + 0xb0) * *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * *(float *)((int)this + 0xb0);
  if (*(char *)(*(int *)(param_1 + 0x10) + 8) != '\0') {
    (**(code **)(*(int *)this + 0x20))(&DAT_0105cb50);
    (**(code **)(*(int *)this + 0x20))(&DAT_0105cb58);
  }
  return;
}


//// FUNCTION FUN_005ea630 @ 005ea630 ////

void __thiscall FUN_005ea630(void *this,float *param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (*(int **)((int)this + 0xec) != (int *)0x0) {
    fVar2 = (float10)(**(code **)(**(int **)((int)this + 0xec) + 0x14))();
    *(float *)((int)this + 0xb0) = (float)(fVar2 / (float10)*(float *)((int)this + 0xbc));
  }
  fVar1 = 1.0 / *(float *)((int)this + 0xb0);
  *param_1 = *param_1 * fVar1;
  param_1[1] = fVar1 * param_1[1];
  return;
}


//// FUNCTION FUN_005ea6a0 @ 005ea6a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ea6a0(void)

{
  float10 fVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8d58;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"interface",9);
  local_28 = 9;
  local_2c[9] = '\0';
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
  _strncpy(local_2c,"pulse_minimumalpha",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4 = 1;
  fVar1 = FUN_00558610(DAT_00f88624,&local_2c,0.0);
  DAT_00e552e4 = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"pulse_maxtimebetweenscale",0x19);
  local_28 = 0x19;
  local_2c[0x19] = '\0';
  local_4 = 2;
  _DAT_00e552e8 = FUN_00558750(DAT_00f88624,&local_2c,0);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ea810 @ 005ea810 ////

undefined4 * __thiscall
FUN_005ea810(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  float10 fVar4;
  ulonglong uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8d86;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00746480(this);
  *(undefined4 *)((int)this + 0xb4) = param_2;
  *(undefined4 *)((int)this + 0xb8) = param_3;
  *(undefined4 *)((int)this + 0xc0) = param_4;
  uVar3 = 0;
  *(undefined ***)this = &PTR_FUN_00d2cf84;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  piVar1 = (int *)((int)this + 0xdc);
  *(undefined4 *)((int)this + 0xe4) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 **)((int)this + 0xe4) = (undefined4 *)((int)this + 0xd8);
  *(undefined4 *)((int)this + 0xd8) = &PTR_FUN_00d18c2c;
  *(int **)((int)this + 0xec) = param_1;
  if (param_1 != (int *)0x0) {
    piVar2 = param_1 + 6;
    *(int **)((int)this + 0xe0) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 1;
  *(undefined4 *)((int)this + 0xf0) = 0;
  if (*(int *)((int)this + 0xec) != 0) {
    fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
    *(float *)((int)this + 0xb0) = (float)(fVar4 / (float10)*(float *)((int)this + 0xb4));
    fVar4 = (float10)(**(code **)(*param_1 + 0x10))();
    *(float *)((int)this + 0x94) = (float)(fVar4 * (float10)0.5 + (float10)(float)param_1[0x30]);
    fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
    *(float *)((int)this + 0x98) = (float)(fVar4 * (float10)0.5 + (float10)(float)param_1[0x27]);
    uVar3 = extraout_EDX;
  }
  *(undefined4 *)((int)this + 0xc4) = DAT_00e552e4;
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 0xb4);
  uVar5 = FUN_00990ae0(*(undefined4 *)((int)this + 0xb4),uVar3);
  *(int *)((int)this + 0xf4) = (int)uVar5;
  FUN_004015d0((void *)((int)this + 0x60),"CPulseRenderer",0xe);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_005ea950 @ 005ea950 ////

void __fastcall FUN_005ea950(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2cf84;
  param_1[0x36] = &PTR_FUN_00d18c2c;
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
  FUN_00746640(param_1);
  return;
}


//// FUNCTION FUN_005ea9e0 @ 005ea9e0 ////

undefined4 * __thiscall FUN_005ea9e0(void *this,byte param_1)

{
  FUN_005ea950(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005eaae0 @ 005eaae0 ////

/* WARNING: Removing unreachable block (ram,0x005eb1e2) */

int * __cdecl FUN_005eaae0(int param_1)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *this;
  void *this_00;
  wchar_t *_Dest;
  char *pcVar6;
  int *piVar7;
  void *unaff_EBX;
  int *piVar8;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  char cStack_115;
  int iVar12;
  uint uVar13;
  undefined4 uStack_d8;
  void *this_01;
  char acStack_b4 [4];
  uint uStack_b0;
  undefined4 **ppuStack_a8;
  undefined4 **ppuStack_a4;
  undefined4 *local_a0;
  undefined4 *puStack_9c;
  undefined4 *local_98 [5];
  void *apvStack_84 [2];
  uint uStack_7c;
  undefined4 uStack_68;
  void *pvStack_64;
  uint *puStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint auStack_54 [2];
  void *pvStack_4c;
  undefined1 uStack_48;
  uint uStack_44;
  undefined1 uStack_3c;
  undefined1 uStack_38;
  undefined1 uStack_28;
  int iStack_20;
  char cStack_1c;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8e3c;
  local_c = ExceptionList;
  piVar9 = (int *)0x0;
  local_a0 = (undefined4 *)0x0;
  piVar8 = (int *)0x0;
  if ((*(int *)(param_1 + 0x128) != 0) &&
     (local_98[0] = (undefined4 *)((*(int *)(param_1 + 300) - *(int *)(param_1 + 0x128)) / 0x44),
     local_98[0] != (undefined4 *)0x0)) {
    ExceptionList = &local_c;
    local_98[0] = operator_new(0x344);
    local_4 = 0;
    if (local_98[0] == (undefined4 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = FUN_007432f0(local_98[0]);
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar8 + 0x78))();
    local_a0 = (undefined4 *)0xff404958;
    puStack_9c = operator_new(0x3fc);
    puStack_8 = (undefined1 *)0x1;
    if (puStack_9c != (undefined4 *)0x0) {
      piVar9 = FUN_00833290(puStack_9c);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    acStack_b4[3] = 0xff;
    acStack_b4[2] = 0xff;
    acStack_b4[1] = 0xff;
    acStack_b4[0] = -1;
    FUN_00830550(piVar9,8,acStack_b4);
    FUN_00830550(piVar9,6,"default");
    auStack_54[0] = 0xe;
    FUN_00830550(piVar9,7,(char *)auStack_54);
    FUN_00830550(piVar9,9,(char *)&local_a0);
    this_01 = (void *)0x0;
    (**(code **)(*piVar9 + 100))();
    piVar9[0xd5] = 0x437a0000;
    *(undefined1 *)(piVar9 + 0xd6) = 1;
    (**(code **)(*piVar9 + 0x78))();
    FUN_0073e590(piVar9,piVar8);
    puStack_60 = auStack_54;
    auStack_54[0] = auStack_54[0] & 0xffff0000;
    uStack_5c = 0;
    uStack_58 = 10;
    uStack_18 = 2;
    sVar2 = FUN_00ace02d(L"<p align=\"center\">");
    FUN_0040cae0(&puStack_60,L"<p align=\"center\">",sVar2);
    cVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 0x20))();
    pcVar6 = "SITT_RESEARCHPACK_DIDUNLOCK";
    if (cVar1 == '\0') {
      pcVar6 = "SITT_RESEARCHPACK_WILLUNLOCK";
    }
    ppuStack_a8 = &puStack_9c;
    ppuStack_a4 = (undefined4 **)0x0;
    puStack_9c = (undefined4 *)((uint)puStack_9c & 0xffffff00);
    local_a0 = (undefined4 *)0x14;
    pcVar3 = pcVar6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&ppuStack_a8,pcVar6,(int)pcVar3 - (int)(pcVar6 + 1));
    uStack_18._0_1_ = 3;
    puVar4 = FUN_009b5030(apvStack_84,&ppuStack_a8);
    FUN_0040cae0(&puStack_60,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_84[0]);
    }
    uStack_18 = CONCAT31(uStack_18._1_3_,2);
    if ((undefined4 *)0x14 < local_a0) {
                    /* WARNING: Subroutine does not return */
      _free(ppuStack_a8);
    }
    sVar2 = FUN_00ace02d(L"</p>");
    FUN_0040cae0(&puStack_60,L"</p>",sVar2);
    (**(code **)(*piVar9 + 0x54))();
    (**(code **)(*piVar9 + 0x8c))();
    (**(code **)(*piVar8 + 0xc))();
    uStack_d8 = (undefined4 *)0x17a0000;
    (**(code **)(*piVar9 + 0x14))();
    puVar4 = *(undefined4 **)(param_1 + 0x128);
    local_98[0] = puVar4;
    if (puVar4 != *(undefined4 **)(param_1 + 300)) {
      do {
        local_98[0] = puVar4;
        if ((puVar4[0x10] == 0) ||
           (cVar1 = FUN_0053fdb0((void *)(param_1 + 0x38),puVar4[0x10]), cVar1 == '\0')) {
          this_01 = operator_new(0x360);
          uStack_28 = 4;
          if (this_01 == (void *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = FUN_0069d820(this_01,puVar4 + 8,0,0,0x3f800000,0x3f800000);
          }
          uVar13 = 0x42000000;
          uStack_28 = 2;
          (**(code **)(*piVar9 + 0x74))();
          (**(code **)(*piVar9 + 0x5c))();
          piVar7 = piVar8;
          (**(code **)(*piVar9 + 100))();
          puVar5 = operator_new(0x3fc);
          uStack_48 = 5;
          if (puVar5 == (undefined4 *)0x0) {
            this = (int *)0x0;
          }
          else {
            this = FUN_00833290(puVar5);
          }
          uStack_48 = 2;
          FUN_00830550(this,8,&stack0xffffff20);
          FUN_00830550(this,6,"default");
          FUN_00830550(this,7,&stack0xffffff24);
          fVar10 = (float10)(**(code **)(*piVar9 + 0x10))();
          fVar11 = (float10)(**(code **)(*piVar8 + 0x10))();
          this[0xd5] = (int)(float)(fVar11 - (float10)(float)(fVar10 + (float10)6.0));
          *(undefined1 *)(this + 0xd6) = 1;
          FUN_009b5030((undefined4 *)acStack_b4,puVar4);
          uStack_48 = 6;
          (**(code **)(*this + 0x54))();
          pvStack_4c = (void *)CONCAT31(pvStack_4c._1_3_,2);
          if (10 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
            _free(unaff_EBX);
          }
          (**(code **)(*this + 0x84))();
          fVar10 = (float10)(**(code **)(*this + 0x14))();
          if ((float10)40.0 <= fVar10 + (float10)8.0) {
            pcVar6 = (char *)(float)(fVar10 + (float10)8.0);
          }
          else {
            pcVar6 = (char *)0x42200000;
          }
          (**(code **)(*this + 0x5c))();
          (**(code **)(*this + 100))();
          cStack_115 = (char)((uint)piVar8 >> 0x18);
          if (cStack_115 != '\0') {
            this_00 = operator_new(0x360);
            if (this_00 == (void *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              uVar13 = 0x20;
              pcVar6 = _malloc(0x20);
              _strncpy(pcVar6,"ui/achievewin_div.dds",0x15);
              pcVar6[0x15] = '\0';
              piVar7 = (int *)((uint)piVar7 | 1);
              uStack_68 = CONCAT31(uStack_68._1_3_,8);
              piVar9 = FUN_0069d820(this_00,(undefined4 *)&stack0xffffff08,0,0,0x3f800000,0x3f800000
                                   );
            }
            uStack_68 = 2;
            if ((((uint)piVar7 & 1) != 0) && (0x14 < uVar13)) {
                    /* WARNING: Subroutine does not return */
              _free(pcVar6);
            }
            iVar12 = *piVar9;
            (**(code **)(*piVar8 + 0x10))();
            (**(code **)(iVar12 + 0x74))();
            (**(code **)(*piVar9 + 0x5c))(1);
            (**(code **)(*piVar9 + 100))(1,piVar8,1);
            (**(code **)(*piVar8 + 0xc))(piVar9,1);
            puVar4 = uStack_d8;
          }
          (**(code **)(*piVar8 + 0xc))();
          (**(code **)(*piVar8 + 0xc))();
          uStack_d8 = (undefined4 *)CONCAT13(uStack_d8._3_1_ == '\0',(undefined3)uStack_d8);
          param_1 = iStack_20;
        }
        puVar4 = puVar4 + 0x11;
        local_98[0] = puVar4;
      } while (puVar4 != *(undefined4 **)(param_1 + 300));
    }
    if (cStack_1c != '\0') {
      puVar4 = operator_new(0x3fc);
      uStack_28 = 10;
      if (puVar4 == (undefined4 *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = FUN_00833290(puVar4);
      }
      uStack_28 = 2;
      FUN_00830550(piVar9,8,&stack0xffffff30);
      (**(code **)(*piVar9 + 100))();
      iVar12 = *piVar9;
      (**(code **)(*piVar8 + 0x10))();
      (**(code **)(iVar12 + 0x78))();
      fVar10 = (float10)(**(code **)(*piVar8 + 0x10))();
      piVar9[0xd5] = (int)(float)fVar10;
      *(undefined1 *)(piVar9 + 0xd6) = 1;
      FUN_0073e590(piVar9,piVar8);
      _Dest = (wchar_t *)&stack0xffffff44;
      uVar13 = FUN_00ace02d(L"SITT_TUTORIAL_POPBUBBLE");
      if (9 < uVar13) {
        _Dest = _malloc((uVar13 + 0x20 >> 5) * 0x40);
      }
      _wcsncpy(_Dest,L"SITT_TUTORIAL_POPBUBBLE",uVar13);
      _Dest[uVar13] = L'\0';
      ppuStack_a4 = local_98;
      local_98[0] = (undefined4 *)((uint)local_98[0] & 0xffff0000);
      local_a0 = (undefined4 *)0x0;
      puStack_9c = (undefined4 *)0xa;
      puVar4 = (undefined4 *)FUN_00ace02d((short *)&DAT_00d2cfb4);
      if (puStack_9c <= puVar4) {
        if ((undefined4 *)0xa < puStack_9c) {
                    /* WARNING: Subroutine does not return */
          _free(ppuStack_a4);
        }
        puStack_9c = (undefined4 *)(((uint)(puVar4 + 8) >> 5) << 5);
        ppuStack_a4 = _malloc(((uint)(puVar4 + 8) >> 5) * 0x40);
      }
      _wcsncpy((wchar_t *)ppuStack_a4,L"x8",(size_t)puVar4);
      *(undefined2 *)((int)ppuStack_a4 + (int)puVar4 * 2) = 0;
      uStack_38 = 0xc;
      local_a0 = puVar4;
      FUN_00831790(&puStack_60,&ppuStack_a4,(undefined4 *)&stack0xffffff38);
      uStack_38 = 0xd;
      (**(code **)(*piVar9 + 0x54))();
      if (10 < uStack_5c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_64);
      }
      if ((undefined4 *)0xa < local_a0) {
                    /* WARNING: Subroutine does not return */
        _free(ppuStack_a8);
      }
      uStack_3c = 2;
      if (10 < uVar13) {
                    /* WARNING: Subroutine does not return */
        _free(this_01);
      }
      (**(code **)(*piVar9 + 0x8c))();
      (**(code **)(*piVar8 + 0xc))();
    }
    (**(code **)(*piVar8 + 0x84))();
    do {
      cVar1 = (**(code **)(*piVar8 + 0x50))();
    } while (cVar1 != '\0');
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_4c);
    }
  }
  ExceptionList = local_c;
  return piVar8;
}


//// FUNCTION FUN_005eb3b0 @ 005eb3b0 ////

void __thiscall FUN_005eb3b0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xb4) = param_1;
  return;
}


//// FUNCTION FUN_005eb400 @ 005eb400 ////

void __thiscall FUN_005eb400(void *this,int *param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x10));
  *(undefined4 *)((int)this + 0x9c) = local_8;
  *(undefined4 *)((int)this + 0xa0) = local_4;
  FUN_009840b0(&local_8,(undefined4 *)(*param_1 + 0x1c));
  *(undefined4 *)((int)this + 0xa4) = local_8;
  *(undefined4 *)((int)this + 0xa8) = local_4;
  FUN_009840b0(&local_10,(undefined4 *)(*param_1 + 0x10));
  (**(code **)(*(int *)this + 0x20))(&local_10);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x10) = unaff_ESI;
  *(undefined4 *)(iVar1 + 0x14) = local_10;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  FUN_009840b0(&uStack_c,(undefined4 *)(*param_1 + 0x1c));
  local_10 = local_8;
  (**(code **)(*(int *)this + 0x20))(&stack0xffffffec);
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x1c) = unaff_EDI;
  *(undefined4 *)(iVar1 + 0x20) = uStack_c;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return;
}


//// FUNCTION FUN_005eb520 @ 005eb520 ////

void __fastcall FUN_005eb520(int param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  piVar1 = *(int **)(param_1 + 0xf4);
  if ((piVar1 != (int *)0x0) && (*(int **)(param_1 + 0xdc) != (int *)0x0)) {
    fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0xdc) + 0x14))();
    fVar3 = (float10)(**(code **)(*piVar1 + 0x14))();
    piVar1 = *(int **)(param_1 + 0xf4);
    *(float *)(param_1 + 0xac) = (float)((float10)(float)fVar2 / fVar3);
    fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0xdc) + 0x10))();
    fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
    *(float *)(param_1 + 0xb0) = (float)((float10)(float)fVar2 / fVar3);
    if ((float10)(float)fVar2 / fVar3 < (float10)1.0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
    }
  }
  return;
}


//// FUNCTION FUN_005eb5a0 @ 005eb5a0 ////

void __fastcall FUN_005eb5a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  
  piVar1 = *(int **)(param_1 + 0xf4);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) {
    fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
    piVar2 = *(int **)(param_1 + 0xf4);
    *(float *)(param_1 + 0x94) =
         (float)(fVar3 * (float10)0.5 + (float10)(float)piVar1[0x30] +
                (float10)*(float *)(param_1 + 0xb4));
    fVar3 = (float10)(**(code **)(*piVar2 + 0x14))();
    *(float *)(param_1 + 0x98) = (float)(fVar3 * (float10)0.5 + (float10)(float)piVar2[0x27]);
  }
  return;
}


//// FUNCTION FUN_005eb600 @ 005eb600 ////

void __thiscall FUN_005eb600(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_005eb520((int)this);
  fVar1 = *(float *)((int)this + 0xac);
  fVar2 = *(float *)((int)this + 0xb0);
  fVar3 = *param_1;
  fVar4 = *(float *)((int)this + 0x94);
  fVar5 = param_1[1];
  fVar6 = *(float *)((int)this + 0x98);
  *param_1 = *(float *)((int)this + 0x94);
  param_1[1] = *(float *)((int)this + 0x98);
  *param_1 = (fVar3 - fVar4) * fVar2 + *param_1;
  param_1[1] = (fVar5 - fVar6) * fVar1 + param_1[1];
  return;
}


//// FUNCTION FUN_005eb660 @ 005eb660 ////

void __thiscall FUN_005eb660(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_005eb520((int)this);
  fVar1 = *(float *)((int)this + 0xac);
  fVar2 = *(float *)((int)this + 0xb0);
  fVar3 = *param_1;
  fVar4 = *(float *)((int)this + 0x94);
  fVar5 = param_1[1];
  fVar6 = *(float *)((int)this + 0x98);
  *param_1 = *(float *)((int)this + 0x94);
  param_1[1] = *(float *)((int)this + 0x98);
  *param_1 = (fVar3 - fVar4) * (1.0 / fVar2) + *param_1;
  param_1[1] = (fVar5 - fVar6) * (1.0 / fVar1) + param_1[1];
  return;
}


//// FUNCTION FUN_005eb6d0 @ 005eb6d0 ////

void __thiscall FUN_005eb6d0(void *this,int param_1)

{
  FUN_005eb520((int)this);
  (**(code **)(*(int *)this + 0x20))(param_1 + 8);
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * *(float *)((int)this + 0xac);
  *(float *)(param_1 + 0x18) = *(float *)((int)this + 0xac) * *(float *)(param_1 + 0x18);
  if (*(char *)(*(int *)(param_1 + 0x10) + 8) != '\0') {
    (**(code **)(*(int *)this + 0x20))(&DAT_0105cb50);
    (**(code **)(*(int *)this + 0x20))(&DAT_0105cb58);
  }
  return;
}


//// FUNCTION FUN_005eb730 @ 005eb730 ////

void __thiscall FUN_005eb730(void *this,float *param_1)

{
  float fVar1;
  
  FUN_005eb520((int)this);
  fVar1 = 1.0 / *(float *)((int)this + 0xac);
  *param_1 = *param_1 * fVar1;
  param_1[1] = fVar1 * param_1[1];
  return;
}


//// FUNCTION FUN_005eb780 @ 005eb780 ////

undefined4 * __thiscall FUN_005eb780(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb8e74;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00746480(this);
  *(undefined ***)this = &PTR_FUN_00d2d088;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  piVar1 = (int *)((int)this + 0xcc);
  *(undefined4 *)((int)this + 0xd4) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 **)((int)this + 0xd4) = (undefined4 *)((int)this + 200);
  *(undefined4 *)((int)this + 200) = &PTR_FUN_00d18c2c;
  *(int *)((int)this + 0xdc) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0xd0) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0xe4);
  *(undefined4 *)((int)this + 0xec) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 **)((int)this + 0xec) = (undefined4 *)((int)this + 0xe0);
  *(undefined4 *)((int)this + 0xe0) = &PTR_FUN_00d18c2c;
  *(int *)((int)this + 0xf4) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0xe8) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = *(int **)((int)this + 0xf4);
  local_4 = 2;
  if ((piVar1 != (int *)0x0) && (*(int **)((int)this + 0xdc) != (int *)0x0)) {
    fVar3 = (float10)(**(code **)(**(int **)((int)this + 0xdc) + 0x14))();
    fVar4 = (float10)(**(code **)(*piVar1 + 0x14))();
    piVar1 = *(int **)((int)this + 0xf4);
    *(float *)((int)this + 0xac) = (float)((float10)(float)fVar3 / fVar4);
    fVar3 = (float10)(**(code **)(**(int **)((int)this + 0xdc) + 0x10))();
    fVar4 = (float10)(**(code **)(*piVar1 + 0x10))();
    *(float *)((int)this + 0xb0) = (float)((float10)(float)fVar3 / fVar4);
    if ((float10)(float)fVar3 / fVar4 < (float10)1.0) {
      *(undefined4 *)((int)this + 0xb0) = 0x3f800000;
    }
    piVar1 = *(int **)((int)this + 0xf4);
    fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
    piVar2 = *(int **)((int)this + 0xf4);
    *(float *)((int)this + 0x94) = (float)(fVar3 * (float10)0.5 + (float10)(float)piVar1[0x30]);
    fVar3 = (float10)(**(code **)(*piVar2 + 0x14))();
    *(float *)((int)this + 0x98) = (float)(fVar3 * (float10)0.5 + (float10)(float)piVar2[0x27]);
  }
  FUN_004015d0((void *)((int)this + 0x60),"CScaleToWindow",0xe);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_005eb920 @ 005eb920 ////

void __fastcall FUN_005eb920(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2d088;
  param_1[0x38] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x3a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3a] = param_1[0x39];
  }
  if (param_1[0x39] != 0) {
    *(undefined4 *)(param_1[0x39] + 4) = param_1[0x3a];
  }
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  if ((undefined4 *)param_1[0x3a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3a] = param_1[0x39];
  }
  if (param_1[0x39] != 0) {
    *(undefined4 *)(param_1[0x39] + 4) = param_1[0x3a];
  }
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x32] = &PTR_FUN_00d18c2c;
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
  FUN_00746640(param_1);
  return;
}


//// FUNCTION FUN_005eba20 @ 005eba20 ////

undefined4 * __thiscall FUN_005eba20(void *this,byte param_1)

{
  FUN_005eb920(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005eba70 @ 005eba70 ////

void FUN_005eba70(void)

{
  return;
}


//// FUNCTION FUN_005eba80 @ 005eba80 ////

void FUN_005eba80(void)

{
  return;
}


//// FUNCTION FUN_005eba90 @ 005eba90 ////

undefined4 __cdecl FUN_005eba90(float param_1)

{
  if ((param_1 <= 0.0) || (param_1 < 1.0)) {
    if ((param_1 <= 0.0) || (param_1 < 0.1)) {
      return 0;
    }
    if (param_1 < 0.3) {
      return 1;
    }
    if (param_1 < 0.6 != (param_1 == 0.6)) {
      return 2;
    }
    if (param_1 < 0.7) {
      return 3;
    }
    if (param_1 < 0.8) {
      return 4;
    }
    if (param_1 < 0.9) {
      return 5;
    }
  }
  return 6;
}


//// FUNCTION FUN_005ebb70 @ 005ebb70 ////

int * __thiscall FUN_005ebb70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005ebbb0 @ 005ebbb0 ////

int * __thiscall FUN_005ebbb0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005ebbd0 @ 005ebbd0 ////

int * __thiscall FUN_005ebbd0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005ebc10 @ 005ebc10 ////

int * __thiscall FUN_005ebc10(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005ebca0 @ 005ebca0 ////

void __cdecl FUN_005ebca0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x29);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x29);
  }
  return;
}


//// FUNCTION FUN_005ebcc0 @ 005ebcc0 ////

void __cdecl FUN_005ebcc0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x29);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return;
}


//// FUNCTION FUN_005ebd00 @ 005ebd00 ////

void __thiscall FUN_005ebd00(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x29) == '\0') {
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


//// FUNCTION FUN_005ebe20 @ 005ebe20 ////

void __fastcall FUN_005ebe20(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x29);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x29);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_005ebeb0 @ 005ebeb0 ////

void __fastcall FUN_005ebeb0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x29) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x29);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x29);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x29) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x29) == '\0');
    if (*(char *)((int)piVar4 + 0x29) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_005ec250 @ 005ec250 ////

void __fastcall FUN_005ec250(int param_1)

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


//// FUNCTION FUN_005ec280 @ 005ec280 ////

void __fastcall FUN_005ec280(int param_1)

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


//// FUNCTION FUN_005ec360 @ 005ec360 ////

void __thiscall FUN_005ec360(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x29) == '\0') {
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


//// FUNCTION FUN_005ec440 @ 005ec440 ////

int * __fastcall FUN_005ec440(int *param_1)

{
  FUN_005ebe20(param_1);
  return param_1;
}


//// FUNCTION FUN_005ec460 @ 005ec460 ////

int * __fastcall FUN_005ec460(int *param_1)

{
  FUN_005ebeb0(param_1);
  return param_1;
}


//// FUNCTION FUN_005ec4c0 @ 005ec4c0 ////

void __thiscall FUN_005ec4c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  size_t sVar6;
  float10 fVar7;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  wchar_t *local_4c;
  size_t local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8e90;
  local_c = ExceptionList;
  if ((((*(int *)((int)this + 0x554) != 0) && (*(int *)((int)this + 0x50c) != 0)) &&
      (*(int *)((int)this + 0x578) != 0)) && (*(int *)((int)this + 0x590) != 0)) {
    local_4c = local_40;
    local_40[0] = L'\0';
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    if (*(int *)(*(int *)((int)this + 0x578) + 0x4a0) ==
        *(int *)(*(int *)((int)this + 0x590) + 0x4a0)) {
      ppuVar4 = &PTR_DAT_00e55440 + param_1 * 8;
    }
    else {
      ppuVar4 = &PTR_DAT_00e55360 + param_1 * 8;
    }
    ExceptionList = &local_c;
    puVar5 = FUN_009b5030(local_2c,ppuVar4);
    FUN_00403e70(&local_4c,puVar5);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 10;
    local_4 = CONCAT31(local_4._1_3_,1);
    sVar6 = FUN_00ace02d(L"<x2><nobr>");
    FUN_0040cae0(&local_6c,L"<x2><nobr>",sVar6);
    FUN_0040cae0(&local_6c,local_4c,local_48);
    sVar6 = FUN_00ace02d(L"</nobr></x2>");
    FUN_0040cae0(&local_6c,L"</nobr></x2>",sVar6);
    (**(code **)(**(int **)((int)this + 0x554) + 0x54))(&local_6c);
    (**(code **)(**(int **)((int)this + 0x554) + 0x84))(0);
    (**(code **)(**(int **)((int)this + 0x554) + 0x68))(1,*(undefined4 *)((int)this + 0x50c),0);
    piVar1 = *(int **)((int)this + 0x50c);
    piVar2 = *(int **)((int)this + 0x554);
    iVar3 = *piVar2;
    fVar7 = (float10)(**(code **)(*piVar1 + 0x10))();
    fStack_10 = (float)fVar7;
    fVar7 = (float10)(**(code **)(*piVar2 + 0x10))();
    (**(code **)(iVar3 + 0x5c))(1,piVar1,(float)(((float10)fStack_10 - fVar7) * (float10)0.5));
    (**(code **)(**(int **)((int)this + 0x554) + 0x50))(1);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ec730 @ 005ec730 ////

void __fastcall FUN_005ec730(int param_1)

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


//// FUNCTION FUN_005ec750 @ 005ec750 ////

void __fastcall FUN_005ec750(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2d100;
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


//// FUNCTION FUN_005ec7a0 @ 005ec7a0 ////

void __fastcall FUN_005ec7a0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d2d110;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_005ec7d0 @ 005ec7d0 ////

void __fastcall FUN_005ec7d0(int param_1)

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


//// FUNCTION FUN_005ec7f0 @ 005ec7f0 ////

void __fastcall FUN_005ec7f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2d110;
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


//// FUNCTION FUN_005ec8c0 @ 005ec8c0 ////

void __fastcall FUN_005ec8c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2d120;
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


//// FUNCTION FUN_005ec910 @ 005ec910 ////

int * __fastcall FUN_005ec910(int *param_1)

{
  FUN_005ebe20(param_1);
  return param_1;
}


//// FUNCTION FUN_005ec960 @ 005ec960 ////

int * __fastcall FUN_005ec960(int *param_1)

{
  FUN_005ebeb0(param_1);
  return param_1;
}


//// FUNCTION FUN_005ec970 @ 005ec970 ////

void FUN_005ec970(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 10) = 1;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  return;
}


//// FUNCTION FUN_005ecc00 @ 005ecc00 ////

void __thiscall FUN_005ecc00(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_005ecc70 @ 005ecc70 ////

void __fastcall FUN_005ecc70(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00d2d120;
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


//// FUNCTION FUN_005eccc0 @ 005eccc0 ////

void __thiscall FUN_005eccc0(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = *param_1;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = &PTR_LAB_00d2d120;
  iVar3 = *(int *)(param_2 + 0x14);
  *(int *)((int)this + 0x18) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0xc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_005ecd20 @ 005ecd20 ////

void __fastcall FUN_005ecd20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ec970();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_005ecd60 @ 005ecd60 ////

void __thiscall
FUN_005ecd60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  piVar1 = (int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 **)((int)this + 0x1c) = (undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = &PTR_LAB_00d2d120;
  iVar3 = param_4[6];
  *(int *)((int)this + 0x24) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x18) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x28) = param_5;
  *(undefined1 *)((int)this + 0x29) = 0;
  return;
}


//// FUNCTION FUN_005ecdd0 @ 005ecdd0 ////

void __fastcall FUN_005ecdd0(int param_1)

{
  FUN_005ecc70(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_005ecde0 @ 005ecde0 ////

int __fastcall FUN_005ecde0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ec970();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005ece10 @ 005ece10 ////

void * FUN_005ece10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_005ecd60(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_005ece50 @ 005ece50 ////

void * __thiscall FUN_005ece50(void *this,byte param_1)

{
  FUN_005ecdd0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ece90 @ 005ece90 ////

void FUN_005ece90(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_005ece90(*(void **)((int)param_1 + 8));
    FUN_005ecdd0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_005eced0 @ 005eced0 ////

void __thiscall FUN_005eced0(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
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
  puStack_8 = &LAB_00cb8ec8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x29) != '\0') {
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
  FUN_005ebe20((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x29) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x29) == '\0') {
          piVar5[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar5;
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
      iVar1 = param_2[10];
      *(char *)(param_2 + 10) = (char)_Memory[10];
      *(char *)(_Memory + 10) = (char)iVar1;
      goto LAB_005ed03b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
    piVar5[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar5;
  }
  else if ((int *)*piVar6 == _Memory) {
    *piVar6 = (int)piVar5;
  }
  else {
    piVar6[2] = (int)piVar5;
  }
  piVar4 = *(int **)((int)this + 4);
  if ((int *)*piVar4 == _Memory) {
    piVar2 = piVar6;
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      piVar2 = (int *)FUN_005ebcc0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_005ebca0((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_005ed03b:
  if ((char)_Memory[10] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[10] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_005ec360(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_005ebd00(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_005ec360(this,(int)piVar6);
              break;
            }
LAB_005ed108:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_005ebd00(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_005ed108;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_005ec360(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_005ebd00(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 10) = 1;
  }
  _Memory[4] = (int)&PTR_LAB_00d2d120;
  if ((int *)_Memory[6] != (int *)0x0) {
    *(int *)_Memory[6] = _Memory[5];
  }
  if (_Memory[5] != 0) {
    *(int *)(_Memory[5] + 4) = _Memory[6];
  }
  _Memory[5] = 0;
  _Memory[6] = 0;
  _Memory[9] = 0;
  if ((int *)_Memory[6] != (int *)0x0) {
    *(int *)_Memory[6] = _Memory[5];
  }
  if (_Memory[5] != 0) {
    *(int *)(_Memory[5] + 4) = _Memory[6];
  }
  _Memory[5] = 0;
  _Memory[6] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_005ed1e0 @ 005ed1e0 ////

void __thiscall
FUN_005ed1e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cb8ee8;
  local_c = ExceptionList;
  if (0x9249247 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_005ece10(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x28);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x28) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[10] == '\0') {
LAB_005ed2db:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_005ec360(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_005ebd00(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_005ed2db;
      if (piVar6 == (int *)*piVar2) {
        FUN_005ebd00(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_005ec360(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION FUN_005ed390 @ 005ed390 ////

void __fastcall FUN_005ed390(int param_1)

{
  FUN_005ece90(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_005ed3c0 @ 005ed3c0 ////

void __fastcall FUN_005ed3c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8f6a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2d134;
  puVar2 = (undefined4 *)param_1[0x14f];
  local_4 = 7;
  local_10 = param_1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x14a] + 4))();
    param_1[0x14f] = 0;
    (**(code **)param_1[0x14a])();
  }
  FUN_005ecc00(&DAT_0104d830,&local_14,param_1 + 0x166);
  if ((local_14 != DAT_0104d834) && ((undefined4 *)local_14[9] == param_1)) {
    FUN_005eced0(&DAT_0104d830,&local_14,local_14);
  }
  param_1[0x15f] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x161] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x161] = param_1[0x160];
  }
  if (param_1[0x160] != 0) {
    *(undefined4 *)(param_1[0x160] + 4) = param_1[0x161];
  }
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x164] = 0;
  if ((undefined4 *)param_1[0x161] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x161] = param_1[0x160];
  }
  if (param_1[0x160] != 0) {
    *(undefined4 *)(param_1[0x160] + 4) = param_1[0x161];
  }
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x159] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x15b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15b] = param_1[0x15a];
  }
  if (param_1[0x15a] != 0) {
    *(undefined4 *)(param_1[0x15a] + 4) = param_1[0x15b];
  }
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15e] = 0;
  if ((undefined4 *)param_1[0x15b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15b] = param_1[0x15a];
  }
  if (param_1[0x15a] != 0) {
    *(undefined4 *)(param_1[0x15a] + 4) = param_1[0x15b];
  }
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x150] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x152] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x152] = param_1[0x151];
  }
  if (param_1[0x151] != 0) {
    *(undefined4 *)(param_1[0x151] + 4) = param_1[0x152];
  }
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x155] = 0;
  if ((undefined4 *)param_1[0x152] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x152] = param_1[0x151];
  }
  if (param_1[0x151] != 0) {
    *(undefined4 *)(param_1[0x151] + 4) = param_1[0x152];
  }
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x14a] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x14c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14c] = param_1[0x14b];
  }
  if (param_1[0x14b] != 0) {
    *(undefined4 *)(param_1[0x14b] + 4) = param_1[0x14c];
  }
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14f] = 0;
  if ((undefined4 *)param_1[0x14c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14c] = param_1[0x14b];
  }
  if (param_1[0x14b] != 0) {
    *(undefined4 *)(param_1[0x14b] + 4) = param_1[0x14c];
  }
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x144] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x146] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x146] = param_1[0x145];
  }
  if (param_1[0x145] != 0) {
    *(undefined4 *)(param_1[0x145] + 4) = param_1[0x146];
  }
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x149] = 0;
  if ((undefined4 *)param_1[0x146] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x146] = param_1[0x145];
  }
  if (param_1[0x145] != 0) {
    *(undefined4 *)(param_1[0x145] + 4) = param_1[0x146];
  }
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x13e] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x140] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x140] = param_1[0x13f];
  }
  if (param_1[0x13f] != 0) {
    *(undefined4 *)(param_1[0x13f] + 4) = param_1[0x140];
  }
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x143] = 0;
  if ((undefined4 *)param_1[0x140] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x140] = param_1[0x13f];
  }
  if (param_1[0x13f] != 0) {
    *(undefined4 *)(param_1[0x13f] + 4) = param_1[0x140];
  }
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x138] = &PTR_FUN_00d165fc;
  if ((undefined4 *)param_1[0x13a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13a] = param_1[0x139];
  }
  if (param_1[0x139] != 0) {
    *(undefined4 *)(param_1[0x139] + 4) = param_1[0x13a];
  }
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13d] = 0;
  if ((undefined4 *)param_1[0x13a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13a] = param_1[0x139];
  }
  if (param_1[0x139] != 0) {
    *(undefined4 *)(param_1[0x139] + 4) = param_1[0x13a];
  }
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  local_4 = 0xffffffff;
  FUN_008dbeb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005ed790 @ 005ed790 ////

void __thiscall FUN_005ed790(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x29) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x29) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_005ed1e0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_005ebeb0((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_005ed1e0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005ed850 @ 005ed850 ////

void __thiscall FUN_005ed850(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_005ece90((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x29) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x29);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x29);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x29);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x29);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_005eced0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_005ed910 @ 005ed910 ////

undefined4 * __thiscall FUN_005ed910(void *this,byte param_1)

{
  FUN_005ed3c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ed930 @ 005ed930 ////

undefined4 * __thiscall FUN_005ed930(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_005ed1e0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_005ed1e0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_005ed1e0(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_005ebeb0((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x29) != '\0') {
          FUN_005ed1e0(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_005ed1e0(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_005ebe20((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x29) != '\0') {
          FUN_005ed1e0(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_005ed1e0(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_005ed790(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_005edad0 @ 005edad0 ////

uint * __thiscall FUN_005edad0(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined **local_40;
  int local_3c;
  int *local_38;
  undefined ***local_34;
  undefined4 local_2c;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb8f90;
  local_c = ExceptionList;
  puVar4 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x29) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x29) == '\0');
  }
  if ((puVar4 == *(uint **)((int)this + 4)) || (*param_1 < puVar4[3])) {
    local_34 = &local_40;
    local_3c = 0;
    local_38 = (int *)0x0;
    local_40 = &PTR_LAB_00d2d120;
    local_2c = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar2 = (uint *)FUN_005eccc0(local_28,param_1,(int)local_34);
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_005ed930(this,&param_1,puVar4,puVar2);
    puVar4 = (uint *)*puVar3;
    FUN_005ecc70((int)local_28);
    if (local_38 != (int *)0x0) {
      *local_38 = local_3c;
    }
    if (local_3c != 0) {
      *(int **)(local_3c + 4) = local_38;
    }
  }
  ExceptionList = local_c;
  return puVar4 + 4;
}


//// FUNCTION FUN_005edbd0 @ 005edbd0 ////

void __fastcall FUN_005edbd0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_005ed850(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_005edc00 @ 005edc00 ////

undefined4 * __thiscall FUN_005edc00(void *this,uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  float10 fVar8;
  ulonglong uVar9;
  undefined4 uStack_ac;
  void *pvStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  int *piStack_88;
  float fStack_84;
  float fVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puStack_40;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cb904c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008dbe40(this);
  piVar11 = (int *)((int)this + 0x4e0);
  *(undefined ***)this = &PTR_FUN_00d2d134;
  piVar4 = (int *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *piVar4 = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(int **)((int)this + 0x4ec) = piVar11;
  *piVar11 = (int)&PTR_FUN_00d165fc;
  *(int *)((int)this + 0x4f4) = param_3;
  iVar3 = 0;
  if (param_3 != 0) {
    piVar11 = (int *)(param_3 + 0x18);
    *(int **)((int)this + 0x4e8) = piVar11;
    *piVar4 = *piVar11;
    iVar3 = *piVar11;
    *(int **)(iVar3 + 4) = piVar4;
    *piVar11 = (int)piVar4;
  }
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 **)((int)this + 0x504) = (undefined4 *)((int)this + 0x4f8);
  *(undefined4 *)((int)this + 0x4f8) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined4 *)((int)this + 0x51c) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined4 **)((int)this + 0x51c) = (undefined4 *)((int)this + 0x510);
  *(undefined4 *)((int)this + 0x510) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined4 *)((int)this + 0x534) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0;
  *(undefined4 *)((int)this + 0x530) = 0;
  *(undefined4 **)((int)this + 0x534) = (undefined4 *)((int)this + 0x528);
  *(undefined4 *)((int)this + 0x528) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x54c) = 0;
  *(undefined4 *)((int)this + 0x544) = 0;
  *(undefined4 *)((int)this + 0x548) = 0;
  *(undefined4 **)((int)this + 0x54c) = (undefined4 *)((int)this + 0x540);
  *(undefined4 *)((int)this + 0x540) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x554) = 0;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x558) = DAT_00e5535c;
  uVar9 = FUN_00990ae0(piVar11,iVar3);
  piVar4 = (int *)((int)this + 0x564);
  *(int *)((int)this + 0x55c) = (int)uVar9;
  *(undefined4 *)((int)this + 0x560) = 0x3f800000;
  *(undefined4 *)((int)this + 0x570) = 0;
  *(undefined4 *)((int)this + 0x568) = 0;
  *(undefined4 *)((int)this + 0x56c) = 0;
  *(int **)((int)this + 0x570) = piVar4;
  *piVar4 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x578) = 0;
  piVar11 = (int *)((int)this + 0x57c);
  *(undefined4 *)((int)this + 0x588) = 0;
  *(undefined4 *)((int)this + 0x580) = 0;
  *(undefined4 *)((int)this + 0x584) = 0;
  *(int **)((int)this + 0x588) = piVar11;
  *piVar11 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x590) = 0;
  *(undefined4 *)((int)this + 0x594) = param_2;
  local_4._0_1_ = 7;
  *(uint **)((int)this + 0x598) = param_1;
  *(undefined1 *)((int)this + 0x59c) = 0;
  *(undefined1 *)((int)this + 0x59d) = 0;
  *(undefined4 *)((int)this + 0x5a0) = 0x3f000000;
  param_1 = FUN_005edad0(&DAT_0104d830,(uint *)&param_1);
  (**(code **)(*param_1 + 4))();
  param_1[5] = (uint)this;
  (**(code **)*param_1)();
  iVar3 = FUN_00404810(*(void **)((int)this + 0x4f4),0);
  param_1 = *(uint **)(iVar3 + 300);
  (**(code **)(*piVar4 + 4))();
  *(uint **)((int)this + 0x578) = param_1;
  (**(code **)*piVar4)();
  iVar3 = FUN_00404810(*(void **)((int)this + 0x4f4),1);
  uVar1 = *(undefined4 *)(iVar3 + 300);
  (**(code **)(*piVar11 + 4))();
  *(undefined4 *)((int)this + 0x590) = uVar1;
  (**(code **)*piVar11)();
  param_1 = operator_new(0x344);
  local_4._0_1_ = 8;
  if (param_1 == (uint *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(param_1);
  }
  local_4 = (undefined4 *)CONCAT31(local_4._1_3_,7);
  (**(code **)(*piVar4 + 0x74))();
  piVar4[0x45] = piVar4[0x45] & 0xfffffffd;
  piVar4[0x12] = piVar4[0x12] + 1;
  puVar7 = *(undefined4 **)((int)this + 0x4bc);
  if (puVar7 != (undefined4 *)0x0) {
    piVar11 = puVar7 + 0x12;
    *piVar11 = *piVar11 + -1;
    if (*piVar11 == 0) {
      (**(code **)*puVar7)();
    }
  }
  *(int **)((int)this + 0x4bc) = piVar4;
  FUN_008d55e0(this,0);
  FUN_008d56d0(this,0);
  FUN_008dc2d0(this,(int *)&stack0xffffffe0);
  local_4 = operator_new(0x344);
  pvStack_c._0_1_ = 9;
  if (local_4 == (undefined4 *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = FUN_007432f0(local_4);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,7);
  param_1 = puVar5;
  (**(code **)(*puVar5 + 0x74))();
  (**(code **)(*puVar5 + 0x5c))();
  (**(code **)(*puVar5 + 100))();
  pvVar6 = operator_new(0x4dc);
  if (pvVar6 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_007ac880(pvVar6,1,0,1,0);
  }
  (**(code **)(*(int *)((int)this + 0x4f8) + 4))();
  *(undefined4 **)((int)this + 0x50c) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x4f8))();
  piVar11 = *(int **)((int)this + 0x50c);
  iVar3 = *piVar11;
  (**(code **)(*piVar4 + 0x10))();
  (**(code **)(*piVar11 + 0x10))();
  piVar11 = (int *)0x1;
  (**(code **)(iVar3 + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x50c) + 100))();
  (**(code **)(**(int **)((int)this + 0x50c) + 0x50))();
  puVar7 = operator_new(0x3fc);
  if (puVar7 == (undefined4 *)0x0) {
    puStack_40 = (undefined4 *)0x0;
  }
  else {
    puStack_40 = FUN_00833290(puVar7);
  }
  (**(code **)(*(int *)((int)this + 0x540) + 4))();
  *(undefined4 **)((int)this + 0x554) = puStack_40;
  (*(code *)**(undefined4 **)((int)this + 0x540))();
  FUN_005ec4c0(this,*(int *)((int)this + 0x594));
  pvVar6 = operator_new(0x360);
  if (pvVar6 == (void *)0x0) {
    puStack_40 = (undefined4 *)0x0;
  }
  else {
    fStack_84 = 8.712957e-39;
    puStack_40 = FUN_0069d820(pvVar6,&PTR_DAT_00e55520 + *(int *)((int)this + 0x594) * 8,0,0,
                              0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)((int)this + 0x510) + 4))();
  *(undefined4 **)((int)this + 0x524) = puStack_40;
  (*(code *)**(undefined4 **)((int)this + 0x510))();
  (**(code **)(**(int **)((int)this + 0x524) + 0x74))();
  fStack_84 = 8.713085e-39;
  (**(code **)(**(int **)((int)this + 0x524) + 0x68))();
  piVar2 = *(int **)((int)this + 0x524);
  piVar12 = *(int **)((int)this + 0x50c);
  iVar3 = *piVar2;
  fStack_84 = 8.713123e-39;
  fVar8 = (float10)(**(code **)(*piVar12 + 0x10))();
  fVar10 = (float)fVar8;
  fStack_84 = 8.713141e-39;
  piStack_88 = piVar12;
  fVar8 = (float10)(**(code **)(*piVar2 + 0x10))();
  fStack_84 = (float)(((float10)fVar10 - fVar8) * (float10)0.5);
  uStack_8c = 1;
  puStack_90 = (undefined1 *)0x5ee0cd;
  (**(code **)(iVar3 + 0x5c))();
  puStack_90 = (undefined1 *)0x1;
  uStack_94 = 0x5ee0da;
  (**(code **)(**(int **)((int)this + 0x524) + 0x50))();
  piVar11[0x45] = piVar11[0x45] & 0xfffffffd;
  uStack_98 = *(undefined4 *)((int)this + 0x524);
  uStack_94 = 1;
  uStack_9c = 0x5ee0f6;
  (**(code **)(*piVar11 + 0xc))();
  uStack_9c = 1;
  uStack_a4 = 0x5ee100;
  piStack_a0 = piVar11;
  (**(code **)(*piVar4 + 0xc))();
  pvStack_a8 = *(void **)((int)this + 0x554);
  uStack_a4 = 1;
  uStack_ac = 0x5ee110;
  (**(code **)(*piVar4 + 0xc))();
  uStack_ac = 1;
  (**(code **)(*piVar4 + 0xc))();
  (**(code **)(*piVar4 + 0x84))();
  (**(code **)(*piVar4 + 0x50))();
  piVar11 = piVar4 + 0x12;
  *piVar11 = *piVar11 + -1;
  if (*piVar11 == 0) {
    (**(code **)*piVar4)();
  }
  puVar7 = operator_new(0x10);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = &PTR_LAB_00d2d0c4;
    puVar7[1] = this;
    puVar7[2] = &LAB_005eba40;
    puVar7[3] = 0;
  }
  FUN_008d5670((int)this);
  puStack_90 = operator_new(0x88);
  uStack_98._0_1_ = 0xd;
  if (puStack_90 == (undefined1 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    uStack_ac = 0;
    pvStack_a8 = (void *)0x0;
    puVar7 = FUN_008f9e00(puStack_90,*(int *)((int)this + 0x578),*(int *)((int)this + 0x590),
                          &uStack_ac);
  }
  uStack_98 = CONCAT31(uStack_98._1_3_,7);
  FUN_008dcf70(this,puVar7);
  *(undefined1 *)((int)this + 0x4ac) = 0;
  puVar7 = FUN_0042e9a0(&puStack_90,*(int **)((int)this + 0x578),*(int **)((int)this + 0x590));
  *(undefined4 *)((int)this + 0x5a0) = *puVar7;
  puStack_90 = &stack0xffffff3c;
  (**(code **)(**(int **)((int)this + 0x50c) + 0x10c))();
  ExceptionList = pvStack_a8;
  return this;
}


//// FUNCTION FUN_005ee250 @ 005ee250 ////

void __cdecl FUN_005ee250(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *this;
  undefined4 *puVar8;
  uint *puStack_14;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb906b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00404810(param_1,0);
  if ((iVar1 != 0) && (iVar1 = FUN_00404810(param_1,1), iVar1 != 0)) {
    iVar1 = FUN_00404810(param_1,0);
    piVar2 = (int *)FUN_00ace790(*(int **)(iVar1 + 300),0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
    iVar1 = FUN_00404810(param_1,1);
    piVar3 = (int *)FUN_00ace790(*(int **)(iVar1 + 300),0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
    if ((piVar2 != (int *)0x0) && (piVar3 != (int *)0x0)) {
      puVar4 = (uint *)(**(code **)(*param_1 + 0x80))();
      puStack_14 = puVar4;
      FUN_005ecc00(&DAT_0104d830,&piStack_10,(uint *)&puStack_14);
      if (piStack_10 != DAT_0104d834) {
        if (piStack_10[9] != 0) {
          ExceptionList = local_c;
          return;
        }
        FUN_005eced0(&DAT_0104d830,&piStack_10,piStack_10);
      }
      pfVar5 = (float *)FUN_0042e9a0(&puStack_14,piVar2,piVar3);
      piStack_10 = (int *)*pfVar5;
      uVar6 = FUN_005eba90((float)piStack_10);
      piStack_10 = operator_new(0x5a4);
      uStack_4 = 0;
      if (piStack_10 == (int *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_005edc00(piStack_10,puVar4,uVar6,(int)param_1);
      }
      uStack_4 = 0xffffffff;
      puVar8 = puVar7;
      iVar1 = FUN_0071b2a0();
      this = (void *)FUN_0071b920(iVar1);
      FUN_00640700(this,puVar8);
      piVar2 = puVar7 + 0x12;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar7)(1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ee3d0 @ 005ee3d0 ////

int __fastcall FUN_005ee3d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ec970();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_005ee470 @ 005ee470 ////

void __fastcall FUN_005ee470(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb90a4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2d3fc;
  param_1[0x14] = &PTR_FUN_00d2d3e4;
  puVar2 = (undefined4 *)param_1[0xd1];
  local_4 = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0xd1] = 0;
  }
  if (10 < (uint)param_1[0xdc]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xda]);
  }
  if (10 < (uint)param_1[0xd4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd2]);
  }
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005ee520 @ 005ee520 ////

void __thiscall FUN_005ee520(void *this,int param_1,int param_2)

{
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  FUN_00881c00(*(void **)(*(int *)((int)this + 0x344) + 0x358),(char *)&PTR_LAB_00d2d500,
               100 - param_1);
  FUN_00881c00(*(void **)(*(int *)((int)this + 0x344) + 0x358),"them",100 - param_2);
  return;
}


//// FUNCTION FUN_005ee590 @ 005ee590 ////

void __fastcall FUN_005ee590(int param_1)

{
  int iVar1;
  ulonglong uVar2;
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
  
  iVar1 = *(int *)(param_1 + 0x344);
  if (iVar1 != 0) {
    local_18 = 0x10000;
    local_c = 0x10000;
    local_10 = 0;
    local_14 = 0;
    local_30 = 0x10000;
    local_24 = 0x10000;
    local_28 = 0;
    local_2c = 0;
    local_1c = 0;
    local_20 = 0;
    uVar2 = FUN_00acd42c();
    local_8 = (undefined4)uVar2;
    local_4 = 2000;
    FUN_0087ff20(*(void **)(iVar1 + 0x358),&local_18,&local_30);
    (**(code **)(**(int **)(param_1 + 0x344) + 0xe0))();
  }
  return;
}


//// FUNCTION FUN_005ee620 @ 005ee620 ////

undefined4 * __thiscall FUN_005ee620(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *this_00;
  undefined4 *this_01;
  undefined4 *puVar1;
  int *piVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb90f7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  this_00 = (undefined4 *)((int)this + 0x348);
  *(undefined ***)this = &PTR_FUN_00d2d3fc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d2d3e4;
  *this_00 = (undefined2 *)((int)this + 0x354);
  *(undefined2 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 10;
  this_01 = (undefined4 *)((int)this + 0x368);
  *this_01 = (undefined2 *)((int)this + 0x374);
  *(undefined2 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 10;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar1 = operator_new(0x394);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0089ea20(puVar1);
  }
  *(undefined4 **)((int)this + 0x344) = puVar1;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"fightbar",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4._0_1_ = 4;
  FUN_0089e070(*(void **)((int)this + 0x344),&local_2c,0,0,'\x01');
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_004036d0(this_00,(wchar_t *)*param_1,param_1[1]);
  FUN_004036d0(this_01,(wchar_t *)*param_2,param_2[1]);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$player1",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4._0_1_ = 5;
  FUN_0087f280(*(void **)(*(int *)(*(int *)((int)this + 0x344) + 0x358) + 0x178),&local_2c,this_00,0
               ,0xff000000);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$player2",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4._0_1_ = 6;
  FUN_0087f280(*(void **)(*(int *)(*(int *)((int)this + 0x344) + 0x358) + 0x178),&local_2c,this_01,0
               ,0xff000000);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xc))(this,1);
  ExceptionList = pvStack_14;
  return this;
}


//// FUNCTION FUN_005ee880 @ 005ee880 ////

undefined4 * __thiscall FUN_005ee880(void *this,byte param_1)

{
  FUN_005ee470(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ee8e0 @ 005ee8e0 ////

undefined4 * __fastcall FUN_005ee8e0(undefined4 *param_1)

{
  FUN_00833290(param_1);
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  *param_1 = &PTR_FUN_00d2d554;
  param_1[0x14] = &PTR_FUN_00d2d538;
  param_1[0xd1] = &PTR_FUN_00d2d52c;
  param_1[0x7e] = DAT_0105c400;
  param_1[0x7d] = DAT_0105c404;
  return param_1;
}


//// FUNCTION FUN_005ee930 @ 005ee930 ////

void __fastcall FUN_005ee930(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005ee934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x28))();
  return;
}


//// FUNCTION FUN_005ee940 @ 005ee940 ////

undefined4 * __thiscall FUN_005ee940(void *this,byte param_1)

{
  thunk_FUN_008330d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ee970 @ 005ee970 ////

void __fastcall FUN_005ee970(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x1c) + 4))();
    *(undefined4 *)(param_1 + 0x30) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x1c))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x005ee9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 4))();
    return;
  }
  return;
}


//// FUNCTION FUN_005eea30 @ 005eea30 ////

void __fastcall FUN_005eea30(undefined4 *param_1)

{
  (**(code **)(*(int *)*param_1 + 0x1c))();
  FUN_005ee970((int)param_1);
  return;
}


//// FUNCTION FUN_005eea90 @ 005eea90 ////

undefined4 * __fastcall FUN_005eea90(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = MediaPlayer_Constructor();
  *param_1 = puVar1;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_1 + 1;
  param_1[1] = &PTR_FUN_00d2d110;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_1 + 7;
  param_1[7] = &PTR_FUN_00d195f8;
  param_1[0xc] = 0;
  return param_1;
}


//// FUNCTION FUN_005eead0 @ 005eead0 ////

void __fastcall FUN_005eead0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb9126;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[1] + 4))();
    param_1[6] = 0;
    (**(code **)param_1[1])();
  }
  param_1[7] = (int)&PTR_FUN_00d195f8;
  if ((int *)param_1[9] != (int *)0x0) {
    *(int *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(int *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  if ((int *)param_1[9] != (int *)0x0) {
    *(int *)param_1[9] = param_1[8];
  }
  if (param_1[8] != 0) {
    *(int *)(param_1[8] + 4) = param_1[9];
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = (int)&PTR_FUN_00d2d110;
  if ((int *)param_1[3] != (int *)0x0) {
    *(int *)param_1[3] = param_1[2];
  }
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 4) = param_1[3];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  if ((int *)param_1[3] != (int *)0x0) {
    *(int *)param_1[3] = param_1[2];
  }
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 4) = param_1[3];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005eebd0 @ 005eebd0 ////

void __thiscall FUN_005eebd0(void *this,char *param_1)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  void *this_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  size_t sVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 *puStack_194;
  undefined2 *puStack_190;
  uint uStack_18c;
  undefined4 uStack_188;
  undefined2 auStack_184 [10];
  char *pcStack_170;
  undefined4 uStack_16c;
  uint uStack_168;
  char acStack_164 [20];
  undefined1 *puStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined1 auStack_144 [20];
  void *pvStack_130;
  void *apvStack_12c [2];
  uint uStack_124;
  wchar_t awStack_10c [64];
  wchar_t awStack_8c [62];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb9184;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_0071b2a0();
  fVar9 = (float10)(**(code **)(*piVar3 + 0x10))();
  piVar3 = (int *)FUN_0071b2a0();
  fVar10 = (float10)(**(code **)(*piVar3 + 0x14))();
  if (*(int *)((int)this + 0x18) == 0) {
    this_00 = operator_new(0x360);
    uStack_4 = 0;
    pvStack_130 = this_00;
    if (this_00 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      pcStack_170 = acStack_164;
      acStack_164[0] = '\0';
      uStack_16c = 0;
      uStack_168 = 0x14;
      _strncpy(pcStack_170,"ui/tut_bg.dds",0xd);
      uStack_16c = 0xd;
      pcStack_170[0xd] = '\0';
      puStack_194 = (undefined4 *)&stack0xfffffe40;
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      puVar4 = FUN_0069d820(this_00,&pcStack_170,0,0,0x3f800000,0x3f800000);
    }
    uStack_4 = 2;
    (**(code **)(*(int *)((int)this + 4) + 4))();
    *(undefined4 **)((int)this + 0x18) = puVar4;
    (*(code *)**(undefined4 **)((int)this + 4))();
    uStack_4 = 0xffffffff;
    if ((this_00 != (void *)0x0) && (0x14 < uStack_168)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_170);
    }
    (**(code **)(**(int **)((int)this + 0x18) + 0x74))();
    iVar6 = **(int **)((int)this + 0x18);
    FUN_0071b2a0();
    (**(code **)(iVar6 + 0x5c))(1);
    iVar6 = **(int **)((int)this + 0x18);
    uVar12 = 0;
    uVar5 = FUN_0071b2a0();
    (**(code **)(iVar6 + 100))(1,uVar5,uVar12);
    piVar3 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar3 + 0xc))(*(undefined4 *)((int)this + 0x18),1);
  }
  if (*(int *)((int)this + 0x30) == 0) {
    puStack_194 = operator_new(0x3fc);
    uStack_4 = 3;
    if (puStack_194 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_005ee8e0(puStack_194);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 0x1c) + 4))();
    *(undefined4 **)((int)this + 0x30) = puVar4;
    (*(code *)**(undefined4 **)((int)this + 0x1c))();
    *(undefined4 *)(*(int *)((int)this + 0x30) + 0x9c) = 0;
    *(float *)(*(int *)((int)this + 0x30) + 0xe4) = (float)fVar10;
    *(undefined4 *)(*(int *)((int)this + 0x30) + 0xc0) = 0;
    *(float *)(*(int *)((int)this + 0x30) + 0x108) = (float)fVar9;
    puVar1 = (uint *)(*(int *)((int)this + 0x30) + 0x114);
    *puVar1 = *puVar1 & 0xfffffffd;
    (**(code **)(**(int **)((int)this + 0x18) + 0xc))();
  }
  iVar6 = FUN_0071b2a0();
  FUN_0071b010(iVar6);
  uVar11 = FUN_00acd42c();
  puStack_190 = auStack_184;
  auStack_184[0] = 0;
  uStack_18c = 0;
  uStack_188 = 10;
  puStack_150 = auStack_144;
  uStack_4 = 4;
  auStack_144[0] = 0;
  uStack_14c = 0;
  uStack_148 = 0x14;
  pcVar7 = param_1;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_004015d0(&puStack_150,param_1,(int)pcVar7 - (int)(param_1 + 1));
  uStack_4._0_1_ = 5;
  puVar4 = FUN_009b5030(apvStack_12c,&puStack_150);
  sVar8 = FUN_00ace02d(L"<table><tr><td height=");
  FUN_0040cae0(&puStack_190,L"<table><tr><td height=",sVar8);
  sVar8 = _swprintf(awStack_10c,0xd18f7c,(wchar_t *)uVar11);
  FUN_0040cae0(&puStack_190,awStack_10c,sVar8);
  sVar8 = FUN_00ace02d(L"></td></tr><tr><td width=");
  FUN_0040cae0(&puStack_190,L"></td></tr><tr><td width=",sVar8);
  sVar8 = _swprintf(awStack_8c,0xd18f84,SUB84((double)(float)fVar9,0));
  FUN_0040cae0(&puStack_190,awStack_8c,sVar8);
  sVar8 = FUN_00ace02d(L" align=center><x0>");
  FUN_0040cae0(&puStack_190,L" align=center><x0>",sVar8);
  FUN_0040cae0(&puStack_190,(wchar_t *)*puVar4,puVar4[1]);
  sVar8 = FUN_00ace02d(L"</x0></td></tr></table>");
  FUN_0040cae0(&puStack_190,L"</x0></td></tr></table>",sVar8);
  if (10 < uStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_12c[0]);
  }
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  if (0x14 < uStack_148) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_150);
  }
  (**(code **)(**(int **)((int)this + 0x30) + 0x54))();
  do {
    cVar2 = (**(code **)(**(int **)((int)this + 0x30) + 0x50))();
  } while (cVar2 != '\0');
  if (10 < uStack_18c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_194);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_005eefd0 @ 005eefd0 ////

void __fastcall FUN_005eefd0(undefined4 *param_1)

{
  int *piVar1;
  void *pvStack_b0;
  char *local_ac;
  size_t local_a8;
  uint local_a4;
  char local_a0 [16];
  void *pvStack_90;
  char *local_8c;
  uint local_88;
  undefined4 local_84;
  char local_80 [16];
  void *pvStack_70;
  undefined1 *local_6c;
  uint local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined4 uStack_50;
  undefined4 local_4c [7];
  void *pvStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  char *pcStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb91be;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00541a60(&local_2c);
  local_4 = 0;
  FUN_0048f010(&stack0x00000004,&local_ac);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  FUN_004015d0(&local_6c,local_ac,local_a8);
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  FUN_0048ad50((int *)&local_6c);
  local_ac = local_a0;
  local_a0[0] = '\0';
  local_a8 = 0;
  local_a4 = 0x14;
  _strncpy(local_ac,"1",1);
  local_a8 = 1;
  local_ac[1] = '\0';
  local_4._0_1_ = 2;
  FUN_005417f0(&local_2c,&local_6c,&local_ac);
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  local_8c = local_80;
  local_80[0] = '\0';
  local_88 = 0;
  local_84 = 0x14;
  _strncpy(local_8c,"data/Tutorials/",0xf);
  local_88 = 0xf;
  local_8c[0xf] = '\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0048f010(&stack0x00000004,&local_ac);
  FUN_004073f0(&local_8c,local_ac,local_a8);
  if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if (DAT_0105be08 == 0) {
    FUN_004073f0(&local_8c,"-small",6);
  }
  FUN_004073f0(&local_8c,".wmv",4);
  FUN_00568790(local_4c,&local_8c);
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*(int *)*param_1 + 8))();
  (**(code **)(*(int *)*param_1 + 0x10))();
  (**(code **)(*(int *)*param_1 + 0x14))();
  piVar1 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar1 + 0x10))();
  piVar1 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar1 + 0x14))();
  (**(code **)(*(int *)*param_1 + 0xc))();
  (**(code **)(*(int *)*param_1 + 0x18))();
  FUN_005eebd0(param_1,pcStack_20);
  if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_70);
  }
  if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_b0);
  }
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_90);
  }
  uStack_28 = 0xffffffff;
  FUN_00541870(&uStack_50);
  ExceptionList = pvStack_30;
  return;
}


//// FUNCTION FUN_005ef2f0 @ 005ef2f0 ////

void __fastcall FUN_005ef2f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00470470(DAT_0104917c,(int)param_1);
  while (iVar1 != 0) {
    (**(code **)(*param_1 + 0x14))(iVar1);
    iVar1 = FUN_00470470(DAT_0104917c,(int)param_1);
  }
  return;
}


//// FUNCTION FUN_005ef320 @ 005ef320 ////

undefined4 * __fastcall FUN_005ef320(undefined4 *param_1)

{
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d2d75c;
  return param_1;
}


//// FUNCTION FUN_005ef340 @ 005ef340 ////

int * __thiscall FUN_005ef340(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005ef380 @ 005ef380 ////

undefined4 FUN_005ef380(void)

{
  return DAT_0104d850;
}


//// FUNCTION FUN_005ef390 @ 005ef390 ////

void FUN_005ef390(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb91db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x50);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0053d690(puVar1);
    *puVar1 = &PTR_FUN_00d2d75c;
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104d83c[1])();
  DAT_0104d850 = puVar1;
  (*(code *)*DAT_0104d83c)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005ef410 @ 005ef410 ////

undefined4 * __thiscall FUN_005ef410(void *this,byte param_1)

{
  thunk_FUN_0053d4f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ef440 @ 005ef440 ////

void FUN_005ef440(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104d850;
  if (DAT_0104d850 != (undefined4 *)0x0) {
    iVar1 = DAT_0104d850[0x12];
    DAT_0104d850[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104d83c[1])();
    DAT_0104d850 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x005ef480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104d83c)();
    return;
  }
  return;
}


//// FUNCTION FUN_005ef4c0 @ 005ef4c0 ////

void __fastcall FUN_005ef4c0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d2d778;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_005ef510 @ 005ef510 ////

void __fastcall FUN_005ef510(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2d778;
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


//// FUNCTION FUN_005ef560 @ 005ef560 ////

void __fastcall FUN_005ef560(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2d78c;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_005ef5b0 @ 005ef5b0 ////

void __thiscall FUN_005ef5b0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = *param_1;
  *(undefined4 *)((int)this + 0x74) = param_1[1];
  return;
}


//// FUNCTION FUN_005ef5e0 @ 005ef5e0 ////

undefined4 * __fastcall FUN_005ef5e0(undefined4 *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb91f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d2d78c;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  param_1[0x19] = (int)uVar1;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005ef660 @ 005ef660 ////

undefined4 * __thiscall FUN_005ef660(void *this,byte param_1)

{
  FUN_005ef560(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005ef760 @ 005ef760 ////

void FUN_005ef760(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb9226;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = FUN_0099bb50("ui/hilight_star.dds",0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_0104d854 = (undefined4 *)0x0;
  }
  else {
    DAT_0104d854 = FUN_0041f350(puVar2);
  }
  puVar2 = operator_new(0x24);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  DAT_0104d854[1] = uVar3;
  local_4 = 0xffffffff;
  if (*(void **)((int)DAT_0104d854[1] + 0x18) != pvVar1) {
    Engine_SetResourceReference((void *)DAT_0104d854[1],(int)pvVar1);
  }
  *(undefined1 *)(DAT_0104d854[1] + 0xc) = 6;
  *(uint *)(DAT_0104d854[1] + 0x10) = *(uint *)(DAT_0104d854[1] + 0x10) & 0xbfffffff;
  *(uint *)(DAT_0104d854[1] + 0x10) = *(uint *)(DAT_0104d854[1] + 0x10) & 0x7fffffff;
  DAT_0104d854[10] = 0;
  DAT_0104d854[0xb] = 0;
  DAT_0104d854[0xc] = 0x3f800000;
  DAT_0104d854[0xd] = 0x3f800000;
  DAT_0104d854[2] = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
  }
  pvVar1 = FUN_0099bb50("ui/dollar_HUD.dds",0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_0104d858 = (undefined4 *)0x0;
  }
  else {
    DAT_0104d858 = FUN_0041f350(puVar2);
  }
  puVar2 = operator_new(0x24);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  DAT_0104d858[1] = uVar3;
  local_4 = 0xffffffff;
  if (*(void **)((int)DAT_0104d858[1] + 0x18) != pvVar1) {
    Engine_SetResourceReference((void *)DAT_0104d858[1],(int)pvVar1);
  }
  *(undefined1 *)(DAT_0104d858[1] + 0xc) = 6;
  *(uint *)(DAT_0104d858[1] + 0x10) = *(uint *)(DAT_0104d858[1] + 0x10) & 0xbfffffff;
  *(uint *)(DAT_0104d858[1] + 0x10) = *(uint *)(DAT_0104d858[1] + 0x10) & 0x7fffffff;
  DAT_0104d858[10] = 0;
  DAT_0104d858[0xb] = 0;
  DAT_0104d858[0xc] = 0x3f800000;
  DAT_0104d858[0xd] = 0x3f800000;
  DAT_0104d858[2] = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005ef9e0 @ 005ef9e0 ////

void FUN_005ef9e0(void)

{
  void *pvVar1;
  
  if (DAT_0104d854 != (void *)0x0) {
    pvVar1 = *(void **)((int)DAT_0104d854 + 4);
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)((int)DAT_0104d854 + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104d854);
  }
  if (DAT_0104d858 == (void *)0x0) {
    return;
  }
  pvVar1 = *(void **)((int)DAT_0104d858 + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  *(undefined4 *)((int)DAT_0104d858 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104d858);
}


//// FUNCTION FUN_005efa60 @ 005efa60 ////

void __fastcall FUN_005efa60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2d7d8;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_005efab0 @ 005efab0 ////

void __thiscall FUN_005efab0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x6c) = 1;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = *param_1;
  *(undefined4 *)((int)this + 0x78) = param_1[1];
  return;
}


//// FUNCTION FUN_005efae0 @ 005efae0 ////

int * __thiscall FUN_005efae0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005efb20 @ 005efb20 ////

undefined4 * __fastcall FUN_005efb20(undefined4 *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb9238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d2d7d8;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  param_1[0x19] = (int)uVar1;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005efbb0 @ 005efbb0 ////

undefined4 * __thiscall FUN_005efbb0(void *this,byte param_1)

{
  FUN_005efa60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005efcd0 @ 005efcd0 ////

void FUN_005efcd0(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb9271;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = FUN_0099bb50("ui/hilight_star.dds",0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_0104d85c = (undefined4 *)0x0;
  }
  else {
    DAT_0104d85c = FUN_0041f350(puVar2);
  }
  puVar2 = operator_new(0x24);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  DAT_0104d85c[1] = uVar3;
  local_4 = 0xffffffff;
  if (*(void **)((int)DAT_0104d85c[1] + 0x18) != pvVar1) {
    Engine_SetResourceReference((void *)DAT_0104d85c[1],(int)pvVar1);
  }
  *(undefined1 *)(DAT_0104d85c[1] + 0xc) = 6;
  *(uint *)(DAT_0104d85c[1] + 0x10) = *(uint *)(DAT_0104d85c[1] + 0x10) & 0xbfffffff;
  *(uint *)(DAT_0104d85c[1] + 0x10) = *(uint *)(DAT_0104d85c[1] + 0x10) & 0x7fffffff;
  DAT_0104d85c[10] = 0;
  DAT_0104d85c[0xb] = 0;
  DAT_0104d85c[0xc] = 0x3f800000;
  DAT_0104d85c[0xd] = 0x3f800000;
  DAT_0104d85c[2] = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
  }
  pvVar1 = FUN_0099bb50("ui/arrow_green.dds",0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_0104d860 = (undefined4 *)0x0;
  }
  else {
    DAT_0104d860 = FUN_0041f350(puVar2);
  }
  puVar2 = operator_new(0x24);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  DAT_0104d860[1] = uVar3;
  local_4 = 0xffffffff;
  if (*(void **)((int)DAT_0104d860[1] + 0x18) != pvVar1) {
    Engine_SetResourceReference((void *)DAT_0104d860[1],(int)pvVar1);
  }
  *(undefined1 *)(DAT_0104d860[1] + 0xc) = 6;
  *(uint *)(DAT_0104d860[1] + 0x10) = *(uint *)(DAT_0104d860[1] + 0x10) & 0xbfffffff;
  *(uint *)(DAT_0104d860[1] + 0x10) = *(uint *)(DAT_0104d860[1] + 0x10) & 0x7fffffff;
  DAT_0104d860[10] = 0;
  DAT_0104d860[0xb] = 0;
  DAT_0104d860[0xc] = 0x3f800000;
  DAT_0104d860[0xd] = 0x3f800000;
  DAT_0104d860[2] = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
  }
  puVar2 = operator_new(0x7c);
  local_4 = 2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_005efb20(puVar2);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104d864[1])();
  DAT_0104d878 = puVar2;
  (*(code *)*DAT_0104d864)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005effa0 @ 005effa0 ////

void FUN_005effa0(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_0104d878;
  if (DAT_0104d878 != (undefined4 *)0x0) {
    iVar1 = DAT_0104d878[0x12];
    DAT_0104d878[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (*(code *)DAT_0104d864[1])();
    DAT_0104d878 = (undefined4 *)0x0;
    (*(code *)*DAT_0104d864)();
  }
  if (DAT_0104d85c != (void *)0x0) {
    pvVar2 = *(void **)((int)DAT_0104d85c + 4);
    if (pvVar2 != (void *)0x0) {
      FUN_00990ec0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    *(undefined4 *)((int)DAT_0104d85c + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104d85c);
  }
  if (DAT_0104d860 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)((int)DAT_0104d860 + 4);
  if (pvVar2 != (void *)0x0) {
    FUN_00990ec0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(undefined4 *)((int)DAT_0104d860 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104d860);
}


//// FUNCTION FUN_005f00c0 @ 005f00c0 ////

void __thiscall FUN_005f00c0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d2d80c;
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


//// FUNCTION FUN_005f0110 @ 005f0110 ////

void __fastcall FUN_005f0110(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2d80c;
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


//// FUNCTION FUN_005f0160 @ 005f0160 ////

undefined4 * __fastcall FUN_005f0160(undefined4 *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb9288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d2d820;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  param_1[0x19] = (int)uVar1;
  param_1[0x1a] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005f01c0 @ 005f01c0 ////

void __fastcall FUN_005f01c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2d820;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_005f0240 @ 005f0240 ////

int * __thiscall FUN_005f0240(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f0310 @ 005f0310 ////

void __fastcall FUN_005f0310(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 local_9 [5];
  float local_4;
  
  if ((*(int **)(param_1 + 0xac) != (int *)0x0) && (**(int **)(param_1 + 0xac) != 0)) {
    iVar4 = FUN_00423320(DAT_00f87b04);
    if (iVar4 != 2) {
      iVar4 = FUN_00423320(DAT_00f87b04);
      if (((iVar4 != 5) && (DAT_0104dcf0 == 0)) && (DAT_0104dafc == 0)) {
        fVar3 = *(float *)(param_1 + 0x7c);
        fVar1 = *(float *)(param_1 + 0x68);
        iVar4 = **(int **)(param_1 + 0xac);
        *(float *)(iVar4 + 0x10) = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x7c);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        *(float *)(iVar4 + 0x14) = fVar1 - fVar3;
        local_4 = *(float *)(param_1 + 0x7c);
        fVar1 = *(float *)(param_1 + 0x7c);
        fVar3 = *(float *)(param_1 + 100);
        iVar4 = **(int **)(param_1 + 0xac);
        fVar2 = *(float *)(param_1 + 0x68);
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(float *)(iVar4 + 0x1c) = fVar1 + fVar3;
        *(float *)(iVar4 + 0x20) = local_4 + fVar2;
        if (*(float *)(param_1 + 0x98) < 0.0 == (*(float *)(param_1 + 0x98) == 0.0)) {
          if (*(float *)(param_1 + 0x98) < 1.0) {
            uVar5 = FUN_00acd42c();
            iVar4 = (int)uVar5;
          }
          else {
            iVar4 = 0xff;
          }
        }
        else {
          iVar4 = 0;
        }
        FUN_0040a4f0(local_9,iVar4);
        *(undefined1 *)(**(int **)(param_1 + 0xac) + 0xb) = local_9[0];
        BuildAndDrawPrimitive(**(int **)(param_1 + 0xac));
      }
    }
  }
  return;
}


//// FUNCTION FUN_005f0440 @ 005f0440 ////

undefined4 * __thiscall FUN_005f0440(void *this,byte param_1)

{
  FUN_005f01c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f0460 @ 005f0460 ////

undefined4 FUN_005f0460(void)

{
  return DAT_0104d8cc;
}


//// FUNCTION FUN_005f0470 @ 005f0470 ////

void FUN_005f0470(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb92b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = FUN_0099bb50("ui/hilight_star.dds",0,0,0,'\0');
  puVar2 = operator_new(0x3c);
  if (puVar2 == (undefined4 *)0x0) {
    DAT_0104d87c = (undefined4 *)0x0;
  }
  else {
    DAT_0104d87c = FUN_0041f350(puVar2);
  }
  puVar2 = operator_new(0x24);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_009910f0(puVar2);
  }
  DAT_0104d87c[1] = uVar3;
  local_4 = 0xffffffff;
  if (*(void **)((int)DAT_0104d87c[1] + 0x18) != pvVar1) {
    Engine_SetResourceReference((void *)DAT_0104d87c[1],(int)pvVar1);
  }
  *(undefined1 *)(DAT_0104d87c[1] + 0xc) = 6;
  *(uint *)(DAT_0104d87c[1] + 0x10) = *(uint *)(DAT_0104d87c[1] + 0x10) & 0xbfffffff;
  *(uint *)(DAT_0104d87c[1] + 0x10) = *(uint *)(DAT_0104d87c[1] + 0x10) & 0x7fffffff;
  DAT_0104d87c[10] = 0;
  DAT_0104d87c[0xb] = 0;
  DAT_0104d87c[0xc] = 0x3f800000;
  DAT_0104d87c[0xd] = 0x3f800000;
  DAT_0104d87c[2] = 0xffffffff;
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
  }
  puVar2 = operator_new(0x6c);
  local_4 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_005f0160(puVar2);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104d8b8[1])();
  DAT_0104d8cc = puVar2;
  (*(code *)*DAT_0104d8b8)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005f0620 @ 005f0620 ////

void FUN_005f0620(void)

{
  int iVar1;
  void *_Memory;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104d8cc;
  if (DAT_0104d8cc != (undefined4 *)0x0) {
    iVar1 = DAT_0104d8cc[0x12];
    DAT_0104d8cc[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104d8b8[1])();
    DAT_0104d8cc = (undefined4 *)0x0;
    (*(code *)*DAT_0104d8b8)();
  }
  if (DAT_0104d87c != (void *)0x0) {
    _Memory = *(void **)((int)DAT_0104d87c + 4);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)((int)DAT_0104d87c + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free(DAT_0104d87c);
  }
  return;
}


//// FUNCTION FUN_005f0740 @ 005f0740 ////

undefined4 * __thiscall FUN_005f0740(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb92d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  *(undefined ***)this = &PTR_FUN_00d2d840;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  piVar1 = (int *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  local_4 = 1;
  *(undefined1 *)((int)this + 0x60) = 1;
  *(void **)((int)this + 0xb8) = this;
  FUN_00acdb9e(0xe55968);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0xbc) = iVar2;
  if (s___AVCParticle2D_TM___00e55950[0x15] != '\0') {
    iVar2 = 0xb0;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe55968);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCParticle2D_TM___00e55950[0x15] = '\0';
  }
  *(int ***)((int)this + 0xb4) = &DAT_0104d898;
  *piVar1 = (int)DAT_0104d898;
  *(int **)((int)DAT_0104d898 + 4) = piVar1;
  DAT_0104d898 = piVar1;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = param_1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005f0850 @ 005f0850 ////

/* WARNING: Removing unreachable block (ram,0x005f0890) */

void __fastcall FUN_005f0850(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2d840;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2d] = param_1[0x2c];
  }
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_005f09e0 @ 005f09e0 ////

void FUN_005f09e0(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_0104d88c; puVar1 != &DAT_0104d898; puVar1 = (undefined4 *)puVar1[1]) {
    FUN_005f0310(puVar1[2]);
  }
  return;
}


//// FUNCTION FUN_005f0a10 @ 005f0a10 ////

undefined4 * __cdecl FUN_005f0a10(int param_1,undefined4 *param_2,undefined4 param_3)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb92eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xc0);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_005f0740(this,param_3);
  }
  local_4 = 0xffffffff;
  switch(param_1) {
  case 0:
    puVar3 = &DAT_00e557d8;
    puVar4 = puVar1 + 0x19;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    fVar5 = FUN_00990e30(0.0,6.2831855);
    fVar5 = FUN_004012c0((float)fVar5);
    puVar1[0x23] = (float)fVar5;
    break;
  case 1:
  case 2:
    puVar3 = &DAT_00e557d8 + param_1 * 0x11;
    puVar4 = puVar1 + 0x19;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    fVar5 = FUN_00990e30(-1.5707964,1.5707964);
    fVar5 = FUN_004012c0((float)fVar5);
    puVar1[0x23] = (float)fVar5;
    break;
  case 3:
  case 4:
    puVar3 = &DAT_00e557d8 + param_1 * 0x11;
    puVar4 = puVar1 + 0x19;
    for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    fVar5 = FUN_00990e30(4.712389,7.853982);
    fVar5 = FUN_004012c0((float)fVar5);
    puVar1[0x23] = (float)fVar5;
  }
  puVar1[0x19] = *param_2;
  puVar1[0x1a] = param_2[1];
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_005f0b70 @ 005f0b70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f0b70(undefined4 *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  float local_8;
  
  fVar1 = (float)DAT_00e557d0;
  iVar3 = 0;
  local_8 = 0.0;
  if (0 < DAT_00e557d0) {
    do {
      puVar2 = FUN_005f0a10(0,param_1,&DAT_0104d87c);
      fVar4 = (float10)fcos((float10)local_8);
      iVar3 = iVar3 + 1;
      puVar2[0x1b] = (float)(fVar4 * (float10)_DAT_00e557d4);
      fVar4 = (float10)fsin((float10)local_8);
      puVar2[0x1c] = (float)(fVar4 * (float10)_DAT_00e557d4 - (float10)_DAT_0104d880);
      local_8 = 6.2831855 / fVar1 + local_8;
    } while (iVar3 < DAT_00e557d0);
  }
  return;
}


//// FUNCTION FUN_005f0c30 @ 005f0c30 ////

void __fastcall FUN_005f0c30(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d2d860;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_005f0c80 @ 005f0c80 ////

void __fastcall FUN_005f0c80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d2d860;
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


//// FUNCTION FUN_005f0cd0 @ 005f0cd0 ////

undefined4 * __thiscall FUN_005f0cd0(void *this,byte param_1)

{
  FUN_005f0850(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f0cf0 @ 005f0cf0 ////

void FUN_005f0cf0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0104d88c != &DAT_0104d898) {
    do {
      piVar4 = DAT_0104d88c;
      puVar2 = (undefined4 *)DAT_0104d88c[2];
      piVar1 = DAT_0104d88c + 1;
      if ((int *)DAT_0104d88c[1] != (int *)0x0) {
        *(int *)DAT_0104d88c[1] = *DAT_0104d88c;
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
    } while (DAT_0104d88c != &DAT_0104d898);
  }
  return;
}


//// FUNCTION FUN_005f0d50 @ 005f0d50 ////

void __fastcall FUN_005f0d50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2d870;
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


//// FUNCTION FUN_005f0da0 @ 005f0da0 ////

undefined4 * __thiscall FUN_005f0da0(void *this,byte param_1)

{
  FUN_005f0d50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f0dc0 @ 005f0dc0 ////

void __fastcall FUN_005f0dc0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d2d870;
  return;
}


//// FUNCTION FUN_005f0e50 @ 005f0e50 ////

undefined4 __fastcall FUN_005f0e50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}


//// FUNCTION FUN_005f0f80 @ 005f0f80 ////

void __fastcall FUN_005f0f80(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005f0f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 8) + 0x100))();
  return;
}


//// FUNCTION FUN_005f0f90 @ 005f0f90 ////

int __fastcall FUN_005f0f90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != param_1 + 0x28; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


//// FUNCTION FUN_005f0fb0 @ 005f0fb0 ////

undefined4 FUN_005f0fb0(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
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
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  iVar2 = (**(code **)(*param_1 + 0x100))();
  fStack_30 = *(float *)(iVar2 + 0x10);
  fStack_2c = *(float *)(iVar2 + 0x14);
  fStack_28 = *(float *)(iVar2 + 0x18);
  iVar2 = (**(code **)(*param_1 + 0x100))();
  fStack_24 = *(float *)(iVar2 + 0x10);
  iVar2 = (**(code **)(*param_1 + 0x100))();
  fStack_20 = *(float *)(iVar2 + 0x20);
  iVar2 = (**(code **)(*param_1 + 0x100))();
  uStack_1c = *(undefined4 *)(iVar2 + 0x18);
  iVar2 = (**(code **)(*param_1 + 0x100))();
  fStack_18 = *(float *)(iVar2 + 0x1c);
  fStack_14 = *(float *)(iVar2 + 0x20);
  fStack_10 = *(float *)(iVar2 + 0x24);
  iVar2 = (**(code **)(*param_1 + 0x100))();
  fStack_c = *(float *)(iVar2 + 0x1c);
  iVar2 = (**(code **)(*param_1 + 0x100))();
  fStack_8 = *(float *)(iVar2 + 0x14);
  iVar2 = (**(code **)(*param_1 + 0x100))();
  uStack_4 = *(undefined4 *)(iVar2 + 0x24);
  fStack_40 = fStack_10 + fStack_28;
  fStack_3c = (fStack_18 + fStack_30) * 0.5;
  fStack_38 = (fStack_14 + fStack_2c) * 0.5;
  fStack_34 = fStack_40 * 0.5;
  FUN_009840b0(&fStack_50,&fStack_3c);
  iVar2 = (**(code **)(*param_1 + 0x100))();
  fStack_70 = *(float *)(iVar2 + 0xc);
  fStack_48 = DAT_0104cce0;
  fStack_44 = DAT_0104cce4;
  fVar3 = (float10)fcos(-(float10)fStack_70);
  fVar4 = (float10)fsin(-(float10)fStack_70);
  fVar5 = (float10)fStack_30;
  fStack_30 = (float)(((fVar5 - (float10)fStack_50) * fVar3 -
                      ((float10)fStack_2c - (float10)fStack_4c) * fVar4) + (float10)fStack_50);
  fStack_2c = (float)(((float10)fStack_2c - (float10)fStack_4c) * fVar3 +
                      (fVar5 - (float10)fStack_50) * fVar4 + (float10)fStack_4c);
  fVar5 = (float10)fStack_24;
  fStack_24 = (float)(((fVar5 - (float10)fStack_50) * fVar3 -
                      ((float10)fStack_20 - (float10)fStack_4c) * fVar4) + (float10)fStack_50);
  fStack_20 = (float)(((float10)fStack_20 - (float10)fStack_4c) * fVar3 +
                      (fVar5 - (float10)fStack_50) * fVar4 + (float10)fStack_4c);
  fVar5 = (float10)fStack_18;
  fStack_18 = (float)(((fVar5 - (float10)fStack_50) * fVar3 -
                      ((float10)fStack_14 - (float10)fStack_4c) * fVar4) + (float10)fStack_50);
  fStack_14 = (float)(((float10)fStack_14 - (float10)fStack_4c) * fVar3 +
                      (fVar5 - (float10)fStack_50) * fVar4 + (float10)fStack_4c);
  fVar5 = (float10)fStack_c;
  fStack_c = (float)(((fVar5 - (float10)fStack_50) * fVar3 -
                     ((float10)fStack_8 - (float10)fStack_4c) * fVar4) + (float10)fStack_50);
  fStack_8 = (float)(((float10)fStack_8 - (float10)fStack_4c) * fVar3 +
                     (fVar5 - (float10)fStack_50) * fVar4 + (float10)fStack_4c);
  FUN_009840b0(&fStack_60,&fStack_30);
  fStack_58 = fStack_48 - fStack_60;
  fStack_54 = fStack_44 - fStack_5c;
  FUN_009840b0(&fStack_60,&fStack_c);
  fStack_68 = fStack_48 - fStack_60;
  fStack_64 = fStack_44 - fStack_5c;
  FUN_009840b0(&fStack_70,&fStack_18);
  fStack_60 = fStack_48 - fStack_70;
  fStack_5c = fStack_44 - fStack_6c;
  if ((fStack_58 != 0.0) || (fStack_54 != 0.0)) {
    fVar1 = 1.0 / SQRT(fStack_58 * fStack_58 + fStack_54 * fStack_54);
    fStack_58 = fStack_58 * fVar1;
    fStack_54 = fStack_54 * fVar1;
  }
  if ((fStack_68 != 0.0) || (fStack_64 != 0.0)) {
    fVar1 = 1.0 / SQRT(fStack_68 * fStack_68 + fStack_64 * fStack_64);
    fStack_68 = fStack_68 * fVar1;
    fStack_64 = fStack_64 * fVar1;
  }
  if ((fStack_60 != 0.0) || (fStack_5c != 0.0)) {
    fVar1 = 1.0 / SQRT(fStack_60 * fStack_60 + fStack_5c * fStack_5c);
    fStack_60 = fStack_60 * fVar1;
    fStack_5c = fStack_5c * fVar1;
  }
  fVar3 = (float10)FUN_00ad1010();
  fStack_70 = (float)fVar3;
  fVar3 = (float10)FUN_00ad1010();
  fStack_70 = (float)fVar3;
  fVar3 = (float10)FUN_00ad1010();
  fStack_70 = (float)fVar3;
  fVar3 = ABS((fVar3 + extraout_ST1) - (float10)6.2831854820251465);
  FUN_009840b0(&fStack_3c,&fStack_30);
  fStack_70 = fStack_48 - fStack_3c;
  fStack_6c = fStack_44 - fStack_38;
  fStack_58 = fStack_70;
  fStack_54 = fStack_6c;
  FUN_009840b0(&fStack_3c,&fStack_24);
  fStack_70 = fStack_48 - fStack_3c;
  fStack_6c = fStack_44 - fStack_38;
  fStack_68 = fStack_70;
  fStack_64 = fStack_6c;
  FUN_009840b0(&fStack_3c,&fStack_18);
  fStack_50 = fStack_48 - fStack_3c;
  fStack_4c = fStack_44 - fStack_38;
  if ((fStack_58 != 0.0) || (fStack_54 != 0.0)) {
    fVar1 = 1.0 / SQRT(fStack_58 * fStack_58 + fStack_54 * fStack_54);
    fStack_58 = fStack_58 * fVar1;
    fStack_54 = fStack_54 * fVar1;
  }
  if ((fStack_68 != 0.0) || (fStack_64 != 0.0)) {
    fVar1 = 1.0 / SQRT(fStack_68 * fStack_68 + fStack_64 * fStack_64);
    fStack_68 = fStack_68 * fVar1;
    fStack_64 = fStack_64 * fVar1;
  }
  if ((fStack_50 != 0.0) || (fStack_60 = fStack_50, fStack_5c = fStack_4c, fStack_4c != 0.0)) {
    fStack_5c = 1.0 / SQRT(fStack_50 * fStack_50 + fStack_4c * fStack_4c);
    fStack_60 = fStack_50 * fStack_5c;
    fStack_5c = fStack_4c * fStack_5c;
  }
  fVar4 = (float10)FUN_00ad1010();
  fStack_70 = (float)fVar4;
  fVar4 = (float10)FUN_00ad1010();
  fStack_70 = (float)fVar4;
  fVar4 = (float10)FUN_00ad1010();
  fVar4 = ABS((fVar4 + extraout_ST1_00) - (float10)6.2831854820251465);
  if ((fVar3 < (float10)0.005 == (fVar3 == (float10)0.005)) &&
     (fVar4 < (float10)0.005 == (fVar4 == (float10)0.005))) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_005f1870 @ 005f1870 ////

void __fastcall FUN_005f1870(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x1c) != param_1 + 0x28) {
    do {
      piVar2 = *(int **)(param_1 + 0x28);
      puVar3 = (undefined4 *)piVar2[2];
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      if (puVar3 != (undefined4 *)0x0) {
        piVar2 = puVar3 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
    } while (*(int *)(param_1 + 0x1c) != param_1 + 0x28);
  }
  iVar1 = param_1 + 0x28;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x4c) = iVar1;
  *(int *)(param_1 + 0x50) = iVar1;
  return;
}


//// FUNCTION FUN_005f18e0 @ 005f18e0 ////

undefined4 __fastcall FUN_005f18e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x54) != param_1 + 0x28) {
                    /* WARNING: Could not recover jumptable at 0x005f18ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x54) + 8) + 0xfc))();
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_005f1900 @ 005f1900 ////

undefined4 __thiscall FUN_005f1900(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar1 = *(int *)((int)this + 0x1c); iVar1 != (int)this + 0x28; iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = iVar3 + 1;
  }
  if (param_1 < iVar3) {
    iVar1 = *(int *)((int)this + 0x1c);
    while (iVar3 = iVar1, 0 < param_1) {
      param_1 = param_1 + -1;
      iVar3 = 0;
      if (iVar1 == 0) break;
      iVar1 = *(int *)(iVar1 + 4);
    }
    if (*(int **)(iVar3 + 8) != (int *)0x0) {
      uVar2 = (**(code **)(**(int **)(iVar3 + 8) + 0xfc))();
      return uVar2;
    }
  }
  return 0;
}


//// FUNCTION FUN_005f1950 @ 005f1950 ////

undefined4 * __thiscall FUN_005f1950(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x54) + 8);
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)(iVar1 + 0x344),*(uint *)(iVar1 + 0x348));
  return param_1;
}


//// FUNCTION FUN_005f1990 @ 005f1990 ////

undefined4 * __thiscall FUN_005f1990(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x54) + 8) + 0xfc))();
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)(iVar1 + 0x78),*(uint *)(iVar1 + 0x7c));
  return param_1;
}


//// FUNCTION FUN_005f19e0 @ 005f19e0 ////

void __thiscall FUN_005f19e0(void *this,char param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  float local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar6 = 0;
  for (iVar4 = *(int *)((int)this + 0x1c); iVar4 != (int)this + 0x28; iVar4 = *(int *)(iVar4 + 4)) {
    iVar6 = iVar6 + 1;
  }
  iVar4 = (int)this + 0x28;
  *(int *)((int)this + 0x60) = iVar6;
  *(int *)((int)this + 0x4c) = iVar4;
  *(int *)((int)this + 0x50) = iVar4;
  *(int *)((int)this + 0x54) = iVar4;
  iVar4 = *(int *)((int)this + 0x1c);
  if (iVar4 != (int)this + 0x28) {
    iVar6 = *(int *)((int)this + 0x60) / 2;
    while (iVar5 = iVar4, 0 < iVar6) {
      iVar6 = iVar6 + -1;
      iVar5 = 0;
      if (iVar4 == 0) break;
      iVar4 = *(int *)(iVar4 + 4);
    }
    *(int *)((int)this + 0x54) = iVar5;
    iVar4 = *(int *)((int)this + 0x5c);
    if (*(int *)((int)this + 0x60) < iVar4) {
      local_c = (*(int *)((int)this + 0x60) + 1) / 2;
      local_8 = (undefined4 *)(local_c * 0xc + -0xc + *(int *)((int)this + 0x58));
      local_10 = (undefined4 *)(*(int *)((int)this + 0x58) + local_c * -0xc);
      *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x1c);
      iVar4 = 1;
      puVar2 = (undefined4 *)((int)this + 0x28);
      do {
        iVar4 = iVar4 + -1;
        puVar3 = (undefined4 *)0;
        if (puVar2 == (undefined4 *)0x0) break;
        puVar2 = (undefined4 *)*puVar2;
        puVar3 = puVar2;
      } while (0 < iVar4);
      *(undefined4 **)((int)this + 0x50) = puVar3;
    }
    else {
      local_c = (iVar4 + 1) / 2;
      local_10 = *(undefined4 **)((int)this + 8);
      local_8 = (undefined4 *)(*(int *)((int)this + 0xc) + -0xc);
      iVar4 = iVar4 / 2;
      puVar2 = *(undefined4 **)((int)this + 0x54);
      iVar6 = iVar4;
      while (puVar3 = puVar2, 0 < iVar6) {
        iVar6 = iVar6 + -1;
        puVar3 = (undefined4 *)0x0;
        if (puVar2 == (undefined4 *)0x0) break;
        puVar2 = (undefined4 *)*puVar2;
      }
      *(undefined4 **)((int)this + 0x4c) = puVar3;
      iVar6 = *(int *)((int)this + 0x54);
      while (iVar5 = iVar6, 0 < iVar4) {
        iVar4 = iVar4 + -1;
        iVar5 = 0;
        if (iVar6 == 0) break;
        iVar6 = *(int *)(iVar6 + 4);
      }
      *(int *)((int)this + 0x50) = iVar5;
    }
    iVar4 = *(int *)((int)this + 0x4c);
    fVar1 = DAT_00e559dc / (float)local_c;
    iVar6 = *(int *)((int)this + 0x60) << 1;
    local_14 = DAT_00e559dc;
    if (iVar4 != (int)this + 0x28) {
      do {
        if ((iVar4 == *(int *)((int)this + 0x54)) || (iVar6 = iVar6 + -1, iVar6 < 1)) break;
        if ((param_1 == '\0') && (iVar4 != *(int *)((int)this + 0x4c))) {
          (**(code **)(**(int **)(iVar4 + 8) + 0x108))(*local_10,local_10[1],local_10[2]);
          (**(code **)(**(int **)(iVar4 + 8) + 0x110))(unaff_ESI);
        }
        else {
          (**(code **)(**(int **)(iVar4 + 8) + 0x104))(*local_10,local_10[1],local_10[2]);
          (**(code **)(**(int **)(iVar4 + 8) + 0x10c))(unaff_ESI);
        }
        FUN_00669d10(*(void **)(iVar4 + 8),*(undefined1 *)((int)this + 100),
                     *(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x6c));
        local_14 = local_14 - fVar1;
        local_10 = local_10 + 3;
        if (local_14 < 0.0) {
          local_14 = 0.0;
        }
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar4 != (int)this + 0x28);
    }
    piVar7 = *(int **)((int)this + 0x50);
    local_10 = local_8;
    local_14 = DAT_00e559e0;
    if (piVar7 != (int *)((int)this + 0x28)) {
      do {
        if ((piVar7 == *(int **)((int)this + 0x54)) || (iVar6 = iVar6 + -1, iVar6 < 1)) break;
        if ((param_1 == '\0') && (piVar7 != *(int **)((int)this + 0x50))) {
          (**(code **)(*(int *)piVar7[2] + 0x108))(*local_10,local_10[1],local_10[2]);
          (**(code **)(*(int *)piVar7[2] + 0x110))(unaff_ESI);
        }
        else {
          (**(code **)(*(int *)piVar7[2] + 0x104))(*local_10,local_10[1],local_10[2]);
          (**(code **)(*(int *)piVar7[2] + 0x10c))(unaff_ESI);
        }
        FUN_00669d10((void *)piVar7[2],*(undefined1 *)((int)this + 100),
                     *(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x6c));
        local_14 = fVar1 + local_14;
        local_10 = local_10 + -3;
        if (0.0 < local_14) {
          local_14 = 0.0;
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)((int)this + 0x28));
    }
    if (param_1 == '\0') {
      if (piVar7 != (int *)((int)this + 0x28)) {
        puVar2 = *(undefined4 **)((int)this + 0x58);
        (**(code **)(*(int *)piVar7[2] + 0x108))(*puVar2,puVar2[1],puVar2[2]);
        (**(code **)(*(int *)piVar7[2] + 0x110))(0);
        FUN_00669d10((void *)piVar7[2],*(undefined1 *)((int)this + 100),
                     *(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x6c));
      }
    }
    else if (*(int *)((int)this + 0x54) != (int)this + 0x28) {
      puVar2 = *(undefined4 **)((int)this + 0x58);
      (**(code **)(**(int **)(*(int *)((int)this + 0x54) + 8) + 0x104))(*puVar2,puVar2[1],puVar2[2])
      ;
      (**(code **)(**(int **)(*(int *)((int)this + 0x54) + 8) + 0x10c))(0);
      FUN_00669d10(*(void **)(*(int *)((int)this + 0x54) + 8),*(undefined1 *)((int)this + 100),
                   *(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x6c));
      return;
    }
  }
  return;
}


//// FUNCTION FUN_005f1da0 @ 005f1da0 ////

void __thiscall FUN_005f1da0(void *this,undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)((int)this + 100) = param_1;
  *(undefined4 *)((int)this + 0x68) = param_2;
  *(undefined4 *)((int)this + 0x6c) = param_3;
  FUN_005f19e0(this,'\x01');
  return;
}


//// FUNCTION FUN_005f1e50 @ 005f1e50 ////

void __fastcall FUN_005f1e50(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 0x1c) != (int)param_1 + 0x28) {
    piVar1 = *(int **)((int)param_1 + 0x28);
    iVar2 = piVar1[2];
    if ((int *)piVar1[1] != (int *)0x0) {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1 = (int *)(iVar2 + 0x160);
    *piVar1 = (int)param_1 + 0x18;
    *(undefined4 *)(iVar2 + 0x164) = *(undefined4 *)((int)param_1 + 0x1c);
    **(undefined4 **)((int)param_1 + 0x1c) = piVar1;
    *(int **)((int)param_1 + 0x1c) = piVar1;
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x54) + 8) + 0x110))(DAT_00e559e0);
  }
  FUN_005f19e0(param_1,'\0');
  return;
}


//// FUNCTION FUN_005f1ed0 @ 005f1ed0 ////

void __fastcall FUN_005f1ed0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)((int)param_1 + 0x1c);
  if (piVar2 != (int *)((int)param_1 + 0x28)) {
    iVar3 = piVar2[2];
    if ((int *)piVar2[1] != (int *)0x0) {
      *(int *)piVar2[1] = *piVar2;
    }
    if (*piVar2 != 0) {
      *(int *)(*piVar2 + 4) = piVar2[1];
    }
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar1 = (int *)(iVar3 + 0x160);
    piVar2 = (int *)((int)param_1 + 0x28);
    *(int **)(iVar3 + 0x164) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x54) + 8) + 0x110))(DAT_00e559dc);
  }
  FUN_005f19e0(param_1,'\0');
  return;
}


//// FUNCTION FUN_005f1f40 @ 005f1f40 ////

void __thiscall FUN_005f1f40(void *this,wchar_t *param_1,undefined4 param_2,uint param_3)

{
  wchar_t *_Memory;
  bool bVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *in_stack_ffffffa4;
  undefined4 in_stack_ffffffa8;
  uint in_stack_ffffffac;
  void **ppvVar4;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb9328;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0055d180((int *)&param_1);
  ppvVar4 = local_2c;
  this_00 = (void *)FUN_0066b3a0(DAT_0104daa0);
  puVar2 = FUN_00434c50(this_00,ppvVar4);
  bVar1 = FUN_00430950(puVar2,"category_custom");
  _Memory = param_1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (((!bVar1) && (*(int *)((int)this + 0x1c) != (int)this + 0x28)) &&
     (iVar3 = _wcscmp(*(wchar_t **)(*(int *)(*(int *)((int)this + 0x54) + 8) + 0x344),param_1),
     iVar3 != 0)) {
    FUN_005f1ed0(this);
    FUN_00421290(&stack0xffffffa4,&param_1);
    FUN_005f1f40(this,in_stack_ffffffa4,in_stack_ffffffa8,in_stack_ffffffac);
  }
  if (param_3 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_005f2030 @ 005f2030 ////

void __thiscall FUN_005f2030(void *this,wchar_t *param_1,undefined4 param_2,uint param_3)

{
  wchar_t *_Memory;
  bool bVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  wchar_t *in_stack_ffffffa4;
  undefined4 in_stack_ffffffa8;
  uint in_stack_ffffffac;
  void **ppvVar4;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb9348;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0055d180((int *)&param_1);
  ppvVar4 = local_2c;
  this_00 = (void *)FUN_0066b3a0(DAT_0104daa0);
  puVar2 = FUN_00434c50(this_00,ppvVar4);
  bVar1 = FUN_00430950(puVar2,"category_custom");
  _Memory = param_1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (((!bVar1) && (*(int *)((int)this + 0x1c) != (int)this + 0x28)) &&
     (iVar3 = _wcscmp(*(wchar_t **)(*(int *)(*(int *)((int)this + 0x54) + 8) + 0x344),param_1),
     iVar3 != 0)) {
    FUN_005f1e50(this);
    FUN_00421290(&stack0xffffffa4,&param_1);
    FUN_005f1f40(this,in_stack_ffffffa4,in_stack_ffffffa8,in_stack_ffffffac);
  }
  if (param_3 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_005f2120 @ 005f2120 ////

bool __thiscall FUN_005f2120(void *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != (int)this + 0x28) {
    iVar3 = 0;
    for (; iVar1 != (int)this + 0x28; iVar1 = *(int *)(iVar1 + 4)) {
      iVar3 = iVar3 + 1;
    }
    while( true ) {
      if (*(int *)((int)this + 0x54) == (int)this + 0x28) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x54) + 8) + 0xfc))();
      }
      uVar2 = FUN_00430d70(param_1,iVar1);
      if (((char)uVar2 != '\0') || (iVar3 < 1)) break;
      FUN_005f1e50(this);
      iVar3 = iVar3 + -1;
    }
    return iVar3 != 0;
  }
  return false;
}


//// FUNCTION FUN_005f21a0 @ 005f21a0 ////

bool __thiscall FUN_005f21a0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != (int)this + 0x28) {
    iVar3 = 0;
    for (; iVar1 != (int)this + 0x28; iVar1 = *(int *)(iVar1 + 4)) {
      iVar3 = iVar3 + 1;
    }
    while( true ) {
      if (*(int *)((int)this + 0x54) == (int)this + 0x28) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(*(int *)((int)this + 0x54) + 8) + 0xfc))();
      }
      uVar2 = FUN_00430d70(param_1,iVar1);
      if (((char)uVar2 != '\0') || (iVar3 < 1)) break;
      FUN_005f1ed0(this);
      iVar3 = iVar3 + -1;
    }
    return iVar3 != 0;
  }
  return false;
}


//// FUNCTION FUN_005f2220 @ 005f2220 ////

uint __fastcall FUN_005f2220(void *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  wchar_t *in_stack_ffffffa4;
  wchar_t *pwVar8;
  undefined4 in_stack_ffffffa8;
  uint in_stack_ffffffac;
  uint uVar9;
  wchar_t local_50 [4];
  undefined4 uStack_48;
  void **ppvVar10;
  void *local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  for (puVar5 = *(undefined4 **)((int)param_1 + 0x4c);
      (puVar5 != (undefined4 *)((int)param_1 + 0x28) &&
      (puVar5 != *(undefined4 **)((int)param_1 + 0x54))); puVar5 = (undefined4 *)puVar5[1]) {
    iVar7 = 1;
    puVar3 = puVar5;
    do {
      iVar7 = iVar7 + -1;
      in_EAX = (undefined4 *)0x0;
      if (puVar3 == (undefined4 *)0x0) break;
      puVar3 = (undefined4 *)puVar3[1];
      in_EAX = puVar3;
    } while (0 < iVar7);
    piVar1 = (int *)puVar5[2];
    if (((piVar1 != (int *)0x0) &&
        ((((int *)in_EAX[2] == (int *)0x0 || (in_EAX == *(undefined4 **)((int)param_1 + 0x54))) ||
         (in_EAX = (undefined4 *)FUN_005f0fb0((int *)in_EAX[2]), (char)in_EAX == '\0')))) &&
       ((in_EAX = (undefined4 *)FUN_005f0fb0(piVar1), (char)in_EAX != '\0' &&
        (in_EAX = (undefined4 *)FUN_00553fa0(0x73), (char)in_EAX != '\0')))) {
      ppvVar10 = &local_28;
      pvVar4 = (void *)FUN_0066b3a0(DAT_0104daa0);
      puVar5 = FUN_00434c50(pvVar4,ppvVar10);
      uStack_48 = 0x5f231a;
      bVar2 = FUN_00430950(puVar5,"category_custom");
      if (0x14 < local_20) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
      if (bVar2) {
        pvVar4 = (void *)(**(code **)(*piVar1 + 0xfc))();
        FUN_005f2120(param_1,pvVar4);
      }
      else {
        FUN_00421290(&stack0xffffffa4,piVar1 + 0xd1);
        FUN_005f2030(param_1,in_stack_ffffffa4,in_stack_ffffffa8,in_stack_ffffffac);
      }
      goto LAB_005f2401;
    }
  }
  puVar5 = *(undefined4 **)((int)param_1 + 0x50);
  do {
    if ((puVar5 == (undefined4 *)((int)param_1 + 0x28)) ||
       (puVar5 == *(undefined4 **)((int)param_1 + 0x54))) {
      return (uint)in_EAX & 0xffffff00;
    }
    iVar7 = 1;
    puVar3 = puVar5;
    do {
      iVar7 = iVar7 + -1;
      in_EAX = (undefined4 *)0x0;
      if (puVar3 == (undefined4 *)0x0) break;
      puVar3 = (undefined4 *)*puVar3;
      in_EAX = puVar3;
    } while (0 < iVar7);
    piVar1 = (int *)puVar5[2];
    if ((piVar1 != (int *)0x0) &&
       (((((int *)in_EAX[2] == (int *)0x0 || (in_EAX == *(undefined4 **)((int)param_1 + 0x54))) ||
         (in_EAX = (undefined4 *)FUN_005f0fb0((int *)in_EAX[2]), (char)in_EAX == '\0')) &&
        ((in_EAX = (undefined4 *)FUN_005f0fb0(piVar1), (char)in_EAX != '\0' &&
         (in_EAX = (undefined4 *)FUN_00553fa0(0x73), (char)in_EAX != '\0')))))) {
      ppvVar10 = &local_28;
      pvVar4 = (void *)FUN_0066b3a0(DAT_0104daa0);
      puVar5 = FUN_00434c50(pvVar4,ppvVar10);
      uStack_48 = 0x5f2393;
      bVar2 = FUN_00430950(puVar5,"category_custom");
      if (0x14 < local_20) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
      if (bVar2) {
        pvVar4 = (void *)(**(code **)(*piVar1 + 0xfc))();
        FUN_005f21a0(param_1,pvVar4);
      }
      else {
        pwVar8 = local_50;
        local_50[0] = L'\0';
        uVar6 = 0;
        uVar9 = 10;
        FUN_004036d0(&stack0xffffffa4,(wchar_t *)piVar1[0xd1],piVar1[0xd2]);
        FUN_005f1f40(param_1,pwVar8,uVar6,uVar9);
      }
LAB_005f2401:
      local_28 = (void *)0x0;
      local_24 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      local_20 = 0xffffffff;
      local_24 = FUN_009b01a0("UI_COSTUME_SELECTION");
      ppvVar10 = &local_28;
      FUN_004f3b20();
      FUN_004f32c0((byte *)ppvVar10);
      uVar6 = FUN_0066f1e0();
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    puVar5 = (undefined4 *)*puVar5;
  } while( true );
}


//// FUNCTION FUN_005f2470 @ 005f2470 ////

void __fastcall FUN_005f2470(int param_1)

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


//// FUNCTION FUN_005f24a0 @ 005f24a0 ////

void __fastcall FUN_005f24a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d2d8b0;
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


//// FUNCTION FUN_005f24f0 @ 005f24f0 ////

undefined4 * __thiscall FUN_005f24f0(void *this,byte param_1)

{
  FUN_005f24a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f2510 @ 005f2510 ////

void __fastcall FUN_005f2510(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb9376;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2d8bc;
  local_4 = 1;
  if (param_1[0x12] != 0) {
    _Memory = *(void **)(param_1[0x12] + 4);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12]);
  }
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_005f1870((int)param_1);
  FUN_005f24a0(param_1 + 5);
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005f25d0 @ 005f25d0 ////

undefined4 * __thiscall FUN_005f25d0(void *this,byte param_1)

{
  FUN_005f2510(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f25f0 @ 005f25f0 ////

void __cdecl
FUN_005f25f0(void *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *param_6 * *param_6;
  fVar2 = fVar1 * *param_6 * 0.5;
  fVar5 = fVar2 - fVar1 * 0.5;
  fVar3 = fVar1 * *param_6 * 1.5;
  fVar4 = (fVar1 + fVar1 + *param_6 * 0.5) - fVar3;
  fVar3 = (fVar3 - fVar1 * 2.5) + 1.0;
  fVar1 = (fVar1 - fVar2) - *param_6 * 0.5;
  local_c = fVar3 * *param_3 + fVar1 * *param_2 + fVar4 * *param_4 + fVar5 * *param_5;
  local_8 = fVar1 * param_2[1] + fVar3 * param_3[1] + fVar4 * param_4[1] + fVar5 * param_5[1];
  local_4 = fVar1 * param_2[2] + fVar3 * param_3[2] + fVar4 * param_4[2] + fVar5 * param_5[2];
  SpawnPointList_Append(param_1,&local_c);
  return;
}


//// FUNCTION FUN_005f2730 @ 005f2730 ////

void __fastcall FUN_005f2730(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d2d8b0;
  return;
}


//// FUNCTION FUN_005f2790 @ 005f2790 ////

void __thiscall FUN_005f2790(void *this,float param_1,int *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  int local_34;
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
  
  pfVar8 = *(float **)((int)param_1 + 4);
  if (pfVar8 == (float *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = (*(int *)((int)param_1 + 8) - (int)pfVar8) / 0xc;
  }
  pfVar1 = pfVar8 + *param_2 * 3;
  param_1 = (float)(param_3 / (local_34 + -3));
  local_c = *pfVar8;
  param_2 = (int *)(1.0 / (float)(int)param_1);
  local_8 = pfVar8[1];
  local_4 = pfVar8[2];
  fVar9 = *pfVar8;
  fVar10 = pfVar8[1];
  local_1c = pfVar8[2];
  local_30 = pfVar8[3];
  local_2c = pfVar8[4];
  local_28 = pfVar8[5];
  local_18 = pfVar8[6];
  local_14 = pfVar8[7];
  local_10 = pfVar8[8];
  iVar7 = local_34 + -1;
  if (((fVar9 != *pfVar1) || (fVar10 != pfVar1[1])) || (local_1c != pfVar1[2])) {
    local_24 = fVar9;
    local_20 = fVar10;
    if (((local_30 == *pfVar1) && (local_2c == pfVar1[1])) && (local_28 == pfVar1[2])) {
      SpawnPointList_Append((void *)((int)this + 4),&local_30);
    }
    else {
      param_1 = 0.0;
      do {
        FUN_005f25f0((void *)((int)this + 4),&local_c,&local_24,&local_30,&local_18,&param_1);
        param_1 = param_1 + (float)param_2;
      } while (param_1 < 1.0);
    }
  }
  if (2 < iVar7) {
    param_3 = local_34 + -3;
    iVar7 = iVar7 - param_3;
    local_c = fVar9;
    local_8 = fVar10;
    pfVar8 = pfVar8 + 6;
    do {
      fVar6 = local_28;
      fVar10 = local_2c;
      fVar9 = local_30;
      local_4 = local_1c;
      local_1c = local_28;
      local_30 = local_18;
      local_2c = local_14;
      local_28 = local_10;
      local_24 = fVar9;
      fVar2 = pfVar8[3];
      fVar3 = pfVar8[4];
      fVar4 = pfVar8[5];
      local_20 = fVar10;
      if (((fVar9 != *pfVar1) || (fVar10 != pfVar1[1])) || (fVar6 != pfVar1[2])) {
        if (((local_18 == *pfVar1) && (local_14 == pfVar1[1])) && (local_10 == pfVar1[2])) {
          local_18 = fVar2;
          local_14 = fVar3;
          local_10 = fVar4;
          SpawnPointList_Append((void *)((int)this + 4),&local_30);
          fVar2 = local_18;
          fVar3 = local_14;
          fVar4 = local_10;
        }
        else {
          param_1 = 0.0;
          local_18 = fVar2;
          local_14 = fVar3;
          local_10 = fVar4;
          do {
            FUN_005f25f0((void *)((int)this + 4),&local_c,&local_24,&local_30,&local_18,&param_1);
            param_1 = param_1 + (float)param_2;
            fVar2 = local_18;
            fVar3 = local_14;
            fVar4 = local_10;
          } while (param_1 < 1.0);
        }
      }
      local_10 = fVar4;
      local_14 = fVar3;
      local_18 = fVar2;
      param_3 = param_3 + -1;
      local_c = fVar9;
      local_8 = fVar10;
      pfVar8 = pfVar8 + 3;
    } while (param_3 != 0);
  }
  local_34 = iVar7;
  fVar3 = local_28;
  fVar2 = local_2c;
  if (0 < local_34) {
    local_4 = local_1c;
    local_24 = local_30;
    bVar5 = local_30 != *pfVar1;
    local_20 = local_2c;
    local_30 = local_18;
    local_28 = local_10;
    local_1c = fVar3;
    local_2c = local_14;
    if (((bVar5) || (fVar2 != pfVar1[1])) || (fVar3 != pfVar1[2])) {
      local_c = fVar9;
      local_8 = fVar10;
      if (((local_18 == *pfVar1) && (local_14 == pfVar1[1])) && (local_10 == pfVar1[2])) {
        SpawnPointList_Append((void *)((int)this + 4),&local_30);
      }
      else {
        param_1 = 0.0;
        do {
          FUN_005f25f0((void *)((int)this + 4),&local_c,&local_24,&local_30,&local_18,&param_1);
          param_1 = param_1 + (float)param_2;
        } while (param_1 < 1.0);
      }
    }
  }
  pfVar8 = *(float **)((int)this + 8);
  if (pfVar8 != *(float **)((int)this + 0xc)) {
    do {
      if (((*pfVar8 == *pfVar1) && (pfVar8[1] == pfVar1[1])) && (pfVar8[2] == pfVar1[2])) {
        *(float **)((int)this + 0x58) = pfVar8;
        break;
      }
      pfVar8 = pfVar8 + 3;
    } while (pfVar8 != *(float **)((int)this + 0xc));
  }
  if (*(int *)((int)this + 8) != 0) {
    *(int *)((int)this + 0x5c) = (*(int *)((int)this + 0xc) - *(int *)((int)this + 8)) / 0xc;
    return;
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  return;
}


//// FUNCTION FUN_005f2be0 @ 005f2be0 ////

undefined4 * __thiscall
FUN_005f2be0(void *this,float param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  void *this_00;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb93d7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d2d8bc;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  puVar6 = (undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x30) = 0;
  *puVar6 = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined ***)((int)this + 0x14) = &PTR_LAB_00d2d8b0;
  *(undefined4 **)((int)this + 0x1c) = puVar6;
  *puVar6 = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x3f800000;
  local_4 = 3;
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  FUN_005f2790(this,param_1,&param_2,(int)param_3);
  piVar4 = *(int **)((int)this + 0x1c);
  piVar1 = (int *)((int)this + 0x28);
  while (piVar4 != piVar1) {
    *piVar4 = 0;
    piVar4 = (int *)piVar4[1];
    *(undefined4 *)(*piVar4 + 4) = 0;
  }
  *piVar1 = (int)this + 0x18;
  iVar2 = (int)this + 0x28;
  *(int **)((int)this + 0x1c) = piVar1;
  *(int *)((int)this + 0x4c) = iVar2;
  *(int *)((int)this + 0x50) = iVar2;
  *(int *)((int)this + 0x54) = iVar2;
  pvVar5 = FUN_0099bb50("cos_screen_border.dds",0,0,0,'\0');
  puVar6 = operator_new(0x3c);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_0041f350(puVar6);
  }
  *(undefined4 **)((int)this + 0x48) = puVar6;
  param_3 = operator_new(0x24);
  local_4._0_1_ = 4;
  if (param_3 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_009910f0(param_3);
  }
  *(undefined4 *)(*(int *)((int)this + 0x48) + 4) = uVar7;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x48) + 4) + 0xc) = 6;
  puVar3 = (uint *)(*(int *)(*(int *)((int)this + 0x48) + 4) + 0x10);
  *puVar3 = *puVar3 & 0xbfffffff;
  this_00 = *(void **)(*(int *)((int)this + 0x48) + 4);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(void **)((int)this_00 + 0x18) != pvVar5) {
    Engine_SetResourceReference(this_00,(int)pvVar5);
  }
  param_3 = (undefined4 *)0xff788d9f;
  *(undefined4 *)(*(int *)((int)this + 0x48) + 8) = 0xff788d9f;
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005f2d90 @ 005f2d90 ////

void __thiscall
FUN_005f2d90(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x10 + param_1 * 0x30 + 0x3a8 + (int)this);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  puVar1[3] = param_6;
  return;
}


//// FUNCTION FUN_005f2dd0 @ 005f2dd0 ////

void __fastcall FUN_005f2dd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_0073e7c0(param_1);
  iVar4 = iVar3 * 0x30;
  uVar1 = *(undefined4 *)(iVar4 + 0x3ac + param_1);
  iVar5 = iVar4 + param_1;
  iVar2 = *(int *)(param_1 + 0x398);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar4 + 0x3a8 + param_1);
  *(undefined4 *)(iVar2 + 0x2c) = uVar1;
  uVar1 = *(undefined4 *)(iVar5 + 0x3b4);
  iVar2 = *(int *)(param_1 + 0x398);
  *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)((iVar3 * 3 + 0x3b) * 0x10 + param_1);
  *(undefined4 *)(iVar2 + 0x34) = uVar1;
  uVar1 = *(undefined4 *)(iVar5 + 0x3bc);
  iVar2 = *(int *)(param_1 + 0x39c);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar5 + 0x3b8);
  *(undefined4 *)(iVar2 + 0x2c) = uVar1;
  uVar1 = *(undefined4 *)(iVar5 + 0x3c4);
  iVar2 = *(int *)(param_1 + 0x39c);
  *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)((iVar3 * 3 + 0x3c) * 0x10 + param_1);
  *(undefined4 *)(iVar2 + 0x34) = uVar1;
  uVar1 = *(undefined4 *)(iVar5 + 0x3cc);
  iVar2 = *(int *)(param_1 + 0x3a0);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar5 + 0x3c8);
  *(undefined4 *)(iVar2 + 0x2c) = uVar1;
  uVar1 = *(undefined4 *)(iVar5 + 0x3d4);
  iVar2 = *(int *)(param_1 + 0x3a0);
  *(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)((iVar3 * 3 + 0x3d) * 0x10 + param_1);
  *(undefined4 *)(iVar2 + 0x34) = uVar1;
  return;
}


//// FUNCTION FUN_005f2ef0 @ 005f2ef0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005f2ef0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined4 local_c;
  
  fVar3 = *(float *)(param_1 + 0x9c);
  fVar1 = *(float *)(param_1 + 0xe4);
  fVar4 = *(float *)(param_1 + 0x108);
  fVar2 = *(float *)(param_1 + 0xc0);
  iVar5 = *(int *)(param_1 + 0x398);
  if (*(int *)(param_1 + 0x3a4) == 0) {
    fVar6 = fVar2 + _DAT_00e55a54;
    local_c = fVar4 - _DAT_00e55a54;
    *(float *)(iVar5 + 0x10) = fVar2;
    *(float *)(iVar5 + 0x14) = fVar3;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    iVar5 = *(int *)(param_1 + 0x3a0);
    *(float *)(iVar5 + 0x20) = fVar1;
    *(float *)(iVar5 + 0x1c) = fVar4;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    if (local_c < fVar6) {
      local_c = (fVar6 + local_c) * 0.5;
      fVar6 = local_c;
    }
    iVar5 = *(int *)(param_1 + 0x398);
    *(float *)(iVar5 + 0x1c) = fVar6;
    *(float *)(iVar5 + 0x20) = fVar1;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    iVar5 = *(int *)(param_1 + 0x39c);
    *(float *)(iVar5 + 0x10) = fVar6;
    *(float *)(iVar5 + 0x14) = fVar3;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    iVar5 = *(int *)(param_1 + 0x39c);
    *(float *)(iVar5 + 0x20) = fVar1;
    *(float *)(iVar5 + 0x1c) = local_c;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    iVar5 = *(int *)(param_1 + 0x3a0);
    *(float *)(iVar5 + 0x10) = local_c;
    *(float *)(iVar5 + 0x14) = fVar3;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    FUN_005f2dd0(param_1);
    return;
  }
  *(float *)(iVar5 + 0x10) = fVar2;
  *(float *)(iVar5 + 0x14) = fVar3;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  fVar6 = _DAT_00e55a54 + fVar3;
  iVar5 = *(int *)(param_1 + 0x398);
  *(float *)(iVar5 + 0x1c) = fVar4;
  *(float *)(iVar5 + 0x20) = fVar6;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  iVar5 = *(int *)(param_1 + 0x39c);
  fVar3 = _DAT_00e55a54 + fVar3;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(float *)(iVar5 + 0x10) = fVar2;
  *(float *)(iVar5 + 0x14) = fVar3;
  iVar5 = *(int *)(param_1 + 0x39c);
  fVar3 = fVar1 - _DAT_00e55a54;
  *(float *)(iVar5 + 0x1c) = fVar4;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  *(float *)(iVar5 + 0x20) = fVar3;
  iVar5 = *(int *)(param_1 + 0x3a0);
  fVar3 = fVar1 - _DAT_00e55a54;
  *(undefined4 *)(iVar5 + 0x18) = 0;
  *(float *)(iVar5 + 0x10) = fVar2;
  *(float *)(iVar5 + 0x14) = fVar3;
  iVar5 = *(int *)(param_1 + 0x3a0);
  *(float *)(iVar5 + 0x1c) = fVar4;
  *(float *)(iVar5 + 0x20) = fVar1;
  *(undefined4 *)(iVar5 + 0x24) = 0;
  FUN_005f2dd0(param_1);
  return;
}


//// FUNCTION FUN_005f3080 @ 005f3080 ////

void __fastcall FUN_005f3080(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  FUN_005f2ef0(param_1);
  piVar3 = (int *)(param_1 + 0x398);
  iVar2 = 3;
  do {
    uVar1 = FUN_0099a0a0((void *)*piVar3,(float *)(param_1 + 0x1f0));
    if ((char)uVar1 != '\0') {
      FUN_007477d0(*(void **)(param_1 + 0x2d4),*piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_005f30d0 @ 005f30d0 ////

void __fastcall FUN_005f30d0(undefined4 *param_1)

{
  param_1[0xe0] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0xe2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe2] = param_1[0xe1];
  }
  if (param_1[0xe1] != 0) {
    *(undefined4 *)(param_1[0xe1] + 4) = param_1[0xe2];
  }
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe5] = 0;
  if ((undefined4 *)param_1[0xe2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe2] = param_1[0xe1];
  }
  if (param_1[0xe1] != 0) {
    *(undefined4 *)(param_1[0xe1] + 4) = param_1[0xe2];
  }
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xda] = &PTR_FUN_00d1a200;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xd3] = &PTR_LAB_00d1b944;
  if ((undefined4 *)param_1[0xd5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd5] = param_1[0xd4];
  }
  if (param_1[0xd4] != 0) {
    *(undefined4 *)(param_1[0xd4] + 4) = param_1[0xd5];
  }
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 0;
  if ((undefined4 *)param_1[0xd5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd5] = param_1[0xd4];
  }
  if (param_1[0xd4] != 0) {
    *(undefined4 *)(param_1[0xd4] + 4) = param_1[0xd5];
  }
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_005f3230 @ 005f3230 ////

void __fastcall FUN_005f3230(undefined4 *param_1)

{
  void *_Memory;
  int *piVar1;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb93f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d2d904;
  param_1[0x14] = &PTR_FUN_00d2d8ec;
  local_4 = 0;
  piVar1 = param_1 + 0xe6;
  local_14 = 3;
  while (*piVar1 == 0) {
    piVar1 = piVar1 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      local_4 = 0xffffffff;
      FUN_005f30d0(param_1);
      ExceptionList = pvStack_c;
      return;
    }
  }
  _Memory = *(void **)(*piVar1 + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*piVar1);
}


//// FUNCTION FUN_005f32e0 @ 005f32e0 ////

undefined4 * __thiscall FUN_005f32e0(void *this,undefined4 *param_1)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb9423;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00667700(this);
  *(undefined ***)this = &PTR_FUN_00d2d904;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d2d8ec;
  local_4 = 0;
  pvVar2 = FUN_0099bb50((char *)*param_1,0,0,0,'\0');
  piVar5 = (int *)((int)this + 0x398);
  local_18 = 3;
  do {
    puVar3 = operator_new(0x3c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_0041f350(puVar3);
    }
    *piVar5 = (int)puVar3;
    puVar3 = operator_new(0x24);
    local_4._0_1_ = 1;
    if (puVar3 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009910f0(puVar3);
    }
    *(undefined4 *)(*piVar5 + 4) = uVar4;
    *(undefined1 *)(*(int *)(*piVar5 + 4) + 0xc) = 6;
    puVar1 = (uint *)(*(int *)(*piVar5 + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    local_4 = (uint)local_4._1_3_ << 8;
    if (*(void **)((int)*(void **)(*piVar5 + 4) + 0x18) != pvVar2) {
      Engine_SetResourceReference(*(void **)(*piVar5 + 4),(int)pvVar2);
    }
    *(undefined4 *)(*piVar5 + 8) = 0x80ffffff;
    piVar5 = piVar5 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  *(undefined4 *)((int)this + 0x3a4) = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_0099b400(pvVar2);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_005f3400 @ 005f3400 ////

undefined4 * __thiscall FUN_005f3400(void *this,byte param_1)

{
  FUN_005f3230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f3540 @ 005f3540 ////

undefined4 * __fastcall FUN_005f3540(undefined4 *param_1)

{
  FUN_006899b0(param_1);
  *param_1 = &PTR_FUN_00d2da34;
  param_1[0x14] = &PTR_FUN_00d2da1c;
  return param_1;
}


//// FUNCTION FUN_005f35e0 @ 005f35e0 ////

undefined4 __thiscall FUN_005f35e0(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                       &TM::WGenericSlider::RTTI_Type_Descriptor,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    fVar3 = FUN_0069a3b0(iVar1);
    *(float *)(DAT_00f87aa0 + 0xe8) = (float)(fVar3 * (float10)2.3561945 + (float10)0.2617994);
    fVar3 = FUN_004012c0(*(float *)(DAT_00f87aa0 + 0xe8));
    uVar2 = FUN_009a1950(&DAT_0105c2e8,(float)fVar3);
    *(undefined4 *)((int)this + 0x1078) = *(undefined4 *)(DAT_00f87aa0 + 0xe8);
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_005f3790 @ 005f3790 ////

void FUN_005f3790(void)

{
  DAT_01050c3c = 0;
  return;
}


//// FUNCTION FUN_005f37b0 @ 005f37b0 ////

undefined4 * __thiscall FUN_005f37b0(void *this,byte param_1)

{
  FUN_00a217d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f3860 @ 005f3860 ////

int * __thiscall FUN_005f3860(void *this,byte param_1)

{
  FUN_005eead0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f3880 @ 005f3880 ////

int * __thiscall FUN_005f3880(void *this,byte param_1)

{
  FUN_005e3c70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ApplicantSpawnDispatcher_OnMessage @ 005f38a0 ////

void __thiscall ApplicantSpawnDispatcher_OnMessage(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_0046f5e0(param_1);
  if (iVar2 == 0xf6a) {
    Applicant_ConstructStagedStaff();
  }
  else {
    if (iVar2 != 0xf92) {
      ApplicantSpawnDispatcher_UnrecognizedMessageNoOp();
      return;
    }
    piVar1 = (int *)((int)this + 0x48);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined4 **)this)(1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_005f38f0 @ 005f38f0 ////

void * __thiscall FUN_005f38f0(void *this,byte param_1)

{
  FUN_009a5b60((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005f3930 @ 005f3930 ////

void __fastcall FUN_005f3930(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    FUN_009d2b50(*(undefined4 **)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


//// FUNCTION FUN_005f3990 @ 005f3990 ////

void __fastcall FUN_005f3990(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
    FUN_009d2c50(*(void **)(param_1 + 0x1c),(void *)0x0,'\x01',-1.0,-1.0);
  }
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    FUN_009d2b50(*(undefined4 **)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


//// FUNCTION FUN_005f3a20 @ 005f3a20 ////

void __fastcall FUN_005f3a20(int param_1)

{
  *(undefined1 *)(param_1 + 0x4d1) = 1;
  return;
}


//// FUNCTION FUN_005f3a30 @ 005f3a30 ////

int * __thiscall FUN_005f3a30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3a70 @ 005f3a70 ////

int * __thiscall FUN_005f3a70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3ae0 @ 005f3ae0 ////

int * __thiscall FUN_005f3ae0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3b50 @ 005f3b50 ////

int * __thiscall FUN_005f3b50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3b70 @ 005f3b70 ////

int * __thiscall FUN_005f3b70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3be0 @ 005f3be0 ////

int * __thiscall FUN_005f3be0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3c50 @ 005f3c50 ////

int * __thiscall FUN_005f3c50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3c80 @ 005f3c80 ////

void __fastcall FUN_005f3c80(int param_1)

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


//// FUNCTION FUN_005f3ca0 @ 005f3ca0 ////

void __fastcall FUN_005f3ca0(int param_1)

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


//// FUNCTION FUN_005f3cd0 @ 005f3cd0 ////

int * __thiscall FUN_005f3cd0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3d10 @ 005f3d10 ////

void __fastcall FUN_005f3d10(int param_1)

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


//// FUNCTION FUN_005f3d40 @ 005f3d40 ////

int * __thiscall FUN_005f3d40(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3d60 @ 005f3d60 ////

int * __thiscall FUN_005f3d60(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3da0 @ 005f3da0 ////

void __fastcall FUN_005f3da0(int param_1)

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


//// FUNCTION FUN_005f3dd0 @ 005f3dd0 ////

int * __thiscall FUN_005f3dd0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3e10 @ 005f3e10 ////

void __fastcall FUN_005f3e10(int param_1)

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


//// FUNCTION FUN_005f3e40 @ 005f3e40 ////

int * __thiscall FUN_005f3e40(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3e80 @ 005f3e80 ////

int * __thiscall FUN_005f3e80(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3ef0 @ 005f3ef0 ////

int * __thiscall FUN_005f3ef0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3f60 @ 005f3f60 ////

int * __thiscall FUN_005f3f60(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f3fa0 @ 005f3fa0 ////

void __fastcall FUN_005f3fa0(int param_1)

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


//// FUNCTION FUN_005f3fd0 @ 005f3fd0 ////

int * __thiscall FUN_005f3fd0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f4040 @ 005f4040 ////

int * __thiscall FUN_005f4040(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f40b0 @ 005f40b0 ////

int * __thiscall FUN_005f40b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f4120 @ 005f4120 ////

int * __thiscall FUN_005f4120(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f4190 @ 005f4190 ////

int * __thiscall FUN_005f4190(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005f41d0 @ 005f41d0 ////

void __fastcall FUN_005f41d0(int param_1)

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


//// FUNCTION FUN_005f4730 @ 005f4730 ////

void __cdecl FUN_005f4730(int *param_1)

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


//// FUNCTION FUN_005f4770 @ 005f4770 ////

void __cdecl FUN_005f4770(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x2d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
  }
  return;
}


//// FUNCTION FUN_005f4870 @ 005f4870 ////

void __cdecl FUN_005f4870(int param_1)

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


//// FUNCTION FUN_005f48a0 @ 005f48a0 ////

void __cdecl FUN_005f48a0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x2d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x2d);
  }
  return;
}


//// FUNCTION FUN_005f48d0 @ 005f48d0 ////

void __fastcall FUN_005f48d0(int *param_1)

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


//// FUNCTION FUN_005f4930 @ 005f4930 ////

void __fastcall FUN_005f4930(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x2d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x2d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x2d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x2d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x2d) == '\0');
    if (*(char *)((int)piVar4 + 0x2d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_005f4a80 @ 005f4a80 ////

void __cdecl FUN_005f4a80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_005f4b80 @ 005f4b80 ////

int * __thiscall FUN_005f4b80(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  return this;
}


//// FUNCTION FUN_005f4c20 @ 005f4c20 ////

undefined4 * __cdecl FUN_005f4c20(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar1 = param_3 + -8;
    iVar2 = param_2 + -0x20;
    (**(code **)(param_3[-8] + 4))();
    param_3[-3] = *(undefined4 *)(param_2 + -0xc);
    (**(code **)*puVar1)();
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = puVar1;
    param_2 = iVar2;
  } while (iVar2 != param_1);
  return puVar1;
}


//// FUNCTION FUN_005f4d20 @ 005f4d20 ////

void __thiscall FUN_005f4d20(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0xa4) + 8);
  *param_1 = *(undefined4 *)(iVar1 + 0x20);
  param_1[1] = *(undefined4 *)(iVar1 + 0x24);
  param_1[2] = *(undefined4 *)(iVar1 + 0x28);
  return;
}


//// FUNCTION FUN_005f4f20 @ 005f4f20 ////

undefined4 * __thiscall FUN_005f4f20(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


