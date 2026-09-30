//// FUNCTION FUN_00572280 @ 00572280 ////

undefined4 __cdecl FUN_00572280(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_0104cf08;
  if (DAT_0104cf08 != &DAT_0104cf14) {
    do {
      iVar2 = _wcscmp(*(wchar_t **)(puVar3[2] + 0x4c8),(wchar_t *)*param_1);
      if (iVar2 == 0) {
        return puVar3[2];
      }
      puVar1 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cf14);
  }
  return 0;
}


//// FUNCTION FUN_005722d0 @ 005722d0 ////

int * __thiscall FUN_005722d0(void *this,byte param_1)

{
  FUN_00572180(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005722f0 @ 005722f0 ////

void __thiscall FUN_005722f0(void *this,undefined4 *param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *unaff_EBX;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_168;
  uint local_164;
  uint local_160;
  byte local_15c [3];
  undefined1 uStack_159;
  int *local_148;
  undefined4 local_144;
  uint uStack_140;
  void *pvStack_128;
  undefined1 *local_124;
  uint local_120;
  undefined4 local_11c;
  undefined1 local_118 [16];
  void *pvStack_108;
  char *local_104;
  uint local_100;
  undefined4 local_fc;
  char local_f8 [16];
  undefined4 uStack_e8;
  undefined4 local_e4 [53];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1eb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_148 = this;
  FUN_00598f90((int)this);
  FUN_00559fb0(local_e4);
  local_4 = 0;
  puVar3 = FUN_0040d6b0(&local_168,"person/",param_1);
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,puVar3,'\x01');
  if (0x14 < local_160) {
                    /* WARNING: Subroutine does not return */
    _free(local_168);
  }
  local_124 = local_118;
  local_118[0] = 0;
  local_120 = 0;
  local_11c = 0x14;
  local_168 = local_15c;
  local_15c[0] = 0;
  local_164 = 0;
  local_160 = 0x14;
  _strncpy((char *)local_168,"gender_male",0xb);
  local_164 = 0xb;
  local_168[0xb] = 0;
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"gender",6);
  local_100 = 6;
  local_104[6] = '\0';
  local_4._0_1_ = 4;
  puVar3 = FUN_005584e0(local_e4,&local_144,&local_104);
  piVar2 = local_148;
  pbVar5 = (byte *)*puVar3;
  local_4 = CONCAT31(local_4._1_3_,5);
  pbVar6 = local_168;
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00572460:
      iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00572465;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00572460;
    pbVar5 = pbVar5 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00572465:
  (**(code **)(*local_148 + 0xe0))(iVar4 != 0);
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(local_148);
  }
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_108);
  }
  if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  local_160 = local_160 & 0xffffff00;
  local_168 = (byte *)0x0;
  local_164 = 0x14;
  _strncpy((char *)&local_160,"namekey",7);
  local_168 = (byte *)0x7;
  uStack_159 = 0;
  puStack_8._0_1_ = 6;
  puVar3 = FUN_005584e0(&uStack_e8,&local_148,(undefined4 *)&stack0xfffffe94);
  FUN_004015d0(&pvStack_128,(char *)*puVar3,puVar3[1]);
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(local_148);
  }
  puStack_8._0_1_ = 2;
  if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
    _free(&local_160);
  }
  if (local_124 != (undefined1 *)0x0) {
    puVar3 = FUN_009b5030(&local_148,&pvStack_128);
    FUN_004036d0(piVar2 + 0x132,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < uStack_140) {
                    /* WARNING: Subroutine does not return */
      _free(local_148);
    }
  }
  local_160 = local_160 & 0xffffff00;
  local_168 = (byte *)0x0;
  local_164 = 0x14;
  _strncpy((char *)&local_160,"name",4);
  local_168 = (byte *)0x4;
  local_15c[0] = 0;
  puStack_8._0_1_ = 7;
  puVar3 = FUN_005584e0(&uStack_e8,&local_148,(undefined4 *)&stack0xfffffe94);
  FUN_004015d0(&pvStack_128,(char *)*puVar3,puVar3[1]);
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(local_148);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
    _free(&local_160);
  }
  if (local_124 != (undefined1 *)0x0) {
    puVar3 = FUN_00568790(&local_148,&pvStack_128);
    FUN_004036d0(piVar2 + 0x132,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < uStack_140) {
                    /* WARNING: Subroutine does not return */
      _free(local_148);
    }
  }
  if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_128);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00558920(&uStack_e8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_005726a0 @ 005726a0 ////

int * __cdecl FUN_005726a0(int *param_1,int param_2,uint *param_3)

{
  wchar_t *pwVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  wchar_t *local_b0;
  uint local_ac;
  uint local_a8;
  wchar_t local_a4 [10];
  int local_90;
  wchar_t *local_8c;
  uint local_88;
  uint local_84;
  wchar_t local_80 [10];
  wchar_t *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb1ef9;
  local_c = ExceptionList;
  local_b0 = local_a4;
  local_a4[0] = L'\0';
  local_ac = 0;
  local_a8 = 10;
  local_4 = 0;
  local_90 = 0;
  ExceptionList = &local_c;
  do {
    uVar8 = 0;
    if (param_3 != (uint *)0x0) {
      uVar8 = *param_3 * 0x19660d + 0x3c6ef35f;
      *param_3 = uVar8;
    }
    if (param_2 == 1) {
      local_6c = (wchar_t *)local_60;
      local_60[0] = 0;
      local_68 = 0;
      local_64 = 0x14;
      _strncpy((char *)local_6c,"NAME_FEMALE",0xb);
      local_68 = 0xb;
      *(char *)((int)local_6c + 0xb) = '\0';
      local_4 = CONCAT31(local_4._1_3_,2);
      puVar2 = FUN_009b7190(local_2c,&local_6c,'\0',uVar8);
      uVar8 = puVar2[1];
      pwVar1 = (wchar_t *)*puVar2;
      if (local_a8 <= uVar8) {
        if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        uVar4 = uVar8 + 0x20 >> 5;
        local_a8 = uVar4 << 5;
        local_b0 = _malloc(uVar4 * 0x40);
      }
      _wcsncpy(local_b0,pwVar1,uVar8);
      local_b0[uVar8] = L'\0';
      local_ac = uVar8;
      pwVar1 = local_6c;
      uVar8 = local_64;
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
    else {
      local_8c = local_80;
      local_80[0] = local_80[0] & 0xff00;
      local_88 = 0;
      local_84 = 0x14;
      _strncpy((char *)local_8c,"NAME_MALE",9);
      local_88 = 9;
      *(char *)((int)local_8c + 9) = '\0';
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar2 = FUN_009b7190(local_4c,&local_8c,'\0',uVar8);
      uVar8 = puVar2[1];
      pwVar1 = (wchar_t *)*puVar2;
      if (local_a8 <= uVar8) {
        if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
          _free(local_b0);
        }
        local_a8 = uVar8 + 0x20 & 0xffffffe0;
        local_b0 = _malloc(local_a8 * 2);
      }
      _wcsncpy(local_b0,pwVar1,uVar8);
      local_b0[uVar8] = L'\0';
      local_ac = uVar8;
      pwVar1 = local_8c;
      uVar8 = local_84;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
    }
    local_4 = local_4 & 0xffffff00;
    if (0x14 < uVar8) {
                    /* WARNING: Subroutine does not return */
      _free(pwVar1);
    }
    iVar3 = FUN_00572280(&local_b0);
    uVar8 = local_ac;
    pwVar1 = local_b0;
    if (iVar3 == 0) goto LAB_00572a99;
    local_90 = local_90 + 1;
  } while (local_90 < 10);
  local_8c = local_80;
  iVar3 = 2;
  local_80[0] = L'\0';
  local_88 = 0;
  local_84 = 10;
  if (9 < local_ac) {
    uVar4 = local_ac + 0x20 >> 5;
    local_84 = uVar4 << 5;
    local_8c = _malloc(uVar4 * 0x40);
  }
  _wcsncpy(local_8c,pwVar1,uVar8);
  local_88 = uVar8;
  local_8c[uVar8] = L'\0';
  local_4 = CONCAT31(local_4._1_3_,3);
  while( true ) {
    puVar2 = FUN_00569e90(&local_6c,iVar3);
    puVar5 = FUN_0043be60(local_4c,&local_8c,L" ");
    puVar2 = FUN_00443250(local_2c,puVar5,puVar2);
    uVar8 = puVar2[1];
    pwVar1 = (wchar_t *)*puVar2;
    if (local_a8 <= uVar8) {
      if (10 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      local_a8 = uVar8 + 0x20 & 0xffffffe0;
      local_b0 = _malloc(local_a8 * 2);
    }
    _wcsncpy(local_b0,pwVar1,uVar8);
    local_b0[uVar8] = L'\0';
    local_ac = uVar8;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    iVar3 = iVar3 + 1;
    puVar2 = DAT_0104cf08;
    if (DAT_0104cf08 == &DAT_0104cf14) break;
    while (iVar6 = _wcscmp(*(wchar_t **)(puVar2[2] + 0x4c8),local_b0), iVar6 != 0) {
      puVar5 = puVar2 + 1;
      puVar2 = (undefined4 *)*puVar5;
      if ((undefined4 *)*puVar5 == &DAT_0104cf14) goto LAB_00572a86;
    }
    if (puVar2[2] == 0) break;
  }
LAB_00572a86:
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
LAB_00572a99:
  uVar8 = local_ac;
  pwVar1 = local_b0;
  *param_1 = (int)(param_1 + 3);
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  if (9 < local_ac) {
    uVar4 = local_ac + 0x20 & 0xffffffe0;
    param_1[2] = uVar4;
    pvVar7 = _malloc(uVar4 * 2);
    *param_1 = (int)pvVar7;
  }
  _wcsncpy((wchar_t *)*param_1,pwVar1,uVar8);
  param_1[1] = uVar8;
  *(undefined2 *)(*param_1 + uVar8 * 2) = 0;
  if (local_a8 < 0xb) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_b0);
}


//// FUNCTION FUN_00572b70 @ 00572b70 ////

void __fastcall FUN_00572b70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d24ed4;
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


//// FUNCTION FUN_00572bc0 @ 00572bc0 ////

undefined4 * __thiscall FUN_00572bc0(void *this,byte param_1)

{
  FUN_00572b70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00572be0 @ 00572be0 ////

void __fastcall FUN_00572be0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d24ed4;
  return;
}


//// FUNCTION FUN_00572c40 @ 00572c40 ////

void __fastcall FUN_00572c40(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00572c70 @ 00572c70 ////

void FUN_00572c70(void)

{
  return;
}


//// FUNCTION FUN_00572cc0 @ 00572cc0 ////

void __fastcall FUN_00572cc0(int *param_1)

{
  undefined4 *puVar1;
  void *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1f3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x1da) = 1;
  puVar1 = (undefined4 *)FUN_005998e0((int)param_1);
  TMCharacter_CancelAction(param_1,puVar1);
  (**(code **)(*param_1 + 0x10c))();
  this = operator_new(0x128);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = DesireLeave_Constructor(this,param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar1);
  FUN_00571a60(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00572da0 @ 00572da0 ////

bool __fastcall FUN_00572da0(int param_1)

{
  return (bool)('\x01' - (0x14U < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0x78c)))
               );
}


//// FUNCTION FUN_00572dc0 @ 00572dc0 ////

int __fastcall FUN_00572dc0(void *param_1)

{
  undefined4 uVar1;
  uint3 uVar2;
  uint3 extraout_var;
  
  uVar1 = FUN_0059be60(param_1);
  uVar2 = (uint3)((uint)uVar1 >> 8);
  if ((char)uVar1 != '\0') {
    if (*(char *)((int)param_1 + 0x6f0) != '\0') {
      (**(code **)(*(int *)((int)param_1 + -0x78) + 0x154))();
      uVar2 = extraout_var;
    }
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


//// FUNCTION FUN_00572df0 @ 00572df0 ////

void __fastcall FUN_00572df0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00572ea0 @ 00572ea0 ////

int * __thiscall FUN_00572ea0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00572fb0 @ 00572fb0 ////

void __cdecl FUN_00572fb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_005730f0 @ 005730f0 ////

void FUN_005730f0(void)

{
  FUN_00ace9b0();
  return;
}


//// FUNCTION FUN_00573210 @ 00573210 ////

void __fastcall FUN_00573210(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x784) != 0) {
    iVar1 = FUN_005890e0(*(int *)(param_1 + 0x784));
    if (iVar1 != 0) {
      iVar1 = FUN_005890e0(*(int *)(param_1 + 0x784));
      iVar1 = FUN_00491450(iVar1);
      *(int *)(param_1 + 0x76c) = iVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00573240 @ 00573240 ////

void __thiscall FUN_00573240(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x770) + 4))();
  *(undefined4 *)((int)this + 0x784) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x770))();
  return;
}


//// FUNCTION FUN_005732b0 @ 005732b0 ////

void FUN_005732b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104cf80;
  if (DAT_0104cf80 != (undefined4 *)0x0) {
    iVar1 = DAT_0104cf80[0x12];
    DAT_0104cf80[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104cf6c[1])();
    DAT_0104cf80 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x005732f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104cf6c)();
    return;
  }
  return;
}


//// FUNCTION FUN_005734d0 @ 005734d0 ////

void __cdecl FUN_005734d0(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_00573530 @ 00573530 ////

void __cdecl FUN_00573530(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00573560 @ 00573560 ////

void __fastcall FUN_00573560(int *param_1)

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
  puStack_8 = &LAB_00cb1f58;
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


//// FUNCTION FUN_00573630 @ 00573630 ////

void __fastcall FUN_00573630(int param_1)

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
  puStack_8 = &LAB_00cb1f88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Photographer.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1f;
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
  uVar3 = FUN_0098b490("(int&)(PhotoToDevelop)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x6f4),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Photographer.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x6f8));
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
  uVar3 = FUN_0098b490("PTarget");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x6f8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Photographer.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x21;
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
  uVar3 = FUN_0098b490("Fired");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x6f0),1);
  }
  FUN_0059d8d0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00573950 @ 00573950 ////

undefined4 * FUN_00573950(undefined4 *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb1fa8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"staff_Photographer",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4 = 0;
  FUN_009b5030(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_005739f0 @ 005739f0 ////

void __fastcall FUN_005739f0(int *param_1)

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
  puStack_8 = &LAB_00cb1fc8;
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


//// FUNCTION FUN_00573b50 @ 00573b50 ////

void __thiscall FUN_00573b50(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d24fb0;
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


//// FUNCTION FUN_00573ba0 @ 00573ba0 ////

void __fastcall FUN_00573ba0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d24fb0;
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


//// FUNCTION FUN_00573c10 @ 00573c10 ////

void __cdecl FUN_00573c10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00573c70 @ 00573c70 ////

void __fastcall FUN_00573c70(int *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb2004;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d24ffc;
  param_1[0x1e] = (int)&PTR_LAB_00d24fd8;
  param_1[0x28] = (int)&PTR_FUN_00d24fc0;
  local_4 = 2;
  FUN_0059a1f0(param_1);
  if ((int *)param_1[0x1d7] != (int *)0x0) {
    *(int *)param_1[0x1d7] = param_1[0x1d6];
  }
  if (param_1[0x1d6] != 0) {
    *(int *)(param_1[0x1d6] + 4) = param_1[0x1d7];
  }
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  if (param_1[0x1e2] != 0) {
    _Memory = *(void **)(param_1[0x1e2] + 0x18);
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)(param_1[0x1e2] + 0x18) = 0;
    puVar1 = (undefined4 *)param_1[0x1e2];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_0105b588 = uVar2;
      param_1[0x1e2] = 0;
    }
  }
  param_1[0x1dc] = (int)&PTR_FUN_00d16954;
  if ((int *)param_1[0x1de] != (int *)0x0) {
    *(int *)param_1[0x1de] = param_1[0x1dd];
  }
  if (param_1[0x1dd] != 0) {
    *(int *)(param_1[0x1dd] + 4) = param_1[0x1de];
  }
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1e1] = 0;
  if ((int *)param_1[0x1de] != (int *)0x0) {
    *(int *)param_1[0x1de] = param_1[0x1dd];
  }
  if (param_1[0x1dd] != 0) {
    *(int *)(param_1[0x1dd] + 4) = param_1[0x1de];
  }
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  if ((int *)param_1[0x1d7] != (int *)0x0) {
    *(int *)param_1[0x1d7] = param_1[0x1d6];
  }
  if (param_1[0x1d6] != 0) {
    *(int *)(param_1[0x1d6] + 4) = param_1[0x1d7];
  }
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  local_4 = 0xffffffff;
  FUN_00572180(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00573e30 @ 00573e30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00573e30(int *param_1)

{
  int *piVar1;
  bool bVar2;
  float *pfVar3;
  void *pvVar4;
  void *this;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float local_4c;
  int *local_48;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30 [3];
  undefined4 local_24 [3];
  undefined4 local_18 [3];
  undefined4 local_c [3];
  
  FUN_0059b810(param_1);
  if (param_1[0x1e2] == 0) {
    return;
  }
  FUN_0040a6f0(param_1[0x1e2]);
  pvVar4 = DAT_00f88720;
  if (param_1 == DAT_0104c6c8) {
    fVar13 = 12.0;
    local_4c = 3.4028235e+38;
    local_48 = (int *)0x0;
    bVar2 = false;
    pfVar3 = (float *)FUN_00598e50(param_1,&local_3c);
    pvVar4 = FUN_00458d80(pvVar4,pfVar3,fVar13);
    puVar10 = *(undefined4 **)((int)pvVar4 + 4);
    if (puVar10 == *(undefined4 **)((int)pvVar4 + 8)) goto LAB_005740f2;
    do {
      piVar1 = (int *)*puVar10;
      this = (void *)FUN_00ace790(piVar1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                  &TM::CStar::RTTI_Type_Descriptor,0);
      if (this != (void *)0x0) {
        iVar5 = FUN_005998e0((int)piVar1);
        if ((((iVar5 == 0) || (iVar6 = FUN_004031b0(*(int *)(iVar5 + 0x25c)), iVar6 == 0)) ||
            (iVar5 = FUN_004031b0(*(int *)(iVar5 + 0x25c)), iVar5 == 0xc)) &&
           (uVar7 = FUN_005856c0((int)this), (char)uVar7 == '\0')) {
          if (!bVar2) {
            FUN_00598e50(param_1,local_30);
            FUN_00598e50(this,local_24);
            fVar11 = (float10)FUN_00412f50();
            if (fVar11 < (float10)local_4c) {
              local_4c = (float)fVar11;
              local_48 = piVar1;
            }
          }
        }
        else {
          pfVar3 = (float *)FUN_00598e50(param_1,local_18);
          pfVar8 = (float *)FUN_00598e50(this,local_c);
          fVar13 = (*pfVar8 - *pfVar3) * (*pfVar8 - *pfVar3) +
                   (pfVar8[1] - pfVar3[1]) * (pfVar8[1] - pfVar3[1]) +
                   (pfVar8[2] - pfVar3[2]) * (pfVar8[2] - pfVar3[2]);
          if (fVar13 < local_4c) {
            bVar2 = true;
            local_4c = fVar13;
            local_48 = piVar1;
          }
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != *(undefined4 **)((int)pvVar4 + 8));
    if (local_48 == (int *)0x0) goto LAB_005740f2;
    pfVar3 = (float *)FUN_00598e50(local_48,local_c);
    fVar11 = (float10)*pfVar3 - (float10)(float)param_1[0x40];
    fVar12 = (float10)pfVar3[1] - (float10)(float)param_1[0x41];
    if ((float10)_DAT_00e531f8 <
        fVar11 * fVar11 +
        fVar12 * fVar12 +
        ((float10)pfVar3[2] - (float10)(float)param_1[0x42]) *
        ((float10)pfVar3[2] - (float10)(float)param_1[0x42])) {
      fVar11 = (float10)fpatan(fVar12,fVar11);
      fVar11 = FUN_004012c0((float)fVar11);
      param_1[0x31] = (int)(float)fVar11;
    }
    puVar10 = *(undefined4 **)(param_1[0x1e2] + 0x20);
    puVar10[0xc] = puVar10[0xc] & 0xfffffeff;
    puVar9 = FUN_00598e50(local_48,local_c);
    local_3c = *puVar9;
    local_34 = (float)puVar9[2] + 0.6;
    local_38 = puVar9[1];
    *puVar10 = local_3c;
    puVar10[1] = local_38;
    puVar10[2] = local_34;
    fVar11 = (float10)FUN_005730f0();
    *(char *)(puVar10 + 0xc) = bVar2 + '\x02';
  }
  else {
    if (param_1[0x1db] == 0xc) goto LAB_005740f2;
    puVar10 = *(undefined4 **)(param_1[0x1e2] + 0x20);
    puVar10[0xc] = puVar10[0xc] & 0xfffffeff;
    *(undefined1 *)(puVar10 + 0xc) = 0;
    puVar9 = FUN_00598e50(param_1,local_c);
    local_3c = *puVar9;
    local_34 = (float)puVar9[2] + 0.6;
    local_38 = puVar9[1];
    *puVar10 = local_3c;
    puVar10[1] = local_38;
    puVar10[2] = local_34;
    fVar11 = (float10)FUN_005730f0();
  }
  puVar10[9] = (float)(fVar11 * (float10)0.5);
LAB_005740f2:
  FUN_00995ba0((int *)param_1[0x1e2]);
  return;
}


//// FUNCTION FUN_00574170 @ 00574170 ////

void __fastcall FUN_00574170(undefined4 *param_1)

{
  param_1[0x3b] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0x3d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3d] = param_1[0x3c];
  }
  if (param_1[0x3c] != 0) {
    *(undefined4 *)(param_1[0x3c] + 4) = param_1[0x3d];
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  if ((undefined4 *)param_1[0x3d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3d] = param_1[0x3c];
  }
  if (param_1[0x3c] != 0) {
    *(undefined4 *)(param_1[0x3c] + 4) = param_1[0x3d];
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x2c] = &PTR_FUN_00d1a200;
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
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x29] = param_1[0x28];
  }
  if (param_1[0x28] != 0) {
    *(undefined4 *)(param_1[0x28] + 4) = param_1[0x29];
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x21] = &PTR_LAB_00d165bc;
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
  if (0x14 < (uint)param_1[0x1b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x19]);
  }
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_00574320 @ 00574320 ////

int * __thiscall FUN_00574320(void *this,byte param_1)

{
  FUN_00573c70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00574350 @ 00574350 ////

void __fastcall FUN_00574350(int param_1)

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


//// FUNCTION FUN_00574380 @ 00574380 ////

undefined4 * FUN_00574380(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00573c10(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_005743b0 @ 005743b0 ////

void __thiscall FUN_005743b0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_005743f0 @ 005743f0 ////

undefined4 * __fastcall FUN_005743f0(undefined4 *param_1)

{
  FUN_008433b0(param_1);
  *param_1 = &PTR_FUN_00d251ac;
  return param_1;
}


//// FUNCTION FUN_00574440 @ 00574440 ////

undefined4 * __thiscall FUN_00574440(void *this,byte param_1)

{
  FUN_008381f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00574460 @ 00574460 ////

int * __fastcall FUN_00574460(int *param_1)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *unaff_EBX;
  int *this;
  char *pcVar8;
  float local_38 [3];
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  char local_20 [4];
  undefined1 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb205d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00571f80(param_1);
  *param_1 = (int)&PTR_FUN_00d24ffc;
  param_1[0x1e] = (int)&PTR_LAB_00d24fd8;
  param_1[0x28] = (int)&PTR_FUN_00d24fc0;
  param_1[0x1d8] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  *(undefined1 *)(param_1 + 0x1da) = 0;
  param_1[0x1db] = 0xc;
  param_1[0x1df] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = (int)(param_1 + 0x1dc);
  param_1[0x1dc] = (int)&PTR_FUN_00d16954;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x131] = 9;
  *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) | 2;
  local_4 = 2;
  param_1[0x1d8] = (int)param_1;
  FUN_00acdb9e(0xe5325c);
  iVar2 = FUN_0097dda0();
  param_1[0x1d9] = iVar2;
  if (DAT_00e53258 != '\0') {
    iVar2 = 0x758;
    pcVar8 = "PhotographerLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe5325c);
    FUN_0097df60(pcVar3,pcVar8,iVar2);
    DAT_00e53258 = '\0';
  }
  if (DAT_00f890c0 != (void *)0x0) {
    FUN_00466ee0(DAT_00f890c0,local_38,(float *)(param_1 + 0x40));
    FUN_00599b20(param_1,local_38);
  }
  FUN_0059a1f0(param_1);
  piVar4 = operator_new(0x128);
  local_4._0_1_ = 3;
  if (piVar4 == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_008433b0(piVar4);
    *piVar4 = (int)&PTR_FUN_00d251ac;
    this = piVar4;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = &DAT_00000014;
  _strncpy(local_2c,"photographergate",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*this + 0x44))(&local_2c,0,0);
  uStack_1c = 2;
  if (&DAT_00000014 < piVar4) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  FUN_00842f90(this,0.6);
  FUN_00842f00(this,1);
  TMCharacter_AddResidentDesire(param_1,(int)this);
  pvVar5 = operator_new(0x128);
  uStack_1c = 5;
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = DesireTakePhoto_Constructor(pvVar5,param_1);
  }
  uStack_1c = 2;
  TMCharacter_AddResidentDesire(param_1,(int)puVar6);
  puVar6 = FUN_0040a690(0x21,'\0');
  param_1[0x1e2] = (int)puVar6;
  puVar6 = operator_new(0x24);
  uStack_1c = 6;
  if (puVar6 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_009910f0(puVar6);
  }
  *(undefined4 *)(param_1[0x1e2] + 0x18) = uVar7;
  uStack_1c = 2;
  *(undefined1 *)(*(int *)(param_1[0x1e2] + 0x18) + 0xc) = 6;
  pvVar5 = FUN_0099bb50("ui/icon_press.dds",0,0,0,'\0');
  if (*(void **)((int)*(void **)(param_1[0x1e2] + 0x18) + 0x18) != pvVar5) {
    Engine_SetResourceReference(*(void **)(param_1[0x1e2] + 0x18),(int)pvVar5);
  }
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  puVar1 = (uint *)(*(int *)(param_1[0x1e2] + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  FUN_0099a220((void *)param_1[0x1e2],2);
  FUN_0040a6f0(param_1[0x1e2]);
  ExceptionList = local_24;
  return param_1;
}


//// FUNCTION FUN_00574740 @ 00574740 ////

int * FUN_00574740(void)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb207b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x790);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar1 = FUN_00574460(piVar1);
    ExceptionList = local_c;
    return piVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_005747a0 @ 005747a0 ////

void FUN_005747a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb209b;
  pvStack_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if ((int **)DAT_0104cf40 != &DAT_0104cf4c) {
    puVar2 = (undefined4 *)DAT_0104cf40[2];
    ExceptionList = &pvStack_c;
    if ((undefined4 *)puVar2[0x1d7] != (undefined4 *)0x0) {
      ExceptionList = &pvStack_c;
      *(undefined4 *)puVar2[0x1d7] = puVar2[0x1d6];
    }
    if (puVar2[0x1d6] != 0) {
      *(undefined4 *)(puVar2[0x1d6] + 4) = puVar2[0x1d7];
    }
    puVar2[0x1d6] = 0;
    puVar2[0x1d7] = 0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar3 = puVar2 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  piVar3 = operator_new(0x790);
  uStack_4 = 0;
  if (piVar3 != (int *)0x0) {
    piVar4 = FUN_00574460(piVar3);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar4 + 0xe0))(2);
  piVar1 = piVar4 + 0x1d6;
  piVar4[0x1d7] = (int)&DAT_0104cf4c;
  *piVar1 = (int)DAT_0104cf4c;
  *(int **)((int)DAT_0104cf4c + 4) = piVar1;
  DAT_0104cf4c = piVar1;
  ExceptionList = piVar3;
  return;
}


//// FUNCTION FUN_00574880 @ 00574880 ////

void __fastcall FUN_00574880(int param_1)

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


//// FUNCTION FUN_005748b0 @ 005748b0 ////

void __thiscall FUN_005748b0(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar2 = (undefined4 *)(param_2 + 4);
  if (puVar2 != puVar1) {
    iVar3 = param_2 - (int)puVar2;
    do {
      *(undefined4 *)(iVar3 + (int)puVar2) = *puVar2;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -4;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005748f0 @ 005748f0 ////

void __fastcall FUN_005748f0(int param_1)

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


//// FUNCTION FUN_00574920 @ 00574920 ////

void __fastcall FUN_00574920(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cb20ed;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d25258;
  param_1[0x19] = &PTR_LAB_00d25238;
  local_4 = 2;
  if ((int **)DAT_0104cf40 != &DAT_0104cf4c) {
    do {
      piVar4 = DAT_0104cf4c;
      puVar2 = (undefined4 *)DAT_0104cf4c[2];
      piVar1 = DAT_0104cf4c + 1;
      if ((int *)DAT_0104cf4c[1] != (int *)0x0) {
        *(int *)DAT_0104cf4c[1] = *DAT_0104cf4c;
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
    } while ((int **)DAT_0104cf40 != &DAT_0104cf4c);
  }
  if ((void *)param_1[0x24] == (void *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    local_4 = local_4 & 0xffffff00;
    FUN_0098a1c0(param_1 + 0x19);
    local_4 = 0xffffffff;
    FUN_0053c500(param_1);
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x24]);
}


//// FUNCTION FUN_00574a10 @ 00574a10 ////

void __fastcall FUN_00574a10(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int unaff_EBP;
  ulonglong uVar10;
  int iStack_8;
  undefined1 local_4 [4];
  
  pvVar6 = *(void **)(param_1 + 0x90);
  if (((((pvVar6 != (void *)0x0) && (*(int *)(param_1 + 0x94) - (int)pvVar6 >> 2 != 0)) &&
       (uVar3 = FUN_0043b680(pvVar6,(float *)&DAT_00e4fa4c), (char)uVar3 != '\0')) ||
      ((uVar4 = FUN_0043b490((uint *)(param_1 + 0x9c)), (char)uVar4 == '\0' &&
       ((*(int *)(param_1 + 0x90) == 0 ||
        (*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 2 == 0)))))) &&
     (DAT_0104cf34 == '\0')) {
    if ((int **)DAT_0104cf40 != &DAT_0104cf4c) {
      return;
    }
    iVar5 = AwardBonusManager_Get();
    if (iVar5 == 0) {
      return;
    }
    iVar5 = 6;
    pvVar6 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar6,iVar5);
    if (cVar2 == '\0') {
      return;
    }
  }
  piVar7 = (int *)GetPlayerStudio();
  (**(code **)(*piVar7 + 0x84))(local_4);
  uVar10 = FUN_00acd42c();
  uVar4 = (uint)uVar10;
  iVar5 = AwardBonusManager_Get();
  if (iVar5 != 0) {
    iVar5 = 6;
    pvVar6 = (void *)AwardBonusManager_Get();
    cVar2 = AwardBonusManager_IsBonusActive(pvVar6,iVar5);
    if ((cVar2 != '\0') && (uVar4 < 2)) {
      uVar4 = 1;
    }
  }
  if (DAT_0104cf34 != '\0') {
    uVar9 = 0;
    for (piVar7 = DAT_0104cf40; (int **)piVar7 != &DAT_0104cf4c; piVar7 = (int *)piVar7[1]) {
      uVar9 = uVar9 + 1;
    }
    if (uVar9 < DAT_00e531fc) {
      iVar5 = 0;
      for (piVar7 = DAT_0104cf40; (int **)piVar7 != &DAT_0104cf4c; piVar7 = (int *)piVar7[1]) {
        iVar5 = iVar5 + 1;
      }
      if (uVar4 <= iVar5 + 1U) {
        iVar5 = 0;
        piVar7 = DAT_0104cf40;
        if ((int **)DAT_0104cf40 != &DAT_0104cf4c) {
          do {
            piVar8 = piVar7 + 1;
            iVar5 = iVar5 + 1;
            piVar7 = (int *)*piVar8;
          } while ((int **)*piVar8 != &DAT_0104cf4c);
        }
        uVar4 = iVar5 + 1;
      }
    }
    DAT_0104cf34 = '\0';
  }
  while( true ) {
    uVar9 = 0;
    for (piVar7 = DAT_0104cf40; (int **)piVar7 != &DAT_0104cf4c; piVar7 = (int *)piVar7[1]) {
      uVar9 = uVar9 + 1;
    }
    if (uVar4 <= uVar9) break;
    piVar7 = FUN_00574740();
    piVar8 = piVar7 + 0x1d6;
    piVar7[0x1d7] = (int)&DAT_0104cf4c;
    *piVar8 = (int)DAT_0104cf4c;
    DAT_0104cf4c[1] = (int)piVar8;
    DAT_0104cf4c = piVar8;
  }
  while (piVar7 = DAT_0104cf40, uVar9 = 0, piVar8 = DAT_0104cf40,
        (int **)DAT_0104cf40 != &DAT_0104cf4c) {
    do {
      piVar1 = piVar8 + 1;
      uVar9 = uVar9 + 1;
      piVar8 = (int *)*piVar1;
    } while ((int **)*piVar1 != &DAT_0104cf4c);
    if (uVar9 <= uVar4) break;
    piVar1 = (int *)DAT_0104cf40[2];
    piVar8 = DAT_0104cf40 + 1;
    if ((int *)DAT_0104cf40[1] != (int *)0x0) {
      *(int *)DAT_0104cf40[1] = *DAT_0104cf40;
      param_1 = unaff_EBP;
    }
    iVar5 = *piVar7;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = *piVar8;
      param_1 = unaff_EBP;
    }
    *piVar7 = 0;
    *piVar8 = 0;
    (**(code **)(*piVar1 + 0x154))();
  }
  if (((*(int *)(param_1 + 0x90) != 0) &&
      (*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x90) >> 2 != 0)) &&
     (uVar3 = FUN_0043b6c0(*(void **)(param_1 + 0x90),(float *)&DAT_00e4fa4c), (char)uVar3 != '\0'))
  {
    FUN_005748b0((void *)(param_1 + 0x8c),&iStack_8,*(int *)(param_1 + 0x90));
  }
  return;
}


//// FUNCTION FUN_00574c60 @ 00574c60 ////

undefined4 * __thiscall FUN_00574c60(void *this,byte param_1)

{
  FUN_00574920(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00574c80 @ 00574c80 ////

void __fastcall FUN_00574c80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d25278;
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


//// FUNCTION FUN_00574cd0 @ 00574cd0 ////

undefined4 * __thiscall FUN_00574cd0(void *this,byte param_1)

{
  FUN_00574c80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00574cf0 @ 00574cf0 ////

void FUN_00574cf0(void)

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
  puStack_8 = &LAB_00cb2108;
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


//// FUNCTION FUN_00574db0 @ 00574db0 ////

void __thiscall FUN_00574db0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cb2120;
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
      uVar7 = FUN_00574cf0();
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
      puVar4 = (undefined4 *)FUN_00573530(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_00573c10(puVar4,param_2,&param_3);
      FUN_00573530(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
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
      FUN_00573530(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_00574380(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_00572fb0(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_00573530(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_005734d0((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_00572fb0(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00575000 @ 00575000 ////

void __thiscall FUN_00575000(void *this,uint param_1)

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
    FUN_00574db0(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if ((iVar2 != 0) && (param_1 < (uint)((int)*(undefined4 **)((int)this + 8) - iVar2 >> 2))) {
    FUN_005743b0(this,&param_1,(undefined4 *)(iVar2 + param_1 * 4),*(undefined4 **)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_005750c0 @ 005750c0 ////

undefined4 * __fastcall FUN_005750c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2151;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d25258;
  param_1[0x19] = &PTR_LAB_00d25238;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0043b440(param_1 + 0x27,(uint)DAT_00e53204);
  FUN_0043b470(param_1 + 0x27);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00575150 @ 00575150 ////

void FUN_00575150(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb216b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xac);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005750c0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104cf6c[1])();
  DAT_0104cf80 = puVar2;
  (*(code *)*DAT_0104cf6c)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00575200 @ 00575200 ////

void __thiscall FUN_00575200(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00573c10(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_00574db0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00575270 @ 00575270 ////

undefined4 * FUN_00575270(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb218b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xac);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005750c0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_005752d0 @ 005752d0 ////

void __fastcall FUN_005752d0(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  puStack_8 = &LAB_00cb21b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar6 = "C:\\movies\\dev\\TheMovies\\Photographer.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar6;
    DAT_010581d4 = 0x1a7;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar3 = (char *)FUN_00ace33d(0xe532a4);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_4 = 0xffffffff;
  uVar4 = FUN_0098b490("PhotographerList");
  if ((char)uVar4 != '\0') {
    FUN_009897b0(0x104cf38);
  }
  uVar4 = FUN_0098b490("ReappearDates");
  if ((char)uVar4 != '\0') {
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
          pcVar6 = "C:\\movies\\dev\\TheMovies\\Photographer.cpp";
          pcVar3 = (char *)&DAT_010581d8;
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar3 = pcVar3 + 4;
          }
          local_2c = local_20;
          *pcVar3 = *pcVar6;
          DAT_010581d4 = 0x1a8;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 1;
          pcVar3 = (char *)FUN_00ace33d(0xe4fe18);
          pcVar6 = pcVar3;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
          FUN_00989710();
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
        }
        uVar4 = FUN_0098b490("ReappearDates[x]");
        if ((char)uVar4 != '\0') {
          FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x2c) + local_34 * 4),4);
        }
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_005748f0(param_1 + 0x28);
      SLVAR_LoadUint(&local_34);
      uVar2 = local_34;
      FUN_0043b510(&local_30);
      FUN_00575000((void *)(param_1 + 0x28),uVar2);
      local_30 = 0;
      if (local_34 != 0) {
        do {
          if (DAT_00e67469 == '\0') {
            pcVar6 = "C:\\movies\\dev\\TheMovies\\Photographer.cpp";
            pcVar3 = (char *)&DAT_010581d8;
            for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar3 = pcVar3 + 4;
            }
            local_2c = local_20;
            *pcVar3 = *pcVar6;
            DAT_010581d4 = 0x1a8;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 2;
            pcVar3 = (char *)FUN_00ace33d(0xe4fe18);
            pcVar6 = pcVar3;
            do {
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            FUN_004073f0(&local_2c,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
            FUN_00989710();
            local_4 = 0xffffffff;
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
          }
          uVar4 = FUN_0098b490("ReappearDates[x]");
          if ((char)uVar4 != '\0') {
            FUN_0098a430((undefined4 *)(*(int *)(param_1 + 0x2c) + local_30 * 4),4);
          }
          local_30 = local_30 + 1;
        } while (local_30 < local_34);
      }
    }
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION Paparazzi_Constructor @ 00575690 ////

void Paparazzi_Constructor(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  puStack_8 = &LAB_00cb2212;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = (char *)FUN_00acdb9e(0xe5327c);
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
  FUN_0098fa50(FUN_00575270,&local_104);
  local_4 = 0xffffffff;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  FUN_0098f9e0(0x573300);
  FUN_0098fdd0("PPhotographerManager",&DAT_0104cf6c);
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"phot_create",0xb);
  local_120 = 0xb;
  local_124[0xb] = '\0';
  local_4 = 1;
  FUN_005434b0();
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"paparazzi",9);
  local_120 = 9;
  local_124[9] = '\0';
  local_4 = 2;
  FUN_0055c540(local_e4,&local_124);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"absentseconds",0xd);
  local_120 = 0xd;
  local_124[0xd] = '\0';
  local_4._0_1_ = 5;
  uVar3 = FUN_00558750(local_e4,&local_124,0);
  DAT_00e53200 = (short)uVar3 * 10;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"basenumber",10);
  local_120 = 10;
  local_124[10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,6);
  uVar3 = FUN_00558750(local_e4,&local_124,0);
  DAT_00e531fc = (undefined2)uVar3;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00575910 @ 00575910 ////

void __fastcall FUN_00575910(int param_1)

{
  uint uVar1;
  float *pfVar2;
  float10 fVar3;
  float local_8;
  undefined1 local_4 [4];
  
  uVar1 = (uint)DAT_00e53200;
  fVar3 = FUN_0043b970(0xe4fa4c);
  pfVar2 = (float *)FUN_0043b520(local_4,(float)((float10)uVar1 / fVar3));
  FUN_0043b600(&DAT_00e4fa4c,&local_8,pfVar2);
  FUN_00575200((void *)(param_1 + 0x8c),&local_8);
  return;
}


//// FUNCTION FUN_00575970 @ 00575970 ////

void __fastcall FUN_00575970(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d25278;
  return;
}


//// FUNCTION FUN_005759d0 @ 005759d0 ////

void __fastcall FUN_005759d0(int *param_1)

{
  int iVar1;
  void *this;
  
  if (param_1[0x1e1] != 0) {
    iVar1 = FUN_005890e0(param_1[0x1e1]);
    if (iVar1 != 0) {
      iVar1 = param_1[0x1db];
      this = (void *)FUN_005890e0(param_1[0x1e1]);
      FUN_00493920(this,iVar1);
    }
  }
  if (param_1[0x1db] != 0xc) {
    FUN_00575910(DAT_0104cf80);
  }
  FUN_00599170(param_1);
  return;
}


//// FUNCTION FUN_00575a20 @ 00575a20 ////

int * FUN_00575a20(void)

{
  int *piVar1;
  void *this;
  char **ppcVar2;
  int iVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00581830();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"Research",8);
  local_28 = 8;
  local_2c[8] = '\0';
  iVar3 = 0xb;
  ppcVar2 = &local_2c;
  local_4 = 0;
  this = (void *)FUN_00577370((int)piVar1);
  FUN_00442690(this,ppcVar2,iVar3);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_00575af0 @ 00575af0 ////

void __fastcall FUN_00575af0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00575bd0 @ 00575bd0 ////

undefined4 __fastcall FUN_00575bd0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x9d4) == 0) {
    puVar1 = FUN_00506e30(param_1);
    *(undefined4 **)(param_1 + 0x9d4) = puVar1;
  }
  return *(undefined4 *)(param_1 + 0x9d4);
}


//// FUNCTION FUN_00575c00 @ 00575c00 ////

void __fastcall FUN_00575c00(int *param_1)

{
  FUN_0059a230(param_1);
  if ((char)param_1[0x207] != '\0') {
    *(undefined1 *)(param_1 + 0x207) = 0;
    (**(code **)(*param_1 + 0x224))(param_1[0x206],0);
  }
  return;
}


//// FUNCTION FUN_00575c40 @ 00575c40 ////

void __thiscall FUN_00575c40(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x954) = param_1;
  return;
}


//// FUNCTION FUN_00575c50 @ 00575c50 ////

void __thiscall FUN_00575c50(void *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = FUN_0046f5e0(param_1);
  switch(uVar2) {
  case 0x800009e2:
    *(int *)((int)this + 0x950) = *(int *)((int)this + 0x950) + 1;
    return;
  default:
    FUN_00538700(this,param_1);
    break;
  case 0x80000a0a:
    *(int *)((int)this + 0x950) = *(int *)((int)this + 0x950) + -1;
    return;
  case 0x80000a32:
    piVar3 = (int *)GetPlayerStudio();
    (**(code **)(*piVar3 + 0x30))(this);
    return;
  case 0x80000a5a:
    cVar1 = (**(code **)(*(int *)this + 0x204))();
    if (cVar1 != '\0') {
      (**(code **)(*(int *)this + 0x1a8))(0);
      return;
    }
    break;
  case 0x80000a82:
    (*(code *)**(undefined4 **)((int)this + 0xa0))();
    return;
  }
  return;
}


//// FUNCTION FUN_00575db0 @ 00575db0 ////

float10 __fastcall FUN_00575db0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  float fStack_14;
  undefined1 local_c [12];
  
  if ((param_1[0x13b] != 0) &&
     ((iVar1 = *(int *)(param_1[0x13b] + 0x34), iVar1 == 3 || (iVar1 == 2)))) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x34))(local_c);
    FUN_009840b0(&stack0xffffffe8,puVar2);
    fVar3 = (float10)*(float *)(param_1[0x176] + 0x94) - (float10)unaff_ESI;
    fVar4 = (float10)*(float *)(param_1[0x176] + 0x98) - (float10)fStack_14;
    return SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00575e20 @ 00575e20 ////

undefined4 __thiscall FUN_00575e20(void *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint in_EAX;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != (void *)0x0) {
    uVar1 = *(uint *)((int)this + 0x728);
    if ((uVar1 != 0) && (*(uint *)(DAT_0104cdf4 + 0x3c) <= uVar1 + DAT_00e53338)) {
      if ((uVar1 & 1) != 0) {
        uVar2 = FUN_00980750(param_1,0x1d,1.0,-1);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      uVar2 = FUN_00980750(param_1,0x1e,1.0,-1);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    if (param_2 != 0) {
LAB_00575eb4:
      uVar2 = FUN_00980750(param_1,param_2,1.0,-1);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    iVar3 = FUN_005998e0((int)this);
    in_EAX = 0;
    if (iVar3 != 0) {
      iVar3 = FUN_005998e0((int)this);
      iVar3 = FUN_00401c30(iVar3);
      in_EAX = 0;
      if (iVar3 != 0) {
        iVar3 = FUN_005998e0((int)this);
        iVar3 = FUN_00401c30(iVar3);
        in_EAX = *(uint *)(iVar3 + 0xdc);
        param_2 = in_EAX;
        if (0 < (int)in_EAX) goto LAB_00575eb4;
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00575ee0 @ 00575ee0 ////

void __thiscall FUN_00575ee0(void *this,void *param_1)

{
  void *this_00;
  float *pfVar1;
  float10 fVar2;
  
  this_00 = param_1;
  if (param_1 != (void *)0x0) {
    pfVar1 = (float *)(**(code **)(*(int *)this + 0x1e0))(&param_1);
    fVar2 = FUN_0043b710(pfVar1);
    FUN_009d63a0(this_00,(float)fVar2);
  }
  return;
}


//// FUNCTION FUN_00575f10 @ 00575f10 ////

void __fastcall FUN_00575f10(int *param_1)

{
  FUN_0059b810(param_1);
                    /* WARNING: Could not recover jumptable at 0x00575f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x13c))();
  return;
}


//// FUNCTION FUN_00575f40 @ 00575f40 ////

float * __thiscall FUN_00575f40(void *this,float *param_1)

{
  undefined4 uVar1;
  undefined4 *this_00;
  
  uVar1 = FUN_0043b6a0((undefined4 *)((int)this + 0x864),(float *)&DAT_00e4fa4c);
  this_00 = &DAT_00e4fa4c;
  if ((char)uVar1 == '\0') {
    this_00 = (undefined4 *)((int)this + 0x864);
  }
  FUN_0043b620(this_00,param_1,(float *)((int)this + 0x860));
  return param_1;
}


//// FUNCTION FUN_00575fe0 @ 00575fe0 ////

void __fastcall FUN_00575fe0(int param_1)

{
  *(undefined4 *)(param_1 + 0x86c) = DAT_00e4fa4c;
  return;
}


//// FUNCTION FUN_00575ff0 @ 00575ff0 ////

void __thiscall FUN_00575ff0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x86c);
  return;
}


//// FUNCTION FUN_00576040 @ 00576040 ////

undefined4 __fastcall FUN_00576040(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x814);
  if ((((iVar1 != 7) && (iVar1 != 8)) && (iVar1 != 9)) &&
     (((iVar1 != 10 && (iVar1 != 0xb)) && (iVar1 != 0xc)))) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00576070 @ 00576070 ////

undefined4 __fastcall FUN_00576070(int param_1)

{
  if ((*(int *)(param_1 + 0x814) != 6) && (*(int *)(param_1 + 0x814) != 5)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00576090 @ 00576090 ////

undefined4 __fastcall FUN_00576090(int param_1)

{
  if ((*(int *)(param_1 + 0x814) != 2) && (*(int *)(param_1 + 0x814) != 3)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_005760f0 @ 005760f0 ////

void __fastcall FUN_005760f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  return;
}


//// FUNCTION FUN_00576100 @ 00576100 ////

void __fastcall FUN_00576100(int param_1)

{
  *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  return;
}


//// FUNCTION FUN_00576110 @ 00576110 ////

float10 __fastcall FUN_00576110(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0x7e4);
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)0.1;
}


//// FUNCTION FUN_00576140 @ 00576140 ////

float10 __fastcall FUN_00576140(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0x7e8);
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)0.1;
}


//// FUNCTION FUN_00576170 @ 00576170 ////

void __thiscall FUN_00576170(void *this,int param_1)

{
  float *pfVar1;
  float10 fVar2;
  float unaff_retaddr;
  void *local_4;
  
  local_4 = this;
  FUN_0042ff00(param_1);
  pfVar1 = (float *)(**(code **)(*(int *)this + 0x1e0))(&local_4);
  fVar2 = FUN_0043b710(pfVar1);
  if (fVar2 < (float10)unaff_retaddr) {
    FUN_0042ff00(param_1);
    return;
  }
  pfVar1 = (float *)(**(code **)(*(int *)this + 0x1e0))(&stack0x00000000);
  FUN_0043b710(pfVar1);
  return;
}


//// FUNCTION FUN_005761e0 @ 005761e0 ////

void __thiscall FUN_005761e0(void *this,float param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0051ff70(2);
  if ((char)uVar1 == '\0') {
    if (param_1 < 0.2 == (param_1 == 0.2)) {
      if (param_1 < 0.4 == (param_1 == 0.4)) {
        if (param_1 < 0.6 == (param_1 == 0.6)) {
          if (param_1 < 0.8 == (param_1 == 0.8)) {
            *(int *)((int)this + 0x7fc) = *(int *)((int)this + 0x7fc) + 1;
            if (param_2 != '\0') {
              *(int *)((int)this + 0x810) = *(int *)((int)this + 0x810) + 1;
            }
          }
          else {
            *(int *)((int)this + 0x7f8) = *(int *)((int)this + 0x7f8) + 1;
            if (param_2 != '\0') {
              *(int *)((int)this + 0x80c) = *(int *)((int)this + 0x80c) + 1;
              return;
            }
          }
        }
        else {
          *(int *)((int)this + 0x7f4) = *(int *)((int)this + 0x7f4) + 1;
          if (param_2 != '\0') {
            *(int *)((int)this + 0x808) = *(int *)((int)this + 0x808) + 1;
            return;
          }
        }
      }
      else {
        *(int *)((int)this + 0x7f0) = *(int *)((int)this + 0x7f0) + 1;
        if (param_2 != '\0') {
          *(int *)((int)this + 0x804) = *(int *)((int)this + 0x804) + 1;
          return;
        }
      }
    }
    else {
      *(int *)((int)this + 0x7ec) = *(int *)((int)this + 0x7ec) + 1;
      if (param_2 != '\0') {
        *(int *)((int)this + 0x800) = *(int *)((int)this + 0x800) + 1;
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_005762e0 @ 005762e0 ////

undefined4 __thiscall FUN_005762e0(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return *(undefined4 *)((int)this + 0x7ec);
  case 2:
    return *(undefined4 *)((int)this + 0x7f0);
  case 3:
    return *(undefined4 *)((int)this + 0x7f4);
  case 4:
    return *(undefined4 *)((int)this + 0x7f8);
  case 5:
    return *(undefined4 *)((int)this + 0x7fc);
  default:
    return 0;
  }
}


//// FUNCTION FUN_00576340 @ 00576340 ////

undefined4 __thiscall FUN_00576340(void *this,undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return *(undefined4 *)((int)this + 0x800);
  case 2:
    return *(undefined4 *)((int)this + 0x804);
  case 3:
    return *(undefined4 *)((int)this + 0x808);
  case 4:
    return *(undefined4 *)((int)this + 0x80c);
  case 5:
    return *(undefined4 *)((int)this + 0x810);
  default:
    return 0;
  }
}


//// FUNCTION FUN_005763a0 @ 005763a0 ////

int __fastcall FUN_005763a0(int param_1)

{
  return *(int *)(param_1 + 0x7fc) + *(int *)(param_1 + 0x7f8) + *(int *)(param_1 + 0x7f4) +
         *(int *)(param_1 + 0x7f0) + *(int *)(param_1 + 0x7ec);
}


//// FUNCTION FUN_005763d0 @ 005763d0 ////

int __fastcall FUN_005763d0(int param_1)

{
  return *(int *)(param_1 + 0x810) + *(int *)(param_1 + 0x80c) + *(int *)(param_1 + 0x808) +
         *(int *)(param_1 + 0x804) + *(int *)(param_1 + 0x800);
}


//// FUNCTION FUN_00576410 @ 00576410 ////

int * __thiscall FUN_00576410(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00576480 @ 00576480 ////

int __fastcall FUN_00576480(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_005764a0 @ 005764a0 ////

void __fastcall FUN_005764a0(int param_1)

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


//// FUNCTION FUN_005764d0 @ 005764d0 ////

int * __thiscall FUN_005764d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00576550 @ 00576550 ////

int * __thiscall FUN_00576550(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00576570 @ 00576570 ////

int * __thiscall FUN_00576570(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005765b0 @ 005765b0 ////

void __fastcall FUN_005765b0(int param_1)

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


//// FUNCTION FUN_005765e0 @ 005765e0 ////

int * __thiscall FUN_005765e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00576650 @ 00576650 ////

int * __thiscall FUN_00576650(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00576690 @ 00576690 ////

void __fastcall FUN_00576690(int param_1)

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


//// FUNCTION FUN_005768b0 @ 005768b0 ////

void __cdecl FUN_005768b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_005768f0 @ 005768f0 ////

int * __thiscall FUN_005768f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00576970 @ 00576970 ////

int * __cdecl FUN_00576970(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_005769b0 @ 005769b0 ////

undefined4 * __cdecl FUN_005769b0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00576b20 @ 00576b20 ////

void __fastcall FUN_00576b20(undefined4 *param_1)

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


//// FUNCTION FUN_00576d50 @ 00576d50 ////

void __fastcall FUN_00576d50(undefined4 *param_1)

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


//// FUNCTION CStaff_SetJob @ 00577230 ////

void __thiscall CStaff_SetJob(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x814) != param_1) {
    if (DAT_010583e4 == '\0') {
      *(int *)((int)this + 0x818) = *(int *)((int)this + 0x814);
    }
    *(int *)((int)this + 0x814) = param_1;
    if (DAT_010583e4 == '\0') {
      if (*(undefined4 **)((int)this + 0x7b8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)this + 0x7b8))(1);
      }
      (**(code **)(*(int *)((int)this + 0x7a4) + 4))();
      *(undefined4 *)((int)this + 0x7b8) = 0;
      (*(code *)**(undefined4 **)((int)this + 0x7a4))();
      if (param_1 == 0xd) {
        (**(code **)(*(int *)((int)this + 0xa0c) + 4))();
        *(int **)((int)this + 0xa20) = param_2;
        (*(code *)**(undefined4 **)((int)this + 0xa0c))();
        FUN_0056ef20(this,param_2);
      }
    }
    iVar1 = *(int *)((int)this + 0x934);
    iVar2 = GetPlayerStudio();
    if (iVar1 == iVar2) {
      CStaff_OnJobAssigned(this,*(float *)((int)this + 0x814));
      (**(code **)(*(int *)this + 0x1d4))();
    }
  }
  return;
}


//// FUNCTION FUN_00577370 @ 00577370 ////

undefined4 __fastcall FUN_00577370(int param_1)

{
  return *(undefined4 *)(param_1 + 0x96c);
}


//// FUNCTION FUN_005773c0 @ 005773c0 ////

undefined4 __fastcall FUN_005773c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x934);
}


//// FUNCTION FUN_005773d0 @ 005773d0 ////

void __thiscall FUN_005773d0(void *this,char param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(char *)((int)this + 0x530) != param_1) {
    piVar1 = (int *)((int)this + 0x8f8);
    if (*(int **)((int)this + 0x8fc) != (int *)0x0) {
      **(int **)((int)this + 0x8fc) = *piVar1;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)((int)this + 0x8fc);
    }
    *piVar1 = 0;
    *(undefined4 *)((int)this + 0x8fc) = 0;
    if (param_1 != '\0') {
      *(int ***)((int)this + 0x8fc) = &DAT_0104d008;
      *piVar1 = (int)DAT_0104d008;
      *(int **)((int)DAT_0104d008 + 4) = piVar1;
      puVar2 = *(undefined4 **)((int)this + 0x9d4);
      DAT_0104d008 = piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)((int)this + 0x9d4) = 0;
      }
      if (*(undefined4 **)((int)this + 2000) != (undefined4 *)0x0) {
        **(undefined4 **)((int)this + 2000) = *(undefined4 *)((int)this + 0x7cc);
      }
      if (*(int *)((int)this + 0x7cc) != 0) {
        *(undefined4 *)(*(int *)((int)this + 0x7cc) + 4) = *(undefined4 *)((int)this + 2000);
      }
      *(undefined4 *)((int)this + 0x7cc) = 0;
      *(undefined4 *)((int)this + 2000) = 0;
      FUN_0059ba30(this,param_1);
      return;
    }
    *(int ***)((int)this + 0x8fc) = &DAT_0104cfd4;
    *piVar1 = (int)DAT_0104cfd4;
    DAT_0104cfd4[1] = (int)piVar1;
    DAT_0104cfd4 = piVar1;
  }
  FUN_0059ba30(this,param_1);
  return;
}


//// FUNCTION FUN_005774c0 @ 005774c0 ////

void __thiscall FUN_005774c0(void *this,float param_1)

{
  int *piVar1;
  char cVar2;
  float *pfVar3;
  float10 fVar4;
  
  if ((*(int *)((int)this + 0x8cc) != 0) &&
     (piVar1 = *(int **)(*(int *)((int)this + 0x8cc) + 0x124), piVar1 != (int *)0x0)) {
    cVar2 = (**(code **)(*piVar1 + 200))();
    if (cVar2 == '\0') {
      pfVar3 = (float *)((int)this + 0x9cc);
      fVar4 = FUN_004070c0(pfVar3,param_1);
      FUN_00407070(&param_1,(float)fVar4);
      *pfVar3 = param_1;
      if (1.0 < *pfVar3) {
        FUN_00407070(&param_1,1.0);
        *pfVar3 = param_1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_005775a0 @ 005775a0 ////

undefined4 __thiscall FUN_005775a0(void *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = true;
  iVar3 = (**(code **)(*(int *)this + 500))();
  if ((iVar3 != 0) && ((param_2 == 0 || (param_2 != iVar3)))) {
    bVar1 = false;
  }
  iVar3 = *(int *)((int)this + 0x934);
  iVar4 = GetPlayerStudio();
  if (iVar3 == iVar4) {
    cVar2 = (**(code **)(*(int *)this + 0x13c))();
    if ((cVar2 != '\0') &&
       (((*(int *)((int)this + 0x8cc) == 0 || (*(int *)((int)this + 0x8cc) == param_1)) && (bVar1)))
       ) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00577720 @ 00577720 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00577720(int *param_1)

{
  float *pfVar1;
  float10 fVar2;
  int *local_4;
  
  local_4 = param_1;
  pfVar1 = (float *)(**(code **)(*param_1 + 0x1e4))(&local_4);
  if (*pfVar1 < _DAT_00e53304) {
    return (float10)_DAT_00f87fb4 * (float10)(float)param_1[0x12a];
  }
  pfVar1 = (float *)(**(code **)(*param_1 + 0x1e4))(&stack0xfffffff8);
  if (*pfVar1 < 0.25) {
    return (float10)_DAT_00f87fb0 * (float10)(float)param_1[0x12a];
  }
  fVar2 = FUN_005996a0((int)param_1);
  return fVar2;
}


//// FUNCTION FUN_00577790 @ 00577790 ////

void __fastcall FUN_00577790(int *param_1)

{
  char cVar1;
  undefined4 extraout_ECX;
  float10 fVar2;
  ulonglong uVar3;
  float fStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  float fStack_4;
  
  FUN_00599cb0(param_1);
  cVar1 = (**(code **)(*param_1 + 0xbc))();
  if ((cVar1 != '\0') && (param_1[0x247] != 0)) {
    iStack_c = param_1[0x40];
    iStack_8 = param_1[0x41];
    fStack_4 = (float)param_1[0x42];
    uVar3 = FUN_00990ae0(fStack_4,iStack_c);
    fVar2 = (float10)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar2 = fVar2 + (float10)4.2949673e+09;
    }
    fStack_14 = (float)param_1[0x31];
    fVar2 = (float10)fsin(fVar2 * (float10)0.0015);
    fStack_4 = (float)(fVar2 * (float10)0.3 + (float10)0.3);
    uVar3 = FUN_00990ae0(extraout_ECX,fStack_14);
    iStack_10 = (int)uVar3;
    fVar2 = (float10)iStack_10;
    if (iStack_10 < 0) {
      fVar2 = fVar2 + (float10)4.2949673e+09;
    }
    fVar2 = (float10)fsin(fVar2 * (float10)0.002);
    fVar2 = FUN_004012c0((float)(fVar2 * (float10)0.1 + (float10)fStack_14));
    fStack_14 = (float)fVar2;
    (**(code **)(*(int *)(param_1[0x247] + 200) + 0xa8))(&iStack_c,&fStack_14);
  }
  return;
}


//// FUNCTION FUN_005778a0 @ 005778a0 ////

void __thiscall FUN_005778a0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x908) + 4))();
  *(undefined4 *)((int)this + 0x91c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x908))();
  *(bool *)((int)this + 0x5b4) = *(int *)((int)this + 0x91c) != 0;
  return;
}


//// FUNCTION FUN_005778f0 @ 005778f0 ////

undefined4 __fastcall FUN_005778f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x91c);
}


//// FUNCTION FUN_00577900 @ 00577900 ////

undefined4 __fastcall FUN_00577900(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94c);
}


//// FUNCTION FUN_00577910 @ 00577910 ////

void __thiscall FUN_00577910(void *this,void *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*(int *)this + 0x204))();
  if (cVar1 == '\0') {
    piVar2 = (int *)GetPlayerStudio();
    (**(code **)(*piVar2 + 0x30))(this);
  }
  if (param_1 != (void *)0x0) {
    uVar3 = FUN_004c4b70(param_1,'\0','\0');
    (**(code **)(*(int *)((int)this + 0x970) + 4))();
    *(undefined4 *)((int)this + 0x984) = uVar3;
    (*(code *)**(undefined4 **)((int)this + 0x970))();
  }
  return;
}


//// FUNCTION FUN_00577960 @ 00577960 ////

void __thiscall FUN_00577960(void *this,int param_1,float param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  cVar1 = (**(code **)(*(int *)this + 0x204))();
  if (cVar1 == '\0') {
    piVar2 = (int *)GetPlayerStudio();
    (**(code **)(*piVar2 + 0x30))(this);
  }
  puVar3 = FUN_005c1ae0(param_1,param_2,param_3);
  (**(code **)(*(int *)((int)this + 0x970) + 4))();
  *(undefined4 **)((int)this + 0x984) = puVar3;
  (*(code *)**(undefined4 **)((int)this + 0x970))();
  return;
}


//// FUNCTION FUN_005779c0 @ 005779c0 ////

void __fastcall FUN_005779c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((char)param_1[0x262] == '\0') {
    if (*(char *)((int)param_1 + 0x989) == '\0') {
      return;
    }
    if ((int *)param_1[0x23b] != (int *)0x0) {
      *(int *)param_1[0x23b] = param_1[0x23a];
    }
    if (param_1[0x23a] != 0) {
      *(int *)(param_1[0x23a] + 4) = param_1[0x23b];
    }
    param_1[0x23a] = 0;
    param_1[0x23b] = 0;
    *(undefined1 *)((int)param_1 + 0x989) = 0;
    *(undefined1 *)(param_1[0x282] + 100) = 1;
    piVar2 = (int *)GetPlayerStudio();
    (**(code **)(*piVar2 + 0x30))(param_1[0x282]);
    piVar2 = (int *)param_1[0x282];
  }
  else {
    if ((int *)param_1[0x23b] != (int *)0x0) {
      *(int *)param_1[0x23b] = param_1[0x23a];
    }
    if (param_1[0x23a] != 0) {
      *(int *)(param_1[0x23a] + 4) = param_1[0x23b];
    }
    param_1[0x23a] = 0;
    param_1[0x23b] = 0;
    *(undefined1 *)(param_1 + 0x262) = 0;
    *(undefined1 *)(param_1[0x27c] + 100) = 1;
    piVar2 = (int *)GetPlayerStudio();
    (**(code **)(*piVar2 + 0x30))(param_1[0x27c]);
    piVar2 = (int *)param_1[0x27c];
  }
  iVar1 = *piVar2;
  uVar3 = (**(code **)(*param_1 + 0x4c))(&stack0xffffffec);
  uVar3 = (**(code **)(*param_1 + 0x34))(&stack0xffffffec,uVar3);
  (**(code **)(iVar1 + 0xa8))(uVar3);
  return;
}


//// FUNCTION FUN_00577ad0 @ 00577ad0 ////

char __cdecl FUN_00577ad0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_4;
  
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    local_4 = piVar2[0x1f8];
    uVar3 = FUN_0043b6e0(&local_4,(float *)&DAT_00e4fa4c);
    if ((char)uVar3 == '\0') {
      if ((piVar2[0x131] != 3) && (uVar3 = FUN_00598ee0((int)piVar2), (char)uVar3 != '\0')) {
        return '\0';
      }
      cVar1 = (**(code **)(*piVar2 + 0x1c4))();
      return '\x01' - (cVar1 != '\0');
    }
  }
  return '\0';
}


//// FUNCTION FUN_00577b40 @ 00577b40 ////

char __cdecl FUN_00577b40(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_4;
  
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    local_4 = piVar2[0x1f8];
    uVar3 = FUN_0043b6e0(&local_4,(float *)&DAT_00e4fa4c);
    if (((char)uVar3 == '\0') && (piVar2[0x205] != 0x10)) {
      if ((piVar2[0x131] != 3) && (uVar3 = FUN_00598ee0((int)piVar2), (char)uVar3 != '\0')) {
        return '\0';
      }
      cVar1 = (**(code **)(*piVar2 + 0x1c4))();
      return '\x01' - (cVar1 != '\0');
    }
  }
  return '\0';
}


//// FUNCTION FUN_00577bc0 @ 00577bc0 ////

char __cdecl FUN_00577bc0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    local_4 = piVar2[0x1f8];
    uVar3 = FUN_0043b6e0(&local_4,(float *)&DAT_00e4fa4c);
    if ((char)uVar3 != '\0') {
      return '\0';
    }
  }
  piVar4 = (int *)FUN_00ace790(piVar2,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0x27c))(), iVar5 != 0)) {
    iVar5 = (**(code **)(*piVar4 + 0x27c))();
    cVar1 = FUN_004724d0(iVar5);
    if (cVar1 != '\0') {
      return '\0';
    }
  }
  if (piVar2 != (int *)0x0) {
    if ((piVar2[0x205] == 2) && (iVar5 = piVar2[0x24d], iVar6 = GetPlayerStudio(), iVar5 == iVar6))
    {
      return '\0';
    }
    iVar5 = piVar2[0x131];
    if ((((iVar5 == 2) || (iVar5 == 3)) || (iVar5 == 1)) ||
       ((piVar2[0x24d] == 0 || (piVar4 != (int *)0x0)))) {
      cVar1 = (**(code **)(*piVar2 + 0x1c4))();
      return '\x01' - (cVar1 != '\0');
    }
  }
  return '\0';
}


//// FUNCTION FUN_00577ca0 @ 00577ca0 ////

char __cdecl FUN_00577ca0(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_4;
  
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    local_4 = piVar2[0x1f8];
    uVar3 = FUN_0043b6e0(&local_4,(float *)&DAT_00e4fa4c);
    if ((char)uVar3 != '\0') {
      return '\0';
    }
  }
  piVar4 = (int *)FUN_00ace790(piVar2,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if ((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0x27c))(), iVar5 != 0)) {
    iVar5 = (**(code **)(*piVar4 + 0x27c))();
    cVar1 = FUN_004724d0(iVar5);
    if (cVar1 != '\0') {
      return '\0';
    }
  }
  if (piVar2 != (int *)0x0) {
    if ((piVar2[0x205] == 3) && (iVar5 = piVar2[0x24d], iVar6 = GetPlayerStudio(), iVar5 == iVar6))
    {
      return '\0';
    }
    iVar5 = piVar2[0x131];
    if ((((iVar5 == 2) || (iVar5 == 3)) || (iVar5 == 1)) ||
       ((piVar2[0x24d] == 0 || (piVar4 != (int *)0x0)))) {
      cVar1 = (**(code **)(*piVar2 + 0x1c4))();
      return '\x01' - (cVar1 != '\0');
    }
  }
  return '\0';
}


//// FUNCTION FUN_00577d80 @ 00577d80 ////

undefined4 __fastcall FUN_00577d80(int param_1)

{
  return *(undefined4 *)(param_1 + 0x984);
}


//// FUNCTION CStar_SetCurrentProject @ 00577d90 ////

void __thiscall CStar_SetCurrentProject(void *this,void *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  
  cVar1 = (**(code **)(*(int *)this + 0x204))();
  if (cVar1 == '\0') {
    piVar2 = (int *)GetPlayerStudio();
    (**(code **)(*piVar2 + 0x30))(this);
  }
  iVar3 = AwardBonusManager_Get();
  if (iVar3 != 0) {
    iVar3 = 5;
    pvVar4 = (void *)AwardBonusManager_Get();
    cVar1 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
    if (cVar1 != '\0') {
      iVar3 = AwardBonusManager_Get();
      pvVar4 = (void *)FUN_00858eb0(iVar3);
      if (pvVar4 == this) {
        if (param_1 == (void *)0x0) {
          if (*(void **)((int)this + 0x984) != (void *)0x0) {
            CProject_SetSuperStarBoostFlag(*(void **)((int)this + 0x984),0);
          }
        }
        else {
          CProject_SetSuperStarBoostFlag(param_1,1);
        }
        goto LAB_00577e44;
      }
    }
  }
  iVar3 = AwardBonusManager_Get();
  if (iVar3 != 0) {
    iVar3 = 2;
    pvVar4 = (void *)AwardBonusManager_Get();
    cVar1 = AwardBonusManager_IsBonusActive(pvVar4,iVar3);
    if (cVar1 != '\0') {
      iVar3 = AwardBonusManager_Get();
      pvVar4 = (void *)FUN_00858ef0(iVar3);
      if (pvVar4 == this) {
        if (param_1 == (void *)0x0) {
          pvVar4 = *(void **)((int)this + 0x984);
          if (pvVar4 == (void *)0x0) goto LAB_00577e44;
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
          pvVar4 = param_1;
        }
        CProject_SetSuperDirectorBoostFlag(pvVar4,uVar5);
      }
    }
  }
LAB_00577e44:
  (**(code **)(*(int *)((int)this + 0x970) + 4))();
  *(void **)((int)this + 0x984) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x970))();
  return;
}


//// FUNCTION FUN_00577e70 @ 00577e70 ////

void __fastcall FUN_00577e70(int *param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  int *piVar4;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb226b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x224))(0,0);
  iVar1 = param_1[0x24d];
  iVar2 = GetPlayerStudio();
  if (iVar1 == iVar2) {
    *(undefined1 *)((int)param_1 + 0x61) = 0;
  }
  else if ((int *)param_1[0x24d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24d] + 0x34))(param_1);
    FUN_00599050(param_1,1);
    ExceptionList = unaff_ESI;
    return;
  }
  (**(code **)(*param_1 + 0x10c))();
  this = operator_new(0x128);
  pvStack_c = (void *)0x0;
  if (this == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = DesireLeave_Constructor(this,param_1);
  }
  pvStack_c = (void *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar3);
  FUN_00571a60(param_1);
  (**(code **)(*param_1 + 0x200))();
  (**(code **)(*param_1 + 0x1a4))(0);
  if ((int *)param_1[0x1e2] != (int *)0x0) {
    *(int *)param_1[0x1e2] = param_1[0x1e1];
  }
  if (param_1[0x1e1] != 0) {
    *(int *)(param_1[0x1e1] + 4) = param_1[0x1e2];
  }
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  piVar4 = (int *)FUN_0043b510((undefined4 *)&stack0xffffffe4);
  param_1[0x21b] = *piVar4;
  ExceptionList = this;
  return;
}


//// FUNCTION FUN_00577f90 @ 00577f90 ////

uint __fastcall FUN_00577f90(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0x233];
  if ((uVar1 == 0) && (uVar1 = param_1[0x247], uVar1 == 0)) {
    uVar1 = (**(code **)(*param_1 + 0x1fc))();
    if (uVar1 == 0) {
      return 1;
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00577fc0 @ 00577fc0 ////

float * __thiscall FUN_00577fc0(void *this,float *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auStack_8 [4];
  undefined4 uStack_4;
  
  if ((*(int *)((int)this + 0x8cc) == 0) ||
     (pvVar1 = *(void **)(*(int *)((int)this + 0x8cc) + 0xa0), pvVar1 == (void *)0x0)) {
    pvVar1 = (void *)(**(code **)(*(int *)this + 0x1fc))();
  }
  if (pvVar1 != (void *)0x0) {
    piVar2 = (int *)FUN_005b22a0((int)pvVar1);
    iVar3 = (**(code **)(*piVar2 + 0x24))();
    if (iVar3 == 6) {
      pfVar4 = (float *)FUN_0043b520(auStack_8,0.01);
      FUN_0043b600(&DAT_00e4fa4c,param_1,pfVar4);
      return param_1;
    }
    pfVar5 = (float *)FUN_0043b520(auStack_8,0.02);
    pfVar4 = param_1;
    pvVar1 = (void *)FUN_005b8c50(pvVar1,&uStack_4);
    FUN_0043b600(pvVar1,pfVar4,pfVar5);
    return param_1;
  }
  FUN_0043b520(param_1,0.0);
  return param_1;
}


//// FUNCTION FUN_00578070 @ 00578070 ////

void __fastcall FUN_00578070(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  void *this;
  int *piVar5;
  float local_c;
  undefined1 local_8 [4];
  float local_4;
  
  FUN_00577fc0(param_1,&local_c);
  pfVar1 = (float *)FUN_0043b520(local_8,0.0);
  uVar2 = FUN_0043b660(&local_c,pfVar1);
  if ((char)uVar2 != '\0') {
    pfVar1 = (float *)(param_1 + 0x1f8);
    uVar2 = FUN_0043b680(&local_c,pfVar1);
    if ((char)uVar2 != '\0') {
      pfVar3 = (float *)FUN_0043b520(local_8,75.0);
      pfVar3 = (float *)FUN_0043b600(param_1 + 0x218,&local_4,pfVar3);
      uVar2 = FUN_0043b6e0(&local_c,pfVar3);
      if ((char)uVar2 != '\0') {
        *pfVar1 = local_c;
        uVar2 = FUN_00598ee0((int)param_1);
        if (((char)uVar2 != '\0') && (iVar4 = FUN_007955a0(), iVar4 != 0)) {
          iVar4 = FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
          this = (void *)FUN_007955a0();
          piVar5 = (int *)FUN_007991e0(this,iVar4);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 4))(*pfVar1);
          }
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00578140 @ 00578140 ////

undefined4 __fastcall FUN_00578140(int *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x1c4))();
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_004d6c00(param_1[0x233]);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x1c0) == 3)) {
      uVar1 = FUN_004d9300((void *)param_1[0x233],(int)param_1);
      if ((char)uVar1 != '\0') {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00578180 @ 00578180 ////

void __thiscall FUN_00578180(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*(int *)this + 0x1c4))();
  if (cVar1 != '\0') {
    iVar2 = FUN_004d6c00(*(int *)((int)this + 0x8cc));
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1c0) != 3)) && (*(int *)(iVar2 + 0x1c0) != 4)) {
      uVar3 = FUN_004d9300(*(void **)((int)this + 0x8cc),(int)this);
      if ((char)uVar3 != '\0') {
        cVar1 = (**(code **)(*(int *)this + 0x1cc))();
        if (cVar1 == '\0') {
          *(int *)((int)this + 0x830) = *(int *)((int)this + 0x830) + param_1;
          return;
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x830) = 0;
  return;
}


//// FUNCTION FUN_00578330 @ 00578330 ////

void __fastcall FUN_00578330(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d25c60;
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


//// FUNCTION FUN_005783a0 @ 005783a0 ////

void __fastcall FUN_005783a0(int param_1)

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


//// FUNCTION FUN_005783d0 @ 005783d0 ////

void __fastcall FUN_005783d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d25c70;
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


//// FUNCTION FUN_00578470 @ 00578470 ////

void __fastcall FUN_00578470(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d25c80;
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


//// FUNCTION FUN_005784c0 @ 005784c0 ////

void __thiscall FUN_005784c0(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)this = param_1;
  return;
}


//// FUNCTION FUN_00578690 @ 00578690 ////

void __cdecl FUN_00578690(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_005786f0 @ 005786f0 ////

void __cdecl FUN_005786f0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_005787c0 @ 005787c0 ////

undefined4 * __thiscall FUN_005787c0(void *this,byte param_1)

{
  FUN_00578470(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005787e0 @ 005787e0 ////

undefined4 * __thiscall FUN_005787e0(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x20 + 0x338 + (int)this);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)*puVar1,puVar1[1]);
  return param_1;
}


//// FUNCTION FUN_00578820 @ 00578820 ////

undefined4 * __thiscall FUN_00578820(void *this,byte param_1)

{
  FUN_00576b20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578840 @ 00578840 ////

undefined4 * __thiscall FUN_00578840(void *this,byte param_1)

{
  FUN_00578860(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578860 @ 00578860 ////

void __fastcall FUN_00578860(undefined4 *param_1)

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


//// FUNCTION FUN_005788a0 @ 005788a0 ////

undefined4 * __thiscall FUN_005788a0(void *this,byte param_1)

{
  FUN_005788c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005788c0 @ 005788c0 ////

void __fastcall FUN_005788c0(undefined4 *param_1)

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


//// FUNCTION FUN_00578900 @ 00578900 ////

undefined4 * __thiscall FUN_00578900(void *this,byte param_1)

{
  FUN_00578920(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578920 @ 00578920 ////

void __fastcall FUN_00578920(undefined4 *param_1)

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


//// FUNCTION FUN_00578960 @ 00578960 ////

undefined4 * __thiscall FUN_00578960(void *this,byte param_1)

{
  FUN_00578980(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578980 @ 00578980 ////

void __fastcall FUN_00578980(undefined4 *param_1)

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


//// FUNCTION FUN_005789c0 @ 005789c0 ////

undefined4 * __thiscall FUN_005789c0(void *this,byte param_1)

{
  FUN_005789e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005789e0 @ 005789e0 ////

void __fastcall FUN_005789e0(undefined4 *param_1)

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


//// FUNCTION FUN_00578a20 @ 00578a20 ////

undefined4 * __thiscall FUN_00578a20(void *this,byte param_1)

{
  FUN_00578a40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578a40 @ 00578a40 ////

void __fastcall FUN_00578a40(undefined4 *param_1)

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


//// FUNCTION FUN_00578a80 @ 00578a80 ////

undefined4 * __thiscall FUN_00578a80(void *this,byte param_1)

{
  FUN_00578aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578aa0 @ 00578aa0 ////

void __fastcall FUN_00578aa0(undefined4 *param_1)

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


//// FUNCTION FUN_00578ae0 @ 00578ae0 ////

undefined4 * __thiscall FUN_00578ae0(void *this,byte param_1)

{
  FUN_00578b00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578b00 @ 00578b00 ////

void __fastcall FUN_00578b00(undefined4 *param_1)

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


//// FUNCTION FUN_00578b40 @ 00578b40 ////

undefined4 * __thiscall FUN_00578b40(void *this,byte param_1)

{
  FUN_00578b60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578b60 @ 00578b60 ////

void __fastcall FUN_00578b60(undefined4 *param_1)

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


//// FUNCTION FUN_00578ba0 @ 00578ba0 ////

undefined4 * __fastcall FUN_00578ba0(undefined4 *param_1)

{
  char *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_004ce5d0(param_1);
  *param_1 = &PTR_FUN_00d25c90;
  FUN_0048f010(&stack0x00000008,&local_20);
  param_1[0x1c] = param_1 + 0x1f;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x14;
  FUN_004015d0(param_1 + 0x1c,local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_00578c20 @ 00578c20 ////

undefined4 * __thiscall FUN_00578c20(void *this,byte param_1)

{
  FUN_00578c40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578c40 @ 00578c40 ////

void __fastcall FUN_00578c40(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00578cb0 @ 00578cb0 ////

undefined4 * __thiscall FUN_00578cb0(void *this,byte param_1)

{
  FUN_00578cd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578cd0 @ 00578cd0 ////

void __fastcall FUN_00578cd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00578d00 @ 00578d00 ////

undefined4 * __thiscall FUN_00578d00(void *this,byte param_1)

{
  FUN_00576d50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578d20 @ 00578d20 ////

undefined4 * __thiscall FUN_00578d20(void *this,byte param_1)

{
  FUN_00578d40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578d40 @ 00578d40 ////

void __fastcall FUN_00578d40(undefined4 *param_1)

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


//// FUNCTION FUN_00578d80 @ 00578d80 ////

undefined4 * __thiscall FUN_00578d80(void *this,byte param_1)

{
  FUN_00578da0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578da0 @ 00578da0 ////

void __fastcall FUN_00578da0(undefined4 *param_1)

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


//// FUNCTION FUN_00578de0 @ 00578de0 ////

undefined4 * __thiscall FUN_00578de0(void *this,byte param_1)

{
  FUN_00578e00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578e00 @ 00578e00 ////

void __fastcall FUN_00578e00(undefined4 *param_1)

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


//// FUNCTION FUN_00578e40 @ 00578e40 ////

undefined4 * __thiscall FUN_00578e40(void *this,byte param_1)

{
  FUN_00578e60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578e60 @ 00578e60 ////

void __fastcall FUN_00578e60(undefined4 *param_1)

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


//// FUNCTION FUN_00578ea0 @ 00578ea0 ////

undefined4 * __thiscall FUN_00578ea0(void *this,byte param_1)

{
  FUN_00578ec0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578ec0 @ 00578ec0 ////

void __fastcall FUN_00578ec0(undefined4 *param_1)

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


//// FUNCTION FUN_00578f00 @ 00578f00 ////

undefined4 * __thiscall FUN_00578f00(void *this,byte param_1)

{
  FUN_00578f20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578f20 @ 00578f20 ////

void __fastcall FUN_00578f20(undefined4 *param_1)

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


//// FUNCTION FUN_00578f60 @ 00578f60 ////

undefined4 * __thiscall FUN_00578f60(void *this,byte param_1)

{
  FUN_00578f80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578f80 @ 00578f80 ////

void __fastcall FUN_00578f80(undefined4 *param_1)

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


//// FUNCTION FUN_00578fc0 @ 00578fc0 ////

undefined4 * __thiscall FUN_00578fc0(void *this,byte param_1)

{
  FUN_00578fe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00578fe0 @ 00578fe0 ////

void __fastcall FUN_00578fe0(undefined4 *param_1)

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


//// FUNCTION FUN_00579020 @ 00579020 ////

undefined4 * __thiscall FUN_00579020(void *this,byte param_1)

{
  FUN_00579040(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579040 @ 00579040 ////

void __fastcall FUN_00579040(undefined4 *param_1)

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


//// FUNCTION FUN_00579080 @ 00579080 ////

undefined4 * __thiscall FUN_00579080(void *this,byte param_1)

{
  FUN_005790a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005790a0 @ 005790a0 ////

void __fastcall FUN_005790a0(undefined4 *param_1)

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


//// FUNCTION FUN_005790e0 @ 005790e0 ////

undefined4 * __thiscall FUN_005790e0(void *this,byte param_1)

{
  FUN_00579100(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579100 @ 00579100 ////

void __fastcall FUN_00579100(undefined4 *param_1)

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


//// FUNCTION FUN_00579140 @ 00579140 ////

undefined4 * __thiscall FUN_00579140(void *this,byte param_1)

{
  FUN_00579160(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579160 @ 00579160 ////

void __fastcall FUN_00579160(undefined4 *param_1)

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


//// FUNCTION FUN_005791a0 @ 005791a0 ////

undefined4 * __thiscall FUN_005791a0(void *this,byte param_1)

{
  FUN_005791c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005791c0 @ 005791c0 ////

void __fastcall FUN_005791c0(undefined4 *param_1)

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


//// FUNCTION FUN_00579200 @ 00579200 ////

undefined4 * __thiscall FUN_00579200(void *this,byte param_1)

{
  FUN_00579220(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579220 @ 00579220 ////

void __fastcall FUN_00579220(undefined4 *param_1)

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


//// FUNCTION FUN_00579260 @ 00579260 ////

undefined4 * __thiscall FUN_00579260(void *this,byte param_1)

{
  FUN_00579280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579280 @ 00579280 ////

void __fastcall FUN_00579280(undefined4 *param_1)

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


//// FUNCTION FUN_005792f0 @ 005792f0 ////

undefined4 * __thiscall FUN_005792f0(void *this,byte param_1)

{
  FUN_00579310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579310 @ 00579310 ////

void __fastcall FUN_00579310(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579370 @ 00579370 ////

undefined4 * __thiscall FUN_00579370(void *this,byte param_1)

{
  FUN_00579390(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579390 @ 00579390 ////

void __fastcall FUN_00579390(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005793f0 @ 005793f0 ////

undefined4 * __thiscall FUN_005793f0(void *this,byte param_1)

{
  FUN_00579410(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579410 @ 00579410 ////

void __fastcall FUN_00579410(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579470 @ 00579470 ////

undefined4 * __thiscall FUN_00579470(void *this,byte param_1)

{
  FUN_00579490(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579490 @ 00579490 ////

void __fastcall FUN_00579490(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005794f0 @ 005794f0 ////

undefined4 * __thiscall FUN_005794f0(void *this,byte param_1)

{
  FUN_00579510(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579510 @ 00579510 ////

void __fastcall FUN_00579510(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579570 @ 00579570 ////

undefined4 * __thiscall FUN_00579570(void *this,byte param_1)

{
  FUN_00579590(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579590 @ 00579590 ////

void __fastcall FUN_00579590(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005795f0 @ 005795f0 ////

undefined4 * __thiscall FUN_005795f0(void *this,byte param_1)

{
  FUN_00579610(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579610 @ 00579610 ////

void __fastcall FUN_00579610(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579670 @ 00579670 ////

undefined4 * __thiscall FUN_00579670(void *this,byte param_1)

{
  FUN_00579690(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579690 @ 00579690 ////

void __fastcall FUN_00579690(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005796f0 @ 005796f0 ////

undefined4 * __thiscall FUN_005796f0(void *this,byte param_1)

{
  FUN_00579710(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579710 @ 00579710 ////

void __fastcall FUN_00579710(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579770 @ 00579770 ////

undefined4 * __thiscall FUN_00579770(void *this,byte param_1)

{
  FUN_00579790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579790 @ 00579790 ////

void __fastcall FUN_00579790(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005797f0 @ 005797f0 ////

undefined4 * __thiscall FUN_005797f0(void *this,byte param_1)

{
  FUN_00579810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579810 @ 00579810 ////

void __fastcall FUN_00579810(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579870 @ 00579870 ////

undefined4 * __thiscall FUN_00579870(void *this,byte param_1)

{
  FUN_00579890(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579890 @ 00579890 ////

void __fastcall FUN_00579890(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005798f0 @ 005798f0 ////

undefined4 * __thiscall FUN_005798f0(void *this,byte param_1)

{
  FUN_00579910(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579910 @ 00579910 ////

void __fastcall FUN_00579910(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579970 @ 00579970 ////

undefined4 * __thiscall FUN_00579970(void *this,byte param_1)

{
  FUN_00579990(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579990 @ 00579990 ////

void __fastcall FUN_00579990(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_005799f0 @ 005799f0 ////

undefined4 * __thiscall FUN_005799f0(void *this,byte param_1)

{
  FUN_00579a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579a10 @ 00579a10 ////

void __fastcall FUN_00579a10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579a70 @ 00579a70 ////

undefined4 * __thiscall FUN_00579a70(void *this,byte param_1)

{
  FUN_00579a90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579a90 @ 00579a90 ////

void __fastcall FUN_00579a90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579af0 @ 00579af0 ////

undefined4 * __thiscall FUN_00579af0(void *this,byte param_1)

{
  FUN_00579b10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579b10 @ 00579b10 ////

void __fastcall FUN_00579b10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579b70 @ 00579b70 ////

undefined4 * __thiscall FUN_00579b70(void *this,byte param_1)

{
  FUN_00579b90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579b90 @ 00579b90 ////

void __fastcall FUN_00579b90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579bf0 @ 00579bf0 ////

undefined4 * __thiscall FUN_00579bf0(void *this,byte param_1)

{
  FUN_00579c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579c10 @ 00579c10 ////

void __fastcall FUN_00579c10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579c70 @ 00579c70 ////

undefined4 * __thiscall FUN_00579c70(void *this,byte param_1)

{
  FUN_00579c90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579c90 @ 00579c90 ////

void __fastcall FUN_00579c90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579cf0 @ 00579cf0 ////

undefined4 * __thiscall FUN_00579cf0(void *this,byte param_1)

{
  FUN_00579d10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579d10 @ 00579d10 ////

void __fastcall FUN_00579d10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579d70 @ 00579d70 ////

undefined4 * __thiscall FUN_00579d70(void *this,byte param_1)

{
  FUN_00579d90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579d90 @ 00579d90 ////

void __fastcall FUN_00579d90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579df0 @ 00579df0 ////

undefined4 * __thiscall FUN_00579df0(void *this,byte param_1)

{
  FUN_00579e10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579e10 @ 00579e10 ////

void __fastcall FUN_00579e10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579e70 @ 00579e70 ////

undefined4 * __thiscall FUN_00579e70(void *this,byte param_1)

{
  FUN_00579e90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00579e90 @ 00579e90 ////

void __fastcall FUN_00579e90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00579ec0 @ 00579ec0 ////

void __fastcall FUN_00579ec0(int *param_1)

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
  puStack_8 = &LAB_00cb2288;
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


//// FUNCTION FUN_00579f90 @ 00579f90 ////

undefined4 * FUN_00579f90(undefined4 *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb22a8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"staff_staff",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 0;
  FUN_009b5030(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0057a030 @ 0057a030 ////

void __fastcall FUN_0057a030(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb22d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[0x274] = DAT_00e4fa4c;
  if (param_1[0x24d] == 0) {
    pcVar3 = (char *)(**(code **)(*param_1 + 0x124))();
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
    FUN_004335f0((int *)&puStack_30,&puStack_2c,param_1[0x128],0,0,0);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2c);
    }
    FUN_0059bb60(param_1,(int)puStack_30);
    uStack_4 = 0xffffffff;
    if ((puStack_30 != (undefined4 *)0x0) &&
       (iVar2 = puStack_30[0x12], puStack_30[0x12] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)*puStack_30)(1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0057a130 @ 0057a130 ////

void __fastcall FUN_0057a130(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0x934);
  pcVar3 = "staff";
  iVar2 = GetPlayerStudio();
  if (iVar1 != iVar2) {
    pcVar3 = "public";
  }
  this = (void *)GlobalStatRegistry_Get();
  FUN_008c9a80(this,(undefined4 *)pcVar3);
  return;
}


//// FUNCTION FUN_0057a160 @ 0057a160 ////

void __thiscall FUN_0057a160(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  float *this_00;
  float10 fVar2;
  float10 fVar3;
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2301;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005722f0(this,param_1);
  FUN_00559fb0(local_e4);
  local_4 = 0;
  puVar1 = FUN_0040d6b0(&local_104,"person/",param_1);
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,puVar1,'\x01');
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"birth",5);
  local_100 = 5;
  local_104[5] = '\0';
  this_00 = (float *)((int)this + 0x860);
  local_4._0_1_ = 2;
  fVar2 = FUN_0043b710(this_00);
  fVar2 = FUN_00558610(local_e4,&local_104,(float)fVar2);
  FUN_0043b700(this_00,(float)fVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  fVar2 = FUN_0043b710(this_00);
  fVar3 = FUN_0043b710((float *)&DAT_00e4fa4c);
  if (fVar3 - (float10)18.0 < (float10)(float)fVar2) {
    fVar2 = FUN_0043b710((float *)&DAT_00e4fa4c);
    FUN_0043b700(this_00,(float)(fVar2 - (float10)18.0));
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0057a2e0 @ 0057a2e0 ////

void __fastcall FUN_0057a2e0(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  char unaff_retaddr;
  undefined1 *puVar6;
  undefined4 in_stack_ffffff88;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb23aa;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x253] != 0) {
    piVar4 = param_1 + 0x23a;
    ExceptionList = &pvStack_c;
    if ((int *)param_1[0x23b] != (int *)0x0) {
      ExceptionList = &pvStack_c;
      *(int *)param_1[0x23b] = *piVar4;
    }
    if (*piVar4 != 0) {
      *(int *)(*piVar4 + 4) = param_1[0x23b];
    }
    *piVar4 = 0;
    param_1[0x23b] = 0;
    piVar5 = (int *)(param_1[0x253] + 0xe4);
    param_1[0x23b] = (int)piVar5;
    *piVar4 = *piVar5;
    *(int **)(*piVar5 + 4) = piVar4;
    *piVar5 = (int)piVar4;
  }
  if (param_1[0x128] == 2) {
    (**(code **)(*param_1 + 0xe0))();
  }
  FUN_0059bfb0(param_1);
  pvVar1 = operator_new(0x128);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"smalltalk",9);
    uStack_28 = 9;
    pcStack_2c[9] = '\0';
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    puVar2 = DesireInfo_Constructor
                       (pvVar1,&pcStack_2c,0x5771c0,0x575b80,0x5771e0,DAT_0104adfc,param_1);
  }
  uStack_4 = 0xffffffff;
  if ((pvVar1 != (void *)0x0) && (0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  pvVar1 = operator_new(0x140);
  uStack_4 = 3;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesireBuyFood_Constructor(pvVar1,(int)param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  pvVar1 = operator_new(0x128);
  uStack_4 = 4;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesireBeImpressed_Constructor(pvVar1,(int)param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  pvVar1 = operator_new(0x128);
  uStack_4 = 5;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesireDisposeOfLitter_Constructor(pvVar1,(int)param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  pvVar1 = operator_new(0x140);
  uStack_4 = 6;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesirePropInteract_Constructor(pvVar1,(int)param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  pvVar1 = operator_new(0x140);
  uStack_4 = 7;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesireGetAutograph_Constructor(pvVar1,(int)param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  pvVar1 = operator_new(0x158);
  uStack_4 = 8;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesireUnfulfilled_Constructor(pvVar1,param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  pvVar1 = operator_new(0x140);
  uStack_4 = 9;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesireStayByBase_Constructor(pvVar1,param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  uVar3 = FUN_00598ee0((int)param_1);
  if ((char)uVar3 == '\0') {
    pvVar1 = operator_new(0x140);
    uStack_4 = 10;
    if (pvVar1 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = DesireUpdateCostume_Constructor(pvVar1,param_1);
    }
    uStack_4 = 0xffffffff;
    TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  }
  pvVar1 = operator_new(0x128);
  uStack_4 = 0xb;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesireGawp_Constructor(pvVar1,(int)param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  FUN_0059c0d0(param_1);
  FUN_0059c0d0(param_1);
  FUN_0059c0d0(param_1);
  pvVar1 = operator_new(0x128);
  uStack_4 = 0xc;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = DesireCrap_Constructor(pvVar1,(int)param_1);
  }
  uStack_4 = 0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar2);
  iVar9 = *param_1;
  GetPlayerStudio();
  (**(code **)(iVar9 + 0x1a4))();
  *(undefined1 *)((int)param_1 + 0x61) = 1;
  if (unaff_retaddr == '\0') {
    puVar10 = &stack0xffffffa4;
    pcVar8 = "ai_hired.flm";
    puVar7 = (undefined1 *)0x57a6ba;
    FUN_004015d0(&stack0xffffff98,"ai_hired.flm",0xc);
    iVar9 = param_1[0x31];
    puVar6 = &stack0xffffff88;
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0x34))();
    piVar4 = FUN_0059d280(param_1,puVar6,in_stack_ffffff88,puVar7,pcVar8,iVar9,(uint)puVar10);
    (**(code **)(*piVar4 + 0xe8))();
    FUN_0059ac10((int)param_1);
    param_1[0x21b] = DAT_00e4fa4c;
  }
  else {
    param_1[0x21b] = DAT_00e4fa4c;
  }
  *(undefined1 *)(param_1 + 0x1cb) = 0;
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0057a730 @ 0057a730 ////

void __fastcall FUN_0057a730(int param_1)

{
  FUN_005779c0((int *)(param_1 + -0xa0));
  if (*(undefined4 **)(param_1 + 0x6f8) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x6f8) = *(undefined4 *)(param_1 + 0x6f4);
  }
  if (*(int *)(param_1 + 0x6f4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x6f4) + 4) = *(undefined4 *)(param_1 + 0x6f8);
  }
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  if ((*(int *)(param_1 + 0x774) == 0) || (DAT_010b93a4 = 0, *(int *)(param_1 + 0x894) == 0)) {
    DAT_010b93a4 = 2;
  }
  FUN_0059a980(param_1);
  return;
}


//// FUNCTION FUN_0057a7a0 @ 0057a7a0 ////

void __fastcall FUN_0057a7a0(int *param_1)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  
  iVar2 = (**(code **)(*param_1 + 500))();
  if ((((iVar2 != 0) && (piVar3 = (int *)FUN_0053ae00((int)param_1), piVar3 != (int *)0x0)) &&
      (uVar4 = FUN_0093e3a0(piVar3,(int)param_1), (char)uVar4 != '\0')) &&
     ((**(code **)(*piVar3 + 0x20))(param_1), *(char *)((int)piVar3 + 0x1c9) == '\0')) {
    (**(code **)(*piVar3 + 0x50))(0);
  }
  puVar6 = DAT_0104d688;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      this = (void *)puVar6[2];
      if (this != (void *)0x0) {
        piVar3 = (int *)FUN_005b2780((int)this);
        if (piVar3 == param_1) {
          FUN_005b6c90(this,0);
        }
        iVar2 = 0;
        piVar3 = param_1;
        pvVar5 = (void *)FUN_005b2220((int)this);
        pvVar5 = (void *)FUN_005a7640(pvVar5,(int)piVar3,iVar2);
        if (pvVar5 != (void *)0x0) {
          piVar3 = (int *)FUN_005a6470((int)pvVar5);
          if (piVar3 == param_1) {
            FUN_005b4140(this,0,pvVar5);
          }
          else {
            piVar3 = param_1;
            pvVar5 = (void *)FUN_005b2220((int)this);
            FUN_005a71d0(pvVar5,(int)piVar3);
          }
        }
        FUN_005bae70(this,(int)param_1);
        FUN_005b5750(this,(int)param_1);
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d694);
  }
  return;
}


//// FUNCTION FUN_0057a870 @ 0057a870 ////

void __thiscall FUN_0057a870(void *this,undefined1 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00cb23cb;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0x8cc) == 0) && (*(int *)((int)this + 0x91c) == 0)) {
    ExceptionList = &local_c;
    (**(code **)(*(int *)this + 0x224))(0,0);
    iVar2 = *(int *)((int)this + 0x934);
    iVar3 = GetPlayerStudio();
    if (iVar2 == iVar3) {
      puVar4 = DAT_0104cfc8;
      if (DAT_0104cfc8 != &DAT_0104cfd4) {
        do {
          iVar2 = *(int *)(puVar4[2] + 0x934);
          iVar3 = GetPlayerStudio();
          if (iVar2 == iVar3) {
            (**(code **)(*(int *)puVar4[2] + 0x208))(this);
          }
          puVar1 = puVar4 + 1;
          puVar4 = (undefined4 *)*puVar1;
        } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
      }
      *(undefined1 *)((int)this + 0x61) = 0;
    }
    (**(code **)(*(int *)this + 0x10c))();
    pvStack_4 = operator_new(0x128);
    local_c = (void *)0x0;
    if (pvStack_4 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = DesireLeave_Constructor(pvStack_4,this);
    }
    local_c = (void *)0xffffffff;
    TMCharacter_AddResidentDesire(this,(int)puVar4);
    piVar5 = (int *)(**(code **)(*(int *)this + 0x1d4))();
    (**(code **)(*piVar5 + 0x44))();
    FUN_0057a7a0(this);
    FUN_00571a60(this);
    (**(code **)(*(int *)this + 0x200))();
    (**(code **)(*(int *)this + 0x1a4))(0);
    if (*(undefined4 **)((int)this + 0x788) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 0x788) = *(undefined4 *)((int)this + 0x784);
    }
    if (*(int *)((int)this + 0x784) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x784) + 4) = *(undefined4 *)((int)this + 0x788);
    }
    *(undefined4 *)((int)this + 0x784) = 0;
    *(undefined4 *)((int)this + 0x788) = 0;
    puVar4 = (undefined4 *)FUN_0043b510(&puStack_8);
    *(undefined4 *)((int)this + 0x86c) = *puVar4;
    ExceptionList = unaff_ESI;
    return;
  }
  *(undefined1 *)((int)this + 0x9d9) = param_1;
  *(undefined1 *)((int)this + 0x9d8) = 1;
  return;
}


//// FUNCTION FUN_0057aa10 @ 0057aa10 ////

void __thiscall FUN_0057aa10(void *this,int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  byte *pbVar9;
  bool bVar10;
  int unaff_retaddr;
  int local_34;
  byte *pbStack_2c;
  uint uStack_24;
  byte abStack_20 [5];
  undefined1 uStack_1b;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_00cb23f9;
  pvStack_c = ExceptionList;
  bVar8 = false;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0x934) != param_1) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)((int)this + 0x920) + 4))();
    *(int *)((int)this + 0x934) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x920))();
    iVar6 = *(int *)((int)this + 0x934);
    iVar3 = GetPlayerStudio();
    if (iVar6 == iVar3) {
      piVar4 = (int *)(**(code **)(*(int *)this + 0x1d4))();
      (**(code **)(*(int *)this + 0x1d4))();
      (**(code **)(*piVar4 + 0x54))();
    }
    else {
      piVar4 = (int *)(**(code **)(*(int *)this + 0x1d4))();
      plVar5 = (longlong *)(**(code **)(*piVar4 + 8))();
      if (((float)*plVar5 * 1.1920929e-07 != 0.0) && (*(int *)((int)this + 0x934) != 0)) {
        piVar4 = (int *)(**(code **)(*(int *)this + 0x1d4))();
        (**(code **)(*(int *)this + 0x1d4))();
        (**(code **)(*piVar4 + 8))(&stack0xffffffac);
        (**(code **)(iStack_4 + 0x48))();
      }
      piVar4 = (int *)(**(code **)(*(int *)this + 0x1d4))();
      FUN_00acd42c();
      FUN_00471b10((longlong *)&stack0xffffffac);
      unaff_retaddr = *piVar4;
    }
    (**(code **)(unaff_retaddr + 4))();
  }
  local_34 = *(int *)((int)this + 0x4f8);
  if (local_34 == (int)this + 0x504) {
    ExceptionList = pvStack_c;
    return;
  }
  do {
    puVar2 = *(undefined4 **)(local_34 + 8);
    iVar6 = FUN_00401c30((int)puVar2);
    if (iVar6 == 0) {
LAB_0057ac04:
      bVar10 = false;
    }
    else {
      pbStack_2c = abStack_20;
      abStack_20[0] = 0;
      uStack_24 = 0x14;
      _strncpy((char *)pbStack_2c,"leave",5);
      uStack_1b = 0;
      bVar8 = true;
      iStack_4 = 0;
      iVar6 = FUN_00401c30((int)puVar2);
      pbVar7 = *(byte **)(iVar6 + 100);
      pbVar9 = pbStack_2c;
      do {
        bVar1 = *pbVar7;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_0057abf6:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_0057abfb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_0057abf6;
        pbVar7 = pbVar7 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_0057abfb:
      bVar10 = true;
      if (iVar6 != 0) goto LAB_0057ac04;
    }
    iStack_4 = -1;
    if ((bVar8) && (bVar8 = false, 0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
      _free(pbStack_2c);
    }
    if (bVar10) {
      TMCharacter_CancelAction(this,puVar2);
      ExceptionList = pvStack_c;
      return;
    }
    local_34 = *(int *)(local_34 + 4);
    if (local_34 == (int)this + 0x504) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_0057acf0 @ 0057acf0 ////

void __fastcall FUN_0057acf0(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  void *this;
  float10 fVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  char local_f4 [4];
  undefined4 uStack_f0;
  char *local_d0;
  uint local_cc;
  uint local_c8;
  char local_c4 [20];
  undefined1 *local_b0;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb241b;
  local_c = ExceptionList;
  if (param_1[0x205] == 0xd) {
    this = *(void **)(param_1[0x1ee] + 0xa4);
  }
  else {
    this = (void *)param_1[0x247];
  }
  if (this == (void *)0x0) {
    ExceptionList = &local_c;
    cVar1 = (**(code **)(*param_1 + 0x218))();
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return;
    }
    FUN_00599e70(param_1);
    ExceptionList = local_c;
    return;
  }
  local_d0 = local_c4;
  local_c4[0] = '\0';
  local_cc = 0;
  local_c8 = 0x14;
  uStack_f0 = 0x57ad5f;
  ExceptionList = &local_c;
  _strncpy(local_d0,"",0);
  local_cc = 0;
  *local_d0 = '\0';
  local_4 = 0;
  switch(param_1[0x13a]) {
  case 0:
  case 1:
    puVar2 = FUN_005787e0(this,local_4c,1);
    FUN_004015d0(&local_d0,(char *)*puVar2,puVar2[1]);
    break;
  case 2:
    puVar2 = FUN_005787e0(this,local_ac,2);
    FUN_004015d0(&local_d0,(char *)*puVar2,puVar2[1]);
    local_4c[0] = local_ac[0];
    local_44 = local_a4;
    break;
  case 3:
    fVar4 = FUN_004012c0((float)param_1[0x11e] - (float)param_1[0x11f]);
    if (fVar4 <= (float10)0.0) {
      puVar2 = FUN_005787e0(this,local_6c,5);
      FUN_00401e30(&local_d0,puVar2);
    }
    else {
      puVar2 = FUN_005787e0(this,local_8c,4);
      FUN_00401e30(&local_d0,puVar2);
      local_6c[0] = local_8c[0];
      local_64 = local_84;
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    if (param_1[0x205] == 0xd) {
      *(undefined1 *)(param_1 + 0x83) = 1;
    }
    goto LAB_0057aeb7;
  default:
    puVar2 = FUN_005787e0(this,local_2c,3);
    FUN_004015d0(&local_d0,(char *)*puVar2,puVar2[1]);
    local_4c[0] = local_2c[0];
    local_44 = local_24;
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
LAB_0057aeb7:
  local_b0 = &stack0xffffff00;
  pcVar5 = local_f4;
  local_f4[0] = '\0';
  uVar6 = 0;
  uVar7 = 0x14;
  FUN_004015d0(&stack0xffffff00,local_d0,local_cc);
  pbVar3 = FUN_00446820(pcVar5,uVar6,uVar7);
  FUN_00526890(param_1,pbVar3);
  if (pbVar3 != (byte *)0x0) {
    FUN_00985de0(pbVar3);
  }
  if (local_c8 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_d0);
}


//// FUNCTION FUN_0057af50 @ 0057af50 ////

void __fastcall FUN_0057af50(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char **ppcVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2449;
  local_c = ExceptionList;
  bVar2 = false;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x934) == 0) {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x720) = 8;
  }
  if (*(char *)(param_1 + 0x15c) != '\0') {
    iVar3 = FUN_005998e0(param_1);
    if (iVar3 != 0) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"readyposition",0xd);
      local_28 = 0xd;
      local_2c[0xd] = '\0';
      ppcVar5 = &local_2c;
      local_4 = 0;
      bVar2 = true;
      iVar3 = FUN_005998e0(param_1);
      iVar3 = FUN_00401c30(iVar3);
      uVar4 = FUN_00401ec0((undefined4 *)(iVar3 + 100),ppcVar5);
      bVar1 = true;
      if ((char)uVar4 != '\0') goto LAB_0057b008;
    }
  }
  bVar1 = false;
LAB_0057b008:
  local_4 = 0xffffffff;
  if ((bVar2) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x720) = 7;
  }
  uVar4 = FUN_00598ee0(param_1);
  if ((char)uVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x720) = 5;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0057b070 @ 0057b070 ////

void __fastcall FUN_0057b070(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x91c);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 0x110);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (*(code *)**(undefined4 **)(iVar2 + 200))(1);
    }
    (**(code **)(*(int *)(param_1 + 0x908) + 4))();
    *(undefined4 *)(param_1 + 0x91c) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x908))();
    *(bool *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x91c) != 0;
  }
  return;
}


//// FUNCTION FUN_0057b0d0 @ 0057b0d0 ////

int __fastcall FUN_0057b0d0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  void *unaff_EBX;
  undefined1 auStack_20 [4];
  uint uStack_1c;
  
  iVar2 = FUN_005998e0(param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00401c30(iVar2);
    if (piVar3 != (int *)0x0) {
      cVar6 = '\0';
      if (*(int **)(iVar2 + 0x25c) == (int *)0x0) {
LAB_0057b113:
        if (*(int *)(param_1 + 0x5f4) != 0) goto LAB_0057b11d;
      }
      else {
        cVar1 = (**(code **)(**(int **)(iVar2 + 0x25c) + 200))();
        if (cVar1 == '\0') goto LAB_0057b113;
LAB_0057b11d:
        cVar6 = '\x01';
      }
      if (((*(int *)(param_1 + 0x91c) != 0) && (*(int *)(param_1 + 0x4ec) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x4ec) + 0x34) == 4)) {
        cVar6 = '\x01';
      }
      if ((*(int **)(param_1 + 0x884) != piVar3) || (*(char *)(param_1 + 0x8a8) != cVar6)) {
        *(char *)(param_1 + 0x8a8) = cVar6;
        (**(code **)(*(int *)(param_1 + 0x870) + 4))();
        *(int **)(param_1 + 0x884) = piVar3;
        (*(code *)**(undefined4 **)(param_1 + 0x870))();
        if (*(char *)(param_1 + 0x8a8) == '\0') {
          puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x40))(auStack_20);
        }
        else {
          puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x3c))();
        }
        FUN_004036d0((void *)(param_1 + 0x888),(wchar_t *)*puVar4,puVar4[1]);
        if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
          _free(unaff_EBX);
        }
      }
      goto LAB_0057b1d9;
    }
  }
  uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)(param_1 + 0x888),(wchar_t *)&lpCaption_00d16918,uVar5);
LAB_0057b1d9:
  return param_1 + 0x888;
}


//// FUNCTION FUN_0057b1f0 @ 0057b1f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_0057b1f0(int *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  char acStack_44 [20];
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2468;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar1 = (float *)(**(code **)(*param_1 + 0x1e4))(&local_50);
  if (_DAT_00e53304 <= *pfVar1) {
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(param_1 + 0x263,(wchar_t *)&lpCaption_00d16918,uVar3);
  }
  else if (param_1[0x264] == 0) {
    local_50 = acStack_44;
    acStack_44[0] = '\0';
    uStack_4c = 0;
    uStack_48 = 0x20;
    local_50 = _malloc(0x20);
    _strncpy(local_50,"SITT_INJURY_DESCRIPTION",0x17);
    uStack_4c = 0x17;
    local_50[0x17] = '\0';
    puStack_8 = (undefined1 *)0x0;
    puVar2 = FUN_009b7190(apvStack_30,&local_50,'\0',0);
    FUN_004036d0(param_1 + 0x263,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_30[0]);
    }
    if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
  }
  ExceptionList = pvStack_10;
  return param_1 + 0x263;
}


//// FUNCTION FUN_0057b310 @ 0057b310 ////

void FUN_0057b310(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = DAT_0104cfd4;
  while (DAT_0104cfd4 = piVar3, (int **)DAT_0104cfc8 != &DAT_0104cfd4) {
    puVar2 = (undefined4 *)piVar3[2];
    if ((int *)piVar3[1] != (int *)0x0) {
      *(int *)piVar3[1] = *piVar3;
    }
    if (*piVar3 != 0) {
      *(int *)(*piVar3 + 4) = piVar3[1];
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3 = DAT_0104cfd4;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      piVar3 = DAT_0104cfd4;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
        piVar3 = DAT_0104cfd4;
      }
    }
  }
  DAT_0104cfc8 = &DAT_0104cfd4;
  piVar3 = DAT_0104d008;
  while (DAT_0104d008 = piVar3, (int **)DAT_0104cffc != &DAT_0104d008) {
    puVar2 = (undefined4 *)piVar3[2];
    if ((int *)piVar3[1] != (int *)0x0) {
      *(int *)piVar3[1] = *piVar3;
    }
    if (*piVar3 != 0) {
      *(int *)(*piVar3 + 4) = piVar3[1];
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3 = DAT_0104d008;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      piVar3 = DAT_0104d008;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
        piVar3 = DAT_0104d008;
      }
    }
  }
  FUN_004adf00();
  FUN_0048ea00();
  return;
}


//// FUNCTION FUN_0057b3d0 @ 0057b3d0 ////

void FUN_0057b3d0(void)

{
  DAT_0104cf94 = DAT_0104cf94 + -1;
  FUN_0057b310();
  FUN_00571b80();
  FUN_0056e190();
  return;
}


//// FUNCTION FUN_0057b420 @ 0057b420 ////

int * __cdecl FUN_0057b420(float param_1,float param_2,float param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  int *piVar5;
  undefined4 *puVar6;
  float local_10;
  undefined1 local_c [12];
  
  piVar5 = (int *)0x0;
  local_10 = 3.4028235e+38;
  puVar6 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      piVar2 = (int *)puVar6[2];
      pfVar4 = (float *)(**(code **)(*piVar2 + 0x34))(local_c);
      fVar3 = (*pfVar4 - param_1) * (*pfVar4 - param_1) +
              (pfVar4[1] - param_2) * (pfVar4[1] - param_2) +
              (pfVar4[2] - param_3) * (pfVar4[2] - param_3);
      if (fVar3 < local_10) {
        piVar5 = piVar2;
        local_10 = fVar3;
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  return piVar5;
}


//// FUNCTION FUN_0057b4b0 @ 0057b4b0 ////

void __thiscall FUN_0057b4b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  int iVar3;
  void *this_01;
  char **ppcVar4;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2488;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x938) + 4))();
  *(int *)((int)this + 0x94c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x938))();
  this_00 = (void *)FUN_0059c530((int)this);
  if ((this_00 != (void *)0x0) && (*(int *)((int)this + 0x94c) != 0)) {
    pcStack_2c = acStack_20;
    *(undefined1 *)((int)this_00 + 0x9c) = 0;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"jobcenter",9);
    uStack_28 = 9;
    pcStack_2c[9] = '\0';
    ppcVar4 = &pcStack_2c;
    uStack_4 = 0;
    iVar3 = FUN_0084d520(param_1);
    this_01 = (void *)FUN_00529ef0(iVar3);
    iVar3 = FUN_008b1cb0(this_01,ppcVar4);
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
    if (iVar3 != 0) {
      FUN_00843010(this_00,iVar3);
    }
  }
  piVar1 = (int *)((int)this + 0x8e8);
  if (*(int **)((int)this + 0x8ec) != (int *)0x0) {
    **(int **)((int)this + 0x8ec) = *piVar1;
  }
  if (*piVar1 != 0) {
    *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)((int)this + 0x8ec);
  }
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x8ec) = 0;
  if (*(int *)((int)this + 0x94c) != 0) {
    piVar2 = (int *)(*(int *)((int)this + 0x94c) + 0xb0);
    *(int **)((int)this + 0x8ec) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0057b600 @ 0057b600 ////

int __cdecl FUN_0057b600(float *param_1,char param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_10;
  undefined1 auStack_c [12];
  
  iVar7 = 0;
  local_10 = 0.0;
  puVar8 = DAT_0104cfc8;
  if (DAT_0104cfc8 == &DAT_0104cfd4) {
    return 0;
  }
  do {
    cVar4 = (**(code **)(*(int *)puVar8[2] + 0x1c0))(0,0);
    if (((cVar4 != '\0') &&
        ((param_2 != '\0' || (uVar5 = FUN_00598ee0(puVar8[2]), (char)uVar5 == '\0')))) &&
       ((param_3 == '\0' ||
        (((((iVar2 = *(int *)(puVar8[2] + 0x814), iVar2 == 7 || (iVar2 == 8)) || (iVar2 == 9)) ||
          ((iVar2 == 10 || (iVar2 == 0xb)))) || (iVar2 == 0xc)))))) {
      if (param_1 == (float *)0x0) {
        return puVar8[2];
      }
      pfVar6 = (float *)(**(code **)(*(int *)puVar8[2] + 0x34))(auStack_c);
      fVar3 = (*param_1 - *pfVar6) * (*param_1 - *pfVar6) +
              (param_1[1] - pfVar6[1]) * (param_1[1] - pfVar6[1]) +
              (param_1[2] - pfVar6[2]) * (param_1[2] - pfVar6[2]);
      if ((iVar7 == 0) || (fVar3 < local_10)) {
        iVar7 = puVar8[2];
        local_10 = fVar3;
      }
    }
    puVar1 = puVar8 + 1;
    puVar8 = (undefined4 *)*puVar1;
  } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  return iVar7;
}


//// FUNCTION FUN_0057b700 @ 0057b700 ////

int __cdecl FUN_0057b700(char param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 0;
  puVar5 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      cVar3 = (**(code **)(*(int *)puVar5[2] + 0x1c0))(0,0);
      if (((cVar3 != '\0') &&
          ((param_1 != '\0' || (uVar4 = FUN_00598ee0(puVar5[2]), (char)uVar4 == '\0')))) &&
         (((param_2 == '\0' ||
           (((iVar2 = *(int *)(puVar5[2] + 0x814), iVar2 == 7 || (iVar2 == 8)) || (iVar2 == 9)))) ||
          (((iVar2 == 10 || (iVar2 == 0xb)) || (iVar2 == 0xc)))))) {
        iVar6 = iVar6 + 1;
      }
      puVar1 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  return iVar6;
}


//// FUNCTION FUN_0057b800 @ 0057b800 ////

void __thiscall FUN_0057b800(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  char cVar11;
  ulonglong uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  void *pvStack_3c;
  uint uStack_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb24d4;
  local_c = ExceptionList;
  if (*(char *)((int)this + 0x989) == '\0') {
    ExceptionList = &local_c;
    if (*(int *)((int)this + 0x4c4) != 2) {
      ExceptionList = &local_c;
      iVar2 = FUN_00ace790(this,0,&TM::CStaff::RTTI_Type_Descriptor,
                           &TM::CExtra::RTTI_Type_Descriptor,0);
      if (iVar2 == 0) {
        *(undefined1 *)((int)this + 0x989) = 1;
        iVar2 = FUN_00ace790(this,0,&TM::CStaff::RTTI_Type_Descriptor,
                             &TM::CWannabe::RTTI_Type_Descriptor,0);
        if (iVar2 == 0) {
          piVar3 = *(int **)((int)this + 0x4a0);
        }
        else {
          piVar3 = *(int **)((int)this + 0x4a0);
        }
        piVar3 = FUN_00570ef0(piVar3);
        (**(code **)(*(int *)((int)this + 0x9f4) + 4))();
        *(int **)((int)this + 0xa08) = piVar3;
        (*(code *)**(undefined4 **)((int)this + 0x9f4))();
        (**(code **)(**(int **)((int)this + 0xa08) + 0x224))();
        (**(code **)(*(int *)this + 0x5c))();
        (**(code **)(**(int **)((int)this + 0xa08) + 0x60))();
        if (10 < uStack_34) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_3c);
        }
        *(undefined1 *)(*(int *)((int)this + 0xa08) + 100) = 0;
        FUN_0056f500(*(void **)((int)this + 0xa08),param_1 == 0x10);
        uStack_70 = 0x57b93b;
        FUN_0053b650(*(void **)((int)this + 0xa08),*(undefined4 *)((int)this + 0x180),
                     *(void **)((int)this + 0x198));
        FUN_0056f7c0(*(void **)((int)this + 0xa08),this);
        (**(code **)(**(int **)((int)this + 0xa08) + 0x120))();
        iVar2 = **(int **)((int)this + 0xa08);
        puVar10 = &stack0xffffffa8;
        uStack_70 = 0x57b96b;
        uStack_70 = (**(code **)(*(int *)this + 0x4c))();
        puStack_74 = &stack0xffffffb0;
        uStack_78 = 0x57b978;
        uStack_78 = (**(code **)(*(int *)this + 0x34))();
        uStack_7c = 0x57b981;
        (**(code **)(iVar2 + 0xa8))();
        uStack_7c = 0x57b990;
        piVar3 = (int *)GetPlayerStudio();
        uStack_7c = 1;
        uStack_84 = FUN_00acd42c();
        uVar4 = (undefined4)uStack_84;
        FUN_00471b10((longlong *)&uStack_84);
        (**(code **)(*piVar3 + 0x2c))();
        piVar3 = *(int **)((int)this + 0xa08);
        cVar11 = '\x01';
        FUN_00471b10((longlong *)&stack0xffffff70);
        pvVar5 = (void *)(**(code **)(*piVar3 + 0x1d4))();
        FUN_004ae040(pvVar5,uVar4,puVar10,cVar11);
        FUN_0057b4b0(*(void **)((int)this + 0xa08),*(int *)((int)this + 0x94c));
        *(undefined4 *)(*(int *)((int)this + 0xa08) + 0x7dc) = *(undefined4 *)((int)this + 0x7dc);
        if (*(undefined4 **)((int)this + 0x8ec) != (undefined4 *)0x0) {
          **(undefined4 **)((int)this + 0x8ec) = *(undefined4 *)((int)this + 0x8e8);
        }
        if (*(int *)((int)this + 0x8e8) != 0) {
          *(undefined4 *)(*(int *)((int)this + 0x8e8) + 4) = *(undefined4 *)((int)this + 0x8ec);
        }
        *(undefined4 *)((int)this + 0x8e8) = 0;
        *(undefined4 *)((int)this + 0x8ec) = 0;
        if (*(undefined4 **)((int)this + 2000) != (undefined4 *)0x0) {
          **(undefined4 **)((int)this + 2000) = *(undefined4 *)((int)this + 0x7cc);
        }
        if (*(int *)((int)this + 0x7cc) != 0) {
          *(undefined4 *)(*(int *)((int)this + 0x7cc) + 4) = *(undefined4 *)((int)this + 2000);
        }
        *(undefined4 *)((int)this + 0x7cc) = 0;
        *(undefined4 *)((int)this + 2000) = 0;
        piVar6 = (int *)(*(int *)((int)this + 0xa08) + 0x7cc);
        piVar3 = &DAT_0104ee2c + *(int *)((int)this + 0x7dc) * 0xd;
        *(int **)(*(int *)((int)this + 0xa08) + 2000) = piVar3;
        *piVar6 = *piVar3;
        *(int **)(*piVar3 + 4) = piVar6;
        *piVar3 = (int)piVar6;
        ExceptionList = pvStack_3c;
        return;
      }
    }
    uVar9 = param_1 == 0x10;
    uStack_70 = 0x57badd;
    pvVar5 = (void *)FUN_00ace790(this,0,&TM::CStaff::RTTI_Type_Descriptor,
                                  &TM::CExtra::RTTI_Type_Descriptor,0);
    FUN_0056f500(pvVar5,uVar9);
    iVar2 = *(int *)((int)this + 0x934);
    iVar7 = GetPlayerStudio();
    if (iVar2 != iVar7) {
      (**(code **)(*(int *)this + 0x150))();
    }
    bVar1 = FUN_0059c5e0((int)this);
    if (!bVar1) {
      pvVar5 = operator_new(0x128);
      uStack_4 = 0;
      if (pvVar5 == (void *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = DesirePlay_Constructor(pvVar5,(int)this);
      }
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(this,(int)puVar8);
    }
    bVar1 = FUN_0059c5e0((int)this);
    if (!bVar1) {
      pvVar5 = operator_new(0x140);
      uStack_4 = 1;
      if (pvVar5 == (void *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = DesireGetChanged_Constructor(pvVar5,this);
      }
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(this,(int)puVar8);
    }
    bVar1 = FUN_0059c5e0((int)this);
    if (!bVar1) {
      pvVar5 = operator_new(0x148);
      uStack_4 = 2;
      if (pvVar5 == (void *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = DesireHeal_Constructor(pvVar5,(int)this);
      }
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(this,(int)puVar8);
    }
    bVar1 = FUN_0059c5e0((int)this);
    if (!bVar1) {
      pvVar5 = operator_new(0x144);
      uStack_4 = 3;
      if (pvVar5 == (void *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = DesireAgony_Constructor(pvVar5,this);
      }
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(this,(int)puVar8);
    }
    if (*(int *)((int)this + 0x814) != param_1) {
      (**(code **)(*(int *)this + 0x224))();
      CStaff_ApplyJobCostumeAndPlacement(this,param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0057bc70 @ 0057bc70 ////

void __fastcall FUN_0057bc70(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  void *unaff_EBX;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uStack_5c;
  byte abStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *pvStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb24e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_1 + 0x262) = 1;
  piVar1 = FUN_00595380((int *)param_1[0x128]);
  (**(code **)(param_1[0x277] + 4))();
  param_1[0x27c] = (int)piVar1;
  (**(code **)param_1[0x277])();
  (**(code **)(*(int *)param_1[0x27c] + 0x224))();
  (**(code **)(*param_1 + 0x5c))();
  uStack_10 = 0;
  (**(code **)(*(int *)param_1[0x27c] + 0x60))();
  uStack_14 = 0xffffffff;
  if (10 < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  *(undefined1 *)(param_1[0x27c] + 100) = 0;
  FUN_0053b650((void *)param_1[0x27c],param_1[0x60],(void *)param_1[0x66]);
  FUN_00585470((void *)param_1[0x27c],param_1[0x47]);
  FUN_00587520((void *)param_1[0x27c],param_1);
  (**(code **)(*(int *)param_1[0x27c] + 0x120))();
  iVar8 = *(int *)param_1[0x27c];
  uVar2 = (**(code **)(*param_1 + 0x4c))();
  (**(code **)(*param_1 + 0x34))();
  (**(code **)(iVar8 + 0xa8))();
  FUN_0041c550(param_1);
  abStack_58[0] = 0;
  abStack_58[1] = 0;
  abStack_58[2] = 0;
  abStack_58[3] = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  pvStack_3c = (void *)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_50 = 0xffffffff;
  uStack_54 = FUN_009b01a0("UI_STARMAKER");
  puVar11 = &DAT_00d17518;
  pbVar9 = abStack_58;
  iVar10 = 0;
  iVar8 = 2;
  pvVar3 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar3,iVar8,pbVar9,iVar10,puVar11);
  uStack_20 = DAT_0104cfb0;
  piVar1 = (int *)GetPlayerStudio();
  uVar6 = FUN_00acd42c();
  uVar4 = (undefined4)uVar6;
  FUN_00471b10((longlong *)&stack0xffffff60);
  (**(code **)(*piVar1 + 0x2c))();
  piVar1 = (int *)param_1[0x27c];
  cVar7 = '\x01';
  puStack_2c = &stack0xffffff54;
  FUN_00471b10((longlong *)&stack0xffffff54);
  pvVar3 = (void *)(**(code **)(*piVar1 + 0x1d4))();
  FUN_004ae040(pvVar3,uVar4,uVar2,cVar7);
  FUN_0057b4b0((void *)param_1[0x27c],param_1[0x253]);
  if ((int *)param_1[500] != (int *)0x0) {
    *(int *)param_1[500] = param_1[499];
  }
  if (param_1[499] != 0) {
    *(int *)(param_1[499] + 4) = param_1[500];
  }
  param_1[499] = 0;
  param_1[500] = 0;
  *(int *)(param_1[0x27c] + 0x7dc) = param_1[0x1f7];
  piVar1 = (int *)(param_1[0x27c] + 0x7cc);
  piVar5 = &DAT_0104ee2c + param_1[0x1f7] * 0xd;
  *(int **)(param_1[0x27c] + 2000) = piVar5;
  *piVar1 = *piVar5;
  *(int **)(*piVar5 + 4) = piVar1;
  *piVar5 = (int)piVar1;
  if ((int *)param_1[0x23b] != (int *)0x0) {
    *(int *)param_1[0x23b] = param_1[0x23a];
  }
  if (param_1[0x23a] != 0) {
    *(int *)(param_1[0x23a] + 4) = param_1[0x23b];
  }
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  ExceptionList = pvStack_3c;
  return;
}


//// FUNCTION FUN_0057bf30 @ 0057bf30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057bf30(void *this,undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *this_00;
  undefined4 *puVar6;
  float10 fVar7;
  float local_38 [2];
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2529;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar2 = FUN_0059c5e0((int)this);
  puVar6 = (undefined4 *)0x0;
  if ((!bVar2) && (*(int *)((int)this + 0x198) == 0)) {
    iVar3 = FUN_005998e0((int)this);
    if (iVar3 != 0) {
      iVar3 = FUN_005998e0((int)this);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x50) + 0x10))();
      if ((iVar3 != 0) && (fVar7 = FUN_00496aa0(iVar3,this), fVar7 < (float10)1.0)) {
        ExceptionList = local_c;
        return;
      }
    }
    if (*(char *)((int)this + 0x15c) == '\0') {
      *(undefined1 *)((int)this + 0x8a9) = 1;
      *(int *)((int)this + 0x8ac) = *(int *)(DAT_0104cdf4 + 0x3c) + _DAT_00e532f8;
      FUN_00598e50(this,local_38);
      uStack_30 = 0;
      pvVar4 = operator_new(0x2e0);
      uStack_4 = 0;
      if (pvVar4 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = FUN_00445f60(pvVar4,local_38,param_1);
      }
      pcStack_2c = acStack_20;
      acStack_20[0] = '\0';
      uStack_28 = 0;
      uStack_24 = 0x14;
      _strncpy(pcStack_2c,"ai_await_chat.flm",0x11);
      uStack_28 = 0x11;
      pcStack_2c[0x11] = '\0';
      uStack_4 = 1;
      (**(code **)(*piVar5 + 0xb0))();
      uStack_4 = 0xffffffff;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      pvVar4 = operator_new(0x2b4);
      uStack_4 = 2;
      if (pvVar4 == (void *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        this_00 = FUN_00402380(pvVar4,(int)this,piVar5);
      }
      uStack_4 = 0xffffffff;
      pvVar4 = operator_new(0x128);
      uStack_4 = 3;
      if (pvVar4 != (void *)0x0) {
        puVar6 = DesireUrgent_Constructor(pvVar4,this);
      }
      uStack_4 = 0xffffffff;
      TMCharacter_AddResidentDesire(this,(int)puVar6);
      FUN_004015d0(puVar6 + 0x19,"freeze",6);
      FUN_00401a00(this_00,puVar6);
      this_00[0x84] = this_00[0x84] & 0xfffffffe | 2;
      TMCharacter_AddAction(this,(int)this_00);
      FUN_0059c8e0(this,"freeze");
      piVar1 = piVar5 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*piVar5)();
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0057c160 @ 0057c160 ////

void __fastcall FUN_0057c160(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char **ppcVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2559;
  local_c = ExceptionList;
  bVar2 = false;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x8a9) = 0;
  iVar3 = FUN_005998e0(param_1);
  if (iVar3 != 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"freeze",6);
    local_28 = 6;
    local_2c[6] = '\0';
    ppcVar5 = &local_2c;
    local_4 = 0;
    bVar2 = true;
    iVar3 = FUN_005998e0(param_1);
    iVar3 = FUN_00401c30(iVar3);
    uVar4 = FUN_00401ec0((undefined4 *)(iVar3 + 100),ppcVar5);
    bVar1 = true;
    if ((char)uVar4 != '\0') goto LAB_0057c202;
  }
  bVar1 = false;
LAB_0057c202:
  local_4 = 0xffffffff;
  if ((bVar2) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar1) {
    iVar3 = FUN_005998e0(param_1);
    FUN_00401780(iVar3);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0057c250 @ 0057c250 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057c250(void *this,float param_1)

{
  float fVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  fVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2578;
  local_c = ExceptionList;
  if (param_1 == 0.0) {
    return;
  }
  ExceptionList = &local_c;
  iVar2 = FUN_004df4b0((int)param_1);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return;
  }
  iVar2 = FUN_004df4b0((int)fVar1);
  pvVar3 = (void *)FUN_005b2780(iVar2);
  if (pvVar3 != this) {
    iVar2 = FUN_004df4b0((int)fVar1);
    iVar2 = FUN_005b2220(iVar2);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    iVar8 = 0;
    pvVar3 = this;
    iVar2 = FUN_004df4b0((int)fVar1);
    pvVar4 = (void *)FUN_005b2220(iVar2);
    iVar2 = FUN_005a7640(pvVar4,(int)pvVar3,iVar8);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
  }
  iVar2 = FUN_004df4b0((int)fVar1);
  iVar2 = FUN_005b6b90(iVar2);
  puVar5 = (undefined4 *)FUN_00449b40(iVar2);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,(char *)*puVar5,puVar5[1]);
  local_4 = 0;
  iVar2 = FUN_004df4b0((int)fVar1);
  pvVar3 = (void *)FUN_005b2780(iVar2);
  if (pvVar3 == this) {
    iVar2 = 0x10;
  }
  else {
    iVar8 = 0;
    pvVar3 = this;
    iVar2 = FUN_004df4b0((int)fVar1);
    pvVar4 = (void *)FUN_005b2220(iVar2);
    iVar2 = FUN_005a7640(pvVar4,(int)pvVar3,iVar8);
    pvVar3 = (void *)FUN_005a6470(iVar2);
    if (pvVar3 == this) {
      iVar8 = 0;
      pvVar3 = this;
      iVar2 = FUN_004df4b0((int)fVar1);
      pvVar4 = (void *)FUN_005b2220(iVar2);
      iVar2 = FUN_005a7640(pvVar4,(int)pvVar3,iVar8);
      uVar6 = FUN_005a6140(iVar2);
      if ((char)uVar6 == '\0') {
        pfVar7 = (float *)FUN_00440130(&param_1,0xf);
        param_1 = *pfVar7;
      }
      else {
        pfVar7 = (float *)FUN_00440130(&param_1,0xe);
        param_1 = *pfVar7;
      }
      goto LAB_0057c3af;
    }
    iVar2 = 0x13;
  }
  pfVar7 = (float *)FUN_00440130(&param_1,iVar2);
  param_1 = *pfVar7;
LAB_0057c3af:
  if (*(int *)((int)this + 0x814) == 0x10) {
    param_1 = _DAT_00e53320 * param_1;
  }
  FUN_004425f0(*(void **)((int)this + 0x96c),&local_2c,param_1);
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_0057c410 @ 0057c410 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057c410(void *this,float param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  float10 fVar4;
  float fStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2598;
  pvStack_c = ExceptionList;
  if ((char)param_2 == '\0') {
    fStack_30 = (_DAT_00e53318 - _DAT_00e53314) * param_1 + _DAT_00e53314;
  }
  else {
    fStack_30 = (_DAT_00e53310 - _DAT_00e5330c) * param_1 + _DAT_00e5330c;
  }
  ExceptionList = &pvStack_c;
  iVar2 = AwardBonusManager_Get();
  if (iVar2 != 0) {
    iVar2 = 0xf;
    pvVar3 = (void *)AwardBonusManager_Get();
    cVar1 = AwardBonusManager_IsBonusActive(pvVar3,iVar2);
    if (cVar1 != '\0') {
      pvVar3 = (void *)0x0;
      iVar2 = 0xf;
      AwardBonusManager_Get();
      fVar4 = AwardBonus_GetValue(iVar2,pvVar3);
      fStack_30 = (float)(fVar4 * (float10)fStack_30);
    }
  }
  if (*(int *)((int)this + 0x814) != 0x10) {
    fStack_30 = _DAT_00e5331c * fStack_30;
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"Stunts",6);
  uStack_28 = 6;
  pcStack_2c[6] = '\0';
  uStack_4 = 0;
  FUN_004425f0(*(void **)((int)this + 0x96c),&pcStack_2c,fStack_30);
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  FUN_005761e0(this,param_1,(char)param_2);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0057c431 @ 0057c431 ////

/* WARNING: Variable defined which should be unmapped: param_3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0057c431(void *this,float param_1,char *param_2,undefined4 param_3,uint param_4,char param_5)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  void *unaff_EBX;
  bool in_ZF;
  float10 fVar4;
  void *in_stack_00000028;
  float in_stack_00000038;
  char in_stack_0000003c;
  
  if (in_ZF) {
    param_1 = (_DAT_00e53318 - _DAT_00e53314) * in_stack_00000038 + _DAT_00e53314;
  }
  else {
    param_1 = (_DAT_00e53310 - _DAT_00e5330c) * in_stack_00000038 + _DAT_00e5330c;
  }
  iVar2 = AwardBonusManager_Get();
  if (iVar2 != 0) {
    iVar2 = 0xf;
    pvVar3 = (void *)AwardBonusManager_Get();
    cVar1 = AwardBonusManager_IsBonusActive(pvVar3,iVar2);
    if (cVar1 != '\0') {
      iVar2 = 0xf;
      pvVar3 = unaff_EBX;
      AwardBonusManager_Get();
      fVar4 = AwardBonus_GetValue(iVar2,pvVar3);
      param_1 = (float)(fVar4 * (float10)param_1);
    }
  }
  if (*(int *)((int)this + 0x814) != 0x10) {
    param_1 = _DAT_00e5331c * param_1;
  }
  param_2 = &param_5;
  param_4 = 0x14;
  param_5 = (char)unaff_EBX;
  _strncpy(param_2,"Stunts",6);
  param_3 = 6;
  param_2[6] = (char)unaff_EBX;
  FUN_004425f0(*(void **)((int)this + 0x96c),&param_2,param_1);
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  FUN_005761e0(this,in_stack_00000038,in_stack_0000003c);
  ExceptionList = in_stack_00000028;
  return;
}


//// FUNCTION FUN_0057c550 @ 0057c550 ////

void __fastcall FUN_0057c550(int param_1)

{
  undefined4 *puVar1;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb25d3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x98);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00442520(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x958) + 4))();
  *(undefined4 **)(param_1 + 0x96c) = puVar1;
  (*(code *)**(undefined4 **)(param_1 + 0x958))();
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"Lot",3);
  uStack_28 = 3;
  pcStack_2c[3] = '\0';
  local_4 = 1;
  FUN_00442490(*(void **)(param_1 + 0x96c),&pcStack_2c,0.0);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"Movies",6);
  uStack_28 = 6;
  pcStack_2c[6] = '\0';
  local_4 = 2;
  FUN_00442490(*(void **)(param_1 + 0x96c),&pcStack_2c,0.0);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  pcStack_2c = acStack_20;
  acStack_20[0] = '\0';
  uStack_28 = 0;
  uStack_24 = 0x14;
  _strncpy(pcStack_2c,"Security",8);
  uStack_28 = 8;
  pcStack_2c[8] = '\0';
  local_4 = 3;
  FUN_00442490(*(void **)(param_1 + 0x96c),&pcStack_2c,0.0);
  local_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  FUN_00598b50();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0057c700 @ 0057c700 ////

void __fastcall FUN_0057c700(void *param_1)

{
  float10 fVar1;
  
  if ((((*(char *)((int)param_1 + 0x11a) != '\0') && (*(char *)((int)param_1 + 0x8a9) == '\0')) &&
      (*(int *)((int)param_1 + 0x198) == 0)) && (*(int *)((int)param_1 + 0x8cc) == 0)) {
    fVar1 = (float10)fpatan((float10)*(float *)(DAT_00f87aa0 + 0xd4) -
                            (float10)*(float *)(DAT_00f87aa0 + 0xe0),
                            (float10)*(float *)(DAT_00f87aa0 + 0xd0) -
                            (float10)*(float *)(DAT_00f87aa0 + 0xdc));
    fVar1 = FUN_004012c0((float)fVar1);
    FUN_0057bf30(param_1,(float)fVar1);
  }
  return;
}


//// FUNCTION FUN_0057c800 @ 0057c800 ////

void __fastcall FUN_0057c800(int *param_1)

{
  int *this;
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  int *piStack_4;
  
  piStack_4 = param_1;
  uVar1 = FUN_00598ee0((int)param_1);
  if ((((char)uVar1 != '\0') || (param_1[0x131] == 2)) && ((char)param_1[0x1cb] == '\0')) {
    if (((param_1[0x233] != 0) || (param_1[0x247] != 0)) ||
       (iVar2 = (**(code **)(*param_1 + 0x1fc))(), iVar2 != 0)) {
      FUN_00578070(param_1);
    }
    this = param_1 + 0x1f8;
    FUN_0043b620(this,(float *)&piStack_4,(float *)&DAT_00e4fa4c);
    iVar2 = FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                         &TM::CStar::RTTI_Type_Descriptor,0);
    this_00 = (void *)FUN_007955a0();
    iVar2 = FUN_007991e0(this_00,iVar2);
    uVar1 = FUN_0043b6c0(this,(float *)&DAT_00e4fa4c);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_00598ee0((int)param_1);
      if ((((char)uVar1 != '\0') &&
          (iVar2 = param_1[0x24d], iVar3 = GetPlayerStudio(), iVar2 == iVar3)) &&
         (uVar4 = FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0), uVar4 != 0)) {
        FUN_00799420(uVar4);
      }
      FUN_00577e70(param_1);
      FUN_0057a7a0(param_1);
      return;
    }
    fVar5 = FUN_0043b710((float *)&piStack_4);
    if ((fVar5 < (float10)1.0 == (fVar5 == (float10)1.0)) ||
       (*(char *)((int)param_1 + 0x846) != '\0')) {
      fVar5 = FUN_0043b710((float *)&piStack_4);
      if ((fVar5 < (float10)1.0 == (fVar5 == (float10)1.0)) || (iVar2 != 0)) {
        fVar5 = FUN_0043b710((float *)&piStack_4);
        if ((fVar5 < (float10)5.0 != (fVar5 == (float10)5.0)) &&
           (*(char *)((int)param_1 + 0x845) == '\0')) {
          *(undefined1 *)((int)param_1 + 0x845) = 1;
          return;
        }
        fVar5 = FUN_0043b710((float *)&piStack_4);
        if ((fVar5 < (float10)10.0 != (fVar5 == (float10)10.0)) && ((char)param_1[0x211] == '\0')) {
          *(undefined1 *)(param_1 + 0x211) = 1;
        }
      }
      else {
        uVar1 = FUN_00598ee0((int)param_1);
        if ((((char)uVar1 != '\0') &&
            (iVar2 = param_1[0x24d], iVar3 = GetPlayerStudio(), iVar2 == iVar3)) &&
           (iVar2 = FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0), iVar2 != 0)) {
          FUN_00795c90(iVar2,*this);
          return;
        }
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x846) = 1;
      uVar1 = FUN_00598ee0((int)param_1);
      if ((((char)uVar1 != '\0') &&
          (iVar2 = param_1[0x24d], iVar3 = GetPlayerStudio(), iVar2 == iVar3)) &&
         (iVar2 = FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0), iVar2 != 0)) {
        FUN_00795c90(iVar2,*this);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_0057ca30 @ 0057ca30 ////

undefined1 __fastcall FUN_0057ca30(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char **ppcVar9;
  void **ppvVar10;
  char *local_ac;
  undefined4 local_a8;
  uint local_a4;
  char local_a0 [20];
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2681;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_005998e0(param_1);
  if (iVar6 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"readyposition",0xd);
  local_68 = 0xd;
  local_6c[0xd] = '\0';
  ppcVar9 = &local_6c;
  bVar4 = false;
  bVar3 = false;
  local_4 = 0;
  iVar7 = FUN_00401c30(iVar6);
  uVar8 = FUN_00401ec0((undefined4 *)(iVar7 + 100),ppcVar9);
  if ((char)uVar8 == '\0') {
    local_8c = local_80;
    local_88 = 0;
    local_84 = 0x14;
    local_80[0] = (char)uVar8;
    _strncpy(local_8c,"changecostume",0xd);
    local_88 = 0xd;
    local_8c[0xd] = '\0';
    ppcVar9 = &local_8c;
    local_4 = 1;
    bVar4 = true;
    bVar3 = false;
    iVar7 = FUN_00401c30(iVar6);
    uVar8 = FUN_00401ec0((undefined4 *)(iVar7 + 100),ppcVar9);
    if ((char)uVar8 != '\0') goto LAB_0057cc8d;
    local_ac = local_a0;
    local_a8 = 0;
    local_a4 = 0x20;
    local_a0[0] = (char)uVar8;
    local_ac = _malloc(0x20);
    _strncpy(local_ac,"waitingincastingforshoot",0x18);
    local_a8 = 0x18;
    local_ac[0x18] = '\0';
    ppcVar9 = &local_ac;
    bVar4 = true;
    bVar3 = true;
    local_4 = 2;
    iVar7 = FUN_00401c30(iVar6);
    uVar8 = FUN_00401ec0((undefined4 *)(iVar7 + 100),ppcVar9);
    if ((char)uVar8 != '\0') goto LAB_0057cc8d;
    local_4c = local_40;
    local_48 = 0;
    local_44 = 0x14;
    local_40[0] = (char)uVar8;
    _strncpy(local_4c,"rehearsescript",0xe);
    local_48 = 0xe;
    local_4c[0xe] = '\0';
    ppcVar9 = &local_4c;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar1 = false;
    local_4 = 3;
    iVar7 = FUN_00401c30(iVar6);
    uVar8 = FUN_00401ec0((undefined4 *)(iVar7 + 100),ppcVar9);
    if ((char)uVar8 == '\0') {
      FUN_00401de0(local_2c,"casting",0xffffffff);
      ppvVar10 = local_2c;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar1 = true;
      local_4 = 4;
      iVar6 = FUN_00401c30(iVar6);
      uVar8 = FUN_00401ec0((undefined4 *)(iVar6 + 100),ppvVar10);
      if ((char)uVar8 == '\0') {
        uVar5 = 0;
        goto LAB_0057cc97;
      }
    }
  }
  else {
LAB_0057cc8d:
    bVar2 = false;
    bVar1 = false;
  }
  uVar5 = 1;
LAB_0057cc97:
  if ((bVar1) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if ((bVar2) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((bVar3) && (0x14 < local_a4)) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac);
  }
  if ((bVar4) && (0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if (local_64 < 0x15) {
    ExceptionList = local_c;
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_0057cd50 @ 0057cd50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0057cd50(float param_1)

{
  uint uVar1;
  int iVar2;
  char **ppcVar3;
  int iVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2698;
  local_c = ExceptionList;
  uVar1 = *DAT_00f87b04;
  if ((param_1 < _DAT_00e53304) &&
     (((DAT_0104cfbc + 0x4b0 <= uVar1 || (DAT_0104cfbc == 0)) && (299 < uVar1)))) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    DAT_0104cfbc = uVar1;
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"TANNOY_STUNT_PERSON_INJURED",0x1b);
    local_28 = 0x1b;
    local_2c[0x1b] = '\0';
    iVar4 = 2;
    ppcVar3 = &local_2c;
    iVar2 = 2;
    local_4 = 0;
    FUN_004f3b20();
    FUN_004f8a00(iVar2,ppcVar3,iVar4);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0057ce80 @ 0057ce80 ////

void __fastcall FUN_0057ce80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d260c4;
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


//// FUNCTION FUN_0057cf00 @ 0057cf00 ////

void __fastcall FUN_0057cf00(int param_1)

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


//// FUNCTION FUN_0057cf30 @ 0057cf30 ////

void __fastcall FUN_0057cf30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d260d4;
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


//// FUNCTION FUN_0057cfd0 @ 0057cfd0 ////

void __fastcall FUN_0057cfd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d260e4;
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


//// FUNCTION FUN_0057d040 @ 0057d040 ////

void __fastcall FUN_0057d040(int param_1)

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


//// FUNCTION FUN_0057d070 @ 0057d070 ////

void __fastcall FUN_0057d070(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d260f4;
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


//// FUNCTION FUN_0057d0c0 @ 0057d0c0 ////

void __fastcall FUN_0057d0c0(int *param_1)

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


//// FUNCTION FUN_0057d120 @ 0057d120 ////

void __fastcall FUN_0057d120(int param_1)

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


//// FUNCTION FUN_0057d170 @ 0057d170 ////

void * FUN_0057d170(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0057d1d0 @ 0057d1d0 ////

void __fastcall FUN_0057d1d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb26b8;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[0x24];
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x24] = 0;
  *param_1 = &PTR_FUN_00d1d3d0;
  local_4 = 0xffffffff;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0057d3d0 @ 0057d3d0 ////

undefined4 __thiscall FUN_0057d3d0(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 unaff_retaddr;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb26e9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = (**(code **)(*(int *)this + 0x1c0))(param_1,0);
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)((int)this + 0x8cc);
    if (iVar1 == 0) {
      puVar3 = &stack0xffffffd4;
      pvStack_c = (void *)0x0;
    }
    else {
      puVar3 = (undefined1 *)(iVar1 + 0x8c);
    }
    (**(code **)(*(int *)((int)this + 0x8d0) + 4))();
    *(undefined4 *)((int)this + 0x8e4) = *(undefined4 *)(puVar3 + 0x14);
    (*(code *)**(undefined4 **)((int)this + 0x8d0))();
    pvStack_c = (void *)0xffffffff;
    if (iVar1 == 0) {
      FUN_00435e20((undefined4 *)&stack0xffffffd4);
    }
    (**(code **)(*(int *)((int)this + 0x8b8) + 4))();
    *(undefined4 *)((int)this + 0x8cc) = uStack_4;
    (*(code *)**(undefined4 **)((int)this + 0x8b8))();
    *(undefined4 *)((int)this + 0x8b4) = unaff_retaddr;
    ExceptionList = pvStack_14;
    return CONCAT31((int3)((uint)unaff_retaddr >> 8),1);
  }
  ExceptionList = pvStack_14;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_0057d4d0 @ 0057d4d0 ////

int __fastcall FUN_0057d4d0(void *param_1)

{
  int *this;
  undefined4 uVar1;
  uint3 uVar3;
  void *this_00;
  int iVar2;
  uint3 extraout_var;
  int iVar4;
  int *piVar5;
  
  uVar1 = FUN_0059be60(param_1);
  uVar3 = (uint3)((uint)uVar1 >> 8);
  if ((char)uVar1 != '\0') {
    if (*(char *)((int)param_1 + 0x963) == '\0') {
      this = (int *)((int)param_1 + -0x78);
      piVar5 = this;
      this_00 = (void *)(**(code **)(*(int *)((int)param_1 + -0x78) + 0x1d4))();
      FUN_004adf90(this_00,piVar5);
      iVar4 = *(int *)((int)param_1 + 0x8bc);
      if (iVar4 == 0) {
        FUN_0059c810((int)this);
        FUN_0057b4b0(this,*(int *)((int)param_1 + 0x8d4));
      }
      else {
        iVar2 = GetPlayerStudio();
        if (iVar4 == iVar2) {
          uVar1 = *(undefined4 *)((int)param_1 + 0x7f4);
          (**(code **)(*this + 0x150))(1);
          *(undefined4 *)((int)param_1 + 0x7f4) = uVar1;
        }
        else {
          (**(code **)(*this + 0x1a4))(*(undefined4 *)((int)param_1 + 0x8bc));
        }
      }
      if (*(int *)((int)param_1 + 0x8a4) != 0) {
        FUN_005778a0(this,*(int *)((int)param_1 + 0x8a4));
        (**(code **)(**(int **)((int)param_1 + 0x8a4) + 0x24))(this);
      }
      iVar4 = *(int *)((int)param_1 + 0x79c);
      *(undefined4 *)((int)param_1 + 0x79c) = 0;
      if (iVar4 == 0xd) {
        uVar1 = *(undefined4 *)((int)param_1 + 0x9a8);
        iVar4 = 0xd;
      }
      else {
        uVar1 = 0;
      }
      (**(code **)(*this + 0x224))(iVar4,uVar1);
      *(undefined1 *)((int)param_1 + 0x963) = 1;
      uVar3 = extraout_var;
    }
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}


//// FUNCTION FUN_0057d5c0 @ 0057d5c0 ////

void __fastcall FUN_0057d5c0(int *param_1)

{
  char cVar1;
  float *pfVar2;
  void *pvVar3;
  float10 fVar4;
  float *pfVar5;
  float fStack_24;
  float fStack_20;
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  cVar1 = (**(code **)(*param_1 + 0x13c))();
  pvVar3 = DAT_00f87aa0;
  if (cVar1 == '\0') {
    (*(code *)DAT_00f885f8[1])();
    DAT_00f8860c = 0;
    (*(code *)*DAT_00f885f8)();
    return;
  }
  if ((((*(char *)((int)param_1 + 0x11a) != '\0') && (*(char *)((int)param_1 + 0x8a9) == '\0')) &&
      (param_1[0x66] == 0)) && ((param_1[0x233] == 0 && (DAT_0104c6c8 != param_1)))) {
    pfVar2 = (float *)FUN_0045d450(DAT_00f87aa0,auStack_18);
    pfVar5 = &fStack_24;
    pvVar3 = (void *)FUN_00571c00(pvVar3,auStack_c);
    FUN_00411ca0(pvVar3,pfVar5,pfVar2);
    fVar4 = (float10)fpatan((float10)fStack_20,(float10)fStack_24);
    fVar4 = FUN_004012c0((float)fVar4);
    FUN_0057bf30(param_1,(float)fVar4);
  }
  FUN_00571a80(param_1);
  return;
}


//// FUNCTION FUN_0057d690 @ 0057d690 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057d690(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 uVar9;
  int *this;
  void **ppvVar10;
  char **ppcVar11;
  float *pfVar12;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  char *pcStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  char acStack_b8 [20];
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  char acStack_8c [20];
  float fStack_78;
  float fStack_74;
  void *apvStack_70 [2];
  uint uStack_68;
  void *apvStack_50 [2];
  uint uStack_48;
  undefined4 auStack_30 [3];
  undefined4 auStack_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00cb270e;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (*(code *)DAT_0104d528[1])();
  _DAT_0104d53c = 0;
  (*(code *)*DAT_0104d528)();
  cVar4 = (**(code **)(*param_1 + 0xbc))();
  if (cVar4 == '\0') {
    ExceptionList = pvStack_14;
    return;
  }
  if (DAT_01050250 != '\0') {
    ExceptionList = pvStack_14;
    return;
  }
  this = (int *)0x0;
  puVar5 = (undefined4 *)FUN_00538ef0(&fStack_a4,(float *)&DAT_0104cce0,0.0);
  FUN_009840b0(&fStack_d4,puVar5);
  if ((DAT_00f885f4 != (int *)0x0) &&
     (this = (int *)FUN_00ace790(DAT_00f885f4,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0), this == param_1)) {
    this = (int *)0x0;
  }
  if (((param_1[0x1db] != 0) && (iVar6 = FUN_00789e40(param_1[0x1db]), iVar6 != 0)) &&
     (piVar7 = (int *)FUN_00789e40(param_1[0x1db]), piVar7 != this)) {
    pfVar12 = &fStack_a4;
    pvVar8 = (void *)FUN_00789e40(param_1[0x1db]);
    puVar5 = FUN_00598e50(pvVar8,pfVar12);
    FUN_009840b0(&fStack_cc,puVar5);
    if (64.0 < (fStack_d4 - fStack_cc) * (fStack_d4 - fStack_cc) +
               (fStack_d0 - fStack_c8) * (fStack_d0 - fStack_c8)) {
      FUN_00789b90(param_1[0x1db]);
      FUN_00576410(param_1 + 0x1d6,0);
    }
  }
  if (this == (int *)0x0) {
    fStack_a0 = fStack_d0;
    fStack_a4 = fStack_d4;
    uStack_9c = 0;
    pvVar8 = FUN_00458d80(DAT_00f88720,&fStack_a4,4.0);
    piVar7 = *(int **)((int)pvVar8 + 4);
    if (piVar7 == *(int **)((int)pvVar8 + 8)) {
      ExceptionList = pvStack_14;
      return;
    }
    do {
      if (((int *)*piVar7 != param_1) && (uVar9 = FUN_00598ee0(*piVar7), (char)uVar9 != '\0')) {
        if ((param_1[0x1db] != 0) && (iVar6 = FUN_00789e40(param_1[0x1db]), iVar6 == *piVar7)) {
          this = (int *)FUN_00789e40(param_1[0x1db]);
          break;
        }
        if (this != (int *)0x0) {
          puVar5 = FUN_00598e50(this,auStack_24);
          FUN_009840b0(&fStack_cc,puVar5);
          puVar5 = FUN_00598e50((void *)*piVar7,auStack_30);
          FUN_009840b0(&fStack_78,puVar5);
          if ((fStack_d4 - fStack_78) * (fStack_d4 - fStack_78) +
              (fStack_d0 - fStack_74) * (fStack_d0 - fStack_74) <=
              (fStack_d4 - fStack_cc) * (fStack_d4 - fStack_cc) +
              (fStack_d0 - fStack_c8) * (fStack_d0 - fStack_c8)) goto LAB_0057d8bb;
        }
        this = (int *)*piVar7;
      }
LAB_0057d8bb:
      piVar7 = piVar7 + 1;
    } while (piVar7 != *(int **)((int)pvVar8 + 8));
    if (this == (int *)0x0) {
      ExceptionList = pvStack_14;
      return;
    }
  }
  cVar4 = (**(code **)(*this + 0x138))();
  if (cVar4 != '\0') {
    ExceptionList = pvStack_14;
    return;
  }
  iVar6 = FUN_005998e0((int)this);
  if (iVar6 != 0) {
    iVar6 = FUN_005998e0((int)this);
    iVar6 = FUN_00401c30(iVar6);
    FUN_00403de0(apvStack_50,(undefined4 *)(iVar6 + 100));
    pcStack_c4 = acStack_b8;
    acStack_b8[0] = '\0';
    uStack_c0 = 0;
    uStack_bc = 0x14;
    _strncpy(pcStack_c4,"readyposition",0xd);
    ppcVar11 = &pcStack_c4;
    ppvVar10 = apvStack_50;
    uStack_c0 = 0xd;
    pcStack_c4[0xd] = '\0';
    bVar1 = false;
    bVar2 = false;
    uVar9 = FUN_00401ec0(ppvVar10,ppcVar11);
    if ((char)uVar9 == '\0') {
      pcStack_98 = acStack_8c;
      uStack_94 = 0;
      uStack_90 = 0x14;
      acStack_8c[0] = (char)uVar9;
      _strncpy(pcStack_98,"changecostume",0xd);
      ppcVar11 = &pcStack_98;
      ppvVar10 = apvStack_50;
      uStack_94 = 0xd;
      pcStack_98[0xd] = '\0';
      bVar2 = false;
      uVar9 = FUN_00401ec0(ppvVar10,ppcVar11);
      if ((char)uVar9 != '\0') {
LAB_0057da19:
        bVar1 = true;
        goto LAB_0057da1d;
      }
      FUN_00401de0(apvStack_70,"stunttrain",0xffffffff);
      bVar1 = true;
      bVar2 = true;
      uVar9 = FUN_00401ec0(apvStack_50,apvStack_70);
      if ((char)uVar9 != '\0') goto LAB_0057da19;
      bVar3 = false;
    }
    else {
LAB_0057da1d:
      bVar3 = true;
    }
    if ((bVar2) && (0x14 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_70[0]);
    }
    if ((bVar1) && (0x14 < uStack_90)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_98);
    }
    if (0x14 < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_c4);
    }
    if (bVar3) {
      if (uStack_48 < 0x15) {
        ExceptionList = pvStack_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(apvStack_50[0]);
    }
    if (0x14 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_50[0]);
    }
  }
  if (((char)this[0x57] == '\0') || (iVar6 = FUN_005998e0((int)this), iVar6 == 0))
  goto LAB_0057dc44;
  iVar6 = FUN_005998e0((int)this);
  if ((*(int **)(iVar6 + 0x274) == (int *)0x0) ||
     (iVar6 = FUN_00ace790(*(int **)(iVar6 + 0x274),0,&TM::TMActionExplainer::RTTI_Type_Descriptor,
                           &TM::CAssetActionExplainer::RTTI_Type_Descriptor,0), iVar6 == 0))
  goto LAB_0057dc44;
  iVar6 = FUN_008bc6c0(iVar6);
  puVar5 = (undefined4 *)FUN_00528450(iVar6);
  FUN_00403de0(&pcStack_c4,puVar5);
  FUN_00401de0(&pcStack_98,"fac_catering2",0xffffffff);
  bVar2 = false;
  uVar9 = FUN_00401ec0(&pcStack_c4,&pcStack_98);
  if ((char)uVar9 == '\0') {
    FUN_00401de0(apvStack_70,"fac_bar",0xffffffff);
    bVar2 = true;
    uVar9 = FUN_00401ec0(&pcStack_c4,apvStack_70);
    if ((char)uVar9 != '\0') goto LAB_0057dbb7;
    bVar1 = false;
  }
  else {
LAB_0057dbb7:
    bVar1 = true;
  }
  if ((bVar2) && (0x14 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_70[0]);
  }
  if (0x14 < uStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  if (bVar1) {
    if (uStack_bc < 0x15) {
      ExceptionList = pvStack_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pcStack_c4);
  }
  if (0x14 < uStack_bc) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_c4);
  }
LAB_0057dc44:
  if ((param_1[0x1db] != 0) && (piVar7 = (int *)FUN_00789e40(param_1[0x1db]), piVar7 != this)) {
    FUN_00789b90(param_1[0x1db]);
    FUN_00576410(param_1 + 0x1d6,0);
  }
  if ((param_1[0x1db] == 0) && (iVar6 = FUN_0053ae00((int)this), iVar6 == 0)) {
    pvVar8 = operator_new(0xcc);
    uStack_c = 0;
    if (pvVar8 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_0078a140(pvVar8,this);
    }
    uStack_c = 0xffffffff;
    FUN_00576410(param_1 + 0x1d6,(int)puVar5);
    FUN_00413190(&DAT_0104d528,(int)this);
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_0057dcf0 @ 0057dcf0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057dcf0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  void *this;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  
  if (param_1[0x24d] == 0) {
    iVar2 = FUN_0059c530((int)param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_0059c530((int)param_1);
      if (*(int *)(iVar2 + 0x98) == 0) {
        FUN_0057b4b0(param_1,param_1[0x253]);
      }
    }
  }
  FUN_0057d690(param_1);
  if (param_1[0x205] == 0xd) {
    FUN_0056eb70((int *)param_1[0x1ee]);
    FUN_00571ab0(param_1);
    return;
  }
  FUN_00571ab0(param_1);
  if ((char)param_1[0x57] == '\0') {
    (**(code **)(*param_1 + 0x21c))(param_1[0x47],0);
  }
  if ((((char)param_1[0x276] != '\0') && (param_1[0x233] == 0)) && (param_1[0x247] == 0)) {
    *(undefined1 *)(param_1 + 0x276) = 0;
    (**(code **)(*param_1 + 0x1a8))(0);
    if (*(char *)((int)param_1 + 0x9d9) != '\0') {
      uVar3 = FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                           &TM::CStar::RTTI_Type_Descriptor,0);
      FUN_00799350(uVar3);
      *(undefined1 *)((int)param_1 + 0x9d9) = 0;
    }
  }
  uVar4 = FUN_00598ee0((int)param_1);
  if ((char)uVar4 == '\0') {
    uVar5 = FUN_0043b560();
    uVar6 = FUN_0043b560();
    if ((int)uVar5 < (int)uVar6) {
      FUN_0057a030(param_1);
    }
  }
  uVar3 = FUN_0043b490((uint *)(param_1 + 0x208));
  if ((char)uVar3 != '\0') {
    iVar2 = FUN_0043b4f0(param_1 + 0x208);
    FUN_00578180(param_1,iVar2);
  }
  uVar3 = FUN_0043b490((uint *)(param_1 + 0x20d));
  if ((char)uVar3 != '\0') {
    FUN_0057c800(param_1);
  }
  FUN_0057af50((int)param_1);
  cVar1 = (**(code **)(*param_1 + 0x13c))();
  if (cVar1 != '\0') {
    param_1[0x22c] = 0;
    if (0.0 < (float)param_1[0x273]) {
      FUN_00407100(param_1 + 0x273,DAT_00e51c60);
    }
    (**(code **)(*param_1 + 0x220))(param_1[0x1bf]);
    if (*(char *)((int)param_1 + 0x8a9) != '\0') {
      if (DAT_00f885f4 == param_1) {
        param_1[0x22b] = *(int *)(DAT_0104cdf4 + 0x3c) + _DAT_00e532f8;
      }
      if ((uint)param_1[0x22b] <= *(uint *)(DAT_0104cdf4 + 0x3c)) {
        FUN_0057c160((int)param_1);
        return;
      }
      iVar2 = FUN_0059c530((int)param_1);
      if (iVar2 != 0) {
        fVar7 = 1.0;
        this = (void *)FUN_0059c530((int)param_1);
        FUN_00842f90(this,fVar7);
        return;
      }
      *(undefined1 *)((int)param_1 + 0x8a9) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_0057dfc0 @ 0057dfc0 ////

undefined4 __cdecl FUN_0057dfc0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  void *pvVar7;
  int iVar8;
  undefined1 *puVar9;
  int *local_68;
  undefined1 *puStack_64;
  char *local_54;
  int local_50;
  uint local_4c;
  char local_48 [20];
  undefined1 auStack_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2730;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  piVar2 = (int *)FUN_00ace790(piVar1,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar2 == (int *)0x0) {
    if ((param_2 != 4) && (param_2 != 0x10)) {
      uVar4 = FUN_0057bc70(piVar1);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    piVar5 = (int *)FUN_0057b800(piVar1,param_2);
    if (param_2 == 0x10) {
      local_54 = local_48;
      local_48[0] = '\0';
      local_50 = 0;
      local_4c = 0x14;
      _strncpy(local_54,"costume_stuntman",0x10);
      local_50 = param_2;
      local_54[0x10] = '\0';
      local_4 = 0;
      FUN_004335f0((int *)&local_68,&local_54,piVar1[0x128],0,0,0);
      local_68[0x29] = local_68[0x29] & 0xfffffffe;
      local_4 = CONCAT31(local_4._1_3_,1);
      pvVar7 = (void *)FUN_004319b0((int)local_68);
      if ((pvVar7 != (void *)0x0) && (iVar3 = FUN_00990d30(0,4), 0 < iVar3)) {
        do {
          FUN_009cf970(pvVar7,0,(void *)0x1);
          FUN_009cf970(pvVar7,1,(void *)0x1);
          FUN_009cf970(pvVar7,3,(void *)0x1);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if (((piVar1[0x131] == 1) && (piVar1[0x205] == 0)) || ((int *)piVar1[0x282] == (int *)0x0)) {
        (**(code **)(*piVar1 + 0x128))();
        FUN_0059bb60(piVar1,(int)local_68);
        piVar2 = piVar1;
      }
      else {
        (**(code **)(*(int *)piVar1[0x282] + 0x128))();
        FUN_0059bb60((void *)piVar1[0x282],(int)local_68);
        piVar2 = (int *)piVar1[0x282];
      }
      FUN_0059bba0(piVar2,(int)local_68);
      iVar3 = FUN_00ace790(piVar1,0,&TM::CStaff::RTTI_Type_Descriptor,
                           &TM::CExtra::RTTI_Type_Descriptor,0);
      if (iVar3 != 0) {
        piVar2 = (int *)(**(code **)(*piVar1 + 0x1d4))();
        piVar1 = (int *)(**(code **)(*piVar1 + 0x1d4))();
        puStack_64 = &stack0xffffff80;
        iVar3 = *piVar1;
        (**(code **)(*piVar2 + 0x58))(&stack0xffffff80);
        (**(code **)(iVar3 + 4))();
      }
      local_4 = local_4 & 0xffffff00;
      piVar5 = local_68;
      if (local_68 != (int *)0x0) {
        iVar3 = local_68[0x12];
        piVar5 = local_68 + 0x12;
        *piVar5 = iVar3 + -1;
        if (iVar3 + -1 == 0) {
          piVar5 = (int *)(**(code **)*local_68)();
        }
      }
      local_68 = (int *)0x0;
      if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_54);
      }
    }
  }
  else {
    if (piVar2[0x24d] == 0) {
      piVar1 = (int *)GetPlayerStudio();
      (**(code **)(*piVar1 + 0x30))();
      iVar3 = (**(code **)(*piVar2 + 0x27c))();
      if (iVar3 == 0) {
        FUN_00588f90((int)piVar2);
      }
    }
    (**(code **)(*piVar2 + 0x224))();
    iVar3 = *piVar2;
    uVar4 = (**(code **)(iVar3 + 0x4c))(&stack0xffffff94);
    uVar4 = (**(code **)(*piVar2 + 0x34))(&stack0xffffff94,uVar4);
    piVar5 = (int *)(**(code **)(iVar3 + 0xa8))(uVar4);
    if ((param_2 == 2) || (param_2 == 3)) {
      FUN_0041c550(piVar2);
      puVar9 = &DAT_00d17518;
      iVar8 = 0;
      pbVar6 = (byte *)FUN_0041c9c0(auStack_34,"UI_STARMAKER");
      iVar3 = 2;
      pvVar7 = (void *)FUN_004f3b20();
      uVar4 = FUN_004f3270(pvVar7,iVar3,pbVar6,iVar8,puVar9);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}


//// FUNCTION FUN_0057e2d0 @ 0057e2d0 ////

int __fastcall FUN_0057e2d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = *(int *)(param_1 + 0x774); iVar2 != *(int *)(param_1 + 0x778); iVar2 = iVar2 + 0x18)
  {
    if (*(int *)(iVar2 + 0x14) != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_0057e300 @ 0057e300 ////

void __fastcall FUN_0057e300(int param_1)

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


//// FUNCTION FUN_0057e370 @ 0057e370 ////

undefined4 * FUN_0057e370(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0057e3b0 @ 0057e3b0 ////

void __cdecl FUN_0057e3b0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d25c80;
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


//// FUNCTION FUN_0057e480 @ 0057e480 ////

undefined4 * __thiscall FUN_0057e480(void *this,byte param_1)

{
  thunk_FUN_0057d1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0057e4b0 @ 0057e4b0 ////

undefined4 * __thiscall FUN_0057e4b0(void *this,byte param_1)

{
  thunk_FUN_0057d1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0057e4e0 @ 0057e4e0 ////

undefined4 * __thiscall FUN_0057e4e0(void *this,byte param_1)

{
  thunk_FUN_0057d1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0057e510 @ 0057e510 ////

undefined4 * __thiscall FUN_0057e510(void *this,byte param_1)

{
  thunk_FUN_0057d1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION GlobalStatRegistry_RegisterAllStatDescriptors @ 0057e540 ////

void GlobalStatRegistry_RegisterAllStatDescriptors(void)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* One-time registration of ~100 named stat/attribute descriptor objects onto
                       GlobalStatRegistry_Get()'s singleton. Named entries include core stats
                       (attractiveness, healthcondition, physique, image, current_project_awareness,
                       relationships), addictions (addictions, addictions_food, addictions_drink),
                       the full mood-axis breakdown (mood_overall, mood_work, mood_work_stress,
                       mood_work_boredom, mood_status, mood_salary, mood_entourage, mood_image,
                       mood_facilities), experience categories (experience_lot, experience_movies,
                       experience_writing, experience_research, experience_stunts), star-specific
                       stats (star_freshness, star_genre_fit), and several "_desc" text-description
                       variants (physique_desc, sexappeal_desc, weight_desc, attractiveness_desc).
                       This is very likely the backing data for the in-game character stat/tooltip
                       UI and possibly save-file field enumeration. Worth a dedicated future pass to
                       trace individual descriptor vtables (PTR_FUN_00d25xxx family) if the exact
                       per-stat getter logic matters. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2ba2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x90);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00578ba0(puVar1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  puVar1 = operator_new(0x90);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00578ba0(puVar1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  puVar1 = operator_new(0x90);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00578ba0(puVar1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  puVar1 = operator_new(0x90);
  local_4 = 3;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00578ba0(puVar1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  puVar1 = operator_new(0x90);
  local_4 = 4;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00578ba0(puVar1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 5;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25cb0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 6;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25cd0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 7;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25cf0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 8;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25e70;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 9;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25e10;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 10;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25e30;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0xb;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25e50;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0xc;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25e90;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0xd;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25eb0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0xe;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d10;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0xf;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d30;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x10;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25ed0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x11;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25ef0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x12;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25f10;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x13;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25f30;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x14;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25f50;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x15;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25f70;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x16;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25f90;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x17;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d50;
    piVar2[0x1c] = 0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x18;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d50;
    piVar2[0x1c] = 1;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x19;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d50;
    piVar2[0x1c] = 2;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x1a;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d50;
    piVar2[0x1c] = 3;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x1b;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d50;
    piVar2[0x1c] = 4;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x1c;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d50;
    piVar2[0x1c] = 5;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x1d;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    piVar2[0x1c] = 8;
    *piVar2 = (int)&PTR_FUN_00d25d50;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x1e;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d50;
    piVar2[0x1c] = 7;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x1f;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d50;
    piVar2[0x1c] = 6;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x20;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d70;
    piVar2[0x1c] = 0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x21;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d70;
    piVar2[0x1c] = 1;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x22;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d70;
    piVar2[0x1c] = 2;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x23;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d70;
    piVar2[0x1c] = 3;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x24;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d70;
    piVar2[0x1c] = 4;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x25;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d70;
    piVar2[0x1c] = 5;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x26;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d90;
    piVar2[0x1c] = 0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x27;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d90;
    piVar2[0x1c] = 1;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x28;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d90;
    piVar2[0x1c] = 2;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x29;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d90;
    piVar2[0x1c] = 3;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x2a;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d90;
    piVar2[0x1c] = 4;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x2b;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25d90;
    piVar2[0x1c] = 5;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x2c;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25db0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x2d;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25dd0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x2e;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25df0;
    piVar2[0x1c] = 0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x74);
  local_4 = 0x2f;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25df0;
    piVar2[0x1c] = 1;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x70);
  local_4 = 0x30;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_004ce5d0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25fb0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfe50(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x31;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25ab4;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x32;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25af4;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x33;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25b3c;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x34;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25b80;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x35;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"attractiveness",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x36;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"healthcondition",1,2);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x37;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"physique",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x38;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"image",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x39;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"current_project_awareness",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x3a;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00905420(pvVar3,(undefined4 *)"relationships",1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x3b;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25bcc;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x3c;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25c18;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x3d;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"addictions",1,4);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x3e;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00905670(pvVar3,(undefined4 *)"addictions_food",1,5,2);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x3f;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00905670(pvVar3,(undefined4 *)"addictions_drink",1,5,3);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x40;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00905420(pvVar3,(undefined4 *)"mood_overall",1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x41;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00905420(pvVar3,(undefined4 *)"mood_work",1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x42;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00905670(pvVar3,(undefined4 *)"mood_work_stress",1,5,4);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x43;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00905670(pvVar3,(undefined4 *)"mood_work_boredom",1,5,5);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x44;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00905420(pvVar3,(undefined4 *)"mood_status",1);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x45;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"mood_salary",1,2);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x46;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"mood_entourage",1,2);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x47;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"mood_image",1,2);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x48;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"mood_facilities",1,2);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x49;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25344;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x4a;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25388;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x4b;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d253c0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x4c;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25404;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x4d;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d2544c;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x4e;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d2548c;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x4f;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d254d0;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x50;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25510;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x51;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25548;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x52;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"experience_lot",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x53;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"experience_movies",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x54;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"experience_writing",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x55;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"experience_research",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x56;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_009055b0(pvVar3,(undefined4 *)"experience_stunts",1,6);
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0xa0);
  local_4 = 0x57;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0090acc0(pvVar3,(undefined4 *)"star_freshness");
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  pvVar3 = operator_new(0x98);
  local_4 = 0x58;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0090a4c0(pvVar3,"star_genre_fit");
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x59;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    piVar2[0x24] = 4;
    *piVar2 = (int)&PTR_FUN_00d255dc;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x5a;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    piVar2[0x24] = 5;
    *piVar2 = (int)&PTR_FUN_00d25674;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x5b;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    piVar2[0x24] = 0;
    *piVar2 = (int)&PTR_FUN_00d257b4;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x5c;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    piVar2[0x24] = 1;
    *piVar2 = (int)&PTR_FUN_00d2570c;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x5d;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    piVar2[0x24] = 2;
    *piVar2 = (int)&PTR_FUN_00d2585c;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x5e;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    piVar2[0x24] = 3;
    *piVar2 = (int)&PTR_FUN_00d258f4;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x5f;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009090d0(piVar2,"physique_desc",(undefined4 *)"physique");
    *piVar2 = (int)&PTR_FUN_00d26374;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x60;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009090d0(piVar2,"sexappeal_desc",(undefined4 *)"sexappeal");
    *piVar2 = (int)&PTR_FUN_00d26104;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x61;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009090d0(piVar2,"weight_desc",(undefined4 *)"weight");
    *piVar2 = (int)&PTR_FUN_00d261bc;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x94);
  local_4 = 0x62;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009090d0(piVar2,"attractiveness_desc",(undefined4 *)"attractiveness");
    *piVar2 = (int)&PTR_FUN_00d2626c;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 99;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d2598c;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 100;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25a24;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  piVar2 = operator_new(0x90);
  local_4 = 0x65;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_009042a0(piVar2);
    *piVar2 = (int)&PTR_FUN_00d25a6c;
  }
  local_4 = 0xffffffff;
  pvVar3 = (void *)GlobalStatRegistry_Get();
  FUN_008cfdc0(pvVar3,piVar2);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_005804e0 @ 005804e0 ////

void __cdecl FUN_005804e0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00578470(param_1);
  }
  return;
}


//// FUNCTION FUN_00580540 @ 00580540 ////

void __cdecl FUN_00580540(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d25c80;
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


//// FUNCTION FUN_00580630 @ 00580630 ////

void FUN_00580630(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00578470(param_1);
  }
  return;
}


//// FUNCTION FUN_00580660 @ 00580660 ////

void FUN_00580660(void)

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
  puStack_8 = &LAB_00cb2bb8;
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


//// FUNCTION FUN_005806d0 @ 005806d0 ////

void FUN_005806d0(void)

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
  puStack_8 = &LAB_00cb2bd8;
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


//// FUNCTION FUN_00580740 @ 00580740 ////

undefined4 * FUN_00580740(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00580540(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_005807c0 @ 005807c0 ////

void __fastcall FUN_005807c0(int param_1)

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
    FUN_00578470(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00580860 @ 00580860 ////

void __thiscall FUN_00580860(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_00576970((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_00578470(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_005808c0 @ 005808c0 ////

void __thiscall FUN_005808c0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cb2bf8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d25c80;
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
      FUN_00580660();
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
        iVar3 = FUN_00576480((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_0057e3b0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00580540(puVar5,param_2,(int)&local_34);
      FUN_0057e3b0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00580630(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_0057e3b0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00580740(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00578690(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_0057e3b0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_005769b0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00578690(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00580bf0 @ 00580bf0 ////

void __thiscall FUN_00580bf0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_005806d0();
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
      _Dst = FUN_0057e370((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0057d170(param_1,iVar5,param_1 + param_2);
      FUN_0057e370(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_005768b0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0057d170(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_005786f0(param_1,(int)pvVar3,iVar5);
    FUN_005768b0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00580dd0 @ 00580dd0 ////

void __fastcall FUN_00580dd0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d26740;
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


//// FUNCTION FUN_00580e60 @ 00580e60 ////

undefined4 * __thiscall FUN_00580e60(void *this,byte param_1)

{
  FUN_00580dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00580e80 @ 00580e80 ////

void __thiscall FUN_00580e80(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb2c18;
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
    FUN_005808c0(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_00580860(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
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


//// FUNCTION FUN_00580fb0 @ 00580fb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __fastcall FUN_00580fb0(int *param_1)

{
  int iVar1;
  char *pcVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  char *pcVar7;
  undefined1 *local_34;
  float local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2d90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00571f80(param_1);
  *param_1 = (int)&PTR_FUN_00d267cc;
  param_1[0x1e] = (int)&PTR_LAB_00d267ac;
  param_1[0x28] = (int)&PTR_LAB_00d26794;
  param_1[0x1d9] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d9] = (int)(param_1 + 0x1d6);
  param_1[0x1d6] = (int)&PTR_LAB_00d260c4;
  param_1[0x1db] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  piVar5 = param_1 + 0x1e9;
  param_1[0x1ec] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = (int)piVar5;
  *piVar5 = (int)&PTR_FUN_00d260d4;
  param_1[0x1ee] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f5] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  FUN_0043b510(param_1 + 0x1f8);
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  *(undefined1 *)(param_1 + 0x207) = 0;
  FUN_0043b460(param_1 + 0x208);
  FUN_0043b460(param_1 + 0x20d);
  *(undefined1 *)(param_1 + 0x211) = 0;
  *(undefined1 *)((int)param_1 + 0x845) = 0;
  *(undefined1 *)((int)param_1 + 0x846) = 0;
  param_1[0x215] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = (int)(param_1 + 0x212);
  param_1[0x212] = (int)&PTR_LAB_00d260e4;
  param_1[0x217] = 0;
  local_4._0_1_ = 8;
  FUN_0043b510(param_1 + 0x218);
  FUN_0043b510(param_1 + 0x219);
  FUN_0043b510(param_1 + 0x21a);
  FUN_0043b510(param_1 + 0x21b);
  param_1[0x21f] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = (int)(param_1 + 0x21c);
  param_1[0x21c] = (int)&PTR_FUN_00d165cc;
  param_1[0x221] = 0;
  param_1[0x222] = (int)(param_1 + 0x225);
  *(undefined2 *)(param_1 + 0x225) = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 10;
  param_1[0x22b] = 0;
  param_1[0x231] = 0;
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  param_1[0x231] = (int)(param_1 + 0x22e);
  param_1[0x22e] = (int)&PTR_FUN_00d1f03c;
  param_1[0x233] = 0;
  param_1[0x237] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  param_1[0x237] = (int)(param_1 + 0x234);
  param_1[0x234] = (int)&PTR_FUN_00d18c3c;
  param_1[0x239] = 0;
  param_1[0x23c] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x240] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x245] = 0;
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = (int)(param_1 + 0x242);
  param_1[0x242] = (int)&PTR_LAB_00d24748;
  param_1[0x247] = 0;
  param_1[0x24b] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = (int)(param_1 + 0x248);
  param_1[0x248] = (int)&PTR_FUN_00d1e55c;
  param_1[0x24d] = 0;
  piVar4 = param_1 + 0x24e;
  param_1[0x251] = 0;
  param_1[0x24f] = 0;
  param_1[0x250] = 0;
  param_1[0x251] = (int)piVar4;
  *piVar4 = (int)&PTR_FUN_00d260f4;
  param_1[0x253] = 0;
  param_1[0x259] = 0;
  param_1[599] = 0;
  param_1[600] = 0;
  param_1[0x259] = (int)(param_1 + 0x256);
  param_1[0x256] = (int)&PTR_LAB_00d25c60;
  param_1[0x25b] = 0;
  param_1[0x25f] = 0;
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x25f] = (int)(param_1 + 0x25c);
  param_1[0x25c] = (int)&PTR_FUN_00d18c3c;
  param_1[0x261] = 0;
  param_1[0x263] = (int)(param_1 + 0x266);
  *(undefined2 *)(param_1 + 0x266) = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 10;
  param_1[0x26b] = (int)(param_1 + 0x26e);
  *(undefined2 *)(param_1 + 0x26e) = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 10;
  local_4._0_1_ = 0x15;
  param_1[0x273] = 0;
  FUN_0043b510(param_1 + 0x274);
  param_1[0x275] = 0;
  param_1[0x27a] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = (int)(param_1 + 0x277);
  param_1[0x277] = (int)&PTR_FUN_00d16954;
  param_1[0x27c] = 0;
  param_1[0x280] = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x280] = (int)(param_1 + 0x27d);
  param_1[0x27d] = (int)&PTR_FUN_00d25c70;
  param_1[0x282] = 0;
  param_1[0x286] = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x286] = (int)(param_1 + 0x283);
  param_1[0x283] = (int)&PTR_FUN_00d16954;
  param_1[0x288] = 0;
  param_1[0x131] = 3;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  *(uint *)(param_1[0x47] + 0x9c) = *(uint *)(param_1[0x47] + 0x9c) | 2;
  local_4 = CONCAT31(local_4._1_3_,0x18);
  (**(code **)(*piVar4 + 4))();
  param_1[0x253] = 0;
  (**(code **)*piVar4)();
  (**(code **)(param_1[0x283] + 4))();
  param_1[0x288] = 0;
  (**(code **)param_1[0x283])();
  (**(code **)(*piVar5 + 4))();
  param_1[0x1ee] = 0;
  (**(code **)*piVar5)();
  param_1[0x22d] = 0;
  param_1[0x1f7] = 6;
  param_1[0x273] = 0;
  param_1[0x254] = 0;
  *(undefined1 *)(param_1 + 0x276) = 0;
  *(undefined1 *)(param_1 + 0x22a) = 0;
  *(undefined1 *)(param_1 + 0x262) = 0;
  *(undefined1 *)((int)param_1 + 0x989) = 0;
  *(undefined1 *)((int)param_1 + 0x9da) = 0;
  *(undefined1 *)((int)param_1 + 0x9db) = 0;
  (**(code **)(param_1[0x277] + 4))();
  param_1[0x27c] = 0;
  (**(code **)param_1[0x277])();
  (**(code **)(param_1[0x27d] + 4))();
  param_1[0x282] = 0;
  (**(code **)param_1[0x27d])();
  param_1[0x23c] = (int)param_1;
  FUN_00acdb9e(0xe53df4);
  local_34 = &stack0xffffffb4;
  iVar1 = FUN_0097dda0();
  param_1[0x23d] = iVar1;
  if (DAT_00e53df0 != '\0') {
    iVar1 = 0x8e8;
    local_34 = &stack0xffffffb0;
    pcVar7 = "SubFacilityLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe53df4);
    local_34 = &stack0xffffffac;
    FUN_0097df60(pcVar2,pcVar7,iVar1);
    DAT_00e53df0 = '\0';
  }
  param_1[0x240] = (int)param_1;
  FUN_00acdb9e(0xe53df4);
  local_34 = &stack0xffffffb4;
  iVar1 = FUN_0097dda0();
  param_1[0x241] = iVar1;
  if (DAT_00e53def != '\0') {
    iVar1 = 0x8f8;
    local_34 = &stack0xffffffb0;
    pcVar7 = "StaffLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe53df4);
    local_34 = &stack0xffffffac;
    FUN_0097df60(pcVar2,pcVar7,iVar1);
    DAT_00e53def = '\0';
  }
  param_1[0x1f5] = (int)param_1;
  FUN_00acdb9e(0xe53df4);
  local_34 = &stack0xffffffb4;
  iVar1 = FUN_0097dda0();
  param_1[0x1f6] = iVar1;
  if (DAT_00e53dee != '\0') {
    iVar1 = 0x7cc;
    local_34 = &stack0xffffffb0;
    pcVar7 = "SpawnLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe53df4);
    local_34 = &stack0xffffffac;
    FUN_0097df60(pcVar2,pcVar7,iVar1);
    DAT_00e53dee = '\0';
  }
  param_1[0x1e3] = (int)param_1;
  FUN_00acdb9e(0xe53df4);
  local_34 = &stack0xffffffb4;
  iVar1 = FUN_0097dda0();
  param_1[0x1e4] = iVar1;
  if (DAT_00e53ded != '\0') {
    iVar1 = 0x784;
    local_34 = &stack0xffffffb0;
    pcVar7 = "EmployerLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe53df4);
    local_34 = &stack0xffffffac;
    FUN_0097df60(pcVar2,pcVar7,iVar1);
    DAT_00e53ded = '\0';
  }
  param_1[0x1e7] = (int)param_1;
  FUN_00acdb9e(0xe53df4);
  local_34 = &stack0xffffffb4;
  iVar1 = FUN_0097dda0();
  param_1[0x1e8] = iVar1;
  if (DAT_00e53dec != '\0') {
    iVar1 = 0x794;
    local_34 = &stack0xffffffb0;
    pcVar7 = "RehearsalLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe53df4);
    local_34 = &stack0xffffffac;
    FUN_0097df60(pcVar2,pcVar7,iVar1);
    DAT_00e53dec = '\0';
  }
  param_1[0x1f1] = (int)param_1;
  FUN_00acdb9e(0xe53df4);
  local_34 = &stack0xffffffb4;
  iVar1 = FUN_0097dda0();
  param_1[0x1f2] = iVar1;
  if (s___AV__InList_VCStaff_TM___MV___00e53dcc[0x1f] != '\0') {
    iVar1 = 0x7bc;
    local_34 = &stack0xffffffb0;
    pcVar7 = "AssistantLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe53df4);
    local_34 = &stack0xffffffac;
    FUN_0097df60(pcVar2,pcVar7,iVar1);
    s___AV__InList_VCStaff_TM___MV___00e53dcc[0x1f] = '\0';
  }
  *(undefined1 *)((int)param_1 + 0x8a9) = 0;
  if (DAT_010583e4 == '\0') {
    piVar5 = param_1 + 0x23e;
    param_1[0x23f] = (int)&DAT_0104cfd4;
    *piVar5 = (int)DAT_0104cfd4;
    *(int **)((int)DAT_0104cfd4 + 4) = piVar5;
    DAT_0104cfd4 = piVar5;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"staff",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4._0_1_ = 0x19;
  FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
  local_4 = CONCAT31(local_4._1_3_,0x18);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  fVar6 = FUN_00990e30(DAT_0104cf98,_DAT_0104cf9c - 1.0);
  pfVar3 = (float *)FUN_0043b520(&local_34,(float)fVar6);
  piVar4 = (int *)FUN_0043b620(&DAT_00e4fa4c,&local_30,pfVar3);
  piVar5 = param_1 + 0x218;
  *piVar5 = *piVar4;
  pfVar3 = (float *)FUN_0043b520(&local_30,9000.0);
  piVar4 = (int *)FUN_0043b600(piVar5,(float *)&local_34,pfVar3);
  param_1[0x219] = *piVar4;
  pfVar3 = (float *)FUN_0043b520(&local_30,70.0);
  piVar5 = (int *)FUN_0043b600(piVar5,(float *)&local_34,pfVar3);
  param_1[0x1f8] = *piVar5;
  param_1[0x208] = 10;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0x32;
  param_1[0x21a] = DAT_00e4fa4c;
  (**(code **)(param_1[0x248] + 4))();
  param_1[0x24d] = 0;
  (**(code **)param_1[0x248])();
  param_1[0x274] = DAT_00e4fa4c;
  *(undefined1 *)(param_1 + 0x255) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00581830 @ 00581830 ////

int * FUN_00581830(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb2dab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xa24);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00580fb0(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0xe0))(2);
  (**(code **)(*piVar2 + 0xe8))();
  ExceptionList = piVar1;
  return piVar2;
}


//// FUNCTION FUN_005818a0 @ 005818a0 ////

void __fastcall FUN_005818a0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb2f18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d267cc;
  param_1[0x1e] = (int)&PTR_LAB_00d267ac;
  param_1[0x28] = (int)&PTR_LAB_00d26794;
  local_4 = 0x18;
  if ((undefined4 *)param_1[0x217] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x217])(1);
  }
  (**(code **)(param_1[0x212] + 4))();
  param_1[0x217] = 0;
  (**(code **)param_1[0x212])();
  puVar2 = (undefined4 *)param_1[0x25b];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x256] + 4))();
    param_1[0x25b] = 0;
    (**(code **)param_1[0x256])();
  }
  if (param_1[0x253] != 0) {
    if ((int *)param_1[0x23b] != (int *)0x0) {
      *(int *)param_1[0x23b] = param_1[0x23a];
    }
    if (param_1[0x23a] != 0) {
      *(int *)(param_1[0x23a] + 4) = param_1[0x23b];
    }
    param_1[0x23a] = 0;
    param_1[0x23b] = 0;
    (**(code **)(param_1[0x24e] + 4))();
    param_1[0x253] = 0;
    (**(code **)param_1[0x24e])();
  }
  if (param_1[0x247] != 0) {
    FUN_0057b070((int)param_1);
  }
  if ((int *)param_1[500] != (int *)0x0) {
    *(int *)param_1[500] = param_1[499];
  }
  if (param_1[499] != 0) {
    *(int *)(param_1[499] + 4) = param_1[500];
  }
  param_1[499] = 0;
  param_1[500] = 0;
  if ((int *)param_1[0x23f] != (int *)0x0) {
    *(int *)param_1[0x23f] = param_1[0x23e];
  }
  if (param_1[0x23e] != 0) {
    *(int *)(param_1[0x23e] + 4) = param_1[0x23f];
  }
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  if ((int *)param_1[0x23b] != (int *)0x0) {
    *(int *)param_1[0x23b] = param_1[0x23a];
  }
  if (param_1[0x23a] != 0) {
    *(int *)(param_1[0x23a] + 4) = param_1[0x23b];
  }
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  if ((int *)param_1[0x1e2] != (int *)0x0) {
    *(int *)param_1[0x1e2] = param_1[0x1e1];
  }
  if (param_1[0x1e1] != 0) {
    *(int *)(param_1[0x1e1] + 4) = param_1[0x1e2];
  }
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  if ((int *)param_1[0x1e6] != (int *)0x0) {
    *(int *)param_1[0x1e6] = param_1[0x1e5];
  }
  if (param_1[0x1e5] != 0) {
    *(int *)(param_1[0x1e5] + 4) = param_1[0x1e6];
  }
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  if ((int *)param_1[0x1f0] != (int *)0x0) {
    *(int *)param_1[0x1f0] = param_1[0x1ef];
  }
  if (param_1[0x1ef] != 0) {
    *(int *)(param_1[0x1ef] + 4) = param_1[0x1f0];
  }
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  puVar2 = (undefined4 *)param_1[0x275];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x275] = 0;
  }
  if ((undefined4 *)param_1[0x1ee] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1ee])(1);
  }
  (**(code **)(param_1[0x1e9] + 4))();
  param_1[0x1ee] = 0;
  (**(code **)param_1[0x1e9])();
  param_1[0x283] = (int)&PTR_FUN_00d16954;
  if ((int *)param_1[0x285] != (int *)0x0) {
    *(int *)param_1[0x285] = param_1[0x284];
  }
  if (param_1[0x284] != 0) {
    *(int *)(param_1[0x284] + 4) = param_1[0x285];
  }
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x288] = 0;
  if ((int *)param_1[0x285] != (int *)0x0) {
    *(int *)param_1[0x285] = param_1[0x284];
  }
  if (param_1[0x284] != 0) {
    *(int *)(param_1[0x284] + 4) = param_1[0x285];
  }
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x27d] = (int)&PTR_FUN_00d25c70;
  if ((int *)param_1[0x27f] != (int *)0x0) {
    *(int *)param_1[0x27f] = param_1[0x27e];
  }
  if (param_1[0x27e] != 0) {
    *(int *)(param_1[0x27e] + 4) = param_1[0x27f];
  }
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x282] = 0;
  if ((int *)param_1[0x27f] != (int *)0x0) {
    *(int *)param_1[0x27f] = param_1[0x27e];
  }
  if (param_1[0x27e] != 0) {
    *(int *)(param_1[0x27e] + 4) = param_1[0x27f];
  }
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x277] = (int)&PTR_FUN_00d16954;
  if ((int *)param_1[0x279] != (int *)0x0) {
    *(int *)param_1[0x279] = param_1[0x278];
  }
  if (param_1[0x278] != 0) {
    *(int *)(param_1[0x278] + 4) = param_1[0x279];
  }
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27c] = 0;
  if ((int *)param_1[0x279] != (int *)0x0) {
    *(int *)param_1[0x279] = param_1[0x278];
  }
  if (param_1[0x278] != 0) {
    *(int *)(param_1[0x278] + 4) = param_1[0x279];
  }
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  if (10 < (uint)param_1[0x26d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x26b]);
  }
  if (10 < (uint)param_1[0x265]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x263]);
  }
  param_1[0x25c] = (int)&PTR_FUN_00d18c3c;
  if ((int *)param_1[0x25e] != (int *)0x0) {
    *(int *)param_1[0x25e] = param_1[0x25d];
  }
  if (param_1[0x25d] != 0) {
    *(int *)(param_1[0x25d] + 4) = param_1[0x25e];
  }
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x261] = 0;
  if ((int *)param_1[0x25e] != (int *)0x0) {
    *(int *)param_1[0x25e] = param_1[0x25d];
  }
  if (param_1[0x25d] != 0) {
    *(int *)(param_1[0x25d] + 4) = param_1[0x25e];
  }
  param_1[0x25d] = 0;
  param_1[0x25e] = 0;
  param_1[0x256] = (int)&PTR_LAB_00d25c60;
  if ((int *)param_1[600] != (int *)0x0) {
    *(int *)param_1[600] = param_1[599];
  }
  if (param_1[599] != 0) {
    *(int *)(param_1[599] + 4) = param_1[600];
  }
  param_1[599] = 0;
  param_1[600] = 0;
  param_1[0x25b] = 0;
  if ((int *)param_1[600] != (int *)0x0) {
    *(int *)param_1[600] = param_1[599];
  }
  if (param_1[599] != 0) {
    *(int *)(param_1[599] + 4) = param_1[600];
  }
  param_1[599] = 0;
  param_1[600] = 0;
  param_1[0x24e] = (int)&PTR_FUN_00d260f4;
  if ((int *)param_1[0x250] != (int *)0x0) {
    *(int *)param_1[0x250] = param_1[0x24f];
  }
  if (param_1[0x24f] != 0) {
    *(int *)(param_1[0x24f] + 4) = param_1[0x250];
  }
  param_1[0x24f] = 0;
  param_1[0x250] = 0;
  param_1[0x253] = 0;
  if ((int *)param_1[0x250] != (int *)0x0) {
    *(int *)param_1[0x250] = param_1[0x24f];
  }
  if (param_1[0x24f] != 0) {
    *(int *)(param_1[0x24f] + 4) = param_1[0x250];
  }
  param_1[0x24f] = 0;
  param_1[0x250] = 0;
  param_1[0x248] = (int)&PTR_FUN_00d1e55c;
  if ((int *)param_1[0x24a] != (int *)0x0) {
    *(int *)param_1[0x24a] = param_1[0x249];
  }
  if (param_1[0x249] != 0) {
    *(int *)(param_1[0x249] + 4) = param_1[0x24a];
  }
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24d] = 0;
  if ((int *)param_1[0x24a] != (int *)0x0) {
    *(int *)param_1[0x24a] = param_1[0x249];
  }
  if (param_1[0x249] != 0) {
    *(int *)(param_1[0x249] + 4) = param_1[0x24a];
  }
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x242] = (int)&PTR_LAB_00d24748;
  if ((int *)param_1[0x244] != (int *)0x0) {
    *(int *)param_1[0x244] = param_1[0x243];
  }
  if (param_1[0x243] != 0) {
    *(int *)(param_1[0x243] + 4) = param_1[0x244];
  }
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  param_1[0x247] = 0;
  if ((int *)param_1[0x244] != (int *)0x0) {
    *(int *)param_1[0x244] = param_1[0x243];
  }
  if (param_1[0x243] != 0) {
    *(int *)(param_1[0x243] + 4) = param_1[0x244];
  }
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  if ((int *)param_1[0x23f] != (int *)0x0) {
    *(int *)param_1[0x23f] = param_1[0x23e];
  }
  if (param_1[0x23e] != 0) {
    *(int *)(param_1[0x23e] + 4) = param_1[0x23f];
  }
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  if ((int *)param_1[0x23b] != (int *)0x0) {
    *(int *)param_1[0x23b] = param_1[0x23a];
  }
  if (param_1[0x23a] != 0) {
    *(int *)(param_1[0x23a] + 4) = param_1[0x23b];
  }
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x234] = (int)&PTR_FUN_00d18c3c;
  if ((int *)param_1[0x236] != (int *)0x0) {
    *(int *)param_1[0x236] = param_1[0x235];
  }
  if (param_1[0x235] != 0) {
    *(int *)(param_1[0x235] + 4) = param_1[0x236];
  }
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  param_1[0x239] = 0;
  if ((int *)param_1[0x236] != (int *)0x0) {
    *(int *)param_1[0x236] = param_1[0x235];
  }
  if (param_1[0x235] != 0) {
    *(int *)(param_1[0x235] + 4) = param_1[0x236];
  }
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  param_1[0x22e] = (int)&PTR_FUN_00d1f03c;
  if ((int *)param_1[0x230] != (int *)0x0) {
    *(int *)param_1[0x230] = param_1[0x22f];
  }
  if (param_1[0x22f] != 0) {
    *(int *)(param_1[0x22f] + 4) = param_1[0x230];
  }
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  param_1[0x233] = 0;
  if ((int *)param_1[0x230] != (int *)0x0) {
    *(int *)param_1[0x230] = param_1[0x22f];
  }
  if (param_1[0x22f] != 0) {
    *(int *)(param_1[0x22f] + 4) = param_1[0x230];
  }
  param_1[0x22f] = 0;
  param_1[0x230] = 0;
  if (10 < (uint)param_1[0x224]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x222]);
  }
  param_1[0x21c] = (int)&PTR_FUN_00d165cc;
  if ((int *)param_1[0x21e] != (int *)0x0) {
    *(int *)param_1[0x21e] = param_1[0x21d];
  }
  if (param_1[0x21d] != 0) {
    *(int *)(param_1[0x21d] + 4) = param_1[0x21e];
  }
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x221] = 0;
  if ((int *)param_1[0x21e] != (int *)0x0) {
    *(int *)param_1[0x21e] = param_1[0x21d];
  }
  if (param_1[0x21d] != 0) {
    *(int *)(param_1[0x21d] + 4) = param_1[0x21e];
  }
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x212] = (int)&PTR_LAB_00d260e4;
  if ((int *)param_1[0x214] != (int *)0x0) {
    *(int *)param_1[0x214] = param_1[0x213];
  }
  if (param_1[0x213] != 0) {
    *(int *)(param_1[0x213] + 4) = param_1[0x214];
  }
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x217] = 0;
  if ((int *)param_1[0x214] != (int *)0x0) {
    *(int *)param_1[0x214] = param_1[0x213];
  }
  if (param_1[0x213] != 0) {
    *(int *)(param_1[0x213] + 4) = param_1[0x214];
  }
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  if ((int *)param_1[500] != (int *)0x0) {
    *(int *)param_1[500] = param_1[499];
  }
  if (param_1[499] != 0) {
    *(int *)(param_1[499] + 4) = param_1[500];
  }
  param_1[499] = 0;
  param_1[500] = 0;
  if ((int *)param_1[0x1f0] != (int *)0x0) {
    *(int *)param_1[0x1f0] = param_1[0x1ef];
  }
  if (param_1[0x1ef] != 0) {
    *(int *)(param_1[0x1ef] + 4) = param_1[0x1f0];
  }
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1e9] = (int)&PTR_FUN_00d260d4;
  if ((int *)param_1[0x1eb] != (int *)0x0) {
    *(int *)param_1[0x1eb] = param_1[0x1ea];
  }
  if (param_1[0x1ea] != 0) {
    *(int *)(param_1[0x1ea] + 4) = param_1[0x1eb];
  }
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ee] = 0;
  if ((int *)param_1[0x1eb] != (int *)0x0) {
    *(int *)param_1[0x1eb] = param_1[0x1ea];
  }
  if (param_1[0x1ea] != 0) {
    *(int *)(param_1[0x1ea] + 4) = param_1[0x1eb];
  }
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  if ((int *)param_1[0x1e6] != (int *)0x0) {
    *(int *)param_1[0x1e6] = param_1[0x1e5];
  }
  if (param_1[0x1e5] != 0) {
    *(int *)(param_1[0x1e5] + 4) = param_1[0x1e6];
  }
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  if ((int *)param_1[0x1e2] != (int *)0x0) {
    *(int *)param_1[0x1e2] = param_1[0x1e1];
  }
  if (param_1[0x1e1] != 0) {
    *(int *)(param_1[0x1e1] + 4) = param_1[0x1e2];
  }
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  FUN_005807c0((int)(param_1 + 0x1dc));
  param_1[0x1d6] = (int)&PTR_LAB_00d260c4;
  if ((int *)param_1[0x1d8] != (int *)0x0) {
    *(int *)param_1[0x1d8] = param_1[0x1d7];
  }
  if (param_1[0x1d7] != 0) {
    *(int *)(param_1[0x1d7] + 4) = param_1[0x1d8];
  }
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1db] = 0;
  if ((int *)param_1[0x1d8] != (int *)0x0) {
    *(int *)param_1[0x1d8] = param_1[0x1d7];
  }
  if (param_1[0x1d7] != 0) {
    *(int *)(param_1[0x1d7] + 4) = param_1[0x1d8];
  }
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  local_4 = 0xffffffff;
  FUN_00572180(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005822b0 @ 005822b0 ////

undefined4 __fastcall FUN_005822b0(int *param_1)

{
  char cVar1;
  uint uVar2;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb2f38;
  pvStack_c = ExceptionList;
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x1f8))(&local_1c);
  uVar2 = 0;
  while( true ) {
    if (local_1c == (void *)0x0) {
      ExceptionList = local_10;
      return 0;
    }
    if ((uint)(local_18 - (int)local_1c >> 2) <= uVar2) break;
    cVar1 = FUN_005b3c80(*(int *)((int)local_1c + uVar2 * 4));
    if (cVar1 != '\0') {
      if (local_1c == (void *)0x0) {
        ExceptionList = local_10;
        return *(undefined4 *)((int)local_1c + uVar2 * 4);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_1c);
    }
    uVar2 = uVar2 + 1;
  }
  if (local_1c == (void *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1c);
}


//// FUNCTION FUN_00582360 @ 00582360 ////

void __thiscall FUN_00582360(void *this,uint param_1)

{
  FUN_00580e80(this,param_1,&PTR_LAB_00d25c80,0,(int *)0x0);
  return;
}


//// FUNCTION FUN_005823a0 @ 005823a0 ////

void __thiscall FUN_005823a0(void *this,undefined4 *param_1)

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
  FUN_00580bf0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_005823f0 @ 005823f0 ////

void __fastcall FUN_005823f0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int local_38;
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
  puStack_8 = &LAB_00cb3050;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xaf;
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
  uVar3 = FUN_0098b490("NeedForSmallTalk");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x954));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb0;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("Birth");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x7e8),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb1;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("Retirement");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x768),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb2;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x8a8));
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
  uVar3 = FUN_0098b490("PEmployer");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x8a8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb3;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x994));
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
  uVar3 = FUN_0098b490("PBoss");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x994));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb4;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
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
  uVar3 = FUN_0098b490("Death");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x7ec),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb5;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x8c0));
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
  uVar3 = FUN_0098b490("PSubFacility");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x8c0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb6;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    iVar4 = FUN_00ace3df((int *)(param_1 + 2000));
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
  uVar3 = FUN_0098b490("PStaffCosts");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 2000));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb7;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x890));
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
  uVar3 = FUN_0098b490("PCurrentGear");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x890));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xb8;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x72c));
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
  uVar3 = FUN_0098b490("PAssistantData");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x72c));
  }
  uVar3 = FUN_0098b490("CV");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x6fc) == 0) {
        local_30 = 0;
      }
      else {
        local_30 = (*(int *)(param_1 + 0x700) - *(int *)(param_1 + 0x6fc)) / 0x18;
      }
      FUN_0098a3a0(&local_30);
      local_38 = 0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0x6fc) != 0 &&
          (local_34 < (uint)((*(int *)(param_1 + 0x700) - *(int *)(param_1 + 0x6fc)) / 0x18)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
          puVar6 = &DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            puVar6 = puVar6 + 1;
          }
          local_2c = local_20;
          *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
          DAT_010581d4 = 0xb9;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 10;
          iVar4 = FUN_00ace3df((int *)(*(int *)(param_1 + 0x6fc) + local_38));
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
        uVar3 = FUN_0098b490("CV[x]");
        if ((char)uVar3 != '\0') {
          FUN_00990970((int *)(*(int *)(param_1 + 0x6fc) + local_38));
        }
        local_38 = local_38 + 0x18;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_005807c0(param_1 + 0x6f8);
      SLVAR_LoadUint(&local_34);
      FUN_00582360((void *)(param_1 + 0x6f8),local_34);
      local_30 = 0;
      if (local_34 != 0) {
        local_38 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
            puVar6 = &DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar6 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              puVar6 = puVar6 + 1;
            }
            local_2c = local_20;
            *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
            DAT_010581d4 = 0xb9;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 0xb;
            iVar4 = FUN_00ace3df((int *)(*(int *)(param_1 + 0x6fc) + local_38));
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
          uVar3 = FUN_0098b490("CV[x]");
          if ((char)uVar3 != '\0') {
            FUN_00990970((int *)(*(int *)(param_1 + 0x6fc) + local_38));
          }
          local_30 = local_30 + 1;
          local_38 = local_38 + 0x18;
        } while (local_30 < local_34);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xba;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xc;
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
  uVar3 = FUN_0098b490("(int&)(CurrentTask)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x79c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xbb;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xd;
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
  uVar3 = FUN_0098b490("(int&)(LastTask)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x7a0),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xbc;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
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
  uVar3 = FUN_0098b490("BTemporaryTask");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x7a4),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xbd;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x8e0));
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
  uVar3 = FUN_0098b490("PExperience");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x8e0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xbe;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x10;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x8f8));
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
  uVar3 = FUN_0098b490("PCurrentScript");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x8f8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xbf;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x11;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x858));
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
  uVar3 = FUN_0098b490("PLastWorkingProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x858));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc0;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x12;
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
  uVar3 = FUN_0098b490("(int&)(SpawnType)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x764),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc1;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x13;
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
  uVar3 = FUN_0098b490("AmLeaving");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x6b4),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc2;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x14;
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
  uVar3 = FUN_0098b490("Hired");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x7f4),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc3;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x15;
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
  uVar3 = FUN_0098b490("InjuryDescription");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x914));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc4;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x16;
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
  uVar3 = FUN_0098b490("CountOneBarStuntsTried");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x774),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc5;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x17;
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
  uVar3 = FUN_0098b490("CountTwoBarStuntsTried");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x778),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc6;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x18;
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
  uVar3 = FUN_0098b490("CountThreeBarStuntsTried");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x77c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 199;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x19;
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
  uVar3 = FUN_0098b490("CountFourBarStuntsTried");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x780),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 200;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1a;
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
  uVar3 = FUN_0098b490("CountFiveBarStuntsTried");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x784),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xc9;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1b;
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
  uVar3 = FUN_0098b490("CountOneBarStuntsSucceeded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x788),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xca;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1c;
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
  uVar3 = FUN_0098b490("CountTwoBarStuntsSucceeded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x78c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xcb;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1d;
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
  uVar3 = FUN_0098b490("CountThreeBarStuntsSucceeded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x790),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xcc;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1e;
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
  uVar3 = FUN_0098b490("CountFourBarStuntsSucceeded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x794),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Staff.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xcd;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1f;
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
  uVar3 = FUN_0098b490("CountFiveBarStuntsSucceeded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x798),4);
  }
  FUN_0059d8d0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00584200 @ 00584200 ////

void FUN_00584200(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104cfc0;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104cfc0;
    DAT_010584cc = DAT_010584cc + 1;
  }
  local_4 = &DAT_0104cff4;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104cff4;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_005842b0 @ 005842b0 ////

int * __thiscall FUN_005842b0(void *this,byte param_1)

{
  FUN_005818a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_005842d0 @ 005842d0 ////

int * FUN_005842d0(void)

{
  void *this;
  int *piVar1;
  float10 fVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00581830();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"Lot",3);
  local_28 = 3;
  local_2c[3] = '\0';
  this = (void *)piVar1[0x25b];
  local_4 = 0;
  fVar2 = FUN_00990e30(DAT_0104cfb4,DAT_00e532fc);
  FUN_00442490(this,&local_2c,(float)fVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_00584390 @ 00584390 ////

int * FUN_00584390(void)

{
  void *this;
  int *piVar1;
  float10 fVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00581830();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"Movies",6);
  local_28 = 6;
  local_2c[6] = '\0';
  this = (void *)piVar1[0x25b];
  local_4 = 0;
  fVar2 = FUN_00990e30(DAT_0104cfb8,DAT_00e53300);
  FUN_00442490(this,&local_2c,(float)fVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION ActorSpawning_Constructor @ 00584450 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ActorSpawning_Constructor(void)

{
  float10 fVar1;
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
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3200;
  pvStack_c = ExceptionList;
  local_21c = local_210;
  DAT_0104cf94 = DAT_0104cf94 + 1;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_21c,"staff",5);
  local_218 = 5;
  local_21c[5] = '\0';
  local_4 = 0;
  FUN_00558a50(DAT_00f88624,&local_21c,(undefined4 *)0x1);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"spawn_age_minimum",0x11);
  local_218 = 0x11;
  local_21c[0x11] = '\0';
  local_4 = 1;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  DAT_0104cf98 = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"spawn_age_maximum",0x11);
  local_218 = 0x11;
  local_21c[0x11] = '\0';
  local_4 = 2;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cf9c = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"death_age_minimum",0x11);
  local_218 = 0x11;
  local_21c[0x11] = '\0';
  local_4 = 3;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cfa0 = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"death_age_maximum",0x11);
  local_218 = 0x11;
  local_21c[0x11] = '\0';
  local_4 = 4;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cfa4 = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"staff_turnover_min",0x12);
  local_218 = 0x12;
  local_21c[0x12] = '\0';
  local_4 = 5;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cfa8 = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"staff_turnover_max",0x12);
  local_218 = 0x12;
  local_21c[0x12] = '\0';
  local_4 = 6;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cfac = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x20;
  local_21c = _malloc(0x20);
  _strncpy(local_21c,"convert_to_star_cost",0x14);
  local_218 = 0x14;
  local_21c[0x14] = '\0';
  local_4 = 7;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  DAT_0104cfb0 = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"freezeticks",0xb);
  local_218 = 0xb;
  local_21c[0xb] = '\0';
  local_4 = 8;
  _DAT_00e532f8 = FUN_00558750(DAT_00f88624,&local_21c,0);
  local_4 = 0xffffffff;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  FUN_0098f9e0(0x57b310);
  FUN_00584200();
  FUN_00571b70();
  FUN_004ae7a0();
  FUN_0056d9c0();
  FUN_00492b60();
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"chr_createactor",0xf);
  local_218 = 0xf;
  local_21c[0xf] = '\0';
  local_4 = 9;
  FUN_005434b0();
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"staff",5);
  local_218 = 5;
  local_21c[5] = '\0';
  local_4 = 10;
  FUN_00558a50(DAT_00f88624,&local_21c,(undefined4 *)0x1);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x20;
  local_21c = _malloc(0x20);
  _strncpy(local_21c,"dismissal_popularityfactor",0x1a);
  local_218 = 0x1a;
  local_21c[0x1a] = '\0';
  local_4 = 0xb;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cf84 = (float)-fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"dismissal_dislike",0x11);
  local_218 = 0x11;
  local_21c[0x11] = '\0';
  local_4 = 0xc;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cf88 = (float)-fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"dismissal_forgive",0x11);
  local_218 = 0x11;
  local_21c[0x11] = '\0';
  local_4 = 0xd;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cf8c = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"dismissal_egofactor",0x13);
  local_218 = 0x13;
  local_21c[0x13] = '\0';
  local_4 = 0xe;
  fVar1 = FUN_00558610(DAT_00f88624,&local_21c,0.0);
  _DAT_0104cf90 = (float)fVar1;
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_21c = local_210;
  local_210[0] = '\0';
  local_218 = 0;
  local_214 = 0x14;
  _strncpy(local_21c,"experience",10);
  local_218 = 10;
  local_21c[10] = '\0';
  local_4 = 0xf;
  FUN_0055c540(local_e4,&local_21c);
  if (0x14 < local_214) {
                    /* WARNING: Subroutine does not return */
    _free(local_21c);
  }
  local_1dc = local_1d0;
  local_1d0[0] = '\0';
  local_1d8 = 0;
  local_1d4 = 0x14;
  _strncpy(local_1dc,"StaffStartMinExp",0x10);
  local_1d8 = 0x10;
  local_1dc[0x10] = '\0';
  local_4._0_1_ = 0x12;
  fVar1 = FUN_00558610(local_e4,&local_1dc,0.0);
  DAT_0104cfb4 = (float)fVar1;
  if (0x14 < local_1d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1dc);
  }
  local_1dc = local_1d0;
  local_1d0[0] = '\0';
  local_1d8 = 0;
  local_1d4 = 0x14;
  _strncpy(local_1dc,"StaffStartMaxExp",0x10);
  local_1d8 = 0x10;
  local_1dc[0x10] = '\0';
  local_4._0_1_ = 0x13;
  fVar1 = FUN_00558610(local_e4,&local_1dc,0.0);
  DAT_00e532fc = (float)fVar1;
  if (0x14 < local_1d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1dc);
  }
  local_1dc = local_1d0;
  local_1d0[0] = '\0';
  local_1d8 = 0;
  local_1d4 = 0x14;
  _strncpy(local_1dc,"CrewStartMinExp",0xf);
  local_1d8 = 0xf;
  local_1dc[0xf] = '\0';
  local_4._0_1_ = 0x14;
  fVar1 = FUN_00558610(local_e4,&local_1dc,0.0);
  DAT_0104cfb8 = (float)fVar1;
  if (0x14 < local_1d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1dc);
  }
  local_1dc = local_1d0;
  local_1d0[0] = '\0';
  local_1d8 = 0;
  local_1d4 = 0x14;
  _strncpy(local_1dc,"CrewStartMaxExp",0xf);
  local_1d8 = 0xf;
  local_1dc[0xf] = '\0';
  local_4._0_1_ = 0x15;
  fVar1 = FUN_00558610(local_e4,&local_1dc,0.0);
  DAT_00e53300 = (float)fVar1;
  if (0x14 < local_1d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1dc);
  }
  local_1dc = local_1d0;
  local_1d0[0] = '\0';
  local_1d8 = 0;
  local_1d4 = 0x14;
  _strncpy(local_1dc,"stunts",6);
  local_1d8 = 6;
  local_1dc[6] = '\0';
  local_4._0_1_ = 0x16;
  FUN_0055c540(local_1bc,&local_1dc);
  if (0x14 < local_1d4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1dc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"healththreshold",0xf);
  local_1f8 = 0xf;
  local_1fc[0xf] = '\0';
  local_4._0_1_ = 0x19;
  fVar1 = FUN_00558610(local_1bc,&local_1fc,0.0);
  _DAT_00e53304 = (float)fVar1;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"healthgainpertick",0x11);
  local_1f8 = 0x11;
  local_1fc[0x11] = '\0';
  local_4._0_1_ = 0x1a;
  fVar1 = FUN_00558610(local_1bc,&local_1fc,0.0);
  DAT_00e53308 = (float)fVar1;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"experience",10);
  local_1f8 = 10;
  local_1fc[10] = '\0';
  local_4._0_1_ = 0x1b;
  FUN_00558a50(local_1bc,&local_1fc,(undefined4 *)0x0);
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"stuntxpsuccessmin",0x11);
  local_1f8 = 0x11;
  local_1fc[0x11] = '\0';
  local_4._0_1_ = 0x1c;
  fVar1 = FUN_00558610(local_1bc,&local_1fc,0.0);
  _DAT_00e5330c = (float)fVar1;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"stuntxpsuccessmax",0x11);
  local_1f8 = 0x11;
  local_1fc[0x11] = '\0';
  local_4._0_1_ = 0x1d;
  fVar1 = FUN_00558610(local_1bc,&local_1fc,0.0);
  _DAT_00e53310 = (float)fVar1;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"stuntxpfailuremin",0x11);
  local_1f8 = 0x11;
  local_1fc[0x11] = '\0';
  local_4._0_1_ = 0x1e;
  fVar1 = FUN_00558610(local_1bc,&local_1fc,0.0);
  _DAT_00e53314 = (float)fVar1;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x14;
  _strncpy(local_1fc,"stuntxpfailuremax",0x11);
  local_1f8 = 0x11;
  local_1fc[0x11] = '\0';
  local_4._0_1_ = 0x1f;
  fVar1 = FUN_00558610(local_1bc,&local_1fc,0.0);
  _DAT_00e53318 = (float)fVar1;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x20;
  local_1fc = _malloc(0x20);
  _strncpy(local_1fc,"actorstuntskillmodifier",0x17);
  local_1f8 = 0x17;
  local_1fc[0x17] = '\0';
  local_4._0_1_ = 0x20;
  fVar1 = FUN_00558610(local_1bc,&local_1fc,0.0);
  _DAT_00e5331c = (float)fVar1;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  local_1fc = local_1f0;
  local_1f0[0] = '\0';
  local_1f8 = 0;
  local_1f4 = 0x20;
  local_1fc = _malloc(0x20);
  _strncpy(local_1fc,"stuntmangenremodifier",0x15);
  local_1f8 = 0x15;
  local_1fc[0x15] = '\0';
  local_4._0_1_ = 0x21;
  fVar1 = FUN_00558610(local_1bc,&local_1fc,0.0);
  _DAT_00e53320 = (float)fVar1;
  local_4._0_1_ = 0x18;
  if (0x14 < local_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1fc);
  }
  GlobalStatRegistry_RegisterAllStatDescriptors();
  FUN_00471840("MT_STAFF_CANTLEAVE",-0x7ffff61e);
  FUN_00471840("MT_STAFF_CANLEAVE",-0x7ffff5f6);
  FUN_00471840("MT_STAFF_HIRE",-0x7ffff5ce);
  FUN_00471840("MT_STAFF_FIRE",-0x7ffff5a6);
  FUN_00471840("MT_STAFF_PROCESSINPUT",-0x7ffff57e);
  FUN_00471840("MT_STAFF_AISTEAL",-0x7ffff556);
  local_4 = CONCAT31(local_4._1_3_,0x11);
  FUN_00558920(local_1bc);
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00585180 @ 00585180 ////

void __thiscall FUN_00585180(void *this,void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this_00;
  void *pvVar3;
  void *pvVar4;
  void *this_01;
  int iVar5;
  
  this_00 = param_1;
  puVar2 = DAT_0104d688;
  if (*(void **)((int)param_1 + 4) != *(void **)((int)param_1 + 8)) {
    pvVar3 = _memmove(*(void **)((int)param_1 + 4),*(void **)((int)param_1 + 8),0);
    *(void **)((int)this_00 + 8) = pvVar3;
    puVar2 = DAT_0104d688;
  }
  do {
    if (puVar2 == &DAT_0104d694) {
      return;
    }
    pvVar3 = (void *)puVar2[2];
    if (pvVar3 != (void *)0x0) {
      param_1 = pvVar3;
      pvVar4 = (void *)FUN_005b2780((int)pvVar3);
      if (pvVar4 == this) {
LAB_005851de:
        iVar5 = *(int *)((int)this_00 + 4);
        if ((iVar5 == 0) ||
           ((uint)(*(int *)((int)this_00 + 0xc) - iVar5 >> 2) <=
            (uint)(*(int *)((int)this_00 + 8) - iVar5 >> 2))) {
          FUN_00580bf0(this_00,*(undefined4 **)((int)this_00 + 8),1,&param_1);
        }
        else {
          piVar1 = *(int **)((int)this_00 + 8);
          *piVar1 = (int)pvVar3;
          *(int **)((int)this_00 + 8) = piVar1 + 1;
        }
      }
      else {
        iVar5 = 0;
        pvVar4 = this;
        this_01 = (void *)FUN_005b2220((int)pvVar3);
        iVar5 = FUN_005a7640(this_01,(int)pvVar4,iVar5);
        if (iVar5 == 0) {
          for (iVar5 = *(int *)((int)pvVar3 + 0x134); iVar5 != *(int *)((int)pvVar3 + 0x138);
              iVar5 = iVar5 + 0x18) {
            if (*(void **)(iVar5 + 0x14) == this) goto LAB_005851de;
          }
        }
        else {
          FUN_005823a0(this_00,&param_1);
        }
      }
    }
    puVar2 = (undefined4 *)puVar2[1];
  } while( true );
}


//// FUNCTION FUN_00585280 @ 00585280 ////

void __fastcall FUN_00585280(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d26740;
  return;
}


//// FUNCTION FUN_00585320 @ 00585320 ////

void __fastcall FUN_00585320(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005853e0 @ 005853e0 ////

void FUN_005853e0(void)

{
  return;
}


//// FUNCTION FUN_00585400 @ 00585400 ////

bool __fastcall FUN_00585400(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (0 < *(int *)(param_1 + 0x950)) {
    return false;
  }
  iVar1 = FUN_005773c0(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_005773c0(param_1);
    iVar2 = GetPlayerStudio();
    return iVar1 != iVar2;
  }
  uVar3 = FUN_0043b6a0(&DAT_00e4fa4c,(float *)(param_1 + 0xac0));
  return (char)uVar3 != '\0';
}


//// FUNCTION FUN_00585450 @ 00585450 ////

void __fastcall FUN_00585450(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x120))(1);
  piVar1 = (int *)FUN_0050d630();
  (**(code **)(*piVar1 + 0x30))(param_1);
  return;
}


//// FUNCTION FUN_00585470 @ 00585470 ////

void __thiscall FUN_00585470(void *this,int param_1)

{
  FUN_00982950(*(void **)((int)this + 0x11c),param_1);
  return;
}


//// FUNCTION FUN_00585480 @ 00585480 ////

undefined1 __fastcall FUN_00585480(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  cVar1 = FUN_004201b0(DAT_00f87b04);
  if (cVar1 == '\0') {
    uVar3 = FUN_0043b6c0(param_1 + 0x1f8,(float *)&DAT_00e4fa4c);
    if (((char)uVar3 != '\0') && (uVar4 = FUN_00577f90(param_1), (char)uVar4 != '\0')) {
      return 0;
    }
    if (((char)param_1[0x1cb] != '\0') && (iVar5 = (**(code **)(*param_1 + 0x27c))(), iVar5 != 0)) {
      iVar5 = (**(code **)(*param_1 + 0x27c))();
      cVar1 = FUN_004724d0(iVar5);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    if (*(char *)((int)param_1 + 0xc65) == '\0') {
      uVar2 = FUN_0059ad50(param_1);
      return uVar2;
    }
  }
  return 0;
}


//// FUNCTION FUN_00585500 @ 00585500 ////

undefined4 * __thiscall FUN_00585500(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  float local_4;
  
  FUN_0043b510(&local_8);
  puVar2 = (undefined4 *)((int)this + 0x864);
  uVar1 = FUN_0043b6a0(puVar2,(float *)&DAT_00e4fa4c);
  if ((char)uVar1 != '\0') {
    puVar2 = &DAT_00e4fa4c;
  }
  puVar2 = (undefined4 *)FUN_0043b620(puVar2,&local_4,(float *)((int)this + 0x860));
  *param_1 = *puVar2;
  return param_1;
}


//// FUNCTION FUN_00585570 @ 00585570 ////

void __thiscall FUN_00585570(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  float local_4;
  
  FUN_0043b510(&local_8);
  uVar1 = FUN_0043b6a0((undefined4 *)((int)this + 0x864),(float *)&DAT_00e4fa4c);
  puVar2 = &DAT_00e4fa4c;
  if ((char)uVar1 == '\0') {
    puVar2 = (undefined4 *)((int)this + 0x864);
  }
  puVar2 = (undefined4 *)FUN_0043b620(puVar2,&local_4,(float *)((int)this + 0x860));
  local_8 = *puVar2;
  puVar2 = (undefined4 *)FUN_0043b600(&local_8,&local_4,(float *)((int)this + 0xa44));
  *param_1 = *puVar2;
  return;
}


//// FUNCTION FUN_005855e0 @ 005855e0 ////

undefined1 __fastcall FUN_005855e0(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc64);
}


//// FUNCTION FUN_005855f0 @ 005855f0 ////

undefined1 __fastcall FUN_005855f0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x530);
}


//// FUNCTION FUN_00585610 @ 00585610 ////

float * __thiscall FUN_00585610(void *this,float *param_1)

{
  void *this_00;
  float *pfVar1;
  
  pfVar1 = param_1;
  this_00 = (void *)FUN_00577370((int)this);
  FUN_00441540(this_00,pfVar1);
  return param_1;
}


//// FUNCTION FUN_00585630 @ 00585630 ////

float10 __thiscall FUN_00585630(float *param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)*param_1 / (float10)param_2;
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00585670 @ 00585670 ////

void __fastcall FUN_00585670(int *param_1)

{
  (**(code **)(*param_1 + 0x1a4))(0);
  if ((int *)param_1[0x1e2] != (int *)0x0) {
    *(int *)param_1[0x1e2] = param_1[0x1e1];
  }
  if (param_1[0x1e1] != 0) {
    *(int *)(param_1[0x1e1] + 4) = param_1[0x1e2];
  }
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  FUN_00599d80(param_1);
  return;
}


//// FUNCTION FUN_005856c0 @ 005856c0 ////

undefined4 __fastcall FUN_005856c0(int param_1)

{
  if (0.5 < *(float *)(param_1 + 0xb9c)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00585700 @ 00585700 ////

void __fastcall FUN_00585700(int *param_1)

{
  char cVar1;
  
  FUN_00575f10(param_1);
  cVar1 = (**(code **)(*param_1 + 0x13c))();
  if (cVar1 != '\0') {
    FUN_0041c860(param_1[0x2e2]);
    return;
  }
  return;
}


//// FUNCTION FUN_00585730 @ 00585730 ////

void __fastcall FUN_00585730(int param_1)

{
  *(undefined4 *)(param_1 + 0xbbc) = 100;
  FUN_0041c4b0(*(int *)(param_1 + 0xb88));
  return;
}


//// FUNCTION FUN_00585800 @ 00585800 ////

void __fastcall FUN_00585800(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined1 *puVar4;
  undefined1 local_8 [4];
  float *pfStack_4;
  
  puVar4 = local_8;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x240))();
  pfVar3 = (float *)(**(code **)(*param_1 + 0x230))(local_8,puVar4,*puVar2);
  fVar1 = ((float)puVar4 + *pfVar3) * 0.5;
  if (fVar1 < 0.0) {
    *pfStack_4 = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *pfStack_4 = fVar1;
  return;
}


//// FUNCTION FUN_00585880 @ 00585880 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00585880(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = _DAT_00e53e1c * param_1;
  if (fVar1 < 0.0) {
    FUN_004950a0((void *)((int)this + 0xbe8),0.0,DAT_00e4fa4c);
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  FUN_004950a0((void *)((int)this + 0xbe8),fVar1,DAT_00e4fa4c);
  return;
}


//// FUNCTION FUN_00585900 @ 00585900 ////

void __fastcall FUN_00585900(void *param_1)

{
  FUN_00599630((int)param_1);
  if ((0.0 < *(float *)((int)param_1 + 0xb9c)) &&
     ((*(int *)((int)param_1 + 0x4e8) == 2 || (*(int *)((int)param_1 + 0x4e8) == 1)))) {
    FUN_00598db0(param_1,0);
  }
  return;
}


//// FUNCTION FUN_00585960 @ 00585960 ////

void __fastcall FUN_00585960(int *param_1)

{
  if (((param_1[0x205] == 6) || (param_1[0x205] == 5)) && ((char)param_1[0x207] != '\0')) {
    (**(code **)(*param_1 + 0x224))(param_1[0x2d4],0);
    *(undefined1 *)(param_1 + 0x207) = 0;
  }
  return;
}


//// FUNCTION FUN_005859a0 @ 005859a0 ////

void __fastcall FUN_005859a0(int *param_1)

{
  FUN_00575c00(param_1);
  if ((int *)param_1[0x2da] != (int *)0x0) {
    param_1[0x2e1] = *(int *)param_1[0x2da];
  }
  if (((param_1[0x205] == 6) || (param_1[0x205] == 5)) && ((char)param_1[0x207] != '\0')) {
    (**(code **)(*param_1 + 0x224))(param_1[0x2d4],0);
    *(undefined1 *)(param_1 + 0x207) = 0;
  }
  return;
}


//// FUNCTION FUN_00585d30 @ 00585d30 ////

void __thiscall FUN_00585d30(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 0xbc4);
  if (fVar1 < 0.0) {
    *(undefined4 *)((int)this + 0xbc4) = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)((int)this + 0xbc4) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0xbc4) = fVar1;
  return;
}


//// FUNCTION FUN_00585d80 @ 00585d80 ////

void __thiscall FUN_00585d80(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 0xb3c);
  *(float *)((int)this + 0xb3c) = fVar1;
  if (fVar1 <= 60.0) {
    fVar1 = 60.0;
  }
  *(float *)((int)this + 0xb3c) = fVar1;
  if (fVar1 < 100.0) {
    *(float *)((int)this + 0xb3c) = fVar1;
    return;
  }
  *(undefined4 *)((int)this + 0xb3c) = 0x42c80000;
  return;
}


//// FUNCTION FUN_00585dd0 @ 00585dd0 ////

void __thiscall FUN_00585dd0(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 0xbc8);
  if (fVar1 < 0.0) {
    *(undefined4 *)((int)this + 0xbc8) = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)((int)this + 0xbc8) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0xbc8) = fVar1;
  return;
}


//// FUNCTION FUN_00585e20 @ 00585e20 ////

float10 __fastcall FUN_00585e20(int param_1)

{
  return (float10)*(float *)(param_1 + 0xb3c);
}


//// FUNCTION FUN_00585e30 @ 00585e30 ////

void __thiscall FUN_00585e30(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = (*(float *)((int)this + 0xb3c) - 60.0) * 0.025;
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


//// FUNCTION FUN_00585ea0 @ 00585ea0 ////

undefined4 __fastcall FUN_00585ea0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb68);
}


//// FUNCTION FUN_00585ec0 @ 00585ec0 ////

void __thiscall FUN_00585ec0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xb9c);
  return;
}


//// FUNCTION FUN_00585ed0 @ 00585ed0 ////

void __thiscall FUN_00585ed0(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0xb9c) = 0;
    return;
  }
  if (1.0 < param_1) {
    *(undefined4 *)((int)this + 0xb9c) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0xb9c) = param_1;
  return;
}


//// FUNCTION FUN_00585f60 @ 00585f60 ////

undefined1 FUN_00585f60(void)

{
  return 1;
}


//// FUNCTION FUN_00585f80 @ 00585f80 ////

void __fastcall FUN_00585f80(int *param_1)

{
  float fVar1;
  float *pfVar2;
  float *unaff_retaddr;
  int *local_4;
  
  local_4 = param_1;
  pfVar2 = (float *)(**(code **)(*param_1 + 0x230))(&local_4);
  fVar1 = (0.9 - *pfVar2) * 1.1111112;
  if (fVar1 < 0.0) {
    *unaff_retaddr = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *unaff_retaddr = fVar1;
  return;
}


//// FUNCTION FUN_00585ff0 @ 00585ff0 ////

void __thiscall FUN_00585ff0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0xcd0);
  return;
}


//// FUNCTION FUN_00586000 @ 00586000 ////

void __cdecl FUN_00586000(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  FUN_004fdd20((longlong *)&local_8);
  fVar2 = (float)CONCAT44(uStack_4,local_8) * 1.1920929e-07;
  fVar1 = 0.0;
  if (0.0 < fVar2) {
    fVar1 = ((float)param_2 * 1.1920929e-07) / fVar2;
    if (fVar1 < 0.0) {
      *param_1 = 0.0;
      return;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_00586080 @ 00586080 ////

longlong * FUN_00586080(longlong *param_1)

{
  undefined8 local_18;
  ulonglong local_10;
  longlong local_8;
  
  FUN_004fdd20(&local_8);
  local_18 = FUN_00acd42c();
  FUN_00471b10(&local_18);
  if (0.0 < (float)local_8 * 1.1920929e-07) {
    FUN_00990e30(-100.0,100.0);
    local_10 = FUN_00acd42c();
    FUN_00471b10((longlong *)&local_10);
    local_18 = local_10;
    FUN_00471b10(&local_18);
  }
  *(undefined4 *)((int)param_1 + 4) = local_18._4_4_;
  *(undefined4 *)param_1 = (undefined4)local_18;
  FUN_00471b10(param_1);
  return param_1;
}


//// FUNCTION FUN_00586140 @ 00586140 ////

float * __fastcall FUN_00586140(int *param_1)

{
  int *piVar1;
  float *unaff_retaddr;
  undefined1 *puVar2;
  undefined4 in_stack_fffffff4;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x1d4))();
  puVar2 = &stack0xfffffff4;
  (**(code **)(*piVar1 + 0x4c))();
  FUN_00586000(unaff_retaddr,CONCAT44(in_stack_fffffff4,puVar2));
  return unaff_retaddr;
}


//// FUNCTION FUN_00586190 @ 00586190 ////

float * __thiscall FUN_00586190(void *this,float *param_1)

{
  FUN_004950c0((void *)((int)this + 0xbdc),param_1);
  return param_1;
}


//// FUNCTION FUN_005861b0 @ 005861b0 ////

void FUN_005861b0(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  if ((DAT_0104d038 != (undefined4 *)0x0) &&
     (FUN_009d2c50(DAT_0104d038,(void *)0x0,'\x01',-1.0,-1.0), DAT_0104d038 != (undefined4 *)0x0)) {
    FUN_009d2b50(DAT_0104d038);
    DAT_0104d038 = (undefined4 *)0x0;
  }
  if ((DAT_0104d03c != (undefined4 *)0x0) &&
     (FUN_009d2c50(DAT_0104d03c,(void *)0x0,'\x01',-1.0,-1.0), DAT_0104d03c != (undefined4 *)0x0)) {
    FUN_009d2b50(DAT_0104d03c);
    DAT_0104d03c = (undefined4 *)0x0;
  }
  puVar1 = DAT_0104d044;
  if (DAT_0104d044 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(DAT_0104d044 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0104d044 = (undefined4 *)0x0;
    DAT_0105b588 = uVar2;
  }
  puVar1 = DAT_0104d040;
  if (DAT_0104d040 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(DAT_0104d040 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0104d040 = (undefined4 *)0x0;
    DAT_0105b588 = uVar2;
  }
  return;
}


//// FUNCTION FUN_005862b0 @ 005862b0 ////

void __thiscall FUN_005862b0(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + *(float *)((int)this + 0xb9c);
  if (fVar1 < 0.0) {
    *(undefined4 *)((int)this + 0xb9c) = 0;
    return;
  }
  if (1.0 < fVar1) {
    *(undefined4 *)((int)this + 0xb9c) = 0x3f800000;
    return;
  }
  *(float *)((int)this + 0xb9c) = fVar1;
  return;
}


//// FUNCTION FUN_00586300 @ 00586300 ////

undefined4 __fastcall FUN_00586300(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x774) == 6) || (*(int *)(param_1 + 0x774) == 5)) &&
     (*(char *)(param_1 + 0x77c) != '\0')) {
    (**(code **)(*(int *)(param_1 + -0xa0) + 0x224))(*(undefined4 *)(param_1 + 0xab0),0);
    *(undefined1 *)(param_1 + 0x77c) = 0;
  }
  uVar1 = FUN_0057a730(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_0092c900();
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00586360 @ 00586360 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00586360(void)

{
  return (float10)_DAT_00e53e1c;
}


//// FUNCTION FUN_00586370 @ 00586370 ////

void __fastcall FUN_00586370(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_005863a0 @ 005863a0 ////

void FUN_005863a0(void)

{
  return;
}


//// FUNCTION FUN_005863c0 @ 005863c0 ////

undefined4 __thiscall FUN_005863c0(void *this,int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((int)this + param_1 * 4 + 0x8c);
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    if (fVar1 < 0.33333334) {
      return 0;
    }
    break;
  case 4:
    if (fVar1 < 0.33333334) {
      return 0;
    }
    break;
  case 5:
    if (fVar1 < 0.33333334) {
      return 2;
    }
    if (fVar1 < 0.6666667) {
      return 1;
    }
    return 0;
  default:
    goto switchD_005863d4_default;
  }
  if (0.6666667 <= fVar1) {
    return 2;
  }
switchD_005863d4_default:
  return 1;
}


//// FUNCTION FUN_00586490 @ 00586490 ////

float10 __fastcall FUN_00586490(float param_1)

{
  float local_4;
  
  local_4 = param_1;
  FUN_004950c0((void *)((int)param_1 + 0xbdc),&local_4);
  return (float10)local_4;
}


//// FUNCTION FUN_005864b0 @ 005864b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_005864b0(float param_1)

{
  int *piVar1;
  void *this;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  float local_4;
  
  iVar9 = 0;
  pTVar8 = &TM::CStudioPlayer::RTTI_Type_Descriptor;
  pTVar7 = &TM::CStudio::RTTI_Type_Descriptor;
  iVar6 = 0;
  local_4 = param_1;
  piVar1 = (int *)GetPlayerStudio();
  this = (void *)FUN_00ace790(piVar1,iVar6,pTVar7,pTVar8,iVar9);
  pfVar2 = (float *)FUN_00518fb0(this,&local_4);
  fVar3 = (float10)*pfVar2;
  fVar4 = ((float10)1.0 - (float10)_DAT_0104d04c) * fVar3;
  fVar5 = (float10)*(float *)((int)param_1 + 0xcd0) - fVar4;
  if (fVar5 < (float10)0.0) {
    return (float10)0.0 / (((float10)_DAT_0104d04c + fVar4) - fVar4) - fVar3;
  }
  if ((float10)1.0 < fVar5) {
    fVar5 = (float10)1.0;
  }
  return fVar5 / (((float10)_DAT_0104d04c + fVar4) - fVar4) - fVar3;
}


//// FUNCTION FUN_00586560 @ 00586560 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00586560(int *param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  undefined8 uStack_28;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = 0.0;
  local_c = 1.0;
  pfVar3 = (float *)(param_1 + 0x34a);
  iVar4 = 5;
  do {
    if (*pfVar3 < local_c) {
      local_c = *pfVar3;
    }
    if (local_10 < *pfVar3) {
      local_10 = *pfVar3;
    }
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_10 = local_10 - local_c;
  if (0.0 <= local_10) {
    if (local_10 <= 1.0) {
      if (local_10 < 0.0) {
        local_10 = 0.0;
      }
      else if (1.0 < local_10) {
        local_10 = 1.0;
      }
    }
    else {
      local_10 = 1.0;
    }
  }
  else {
    local_10 = 0.0;
  }
  pfVar3 = (float *)(param_1 + 0x34a);
  iVar4 = 1;
  pfVar5 = (float *)(param_1 + 0x34b);
  do {
    iVar4 = iVar4 + 1;
    local_8 = 1.0;
    if (local_10 != 0.0) {
      fVar1 = *pfVar5 - local_c;
      if (0.0 <= fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      local_8 = 1.0 - (fVar1 / local_10) * 0.5;
    }
    uStack_28._4_4_ = 0x5866c4;
    fVar6 = FUN_00990d60();
    if (fVar6 < (float10)local_8 * (float10)(1.0 / (float)iVar4)) {
      pfVar3 = pfVar5;
    }
    pfVar5 = pfVar5 + 1;
  } while (iVar4 < 5);
  fVar1 = _DAT_00e53e68 + *pfVar3;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *pfVar3 = fVar1;
  if (pfVar3 != (float *)(param_1 + 0x34a)) {
    param_1[0x356] = DAT_00e4fa4c;
    return;
  }
  uStack_28._4_4_ = 0x586731;
  piVar2 = (int *)(**(code **)(*param_1 + 0x1d4))();
  FUN_00586080(&uStack_28);
  (**(code **)(*piVar2 + 0x48))();
  param_1[0x356] = DAT_00e4fa4c;
  return;
}


//// FUNCTION FUN_00586780 @ 00586780 ////

undefined4 __fastcall FUN_00586780(int param_1)

{
  return *(undefined4 *)(param_1 + 0xba4);
}


//// FUNCTION FUN_00586790 @ 00586790 ////

undefined4 __fastcall FUN_00586790(int param_1)

{
  return *(undefined4 *)(param_1 + 0xba8);
}


//// FUNCTION FUN_005867a0 @ 005867a0 ////

void __thiscall FUN_005867a0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xba4) = param_1;
  return;
}


//// FUNCTION FUN_005867b0 @ 005867b0 ////

void __thiscall FUN_005867b0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xba8) = param_1;
  return;
}


//// FUNCTION FUN_005867c0 @ 005867c0 ////

void __thiscall FUN_005867c0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  void *pvVar4;
  float10 fVar5;
  char unaff_retaddr;
  float fVar6;
  float fVar7;
  int *piVar8;
  
  if (*(int *)((int)this + 0x6fc) != 0) {
    iVar2 = FUN_0059c6e0(this,'\0');
    if ((char)param_1 != '\0') {
      cVar1 = FUN_00430e40(iVar2);
      if (cVar1 != '\0') {
        param_1 = *(int *)((int)this + 0xb3c);
        piVar8 = &param_1;
        pfVar3 = (float *)(**(code **)(*(int *)this + 0x1e0))(piVar8,param_1);
        fVar5 = FUN_0043b710(pfVar3);
        fVar6 = (float)fVar5;
        cVar1 = '\x01';
        pvVar4 = (void *)FUN_0042fed0(*(char **)((int)this + 0x4a0));
        FUN_009d2c50(*(void **)((int)this + 0x6fc),pvVar4,cVar1,fVar6,(float)piVar8);
        return;
      }
    }
    param_1 = CONCAT31(param_1._1_3_,1);
    if ((*(int *)(iVar2 + 0xb8) == 3) || (*(char *)((int)this + 0x727) != '\0')) {
      param_1 = (uint)param_1._1_3_ << 8;
    }
    fVar5 = (float10)(**(code **)(*(int *)this + 0x1b0))(iVar2);
    fVar6 = (float)fVar5;
    fVar5 = (float10)FUN_00576170(this,iVar2);
    fVar7 = (float)fVar5;
    pvVar4 = (void *)FUN_004319b0(iVar2);
    FUN_009d2c50(*(void **)((int)this + 0x6fc),pvVar4,unaff_retaddr,fVar7,fVar6);
  }
  return;
}


//// FUNCTION FUN_005868f0 @ 005868f0 ////

int * __thiscall FUN_005868f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00586930 @ 00586930 ////

void __fastcall FUN_00586930(int param_1)

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


//// FUNCTION FUN_00586960 @ 00586960 ////

int * __thiscall FUN_00586960(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_005869d0 @ 005869d0 ////

int * __thiscall FUN_005869d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00586a40 @ 00586a40 ////

int * __thiscall FUN_00586a40(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00586ad0 @ 00586ad0 ////

int * __thiscall FUN_00586ad0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00586bd0 @ 00586bd0 ////

int * __thiscall FUN_00586bd0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00586c70 @ 00586c70 ////

int __fastcall FUN_00586c70(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00586dd0 @ 00586dd0 ////

void __fastcall FUN_00586dd0(int *param_1)

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


//// FUNCTION FUN_00586e50 @ 00586e50 ////

int * __thiscall FUN_00586e50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00586ec0 @ 00586ec0 ////

undefined4 * __cdecl FUN_00586ec0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00586f30 @ 00586f30 ////

void __thiscall FUN_00586f30(void *this,float *param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00ace9b0();
  fVar2 = (float10)*(float *)((int)this + 0xb9c) - fVar2 * (float10)0.0003;
  fVar1 = (float)fVar2;
  if (fVar2 < (float10)0.0) {
LAB_00586fcd:
    *param_1 = 0.0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_00586fcd;
    if (fVar1 <= 1.0) goto LAB_00586ff5;
  }
  fVar1 = 1.0;
LAB_00586ff5:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_00587100 @ 00587100 ////

void __thiscall FUN_00587100(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = ((1.0 - (*(float *)((int)this + 0xb3c) - 60.0) * 0.025) + *(float *)((int)this + 0xbc8)) *
          0.5;
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


//// FUNCTION FUN_005872b0 @ 005872b0 ////

void __thiscall FUN_005872b0(void *this,float param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  
  fVar1 = param_1;
  if (param_2._0_1_ == '\0') {
    fVar3 = FUN_00a19e00((undefined4 *)((int)this + 0xa7c));
    fVar1 = (float)fVar3;
    fVar3 = FUN_00a19e00((undefined4 *)((int)this + 0xa9c));
    param_2 = (float)fVar3;
    if (fVar1 == 0.0) {
      fVar1 = param_1;
      if (param_2 != 0.0) {
        fVar1 = param_2;
      }
    }
    else if (param_2 != 0.0) {
      pfVar2 = (float *)((int)this + 0xabc);
      if (*pfVar2 == 0.0) {
        pfVar2 = FUN_00407070(&param_1,0.5);
      }
      fVar1 = *pfVar2 * fVar1 + (1.0 - *pfVar2) * param_2;
    }
  }
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    *(float *)((int)this + 0xbc4) = fVar1;
    return;
  }
  *(undefined4 *)((int)this + 0xbc4) = 0;
  return;
}


//// FUNCTION FUN_005873c0 @ 005873c0 ////

undefined4 __fastcall FUN_005873c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb80);
}


//// FUNCTION FUN_005873d0 @ 005873d0 ////

void __thiscall FUN_005873d0(void *this,undefined4 param_1)

{
  FUN_004af570();
  if (DAT_0104a974 == 0) {
    *(undefined4 *)((int)this + 0xbc0) = param_1;
    return;
  }
  if (*(float *)(DAT_0104a974 + 0x7c) != 0.0) {
    *(undefined4 *)((int)this + 0xbc0) = 0x3f800000;
    return;
  }
  *(undefined4 *)((int)this + 0xbc0) = param_1;
  return;
}


//// FUNCTION FUN_00587520 @ 00587520 ////

void __thiscall FUN_00587520(void *this,undefined4 param_1)

{
  *(undefined1 *)((int)this + 0xc80) = 1;
  (**(code **)(*(int *)((int)this + 0xc68) + 4))();
  *(undefined4 *)((int)this + 0xc7c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xc68))();
  return;
}


//// FUNCTION FUN_00587550 @ 00587550 ////

void __fastcall FUN_00587550(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_005875a0 @ 005875a0 ////

void __fastcall FUN_005875a0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3246;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = FUN_00493620(param_1);
  (**(code **)(*(int *)(param_1 + 0xcfc) + 4))();
  *(undefined4 **)(param_1 + 0xd10) = puVar1;
  (*(code *)**(undefined4 **)(param_1 + 0xcfc))();
  puVar1 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0xc98) == 0) {
    pvVar2 = operator_new(0x16c);
    uStack_4 = 0;
    if (pvVar2 != (void *)0x0) {
      puVar1 = FUN_00478590(pvVar2,param_1);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0xc84) + 4))();
    *(undefined4 **)(param_1 + 0xc98) = puVar1;
    (*(code *)**(undefined4 **)(param_1 + 0xc84))();
  }
  if (*(int *)(param_1 + 0xcc8) == 0) {
    pvVar2 = operator_new(0xb4);
    uStack_4 = 1;
    if (pvVar2 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00407a30(pvVar2,param_1);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)(param_1 + 0xcb4) + 4))();
    *(undefined4 **)(param_1 + 0xcc8) = puVar1;
    (*(code *)**(undefined4 **)(param_1 + 0xcb4))();
  }
  FUN_0057c550(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_005876e0 @ 005876e0 ////

void __thiscall FUN_005876e0(void *this,float *param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float local_8;
  undefined1 auStack_4 [4];
  
  local_8 = 0.0;
  iVar1 = (**(code **)(*(int *)this + 0x270))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x270))();
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x1cc))(auStack_4);
    local_8 = *pfVar3;
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


//// FUNCTION FUN_00587810 @ 00587810 ////

void __fastcall FUN_00587810(int *param_1)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  if (0.0 < (float)param_1[0x2e7]) {
    FUN_00598e50(param_1,&local_c);
    local_4 = local_4 + 0.2;
    if (((float)param_1[0x2d5] - local_c) * ((float)param_1[0x2d5] - local_c) +
        ((float)param_1[0x2d6] - local_8) * ((float)param_1[0x2d6] - local_8) +
        ((float)param_1[0x2d7] - local_4) * ((float)param_1[0x2d7] - local_4) <= 0.01) {
      iVar1 = FUN_00566c70();
      if ((uint)(iVar1 - param_1[0x2d8]) < 0x12d) goto LAB_005878ce;
    }
    iVar1 = FUN_00566c70();
    param_1[0x2d5] = (int)local_c;
    param_1[0x2d8] = iVar1;
    param_1[0x2d6] = (int)local_8;
    param_1[0x2d7] = (int)local_4;
    FUN_0043ede0(&local_c);
  }
LAB_005878ce:
  if (((void *)param_1[0x2b6] != (void *)0x0) && (DAT_0104c6c8 == param_1)) {
    FUN_0084c8b0((void *)param_1[0x2b6],(int)param_1);
  }
  FUN_00577790(param_1);
  return;
}


//// FUNCTION FUN_00587900 @ 00587900 ////

void FUN_00587900(undefined4 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  *param_1 = (&PTR_DAT_00e53eb0)[-(int)uVar1];
  return;
}


//// FUNCTION FUN_00587a80 @ 00587a80 ////

void __fastcall FUN_00587a80(int *param_1)

{
  int iVar1;
  
  if (param_1[0x13a] == 1) {
    if (param_1[0x128] == 1) {
      iVar1 = 0x17;
    }
    else {
      iVar1 = 0x16;
    }
    FUN_00598f30(param_1,iVar1);
    FUN_004900f0((void *)param_1[0x2da],1,0.01);
    return;
  }
  FUN_00599e70(param_1);
  return;
}


//// FUNCTION FUN_00587ac0 @ 00587ac0 ////

void __fastcall FUN_00587ac0(int *param_1)

{
  void *this;
  undefined4 uVar1;
  float fVar2;
  
  if (param_1[0x13a] == 1) {
    fVar2 = 0.75;
    this = (void *)FUN_004725b0(param_1[0x326]);
    uVar1 = FUN_00566f60(this,fVar2);
    if ((char)uVar1 != '\0') {
      FUN_00598f30(param_1,0x1a);
      FUN_004900f0((void *)param_1[0x2da],3,0.01);
      return;
    }
  }
  FUN_00599e70(param_1);
  return;
}


//// FUNCTION FUN_00587b10 @ 00587b10 ////

void __fastcall FUN_00587b10(int *param_1)

{
  void *this;
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  
  if (param_1[0x13a] == 1) {
    fVar2 = 0.25;
    this = (void *)FUN_004725b0(param_1[0x326]);
    uVar1 = FUN_00566f00(this,fVar2);
    if ((char)uVar1 != '\0') {
      if (param_1[0x128] == 1) {
        iVar3 = 0x19;
      }
      else {
        iVar3 = 0x18;
      }
      FUN_00598f30(param_1,iVar3);
      FUN_004900f0((void *)param_1[0x2da],2,0.01);
      return;
    }
  }
  FUN_00599e70(param_1);
  return;
}


//// FUNCTION FUN_00587b80 @ 00587b80 ////

void FUN_00587b80(void)

{
  FUN_005861b0();
  FUN_0057b3d0();
  return;
}


//// FUNCTION FUN_00587bf0 @ 00587bf0 ////

void __fastcall FUN_00587bf0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xcb0) == 0) {
    piVar1 = FUN_00460cc0(param_1);
    (**(code **)(*(int *)(param_1 + 0xc9c) + 4))();
    *(int **)(param_1 + 0xcb0) = piVar1;
                    /* WARNING: Could not recover jumptable at 0x00587c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0xc9c))();
    return;
  }
  return;
}


//// FUNCTION FUN_00587c40 @ 00587c40 ////

uint __fastcall FUN_00587c40(int param_1)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc98) != 0) {
    iVar1 = FUN_00473120(*(int *)(param_1 + 0xc98));
    in_EAX = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_00473120(*(int *)(param_1 + 0xc98));
      uVar2 = FUN_004731a0(iVar1);
      return uVar2;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00587c70 @ 00587c70 ////

uint __fastcall FUN_00587c70(int param_1)

{
  uint in_EAX;
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xc98) != 0) {
    iVar1 = FUN_00473120(*(int *)(param_1 + 0xc98));
    in_EAX = 0;
    if (iVar1 != 0) {
      pvVar2 = (void *)FUN_00473120(*(int *)(param_1 + 0xc98));
      uVar3 = FUN_00475010(pvVar2);
      return uVar3;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00587ca0 @ 00587ca0 ////

void __thiscall FUN_00587ca0(void *this,float param_1)

{
  int iVar1;
  void *this_00;
  
  if (*(int *)((int)this + 0xc98) != 0) {
    iVar1 = FUN_00473120(*(int *)((int)this + 0xc98));
    if (iVar1 != 0) {
      this_00 = (void *)FUN_00473120(*(int *)((int)this + 0xc98));
      FUN_00475040(this_00,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00587ce0 @ 00587ce0 ////

void __thiscall FUN_00587ce0(void *this,float param_1)

{
  int iVar1;
  void *this_00;
  
  if (*(int *)((int)this + 0xc98) != 0) {
    iVar1 = FUN_00473120(*(int *)((int)this + 0xc98));
    if (iVar1 != 0) {
      this_00 = (void *)FUN_00473120(*(int *)((int)this + 0xc98));
      FUN_00475130(this_00,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00587d40 @ 00587d40 ////

void __thiscall FUN_00587d40(void *this,float *param_1)

{
  float fVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  float afStack_10 [2];
  undefined8 local_8;
  
  local_8 = FUN_00acd42c();
  FUN_00471b10(&local_8);
  iVar9 = 0;
  pTVar7 = &TM::CStarCosts::RTTI_Type_Descriptor;
  pTVar6 = &TM::CSalaryCosts::RTTI_Type_Descriptor;
  iVar5 = 0;
  piVar2 = (int *)(**(code **)(*(int *)this + 0x1d4))();
  piVar2 = (int *)FUN_00ace790(piVar2,iVar5,pTVar6,pTVar7,iVar9);
  if (piVar2 != (int *)0x0) {
    puVar3 = (ulonglong *)(**(code **)(*piVar2 + 0x68))();
    local_8 = *puVar3;
    FUN_00471b10(&local_8);
  }
  iVar5 = *(int *)((int)this + 0x934);
  iVar9 = GetPlayerStudio();
  if (iVar5 == iVar9) {
    uVar8 = (undefined4)local_8;
    uVar10 = local_8._4_4_;
    FUN_00471b10((longlong *)&stack0xffffffe0);
    puVar4 = (undefined4 *)FUN_00586000(afStack_10,CONCAT44(uVar10,uVar8));
    *(undefined4 *)((int)this + 0xd20) = *puVar4;
  }
  else {
    *(undefined4 *)((int)this + 0xd20) = *(undefined4 *)((int)this + 0xd28);
  }
  fVar1 = *(float *)((int)this + 0xd20);
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


//// FUNCTION FUN_00587e40 @ 00587e40 ////

void __thiscall FUN_00587e40(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 0x934);
  iVar3 = GetPlayerStudio();
  if (iVar2 == iVar3) {
    iVar3 = 0;
    for (iVar2 = *(int *)((int)this + 0xa50); iVar2 != (int)this + 0xa5c;
        iVar2 = *(int *)(iVar2 + 4)) {
      iVar3 = iVar3 + 1;
    }
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar1 = fVar1 * 0.16666667;
  }
  else {
    fVar1 = *(float *)((int)this + 0xd34);
  }
  *(float *)((int)this + 0xd14) = fVar1;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    *param_1 = fVar1;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_00587ee0 @ 00587ee0 ////

void __thiscall FUN_00587ee0(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  void *local_4;
  
  iVar2 = *(int *)((int)this + 0x934);
  local_4 = this;
  iVar3 = GetPlayerStudio();
  if (iVar2 == iVar3) {
    pfVar4 = (float *)(**(code **)(*(int *)this + 0x268))(&local_4);
    fVar1 = *pfVar4;
  }
  else {
    fVar1 = *(float *)((int)this + 0xd30);
  }
  *(float *)((int)this + 0xd24) = fVar1;
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


//// FUNCTION FUN_00587f60 @ 00587f60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00587f60(int *param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  if ((param_3 == '\0') || (iVar2 = FUN_004345e0(), iVar2 == 0)) {
    piVar3 = (int *)param_1[799];
    if ((int *)param_1[799] == (int *)0x0) {
      piVar3 = param_1;
    }
    iVar2 = FUN_0059bbd0(piVar3);
    this = (void *)FUN_004319b0(iVar2);
  }
  else {
    iVar2 = FUN_004345e0();
    iVar2 = FUN_00433ab0(iVar2);
    this = *(void **)(iVar2 + 0xc);
  }
  if (((this != (void *)0x0) && (bVar1 = FUN_009cea90(this,param_2), bVar1)) &&
     (param_1[0x128] == (uint)(param_2 == 5))) {
    switch(param_2) {
    case 3:
      return (float10)_DAT_00e53e48;
    case 4:
      return (float10)_DAT_00e53e4c;
    case 5:
      return (float10)DAT_00e53e44;
    case 0xc:
      return (float10)_DAT_00e53e50;
    }
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00588040 @ 00588040 ////

float * __thiscall FUN_00588040(void *this,float *param_1)

{
  if (*(void **)((int)this + 0xd10) != (void *)0x0) {
    FUN_004914d0(*(void **)((int)this + 0xd10),param_1);
    return param_1;
  }
  *param_1 = *(float *)((int)this + 0xd38);
  return param_1;
}


//// FUNCTION FUN_005882e0 @ 005882e0 ////

void __thiscall FUN_005882e0(void *this,float param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  void *this_00;
  float *pfVar5;
  int iVar6;
  void *pvVar7;
  float unaff_EDI;
  float10 fVar8;
  float10 fVar9;
  float *pfVar10;
  float local_c;
  float local_8;
  float *pfStack_4;
  
  pvVar7 = param_2;
  uVar4 = FUN_00449b70(param_2,&param_2);
  pfVar5 = &local_8;
  pfVar10 = &local_c;
  this_00 = (void *)(**(code **)(*(int *)this + 0x1e0))(pfVar10,pfVar5,uVar4);
  pfVar5 = (float *)FUN_0043b620(this_00,pfVar10,pfVar5);
  FUN_0043b710(pfVar5);
  pfVar5 = (float *)(**(code **)(*(int *)this + 0x238))(&local_c);
  fVar1 = *pfVar5;
  fVar8 = FUN_00449b80((int)pvVar7);
  pfVar5 = (float *)FUN_00587100(this,&local_c);
  fVar2 = *pfVar5;
  fVar9 = FUN_00449b90((int)pvVar7);
  param_1 = (float)((((float10)1.0 -
                     ABS((float10)(float)((float10)fVar1 - fVar8)) * (float10)param_1) +
                     ((float10)1.0 - ABS((float10)unaff_EDI) * (float10)param_1) +
                    ((float10)1.0 - ABS((float10)fVar2 - fVar9) * (float10)param_1)) *
                   (float10)0.33333334);
  iVar6 = AwardBonusManager_Get();
  if (iVar6 != 0) {
    iVar6 = 7;
    pvVar7 = (void *)AwardBonusManager_Get();
    cVar3 = AwardBonusManager_IsBonusActive(pvVar7,iVar6);
    if (cVar3 != '\0') {
      pvVar7 = (void *)0x0;
      iVar6 = 7;
      AwardBonusManager_Get();
      fVar8 = AwardBonus_GetValue(iVar6,pvVar7);
      param_1 = (float)(fVar8 * (float10)param_1);
    }
  }
  if (param_1 < 0.0) {
    *pfStack_4 = 0.0;
    return;
  }
  if (1.0 < param_1) {
    *pfStack_4 = 1.0;
    return;
  }
  *pfStack_4 = param_1;
  return;
}


//// FUNCTION FUN_00588440 @ 00588440 ////

void FUN_00588440(void)

{
  uint local_1a4 [51];
  uint local_d8 [51];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3296;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0104d038 == (void *)0x0) {
    ExceptionList = &local_c;
    DAT_0104d044 = FUN_00433eb0();
    DAT_0104d044[0x27] = DAT_0104d044[0x27] | 2;
    FUN_0097e2b0((int)DAT_0104d044);
    FUN_009d2990(local_1a4,"head_m_white_joe.hd",(char *)0x0,0.0);
    local_4 = 0;
    DAT_0104d038 = FUN_009d30f0((int)DAT_0104d044,0,1,local_1a4,'\0');
    local_4 = 0xffffffff;
    FUN_00434ae0((int)local_1a4);
  }
  if (DAT_0104d03c == (void *)0x0) {
    DAT_0104d040 = FUN_00433eb0();
    DAT_0104d040[0x27] = DAT_0104d040[0x27] | 2;
    FUN_0097e2b0((int)DAT_0104d040);
    FUN_009d2990(local_d8,"head_f_white_jane.hd",(char *)0x0,0.0);
    local_4 = 1;
    DAT_0104d03c = FUN_009d30f0((int)DAT_0104d040,1,1,local_d8,'\0');
    local_4 = 0xffffffff;
    FUN_00434ae0((int)local_d8);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00588830 @ 00588830 ////

void __thiscall FUN_00588830(void *this,int *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *this_00;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  FUN_004015d0((void *)((int)this + 0xa7c),(char *)param_1[0x289],param_1[0x28a]);
  FUN_004015d0((void *)((int)this + 0xa9c),(char *)param_1[0x291],param_1[0x292]);
  puVar5 = &stack0xfffffff0;
  (**(code **)(*param_1 + 0x1e4))();
  FUN_005873d0(this,puVar5);
  pfVar1 = (float *)(**(code **)(*param_1 + 0x210))(&stack0x00000000);
  FUN_005872b0(this,*pfVar1,0.0);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x214))(&stack0xfffffffc);
  *(undefined4 *)((int)this + 0xbc8) = *puVar2;
  *(int *)((int)this + 0xb3c) = param_1[0x2a4];
  *(int *)((int)this + 0x4a4) = param_1[0x129];
  piVar3 = (int *)FUN_00577370((int)param_1);
  this_00 = (void *)FUN_00577370((int)this);
  FUN_00442410(this_00,piVar3);
  uVar4 = FUN_0056f8b0((int)param_1);
  (**(code **)(*(int *)((int)this + 0xcdc) + 4))();
  *(undefined4 *)((int)this + 0xcf0) = uVar4;
  (*(code *)**(undefined4 **)((int)this + 0xcdc))();
  piVar3 = (int *)(*(int *)((int)this + 0xcf0) + 0x48);
  *piVar3 = *piVar3 + 1;
  return;
}


//// FUNCTION FUN_00588910 @ 00588910 ////

void __thiscall FUN_00588910(void *this,int *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *this_00;
  undefined4 uVar4;
  void **ppvVar5;
  void *pvStack_10;
  
  ppvVar5 = &pvStack_10;
  pvStack_10 = this;
  (**(code **)(*param_1 + 0x1e4))();
  FUN_005873d0(this,ppvVar5);
  pfVar1 = (float *)(**(code **)(*param_1 + 0x210))(&stack0x00000000);
  FUN_005872b0(this,*pfVar1,0.0);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x214))(&stack0xfffffffc);
  *(undefined4 *)((int)this + 0xbc8) = *puVar2;
  *(int *)((int)this + 0xb3c) = param_1[0x2a7];
  *(int *)((int)this + 0x4a4) = param_1[0x129];
  piVar3 = (int *)FUN_00577370((int)param_1);
  this_00 = (void *)FUN_00577370((int)this);
  FUN_00442410(this_00,piVar3);
  uVar4 = FUN_005a0bf0((int)param_1);
  (**(code **)(*(int *)((int)this + 0xcdc) + 4))();
  *(undefined4 *)((int)this + 0xcf0) = uVar4;
  (*(code *)**(undefined4 **)((int)this + 0xcdc))();
  piVar3 = (int *)(*(int *)((int)this + 0xcf0) + 0x48);
  *piVar3 = *piVar3 + 1;
  return;
}


//// FUNCTION FUN_005889c0 @ 005889c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005889c0(void *this,int param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb32eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0xa4);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00420b80(puVar3);
  }
  puVar3[0x23] = *(undefined4 *)(param_1 + 0x8c);
  puVar3[0x24] = *(undefined4 *)(param_1 + 0x90);
  puVar3[0x25] = *(undefined4 *)(param_1 + 0x94);
  puVar3[0x26] = *(undefined4 *)(param_1 + 0x98);
  puVar3[0x27] = *(undefined4 *)(param_1 + 0x9c);
  local_4 = 0xffffffff;
  puVar3[0x28] = *(undefined4 *)(param_1 + 0xa0);
  iVar5 = 0;
  do {
    if (iVar5 < 4) {
      fVar2 = (_DAT_00e53e2c - _DAT_00e53e28) * (float)puVar3[iVar5 + 0x23] + _DAT_00e53e28;
      if (0.0 <= fVar2) {
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
      }
      else {
        fVar2 = 0.0;
      }
      puVar3[iVar5 + 0x23] = fVar2;
      if (_DAT_00e53e2c < (float)puVar3[iVar5 + 0x23]) {
        if (0.0 <= _DAT_00e53e2c) {
          if (_DAT_00e53e2c <= 1.0) {
            puVar3[iVar5 + 0x23] = _DAT_00e53e2c;
          }
          else {
            puVar3[iVar5 + 0x23] = 0x3f800000;
          }
        }
        else {
          puVar3[iVar5 + 0x23] = 0;
        }
      }
    }
    else if (iVar5 == 4) {
      fVar2 = _DAT_00e53e34 - (_DAT_00e53e34 - _DAT_00e53e30) * (float)puVar3[0x27];
      if (0.0 <= fVar2) {
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
      }
      else {
        fVar2 = 0.0;
      }
      puVar3[0x27] = fVar2;
      if ((float)puVar3[0x27] < _DAT_00e53e30) {
        if (0.0 <= _DAT_00e53e30) {
          if (_DAT_00e53e30 <= 1.0) {
            puVar3[0x27] = _DAT_00e53e30;
          }
          else {
            puVar3[0x27] = 0x3f800000;
          }
        }
        else {
          puVar3[0x27] = 0;
        }
      }
    }
    else if (iVar5 == 5) {
      fVar2 = (1.0 - _DAT_00e53e30) - (_DAT_00e53e34 - _DAT_00e53e30) * (float)puVar3[0x28];
      if (0.0 <= fVar2) {
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
      }
      else {
        fVar2 = 0.0;
      }
      puVar3[0x28] = fVar2;
      fVar2 = 1.0 - _DAT_00e53e34;
      if ((float)puVar3[0x28] < fVar2) {
        if (0.0 <= fVar2) {
          if (1.0 < fVar2) {
            fVar2 = 1.0;
          }
          puVar3[0x28] = fVar2;
        }
        else {
          puVar3[0x28] = 0;
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  if ((float)puVar3[0x27] <= (float)puVar3[0x28]) {
    if ((float)puVar3[0x27] == (float)puVar3[0x28]) {
      fVar2 = (float)puVar3[0x27] - 0.01;
      if (0.0 <= fVar2) {
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
      }
      else {
        fVar2 = 0.0;
      }
      puVar3[0x27] = fVar2;
    }
  }
  else {
    uVar7 = puVar3[0x27];
    puVar3[0x27] = puVar3[0x28];
    puVar3[0x28] = uVar7;
  }
  FUN_00406f40(*(void **)((int)this + 0xcc8),0,puVar3[0x23]);
  FUN_00406f40(*(void **)((int)this + 0xcc8),1,puVar3[0x24]);
  uVar7 = puVar3[0x25];
  pvVar4 = (void *)FUN_00473120(*(int *)((int)this + 0xc98));
  FUN_00472710(pvVar4,uVar7);
  uVar7 = puVar3[0x26];
  pvVar4 = (void *)FUN_00473120(*(int *)((int)this + 0xc98));
  FUN_00472730(pvVar4,uVar7);
  FUN_004725c0(*(void **)((int)this + 0xc98),puVar3[0x27]);
  FUN_004725d0(*(void **)((int)this + 0xc98),puVar3[0x28]);
  pvVar4 = *(void **)((int)this + 0xcc8);
  fVar6 = FUN_00990e30(0.0,0.001);
  FUN_004072b0(pvVar4,0,(float)fVar6);
  pvVar4 = *(void **)((int)this + 0xcc8);
  fVar6 = FUN_00990e30(0.0,0.001);
  FUN_004072b0(pvVar4,1,(float)fVar6);
  piVar1 = puVar3 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar3)();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00588e40 @ 00588e40 ////

void __thiscall FUN_00588e40(void *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  float *pfVar3;
  undefined4 *puVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3308;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &pvStack_c;
  *(int *)((int)this + 0xcf4) = param_1;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"facility_stage",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4 = 0;
  pvVar2 = (void *)FUN_00845f70(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (pvVar2 != (void *)0x0) {
    (**(code **)(*(int *)this + 0x120))();
    puVar4 = *(undefined4 **)((int)this + 0xb80);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)((int)this + 0xb6c) + 4))();
      *(undefined4 *)((int)this + 0xb80) = 0;
      (*(code *)**(undefined4 **)((int)this + 0xb6c))();
    }
    pvVar2 = (void *)FUN_00845710(pvVar2,0);
    FUN_0084d530(pvVar2,this);
    FUN_0059c810((int)this);
    FUN_0057b4b0(this,(int)pvVar2);
    pfVar3 = (float *)FUN_0043b520(&stack0x00000000,0.2);
    puVar4 = (undefined4 *)FUN_0043b600(&DAT_00e4fa4c,(float *)&stack0xffffffcc,pfVar3);
    *(undefined4 *)((int)this + 0xac0) = *puVar4;
    ExceptionList = pvStack_10;
    return;
  }
  (**(code **)(*(int *)this + 0x1a8))(0);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00588f90 @ 00588f90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00588f90(int param_1)

{
  float10 fVar1;
  void *pvVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float local_18;
  float local_10 [4];
  
  fVar4 = (float10)FUN_00ace9b0();
  local_10[0] = 0.0;
  fVar1 = (float10)_DAT_00e53e40;
  local_10[1] = 0.0;
  local_10[2] = 0.0;
  local_10[3] = 0.0;
  local_18 = 0.0;
  iVar3 = 0;
  do {
    fVar5 = FUN_00990dc0(1.0);
    if ((float10)0.0 <= fVar5) {
      if ((float10)1.0 < fVar5) {
        fVar5 = (float10)1.0;
      }
    }
    else {
      fVar5 = (float10)0.0;
    }
    local_10[iVar3] = (float)fVar5;
    iVar3 = iVar3 + 1;
    local_18 = (float)(fVar5 + (float10)local_18);
  } while (iVar3 < 4);
  iVar3 = 0;
  do {
    fVar6 = ((float)(fVar4 * fVar1) / local_18) * local_10[iVar3];
    if (0.0 <= fVar6) {
      if (1.0 < fVar6) {
        fVar6 = 1.0;
      }
    }
    else {
      fVar6 = 0.0;
    }
    local_10[iVar3] = fVar6;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  fVar6 = local_10[0];
  pvVar2 = (void *)FUN_00473120(*(int *)(param_1 + 0xc98));
  FUN_00473330(pvVar2,fVar6);
  fVar6 = local_10[1];
  pvVar2 = (void *)FUN_00473120(*(int *)(param_1 + 0xc98));
  FUN_004732f0(pvVar2,fVar6);
  FUN_004072b0(*(void **)(param_1 + 0xcc8),1,local_10[2]);
  FUN_004072b0(*(void **)(param_1 + 0xcc8),0,local_10[3]);
  *(undefined4 *)(param_1 + 0xcf4) = 0;
  return;
}


//// FUNCTION FUN_005890e0 @ 005890e0 ////

undefined4 __fastcall FUN_005890e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd10);
}


//// FUNCTION FUN_005890f0 @ 005890f0 ////

void __fastcall FUN_005890f0(int *param_1)

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
  puStack_8 = &LAB_00cb3328;
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


//// FUNCTION FUN_005891c0 @ 005891c0 ////

float10 __fastcall FUN_005891c0(void *param_1)

{
  float *pfVar1;
  void *local_4;
  
  if (*(float *)((int)param_1 + 0xd14) < 0.0) {
    local_4 = param_1;
    pfVar1 = (float *)FUN_00587e40(param_1,(float *)&local_4);
    return (float10)*pfVar1;
  }
  return (float10)*(float *)((int)param_1 + 0xd14);
}


//// FUNCTION FUN_005891f0 @ 005891f0 ////

float10 __fastcall FUN_005891f0(float param_1)

{
  float local_4;
  
  if (*(void **)((int)param_1 + 0xd10) != (void *)0x0) {
    local_4 = param_1;
    FUN_004914d0(*(void **)((int)param_1 + 0xd10),&local_4);
    return (float10)local_4;
  }
  return (float10)*(float *)((int)param_1 + 0xd38);
}


//// FUNCTION FUN_00589220 @ 00589220 ////

float10 __fastcall FUN_00589220(void *param_1)

{
  float *pfVar1;
  void *local_4;
  
  if (*(float *)((int)param_1 + 0xd20) < 0.0) {
    local_4 = param_1;
    pfVar1 = (float *)FUN_00587d40(param_1,(float *)&local_4);
    return (float10)*pfVar1;
  }
  return (float10)*(float *)((int)param_1 + 0xd20);
}


//// FUNCTION FUN_00589250 @ 00589250 ////

float10 __fastcall FUN_00589250(void *param_1)

{
  float *pfVar1;
  void *local_4;
  
  if (*(float *)((int)param_1 + 0xd24) < 0.0) {
    local_4 = param_1;
    pfVar1 = (float *)FUN_00587ee0(param_1,(float *)&local_4);
    return (float10)*pfVar1;
  }
  return (float10)*(float *)((int)param_1 + 0xd24);
}


//// FUNCTION FUN_00589280 @ 00589280 ////

void __thiscall FUN_00589280(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0xd3c) + 4))();
  *(undefined4 *)((int)this + 0xd50) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xd3c))();
  return;
}


//// FUNCTION FUN_005892b0 @ 005892b0 ////

undefined4 __fastcall FUN_005892b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd50);
}


//// FUNCTION FUN_005892c0 @ 005892c0 ////

void __fastcall FUN_005892c0(int param_1)

{
  FUN_00526fa0(*(int *)(param_1 + 0x85c));
  return;
}


//// FUNCTION FUN_00589320 @ 00589320 ////

int * __thiscall FUN_00589320(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    puVar2 = *(undefined4 **)this;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  *(int *)this = param_1;
  return this;
}


//// FUNCTION FUN_005893d0 @ 005893d0 ////

void __fastcall FUN_005893d0(int param_1)

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


//// FUNCTION FUN_00589400 @ 00589400 ////

void __fastcall FUN_00589400(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d26fd0;
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


//// FUNCTION FUN_005894e0 @ 005894e0 ////

void __fastcall FUN_005894e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d26fe0;
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


//// FUNCTION FUN_00589580 @ 00589580 ////

void __fastcall FUN_00589580(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d26ff0;
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


//// FUNCTION FUN_00589660 @ 00589660 ////

void __fastcall FUN_00589660(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d27000;
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


//// FUNCTION FUN_00589700 @ 00589700 ////

void __fastcall FUN_00589700(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d27010;
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


//// FUNCTION FUN_00589820 @ 00589820 ////

void __fastcall FUN_00589820(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d27020;
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


//// FUNCTION FUN_005898a0 @ 005898a0 ////

undefined4 * __thiscall FUN_005898a0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00589920 @ 00589920 ////

undefined4 * __thiscall FUN_00589920(void *this,undefined4 *param_1)

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
LAB_00589964:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00589969;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00589964;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00589969:
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


//// FUNCTION FUN_005899f0 @ 005899f0 ////

int * __fastcall FUN_005899f0(int *param_1)

{
  FUN_00586dd0(param_1);
  return param_1;
}


//// FUNCTION FUN_00589a40 @ 00589a40 ////

undefined4 * __thiscall FUN_00589a40(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00589aa0 @ 00589aa0 ////

void __cdecl FUN_00589aa0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00589b50 @ 00589b50 ////

undefined4 * __thiscall FUN_00589b50(void *this,byte param_1)

{
  FUN_00589820(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00589b90 @ 00589b90 ////

undefined4 * __thiscall FUN_00589b90(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0xac),*(uint *)((int)this + 0xb0));
  return param_1;
}


//// FUNCTION FUN_00589bd0 @ 00589bd0 ////

undefined4 * __thiscall FUN_00589bd0(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0xcc),*(uint *)((int)this + 0xd0));
  return param_1;
}


//// FUNCTION FUN_00589c10 @ 00589c10 ////

void __fastcall FUN_00589c10(int *param_1)

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
  puStack_8 = &LAB_00cb3348;
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


//// FUNCTION CStar_RegisterSaveFields @ 00589ce0 ////

void __fastcall CStar_RegisterSaveFields(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *local_34;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb34c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &pvStack_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xea;
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
  uVar3 = FUN_0098b490("Ability");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa9c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xeb;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("Drunkenness");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xb24));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xec;
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
  uVar3 = FUN_0098b490("Promiscuity");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xb28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xed;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    pcVar2 = (char *)FUN_00ace33d(0xe52344);
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
  uVar3 = FUN_0098b490("Publicity");
  if ((char)uVar3 != '\0') {
    FUN_00495030((undefined4 *)(param_1 + 0xb58));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xee;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar2 = (char *)FUN_00ace33d(0xe52344);
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
  uVar3 = FUN_0098b490("Performances");
  if ((char)uVar3 != '\0') {
    FUN_00495030((undefined4 *)(param_1 + 0xb64));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xef;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    pcVar2 = (char *)FUN_00ace33d(0xe52344);
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
  uVar3 = FUN_0098b490("Boredom");
  if ((char)uVar3 != '\0') {
    FUN_00495030((undefined4 *)(param_1 + 0xb70));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf0;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("Health");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xb48));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf1;
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
  uVar3 = FUN_0098b490("Cuteness");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xb4c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf2;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x9d0));
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
  uVar3 = FUN_0098b490("MyPeople");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x9d0);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf3;
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
  uVar3 = FUN_0098b490("ApparentAgeModifier");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x9cc),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf4;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
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
  uVar3 = FUN_0098b490("Head[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0xa04));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf5;
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
  uVar3 = FUN_0098b490("Head[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0xa24));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf6;
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
  uVar3 = FUN_0098b490("HeadMix");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xa44));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf7;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xd;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xaf4));
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
  uVar3 = FUN_0098b490("PRelationships");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xaf4));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf8;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
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
  uVar3 = FUN_0098b490("BioText");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x9ac));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xf9;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
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
  uVar3 = FUN_0098b490("WanderOff");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xa48),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xfa;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x10;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xa4c));
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
  uVar3 = FUN_0098b490("PTrailer");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xa4c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xfb;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x11;
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
  uVar3 = FUN_0098b490("PhotographersActiveCount");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb84),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xfc;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x12;
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
  uVar3 = FUN_0098b490("RelationshipMod");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xaa0),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xfd;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x13;
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
  uVar3 = FUN_0098b490("(int&)(LastStarTask)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xad8),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xfe;
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
  uVar3 = FUN_0098b490("SexAppeal");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xb50));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xff;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x15;
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
  uVar3 = FUN_0098b490("Weight");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xac4),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x100;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x16;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xa64));
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
  uVar3 = FUN_0098b490("Gardens");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0xa64);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x101;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x17;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xc24));
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
    FUN_00990970((int *)(param_1 + 0xc24));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x102;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x18;
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
  uVar3 = FUN_0098b490("StarRatingAwards");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xc5c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x103;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x19;
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
    FUN_00566d60((undefined4 *)(param_1 + 0xc58));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x104;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1a;
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
  uVar3 = FUN_0098b490("LastCheckAwards");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xc60),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x105;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1b;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xc64));
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
  uVar3 = FUN_0098b490("PThresholds");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xc64));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x106;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1c;
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
  uVar3 = FUN_0098b490("PreviousEmployersHappiness");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0xc7c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x107;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1d;
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
  uVar3 = FUN_0098b490("HadStarTask");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xc80),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x108;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1e;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xc84));
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
  uVar3 = FUN_0098b490("PPressBar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xc84));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x109;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1f;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xc0c));
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
  uVar3 = FUN_0098b490("PMood");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xc0c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x10a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x20;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xc3c));
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
  uVar3 = FUN_0098b490("PAddictions");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xc3c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x10b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x21;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xcc4));
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
  uVar3 = FUN_0098b490("PPreviousEmployer");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xcc4));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x10c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x22;
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
  uVar3 = FUN_0098b490("RivalStarRatingDifference");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xcdc),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x10d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x23;
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
  uVar3 = FUN_0098b490("LastAIUpdate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xce0),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x10e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x24;
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
  uVar3 = FUN_0098b490("LastDetoxDay");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb30),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x10f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x25;
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
  uVar3 = FUN_0098b490("LastHealthDay");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb2c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x110;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x26;
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
  uVar3 = FUN_0098b490("LastSRRelationships");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xca4),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x111;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x27;
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
  uVar3 = FUN_0098b490("RehabCount");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb34),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x112;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x28;
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
  uVar3 = FUN_0098b490("ImplantCount");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb40),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x113;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x29;
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
  uVar3 = FUN_0098b490("NipTuckCount");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb3c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x114;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x2a;
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
  uVar3 = FUN_0098b490("LipoCount");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xb38),4);
  }
  local_34 = (undefined4 *)(param_1 + 0xcb0);
  local_30 = 5;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
      pcVar2 = (char *)&DAT_010581d8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar2 = pcVar2 + 4;
      }
      local_2c = local_20;
      *pcVar2 = *pcVar5;
      DAT_010581d4 = 0x115;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"SLVAR CALLED: ",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 0x2b;
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
    uVar3 = FUN_0098b490("RivalSRComponents[x]");
    if ((char)uVar3 != '\0') {
      FUN_00566d60(local_34);
    }
    local_34 = local_34 + 1;
    local_30 = local_30 + -1;
    if (local_30 == 0) {
      FUN_005823f0(param_1);
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_0058c370 @ 0058c370 ////

void __fastcall FUN_0058c370(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  void *this;
  void *pvVar4;
  undefined4 uVar5;
  
  if (param_1[0x233] == 0) {
    iVar3 = FUN_0059bbd0(param_1);
    FUN_0059bb60(param_1,iVar3);
  }
  if (((((param_1[0x1bf] != 0) && (param_1[0x15a] != 0)) &&
       (this = (void *)FUN_0059bb90((int)param_1), this != (void *)0x0)) &&
      ((pvVar4 = (void *)FUN_0059c6e0(param_1,'\0'), this != pvVar4 &&
       (uVar5 = FUN_00430dd0(this,pvVar4), (char)uVar5 == '\0')))) &&
     ((cVar1 = FUN_00430e40((int)pvVar4), cVar1 == '\0' &&
      (cVar1 = FUN_00430e40((int)this), cVar1 == '\0')))) {
    iVar3 = FUN_004319b0((int)this);
    if ((*(void **)(param_1[0x1bf] + 0x2c) == (void *)0x0) ||
       (bVar2 = FUN_00a130c0(*(void **)(param_1[0x1bf] + 0x2c),iVar3), !bVar2)) {
      FUN_009d1bd0((void *)param_1[0x1bf],iVar3);
    }
  }
  return;
}


//// FUNCTION FUN_0058c410 @ 0058c410 ////

void __fastcall FUN_0058c410(int param_1)

{
  size_t sVar1;
  wchar_t *pwVar2;
  undefined2 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined2 local_14 [10];
  
  if (0.8 < *(float *)(param_1 + 0xb9c)) {
    local_20 = local_14;
    local_14[0] = 0;
    local_1c = 0;
    local_18 = 10;
    sVar1 = FUN_00ace02d(L"<phrase key=drunkardname>");
    FUN_0040cae0(&local_20,L"<phrase key=drunkardname>",sVar1);
    FUN_0040cae0(&local_20,*(wchar_t **)(param_1 + 0x4c8),*(size_t *)(param_1 + 0x4cc));
    sVar1 = FUN_00ace02d(L"</phrase>");
    FUN_0040cae0(&local_20,L"</phrase>",sVar1);
    if (*(int *)(param_1 + 0x4a0) == 0) {
      sVar1 = FUN_00ace02d(L"<translate exclude=GENDER_FEMALE>");
      pwVar2 = L"<translate exclude=GENDER_FEMALE>";
    }
    else {
      sVar1 = FUN_00ace02d(L"<translate exclude=GENDER_MALE>");
      pwVar2 = L"<translate exclude=GENDER_MALE>";
    }
    FUN_0040cae0(&local_20,pwVar2,sVar1);
    sVar1 = FUN_00ace02d(L"thought_advice_drunk</translate>");
    FUN_0040cae0(&local_20,L"thought_advice_drunk</translate>",sVar1);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  return;
}


//// FUNCTION FUN_0058c510 @ 0058c510 ////

/* WARNING: Removing unreachable block (ram,0x0058c607) */

undefined4 * __thiscall FUN_0058c510(void *this,undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *_Dest;
  bool bVar7;
  byte local_14 [4];
  undefined1 local_10;
  
  if ((*(int *)((int)this + 0x8cc) != 0) &&
     (iVar3 = FUN_004d6c00(*(int *)((int)this + 0x8cc)), iVar3 != 0)) {
    iVar3 = FUN_004d6c00(*(int *)((int)this + 0x8cc));
    iVar3 = FUN_004df220(iVar3);
    if (iVar3 != 0) {
      iVar3 = FUN_004d6c00(*(int *)((int)this + 0x8cc));
      iVar3 = FUN_004df220(iVar3);
      iVar4 = FUN_00529ef0(iVar3);
      for (iVar3 = *(int *)(iVar4 + 0xd0); iVar3 != iVar4 + 0xdc; iVar3 = *(int *)(iVar3 + 4)) {
        iVar2 = *(int *)(iVar3 + 8);
        _Dest = local_14;
        local_14[0] = 0;
        _strncpy((char *)_Dest,"gawp",4);
        local_10 = 0;
        pbVar5 = *(byte **)(iVar2 + 0x180);
        do {
          bVar1 = *pbVar5;
          bVar7 = bVar1 < *_Dest;
          if (bVar1 != *_Dest) {
LAB_0058c5f4:
            iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_0058c5f9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar7 = bVar1 < _Dest[1];
          if (bVar1 != _Dest[1]) goto LAB_0058c5f4;
          pbVar5 = pbVar5 + 2;
          _Dest = _Dest + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_0058c5f9:
        if (iVar6 == 0) {
          *param_1 = *(undefined4 *)(iVar2 + 0x218);
          param_1[1] = *(undefined4 *)(iVar2 + 0x21c);
          param_1[2] = *(undefined4 *)(iVar2 + 0x220);
          return param_1;
        }
      }
    }
  }
  (**(code **)(*(int *)this + 0x34))(param_1);
  return param_1;
}


//// FUNCTION FUN_0058c670 @ 0058c670 ////

void __fastcall FUN_0058c670(char *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char local_58 [4];
  undefined4 uStack_54;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3515;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  thunk_FUN_0059b650((int)param_1);
  pvVar1 = operator_new(0x100);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_008bc120(pvVar1,param_1);
  }
  local_4 = 0xffffffff;
  FUN_0059a040(param_1,(int)puVar2);
  pvVar1 = operator_new(0x114);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcVar3 = local_58;
    local_58[0] = '\0';
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff9c,"beimpressed",0xb);
    puVar2 = FUN_008ae6d0(pvVar1,param_1,pcVar3,uVar4,uVar5);
  }
  local_4 = 0xffffffff;
  FUN_0059a040(param_1,(int)puVar2);
  pvVar1 = operator_new(0x114);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_008ae260(pvVar1,param_1);
  }
  local_4 = 0xffffffff;
  FUN_0059a040(param_1,(int)puVar2);
  pvVar1 = operator_new(0x114);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    uStack_54 = 0x58c7ad;
    _strncpy(local_2c,"takephoto",9);
    local_28 = 9;
    local_2c[9] = '\0';
    local_4 = CONCAT31(local_4._1_3_,4);
    puVar2 = FUN_008b9d20(pvVar1,param_1,&local_2c);
  }
  local_4 = 5;
  FUN_0059a040(param_1,(int)puVar2);
  if ((pvVar1 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0058c820 @ 0058c820 ////

undefined4 * __cdecl FUN_0058c820(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  char *local_104;
  undefined4 local_100;
  uint local_fc;
  char local_f8 [20];
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb356b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == 2) {
    ExceptionList = &local_c;
    iVar1 = FUN_00990d30(0,2);
    param_2 = (uint)(iVar1 == 0);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"heads/heads",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4 = 1;
  FUN_0055c540(local_e4,&local_104);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_11c = 0x14;
  local_120 = 0;
  local_118[0] = '\0';
  if (param_2 == 0) {
    local_124 = local_118;
    _strncpy(local_118,"male",4);
    local_120 = 4;
    local_124[4] = '\0';
    local_4._0_1_ = 4;
    uVar2 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    if ((char)uVar2 == '\0') {
      *param_1 = param_1 + 3;
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      FUN_004015d0(param_1,"head_m_white_joe.hd",0x13);
      goto LAB_0058ca23;
    }
  }
  else {
    local_124 = local_118;
    _strncpy(local_118,"female",6);
    local_120 = 6;
    local_124[6] = '\0';
    local_4._0_1_ = 5;
    uVar2 = FUN_00558a50(local_e4,&local_124,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124);
    }
    if ((char)uVar2 == '\0') {
      *param_1 = param_1 + 3;
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      FUN_004015d0(param_1,"head_f_white_jane.hd",0x14);
      goto LAB_0058ca23;
    }
  }
  FUN_00558120(local_e4,7);
  FUN_00558de0(local_e4,param_1);
LAB_0058ca23:
  local_4 = local_4 & 0xffffff00;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0058cac0 @ 0058cac0 ////

void __fastcall FUN_0058cac0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x29]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x27]);
  }
  if (0x14 < (uint)param_1[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0058cb00 @ 0058cb00 ////

void __thiscall FUN_0058cb00(void *this,char param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  void *pvVar10;
  char cStack_e5;
  undefined1 auStack_d8 [204];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb35a4;
  pvStack_c = ExceptionList;
  if ((*(char *)((int)this + 0xc80) != '\0') || (ExceptionList = &pvStack_c, param_1 != '\0')) {
    ExceptionList = &pvStack_c;
    *(undefined4 *)((int)this + 0xe0) = 0;
    if (*(int *)((int)this + 0x4a0) == 2) {
      uVar4 = FUN_00990ce0();
      *(uint *)((int)this + 0x4a0) = ~uVar4 & 1;
    }
    if (*(void **)((int)this + 0x6fc) != (void *)0x0) {
      FUN_009d2c50(*(void **)((int)this + 0x6fc),(void *)0x0,'\x01',-1.0,-1.0);
      if (*(undefined4 **)((int)this + 0x6fc) != (undefined4 *)0x0) {
        FUN_009d2b50(*(undefined4 **)((int)this + 0x6fc));
        *(undefined4 *)((int)this + 0x6fc) = 0;
      }
    }
    if (*(int **)((int)this + 0xc7c) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0xc7c) + 0x224))(0);
    }
    if ((*(int *)((int)this + 0xc7c) == 0) ||
       ((iVar7 = *(int *)(*(int *)((int)this + 0xc7c) + 0x4c4), iVar7 != 1 && (iVar7 != 2)))) {
      FUN_00588440();
      if (*(int *)((int)this + 0xa80) == 0) {
        FUN_00982950(*(void **)((int)this + 0x11c),0);
        if (*(undefined4 **)((int)this + 0x11c) != (undefined4 *)0x0) {
          FUN_0040a5b0(*(undefined4 **)((int)this + 0x11c));
          *(undefined4 *)((int)this + 0x11c) = 0;
        }
        if (*(int *)((int)this + 0x4a0) == 0) {
          *(undefined4 *)((int)this + 0x6fc) = DAT_0104d038;
          *(undefined4 *)((int)this + 0x11c) = DAT_0104d044;
          DAT_0104d044 = 0;
          DAT_0104d038 = 0;
        }
        else {
          *(undefined4 *)((int)this + 0x6fc) = DAT_0104d03c;
          *(undefined4 *)((int)this + 0x11c) = DAT_0104d040;
          DAT_0104d040 = 0;
          DAT_0104d03c = 0;
        }
      }
      else {
        puVar9 = FUN_009d2990(auStack_d8,*(char **)((int)this + 0xa7c),*(char **)((int)this + 0xa9c)
                              ,*(float *)((int)this + 0xabc));
        uStack_4 = 1;
        pvVar10 = FUN_009d30f0(*(int *)((int)this + 0x11c),(uint)(*(int *)((int)this + 0x4a0) != 0),
                               1,puVar9,'\0');
        *(void **)((int)this + 0x6fc) = pvVar10;
        uStack_4 = 0xffffffff;
        FUN_00434ae0((int)auStack_d8);
      }
      (**(code **)(*(int *)this + 300))();
    }
    else {
      if (*(undefined4 **)((int)this + 0x11c) != (undefined4 *)0x0) {
        FUN_0040a5b0(*(undefined4 **)((int)this + 0x11c));
        *(undefined4 *)((int)this + 0x11c) = 0;
      }
      puVar5 = (undefined4 *)FUN_0059c6e0(*(void **)((int)this + 0xc7c),'\0');
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[0x12] = puVar5[0x12] + 1;
      }
      uStack_4 = 0;
      uVar6 = (**(code **)(**(int **)((int)this + 0xc7c) + 0xf0))();
      *(undefined4 *)((int)this + 0x6fc) = uVar6;
      iVar7 = FUN_00ace790(*(int **)((int)this + 0xc7c),0,&TM::CStaff::RTTI_Type_Descriptor,
                           &TM::CWannabe::RTTI_Type_Descriptor,0);
      if (iVar7 != 0) {
        FUN_004015d0((void *)((int)this + 0xa7c),*(char **)(iVar7 + 0xa34),*(uint *)(iVar7 + 0xa38))
        ;
        FUN_004015d0((void *)((int)this + 0xa9c),*(char **)(iVar7 + 0xa54),*(uint *)(iVar7 + 0xa58))
        ;
        *(undefined4 *)((int)this + 0xabc) = *(undefined4 *)(iVar7 + 0xa74);
        pfVar8 = (float *)(**(code **)(*(int *)this + 0x210))();
        FUN_005872b0(this,*pfVar8,0.0);
      }
      FUN_00598b90(*(void **)((int)this + 0xc7c),0);
      *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(*(int *)((int)this + 0xc7c) + 0x11c);
      *(undefined4 *)(*(int *)((int)this + 0xc7c) + 0x11c) = 0;
      (**(code **)(*(int *)this + 0x128))(puVar5);
      FUN_0059bb60(this,(int)puVar5);
      FUN_0059bba0(this,(int)puVar5);
      uStack_4 = 0xffffffff;
      if (puVar5 != (undefined4 *)0x0) {
        piVar2 = puVar5 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar5)();
        }
      }
    }
    if (*(void **)((int)this + 0xc7c) != (void *)0x0) {
      FUN_00599050(*(void **)((int)this + 0xc7c),1);
      *(undefined1 *)(*(int *)((int)this + 0xc7c) + 100) = 0;
      (**(code **)(*(int *)this + 0x120))();
      piVar2 = *(int **)(*(int *)((int)this + 0xc7c) + 0x198);
      uVar4 = *(uint *)(*(int *)((int)this + 0xc7c) + 0x1dc);
      cStack_e5 = '\0';
      if (piVar2 != (int *)0x0) {
        cStack_e5 = (**(code **)(*piVar2 + 0x54))();
      }
      if (DAT_0104c6c8 == *(int *)((int)this + 0xc7c)) {
        (*(code *)DAT_0104c6b4[1])();
        DAT_0104c6c8 = 0;
        (*(code *)*DAT_0104c6b4)();
        (*(code *)DAT_0104d510[1])();
        DAT_0104d524 = 0;
        (*(code *)*DAT_0104d510)();
        FUN_0053c900((int)this);
      }
      puVar5 = *(undefined4 **)((int)this + 0xc7c);
      if (puVar5 != (undefined4 *)0x0) {
        piVar1 = puVar5 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar5)();
        }
        (**(code **)(*(int *)((int)this + 0xc68) + 4))();
        *(undefined4 *)((int)this + 0xc7c) = 0;
        (*(code *)**(undefined4 **)((int)this + 0xc68))();
      }
      if (piVar2 != (int *)0x0) {
        if (cStack_e5 != '\0') {
          TMRoom_RegisterOccupant(piVar2,this);
        }
        pvVar10 = (void *)FUN_0093c970(piVar2);
        if (pvVar10 != (void *)0x0) {
          FUN_00945330(pvVar10,this,uVar4);
        }
      }
    }
    FUN_00598f30(this,0x29);
    *(undefined1 *)((int)this + 0xc80) = 0;
  }
  bVar3 = FUN_0059c5e0((int)this);
  if ((!bVar3) && (*(int *)((int)this + 0x1f8) != 2)) {
    pvVar10 = operator_new(0x128);
    uStack_4 = 2;
    if (pvVar10 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = DesirePlay_Constructor(pvVar10,(int)this);
    }
    uStack_4 = 0xffffffff;
    TMCharacter_AddResidentDesire(this,(int)puVar5);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0058cf90 @ 0058cf90 ////

void __fastcall FUN_0058cf90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d16954;
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


//// FUNCTION FUN_0058cfe0 @ 0058cfe0 ////

undefined4 __fastcall FUN_0058cfe0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb35b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int **)(param_1 + 0xad8) != (int *)0x0) {
    ExceptionList = &pvStack_c;
    uVar1 = (**(code **)(**(int **)(param_1 + 0xad8) + 0xc4))();
    if ((char)uVar1 == '\0') {
      ExceptionList = pvStack_c;
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"facility_production",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  uStack_4 = 0;
  piVar2 = (int *)FUN_00845f70(&local_2c);
  uStack_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (piVar2 != (int *)0x0) {
    local_24 = (**(code **)(*piVar2 + 0xc4))();
    if ((char)local_24 == '\0') {
      ExceptionList = pvStack_c;
      return CONCAT31((int3)(local_24 >> 8),1);
    }
  }
  ExceptionList = pvStack_c;
  return local_24 & 0xffffff00;
}


//// FUNCTION FUN_0058d0d0 @ 0058d0d0 ////

int __cdecl FUN_0058d0d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = DAT_0104d05c;
  if (DAT_0104d05c != &DAT_0104d068) {
    do {
      iVar2 = FUN_005773c0(puVar4[2]);
      if (iVar2 == param_1) {
        iVar3 = iVar3 + 1;
      }
      puVar1 = puVar4 + 1;
      puVar4 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d068);
  }
  return iVar3;
}


//// FUNCTION FUN_0058d110 @ 0058d110 ////

void __thiscall FUN_0058d110(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  float10 fVar9;
  undefined1 *puVar10;
  float fVar11;
  uint *puStack_1d4;
  char *local_1d0;
  uint local_1cc;
  uint local_1c8;
  char local_1c4 [16];
  undefined4 *puStack_1b4;
  uint uStack_1b0;
  undefined1 *local_1ac;
  char *pcStack_1a8;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  char acStack_19c [20];
  void *pvStack_188;
  void *local_184;
  uint uStack_180;
  uint local_17c;
  void *pvStack_168;
  int iStack_164;
  uint uStack_160;
  void *apvStack_148 [2];
  uint uStack_140;
  void *apvStack_128 [2];
  uint uStack_120;
  void *apvStack_108 [2];
  uint uStack_100;
  undefined4 uStack_e8;
  undefined4 local_e4 [53];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb36b7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0057a160(this,param_1);
  FUN_00559fb0(local_e4);
  local_4 = 0;
  puVar3 = FUN_0040d6b0(&local_184,"person/",param_1);
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,puVar3,'\x01');
  if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
    _free(local_184);
  }
  local_1d0 = local_1c4;
  local_1c4[0] = '\0';
  local_1cc = 0;
  local_1c8 = 0x14;
  _strncpy(local_1d0,"weight",6);
  local_1cc = 6;
  local_1d0[6] = '\0';
  local_4._0_1_ = 2;
  fVar9 = FUN_00558610(local_e4,&local_1d0,*(float *)((int)this + 0xb3c));
  *(float *)((int)this + 0xb3c) = (float)fVar9;
  if (0x14 < local_1c8) {
                    /* WARNING: Subroutine does not return */
    _free(local_1d0);
  }
  local_1d0 = local_1c4;
  local_1c4[0] = '\0';
  local_1cc = 0;
  local_1c8 = 0x14;
  _strncpy(local_1d0,"celebrity",9);
  local_1cc = 9;
  local_1d0[9] = '\0';
  uVar5 = DAT_00e4fa4c;
  local_4 = CONCAT31(local_4._1_3_,3);
  pfVar4 = (float *)(**(code **)(*(int *)this + 0x240))();
  puStack_1b4 = (undefined4 *)*pfVar4;
  fVar9 = FUN_00558610(&uStack_e8,&puStack_1d4,(float)puStack_1b4);
  local_1ac = &stack0xfffffe10;
  if ((float10)0.0 <= fVar9) {
    if ((float10)1.0 < fVar9) {
      fVar9 = (float10)1.0;
    }
  }
  else {
    fVar9 = (float10)0.0;
  }
  FUN_00494fb0((void *)((int)this + 0xbd0),(float)fVar9,uVar5);
  if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1d4);
  }
  puStack_1d4 = &local_1c8;
  local_1c8 = local_1c8 & 0xffffff00;
  local_1d0 = (char *)0x0;
  local_1cc = 0x14;
  _strncpy((char *)puStack_1d4,"cuteness",8);
  local_1d0 = (char *)0x8;
  *(char *)(puStack_1d4 + 2) = '\0';
  puStack_1b4 = *(undefined4 **)((int)this + 0xbc4);
  fVar11 = 0.0;
  puStack_8._0_1_ = 4;
  fVar9 = FUN_00558610(&uStack_e8,&puStack_1d4,(float)puStack_1b4);
  FUN_005872b0(this,(float)fVar9,fVar11);
  if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1d4);
  }
  puStack_1d4 = &local_1c8;
  local_1c8 = local_1c8 & 0xffffff00;
  local_1d0 = (char *)0x0;
  local_1cc = 0x14;
  _strncpy((char *)puStack_1d4,"drunkenness",0xb);
  local_1d0 = (char *)0xb;
  *(char *)((int)puStack_1d4 + 0xb) = '\0';
  puStack_1b4 = *(undefined4 **)((int)this + 0xb9c);
  puStack_8._0_1_ = 5;
  fVar9 = FUN_00558610(&uStack_e8,&puStack_1d4,(float)puStack_1b4);
  if ((float10)0.0 <= fVar9) {
    if ((float10)1.0 < fVar9) {
      fVar9 = (float10)1.0;
    }
  }
  else {
    fVar9 = (float10)0.0;
  }
  *(float *)((int)this + 0xb9c) = (float)fVar9;
  if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1d4);
  }
  puStack_1d4 = &local_1c8;
  local_1c8 = local_1c8 & 0xffffff00;
  local_1d0 = (char *)0x0;
  local_1cc = 0x14;
  _strncpy((char *)puStack_1d4,"genre",5);
  local_1d0 = (char *)0x5;
  *(char *)((int)puStack_1d4 + 5) = '\0';
  puStack_8._0_1_ = 6;
  uVar5 = FUN_00558a50(&uStack_e8,&puStack_1d4,(undefined4 *)0x0);
  puStack_8._0_1_ = 0;
  if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1d4);
  }
  if ((char)uVar5 != '\0') {
    uVar5 = FUN_00558120(&uStack_e8,0);
    cVar2 = (char)uVar5;
    while (cVar2 != '\0') {
      puVar3 = FUN_00558de0(&uStack_e8,&pvStack_188);
      puStack_8._0_1_ = 7;
      iVar6 = GenreKey_ToEnum(puVar3);
      puStack_8._0_1_ = 0;
      if (0x14 < uStack_180) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_188);
      }
      if (iVar6 != 0) {
        fVar9 = FUN_005586b0(&uStack_e8,4,0.0);
        fVar11 = (float)fVar9;
        puVar3 = (undefined4 *)FUN_00449b40(iVar6);
        pvVar7 = (void *)FUN_00577370((int)this);
        FUN_00442490(pvVar7,puVar3,fVar11);
      }
      uVar5 = FUN_00558120(&uStack_e8,2);
      cVar2 = (char)uVar5;
    }
  }
  puStack_1d4 = &local_1c8;
  local_1c8 = local_1c8 & 0xffffff00;
  local_1d0 = (char *)0x0;
  local_1cc = 0x14;
  _strncpy((char *)puStack_1d4,"head",4);
  local_1d0 = (char *)0x4;
  *(char *)(puStack_1d4 + 1) = '\0';
  puStack_8._0_1_ = 8;
  uVar5 = FUN_00558a50(&uStack_e8,&puStack_1d4,(undefined4 *)0x0);
  puStack_8._0_1_ = 0;
  uVar1 = puStack_8._0_1_;
  puStack_8._0_1_ = 0;
  if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1d4);
  }
  if ((char)uVar5 != '\0') {
    puStack_1d4 = &local_1c8;
    local_1c8 = local_1c8 & 0xffffff00;
    local_1d0 = (char *)0x0;
    local_1cc = 0x14;
    _strncpy((char *)puStack_1d4,"0",1);
    local_1d0 = (char *)0x1;
    *(char *)((int)puStack_1d4 + 1) = '\0';
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
    puVar3 = FUN_005584e0(&uStack_e8,&pvStack_188,&puStack_1d4);
    FUN_004015d0((void *)((int)this + 0xa7c),(char *)*puVar3,puVar3[1]);
    if (0x14 < uStack_180) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_188);
    }
    if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1d4);
    }
    if (*(int *)((int)this + 0xa80) != 0) {
      FUN_004073f0((void *)((int)this + 0xa7c),".hd",3);
    }
    puStack_1d4 = &local_1c8;
    local_1c8 = local_1c8 & 0xffffff00;
    local_1d0 = (char *)0x0;
    local_1cc = 0x14;
    _strncpy((char *)puStack_1d4,"1",1);
    local_1d0 = (char *)0x1;
    *(char *)((int)puStack_1d4 + 1) = '\0';
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,10);
    puVar3 = FUN_005584e0(&uStack_e8,&pvStack_188,&puStack_1d4);
    FUN_004015d0((void *)((int)this + 0xa9c),(char *)*puVar3,puVar3[1]);
    if (0x14 < uStack_180) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_188);
    }
    if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1d4);
    }
    if (*(int *)((int)this + 0xaa0) != 0) {
      FUN_004073f0((void *)((int)this + 0xa9c),".hd",3);
    }
    puStack_1d4 = &local_1c8;
    local_1c8 = local_1c8 & 0xffffff00;
    local_1d0 = (char *)0x0;
    local_1cc = 0x14;
    _strncpy((char *)puStack_1d4,"mix",3);
    local_1d0 = (char *)0x3;
    *(char *)((int)puStack_1d4 + 3) = '\0';
    puStack_8._0_1_ = 0xb;
    fVar9 = FUN_00558610(&uStack_e8,&puStack_1d4,0.0);
    if ((float10)0.0 <= fVar9) {
      if ((float10)1.0 < fVar9) {
        fVar9 = (float10)1.0;
      }
    }
    else {
      fVar9 = (float10)0.0;
    }
    puStack_1b4 = (undefined4 *)(float)fVar9;
    *(undefined4 **)((int)this + 0xabc) = puStack_1b4;
    puStack_8._0_1_ = 0;
    if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1d4);
    }
    pfVar4 = (float *)(**(code **)(*(int *)this + 0x210))();
    puStack_1b4 = (undefined4 *)*pfVar4;
    FUN_005872b0(this,(float)puStack_1b4,0.0);
    uVar1 = puStack_8._0_1_;
  }
  puStack_8._0_1_ = uVar1;
  FUN_0058cb00(this,'\x01');
  puStack_1d4 = &local_1c8;
  local_1c8 = local_1c8 & 0xffffff00;
  local_1d0 = (char *)0x0;
  local_1cc = 0x14;
  _strncpy((char *)puStack_1d4,"",0);
  local_1d0 = (char *)0x0;
  *(char *)puStack_1d4 = '\0';
  puStack_8._0_1_ = 0xc;
  uVar5 = FUN_00558a50(&uStack_e8,&puStack_1d4,(undefined4 *)0x1);
  if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1d4);
  }
  if ((char)uVar5 != '\0') {
    puStack_1d4 = &local_1c8;
    local_1c8 = local_1c8 & 0xffffff00;
    local_1d0 = (char *)0x0;
    local_1cc = 0x14;
    _strncpy((char *)puStack_1d4,"costume",7);
    local_1d0 = (char *)0x7;
    *(char *)((int)puStack_1d4 + 7) = '\0';
    puStack_8._0_1_ = 0xd;
    FUN_005584e0(&uStack_e8,&pvStack_188,&puStack_1d4);
    puStack_8._0_1_ = 0xf;
    uVar1 = puStack_8._0_1_;
    puStack_8._0_1_ = 0xf;
    if (0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_1d4);
    }
    if (local_184 != (void *)0x0) {
      FUN_004335f0((int *)&puStack_1b4,&pvStack_188,*(int *)((int)this + 0x4a0),0,0,0);
      puStack_8._0_1_ = 0x10;
      if (puStack_1b4 != (undefined4 *)0x0) {
        (**(code **)(*(int *)this + 0x128))();
        pcStack_1a8 = acStack_19c;
        acStack_19c[0] = '\0';
        uStack_1a4 = 0;
        uStack_1a0 = 0x14;
        _strncpy(pcStack_1a8,"costumeoptions",0xe);
        uStack_1a4 = 0xe;
        pcStack_1a8[0xe] = '\0';
        puStack_8._0_1_ = 0x11;
        FUN_005584e0(&uStack_e8,&pvStack_168,&pcStack_1a8);
        puStack_8._0_1_ = 0x13;
        if (0x14 < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_1a8);
        }
        if (((*(int *)((int)this + 0x568) != 0) &&
            (iVar6 = FUN_004319b0(*(int *)((int)this + 0x568)), iVar6 != 0)) && (iStack_164 != 0)) {
          pcStack_1a8 = acStack_19c;
          uVar8 = 0;
          acStack_19c[0] = '\0';
          uStack_1a4 = 0;
          uStack_1a0 = 0x14;
          puStack_8._0_1_ = 0x14;
          iVar6 = FUN_004319b0(*(int *)((int)this + 0x568));
          if (*(int *)(iVar6 + 0xcc) != 0) {
            do {
              uStack_1b0 = FUN_004155b0(&pvStack_168,",",uVar8);
              puVar3 = FUN_00430770(&pvStack_168,apvStack_148,uVar8,uStack_1b0);
              FUN_004015d0(&pcStack_1a8,(char *)*puVar3,puVar3[1]);
              if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_148[0]);
              }
              uVar8 = FUN_00413450(&pcStack_1a8,":",0,1);
              puVar3 = FUN_00430770(&pcStack_1a8,apvStack_108,0,uVar8);
              puStack_8._0_1_ = 0x15;
              local_1ac = (undefined1 *)FUN_00567d80(puVar3);
              if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_108[0]);
              }
              puVar3 = FUN_00430770(&pcStack_1a8,apvStack_128,uVar8 + 1,0xffffffff);
              puStack_8._0_1_ = 0x16;
              uVar8 = FUN_00567d80(puVar3);
              puStack_8._0_1_ = 0x14;
              if (0x14 < uStack_120) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_128[0]);
              }
              puVar10 = local_1ac;
              pvVar7 = (void *)FUN_004319b0(*(int *)((int)this + 0x568));
              FUN_009cf8f0(pvVar7,(int)puVar10,uVar8);
            } while ((uStack_1b0 != 0xffffffff) && (uVar8 = uStack_1b0 + 1, uVar8 != 0xffffffff));
          }
          if (0x14 < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_1a8);
          }
        }
        if (0x14 < uStack_160) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_168);
        }
      }
      puStack_8._0_1_ = 0xf;
      if ((puStack_1b4 != (undefined4 *)0x0) &&
         (iVar6 = puStack_1b4[0x12], puStack_1b4[0x12] = iVar6 + -1, iVar6 + -1 == 0)) {
        (**(code **)*puStack_1b4)();
      }
      puStack_1b4 = (undefined4 *)0x0;
      uVar1 = puStack_8._0_1_;
    }
    puStack_8._0_1_ = uVar1;
    if (0x14 < uStack_180) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_188);
    }
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00558920(&uStack_e8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION CStar_PostSpawnSetup @ 0058db40 ////

/* WARNING: Removing unreachable block (ram,0x0058e12c) */
/* WARNING: Removing unreachable block (ram,0x0058e233) */
/* WARNING: Removing unreachable block (ram,0x0058e045) */

void __fastcall CStar_PostSpawnSetup(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  char **ppcVar11;
  char acStack_68 [4];
  undefined1 uStack_64;
  undefined1 uStack_60;
  char *pcStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  char acStack_48 [20];
  char *pcStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  char acStack_28 [20];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3797;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x104))();
  FUN_0057a2e0(param_1);
  GetPlayerStudio();
  puVar7 = (undefined4 *)0x0;
  if (param_1[0x326] == 0) {
    pvVar5 = operator_new(0x16c);
    puStack_8 = (undefined1 *)0x0;
    if (pvVar5 != (void *)0x0) {
      puVar7 = FUN_00478590(pvVar5,(int)param_1);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(param_1[0x321] + 4))();
    param_1[0x326] = (int)puVar7;
    (**(code **)param_1[0x321])();
  }
  if (param_1[0x332] == 0) {
    pvVar5 = operator_new(0xb4);
    puStack_8 = (undefined1 *)0x1;
    if (pvVar5 == (void *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = FUN_00407a30(pvVar5,(int)param_1);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(param_1[0x32d] + 4))();
    param_1[0x332] = (int)puVar7;
    (**(code **)param_1[0x32d])();
  }
  if (param_1[0x2e0] == 0) {
    puVar7 = FUN_0042f040(param_1);
    (**(code **)(param_1[0x2db] + 4))();
    param_1[0x2e0] = (int)puVar7;
    (**(code **)param_1[0x2db])();
  }
  if (param_1[0x344] == 0) {
    puVar7 = FUN_00493620(param_1);
    (**(code **)(param_1[0x33f] + 4))();
    param_1[0x344] = (int)puVar7;
    (**(code **)param_1[0x33f])();
  }
  puVar7 = DAT_0104d05c;
  if ((int **)DAT_0104d05c != &DAT_0104d068) {
    do {
      if ((int *)puVar7[2] == param_1) {
        if ((int **)puVar7 != &DAT_0104d068) goto LAB_0058dceb;
        break;
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((int **)*puVar1 != &DAT_0104d068);
  }
  piVar2 = param_1 + 0x2c7;
  param_1[0x2c8] = (int)&DAT_0104d068;
  *piVar2 = (int)DAT_0104d068;
  *(int **)((int)DAT_0104d068 + 4) = piVar2;
  DAT_0104d068 = piVar2;
LAB_0058dceb:
  if (*(char *)((int)param_1 + 0xc81) == '\0') {
    *(undefined1 *)((int)param_1 + 0xc81) = 1;
    FUN_00957cc0(param_1);
  }
  pvVar5 = operator_new(0x15c);
  puStack_8 = (undefined1 *)0x2;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireTalk_Constructor(pvVar5,(int)param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x148);
  puStack_8 = (undefined1 *)0x3;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireTantrum_Constructor(pvVar5,param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x140);
  puStack_8 = (undefined1 *)0x4;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireSleep_Constructor(pvVar5,param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x158);
  puStack_8 = (undefined1 *)0x5;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireDoLunch_Constructor(pvVar5,(int)param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x140);
  puStack_8 = (undefined1 *)0x6;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireOverEat_Constructor(pvVar5,param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x140);
  puStack_8 = (undefined1 *)0x7;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireOverDrink_Constructor(pvVar5,param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x140);
  puStack_8 = (undefined1 *)0x8;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireGetDrunk_Constructor(pvVar5,param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x140);
  puStack_8 = (undefined1 *)0x9;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireGetChanged_Constructor(pvVar5,param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x148);
  puStack_8 = (undefined1 *)0xa;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireHeal_Constructor(pvVar5,(int)param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  pvVar5 = operator_new(0x144);
  puStack_8 = (undefined1 *)0xb;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireAgony_Constructor(pvVar5,param_1);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  bVar3 = FUN_0059c5e0((int)param_1);
  if (bVar3) {
    (**(code **)(*param_1 + 0x104))();
  }
  pvVar5 = operator_new(0x144);
  puStack_8 = (undefined1 *)0xc;
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = DesireTrailerTantrum_Constructor(pvVar5,param_1,0);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  TMCharacter_AddResidentDesire(param_1,(int)puVar7);
  (**(code **)(*param_1 + 0x104))();
  if ((param_1[0x326] != 0) && (iVar6 = FUN_00472a30(param_1[0x326]), iVar6 != 0)) {
    if (DAT_010583e4 != '\0') {
      ExceptionList = pvStack_14;
      return;
    }
    acStack_68[0] = '\0';
    _strncpy(acStack_68,"star",4);
    uStack_64 = 0;
    pvStack_c = (void *)0xd;
    FUN_00558a50(DAT_00f88624,(undefined4 *)&stack0xffffff8c,(undefined4 *)0x1);
    pvStack_c = (void *)0xffffffff;
    if (((int *)param_1[0x354] == (int *)0x0) ||
       (cVar4 = (**(code **)(*(int *)param_1[0x354] + 0x3c))(), cVar4 != '\0')) {
      pcStack_34 = acStack_28;
      acStack_28[0] = '\0';
      uStack_30 = 0;
      uStack_2c = 0x14;
      _strncpy(pcStack_34,"grudge_hire",0xb);
      uStack_30 = 0xb;
      pcStack_34[0xb] = '\0';
      pcStack_54 = acStack_48;
      pvStack_c = (void *)0xe;
      acStack_48[0] = '\0';
      uStack_50 = 0;
      uStack_4c = 0x14;
      _strncpy(pcStack_54,"forgethire",10);
      uStack_50 = 10;
      pcStack_54[10] = '\0';
      acStack_68[0] = '\0';
      _strncpy(acStack_68,"likehire",8);
      pvVar5 = DAT_00f88624;
      uStack_60 = 0;
      iVar6 = param_1[0x326];
      ppcVar11 = &pcStack_34;
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x10);
      fVar8 = FUN_00558610(DAT_00f88624,&pcStack_54,0.0);
      fVar10 = (float)fVar8;
      fVar8 = FUN_00558610(pvVar5,(undefined4 *)&stack0xffffff8c,0.0);
      fVar9 = (float)fVar8;
      pvVar5 = (void *)FUN_00472a30(iVar6);
      CGrudges_AddOrRefreshGrudge(pvVar5,fVar9,fVar10,ppcVar11);
      if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_54);
      }
      pvStack_c = (void *)0xffffffff;
      if (0x14 < uStack_2c) {
        pvStack_c = (void *)0xffffffff;
                    /* WARNING: Subroutine does not return */
        _free(pcStack_34);
      }
    }
    else {
      FUN_00401de0(&stack0xffffff8c,"grudge_fire",0xffffffff);
      pvStack_c = (void *)0x11;
      FUN_00401de0(&pcStack_54,"forgivefire",0xffffffff);
      FUN_00401de0(&pcStack_34,"dislikefire",0xffffffff);
      pvVar5 = DAT_00f88624;
      iVar6 = param_1[0x326];
      puVar7 = (undefined4 *)&stack0xffffff8c;
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0x13);
      fVar8 = FUN_00558610(DAT_00f88624,&pcStack_54,0.0);
      fVar10 = (float)fVar8;
      fVar8 = FUN_00558610(pvVar5,&pcStack_34,0.0);
      fVar9 = (float)fVar8;
      pvVar5 = (void *)FUN_00472a30(iVar6);
      CGrudges_AddOrRefreshGrudge(pvVar5,fVar9,fVar10,puVar7);
      if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_34);
      }
      if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_54);
      }
      pvStack_c = (void *)0xffffffff;
    }
  }
  if ((DAT_010583e4 == '\0') && ((char)uStack_4 == '\0')) {
    FUN_005889c0(param_1,param_1[0x33c]);
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_0058e310 @ 0058e310 ////

void __thiscall FUN_0058e310(void *this,char param_1)

{
  int *piVar1;
  void *this_00;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  FUN_005773d0(this,param_1);
  if (param_1 == '\0') {
    if (*(int *)((int)this + 0x934) != 0) {
      piVar1 = (int *)((int)this + 0xb1c);
      if (*(int *)((int)this + 0xb1c) == 0) {
        *(int ***)((int)this + 0xb20) = &DAT_0104d068;
        *piVar1 = (int)DAT_0104d068;
        *(int **)((int)DAT_0104d068 + 4) = piVar1;
        DAT_0104d068 = piVar1;
      }
      if (*(int *)((int)this + 0xb80) == 0) {
        puVar4 = FUN_0042f040(this);
        (**(code **)(*(int *)((int)this + 0xb6c) + 4))();
        *(undefined4 **)((int)this + 0xb80) = puVar4;
        (*(code *)**(undefined4 **)((int)this + 0xb6c))();
      }
    }
  }
  else {
    if (*(int *)((int)this + 0xb1c) != 0) {
      if (*(undefined4 **)((int)this + 0xb20) != (undefined4 *)0x0) {
        **(undefined4 **)((int)this + 0xb20) = *(undefined4 *)((int)this + 0xb1c);
      }
      if (*(int *)((int)this + 0xb1c) != 0) {
        *(undefined4 *)(*(int *)((int)this + 0xb1c) + 4) = *(undefined4 *)((int)this + 0xb20);
      }
      *(undefined4 *)((int)this + 0xb1c) = 0;
      *(undefined4 *)((int)this + 0xb20) = 0;
    }
    if (*(int *)((int)this + 0xa50) != (int)this + 0xa5c) {
      do {
        piVar1 = *(int **)((int)this + 0xa50);
        iVar2 = piVar1[2];
        if ((int *)piVar1[1] != (int *)0x0) {
          *(int *)piVar1[1] = *piVar1;
        }
        if (*piVar1 != 0) {
          *(int *)(*piVar1 + 4) = piVar1[1];
        }
        *piVar1 = 0;
        piVar1[1] = 0;
        if (*(int **)(iVar2 + 0x7b8) != (int *)0x0) {
          (**(code **)(**(int **)(iVar2 + 0x7b8) + 4))();
          if (*(undefined4 **)(iVar2 + 0x7b8) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)(iVar2 + 0x7b8))(1);
          }
          (**(code **)(*(int *)(iVar2 + 0x7a4) + 4))();
          *(undefined4 *)(iVar2 + 0x7b8) = 0;
          (*(code *)**(undefined4 **)(iVar2 + 0x7a4))();
        }
      } while (*(int *)((int)this + 0xa50) != (int)this + 0xa5c);
    }
    puVar4 = *(undefined4 **)((int)this + 0xb80);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)((int)this + 0xb6c) + 4))();
      *(undefined4 *)((int)this + 0xb80) = 0;
      (*(code *)**(undefined4 **)((int)this + 0xb6c))();
    }
    puVar4 = *(undefined4 **)((int)this + 0xb64);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      *(undefined4 *)((int)this + 0xb64) = 0;
    }
    puVar4 = *(undefined4 **)((int)this + 0xc98);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)((int)this + 0xc84) + 4))();
      *(undefined4 *)((int)this + 0xc98) = 0;
      (*(code *)**(undefined4 **)((int)this + 0xc84))();
    }
    puVar4 = *(undefined4 **)((int)this + 0xcc8);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)((int)this + 0xcb4) + 4))();
      *(undefined4 *)((int)this + 0xcc8) = 0;
      (*(code *)**(undefined4 **)((int)this + 0xcb4))();
    }
    puVar4 = *(undefined4 **)((int)this + 0xd10);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)((int)this + 0xcfc) + 4))();
      *(undefined4 *)((int)this + 0xd10) = 0;
      (*(code *)**(undefined4 **)((int)this + 0xcfc))();
    }
    pvVar3 = this;
    this_00 = (void *)FUN_007fd5d0();
    iVar2 = FUN_007fea40(this_00,(int)pvVar3);
    if (iVar2 != 0) {
      pvVar3 = (void *)FUN_007fd5d0();
      FUN_008019e0(pvVar3,(float)this);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0058e630 @ 0058e630 ////

undefined4 * FUN_0058e630(undefined4 *param_1)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb37b8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"staff_star",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  FUN_009b5030(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0058e6d0 @ 0058e6d0 ////

int FUN_0058e6d0(void *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb37f0;
  local_c = ExceptionList;
  local_2c = local_20;
  local_30 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"unemployed",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  bVar2 = FUN_0056b170(param_1,&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar2) {
    puVar6 = DAT_0104d05c;
    if (DAT_0104d05c != &DAT_0104d068) {
      do {
        cVar3 = (**(code **)(*(int *)puVar6[2] + 0x13c))();
        if ((cVar3 != '\0') && (iVar4 = FUN_005773c0(puVar6[2]), iVar4 == 0)) {
          ExceptionList = local_c;
          return puVar6[2];
        }
        puVar1 = puVar6 + 1;
        puVar6 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104d068);
    }
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"employed",8);
    local_28 = 8;
    local_2c[8] = '\0';
    local_4 = 1;
    bVar2 = FUN_0056b170(param_1,&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (bVar2) {
      puVar6 = DAT_0104d05c;
      if (DAT_0104d05c != &DAT_0104d068) {
        do {
          cVar3 = (**(code **)(*(int *)puVar6[2] + 0x13c))();
          if (cVar3 != '\0') {
            iVar4 = FUN_005773c0(puVar6[2]);
            iVar5 = GetPlayerStudio();
            if (iVar4 == iVar5) {
              ExceptionList = local_c;
              return puVar6[2];
            }
          }
          puVar6 = (undefined4 *)puVar6[1];
        } while (puVar6 != &DAT_0104d068);
      }
    }
    else {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"biggestceleb",0xc);
      local_28 = 0xc;
      local_2c[0xc] = '\0';
      local_4 = 2;
      bVar2 = FUN_0056b170(param_1,&local_2c);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (bVar2) {
        param_1 = (void *)0x0;
        puVar6 = DAT_0104d05c;
        if (DAT_0104d05c != &DAT_0104d068) {
          do {
            cVar3 = (**(code **)(*(int *)puVar6[2] + 0x13c))();
            if (cVar3 != '\0') {
              iVar4 = FUN_005773c0(puVar6[2]);
              iVar5 = GetPlayerStudio();
              if ((iVar4 == iVar5) && ((float)param_1 < *(float *)(puVar6[2] + 0xcd0))) {
                local_30 = puVar6[2];
                param_1 = *(void **)(local_30 + 0xcd0);
              }
            }
            puVar1 = puVar6 + 1;
            puVar6 = (undefined4 *)*puVar1;
          } while ((undefined4 *)*puVar1 != &DAT_0104d068);
        }
      }
      else {
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"biggestmaleceleb",0x10);
        local_28 = 0x10;
        local_2c[0x10] = '\0';
        local_4 = 3;
        bVar2 = FUN_0056b170(param_1,&local_2c);
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        if ((bVar2) && (param_1 = (void *)0x0, puVar6 = DAT_0104d05c, DAT_0104d05c != &DAT_0104d068)
           ) {
          do {
            cVar3 = (**(code **)(*(int *)puVar6[2] + 0x13c))();
            if ((cVar3 != '\0') && (*(int *)(puVar6[2] + 0x4a0) == 0)) {
              iVar4 = FUN_005773c0(puVar6[2]);
              iVar5 = GetPlayerStudio();
              if ((iVar4 == iVar5) && ((float)param_1 < *(float *)(puVar6[2] + 0xcd0))) {
                local_30 = puVar6[2];
                param_1 = *(void **)(local_30 + 0xcd0);
              }
            }
            puVar1 = puVar6 + 1;
            puVar6 = (undefined4 *)*puVar1;
          } while ((undefined4 *)*puVar1 != &DAT_0104d068);
        }
      }
    }
  }
  ExceptionList = local_c;
  return local_30;
}


//// FUNCTION FUN_0058ea60 @ 0058ea60 ////

/* WARNING: Removing unreachable block (ram,0x0058eaad) */

undefined4 * FUN_0058ea60(undefined4 *param_1)

{
  wchar_t local_14 [10];
  
  local_14[0] = L'\0';
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_14,0);
  return param_1;
}


//// FUNCTION FUN_0058ed20 @ 0058ed20 ////

void __fastcall FUN_0058ed20(int param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  char **ppcVar11;
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [20];
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3871;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0xc64) = 0;
  if (DAT_0104d524 == param_1) {
    *(undefined1 *)(param_1 + 0xc64) = 1;
  }
  iVar4 = FUN_005998e0(param_1);
  if (iVar4 == 0) {
    ExceptionList = local_c;
    return;
  }
  iVar4 = FUN_005998e0(param_1);
  iVar4 = FUN_00ace790(*(int **)(iVar4 + 0x274),0,&TM::TMActionExplainer::RTTI_Type_Descriptor,
                       &TM::CAssetActionExplainer::RTTI_Type_Descriptor,0);
  if (iVar4 != 0) {
    local_8c = local_80;
    local_80[0] = '\0';
    local_88 = 0;
    local_84 = 0x14;
    _strncpy(local_8c,"facility_catering2",0x12);
    local_88 = 0x12;
    local_8c[0x12] = '\0';
    ppcVar11 = &local_8c;
    local_4 = 0;
    bVar3 = false;
    iVar5 = FUN_008bc6c0(iVar4);
    puVar6 = (undefined4 *)FUN_00528450(iVar5);
    uVar7 = FUN_00401ec0(puVar6,ppcVar11);
    if ((char)uVar7 == '\0') {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"facility_bar",0xc);
      local_68 = 0xc;
      local_6c[0xc] = '\0';
      ppcVar11 = &local_6c;
      local_4 = 1;
      bVar3 = true;
      iVar4 = FUN_008bc6c0(iVar4);
      puVar6 = (undefined4 *)FUN_00528450(iVar4);
      uVar7 = FUN_00401ec0(puVar6,ppcVar11);
      bVar2 = false;
      if ((char)uVar7 != '\0') goto LAB_0058ee6c;
    }
    else {
LAB_0058ee6c:
      bVar2 = true;
    }
    if ((bVar3) && (0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if ((bVar2) && (*(char *)(param_1 + 0x15c) != '\0')) {
      *(undefined1 *)(param_1 + 0xc64) = 1;
      ExceptionList = local_c;
      return;
    }
  }
  iVar4 = FUN_005998e0(param_1);
  iVar4 = FUN_00401c30(iVar4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,*(char **)(iVar4 + 100),*(uint *)(iVar4 + 0x68));
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  _strncpy((char *)local_2c,"readyposition",0xd);
  local_28 = 0xd;
  local_2c[0xd] = 0;
  bVar2 = false;
  bVar3 = false;
  pbVar8 = local_4c;
  pbVar9 = local_2c;
  do {
    bVar1 = *pbVar8;
    bVar10 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_0058efab:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0058efb0;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar10 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_0058efab;
    pbVar8 = pbVar8 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0058efb0:
  if (iVar4 != 0) {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"rehearse",8);
    local_68 = 8;
    local_6c[8] = '\0';
    bVar2 = true;
    bVar3 = false;
    uVar7 = FUN_00401ec0(&local_4c,&local_6c);
    if ((char)uVar7 == '\0') {
      local_8c = local_80;
      local_80[0] = '\0';
      local_88 = 0;
      local_84 = 0x14;
      _strncpy(local_8c,"stunttrain",10);
      local_88 = 10;
      local_8c[10] = '\0';
      bVar2 = true;
      bVar3 = true;
      uVar7 = FUN_00401ec0(&local_4c,&local_8c);
      if (((char)uVar7 == '\0') && (bVar10 = false, *(int *)(param_1 + 0x198) == 0))
      goto LAB_0058f073;
    }
  }
  bVar10 = true;
LAB_0058f073:
  if ((bVar3) && (0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  if ((bVar2) && (0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((bVar10) && (*(char *)(param_1 + 0x15c) != '\0')) {
    *(undefined1 *)(param_1 + 0xc64) = 1;
  }
  if (local_44 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_0058f230 @ 0058f230 ////

undefined4 * __fastcall FUN_0058f230(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *unaff_retaddr;
  wchar_t *local_30;
  undefined2 *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined2 local_20 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cb3888;
  pvStack_c = ExceptionList;
  local_30 = (wchar_t *)0x0;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x230))(&local_30);
  uVar2 = FUN_00acd42c();
  switch((int)uVar2) {
  case 0:
    FUN_00403e90(&local_30,L"<translate>info_skill0</translate>");
    break;
  case 1:
    FUN_00403e90(&local_30,L"<translate>info_skill1</translate>");
    break;
  case 2:
    FUN_00403e90(&local_30,L"<translate>info_skill2</translate>");
    break;
  case 3:
    FUN_00403e90(&local_30,L"<translate>info_skill3</translate>");
    break;
  case 4:
    FUN_00403e90(&local_30,L"<translate>info_skill4</translate>");
    break;
  case 5:
    FUN_00403e90(&local_30,L"<translate>info_skill5</translate>");
    break;
  case 6:
    FUN_00403e90(&local_30,L"<translate>info_skill6</translate>");
    break;
  case 7:
  case 8:
    FUN_00403e90(&local_30,L"<translate>info_skill7</translate>");
    break;
  default:
    uVar1 = FUN_00ace02d(L"<translate>info_skillunknown</translate>");
    FUN_004036d0(&local_30,L"<translate>info_skillunknown</translate>",uVar1);
  }
  *unaff_retaddr = unaff_retaddr + 3;
  *(undefined2 *)(unaff_retaddr + 3) = 0;
  unaff_retaddr[1] = 0;
  unaff_retaddr[2] = 10;
  FUN_004036d0(unaff_retaddr,local_30,(uint)local_2c);
  if (local_28 < 0xb) {
    ExceptionList = pvStack_10;
    return unaff_retaddr;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_30);
}


//// FUNCTION FUN_0058f440 @ 0058f440 ////

void __fastcall FUN_0058f440(int *param_1)

{
  bool bVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  
  if (param_1[0x247] != 0) {
    FUN_0057acf0(param_1);
    return;
  }
  bVar1 = FUN_0059c5e0((int)param_1);
  if (bVar1) {
    FUN_00599e70(param_1);
    return;
  }
  if ((float)param_1[0x2e7] <= 0.5) {
    cVar2 = (**(code **)(*param_1 + 0x218))();
    if (cVar2 == '\0') {
      if (param_1[0x326] != 0) {
        iVar4 = *(int *)param_1[0x2da];
        param_1[0x2e1] = iVar4;
        switch(iVar4) {
        case 0:
          if (param_1[0x13a] != 1) {
            FUN_00599e70(param_1);
            return;
          }
          if (param_1[0x128] == 1) {
            pfVar3 = (float *)(**(code **)(*param_1 + 0x240))(&stack0xfffffffc);
            if (0.25 <= *pfVar3) {
              pfVar3 = (float *)(**(code **)(*param_1 + 0x240))(&stack0xfffffff8);
              if (*pfVar3 <= 0.75) {
                iVar4 = 0x20;
              }
              else {
                iVar4 = 0x1e;
              }
            }
            else {
              iVar4 = 0x1c;
            }
          }
          else {
            pfVar3 = (float *)(**(code **)(*param_1 + 0x240))(&stack0xfffffffc);
            if (0.25 <= *pfVar3) {
              pfVar3 = (float *)(**(code **)(*param_1 + 0x240))(&stack0xfffffff8);
              if (*pfVar3 <= 0.75) {
                iVar4 = 0x1f;
              }
              else {
                iVar4 = 0x1d;
              }
            }
            else {
              iVar4 = 0x1b;
            }
          }
          FUN_00598f30(param_1,iVar4);
          FUN_004900f0((void *)param_1[0x2da],0,0.01);
          return;
        case 1:
          FUN_00587a80(param_1);
          return;
        case 2:
          FUN_00587b10(param_1);
          return;
        case 3:
          FUN_00587ac0(param_1);
          return;
        }
      }
      FUN_00599e70(param_1);
      return;
    }
  }
  else {
    if (param_1[0x13a] == 3) {
      FUN_00447ae0(param_1);
      return;
    }
    if ((float)param_1[0x2e7] <= 0.8) {
      if (param_1[0x128] != 0) {
        FUN_00598f30(param_1,0x2b);
        return;
      }
      FUN_00598f30(param_1,0x2a);
      return;
    }
    FUN_00598f30(param_1,0x2c);
  }
  return;
}


//// FUNCTION FUN_0058f5c0 @ 0058f5c0 ////

void __fastcall FUN_0058f5c0(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char local_94 [8];
  undefined4 uStack_8c;
  void **ppvVar7;
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
  puStack_8 = &LAB_00cb38b0;
  local_c = ExceptionList;
  ppvVar7 = local_4c;
  ExceptionList = &local_c;
  pvVar1 = (void *)FUN_00577370((int)param_1);
  FUN_00441210(pvVar1,(int *)ppvVar7);
  local_4 = 0;
  pvVar1 = (void *)GenreKey_ToEnum(local_4c);
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar1 != (void *)0x0) {
    if (param_1[0x128] == 0) {
      puVar2 = FUN_00589b90(pvVar1,local_2c);
    }
    else {
      puVar2 = FUN_00589bd0(pvVar1,local_2c);
    }
    uStack_8c = 0x58f657;
    FUN_004015d0(&local_6c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  if ((param_1[0x13a] == 1) && (local_68 != 0)) {
    pcVar4 = local_94;
    local_94[0] = '\0';
    uVar5 = 0;
    uVar6 = 0x14;
    FUN_004015d0(&stack0xffffff60,local_6c,local_68);
    pbVar3 = FUN_00446820(pcVar4,uVar5,uVar6);
    FUN_00526890(param_1,pbVar3);
    if (pbVar3 != (byte *)0x0) {
      FUN_00985de0(pbVar3);
    }
    uStack_8c = 0x58f6cd;
    FUN_004900f0((void *)param_1[0x2da],4,0.01);
  }
  else {
    FUN_00599e70(param_1);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0058f710 @ 0058f710 ////

void __fastcall FUN_0058f710(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar4 = FUN_00990d30(0,0xb);
    iVar1 = *(int *)(param_1 + 0xa50);
    bVar3 = true;
    while ((iVar1 != param_1 + 0xa5c && (bVar3))) {
      iVar2 = *(int *)(*(int *)(iVar1 + 8) + 0x7b8);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x88) == iVar4)) {
        bVar3 = false;
      }
      iVar1 = *(int *)(iVar1 + 4);
    }
    iVar5 = iVar5 + 1;
  } while ((!bVar3) && (iVar5 < 0xb));
  return;
}


//// FUNCTION FUN_0058f880 @ 0058f880 ////

void __thiscall FUN_0058f880(void *this,float *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  float local_8;
  undefined4 uStack_4;
  
  fVar1 = param_2;
  iVar2 = FUN_004df4a0((int)param_2);
  if (iVar2 == 0) {
    local_8 = 0.5;
  }
  else {
    iVar2 = *(int *)this;
    uVar3 = FUN_004df4a0((int)fVar1);
    pfVar4 = (float *)(**(code **)(iVar2 + 0x260))(&param_2,uVar3);
    local_8 = *pfVar4;
  }
  iVar5 = FUN_004de100((int)fVar1);
  iVar2 = *(int *)(iVar5 + 8);
  iVar7 = 0;
  if (iVar2 != iVar5 + 0x14) {
    do {
      iVar2 = *(int *)(iVar2 + 4);
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar5 + 0x14);
    if (iVar7 != 0) {
      param_2 = 0.0;
      iVar2 = FUN_004de100((int)fVar1);
      iVar2 = *(int *)(iVar2 + 8);
      iVar5 = FUN_004de100((int)fVar1);
      if (iVar2 != iVar5 + 0x14) {
        do {
          iVar7 = 0;
          pTVar9 = &TM::CStar::RTTI_Type_Descriptor;
          pTVar8 = &TM::CStaff::RTTI_Type_Descriptor;
          iVar5 = 0;
          piVar6 = (int *)FUN_0048c950(*(int *)(iVar2 + 8));
          piVar6 = (int *)FUN_00ace790(piVar6,iVar5,pTVar8,pTVar9,iVar7);
          if ((piVar6 == this) || (piVar6 == (int *)0x0)) {
            param_2 = param_2 + 0.5;
          }
          else {
            pfVar4 = (float *)FUN_0042e9a0(&uStack_4,this,piVar6);
            param_2 = param_2 + *pfVar4;
          }
          iVar2 = *(int *)(iVar2 + 4);
          iVar5 = FUN_004de100((int)fVar1);
        } while (iVar2 != iVar5 + 0x14);
      }
      iVar7 = FUN_004de100((int)fVar1);
      iVar5 = 0;
      for (iVar2 = *(int *)(iVar7 + 8); iVar2 != iVar7 + 0x14; iVar2 = *(int *)(iVar2 + 4)) {
        iVar5 = iVar5 + 1;
      }
      fVar1 = (float)iVar5;
      if (iVar5 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      local_8 = param_2 / fVar1 + local_8;
      goto LAB_0058f9a3;
    }
  }
  local_8 = local_8 + 0.5;
LAB_0058f9a3:
  local_8 = local_8 * 0.5;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
    *param_1 = local_8;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_0058f9f0 @ 0058f9f0 ////

float * __thiscall FUN_0058f9f0(void *this,float *param_1)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  iVar7 = *(int *)((int)this + 0x934);
  iVar6 = GetPlayerStudio();
  if (iVar7 != iVar6) {
    *(float *)((int)this + 0xd1c) = *(float *)((int)this + 0xd2c);
    FUN_00407070(param_1,*(float *)((int)this + 0xd2c));
    return param_1;
  }
  iVar7 = *(int *)((int)this + 0xb80);
  bVar3 = false;
  local_c = 0.0;
  if (((iVar7 != 0) && (*(int *)(iVar7 + 0xcc) != iVar7 + 0xd8)) &&
     (puVar9 = DAT_0104d05c, DAT_0104d05c != &DAT_0104d068)) {
    do {
      piVar2 = (int *)puVar9[2];
      if (piVar2 != this) {
        cVar4 = (**(code **)(*piVar2 + 0x13c))();
        if (cVar4 != '\0') {
          iVar7 = FUN_005773c0((int)piVar2);
          if (iVar7 != 0) {
            bVar5 = FUN_0042a720(piVar2[0x2e0]);
            if (bVar5) {
              pfVar8 = FUN_0042e910((void *)piVar2[0x2e0],&fStack_4,(int)this);
              FUN_00407070(&fStack_8,(*pfVar8 - 0.5) + (*pfVar8 - 0.5));
              local_c = ((float)piVar2[0x334] * 0.5 + 0.5) * fStack_8 * 1.2 + local_c;
            }
            else {
              bVar3 = true;
            }
          }
        }
      }
      puVar9 = (undefined4 *)puVar9[1];
    } while (puVar9 != &DAT_0104d068);
    if (bVar3) goto LAB_0058fb0c;
  }
  *(float *)((int)this + 0xd1c) = local_c;
LAB_0058fb0c:
  fVar1 = *(float *)((int)this + 0xd1c);
  if (fVar1 < 0.0) {
    *param_1 = 0.0;
    return param_1;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *param_1 = fVar1;
  return param_1;
}


//// FUNCTION FUN_0058fb60 @ 0058fb60 ////

/* WARNING: Removing unreachable block (ram,0x0058fce7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0058fb60(void *this,undefined4 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  int *piVar12;
  char cVar13;
  float10 fVar14;
  ulonglong uVar15;
  undefined4 *unaff_retaddr;
  float local_8;
  float local_4;
  
  fVar3 = param_2;
  if (param_2 == 0.0) {
    *param_1 = 0;
    return param_1;
  }
  pfVar8 = (float *)((int)param_2 + 0xd0);
  pvVar11 = (void *)((int)param_2 + 0xd4);
  param_2 = 0.0;
  uVar6 = FUN_0043b680(pvVar11,pfVar8);
  if ((char)uVar6 != '\0') {
    pfVar7 = (float *)FUN_0043b620(&DAT_00e4fa4c,&local_4,pfVar8);
    fVar14 = FUN_0043b710(pfVar7);
    param_2 = (float)fVar14;
    pfVar8 = (float *)FUN_0043b620(pvVar11,&local_8,pfVar8);
    fVar14 = FUN_0043b710(pfVar8);
    FUN_00407070(&param_2,(float)((float10)param_2 / fVar14));
  }
  fVar14 = (float10)FUN_00ace9b0();
  fVar14 = (float10)1.0 - fVar14;
  if ((float10)0.0 <= fVar14) {
    if ((float10)1.0 < fVar14) {
      fVar14 = (float10)1.0;
    }
  }
  else {
    fVar14 = (float10)0.0;
  }
  fVar14 = fVar14 * (float10)*(float *)((int)fVar3 + 0xd8);
  if ((float10)0.0 <= fVar14) {
    if (fVar14 <= (float10)1.0) {
      local_4 = (float)fVar14;
    }
    else {
      local_4 = 1.0;
    }
  }
  else {
    local_4 = 0.0;
  }
  pfVar8 = (float *)(**(code **)(*(int *)this + 0x1e0))(&param_2);
  FUN_0043b710(pfVar8);
  uVar15 = FUN_00acd42c();
  uVar9 = (uint)uVar15;
  if (uVar9 < *(uint *)((int)fVar3 + 0xdc)) {
    fVar1 = (float)(int)uVar9;
    if ((int)uVar9 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    param_1 = (undefined4 *)(*(uint *)((int)fVar3 + 0xdc) - 0x32);
    FUN_00407070(&param_1,(fVar1 - (float)(int)param_1) * 0.02);
  }
  else if (*(uint *)((int)fVar3 + 0xe0) < uVar9) {
    param_1 = (undefined4 *)((uVar9 - *(uint *)((int)fVar3 + 0xe0)) / 0x32);
    FUN_00407070(&param_1,1.0 - (float)(int)param_1);
  }
  else {
    FUN_00407070(&param_1,1.0);
  }
  puVar4 = param_1;
  FUN_00587100(this,(float *)&param_1);
  if ((float)param_1 < 0.5 == ((float)param_1 == 0.5)) {
    fVar1 = (float)param_1 - 0.5;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    fVar2 = *(float *)((int)fVar3 + 0xec) - *(float *)((int)fVar3 + 0xe8);
    if (0.0 <= fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    param_1 = (undefined4 *)((fVar1 + fVar1) * fVar2 + *(float *)((int)fVar3 + 0xe8));
    if (0.0 <= (float)param_1) {
      if (1.0 < (float)param_1) {
        param_1 = (undefined4 *)0x3f800000;
      }
    }
    else {
      param_1 = (undefined4 *)0x0;
    }
    FUN_00407070(&param_1,(float)param_1);
  }
  else {
    fVar1 = (float)param_1 + (float)param_1;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    fVar2 = *(float *)((int)fVar3 + 0xe8) - *(float *)((int)fVar3 + 0xe4);
    if (0.0 <= fVar2) {
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
    }
    else {
      fVar2 = 0.0;
    }
    param_1 = (undefined4 *)(fVar2 * fVar1 + *(float *)((int)fVar3 + 0xe4));
    if (0.0 <= (float)param_1) {
      if (1.0 < (float)param_1) {
        param_1 = (undefined4 *)0x3f800000;
      }
    }
    else {
      param_1 = (undefined4 *)0x0;
    }
    FUN_00407070(&param_1,(float)param_1);
  }
  local_8 = (float)puVar4 * local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  param_1 = (undefined4 *)(local_8 * (float)param_1);
  cVar13 = SUB41(param_2,0);
  if ((cVar13 == '\0') || (iVar10 = FUN_004345e0(), iVar10 == 0)) {
    piVar12 = *(int **)((int)this + 0xc7c);
    if (*(int **)((int)this + 0xc7c) == (int *)0x0) {
      piVar12 = this;
    }
    iVar10 = FUN_0059bbd0(piVar12);
    pvVar11 = (void *)FUN_004319b0(iVar10);
  }
  else {
    iVar10 = FUN_004345e0();
    iVar10 = FUN_00433ab0(iVar10);
    pvVar11 = *(void **)(iVar10 + 0xc);
  }
  if (((pvVar11 == (void *)0x0) || (bVar5 = FUN_009cea90(pvVar11,5), !bVar5)) ||
     (*(int *)((int)this + 0x4a0) != 1)) {
    param_2 = 0.0;
  }
  else {
    param_2 = DAT_00e53e44;
  }
  fVar14 = FUN_00587f60(this,3,cVar13);
  param_1 = (undefined4 *)(float)((float10)param_2 + (float10)(float)param_1 + fVar14);
  fVar14 = FUN_00587f60(this,4,cVar13);
  param_1 = (undefined4 *)(float)(fVar14 + (float10)(float)param_1);
  if ((cVar13 == '\0') || (iVar10 = FUN_004345e0(), iVar10 == 0)) {
    piVar12 = *(int **)((int)this + 0xc7c);
    if (*(int **)((int)this + 0xc7c) == (int *)0x0) {
      piVar12 = this;
    }
    iVar10 = FUN_0059bbd0(piVar12);
    pvVar11 = (void *)FUN_004319b0(iVar10);
  }
  else {
    iVar10 = FUN_004345e0();
    iVar10 = FUN_00433ab0(iVar10);
    pvVar11 = *(void **)(iVar10 + 0xc);
  }
  if (((pvVar11 == (void *)0x0) || (bVar5 = FUN_009cea90(pvVar11,0xc), !bVar5)) ||
     (fVar3 = _DAT_00e53e50, *(int *)((int)this + 0x4a0) != 0)) {
    fVar3 = 0.0;
  }
  FUN_00407070(unaff_retaddr,fVar3 + (float)param_1);
  return unaff_retaddr;
}


//// FUNCTION FUN_00590020 @ 00590020 ////

undefined4 * __thiscall FUN_00590020(void *this,undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0xc7c);
  if (*(int **)((int)this + 0xc7c) == (int *)0x0) {
    piVar3 = this;
  }
  iVar1 = FUN_0059bbd0(piVar3);
  fVar2 = (float)FUN_00430600(iVar1);
  FUN_0058fb60(this,param_1,fVar2);
  return param_1;
}


//// FUNCTION FUN_00590060 @ 00590060 ////

uint __fastcall FUN_00590060(int param_1)

{
  void *this;
  undefined4 *puVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  
  puVar1 = DAT_0104d688;
  do {
    if (puVar1 == &DAT_0104d694) {
      return in_EAX & 0xffffff00;
    }
    this = (void *)puVar1[2];
    if (this != (void *)0x0) {
      iVar2 = FUN_005b22a0((int)this);
      in_EAX = 0;
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_005b22a0((int)this);
        in_EAX = (**(code **)(*piVar3 + 0x24))();
        if ((in_EAX != 7) &&
           ((in_EAX = FUN_005b4c80(this,param_1), (char)in_EAX != '\0' ||
            (in_EAX = FUN_005b2780((int)this), in_EAX == param_1)))) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
      }
    }
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}


//// FUNCTION FUN_005900d0 @ 005900d0 ////

void * __fastcall FUN_005900d0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_0104d688;
  do {
    if (puVar1 == &DAT_0104d694) {
      return (void *)0x0;
    }
    this = (void *)puVar1[2];
    if ((this != (void *)0x0) && (iVar2 = FUN_005b22a0((int)this), iVar2 != 0)) {
      piVar3 = (int *)FUN_005b22a0((int)this);
      iVar2 = (**(code **)(*piVar3 + 0x24))();
      if ((iVar2 != 7) &&
         ((uVar4 = FUN_005b4c80(this,param_1), (char)uVar4 != '\0' ||
          (iVar2 = FUN_005b2780((int)this), iVar2 == param_1)))) {
        return this;
      }
    }
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}


//// FUNCTION FUN_00590140 @ 00590140 ////

int __fastcall FUN_00590140(float param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  float local_38 [2];
  int local_30;
  int *local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb38db;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  pvVar2 = FUN_00857d80(local_64);
  local_4 = 0;
  pfVar3 = FUN_00857ae0(pvVar2,param_1);
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
    iVar4 = FUN_00856d90((int)local_38);
    if (iVar4 != 0) {
      uVar5 = FUN_0043b680((void *)(iVar4 + 100),(float *)&stack0x00000004);
      if ((char)uVar5 != '\0') {
        iVar6 = iVar6 + 1;
      }
    }
    FUN_00857260(local_38);
  }
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_c;
  return iVar6;
}


//// FUNCTION FUN_00590290 @ 00590290 ////

void __fastcall FUN_00590290(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *local_38;
  int local_34;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb38f8;
  local_c = ExceptionList;
  local_38 = (undefined4 *)(param_1 + 0x28);
  local_34 = 6;
  ExceptionList = &local_c;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Star.cpp";
      pcVar2 = (char *)&DAT_010581d8;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar2 = pcVar2 + 4;
      }
      local_2c = local_20;
      *pcVar2 = *pcVar5;
      DAT_010581d4 = 0x124d;
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
    uVar3 = FUN_0098b490("Values[x]");
    if ((char)uVar3 != '\0') {
      FUN_00566d60(local_38);
    }
    local_38 = local_38 + 1;
    local_34 = local_34 + -1;
    if (local_34 == 0) {
      FUN_00989780();
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_005903e0 @ 005903e0 ////

float10 __fastcall FUN_005903e0(void *param_1)

{
  float *pfVar1;
  void *local_4;
  
  if (*(float *)((int)param_1 + 0xd1c) < 0.0) {
    local_4 = param_1;
    pfVar1 = FUN_0058f9f0(param_1,(float *)&local_4);
    return (float10)*pfVar1;
  }
  return (float10)*(float *)((int)param_1 + 0xd1c);
}


//// FUNCTION FUN_00590410 @ 00590410 ////

float10 FUN_00590410(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_8;
  
  iVar6 = 0;
  local_8 = 0.0;
  puVar7 = DAT_0104d090;
  if (DAT_0104d090 != &DAT_0104d09c) {
    do {
      iVar2 = puVar7[2];
      if ((iVar2 != 0) && (iVar4 = FUN_005773c0(iVar2), iVar4 != 0)) {
        piVar5 = (int *)FUN_005773c0(iVar2);
        cVar3 = (**(code **)(*piVar5 + 0x3c))();
        if (cVar3 != '\0') {
          iVar6 = iVar6 + 1;
          local_8 = local_8 + *(float *)(iVar2 + 0xd54);
        }
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d09c);
    if (iVar6 != 0) {
      return (float10)local_8 / (float10)iVar6;
    }
  }
  return (float10)local_8;
}


//// FUNCTION FUN_00590490 @ 00590490 ////

float10 FUN_00590490(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float local_8;
  
  iVar6 = 0;
  local_8 = 0.0;
  puVar7 = DAT_0104d090;
  if (DAT_0104d090 != &DAT_0104d09c) {
    do {
      iVar2 = puVar7[2];
      if ((iVar2 != 0) && (iVar4 = FUN_005773c0(iVar2), iVar4 != 0)) {
        piVar5 = (int *)FUN_005773c0(iVar2);
        cVar3 = (**(code **)(*piVar5 + 0x3c))();
        if (cVar3 != '\0') {
          iVar6 = iVar6 + 1;
          local_8 = *(float *)(iVar2 + 0xd54) * *(float *)(iVar2 + 0xd54) + local_8;
        }
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d09c);
    if (iVar6 != 0) {
      local_8 = local_8 / (float)iVar6;
    }
  }
  return SQRT((float10)local_8);
}


//// FUNCTION FUN_005905b0 @ 005905b0 ////

int * __fastcall FUN_005905b0(int *param_1)

{
  FUN_00586dd0(param_1);
  return param_1;
}


//// FUNCTION FUN_005905c0 @ 005905c0 ////

undefined4 * __thiscall
FUN_005905c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00590650 @ 00590650 ////

undefined4 * __thiscall FUN_00590650(void *this,byte param_1)

{
  FUN_0058cf90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00590670 @ 00590670 ////

void __thiscall FUN_00590670(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  void *pvVar7;
  undefined4 uVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  float local_8;
  undefined1 local_4 [4];
  
  fVar2 = param_2;
  local_8 = 0.0;
  iVar3 = FUN_005b2220((int)param_2);
  if ((*(int *)(iVar3 + 100) == 0) ||
     (param_2 = (float)((*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 100)) / 0x18), param_2 == 0.0)) {
    local_8 = 0.5;
  }
  else {
    iVar3 = FUN_005b2220((int)fVar2);
    iVar3 = *(int *)(iVar3 + 100);
    iVar4 = FUN_005b2220((int)fVar2);
    if (iVar3 != *(int *)(iVar4 + 0x68)) {
      do {
        iVar11 = 0;
        pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
        pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
        iVar4 = 0;
        piVar5 = (int *)FUN_005a6470(*(int *)(iVar3 + 0x14));
        piVar5 = (int *)FUN_00ace790(piVar5,iVar4,pTVar9,pTVar10,iVar11);
        if ((piVar5 == (int *)0x0) || (piVar5 == this)) {
          local_8 = local_8 + 0.5;
        }
        else {
          pfVar6 = (float *)FUN_0042e9a0(&param_2,this,piVar5);
          local_8 = local_8 + *pfVar6;
        }
        iVar3 = iVar3 + 0x18;
        iVar4 = FUN_005b2220((int)fVar2);
      } while (iVar3 != *(int *)(iVar4 + 0x68));
    }
    iVar3 = FUN_005b2220((int)fVar2);
    if (*(int *)(iVar3 + 100) == 0) {
      param_2 = 0.0;
    }
    else {
      param_2 = (float)((*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 100)) / 0x18);
    }
    fVar1 = (float)(int)param_2;
    if ((int)param_2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    local_8 = local_8 / fVar1;
  }
  iVar3 = FUN_005b2780((int)fVar2);
  if ((iVar3 != 0) && (pvVar7 = (void *)FUN_005b2780((int)fVar2), pvVar7 != this)) {
    iVar3 = FUN_005b2780((int)fVar2);
    uVar8 = FUN_00598ee0(iVar3);
    if ((char)uVar8 != '\0') {
      iVar4 = 0;
      pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
      pTVar9 = &TM::CStaff::RTTI_Type_Descriptor;
      iVar3 = 0;
      piVar5 = (int *)FUN_005b2780((int)fVar2);
      piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar9,pTVar10,iVar4);
      pfVar6 = (float *)FUN_0042e9a0(&param_2,this,piVar5);
      local_8 = local_8 + *pfVar6;
      goto LAB_005907de;
    }
  }
  local_8 = local_8 + 0.5;
LAB_005907de:
  iVar3 = *(int *)((int)fVar2 + 0xac);
  iVar4 = 0;
  if (iVar3 != (int)fVar2 + 0xb8) {
    do {
      iVar3 = *(int *)(iVar3 + 4);
      iVar4 = iVar4 + 1;
    } while (iVar3 != (int)fVar2 + 0xb8);
    if (iVar4 != 0) {
      iVar3 = *(int *)((int)fVar2 + 0xac);
      param_2 = 0.0;
      for (; iVar3 != (int)fVar2 + 0xb8; iVar3 = *(int *)(iVar3 + 4)) {
        pfVar6 = (float *)(**(code **)(*(int *)this + 0x25c))(local_4,*(undefined4 *)(iVar3 + 8));
        param_2 = param_2 + *pfVar6;
      }
      iVar4 = 0;
      for (iVar3 = *(int *)((int)fVar2 + 0xac); iVar3 != (int)fVar2 + 0xb8;
          iVar3 = *(int *)(iVar3 + 4)) {
        iVar4 = iVar4 + 1;
      }
      fVar2 = (float)iVar4;
      if (iVar4 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      local_8 = param_2 / fVar2 + local_8;
    }
  }
  local_8 = local_8 * 0.33333334;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
    *param_1 = local_8;
    return;
  }
  *param_1 = 0.0;
  return;
}


//// FUNCTION FUN_005909c0 @ 005909c0 ////

void __thiscall FUN_005909c0(void *this,float param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float *unaff_retaddr;
  float local_c [3];
  
  pfVar2 = (float *)FUN_0058fb60(this,&param_2,param_2);
  local_c[0] = *pfVar2;
  pfVar2 = (float *)FUN_00587100(this,&param_2);
  local_c[1] = *pfVar2 * 0.6 + 0.4;
  pfVar3 = (float *)(**(code **)(*(int *)this + 0x238))(&param_2);
  param_1 = 0.0;
  pfVar2 = (float *)&stack0xfffffff0;
  pfVar5 = local_c;
  iVar4 = 2;
  local_c[1] = *pfVar3 * 0.6 + 0.4;
  do {
    if (*pfVar2 <= *pfVar5) {
      fVar6 = (float10)FUN_00ace9b0();
    }
    else {
      fVar6 = (float10)FUN_00ace9b0();
      pfVar2 = pfVar5;
    }
    pfVar5 = pfVar5 + 1;
    iVar4 = iVar4 + -1;
    param_1 = (float)(fVar6 + (float10)param_1);
  } while (iVar4 != 0);
  fVar1 = param_1 + *pfVar2;
  *(float *)((int)this + 0xd18) = fVar1;
  if (fVar1 < 0.0) {
    *unaff_retaddr = 0.0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *unaff_retaddr = fVar1;
  return;
}


//// FUNCTION FUN_00590ad0 @ 00590ad0 ////

undefined4 __thiscall FUN_00590ad0(void *this,undefined4 param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  
  piVar3 = *(int **)((int)this + 0xc7c);
  if (*(int **)((int)this + 0xc7c) == (int *)0x0) {
    piVar3 = this;
  }
  iVar1 = FUN_0059bbd0(piVar3);
  fVar2 = (float)FUN_00430600(iVar1);
  FUN_005909c0(this,param_1,fVar2);
  return param_1;
}


//// FUNCTION CStar_GetAwardsRatingComponent @ 00590b00 ////

float * __thiscall CStar_GetAwardsRatingComponent(void *this,float *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int local_98;
  float *local_94;
  undefined1 local_90 [4];
  undefined **local_8c;
  int local_88;
  int *local_84;
  undefined4 local_78;
  float local_64 [11];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cb392b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar3 = (float *)FUN_0085c530((float *)&local_94);
  uVar4 = FUN_0043b6a0(&DAT_00e4fa4c,pfVar3);
  pfVar3 = (float *)((int)this + 0xcd8);
  local_94 = pfVar3;
  pvVar5 = (void *)FUN_0085bae0(&local_98);
  uVar6 = FUN_0043b6c0(pvVar5,pfVar3);
  if (((char)uVar6 == '\0') || ((char)uVar4 != '\0')) {
    local_98 = 0;
    pvVar5 = FUN_00857d80(local_38);
    local_4 = 0;
    pfVar3 = FUN_00857ae0(pvVar5,(float)this);
    FUN_00500630(local_64,pfVar3);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_005005e0((int)local_38);
    while( true ) {
      pvVar5 = FUN_00857bd0(local_90);
      local_4._0_1_ = 3;
      bVar2 = FUN_00856dd0(local_64,(int)pvVar5);
      local_4 = CONCAT31(local_4._1_3_,2);
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
      if (!bVar2) break;
      local_98 = local_98 + 1;
      FUN_00857260(local_64);
    }
    fVar1 = (float)local_98 * 0.5263158;
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    *(float *)((int)this + 0xcd4) = fVar1;
    *local_94 = DAT_00e4fa4c;
    *param_1 = fVar1;
    FUN_005005e0((int)local_64);
  }
  else {
    FUN_00407070(param_1,*(float *)((int)this + 0xcd4));
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00590cb0 @ 00590cb0 ////

void __thiscall FUN_00590cb0(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar1 = 0.0;
  iVar3 = 0;
  for (iVar2 = *(int *)((int)this + 0x774); iVar2 != *(int *)((int)this + 0x778);
      iVar2 = iVar2 + 0x18) {
    fVar1 = fVar1 + *(float *)(*(int *)(iVar2 + 0x14) + 0xbc);
    iVar3 = iVar3 + 1;
  }
  fVar1 = fVar1 / (float)iVar3;
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


//// FUNCTION FUN_00590d30 @ 00590d30 ////

int __fastcall FUN_00590d30(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  fVar1 = 0.0;
  iVar4 = 0;
  for (iVar3 = *(int *)(param_1 + 0x774); iVar3 != *(int *)(param_1 + 0x778); iVar3 = iVar3 + 0x18)
  {
    iVar2 = *(int *)(iVar3 + 0x14);
    if (fVar1 < *(float *)(iVar2 + 0xbc) != (fVar1 == *(float *)(iVar2 + 0xbc))) {
      fVar1 = *(float *)(iVar2 + 0xbc);
      iVar4 = iVar2;
    }
  }
  return iVar4;
}


//// FUNCTION FUN_00590d80 @ 00590d80 ////

int __thiscall FUN_00590d80(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (7 < param_1) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0xb44);
  while( true ) {
    if (iVar2 == *(int *)((int)this + 0xb48)) {
      return 0;
    }
    iVar1 = *(int *)(iVar2 + 0x14);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x174) == param_1)) break;
    iVar2 = iVar2 + 0x18;
  }
  return iVar1;
}


//// FUNCTION FUN_00590dc0 @ 00590dc0 ////

void __thiscall FUN_00590dc0(void *this,int param_1,undefined4 *param_2,int param_3)

{
  void *this_00;
  
  this_00 = (void *)FUN_00590d80(this,param_1);
  if ((this_00 != (void *)0x0) && (param_3 < 0xd)) {
    FUN_009521b0(this_00,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_00590df0 @ 00590df0 ////

float10 __fastcall FUN_00590df0(int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int *local_4;
  
  if ((float)param_1[0x346] < 0.0) {
    piVar3 = (int *)param_1[799];
    if ((int *)param_1[799] == (int *)0x0) {
      piVar3 = param_1;
    }
    local_4 = param_1;
    iVar1 = FUN_0059bbd0(piVar3);
    fVar2 = (float)FUN_00430600(iVar1);
    FUN_005909c0(param_1,&local_4,fVar2);
    return (float10)(float)local_4;
  }
  return (float10)(float)param_1[0x346];
}


//// FUNCTION FUN_00590e40 @ 00590e40 ////

float10 __fastcall FUN_00590e40(void *param_1)

{
  float *pfVar1;
  void *local_4;
  
  if (*(float *)((int)param_1 + 0xcd4) < 0.0) {
    local_4 = param_1;
    pfVar1 = CStar_GetAwardsRatingComponent(param_1,(float *)&local_4);
    return (float10)*pfVar1;
  }
  return (float10)*(float *)((int)param_1 + 0xcd4);
}


//// FUNCTION FUN_00590e70 @ 00590e70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00590e70(int *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = FUN_005864b0((float)param_1);
  param_1[0x355] = (int)(float)fVar3;
  fVar3 = FUN_00590410();
  local_10 = (float)fVar3;
  fVar3 = FUN_00590490();
  fVar3 = ((float10)_DAT_00e53e54 - (float10)local_10) * (float10)_DAT_00e53e58 +
          ((float10)_DAT_00e53e5c - fVar3) * (float10)_DAT_00e53e60 * (float10)(float)param_1[0x355]
  ;
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
  FUN_0043b620(&DAT_00e4fa4c,&local_c,(float *)(param_1 + 0x356));
  FUN_0043b5f0(&local_c,(float *)&DAT_0104d0bc);
  pfVar1 = (float *)FUN_0043b620(&DAT_0104d0c0,&local_4,(float *)&DAT_0104d0bc);
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
  if ((float10)_DAT_00e53e64 < fVar3) {
    FUN_00586560(param_1);
  }
  return;
}


//// FUNCTION FUN_00591010 @ 00591010 ////

void __thiscall FUN_00591010(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00589920(this,param_2);
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


//// FUNCTION FUN_00591070 @ 00591070 ////

void __thiscall FUN_00591070(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00589920(this,param_2);
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


//// FUNCTION FUN_005910e0 @ 005910e0 ////

void * FUN_005910e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_005905c0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00591130 @ 00591130 ////

void __cdecl FUN_00591130(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d27020;
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


//// FUNCTION FUN_005911a0 @ 005911a0 ////

float10 __fastcall FUN_005911a0(int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int *local_4;
  
  piVar3 = (int *)param_1[799];
  if ((int *)param_1[799] == (int *)0x0) {
    piVar3 = param_1;
  }
  local_4 = param_1;
  iVar1 = FUN_0059bbd0(piVar3);
  fVar2 = (float)FUN_00430600(iVar1);
  FUN_005909c0(param_1,&local_4,fVar2);
  return (float10)(float)local_4;
}


//// FUNCTION FUN_005911d0 @ 005911d0 ////

void __thiscall FUN_005911d0(void *this,int *param_1)

{
  int *piVar1;
  bool bVar2;
  uint *puVar3;
  float *pfVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float10 fVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  void **ppvVar16;
  char **ppcVar17;
  uint local_7c;
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cb3994;
  local_c = ExceptionList;
  local_7c = 0;
  piVar1 = *(int **)((int)this + 0xad8);
  if (piVar1 == param_1) {
    return;
  }
  ExceptionList = &local_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_c;
    FUN_0084b1b0(piVar1,0);
    (**(code **)(*(int *)this + 0x104))();
    if ((*(int *)((int)this + 0xc98) != 0) && (param_1 != (int *)0x0)) {
      puVar3 = (uint *)(**(code **)(**(int **)((int)this + 0xad8) + 0x1cc))();
      local_7c = *puVar3;
      pfVar4 = (float *)(**(code **)(*param_1 + 0x1cc))();
      if (*pfVar4 < (float)&stack0xffffff6c) {
        FUN_00401de0(&pcStack_6c,"star",0xffffffff);
        uStack_4 = 0;
        FUN_00558a50(DAT_00f88624,&pcStack_6c,(undefined4 *)0x1);
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        FUN_00401de0(apvStack_2c,"grudge_worse_trailer",0xffffffff);
        uStack_4 = 1;
        FUN_00401de0(apvStack_4c,"forgiveworsetrailer",0xffffffff);
        FUN_00401de0(&pcStack_6c,"dislikeworsetrailer",0xffffffff);
        pvVar5 = DAT_00f88624;
        iVar6 = *(int *)((int)this + 0xc98);
        ppvVar16 = apvStack_2c;
        uStack_4 = CONCAT31(uStack_4._1_3_,3);
        fVar10 = FUN_00558610(DAT_00f88624,apvStack_4c,0.0);
        fVar15 = (float)fVar10;
        fVar10 = FUN_00558610(pvVar5,&pcStack_6c,0.0);
        fVar14 = (float)fVar10;
        pvVar5 = (void *)FUN_00472a30(iVar6);
        CGrudges_AddOrRefreshGrudge(pvVar5,fVar14,fVar15,ppvVar16);
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
      }
    }
  }
  (**(code **)(*(int *)((int)this + 0xac4) + 4))();
  *(int **)((int)this + 0xad8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xac4))();
  uStack_64 = 0x20;
  uStack_68 = 0;
  acStack_60[0] = '\0';
  if (*(int *)((int)this + 0xad8) != 0) {
    pcStack_6c = acStack_60;
    pcStack_6c = _malloc(0x20);
    _strncpy(pcStack_6c,"PIP_STAR_TRAILER_INCREASED",0x1a);
    uStack_68 = 0x1a;
    pcStack_6c[0x1a] = '\0';
    iVar6 = *(int *)((int)this + 0xb44);
    uStack_4 = 4;
    do {
      if (iVar6 == *(int *)((int)this + 0xb48)) {
LAB_00591444:
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        FUN_0084b1b0(*(void **)((int)this + 0xad8),(int)this);
        iVar6 = *(int *)((int)this + 0xad8);
        if (*(undefined4 **)(iVar6 + 0x508) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar6 + 0x508) = *(undefined4 *)(iVar6 + 0x504);
        }
        if (*(int *)(iVar6 + 0x504) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0x504) + 4) = *(undefined4 *)(iVar6 + 0x508);
        }
        *(undefined4 *)(iVar6 + 0x504) = 0;
        *(undefined4 *)(iVar6 + 0x508) = 0;
        piVar7 = (int *)(*(int *)((int)this + 0xad8) + 0x504);
        piVar1 = (int *)((int)this + 0xaf0);
        *(int **)(*(int *)((int)this + 0xad8) + 0x508) = piVar1;
        *piVar7 = *piVar1;
        *(int **)(*piVar1 + 4) = piVar7;
        *piVar1 = (int)piVar7;
        pvVar5 = (void *)FUN_0059c530((int)this);
        uVar8 = FUN_00529ef0(*(int *)((int)this + 0xad8));
        FUN_00843010(pvVar5,uVar8);
        pvVar5 = operator_new(0x158);
        uStack_4 = 5;
        if (pvVar5 != (void *)0x0) {
          puVar9 = DesireVisitTrailer_Constructor(pvVar5,this,*(int *)((int)this + 0xad8));
          uStack_4 = 0xffffffff;
          TMCharacter_AddResidentDesire(this,(int)puVar9);
          ExceptionList = local_c;
          return;
        }
        uStack_4 = 0xffffffff;
        TMCharacter_AddResidentDesire(this,0);
        ExceptionList = local_c;
        return;
      }
      pvVar5 = *(void **)(iVar6 + 0x14);
      if ((pvVar5 != (void *)0x0) && (*(int *)((int)pvVar5 + 0x174) == 7)) {
        FUN_009521b0(pvVar5,&pcStack_6c,0);
        goto LAB_00591444;
      }
      iVar6 = iVar6 + 0x18;
    } while( true );
  }
  pcStack_6c = acStack_60;
  pcStack_6c = _malloc(0x20);
  _strncpy(pcStack_6c,"PIP_STAR_TRAILER_DECREASED",0x1a);
  uStack_68 = 0x1a;
  pcStack_6c[0x1a] = '\0';
  iVar6 = *(int *)((int)this + 0xb44);
  uStack_4 = 6;
  for (; iVar6 != *(int *)((int)this + 0xb48); iVar6 = iVar6 + 0x18) {
    pvVar5 = *(void **)(iVar6 + 0x14);
    if ((pvVar5 != (void *)0x0) && (*(int *)((int)pvVar5 + 0x174) == 7)) {
      FUN_009521b0(pvVar5,&pcStack_6c,0);
      break;
    }
  }
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_6c);
  }
  pvVar5 = (void *)FUN_0059c530((int)this);
  if (pvVar5 != (void *)0x0) {
    pbVar11 = &stack0xffffff5c;
    uVar12 = 0;
    uVar13 = 0x14;
    FUN_004015d0(&stack0xffffff50,"trailertantrum",0xe);
    puVar9 = FUN_008b9250(pbVar11,uVar12,uVar13);
    FUN_00843010(pvVar5,puVar9);
  }
  (**(code **)(*(int *)this + 0x104))();
  iVar6 = FUN_005998e0((int)this);
  if (iVar6 != 0) {
    pcStack_6c = acStack_60;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x14;
    _strncpy(pcStack_6c,"visittrailer",0xc);
    uStack_68 = 0xc;
    pcStack_6c[0xc] = '\0';
    ppcVar17 = &pcStack_6c;
    uStack_4 = 7;
    local_7c = 1;
    iVar6 = FUN_005998e0((int)this);
    iVar6 = FUN_00401c30(iVar6);
    uVar8 = FUN_00401ec0((undefined4 *)(iVar6 + 100),ppcVar17);
    bVar2 = true;
    if ((char)uVar8 != '\0') goto LAB_005916be;
  }
  bVar2 = false;
LAB_005916be:
  uStack_4 = 0xffffffff;
  if (((local_7c & 1) != 0) && (0x14 < uStack_64)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_6c);
  }
  if (bVar2) {
    puVar9 = (undefined4 *)FUN_005998e0((int)this);
    TMCharacter_CancelAction(this,puVar9);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION CStar_ComputeStarRating @ 00591720 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CStar_ComputeStarRating(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float unaff_ESI;
  float *unaff_retaddr;
  float fVar5;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)FUN_00587d40(param_1,&local_4);
  local_8 = _DAT_00e53e88 * *pfVar1;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = FUN_0058f9f0(param_1,&local_4);
  fVar3 = _DAT_00e53e8c * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_8 = fVar3 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  piVar4 = (int *)param_1[799];
  if ((int *)param_1[799] == (int *)0x0) {
    piVar4 = param_1;
  }
  iVar2 = FUN_0059bbd0(piVar4);
  fVar3 = (float)FUN_00430600(iVar2);
  FUN_005909c0(param_1,&local_4,fVar3);
  local_4 = _DAT_00e53e90 * local_4;
  if (0.0 <= local_4) {
    if (1.0 < local_4) {
      local_4 = 1.0;
    }
  }
  else {
    local_4 = 0.0;
  }
  local_8 = local_4 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = (float *)FUN_00587ee0(param_1,&local_4);
  fVar3 = _DAT_00e53e94 * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_8 = fVar3 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = (float *)FUN_00587e40(param_1,&local_4);
  fVar3 = _DAT_00e53e98 * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_8 = fVar3 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = CStar_GetAwardsRatingComponent(param_1,&local_4);
  fVar3 = _DAT_00e53e9c * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  local_8 = fVar3 + local_8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  pfVar1 = (float *)(**(code **)(*param_1 + 0x240))(&local_4);
  fVar3 = _DAT_00e53ea0 * *pfVar1;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar3 = fVar3 + unaff_ESI;
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  FUN_004950c0(param_1 + 0x2f7,&local_8);
  fVar5 = local_8 * _DAT_00e53ea4;
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  fVar5 = fVar5 + fVar3;
  if (0.0 <= fVar5) {
    if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  if ((void *)param_1[0x344] == (void *)0x0) {
    local_8 = (float)param_1[0x34e];
  }
  else {
    FUN_004914d0((void *)param_1[0x344],&local_8);
  }
  local_8 = local_8 * _DAT_00e53ea8;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  local_8 = local_8 + fVar5;
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
  }
  else {
    local_8 = 0.0;
  }
  local_8 = local_8 + (float)param_1[0x333];
  if (0.0 <= local_8) {
    if (1.0 < local_8) {
      local_8 = 1.0;
    }
    *unaff_retaddr = local_8;
    return;
  }
  *unaff_retaddr = 0.0;
  return;
}


//// FUNCTION FUN_00591bf0 @ 00591bf0 ////

void __fastcall FUN_00591bf0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)CStar_ComputeStarRating(param_1);
  param_1[0x334] = *piVar1;
  return;
}


