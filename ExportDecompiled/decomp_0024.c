//// FUNCTION FUN_0075e8d0 @ 0075e8d0 ////

void __fastcall FUN_0075e8d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4d0e0;
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


//// FUNCTION FUN_0075e920 @ 0075e920 ////

undefined4 __cdecl FUN_0075e920(void *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *local_84;
  undefined4 local_80;
  uint local_7c;
  wchar_t local_78 [10];
  wchar_t *local_64 [2];
  uint local_5c;
  wchar_t *local_44;
  undefined4 local_40;
  uint local_3c;
  wchar_t local_38 [10];
  wchar_t *local_24;
  undefined4 local_20;
  uint local_1c;
  wchar_t local_18 [10];
  undefined4 local_4;
  
  local_4 = 0;
  FUN_004211c0(param_1,local_64,*(int *)((int)param_1 + 4) - 4,4);
  local_84 = local_78;
  local_78[0] = L'\0';
  local_80 = 0;
  local_7c = 10;
  uVar4 = FUN_00ace02d(L".ogg");
  FUN_004036d0(&local_84,L".ogg",uVar4);
  bVar2 = false;
  bVar1 = false;
  iVar5 = _wcscmp(local_64[0],local_84);
  if (iVar5 != 0) {
    local_44 = local_38;
    local_38[0] = L'\0';
    local_40 = 0;
    local_3c = 10;
    uVar4 = FUN_00ace02d(L".wav");
    FUN_004036d0(&local_44,L".wav",uVar4);
    bVar2 = true;
    bVar1 = false;
    iVar5 = _wcscmp(local_64[0],local_44);
    if (iVar5 != 0) {
      local_24 = local_18;
      local_18[0] = L'\0';
      local_20 = 0;
      local_1c = 10;
      uVar4 = FUN_00ace02d(L".wma");
      FUN_004036d0(&local_24,L".wma",uVar4);
      bVar2 = true;
      bVar1 = true;
      iVar5 = _wcscmp(local_64[0],local_24);
      bVar3 = false;
      if (iVar5 != 0) goto LAB_0075ea46;
    }
  }
  bVar3 = true;
LAB_0075ea46:
  if ((bVar1) && (10 < local_1c)) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  if ((bVar2) && (10 < local_3c)) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  if (10 < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_84);
  }
  if (bVar3) {
    if (local_5c < 0xb) {
      return 2;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_64[0]);
  }
  local_84 = local_78;
  local_78[0] = L'\0';
  local_80 = 0;
  local_7c = 10;
  uVar4 = FUN_00ace02d(L".trl");
  FUN_004036d0(&local_84,L".trl",uVar4);
  iVar5 = _wcscmp(local_64[0],local_84);
  if (10 < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_84);
  }
  if (iVar5 != 0) {
    if (local_5c < 0xb) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_64[0]);
  }
  if (local_5c < 0xb) {
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_64[0]);
}


//// FUNCTION FUN_0075ef40 @ 0075ef40 ////

undefined4 * __thiscall
FUN_0075ef40(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *_Memory;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined4 unaff_EBX;
  float10 fVar4;
  float fStack_bc;
  char *local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  char acStack_ac [20];
  char *pcStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  char acStack_8c [20];
  undefined2 *puStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined2 auStack_6c [12];
  undefined1 *local_54;
  void *apvStack_50 [2];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd74f0;
  pvStack_c = ExceptionList;
  local_b8 = (char *)0x0;
  ExceptionList = &pvStack_c;
  local_54 = this;
  FUN_0075e470(this);
  *(undefined ***)this = &PTR_FUN_00d4d18c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4d170;
  *(undefined4 *)((int)this + 0x470) = (undefined2 *)((int)this + 0x47c);
  *(undefined2 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 10;
  local_4 = 0;
  FUN_004036d0((undefined4 *)((int)this + 0x470),(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x498) = 10;
  *(undefined4 *)((int)this + 0x490) = (undefined2 *)((int)this + 0x49c);
  *(undefined2 *)((int)this + 0x49c) = 0;
  *(undefined4 *)((int)this + 0x494) = 0;
  FUN_004036d0((undefined4 *)((int)this + 0x490),(wchar_t *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x4b0) = (undefined2 *)((int)this + 0x4bc);
  *(undefined2 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x4b0),(wchar_t *)*param_3,param_3[1]);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00737e30(this,param_1);
  FUN_00740dc0(this,param_2);
  fVar4 = (float10)(**(code **)(**(int **)(*(int *)(DAT_0104e310 + 0x3b0) + 0x348) + 0x10))();
  FUN_00737db0(this,(float)(fVar4 - (float10)24.0));
  FUN_00737d70(this,0x40800000);
  fStack_bc = (float)(fVar4 - (float10)24.0) - 24.0;
  (**(code **)(**(int **)((int)this + 0x468) + 0x78))();
  *(undefined4 *)(*(int *)((int)this + 0x468) + 0x354) = unaff_EBX;
  FUN_00830e70(*(int **)((int)this + 0x468));
  iVar2 = FUN_0075e920(param_2);
  if (iVar2 != 0) {
    FUN_0075e580(this,iVar2);
  }
  FUN_00741630(this,0,0x75e370,this,"FILEENTRYBUTTON");
  if ((char)param_3 != '\0') {
    puStack_78 = auStack_6c;
    auStack_6c[0] = 0;
    uStack_74 = 0;
    uStack_70 = 10;
    if (iVar2 == 3) {
      local_b8 = acStack_ac;
      acStack_ac[0] = '\0';
      uStack_b4 = 0;
      uStack_b0 = 0x14;
      _strncpy(local_b8,"POST_DELETE_MOVIE",0x11);
      uStack_b4 = 0x11;
      local_b8[0x11] = '\0';
      puStack_8._0_1_ = 5;
      puVar3 = FUN_009b5030(apvStack_30,&local_b8);
      FUN_004036d0(&puStack_78,(wchar_t *)*puVar3,puVar3[1]);
      _Memory = local_b8;
      uVar1 = uStack_b0;
      if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_30[0]);
      }
    }
    else {
      pcStack_98 = acStack_8c;
      acStack_8c[0] = '\0';
      uStack_94 = 0;
      uStack_90 = 0x14;
      _strncpy(pcStack_98,"load_file_delete",0x10);
      uStack_94 = 0x10;
      pcStack_98[0x10] = '\0';
      puStack_8._0_1_ = 6;
      puVar3 = FUN_009b5030(apvStack_50,&pcStack_98);
      FUN_004036d0(&puStack_78,(wchar_t *)*puVar3,puVar3[1]);
      _Memory = pcStack_98;
      uVar1 = uStack_90;
      if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_50[0]);
      }
    }
    if (0x14 < uVar1) {
      puStack_8._0_1_ = 4;
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    puStack_8._0_1_ = 4;
    this_00 = operator_new(0x420);
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_b8 = acStack_ac;
      acStack_ac[0] = '\0';
      uStack_b4 = 0;
      uStack_b0 = 0x14;
      _strncpy(local_b8,"button_delete.",0xe);
      uStack_b4 = 0xe;
      local_b8[0xe] = '\0';
      local_54 = &stack0xffffff20;
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,8);
      fStack_bc = 1.4013e-45;
      puVar3 = FUN_0069fb10(this_00,(int *)&local_b8,&puStack_78,0x41c00000,0x41c00000,0,0,
                            0x3f800000,0x3f800000);
    }
    *(undefined4 **)((int)this + 0x4d0) = puVar3;
    puStack_8 = (undefined1 *)0x4;
    if ((((uint)fStack_bc & 1) != 0) && (0x14 < uStack_b0)) {
                    /* WARNING: Subroutine does not return */
      _free(local_b8);
    }
    (**(code **)(**(int **)((int)this + 0x4d0) + 0x18))();
    (**(code **)(**(int **)((int)this + 0x4d0) + 0x60))(2,this,0x40800000);
    (**(code **)(**(int **)((int)this + 0x4d0) + 100))(1,this,0);
    FUN_0073f6e0(this,*(int **)((int)this + 0x4d0));
    if (10 < uStack_70) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_78);
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_0075f350 @ 0075f350 ////

undefined4 * __thiscall FUN_0075f350(void *this,byte param_1)

{
  FUN_0075f370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075f370 @ 0075f370 ////

void __fastcall FUN_0075f370(undefined4 *param_1)

{
  if (10 < (uint)param_1[0x12e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[300]);
  }
  if (10 < (uint)param_1[0x126]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x124]);
  }
  if (10 < (uint)param_1[0x11e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11c]);
  }
  FUN_005f3230(param_1);
  return;
}


//// FUNCTION FUN_0075f3d0 @ 0075f3d0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_0075f3d0(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  size_t sVar6;
  undefined1 *puVar7;
  uint *puVar8;
  wchar_t *pwVar9;
  uint local_11dc;
  char local_11b5;
  undefined1 *local_11b4;
  wchar_t *local_11b0;
  undefined4 local_11ac;
  uint local_11a8;
  wchar_t local_11a4 [10];
  int local_1190;
  undefined2 *local_118c;
  int local_1188;
  uint local_1184;
  undefined2 local_1180 [10];
  wchar_t *local_116c;
  undefined1 *local_1168;
  uint local_1164;
  wchar_t local_1160 [10];
  wchar_t *local_114c;
  undefined4 local_1148;
  uint local_1144;
  wchar_t local_1140 [10];
  wchar_t local_112c [64];
  uint local_10ac [6];
  wchar_t local_1094 [1834];
  wchar_t *local_240;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd752f;
  pvStack_c = ExceptionList;
  uStack_10 = 0x75f3ef;
  local_11b4 = (undefined1 *)0x0;
  local_118c = local_1180;
  local_1180[0] = 0;
  local_1188 = 0;
  local_1184 = 10;
  local_116c = local_1160;
  local_4 = 0;
  local_1160[0] = L'\0';
  local_1168 = (undefined1 *)0x0;
  local_1164 = 10;
  local_114c = local_1140;
  local_1140[0] = L'\0';
  local_1148 = 0;
  local_1144 = 10;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_114c,(wchar_t *)&lpCaption_00d16918,uVar2);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0040cae0(&local_116c,(wchar_t *)*param_2,param_2[1]);
  FUN_0040cae0(&local_116c,(wchar_t *)*param_1,param_1[1]);
  iVar3 = FUN_00ace02d((short *)&DAT_00d2e120);
  uVar2 = FUN_00420300(param_1,(short *)&DAT_00d2e120,0xffffffff,iVar3);
  iVar3 = FUN_00ace02d((short *)&DAT_00d245f8);
  uVar4 = FUN_00420300(param_1,(short *)&DAT_00d245f8,0xffffffff,iVar3);
  if ((uVar4 != 0xffffffff) && ((uVar2 == 0xffffffff || (uVar2 < uVar4)))) {
    puVar5 = FUN_004211c0(param_1,&local_11b0,uVar4,0xffffffff);
    FUN_004036d0(&local_114c,(wchar_t *)*puVar5,puVar5[1]);
    if (10 < local_11a8) {
                    /* WARNING: Subroutine does not return */
      _free(local_11b0);
    }
  }
  FUN_0055d180((int *)&local_114c);
  local_11b0 = local_11a4;
  local_11a4[0] = L'\0';
  local_11ac = 0;
  local_11a8 = 10;
  uVar2 = FUN_00ace02d(L".trl");
  FUN_004036d0(&local_11b0,L".trl",uVar2);
  iVar3 = _wcscmp(local_114c,local_11b0);
  local_11b5 = '\x01' - (iVar3 != 0);
  if (10 < local_11a8) {
                    /* WARNING: Subroutine does not return */
    _free(local_11b0);
  }
  if (local_11b5 == '\0') {
    local_11b0 = local_11a4;
    local_11a4[0] = L'\0';
    local_11ac = 0;
    local_11a8 = 10;
    uVar2 = FUN_00ace02d(L".ogg");
    FUN_004036d0(&local_11b0,L".ogg",uVar2);
    iVar3 = _wcscmp(local_114c,local_11b0);
    local_11b5 = '\x01' - (iVar3 != 0);
    if (10 < local_11a8) {
                    /* WARNING: Subroutine does not return */
      _free(local_11b0);
    }
    if (local_11b5 == '\0') {
      if (*(char *)(local_1190 + 0x3b5) != '\0') {
        iVar3 = FUN_00ace02d((short *)&DAT_00d2e120);
        local_11b4 = (undefined1 *)FUN_00420300(&local_116c,(short *)&DAT_00d2e120,0xffffffff,iVar3)
        ;
        iVar3 = FUN_00ace02d((short *)&DAT_00d245f8);
        puVar7 = (undefined1 *)FUN_00420300(&local_116c,(short *)&DAT_00d245f8,0xffffffff,iVar3);
        if (puVar7 != (undefined1 *)0xffffffff) {
          if (local_11b4 != (undefined1 *)0xffffffff) {
            local_11b4 = local_11b4 + 1;
            if (puVar7 <= local_11b4) goto LAB_0075f83d;
            local_11b0 = local_11a4;
            local_11a4[0] = L'\0';
            local_11ac = 0;
            local_11a8 = 10;
            uVar2 = FUN_00ace02d(L".ini");
            FUN_004036d0(&local_11b0,L".ini",uVar2);
            bVar1 = FUN_00430a50(&local_114c,&local_11b0);
            if ((!bVar1) || (local_11b5 = '\x01', local_1168 <= local_11b4)) {
              local_11b5 = '\0';
            }
            if (10 < local_11a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_11b0);
            }
            if (local_11b5 != '\0') {
              puVar5 = FUN_004211c0(&local_116c,&local_11b0,(uint)local_11b4,
                                    (int)puVar7 - (int)local_11b4);
              FUN_00403e70(&local_118c,puVar5);
              goto joined_r0x0075f807;
            }
          }
          puVar5 = FUN_004211c0(&local_116c,&local_11b0,0,(uint)puVar7);
          FUN_00403e70(&local_118c,puVar5);
          goto joined_r0x0075f807;
        }
      }
    }
    else {
      local_11b4 = &stack0xffffee18;
      pwVar9 = (wchar_t *)&local_11dc;
      local_11dc = local_11dc & 0xffff0000;
      uVar2 = 0;
      uVar4 = 10;
      FUN_004036d0(&stack0xffffee18,(wchar_t *)*param_1,param_1[1]);
      puVar5 = FUN_0075b400(&local_11b0,pwVar9,uVar2,uVar4);
      FUN_004036d0(&local_118c,(wchar_t *)*puVar5,puVar5[1]);
joined_r0x0075f807:
      if (10 < local_11a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_11b0);
      }
    }
  }
  else {
    puVar8 = local_10ac;
    for (iVar3 = 0x428; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_11b5 = '\0';
    local_11dc = 0x75f5cc;
    uVar2 = FUN_00755190(local_116c,&local_11b5,local_10ac);
    if ((char)uVar2 == '\0') goto LAB_0075f8ac;
    sVar6 = _swprintf(local_112c,0xd18f7c,local_240);
    FUN_0040cae0(&local_118c,local_112c,sVar6);
    sVar6 = FUN_00ace02d((short *)&DAT_00d42108);
    FUN_0040cae0(&local_118c,L" - ",sVar6);
    sVar6 = FUN_00ace02d(local_1094);
    FUN_0040cae0(&local_118c,local_1094,sVar6);
  }
LAB_0075f83d:
  if (local_1188 == 0) {
    FUN_004036d0(&local_118c,(wchar_t *)*param_1,param_1[1]);
  }
  local_11b4 = operator_new(0x4d4);
  local_4._0_1_ = 3;
  if (local_11b4 != (undefined1 *)0x0) {
    local_11dc = 0x75f88d;
    FUN_0075ef40(local_11b4,&local_118c,param_1,param_2);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(**(int **)(local_1190 + 0x43c) + 0xfc))();
LAB_0075f8ac:
  if (10 < local_1144) {
                    /* WARNING: Subroutine does not return */
    _free(local_114c);
  }
  if (local_1164 < 0xb) {
    if (local_1184 < 0xb) {
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_118c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_116c);
}


//// FUNCTION FUN_0075f910 @ 0075f910 ////

void __thiscall FUN_0075f910(void *this,undefined4 *param_1)

{
  size_t sVar1;
  wchar_t *pwVar2;
  uint _Count;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  wchar_t *_Str;
  uint local_84;
  wchar_t *local_80;
  uint local_7c;
  uint local_78;
  wchar_t local_74 [10];
  undefined4 local_60 [16];
  undefined1 local_20;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd7558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009f2760(local_60);
  local_4 = 0;
  local_20 = 0;
  iVar5 = 0;
  for (local_84 = 0;
      (*(int *)((int)this + 0x3bc) != 0 &&
      (local_84 < (uint)(*(int *)((int)this + 0x3c0) - *(int *)((int)this + 0x3bc) >> 5)));
      local_84 = local_84 + 1) {
    local_80 = local_74;
    local_74[0] = L'\0';
    local_7c = 0;
    local_78 = 10;
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar4 = (undefined4 *)(*(int *)((int)this + 0x3bc) + iVar5);
    sVar1 = FUN_00ace02d((short *)&DAT_00d4d288);
    FUN_0040cae0(&local_80,L"*.",sVar1);
    FUN_0040cae0(&local_80,(wchar_t *)*puVar4,puVar4[1]);
    FUN_009f34b0(local_60,local_80,(wchar_t *)*param_1);
    if (10 < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_80);
    }
    iVar5 = iVar5 + 0x20;
  }
  local_84 = 0;
  while( true ) {
    if ((local_18 == 0) || ((uint)(local_14 - local_18 >> 2) <= local_84)) {
      local_4 = 0xffffffff;
      FUN_009f2320(local_60);
      ExceptionList = local_c;
      return;
    }
    _Str = *(wchar_t **)(local_18 + local_84 * 4);
    pwVar2 = _wcsrchr(_Str,L'\\');
    if (pwVar2 != (wchar_t *)0x0) {
      _Str = pwVar2 + 1;
    }
    local_80 = local_74;
    local_74[0] = L'\0';
    local_7c = 0;
    local_78 = 10;
    _Count = FUN_00ace02d(_Str);
    if (local_78 <= _Count) {
      if (10 < local_78) {
                    /* WARNING: Subroutine does not return */
        _free(local_80);
      }
      uVar3 = _Count + 0x20 >> 5;
      local_78 = uVar3 << 5;
      local_80 = _malloc(uVar3 * 0x40);
    }
    _wcsncpy(local_80,_Str,_Count);
    local_80[_Count] = L'\0';
    local_4 = CONCAT31(local_4._1_3_,2);
    local_7c = _Count;
    FUN_0075f3d0(&local_80,param_1);
    if (10 < local_78) break;
    local_84 = local_84 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_80);
}


//// FUNCTION FUN_0075fb40 @ 0075fb40 ////

void __fastcall FUN_0075fb40(void *param_1)

{
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd7578;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0040cae0(&local_2c,*(wchar_t **)((int)param_1 + 0x3c8),*(size_t *)((int)param_1 + 0x3cc));
  FUN_0040cae0(&local_2c,*(wchar_t **)((int)param_1 + 1000),*(size_t *)((int)param_1 + 0x3ec));
  FUN_0075f910(param_1,&local_2c);
  if ((*(int *)((int)param_1 + 0x3ec) == 0) && (*(int *)((int)param_1 + 0x40c) != 0)) {
    FUN_0075f910(param_1,(undefined4 *)((int)param_1 + 0x408));
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0075fc10 @ 0075fc10 ////

void __thiscall FUN_0075fc10(void *this,undefined4 *param_1)

{
  FUN_004036d0((undefined4 *)((int)this + 0x408),(wchar_t *)*param_1,param_1[1]);
  if (*(int *)((int)this + 0x40c) != 0) {
    FUN_0075f910(this,(undefined4 *)((int)this + 0x408));
  }
  return;
}


//// FUNCTION FUN_0075fc50 @ 0075fc50 ////

void __fastcall FUN_0075fc50(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd75ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4d2ac;
  param_1[0x14] = &PTR_LAB_00d4d294;
  local_4 = 6;
  (*(code *)DAT_0104e2fc[1])();
  DAT_0104e310 = 0;
  (*(code *)*DAT_0104e2fc)();
  param_1[0x110] = &PTR_LAB_00d4d0d0;
  if ((undefined4 *)param_1[0x112] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x112] = param_1[0x111];
  }
  if (param_1[0x111] != 0) {
    *(undefined4 *)(param_1[0x111] + 4) = param_1[0x112];
  }
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x115] = 0;
  if ((undefined4 *)param_1[0x112] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x112] = param_1[0x111];
  }
  if (param_1[0x111] != 0) {
    *(undefined4 *)(param_1[0x111] + 4) = param_1[0x112];
  }
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x10a] = &PTR_LAB_00d2db54;
  if ((undefined4 *)param_1[0x10c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10c] = param_1[0x10b];
  }
  if (param_1[0x10b] != 0) {
    *(undefined4 *)(param_1[0x10b] + 4) = param_1[0x10c];
  }
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10f] = 0;
  if ((undefined4 *)param_1[0x10c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10c] = param_1[0x10b];
  }
  if (param_1[0x10b] != 0) {
    *(undefined4 *)(param_1[0x10b] + 4) = param_1[0x10c];
  }
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  if (10 < (uint)param_1[0x104]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x102]);
  }
  if (10 < (uint)param_1[0xfc]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xfa]);
  }
  if (10 < (uint)param_1[0xf4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf2]);
  }
  if ((undefined4 *)param_1[0xef] != (undefined4 *)0x0) {
    FUN_00481090((undefined4 *)param_1[0xef],(undefined4 *)param_1[0xf0]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xef]);
  }
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0075fe30 @ 0075fe30 ////

undefined4 * __thiscall FUN_0075fe30(void *this,byte param_1)

{
  FUN_0075fc50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0075fe50 @ 0075fe50 ////

/* WARNING: Removing unreachable block (ram,0x007600be) */
/* WARNING: Removing unreachable block (ram,0x00760165) */
/* WARNING: Removing unreachable block (ram,0x00760170) */
/* WARNING: Removing unreachable block (ram,0x0076018d) */
/* WARNING: Removing unreachable block (ram,0x00760172) */
/* WARNING: Removing unreachable block (ram,0x00760177) */
/* WARNING: Removing unreachable block (ram,0x00760186) */
/* WARNING: Removing unreachable block (ram,0x007600d5) */
/* WARNING: Removing unreachable block (ram,0x0076011e) */
/* WARNING: Removing unreachable block (ram,0x0076010d) */
/* WARNING: Removing unreachable block (ram,0x00760120) */
/* WARNING: Removing unreachable block (ram,0x0076014c) */
/* WARNING: Removing unreachable block (ram,0x00760159) */

void __fastcall FUN_0075fe50(int param_1)

{
  void *this;
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  wchar_t awStack_f0 [6];
  undefined4 uStack_e4;
  undefined2 *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc [2];
  undefined4 uStack_c8;
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd769a;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0040cae0(&local_4c,*(wchar_t **)(param_1 + 0x3c8),*(size_t *)(param_1 + 0x3cc));
  FUN_0040cae0(&local_4c,*(wchar_t **)(param_1 + 1000),*(size_t *)(param_1 + 0x3ec));
  if (*(int *)(param_1 + 0x3ec) != 0) {
    this = operator_new(0x490);
    bVar3 = this != (void *)0x0;
    if (bVar3) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"FRONTEND_BACK",0xd);
      local_68 = 0xd;
      local_6c[0xd] = '\0';
      local_8c = local_80;
      local_80[0] = 0;
      local_88 = 0;
      local_84 = 10;
      uStack_c8 = 0x75ff42;
      uVar1 = FUN_00ace02d((short *)&DAT_00d4d3b0);
      FUN_004036d0(&local_8c,L"..",uVar1);
      local_4 = 3;
      puVar2 = FUN_009b5030(local_2c,&local_6c);
      local_4 = 4;
      FUN_007605e0(this,&local_8c,puVar2);
    }
    local_4 = 7;
    (**(code **)(**(int **)(param_1 + 0x43c) + 0xfc))();
    if ((bVar3) && (10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if ((bVar3) && (10 < local_84)) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_4 = 0;
    if ((bVar3) && (0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_d8 = local_cc;
  local_4._0_1_ = 8;
  local_cc[0] = 0;
  local_d4 = 0;
  local_d0 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  uStack_e4 = 0x760073;
  FUN_004036d0(&local_d8,(wchar_t *)&lpCaption_00d16918,uVar1);
  pwVar4 = awStack_f0;
  awStack_f0[0] = L'\0';
  uVar5 = 0;
  uVar1 = 10;
  FUN_004036d0(&stack0xffffff04,local_4c,local_48);
  FUN_009f2ac0(pwVar4,uVar5,uVar1);
  if (local_44 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_007601d0 @ 007601d0 ////

void __fastcall FUN_007601d0(int *param_1)

{
  char cVar1;
  void *this;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd76bb;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[0x10f];
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x10a] + 4))();
    param_1[0x10f] = 0;
    (**(code **)param_1[0x10a])();
  }
  (**(code **)(param_1[0x110] + 4))();
  param_1[0x115] = 0;
  (**(code **)param_1[0x110])();
  this = operator_new(0x3c0);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_006b4f50(this,1,1);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(param_1[0x10a] + 4))();
  param_1[0x10f] = (int)puVar2;
  (**(code **)param_1[0x10a])();
  (**(code **)(*(int *)param_1[0x10f] + 0x5c))(1,*(undefined4 *)(param_1[0xec] + 0x348),0);
  (**(code **)(*(int *)param_1[0x10f] + 100))(1,*(undefined4 *)(param_1[0xec] + 0x348),0);
  (**(code **)(*param_1 + 0x18))(0xc,&LAB_0075e180,param_1,0);
  (**(code **)(*param_1 + 0x18))(0xd,&LAB_0075e1c0,param_1,0);
  (**(code **)(*(int *)param_1[0x10f] + 0x18))(0xc,&LAB_0075e180,param_1,0);
  (**(code **)(*(int *)param_1[0x10f] + 0x18))(0xd,&LAB_0075e1c0,param_1,0);
  (**(code **)(*(int *)param_1[0xec] + 0x18))(0xc,&LAB_0075e180,param_1,0);
  piVar3 = param_1;
  (**(code **)(*(int *)param_1[0xec] + 0x18))(0xd,&LAB_0075e1c0,param_1,0);
  (**(code **)(**(int **)(param_1[0xec] + 0x348) + 0xc))(param_1[0x10f],1);
  FUN_0071ef40((void *)param_1[0xec],0.0,0.0);
  FUN_0075fe50((int)param_1);
  FUN_0075fb40(param_1);
  if (*(char *)((int)param_1 + 0x3b6) != '\0') {
    *(undefined1 *)((int)param_1 + 0x3b6) = 1;
    if ((int *)param_1[0x10f] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x10f] + 0x104))(FUN_0075e230);
    }
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  ExceptionList = piVar3;
  return;
}


//// FUNCTION FUN_007603c0 @ 007603c0 ////

void __thiscall FUN_007603c0(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  wchar_t *local_20;
  undefined4 local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  iVar1 = FUN_00ace790(param_1,0,&TM::WFileSelectorButton::RTTI_Type_Descriptor,
                       &TM::WFileEntryButton::RTTI_Type_Descriptor,0);
  iVar2 = FUN_00ace790(param_1,0,&TM::WFileSelectorButton::RTTI_Type_Descriptor,
                       &TM::WDirEntryButton::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_004036d0(&PTR_DAT_00e591e4,*(wchar_t **)(iVar1 + 0x490),*(uint *)(iVar1 + 0x494));
    FUN_004036d0(&PTR_DAT_00e59204,*(wchar_t **)(iVar1 + 0x4b0),*(uint *)(iVar1 + 0x4b4));
    (**(code **)(**(int **)((int)this + 0x3a8) + 0xc0))(1);
    goto LAB_00760593;
  }
  if (iVar2 == 0) goto LAB_00760593;
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  uVar3 = FUN_00ace02d((short *)&DAT_00d4d3b0);
  FUN_004036d0(&local_20,L"..",uVar3);
  iVar1 = _wcscmp(*(wchar_t **)(iVar2 + 0x470),local_20);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0x3ec) != 0) {
      this_00 = (void *)((int)this + 1000);
      puVar4 = FUN_004211c0(this_00,&local_20,0,*(int *)((int)this + 0x3ec) - 1);
      FUN_004036d0(this_00,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
      iVar1 = FUN_00ace02d((short *)&DAT_00d2e120);
      iVar1 = FUN_00420300(this_00,(short *)&DAT_00d2e120,0xffffffff,iVar1);
      puVar4 = FUN_004211c0(this_00,&local_20,0,iVar1 + 1);
      FUN_004036d0(this_00,(wchar_t *)*puVar4,puVar4[1]);
      goto joined_r0x00760579;
    }
  }
  else {
    puVar4 = FUN_0043be60(&local_20,(undefined4 *)(iVar2 + 0x470),L"\\");
    FUN_0040cae0((void *)((int)this + 1000),(wchar_t *)*puVar4,puVar4[1]);
joined_r0x00760579:
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  FUN_007601d0(this);
LAB_00760593:
  (**(code **)(*(int *)((int)this + 0x440) + 4))();
  *(int **)((int)this + 0x454) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x440))();
  return;
}


//// FUNCTION FUN_007605e0 @ 007605e0 ////

undefined4 * __thiscall FUN_007605e0(void *this,undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  wchar_t *pwStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  wchar_t awStack_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd76e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0075e470(this);
  *(undefined ***)this = &PTR_FUN_00d4d3e4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4d3cc;
  *(undefined4 *)((int)this + 0x470) = (undefined2 *)((int)this + 0x47c);
  *(undefined2 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 10;
  local_4 = 0;
  FUN_004036d0((undefined4 *)((int)this + 0x470),(wchar_t *)*param_1,param_1[1]);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00737e30(this,param_2);
  fVar3 = (float10)(**(code **)(**(int **)(*(int *)(DAT_0104e310 + 0x3b0) + 0x348) + 0x10))();
  FUN_00737db0(this,(float)(fVar3 - (float10)24.0));
  FUN_00737d70(this,0x40800000);
  pwStack_2c = awStack_20;
  awStack_20[0] = L'\0';
  uStack_28 = 0;
  uStack_24 = 10;
  uVar1 = FUN_00ace02d((short *)&DAT_00d4d3b0);
  FUN_004036d0(&pwStack_2c,L"..",uVar1);
  iVar2 = _wcscmp((wchar_t *)*param_1,pwStack_2c);
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_2c);
  }
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 4;
  }
  FUN_0075e580(this,uVar4);
  FUN_00741630(this,0,0x7605c0,this,"FILEENTRYBUTTON");
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00760730 @ 00760730 ////

undefined4 * __thiscall FUN_00760730(void *this,byte param_1)

{
  FUN_00760750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00760750 @ 00760750 ////

void __fastcall FUN_00760750(undefined4 *param_1)

{
  if (10 < (uint)param_1[0x11e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11c]);
  }
  FUN_005f3230(param_1);
  return;
}


//// FUNCTION FUN_00760780 @ 00760780 ////

int * __thiscall
FUN_00760780(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 param_5,undefined1 param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  size_t sVar7;
  void *pvVar8;
  void *unaff_EBX;
  void *unaff_EBP;
  float10 fVar9;
  int iStack_120;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uStack_fc;
  uint uStack_ec;
  void *pvStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  char *_Memory;
  undefined1 *puVar12;
  char *pcVar13;
  float fVar14;
  undefined4 **ppuStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  void *pvStack_80;
  undefined1 *puStack_7c;
  char *pcStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  char acStack_6c [4];
  uint uStack_68;
  char *pcStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  char acStack_4c [28];
  undefined2 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 auStack_24 [10];
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd788b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = this;
  FUN_006889c0(this,'\0');
  *(undefined ***)this = &PTR_FUN_00d4d2ac;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d4d294;
  *(undefined1 *)((int)this + 0x3b4) = param_5;
  *(undefined1 *)((int)this + 0x3b5) = param_6;
  *(undefined1 *)((int)this + 0x3b6) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined2 **)((int)this + 0x3c8) = (undefined2 *)((int)this + 0x3d4);
  *(undefined2 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 10;
  *(undefined4 *)((int)this + 1000) = (undefined2 *)((int)this + 0x3f4);
  *(undefined2 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 10;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 1000),(wchar_t *)&lpCaption_00d16918,uVar3);
  *(undefined4 *)((int)this + 0x408) = (undefined2 *)((int)this + 0x414);
  *(undefined2 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 10;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 **)((int)this + 0x434) = (undefined4 *)((int)this + 0x428);
  *(undefined4 *)((int)this + 0x428) = &PTR_LAB_00d2db54;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 **)((int)this + 0x44c) = (undefined4 *)((int)this + 0x440);
  *(undefined4 *)((int)this + 0x440) = &PTR_LAB_00d4d0d0;
  *(undefined4 *)((int)this + 0x454) = 0;
  local_4._0_1_ = 6;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 0x408),(wchar_t *)&lpCaption_00d16918,uVar3);
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  *(int *)((int)this + 0x458) = param_4;
  FUN_0073e4e0(this,0x44160000);
  piVar4 = (int *)FUN_0071b2a0();
  fVar9 = (float10)(**(code **)(*piVar4 + 0x10))();
  pcStack_78 = (char *)(float)fVar9;
  fVar9 = FUN_0073e630((int)this);
  fVar14 = (float)(((float10)(float)pcStack_78 - fVar9) * (float10)0.5);
  iVar5 = FUN_0071b2a0();
  FUN_00741940(this,1,iVar5,fVar14);
  piVar4 = (int *)FUN_0071b2a0();
  fVar9 = (float10)(**(code **)(*piVar4 + 0x14))();
  pcStack_78 = (char *)(float)fVar9;
  fVar9 = FUN_0073e640((int)this);
  fVar14 = (float)(((float10)(float)pcStack_78 - fVar9) * (float10)0.5);
  iVar5 = FUN_0071b2a0();
  FUN_00741b60(this,1,iVar5,fVar14);
  puStack_30 = auStack_24;
  auStack_24[0] = 0;
  uStack_2c = 0;
  uStack_28 = 10;
  local_4 = CONCAT31(local_4._1_3_,7);
  puVar6 = FUN_009b5030(&puStack_70,param_1);
  sVar7 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  FUN_0040cae0(&puStack_30,L"<P ALIGN\t= CENTER>",sVar7);
  FUN_0040cae0(&puStack_30,(wchar_t *)*puVar6,puVar6[1]);
  sVar7 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&puStack_30,L"</P>",sVar7);
  if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_70);
  }
  FUN_006888d0(this,&puStack_30);
  piVar4 = (int *)FUN_0071b2a0();
  uVar3 = 1;
  (**(code **)(*piVar4 + 0xc))();
  pvVar8 = operator_new(0x420);
  pvStack_80 = pvVar8;
  if (pvVar8 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    pcStack_78 = acStack_6c;
    acStack_6c[0] = '\0';
    uStack_74 = 0;
    puStack_70 = &DAT_00000014;
    _strncpy(pcStack_78,"button_ok",9);
    uStack_74 = 9;
    pcStack_78[9] = '\0';
    pcStack_58 = acStack_4c;
    acStack_4c[0] = '\0';
    uStack_54 = 0;
    uStack_50 = 0x14;
    _strncpy(pcStack_58,"button_tick.",0xc);
    uStack_54 = 0xc;
    pcStack_58[0xc] = '\0';
    pvStack_c = (void *)0xa;
    uStack_dc = 0x760ab6;
    puVar6 = FUN_009b5030((undefined4 *)&stack0xffffff5c,&pcStack_78);
    puStack_7c = &stack0xffffff38;
    pvStack_c = (void *)0xb;
    unaff_EBP = (void *)0x7;
    uStack_dc = 0x760af9;
    puVar6 = FUN_0069fb10(pvVar8,(int *)&pcStack_58,puVar6,0x42800000,0x42800000,0,0,0x3f800000,
                          0x3f800000);
  }
  *(undefined4 **)((int)this + 0x3a8) = puVar6;
  if ((((uint)unaff_EBP & 4) != 0) &&
     (unaff_EBP = (void *)((uint)unaff_EBP & 0xfffffffb), &lpType_0000000a < ppuStack_9c)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  if ((((uint)unaff_EBP & 2) != 0) &&
     (unaff_EBP = (void *)((uint)unaff_EBP & 0xfffffffd), 0x14 < uStack_50)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_58);
  }
  pvStack_c = (void *)0x7;
  if ((((uint)unaff_EBP & 1) != 0) &&
     (unaff_EBP = (void *)((uint)unaff_EBP & 0xfffffffe), &DAT_00000014 < puStack_70)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_78);
  }
  puVar12 = *(undefined1 **)((int)this + 0x458);
  pcVar13 = "FILESELECTOR_OK";
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x18))();
  _Memory = "FILESELECTOR_OK";
  uStack_dc = 0x760bb6;
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x18))();
  uStack_e0 = *(uint *)((int)this + 0x36c);
  uStack_dc = 0x41200000;
  uStack_e4 = 2;
  pvStack_e8 = (void *)0x760bcf;
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x60))();
  uStack_ec = *(uint *)((int)this + 0x36c);
  pvStack_e8 = (void *)0x41000000;
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x68))();
  (**(code **)(**(int **)((int)this + 0x3a8) + 0xc0))();
  uStack_fc = *(uint *)((int)this + 0x3a8);
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    ppuStack_9c = &puStack_90;
    puStack_90 = (undefined4 *)((uint)puStack_90 & 0xffffff00);
    uStack_98 = 0;
    uStack_94 = 0x14;
    _strncpy((char *)ppuStack_9c,"button_cancel",0xd);
    uStack_98 = 0xd;
    *(char *)((int)ppuStack_9c + 0xd) = '\0';
    pcVar13 = &stack0xffffff50;
    uVar3 = 0x14;
    _strncpy(pcVar13,"button_quit.",0xc);
    pcVar13[0xc] = '\0';
    uStack_50 = 0x11;
    iStack_120 = 0x760cc2;
    puVar6 = FUN_009b5030(&pvStack_e8,&ppuStack_9c);
    puVar12 = &stack0xfffffef4;
    uStack_ec = uStack_ec | 0x38;
    uStack_50 = 0x12;
    iStack_120 = 0x760d08;
    puVar6 = FUN_0069fb10(pvVar8,(int *)&stack0xffffff44,puVar6,0x42800000,0x42800000,0,0,0x3f800000
                          ,0x3f800000);
  }
  *(undefined4 **)((int)this + 0x3ac) = puVar6;
  if (((uStack_ec & 0x20) != 0) && (uStack_ec = uStack_ec & 0xffffffdf, 10 < uStack_e0)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_e8);
  }
  if (((uStack_ec & 0x10) != 0) && (uStack_ec = uStack_ec & 0xffffffef, 0x14 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar13);
  }
  uStack_50 = 7;
  if (((uStack_ec & 8) != 0) && (0x14 < uStack_94)) {
                    /* WARNING: Subroutine does not return */
    _free(ppuStack_9c);
  }
  pcVar13 = this;
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x18))();
  iStack_120 = 0x760dc3;
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x18))();
  iStack_120 = 0x41200000;
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x3ac) + 0x68))();
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  puVar6 = operator_new(0x358);
  puStack_90._0_1_ = 0x16;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_0071eda0(puVar6);
  }
  *(undefined4 **)((int)this + 0x3b0) = puVar6;
  puVar6[0xd1] = puVar6[0xd1] & 0xfffffff7 | 4;
  puVar1 = (uint *)(*(int *)((int)this + 0x3b0) + 0x344);
  *puVar1 = *puVar1 & 0xfffffffc;
  iVar5 = *(int *)((int)this + 0x36c);
  iStack_120 = 0;
  piVar4 = (int *)0x0;
  if (iVar5 != 0) {
    piVar4 = (int *)(iVar5 + 0x18);
    iStack_120 = *piVar4;
    *(int **)(*piVar4 + 4) = &iStack_120;
    *piVar4 = (int)&iStack_120;
  }
  uVar10 = 0x41c00000;
  uVar11 = 0x41c00000;
  iVar2 = *(int *)((int)this + 0x3b0);
  *(undefined4 *)(iVar2 + 0xa0) = 1;
  puStack_90._0_1_ = 0x17;
  (**(code **)(*(int *)(iVar2 + 0xa4) + 4))();
  *(int *)(iVar2 + 0xb8) = iVar5;
  (*(code *)**(undefined4 **)(iVar2 + 0xa4))();
  *(undefined4 *)(iVar2 + 0xbc) = uVar10;
  *(undefined4 *)(iVar2 + 0xc0) = uVar11;
  if (piVar4 != (int *)0x0) {
    *piVar4 = iStack_120;
  }
  if (iStack_120 != 0) {
    *(int **)(iStack_120 + 4) = piVar4;
  }
  iVar5 = *(int *)((int)this + 0x36c);
  iStack_120 = 0;
  piVar4 = (int *)0x0;
  if (iVar5 != 0) {
    piVar4 = (int *)(iVar5 + 0x18);
    iStack_120 = *piVar4;
    *(int **)(*piVar4 + 4) = &iStack_120;
    *piVar4 = (int)&iStack_120;
  }
  uVar10 = 0x41c00000;
  uVar11 = 0x41c00000;
  iVar2 = *(int *)((int)this + 0x3b0);
  *(undefined4 *)(iVar2 + 0xe8) = 2;
  puStack_90._0_1_ = 0x18;
  (**(code **)(*(int *)(iVar2 + 0xec) + 4))();
  *(int *)(iVar2 + 0x100) = iVar5;
  (*(code *)**(undefined4 **)(iVar2 + 0xec))();
  *(undefined4 *)(iVar2 + 0x104) = uVar10;
  *(undefined4 *)(iVar2 + 0x108) = uVar11;
  if (piVar4 != (int *)0x0) {
    *piVar4 = iStack_120;
  }
  if (iStack_120 != 0) {
    *(int **)(iStack_120 + 4) = piVar4;
  }
  iVar5 = *(int *)((int)this + 0x36c);
  iStack_120 = 0;
  piVar4 = (int *)0x0;
  if (iVar5 != 0) {
    piVar4 = (int *)(iVar5 + 0x18);
    iStack_120 = *piVar4;
    *(int **)(*piVar4 + 4) = &iStack_120;
    *piVar4 = (int)&iStack_120;
  }
  uVar10 = 0x41400000;
  uVar11 = 0x41400000;
  iVar2 = *(int *)((int)this + 0x3b0);
  *(undefined4 *)(iVar2 + 0x7c) = 1;
  puStack_90._0_1_ = 0x19;
  (**(code **)(*(int *)(iVar2 + 0x80) + 4))();
  *(int *)(iVar2 + 0x94) = iVar5;
  (*(code *)**(undefined4 **)(iVar2 + 0x80))();
  *(undefined4 *)(iVar2 + 0x98) = uVar10;
  *(undefined4 *)(iVar2 + 0x9c) = uVar11;
  if (piVar4 != (int *)0x0) {
    *piVar4 = iStack_120;
  }
  if (iStack_120 != 0) {
    *(int **)(iStack_120 + 4) = piVar4;
  }
  iVar5 = *(int *)((int)this + 0x3ac);
  iStack_120 = 0;
  piVar4 = (int *)0x0;
  if (iVar5 != 0) {
    piVar4 = (int *)(iVar5 + 0x18);
    iStack_120 = *piVar4;
    *(int **)(*piVar4 + 4) = &iStack_120;
    *piVar4 = (int)&iStack_120;
  }
  uVar10 = 0xc1c00000;
  uVar11 = 0xc1c00000;
  iVar2 = *(int *)((int)this + 0x3b0);
  *(undefined4 *)(iVar2 + 0xc4) = 1;
  puStack_90._0_1_ = 0x1a;
  (**(code **)(*(int *)(iVar2 + 200) + 4))();
  *(int *)(iVar2 + 0xdc) = iVar5;
  (*(code *)**(undefined4 **)(iVar2 + 200))();
  *(undefined4 *)(iVar2 + 0xe0) = uVar10;
  *(undefined4 *)(iVar2 + 0xe4) = uVar11;
  puStack_90 = (undefined4 *)CONCAT31(puStack_90._1_3_,7);
  if (piVar4 != (int *)0x0) {
    *piVar4 = iStack_120;
  }
  if (iStack_120 != 0) {
    *(int **)(iStack_120 + 4) = piVar4;
  }
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  pvVar8 = operator_new(0x2a8);
  if (pvVar8 != (void *)0x0) {
    uStack_fc = 0x40;
    pcVar13 = _malloc(0x40);
    _strncpy(pcVar13,"ui/pcgui_dialogue_whitething.dds",0x20);
    pcVar13[0x20] = '\0';
    uStack_98 = CONCAT31(uStack_98._1_3_,0x1c);
    FUN_005e73e0(pvVar8,(undefined4 *)&stack0xfffffefc);
  }
  uStack_98 = 7;
  if ((pvVar8 != (void *)0x0) && (0x14 < uStack_fc)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar13);
  }
  (**(code **)(**(int **)((int)this + 0x3b0) + 0xa0))();
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&PTR_DAT_00e591e4,(wchar_t *)&lpCaption_00d16918,uVar3);
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&PTR_DAT_00e59204,(wchar_t *)&lpCaption_00d16918,uVar3);
  FUN_0056cf00(*puStack_8c,0x3b,(void *)((int)this + 0x3b8));
  FUN_004036d0((void *)((int)this + 0x3c8),(wchar_t *)*puStack_90,puStack_90[1]);
  (*(code *)DAT_0104e2fc[1])();
  DAT_0104e310 = this;
  (*(code *)*DAT_0104e2fc)();
  FUN_007601d0(this);
  piVar4 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar4 + 0xac))();
  if (&lpType_0000000a < puVar12) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = unaff_EBP;
  return this;
}


//// FUNCTION FUN_007612e0 @ 007612e0 ////

void __thiscall FUN_007612e0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::WFileSelectorButton::RTTI_Type_Descriptor,
                       &TM::WFileEntryButton::RTTI_Type_Descriptor,0);
  FUN_00ace790(param_1,0,&TM::WFileSelectorButton::RTTI_Type_Descriptor,
               &TM::WDirEntryButton::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_007603c0(this,param_1);
    (**(code **)((int)this + 0x458))(*(undefined4 *)((int)this + 0x3a8),0);
  }
  return;
}


//// FUNCTION FUN_00761340 @ 00761340 ////

int * __cdecl
FUN_00761340(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 param_5,undefined1 param_6)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd78ab;
  local_c = ExceptionList;
  piVar1 = (int *)0x0;
  if ((((DAT_0104e43c == 0) && (DAT_0104e394 == 0)) && (DAT_0104e420 == 0)) && (DAT_0104e5f4 == 0))
  {
    ExceptionList = &local_c;
    if (DAT_0104e310 != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      (**(code **)*DAT_0104e310)(1);
    }
    (*(code *)DAT_0104e2fc[1])();
    DAT_0104e310 = (int *)0x0;
    (*(code *)*DAT_0104e2fc)();
    this = operator_new(0x45c);
    uStack_4 = 0;
    if (this != (void *)0x0) {
      piVar1 = FUN_00760780(this,param_1,param_2,param_3,param_4,param_5,param_6);
    }
    uStack_4 = 0xffffffff;
    (*(code *)DAT_0104e2fc[1])();
    DAT_0104e310 = piVar1;
    (*(code *)*DAT_0104e2fc)();
    ExceptionList = local_c;
    return DAT_0104e310;
  }
  return (int *)0x0;
}


//// FUNCTION FUN_00761480 @ 00761480 ////

uint FUN_00761480(void)

{
  uint uVar1;
  undefined3 uVar2;
  
  uVar1 = 0;
  if (DAT_0104e330 != 0) {
    uVar2 = (undefined3)((uint)DAT_0104e330 >> 8);
    uVar1 = CONCAT31(uVar2,DAT_0104e334);
    if (DAT_0104e334 != '\0') {
      return CONCAT31(uVar2,1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_007614a0 @ 007614a0 ////

int FUN_007614a0(void)

{
  int iVar1;
  
  if ((*(int **)(DAT_0104e330 + 0x3a8) == (int *)0x0) ||
     (iVar1 = **(int **)(DAT_0104e330 + 0x3a8), iVar1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_007614c0 @ 007614c0 ////

int * __thiscall FUN_007614c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION WFMVRender_Tick @ 00761550 ////

void __fastcall WFMVRender_Tick(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0053d480((int)param_1);
  WWindow_Tick(param_1);
  puVar2 = DAT_0104e37c;
  if ((char)param_1[0xee] != '\0') {
    if (DAT_0104e37c != (undefined4 *)0x0) {
      iVar1 = DAT_0104e37c[0x12];
      DAT_0104e37c[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104e368[1])();
      DAT_0104e37c = (undefined4 *)0x0;
      (*(code *)*DAT_0104e368)();
    }
    puVar2 = DAT_0104e330;
    if (DAT_0104e330 != (undefined4 *)0x0) {
      iVar1 = DAT_0104e330[0x12];
      DAT_0104e330[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      DAT_0104e330 = (undefined4 *)0x0;
    }
  }
  return;
}


//// FUNCTION FUN_00761610 @ 00761610 ////

undefined4 FUN_00761610(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_18;
  
  if (*(int *)(DAT_0104e478 + 0x460) != 0) {
    FUN_007704f0(DAT_0104e478);
    uVar6 = FUN_00acd42c();
    uVar2 = (uint)uVar6;
    pvVar3 = operator_new(uVar2 * 2);
    if (pvVar3 != (void *)0x0) {
      FUN_0074e7b0(*(int *)(DAT_0104e478 + 0x460));
      iVar1 = *(int *)(DAT_010bab18 + 0x844);
      uVar5 = 0;
      if (iVar1 == 0xac44) {
        if (uVar2 != 0) {
          do {
            uVar4 = FUN_0074e820(DAT_0104e1b4);
            *(short *)((int)pvVar3 + uVar5 * 2) = (short)uVar4;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
      }
      else {
        uVar4 = 0;
        local_18 = 0.0;
        if (uVar2 != 0) {
          do {
            for (; local_18 < 1.0; local_18 = local_18 + (double)((float)iVar1 * 2.2675737e-05)) {
              uVar4 = FUN_0074e820(DAT_0104e1b4);
            }
            *(short *)((int)pvVar3 + uVar5 * 2) = (short)uVar4;
            local_18 = local_18 - 1.0;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar2);
        }
      }
      *param_1 = pvVar3;
      *param_2 = uVar2 * 2;
      uVar6 = FUN_00acd42c();
      *param_3 = (int)uVar6;
      return CONCAT31((int3)(uVar6 >> 8),1);
    }
  }
  return 0;
}


//// FUNCTION FUN_00761760 @ 00761760 ////

void FUN_00761760(void)

{
  void *this;
  undefined4 uVar1;
  
  DAT_010bab30 = 0;
  DAT_010bab2c = 0;
  FUN_00a27b60();
  FUN_0074b390();
  FUN_00748a80();
  FUN_00a2afb0();
  FUN_00a28dc0(20.0,0x200,0x120);
  *(undefined4 *)(DAT_0104e478 + 0x3e0) = 0;
  FUN_009a63a0(0x200,-1);
  uVar1 = 0x200;
  this = (void *)FUN_0074b390();
  FUN_0074c810(this,uVar1);
  FUN_00773260();
  return;
}


//// FUNCTION FUN_007617e0 @ 007617e0 ////

void __fastcall FUN_007617e0(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  void *this;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  char local_70 [100];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd78cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x24);
  uVar6 = 0;
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)FUN_009910f0(puVar3);
  }
  local_4 = 0xffffffff;
  puVar3 = operator_new(0x3c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0041f350(puVar3);
  }
  *(undefined1 *)((int)this + 0xc) = 3;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0x3fffffff;
  fVar1 = (float)DAT_00e67ba4;
  fVar2 = (float)DAT_00e67ba0;
  pvVar7 = (void *)0x0;
  puVar3[4] = 0;
  puVar3[1] = this;
  fVar1 = (fVar1 - fVar2 * 0.0625 * 9.0) * 0.5;
  puVar3[5] = fVar1;
  puVar3[6] = 0;
  fVar2 = (float)DAT_00e67ba4;
  puVar3[7] = (float)DAT_00e67ba0;
  puVar3[8] = fVar2 - fVar1;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0x3f800000;
  puVar3[0xd] = 0x3f800000;
  DAT_0105bec4 = 1;
  uVar4 = FUN_009a6fb0('\x01');
  if ((char)uVar4 != '\0') {
    FUN_009a56b0(0xff000000,'\x01');
    do {
      uVar5 = uVar6;
      if (0x17 < uVar6) {
        uVar5 = 0x18;
      }
      _sprintf(local_70,"ui/madewith/Comp 1_%05d.dds",uVar5);
      if (*(int *)((int)this + 0x18) != 0) {
        Engine_SetResourceReference(this,0);
      }
      if (pvVar7 != (void *)0x0) {
        FUN_0099b400(pvVar7);
      }
      pvVar7 = FUN_0099bb50(local_70,0,0,0,'\0');
      if (*(void **)((int)this + 0x18) != pvVar7) {
        Engine_SetResourceReference(this,(int)pvVar7);
      }
      FUN_009a1410();
      BuildAndDrawPrimitive((int)puVar3);
      FUN_009a1460();
      if ((*(int **)(param_1 + 0x3a8) != (int *)0x0) && (**(int **)(param_1 + 0x3a8) != 0)) {
        FUN_00a2b290();
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x30);
    FUN_009a6fb0('\0');
  }
  DAT_0105bec4 = 0;
                    /* WARNING: Subroutine does not return */
  _free(puVar3);
}


//// FUNCTION FUN_00761a40 @ 00761a40 ////

void FUN_00761a40(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  float10 fVar7;
  ulonglong uVar8;
  float local_e4;
  undefined4 local_cc [3];
  undefined1 local_c0;
  uint local_bc;
  void *local_b4;
  undefined4 local_a8 [3];
  undefined1 local_9c;
  uint local_98;
  void *local_90;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_48;
  undefined4 *local_44;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  uVar5 = DAT_0105ca58;
  iVar3 = DAT_00e67b84;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd78f6;
  local_c = ExceptionList;
  fVar1 = (float)DAT_00e67b84;
  DAT_0105ca58 = DAT_01050b58;
  ExceptionList = &local_c;
  uVar8 = FUN_00acd42c();
  uVar4 = DAT_0105bec4;
  DAT_0105bec4 = 1;
  fVar2 = (float)(DAT_0105c3f8 / 2 - iVar3 / 2);
  fVar7 = FUN_00759d70();
  local_e4 = (float)fVar7;
  if ((float10)0.0 <= fVar7) {
    if (1.0 < local_e4) {
      local_e4 = 1.0;
    }
  }
  else {
    local_e4 = 0.0;
  }
  FUN_0041f350(&local_84);
  local_60 = 0;
  local_74 = 0x41200000;
  local_70 = 0x42580000;
  local_6c = 0;
  local_64 = 0x42680000;
  local_68 = (1.0 - local_e4) * ((float)DAT_0105c3f8 - 20.0) + 10.0 + 10.0;
  FUN_009910f0(local_a8);
  local_4 = 0;
  local_9c = 6;
  pvVar6 = FUN_0099bb50("ui/postproc/track02.dds",0,0,0,'\0');
  if (local_90 != pvVar6) {
    Engine_SetResourceReference(local_a8,(int)pvVar6);
  }
  local_98 = local_98 & 0x3fffffff;
  local_80 = local_a8;
  BuildAndDrawPrimitive((int)&local_84);
  if (pvVar6 != (void *)0x0) {
    FUN_0099b400(pvVar6);
  }
  FUN_0041f350(&local_48);
  local_28 = (float)(int)uVar8 * 1.7777778 + 64.0;
  local_2c = fVar1 + fVar2;
  local_34 = 0x42800000;
  local_30 = 0;
  local_24 = 0;
  local_38 = fVar2;
  FUN_009910f0(local_cc);
  local_4 = CONCAT31(local_4._1_3_,1);
  local_c0 = 6;
  pvVar6 = FUN_009a59c0();
  if (local_b4 != pvVar6) {
    Engine_SetResourceReference(local_cc,(int)pvVar6);
  }
  local_44 = local_cc;
  local_bc = local_bc & 0x3fffffff;
  BuildAndDrawPrimitive((int)&local_48);
  local_4 = local_4 & 0xffffff00;
  DAT_0105bec4 = uVar4;
  DAT_0105ca58 = uVar5;
  FUN_00990ec0((int)local_cc);
  local_4 = 0xffffffff;
  FUN_00990ec0((int)local_a8);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00761d00 @ 00761d00 ////

void FUN_00761d00(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0104e334 != '\0') {
    DAT_0104e334 = '\0';
  }
  FUN_0071b530(DAT_0104e330,(int *)DAT_0104e330);
  FUN_00761760();
  puVar2 = DAT_0104e37c;
  if (DAT_0104e37c != (undefined4 *)0x0) {
    iVar1 = DAT_0104e37c[0x12];
    DAT_0104e37c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104e368[1])();
    DAT_0104e37c = (undefined4 *)0x0;
    (*(code *)*DAT_0104e368)();
  }
  (**(code **)(*DAT_0104e478 + 0x20))(1);
  FUN_009d3590(&PTR_DAT_00e59310);
  return;
}


//// FUNCTION FUN_00761e00 @ 00761e00 ////

void FUN_00761e00(void)

{
  uint uVar1;
  undefined4 *puVar2;
  void *unaff_EBX;
  char *local_14c;
  uint local_148;
  undefined4 local_144;
  char local_140 [16];
  void *pvStack_130;
  char *local_12c;
  uint local_128;
  undefined4 local_124;
  char local_120 [16];
  void *pvStack_110;
  char *local_10c;
  uint local_108;
  undefined4 local_104;
  char local_100 [16];
  void *pvStack_f0;
  char *local_ec;
  uint local_e8;
  undefined4 local_e4;
  char local_e0 [16];
  void *pvStack_d0;
  char *local_cc;
  uint local_c8;
  undefined4 local_c4;
  char local_c0 [16];
  void *pvStack_b0;
  undefined4 local_ac;
  uint uStack_a8;
  void *pvStack_90;
  undefined4 local_8c;
  uint uStack_88;
  void *pvStack_70;
  undefined4 local_6c;
  uint uStack_68;
  void *pvStack_50;
  undefined4 local_4c;
  uint uStack_48;
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd7965;
  pvStack_c = ExceptionList;
  switch(DAT_0104e34c) {
  case 1:
    local_cc = local_c0;
    local_c0[0] = '\0';
    local_c8 = 0;
    local_c4 = 0x14;
    ExceptionList = &pvStack_c;
    _strncpy(local_cc,"trailer_qualitylow",0x12);
    local_c8 = 0x12;
    local_cc[0x12] = '\0';
    local_4 = 2;
    puVar2 = FUN_009b5030(&local_ac,&local_cc);
    local_4 = CONCAT31(local_4._1_3_,3);
    (**(code **)(*DAT_0104e364 + 0x54))(puVar2);
    unaff_EBX = pvStack_d0;
    uVar1 = local_c8;
    if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_b0);
    }
    break;
  case 2:
    local_ec = local_e0;
    local_e0[0] = '\0';
    local_e8 = 0;
    local_e4 = 0x20;
    ExceptionList = &pvStack_c;
    local_ec = _malloc(0x20);
    _strncpy(local_ec,"trailer_qualitymedium",0x15);
    local_e8 = 0x15;
    local_ec[0x15] = '\0';
    local_4 = 4;
    puVar2 = FUN_009b5030(&local_4c,&local_ec);
    local_4 = CONCAT31(local_4._1_3_,5);
    (**(code **)(*DAT_0104e364 + 0x54))(puVar2);
    unaff_EBX = pvStack_f0;
    uVar1 = local_e8;
    if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_50);
    }
    break;
  case 3:
    local_12c = local_120;
    local_120[0] = '\0';
    local_128 = 0;
    local_124 = 0x14;
    ExceptionList = &pvStack_c;
    _strncpy(local_12c,"trailer_qualityhigh",0x13);
    local_128 = 0x13;
    local_12c[0x13] = '\0';
    local_4 = 6;
    puVar2 = FUN_009b5030(&local_8c,&local_12c);
    local_4 = CONCAT31(local_4._1_3_,7);
    (**(code **)(*DAT_0104e364 + 0x54))(puVar2);
    unaff_EBX = pvStack_130;
    uVar1 = local_128;
    if (10 < uStack_88) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_90);
    }
    break;
  case 4:
    local_10c = local_100;
    local_100[0] = '\0';
    local_108 = 0;
    local_104 = 0x14;
    ExceptionList = &pvStack_c;
    _strncpy(local_10c,"trailer_qualitybest",0x13);
    local_108 = 0x13;
    local_10c[0x13] = '\0';
    local_4 = 8;
    puVar2 = FUN_009b5030(&local_6c,&local_10c);
    local_4 = CONCAT31(local_4._1_3_,9);
    (**(code **)(*DAT_0104e364 + 0x54))(puVar2);
    unaff_EBX = pvStack_110;
    uVar1 = local_108;
    if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_70);
    }
    break;
  default:
    local_14c = local_140;
    local_140[0] = '\0';
    local_148 = 0;
    local_144 = 0x20;
    ExceptionList = &pvStack_c;
    local_14c = _malloc(0x20);
    _strncpy(local_14c,"trailer_qualityonline",0x15);
    local_148 = 0x15;
    local_14c[0x15] = '\0';
    local_4 = 0;
    puVar2 = FUN_009b5030(&local_2c,&local_14c);
    local_4 = CONCAT31(local_4._1_3_,1);
    (**(code **)(*DAT_0104e364 + 0x54))(puVar2);
    uVar1 = local_148;
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
  }
  if (uVar1 < 0x15) {
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EBX);
}


//// FUNCTION FUN_007621d0 @ 007621d0 ////

uint FUN_007621d0(void)

{
  WINBOOL WVar1;
  undefined4 *this;
  undefined4 *puVar2;
  uint uVar3;
  ULARGE_INTEGER local_54;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd7980;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  WVar1 = GetDiskFreeSpaceExA((LPCSTR)0x0,&local_54,(PULARGE_INTEGER)0x0,(PULARGE_INTEGER)0x0);
  if (((WVar1 == 0) || (local_54.field0.HighPart != 0)) || (0x31fffff < local_54.field0.LowPart)) {
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)WVar1 >> 8),1);
  }
  this = FUN_006b85a0();
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"FRONTEND_ERROR_NODISKSPACE",0x1a);
  local_48 = 0x1a;
  local_4c[0x1a] = '\0';
  local_4 = 0;
  puVar2 = FUN_009b5030(local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar3 = FUN_006b8100(this,puVar2);
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (local_44 < 0x15) {
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_007622e0 @ 007622e0 ////

void __fastcall FUN_007622e0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint unaff_EBX;
  wchar_t *unaff_EBP;
  wchar_t *pwVar6;
  void *pvVar7;
  ulonglong uVar8;
  uint uStack_74;
  undefined2 *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 auStack_60 [2];
  undefined2 *puStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined2 auStack_50 [10];
  void *apvStack_3c [2];
  uint uStack_34;
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd79b1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007617e0(param_1);
  pwVar6 = (wchar_t *)(DAT_010bab18 + 2);
  puStack_6c = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0;
  uStack_64 = 10;
  uVar2 = FUN_00ace02d(pwVar6);
  FUN_004036d0(&puStack_6c,pwVar6,uVar2);
  uStack_4 = 0;
  (**(code **)(*DAT_010bab18 + 0x14))();
  uVar8 = FUN_00acd42c();
  FUN_00761760();
  DAT_0104e334 = 0;
  (**(code **)(*DAT_0104e340 + 0xc0))(1);
  (**(code **)(*DAT_0104e338 + 0xc0))(1);
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0xb0))(DAT_0104e330);
  (**(code **)(*DAT_0104e478 + 0x20))(1);
  if (DAT_0104e34c == 0) {
    *(int *)((int)DAT_0104e4a8 + 0xd4) = (int)uVar8;
    pvVar7 = DAT_0104e4a8;
    uVar2 = FUN_00773ab0((int)DAT_0104e478);
    puStack_5c = auStack_50;
    *(uint *)((int)pvVar7 + 0x288) = uVar2;
    auStack_50[0] = 0;
    uStack_58 = 0;
    uStack_54 = 10;
    uVar2 = FUN_00ace02d(L"Windows Media Format");
    FUN_004036d0(&puStack_5c,L"Windows Media Format",uVar2);
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    puVar4 = FUN_009ac940(apvStack_3c,&puStack_5c);
    uVar5 = FUN_00401ec0(&PTR_DAT_00e66f0c,puVar4);
    pvVar7 = DAT_0104e4a8;
    if (((char)uVar5 == '\0') || (bVar1 = true, DAT_01050b48 != 0.0)) {
      bVar1 = false;
    }
    if (0x14 < uStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_3c[0]);
    }
    uStack_14 = 0;
    if (10 < uStack_54) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_5c);
    }
    if (bVar1) {
      FUN_00754890(unaff_EBP,(undefined4 *)((int)DAT_0104e4a8 + 0x290));
      FUN_004036d0((void *)((int)DAT_0104e4a8 + 0xa0),unaff_EBP,unaff_EBX);
      FUN_00759a80(DAT_0104e4a8);
    }
    else {
      *(undefined4 *)((int)DAT_0104e4a8 + 0x290) = 0;
      *(undefined4 *)((int)pvVar7 + 0x294) = 0;
      *(undefined4 *)((int)pvVar7 + 0x298) = 0;
      *(undefined4 *)((int)pvVar7 + 0x29c) = 0;
      pvVar7 = (void *)((int)DAT_0104e4a8 + 0xa0);
      uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(pvVar7,(wchar_t *)&lpCaption_00d16918,uVar2);
    }
  }
  *(undefined1 *)(param_1 + 0x3b8) = 1;
  if (10 < uStack_74) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION FUN_00762540 @ 00762540 ////

void FUN_00762540(void)

{
  void *pvVar1;
  int iVar2;
  ulonglong uVar3;
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  char local_84 [20];
  void *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  void *local_4c [2];
  uint local_44;
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd79d3;
  local_c = ExceptionList;
  local_90 = local_84;
  local_84[0] = '\0';
  local_8c = 0;
  local_88 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_90,"EDITOR_EXPORTING",0x10);
  local_8c = 0x10;
  local_90[0x10] = '\0';
  local_4 = 0;
  FUN_009b5030(local_4c,&local_90);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  FUN_00759d70();
  uVar3 = FUN_00acd42c();
  iVar2 = (int)uVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (100 < iVar2) {
    iVar2 = 100;
  }
  _sprintf(local_2c," %d",100 - iVar2);
  pvVar1 = local_4c[0];
  local_6c = 0xffffffff;
  FUN_009a8100(&local_70);
  local_70 = pvVar1;
  local_6c = 0xffffffff;
  local_68 = 0x41400000;
  local_64 = 0x41200000;
  local_60 = 0;
  FUN_009a85a0((int *)&local_70);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007626a0 @ 007626a0 ////

void __thiscall FUN_007626a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4d630;
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


//// FUNCTION FUN_007626f0 @ 007626f0 ////

void __fastcall FUN_007626f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4d630;
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


//// FUNCTION FUN_00762740 @ 00762740 ////

int * __fastcall FUN_00762740(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *this;
  undefined4 *puVar3;
  uint unaff_EBP;
  undefined4 uVar4;
  char *pcStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  char acStack_68 [20];
  char *pcStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  char acStack_48 [20];
  void *apvStack_34 [2];
  uint uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd7a3e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  uVar4 = 0x41c00000;
  local_4 = 0;
  *param_1 = (int)&PTR_FUN_00d4d66c;
  param_1[0x14] = (int)&PTR_FUN_00d4d654;
  iVar1 = FUN_0071b2a0();
  FUN_00741a50(param_1,2,iVar1,uVar4);
  uVar4 = 0x41c00000;
  iVar1 = FUN_0071b2a0();
  FUN_00741c70(param_1,2,iVar1,uVar4);
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xc))();
  this = operator_new(0x420);
  if (this == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    pcStack_54 = acStack_48;
    acStack_48[0] = '\0';
    uStack_50 = 0;
    puStack_4c = &DAT_00000014;
    _strncpy(pcStack_54,"button_cancel",0xd);
    uStack_50 = 0xd;
    pcStack_54[0xd] = '\0';
    pcStack_74 = acStack_68;
    acStack_68[0] = '\0';
    uStack_70 = 0;
    uStack_6c = 0x14;
    _strncpy(pcStack_74,"button_quit.",0xc);
    uStack_70 = 0xc;
    pcStack_74[0xc] = '\0';
    pvStack_c = (void *)0x3;
    puVar3 = FUN_009b5030(apvStack_34,&pcStack_54);
    pvStack_c = (void *)0x4;
    unaff_EBP = 7;
    piVar2 = FUN_0069fb10(this,(int *)&pcStack_74,puVar3,0x42400000,0x42400000,0,0,0x3f800000,
                          0x3f800000);
  }
  if (((unaff_EBP & 4) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffb, 10 < uStack_2c)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_34[0]);
  }
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, 0x14 < uStack_6c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_74);
  }
  pvStack_c = (void *)0x0;
  if (((unaff_EBP & 1) != 0) && (&DAT_00000014 < puStack_4c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_54);
  }
  (**(code **)(*piVar2 + 0x18))();
  (**(code **)(*piVar2 + 0x18))(5,&LAB_005f37f0,0,"FMVCANCEL_CANCEL");
  (**(code **)(*piVar2 + 0x5c))(1,param_1,0);
  (**(code **)(*piVar2 + 0x68))(2,param_1,0);
  FUN_0073f6e0(param_1,piVar2);
  FUN_0073f500(param_1);
  ExceptionList = puStack_4c;
  return param_1;
}


//// FUNCTION FUN_00762980 @ 00762980 ////

undefined4 * __thiscall FUN_00762980(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007629b0 @ 007629b0 ////

void FUN_007629b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104e37c;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd7a5b;
  pvStack_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104e37c != (undefined4 *)0x0) {
    iVar1 = DAT_0104e37c[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104e37c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104e368[1])();
    DAT_0104e37c = (undefined4 *)0x0;
    (*(code *)*DAT_0104e368)();
  }
  piVar3 = operator_new(0x344);
  uStack_4 = 0;
  if (piVar3 != (int *)0x0) {
    piVar4 = FUN_00762740(piVar3);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104e368[1])();
  DAT_0104e37c = piVar4;
  (*(code *)*DAT_0104e368)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00762a70 @ 00762a70 ////

void __fastcall FUN_00762a70(int *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  char **this;
  uint uVar4;
  void **unaff_EBP;
  uint unaff_EDI;
  uint uVar5;
  char **ppcStack_b8;
  uint uVar6;
  undefined1 *_Memory;
  uint local_80;
  void *local_7c [2];
  void *local_74;
  undefined4 uStack_70;
  uint *local_6c;
  uint *local_68;
  char *local_64;
  uint local_60;
  uint uStack_5c;
  char acStack_58 [12];
  uint *local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40 [5];
  void *local_2c [2];
  uint uStack_24;
  undefined1 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd7b47;
  pvStack_c = ExceptionList;
  local_80 = 0;
  local_6c = &local_60;
  local_60 = local_60 & 0xffffff00;
  local_68 = (uint *)0x0;
  local_64 = (char *)0x40;
  ExceptionList = &pvStack_c;
  local_6c = _malloc(0x40);
  _strncpy((char *)local_6c,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_68 = (uint *)0x27;
  *(char *)((int)local_6c + 0x27) = '\0';
  local_4 = 0;
  FUN_00a05ff0(&local_74,&local_6c,0);
  if ((char *)0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4c = local_40;
  local_40[0] = local_40[0] & 0xffffff00;
  local_48 = 0;
  local_44 = 0x14;
  _strncpy((char *)local_4c,"WMV Quality",0xb);
  local_48 = 0xb;
  *(char *)((int)local_4c + 0xb) = '\0';
  local_4._0_1_ = 3;
  DAT_0104e34c = FUN_00a06070(&local_74,&local_4c,0);
  local_4._0_1_ = 2;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  pvVar1 = operator_new(900);
  local_7c[0] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = local_40[0] & 0xffffff00;
    local_48 = 0;
    local_44 = 0x14;
    _strncpy((char *)local_4c,"trailer_quality",0xf);
    local_48 = 0xf;
    *(char *)((int)local_4c + 0xf) = '\0';
    local_4 = CONCAT31(local_4._1_3_,5);
    puVar2 = FUN_009b5030(local_2c,&local_4c);
    local_4 = 6;
    local_80 = 3;
    piVar3 = FUN_00737bb0(pvVar1,puVar2);
  }
  local_4 = 8;
  (*(code *)DAT_0104e350[1])();
  DAT_0104e364 = piVar3;
  (*(code *)*DAT_0104e350)();
  if (((local_80 & 2) != 0) && (local_80 = local_80 & 0xfffffffd, 10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = 2;
  if (((local_80 & 1) != 0) && (local_80 = local_80 & 0xfffffffe, 0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  _Memory = (undefined1 *)param_1[0xdb];
  (**(code **)(*DAT_0104e364 + 100))();
  (**(code **)(*DAT_0104e364 + 0x5c))();
  local_64 = acStack_58;
  acStack_58[0] = '\0';
  local_60 = 0;
  uStack_5c = 0x14;
  ppcStack_b8 = (char **)0x762cd9;
  _strncpy(local_64,"Lithograph Bold",0xf);
  local_60 = 0xf;
  local_64[0xf] = '\0';
  uVar6 = 0;
  ppcStack_b8 = &local_64;
  uStack_1c = 9;
  (**(code **)(*DAT_0104e364 + 0xfc))();
  local_2c[0] = (void *)CONCAT31(local_2c[0]._1_3_,2);
  if (&DAT_00000014 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  *(undefined1 *)(DAT_0104e364 + 0xd6) = 1;
  uVar5 = 0;
  (**(code **)(*DAT_0104e364 + 0x84))();
  (**(code **)(*DAT_0104e364 + 0x74))();
  DAT_0104e364[0xd3] = 2;
  (**(code **)(*(int *)param_1[0xdb] + 0xc))();
  FUN_00761e00();
  this = operator_new(0x420);
  ppcStack_b8 = this;
  if (this == (char **)0x0) {
    DAT_0104e344 = (int *)0x0;
  }
  else {
    local_68 = &uStack_5c;
    uStack_5c = uStack_5c & 0xffff0000;
    local_64 = (char *)0x0;
    local_60 = 10;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_68,(wchar_t *)&lpCaption_00d16918,uVar4);
    unaff_EBP = local_7c;
    uVar5 = uVar5 | 4;
    local_7c[0] = (void *)((uint)local_7c[0] & 0xffffff00);
    local_80 = 0x14;
    _strncpy((char *)unaff_EBP,"button_left.",0xc);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_70._0_1_ = 0;
    uVar5 = uVar5 | 8;
    local_40[0] = 0xc;
    DAT_0104e344 = FUN_0069fb10(this,(int *)&stack0xffffff78,&local_68,0x42100000,0x42100000,0,0,
                                0x3f800000,0x3f800000);
  }
  if (((uVar5 & 8) != 0) && (uVar5 = uVar5 & 0xfffffff7, 0x14 < local_80)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  local_40[0] = 2;
  if (((uVar5 & 4) != 0) && (10 < local_60)) {
                    /* WARNING: Subroutine does not return */
    _free(local_68);
  }
  (**(code **)(*DAT_0104e344 + 0x60))();
  (**(code **)(*DAT_0104e344 + 100))();
  piVar3 = param_1;
  (**(code **)(*DAT_0104e344 + 0x18))();
  (**(code **)(*param_1 + 0xc))();
  pvVar1 = operator_new(0x420);
  if (pvVar1 == (void *)0x0) {
    DAT_0104e348 = (int *)0x0;
  }
  else {
    _Memory = &stack0xffffff74;
    unaff_EDI = 10;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff68,(wchar_t *)&lpCaption_00d16918,uVar6);
    uVar5 = (uint)piVar3 | 0x10;
    ppcStack_b8 = (char **)&stack0xffffff54;
    uVar6 = 0x14;
    _strncpy((char *)ppcStack_b8,"button_right.",0xd);
    *(char *)((int)ppcStack_b8 + 0xd) = '\0';
    piVar3 = (int *)(uVar5 | 0x20);
    uStack_70 = 0x11;
    DAT_0104e348 = FUN_0069fb10(pvVar1,(int *)&ppcStack_b8,(undefined4 *)&stack0xffffff68,0x42100000
                                ,0x42100000,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)piVar3 & 0x20) != 0) && (piVar3 = (int *)((uint)piVar3 & 0xffffffdf), 0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(ppcStack_b8);
  }
  uStack_70 = 2;
  if ((((uint)piVar3 & 0x10) != 0) && (10 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  (**(code **)(*DAT_0104e348 + 0x5c))();
  (**(code **)(*DAT_0104e348 + 100))(1);
  (**(code **)(*DAT_0104e348 + 0x18))(0,&LAB_00762190,param_1,0);
  (**(code **)(*param_1 + 0xc))(DAT_0104e348,1);
  FUN_00a05fe0((int)&stack0xfffffef0);
  ExceptionList = (void *)0x1;
  return;
}


//// FUNCTION FUN_007630d0 @ 007630d0 ////

void __fastcall FUN_007630d0(undefined4 *param_1)

{
  int iVar1;
  void *this;
  undefined4 uVar2;
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
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd7b80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4d7a4;
  param_1[0x14] = &PTR_FUN_00d4d788;
  iVar1 = *(int *)(DAT_0104e478 + 0x378);
  local_4 = 0;
  FUN_0074e970(iVar1);
  FUN_0074e9b0(iVar1);
  pcStack_54 = acStack_48;
  DAT_0105cc34 = 0;
  acStack_48[0] = '\0';
  uStack_50 = 0;
  uStack_4c = 0x40;
  pcStack_54 = _malloc(0x40);
  _strncpy(pcStack_54,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  uStack_50 = 0x27;
  pcStack_54[0x27] = '\0';
  pvStack_c._0_1_ = 1;
  FUN_00a05ff0(&stack0xffffffa4,&pcStack_54,0);
  pvStack_c._0_1_ = 3;
  if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_54);
  }
  if (DAT_0104e364 != 0) {
    pcStack_34 = acStack_28;
    acStack_28[0] = '\0';
    uStack_30 = 0;
    uStack_2c = 0x14;
    _strncpy(pcStack_34,"WMV Quality",0xb);
    uStack_30 = 0xb;
    pcStack_34[0xb] = '\0';
    pvStack_c._0_1_ = 4;
    FUN_00a06120(&stack0xffffffa4,&pcStack_34,DAT_0104e34c);
    pvStack_c._0_1_ = 3;
    if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_34);
    }
  }
  pvStack_c._0_1_ = 3;
  DAT_0104e330 = 0;
  *(undefined4 *)(DAT_0104e478 + 0x3e0) = 0;
  uVar2 = 0x200;
  *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
  this = (void *)FUN_0074b390();
  FUN_0074c810(this,uVar2);
  FUN_00773260();
  pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
  FUN_00a05fe0((int)&stack0xffffffa4);
  pvStack_c = (void *)0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_00763280 @ 00763280 ////

uint __fastcall FUN_00763280(int param_1)

{
  float fVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  size_t sVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  wchar_t *in_stack_ffffff48;
  uint uVar12;
  size_t in_stack_ffffff4c;
  uint uVar13;
  undefined4 uStack_b0;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  int local_78;
  wchar_t *pwStack_74;
  uint uStack_70;
  uint uStack_6c;
  wchar_t awStack_68 [10];
  wchar_t *pwStack_54;
  undefined2 *puStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined2 auStack_44 [8];
  void *pvStack_34;
  char *pcStack_30;
  uint uStack_2c;
  uint uStack_28;
  char acStack_24 [16];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd7ba8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_78 = param_1;
  (**(code **)(*DAT_0104e478 + 0x20))();
  pcStack_30 = acStack_24;
  DAT_010bab30 = &LAB_0075a790;
  DAT_010bab2c = &LAB_0075a1d0;
  acStack_24[0] = '\0';
  uStack_2c = 0;
  uStack_28 = 0x14;
  _strncpy(pcStack_30,"EDITOR_SAVINGSOUNDS",0x13);
  uStack_2c = 0x13;
  pcStack_30[0x13] = '\0';
  puStack_80 = &stack0xffffff48;
  puStack_8 = (undefined1 *)0x0;
  FUN_009b5030((undefined4 *)&stack0xffffff48,&pcStack_30);
  FUN_0075bbf0(in_stack_ffffff48,in_stack_ffffff4c);
  puStack_8 = (undefined1 *)0xffffffff;
  if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_30);
  }
  local_78 = 0;
  pwStack_74 = (wchar_t *)0x0;
  iVar3 = FUN_007704f0((int)DAT_0104e478);
  pwStack_74 = (wchar_t *)(iVar3 / 100);
  puStack_50 = auStack_44;
  auStack_44[0] = 0;
  uStack_4c = 0;
  uStack_48 = 10;
  puStack_8 = (undefined1 *)0x1;
  puVar4 = (undefined4 *)(**(code **)(*DAT_0104e338 + 0x58))();
  FUN_004036d0(&pwStack_54,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  piVar5 = FUN_00569220((int *)&pvStack_34,(int *)&pwStack_54);
  FUN_004036d0(&pwStack_54,(wchar_t *)*piVar5,piVar5[1]);
  if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  pwStack_74 = awStack_68;
  awStack_68[0] = L'\0';
  uStack_70 = 0;
  uStack_6c = 10;
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
  puVar4 = (undefined4 *)FUN_00567ff0(&pvStack_34);
  FUN_0040cae0(&pwStack_74,(wchar_t *)*puVar4,puVar4[1]);
  sVar6 = FUN_00ace02d(L"\\The Movies\\Movies\\");
  FUN_0040cae0(&pwStack_74,L"\\The Movies\\Movies\\",sVar6);
  FUN_0040cae0(&pwStack_74,pwStack_54,(size_t)puStack_50);
  sVar6 = FUN_00ace02d(L".wmv");
  FUN_0040cae0(&pwStack_74,L".wmv",sVar6);
  if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  puStack_84 = &stack0xffffff44;
  pwVar11 = (wchar_t *)&uStack_b0;
  uStack_b0 = (undefined *)((uint)uStack_b0._2_2_ << 0x10);
  uVar12 = 0;
  uVar13 = 10;
  FUN_004036d0(&stack0xffffff44,pwStack_74,uStack_70);
  puVar4 = FUN_00569600(&pvStack_34,pwVar11,uVar12,uVar13);
  FUN_004036d0(&pwStack_74,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  FUN_004036d0(&PTR_DAT_00e59310,pwStack_74,uStack_70);
  FUN_00a2b7b0(pwStack_74);
  puStack_84 = (undefined1 *)0x0;
  uVar12 = FUN_007621d0();
  if ((char)uVar12 == '\0') {
    if (10 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_74);
    }
    if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_54);
    }
  }
  else {
    uVar7 = FUN_00761610(&puStack_84,(int *)&stack0xffffff78,(undefined4 *)&stack0xffffff74);
    puVar2 = puStack_84;
    if ((char)uVar7 != '\0') {
      (**(code **)(*DAT_010bab18 + 0x18))();
                    /* WARNING: Subroutine does not return */
      uStack_b0 = &UNK_0076358b;
      _free(puVar2);
    }
    uVar7 = FUN_00a2b900(&uStack_7c);
    uVar12 = CONCAT31((int3)((uint)uVar7 >> 8),(char)DAT_010bab18[1]);
    if ((char)DAT_010bab18[1] != '\0') {
      if (DAT_0104e460 != '\0') {
        DAT_00e66efc = 1;
      }
      uVar7 = 0x200;
      pvVar8 = (void *)FUN_0074b390();
      FUN_0074c810(pvVar8,uVar7);
      FUN_0074b390();
      FUN_00748a10();
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
      piVar5 = DAT_0104e478;
      FUN_007705a0(DAT_0104e478,0);
      FUN_00a29560();
      FUN_007521a0(DAT_0104e478);
      pvVar8 = (void *)piVar5[0xde];
      uVar7 = extraout_ECX;
      uVar9 = extraout_EDX;
      if (pvVar8 != (void *)0x0) {
        FUN_0074e960(pvVar8,0);
        puVar4 = operator_new(0x10);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = &PTR_LAB_00d4d55c;
          puVar4[1] = piVar5;
          puVar4[2] = &LAB_00751b80;
          puVar4[3] = 0;
        }
        FUN_0074e970((int)pvVar8);
        puVar4 = operator_new(0x10);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = &PTR_LAB_00d4d55c;
          puVar4[1] = piVar5;
          puVar4[2] = &DAT_00751aa0;
          puVar4[3] = 0;
        }
        FUN_0074e9b0((int)pvVar8);
        uVar7 = extraout_ECX_00;
        uVar9 = extraout_EDX_00;
      }
      puVar2 = puStack_80;
      DAT_0104e32c = 0;
      *(undefined4 *)(puStack_80 + 0x3b0) = 2;
      uVar10 = FUN_00990ae0(uVar7,uVar9);
      puStack_80 = (undefined1 *)uVar10;
      fVar1 = (float)(int)puStack_80;
      if ((int)puStack_80 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      *(float *)(puVar2 + 0x3bc) = fVar1;
      if (uStack_6c < 0xb) {
        if (uStack_4c < 0xb) {
          ExceptionList = pvStack_14;
          return CONCAT31((int3)(uStack_6c >> 8),1);
        }
                    /* WARNING: Subroutine does not return */
        _free(pwStack_54);
      }
                    /* WARNING: Subroutine does not return */
      _free(pwStack_74);
    }
    if (10 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_74);
    }
    if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_54);
    }
  }
  ExceptionList = pvStack_14;
  return uVar12 & 0xffffff00;
}


//// FUNCTION FUN_00763720 @ 00763720 ////

void __fastcall FUN_00763720(int *param_1)

{
  FUN_00688490(param_1);
  if (DAT_0104e334 != '\0') {
    FUN_00762540();
    FUN_00761a40();
    return;
  }
  return;
}


//// FUNCTION FUN_00763850 @ 00763850 ////

undefined4 * __thiscall FUN_00763850(void *this,byte param_1)

{
  FUN_007630d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00763870 @ 00763870 ////

uint __fastcall FUN_00763870(int param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  char local_b;
  char local_a;
  
  uVar3 = FUN_007621d0();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  local_b = '\x01';
  FUN_0075a170();
  FUN_0075a120();
  FUN_0075abd0();
  FUN_0075ab80();
  iVar1 = *(int *)(DAT_0104e4a8 + 0xd0);
  FUN_0075aa20();
  iVar4 = FUN_007712d0((int)DAT_0104e478);
  iVar5 = FUN_007712f0((int)DAT_0104e478);
  iVar6 = (int)(1000 / (longlong)*(int *)(DAT_010bab18 + 0x838));
  local_a = '\x01';
  if (*(int *)(param_1 + 0x3b0) == 2) {
    iVar7 = FUN_00771310((int)DAT_0104e478);
    if (iVar7 < (int)DAT_0104e32c) {
      *(undefined4 *)(param_1 + 0x3b0) = 1;
    }
  }
  if (iVar4 < 1) {
    *(undefined4 *)(param_1 + 0x3b0) = 1;
  }
  if (*(int *)(param_1 + 0x3b0) == 1) {
    iVar4 = FUN_00771330((int)DAT_0104e478);
    if (iVar4 < (int)DAT_0104e32c) {
      *(undefined4 *)(param_1 + 0x3b0) = 0;
      FUN_0074b390(1);
      FUN_00748a10();
    }
  }
  FUN_009a6fb0('\x01');
  DAT_0105bec4 = 1;
  iVar4 = *(int *)(param_1 + 0x3b0);
  if (iVar4 == 2) {
    FUN_0074b390();
    FUN_0074cc40(DAT_0104e32c);
    DAT_010baad0 = 1;
  }
  else if (iVar4 == 0) {
    if (iVar5 < 1) {
      FUN_0074b390();
      FUN_00748a80();
      local_b = '\0';
    }
    else {
      FUN_0074b390();
      uVar9 = FUN_0074ccc0(DAT_0104e32c);
      if (((char)uVar9 == '\0') && (*(int *)(param_1 + 0x3b0) == 0)) {
        FUN_0074b390();
        FUN_00748a80();
        local_b = '\0';
      }
      DAT_010baad0 = 1;
    }
  }
  else if (((iVar4 == 1) && (*(undefined4 **)(param_1 + 0x3a8) != (undefined4 *)0x0)) &&
          (pvVar2 = (void *)**(undefined4 **)(param_1 + 0x3a8), pvVar2 != (void *)0x0)) {
    uVar9 = FUN_00a2af50(pvVar2);
    local_a = (char)uVar9;
    if (local_a == '\0') {
      FUN_00a2aef0();
      FUN_00a2aef0();
      DAT_0104e32c = DAT_0104e32c + iVar6 * 2;
    }
  }
  piVar8 = *(int **)(param_1 + 0x3a8);
  if (piVar8 != (int *)0x0) {
    if ((*piVar8 != 0) && (local_a != '\0')) goto LAB_00763b3c;
    if ((piVar8 != (int *)0x0) &&
       ((pvVar2 = (void *)*piVar8, pvVar2 != (void *)0x0 && (*(int *)((int)pvVar2 + 600) != 0)))) {
      FUN_009fa970(*(void **)((int)pvVar2 + 600),pvVar2);
    }
  }
  iVar4 = *(int *)(param_1 + 0x3ac) + 1;
  *(int *)(param_1 + 0x3ac) = iVar4;
  if (iVar4 < iVar1) {
    uVar10 = *(int *)(DAT_0104e4a8 + 0xcc) + iVar4;
    uVar3 = uVar10 >> 2;
    iVar1 = uVar3 * -4;
    if (*(uint *)(DAT_0104e4a8 + 200) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(DAT_0104e4a8 + 200);
    }
    piVar8 = (int *)FUN_00773f30(DAT_0104e478,
                                 *(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar3 * 4) +
                                         (uVar10 + iVar1) * 4));
    *(int **)(param_1 + 0x3a8) = piVar8;
    if ((piVar8 == (int *)0x0) || (*piVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x3a8) = 0;
    }
    else {
      FUN_0074d6e0((int)piVar8);
      FUN_00a2ae50((void *)**(undefined4 **)(param_1 + 0x3a8),
                   (int)(*(undefined4 **)(param_1 + 0x3a8) + 6));
      FUN_00a29440((void *)**(undefined4 **)(param_1 + 0x3a8));
      if (*(int *)(param_1 + 0x3b0) == 1) {
        FUN_00a2af50((void *)**(undefined4 **)(param_1 + 0x3a8));
      }
    }
  }
LAB_00763b3c:
  if ((*(int **)(param_1 + 0x3a8) != (int *)0x0) && (**(int **)(param_1 + 0x3a8) != 0)) {
    FUN_00a2b290();
  }
  DAT_010baad0 = 0;
  DAT_0105bec4 = 0;
  uVar9 = FUN_009a6fb0('\0');
  if (local_b != '\0') {
    DAT_0104e32c = DAT_0104e32c + iVar6;
    uVar9 = FUN_0074f670(*(void **)((int)DAT_0104e478 + 0x378),DAT_0104e32c);
  }
  return CONCAT31((int3)((uint)uVar9 >> 8),local_b);
}


//// FUNCTION FUN_00763c60 @ 00763c60 ////

int * __fastcall FUN_00763c60(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  int iVar6;
  int *piVar7;
  void *pvVar8;
  int *piVar9;
  uint unaff_EBP;
  float10 fVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *_Dest;
  uint auStack_174 [3];
  uint uStack_168;
  undefined4 uStack_164;
  undefined1 *puStack_160;
  undefined4 uStack_15c;
  undefined1 *_Memory;
  int *piStack_138;
  uint uStack_134;
  undefined1 **ppuStack_130;
  int iStack_12c;
  uint uStack_128;
  undefined1 *puStack_124;
  void *pvStack_120;
  undefined1 *_Memory_00;
  uint uVar17;
  char *pcVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  void *local_e0;
  wchar_t *pwStack_dc;
  char *pcStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  char acStack_cc [8];
  undefined1 uStack_c4;
  char *pcStack_bc;
  undefined4 uStack_b8;
  undefined1 *local_b4;
  char acStack_b0 [4];
  uint uStack_ac;
  undefined1 uStack_a4;
  undefined1 *puStack_9c;
  uint *puStack_98;
  undefined4 uStack_94;
  char *pcStack_90;
  uint uStack_8c;
  uint uStack_88;
  char acStack_84 [20];
  wchar_t *local_70;
  uint local_6c;
  uint local_68;
  wchar_t local_64 [10];
  wchar_t *pwStack_50;
  uint uStack_4c;
  undefined4 uStack_48;
  wchar_t local_44 [10];
  undefined2 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 auStack_24 [10];
  int *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd7d6c;
  pvStack_c = ExceptionList;
  local_e0 = (void *)0x0;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_006889c0(param_1,'\0');
  local_70 = local_64;
  local_4 = 0;
  *param_1 = (int)&PTR_FUN_00d4d7a4;
  param_1[0x14] = (int)&PTR_FUN_00d4d788;
  param_1[0xea] = 0;
  param_1[0x45] = param_1[0x45] | 8;
  *(undefined1 *)(param_1 + 0xee) = 0;
  local_64[0] = L'\0';
  local_6c = 0;
  local_68 = 10;
  uVar2 = FUN_00ace02d(L"MyMovie");
  FUN_004036d0(&local_70,L"MyMovie",uVar2);
  local_4._0_1_ = 1;
  if (DAT_0104e4a8 != (void *)0x0) {
    puVar3 = FUN_00755040(DAT_0104e4a8,&local_b4,'\0');
    FUN_004036d0(&local_70,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      _free(local_b4);
    }
  }
  uVar2 = 0;
  if (local_6c != 0) {
    do {
      if ((local_70[uVar2] == L'\\') || (local_70[uVar2] == L'/')) {
        local_70[uVar2] = L'_';
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_6c);
  }
  pwStack_50 = local_44;
  local_44[0] = L'\0';
  uStack_4c = 0;
  uStack_48 = 10;
  local_4 = CONCAT31(local_4._1_3_,2);
  puVar3 = (undefined4 *)FUN_00567ff0(&local_b4);
  FUN_0040cae0(&pwStack_50,(wchar_t *)*puVar3,puVar3[1]);
  sVar4 = FUN_00ace02d(L"\\The Movies\\Movies\\");
  FUN_0040cae0(&pwStack_50,L"\\The Movies\\Movies\\",sVar4);
  FUN_0040cae0(&pwStack_50,local_70,local_6c);
  uVar2 = uStack_4c;
  if (10 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  pwVar5 = (wchar_t *)&stack0xfffffefc;
  uVar17 = 10;
  pwStack_dc = pwStack_50;
  if (9 < uStack_4c) {
    uVar17 = uStack_4c + 0x20 & 0xffffffe0;
    pwVar5 = _malloc(uVar17 * 2);
  }
  pvStack_120 = (void *)0x763e7f;
  _wcsncpy(pwVar5,pwStack_dc,uVar2);
  pwVar5[uVar2] = L'\0';
  puVar3 = FUN_00569600(&local_b4,pwVar5,uVar2,uVar17);
  uVar2 = puVar3[1];
  pwVar5 = (wchar_t *)*puVar3;
  if (local_68 <= uVar2) {
    if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
    uVar17 = uVar2 + 0x20 >> 5;
    local_68 = uVar17 << 5;
    local_70 = _malloc(uVar17 * 0x40);
  }
  _wcsncpy(local_70,pwVar5,uVar2);
  local_70[uVar2] = L'\0';
  local_6c = uVar2;
  if (10 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  iVar6 = FUN_00ace02d((short *)&DAT_00d2e120);
  iVar6 = FUN_00420300(&local_70,(short *)&DAT_00d2e120,0xffffffff,iVar6);
  puVar3 = FUN_004211c0(&local_70,&local_b4,iVar6 + 1,0xffffffff);
  uVar2 = puVar3[1];
  pwVar5 = (wchar_t *)*puVar3;
  if (local_68 <= uVar2) {
    if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
    uVar17 = uVar2 + 0x20 >> 5;
    local_68 = uVar17 << 5;
    local_70 = _malloc(uVar17 * 0x40);
  }
  _wcsncpy(local_70,pwVar5,uVar2);
  local_70[uVar2] = L'\0';
  local_6c = uVar2;
  if (10 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  FUN_0074b390();
  FUN_00748a80();
  *(undefined4 *)(DAT_0104e478 + 0x3d4) = 0x43480000;
  FUN_0073e4e0(param_1,0x44340000);
  piVar7 = (int *)FUN_0071b2b0();
  fVar10 = (float10)(**(code **)(*piVar7 + 0x10))();
  pwStack_dc = (wchar_t *)(float)fVar10;
  fVar10 = FUN_0073e630((int)param_1);
  fVar19 = (float)(((float10)(float)pwStack_dc - fVar10) * (float10)0.5);
  iVar6 = FUN_0071b2b0();
  FUN_00741940(param_1,1,iVar6,fVar19);
  uVar20 = 0x42400000;
  iVar6 = FUN_0071b2b0();
  FUN_00741b60(param_1,1,iVar6,uVar20);
  puStack_30 = auStack_24;
  auStack_24[0] = 0;
  uStack_2c = 0;
  uStack_28 = 10;
  pcStack_90 = acStack_84;
  acStack_84[0] = '\0';
  uStack_8c = 0;
  uStack_88 = 0x14;
  _strncpy(pcStack_90,"trailer_fmvrender",0x11);
  uStack_8c = 0x11;
  pcStack_90[0x11] = '\0';
  local_4._0_1_ = 4;
  puVar3 = FUN_009b5030(&local_b4,&pcStack_90);
  sVar4 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  FUN_0040cae0(&puStack_30,L"<P ALIGN\t= CENTER>",sVar4);
  FUN_0040cae0(&puStack_30,(wchar_t *)*puVar3,puVar3[1]);
  sVar4 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&puStack_30,L"</P>",sVar4);
  if (10 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (uStack_88 < 0x15) {
    FUN_006888d0(param_1,&puStack_30);
    piVar7 = (int *)FUN_0071b2b0();
    puVar21 = (undefined1 *)0x1;
    (**(code **)(*piVar7 + 0xc))();
    pvVar8 = operator_new(0x420);
    if (pvVar8 == (void *)0x0) {
      DAT_0104e340 = (int *)0x0;
    }
    else {
      pcStack_bc = acStack_b0;
      acStack_b0[0] = '\0';
      uStack_b8 = 0;
      local_b4 = &DAT_00000014;
      _strncpy(pcStack_bc,"button_ok",9);
      uStack_b8 = 9;
      pcStack_bc[9] = '\0';
      puStack_98 = &uStack_8c;
      uStack_8c = uStack_8c & 0xffffff00;
      uStack_94 = 0;
      pcStack_90 = &DAT_00000014;
      _strncpy((char *)puStack_98,"button_tick.",0xc);
      uStack_94 = 0xc;
      *(char *)(puStack_98 + 3) = '\0';
      pvStack_c = (void *)0x7;
      puVar3 = FUN_009b5030(&local_e0,&pcStack_bc);
      puStack_9c = &stack0xfffffef8;
      pvStack_c = (void *)0x8;
      unaff_EBP = 7;
      DAT_0104e340 = FUN_0069fb10(pvVar8,(int *)&puStack_98,puVar3,0x42400000,0x42400000,0,0,
                                  0x3f800000,0x3f800000);
    }
    if (((unaff_EBP & 4) != 0) &&
       (unaff_EBP = unaff_EBP & 0xfffffffb, &lpType_0000000a < pcStack_d8)) {
                    /* WARNING: Subroutine does not return */
      _free(local_e0);
    }
    if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, &DAT_00000014 < pcStack_90))
    {
                    /* WARNING: Subroutine does not return */
      _free(puStack_98);
    }
    pvStack_c = (void *)0x3;
    if (((unaff_EBP & 1) != 0) && (&DAT_00000014 < local_b4)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_bc);
    }
    pcVar18 = "FMVRENDER_OK";
    (**(code **)(*DAT_0104e340 + 0x18))();
    uVar2 = 0;
    _Memory_00 = (undefined1 *)0x5;
    (**(code **)(*DAT_0104e340 + 0x18))();
    pvStack_120 = (void *)param_1[0xdb];
    puStack_124 = (undefined1 *)0x2;
    uStack_128 = 0x764317;
    (**(code **)(*DAT_0104e340 + 0x60))();
    iStack_12c = param_1[0xdb];
    uStack_128 = 0;
    ppuStack_130 = (undefined1 **)0x2;
    (**(code **)(*DAT_0104e340 + 0x68))();
    uStack_134 = 1;
    piStack_138 = DAT_0104e340;
    (**(code **)(*(int *)param_1[0xdb] + 0xc))();
    pvVar8 = operator_new(0x420);
    pwStack_dc = pvVar8;
    if (pvVar8 == (void *)0x0) {
      DAT_0104e33c = (int *)0x0;
    }
    else {
      pcStack_d8 = acStack_cc;
      acStack_cc[0] = '\0';
      uStack_d4 = 0;
      uStack_d0 = 0x14;
      _strncpy(pcStack_d8,"button_cancel",0xd);
      uStack_d4 = 0xd;
      pcStack_d8[0xd] = '\0';
      pcVar18 = &stack0xffffff10;
      uStack_128 = uStack_128 | 8;
      puVar21 = &DAT_00000014;
      _strncpy(pcVar18,"button_quit.",0xc);
      pcVar18[0xc] = '\0';
      uStack_128 = uStack_128 | 0x10;
      uStack_4c = 0xe;
      uStack_15c = 0x7643ef;
      puVar3 = FUN_009b5030(&pvStack_120,&pcStack_d8);
      puStack_124 = &stack0xfffffeb8;
      uStack_128 = uStack_128 | 0x20;
      uStack_4c = 0xf;
      uStack_15c = 0x764435;
      DAT_0104e33c = FUN_0069fb10(pvVar8,(int *)&stack0xffffff04,puVar3,0x42400000,0x42400000,0,0,
                                  0x3f800000,0x3f800000);
    }
    if (((uStack_128 & 0x20) != 0) &&
       (uStack_128 = uStack_128 & 0xffffffdf, &lpType_0000000a < _Memory_00)) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_120);
    }
    if (((uStack_128 & 0x10) != 0) &&
       (uStack_128 = uStack_128 & 0xffffffef, &DAT_00000014 < puVar21)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar18);
    }
    uStack_4c = 3;
    if (((uStack_128 & 8) != 0) && (uStack_128 = uStack_128 & 0xfffffff7, 0x14 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_d8);
    }
    pcVar18 = "FMVRENDER_CANCEL";
    piVar7 = param_1;
    (**(code **)(*DAT_0104e33c + 0x18))();
    uVar17 = 0;
    _Memory = (undefined1 *)0x5;
    uStack_15c = 0x7644ee;
    (**(code **)(*DAT_0104e33c + 0x18))();
    puStack_160 = (undefined1 *)param_1[0xdb];
    uStack_15c = 0x41200000;
    uStack_164 = 1;
    uStack_168 = 0x764507;
    (**(code **)(*DAT_0104e33c + 0x5c))();
    auStack_174[2] = param_1[0xdb];
    uStack_168 = 0;
    auStack_174[1] = 2;
    auStack_174[0] = 0x76451c;
    (**(code **)(*DAT_0104e33c + 0x68))();
    auStack_174[0] = 1;
    (**(code **)(*(int *)param_1[0xdb] + 0xc))();
    pvVar8 = operator_new(900);
    if (pvVar8 == (void *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      pcVar18 = (char *)&ppuStack_130;
      ppuStack_130 = (undefined1 **)((uint)ppuStack_130 & 0xffffff00);
      uStack_134 = 0x14;
      _strncpy(pcVar18,"trailer_fmvname",0xf);
      piStack_138 = (int *)0xf;
      *(char *)((int)pcVar18 + 0xf) = '\0';
      uStack_168 = uStack_168 | 0x40;
      uStack_8c = CONCAT31(uStack_8c._1_3_,0x14);
      puVar3 = FUN_009b5030(&puStack_160,(undefined4 *)&stack0xfffffec4);
      uStack_168 = uStack_168 | 0x80;
      uStack_8c = 0x15;
      piVar9 = FUN_00737bb0(pvVar8,puVar3);
    }
    if (((char)uStack_168 < '\0') &&
       (uStack_168 = uStack_168 & 0xffffff7f, &lpType_0000000a < _Memory)) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_160);
    }
    uStack_8c = 3;
    if (((uStack_168 & 0x40) != 0) && (0x14 < uStack_134)) {
                    /* WARNING: Subroutine does not return */
      _free(pcVar18);
    }
    (**(code **)(*piVar9 + 100))();
    (**(code **)(*piVar9 + 0x5c))();
    ppuStack_130 = &puStack_124;
    puStack_124 = (undefined1 *)((uint)puStack_124 & 0xffffff00);
    iStack_12c = 0;
    uStack_128 = 0x14;
    _strncpy((char *)ppuStack_130,"Lithograph Bold",0xf);
    iStack_12c = 0xf;
    *(char *)((int)ppuStack_130 + 0xf) = '\0';
    uStack_a4 = 0x18;
    (**(code **)(*piVar9 + 0xfc))();
    local_b4 = (undefined1 *)CONCAT31(local_b4._1_3_,3);
    if (&DAT_00000014 < piStack_138) {
                    /* WARNING: Subroutine does not return */
      _free(piVar7);
    }
    *(undefined1 *)(piVar9 + 0xd6) = 1;
    (**(code **)(*piVar9 + 0x74))();
    piVar9[0xd3] = 2;
    (**(code **)(*(int *)param_1[0xdb] + 0xc))();
    puVar3 = operator_new(0x3c8);
    uStack_c4 = 0x19;
    if (puVar3 == (undefined4 *)0x0) {
      DAT_0104e338 = (int *)0x0;
    }
    else {
      DAT_0104e338 = FUN_00738920(puVar3);
    }
    uStack_c4 = 3;
    (**(code **)(*DAT_0104e338 + 0x74))();
    piVar7 = piVar9 + 6;
    iVar6 = *piVar7;
    *(undefined1 **)(*piVar7 + 4) = &stack0xfffffe68;
    *piVar7 = (int)&stack0xfffffe68;
    piVar13 = DAT_0104e338;
    iVar14 = 0x40a00000;
    iVar15 = 0x40a00000;
    piVar11 = DAT_0104e338 + 0x28;
    *piVar11 = 2;
    acStack_cc[0] = '\x1a';
    piVar12 = piVar9;
    (**(code **)(piVar13[0x29] + 4))();
    piVar13[0x2e] = (int)piVar12;
    (**(code **)piVar13[0x29])();
    piVar11[7] = iVar14;
    piVar11[8] = iVar15;
    if (piVar7 != (int *)0x0) {
      *piVar7 = iVar6;
    }
    if (iVar6 != 0) {
      *(int **)(iVar6 + 4) = piVar7;
    }
    iVar6 = param_1[0xdb];
    iVar14 = 0;
    piVar7 = (int *)0x0;
    if (iVar6 != 0) {
      piVar7 = (int *)(iVar6 + 0x18);
      iVar14 = *piVar7;
      *(undefined1 **)(*piVar7 + 4) = &stack0xfffffe68;
      *piVar7 = (int)&stack0xfffffe68;
    }
    piVar13 = DAT_0104e338;
    iVar15 = 0x41a00000;
    iVar16 = 0x41a00000;
    piVar12 = DAT_0104e338 + 0x3a;
    *piVar12 = 2;
    acStack_cc[0] = '\x1b';
    (**(code **)(piVar13[0x3b] + 4))();
    piVar13[0x40] = iVar6;
    (**(code **)piVar13[0x3b])();
    piVar12[7] = iVar15;
    piVar12[8] = iVar16;
    if (piVar7 != (int *)0x0) {
      *piVar7 = iVar14;
    }
    if (iVar14 != 0) {
      *(int **)(iVar14 + 4) = piVar7;
    }
    piVar13 = piVar9 + 6;
    iVar6 = *piVar13;
    *(undefined1 **)(*piVar13 + 4) = &stack0xfffffe68;
    *piVar13 = (int)&stack0xfffffe68;
    piVar7 = DAT_0104e338;
    iVar14 = 0;
    iVar15 = 0;
    DAT_0104e338[0x1f] = 1;
    acStack_cc[0] = '\x1c';
    (**(code **)(piVar7[0x20] + 4))();
    piVar7[0x25] = (int)piVar9;
    (**(code **)piVar7[0x20])();
    piVar7[0x26] = iVar14;
    piVar7[0x27] = iVar15;
    acStack_cc[0] = '\x03';
    if (piVar13 != (int *)0x0) {
      *piVar13 = iVar6;
    }
    if (iVar6 != 0) {
      *(int **)(iVar6 + 4) = piVar13;
    }
    DAT_0104e338[0xe5] = 100;
    *(undefined1 *)(DAT_0104e338 + 0xe3) = 1;
    FUN_00738730(DAT_0104e338,'\x01');
    (**(code **)(*DAT_0104e338 + 0x54))();
    _Dest = auStack_174;
    auStack_174[0] = auStack_174[0] & 0xffffff00;
    _strncpy((char *)_Dest,"default_bold",0xc);
    *(char *)(_Dest + 3) = '\0';
    puStack_160 = &stack0xfffffe40;
    uStack_d0 = CONCAT31(uStack_d0._1_3_,0x1d);
    (**(code **)(*DAT_0104e338 + 0xfc))(&stack0xfffffe80,0xe,0);
    local_e0 = (void *)CONCAT31(local_e0._1_3_,3);
    if (&DAT_00000014 < piVar9) {
                    /* WARNING: Subroutine does not return */
      _free(&stack0xfffffe64);
    }
    (**(code **)(*(int *)param_1[0xdb] + 0xc))(DAT_0104e338,1);
    do {
      cVar1 = FUN_007421c0(param_1);
    } while (cVar1 != '\0');
    do {
      cVar1 = FUN_007421c0(param_1);
    } while (cVar1 != '\0');
    DAT_0104e334 = 0;
    DAT_0105cc34 = &LAB_00763bc0;
    DAT_0104e330 = param_1;
    FUN_00762a70(param_1);
    FUN_00769330();
    piVar7 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar7 + 0xac))(param_1);
    if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory_00);
    }
    if (&lpType_0000000a < ppuStack_130) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_138);
    }
    if (uVar17 < 0xb) {
      ExceptionList = puVar21;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_90);
}


//// FUNCTION WMovieTitles_Tick @ 00764bb0 ////

void __fastcall WMovieTitles_Tick(int *param_1)

{
  WWindow_Tick(param_1);
                    /* WARNING: Could not recover jumptable at 0x00764bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}


//// FUNCTION FUN_00764c80 @ 00764c80 ////

void __thiscall FUN_00764c80(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4d950;
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


//// FUNCTION FUN_00764cd0 @ 00764cd0 ////

void __fastcall FUN_00764cd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4d950;
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


//// FUNCTION FUN_00764d20 @ 00764d20 ////

void __fastcall FUN_00764d20(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd7d88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4d97c;
  param_1[0x14] = &PTR_FUN_00d4d960;
  local_4 = 0;
  (*(code *)DAT_0104e380[1])();
  DAT_0104e394 = 0;
  (*(code *)*DAT_0104e380)();
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00764da0 @ 00764da0 ////

uint * __fastcall FUN_00764da0(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined **ppuVar8;
  uint unaff_EBP;
  bool bVar9;
  undefined4 uVar10;
  uint uStack_27c;
  void *_Memory;
  uint uStack_264;
  undefined **ppuStack_250;
  undefined4 uStack_24c;
  uint *puStack_248;
  undefined ***pppuStack_244;
  uint uStack_240;
  uint uStack_23c;
  undefined **ppuStack_238;
  void *pvStack_234;
  int *piStack_230;
  undefined ***pppuStack_22c;
  void *pvStack_228;
  char *pcStack_224;
  undefined **ppuStack_220;
  undefined1 *puStack_21c;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uStack_1b8;
  uint auStack_1b4 [2];
  undefined1 *puStack_1ac;
  uint uStack_1a8;
  char *pcStack_1a4;
  void *pvStack_1a0;
  undefined1 *puStack_19c;
  uint uStack_178;
  uint auStack_174 [2];
  undefined1 *puStack_16c;
  uint uStack_168;
  char *pcStack_164;
  void *pvStack_160;
  undefined1 *puStack_15c;
  uint uStack_138;
  uint auStack_134 [2];
  undefined1 *puStack_12c;
  uint uStack_128;
  char *pcStack_124;
  void *pvStack_120;
  undefined1 *puStack_11c;
  uint uStack_f8;
  uint auStack_f4 [2];
  undefined1 *puStack_ec;
  uint uStack_e8;
  char *pcStack_e4;
  void *pvStack_e0;
  undefined1 *puStack_dc;
  uint *_Dest;
  uint *puVar15;
  float fVar16;
  uint uVar17;
  undefined2 *puStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined2 auStack_90 [2];
  undefined4 uStack_8c;
  uint *puStack_80;
  undefined1 *puStack_7c;
  char *local_78;
  uint local_74;
  uint local_70;
  char local_6c [12];
  undefined1 *puStack_60;
  undefined2 *local_5c;
  undefined4 uStack_58;
  undefined1 *local_54;
  undefined2 auStack_50 [2];
  uint local_4c;
  void *pvStack_3c;
  undefined2 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24 [10];
  uint *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd802b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_006889c0(param_1,'\x01');
  fVar16 = DAT_00e59330;
  local_4 = 0;
  *param_1 = (uint)&PTR_FUN_00d4d97c;
  param_1[0x14] = (uint)&PTR_FUN_00d4d960;
  FUN_0073e4e0(param_1,fVar16);
  fVar16 = ((float)DAT_00e67b84 - DAT_00e59330) * 0.5;
  iVar1 = FUN_0071b2a0();
  FUN_00741a50(param_1,2,iVar1,fVar16);
  uVar17 = 0x42000000;
  iVar1 = FUN_0071b2a0();
  FUN_00741c70(param_1,2,iVar1,uVar17);
  local_30 = local_24;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 10;
  local_78 = local_6c;
  local_6c[0] = '\0';
  local_74 = 0;
  local_70 = 0x14;
  _strncpy(local_78,"POST_SCENETITLES",0x10);
  local_74 = 0x10;
  local_78[0x10] = '\0';
  local_4._0_1_ = 2;
  puVar2 = FUN_009b5030(&local_54,&local_78);
  sVar3 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  FUN_0040cae0(&local_30,L"<P ALIGN\t= CENTER>",sVar3);
  FUN_0040cae0(&local_30,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&local_30,L"</P>",sVar3);
  if (10 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
    _free(local_78);
  }
  FUN_006888d0(param_1,&local_30);
  piVar4 = (int *)FUN_0071b2a0();
  puVar15 = param_1;
  (**(code **)(*piVar4 + 0xc))();
  FUN_00741630(param_1,5,0x5f3800,0,"");
  pvVar5 = operator_new(0x420);
  pvStack_3c = pvVar5;
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_5c = auStack_50;
    auStack_50[0] = 0;
    uStack_58 = 0;
    local_54 = &lpType_0000000a;
    uVar17 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_5c,(wchar_t *)&lpCaption_00d16918,uVar17);
    puStack_80 = &local_74;
    local_74 = local_74 & 0xffffff00;
    puStack_7c = (undefined1 *)0x0;
    local_78 = &DAT_00000014;
    _strncpy((char *)puStack_80,"button_right.",0xd);
    puStack_7c = (undefined1 *)0xd;
    *(char *)((int)puStack_80 + 0xd) = '\0';
    puStack_60 = &stack0xffffff38;
    pvStack_c = (void *)0x5;
    unaff_EBP = 3;
    puStack_dc = (undefined1 *)0x765028;
    puVar2 = FUN_0069fb10(pvVar5,(int *)&puStack_80,&local_5c,DAT_00e59338,DAT_00e59338,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xea] = (uint)puVar2;
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, &DAT_00000014 < local_78)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_80);
  }
  pvStack_c = (void *)0x1;
  if (((unaff_EBP & 1) != 0) && (&lpType_0000000a < local_54)) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  _Dest = param_1;
  (**(code **)(*(int *)param_1[0xea] + 0x60))();
  (**(code **)(*(int *)param_1[0xea] + 100))();
  uVar17 = 0;
  puStack_dc = &LAB_00764af0;
  pvStack_e0 = (void *)0x0;
  pcStack_e4 = (char *)0x7650d1;
  (**(code **)(*(int *)param_1[0xea] + 0x18))();
  pcStack_e4 = "NEXT_FONT";
  uStack_e8 = 0;
  puStack_ec = &LAB_005f37f0;
  auStack_f4[1] = 5;
  auStack_f4[0] = 0x7650e9;
  (**(code **)(*(int *)param_1[0xea] + 0x18))();
  uStack_f8 = param_1[0xea];
  auStack_f4[0] = 1;
  FUN_006884e0((int)param_1);
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puStack_9c = auStack_90;
    auStack_90[0] = 0;
    uStack_98 = 0;
    uStack_94 = 10;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_9c,(wchar_t *)&lpCaption_00d16918,uVar6);
    _Dest = (uint *)&stack0xffffff4c;
    uStack_e8 = uStack_e8 | 4;
    puVar15 = (uint *)&DAT_00000014;
    _strncpy((char *)_Dest,"button_right.",0xd);
    *(char *)((int)_Dest + 0xd) = '\0';
    puStack_7c = &stack0xfffffef8;
    uStack_e8 = uStack_e8 | 8;
    local_4c = 10;
    puStack_11c = (undefined1 *)0x7651cd;
    puVar2 = FUN_0069fb10(pvVar5,(int *)&stack0xffffff40,&puStack_9c,DAT_00e59338,DAT_00e59338,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xeb] = (uint)puVar2;
  if (((uStack_e8 & 8) != 0) && (uStack_e8 = uStack_e8 & 0xfffffff7, &DAT_00000014 < puVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  local_4c = 1;
  if (((uStack_e8 & 4) != 0) && (uStack_e8 = uStack_e8 & 0xfffffffb, 10 < uStack_94)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_9c);
  }
  puVar15 = param_1;
  (**(code **)(*(int *)param_1[0xeb] + 0x60))();
  (**(code **)(*(int *)param_1[0xeb] + 100))();
  uVar6 = 0;
  puStack_11c = &LAB_00764b30;
  pvStack_120 = (void *)0x0;
  pcStack_124 = (char *)0x76526d;
  (**(code **)(*(int *)param_1[0xeb] + 0x18))();
  pcStack_124 = "NEXT_COLOUR";
  uStack_128 = 0;
  puStack_12c = &LAB_005f37f0;
  auStack_134[1] = 5;
  auStack_134[0] = 0x765285;
  (**(code **)(*(int *)param_1[0xeb] + 0x18))();
  uStack_138 = param_1[0xeb];
  auStack_134[0] = 1;
  FUN_006884e0((int)param_1);
  pvVar5 = operator_new(0x420);
  pvStack_e0 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puStack_dc = &stack0xffffff30;
    uVar17 = 10;
    uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_dc,(wchar_t *)&lpCaption_00d16918,uVar7);
    puVar15 = auStack_f4;
    uStack_128 = uStack_128 | 0x10;
    auStack_f4[0] = auStack_f4[0] & 0xffffff00;
    uStack_f8 = 0x14;
    _strncpy((char *)puVar15,"button_right.",0xd);
    *(char *)((int)puVar15 + 0xd) = '\0';
    uStack_128 = uStack_128 | 0x20;
    uStack_8c = 0xf;
    puStack_15c = (undefined1 *)0x765369;
    puVar2 = FUN_0069fb10(pvVar5,(int *)&stack0xffffff00,&puStack_dc,DAT_00e59338,DAT_00e59338,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xec] = (uint)puVar2;
  if (((uStack_128 & 0x20) != 0) && (uStack_128 = uStack_128 & 0xffffffdf, 0x14 < uStack_f8)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar15);
  }
  uStack_8c = 1;
  if (((uStack_128 & 0x10) != 0) && (uStack_128 = uStack_128 & 0xffffffef, 10 < uVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_dc);
  }
  puVar15 = param_1;
  (**(code **)(*(int *)param_1[0xec] + 0x60))();
  (**(code **)(*(int *)param_1[0xec] + 100))();
  uVar17 = 0;
  puStack_15c = &LAB_00764b70;
  pvStack_160 = (void *)0x0;
  pcStack_164 = (char *)0x765409;
  (**(code **)(*(int *)param_1[0xec] + 0x18))();
  pcStack_164 = "NEXT_BACKDROP";
  uStack_168 = 0;
  puStack_16c = &LAB_005f37f0;
  auStack_174[1] = 5;
  auStack_174[0] = 0x765421;
  (**(code **)(*(int *)param_1[0xec] + 0x18))();
  uStack_178 = param_1[0xec];
  auStack_174[0] = 1;
  FUN_006884e0((int)param_1);
  pvVar5 = operator_new(0x420);
  pvStack_120 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puStack_11c = &stack0xfffffef0;
    uVar6 = 10;
    uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_11c,(wchar_t *)&lpCaption_00d16918,uVar7);
    puVar15 = auStack_134;
    uStack_168 = uStack_168 | 0x40;
    auStack_134[0] = auStack_134[0] & 0xffffff00;
    uStack_138 = 0x14;
    _strncpy((char *)puVar15,"button_left.",0xc);
    *(char *)(puVar15 + 3) = '\0';
    uStack_168 = uStack_168 | 0x80;
    puStack_19c = (undefined1 *)0x765507;
    puVar2 = FUN_0069fb10(pvVar5,(int *)&stack0xfffffec0,&puStack_11c,DAT_00e59338,DAT_00e59338,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xed] = (uint)puVar2;
  if (((char)uStack_168 < '\0') && (uStack_168 = uStack_168 & 0xffffff7f, 0x14 < uStack_138)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar15);
  }
  if (((uStack_168 & 0x40) != 0) && (uStack_168 = uStack_168 & 0xffffffbf, 10 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_11c);
  }
  puVar15 = param_1;
  (**(code **)(*(int *)param_1[0xed] + 0x5c))();
  (**(code **)(*(int *)param_1[0xed] + 100))();
  uVar6 = 0;
  puStack_19c = &LAB_00764b10;
  pvStack_1a0 = (void *)0x0;
  pcStack_1a4 = (char *)0x7655b4;
  (**(code **)(*(int *)param_1[0xed] + 0x18))();
  pcStack_1a4 = "PREV_FONT";
  uStack_1a8 = 0;
  puStack_1ac = &LAB_005f37f0;
  auStack_1b4[1] = 5;
  auStack_1b4[0] = 0x7655cc;
  (**(code **)(*(int *)param_1[0xed] + 0x18))();
  uStack_1b8 = param_1[0xed];
  auStack_1b4[0] = 1;
  FUN_006884e0((int)param_1);
  pvVar5 = operator_new(0x420);
  pvStack_160 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puStack_15c = &stack0xfffffeb0;
    uVar17 = 10;
    uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_15c,(wchar_t *)&lpCaption_00d16918,uVar7);
    puVar15 = auStack_174;
    uStack_1a8 = uStack_1a8 | 0x100;
    auStack_174[0] = auStack_174[0] & 0xffffff00;
    uStack_178 = 0x14;
    _strncpy((char *)puVar15,"button_left.",0xc);
    *(char *)(puVar15 + 3) = '\0';
    uStack_1a8 = uStack_1a8 | 0x200;
    puVar2 = FUN_0069fb10(pvVar5,(int *)&stack0xfffffe80,&puStack_15c,DAT_00e59338,DAT_00e59338,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xee] = (uint)puVar2;
  if (((uStack_1a8 & 0x200) != 0) && (uStack_1a8 = uStack_1a8 & 0xfffffdff, 0x14 < uStack_178)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar15);
  }
  if (((uStack_1a8 & 0x100) != 0) && (uStack_1a8 = uStack_1a8 & 0xfffffeff, 10 < uVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_15c);
  }
  puVar15 = param_1;
  (**(code **)(*(int *)param_1[0xee] + 0x5c))();
  (**(code **)(*(int *)param_1[0xee] + 100))();
  (**(code **)(*(int *)param_1[0xee] + 0x18))();
  (**(code **)(*(int *)param_1[0xee] + 0x18))();
  FUN_006884e0((int)param_1);
  pvVar5 = operator_new(0x420);
  bVar9 = pvVar5 == (void *)0x0;
  pvStack_1a0 = pvVar5;
  if (bVar9) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puStack_19c = &stack0xfffffe70;
    uVar6 = 10;
    uVar17 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_19c,(wchar_t *)&lpCaption_00d16918,uVar17);
    puVar15 = auStack_1b4;
    auStack_1b4[0] = auStack_1b4[0] & 0xffffff00;
    uStack_1b8 = 0x14;
    _strncpy((char *)puVar15,"button_left.",0xc);
    *(char *)(puVar15 + 3) = '\0';
    puStack_21c = (undefined1 *)0x76585d;
    puVar2 = FUN_0069fb10(pvVar5,(int *)&stack0xfffffe40,&puStack_19c,DAT_00e59338,DAT_00e59338,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xef] = (uint)puVar2;
  if ((!bVar9) && (0x14 < uStack_1b8)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar15);
  }
  if ((!bVar9) && (10 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_19c);
  }
  (**(code **)(*(int *)param_1[0xef] + 0x5c))();
  (**(code **)(*(int *)param_1[0xef] + 100))();
  puStack_21c = &LAB_00764b90;
  ppuStack_220 = (undefined **)0x0;
  pcStack_224 = (char *)0x765903;
  (**(code **)(*(int *)param_1[0xef] + 0x18))();
  pcStack_224 = "PREV_BACKDROP";
  pvStack_228 = (void *)0x0;
  pppuStack_22c = (undefined ***)&LAB_005f37f0;
  piStack_230 = (int *)0x5;
  pvStack_234 = (void *)0x76591b;
  (**(code **)(*(int *)param_1[0xef] + 0x18))();
  ppuStack_238 = (undefined **)param_1[0xef];
  pvStack_234 = (void *)0x1;
  uStack_23c = 0x76592a;
  FUN_006884e0((int)param_1);
  puVar2 = &uStack_24c;
  uStack_24c = (uint)uStack_24c._2_2_ << 0x10;
  uVar6 = 0;
  ppuStack_250 = (undefined **)0xa;
  uVar17 = FUN_00ace02d(
                       L"<TABLE><TR><TD ALIGN=CENTER><T2><TRANSLATE>POST_CHANGEFONT</TRANSLATE></T2></TD></TR></TABLE>"
                       );
  uStack_264 = 0x76595f;
  FUN_004036d0(&stack0xfffffda8,
               L"<TABLE><TR><TD ALIGN=CENTER><T2><TRANSLATE>POST_CHANGEFONT</TRANSLATE></T2></TD></TR></TABLE>"
               ,uVar17);
  ppuVar8 = (undefined **)FUN_00833590(puVar2,uVar6);
  puVar12 = (undefined *)param_1[0xea];
  pcStack_224 = (char *)0x1;
  puStack_21c = (undefined1 *)0x0;
  piVar4 = (int *)0x0;
  ppuStack_220 = &PTR_FUN_00d18c2c;
  if (puVar12 != (undefined *)0x0) {
    piVar4 = (int *)(puVar12 + 0x18);
    puStack_21c = (undefined1 *)*piVar4;
    *(undefined1 ***)(*piVar4 + 4) = &puStack_21c;
    *piVar4 = (int)&puStack_21c;
  }
  puVar13 = (undefined *)0xc1200000;
  puVar14 = (undefined *)0xc1200000;
  ppuVar8[0x3a] = (undefined *)0x1;
  uStack_23c = 0x7659dd;
  (**(code **)(ppuVar8[0x3b] + 4))();
  ppuVar8[0x40] = puVar12;
  uStack_23c = 0x7659eb;
  (**(code **)ppuVar8[0x3b])();
  ppuVar8[0x41] = puVar13;
  ppuVar8[0x42] = puVar14;
  if (piVar4 != (int *)0x0) {
    *piVar4 = (int)puStack_21c;
  }
  if (puStack_21c != (undefined1 *)0x0) {
    *(int **)(puStack_21c + 4) = piVar4;
  }
  puVar12 = (undefined *)param_1[0xed];
  pcStack_224 = (char *)0x2;
  puStack_21c = (undefined1 *)0x0;
  piVar4 = (int *)0x0;
  ppuStack_220 = &PTR_FUN_00d18c2c;
  if (puVar12 != (undefined *)0x0) {
    piVar4 = (int *)(puVar12 + 0x18);
    puStack_21c = (undefined1 *)*piVar4;
    *(undefined1 ***)(*piVar4 + 4) = &puStack_21c;
    *piVar4 = (int)&puStack_21c;
  }
  puVar13 = (undefined *)0xc1200000;
  puVar14 = (undefined *)0xc1200000;
  ppuVar8[0x28] = (undefined *)0x2;
  uStack_23c = 0x765a94;
  (**(code **)(ppuVar8[0x29] + 4))();
  ppuVar8[0x2e] = puVar12;
  uStack_23c = 0x765aa2;
  (**(code **)ppuVar8[0x29])();
  ppuVar8[0x2f] = puVar13;
  ppuVar8[0x30] = puVar14;
  if (piVar4 != (int *)0x0) {
    *piVar4 = (int)puStack_21c;
  }
  if (puStack_21c != (undefined1 *)0x0) {
    *(int **)(puStack_21c + 4) = piVar4;
  }
  uStack_240 = param_1[0xea];
  uStack_23c = 0x40a00000;
  pppuStack_244 = (undefined ***)0x1;
  puStack_248 = (uint *)0x765af0;
  (**(code **)(*ppuVar8 + 100))();
  puStack_248 = (uint *)0x0;
  uStack_24c = 0x765afb;
  (**(code **)(*ppuVar8 + 0x84))();
  uStack_24c = 1;
  ppuStack_250 = ppuVar8;
  FUN_006884e0((int)param_1);
  puVar15 = &uStack_264;
  uStack_264 = uStack_264 & 0xffff0000;
  uVar6 = 0;
  uVar17 = FUN_00ace02d(
                       L"<TABLE><TR><TD ALIGN=CENTER><T2><TRANSLATE>POST_CHANGECOLOR</TRANSLATE></T2></TD></TR></TABLE>"
                       );
  uStack_27c = 0x765b3a;
  FUN_004036d0(&stack0xfffffd90,
               L"<TABLE><TR><TD ALIGN=CENTER><T2><TRANSLATE>POST_CHANGECOLOR</TRANSLATE></T2></TD></TR></TABLE>"
               ,uVar17);
  piVar4 = FUN_00833590(puVar15,uVar6);
  pcStack_224 = (char *)param_1[0xeb];
  pppuStack_22c = &ppuStack_238;
  uStack_23c = 1;
  pvStack_234 = (void *)0x0;
  piStack_230 = (int *)0x0;
  ppuStack_238 = &PTR_FUN_00d18c2c;
  if (pcStack_224 != (char *)0x0) {
    piStack_230 = (int *)(pcStack_224 + 0x18);
    pvStack_234 = (void *)*piStack_230;
    *(void ***)(*piStack_230 + 4) = &pvStack_234;
    *piStack_230 = (int)&pvStack_234;
  }
  ppuStack_220 = (undefined **)0xc1200000;
  puStack_21c = (undefined1 *)0xc1200000;
  piVar4[0x3a] = 1;
  pcStack_1a4._0_1_ = 0x23;
  (**(code **)(piVar4[0x3b] + 4))();
  piVar4[0x40] = (int)pcStack_224;
  (**(code **)piVar4[0x3b])();
  piVar4[0x41] = (int)ppuStack_220;
  piVar4[0x42] = (int)puStack_21c;
  if (piStack_230 != (int *)0x0) {
    *piStack_230 = (int)pvStack_234;
  }
  if (pvStack_234 != (void *)0x0) {
    *(int **)((int)pvStack_234 + 4) = piStack_230;
  }
  pcStack_224 = (char *)param_1[0xee];
  pppuStack_22c = &ppuStack_238;
  uStack_23c = 2;
  pvStack_234 = (void *)0x0;
  piStack_230 = (int *)0x0;
  ppuStack_238 = &PTR_FUN_00d18c2c;
  if (pcStack_224 != (char *)0x0) {
    piStack_230 = (int *)(pcStack_224 + 0x18);
    pvStack_234 = (void *)*piStack_230;
    *(void ***)(*piStack_230 + 4) = &pvStack_234;
    *piStack_230 = (int)&pvStack_234;
  }
  ppuStack_220 = (undefined **)0xc1200000;
  puStack_21c = (undefined1 *)0xc1200000;
  piVar4[0x28] = 2;
  pcStack_1a4._0_1_ = 0x24;
  (**(code **)(piVar4[0x29] + 4))();
  piVar4[0x2e] = (int)pcStack_224;
  (**(code **)piVar4[0x29])();
  piVar4[0x2f] = (int)ppuStack_220;
  piVar4[0x30] = (int)puStack_21c;
  pcStack_1a4 = (char *)CONCAT31(pcStack_1a4._1_3_,1);
  if (piStack_230 != (int *)0x0) {
    *piStack_230 = (int)pvStack_234;
  }
  if (pvStack_234 != (void *)0x0) {
    *(int **)((int)pvStack_234 + 4) = piStack_230;
  }
  (**(code **)(*piVar4 + 100))();
  uStack_264 = 0x765cda;
  (**(code **)(*piVar4 + 0x84))();
  uStack_264 = 1;
  FUN_006884e0((int)param_1);
  puVar11 = &stack0xfffffd78;
  puVar15 = &uStack_27c;
  uStack_27c = uStack_27c & 0xffff0000;
  uVar6 = 0;
  uVar17 = FUN_00ace02d(
                       L"<TABLE><TR><TD ALIGN=CENTER><T2><TRANSLATE>POST_CHANGEBACKDROP</TRANSLATE></T2></TD></TR></TABLE>"
                       );
  FUN_004036d0(&stack0xfffffd78,
               L"<TABLE><TR><TD ALIGN=CENTER><T2><TRANSLATE>POST_CHANGEBACKDROP</TRANSLATE></T2></TD></TR></TABLE>"
               ,uVar17);
  piVar4 = FUN_00833590(puVar15,uVar6);
  uStack_23c = param_1[0xec];
  pppuStack_244 = &ppuStack_250;
  uStack_24c = 0;
  puStack_248 = (uint *)0x0;
  ppuStack_250 = &PTR_FUN_00d18c2c;
  if (uStack_23c != 0) {
    puStack_248 = (uint *)(uStack_23c + 0x18);
    uStack_24c = *puStack_248;
    *(undefined4 **)(*puStack_248 + 4) = &uStack_24c;
    *puStack_248 = (uint)&uStack_24c;
  }
  ppuStack_238 = (undefined **)0xc1200000;
  pvStack_234 = (void *)0xc1200000;
  piVar4[0x3a] = 1;
  (**(code **)(piVar4[0x3b] + 4))();
  piVar4[0x40] = uStack_23c;
  (**(code **)piVar4[0x3b])();
  piVar4[0x41] = (int)ppuStack_238;
  piVar4[0x42] = (int)pvStack_234;
  if (puStack_248 != (uint *)0x0) {
    *puStack_248 = uStack_24c;
  }
  if (uStack_24c != 0) {
    *(uint **)(uStack_24c + 4) = puStack_248;
  }
  uStack_23c = param_1[0xef];
  pppuStack_244 = &ppuStack_250;
  uStack_24c = 0;
  puStack_248 = (uint *)0x0;
  ppuStack_250 = &PTR_FUN_00d18c2c;
  if (uStack_23c != 0) {
    puStack_248 = (uint *)(uStack_23c + 0x18);
    uStack_24c = *puStack_248;
    *(undefined4 **)(*puStack_248 + 4) = &uStack_24c;
    *puStack_248 = (uint)&uStack_24c;
  }
  ppuStack_238 = (undefined **)0xc1200000;
  pvStack_234 = (void *)0xc1200000;
  piVar4[0x28] = 2;
  (**(code **)(piVar4[0x29] + 4))();
  piVar4[0x2e] = uStack_23c;
  (**(code **)piVar4[0x29])();
  piVar4[0x2f] = (int)ppuStack_238;
  piVar4[0x30] = (int)pvStack_234;
  if (puStack_248 != (uint *)0x0) {
    *puStack_248 = uStack_24c;
  }
  if (uStack_24c != 0) {
    *(uint **)(uStack_24c + 4) = puStack_248;
  }
  uVar17 = param_1[0xec];
  _Memory = (void *)0x40a00000;
  (**(code **)(*piVar4 + 100))();
  uStack_27c = 0x765eb9;
  (**(code **)(*piVar4 + 0x84))();
  uStack_27c = 1;
  FUN_006884e0((int)param_1);
  pvVar5 = operator_new(0x420);
  pvStack_228 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcStack_224 = &stack0xfffffde8;
    ppuStack_220 = (undefined **)0x0;
    puStack_21c = (undefined1 *)0x14;
    _strncpy(pcStack_224,"POST_TRAILER_LENGTH",0x13);
    ppuStack_220 = (undefined **)0x13;
    pcStack_224[0x13] = '\0';
    uVar17 = uVar17 | 0x1000;
    puStack_248 = &uStack_23c;
    uStack_23c = uStack_23c & 0xffffff00;
    pppuStack_244 = (undefined ***)0x0;
    uStack_240 = 0x20;
    puStack_248 = _malloc(0x20);
    _strncpy((char *)puStack_248,"postproc/button_titlelength.",0x1c);
    pppuStack_244 = (undefined ***)0x1c;
    *(undefined1 *)(puStack_248 + 7) = 0;
    uVar17 = uVar17 | 0x2000;
    puVar2 = FUN_009b5030((undefined4 *)&stack0xfffffd94,&pcStack_224);
    uVar17 = uVar17 | 0x4000;
    puVar2 = FUN_0069fb10(pvVar5,(int *)&puStack_248,puVar2,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xf0] = (uint)puVar2;
  if (((uVar17 & 0x4000) != 0) && (uVar17 = uVar17 & 0xffffbfff, 10 < uStack_264)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (((uVar17 & 0x2000) != 0) && (uVar17 = uVar17 & 0xffffdfff, 0x14 < uStack_240)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_248);
  }
  if (((uVar17 & 0x1000) != 0) && ((undefined1 *)0x14 < puStack_21c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_224);
  }
  (**(code **)(*(int *)param_1[0xf0] + 0x5c))();
  (**(code **)(*(int *)param_1[0xf0] + 100))(2,piVar4);
  (**(code **)(*(int *)param_1[0xf0] + 0x18))(0,&LAB_00764bf0,param_1,0);
  uVar17 = param_1[0xf0];
  uVar10 = 1;
  FUN_006884e0((int)param_1);
  piVar4 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar4 + 0xac))(param_1,uVar17,uVar10);
  if (&lpType_0000000a < pppuStack_22c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_234);
  }
  ExceptionList = puVar11;
  return param_1;
}


//// FUNCTION FUN_00766100 @ 00766100 ////

undefined4 * __thiscall FUN_00766100(void *this,byte param_1)

{
  FUN_00764d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00766120 @ 00766120 ////

void FUN_00766120(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104e394;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd804b;
  local_c = ExceptionList;
  puVar3 = (uint *)0x0;
  if ((DAT_0104e420 == 0) && (DAT_0104e43c == 0)) {
    ExceptionList = &local_c;
    if (DAT_0104e394 != (uint *)0x0) {
      uVar1 = DAT_0104e394[0x12];
      ExceptionList = &local_c;
      DAT_0104e394[0x12] = uVar1 - 1;
      if (uVar1 - 1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104e380[1])();
      DAT_0104e394 = (uint *)0x0;
      (*(code *)*DAT_0104e380)();
    }
    puVar2 = operator_new(0x3c4);
    uStack_4 = 0;
    if (puVar2 != (uint *)0x0) {
      puVar3 = FUN_00764da0(puVar2);
    }
    uStack_4 = 0xffffffff;
    (*(code *)DAT_0104e380[1])();
    DAT_0104e394 = puVar3;
    (*(code *)*DAT_0104e380)();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00766210 @ 00766210 ////

int * __thiscall FUN_00766210(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007662a0 @ 007662a0 ////

void __thiscall FUN_007662a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4dd68;
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


//// FUNCTION FUN_007662f0 @ 007662f0 ////

void __fastcall FUN_007662f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4dd68;
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


//// FUNCTION FUN_00766340 @ 00766340 ////

void __fastcall FUN_00766340(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd80a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4dd94;
  param_1[0x14] = &PTR_FUN_00d4dd78;
  local_4 = 4;
  (*(code *)DAT_0104e39c[1])();
  DAT_0104e3b0 = 0;
  (*(code *)*DAT_0104e39c)();
  param_1[0xfc] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xfe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfe] = param_1[0xfd];
  }
  if (param_1[0xfd] != 0) {
    *(undefined4 *)(param_1[0xfd] + 4) = param_1[0xfe];
  }
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0x101] = 0;
  if ((undefined4 *)param_1[0xfe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfe] = param_1[0xfd];
  }
  if (param_1[0xfd] != 0) {
    *(undefined4 *)(param_1[0xfd] + 4) = param_1[0xfe];
  }
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xf6] = &PTR_FUN_00d2dba4;
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
  param_1[0xf0] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf2] = param_1[0xf1];
  }
  if (param_1[0xf1] != 0) {
    *(undefined4 *)(param_1[0xf1] + 4) = param_1[0xf2];
  }
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf5] = 0;
  if ((undefined4 *)param_1[0xf2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf2] = param_1[0xf1];
  }
  if (param_1[0xf1] != 0) {
    *(undefined4 *)(param_1[0xf1] + 4) = param_1[0xf2];
  }
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xea] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xec] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xec] = param_1[0xeb];
  }
  if (param_1[0xeb] != 0) {
    *(undefined4 *)(param_1[0xeb] + 4) = param_1[0xec];
  }
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xef] = 0;
  if ((undefined4 *)param_1[0xec] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xec] = param_1[0xeb];
  }
  if (param_1[0xeb] != 0) {
    *(undefined4 *)(param_1[0xeb] + 4) = param_1[0xec];
  }
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00766580 @ 00766580 ////

undefined4 __fastcall FUN_00766580(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined3 unaff_EBX;
  undefined4 uStack_70;
  undefined2 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60 [8];
  void *apvStack_50 [2];
  uint uStack_48;
  void *pvStack_30;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd80c8;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_0104e3b0 + 0x3ec) + 0x58))(local_2c);
  puStack_8._0_1_ = 1;
  puVar2 = (undefined4 *)FUN_00567ff0(apvStack_50);
  FUN_0040cae0(&uStack_70,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L"\\The Movies\\Movies\\");
  FUN_0040cae0(&uStack_70,L"\\The Movies\\Movies\\",sVar3);
  FUN_0040cae0(&uStack_70,(wchar_t *)*puVar1,puVar1[1]);
  sVar3 = FUN_00ace02d(L".trl");
  FUN_0040cae0(&uStack_70,L".trl",sVar3);
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_50[0]);
  }
  puStack_8._0_1_ = 0;
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  puVar1 = FUN_00568870(&pvStack_30,&uStack_70);
  puStack_8._0_1_ = 2;
  uVar4 = FUN_009d3660(puVar1,(uint *)0x0);
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if (0x14 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  if ((char)uVar4 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x404) + 0x20))(0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x404) + 0x20))(1);
  }
  if (&lpType_0000000a < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)CONCAT13((char)uVar4,unaff_EBX));
  }
  ExceptionList = pvStack_14;
  return CONCAT31((int3)((uint)local_6c >> 8),1);
}


//// FUNCTION FUN_00766700 @ 00766700 ////

undefined4 FUN_00766700(void)

{
  int *piVar1;
  undefined4 *puVar2;
  size_t sVar3;
  void *_Memory;
  uint unaff_ESI;
  undefined1 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *pwStack_b0;
  void **local_ac;
  undefined4 local_a8;
  wchar_t *local_a4;
  void *local_a0 [2];
  uint uStack_98;
  wchar_t *pwStack_90;
  size_t local_8c;
  void *pvStack_80;
  uint uStack_78;
  wchar_t *pwStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  void *pvStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_20;
  undefined1 uStack_1c;
  undefined4 uStack_10;
  int *piStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd8106;
  piStack_c = ExceptionList;
  local_ac = local_a0;
  local_a0[0] = (void *)((uint)local_a0[0] & 0xffff0000);
  local_a8 = 0;
  local_a4 = (wchar_t *)&lpType_0000000a;
  local_4 = 0;
  ExceptionList = &piStack_c;
  (**(code **)(**(int **)(DAT_0104e3b0 + 0x3ec) + 0x58))();
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  piVar1 = FUN_00569220((int *)apvStack_30,(int *)&pwStack_90);
  FUN_004036d0(&pwStack_90,(wchar_t *)*piVar1,piVar1[1]);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_30[0]);
  }
  puVar2 = (undefined4 *)FUN_00567ff0(apvStack_30);
  FUN_0040cae0(&pwStack_b0,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L"\\The Movies\\Movies\\");
  FUN_0040cae0(&pwStack_b0,L"\\The Movies\\Movies\\",sVar3);
  FUN_0040cae0(&pwStack_b0,pwStack_90,local_8c);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_30[0]);
  }
  FUN_004036d0((void *)(DAT_0104e4a8 + 0x60),pwStack_90,local_8c);
  if (DAT_0104e490 != 0) {
    FUN_004036d0((void *)(DAT_0104e490 + 0x25c),pwStack_90,local_8c);
  }
  pwStack_70 = (wchar_t *)&uStack_64;
  uStack_64 = (wchar_t *)((uint)uStack_64._2_2_ << 0x10);
  uStack_6c = 0;
  uStack_68 = 10;
  FUN_004036d0(&pwStack_70,pwStack_b0,(uint)local_ac);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  _Memory = (void *)FUN_00ace02d(L".ini");
  pwVar7 = L".ini";
  FUN_0040cae0(&pwStack_70,L".ini",(size_t)_Memory);
  puVar4 = &stack0xffffff30;
  uVar5 = 0;
  uVar6 = 10;
  uStack_e8 = 0x7668ac;
  FUN_004036d0(&stack0xffffff24,pwStack_70,uStack_6c);
  MovieProject_SerializeTimelineToIni(DAT_0104e478,puVar4,uVar5,uVar6);
  uStack_64 = (wchar_t *)&uStack_58;
  uStack_58 = (uint)uStack_58._2_2_ << 0x10;
  pvStack_60 = (void *)0x0;
  uStack_5c = 10;
  FUN_004036d0(&uStack_64,pwVar7,(uint)_Memory);
  uStack_1c = 3;
  sVar3 = FUN_00ace02d(L".trl");
  FUN_0040cae0(&uStack_64,L".trl",sVar3);
  FUN_004036d0((void *)(DAT_0104e4a8 + 0x80),local_a4,(uint)local_a0[0]);
  puStack_f0 = &stack0xffffff1c;
  uStack_ec = 0;
  uStack_e8 = 10;
  FUN_004036d0(&puStack_f0,uStack_64,(uint)pvStack_60);
  FUN_00756b50(DAT_0104e4a8);
  uVar5 = FUN_0071b530(uStack_10,piStack_c);
  if (DAT_0104e398 != '\0') {
    uVar5 = FUN_0071b530(DAT_0104e478,DAT_0104e478);
    DAT_0104e398 = '\0';
  }
  if (10 < uStack_58) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_60);
  }
  if (10 < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_80);
  }
  if (10 < uStack_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0[0]);
  }
  if (10 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_20;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_00766a40 @ 00766a40 ////

undefined4 * __fastcall FUN_00766a40(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  size_t sVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint unaff_EBP;
  uint *unaff_ESI;
  float10 fVar15;
  void *_Memory;
  char **ppcStack_194;
  undefined1 *puStack_190;
  undefined4 *puStack_18c;
  char *pcStack_188;
  void *pvStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  uint *puStack_160;
  uint auStack_154 [2];
  undefined1 *puStack_14c;
  uint uVar16;
  char *_Dest;
  uint uVar17;
  float fVar18;
  uint local_e0;
  char *pcStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  char acStack_d0 [4];
  undefined1 *puStack_cc;
  undefined1 uStack_c8;
  undefined1 uStack_c4;
  uint *puStack_bc;
  undefined4 uStack_b8;
  void **ppvStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  void *apvStack_a8 [2];
  uint uStack_a0;
  undefined1 *puStack_9c;
  undefined1 uStack_84;
  void *apvStack_78 [2];
  uint uStack_70;
  undefined1 uStack_6c;
  undefined2 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 auStack_44 [4];
  undefined4 uStack_3c;
  undefined4 *local_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8287;
  pvStack_c = ExceptionList;
  local_e0 = 0;
  ExceptionList = &pvStack_c;
  local_30 = param_1;
  FUN_006889c0(param_1,'\0');
  *param_1 = &PTR_FUN_00d4dd94;
  param_1[0x14] = &PTR_FUN_00d4dd78;
  param_1[0xed] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = param_1 + 0xea;
  param_1[0xea] = &PTR_FUN_00d172a0;
  param_1[0xef] = 0;
  param_1[0xf3] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = param_1 + 0xf0;
  param_1[0xf0] = &PTR_FUN_00d172a0;
  param_1[0xf5] = 0;
  piVar1 = param_1 + 0xf6;
  param_1[0xf9] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2dba4;
  param_1[0xfb] = 0;
  piVar2 = param_1 + 0xfc;
  param_1[0xff] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d195f8;
  param_1[0x101] = 0;
  puVar13 = DAT_0104e3b0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  if (DAT_0104e3b0 != (undefined4 *)0x0) {
    iVar5 = DAT_0104e3b0[0x12];
    DAT_0104e3b0[0x12] = iVar5 + -1;
    if (iVar5 + -1 == 0) {
      (**(code **)*puVar13)();
    }
    (*(code *)DAT_0104e39c[1])();
    DAT_0104e3b0 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e39c)();
  }
  (*(code *)DAT_0104e39c[1])();
  DAT_0104e3b0 = param_1;
  (*(code *)*DAT_0104e39c)();
  FUN_0073e4e0(param_1,0x43c80000);
  puStack_50 = auStack_44;
  auStack_44[0] = 0;
  uStack_4c = 0;
  uStack_48 = 10;
  ppvStack_b4 = apvStack_a8;
  apvStack_a8[0] = (void *)((uint)apvStack_a8[0] & 0xffffff00);
  uStack_b0 = 0;
  uStack_ac = 0x14;
  _strncpy((char *)ppvStack_b4,"POST_SAVE",9);
  uStack_b0 = 9;
  *(char *)((int)ppvStack_b4 + 9) = '\0';
  local_4._0_1_ = 6;
  pcStack_dc = (char *)FUN_009b5030(&uStack_d4,&ppvStack_b4);
  sVar3 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  FUN_0040cae0(&puStack_50,L"<P ALIGN\t= CENTER>",sVar3);
  FUN_0040cae0(&puStack_50,*(wchar_t **)pcStack_dc,*(size_t *)(pcStack_dc + 4));
  sVar3 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&puStack_50,L"</P>",sVar3);
  if (&lpType_0000000a < puStack_cc) {
                    /* WARNING: Subroutine does not return */
    _free(uStack_d4);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0x14 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_b4);
  }
  FUN_006888d0(param_1,&puStack_50);
  piVar4 = (int *)FUN_0071b2b0();
  fVar15 = (float10)(**(code **)(*piVar4 + 0x10))();
  pcStack_dc = (char *)(float)fVar15;
  fVar15 = FUN_0073e630((int)param_1);
  fVar18 = (float)(((float10)(float)pcStack_dc - fVar15) * (float10)0.5);
  iVar5 = FUN_0071b2b0();
  FUN_00741940(param_1,1,iVar5,fVar18);
  piVar4 = (int *)FUN_0071b2b0();
  fVar15 = (float10)(**(code **)(*piVar4 + 0x14))();
  pcStack_dc = (char *)(float)fVar15;
  fVar15 = FUN_0073e640((int)param_1);
  fVar18 = (float)(((float10)(float)pcStack_dc - fVar15) * (float10)0.5);
  iVar5 = FUN_0071b2b0();
  FUN_00741b60(param_1,1,iVar5,fVar18);
  piVar4 = (int *)FUN_0071b2b0();
  puVar13 = param_1;
  (**(code **)(*piVar4 + 0xc))();
  pvVar6 = operator_new(0x420);
  if (pvVar6 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    pcStack_dc = acStack_d0;
    acStack_d0[0] = '\0';
    uStack_d8 = 0;
    uStack_d4 = &DAT_00000014;
    _strncpy(pcStack_dc,"button_ok",9);
    uStack_d8 = 9;
    pcStack_dc[9] = '\0';
    puStack_bc = &uStack_b0;
    uStack_b0 = uStack_b0 & 0xffffff00;
    uStack_b8 = 0;
    ppvStack_b4 = (void **)&DAT_00000014;
    _strncpy((char *)puStack_bc,"button_tick.",0xc);
    uStack_b8 = 0xc;
    *(char *)(puStack_bc + 3) = '\0';
    pvStack_c = (void *)0x9;
    puVar7 = FUN_009b5030(apvStack_78,&pcStack_dc);
    puStack_9c = &stack0xfffffef8;
    pvStack_c = (void *)0xa;
    unaff_EBP = 7;
    puVar7 = FUN_0069fb10(pvVar6,(int *)&puStack_bc,puVar7,0x42400000,0x42400000,0,0,0x3f800000,
                          0x3f800000);
  }
  pvStack_c = (void *)0xd;
  (**(code **)(param_1[0xea] + 4))();
  param_1[0xef] = puVar7;
  (**(code **)param_1[0xea])();
  if (((unaff_EBP & 4) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffb, 10 < uStack_70)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_78[0]);
  }
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, &DAT_00000014 < ppvStack_b4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_bc);
  }
  pvStack_c = (void *)0x5;
  if (((unaff_EBP & 1) != 0) && (&DAT_00000014 < uStack_d4)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_dc);
  }
  pvVar6 = (void *)param_1[0xdb];
  uVar17 = 2;
  (**(code **)(*(int *)param_1[0xef] + 0x60))();
  _Dest = (char *)param_1[0xdb];
  (**(code **)(*(int *)param_1[0xef] + 0x68))();
  uVar16 = 0;
  (**(code **)(*(int *)param_1[0xef] + 0x18))();
  (**(code **)(*(int *)param_1[0xdb] + 0xc))();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    unaff_ESI = &local_e0;
    local_e0 = local_e0 & 0xffffff00;
    puVar7 = (undefined4 *)&DAT_00000014;
    _strncpy((char *)unaff_ESI,"button_cancel",0xd);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_d4._1_1_ = 0;
    _Dest = &stack0xffffff00;
    uVar16 = uVar16 | 8;
    pvVar6 = (void *)((uint)pvVar6 & 0xffffff00);
    uVar17 = 0x14;
    _strncpy(_Dest,"button_quit.",0xc);
    _Dest[0xc] = '\0';
    uVar16 = uVar16 | 0x10;
    uStack_3c = 0x10;
    puStack_14c = (undefined1 *)0x766fb7;
    puVar9 = FUN_009b5030(apvStack_a8,(undefined4 *)&stack0xffffff14);
    puStack_cc = &stack0xfffffec8;
    uVar16 = uVar16 | 0x20;
    uStack_3c = 0x11;
    puStack_14c = (undefined1 *)0x766fff;
    puVar9 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffef4,puVar9,0x42400000,0x42400000,0,0,0x3f800000
                          ,0x3f800000);
  }
  uStack_3c = 0x14;
  (**(code **)(param_1[0xf0] + 4))();
  param_1[0xf5] = puVar9;
  (**(code **)param_1[0xf0])();
  if (((uVar16 & 0x20) != 0) && (uVar16 = uVar16 & 0xffffffdf, 10 < uStack_a0)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_a8[0]);
  }
  if (((uVar16 & 0x10) != 0) && (uVar16 = uVar16 & 0xffffffef, 0x14 < uVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_3c = 5;
  if (((uVar16 & 8) != 0) && (&DAT_00000014 < puVar7)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  (**(code **)(*(int *)param_1[0xf5] + 0x5c))();
  uVar17 = param_1[0xdb];
  pvVar8 = (void *)0x2;
  (**(code **)(*(int *)param_1[0xf5] + 0x68))();
  puStack_14c = &LAB_005f37f0;
  auStack_154[1] = 5;
  auStack_154[0] = 0x7670fe;
  (**(code **)(*(int *)param_1[0xf5] + 0x18))();
  auStack_154[0] = 1;
  (**(code **)(*(int *)param_1[0xdb] + 0xc))();
  puStack_160 = (uint *)0x76711c;
  pwVar10 = operator_new(0x3c8);
  uStack_6c = 0x15;
  if (pwVar10 == (wchar_t *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_00738920((undefined4 *)pwVar10);
  }
  uStack_6c = 5;
  (**(code **)(*piVar1 + 4))();
  param_1[0xfb] = puVar7;
  (**(code **)*piVar1)();
  puStack_160 = (uint *)param_1[0xdb];
  (**(code **)(*(int *)param_1[0xfb] + 0x5c))();
  (**(code **)(*(int *)param_1[0xfb] + 0x68))();
  uStack_17c = 0x7671a2;
  FUN_00755040(DAT_0104e4a8,&uStack_ac,'\0');
  uStack_84 = 0x16;
  (**(code **)(*(int *)param_1[0xfb] + 0x54))();
  uStack_17c = 0x7671cd;
  (**(code **)(*(int *)param_1[0xfb] + 0x78))();
  uStack_17c = 0;
  uStack_180 = 0x7671dc;
  (**(code **)(*(int *)param_1[0xfb] + 0x8c))();
  pvStack_184 = (void *)param_1[0xfb];
  uStack_180 = 1;
  pcStack_188 = (char *)0x7671f2;
  (**(code **)(*(int *)param_1[0xdb] + 0xc))();
  pcStack_188 = "NEURON_EDIT";
  puStack_190 = &LAB_00766a00;
  ppcStack_194 = (char **)0x9;
  puStack_18c = param_1;
  (**(code **)(*(int *)param_1[0xfb] + 0x18))();
  FUN_00738730((void *)param_1[0xfb],'\0');
  puVar9 = operator_new(0x3fc);
  apvStack_a8[0]._0_1_ = 0x17;
  if (puVar9 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar11 = FUN_00833290(puVar9);
  }
  apvStack_a8[0] = (void *)CONCAT31(apvStack_a8[0]._1_3_,0x16);
  (**(code **)(*piVar2 + 4))();
  param_1[0x101] = puVar11;
  (**(code **)*piVar2)();
  _Memory = (void *)0x41f00000;
  (**(code **)(*(int *)param_1[0x101] + 0x5c))(1,param_1[0xdb]);
  (**(code **)(*(int *)param_1[0x101] + 100))(2,param_1[0xfb],0xc0800000);
  (**(code **)(*(int *)param_1[0x101] + 0x78))(0x43910000);
  ppcStack_194 = &pcStack_188;
  *(undefined4 *)(param_1[0x101] + 0x354) = 0x43910000;
  pcStack_188 = (char *)((uint)pcStack_188 & 0xffff0000);
  puStack_190 = (undefined1 *)0x0;
  puStack_18c = (undefined4 *)0xa;
  uVar12 = FUN_00ace02d(L"<TRANSLATE>POST_OVERWRITE_WARNING</TRANSLATE>");
  FUN_004036d0(&ppcStack_194,L"<TRANSLATE>POST_OVERWRITE_WARNING</TRANSLATE>",uVar12);
  uStack_c4 = 0x18;
  (**(code **)(*(int *)param_1[0x101] + 0x54))(&ppcStack_194);
  uStack_c8 = 0x16;
  if (10 < puStack_190) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  (**(code **)(*(int *)param_1[0x101] + 0x8c))(0);
  (**(code **)(*(int *)param_1[0xdb] + 0xc))(param_1[0x101],1);
  puStack_160 = auStack_154;
  auStack_154[0] = auStack_154[0] & 0xffff0000;
  uStack_d4._0_1_ = 0x19;
  puVar11 = (undefined4 *)FUN_00567ff0(&stack0xfffffec0);
  FUN_0040cae0(&puStack_160,(wchar_t *)*puVar11,puVar11[1]);
  sVar3 = FUN_00ace02d(L"\\The Movies\\Movies\\");
  FUN_0040cae0(&puStack_160,L"\\The Movies\\Movies\\",sVar3);
  FUN_0040cae0(&puStack_160,pwVar10,(size_t)puVar13);
  sVar3 = FUN_00ace02d(L".trl");
  FUN_0040cae0(&puStack_160,L".trl",sVar3);
  if (&lpType_0000000a < puVar9) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar8);
  }
  puVar13 = FUN_00568870((undefined4 *)&stack0xfffffec0,&puStack_160);
  uStack_d4._0_1_ = 0x1a;
  uVar14 = FUN_009d3660(puVar13,(uint *)0x0);
  uStack_d4 = (undefined1 *)CONCAT31(uStack_d4._1_3_,0x19);
  if (&DAT_00000014 < puVar9) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar8);
  }
  if ((char)uVar14 == '\0') {
    (**(code **)(*(int *)param_1[0x101] + 0x20))(0);
  }
  else {
    (**(code **)(*(int *)param_1[0x101] + 0x20))(1);
  }
  (**(code **)(*(int *)param_1[0xef] + 0x18))(0,FUN_00766700,param_1,"WCONFIRMDIALOG_CONFIRM");
  (**(code **)(*(int *)param_1[0xf5] + 0x18))(0,&LAB_007661f0,param_1,"WCONFIRMDIALOG_CANCEL");
  if (10 < uStack_17c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_184);
  }
  if (10 < uVar16) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x5);
  }
  if (10 < uVar17) {
                    /* WARNING: Subroutine does not return */
    _free(puVar7);
  }
  ExceptionList = pvVar6;
  return param_1;
}


//// FUNCTION FUN_007674e0 @ 007674e0 ////

undefined4 * __thiscall FUN_007674e0(void *this,byte param_1)

{
  FUN_00766340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00767500 @ 00767500 ////

void FUN_00767500(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd82ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x408);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00766a40(puVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00767570 @ 00767570 ////

int * __thiscall FUN_00767570(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007675a0 @ 007675a0 ////

void FUN_007675a0(void)

{
  if (DAT_0104e3c8 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104e3c8)(1);
  }
  (*(code *)DAT_0104e3b4[1])();
  DAT_0104e3c8 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x007675d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104e3b4)();
  return;
}


//// FUNCTION FUN_007675e0 @ 007675e0 ////

void __fastcall FUN_007675e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  void *this;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd82cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = operator_new(0x3c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_0041f350(puVar4);
  }
  *(undefined4 **)(param_1 + 0x54) = puVar4;
  puVar4 = operator_new(0x24);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_009910f0(puVar4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 4) = uVar5;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x54) + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x54) + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x54) + 4) + 0x10);
  *puVar1 = *puVar1 & 0x7fffffff;
  iVar2 = *(int *)(*(int *)(param_1 + 0x54) + 4);
  local_4 = 0xffffffff;
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfeffffff;
  pvVar6 = FUN_0099bb50("ui/backgrnd_filmcan.dds",0,0,0,'\0');
  this = *(void **)(*(int *)(param_1 + 0x54) + 4);
  if (*(void **)((int)this + 0x18) != pvVar6) {
    Engine_SetResourceReference(this,(int)pvVar6);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 8) = 0xff808080;
  if (pvVar6 != (void *)0x0) {
    FUN_0099b400(pvVar6);
  }
  iVar2 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  fVar3 = (float)DAT_00e67b88;
  iVar2 = *(int *)(param_1 + 0x54);
  *(float *)(iVar2 + 0x1c) = (float)DAT_00e67b84;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(float *)(iVar2 + 0x20) = fVar3;
  iVar2 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  iVar2 = *(int *)(param_1 + 0x54);
  *(undefined4 *)(iVar2 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x34) = 0x3f800000;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00767790 @ 00767790 ////

void __fastcall FUN_00767790(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 != (void *)0x0) {
    FUN_005e5ef0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x54) + 4);
    if (pvVar1 != (void *)0x0) {
      FUN_00990ec0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 4) = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x54));
}


//// FUNCTION FUN_00767870 @ 00767870 ////

void __thiscall FUN_00767870(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4df3c;
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


//// FUNCTION FUN_007678c0 @ 007678c0 ////

void __fastcall FUN_007678c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4df3c;
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


//// FUNCTION FUN_00767910 @ 00767910 ////

void __fastcall FUN_00767910(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd82fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4df4c;
  local_4 = 2;
  FUN_00767790((int)param_1);
  if (10 < (uint)param_1[0x18]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x16]);
  }
  param_1[0xf] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11] = param_1[0x10];
  }
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 4) = param_1[0x11];
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11] = param_1[0x10];
  }
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1[0x10] + 4) = param_1[0x11];
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007679c0 @ 007679c0 ////

void __fastcall FUN_007679c0(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  size_t sVar7;
  float *pfVar8;
  undefined4 unaff_EBX;
  undefined4 *puVar9;
  undefined4 *unaff_FS_OFFSET;
  float10 fVar10;
  float fVar11;
  float fVar12;
  int *piStack_5c;
  void *pvStack_58;
  uint *puStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  wchar_t *pwStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cd8352;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  puVar9 = (undefined4 *)0x0;
  local_4 = 0;
  piVar3 = (int *)FUN_0071b2a0();
  uStack_48 = 0x7679f8;
  puVar4 = operator_new(0x344);
  local_4._0_1_ = 1;
  if (puVar4 != (undefined4 *)0x0) {
    puVar9 = FUN_007432f0(puVar4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uStack_48 = 0x767a22;
  (**(code **)(*(int *)(param_1 + 0x3c) + 4))();
  *(undefined4 **)(param_1 + 0x50) = puVar9;
  uStack_48 = 0x767a2b;
  (*(code *)**(undefined4 **)(param_1 + 0x3c))();
  uStack_4c = *(uint *)(param_1 + 0x50);
  uStack_48 = 1;
  uStack_50 = 0x767a39;
  (**(code **)(*piVar3 + 0xc))();
  uStack_50 = 0x433c0000;
  puStack_54 = (uint *)0x43c80000;
  pvStack_58 = (void *)0x767a4b;
  (**(code **)(**(int **)(param_1 + 0x50) + 0x74))();
  iVar1 = **(int **)(param_1 + 0x50);
  pvStack_58 = (void *)0x767a58;
  fVar10 = (float10)(**(code **)(*piVar3 + 0x10))();
  pvStack_58 = (void *)(float)((fVar10 - (float10)400.0) * (float10)0.5);
  (**(code **)(iVar1 + 0x5c))(1);
  (**(code **)(**(int **)(param_1 + 0x50) + 0x68))(2,piVar3,0x41f00000);
  pvVar5 = operator_new(0x288);
  pvStack_58 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
    piStack_5c = piVar3;
  }
  else {
    puStack_54 = &uStack_48;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_50 = 0;
    uStack_4c = 0x20;
    puStack_54 = _malloc(0x20);
    _strncpy((char *)puStack_54,"ui\\dialogue_whitebox_solid.dds",0x1e);
    uStack_50 = 0x1e;
    *(char *)((int)puStack_54 + 0x1e) = '\0';
    piStack_5c = (int *)0x1;
    puVar4 = FUN_005e8fd0(pvVar5,&puStack_54);
  }
  if ((((uint)piStack_5c & 1) != 0) && (0x14 < uStack_4c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_54);
  }
  (**(code **)(**(int **)(param_1 + 0x50) + 0xa0))(puVar4);
  while( true ) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x50))(1);
    if (cVar2 == '\0') break;
    if (*(uint *)(param_1 + 0x60) <= uStack_24) {
      if (10 < *(uint *)(param_1 + 0x60)) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x58));
      }
      uVar6 = uStack_24 + 0x20 & 0xffffffe0;
      *(uint *)(param_1 + 0x60) = uVar6;
      pvVar5 = _malloc(uVar6 * 2);
      *(void **)(param_1 + 0x58) = pvVar5;
    }
    _wcsncpy(*(wchar_t **)(param_1 + 0x58),pwStack_28,uStack_24);
    *(uint *)(param_1 + 0x5c) = uStack_24;
    *(undefined2 *)(*(int *)(param_1 + 0x58) + uStack_24 * 2) = 0;
  }
  if (0x24 < *(uint *)(param_1 + 0x5c)) {
    pvVar5 = (void *)(param_1 + 0x58);
    puVar4 = FUN_004211c0(pvVar5,&pvStack_58,0,0x24);
    FUN_004036d0(pvVar5,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < uStack_50) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_58);
    }
    sVar7 = FUN_00ace02d((short *)&DAT_00d3c928);
    FUN_0040cae0(pvVar5,L"...",sVar7);
  }
  *(undefined1 **)(param_1 + 0x78) = puStack_8;
  puStack_8 = operator_new(0x70);
  if (puStack_8 == (void *)0x0) {
    pfVar8 = (float *)0x0;
  }
  else {
    pfVar8 = FUN_005e6b20(puStack_8,320.0,704.0,684.0);
  }
  *(float **)(param_1 + 0x38) = pfVar8;
  fVar10 = (float10)(**(code **)(*piVar3 + 0x14))();
  fVar12 = (float)(fVar10 - (float10)84.0);
  fVar10 = (float10)(**(code **)(*piVar3 + 0x10))();
  fVar11 = (float)(fVar10 * (float10)0.5 + (float10)192.0);
  fVar10 = (float10)(**(code **)(*piVar3 + 0x10))();
  FUN_005e54d0(*(void **)(param_1 + 0x38),(float)(fVar10 * (float10)0.5 - (float10)192.0),fVar11,
               fVar12);
  **(undefined4 **)(param_1 + 0x38) = 0x3f800000;
  FUN_007675e0(param_1);
  if (10 < uStack_20) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_28);
  }
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}


//// FUNCTION FUN_00767cb0 @ 00767cb0 ////

undefined4 * __thiscall FUN_00767cb0(void *this,byte param_1)

{
  FUN_00767910(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00767cd0 @ 00767cd0 ////

void __thiscall FUN_00767cd0(void *this,void *param_1)

{
  char cVar1;
  wchar_t *pwVar2;
  void *this_00;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  size_t sVar7;
  int *piStack_15c;
  undefined **ppuStack_118;
  int iStack_114;
  uint *puStack_110;
  undefined ***pppuStack_10c;
  uint uStack_108;
  uint uStack_104;
  int iStack_100;
  undefined2 **ppuStack_fc;
  undefined4 *puStack_f8;
  uint local_f4;
  undefined2 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined2 auStack_e4 [10];
  void *apvStack_d0 [2];
  uint uStack_c8;
  void *pvStack_b0;
  uint uStack_a8;
  wchar_t awStack_98 [4];
  void *pvStack_90;
  undefined4 uStack_44;
  int iStack_3c;
  undefined4 uStack_2c;
  void *pvStack_28;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd83e3;
  pvStack_c = ExceptionList;
  local_f4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)((int)this + 0x50) + 0xa8))();
  if (param_1 != (void *)0x0) {
    this_00 = operator_new(0x360);
    uStack_4 = 0;
    pvStack_90 = this_00;
    if (this_00 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      puVar3 = FUN_007554b0(param_1,apvStack_d0);
      puStack_f8 = (undefined4 *)&stack0xfffffec4;
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      local_f4 = 1;
      piVar4 = FUN_0069d820(this_00,puVar3,0,0,0x3f800000,0x3f800000);
    }
    uStack_4 = 0xffffffff;
    if (((local_f4 & 1) != 0) && (0x14 < uStack_c8)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_d0[0]);
    }
    (**(code **)(*piVar4 + 0x5c))();
    (**(code **)(*piVar4 + 100))();
    (**(code **)(*piVar4 + 0x74))();
    (**(code **)(**(int **)((int)this + 0x50) + 0xc))();
    piStack_15c = (int *)0x767de5;
    puVar3 = operator_new(0x3fc);
    uStack_2c = 3;
    if (puVar3 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00833290(puVar3);
    }
    uStack_2c = 0xffffffff;
    piStack_15c = piVar4;
    (**(code **)(*piVar5 + 0x5c))(2);
    (**(code **)(*piVar5 + 0x68))(2,piVar4,0x40a00000);
    puStack_f0 = auStack_e4;
    auStack_e4[0] = 0;
    uStack_ec = 0;
    uStack_e8 = 10;
    puStack_110 = &uStack_104;
    uStack_44 = 4;
    uStack_104 = uStack_104 & 0xffffff00;
    pppuStack_10c = (undefined ***)0x0;
    uStack_108 = 0x14;
    pcVar6 = (char *)(iStack_3c + 0x50);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&puStack_110,(char *)(iStack_3c + 0x50),(int)pcVar6 - (iStack_3c + 0x51));
    uStack_44._0_1_ = 5;
    puVar3 = FUN_009b5030(&piStack_15c,&puStack_110);
    pwVar2 = (wchar_t *)*puVar3;
    sVar7 = FUN_00ace02d(L"<TABLE><TR><TD><T2 COLOR=#FFFFFF>");
    FUN_0040cae0(&puStack_f0,L"<TABLE><TR><TD><T2 COLOR=#FFFFFF>",sVar7);
    sVar7 = FUN_00ace02d(pwVar2);
    FUN_0040cae0(&puStack_f0,pwVar2,sVar7);
    sVar7 = FUN_00ace02d(L"</T2></TD></TR></TABLE>");
    FUN_0040cae0(&puStack_f0,L"</T2></TD></TR></TABLE>",sVar7);
    if (&lpType_0000000a < piVar4) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_15c);
    }
    uStack_44 = CONCAT31(uStack_44._1_3_,4);
    if (0x14 < uStack_108) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_110);
    }
    piVar5[0xd5] = 0x43c80000;
    (**(code **)(*piVar5 + 0x54))(&puStack_f0);
    (**(code **)(*piVar5 + 0x84))(0);
    (**(code **)(**(int **)((int)this + 0x50) + 0xc))(piVar5,1);
    uStack_4 = 0xffffffff;
    if (10 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_b0);
    }
  }
  puStack_f8 = operator_new(0x3fc);
  uStack_4 = 6;
  if (puStack_f8 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puStack_f8);
  }
  uStack_104 = *(uint *)((int)this + 0x50);
  pppuStack_10c = &ppuStack_118;
  iStack_114 = 0;
  puStack_110 = (uint *)0x0;
  ppuStack_118 = &PTR_FUN_00d18c2c;
  if (uStack_104 != 0) {
    puStack_110 = (uint *)(uStack_104 + 0x18);
    iStack_114 = *puStack_110;
    *(int **)(*puStack_110 + 4) = &iStack_114;
    *puStack_110 = (uint)&iStack_114;
  }
  iStack_100 = 0x41400000;
  ppuStack_fc = (undefined2 **)0x41400000;
  piVar4[0x28] = 1;
  uStack_4 = 7;
  (**(code **)(piVar4[0x29] + 4))();
  piVar4[0x2e] = uStack_104;
  (**(code **)piVar4[0x29])();
  piVar4[0x2f] = iStack_100;
  piVar4[0x30] = (int)ppuStack_fc;
  if (puStack_110 != (uint *)0x0) {
    *puStack_110 = iStack_114;
  }
  if (iStack_114 != 0) {
    *(uint **)(iStack_114 + 4) = puStack_110;
  }
  uStack_104 = *(uint *)((int)this + 0x50);
  pppuStack_10c = &ppuStack_118;
  iStack_114 = 0;
  puStack_110 = (uint *)0x0;
  ppuStack_118 = &PTR_FUN_00d18c2c;
  if (uStack_104 != 0) {
    puStack_110 = (uint *)(uStack_104 + 0x18);
    iStack_114 = *puStack_110;
    *(int **)(*puStack_110 + 4) = &iStack_114;
    *puStack_110 = (uint)&iStack_114;
  }
  iStack_100 = 0x41400000;
  ppuStack_fc = (undefined2 **)0x41400000;
  piVar4[0x3a] = 2;
  uStack_4 = 8;
  (**(code **)(piVar4[0x3b] + 4))();
  piVar4[0x40] = uStack_104;
  (**(code **)piVar4[0x3b])();
  piVar4[0x41] = iStack_100;
  piVar4[0x42] = (int)ppuStack_fc;
  uStack_4 = 0xffffffff;
  if (puStack_110 != (uint *)0x0) {
    *puStack_110 = iStack_114;
  }
  if (iStack_114 != 0) {
    *(uint **)(iStack_114 + 4) = puStack_110;
  }
  (**(code **)(*piVar4 + 100))();
  ppuStack_fc = &puStack_f0;
  puStack_f0 = (undefined2 *)((uint)puStack_f0 & 0xffff0000);
  puStack_f8 = (undefined4 *)0x0;
  local_f4 = 10;
  uStack_10 = 9;
  sVar7 = FUN_00ace02d(L"<TABLE><TR><TD><T2 COLOR=#FFFFFF>");
  FUN_0040cae0(&ppuStack_fc,L"<TABLE><TR><TD><T2 COLOR=#FFFFFF>",sVar7);
  FUN_0040cae0(&ppuStack_fc,*(wchar_t **)((int)this + 0x58),*(size_t *)((int)this + 0x5c));
  sVar7 = FUN_00ace02d((short *)&DAT_00d4dfa8);
  FUN_0040cae0(&ppuStack_fc,L"  (",sVar7);
  sVar7 = _swprintf(awStack_98,0xd18f7c,*(wchar_t **)((int)this + 0x78));
  FUN_0040cae0(&ppuStack_fc,awStack_98,sVar7);
  sVar7 = FUN_00ace02d(L")</T2></TD></TR></TABLE>");
  FUN_0040cae0(&ppuStack_fc,L")</T2></TD></TR></TABLE>",sVar7);
  piVar4[0xd5] = 0x44480000;
  (**(code **)(*piVar4 + 0x54))();
  (**(code **)(*piVar4 + 0x84))();
  (**(code **)(**(int **)((int)this + 0x50) + 0xc))();
  if (10 < uStack_104) {
                    /* WARNING: Subroutine does not return */
    _free(pppuStack_10c);
  }
  ExceptionList = pvStack_28;
  return;
}


//// FUNCTION FUN_00768290 @ 00768290 ////

void __thiscall FUN_00768290(void *this,float param_1,void *param_2)

{
  *(float *)((int)this + 0x7c) = param_1;
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x7c) = 0;
  }
  if (1.0 < *(float *)((int)this + 0x7c)) {
    *(undefined4 *)((int)this + 0x7c) = 0x3f800000;
  }
  FUN_009a4f10();
  FUN_009a56b0(0xff000000,'\x01');
  BuildAndDrawPrimitive(*(int *)((int)this + 0x54));
  FUN_00767cd0(this,param_2);
  (**(code **)(**(int **)((int)this + 0x50) + 0x28))();
  (**(code **)(**(int **)((int)this + 0x50) + 0x2c))();
  FUN_005e5c80(*(void **)((int)this + 0x38),*(float *)((int)this + 0x7c));
  FUN_009a4fb0();
  FUN_009a6360();
  Sleep(1);
  return;
}


//// FUNCTION FUN_00768340 @ 00768340 ////

undefined4 * __fastcall FUN_00768340(undefined4 *param_1)

{
  uint uVar1;
  
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d4df4c;
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_1 + 0xf;
  param_1[0xf] = &PTR_FUN_00d18c2c;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_1 + 0x19;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x16,(wchar_t *)&lpCaption_00d16918,uVar1);
  param_1[0x1f] = 0;
  param_1[0x1e] = 0x76c;
  return param_1;
}


//// FUNCTION FUN_007683b0 @ 007683b0 ////

undefined4 * FUN_007683b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd83fb;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (DAT_0104e3c8 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x80);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_00768340(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104e3b4[1])();
    DAT_0104e3c8 = puVar2;
    (*(code *)*DAT_0104e3b4)();
  }
  ExceptionList = local_c;
  return DAT_0104e3c8;
}


//// FUNCTION FUN_00768470 @ 00768470 ////

void __fastcall FUN_00768470(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x424));
}


//// FUNCTION FUN_00768490 @ 00768490 ////

void __thiscall FUN_00768490(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x428) = param_1;
  return;
}


//// FUNCTION FUN_007684b0 @ 007684b0 ////

void __fastcall FUN_007684b0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_007684c0 @ 007684c0 ////

int * __thiscall FUN_007684c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007685d0 @ 007685d0 ////

void __fastcall FUN_007685d0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  
  if (DAT_0104e3e8 != 0) {
    fVar2 = DAT_0104cce0 - *(float *)(param_1 + 0xc0);
    fVar1 = *(float *)(param_1 + 0x444);
    fVar6 = FUN_007705f0(DAT_0104e478);
    uVar3 = *(int *)(param_1 + 0x428) + (int)ROUND((float)(fVar6 * (float10)(fVar2 + fVar1)));
    if (DAT_0104e3d0 == 1) {
      *(uint *)(DAT_0104e3e8 + 0xc0) = ((int)uVar3 < 1) - 1 & uVar3;
    }
    else if ((DAT_0104e3d0 == 2) && (*(char *)(DAT_0104e3e8 + 0xbc) != '\0')) {
      iVar4 = uVar3 - *(int *)(DAT_0104e3e8 + 0xc0);
      iVar5 = *(int *)(DAT_0104e3e8 + 0xc4) + iVar4;
      if (0 < iVar5) {
        fVar6 = FUN_007705e0(DAT_0104e478);
        *(int *)(DAT_0104e3e8 + 0xc4) = iVar5;
        *(float *)(param_1 + 0x444) =
             (float)((float10)*(float *)(param_1 + 0x444) - fVar6 * (float10)iVar4);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_007686b0 @ 007686b0 ////

void __fastcall FUN_007686b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd8418;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4e04c;
  param_1[0x14] = &PTR_FUN_00d4e030;
  puVar2 = (undefined4 *)param_1[0x10a];
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x10a] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0069f010(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00768720 @ 00768720 ////

void __fastcall FUN_00768720(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_1[0x108] + 0x428);
  iVar2 = *(int *)(param_1[0x109] + 0xc0);
  fVar3 = FUN_007705e0(DAT_0104e478);
  (**(code **)(*param_1 + 0x5c))(1,param_1[0x108],(float)(fVar3 * (float10)(iVar2 - iVar1)));
  (**(code **)(*param_1 + 100))(1,param_1[0x108],0x40000000);
  return;
}


//// FUNCTION FUN_00768790 @ 00768790 ////

void __fastcall FUN_00768790(int *param_1)

{
  uint unaff_retaddr;
  undefined1 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd8438;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x90))(&stack0x00000004);
  puVar1 = (undefined1 *)register0x00000010;
  (**(code **)(*(int *)param_1[0x10b] + 0x90))();
  (**(code **)(*(int *)param_1[0x10c] + 0x90))(&local_4);
  if (10 < unaff_retaddr) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_8);
  }
  ExceptionList = puVar1;
  return;
}


//// FUNCTION FUN_007688a0 @ 007688a0 ////

void __thiscall FUN_007688a0(void *this,float *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 local_4;
  
  if ((((DAT_0104e5f4 == 0) && (DAT_0104e310 == 0)) && (DAT_0104e4d8 == 0)) &&
     (((DAT_0104e394 == 0 && (DAT_0104e3e8 != 0)) &&
      ((*(int *)(DAT_0104e3e8 + 0x50) == *(int *)((int)this + 0x420) &&
       (piVar1 = *(int **)(DAT_0104e3e8 + 0x4c), piVar1 != (int *)0x0)))))) {
    local_4 = 0;
    cVar2 = (**(code **)(*piVar1 + 0x34))(param_1,&local_4);
    if (cVar2 != '\0') {
      DAT_0104e3cc = 1;
      *(float *)((int)this + 0x444) = (float)piVar1[0x30] - *param_1;
      FUN_007685d0((int)this);
    }
  }
  return;
}


//// FUNCTION FUN_00768930 @ 00768930 ////

undefined4 * __thiscall FUN_00768930(void *this,byte param_1)

{
  FUN_007686b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00768950 @ 00768950 ////

void __thiscall FUN_00768950(void *this,char param_1)

{
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8460;
  pvStack_c = ExceptionList;
  uStack_24 = 0x20;
  uStack_28 = 0;
  acStack_20[0] = '\0';
  if (param_1 == '\0') {
    pcStack_2c = acStack_20;
    ExceptionList = &pvStack_c;
    pcStack_2c = _malloc(0x20);
    _strncpy(pcStack_2c,"ui/postproc/markercentre.dds",0x1c);
    uStack_28 = 0x1c;
    pcStack_2c[0x1c] = '\0';
    uStack_4 = 1;
    FUN_0069f100(this,(int *)&pcStack_2c,0,0,0x3f800000,0x3f800000);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
    if (*(int *)(*(int *)((int)this + 0x424) + 0x50) != *(int *)(DAT_0104e478 + 0x378)) {
      *(undefined4 *)(*(int *)((int)this + 0x424) + 200) = 0xff000000;
    }
  }
  else {
    pcStack_2c = acStack_20;
    ExceptionList = &pvStack_c;
    pcStack_2c = _malloc(0x20);
    _strncpy(pcStack_2c,"ui/postproc/markercentre_h.dds",0x1e);
    uStack_28 = 0x1e;
    pcStack_2c[0x1e] = '\0';
    uStack_4 = 0;
    FUN_0069f100(this,(int *)&pcStack_2c,0,0,0x3f800000,0x3f800000);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
    if (*(int *)(*(int *)((int)this + 0x424) + 0x50) != *(int *)(DAT_0104e478 + 0x378)) {
      *(undefined4 *)(*(int *)((int)this + 0x424) + 200) = 0xffe0e0e0;
      ExceptionList = pvStack_c;
      return;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00768971 @ 00768971 ////

void __thiscall FUN_00768971(void *this)

{
  char cVar1;
  undefined4 unaff_EBX;
  bool in_ZF;
  char *pcStack00000004;
  uint uStack0000000c;
  char cStack00000010;
  void *in_stack_00000024;
  undefined1 *puStack00000034;
  
  uStack0000000c = 0x20;
  cVar1 = (char)unaff_EBX;
  cStack00000010 = cVar1;
  if (in_ZF) {
    pcStack00000004 = &stack0x00000010;
    pcStack00000004 = _malloc(0x20);
    _strncpy(pcStack00000004,"ui/postproc/markercentre.dds",0x1c);
    pcStack00000004[0x1c] = cVar1;
    puStack00000034 = &stack0xffffffec;
    FUN_0069f100(this,(int *)&stack0x00000004,unaff_EBX,unaff_EBX,0x3f800000,0x3f800000);
    if (0x14 < uStack0000000c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack00000004);
    }
    if (*(int *)(*(int *)((int)this + 0x424) + 0x50) != *(int *)(DAT_0104e478 + 0x378)) {
      puStack00000034 = (undefined1 *)CONCAT31(CONCAT21(CONCAT11(0xff,cVar1),cVar1),cVar1);
      *(undefined1 **)(*(int *)((int)this + 0x424) + 200) = puStack00000034;
    }
  }
  else {
    pcStack00000004 = &stack0x00000010;
    pcStack00000004 = _malloc(0x20);
    _strncpy(pcStack00000004,"ui/postproc/markercentre_h.dds",0x1e);
    pcStack00000004[0x1e] = cVar1;
    puStack00000034 = &stack0xffffffec;
    FUN_0069f100(this,(int *)&stack0x00000004,unaff_EBX,unaff_EBX,0x3f800000,0x3f800000);
    if (0x14 < uStack0000000c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack00000004);
    }
    if (*(int *)(*(int *)((int)this + 0x424) + 0x50) != *(int *)(DAT_0104e478 + 0x378)) {
      *(undefined4 *)(*(int *)((int)this + 0x424) + 200) = 0xffe0e0e0;
      ExceptionList = in_stack_00000024;
      return;
    }
  }
  ExceptionList = in_stack_00000024;
  return;
}


//// FUNCTION FUN_00768b80 @ 00768b80 ////

void __fastcall FUN_00768b80(int *param_1)

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


//// FUNCTION FUN_00768bd0 @ 00768bd0 ////

void __thiscall FUN_00768bd0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4e190;
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


//// FUNCTION FUN_00768c20 @ 00768c20 ////

void __fastcall FUN_00768c20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4e190;
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


//// FUNCTION FUN_00768c70 @ 00768c70 ////

undefined4 * __thiscall
FUN_00768c70(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8486;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069fb10(this,param_1,param_3,param_5[1],*param_5,0,0,0x3f800000,0x3f800000);
  *(undefined ***)this = &PTR_FUN_00d4e1bc;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d4e1a0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x430) = *param_5;
  *(undefined4 *)((int)this + 0x434) = param_5[1];
  *(undefined1 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  local_4 = 1;
  FUN_00741630(this,0,0x768510,this,(char *)*param_4);
  FUN_0069ee30(this,1,param_2,0,0,0x3f800000,0x3f800000);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00768d80 @ 00768d80 ////

void __fastcall FUN_00768d80(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd8498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4e1bc;
  param_1[0x14] = &PTR_LAB_00d4e1a0;
  local_4 = 0;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x109]);
}


//// FUNCTION FUN_00768e10 @ 00768e10 ////

void __thiscall FUN_00768e10(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x420);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(int *)((int)this + 0x420) = param_1;
  return;
}


//// FUNCTION FUN_00768e40 @ 00768e40 ////

void __cdecl FUN_00768e40(int param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined ***local_c;
  undefined4 local_4;
  
  if ((param_1 == 0) || (((DAT_0104e43c == 0 && (DAT_0104e64c == 0)) && (DAT_0104e2f8 == 0)))) {
    if (DAT_0104e3e8 == param_1) {
      if (DAT_0104e3e8 != 0) {
        DAT_0104e3d0 = param_2;
        return;
      }
    }
    else {
      if (DAT_0104e3e8 == 0) {
        pppuVar2 = &local_18;
        local_14 = 0;
        local_10 = 0;
        local_18 = &PTR_LAB_00d4c46c;
        local_4 = 0;
        local_c = pppuVar2;
      }
      else {
        pppuVar2 = (undefined ***)(DAT_0104e3e8 + 0x38);
      }
      ppuVar1 = pppuVar2[5];
      if (DAT_0104e3e8 == 0) {
        FUN_0074f1e0(&local_18);
      }
      if (ppuVar1 != (undefined **)0x0) {
        FUN_00768950(ppuVar1,'\0');
      }
      (*(code *)DAT_0104e3d4[1])();
      DAT_0104e3e8 = param_1;
      (*(code *)*DAT_0104e3d4)();
      if (DAT_0104e3e8 == 0) {
        pppuVar2 = &local_18;
        local_14 = 0;
        local_10 = 0;
        local_18 = &PTR_LAB_00d4c46c;
        local_4 = 0;
        local_c = pppuVar2;
      }
      else {
        pppuVar2 = (undefined ***)(DAT_0104e3e8 + 0x38);
      }
      ppuVar1 = pppuVar2[5];
      if (DAT_0104e3e8 == 0) {
        FUN_0074f1e0(&local_18);
      }
      if (ppuVar1 != (undefined **)0x0) {
        DAT_0104e3d0 = param_2;
        FUN_00768950(ppuVar1,'\x01');
        FUN_0076e390(DAT_0104e458,0);
        return;
      }
      DAT_0104e3d0 = 0;
      FUN_0076e390(DAT_0104e458,0);
    }
  }
  return;
}


//// FUNCTION FUN_00768f90 @ 00768f90 ////

undefined4 * __thiscall FUN_00768f90(void *this,byte param_1)

{
  FUN_00768d80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00768fb0 @ 00768fb0 ////

int __thiscall FUN_00768fb0(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 local_4;
  
  local_4 = 0;
  cVar3 = (**(code **)(*(int *)this + 0x34))(param_1,&local_4);
  if ((cVar3 != '\0') && (*(int *)((int)this + 0x420) != 0)) {
    uVar4 = 0;
    while( true ) {
      iVar1 = *(int *)(*(int *)((int)this + 0x420) + 0x68);
      if ((iVar1 == 0) ||
         ((uint)(*(int *)(*(int *)((int)this + 0x420) + 0x6c) - iVar1 >> 2) <= uVar4)) break;
      iVar1 = *(int *)(iVar1 + uVar4 * 4);
      piVar2 = *(int **)(iVar1 + 0x4c);
      if (piVar2 != (int *)0x0) {
        local_4 = 0;
        cVar3 = (**(code **)(*piVar2 + 0x34))(param_1,&local_4);
        if (cVar3 != '\0') {
          return iVar1;
        }
      }
      uVar4 = uVar4 + 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00769330 @ 00769330 ////

void FUN_00769330(void)

{
  FUN_00768e40(0,0);
  return;
}


//// FUNCTION FUN_00769340 @ 00769340 ////

void FUN_00769340(void)

{
  void *this;
  undefined4 *puVar1;
  
  puVar1 = DAT_0104e3e8;
  if (DAT_0104e3e8 != (undefined4 *)0x0) {
    DAT_0104e3cc = 0;
    FUN_00768e40(0,0);
    this = (void *)puVar1[0x14];
    if (this != (void *)0x0) {
      FUN_0074fbf0(this,puVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00769370 @ 00769370 ////

float10 __cdecl FUN_00769370(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = *(int *)(param_1 + 0xc4);
  if (*(char *)(iVar1 + 0x78) == '\0') {
    uVar4 = 0;
    while( true ) {
      if ((*(int *)(iVar1 + 0x68) == 0) ||
         ((uint)(*(int *)(iVar1 + 0x6c) - *(int *)(iVar1 + 0x68) >> 2) <= uVar4)) goto LAB_007693f3;
      if (*(int *)(*(int *)(iVar1 + 0x68) + uVar4 * 4) == param_1) break;
      uVar4 = uVar4 + 1;
    }
    if (*(int *)(iVar1 + 0x68) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(iVar1 + 0x6c) - *(int *)(iVar1 + 0x68) >> 2;
    }
    if ((uVar4 + 1 < uVar3) &&
       (iVar1 = *(int *)(*(int *)(iVar1 + 0x68) + 4 + uVar4 * 4), iVar1 != 0)) {
      iVar1 = *(int *)(iVar1 + 0xc0);
      if (iVar1 < *(int *)(param_1 + 0xc0) + iVar2) {
        iVar2 = iVar1 - *(int *)(param_1 + 0xc0);
      }
    }
  }
LAB_007693f3:
  param_1 = iVar2;
  fVar5 = FUN_007705e0(DAT_0104e478);
  if (fVar5 * (float10)param_1 <= (float10)16.0) {
    return (float10)16.0;
  }
  fVar5 = FUN_007705e0(DAT_0104e478);
  return fVar5 * (float10)param_1;
}


//// FUNCTION FUN_00769430 @ 00769430 ////

void __fastcall FUN_00769430(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined **local_2c;
  int local_28;
  int *local_24;
  undefined ***local_20;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd84e0;
  pvStack_c = ExceptionList;
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  ExceptionList = &pvStack_c;
  if (param_1 != (int *)0x0) {
    local_24 = param_1 + 6;
    local_28 = *local_24;
    ExceptionList = &pvStack_c;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = 0x41400000;
  local_10 = 0x41400000;
  iVar1 = param_1[0x10a];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  local_4 = 0;
  local_18 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(int **)(iVar1 + 0xb8) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = local_14;
  *(undefined4 *)(iVar1 + 0xc0) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(int **)(*local_24 + 4) = &local_28;
  *local_24 = (int)&local_28;
  local_14 = 0x41400000;
  local_10 = 0x41400000;
  iVar1 = param_1[0x10a];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  local_4 = 1;
  local_18 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(int **)(iVar1 + 0x100) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = local_14;
  *(undefined4 *)(iVar1 + 0x108) = local_10;
  local_4 = 0xffffffff;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_18 = (int *)0x0;
  local_28 = 0;
  local_24 = (int *)0x0;
  do {
    cVar2 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar2 != '\0');
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007695e0 @ 007695e0 ////

uint * __thiscall FUN_007695e0(void *this,uint param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint unaff_ESI;
  float10 fVar7;
  uint uVar8;
  undefined4 uVar9;
  char *_Dest;
  undefined4 uVar10;
  void *pvVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *local_74;
  undefined1 *local_70;
  uint *local_6c;
  uint local_68;
  char *local_64;
  uint local_60;
  uint uStack_5c;
  char acStack_58 [8];
  undefined1 uStack_50;
  uint *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  uint local_40 [3];
  undefined1 uStack_34;
  undefined4 *puStack_24;
  undefined4 uStack_1c;
  undefined1 *puStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8587;
  pvStack_c = ExceptionList;
  local_6c = &local_60;
  local_60 = local_60 & 0xffffff00;
  local_68 = 0;
  local_64 = (char *)0x20;
  ExceptionList = &pvStack_c;
  local_74 = this;
  local_6c = _malloc(0x20);
  _strncpy((char *)local_6c,"ui/postproc/markercentre.dds",0x1c);
  local_68 = 0x1c;
  *(char *)(local_6c + 7) = '\0';
  uVar9 = 0;
  uVar10 = 0;
  uVar12 = 0x3f800000;
  uVar13 = 0x3f800000;
  local_4 = 0;
  puVar6 = (undefined4 *)(param_2 + 0xec);
  local_70 = &stack0xffffff68;
  fVar7 = FUN_00769370(param_2);
  FUN_0069fb10(this,(int *)&local_6c,puVar6,param_3,(float)fVar7,uVar9,uVar10,uVar12,uVar13);
  local_4._0_1_ = 2;
  if (&DAT_00000014 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  *(undefined ***)this = &PTR_FUN_00d4e04c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4e030;
  *(uint *)((int)this + 0x420) = param_1;
  *(uint *)((int)this + 0x424) = param_2;
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = local_40[0] & 0xffffff00;
    local_48 = 0;
    local_44 = (undefined1 *)0x20;
    local_4c = _malloc(0x20);
    _strncpy((char *)local_4c,"ui/postproc/markerleft.dds",0x1a);
    local_48 = 0x1a;
    *(char *)((int)local_4c + 0x1a) = '\0';
    local_4 = CONCAT31(local_4._1_3_,4);
    puVar3 = FUN_0069fb10(pvVar2,(int *)&local_4c,puVar6,param_3,0x41c00000,0,0,0x3f800000,
                          0x3f800000);
  }
  *(undefined4 **)((int)this + 0x42c) = puVar3;
  local_4 = 2;
  if ((pvVar2 != (void *)0x0) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  uVar14 = 0xbf800000;
  pvVar11 = (void *)0x1;
  pvVar2 = this;
  (**(code **)(**(int **)((int)this + 0x42c) + 0x5c))();
  uVar8 = 1;
  (**(code **)(**(int **)((int)this + 0x42c) + 100))();
  puVar1 = (uint *)(*(int *)((int)this + 0x42c) + 0x114);
  *puVar1 = *puVar1 & 0xfffffff7;
  FUN_0073f6e0(this,*(int **)((int)this + 0x42c));
  if (*(char *)(iStack_10 + 0xbc) == '\0') {
    pvStack_c = operator_new(0x420);
    if (pvStack_c == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_64 = acStack_58;
      acStack_58[0] = '\0';
      local_60 = 0;
      uStack_5c = 0x20;
      local_64 = _malloc(0x20);
      _strncpy(local_64,"ui/postproc/markerrightslim.dds",0x1f);
      local_60 = 0x1f;
      local_64[0x1f] = '\0';
      pvVar2 = (void *)((uint)pvVar2 | 4);
      uStack_1c = CONCAT31(uStack_1c._1_3_,10);
      puStack_14 = &stack0xffffff50;
      puVar3 = FUN_0069fb10(pvStack_c,(int *)&local_64,puVar6,param_3,0x41c00000,0,0,0x3f800000,
                            0x3f800000);
    }
    *(undefined4 **)((int)this + 0x430) = puVar3;
    uStack_1c = 2;
    if ((((uint)pvVar2 & 4) != 0) && (0x14 < uStack_5c)) {
                    /* WARNING: Subroutine does not return */
      _free(local_64);
    }
  }
  else {
    pvStack_c = operator_new(0x420);
    if (pvStack_c == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_64 = acStack_58;
      acStack_58[0] = '\0';
      local_60 = 0;
      uStack_5c = 0x20;
      local_64 = _malloc(0x20);
      _strncpy(local_64,"ui/postproc/markerright.dds",0x1b);
      local_60 = 0x1b;
      local_64[0x1b] = '\0';
      pvVar2 = (void *)((uint)pvVar2 | 2);
      uStack_1c = CONCAT31(uStack_1c._1_3_,7);
      puStack_14 = &stack0xffffff50;
      puVar3 = FUN_0069fb10(pvStack_c,(int *)&local_64,puVar6,param_3,0x41c00000,0,0,0x3f800000,
                            0x3f800000);
    }
    *(undefined4 **)((int)this + 0x430) = puVar3;
    uStack_1c = 2;
    if ((((uint)pvVar2 & 2) != 0) && (0x14 < uStack_5c)) {
                    /* WARNING: Subroutine does not return */
      _free(local_64);
    }
  }
  uStack_1c = 2;
  pvVar2 = this;
  (**(code **)(**(int **)((int)this + 0x430) + 0x60))();
  (**(code **)(**(int **)((int)this + 0x430) + 100))();
  puVar1 = (uint *)(*(int *)((int)this + 0x430) + 0x114);
  *puVar1 = *puVar1 & 0xfffffff7;
  FUN_0073f6e0(this,*(int **)((int)this + 0x430));
  puStack_24 = operator_new(900);
  uStack_34 = 0xc;
  if (puStack_24 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00737730(puStack_24);
  }
  *(int **)((int)this + 0x428) = piVar4;
  uStack_34 = 2;
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x428) + 100))();
  local_74 = &local_68;
  local_68 = local_68 & 0xffff0000;
  local_70 = (undefined1 *)0x0;
  local_6c = (uint *)&lpType_0000000a;
  local_4c = (uint *)CONCAT31(local_4c._1_3_,0xd);
  iVar5 = FUN_00ace02d((short *)&DAT_00d2e120);
  iVar5 = FUN_00420300(puVar6,(short *)&DAT_00d2e120,0xffffffff,iVar5);
  if (iVar5 == -1) {
    FUN_004036d0(&local_74,(wchar_t *)*puVar6,*(uint *)(param_2 + 0xf0));
  }
  else {
    puVar6 = FUN_004211c0(puVar6,(undefined4 *)&stack0xffffff6c,iVar5 + 1,
                          *(int *)(local_40[0] + 0xf0) - iVar5);
    FUN_004036d0(&local_74,(wchar_t *)*puVar6,puVar6[1]);
    if (10 < uVar14) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar11);
    }
  }
  (**(code **)(**(int **)((int)this + 0x428) + 0x54))();
  local_44 = (undefined1 *)0xff000000;
  _Dest = &stack0xffffff74;
  *(undefined4 *)(*(int *)((int)this + 0x428) + 0x350) = 0xff000000;
  pvVar11 = (void *)(uVar14 & 0xffffff00);
  _strncpy(_Dest,"Lithograph Bold",0xf);
  _Dest[0xf] = '\0';
  local_44 = &stack0xffffff28;
  uStack_50 = 0xe;
  (**(code **)(**(int **)((int)this + 0x428) + 0xfc))(&stack0xffffff68,0xe,0);
  local_60 = CONCAT31(local_60._1_3_,0xd);
  if (uVar8 < 0x15) {
    (**(code **)(**(int **)((int)this + 0x428) + 0x84))(0);
    FUN_0073f6e0(this,*(int **)((int)this + 0x428));
    if (unaff_ESI < 0xb) {
      ExceptionList = local_6c;
      return this;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvVar11);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar2);
}


//// FUNCTION FUN_00769bf0 @ 00769bf0 ////

void __fastcall FUN_00769bf0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00768720(param_1);
  iVar1 = *param_1;
  fVar2 = FUN_00769370(param_1[0x109]);
  (**(code **)(iVar1 + 0x78))((float)fVar2);
  FUN_00769430(param_1);
  *(undefined4 *)(param_1[0x10a] + 0x350) = *(undefined4 *)(param_1[0x109] + 200);
  if ((DAT_0104e394 == 0) && (DAT_0104e420 == 0)) {
    (**(code **)(*param_1 + 0xc0))(1);
    (**(code **)(*(int *)param_1[0x10c] + 0xc0))(1);
    (**(code **)(*(int *)param_1[0x10b] + 0xc0))(1);
    return;
  }
  (**(code **)(*param_1 + 0xc0))(0);
  (**(code **)(*(int *)param_1[0x10c] + 0xc0))(0);
  (**(code **)(*(int *)param_1[0x10b] + 0xc0))(0);
  return;
}


//// FUNCTION FUN_00769ca0 @ 00769ca0 ////

void __thiscall FUN_00769ca0(void *this,uint param_1)

{
  void *this_00;
  uint *puVar1;
  void *unaff_EBX;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd85ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x434);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = FUN_007695e0(this_00,(uint)this,param_1,*(undefined4 *)((int)this + 0x434));
  }
  local_4 = 0xffffffff;
  FUN_00768720((int *)puVar1);
  if (*(int *)((int)this + 0x448) != 0) {
    (**(code **)(*puVar1 + 0x18))(2,*(int *)((int)this + 0x448),param_1,"TIMELINE_MAINBUTTON");
    (**(code **)(*(int *)puVar1[0x10b] + 0x18))
              (2,*(undefined4 *)((int)this + 0x448),param_1,"TIMELINE_STARTBUTTON");
    (**(code **)(*(int *)puVar1[0x10c] + 0x18))
              (2,*(undefined4 *)((int)this + 0x448),param_1,"TIMELINE_ENDBUTTON");
  }
  (**(code **)(*(int *)this + 0xc))(puVar1,1);
  (**(code **)(*(int *)(param_1 + 0x38) + 4))();
  *(uint **)(param_1 + 0x4c) = puVar1;
  (*(code *)**(undefined4 **)(param_1 + 0x38))();
  ExceptionList = unaff_EBX;
  return;
}


//// FUNCTION FUN_0076a140 @ 0076a140 ////

void __fastcall FUN_0076a140(undefined4 *param_1)

{
  undefined4 *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd8608;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4e3cc;
  param_1[0x14] = &PTR_FUN_00d4e3b0;
  _Memory = DAT_0104e3ec;
  local_4 = 0;
  if (DAT_0104e3ec != (undefined4 *)0x0) {
    FUN_0074cdd0(DAT_0104e3ec);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0104e3ec = (undefined4 *)0x0;
  (**(code **)(**(int **)(DAT_0104e478 + 0x34c) + 0xc))();
  DAT_0104e404 = 0;
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0076a1e0 @ 0076a1e0 ////

int * __thiscall FUN_0076a1e0(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  size_t sVar7;
  void *pvVar8;
  char *pcVar9;
  uint *puVar10;
  void *this_00;
  uint unaff_EBP;
  uint unaff_EDI;
  bool bVar11;
  float10 fVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  undefined1 *puStack_1c4;
  uint *puStack_1c0;
  undefined1 *_Memory;
  undefined1 *_Memory_00;
  uint *puStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  void *pvStack_184;
  uint *puStack_180;
  undefined1 *puVar17;
  uint *puStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  void *pvStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  char *_Dest;
  uint uVar18;
  uint *puStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint uVar19;
  float fVar20;
  void *apvStack_b8 [2];
  uint uStack_b0;
  undefined1 *puStack_a0;
  void *pvStack_9c;
  uint *puStack_98;
  float fStack_94;
  char *pcStack_90;
  uint uStack_8c;
  uint uStack_88;
  char acStack_84 [12];
  void *apvStack_78 [2];
  undefined1 *apuStack_70 [2];
  uint uStack_68;
  uint *puStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint auStack_4c [7];
  undefined2 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 auStack_24 [10];
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd88dc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = this;
  FUN_006889c0(this,'\0');
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  *(undefined ***)this = &PTR_FUN_00d4e3cc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4e3b0;
  local_4 = 0;
  DAT_0104e3f8 = param_1;
  FUN_0073e4e0(this,0x43960000);
  piVar4 = (int *)FUN_0071b2a0();
  fVar12 = (float10)(**(code **)(*piVar4 + 0x10))();
  fStack_94 = (float)fVar12;
  fVar12 = FUN_0073e630((int)this);
  fVar20 = (float)(((float10)fStack_94 - fVar12) * (float10)0.5);
  iVar5 = FUN_0071b2a0();
  FUN_00741940(this,1,iVar5,fVar20);
  piVar4 = (int *)FUN_0071b2a0();
  fVar12 = (float10)(**(code **)(*piVar4 + 0x14))();
  fStack_94 = (float)fVar12;
  fVar12 = FUN_0073e640((int)this);
  fVar20 = (float)(((float10)fStack_94 - fVar12) * (float10)0.5);
  iVar5 = FUN_0071b2a0();
  FUN_00741b60(this,1,iVar5,fVar20);
  puStack_30 = auStack_24;
  auStack_24[0] = 0;
  uStack_2c = 0;
  uStack_28 = 10;
  pcStack_90 = acStack_84;
  acStack_84[0] = '\0';
  uStack_8c = 0;
  uStack_88 = 0x20;
  pcStack_90 = _malloc(0x20);
  _strncpy(pcStack_90,"POST_RECORD_DIALOGUE",0x14);
  uStack_8c = 0x14;
  pcStack_90[0x14] = '\0';
  local_4._0_1_ = 2;
  puVar6 = FUN_009b5030(apuStack_70,&pcStack_90);
  sVar7 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  FUN_0040cae0(&puStack_30,L"<P ALIGN\t= CENTER>",sVar7);
  FUN_0040cae0(&puStack_30,(wchar_t *)*puVar6,puVar6[1]);
  sVar7 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&puStack_30,L"</P>",sVar7);
  if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(apuStack_70[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < uStack_88) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_90);
  }
  FUN_006888d0(this,&puStack_30);
  piVar4 = (int *)FUN_0071b2a0();
  pcVar9 = this;
  (**(code **)(*piVar4 + 0xc))();
  pvVar8 = operator_new(0x420);
  pvStack_9c = pvVar8;
  if (pvVar8 == (void *)0x0) {
    DAT_0104e400 = (uint *)0x0;
  }
  else {
    puStack_58 = auStack_4c;
    auStack_4c[0] = auStack_4c[0] & 0xffffff00;
    uStack_54 = 0;
    uStack_50 = 0x14;
    _strncpy((char *)puStack_58,"button_wavesave",0xf);
    uStack_54 = 0xf;
    *(char *)((int)puStack_58 + 0xf) = '\0';
    puStack_98 = &uStack_8c;
    uStack_8c = uStack_8c & 0xffffff00;
    fStack_94 = 0.0;
    pcStack_90 = &DAT_00000014;
    _strncpy((char *)puStack_98,"button_tick.",0xc);
    fStack_94 = 1.68156e-44;
    *(char *)(puStack_98 + 3) = '\0';
    pvStack_c = (void *)0x5;
    uStack_fc = 0x76a494;
    puVar6 = FUN_009b5030(apvStack_78,&puStack_58);
    puStack_a0 = &stack0xffffff18;
    pvStack_c = (void *)0x6;
    unaff_EBP = 7;
    uStack_fc = 0x76a4d7;
    DAT_0104e400 = FUN_0069fb10(pvVar8,(int *)&puStack_98,puVar6,0x42400000,0x42400000,0,0,
                                0x3f800000,0x3f800000);
  }
  if (((unaff_EBP & 4) != 0) &&
     (unaff_EBP = unaff_EBP & 0xfffffffb, &lpType_0000000a < apuStack_70[0])) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_78[0]);
  }
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, &DAT_00000014 < pcStack_90)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_98);
  }
  pvStack_c = (void *)0x1;
  if (((unaff_EBP & 1) != 0) && (0x14 < uStack_50)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_58);
  }
  (**(code **)(*DAT_0104e400 + 0x18))();
  uStack_fc = 0x76a596;
  (**(code **)(*DAT_0104e400 + 0x18))();
  uStack_100 = *(undefined4 *)((int)this + 0x36c);
  uStack_fc = 0x41200000;
  uStack_104 = 2;
  uStack_108 = 0x76a5af;
  (**(code **)(*DAT_0104e400 + 0x60))();
  uStack_10c = *(uint *)((int)this + 0x36c);
  uStack_108 = 0x41000000;
  uStack_110 = 2;
  uStack_114 = 0x76a5c8;
  (**(code **)(*DAT_0104e400 + 0x68))();
  uStack_114 = 1;
  puStack_118 = DAT_0104e400;
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    DAT_0104e3fc = (uint *)0x0;
  }
  else {
    pcVar9 = &stack0xffffff34;
    unaff_EDI = 0x14;
    _strncpy(pcVar9,"button_cancel",0xd);
    pcVar9[0xd] = '\0';
    puStack_98 = &uStack_8c;
    uStack_108 = uStack_108 | 8;
    uStack_8c = uStack_8c & 0xffffff00;
    fStack_94 = 0.0;
    pcStack_90 = &DAT_00000014;
    _strncpy((char *)puStack_98,"button_quit.",0xc);
    fStack_94 = 1.68156e-44;
    *(char *)(puStack_98 + 3) = '\0';
    auStack_4c[0] = 0xc;
    uStack_108 = uStack_108 | 0x10;
    uStack_13c = 0x76a69d;
    puVar6 = FUN_009b5030(apvStack_b8,(undefined4 *)&stack0xffffff28);
    uStack_108 = uStack_108 | 0x20;
    auStack_4c[0] = 0xd;
    uStack_13c = 0x76a6e6;
    DAT_0104e3fc = FUN_0069fb10(pvVar8,(int *)&puStack_98,puVar6,0x42400000,0x42400000,0,0,
                                0x3f800000,0x3f800000);
  }
  if (((uStack_108 & 0x20) != 0) && (uStack_108 = uStack_108 & 0xffffffdf, 10 < uStack_b0)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_b8[0]);
  }
  if (((uStack_108 & 0x10) != 0) &&
     (uStack_108 = uStack_108 & 0xffffffef, &DAT_00000014 < pcStack_90)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_98);
  }
  auStack_4c[0] = 1;
  if (((uStack_108 & 8) != 0) && (uStack_108 = uStack_108 & 0xfffffff7, 0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar9);
  }
  (**(code **)(*DAT_0104e3fc + 0x18))();
  uVar18 = 0;
  _Dest = (char *)0x5;
  uStack_13c = 0x76a7a5;
  (**(code **)(*DAT_0104e3fc + 0x18))();
  uStack_140 = *(undefined4 *)((int)this + 0x36c);
  uStack_13c = 0x41200000;
  pvStack_144 = (void *)0x1;
  uStack_148 = 0x76a7be;
  (**(code **)(*DAT_0104e3fc + 0x5c))();
  uStack_14c = *(uint *)((int)this + 0x36c);
  uStack_148 = 0x41000000;
  uStack_150 = 2;
  uStack_154 = 0x76a7d7;
  (**(code **)(*DAT_0104e3fc + 0x68))();
  uStack_154 = 1;
  puStack_158 = DAT_0104e3fc;
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    puVar10 = (uint *)0x0;
  }
  else {
    puStack_118 = &uStack_10c;
    uStack_10c = uStack_10c & 0xffffff00;
    uStack_114 = 0;
    uStack_110 = 0x14;
    _strncpy((char *)puStack_118,"button_record",0xd);
    uStack_114 = 0xd;
    *(char *)((int)puStack_118 + 0xd) = '\0';
    uStack_148 = uStack_148 | 0x40;
    unaff_EDI = 0x20;
    pcVar9 = _malloc(0x20);
    _strncpy(pcVar9,"ui/postproc/record_big.dds",0x1a);
    pcVar9[0x1a] = '\0';
    uStack_148 = uStack_148 | 0x80;
    uStack_8c = 0x13;
    puStack_180 = (uint *)0x76a8c2;
    puVar6 = FUN_009b5030(&pvStack_144,&puStack_118);
    uStack_148 = uStack_148 | 0x100;
    uStack_8c = 0x14;
    puVar10 = FUN_0069fb10(pvVar8,(int *)&stack0xffffff28,puVar6,0x42400000,0x42400000,0,0,
                           0x3f800000,0x3f800000);
  }
  if (((uStack_148 & 0x100) != 0) && (uStack_148 = uStack_148 & 0xfffffeff, 10 < uStack_13c)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_144);
  }
  if (((char)uStack_148 < '\0') && (uStack_148 = uStack_148 & 0xffffff7f, 0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar9);
  }
  uStack_8c = 1;
  if (((uStack_148 & 0x40) != 0) && (uStack_148 = uStack_148 & 0xffffffbf, 0x14 < uStack_110)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_118);
  }
  uVar19 = 0x40;
  pcVar9 = _malloc(0x40);
  _strncpy(pcVar9,"ui/postproc/record_big_press.dds",0x20);
  pcVar9[0x20] = '\0';
  uStack_8c._0_1_ = 0x18;
  FUN_0069ee30(puVar10,3,(undefined4 *)&stack0xffffff08,0,0,0x3f800000,0x3f800000);
  uStack_8c = CONCAT31(uStack_8c._1_3_,1);
  if (0x14 < uVar19) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar9);
  }
  (**(code **)(*puVar10 + 0x18))();
  uVar19 = 0;
  pcVar9 = (char *)0x5;
  (**(code **)(*puVar10 + 0x18))();
  puVar17 = (undefined1 *)0xc1880000;
  puStack_180 = DAT_0104e3fc;
  pvStack_184 = (void *)0x2;
  uStack_188 = 0x76aa63;
  (**(code **)(*puVar10 + 0x5c))();
  uStack_18c = *(uint *)((int)this + 0x36c);
  uStack_188 = 0x41000000;
  uStack_190 = 2;
  uStack_194 = 0x76aa79;
  (**(code **)(*puVar10 + 0x68))();
  uStack_194 = 1;
  puStack_198 = puVar10;
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puStack_118 = &uStack_10c;
    uStack_10c = uStack_10c & 0xffffff00;
    uStack_114 = 0;
    uStack_110 = 0x14;
    _strncpy((char *)puStack_118,"button_stop",0xb);
    uStack_114 = 0xb;
    *(char *)((int)puStack_118 + 0xb) = '\0';
    uStack_188 = uStack_188 | 0x200;
    uVar18 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/postproc/stop.dds",0x14);
    _Dest[0x14] = '\0';
    uStack_188 = uStack_188 | 0x400;
    puStack_1c0 = (uint *)0x76ab62;
    puVar6 = FUN_009b5030(&pvStack_184,&puStack_118);
    uStack_188 = uStack_188 | 0x800;
    piVar4 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffec8,puVar6,0x42400000,0x42400000,0,0,0x3f800000
                          ,0x3f800000);
  }
  if (((uStack_188 & 0x800) != 0) &&
     (uStack_188 = uStack_188 & 0xfffff7ff, &lpType_0000000a < puVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_184);
  }
  if (((uStack_188 & 0x400) != 0) && (uStack_188 = uStack_188 & 0xfffffbff, 0x14 < uVar18)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  if (((uStack_188 & 0x200) != 0) && (uStack_188 = uStack_188 & 0xfffffdff, 0x14 < uStack_110)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_118);
  }
  puStack_158 = &uStack_14c;
  uStack_14c = uStack_14c & 0xffffff00;
  uStack_154 = 0;
  uStack_150 = 0x20;
  puStack_158 = _malloc(0x20);
  _strncpy((char *)puStack_158,"ui/postproc/stop_press.dds",0x1a);
  uStack_154 = 0x1a;
  *(char *)((int)puStack_158 + 0x1a) = '\0';
  FUN_0069ee30(piVar4,3,&puStack_158,0,0,0x3f800000,0x3f800000);
  if (0x14 < uStack_150) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_158);
  }
  (**(code **)(*piVar4 + 0x18))();
  (**(code **)(*piVar4 + 0x18))();
  _Memory = (undefined1 *)0xc0000000;
  puStack_1c4 = (undefined1 *)0x2;
  puStack_1c0 = puVar10;
  (**(code **)(*piVar4 + 0x5c))();
  pvVar8 = *(void **)((int)this + 0x36c);
  (**(code **)(*piVar4 + 0x68))();
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  this_00 = operator_new(0x420);
  bVar11 = this_00 == (void *)0x0;
  if (bVar11) {
    piVar4 = (int *)0x0;
  }
  else {
    puStack_158 = &uStack_14c;
    uStack_14c = uStack_14c & 0xffffff00;
    uStack_154 = 0;
    uStack_150 = 0x14;
    _strncpy((char *)puStack_158,"button_play",0xb);
    uStack_154 = 0xb;
    *(char *)((int)puStack_158 + 0xb) = '\0';
    uVar19 = 0x20;
    pcVar9 = _malloc(0x20);
    _strncpy(pcVar9,"ui/postproc/play.dds",0x14);
    pcVar9[0x14] = '\0';
    uStack_10c = 0x23;
    puVar6 = FUN_009b5030(&puStack_1c4,&puStack_158);
    uStack_10c = 0x24;
    piVar4 = FUN_0069fb10(this_00,(int *)&stack0xfffffe88,puVar6,0x42400000,0x42400000,0,0,
                          0x3f800000,0x3f800000);
  }
  if ((!bVar11) && (&lpType_0000000a < _Memory)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1c4);
  }
  if ((!bVar11) && (0x14 < uVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar9);
  }
  uStack_10c = 1;
  if ((!bVar11) && (0x14 < uStack_150)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_158);
  }
  puStack_198 = &uStack_18c;
  uStack_18c = uStack_18c & 0xffffff00;
  uStack_194 = 0;
  uStack_190 = 0x20;
  puStack_198 = _malloc(0x20);
  _Memory_00 = &stack0xfffffe18;
  _strncpy((char *)puStack_198,"ui/postproc/play_press.dds",0x1a);
  uStack_194 = 0x1a;
  *(char *)((int)puStack_198 + 0x1a) = '\0';
  uStack_10c._0_1_ = 0x28;
  FUN_0069ee30(piVar4,3,&puStack_198,0,0,0x3f800000,0x3f800000);
  uStack_10c = CONCAT31(uStack_10c._1_3_,1);
  if (0x14 < uStack_190) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_198);
  }
  (**(code **)(*piVar4 + 0x18))();
  (**(code **)(*piVar4 + 0x18))();
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 0x68))();
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  puVar6 = operator_new(0x3c8);
  uStack_14c._0_1_ = 0x29;
  if (puVar6 == (undefined4 *)0x0) {
    DAT_0104e3f4 = (int *)0x0;
  }
  else {
    DAT_0104e3f4 = FUN_00738920(puVar6);
  }
  iVar5 = *(int *)((int)this + 0x36c);
  iVar13 = 0;
  piVar4 = (int *)0x0;
  if (iVar5 != 0) {
    piVar4 = (int *)(iVar5 + 0x18);
    iVar13 = *piVar4;
    *(undefined1 **)(*piVar4 + 4) = &stack0xfffffe04;
    *piVar4 = (int)&stack0xfffffe04;
  }
  piVar2 = DAT_0104e3f4;
  iVar15 = 0x41200000;
  iVar16 = 0x41200000;
  piVar1 = DAT_0104e3f4 + 0x29;
  DAT_0104e3f4[0x28] = 1;
  uStack_14c._0_1_ = 0x2a;
  (**(code **)(*piVar1 + 4))();
  puVar6 = (undefined4 *)*piVar1;
  piVar2[0x2e] = iVar5;
  (*(code *)*puVar6)();
  piVar2[0x2f] = iVar15;
  piVar2[0x30] = iVar16;
  if (piVar4 != (int *)0x0) {
    *piVar4 = iVar13;
  }
  if (iVar13 != 0) {
    *(int **)(iVar13 + 4) = piVar4;
  }
  iVar5 = *(int *)((int)this + 0x36c);
  iVar13 = 0;
  piVar4 = (int *)0x0;
  if (iVar5 != 0) {
    piVar4 = (int *)(iVar5 + 0x18);
    iVar13 = *piVar4;
    *(undefined1 **)(*piVar4 + 4) = &stack0xfffffe04;
    *piVar4 = (int)&stack0xfffffe04;
  }
  piVar2 = DAT_0104e3f4;
  iVar15 = 0x41200000;
  iVar16 = 0x41200000;
  piVar1 = DAT_0104e3f4 + 0x3b;
  DAT_0104e3f4[0x3a] = 2;
  uStack_14c._0_1_ = 0x2b;
  (**(code **)(*piVar1 + 4))();
  puVar6 = (undefined4 *)*piVar1;
  piVar2[0x40] = iVar5;
  (*(code *)*puVar6)();
  piVar2[0x41] = iVar15;
  piVar2[0x42] = iVar16;
  if (piVar4 != (int *)0x0) {
    *piVar4 = iVar13;
  }
  if (iVar13 != 0) {
    *(int **)(iVar13 + 4) = piVar4;
  }
  iVar5 = *(int *)((int)this + 0x36c);
  iVar13 = 0;
  piVar4 = (int *)0x0;
  if (iVar5 != 0) {
    piVar4 = (int *)(iVar5 + 0x18);
    iVar13 = *piVar4;
    *(undefined1 **)(*piVar4 + 4) = &stack0xfffffe04;
    *piVar4 = (int)&stack0xfffffe04;
  }
  piVar2 = DAT_0104e3f4;
  iVar15 = 0x40000000;
  iVar16 = 0x40000000;
  piVar1 = DAT_0104e3f4 + 0x20;
  DAT_0104e3f4[0x1f] = 1;
  uStack_14c._0_1_ = 0x2c;
  (**(code **)(*piVar1 + 4))();
  puVar6 = (undefined4 *)*piVar1;
  piVar2[0x25] = iVar5;
  (*(code *)*puVar6)();
  piVar2[0x26] = iVar15;
  piVar2[0x27] = iVar16;
  if (piVar4 != (int *)0x0) {
    *piVar4 = iVar13;
  }
  if (iVar13 != 0) {
    *(int **)(iVar13 + 4) = piVar4;
  }
  puVar10 = DAT_0104e400;
  uVar18 = 0;
  puVar14 = (uint *)0x0;
  if (DAT_0104e400 != (uint *)0x0) {
    puVar14 = DAT_0104e400 + 6;
    uVar18 = *puVar14;
    *(undefined1 **)(*puVar14 + 4) = &stack0xfffffe04;
    *puVar14 = (uint)&stack0xfffffe04;
  }
  piVar1 = DAT_0104e3f4;
  iVar5 = -0x3f600000;
  iVar13 = -0x3f600000;
  piVar4 = DAT_0104e3f4 + 0x32;
  DAT_0104e3f4[0x31] = 1;
  uStack_14c._0_1_ = 0x2d;
  (**(code **)(*piVar4 + 4))();
  puVar6 = (undefined4 *)*piVar4;
  piVar1[0x37] = (int)puVar10;
  (*(code *)*puVar6)();
  piVar1[0x38] = iVar5;
  piVar1[0x39] = iVar13;
  uStack_14c._0_1_ = 1;
  if (puVar14 != (uint *)0x0) {
    *puVar14 = uVar18;
  }
  if (uVar18 != 0) {
    *(uint **)(uVar18 + 4) = puVar14;
  }
  DAT_0104e3f4[0xe5] = 0x32;
  FUN_00738730(DAT_0104e3f4,'\x01');
  uVar19 = 0;
  uVar18 = FUN_00ace02d(L"Sample");
  FUN_004036d0(&stack0xfffffe48,L"Sample",uVar18);
  uStack_14c = CONCAT31(uStack_14c._1_3_,0x2e);
  (**(code **)(*DAT_0104e3f4 + 0x54))();
  if (10 < uVar19) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  pcVar9 = &stack0xfffffe50;
  DAT_0104e3f4[0xd3] = 2;
  _strncpy(pcVar9,"Lithograph Bold",0xf);
  pcVar9[0xf] = '\0';
  uStack_150 = CONCAT31(uStack_150._1_3_,0x2f);
  (**(code **)(*DAT_0104e3f4 + 0xfc))(&stack0xfffffe44,0xe,0);
  if (&DAT_00000014 < puStack_1c4) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar8);
  }
  DAT_0104e3f4[0xd4] = -1;
  (**(code **)(*DAT_0104e3f4 + 0x100))(0,1);
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))(DAT_0104e3f4,1);
  do {
    cVar3 = FUN_007421c0(this);
  } while (cVar3 != '\0');
  piVar4 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar4 + 0xac))(this);
  DAT_0104e404 = this;
  if (&lpType_0000000a < puStack_198) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  ExceptionList = puVar17;
  return this;
}


//// FUNCTION FUN_0076b460 @ 0076b460 ////

undefined4 * __thiscall FUN_0076b460(void *this,byte param_1)

{
  FUN_0076a140(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0076b480 @ 0076b480 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076b480(void)

{
  DAT_0104e40a = DAT_010b9554 == '\0';
  _DAT_0104e408 = CONCAT11(1,DAT_010b9555 == '\0');
  return;
}


//// FUNCTION FUN_0076b4c0 @ 0076b4c0 ////

int * __thiscall FUN_0076b4c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0076b610 @ 0076b610 ////

void __thiscall FUN_0076b610(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4e624;
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


//// FUNCTION FUN_0076b660 @ 0076b660 ////

void __fastcall FUN_0076b660(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4e624;
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


//// FUNCTION FUN_0076b6b0 @ 0076b6b0 ////

void __fastcall FUN_0076b6b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd88f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4e64c;
  param_1[0x14] = &PTR_FUN_00d4e634;
  local_4 = 0;
  (*(code *)DAT_0104e40c[1])();
  DAT_0104e420 = 0;
  (*(code *)*DAT_0104e40c)();
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0076b730 @ 0076b730 ////

/* WARNING: Removing unreachable block (ram,0x0076bf84) */

undefined4 * __fastcall FUN_0076b730(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  size_t sVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *_Memory;
  char *pcVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  void *this;
  uint unaff_EBP;
  uint unaff_ESI;
  float10 fVar12;
  uint *puVar13;
  uint uStack_258;
  uint **_Memory_00;
  uint *puStack_220;
  int *piStack_21c;
  char *pcStack_218;
  uint uStack_214;
  int *piVar14;
  uint uStack_1fc;
  undefined4 *puVar15;
  uint uVar16;
  undefined2 **_Memory_01;
  undefined1 **ppuStack_1c4;
  int *piStack_1c0;
  char *pcStack_1bc;
  undefined1 *puStack_1b8;
  int *_Memory_02;
  uint *_Dest;
  uint uStack_1a0;
  char *_Memory_03;
  char *_Dest_00;
  uint uVar17;
  float fVar18;
  undefined1 *_Memory_04;
  undefined4 *puStack_15c;
  undefined4 uStack_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint *puStack_140;
  undefined4 uStack_13c;
  void **ppvStack_138;
  uint uStack_134;
  uint uStack_130;
  void *pvStack_12c;
  void *pvStack_128;
  uint uStack_124;
  char *pcStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  char acStack_114 [4];
  undefined1 uStack_110;
  void *pvStack_10c;
  uint *puStack_108;
  uint uStack_104;
  undefined2 *puStack_100;
  uint uStack_fc;
  undefined1 *puStack_f8;
  undefined2 auStack_f4 [2];
  uint uStack_f0;
  undefined1 uStack_ec;
  undefined2 *puStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined2 auStack_c0 [6];
  undefined1 uStack_b4;
  undefined1 uStack_9c;
  undefined2 *puStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 auStack_8c [18];
  undefined4 uStack_68;
  undefined1 uStack_58;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_34;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8b36;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  FUN_006889c0(param_1,'\x01');
  local_4 = 0;
  *param_1 = &PTR_FUN_00d4e64c;
  param_1[0x14] = &PTR_FUN_00d4e634;
  FUN_0073e4e0(param_1,0x43c80000);
  piVar1 = (int *)FUN_0071b2a0();
  fVar12 = (float10)(**(code **)(*piVar1 + 0x10))();
  puStack_15c = (undefined4 *)(float)fVar12;
  fVar12 = FUN_0073e630((int)param_1);
  fVar18 = (float)(((float10)(float)puStack_15c - fVar12) * (float10)0.5);
  iVar2 = FUN_0071b2a0();
  FUN_00741940(param_1,1,iVar2,fVar18);
  piVar1 = (int *)FUN_0071b2a0();
  fVar12 = (float10)(**(code **)(*piVar1 + 0x14))();
  puStack_15c = (undefined4 *)(float)fVar12;
  fVar12 = FUN_0073e640((int)param_1);
  fVar18 = (float)(((float10)(float)puStack_15c - fVar12) * (float10)0.5);
  iVar2 = FUN_0071b2a0();
  FUN_00741b60(param_1,1,iVar2,fVar18);
  puStack_98 = auStack_8c;
  auStack_8c[0] = 0;
  uStack_94 = 0;
  uStack_90 = 10;
  ppvStack_138 = &pvStack_12c;
  pvStack_12c = (void *)((uint)pvStack_12c & 0xffffff00);
  uStack_134 = 0;
  uStack_130 = 0x14;
  _strncpy((char *)ppvStack_138,"POST_SCENESOUNDS",0x10);
  uStack_134 = 0x10;
  *(char *)(ppvStack_138 + 4) = '\0';
  local_4._0_1_ = 2;
  puVar3 = FUN_009b5030(&puStack_f8,&ppvStack_138);
  sVar4 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  FUN_0040cae0(&puStack_98,L"<P ALIGN\t= CENTER>",sVar4);
  FUN_0040cae0(&puStack_98,(wchar_t *)*puVar3,puVar3[1]);
  sVar4 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&puStack_98,L"</P>",sVar4);
  if (10 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_f8);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < uStack_130) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_138);
  }
  FUN_006888d0(param_1,&puStack_98);
  piVar1 = (int *)FUN_0071b2a0();
  _Memory_04 = (undefined1 *)0x1;
  (**(code **)(*piVar1 + 0xc))();
  FUN_00741630(param_1,5,0x5f3800,0,"");
  pvVar5 = operator_new(0x3ac);
  if (pvVar5 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    pcStack_120 = acStack_114;
    acStack_114[0] = '\0';
    uStack_11c = 0;
    uStack_118 = 0x20;
    pcStack_120 = _malloc(0x20);
    _strncpy(pcStack_120,"ui/button_toggleoff.dds",0x17);
    uStack_11c = 0x17;
    pcStack_120[0x17] = '\0';
    puStack_140 = &uStack_134;
    uStack_134 = uStack_134 & 0xffffff00;
    uStack_13c = 0;
    ppvStack_138 = (void **)0x20;
    puStack_140 = _malloc(0x20);
    _strncpy((char *)puStack_140,"ui/button_toggleon.dds",0x16);
    uStack_13c = 0x16;
    *(char *)((int)puStack_140 + 0x16) = '\0';
    puStack_100 = auStack_f4;
    auStack_f4[0] = 0;
    uStack_fc = 0;
    puStack_f8 = &lpType_0000000a;
    uStack_1a0 = 0x76b9ea;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_100,(wchar_t *)&lpCaption_00d16918,uVar6);
    pvStack_c = (void *)0x6;
    unaff_EBP = 7;
    piVar1 = FUN_00667c80(pvVar5,&puStack_100,&puStack_140,&pcStack_120);
  }
  if (((unaff_EBP & 4) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffb, &lpType_0000000a < puStack_f8))
  {
                    /* WARNING: Subroutine does not return */
    _free(puStack_100);
  }
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, &DAT_00000014 < ppvStack_138))
  {
                    /* WARNING: Subroutine does not return */
    _free(puStack_140);
  }
  pvStack_c = (void *)0x1;
  if (((unaff_EBP & 1) != 0) && (0x14 < uStack_118)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_120);
  }
  uVar6 = 0x41000000;
  (**(code **)(*piVar1 + 0x5c))();
  puVar3 = param_1;
  (**(code **)(*piVar1 + 100))();
  FUN_006677f0(piVar1,0x42700000);
  _Memory_03 = "TRAILEREDITOR_TOGGLESFX";
  uStack_1a0 = 9;
  (**(code **)(*piVar1 + 0x18))();
  _Dest_00 = &stack0xfffffe84;
  pcVar8 = (char *)(uVar6 & 0xffffff00);
  uVar17 = 0x14;
  _strncpy(_Dest_00,"POST_TOGGLESFX",0xe);
  uVar6 = 0xe;
  _Dest_00[0xe] = '\0';
  uStack_34 = 10;
  puStack_1b8 = (undefined1 *)0x76bb47;
  FUN_009b5030(&puStack_108,(undefined4 *)&stack0xfffffe78);
  uStack_34 = 0xb;
  (**(code **)(*piVar1 + 0x90))();
  if (10 < uStack_104) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_10c);
  }
  uStack_38 = 1;
  if (0x14 < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(puVar3);
  }
  FUN_006678d0(piVar1,DAT_0104e408);
  FUN_006884e0((int)param_1);
  puVar7 = operator_new(0x3fc);
  uStack_40 = 0xc;
  if (puVar7 == (undefined4 *)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = FUN_00833290(puVar7);
  }
  puStack_1b8 = (undefined1 *)0x2;
  uStack_40 = 1;
  pcStack_1bc = (char *)0x76bbea;
  _Memory_02 = piVar1;
  (**(code **)(*_Memory + 0x5c))();
  pcStack_1bc = (char *)0x41700000;
  ppuStack_1c4 = (undefined1 **)0x1;
  piStack_1c0 = piVar1;
  (**(code **)(*_Memory + 100))();
  puStack_cc = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 0;
  uStack_c4 = 10;
  _Dest = &uStack_1a0;
  uStack_1a0 = uStack_1a0 & 0xffffff00;
  uVar6 = 0x14;
  _strncpy((char *)_Dest,"POST_TOGGLESFX",0xe);
  *(char *)((int)_Dest + 0xe) = '\0';
  uStack_58 = 0xe;
  puVar7 = FUN_009b5030(&pvStack_12c,(undefined4 *)&stack0xfffffe54);
  sVar4 = FUN_00ace02d(L"<TABLE><TR><TD><T2>");
  FUN_0040cae0(&puStack_cc,L"<TABLE><TR><TD><T2>",sVar4);
  FUN_0040cae0(&puStack_cc,(wchar_t *)*puVar7,puVar7[1]);
  sVar4 = FUN_00ace02d(L"</T2></TD></TR></TABLE>");
  FUN_0040cae0(&puStack_cc,L"</T2></TD></TR></TABLE>",sVar4);
  if (10 < uStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_12c);
  }
  uStack_58 = 0xd;
  if (0x14 < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  _Memory_01 = &puStack_cc;
  _Memory[0xd5] = 0x43af0000;
  (**(code **)(*_Memory + 0x54))();
  uVar16 = 0;
  (**(code **)(*_Memory + 0x84))();
  uVar6 = 1;
  FUN_006884e0((int)param_1);
  piVar1 = operator_new(0x3ac);
  piStack_1c0 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    _Memory_04 = (undefined1 *)0x20;
    pcVar8 = _malloc(0x20);
    _strncpy(pcVar8,"ui/button_toggleoff.dds",0x17);
    pcVar8[0x17] = '\0';
    ppuStack_1c4 = (undefined1 **)((uint)ppuStack_1c4 | 8);
    pcStack_1bc = &stack0xfffffe50;
    puVar7 = (undefined4 *)((uint)puVar7 & 0xffffff00);
    puStack_1b8 = (undefined1 *)0x0;
    _Memory_02 = (int *)0x20;
    pcStack_1bc = _malloc(0x20);
    _strncpy(pcStack_1bc,"ui/button_toggleon.dds",0x16);
    puStack_1b8 = (undefined1 *)0x16;
    pcStack_1bc[0x16] = '\0';
    ppuStack_1c4 = (undefined1 **)((uint)ppuStack_1c4 | 0x10);
    puStack_15c = &uStack_150;
    uStack_150 = (uint)uStack_150._2_2_ << 0x10;
    uStack_158 = 0;
    uStack_154 = 10;
    uStack_1fc = 0x76be09;
    uVar9 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_15c,(wchar_t *)&lpCaption_00d16918,uVar9);
    ppuStack_1c4 = (undefined1 **)((uint)ppuStack_1c4 | 0x20);
    uStack_68 = 0x12;
    piVar1 = FUN_00667c80(piVar1,&puStack_15c,&pcStack_1bc,(undefined4 *)&stack0xfffffe84);
  }
  if ((((uint)ppuStack_1c4 & 0x20) != 0) &&
     (ppuStack_1c4 = (undefined1 **)((uint)ppuStack_1c4 & 0xffffffdf), 10 < uStack_154)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_15c);
  }
  if ((((uint)ppuStack_1c4 & 0x10) != 0) &&
     (ppuStack_1c4 = (undefined1 **)((uint)ppuStack_1c4 & 0xffffffef), &DAT_00000014 < _Memory_02))
  {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1bc);
  }
  uStack_68 = 0xd;
  if ((((uint)ppuStack_1c4 & 8) != 0) &&
     (ppuStack_1c4 = (undefined1 **)((uint)ppuStack_1c4 & 0xfffffff7), &DAT_00000014 < _Memory_04))
  {
                    /* WARNING: Subroutine does not return */
    _free(pcVar8);
  }
  pcVar8 = (char *)0x41000000;
  puVar15 = param_1;
  (**(code **)(*piVar1 + 0x5c))();
  pvVar5 = (void *)0x0;
  (**(code **)(*piVar1 + 100))();
  FUN_006677f0(piVar1,0x42700000);
  uStack_1fc = 9;
  (**(code **)(*piVar1 + 0x18))();
  ppuStack_1c4 = &puStack_1b8;
  puStack_1b8 = (undefined1 *)((uint)puStack_1b8 & 0xffffff00);
  piStack_1c0 = (int *)0x0;
  pcStack_1bc = (char *)0x14;
  _strncpy((char *)ppuStack_1c4,"POST_TOGGLEAMBIENT",0x12);
  piStack_1c0 = (int *)0x12;
  *(char *)((int)ppuStack_1c4 + 0x12) = '\0';
  uStack_90._0_1_ = 0x16;
  uStack_214 = 0x76bf64;
  FUN_009b5030((undefined4 *)&stack0xfffffe9c,&ppuStack_1c4);
  uStack_90 = CONCAT31(uStack_90._1_3_,0x17);
  (**(code **)(*piVar1 + 0x90))();
  uStack_94 = CONCAT31(uStack_94._1_3_,0xd);
  if ((int *)0x14 < piStack_1c0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_01);
  }
  FUN_006678d0(piVar1,DAT_0104e409);
  FUN_006884e0((int)param_1);
  puVar10 = operator_new(0x3fc);
  uStack_9c = 0x18;
  if (puVar10 == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = FUN_00833290(puVar10);
  }
  uStack_214 = 2;
  uStack_9c = 0xd;
  pcStack_218 = (char *)0x76c007;
  piVar14 = piVar1;
  (**(code **)(*piVar11 + 0x5c))();
  pcStack_218 = (char *)0x41700000;
  puStack_220 = (uint *)0x1;
  piStack_21c = piVar1;
  (**(code **)(*piVar11 + 100))();
  puStack_108 = &uStack_fc;
  uStack_fc = uStack_fc & 0xffff0000;
  uStack_104 = 0;
  puStack_100 = (undefined2 *)0xa;
  puVar13 = &uStack_1fc;
  uStack_1fc = uStack_1fc & 0xffffff00;
  uVar9 = 0x14;
  _strncpy((char *)puVar13,"POST_TOGGLEAMBIENT",0x12);
  *(char *)((int)puVar13 + 0x12) = '\0';
  uStack_b4 = 0x1a;
  puVar10 = FUN_009b5030((undefined4 *)&stack0xfffffe78,(undefined4 *)&stack0xfffffdf8);
  sVar4 = FUN_00ace02d(L"<TABLE><TR><TD><T2>");
  FUN_0040cae0(&puStack_108,L"<TABLE><TR><TD><T2>",sVar4);
  FUN_0040cae0(&puStack_108,(wchar_t *)*puVar10,puVar10[1]);
  sVar4 = FUN_00ace02d(L"</T2></TD></TR></TABLE>");
  FUN_0040cae0(&puStack_108,L"</T2></TD></TR></TABLE>",sVar4);
  if (10 < uVar17) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  uStack_b4 = 0x19;
  if (0x14 < uVar9) {
                    /* WARNING: Subroutine does not return */
    _free(puVar13);
  }
  _Memory_00 = &puStack_108;
  piVar11[0xd5] = 0x43af0000;
  (**(code **)(*piVar11 + 0x54))();
  (**(code **)(*piVar11 + 0x84))();
  FUN_006884e0((int)param_1);
  this = operator_new(0x3ac);
  piStack_21c = this;
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uVar16 = uVar16 & 0xffffff00;
    uVar6 = 0x20;
    pcVar8 = _malloc(0x20);
    _strncpy(pcVar8,"ui/button_toggleoff.dds",0x17);
    _Memory = (int *)0x17;
    pcVar8[0x17] = '\0';
    puStack_220 = (uint *)((uint)puStack_220 | 0x40);
    pcStack_218 = &stack0xfffffdf4;
    uStack_214 = 0;
    piVar14 = (int *)0x20;
    pcStack_218 = _malloc(0x20);
    _strncpy(pcStack_218,"ui/button_toggleon.dds",0x16);
    uStack_214 = 0x16;
    pcStack_218[0x16] = '\0';
    puStack_220 = (uint *)((uint)puStack_220 | 0x80);
    puStack_1b8 = &stack0xfffffe54;
    _Dest = (uint *)((uint)_Dest & 0xffff0000);
    _Memory_02 = (int *)0x0;
    puVar7 = (undefined4 *)&lpType_0000000a;
    uStack_258 = 0x76c22c;
    uVar17 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_1b8,(wchar_t *)&lpCaption_00d16918,uVar17);
    puStack_220 = (uint *)((uint)puStack_220 | 0x100);
    uStack_c4 = 0x1e;
    piVar1 = FUN_00667c80(this,&puStack_1b8,&pcStack_218,(undefined4 *)&stack0xfffffe28);
  }
  if ((((uint)puStack_220 & 0x100) != 0) &&
     (puStack_220 = (uint *)((uint)puStack_220 & 0xfffffeff), &lpType_0000000a < puVar7)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1b8);
  }
  if (((char)puStack_220 < '\0') &&
     (puStack_220 = (uint *)((uint)puStack_220 & 0xffffff7f), &DAT_00000014 < piVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_218);
  }
  uStack_c4 = 0x19;
  if ((((uint)puStack_220 & 0x40) != 0) && (0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar8);
  }
  (**(code **)(*piVar1 + 0x5c))();
  (**(code **)(*piVar1 + 100))();
  FUN_006677f0(piVar1,0x42700000);
  uStack_258 = 9;
  (**(code **)(*piVar1 + 0x18))();
  puStack_220 = &uStack_214;
  uStack_214 = uStack_214 & 0xffffff00;
  piStack_21c = (int *)0x0;
  pcStack_218 = (char *)0x14;
  _strncpy((char *)puStack_220,"POST_TOGGLEMUMBLE",0x11);
  piStack_21c = (int *)0x11;
  *(char *)((int)puStack_220 + 0x11) = '\0';
  uStack_ec = 0x22;
  FUN_009b5030(&piStack_1c0,&puStack_220);
  uStack_ec = 0x23;
  (**(code **)(*piVar1 + 0x90))();
  if ((char *)0xa < pcStack_1bc) {
                    /* WARNING: Subroutine does not return */
    _free(ppuStack_1c4);
  }
  uStack_f0 = CONCAT31(uStack_f0._1_3_,0x19);
  if (0x14 < piStack_21c) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  FUN_006678d0(piVar1,DAT_0104e40a);
  FUN_006884e0((int)param_1);
  puVar7 = operator_new(0x3fc);
  puStack_f8._0_1_ = 0x24;
  if (puVar7 == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = FUN_00833290(puVar7);
  }
  puStack_f8 = (undefined1 *)CONCAT31(puStack_f8._1_3_,0x19);
  (**(code **)(*piVar11 + 0x5c))(2,piVar1,0);
  (**(code **)(*piVar11 + 100))(1,piVar1,0x41700000);
  ppuStack_1c4 = &puStack_1b8;
  puStack_1b8 = (undefined1 *)((uint)puStack_1b8 & 0xffff0000);
  piStack_1c0 = (int *)0x0;
  pcStack_1bc = (char *)0xa;
  puVar13 = &uStack_258;
  uStack_258 = uStack_258 & 0xffffff00;
  uVar6 = 0x14;
  _strncpy((char *)puVar13,"POST_TOGGLEMUMBLE",0x11);
  *(char *)((int)puVar13 + 0x11) = '\0';
  uStack_110 = 0x26;
  puVar7 = FUN_009b5030((undefined4 *)&stack0xfffffe1c,(undefined4 *)&stack0xfffffd9c);
  sVar4 = FUN_00ace02d(L"<TABLE><TR><TD><T2>");
  FUN_0040cae0(&ppuStack_1c4,L"<TABLE><TR><TD><T2>",sVar4);
  FUN_0040cae0(&ppuStack_1c4,(wchar_t *)*puVar7,puVar7[1]);
  sVar4 = FUN_00ace02d(L"</T2></TD></TR></TABLE>");
  FUN_0040cae0(&ppuStack_1c4,L"</T2></TD></TR></TABLE>",sVar4);
  if (&lpType_0000000a < puVar15) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar5);
  }
  uStack_110 = 0x25;
  if (0x14 < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(puVar13);
  }
  piVar11[0xd5] = 0x43af0000;
  (**(code **)(*piVar11 + 0x54))(&ppuStack_1c4);
  (**(code **)(*piVar11 + 0x84))(0);
  FUN_006884e0((int)param_1);
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  puStack_140 = (uint *)0x0;
  uStack_13c = 0;
  ppvStack_138 = (void **)0x0;
  uStack_134 = 0;
  uStack_130 = 0;
  uStack_14c = 0xffffffff;
  uStack_150 = FUN_009b01a0("TE_SFX_OPEN_MOUSELCLICK");
  puVar13 = &uStack_154;
  FUN_004f3b20();
  FUN_004f32c0((byte *)puVar13);
  FUN_00770520(DAT_0104e478);
  if (uVar16 < 0xb) {
    if (10 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory_04);
    }
    if (puVar3 < (undefined4 *)0xb) {
      if (_Dest < (uint *)0xb) {
        ExceptionList = pvStack_128;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory_02);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory_03);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0076c680 @ 0076c680 ////

undefined4 * __thiscall FUN_0076c680(void *this,byte param_1)

{
  FUN_0076b6b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0076c6a0 @ 0076c6a0 ////

void FUN_0076c6a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104e420;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8b4b;
  local_c = ExceptionList;
  puVar3 = (undefined4 *)0x0;
  if ((((DAT_0104e43c == 0) && (DAT_0104e394 == 0)) && (DAT_0104e5f4 == 0)) && (DAT_0104e310 == 0))
  {
    ExceptionList = &local_c;
    if (DAT_0104e420 != (undefined4 *)0x0) {
      iVar1 = DAT_0104e420[0x12];
      ExceptionList = &local_c;
      DAT_0104e420[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104e40c[1])();
      DAT_0104e420 = (undefined4 *)0x0;
      (*(code *)*DAT_0104e40c)();
    }
    puVar2 = operator_new(0x3a8);
    uStack_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = FUN_0076b730(puVar2);
    }
    uStack_4 = 0xffffffff;
    (*(code *)DAT_0104e40c[1])();
    DAT_0104e420 = puVar3;
    (*(code *)*DAT_0104e40c)();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0076c790 @ 0076c790 ////

int * __thiscall FUN_0076c790(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0076c830 @ 0076c830 ////

uint __fastcall FUN_0076c830(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *unaff_ESI;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8b68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x3b4) + 0x58))(local_2c);
  puStack_8 = (undefined1 *)0x0;
  if (DAT_0104e478 != 0) {
    *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
  }
  FUN_00759f90(puVar1,(undefined4 *)(param_1 + 0x3bc));
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  uVar2 = FUN_00773420(DAT_0104e478);
  ExceptionList = pvStack_10;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_0076c8c0 @ 0076c8c0 ////

undefined4 FUN_0076c8c0(void)

{
  undefined4 uVar1;
  
  if (DAT_0104e43c != 0) {
                    /* WARNING: Could not recover jumptable at 0x0076c8d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(DAT_0104e43c + 0x3b4) + 0x40))();
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_0076cb80 @ 0076cb80 ////

void __cdecl
FUN_0076cb80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  void *this;
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 local_24 [8];
  undefined4 uStack_14;
  
  this = *(void **)(DAT_0104e478 + 0x36c);
  puVar2 = local_24;
  local_24[0] = 0;
  uVar3 = 0;
  uVar4 = 10;
  FUN_004036d0(&stack0xffffffd0,(wchar_t *)*param_1,param_1[1]);
  puVar1 = FUN_00750430(this,param_2,param_3,puVar2,uVar3,uVar4);
  uStack_14 = 0x76cbe9;
  FUN_004015d0(puVar1 + 0x33,(char *)*param_4,param_4[1]);
  return;
}


//// FUNCTION FUN_0076cbf0 @ 0076cbf0 ////

void __thiscall FUN_0076cbf0(void *this,int param_1)

{
  *(int *)((int)this + 0x3b0) = param_1;
  (**(code **)(**(int **)((int)this + 0x3b4) + 0x54))(param_1 + 0xec);
  FUN_004015d0((void *)((int)this + 0x3bc),*(char **)(*(int *)((int)this + 0x3b0) + 0xcc),
               *(uint *)(*(int *)((int)this + 0x3b0) + 0xd0));
  return;
}


//// FUNCTION FUN_0076cc40 @ 0076cc40 ////

void __thiscall FUN_0076cc40(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4e834;
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


//// FUNCTION FUN_0076cc90 @ 0076cc90 ////

void __fastcall FUN_0076cc90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4e834;
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


//// FUNCTION FUN_0076cd00 @ 0076cd00 ////

/* WARNING: Removing unreachable block (ram,0x0076ce6b) */

void __fastcall FUN_0076cd00(int param_1)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  byte *_Dest;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint unaff_EBP;
  byte *pbVar9;
  void *unaff_EDI;
  bool bVar10;
  undefined4 *puVar11;
  char **ppcVar12;
  byte local_80 [4];
  undefined4 uStack_7c;
  char *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_60 [20];
  char *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  char local_40 [4];
  uint uStack_3c;
  undefined4 local_2c [2];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar8 = DAT_0104e440;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8bcb;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_6c,"font_",5);
  local_68 = 5;
  local_6c[5] = '\0';
  _Dest = local_80;
  local_4 = 0;
  local_80[0] = 0;
  _strncpy((char *)_Dest,"default",7);
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_7c._3_1_ = 0;
  pbVar9 = (byte *)*puVar8;
  bVar4 = false;
  do {
    bVar1 = *pbVar9;
    bVar10 = bVar1 < *_Dest;
    if (bVar1 != *_Dest) {
LAB_0076cdd4:
      iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_0076cdd9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar10 = bVar1 < _Dest[1];
    if (bVar1 != _Dest[1]) goto LAB_0076cdd4;
    pbVar9 = pbVar9 + 2;
    _Dest = _Dest + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0076cdd9:
  if (iVar5 != 0) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = &DAT_00000014;
    _strncpy(local_4c,"default_bold",0xc);
    ppcVar12 = &local_4c;
    local_48 = 0xc;
    puVar11 = puVar8;
    local_4c[0xc] = '\0';
    bVar4 = true;
    uVar6 = FUN_00401ec0(puVar11,ppcVar12);
    bVar10 = false;
    if ((char)uVar6 == '\0') goto LAB_0076ce37;
  }
  bVar10 = true;
LAB_0076ce37:
  if ((bVar4) && (&DAT_00000014 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (bVar10) {
    FUN_004073f0(&local_6c,"gen_",4);
  }
  pcVar3 = (char *)*puVar8;
  pcVar7 = pcVar3;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_004073f0(&local_6c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
  FUN_009b5030(local_2c,&local_6c);
  puVar11 = (undefined4 *)(param_1 + 0x3bc);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004015d0(puVar11,(char *)*puVar8,puVar8[1]);
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x54))();
  (**(code **)(**(int **)(param_1 + 0x3b4) + 0xfc))(puVar11,0xe,0);
  puVar8 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x3b4) + 0x58))(&stack0xffffff60);
  uStack_1c = 2;
  if (DAT_0104e478 != 0) {
    *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
  }
  FUN_00759f90(puVar8,puVar11);
  if (10 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  if (10 < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  if (0x14 < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    _free(&DAT_00000014);
  }
  ExceptionList = pvStack_24;
  return;
}


//// FUNCTION FUN_0076cfb0 @ 0076cfb0 ////

void __fastcall FUN_0076cfb0(undefined4 *param_1)

{
  uint uVar1;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd8c06;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4e86c;
  param_1[0x14] = &PTR_LAB_00d4e854;
  local_4 = 0;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"default",7);
  local_48 = 7;
  local_4c[7] = '\0';
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4._0_1_ = 3;
  if (DAT_0104e478 != 0) {
    *(undefined1 *)(DAT_0104e478 + 0x452) = 1;
  }
  FUN_00759f90(&local_2c,&local_4c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  (*(code *)DAT_0104e428[1])();
  DAT_0104e43c = 0;
  (*(code *)*DAT_0104e428)();
  if (0x14 < (uint)param_1[0xf1]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xef]);
  }
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0076d100 @ 0076d100 ////

undefined4 * __thiscall FUN_0076d100(void *this,byte param_1)

{
  FUN_0076cfb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0076d270 @ 0076d270 ////

/* WARNING: Removing unreachable block (ram,0x0076df84) */

uint * __thiscall FUN_0076d270(void *this,uint param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t sVar5;
  void *pvVar6;
  uint unaff_EBP;
  float10 fVar7;
  char cStack_1dc;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined1 *puStack_198;
  undefined4 uStack_194;
  void *pvStack_190;
  uint *puStack_18c;
  uint uVar8;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  undefined *puStack_174;
  undefined1 *puStack_16c;
  uint *puStack_14c;
  undefined4 uStack_148;
  int *piStack_144;
  uint uStack_140;
  undefined **ppuStack_13c;
  int iVar9;
  int *piVar10;
  undefined ***_Memory;
  undefined4 uVar11;
  uint *_Dest;
  uint uStack_114;
  undefined4 uStack_110;
  void *pvStack_10c;
  uint uStack_108;
  undefined1 *puStack_104;
  undefined1 *puStack_100;
  undefined4 *puStack_fc;
  char *pcVar12;
  float fVar13;
  undefined4 uVar14;
  uint uVar15;
  void *local_c0;
  void *pvStack_bc;
  undefined2 *puStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined2 auStack_ac [6];
  undefined1 uStack_a0;
  char *pcStack_9c;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  char acStack_90 [4];
  uint uStack_8c;
  undefined1 *puStack_7c;
  uint *puStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  uint uStack_6c;
  uint uStack_68;
  char acStack_64 [20];
  undefined2 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 auStack_44 [26];
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8de4;
  pvStack_c = ExceptionList;
  local_c0 = (void *)0x0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  FUN_006889c0(this,'\0');
  *(uint *)((int)this + 0x3a8) = param_1;
  *(undefined ***)this = &PTR_FUN_00d4e86c;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d4e854;
  *(uint *)((int)this + 0x3ac) = param_2;
  *(undefined1 **)((int)this + 0x3bc) = (undefined1 *)((int)this + 0x3c8);
  *(undefined1 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0x14;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  FUN_0073e4e0(this,0x43fa0000);
  piVar2 = (int *)FUN_0071b2b0();
  fVar7 = (float10)(**(code **)(*piVar2 + 0x10))();
  pvStack_bc = (void *)(float)fVar7;
  fVar7 = FUN_0073e630((int)this);
  fVar13 = (float)(((float10)(float)pvStack_bc - fVar7) * (float10)0.5);
  iVar3 = FUN_0071b2b0();
  FUN_00741940(this,1,iVar3,fVar13);
  uVar14 = 0x42c80000;
  iVar3 = FUN_0071b2b0();
  FUN_00741b60(this,1,iVar3,uVar14);
  puStack_50 = auStack_44;
  auStack_44[0] = 0;
  uStack_4c = 0;
  uStack_48 = 10;
  pcStack_70 = acStack_64;
  acStack_64[0] = '\0';
  uStack_6c = 0;
  uStack_68 = 0x20;
  pcStack_70 = _malloc(0x20);
  _strncpy(pcStack_70,"POST_dialog_subtitle",0x14);
  uStack_6c = 0x14;
  pcStack_70[0x14] = '\0';
  local_4._0_1_ = 3;
  puVar4 = FUN_009b5030(&puStack_94,&pcStack_70);
  sVar5 = FUN_00ace02d(L"<P ALIGN=center>");
  FUN_0040cae0(&puStack_50,L"<P ALIGN=center>",sVar5);
  FUN_0040cae0(&puStack_50,(wchar_t *)*puVar4,puVar4[1]);
  sVar5 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&puStack_50,L"</P>",sVar5);
  if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_94);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_70);
  }
  FUN_006888d0(this,&puStack_50);
  piVar2 = (int *)FUN_0071b2b0();
  uVar15 = 1;
  (**(code **)(*piVar2 + 0xc))();
  pvVar6 = operator_new(0x420);
  if (pvVar6 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    pcStack_9c = acStack_90;
    acStack_90[0] = '\0';
    uStack_98 = 0;
    puStack_94 = &DAT_00000014;
    _strncpy(pcStack_9c,"button_cancel",0xd);
    uStack_98 = 0xd;
    pcStack_9c[0xd] = '\0';
    puStack_78 = &uStack_6c;
    uStack_6c = uStack_6c & 0xffffff00;
    uStack_74 = 0;
    pcStack_70 = &DAT_00000014;
    _strncpy((char *)puStack_78,"button_quit.",0xc);
    uStack_74 = 0xc;
    *(char *)(puStack_78 + 3) = '\0';
    pvStack_c = (void *)0x6;
    puStack_fc = (undefined4 *)0x76d52d;
    puVar4 = FUN_009b5030(&local_c0,&pcStack_9c);
    puStack_7c = &stack0xffffff18;
    pvStack_c = (void *)0x7;
    unaff_EBP = 7;
    puStack_fc = (undefined4 *)0x76d56d;
    piVar2 = FUN_0069fb10(pvVar6,(int *)&puStack_78,puVar4,0x42400000,0x42400000,0,0,0x3f800000,
                          0x3f800000);
  }
  if (((unaff_EBP & 4) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffb, &lpType_0000000a < puStack_b8))
  {
                    /* WARNING: Subroutine does not return */
    _free(local_c0);
  }
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, &DAT_00000014 < pcStack_70)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_78);
  }
  pvStack_c = (void *)0x2;
  if (((unaff_EBP & 1) != 0) && (&DAT_00000014 < puStack_94)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_9c);
  }
  pcVar12 = "SUBTITLE_CANCEL";
  (**(code **)(*piVar2 + 0x18))();
  puStack_fc = (undefined4 *)0x76d61b;
  (**(code **)(*piVar2 + 0x18))();
  puStack_100 = *(undefined1 **)((int)this + 0x36c);
  puStack_fc = (undefined4 *)0x42000000;
  puStack_104 = (undefined1 *)0x1;
  uStack_108 = 0x76d630;
  (**(code **)(*piVar2 + 0x5c))();
  uStack_108 = 0x41000000;
  uStack_110 = 2;
  uStack_114 = 0x76d63f;
  pvStack_10c = this;
  (**(code **)(*piVar2 + 0x68))();
  uStack_114 = 1;
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  pvVar6 = operator_new(0x420);
  pvStack_bc = pvVar6;
  if (pvVar6 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puStack_b8 = auStack_ac;
    auStack_ac[0] = 0;
    uStack_b4 = 0;
    uStack_b0 = 10;
    uVar15 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_b8,(wchar_t *)&lpCaption_00d16918,uVar15);
    pcVar12 = &stack0xffffff30;
    uStack_108 = uStack_108 | 8;
    uVar15 = 0x14;
    _strncpy(pcVar12,"button_tick.",0xc);
    pcVar12[0xc] = '\0';
    puStack_104 = &stack0xfffffed8;
    uStack_108 = uStack_108 | 0x10;
    uStack_4c = 0xd;
    ppuStack_13c = (undefined **)0x76d722;
    piVar2 = FUN_0069fb10(pvVar6,(int *)&stack0xffffff24,&puStack_b8,0x42400000,0x42400000,0,0,
                          0x3f800000,0x3f800000);
  }
  if (((uStack_108 & 0x10) != 0) && (uStack_108 = uStack_108 & 0xffffffef, 0x14 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  uStack_4c = 2;
  if (((uStack_108 & 8) != 0) && (uStack_108 = uStack_108 & 0xfffffff7, 10 < uStack_b0)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_b8);
  }
  (**(code **)(*piVar2 + 0x18))();
  ppuStack_13c = (undefined **)0x76d7a9;
  (**(code **)(*piVar2 + 0x18))();
  uStack_140 = *(uint *)((int)this + 0x36c);
  ppuStack_13c = (undefined **)0x42000000;
  piStack_144 = (int *)0x2;
  uStack_148 = 0x76d7be;
  (**(code **)(*piVar2 + 0x60))();
  uStack_148 = 0x41000000;
  puStack_14c = this;
  (**(code **)(*piVar2 + 0x68))();
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  puStack_b8 = auStack_ac;
  auStack_ac[0] = 0;
  uStack_b4 = 0;
  uStack_b0 = 10;
  uVar15 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&puStack_b8,(wchar_t *)&lpCaption_00d16918,uVar15);
  uStack_8c._0_1_ = 0x10;
  puStack_fc = operator_new(0x3c8);
  uStack_8c._0_1_ = 0x11;
  if (puStack_fc == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00738920(puStack_fc);
  }
  *(undefined4 **)((int)this + 0x3b4) = puVar4;
  iVar3 = *(int *)((int)this + 0x36c);
  uStack_140 = 1;
  iVar9 = 0;
  piVar10 = (int *)0x0;
  ppuStack_13c = &PTR_FUN_00d18c2c;
  if (iVar3 != 0) {
    piVar10 = (int *)(iVar3 + 0x18);
    iVar9 = *piVar10;
    *(undefined1 **)(*piVar10 + 4) = &stack0xfffffec8;
    *piVar10 = (int)&stack0xfffffec8;
  }
  uVar14 = 0x41200000;
  uVar11 = 0x41200000;
  iVar1 = *(int *)((int)this + 0x3b4);
  piStack_144 = (int *)(iVar1 + 0xa4);
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  uStack_8c._0_1_ = 0x12;
  (**(code **)(*piStack_144 + 4))();
  piStack_144[5] = iVar3;
  (**(code **)*piStack_144)();
  *(undefined4 *)(iVar1 + 0xbc) = uVar14;
  *(undefined4 *)(iVar1 + 0xc0) = uVar11;
  if (piVar10 != (int *)0x0) {
    *piVar10 = iVar9;
  }
  if (iVar9 != 0) {
    *(int **)(iVar9 + 4) = piVar10;
  }
  iVar3 = *(int *)((int)this + 0x36c);
  uStack_140 = 2;
  iVar9 = 0;
  piVar10 = (int *)0x0;
  ppuStack_13c = &PTR_FUN_00d18c2c;
  if (iVar3 != 0) {
    piVar10 = (int *)(iVar3 + 0x18);
    iVar9 = *piVar10;
    *(undefined1 **)(*piVar10 + 4) = &stack0xfffffec8;
    *piVar10 = (int)&stack0xfffffec8;
  }
  uVar14 = 0x41200000;
  uVar11 = 0x41200000;
  iVar1 = *(int *)((int)this + 0x3b4);
  piStack_144 = (int *)(iVar1 + 0xec);
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  uStack_8c._0_1_ = 0x13;
  (**(code **)(*piStack_144 + 4))();
  piStack_144[5] = iVar3;
  (**(code **)*piStack_144)();
  *(undefined4 *)(iVar1 + 0x104) = uVar14;
  *(undefined4 *)(iVar1 + 0x108) = uVar11;
  if (piVar10 != (int *)0x0) {
    *piVar10 = iVar9;
  }
  if (iVar9 != 0) {
    *(int **)(iVar9 + 4) = piVar10;
  }
  iVar3 = *(int *)((int)this + 0x36c);
  uStack_140 = 1;
  iVar9 = 0;
  piVar10 = (int *)0x0;
  ppuStack_13c = &PTR_FUN_00d18c2c;
  if (iVar3 != 0) {
    piVar10 = (int *)(iVar3 + 0x18);
    iVar9 = *piVar10;
    *(undefined1 **)(*piVar10 + 4) = &stack0xfffffec8;
    *piVar10 = (int)&stack0xfffffec8;
  }
  uVar14 = 0x40000000;
  uVar11 = 0x40000000;
  iVar1 = *(int *)((int)this + 0x3b4);
  piStack_144 = (int *)(iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  uStack_8c._0_1_ = 0x14;
  (**(code **)(*piStack_144 + 4))();
  piStack_144[5] = iVar3;
  (**(code **)*piStack_144)();
  *(undefined4 *)(iVar1 + 0x98) = uVar14;
  *(undefined4 *)(iVar1 + 0x9c) = uVar11;
  if (piVar10 != (int *)0x0) {
    *piVar10 = iVar9;
  }
  if (iVar9 != 0) {
    *(int **)(iVar9 + 4) = piVar10;
  }
  piVar10 = piVar2 + 6;
  uStack_140 = 1;
  _Memory = &ppuStack_13c;
  ppuStack_13c = &PTR_FUN_00d18c2c;
  iVar3 = *piVar10;
  *(undefined1 **)(*piVar10 + 4) = &stack0xfffffec8;
  *piVar10 = (int)&stack0xfffffec8;
  uVar14 = 0xc0a00000;
  uVar11 = 0xc0a00000;
  iVar9 = *(int *)((int)this + 0x3b4);
  *(undefined4 *)(iVar9 + 0xc4) = 1;
  uStack_8c._0_1_ = 0x15;
  (**(code **)(*(int *)(iVar9 + 200) + 4))();
  *(int **)(iVar9 + 0xdc) = piVar2;
  (*(code *)**(undefined4 **)(iVar9 + 200))();
  *(undefined4 *)(iVar9 + 0xe0) = uVar14;
  *(undefined4 *)(iVar9 + 0xe4) = uVar11;
  uStack_8c = CONCAT31(uStack_8c._1_3_,0x10);
  if (piVar10 != (int *)0x0) {
    *piVar10 = iVar3;
  }
  if (iVar3 != 0) {
    *(int **)(iVar3 + 4) = piVar10;
  }
  *(undefined4 *)(*(int *)((int)this + 0x3b4) + 0x394) = 200;
  FUN_00738730(*(void **)((int)this + 0x3b4),'\x01');
  (**(code **)(**(int **)((int)this + 0x3b4) + 0x54))();
  *(undefined1 *)(*(int *)((int)this + 0x3b4) + 0x345) = 1;
  _Dest = &uStack_114;
  *(undefined4 *)(*(int *)((int)this + 0x3b4) + 0x34c) = 2;
  uStack_114 = uStack_114 & 0xffffff00;
  _strncpy((char *)_Dest,"Lithograph Bold",0xf);
  *(char *)((int)_Dest + 0xf) = '\0';
  puStack_100 = &stack0xfffffea0;
  puStack_16c = &stack0xfffffee0;
  acStack_90[0] = '\x16';
  (**(code **)(**(int **)((int)this + 0x3b4) + 0xfc))();
  uStack_a0 = 0x10;
  if (&DAT_00000014 < piVar2) {
                    /* WARNING: Subroutine does not return */
    puStack_174 = &UNK_0076dc04;
    _free(_Memory);
  }
  pcVar12 = (char *)0x0;
  puStack_178 = &LAB_0076c940;
  uStack_17c = 9;
  uStack_180 = 0x76dc1b;
  puStack_174 = this;
  (**(code **)(**(int **)((int)this + 0x3b4) + 0x18))();
  uVar15 = 0xff000000;
  *(undefined4 *)(*(int *)((int)this + 0x3b4) + 0x350) = 0xff000000;
  uStack_184 = *(uint *)((int)this + 0x3b4);
  uStack_180 = 1;
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  if (DAT_0104e424 == '\0') {
    DAT_0104e440 = DAT_0105cb64;
    DAT_0104e424 = '\x01';
  }
  puStack_18c = (uint *)0x76dc75;
  puVar4 = operator_new(0x3fc);
  puStack_b8._0_1_ = 0x17;
  if (puVar4 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar4);
  }
  uVar8 = 0x43160000;
  *(int **)((int)this + 0x3b8) = piVar2;
  pvStack_190 = (void *)0x1;
  puStack_b8 = (undefined2 *)CONCAT31(puStack_b8._1_3_,0x10);
  uStack_194 = 0x76dcb0;
  puStack_18c = this;
  (**(code **)(*piVar2 + 0x5c))();
  puStack_198 = *(undefined1 **)((int)this + 0x3b4);
  uStack_194 = 0xc1400000;
  uStack_19c = 2;
  uStack_1a0 = 0x76dcc9;
  (**(code **)(**(int **)((int)this + 0x3b8) + 100))();
  uStack_1a0 = 0x41c00000;
  uStack_1a4 = 0x43480000;
  (**(code **)(**(int **)((int)this + 0x3b8) + 0x74))();
  uStack_1a8 = 1;
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  pvVar6 = operator_new(0x420);
  if (pvVar6 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puStack_14c = &uStack_140;
    uStack_140 = uStack_140 & 0xffff0000;
    uStack_148 = 0;
    piStack_144 = (int *)&lpType_0000000a;
    uVar15 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_14c,(wchar_t *)&lpCaption_00d16918,uVar15);
    pcVar12 = &stack0xfffffe9c;
    uStack_19c = uStack_19c | 0x20;
    uVar15 = 0x14;
    _strncpy(pcVar12,"button_left.",0xc);
    puStack_16c = (undefined1 *)0xc;
    pcVar12[0xc] = '\0';
    puStack_198 = &stack0xfffffe44;
    uStack_19c = uStack_19c | 0x40;
    piVar2 = FUN_0069fb10(pvVar6,(int *)&stack0xfffffe90,&puStack_14c,0x42000000,0x42000000,0,0,
                          0x3f800000,0x3f800000);
  }
  if (((uStack_19c & 0x40) != 0) && (uStack_19c = uStack_19c & 0xffffffbf, 0x14 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  if (((uStack_19c & 0x20) != 0) &&
     (uStack_19c = uStack_19c & 0xffffffdf, &lpType_0000000a < piStack_144)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_14c);
  }
  pcVar12 = "SUBTITLE_FONT_LEFT";
  (**(code **)(*piVar2 + 0x18))();
  (**(code **)(*piVar2 + 0x18))();
  (**(code **)(*piVar2 + 0x60))();
  cStack_1dc = '\0';
  (**(code **)(*piVar2 + 0x68))();
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))();
  pvVar6 = operator_new(0x420);
  pvStack_190 = pvVar6;
  if (pvVar6 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puStack_18c = &uStack_180;
    uStack_180 = uStack_180 & 0xffff0000;
    uVar8 = 0;
    uStack_184 = 10;
    uVar15 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_18c,(wchar_t *)&lpCaption_00d16918,uVar15);
    pcVar12 = (char *)&uStack_1a4;
    uStack_1a4 = uStack_1a4 & 0xffffff00;
    uStack_1a8 = 0x14;
    _strncpy(pcVar12,"button_right.",0xd);
    *(char *)((int)pcVar12 + 0xd) = '\0';
    piVar2 = FUN_0069fb10(pvVar6,(int *)&stack0xfffffe50,&puStack_18c,0x42000000,0x42000000,0,0,
                          0x3f800000,0x3f800000);
    cStack_1dc = -0x80;
  }
  if ((cStack_1dc < '\0') && (10 < uStack_184)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_18c);
  }
  (**(code **)(*piVar2 + 0x18))();
  (**(code **)(*piVar2 + 0x18))(5,&LAB_005f37f0,0,"SUBTITLE_FONT_RIGHT");
  (**(code **)(*piVar2 + 0x5c))(2,*(undefined4 *)((int)this + 0x3b8),0xc1200000);
  (**(code **)(*piVar2 + 0x68))(2,*(undefined4 *)((int)this + 0x3b8),0x3f800000);
  (**(code **)(**(int **)((int)this + 0x36c) + 0xc))(piVar2,1);
  FUN_0076cd00((int)this);
  FUN_00769330();
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xac))(this);
  if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_190);
  }
  if (10 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  ExceptionList = puStack_16c;
  return this;
}


//// FUNCTION FUN_0076e090 @ 0076e090 ////

void __cdecl FUN_0076e090(uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  void *this;
  uint *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104e43c;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8dfb;
  local_c = ExceptionList;
  puVar3 = (uint *)0x0;
  if ((DAT_0104e420 == 0) && (DAT_0104e394 == 0)) {
    ExceptionList = &local_c;
    if (DAT_0104e43c != (uint *)0x0) {
      uVar1 = DAT_0104e43c[0x12];
      ExceptionList = &local_c;
      DAT_0104e43c[0x12] = uVar1 - 1;
      if (uVar1 - 1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104e428[1])();
      DAT_0104e43c = (uint *)0x0;
      (*(code *)*DAT_0104e428)();
    }
    this = operator_new(0x3e0);
    uStack_4 = 0;
    if (this != (void *)0x0) {
      puVar3 = FUN_0076d270(this,param_1,param_2);
    }
    uStack_4 = 0xffffffff;
    (*(code *)DAT_0104e428[1])();
    DAT_0104e43c = puVar3;
    (*(code *)*DAT_0104e428)();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0076e170 @ 0076e170 ////

void __cdecl FUN_0076e170(int param_1)

{
  uint uVar1;
  uint *puVar2;
  void *this;
  uint *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104e43c;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8e1b;
  local_c = ExceptionList;
  puVar3 = (uint *)0x0;
  if ((DAT_0104e420 == 0) && (DAT_0104e394 == 0)) {
    ExceptionList = &local_c;
    if (DAT_0104e43c != (uint *)0x0) {
      uVar1 = DAT_0104e43c[0x12];
      ExceptionList = &local_c;
      DAT_0104e43c[0x12] = uVar1 - 1;
      if (uVar1 - 1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104e428[1])();
      DAT_0104e43c = (uint *)0x0;
      (*(code *)*DAT_0104e428)();
    }
    this = operator_new(0x3e0);
    uStack_4 = 0;
    if (this != (void *)0x0) {
      puVar3 = FUN_0076d270(this,*(uint *)(param_1 + 0xc0),*(uint *)(param_1 + 0xc4));
    }
    uStack_4 = 0xffffffff;
    (*(code *)DAT_0104e428[1])();
    DAT_0104e43c = puVar3;
    (*(code *)*DAT_0104e428)();
    FUN_0076cbf0(DAT_0104e43c,param_1);
    *(undefined1 *)(DAT_0104e43c + 0xf7) = 1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0076e2c0 @ 0076e2c0 ////

void __fastcall FUN_0076e2c0(int *param_1)

{
  undefined4 uStack00000004;
  
  uStack00000004 = 1;
                    /* WARNING: Could not recover jumptable at 0x0076e2ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}


//// FUNCTION FUN_0076e2d0 @ 0076e2d0 ////

int * __thiscall FUN_0076e2d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0076e300 @ 0076e300 ////

int * __thiscall FUN_0076e300(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0076e390 @ 0076e390 ////

void __thiscall FUN_0076e390(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x344) + 4))();
  *(undefined4 *)((int)this + 0x358) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x344))();
  return;
}


//// FUNCTION FUN_0076e3c0 @ 0076e3c0 ////

void __thiscall FUN_0076e3c0(void *this,int param_1,char param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_007704f0(DAT_0104e478);
  fVar1 = 0.0;
  if (0 < iVar2) {
    fVar1 = (float)param_1 / (float)iVar2;
  }
  if ((*(float *)((int)this + 0x418) != fVar1) || (param_2 != '\0')) {
    *(float *)((int)this + 0x418) = fVar1;
    fVar1 = -(fVar1 * *(float *)((int)this + 0x41c));
    *(float *)((int)this + 0x414) = fVar1;
    if (*(int **)((int)this + 0x3b8) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x3b8) + 0x5c))(1,this,fVar1);
      (**(code **)(*(int *)this + 0x50))(1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0076e450 @ 0076e450 ////

void __fastcall FUN_0076e450(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = **(int **)(param_1 + 1000);
  uVar3 = DAT_0104cce0;
  uVar2 = FUN_0071b2a0();
  (**(code **)(iVar1 + 0x5c))(1,uVar2,uVar3);
  iVar1 = **(int **)(param_1 + 1000);
  uVar3 = DAT_0104cce4;
  uVar2 = FUN_0071b2a0();
  (**(code **)(iVar1 + 100))(1,uVar2,uVar3);
  return;
}


//// FUNCTION FUN_0076e590 @ 0076e590 ////

bool __fastcall FUN_0076e590(int param_1)

{
  return *(int *)(param_1 + 0x370) != 0;
}


//// FUNCTION FUN_0076e5a0 @ 0076e5a0 ////

void __fastcall FUN_0076e5a0(int param_1)

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


//// FUNCTION FUN_0076e640 @ 0076e640 ////

undefined4 * __thiscall FUN_0076e640(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x444),*(uint *)((int)this + 0x448));
  return param_1;
}


//// FUNCTION FUN_0076e680 @ 0076e680 ////

void __fastcall FUN_0076e680(int param_1)

{
  int *this;
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  void *this_00;
  int *piVar4;
  float unaff_EDI;
  float10 fVar5;
  float fVar6;
  undefined4 *puStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8e5f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(undefined4 **)(param_1 + 1000) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)**(undefined4 **)(param_1 + 1000))();
  }
  piVar4 = (int *)(param_1 + 0x3d4);
  (**(code **)(*(int *)(param_1 + 0x3d4) + 4))();
  *(undefined4 *)(param_1 + 1000) = 0;
  (**(code **)*piVar4)();
  if ((((DAT_0104e5f4 == 0) && (DAT_0104e310 == 0)) && (DAT_0104e4d8 == 0)) && (DAT_0104e394 == 0))
  {
    this = (int *)(param_1 + 0x35c);
    (**(code **)(*(int *)(param_1 + 0x35c) + 4))();
    *(undefined4 *)(param_1 + 0x370) = 0;
    (**(code **)*this)();
    puStack_44 = DAT_0104e1fc;
    if (DAT_0104e1fc != &DAT_0104e208) {
      do {
        piVar1 = (int *)puStack_44[2];
        cVar2 = (**(code **)(*piVar1 + 0x34))();
        if ((cVar2 != '\0') && (piVar1 == *(int **)(param_1 + 0x358))) {
          (**(code **)(*this + 4))();
          *(int **)(param_1 + 0x370) = piVar1;
          (**(code **)*this)();
        }
        puStack_44 = (undefined4 *)puStack_44[1];
      } while (puStack_44 != &DAT_0104e208);
    }
    piVar1 = *(int **)(param_1 + 0x370);
    if (piVar1 != (int *)0x0) {
      if ((*(uint *)(DAT_0104e4a8 + 0xd0) < 2) && ((char)piVar1[0x119] == '\0')) {
        FUN_0076e2d0(this,0);
        ExceptionList = pvStack_c;
        return;
      }
      (**(code **)(*piVar1 + 0x14))();
      fVar5 = (float10)(**(code **)(*piVar1 + 0x14))();
      fVar6 = (float)(fVar5 * (float10)1.7777778);
      puVar3 = operator_new(0x344);
      uStack_4 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_007432f0(puVar3);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar4 + 4))();
      *(undefined4 **)(param_1 + 1000) = puVar3;
      (**(code **)*piVar4)();
      this_00 = operator_new(0x360);
      uStack_4 = 1;
      if (this_00 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_0076e640(*(void **)(param_1 + 0x370),apvStack_2c);
        uStack_4 = CONCAT31(uStack_4._1_3_,2);
        puVar3 = FUN_0069d820(this_00,puVar3,0,0,0x3f800000,0x3f800000);
      }
      uStack_4 = 3;
      (**(code **)(*(int *)(param_1 + 0x3bc) + 4))();
      *(undefined4 **)(param_1 + 0x3d0) = puVar3;
      (*(code *)**(undefined4 **)(param_1 + 0x3bc))();
      uStack_4 = 0xffffffff;
      if ((this_00 != (void *)0x0) && (0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      (**(code **)(**(int **)(param_1 + 0x3d0) + 0x74))();
      FUN_0069ce60(*(void **)(param_1 + 0x3d0),0xdcffffff);
      (**(code **)(**(int **)(param_1 + 0x3d0) + 0x5c))(1);
      (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(1,*(undefined4 *)(param_1 + 1000),0x40800000)
      ;
      (**(code **)(**(int **)(param_1 + 1000) + 0x74))(unaff_EDI + 8.0,fVar6 + 8.0);
      (**(code **)(**(int **)(param_1 + 1000) + 0xc))(*(undefined4 *)(param_1 + 0x3d0),1);
      FUN_0076e450(param_1);
      piVar4 = (int *)FUN_0071b2a0();
      (**(code **)(*piVar4 + 0xc))(*(undefined4 *)(param_1 + 1000),1);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0076e9a0 @ 0076e9a0 ////

void __fastcall FUN_0076e9a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 1000) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 1000);
    uVar3 = DAT_0104cce0;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x5c))(1,uVar2,uVar3);
    iVar1 = **(int **)(param_1 + 1000);
    uVar3 = DAT_0104cce4;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 100))(1,uVar2,uVar3);
  }
  return;
}


//// FUNCTION FUN_0076e9f0 @ 0076e9f0 ////

void __fastcall FUN_0076e9f0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *unaff_EBX;
  uint unaff_EDI;
  float fVar7;
  char acStack_28 [8];
  undefined4 uStack_20;
  undefined1 uStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8e83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar4 = (**(code **)(*param_1 + 0x34))();
  if (cVar4 == '\0') {
    puVar5 = (undefined4 *)param_1[0x100];
    if (puVar5 != (undefined4 *)0x0) {
      piVar6 = puVar5 + 0x12;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (**(code **)*puVar5)();
      }
      (**(code **)(param_1[0xfb] + 4))();
      param_1[0x100] = 0;
      (**(code **)param_1[0xfb])();
    }
    (**(code **)(param_1[0xdd] + 4))();
    param_1[0xe2] = 0;
    (**(code **)param_1[0xdd])();
    ExceptionList = pvStack_14;
    return;
  }
  fVar7 = 999.0;
  puVar5 = DAT_0104e1fc;
  if (DAT_0104e1fc != &DAT_0104e208) {
    do {
      iVar2 = puVar5[2];
      fVar3 = ABS(DAT_0104cce0 - *(float *)(iVar2 + 0x108));
      if (fVar3 < fVar7) {
        (**(code **)(param_1[0xdd] + 4))();
        param_1[0xe2] = iVar2;
        (**(code **)param_1[0xdd])();
        fVar7 = fVar3;
      }
      puVar1 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104e208);
  }
  if (param_1[0x100] == 0) {
    puVar5 = operator_new(0x360);
    pvStack_c = (void *)0x0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_0069ce90(puVar5);
    }
    pvStack_c = (void *)0xffffffff;
    (**(code **)(param_1[0xfb] + 4))();
    param_1[0x100] = (int)puVar5;
    (**(code **)param_1[0xfb])();
    unaff_EBX = acStack_28;
    acStack_28[0] = '\0';
    _strncpy(unaff_EBX,"ui/button_blank.dds",0x13);
    uStack_15 = 0;
    pvStack_c = (void *)0x1;
    (**(code **)(*(int *)param_1[0x100] + 0x100))(&stack0xffffffcc);
    uStack_20 = 0xffffffff;
    if (0x14 < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
      _free(&DAT_0104cce0);
    }
    (**(code **)(*(int *)param_1[0x100] + 0x74))(0x42000000,0x42000000);
    piVar6 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar6 + 0xc))(param_1[0x100],1);
  }
  iVar2 = *(int *)param_1[0x100];
  (**(code **)(*(int *)param_1[0xe2] + 0x14))();
  (**(code **)(iVar2 + 100))();
  (**(code **)(*(int *)param_1[0x100] + 0x5c))(2,param_1[0xe2]);
  (**(code **)(*(int *)param_1[0x100] + 0x74))(0x42000000,0x42000000);
  ExceptionList = unaff_EBX;
  return;
}


//// FUNCTION FUN_0076ec70 @ 0076ec70 ////

void __fastcall FUN_0076ec70(int *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  float fVar9;
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  char local_84 [20];
  char *local_70;
  undefined4 local_6c;
  uint local_68;
  char local_64 [20];
  undefined2 *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined2 local_44 [4];
  void *pvStack_3c;
  void *local_30;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_0104e478;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8f1a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_007712f0(DAT_0104e478);
  fVar8 = FUN_007705e0(iVar2);
  fVar9 = (float)(fVar8 * (float10)iVar3);
  this = operator_new(0x468);
  bVar7 = this == (void *)0x0;
  local_4 = 0;
  local_30 = this;
  if (bVar7) {
    piVar6 = (int *)0x0;
  }
  else {
    local_70 = local_64;
    local_64[0] = '\0';
    local_6c = 0;
    local_68 = 0x14;
    _strncpy(local_70,"TRAILER_CREDITS",0xf);
    local_6c = 0xf;
    local_70[0xf] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar4 = FUN_009b5030(local_2c,&local_70);
    pwVar1 = (wchar_t *)*puVar4;
    local_50 = local_44;
    local_44[0] = 0;
    local_4c = 0;
    local_48 = 10;
    uVar5 = FUN_00ace02d(pwVar1);
    FUN_004036d0(&local_50,pwVar1,uVar5);
    local_90 = local_84;
    local_84[0] = '\0';
    local_8c = 0;
    local_88 = 0x20;
    local_90 = _malloc(0x20);
    _strncpy(local_90,"ui/postproc/titles.dds",0x16);
    local_8c = 0x16;
    local_90[0x16] = '\0';
    local_4 = 4;
    fVar8 = (float10)(**(code **)(*param_1 + 0x14))();
    piVar6 = FUN_00752b30(this,(int *)&local_90,&local_50,(float)(fVar8 - (float10)12.0),fVar9);
  }
  if ((!bVar7) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if ((!bVar7) && (10 < local_48)) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  if ((!bVar7) && (10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = 0xffffffff;
  if ((!bVar7) && (0x14 < local_68)) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  (**(code **)(*piVar6 + 0x18))(3,&LAB_0076e530,1000,"TRAILEREDITORFILMSTRIP_CLIP");
  (**(code **)(*piVar6 + 0x5c))(1,param_1[0xee],param_1[0x105]);
  (**(code **)(*piVar6 + 100))(1,param_1[0xee]);
  piVar6[0x110] = 1000;
  *(undefined1 *)(piVar6 + 0x119) = 1;
  (**(code **)(*(int *)param_1[0xee] + 0xc))(piVar6,1);
  param_1[0x105] = (int)((float)param_1[0x105] + 6.0);
  ExceptionList = pvStack_3c;
  return;
}


//// FUNCTION FUN_0076ef00 @ 0076ef00 ////

void __fastcall FUN_0076ef00(int *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  float fVar9;
  char *local_90;
  undefined4 local_8c;
  uint local_88;
  char local_84 [20];
  char *local_70;
  undefined4 local_6c;
  uint local_68;
  char local_64 [20];
  undefined2 *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined2 local_44 [4];
  void *pvStack_3c;
  void *local_30;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_0104e478;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd8fba;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar3 = FUN_007712d0(DAT_0104e478);
  fVar8 = FUN_007705e0(iVar2);
  fVar9 = (float)(fVar8 * (float10)iVar3);
  this = operator_new(0x468);
  bVar7 = this == (void *)0x0;
  local_4 = 0;
  local_30 = this;
  if (bVar7) {
    piVar6 = (int *)0x0;
  }
  else {
    local_70 = local_64;
    local_64[0] = '\0';
    local_6c = 0;
    local_68 = 0x14;
    _strncpy(local_70,"TRAILER_TITLES",0xe);
    local_6c = 0xe;
    local_70[0xe] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar4 = FUN_009b5030(local_2c,&local_70);
    pwVar1 = (wchar_t *)*puVar4;
    local_50 = local_44;
    local_44[0] = 0;
    local_4c = 0;
    local_48 = 10;
    uVar5 = FUN_00ace02d(pwVar1);
    FUN_004036d0(&local_50,pwVar1,uVar5);
    local_90 = local_84;
    local_84[0] = '\0';
    local_8c = 0;
    local_88 = 0x20;
    local_90 = _malloc(0x20);
    _strncpy(local_90,"ui/postproc/titles.dds",0x16);
    local_8c = 0x16;
    local_90[0x16] = '\0';
    local_4 = 4;
    fVar8 = (float10)(**(code **)(*param_1 + 0x14))();
    piVar6 = FUN_00752b30(this,(int *)&local_90,&local_50,(float)(fVar8 - (float10)12.0),fVar9);
  }
  if ((!bVar7) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if ((!bVar7) && (10 < local_48)) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  if ((!bVar7) && (10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = 0xffffffff;
  if ((!bVar7) && (0x14 < local_68)) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  (**(code **)(*piVar6 + 0x18))(3,&LAB_0076e530,999,"TRAILEREDITORFILMSTRIP_CLIP");
  (**(code **)(*piVar6 + 0x5c))(1,param_1[0xee],param_1[0x105]);
  (**(code **)(*piVar6 + 100))(1,param_1[0xee]);
  *(undefined1 *)(piVar6 + 0x119) = 1;
  piVar6[0x110] = 999;
  (**(code **)(*(int *)param_1[0xee] + 0xc))(piVar6,1);
  param_1[0x105] = (int)((float)param_1[0x105] + 6.0);
  ExceptionList = pvStack_3c;
  return;
}


//// FUNCTION FUN_0076f1c0 @ 0076f1c0 ////

void __fastcall FUN_0076f1c0(int param_1)

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


//// FUNCTION FUN_0076f1e0 @ 0076f1e0 ////

void __fastcall FUN_0076f1e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4ea4c;
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


//// FUNCTION FUN_0076f230 @ 0076f230 ////

void __thiscall FUN_0076f230(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4ea5c;
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


//// FUNCTION FUN_0076f280 @ 0076f280 ////

void __fastcall FUN_0076f280(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4ea5c;
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


//// FUNCTION FUN_0076f2d0 @ 0076f2d0 ////

undefined4 * __fastcall FUN_0076f2d0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9053;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  piVar1 = param_1 + 0xd1;
  *param_1 = &PTR_FUN_00d4ea84;
  param_1[0x14] = &PTR_LAB_00d4ea6c;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d4ea4c;
  param_1[0xd6] = 0;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = param_1 + 0xd7;
  param_1[0xd7] = &PTR_FUN_00d4ea4c;
  param_1[0xdc] = 0;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = param_1 + 0xdd;
  param_1[0xdd] = &PTR_FUN_00d4ea4c;
  param_1[0xe2] = 0;
  param_1[0xe6] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = param_1 + 0xe3;
  param_1[0xe3] = &PTR_FUN_00d4ea4c;
  param_1[0xe8] = 0;
  piVar2 = param_1 + 0xe9;
  param_1[0xec] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d18c2c;
  param_1[0xee] = 0;
  param_1[0xf2] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = param_1 + 0xef;
  param_1[0xef] = &PTR_FUN_00d2d110;
  param_1[0xf4] = 0;
  param_1[0xf8] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = param_1 + 0xf5;
  param_1[0xf5] = &PTR_FUN_00d18c2c;
  param_1[0xfa] = 0;
  param_1[0xfe] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = param_1 + 0xfb;
  param_1[0xfb] = &PTR_FUN_00d2d110;
  param_1[0x100] = 0;
  local_4._0_1_ = 8;
  local_4._1_3_ = 0;
  (*(code *)DAT_0104e444[1])();
  DAT_0104e458 = param_1;
  (*(code *)*DAT_0104e444)();
  (**(code **)(*piVar1 + 4))();
  param_1[0xd6] = 0;
  (**(code **)*piVar1)();
  *(undefined1 *)(param_1 + 0x103) = 0;
  param_1[0x106] = 0;
  puVar3 = operator_new(0x344);
  local_4._0_1_ = 9;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  (**(code **)(*piVar2 + 4))();
  param_1[0xee] = puVar3;
  (**(code **)*piVar2)();
  (**(code **)(*(int *)param_1[0xee] + 0x5c))(1,param_1,0);
  (**(code **)(*(int *)param_1[0xee] + 100))(1,param_1,0);
  FUN_0073f6e0(param_1,(int *)param_1[0xee]);
  ExceptionList = unaff_EDI;
  return param_1;
}


//// FUNCTION FUN_0076f4b0 @ 0076f4b0 ////

void __fastcall FUN_0076f4b0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd90d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4ea84;
  param_1[0x14] = &PTR_LAB_00d4ea6c;
  local_4 = 8;
  (*(code *)DAT_0104e444[1])();
  DAT_0104e458 = 0;
  (*(code *)*DAT_0104e444)();
  param_1[0xfb] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfd] = param_1[0xfc];
  }
  if (param_1[0xfc] != 0) {
    *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0x100] = 0;
  if ((undefined4 *)param_1[0xfd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xfd] = param_1[0xfc];
  }
  if (param_1[0xfc] != 0) {
    *(undefined4 *)(param_1[0xfc] + 4) = param_1[0xfd];
  }
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xf5] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf7] = param_1[0xf6];
  }
  if (param_1[0xf6] != 0) {
    *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
  }
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  if ((undefined4 *)param_1[0xf7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf7] = param_1[0xf6];
  }
  if (param_1[0xf6] != 0) {
    *(undefined4 *)(param_1[0xf6] + 4) = param_1[0xf7];
  }
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xef] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf1] = param_1[0xf0];
  }
  if (param_1[0xf0] != 0) {
    *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  if ((undefined4 *)param_1[0xf1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf1] = param_1[0xf0];
  }
  if (param_1[0xf0] != 0) {
    *(undefined4 *)(param_1[0xf0] + 4) = param_1[0xf1];
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xe9] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xee] = 0;
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xeb] = param_1[0xea];
  }
  if (param_1[0xea] != 0) {
    *(undefined4 *)(param_1[0xea] + 4) = param_1[0xeb];
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xe3] = &PTR_FUN_00d4ea4c;
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
  param_1[0xdd] = &PTR_FUN_00d4ea4c;
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
  param_1[0xd7] = &PTR_FUN_00d4ea4c;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d4ea4c;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0076f8b0 @ 0076f8b0 ////

void __fastcall FUN_0076f8b0(int *param_1)

{
  float fVar1;
  char cVar2;
  void *this;
  wchar_t *pwVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  void *this_00;
  undefined4 *puVar8;
  uint uVar9;
  int *this_01;
  char *pcVar10;
  float10 fVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  uint local_9c;
  char *local_8c;
  uint local_88;
  uint local_84;
  char local_80 [20];
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd9166;
  local_c = ExceptionList;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  if ((DAT_0104e4a8 != 0) &&
     (local_9c = 0, ExceptionList = &local_c, *(int *)(DAT_0104e4a8 + 0xd0) != 0)) {
    do {
      local_4 = 0xffffffff;
      uVar9 = *(int *)(DAT_0104e4a8 + 0xcc) + local_9c;
      uVar7 = uVar9 >> 2;
      iVar13 = uVar7 * -4;
      if (*(uint *)(DAT_0104e4a8 + 200) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(DAT_0104e4a8 + 200);
      }
      this = *(void **)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar7 * 4) + (uVar9 + iVar13) * 4);
      uVar12 = FUN_00770460((int)this);
      fVar11 = FUN_007705e0(DAT_0104e478);
      fVar1 = (float)(fVar11 * (float10)((int)uVar12 * 100));
      FUN_007554b0(this,local_4c);
      this_01 = (int *)0x0;
      local_4 = 0;
      this_00 = operator_new(0x468);
      if (this_00 != (void *)0x0) {
        local_88 = 0;
        local_8c = local_80;
        local_80[0] = '\0';
        local_84 = 0x14;
        pcVar10 = (char *)((int)this + 0x50);
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar7 = (int)pcVar10 - ((int)this + 0x51);
        if (0x13 < uVar7) {
          local_84 = uVar7 + 0x20 & 0xffffffe0;
          local_8c = _malloc(local_84);
        }
        _strncpy(local_8c,(char *)((int)this + 0x50),uVar7);
        local_8c[uVar7] = '\0';
        local_4 = CONCAT31(local_4._1_3_,2);
        local_88 = uVar7;
        puVar8 = FUN_009b5030(local_2c,&local_8c);
        pwVar3 = (wchar_t *)*puVar8;
        local_6c = local_60;
        local_60[0] = 0;
        local_68 = 0;
        local_64 = 10;
        uVar7 = FUN_00ace02d(pwVar3);
        FUN_004036d0(&local_6c,pwVar3,uVar7);
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        local_4 = 4;
        fVar14 = fVar1;
        fVar11 = (float10)(**(code **)(*param_1 + 0x14))();
        this_01 = FUN_00752b30(this_00,(int *)local_4c,&local_6c,(float)(fVar11 - (float10)12.0),
                               fVar14);
      }
      if ((bVar4) && (bVar4 = false, 10 < local_64)) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      if ((bVar5) && (bVar5 = false, 10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      local_4 = 0;
      if ((bVar6) && (bVar6 = false, 0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      (**(code **)(*this_01 + 0x18))(3,&LAB_0076e530,local_9c,"TRAILEREDITORFILMSTRIP_CLIP");
      iVar13 = param_1[0x105];
      (**(code **)(*this_01 + 0x5c))(1,param_1[0xee]);
      (**(code **)(*this_01 + 100))(1,param_1[0xee],0x40c00000);
      FUN_00752930(this_01,this);
      this_01[0x110] = iVar13;
      (**(code **)(*(int *)param_1[0xee] + 0xc))(this_01,1);
      local_4 = 0xffffffff;
      param_1[0x105] = (int)(fVar1 + (float)param_1[0x105]);
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c[0]);
      }
      local_9c = iVar13 + 1;
    } while (local_9c < *(uint *)(DAT_0104e4a8 + 0xd0));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0076fbc0 @ 0076fbc0 ////

undefined4 * __thiscall FUN_0076fbc0(void *this,byte param_1)

{
  FUN_0076f4b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0076fbe0 @ 0076fbe0 ////

void __fastcall FUN_0076fbe0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = param_1[0xdc];
  iVar7 = 0;
  if (iVar2 != 0) {
    iVar7 = *(int *)(iVar2 + 0x440);
  }
  (**(code **)(*(int *)param_1[0xee] + 0xa8))();
  param_1[0x105] = 0;
  (**(code **)(*param_1 + 0x50))(1);
  if ((*(char *)(DAT_0104e478 + 0x34b) == '\0') &&
     (uVar4 = FUN_00770f40(DAT_0104e478), (char)uVar4 != '\0')) {
    cVar3 = FUN_007704d0(DAT_0104e478);
    if (cVar3 != '\0') {
      FUN_0076ef00(param_1);
    }
    FUN_0076f8b0(param_1);
    cVar3 = FUN_007704e0(DAT_0104e478);
    if (cVar3 != '\0') {
      FUN_0076ec70(param_1);
    }
  }
  (**(code **)(*(int *)param_1[0xee] + 0x84))(0);
  param_1[0x107] = param_1[0x105];
  iVar5 = FUN_007704f0(DAT_0104e478);
  FUN_0076e3c0(param_1,(int)ROUND((float)iVar5 * (float)param_1[0x106]),'\x01');
  if ((iVar2 != 0) && (puVar6 = DAT_0104e1fc, DAT_0104e1fc != &DAT_0104e208)) {
    do {
      iVar2 = puVar6[2];
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x440) == iVar7)) {
        (**(code **)(param_1[0xd7] + 4))();
        param_1[0xdc] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0076fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)param_1[0xd7])();
        return;
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104e208);
  }
  return;
}


//// FUNCTION FUN_0076fd20 @ 0076fd20 ////

void __fastcall FUN_0076fd20(int *param_1)

{
  FUN_007742e0(DAT_0104e478);
  FUN_0076fbe0(param_1);
  return;
}


//// FUNCTION FUN_0076fd40 @ 0076fd40 ////

void __fastcall FUN_0076fd40(int *param_1)

{
  FUN_00774310(DAT_0104e478);
  FUN_0076fbe0(param_1);
  return;
}


//// FUNCTION FUN_0076fd60 @ 0076fd60 ////

void __fastcall FUN_0076fd60(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[0xe8] + 0x440);
  if (iVar1 < 0) {
    return;
  }
  if (iVar1 == 999) {
    FUN_007742e0((int)DAT_0104e478);
    FUN_0076fbe0(param_1);
    FUN_00777260(DAT_0104e478);
    return;
  }
  if (iVar1 == 1000) {
    FUN_00774310((int)DAT_0104e478);
    FUN_0076fbe0(param_1);
    FUN_00777260(DAT_0104e478);
    return;
  }
  FUN_00773800(DAT_0104e478,*(undefined4 **)(param_1[0xe8] + 0x43c));
  FUN_0076fbe0(param_1);
  FUN_00777260(DAT_0104e478);
  return;
}


//// FUNCTION FUN_0076fe10 @ 0076fe10 ////

void __thiscall FUN_0076fe10(void *this,int param_1)

{
  undefined4 *puVar1;
  void *this_00;
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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9190;
  local_c = ExceptionList;
  if ((-1 < *(int *)(param_1 + 0x440)) &&
     ((1 < *(uint *)(DAT_0104e4a8 + 0xd0) || (0x3e6 < *(int *)(param_1 + 0x440))))) {
    ExceptionList = &local_c;
    (**(code **)(*(int *)((int)this + 0x38c) + 4))();
    *(int *)((int)this + 0x3a0) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x38c))();
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x20;
    pcStack_4c = _malloc(0x20);
    _strncpy(pcStack_4c,"post_confirm_delete_scene_text",0x1e);
    uStack_48 = 0x1e;
    pcStack_4c[0x1e] = '\0';
    pcStack_6c = acStack_60;
    uStack_4 = 0;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x20;
    pcStack_6c = _malloc(0x20);
    _strncpy(pcStack_6c,"post_confirm_delete_scene_title",0x1f);
    uStack_68 = 0x1f;
    pcStack_6c[0x1f] = '\0';
    uStack_4._0_1_ = 1;
    FUN_009b5030((undefined4 *)&stack0xffffff68,&pcStack_4c);
    uStack_4._0_1_ = 2;
    puVar1 = FUN_009b5030(apvStack_2c,&pcStack_6c);
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    FUN_00669b80(this_00,puVar1,&LAB_0076fe00,&LAB_0076e500);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_6c);
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0076ffe0 @ 0076ffe0 ////

void __fastcall FUN_0076ffe0(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  int *local_c;
  int local_8 [2];
  
  local_10 = *(int *)(param_1[0xdc] + 0x43c);
  if (local_10 != *(int *)(param_1[0xe2] + 0x43c)) {
    uVar3 = *(uint *)(DAT_0104e4a8 + 0xcc);
    pvVar2 = (void *)(DAT_0104e4a8 + 0xc0);
    uVar5 = *(int *)(DAT_0104e4a8 + 0xd0) + uVar3;
    for (; local_c = param_1, uVar3 != uVar5; uVar3 = uVar3 + 1) {
      uVar1 = uVar3 >> 2;
      iVar4 = uVar1 * -4;
      if (*(uint *)(DAT_0104e4a8 + 200) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(DAT_0104e4a8 + 200);
      }
      if (*(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar1 * 4) + (uVar3 + iVar4) * 4) ==
          local_10) {
        FUN_00755790(pvVar2,local_8,(int)pvVar2,uVar3,(int)pvVar2,uVar3 + 1);
        break;
      }
    }
    iVar4 = *(int *)(local_c[0xe2] + 0x440);
    if (iVar4 == 999) {
      FUN_007578f0((void *)(DAT_0104e4a8 + 0xc0),&local_10);
    }
    else {
      pvVar2 = (void *)(DAT_0104e4a8 + 0xc0);
      if (iVar4 == 1000) {
        FUN_005ba7b0(pvVar2,&local_10);
      }
      else {
        uVar3 = *(uint *)(DAT_0104e4a8 + 0xcc);
        uVar5 = *(int *)(DAT_0104e4a8 + 0xd0) + uVar3;
        do {
          if (uVar3 == uVar5) goto LAB_00770136;
          uVar1 = uVar3 >> 2;
          iVar4 = uVar3 + uVar1 * -4;
          if (*(uint *)(DAT_0104e4a8 + 200) <= uVar1) {
            uVar1 = uVar1 - *(uint *)(DAT_0104e4a8 + 200);
          }
          uVar3 = uVar3 + 1;
        } while (*(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar1 * 4) + iVar4 * 4) !=
                 *(int *)(local_c[0xe2] + 0x43c));
        if (uVar3 == *(int *)(DAT_0104e4a8 + 0xd0) + *(int *)(DAT_0104e4a8 + 0xcc)) {
          FUN_005ba7b0(pvVar2,&local_10);
        }
        else {
          FUN_00757d60(pvVar2,local_8,pvVar2,uVar3,&local_10);
        }
      }
    }
LAB_00770136:
    FUN_00776280(DAT_0104e478);
    FUN_0076fbe0(local_c);
  }
  return;
}


//// FUNCTION FUN_00770160 @ 00770160 ////

void __fastcall FUN_00770160(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  
  cVar4 = FUN_00770f10(DAT_0104e478,&DAT_0104cce0);
  if (cVar4 == '\0') {
    if ((((param_1[0xe2] != 0) && (param_1[0xdc] != 0)) &&
        (iVar2 = *(int *)(param_1[0xdc] + 0x440), iVar2 != 999)) && (iVar2 != 1000)) {
      FUN_0076ffe0(param_1);
    }
  }
  else {
    FUN_0076fe10(param_1,param_1[0xdc]);
  }
  puVar3 = (undefined4 *)param_1[0xfa];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(param_1[0xf5] + 4))();
    param_1[0xfa] = 0;
    (**(code **)param_1[0xf5])();
  }
  (**(code **)(param_1[0xd7] + 4))();
  param_1[0xdc] = 0;
  (**(code **)param_1[0xd7])();
  puVar3 = (undefined4 *)param_1[0x100];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(param_1[0xfb] + 4))();
    param_1[0x100] = 0;
    (**(code **)param_1[0xfb])();
  }
  (**(code **)(param_1[0xdd] + 4))();
  param_1[0xe2] = 0;
                    /* WARNING: Could not recover jumptable at 0x0077024b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[0xdd])();
  return;
}


//// FUNCTION FUN_00770250 @ 00770250 ////

void __fastcall FUN_00770250(int *param_1)

{
  char cVar1;
  float10 fVar2;
  int *local_4;
  
  local_4 = param_1;
  cVar1 = FUN_00553f70(0x73);
  if (((cVar1 == '\0') || (*(char *)(DAT_0104e478 + 0x348) != '\0')) || (DAT_0104e4d8 != 0)) {
    *(undefined1 *)(param_1 + 0x103) = 0;
    if (param_1[0xfa] != 0) {
      FUN_00770160(param_1);
    }
  }
  else {
    local_4 = (int *)0x0;
    if ((char)param_1[0x103] == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x34))(&DAT_0104cce0,&local_4);
      if (cVar1 != '\0') {
        param_1[0x101] = DAT_0104cce0;
        param_1[0x102] = (int)DAT_0104cce4;
        *(undefined1 *)(param_1 + 0x103) = 1;
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x34))();
      if (((cVar1 != '\0') && ((float)param_1[0x27] + 12.0 < DAT_0104cce4)) &&
         (DAT_0104cce4 < (float)param_1[0x39] - 12.0)) {
        if (param_1[0xfa] != 0) goto LAB_00770344;
        fVar2 = FUN_004294b0((float *)&DAT_0104cce0,(float *)(param_1 + 0x101));
        if ((float10)8.0 < fVar2) {
          FUN_0076e680((int)param_1);
        }
      }
    }
    if (param_1[0xfa] != 0) {
LAB_00770344:
      FUN_00771620(DAT_0104e478);
      FUN_0076e9f0(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION WTrailerEditorFilmstrip_Tick @ 00770380 ////

void __fastcall WTrailerEditorFilmstrip_Tick(int *param_1)

{
  WWindow_Tick(param_1);
  FUN_00770250(param_1);
  if (param_1[0xfa] != 0) {
    FUN_0053d480((int)param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00770460 @ 00770460 ////

ulonglong FUN_00770460(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  
  iVar1 = FUN_007535e0(param_1);
  this = (void *)FUN_0075aa20();
  iVar2 = FUN_0075a190(this,param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_00acd42c();
    return uVar3;
  }
  return CONCAT44(extraout_EDX,iVar1);
}


//// FUNCTION FUN_007704b0 @ 007704b0 ////

undefined4 * __thiscall FUN_007704b0(void *this,byte param_1)

{
  FUN_0074e040(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007704d0 @ 007704d0 ////

undefined1 __fastcall FUN_007704d0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x457);
}


//// FUNCTION FUN_007704e0 @ 007704e0 ////

undefined1 __fastcall FUN_007704e0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x458);
}


//// FUNCTION FUN_007704f0 @ 007704f0 ////

undefined4 __fastcall FUN_007704f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x39c);
}


//// FUNCTION FUN_00770520 @ 00770520 ////

void __fastcall FUN_00770520(int param_1)

{
  *(undefined1 *)(param_1 + 0x45a) = 0;
  *(undefined1 *)(param_1 + 0x45b) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  return;
}


//// FUNCTION FUN_00770550 @ 00770550 ////

undefined4 __fastcall FUN_00770550(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3a8);
}


//// FUNCTION FUN_007705a0 @ 007705a0 ////

void __thiscall FUN_007705a0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x3a0);
  uVar2 = param_1 & ((int)param_1 < 1) - 1;
  if ((int)*(uint *)((int)this + 0x39c) <= (int)uVar2) {
    uVar2 = *(uint *)((int)this + 0x39c);
  }
  *(uint *)((int)this + 0x3a0) = uVar2;
  if (uVar2 != uVar1) {
    *(undefined1 *)((int)this + 0x452) = 1;
  }
  return;
}


//// FUNCTION FUN_007705e0 @ 007705e0 ////

float10 __fastcall FUN_007705e0(int param_1)

{
  return (float10)*(float *)(param_1 + 0x3a4) * (float10)0.01;
}


//// FUNCTION FUN_007705f0 @ 007705f0 ////

float10 __fastcall FUN_007705f0(int param_1)

{
  return (float10)100.0 / (float10)*(float *)(param_1 + 0x3a4);
}


//// FUNCTION FUN_00770610 @ 00770610 ////

int * __thiscall FUN_00770610(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00770660 @ 00770660 ////

void __thiscall FUN_00770660(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_007706a0 @ 007706a0 ////

int * __thiscall FUN_007706a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00770710 @ 00770710 ////

int * __thiscall FUN_00770710(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007707b0 @ 007707b0 ////

int * __thiscall FUN_007707b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00770aa0 @ 00770aa0 ////

undefined4 FUN_00770aa0(void)

{
  if (DAT_0104e478 == 0) {
    return 0;
  }
  if ((*(int *)(DAT_0104e478 + 0x368) != 1) && ((DAT_0104e330 == 0 || (DAT_0104e334 == '\0')))) {
    return 2;
  }
  return 1;
}


//// FUNCTION FUN_00770bb0 @ 00770bb0 ////

void __fastcall FUN_00770bb0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x670) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x6d0) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x6a0) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x718) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x6b8) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x688) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x628) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x4f0) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x598) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x508) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x568) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x580) + 0xc0))(0);
  (**(code **)(**(int **)(param_1 + 0x5b0) + 0xc0))(0);
  return;
}


//// FUNCTION FUN_00770c90 @ 00770c90 ////

void __fastcall FUN_00770c90(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x670) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x6d0) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x6a0) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x718) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x6b8) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x688) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x628) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x4f0) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x598) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x508) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x568) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x580) + 0xc0))(1);
  (**(code **)(**(int **)(param_1 + 0x5b0) + 0xc0))(1);
  return;
}


//// FUNCTION FUN_00770d70 @ 00770d70 ////

void __thiscall FUN_00770d70(void *this,char param_1)

{
  if ((*(char *)((int)this + 0x34b) == '\0') && (param_1 == '\0')) {
    *(float *)((int)this + 0x3dc) = *(float *)((int)this + 0x3d8) + 160.0;
    (**(code **)(**(int **)((int)this + 0x718) + 0x20))(1);
    (**(code **)(**(int **)((int)this + 0x688) + 0x20))(1);
    (**(code **)(**(int **)((int)this + 0x6a0) + 0x20))(1);
    (**(code **)(**(int **)((int)this + 0x670) + 0x20))(1);
    (**(code **)(**(int **)((int)this + 0x580) + 0x20))(1);
                    /* WARNING: Could not recover jumptable at 0x00770de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)((int)this + 0x568) + 0x20))(1);
    return;
  }
  return;
}


//// FUNCTION FUN_00770df0 @ 00770df0 ////

void __fastcall FUN_00770df0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *local_4;
  
  if (DAT_0104e4a8 != 0) {
    bVar1 = true;
    if (((DAT_0104e43c != 0) || (DAT_0104e64c != 0)) || (DAT_0104e2f8 != 0)) {
      bVar1 = false;
    }
    local_4 = param_1;
    if (DAT_0104e3e8 != 0) {
      if (DAT_0104e4d8 == (int *)0x0) {
        return;
      }
      if (bVar1) {
        local_4 = (int *)0x0;
        cVar3 = (**(code **)(*(int *)param_1[0x1c6] + 0x34))(&DAT_0104cce0,&local_4);
        if ((cVar3 != '\0') && (cVar3 = FUN_00553f70(0x73), cVar3 == '\0')) {
          FUN_00769340();
        }
      }
    }
    if (DAT_0104e4d8 != (int *)0x0) {
      (**(code **)(*DAT_0104e4d8 + 0x5c))(1,param_1,DAT_0104cce0 - 16.0);
      (**(code **)(*DAT_0104e4d8 + 100))(1,param_1,DAT_0104cce4 - 16.0);
      (**(code **)(*DAT_0104e4d8 + 0x74))(0x42000000,0x42000000);
      piVar2 = DAT_0104e4d8;
      piVar4 = DAT_0104e4d8 + 0x54;
      if ((int *)DAT_0104e4d8[0x55] != (int *)0x0) {
        *(int *)DAT_0104e4d8[0x55] = *piVar4;
      }
      if (*piVar4 != 0) {
        *(int *)(*piVar4 + 4) = piVar2[0x55];
      }
      *piVar4 = 0;
      piVar2[0x55] = 0;
      (**(code **)(*param_1 + 0xc))(DAT_0104e4d8,1);
    }
  }
  return;
}


//// FUNCTION FUN_00770f10 @ 00770f10 ////

void __thiscall FUN_00770f10(void *this,undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 0x718) + 0x34))(param_1,&local_4);
  return;
}


//// FUNCTION FUN_00770f40 @ 00770f40 ////

uint __fastcall FUN_00770f40(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_0104e4a8;
  if (((DAT_0104e4a8 != 0) && (*(int *)(DAT_0104e4a8 + 0xd0) != 0)) &&
     (uVar1 = 0, *(int *)(param_1 + 0x438) != 0)) {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x438) >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00771070 @ 00771070 ////

void __fastcall FUN_00771070(int param_1)

{
  if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != 0)) &&
     ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)(param_1 + 0x438) != 0)))) {
    *(undefined1 *)(param_1 + 0x45a) = 0;
    *(undefined1 *)(param_1 + 0x45b) = 0;
    *(undefined4 *)(param_1 + 0x3bc) = 0;
    FUN_00769340();
    if ((DAT_0104e458 != (void *)0x0) && (*(int *)((int)DAT_0104e458 + 0x358) != 0)) {
      FUN_0076fe10(DAT_0104e458,*(int *)((int)DAT_0104e458 + 0x358));
    }
  }
  return;
}


//// FUNCTION FUN_007710e0 @ 007710e0 ////

undefined4 FUN_007710e0(void)

{
  int *piVar1;
  int *piVar2;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd91e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x3c0);
  local_4 = 0;
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    FUN_00754790(local_2c);
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar2 = FUN_00763c60(piVar1);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


//// FUNCTION FUN_00771170 @ 00771170 ////

void __cdecl FUN_00771170(undefined4 param_1,void *param_2,undefined4 param_3,uint param_4)

{
  void *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd91f8;
  local_c = ExceptionList;
  local_4 = 0;
  local_2c = 0xffffffff;
  ExceptionList = &local_c;
  FUN_009a8100(&local_30);
  local_2c = 0xffffffff;
  local_30 = param_2;
  local_28 = 0x41a00000;
  local_24 = param_1;
  local_20 = 0;
  local_1c = DAT_00f885c0;
  FUN_009a85a0((int *)&local_30);
  if (10 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00771220 @ 00771220 ////

void __thiscall FUN_00771220(void *this,char param_1)

{
  if ((param_1 != '\0') && (*(int **)((int)this + 0x550) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0077123c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)((int)this + 0x550) + 0xc0))();
    return;
  }
  return;
}


//// FUNCTION FUN_007712d0 @ 007712d0 ////

int __fastcall FUN_007712d0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x457) != '\0') {
    iVar1 = FUN_0074b390();
    iVar1 = FUN_007487e0(iVar1);
    return iVar1;
  }
  return 0;
}


//// FUNCTION FUN_007712f0 @ 007712f0 ////

int __fastcall FUN_007712f0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x457) != '\0') {
    iVar1 = FUN_0074b390();
    iVar1 = FUN_00748800(iVar1);
    return iVar1;
  }
  return 0;
}


//// FUNCTION FUN_00771310 @ 00771310 ////

int __fastcall FUN_00771310(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x457) != '\0') {
    iVar1 = FUN_0074b390();
    iVar1 = FUN_007487e0(iVar1);
    return iVar1;
  }
  return 0;
}


//// FUNCTION FUN_00771330 @ 00771330 ////

int __fastcall FUN_00771330(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x39c);
  if (*(char *)(param_1 + 0x457) != '\0') {
    iVar2 = FUN_0074b390();
    iVar2 = FUN_00748800(iVar2);
    return iVar1 - iVar2;
  }
  return iVar1;
}


//// FUNCTION FUN_00771360 @ 00771360 ////

int __fastcall FUN_00771360(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_01050b50 * 100;
  if (*(char *)(param_1 + 0x457) != '\0') {
    iVar1 = FUN_0074b390();
    iVar1 = FUN_007487e0(iVar1);
    return iVar1 + iVar2;
  }
  return iVar2;
}


//// FUNCTION FUN_00771390 @ 00771390 ////

void __fastcall FUN_00771390(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((*(char *)(param_1 + 0x45b) != '\0') && (*(int *)(param_1 + 0x3bc) != 0)) {
    uVar3 = FUN_00990ae0(param_1,param_2);
    uVar2 = *(int *)(param_1 + 0x3a0) - ((int)uVar3 - *(int *)(param_1 + 0x3bc));
    if (0x31 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
      if ((int)uVar2 < -9) {
        uVar2 = 0xfffffff6;
      }
      else if (9 < (int)uVar2) {
        uVar2 = 10;
      }
      iVar1 = DAT_0105becc - uVar2;
      if (iVar1 < 6) {
        DAT_0105becc = 5;
        return;
      }
      DAT_0105becc = 99;
      if (iVar1 < 99) {
        DAT_0105becc = iVar1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00771410 @ 00771410 ////

bool __fastcall FUN_00771410(int param_1)

{
  char cVar1;
  
  if (*(undefined4 **)(param_1 + 0x410) != (undefined4 *)0x0) {
    cVar1 = FUN_005ee930(*(undefined4 **)(param_1 + 0x410));
    if (cVar1 == '\0') {
      return true;
    }
  }
  return *(int *)(param_1 + 0x424) != 0;
}


//// FUNCTION FUN_00771490 @ 00771490 ////

int __fastcall FUN_00771490(int param_1)

{
  int iVar1;
  
  iVar1 = (int)ROUND((((float)*(int *)(param_1 + 0x39c) * *(float *)(param_1 + 0x3a4) * 0.01 -
                      ((DAT_0105c400 - 4.0) - *(float *)(*(int *)(param_1 + 0x700) + 0x108))) /
                     *(float *)(param_1 + 0x3a4)) * 100.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}


//// FUNCTION FUN_00771520 @ 00771520 ////

void __fastcall FUN_00771520(int param_1)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  
  iVar1 = FUN_00771490(param_1);
  if (extraout_EDX < iVar1) {
    *(int *)(extraout_ECX + 0x3a8) = extraout_EDX;
    *(undefined4 *)(extraout_ECX + 0x3ac) = 0xffffffff;
    return;
  }
  iVar1 = FUN_00771490(extraout_ECX);
  *(int *)(extraout_ECX_00 + 0x3a8) = iVar1;
  *(undefined4 *)(extraout_ECX_00 + 0x3ac) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00771570 @ 00771570 ////

void __fastcall FUN_00771570(int param_1)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_EDX;
  
  iVar1 = FUN_00771490(param_1);
  if (extraout_EDX < iVar1) {
    *(int *)(extraout_ECX + 0x3ac) = extraout_EDX;
    return;
  }
  iVar1 = FUN_00771490(extraout_ECX);
  *(int *)(extraout_ECX_00 + 0x3ac) = iVar1;
  return;
}


//// FUNCTION FUN_007715a0 @ 007715a0 ////

int __fastcall FUN_007715a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3a0);
  if (*(char *)(param_1 + 0x457) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0074b390();
    iVar2 = FUN_007487e0(iVar2);
  }
  return (iVar1 - iVar2) / 100;
}


//// FUNCTION FUN_007715e0 @ 007715e0 ////

int __thiscall FUN_007715e0(void *this,int param_1)

{
  int iVar1;
  
  if (*(char *)((int)this + 0x457) != '\0') {
    iVar1 = FUN_0074b390();
    iVar1 = FUN_007487e0(iVar1);
    return param_1 * 100 + iVar1;
  }
  return param_1 * 100;
}


//// FUNCTION FUN_00771620 @ 00771620 ////

void __fastcall FUN_00771620(int param_1)

{
  float fVar1;
  float fVar2;
  
  if (0 < *(int *)(param_1 + 0x39c)) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x700) + 0x108) + 32.0;
    fVar2 = (DAT_0105c400 - 4.0) - 32.0;
    if (fVar1 <= DAT_0104cce0) {
      if (DAT_0104cce0 <= fVar2) {
        return;
      }
      fVar1 = DAT_0104cce0 - fVar2;
      if (32.0 <= fVar1) goto LAB_007716c6;
    }
    else {
      fVar1 = DAT_0104cce0 - fVar1;
      if (fVar1 <= -32.0) goto LAB_007716c6;
    }
    if (fVar1 != 0.0) {
LAB_007716c6:
      FUN_00771520(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00771700 @ 00771700 ////

void __thiscall FUN_00771700(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_EDX;
  
  *(undefined4 *)((int)this + 0x3a4) = param_1;
  iVar1 = FUN_00771490((int)this);
  iVar2 = extraout_EDX;
  iVar3 = extraout_ECX;
  if (iVar1 <= extraout_EDX) {
    iVar2 = FUN_00771490(extraout_ECX);
    iVar3 = extraout_ECX_00;
  }
  *(int *)(iVar3 + 0x3a8) = iVar2;
  *(undefined4 *)(iVar3 + 0x3ac) = 0xffffffff;
  if (DAT_0104e458 != (int *)0x0) {
    thunk_FUN_0076fbe0(DAT_0104e458);
  }
  return;
}


//// FUNCTION FUN_007717d0 @ 007717d0 ////

void __fastcall FUN_007717d0(void *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(float *)((int)param_1 + 0x3a4) < (float)(&DAT_00d4ebc0)[uVar1]) {
      FUN_00771700(param_1,(&DAT_00d4ebc0)[uVar1]);
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  FUN_00771700(param_1,0x3f000000);
  return;
}


//// FUNCTION FUN_00771820 @ 00771820 ////

void __fastcall FUN_00771820(void *param_1)

{
  undefined4 local_4;
  
  if (1.0 <= *(float *)((int)param_1 + 0x3a4)) {
    local_4 = *(float *)((int)param_1 + 0x3a4) + 1.0;
  }
  else {
    local_4 = 1.0;
  }
  if (DAT_00e595fc < local_4) {
    local_4 = DAT_00e595fc;
  }
  FUN_00771700(param_1,local_4);
  return;
}


//// FUNCTION FUN_00771870 @ 00771870 ////

void __fastcall FUN_00771870(void *param_1)

{
  undefined4 local_4;
  
  local_4 = *(float *)((int)param_1 + 0x3a4) - 1.0;
  if (local_4 < DAT_00e595f8) {
    local_4 = DAT_00e595f8;
  }
  FUN_00771700(param_1,local_4);
  return;
}


//// FUNCTION FUN_007718a0 @ 007718a0 ////

undefined4 __fastcall FUN_007718a0(int param_1)

{
  if ((*(int *)(param_1 + 0x3a8) <= *(int *)(param_1 + 0x3a0)) &&
     (*(int *)(param_1 + 0x3a0) <=
      (int)ROUND((((DAT_0105c400 - 4.0) - *(float *)(*(int *)(param_1 + 0x700) + 0x108)) /
                 *(float *)(param_1 + 0x3a4)) * 100.0) + 1 + *(int *)(param_1 + 0x3a8))) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00771900 @ 00771900 ////

undefined4 __thiscall FUN_00771900(void *this,float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = (float)(int)ROUND((((DAT_0105c400 - 4.0) - *(float *)(*(int *)((int)this + 0x700) + 0x108)
                             ) / *(float *)((int)this + 0x3a4)) * 100.0);
  iVar2 = *(int *)((int)this + 0x3a8) + (int)ROUND(fVar1 * param_1);
  if ((iVar2 <= *(int *)((int)this + 0x3a0)) &&
     (*(int *)((int)this + 0x3a0) <= (int)ROUND(fVar1 * param_2) + 1 + iVar2)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_007719e0 @ 007719e0 ////

void __fastcall FUN_007719e0(void *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_EDX;
  
  if (((((*(char *)((int)param_1 + 0x348) != '\0') || (DAT_0104e4d8 != 0)) ||
       (*(char *)((int)param_1 + 0x349) != '\0')) || ((DAT_0104e3cc != '\0' && (DAT_0104e3e8 != 0)))
      ) || ((DAT_0104e458 != 0 && (bVar3 = FUN_0076e590(DAT_0104e458), bVar3)))) {
    *(undefined1 *)((int)param_1 + 0x456) = 0;
  }
  iVar4 = FUN_0073e7c0(*(int *)((int)param_1 + 0x580));
  iVar5 = FUN_0073e7c0(*(int *)((int)param_1 + 0x568));
  if (((*(char *)((int)param_1 + 0x456) != '\0') && (*(int *)((int)param_1 + 0x368) == 1)) ||
     ((iVar4 == 3 || (iVar5 == 3)))) {
    fVar1 = 0.0;
    fVar2 = 0.95;
    if (iVar5 == 3) {
      fVar1 = 0.05;
      fVar2 = 1.0;
    }
    uVar6 = FUN_00771900(param_1,fVar1 + 0.01,fVar2 - 0.01);
    if ((char)uVar6 == '\0') {
      iVar5 = FUN_00771490((int)param_1);
      iVar4 = extraout_EDX;
      if (iVar5 <= extraout_EDX) {
        iVar4 = FUN_00771490((int)param_1);
      }
      *(int *)((int)param_1 + 0x3a8) = iVar4;
      *(undefined4 *)((int)param_1 + 0x3ac) = 0xffffffff;
    }
  }
  return;
}


//// FUNCTION FUN_00771b90 @ 00771b90 ////

void __fastcall FUN_00771b90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4ec0c;
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


//// FUNCTION FUN_00771e00 @ 00771e00 ////

undefined4 * __thiscall FUN_00771e00(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x60),*(uint *)((int)this + 100));
  return param_1;
}


//// FUNCTION FUN_00771e50 @ 00771e50 ////

void __fastcall FUN_00771e50(int param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  float10 fVar6;
  wchar_t *in_stack_fffffe1c;
  uint in_stack_fffffe20;
  uint in_stack_fffffe24;
  void *in_stack_fffffe3c;
  undefined4 in_stack_fffffe40;
  uint in_stack_fffffe44;
  wchar_t *local_190;
  uint local_18c;
  uint local_188;
  undefined1 local_184;
  undefined1 uStack_183;
  undefined1 *local_170;
  int local_16c;
  int local_168;
  undefined1 *local_164;
  undefined4 local_160;
  uint local_15c;
  undefined1 local_158 [20];
  void *local_144;
  int local_140;
  uint local_13c;
  void *local_124 [2];
  uint local_11c;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd925d;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x370) != 0) {
    ExceptionList = &local_c;
    local_168 = param_1;
    FUN_00559fb0(local_e4);
    local_190 = (wchar_t *)&local_184;
    local_4 = 0;
    local_184 = 0;
    local_18c = 0;
    local_188 = 0x14;
    _strncpy((char *)local_190,"postproc/titles",0xf);
    local_18c = 0xf;
    *(char *)((int)local_190 + 0xf) = '\0';
    local_4._0_1_ = 1;
    FUN_0055be10(local_e4,&local_190,'\0');
    if (0x14 < local_188) {
                    /* WARNING: Subroutine does not return */
      _free(local_190);
    }
    local_164 = local_158;
    local_158[0] = 0;
    local_160 = 0;
    local_15c = 0x14;
    FUN_004015d0(&local_164,*(char **)(DAT_0104e4a8 + 0xdc),*(uint *)(DAT_0104e4a8 + 0xe0));
    local_4._0_1_ = 2;
    uVar1 = FUN_00558a50(local_e4,&local_164,(undefined4 *)0x1);
    if ((char)uVar1 != '\0') {
      FUN_004073f0(&local_164,"\\",1);
      sVar2 = _sprintf((char *)local_124,(char *)&param_2_00d1b93c);
      FUN_004073f0(&local_164,(char *)local_124,sVar2);
      uVar1 = FUN_00558a50(local_e4,&local_164,(undefined4 *)0x1);
      if ((char)uVar1 != '\0') {
        local_190 = (wchar_t *)&local_184;
        local_184 = 0;
        local_18c = 0;
        local_188 = 0x14;
        _strncpy((char *)local_190,"Music",5);
        local_18c = 5;
        *(char *)((int)local_190 + 5) = '\0';
        local_4._0_1_ = 3;
        FUN_005584e0(local_e4,&local_144,&local_190);
        if (0x14 < local_188) {
                    /* WARNING: Subroutine does not return */
          _free(local_190);
        }
        if (local_140 != 0) {
          local_190 = (wchar_t *)&local_184;
          local_184 = 0;
          uStack_183 = 0;
          local_18c = 0;
          local_188 = 10;
          uVar3 = FUN_00ace02d(L"data\\audio\\music\\");
          FUN_004036d0(&local_190,L"data\\audio\\music\\",uVar3);
          local_4._0_1_ = 6;
          puVar4 = FUN_00568790(local_124,&local_144);
          FUN_0040cae0(&local_190,(wchar_t *)*puVar4,puVar4[1]);
          if (10 < local_11c) {
                    /* WARNING: Subroutine does not return */
            _free(local_124[0]);
          }
          piVar5 = FUN_00568870(local_124,&local_190);
          local_4._0_1_ = 7;
          fVar6 = FUN_009b0660(*piVar5);
          local_170 = (undefined1 *)(float)(fVar6 * (float10)1000.0);
          local_16c = (int)ROUND((float)local_170);
          local_4._0_1_ = 6;
          if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
            _free(local_124[0]);
          }
          local_170 = &stack0xfffffe1c;
          FUN_00568790((undefined4 *)&stack0xfffffe1c,&local_144);
          FUN_0075b400((undefined4 *)&stack0xfffffe3c,in_stack_fffffe1c,in_stack_fffffe20,
                       in_stack_fffffe24);
          puVar4 = FUN_00750430(*(void **)(local_168 + 0x370),0,local_16c,in_stack_fffffe3c,
                                in_stack_fffffe40,in_stack_fffffe44);
          FUN_004036d0(puVar4 + 0x1d,local_190,local_18c);
          if (10 < local_188) {
                    /* WARNING: Subroutine does not return */
            _free(local_190);
          }
        }
        if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
          _free(local_144);
        }
      }
    }
    if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
      _free(local_164);
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007721c0 @ 007721c0 ////

int __fastcall FUN_007721c0(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9288;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d(L"start");
  FUN_004036d0(&local_2c,L"start",uVar1);
  local_4 = 0;
  uVar2 = FUN_00561930(param_1,&local_2c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_24 = 10;
  local_28 = 0;
  local_20[0] = 0;
  if ((char)uVar2 != '\0') {
    uVar1 = FUN_00ace02d(L"start");
    FUN_004036d0(&local_2c,L"start",uVar1);
    local_4 = 1;
    iVar3 = FUN_00561ca0(param_1,&local_2c,0);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return iVar3;
  }
  uVar1 = FUN_00ace02d((short *)&DAT_00d4ec30);
  FUN_004036d0(&local_2c,L"pos",uVar1);
  local_4 = 2;
  fVar4 = FUN_00561b60(param_1,&local_2c,0.0);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return (int)ROUND((float)*(int *)(DAT_0104e478 + 0x39c) * (float)fVar4);
}


//// FUNCTION FUN_00772330 @ 00772330 ////

int __fastcall FUN_00772330(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd92b8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d(L"duration");
  FUN_004036d0(&local_2c,L"duration",uVar1);
  local_4 = 0;
  uVar2 = FUN_00561930(param_1,&local_2c);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_24 = 10;
  local_28 = 0;
  local_20[0] = 0;
  if ((char)uVar2 != '\0') {
    uVar1 = FUN_00ace02d(L"duration");
    FUN_004036d0(&local_2c,L"duration",uVar1);
    local_4 = 1;
    iVar3 = FUN_00561ca0(param_1,&local_2c,0);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return iVar3;
  }
  uVar1 = FUN_00ace02d(L"length");
  FUN_004036d0(&local_2c,L"length",uVar1);
  local_4 = 2;
  fVar4 = FUN_00561b60(param_1,&local_2c,0.0);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return (int)ROUND((float)*(int *)(DAT_0104e478 + 0x39c) * (float)fVar4);
}


//// FUNCTION FUN_007724a0 @ 007724a0 ////

void __thiscall FUN_007724a0(void *this,float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined4 *puVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = DAT_0104e4d8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd92f4;
  local_c = ExceptionList;
  puVar3 = (undefined4 *)0x0;
  if (DAT_0104e394 == 0) {
    if (ABS(DAT_0104cce4 - param_1) <= 32.0) {
      if (DAT_0104e4d8 != (undefined4 *)0x0) {
        iVar1 = DAT_0104e4d8[0x12];
        ExceptionList = &local_c;
        DAT_0104e4d8[0x12] = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          (**(code **)*puVar2)();
        }
        (*(code *)DAT_0104e4c4[1])();
        DAT_0104e4d8 = (undefined4 *)0x0;
        (*(code *)*DAT_0104e4c4)();
      }
    }
    else if (DAT_0104e4d8 == (undefined4 *)0x0) {
      ExceptionList = &local_c;
      this_00 = operator_new(0x360);
      local_4 = 0;
      if (this_00 != (void *)0x0) {
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"ui/button_blank.dds",0x13);
        local_28 = 0x13;
        local_2c[0x13] = '\0';
        local_4 = CONCAT31(local_4._1_3_,1);
        puVar3 = FUN_0069d820(this_00,&local_2c,0,0,0x3f800000,0x3f800000);
      }
      local_4 = 2;
      (*(code *)DAT_0104e4c4[1])();
      DAT_0104e4d8 = puVar3;
      (*(code *)*DAT_0104e4c4)();
      local_4 = 0xffffffff;
      if ((this_00 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      (**(code **)(*(int *)this + 0xc))();
      ExceptionList = pvStack_14;
      return;
    }
  }
  else if (DAT_0104e4d8 != (undefined4 *)0x0) {
    iVar1 = DAT_0104e4d8[0x12];
    ExceptionList = &local_c;
    DAT_0104e4d8[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)();
    }
    (*(code *)DAT_0104e4c4[1])();
    DAT_0104e4d8 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e4c4)();
    ExceptionList = local_c;
    return;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007726a0 @ 007726a0 ////

void __fastcall FUN_007726a0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (DAT_0105c400 - 4.0) - *(float *)(*(int *)(param_1 + 0x700) + 0x108);
  fVar2 = (float)*(int *)(param_1 + 0x39c) * *(float *)(param_1 + 0x3a4) * 0.01;
  if ((fVar2 <= 0.0) || (fVar2 = fVar1 / fVar2, 1.0 <= fVar2)) {
    fVar2 = 1.0;
  }
  (**(code **)(**(int **)(param_1 + 0x4d8) + 0x74))(fVar2 * fVar1,DAT_00e595f4);
  return;
}


//// FUNCTION FUN_00772710 @ 00772710 ////

void __fastcall FUN_00772710(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x39c) < 1) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = ((float)*(int *)(param_1 + 0x3a8) / (float)*(int *)(param_1 + 0x39c)) *
            ((DAT_0105c400 - 4.0) - *(float *)(*(int *)(param_1 + 0x700) + 0x108));
  }
  (**(code **)(**(int **)(param_1 + 0x4d8) + 0x5c))(2,*(undefined4 *)(param_1 + 0x700),-fVar1);
  FUN_007726a0(param_1);
  return;
}


//// FUNCTION FUN_00772780 @ 00772780 ////

void __fastcall FUN_00772780(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x349) == '\0') {
    iVar3 = FUN_0073e7c0(*(int *)(param_1 + 0x4d8));
    if (iVar3 == 3) {
      *(undefined1 *)(param_1 + 0x349) = 1;
      *(float *)(param_1 + 0x3c0) = DAT_0104cce0 - *(float *)(*(int *)(param_1 + 0x4d8) + 0xc0);
    }
    return;
  }
  cVar2 = FUN_00553f70(0x73);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x349) = 0;
    return;
  }
  fVar1 = (DAT_0105c400 - 4.0) - *(float *)(*(int *)(param_1 + 0x700) + 0x108);
  local_8 = (DAT_0104cce0 - *(float *)(*(int *)(param_1 + 0x700) + 0x108)) -
            *(float *)(param_1 + 0x3c0);
  if (local_8 < 0.0) {
    local_8 = 0.0;
    *(float *)(param_1 + 0x3c0) = DAT_0104cce0 - *(float *)(*(int *)(param_1 + 0x4d8) + 0xc0);
  }
  fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x4d8) + 0x10))();
  if ((float10)fVar1 < fVar4 + (float10)local_8) {
    fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x4d8) + 0x10))();
    local_8 = (float)((float10)fVar1 - fVar4);
    *(float *)(param_1 + 0x3c0) = DAT_0104cce0 - *(float *)(*(int *)(param_1 + 0x4d8) + 0xc0);
  }
  (**(code **)(**(int **)(param_1 + 0x4d8) + 0x5c))(2,*(undefined4 *)(param_1 + 0x700),-local_8);
  FUN_007726a0(param_1);
  FUN_00771520(param_1);
  *(undefined1 *)(param_1 + 0x452) = 1;
  return;
}


//// FUNCTION FUN_007728e0 @ 007728e0 ////

void __fastcall FUN_007728e0(int param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  int extraout_ECX;
  
  fVar3 = DAT_0104cce0;
  if (*(char *)(param_1 + 0x348) != '\0') {
    fVar1 = *(float *)(*(int *)(param_1 + 0x700) + 0x108);
    FUN_00771620(param_1);
    uVar2 = *(uint *)(extraout_ECX + 0x3a0);
    uVar4 = *(int *)(extraout_ECX + 0x3a8) +
            (int)ROUND(((fVar3 - fVar1) / *(float *)(extraout_ECX + 0x3a4)) * 100.0);
    uVar4 = uVar4 & ((int)uVar4 < 1) - 1;
    if ((int)*(uint *)(extraout_ECX + 0x39c) <= (int)uVar4) {
      uVar4 = *(uint *)(extraout_ECX + 0x39c);
    }
    *(uint *)(extraout_ECX + 0x3a0) = uVar4;
    if (uVar4 != uVar2) {
      *(undefined1 *)(extraout_ECX + 0x452) = 1;
    }
  }
  return;
}


//// FUNCTION FUN_00772970 @ 00772970 ////

void __fastcall FUN_00772970(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  uint uVar4;
  
  if (0.0 <= (float)*(int *)(param_1 + 0x3ac)) {
    FUN_00ace9b0();
    iVar1 = FUN_00771490(param_1);
    iVar3 = extraout_EDX;
    if (iVar1 <= extraout_EDX) {
      iVar3 = FUN_00771490(param_1);
    }
    *(int *)(param_1 + 0x3a8) = iVar3;
    uVar2 = iVar3 - *(int *)(param_1 + 0x3ac);
    uVar4 = (int)uVar2 >> 0x1f;
    if ((int)((uVar2 ^ uVar4) - uVar4) < 1) {
      FUN_00771520(param_1);
    }
  }
  if (*(int *)(param_1 + 0x39c) == 0) {
    iVar3 = FUN_00771490(param_1);
    if (iVar3 < 1) {
      iVar3 = FUN_00771490(param_1);
    }
    else {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x3a8) = iVar3;
    *(undefined4 *)(param_1 + 0x3ac) = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_00772a40 @ 00772a40 ////

void __fastcall FUN_00772a40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (DAT_0104e4a8 != 0) {
    iVar1 = *(int *)(param_1 + 0x3a0);
    iVar2 = *(int *)(param_1 + 0x3a8);
    puVar3 = (undefined4 *)(param_1 + 0x36c);
    iVar4 = 4;
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        FUN_0074f670((void *)*puVar3,iVar1);
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_00768490(*(void **)(param_1 + 0x7c0),iVar2);
    FUN_00768490(*(void **)(param_1 + 0x7f0),iVar2);
    FUN_00768490(*(void **)(param_1 + 0x7d8),iVar2);
    FUN_00768490(*(void **)(param_1 + 0x808),iVar2);
    if (DAT_0104e458 != (void *)0x0) {
      FUN_0076e3c0(DAT_0104e458,iVar2,'\0');
    }
  }
  return;
}


//// FUNCTION FUN_00772ad0 @ 00772ad0 ////

void __fastcall FUN_00772ad0(int param_1)

{
  wchar_t *_Format;
  wchar_t *_Format_00;
  wchar_t *_Format_01;
  float fVar1;
  float fVar2;
  void *_Memory;
  size_t sVar3;
  undefined4 *puVar4;
  undefined2 in_FPUControlWord;
  float10 extraout_ST0;
  ulonglong uVar5;
  undefined2 *local_34c;
  uint local_348;
  undefined4 local_344;
  undefined2 local_340 [10];
  void *local_32c [2];
  uint local_324;
  wchar_t local_30c [64];
  wchar_t local_28c [64];
  wchar_t local_20c [64];
  wchar_t local_18c [64];
  wchar_t local_10c [64];
  wchar_t local_8c [62];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd930b;
  pvStack_c = ExceptionList;
  fVar2 = (float)*(int *)(param_1 + 0x3a0) * 0.001;
  _Format = (wchar_t *)(int)ROUND(fVar2 * 0.0016666667);
  ExceptionList = &pvStack_c;
  uVar5 = FUN_00acd42c();
  fVar1 = (float)(extraout_ST0 - (float10)((int)(wchar_t *)uVar5 * 10));
  _Format_00 = (wchar_t *)(int)ROUND(fVar1);
  fVar1 = fVar1 - (float)(int)_Format_00;
  _Format_01 = (wchar_t *)(int)ROUND(fVar1 * 10.0);
  _Memory = (void *)((fVar1 - (float)(int)_Format_01 * 0.1) * 100.0);
  local_34c = local_340;
  local_340[0] = 0;
  local_348 = 0;
  local_344 = 10;
  local_4 = 0;
  DAT_0104e5c0 = in_FPUControlWord;
  sVar3 = _swprintf(local_10c,0xd18f7c,_Format);
  FUN_0040cae0(&local_34c,local_10c,sVar3);
  sVar3 = _swprintf(local_20c,0xd18f7c,
                    (wchar_t *)(int)ROUND((fVar2 - (float)((int)_Format * 600)) * 0.016666668));
  FUN_0040cae0(&local_34c,local_20c,sVar3);
  sVar3 = FUN_00ace02d((short *)&DAT_00d3e9a4);
  FUN_0040cae0(&local_34c,L":",sVar3);
  sVar3 = _swprintf(local_30c,0xd18f7c,(wchar_t *)uVar5);
  FUN_0040cae0(&local_34c,local_30c,sVar3);
  sVar3 = _swprintf(local_28c,0xd18f7c,_Format_00);
  FUN_0040cae0(&local_34c,local_28c,sVar3);
  sVar3 = FUN_00ace02d((short *)&DAT_00d3e9a4);
  FUN_0040cae0(&local_34c,L":",sVar3);
  sVar3 = _swprintf(local_18c,0xd18f7c,_Format_01);
  FUN_0040cae0(&local_34c,local_18c,sVar3);
  sVar3 = _swprintf(local_8c,0xd18f7c,(wchar_t *)(int)ROUND((float)_Memory));
  FUN_0040cae0(&local_34c,local_8c,sVar3);
  puVar4 = FUN_004211c0(&local_34c,local_32c,0,8);
  FUN_004036d0(&local_34c,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_324) {
                    /* WARNING: Subroutine does not return */
    _free(local_32c[0]);
  }
  (**(code **)(**(int **)(param_1 + 0x790) + 0x54))(&local_34c);
  if (10 < local_348) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00772df0 @ 00772df0 ////

void __fastcall FUN_00772df0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd932b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009b0e40(0);
  puVar1 = *(undefined4 **)(param_1 + 0x460);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0074e760(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  puVar1 = operator_new(0xd755c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0074e740(puVar1);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x460) = uVar2;
  FUN_009b0e40(0x771250);
  *(undefined1 *)(param_1 + 0x45a) = 0;
  *(undefined1 *)(param_1 + 0x45b) = 1;
  uVar3 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)(param_1 + 0x3bc) = (int)uVar3;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00772eb0 @ 00772eb0 ////

void FUN_00772eb0(void *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9350;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_2,(int)pcVar2 - (int)(param_2 + 1));
  local_4 = 0;
  FUN_0069ee30(param_1,1,&local_2c,0,0,0x3f800000,0x3f800000);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_2,(int)pcVar2 - (int)(param_2 + 1));
  local_4 = 1;
  FUN_0069ee30(param_1,0,&local_2c,0,0,0x3f800000,0x3f800000);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007731d0 @ 007731d0 ////

void __fastcall FUN_007731d0(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x459) == '\0') {
    *(undefined1 *)(param_1 + 0x459) = 1;
    if (*(int **)(param_1 + 0x34c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34c) + 4))();
      *(undefined4 *)(param_1 + 0x34c) = 0;
    }
    piVar1 = FUN_00a34900();
    *(int **)(param_1 + 0x34c) = piVar1;
    (**(code **)(*piVar1 + 8))();
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x3a0);
    FUN_00772eb0(*(void **)(param_1 + 0x658),"ui/postproc/postprod_track_record.dds");
  }
  return;
}


//// FUNCTION FUN_00773230 @ 00773230 ////

void __fastcall FUN_00773230(int *param_1)

{
  char cVar1;
  
  if (((undefined4 *)param_1[0x104] != (undefined4 *)0x0) &&
     (cVar1 = FUN_005ee930((undefined4 *)param_1[0x104]), cVar1 == '\0')) {
    return;
  }
  if (param_1[0x109] != 0) {
    return;
  }
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_00773260 @ 00773260 ////

void FUN_00773260(void)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd93a8;
  local_c = ExceptionList;
  if (DAT_0104e4a8 != 0) {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_6c,"pack_",5);
    local_68 = 5;
    local_6c[5] = '\0';
    local_4 = 0;
    sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c);
    FUN_004073f0(&local_6c,local_4c,sVar1);
    puVar2 = &stack0xffffff74;
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffff68,local_6c,local_68);
    FUN_007506a0(puVar2,uVar3,uVar4);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00773360 @ 00773360 ////

bool __fastcall FUN_00773360(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x457) != '\0') {
    iVar1 = *(int *)(param_1 + 0x3a0);
    iVar2 = FUN_0074b390();
    iVar2 = FUN_007487e0(iVar2);
    return iVar1 < iVar2;
  }
  return false;
}


//// FUNCTION FUN_00773390 @ 00773390 ////

bool __fastcall FUN_00773390(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x458) == '\0') {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x39c);
  iVar2 = *(int *)(param_1 + 0x3a0);
  if (*(char *)(param_1 + 0x457) != '\0') {
    iVar3 = FUN_0074b390();
    iVar3 = FUN_00748800(iVar3);
    return iVar1 - iVar3 <= iVar2;
  }
  return iVar1 <= iVar2;
}


//// FUNCTION FUN_007733e0 @ 007733e0 ////

void __fastcall FUN_007733e0(int param_1)

{
  FUN_009750b0((void *)0x0);
  FUN_004015d0((void *)(param_1 + 1000),"",0);
  *(undefined4 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 0x3e6) = 0;
  return;
}


//// FUNCTION FUN_00773420 @ 00773420 ////

void __fastcall FUN_00773420(int param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd93c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x454) = 1;
  if (DAT_0104e4a8 != (void *)0x0) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    puVar1 = FUN_00771e00(DAT_0104e4a8,local_2c);
    sVar2 = FUN_00ace02d(L"<T1 COLOR = #FFFFFF>");
    FUN_0040cae0(&local_4c,L"<T1 COLOR = #FFFFFF>",sVar2);
    FUN_0040cae0(&local_4c,(wchar_t *)*puVar1,puVar1[1]);
    sVar2 = FUN_00ace02d(L"*</T1>");
    FUN_0040cae0(&local_4c,L"*</T1>",sVar2);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    (**(code **)(**(int **)(param_1 + 0x478) + 0x54))(&local_4c);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00773510 @ 00773510 ////

void __fastcall FUN_00773510(int param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  undefined4 *unaff_EBX;
  undefined1 *puVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_bc [2];
  wchar_t *local_b4;
  uint local_b0;
  undefined4 local_ac;
  wchar_t local_a8 [10];
  wchar_t *local_94;
  uint local_90;
  undefined4 auStack_7c [12];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd940c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)FUN_00567ff0(local_4c);
  sVar2 = FUN_00ace02d(L"\\The Movies\\Movie Sounds\\Dialogue.wav");
  FUN_0040cae0(puVar1,L"\\The Movies\\Movie Sounds\\Dialogue.wav",sVar2);
  local_b4 = local_a8;
  local_a8[0] = L'\0';
  local_b0 = 0;
  local_ac = 10;
  FUN_004036d0(&local_b4,(wchar_t *)*puVar1,puVar1[1]);
  local_4 = 0;
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  pwVar7 = (wchar_t *)&stack0xffffff1c;
  uVar8 = 0;
  uVar9 = 10;
  FUN_004036d0(&stack0xffffff10,local_b4,local_b0);
  puVar1 = FUN_00569600(local_2c,pwVar7,uVar8,uVar9);
  FUN_004036d0(&local_b4,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  iVar3 = FUN_00ace02d((short *)&DAT_00d2e120);
  uVar8 = FUN_00420300(&local_b4,(short *)&DAT_00d2e120,0xffffffff,iVar3);
  FUN_004211c0(&local_b4,&local_94,uVar8,0xffffffff);
  iVar3 = *(int *)(param_1 + 0x3a0);
  puVar5 = &stack0xffffff14;
  uVar6 = 0;
  uVar8 = 10;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004036d0(&stack0xffffff08,local_94,local_90);
  puVar1 = FUN_00750430(*(void **)(param_1 + 0x378),*(int *)(param_1 + 0x3b4),
                        iVar3 - *(int *)(param_1 + 0x3b4),puVar5,uVar6,uVar8);
  (**(code **)(**(int **)(param_1 + 0x34c) + 0x18))();
  this = operator_new(0x24);
  pvStack_c._0_1_ = 2;
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_0074cd60(this,unaff_EBX,(uint)&stack0xffffff08);
  }
  puVar4[6] = 1;
  pvStack_c._0_1_ = 1;
  uVar6 = (**(code **)(**(int **)(param_1 + 0x34c) + 0x24))();
  puVar4[4] = uVar6;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[7] = 0x3f800000;
  FUN_0074e920(puVar1,puVar4);
  uVar8 = thunk_FUN_00bce650();
  puVar1 = operator_new(uVar8);
  FUN_00bb93b0(puVar1,uVar8,puVar4[6],puVar4[4],puVar4[1]);
  FUN_009d3b00(auStack_7c);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  FUN_009d4640(auStack_7c,local_bc,2);
  FUN_009d3530(auStack_7c,puVar1,uVar8);
  FUN_009d3530(auStack_7c,(void *)*puVar4,puVar4[1]);
  FUN_009d34d0(auStack_7c);
                    /* WARNING: Subroutine does not return */
  _free(puVar1);
}


//// FUNCTION FUN_007737d0 @ 007737d0 ////

void __fastcall FUN_007737d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(param_1 + 0x36c);
  iVar4 = 4;
  do {
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


//// FUNCTION FUN_00773800 @ 00773800 ////

void __thiscall FUN_00773800(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_007535e0((int)param_1);
  *(int *)((int)this + 0x39c) = *(int *)((int)this + 0x39c) + iVar1 * -100;
  FUN_007567c0(DAT_0104e4a8,param_1);
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined1 *)((int)this + 0x45a) = 0;
  *(undefined1 *)((int)this + 0x45b) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  FUN_00773420((int)this);
  return;
}


//// FUNCTION FUN_00773850 @ 00773850 ////

void __fastcall FUN_00773850(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d29d00;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007738b0 @ 007738b0 ////

void __thiscall FUN_007738b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4ed58;
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


//// FUNCTION FUN_00773900 @ 00773900 ////

void __fastcall FUN_00773900(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4ed58;
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


//// FUNCTION FUN_007739a0 @ 007739a0 ////

void __fastcall FUN_007739a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4ed68;
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


//// FUNCTION FUN_00773ab0 @ 00773ab0 ////

uint __fastcall FUN_00773ab0(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *_Source;
  int *piVar7;
  uint local_1f0;
  int local_1ec;
  undefined2 local_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  char local_1d8 [20];
  char *local_1c4;
  undefined4 local_1c0;
  uint local_1bc;
  char local_1b8 [20];
  char *local_1a4;
  uint local_1a0;
  uint local_19c;
  char local_198 [20];
  char *local_184;
  undefined4 local_180;
  uint local_17c;
  char local_178 [20];
  undefined4 local_164 [17];
  undefined1 local_120 [4];
  int local_11c;
  int local_118;
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9457;
  local_c = ExceptionList;
  local_1f0 = 0;
  if (DAT_0104e4a8 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  local_1ec = param_1;
  __getcwd(local_110,0x104);
  local_1c4 = local_1b8;
  local_1b8[0] = '\0';
  local_1c0 = 0;
  local_1bc = 0x14;
  _strncpy(local_1c4,"",0);
  local_1c0 = 0;
  *local_1c4 = '\0';
  pcVar2 = local_110;
  local_4 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_1c4,local_110,(int)pcVar2 - (int)(local_110 + 1));
  FUN_004073f0(&local_1c4,"\\data\\textures\\",0xf);
  local_184 = local_178;
  local_178[0] = '\0';
  local_180 = 0;
  local_17c = 0x14;
  _strncpy(local_184,"",0);
  local_180 = 0;
  *local_184 = '\0';
  pcVar2 = local_110;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_184,local_110,(int)pcVar2 - (int)(local_110 + 1));
  FUN_004073f0(&local_184,"\\data\\meshes\\",0xd);
  local_1e4 = local_1d8;
  local_1d8[0] = '\0';
  local_1e0 = 0;
  local_1dc = 0x14;
  _strncpy(local_1e4,"",0);
  local_1e0 = 0;
  *local_1e4 = '\0';
  pcVar2 = local_110;
  local_4._0_1_ = 2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_1e4,local_110,(int)pcVar2 - (int)(local_110 + 1));
  FUN_004073f0(&local_1e4,"\\data\\animations\\",0x11);
  FUN_009c89a0(local_164);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_009ca9d0(local_164,"*.dds",local_1c4,(undefined1 *)0x1);
  FUN_009ca9d0(local_164,"*.msh",local_184,(undefined1 *)0x1);
  FUN_009ca9d0(local_164,"*.anm",local_1e4,(undefined1 *)0x1);
  if ((local_11c != 0) && (local_118 - local_11c >> 2 != 0)) {
    local_1f0 = 0x20;
  }
  if (DAT_010b956d != '\0') {
    local_1f0 = local_1f0 | 0x10;
  }
  uVar6 = 0;
  if (*(int *)(DAT_0104e4a8 + 0xd0) != 0) {
    do {
      uVar5 = *(int *)(DAT_0104e4a8 + 0xcc) + uVar6;
      uVar3 = uVar5 >> 2;
      iVar4 = uVar3 * -4;
      if (*(uint *)(DAT_0104e4a8 + 200) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(DAT_0104e4a8 + 200);
      }
      iVar4 = *(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar3 * 4) + (uVar5 + iVar4) * 4);
      _Source = (char *)(iVar4 + 0xd0);
      local_1a4 = local_198;
      local_198[0] = '\0';
      local_1a0 = 0;
      local_19c = 0x14;
      pcVar2 = _Source;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = (int)pcVar2 - (iVar4 + 0xd1);
      if (0x13 < uVar3) {
        local_19c = uVar3 + 0x20 & 0xffffffe0;
        local_1a4 = _malloc(local_19c);
      }
      _strncpy(local_1a4,_Source,uVar3);
      local_1a4[uVar3] = '\0';
      local_4 = CONCAT31(local_4._1_3_,4);
      local_1a0 = uVar3;
      if ((uVar3 != 0) && (pcVar2 = FUN_009c84e0((int)local_120,local_1a4), pcVar2 != (char *)0x0))
      {
        local_1f0 = local_1f0 | 8;
      }
      if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
        _free(local_1a4);
      }
      uVar6 = uVar6 + 1;
      param_1 = local_1ec;
    } while (uVar6 < *(uint *)(DAT_0104e4a8 + 0xd0));
  }
  iVar4 = *(int *)(param_1 + 0x36c);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x68) != 0)) &&
     (*(int *)(iVar4 + 0x6c) - *(int *)(iVar4 + 0x68) >> 2 != 0)) {
    local_1f0 = local_1f0 | 2;
  }
  iVar4 = *(int *)(param_1 + 0x370);
  if ((iVar4 != 0) && (piVar7 = *(int **)(iVar4 + 0x68), piVar7 != *(int **)(iVar4 + 0x6c))) {
    do {
      local_1ec = 0;
      local_1e8 = 0;
      __wsplitpath(*(wchar_t **)(*piVar7 + 0x74),(wchar_t *)&local_1ec,(wchar_t *)0x0,(wchar_t *)0x0
                   ,(wchar_t *)0x0);
      iVar4 = FUN_00ace02d((short *)&local_1ec);
      if (iVar4 != 0) {
        local_1f0 = local_1f0 | 4;
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != *(int **)(*(int *)(param_1 + 0x370) + 0x6c));
  }
  iVar4 = *(int *)(param_1 + 0x374);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x68) != 0)) &&
     (*(int *)(iVar4 + 0x6c) - *(int *)(iVar4 + 0x68) >> 2 != 0)) {
    local_1f0 = local_1f0 | 4;
  }
  iVar4 = *(int *)(param_1 + 0x378);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x68) != 0)) &&
     (*(int *)(iVar4 + 0x6c) - *(int *)(iVar4 + 0x68) >> 2 != 0)) {
    local_1f0 = local_1f0 | 4;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_009c8560(local_164);
  if (local_1dc < 0x15) {
    if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
      _free(local_184);
    }
    if (local_1bc < 0x15) {
      ExceptionList = local_c;
      return local_1f0;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_1c4);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_1e4);
}


//// FUNCTION FUN_00773f30 @ 00773f30 ////

int __thiscall FUN_00773f30(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar4 = *(uint *)(DAT_0104e4a8 + 0xcc) >> 2;
    do {
      uVar2 = uVar4;
      if (*(uint *)(DAT_0104e4a8 + 200) <= uVar4) {
        uVar2 = uVar4 - *(uint *)(DAT_0104e4a8 + 200);
      }
      param_1 = *(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar2 * 4) +
                        (*(uint *)(DAT_0104e4a8 + 0xcc) + uVar4 * -4) * 4);
    } while (param_1 == 0);
  }
  uVar4 = *(uint *)((int)this + 0x434);
  uVar2 = *(int *)((int)this + 0x438) + uVar4;
  while( true ) {
    if (uVar4 == uVar2) {
      return 0;
    }
    uVar3 = uVar4 >> 2;
    iVar1 = uVar3 * -4;
    if (*(uint *)((int)this + 0x430) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 0x430);
    }
    iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x42c) + uVar3 * 4) + (uVar4 + iVar1) * 4);
    if ((*(int *)(iVar1 + 4) == param_1) && (*(char *)(iVar1 + 0x48) == '\0')) break;
    uVar4 = uVar4 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_00774040 @ 00774040 ////

int FUN_00774040(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_0104e4a8;
  uVar5 = *(uint *)(DAT_0104e4a8 + 0xcc);
  iVar7 = DAT_0104e4a8 + 0xc0;
  iVar6 = 0;
  while( true ) {
    if ((iVar7 == DAT_0104e4a8 + 0xc0) &&
       (uVar5 == *(int *)(DAT_0104e4a8 + 0xd0) + *(int *)(DAT_0104e4a8 + 0xcc))) {
      return 0;
    }
    uVar3 = uVar5 >> 2;
    iVar4 = uVar3 * -4;
    uVar1 = *(uint *)(iVar2 + 200);
    if (uVar1 <= uVar3) {
      uVar3 = uVar3 - uVar1;
    }
    iVar4 = FUN_007535e0(*(int *)(*(int *)(*(int *)(iVar2 + 0xc4) + uVar3 * 4) + (uVar5 + iVar4) * 4
                                 ));
    if (param_1 < iVar6 + iVar4) break;
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + iVar4;
  }
  return param_1 - iVar6;
}


//// FUNCTION FUN_007740d0 @ 007740d0 ////

int FUN_007740d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar4 = DAT_0104e4a8;
  if (DAT_0104e4a8 == 0) {
    return 0;
  }
  uVar8 = *(uint *)(DAT_0104e4a8 + 0xcc);
  iVar1 = DAT_0104e4a8 + 0xc0;
  iVar7 = 0;
  while( true ) {
    if ((iVar1 == DAT_0104e4a8 + 0xc0) &&
       (uVar8 == *(int *)(DAT_0104e4a8 + 0xd0) + *(int *)(DAT_0104e4a8 + 0xcc))) {
      return 0;
    }
    uVar5 = uVar8 >> 2;
    iVar3 = uVar5 * -4;
    uVar2 = *(uint *)(iVar4 + 200);
    if (uVar2 <= uVar5) {
      uVar5 = uVar5 - uVar2;
    }
    iVar3 = *(int *)(*(int *)(*(int *)(iVar4 + 0xc4) + uVar5 * 4) + (uVar8 + iVar3) * 4);
    *(int *)(iVar3 + 0x15c) = iVar7;
    iVar6 = FUN_007535e0(iVar3);
    iVar7 = iVar7 + iVar6;
    if (param_1 < iVar7) break;
    uVar8 = uVar8 + 1;
  }
  return iVar3;
}


//// FUNCTION FUN_00774160 @ 00774160 ////

void __fastcall FUN_00774160(int param_1)

{
  if (*(char *)(param_1 + 0x459) != '\0') {
    FUN_009b0e40(0);
    *(undefined1 *)(param_1 + 0x459) = 0;
    FUN_00772eb0(*(void **)(param_1 + 0x658),"ui/postproc/postprod_track_recordoff.dds");
    if (*(int **)(param_1 + 0x34c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34c) + 0xc))();
      FUN_00773510(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_007741b0 @ 007741b0 ////

void __fastcall FUN_007741b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *this;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 0x39c) = 0;
  iVar5 = DAT_0104e4a8;
  local_c = 0;
  if ((DAT_0104e4a8 != 0) && (DAT_0104e458 != 0)) {
    iVar6 = DAT_0104e4a8 + 0xc0;
    for (uVar7 = *(uint *)(DAT_0104e4a8 + 0xcc);
        (iVar6 != DAT_0104e4a8 + 0xc0 ||
        (uVar7 != *(int *)(DAT_0104e4a8 + 0xd0) + *(int *)(DAT_0104e4a8 + 0xcc))); uVar7 = uVar7 + 1
        ) {
      uVar2 = uVar7 >> 2;
      iVar4 = uVar2 * -4;
      uVar1 = *(uint *)(iVar5 + 200);
      if (uVar1 <= uVar2) {
        uVar2 = uVar2 - uVar1;
      }
      iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 0xc4) + uVar2 * 4) + (uVar7 + iVar4) * 4);
      *(undefined4 *)(iVar4 + 0x15c) = 0;
      iVar3 = FUN_007535e0(iVar4);
      this = (void *)FUN_0075aa20();
      iVar4 = FUN_0075a190(this,iVar4);
      if (iVar4 != 0) {
        uVar8 = FUN_00acd42c();
        iVar3 = (int)uVar8;
      }
      local_c = local_c + iVar3;
    }
    if (*(char *)(param_1 + 0x457) == '\0') {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0074b390();
      iVar5 = FUN_007487e0(iVar5);
    }
    if (*(char *)(param_1 + 0x457) == '\0') {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0074b390();
      iVar6 = FUN_00748800(iVar6);
    }
    *(int *)(param_1 + 0x39c) = local_c * 100 + iVar6 + iVar5;
  }
  return;
}


//// FUNCTION FUN_007742e0 @ 007742e0 ////

void __fastcall FUN_007742e0(int param_1)

{
  *(undefined1 *)(param_1 + 0x457) = 0;
  FUN_007741b0(param_1);
  *(undefined1 *)(param_1 + 0x45a) = 0;
  *(undefined1 *)(param_1 + 0x45b) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  FUN_00773420(param_1);
  return;
}


//// FUNCTION FUN_00774310 @ 00774310 ////

void __fastcall FUN_00774310(int param_1)

{
  *(undefined1 *)(param_1 + 0x458) = 0;
  FUN_007741b0(param_1);
  *(undefined1 *)(param_1 + 0x45a) = 0;
  *(undefined1 *)(param_1 + 0x45b) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  FUN_00773420(param_1);
  return;
}


//// FUNCTION FUN_00774340 @ 00774340 ////

void __fastcall FUN_00774340(int param_1)

{
  FUN_0074e970(*(int *)(param_1 + 0x374));
  FUN_0074e9b0(*(int *)(param_1 + 0x374));
  FUN_0074e970(*(int *)(param_1 + 0x378));
  FUN_0074e9b0(*(int *)(param_1 + 0x378));
  FUN_0074e970(*(int *)(param_1 + 0x370));
  FUN_0074e9b0(*(int *)(param_1 + 0x370));
  FUN_009b0e40(0);
  FUN_009b07a0(0);
  *(undefined1 *)(param_1 + 0x3e6) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  FUN_004015d0((void *)(param_1 + 1000),"",0);
  if (*(int *)(param_1 + 0x3e0) != 0) {
    FUN_009721f0(*(int *)(param_1 + 0x3e0));
  }
  if (*(char *)(param_1 + 0x459) != '\0') {
    FUN_009b0e40(0);
    *(undefined1 *)(param_1 + 0x459) = 0;
    FUN_00772eb0(*(void **)(param_1 + 0x658),"ui/postproc/postprod_track_recordoff.dds");
    if (*(int **)(param_1 + 0x34c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34c) + 0xc))();
      FUN_00773510(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00774420 @ 00774420 ////

void __fastcall FUN_00774420(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd949c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007741b0(param_1);
  FUN_007737d0(param_1);
  puVar3 = operator_new(0x8c);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00750240(puVar3);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x36c);
  local_4 = 0xffffffff;
  if (puVar2 != puVar3) {
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(param_1 + 0x36c) = puVar3;
  }
  puVar3 = operator_new(0x8c);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00750240(puVar3);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x374);
  local_4 = 0xffffffff;
  if (puVar2 != puVar3) {
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(param_1 + 0x374) = puVar3;
  }
  puVar3 = operator_new(0x8c);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00750240(puVar3);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x370);
  local_4 = 0xffffffff;
  if (puVar2 != puVar3) {
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(param_1 + 0x370) = puVar3;
  }
  puVar3 = operator_new(0x8c);
  local_4 = 3;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00750240(puVar3);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x378);
  local_4 = 0xffffffff;
  if (puVar2 != puVar3) {
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(param_1 + 0x378) = puVar3;
  }
  FUN_00768e10(*(void **)(param_1 + 0x7c0),*(int *)(param_1 + 0x36c));
  FUN_00768e10(*(void **)(param_1 + 0x7d8),*(int *)(param_1 + 0x374));
  FUN_00768e10(*(void **)(param_1 + 0x7f0),*(int *)(param_1 + 0x370));
  FUN_00768e10(*(void **)(param_1 + 0x808),*(int *)(param_1 + 0x378));
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x7f0) + 0x420) + 0x78) = 0;
  *(undefined **)(*(int *)(param_1 + 0x7c0) + 0x44c) = &DAT_00752890;
  *(undefined1 **)(*(int *)(param_1 + 0x7d8) + 0x44c) = &LAB_0075d560;
  *(undefined1 **)(*(int *)(param_1 + 0x808) + 0x44c) = &LAB_00751ae0;
  *(undefined1 **)(*(int *)(param_1 + 0x7f0) + 0x44c) = &LAB_007524b0;
  puVar3 = operator_new(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_LAB_00d4d55c;
    puVar3[1] = param_1;
    puVar3[2] = FUN_0075d450;
    puVar3[3] = 0;
  }
  FUN_0074e9d0(*(int *)(param_1 + 0x374));
  puVar3 = operator_new(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_LAB_00d4d55c;
    puVar3[1] = param_1;
    puVar3[2] = &LAB_00751ac0;
    puVar3[3] = 0;
  }
  FUN_0074e9d0(*(int *)(param_1 + 0x378));
  puVar3 = operator_new(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_LAB_00d4d55c;
    puVar3[1] = param_1;
    puVar3[2] = FUN_007522c0;
    puVar3[3] = 0;
  }
  FUN_0074e9d0(*(int *)(param_1 + 0x370));
  *(undefined1 **)(*(int *)(param_1 + 0x7c0) + 0x448) = &LAB_007528a0;
  *(undefined1 **)(*(int *)(param_1 + 0x7d8) + 0x448) = &LAB_0075d500;
  *(undefined1 **)(*(int *)(param_1 + 0x7f0) + 0x448) = &LAB_007522b0;
  *(code **)(*(int *)(param_1 + 0x808) + 0x448) = FUN_00752110;
  ExceptionList = unaff_EDI;
  return;
}


//// FUNCTION FUN_00774710 @ 00774710 ////

/* WARNING: Removing unreachable block (ram,0x00774812) */

void __fastcall FUN_00774710(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char acStack_28 [2];
  undefined1 uStack_26;
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd94c3;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)param_1[0x12a];
  ExceptionList = &pvStack_c;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x125] + 4))();
    param_1[0x12a] = 0;
    (**(code **)param_1[0x125])();
  }
  if ((int *)param_1[0x130] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x130] + 0x20))(1);
    (**(code **)(*DAT_0104e458 + 0xc0))(0);
  }
  puVar1 = operator_new(0x54c);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00658480(puVar1);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x70))(param_1,0);
  acStack_28[0] = '\0';
  _strncpy(acStack_28,"pp",2);
  uStack_26 = 0;
  pvStack_c = (void *)0x1;
  FUN_0065cf60(piVar2,(undefined4 *)&stack0xffffffcc);
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*param_1 + 0xc))(piVar2,1);
  (**(code **)(param_1[0x125] + 4))();
  param_1[0x12a] = (int)piVar2;
  (**(code **)param_1[0x125])();
  if (((DAT_0104e4a8 != 0) && (*(int *)(DAT_0104e4a8 + 0xd0) != 0)) && (param_1[0x10e] != 0)) {
    FUN_00774340((int)param_1);
  }
  param_1[0xda] = 0;
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION FUN_007748a0 @ 007748a0 ////

void __fastcall FUN_007748a0(int param_1)

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


//// FUNCTION FUN_00774910 @ 00774910 ////

void __fastcall FUN_00774910(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  ulonglong uVar5;
  undefined **local_2c;
  int local_28;
  int *local_24;
  undefined ***local_20;
  int *local_18;
  float local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd94d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar4 = FUN_00990aa0();
  fVar4 = fVar4 * (float10)(float)param_1[0xf5] * (float10)4.0 + (float10)(float)param_1[0xf4];
  param_1[0xf4] = (int)(float)fVar4;
  if (fVar4 < (float10)(float)param_1[0xf6]) {
    param_1[0xf4] = param_1[0xf6];
  }
  if ((float)param_1[0xf7] < (float)param_1[0xf4]) {
    param_1[0xf4] = param_1[0xf7];
  }
  uVar5 = FUN_00acd42c();
  iVar3 = (int)uVar5;
  param_1[0xf3] = iVar3;
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (DAT_0105c400 - 8.0 < fVar1) {
    uVar5 = FUN_00acd42c();
    param_1[0xf3] = (int)uVar5;
  }
  uVar5 = FUN_00acd42c();
  param_1[0xf1] = (uint)((int)uVar5 - param_1[0xf3]) >> 1;
  uVar5 = FUN_00acd42c();
  local_14 = (float)param_1[0xf4] + 48.0;
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  param_1[0xf2] = 0x2c - (int)uVar5;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(int **)(*local_24 + 4) = &local_28;
  *local_24 = (int)&local_28;
  iVar3 = param_1[0x1ea];
  local_4 = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 1;
  local_18 = param_1;
  local_10 = local_14;
  (**(code **)(*(int *)(iVar3 + 0x80) + 4))();
  *(int **)(iVar3 + 0x94) = local_18;
  (*(code *)**(undefined4 **)(iVar3 + 0x80))();
  *(float *)(iVar3 + 0x98) = local_14;
  *(float *)(iVar3 + 0x9c) = local_10;
  local_4 = 0xffffffff;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_18 = (int *)0x0;
  local_28 = 0;
  local_24 = (int *)0x0;
  do {
    cVar2 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar2 != '\0');
  if (DAT_0104e458 != (int *)0x0) {
    FUN_0076e2c0(DAT_0104e458);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00774b20 @ 00774b20 ////

void __fastcall FUN_00774b20(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float local_8;
  undefined4 local_4;
  
  iVar1 = param_1[0x1d8];
  piVar3 = (int *)(iVar1 + 0x150);
  if (*(int **)(iVar1 + 0x154) != (int *)0x0) {
    **(int **)(iVar1 + 0x154) = *piVar3;
  }
  if (*piVar3 != 0) {
    *(undefined4 *)(*piVar3 + 4) = *(undefined4 *)(iVar1 + 0x154);
  }
  *piVar3 = 0;
  *(undefined4 *)(iVar1 + 0x154) = 0;
  FUN_007741b0((int)param_1);
  iVar1 = param_1[0xe8];
  iVar2 = param_1[0xea];
  local_8 = (float)(iVar1 - iVar2) * (float)param_1[0xe9] * 0.01;
  if (*(char *)((int)param_1 + 0x34b) == '\0') {
    uVar4 = FUN_007718a0((int)param_1);
    local_4._1_3_ = (undefined3)((uint)(iVar1 - iVar2) >> 8);
    local_4 = CONCAT31(local_4._1_3_,(char)uVar4);
    if (((char)param_1[0xd2] != '\0') && (local_4 = CONCAT31(local_4._1_3_,1), local_8 <= 0.0)) {
      local_8 = 0.0;
    }
    (**(code **)(*(int *)param_1[0x1d8] + 0x20))(local_4);
    (**(code **)(*(int *)param_1[0x1de] + 0x20))(local_4);
  }
  (**(code **)(*(int *)param_1[0x1d8] + 0x5c))(2,param_1[0x1c0],25.0 - local_8);
  (**(code **)(*param_1 + 0xc))(param_1[0x1d8],1);
  iVar1 = param_1[0x1de];
  piVar3 = (int *)(iVar1 + 0x150);
  if (*(int **)(iVar1 + 0x154) != (int *)0x0) {
    **(int **)(iVar1 + 0x154) = *piVar3;
  }
  if (*piVar3 != 0) {
    *(undefined4 *)(*piVar3 + 4) = *(undefined4 *)(iVar1 + 0x154);
  }
  *piVar3 = 0;
  *(undefined4 *)(iVar1 + 0x154) = 0;
  (**(code **)(*(int *)param_1[0x1de] + 0x5c))(1,param_1[0x1d8],0x41880000);
  (**(code **)(*param_1 + 0xc))(param_1[0x1de],1);
  return;
}


//// FUNCTION FUN_00774c70 @ 00774c70 ////

int __fastcall FUN_00774c70(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x457) != '\0') {
    iVar2 = *(int *)(param_1 + 0x3a0);
    iVar1 = FUN_0074b390();
    iVar1 = FUN_007487e0(iVar1);
    if (iVar2 < iVar1) {
      return 0;
    }
  }
  iVar2 = *(int *)(param_1 + 0x3a0);
  if (*(char *)(param_1 + 0x457) == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0074b390();
    iVar1 = FUN_007487e0(iVar1);
  }
  iVar2 = FUN_007740d0((iVar2 - iVar1) / 100);
  return iVar2;
}


//// FUNCTION FUN_00774ce0 @ 00774ce0 ////

int __fastcall FUN_00774ce0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar1 = FUN_00774c70((int)param_1);
  iVar1 = FUN_00773f30(param_1,iVar1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)param_1 + 0x3a0);
  if (*(char *)((int)param_1 + 0x457) == '\0') {
    local_4 = 0;
  }
  else {
    iVar2 = FUN_0074b390();
    local_4 = FUN_007487e0(iVar2);
  }
  iVar2 = FUN_007535c0(*(int *)(iVar1 + 4));
  iVar2 = iVar2 + ((iVar3 - local_4) / 100 - *(int *)((int)param_1 + 0x3b0));
  iVar3 = FUN_007535d0(*(int *)(iVar1 + 4));
  if (iVar3 <= iVar2) {
    iVar2 = FUN_007535d0(*(int *)(iVar1 + 4));
  }
  iVar3 = FUN_007535c0(*(int *)(iVar1 + 4));
  if (iVar2 <= iVar3) {
    iVar2 = FUN_007535c0(*(int *)(iVar1 + 4));
  }
  return iVar2;
}


//// FUNCTION FUN_00774d90 @ 00774d90 ////

void __fastcall FUN_00774d90(int param_1)

{
  byte *pbVar1;
  byte abStack_28 [40];
  
  if ((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) {
    if ((DAT_0104e4a8 != 0) &&
       ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)(param_1 + 0x438) != 0)))) {
      *(undefined1 *)(param_1 + 0x45a) = 0;
      *(undefined1 *)(param_1 + 0x45b) = 0;
      *(undefined4 *)(param_1 + 0x3bc) = 0;
      FUN_00774340(param_1);
      FUN_009b0f60(4);
      FUN_0041c9c0(abStack_28,"TRAILEREDITORLITE_PAUSE_MOUSELCLICK");
      pbVar1 = abStack_28;
      FUN_004f3b20();
      FUN_004f32c0(pbVar1);
      *(undefined1 *)(param_1 + 0x452) = 1;
    }
    *(undefined4 *)(param_1 + 0x368) = 0;
  }
  return;
}


//// FUNCTION FUN_00774d9d @ 00774d9d ////

void __fastcall FUN_00774d9d(int param_1)

{
  int unaff_EBX;
  bool in_ZF;
  byte *pbVar1;
  
  if ((in_ZF) && (DAT_0104e330 == unaff_EBX)) {
    if ((DAT_0104e4a8 != unaff_EBX) &&
       ((*(int *)(DAT_0104e4a8 + 0xd0) != unaff_EBX && (*(int *)(param_1 + 0x438) != unaff_EBX)))) {
      *(char *)(param_1 + 0x45a) = (char)unaff_EBX;
      *(char *)(param_1 + 0x45b) = (char)unaff_EBX;
      *(int *)(param_1 + 0x3bc) = unaff_EBX;
      FUN_00774340(param_1);
      FUN_009b0f60(4);
      FUN_0041c9c0(&stack0x00000004,"TRAILEREDITORLITE_PAUSE_MOUSELCLICK");
      pbVar1 = &stack0x00000004;
      FUN_004f3b20();
      FUN_004f32c0(pbVar1);
      *(undefined1 *)(param_1 + 0x452) = 1;
    }
    *(int *)(param_1 + 0x368) = unaff_EBX;
  }
  return;
}


//// FUNCTION FUN_00774e20 @ 00774e20 ////

void __fastcall FUN_00774e20(int param_1)

{
  if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != 0)) &&
     ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)(param_1 + 0x438) != 0)))) {
    *(undefined1 *)(param_1 + 0x45a) = 0;
    *(undefined1 *)(param_1 + 0x45b) = 0;
    *(undefined4 *)(param_1 + 0x3bc) = 0;
    if (*(int *)(param_1 + 0x368) == 1) {
      if (*(char *)(param_1 + 0x459) != '\0') {
        FUN_00774160(param_1);
        return;
      }
      FUN_007731d0(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00774e80 @ 00774e80 ////

void __fastcall FUN_00774e80(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined **local_2c;
  int local_28;
  int *local_24;
  undefined ***local_20;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd9510;
  pvStack_c = ExceptionList;
  local_18 = *(int *)(param_1 + 0x6e8);
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  ExceptionList = &pvStack_c;
  if (local_18 != 0) {
    local_24 = (int *)(local_18 + 0x18);
    local_28 = *local_24;
    ExceptionList = &pvStack_c;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  iVar3 = DAT_0104e458;
  local_14 = 0;
  local_10 = 0;
  piVar1 = (int *)(DAT_0104e458 + 0xa4);
  *(undefined4 *)(DAT_0104e458 + 0xa0) = 1;
  local_4 = 0;
  (**(code **)(*piVar1 + 4))();
  puVar2 = (undefined4 *)*piVar1;
  *(int *)(iVar3 + 0xb8) = local_18;
  (*(code *)*puVar2)();
  *(undefined4 *)(iVar3 + 0xbc) = local_14;
  *(undefined4 *)(iVar3 + 0xc0) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = (int *)(param_1 + 0x18);
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(int **)(*local_24 + 4) = &local_28;
  *local_24 = (int)&local_28;
  iVar3 = DAT_0104e458;
  local_14 = 0x40a00000;
  local_10 = 0x40a00000;
  piVar1 = (int *)(DAT_0104e458 + 0xec);
  *(undefined4 *)(DAT_0104e458 + 0xe8) = 2;
  local_4 = 1;
  local_18 = param_1;
  (**(code **)(*piVar1 + 4))();
  puVar2 = (undefined4 *)*piVar1;
  *(int *)(iVar3 + 0x100) = local_18;
  (*(code *)*puVar2)();
  *(undefined4 *)(iVar3 + 0x104) = local_14;
  *(undefined4 *)(iVar3 + 0x108) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_18 = *(int *)(param_1 + 0x6e8);
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_18 != 0) {
    local_24 = (int *)(local_18 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  iVar3 = DAT_0104e458;
  local_14 = 0;
  local_10 = 0;
  piVar1 = (int *)(DAT_0104e458 + 0x80);
  *(undefined4 *)(DAT_0104e458 + 0x7c) = 1;
  local_4 = 2;
  (**(code **)(*piVar1 + 4))();
  puVar2 = (undefined4 *)*piVar1;
  *(int *)(iVar3 + 0x94) = local_18;
  (*(code *)*puVar2)();
  *(undefined4 *)(iVar3 + 0x98) = local_14;
  *(undefined4 *)(iVar3 + 0x9c) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_18 = *(int *)(param_1 + 0x6e8);
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_18 != 0) {
    local_24 = (int *)(local_18 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  iVar3 = DAT_0104e458;
  local_14 = 0;
  local_10 = 0;
  piVar1 = (int *)(DAT_0104e458 + 200);
  *(undefined4 *)(DAT_0104e458 + 0xc4) = 2;
  local_4 = 3;
  (**(code **)(*piVar1 + 4))();
  puVar2 = (undefined4 *)*piVar1;
  *(int *)(iVar3 + 0xdc) = local_18;
  (*(code *)*puVar2)();
  *(undefined4 *)(iVar3 + 0xe0) = local_14;
  *(undefined4 *)(iVar3 + 0xe4) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00775170 @ 00775170 ////

void __fastcall FUN_00775170(void *param_1)

{
  int iVar1;
  
  if ((0 < *(int *)(DAT_0104e4a8 + 0x128)) && (iVar1 = FUN_00774c70((int)param_1), iVar1 != 0)) {
    iVar1 = FUN_00774c70((int)param_1);
    iVar1 = FUN_00773f30(param_1,iVar1);
    if (iVar1 != 0) {
      if (*(char *)((int)param_1 + 0x3e6) == '\0') {
        if (DAT_0104e409 == '\0') {
          return;
        }
        FUN_009750b0(*(void **)(iVar1 + 0x18));
        *(undefined1 *)((int)param_1 + 0x3e6) = 1;
        iVar1 = FUN_00774c70((int)param_1);
        FUN_00403e20((void *)((int)param_1 + 1000),(char *)(iVar1 + 0xb0));
        iVar1 = *(int *)((int)param_1 + 0x3e0);
        *(int *)((int)param_1 + 0x408) = iVar1;
        if ((iVar1 != 0) && (*(void **)(iVar1 + 600) != (void *)0x0)) {
          FUN_009f7400(*(void **)(iVar1 + 600),iVar1);
        }
      }
      if ((DAT_0104e409 != '\0') &&
         (*(int *)((int)param_1 + 0x408) != *(int *)((int)param_1 + 0x3e0))) {
        *(int *)((int)param_1 + 0x408) = *(int *)((int)param_1 + 0x3e0);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00775230 @ 00775230 ////

void __thiscall FUN_00775230(void *this,char param_1)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int *local_4c;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd952b;
  local_c = ExceptionList;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_18 = 0x3f9c61ab;
  ExceptionList = &local_c;
  if ((*(void **)((int)this + 0x3e0) != (void *)0x0) &&
     (ExceptionList = &local_c, uVar3 = FUN_00971f40(*(void **)((int)this + 0x3e0),&local_34),
     (char)uVar3 != '\0')) {
    FUN_00a25410((int)&local_34);
  }
  local_4c = (int *)0x0;
  if (*(char *)((int)this + 0x34a) == '\0') {
LAB_0077538d:
    FUN_009a6fb0('\x01');
  }
  else {
    if (*(char *)((int)this + 0x457) != '\0') {
      iVar6 = *(int *)((int)this + 0x3a0);
      iVar4 = FUN_0074b390();
      iVar4 = FUN_007487e0(iVar4);
      if (iVar6 < iVar4) goto LAB_0077538d;
    }
    bVar2 = FUN_00773390((int)this);
    if (bVar2) goto LAB_0077538d;
    local_3c = *(undefined4 *)((int)this + 0x3c4);
    local_38 = *(undefined4 *)((int)this + 0x3c8);
    local_40 = 0;
    local_44 = *(int *)((int)this + 0x3cc);
    uVar9 = FUN_00acd42c();
    local_40 = (undefined4)uVar9;
    pvVar5 = operator_new(0x30);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      local_4 = 0xffffffff;
      local_4c = (int *)0x0;
    }
    else {
      local_4c = FUN_009a5a30(pvVar5,&local_44);
      local_4 = 0xffffffff;
    }
  }
  if (*(char *)((int)this + 0x457) == '\0') {
LAB_007753c4:
    bVar2 = FUN_00773390((int)this);
    if (bVar2) goto LAB_0077549c;
    if (*(int *)((int)this + 0x3e0) != 0) {
      iVar6 = FUN_00774c70((int)this);
      iVar6 = FUN_00773f30(this,iVar6);
      *(undefined4 *)(iVar6 + 0x24) = 0;
      *(int *)(iVar6 + 0x28) =
           (DAT_0105c3f8 + ((int)(DAT_0105c3f8 + (DAT_0105c3f8 >> 0x1f & 0xfU)) >> 4) * -9) / 2;
      *(int *)(iVar6 + 0x2c) = DAT_0105c3f8;
      iVar4 = FUN_00774c70((int)this);
      if (iVar4 != 0) {
        iVar4 = FUN_00774c70((int)this);
        pvVar5 = (void *)FUN_0075aa20();
        FUN_0075a190(pvVar5,iVar4);
      }
      uVar1 = DAT_0105cc28;
      if (param_1 == '\0') {
        FUN_00978930(*(void **)((int)this + 0x3e0),1,iVar6 + 0x18);
      }
      else {
        DAT_0105cc28 = 1;
        FUN_00978930(*(void **)((int)this + 0x3e0),1,iVar6 + 0x18);
        DAT_0105cc28 = uVar1;
      }
    }
  }
  else {
    iVar6 = *(int *)((int)this + 0x3a0);
    iVar4 = FUN_0074b390();
    iVar4 = FUN_007487e0(iVar4);
    if (iVar4 <= iVar6) goto LAB_007753c4;
LAB_0077549c:
    DAT_0105bec4 = 1;
    if (*(char *)((int)this + 0x457) == '\0') {
LAB_007754d6:
      bVar2 = FUN_00773390((int)this);
      if (bVar2) {
        FUN_0074ccc0(*(int *)((int)this + 0x3a0));
      }
    }
    else {
      iVar6 = *(int *)((int)this + 0x3a0);
      iVar4 = FUN_0074b390();
      iVar4 = FUN_007487e0(iVar4);
      if (iVar4 <= iVar6) goto LAB_007754d6;
      FUN_0074cc40(*(uint *)((int)this + 0x3a0));
    }
    DAT_0105bec4 = 0;
  }
  if (*(char *)((int)this + 0x34a) != '\0') {
    if (*(char *)((int)this + 0x457) != '\0') {
      iVar6 = *(int *)((int)this + 0x3a0);
      iVar4 = FUN_0074b390();
      iVar4 = FUN_007487e0(iVar4);
      if (iVar6 < iVar4) goto LAB_0077554e;
    }
    bVar2 = FUN_00773390((int)this);
    if (!bVar2) {
      if (local_4c == (int *)0x0) {
        DAT_010b9548 = 1;
        ExceptionList = local_c;
        return;
      }
      FUN_009a5b60((int)local_4c);
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
LAB_0077554e:
  puVar7 = FUN_009a52c0();
  if (puVar7 != (undefined1 *)0x0) {
    iVar6 = DAT_0105c3f8 + ((int)(DAT_0105c3f8 + (DAT_0105c3f8 >> 0x1f & 0xfU)) >> 4) * -9;
    iVar8 = DAT_0105c3f8 * 4;
    FUN_00990aa0();
    uVar9 = FUN_00acd42c();
    iVar4 = (int)uVar9;
    uVar9 = FUN_00acd42c();
    FUN_00a28d10((uint *)(puVar7 + (iVar6 / 2) * iVar8),DAT_00e67ba0,(uint)uVar9,iVar4);
    FUN_009a5310();
  }
  FUN_009a6fb0('\0');
  DAT_010b9548 = 1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00775600 @ 00775600 ////

void __fastcall FUN_00775600(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00774c70(param_1);
  if ((iVar1 != 0) && (*(void **)(param_1 + 0x3e0) != (void *)0x0)) {
    FUN_00759fc0(*(int *)(param_1 + 0x3a0),*(void **)(param_1 + 0x3e0));
  }
  return;
}


//// FUNCTION FUN_00775630 @ 00775630 ////

void __thiscall FUN_00775630(void *this,undefined1 *param_1)

{
  int iVar1;
  void *this_00;
  ulonglong uVar2;
  
  iVar1 = FUN_00774c70((int)this);
  if ((iVar1 == 0) || (*(int *)((int)this + 0x3e0) == 0)) {
    param_1[1] = 0xff;
    param_1[2] = 0xff;
    param_1[3] = 0xff;
    param_1[3] = 0xff;
    param_1[2] = 0xff;
    param_1[1] = 0xff;
    *param_1 = 0xff;
    return;
  }
  this_00 = (void *)FUN_0075aa20();
  iVar1 = FUN_0075a190(this_00,iVar1);
  if (iVar1 != 0) {
    FUN_007715a0((int)this);
    iVar1 = FUN_00774c70((int)this);
    FUN_00770460(iVar1);
  }
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  *param_1 = 0xff;
  param_1[1] = 0xff;
  param_1[2] = 0xff;
  param_1[3] = 0xff;
  if (-1 < iVar1) {
    if (0xff < iVar1) {
      iVar1 = 0xff;
    }
    param_1[3] = (char)iVar1;
    param_1[2] = 0xff;
    param_1[1] = 0xff;
    *param_1 = 0xff;
    return;
  }
  param_1[3] = 0;
  param_1[2] = 0xff;
  param_1[1] = 0xff;
  *param_1 = 0xff;
  return;
}


//// FUNCTION FUN_00775a40 @ 00775a40 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00775a40(void *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)((int)param_1 + 0x34a) != '\0') {
    if (*(char *)((int)param_1 + 0x457) != '\0') {
      iVar1 = *(int *)((int)param_1 + 0x3a0);
      iVar3 = FUN_0074b390();
      iVar3 = FUN_007487e0(iVar3);
      if (iVar1 < iVar3) goto LAB_00775c00;
    }
    bVar2 = FUN_00773390((int)param_1);
    if (!bVar2) {
      FUN_00775630(param_1,(undefined1 *)&local_8);
      if (local_8._3_1_ == 0xff) {
        return;
      }
      local_10 = 0xff - (uint)local_8._3_1_;
      if (local_10 < 0) {
        local_10 = 0;
      }
      else if (0xff < local_10) {
        local_10 = 0xff;
      }
      _DAT_0104e4ec = (float)*(int *)((int)param_1 + 0x3c4);
      local_10 = local_10 << 0x18;
      if (*(int *)((int)param_1 + 0x3c4) < 0) {
        _DAT_0104e4ec = _DAT_0104e4ec + 4.2949673e+09;
      }
      _DAT_0104e4f0 = (float)*(int *)((int)param_1 + 0x3c8);
      if (*(int *)((int)param_1 + 0x3c8) < 0) {
        _DAT_0104e4f0 = _DAT_0104e4f0 + 4.2949673e+09;
      }
      _DAT_0104e4f4 = 0;
      local_c = (float)*(int *)((int)param_1 + 0x3cc);
      if (*(int *)((int)param_1 + 0x3cc) < 0) {
        local_c = local_c + 4.2949673e+09;
      }
      _DAT_0104e4f8 = (float)*(int *)((int)param_1 + 0x3c4);
      if (*(int *)((int)param_1 + 0x3c4) < 0) {
        _DAT_0104e4f8 = _DAT_0104e4f8 + 4.2949673e+09;
      }
      _DAT_0104e4f8 = _DAT_0104e4f8 + local_c;
      _DAT_0104e4fc = (float)*(int *)((int)param_1 + 0x3c8);
      if (*(int *)((int)param_1 + 0x3c8) < 0) {
        _DAT_0104e4fc = _DAT_0104e4fc + 4.2949673e+09;
      }
      _DAT_0104e4fc = _DAT_0104e4fc + local_c * 0.5625;
      _DAT_0104e504 = 0;
      local_4 = 0x3f0e0000;
      _DAT_0104e508 = 0x3e680000;
      _DAT_0104e510 = 0x3f480000;
      local_8 = 0x3f800000;
      _DAT_0104e500 = 0;
      _DAT_0104e50c = 0x3f800000;
      DAT_0104e524 = 4;
      _DAT_0104e4e4 = local_10;
      DAT_0104e4e0 = &DAT_0104e518;
      FUN_009a1410();
      goto LAB_00775d6d;
    }
  }
LAB_00775c00:
  _DAT_0104e4ec = (float)*(int *)((int)param_1 + 0x3c4);
  if (*(int *)((int)param_1 + 0x3c4) < 0) {
    _DAT_0104e4ec = _DAT_0104e4ec + 4.2949673e+09;
  }
  _DAT_0104e4f0 = (float)*(int *)((int)param_1 + 0x3c8);
  if (*(int *)((int)param_1 + 0x3c8) < 0) {
    _DAT_0104e4f0 = _DAT_0104e4f0 + 4.2949673e+09;
  }
  _DAT_0104e4f4 = 0;
  local_c = (float)*(int *)((int)param_1 + 0x3cc);
  if (*(int *)((int)param_1 + 0x3cc) < 0) {
    local_c = local_c + 4.2949673e+09;
  }
  _DAT_0104e4f8 = (float)*(int *)((int)param_1 + 0x3c4);
  if (*(int *)((int)param_1 + 0x3c4) < 0) {
    _DAT_0104e4f8 = _DAT_0104e4f8 + 4.2949673e+09;
  }
  _DAT_0104e4f8 = _DAT_0104e4f8 + local_c;
  _DAT_0104e4fc = (float)*(int *)((int)param_1 + 0x3c8);
  if (*(int *)((int)param_1 + 0x3c8) < 0) {
    _DAT_0104e4fc = _DAT_0104e4fc + 4.2949673e+09;
  }
  _DAT_0104e4fc = _DAT_0104e4fc + local_c * 0.5625;
  _DAT_0104e504 = 0;
  local_4 = 0x3f0e0000;
  _DAT_0104e508 = 0x3e680000;
  _DAT_0104e510 = 0x3f480000;
  local_8 = 0x3f800000;
  _DAT_0104e50c = 0x3f800000;
  _DAT_0104e500 = 0;
  DAT_0104e524 = 4;
  piVar4 = (int *)FUN_00775630(param_1,(undefined1 *)&local_10);
  _DAT_0104e4e4 = *piVar4;
  pvVar5 = FUN_009a59c0();
  if (DAT_0104e530 != pvVar5) {
    Engine_SetResourceReference(&DAT_0104e518,(int)pvVar5);
  }
  DAT_0104e4e0 = &DAT_0104e518;
  FUN_009a1410();
  local_10 = -0x1000000;
  FUN_009a56b0(0xff000000,'\x01');
LAB_00775d6d:
  BuildAndDrawPrimitive(0x104e4dc);
  FUN_009a1460();
  return;
}


//// FUNCTION FUN_00775d90 @ 00775d90 ////

undefined4 __thiscall FUN_00775d90(void *this,uint param_1)

{
  bool bVar1;
  uint in_EAX;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0x368) == 1) {
    bVar1 = FUN_00773390((int)this);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      in_EAX = CONCAT31(extraout_var,*(char *)((int)this + 0x457));
      if (*(char *)((int)this + 0x457) != '\0') {
        iVar5 = *(int *)((int)this + 0x3a0);
        iVar2 = FUN_0074b390();
        iVar2 = FUN_007487e0(iVar2);
        bVar1 = iVar5 < iVar2;
        in_EAX = CONCAT31((int3)((uint)iVar2 >> 8),bVar1);
        if (bVar1) goto LAB_00775dd0;
      }
      uVar3 = CONCAT31((int3)(in_EAX >> 8),1);
      goto LAB_00775dd2;
    }
  }
LAB_00775dd0:
  uVar3 = in_EAX & 0xffffff00;
LAB_00775dd2:
  uVar4 = FUN_00978cd0(*(void **)((int)this + 0x3e0),param_1,uVar3);
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  iVar5 = FUN_00774c70((int)this);
  iVar5 = FUN_00773f30(this,iVar5);
  FUN_0074d6e0(iVar5);
  uVar4 = FUN_00a29440(*(void **)((int)this + 0x3e0));
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_00775e20 @ 00775e20 ////

void __fastcall FUN_00775e20(int param_1)

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


//// FUNCTION FUN_00775e40 @ 00775e40 ////

uint __fastcall FUN_00775e40(void *param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (((DAT_0104e4a8 != 0) && (in_EAX = 0, *(int *)(DAT_0104e4a8 + 0xd0) != 0)) &&
     (in_EAX = 0, *(int *)((int)param_1 + 0x438) != 0)) {
    uVar2 = *(uint *)(DAT_0104e4a8 + 0xcc) >> 2;
    iVar1 = uVar2 * -4;
    if (*(uint *)(DAT_0104e4a8 + 200) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(DAT_0104e4a8 + 200);
    }
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar2 * 4) +
                    (*(uint *)(DAT_0104e4a8 + 0xcc) + iVar1) * 4);
    puVar3 = (undefined4 *)FUN_00773f30(param_1,iVar1);
    *(undefined4 *)((int)param_1 + 0x3e0) = *puVar3;
    *(undefined4 *)((int)param_1 + 0x3b0) = 0;
    uVar2 = FUN_007535c0(iVar1);
    in_EAX = FUN_00775d90(param_1,uVar2);
    if ((char)in_EAX != '\0') {
      uVar4 = FUN_00773260();
      *(undefined4 *)((int)param_1 + 0x368) = 0;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00775ee0 @ 00775ee0 ////

void __fastcall FUN_00775ee0(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(int *)((int)param_1 + 0x3e0) == 0) {
    uVar2 = *(uint *)(DAT_0104e4a8 + 0xcc) >> 2;
    iVar6 = uVar2 * -4;
    if (*(uint *)(DAT_0104e4a8 + 200) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(DAT_0104e4a8 + 200);
    }
    puVar3 = (undefined4 *)
             FUN_00773f30(param_1,*(int *)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar2 * 4) +
                                          (*(uint *)(DAT_0104e4a8 + 0xcc) + iVar6) * 4));
    *(undefined4 *)((int)param_1 + 0x3e0) = *puVar3;
    *(undefined4 *)((int)param_1 + 0x3b0) = 0;
  }
  FUN_00a29560();
  FUN_007521a0(param_1);
  uVar1 = *(undefined4 *)((int)param_1 + 0x3a0);
  puVar3 = (undefined4 *)((int)param_1 + 0x36c);
  iVar6 = 4;
  puVar4 = puVar3;
  do {
    if ((void *)*puVar4 != (void *)0x0) {
      FUN_0074e960((void *)*puVar4,uVar1);
    }
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar4 = operator_new(0x10);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &PTR_LAB_00d4d55c;
    puVar4[1] = param_1;
    puVar4[2] = &LAB_0075d4c0;
    puVar4[3] = 0;
  }
  FUN_0074e970(*(int *)((int)param_1 + 0x374));
  puVar4 = operator_new(0x10);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &PTR_LAB_00d4ec24;
    puVar4[1] = param_1;
    puVar4[2] = &LAB_0075d4e0;
    puVar4[3] = 0;
  }
  FUN_0074e990(*(int *)((int)param_1 + 0x374));
  puVar4 = operator_new(0x10);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &PTR_LAB_00d4d55c;
    puVar4[1] = param_1;
    puVar4[2] = &LAB_0075d490;
    puVar4[3] = 0;
  }
  FUN_0074e9b0(*(int *)((int)param_1 + 0x374));
  puVar4 = operator_new(0x10);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &PTR_LAB_00d4d55c;
    puVar4[1] = param_1;
    puVar4[2] = &LAB_00751b80;
    puVar4[3] = 0;
  }
  FUN_0074e970(*(int *)((int)param_1 + 0x378));
  puVar4 = operator_new(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = &PTR_LAB_00d4ec24;
    puVar4[1] = param_1;
    puVar4[2] = &LAB_00751bf0;
    puVar4[3] = 0;
  }
  FUN_0074e990(*(int *)((int)param_1 + 0x378));
  puVar5 = operator_new(0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_LAB_00d4d55c;
    puVar5[1] = param_1;
    puVar5[2] = &DAT_00751aa0;
    puVar5[3] = 0;
  }
  FUN_0074e9b0(*(int *)((int)param_1 + 0x378));
  puVar5 = operator_new(0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_LAB_00d4d55c;
    puVar5[1] = param_1;
    puVar5[2] = &LAB_007523f0;
    puVar5[3] = 0;
  }
  FUN_0074e970(*(int *)((int)param_1 + 0x370));
  puVar5 = operator_new(0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_LAB_00d4ec24;
    puVar5[1] = param_1;
    puVar5[2] = &LAB_00752330;
    puVar5[3] = 0;
  }
  FUN_0074e990(*(int *)((int)param_1 + 0x370));
  puVar5 = operator_new(0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &PTR_LAB_00d4d55c;
    puVar5[1] = param_1;
    puVar5[2] = &LAB_007522a0;
    puVar5[3] = 0;
  }
  FUN_0074e9b0(*(int *)((int)param_1 + 0x370));
  *(undefined4 *)((int)param_1 + 0x368) = 1;
  *(undefined1 *)((int)param_1 + 0x456) = 1;
  FUN_00990a00();
  if (0 < (int)puVar4) {
    iVar6 = 4;
    do {
      if ((void *)*puVar3 != (void *)0x0) {
        FUN_0074f6f0((void *)*puVar3,(int)puVar4);
      }
      puVar3 = puVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  uVar2 = FUN_00774ce0(param_1);
  FUN_00775d90(param_1,uVar2);
  return;
}


//// FUNCTION FUN_007761a0 @ 007761a0 ////

void __fastcall FUN_007761a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x368) == 1) {
    FUN_00774d90(param_1);
  }
  fVar3 = FUN_00990aa0();
  uVar1 = *(uint *)(param_1 + 0x3a0);
  uVar2 = uVar1 - (int)ROUND((float)(fVar3 * (float10)25000.0));
  uVar2 = uVar2 & ((int)uVar2 < 1) - 1;
  if ((int)*(uint *)(param_1 + 0x39c) <= (int)uVar2) {
    uVar2 = *(uint *)(param_1 + 0x39c);
  }
  *(uint *)(param_1 + 0x3a0) = uVar2;
  if (uVar2 != uVar1) {
    *(undefined1 *)(param_1 + 0x452) = 1;
  }
  return;
}


//// FUNCTION FUN_00776210 @ 00776210 ////

void __fastcall FUN_00776210(int param_1)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x368) == 1) {
    FUN_00774d90(param_1);
  }
  fVar3 = FUN_00990aa0();
  uVar1 = *(uint *)(param_1 + 0x3a0);
  uVar2 = (int)ROUND((float)(fVar3 * (float10)25000.0)) + uVar1;
  uVar2 = uVar2 & ((int)uVar2 < 1) - 1;
  if ((int)*(uint *)(param_1 + 0x39c) <= (int)uVar2) {
    uVar2 = *(uint *)(param_1 + 0x39c);
  }
  *(uint *)(param_1 + 0x3a0) = uVar2;
  if (uVar2 != uVar1) {
    *(undefined1 *)(param_1 + 0x452) = 1;
  }
  return;
}


//// FUNCTION FUN_00776280 @ 00776280 ////

void __fastcall FUN_00776280(void *param_1)

{
  FUN_007528f0((int)param_1);
  *(undefined1 *)((int)param_1 + 0x45a) = 0;
  *(undefined1 *)((int)param_1 + 0x45b) = 0;
  *(undefined4 *)((int)param_1 + 0x3bc) = 0;
  FUN_00773420((int)param_1);
  FUN_00775e40(param_1);
  return;
}


//// FUNCTION FUN_007762b0 @ 007762b0 ////

void __fastcall FUN_007762b0(void *param_1)

{
  if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != 0)) &&
     ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)((int)param_1 + 0x438) != 0)))) {
    *(undefined1 *)((int)param_1 + 0x45a) = 0;
    *(undefined1 *)((int)param_1 + 0x45b) = 0;
    *(undefined4 *)((int)param_1 + 0x3bc) = 0;
    if (*(int *)((int)param_1 + 0x368) != 1) {
      if ((*(int *)((int)param_1 + 0x34c) != 0) && (*(char *)((int)param_1 + 0x459) != '\0')) {
        FUN_007731d0((int)param_1);
      }
      FUN_00775ee0(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00776320 @ 00776320 ////

void __fastcall FUN_00776320(void *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if (DAT_0104e4a8 == 0) {
    return;
  }
  if (*(int *)(DAT_0104e4a8 + 0xd0) == 0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x438) == 0) {
    return;
  }
  if ((*(undefined4 **)((int)param_1 + 0x410) != (undefined4 *)0x0) &&
     (cVar1 = FUN_005ee930(*(undefined4 **)((int)param_1 + 0x410)), cVar1 == '\0')) {
    return;
  }
  if (*(int *)((int)param_1 + 0x424) != 0) {
    return;
  }
  if (*(int *)((int)param_1 + 0x3e0) != 0) {
    FUN_009721f0(*(int *)((int)param_1 + 0x3e0));
  }
  if ((((*(char *)((int)param_1 + 0x452) != '\0') && (bVar2 = FUN_00773360((int)param_1), !bVar2))
      && (bVar2 = FUN_00773390((int)param_1), !bVar2)) &&
     (iVar3 = FUN_00774c70((int)param_1), iVar3 != 0)) {
    iVar3 = FUN_00774c70((int)param_1);
    puVar4 = (undefined4 *)FUN_00773f30(param_1,iVar3);
    iVar3 = *(int *)((int)param_1 + 0x3e0);
    *(undefined4 *)((int)param_1 + 0x3e0) = *puVar4;
    iVar5 = FUN_00774c70((int)param_1);
    *(undefined4 *)((int)param_1 + 0x3b0) = *(undefined4 *)(iVar5 + 0x15c);
    uVar6 = FUN_00774ce0(param_1);
    uVar7 = FUN_00775d90(param_1,uVar6);
    if ((char)uVar7 == '\0') goto LAB_0077645d;
    if (iVar3 != *(int *)((int)param_1 + 0x3e0)) {
      FUN_00773260();
    }
  }
  iVar3 = FUN_00774c70((int)param_1);
  if ((iVar3 != 0) && (*(void **)((int)param_1 + 0x3e0) != (void *)0x0)) {
    FUN_00759fc0(*(int *)((int)param_1 + 0x3a0),*(void **)((int)param_1 + 0x3e0));
  }
  if ((((*(char *)((int)param_1 + 0x34a) != '\0') && (bVar2 = FUN_00773360((int)param_1), !bVar2))
      && (bVar2 = FUN_00773390((int)param_1), !bVar2)) || (*(char *)((int)param_1 + 0x452) != '\0'))
  {
    FUN_00775230(param_1,'\x01');
  }
  FUN_00775a40(param_1);
LAB_0077645d:
  *(undefined1 *)((int)param_1 + 0x452) = 0;
  return;
}


//// FUNCTION FUN_00776470 @ 00776470 ////

uint __fastcall FUN_00776470(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00774c70((int)param_1);
  puVar3 = (undefined4 *)FUN_00773f30(param_1,iVar2);
  *(undefined4 *)((int)param_1 + 0x3e0) = *puVar3;
  uVar4 = FUN_00774ce0(param_1);
  uVar5 = FUN_00775d90(param_1,uVar4);
  if ((char)uVar5 == '\0') {
    FUN_009750b0((void *)0x0);
    uVar4 = FUN_004015d0((void *)((int)param_1 + 1000),"",0);
    *(undefined4 *)((int)param_1 + 0x408) = 0;
    *(undefined1 *)((int)param_1 + 0x3e6) = 0;
    ExceptionList = local_c;
    return uVar4 & 0xffffff00;
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  local_4 = 0;
  iVar2 = FUN_00774c70((int)param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_00774c70((int)param_1);
    pcVar6 = (char *)(iVar2 + 0xb0);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,(char *)(iVar2 + 0xb0),(int)pcVar6 - (iVar2 + 0xb1));
  }
  uVar5 = FUN_00479e80(&local_2c,(undefined4 *)((int)param_1 + 1000));
  if ((char)uVar5 != '\0') {
    FUN_009750b0((void *)0x0);
    FUN_004015d0((undefined4 *)((int)param_1 + 1000),"",0);
    *(undefined4 *)((int)param_1 + 0x408) = 0;
    *(undefined1 *)((int)param_1 + 0x3e6) = 0;
  }
  uVar5 = FUN_00773260();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_007765b0 @ 007765b0 ////

void __fastcall FUN_007765b0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  FUN_00774340((int)param_1);
  FUN_009750b0((void *)0x0);
  *(undefined1 *)((int)param_1 + 0x3e6) = 0;
  *(undefined4 *)((int)param_1 + 0x408) = 0;
  FUN_004015d0((void *)((int)param_1 + 1000),"",0);
  uVar1 = *(uint *)((int)param_1 + 0x3a0);
  *(undefined4 *)((int)param_1 + 0x3b0) = 0;
  uVar2 = *(uint *)((int)param_1 + 0x39c) & (0 < (int)*(uint *)((int)param_1 + 0x39c)) - 1;
  *(uint *)((int)param_1 + 0x3a0) = uVar2;
  if (uVar2 != uVar1) {
    *(undefined1 *)((int)param_1 + 0x452) = 1;
  }
  uVar3 = FUN_00775e40(param_1);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)((int)param_1 + 0x368) = 0;
  }
  return;
}


//// FUNCTION FUN_00776640 @ 00776640 ////

undefined4 __fastcall FUN_00776640(void *param_1)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 uVar4;
  undefined3 extraout_var_00;
  int iVar5;
  undefined1 uVar6;
  void *local_4;
  
  uVar6 = 0;
  local_4 = param_1;
  if (*(char *)((int)param_1 + 0x348) != '\0') {
    cVar2 = FUN_00553f70(0x73);
    uVar4 = CONCAT31(extraout_var,cVar2);
    if ((cVar2 == '\0') &&
       (*(undefined1 *)((int)param_1 + 0x348) = 0, *(char *)((int)param_1 + 0x457) != '\0')) {
      iVar5 = *(int *)((int)param_1 + 0x3a0);
      iVar3 = FUN_0074b390();
      iVar3 = FUN_007487e0(iVar3);
      bVar1 = iVar5 < iVar3;
      uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),bVar1);
      if (bVar1) {
        uVar4 = FUN_00775e40(param_1);
      }
    }
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  iVar5 = DAT_0104e4a8;
  if ((((DAT_0104e4a8 != 0) && (*(int *)(DAT_0104e4a8 + 0xd0) != 0)) &&
      (*(int *)((int)param_1 + 0x438) != 0)) &&
     ((iVar5 = DAT_0104e458, *(int *)(DAT_0104e458 + 0x370) == 0 && (DAT_0104e4d8 == 0)))) {
    cVar2 = FUN_00553f70(0x73);
    iVar5 = CONCAT31(extraout_var_00,cVar2);
    if (cVar2 != '\0') {
      local_4 = (void *)0x0;
      iVar5 = (**(code **)(**(int **)((int)param_1 + 0x760) + 0x34))(&DAT_0104cce0,&local_4);
      if ((char)iVar5 != '\0') {
        uVar6 = 1;
        *(undefined1 *)((int)param_1 + 0x348) = 1;
        iVar5 = FUN_00774d90((int)param_1);
      }
    }
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),uVar6);
}


//// FUNCTION FUN_00776710 @ 00776710 ////

void __thiscall FUN_00776710(void *this,char param_1)

{
  if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != 0)) &&
     ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)((int)this + 0x438) != 0)))) {
    if (param_1 == '\0') {
      *(undefined1 *)((int)this + 0x45a) = 0;
      *(undefined1 *)((int)this + 0x45b) = 0;
      *(undefined4 *)((int)this + 0x3bc) = 0;
    }
    FUN_00a29560();
    FUN_007765b0(this);
    FUN_00774160((int)this);
    FUN_009b0f60(4);
  }
  return;
}


//// FUNCTION FUN_00776820 @ 00776820 ////

void __fastcall FUN_00776820(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00776470(param_1);
  iVar2 = FUN_00774c70((int)param_1);
  iVar2 = FUN_00773f30(param_1,iVar2);
  if (iVar2 != 0) {
    FUN_00775170(param_1);
    if (*(char *)((int)param_1 + 0x457) == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0074b390();
      iVar2 = FUN_007487e0(iVar2);
    }
    uVar1 = *(uint *)((int)param_1 + 0x3a0);
    uVar3 = iVar2 + 100U & ((int)(iVar2 + 100U) < 1) - 1;
    if ((int)*(uint *)((int)param_1 + 0x39c) <= (int)uVar3) {
      uVar3 = *(uint *)((int)param_1 + 0x39c);
    }
    *(uint *)((int)param_1 + 0x3a0) = uVar3;
    if (uVar3 != uVar1) {
      *(undefined1 *)((int)param_1 + 0x452) = 1;
    }
    iVar2 = FUN_00774c70((int)param_1);
    if ((iVar2 != 0) && (*(void **)((int)param_1 + 0x3e0) != (void *)0x0)) {
      FUN_00759fc0(*(int *)((int)param_1 + 0x3a0),*(void **)((int)param_1 + 0x3e0));
    }
    FUN_00775230(param_1,'\0');
    FUN_00775a40(param_1);
    if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != 0)) &&
       ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)((int)param_1 + 0x438) != 0)))) {
      *(undefined1 *)((int)param_1 + 0x45a) = 0;
      *(undefined1 *)((int)param_1 + 0x45b) = 0;
      *(undefined4 *)((int)param_1 + 0x3bc) = 0;
      FUN_00a29560();
      FUN_007765b0(param_1);
      FUN_00774160((int)param_1);
      FUN_009b0f60(4);
    }
  }
  return;
}


//// FUNCTION FUN_00776930 @ 00776930 ////

void __fastcall FUN_00776930(void *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd95a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_1 + 0x45b) != '\0') {
    ExceptionList = &local_c;
    *(undefined1 *)((int)param_1 + 0x45a) = 1;
    *(undefined1 *)((int)param_1 + 0x45b) = 0;
  }
  uVar1 = *(undefined1 *)((int)param_1 + 0x45a);
  if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != 0)) &&
     ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)((int)param_1 + 0x438) != 0)))) {
    FUN_00a29560();
    FUN_007765b0(param_1);
    FUN_00774160((int)param_1);
    FUN_009b0f60(4);
  }
  if ((*(char *)((int)param_1 + 0x45c) != '\0') && (DAT_0104e330 == 0)) {
    *(undefined1 *)((int)param_1 + 0x45a) = uVar1;
    piVar2 = operator_new(0x3c0);
    local_4 = 0;
    if (piVar2 != (int *)0x0) {
      FUN_00754790(local_2c);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00763c60(piVar2);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0x45c) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00776a50 @ 00776a50 ////

uint __fastcall FUN_00776a50(void *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int extraout_ECX;
  void *extraout_ECX_00;
  undefined4 extraout_EDX;
  float10 fVar7;
  
  if (*(int *)((int)param_1 + 0x39c) <= *(int *)((int)param_1 + 0x3a0)) {
    uVar2 = FUN_00776930(param_1);
    return uVar2 & 0xffffff00;
  }
  if (*(int *)((int)param_1 + 0x39c) / 100 - *(int *)((int)param_1 + 0x3a0) / 100 == 0x1e) {
    FUN_009b07a0(3000);
  }
  if (*(char *)((int)param_1 + 0x457) == '\0') {
LAB_00776ada:
    bVar1 = FUN_00773390((int)param_1);
    if (!bVar1) {
      iVar4 = FUN_00774c70((int)param_1);
      if (iVar4 == 0) {
        uVar2 = FUN_00776930(param_1);
        return uVar2 & 0xffffff00;
      }
      if (*(int *)((int)param_1 + 0x3e0) == 0) {
        uVar5 = FUN_00776470(param_1);
        if ((char)uVar5 == '\0') goto LAB_00776c25;
      }
      iVar4 = FUN_00774c70((int)param_1);
      iVar4 = FUN_00773f30(param_1,iVar4);
      uVar5 = 0;
      if (iVar4 == 0) {
LAB_00776c25:
        return uVar5 & 0xffffff00;
      }
      FUN_00775170(param_1);
      iVar3 = FUN_007535c0(*(int *)(iVar4 + 4));
      uVar2 = FUN_007715e0(param_1,*(int *)((int)param_1 + 0x3b0) +
                                   (*(int *)(*(int *)((int)param_1 + 0x3e0) + 0x8c) - iVar3));
      FUN_007705a0(param_1,uVar2);
      FUN_00771390(extraout_ECX,extraout_EDX);
      FUN_00775600((int)param_1);
      FUN_00775230(param_1,'\0');
      FUN_00775a40(param_1);
      iVar3 = *(int *)((int)param_1 + 0x3e0);
      if ((*(uint *)(iVar3 + 0x50) >> 0xe & 1) == 0) {
        uVar5 = FUN_007535d0(*(int *)(iVar4 + 4));
        if (*(int *)(iVar3 + 0x8c) < (int)uVar5) goto LAB_00776cee;
      }
      FUN_009721f0(iVar3);
      iVar4 = FUN_00774c70((int)param_1);
      if (iVar4 == 0) {
        FUN_009750b0((void *)0x0);
        pvVar6 = FUN_00403e20((void *)((int)param_1 + 1000),"");
        *(undefined1 *)((int)param_1 + 0x3e6) = 0;
        *(undefined4 *)((int)param_1 + 0x408) = 0;
        return (uint)pvVar6 & 0xffffff00;
      }
      iVar4 = FUN_00774c70((int)param_1);
      iVar4 = FUN_007535e0(iVar4);
      iVar4 = *(int *)((int)param_1 + 0x3b0) + iVar4;
      *(int *)((int)param_1 + 0x3b0) = iVar4;
      uVar2 = FUN_007715e0(param_1,iVar4);
      FUN_007705a0(param_1,uVar2);
      uVar5 = FUN_00776470(extraout_ECX_00);
      if ((char)uVar5 == '\0') goto LAB_00776c25;
      goto LAB_00776cee;
    }
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x3a0);
    iVar3 = FUN_0074b390();
    iVar3 = FUN_007487e0(iVar3);
    if (iVar3 <= iVar4) goto LAB_00776ada;
  }
  FUN_009750b0((void *)0x0);
  FUN_004015d0((void *)((int)param_1 + 1000),"",0);
  *(undefined4 *)((int)param_1 + 0x408) = 0;
  *(undefined1 *)((int)param_1 + 0x3e6) = 0;
  if (*(char *)((int)param_1 + 0x457) == '\0') {
LAB_00776c86:
    FUN_0074ccc0(*(int *)((int)param_1 + 0x3a0));
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x3a0);
    iVar3 = FUN_0074b390();
    iVar3 = FUN_007487e0(iVar3);
    if (iVar3 <= iVar4) goto LAB_00776c86;
    FUN_0074cc40(*(uint *)((int)param_1 + 0x3a0));
  }
  FUN_00775230(param_1,'\0');
  FUN_00775a40(param_1);
  fVar7 = FUN_00990aa0();
  uVar2 = *(uint *)((int)param_1 + 0x3a0);
  uVar5 = (int)ROUND((float)(fVar7 * (float10)1000.0)) + uVar2;
  uVar5 = uVar5 & ((int)uVar5 < 1) - 1;
  if ((int)*(uint *)((int)param_1 + 0x39c) <= (int)uVar5) {
    uVar5 = *(uint *)((int)param_1 + 0x39c);
  }
  *(uint *)((int)param_1 + 0x3a0) = uVar5;
  if (uVar5 != uVar2) {
    *(undefined1 *)((int)param_1 + 0x452) = 1;
  }
LAB_00776cee:
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION FUN_00776d00 @ 00776d00 ////

void FUN_00776d00(void)

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
  puStack_8 = &LAB_00cd95b8;
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


//// FUNCTION FUN_00776d70 @ 00776d70 ////

char __fastcall FUN_00776d70(int param_1)

{
  void *this;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_ECX;
  int iVar7;
  bool bVar8;
  float local_8;
  
  this = (void *)(param_1 + -0x50);
  uVar5 = FUN_00776640(this);
  if ((char)uVar5 != '\0') {
    return '\x01';
  }
  if (*(char *)(param_1 + 0x2f9) != '\0') goto LAB_007770e8;
  bVar3 = false;
  cVar4 = FUN_00553f70(0x3a);
  if (cVar4 == '\0') {
    cVar4 = FUN_00553f70(0x3b);
    bVar8 = false;
    if (cVar4 != '\0') goto LAB_00776dc1;
  }
  else {
LAB_00776dc1:
    bVar8 = true;
  }
  cVar4 = FUN_00553f70(0x38);
  if ((cVar4 == '\0') && (cVar4 = FUN_00553f70(0x39), cVar4 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  bVar2 = false;
  if ((DAT_0104e3b0 != 0) || (uVar5 = FUN_0076c8c0(), (char)uVar5 != '\0')) {
    bVar2 = true;
  }
  if ((bVar1) && (*(int *)(param_1 + 0x318) == 0)) {
    iVar7 = 0;
    cVar4 = FUN_00553f70(0x6d);
    if (((cVar4 != '\0') || (cVar4 = FUN_00553f70(0xb), cVar4 != '\0')) && (!bVar2)) {
      iVar7 = -1;
    }
    cVar4 = FUN_00553f70(0x6e);
    if (((cVar4 != '\0') || (cVar4 = FUN_00553f70(0xe), cVar4 != '\0')) && (!bVar2)) {
      iVar7 = iVar7 + 1;
    }
    if (bVar8) {
      iVar7 = iVar7 * 5;
    }
    if (iVar7 != 0) {
      FUN_007705a0(this,iVar7 * 100 + *(int *)(param_1 + 0x350));
    }
  }
  else {
    local_8 = 0.0;
    cVar4 = FUN_00553f70(0x6d);
    if (((cVar4 != '\0') || (cVar4 = FUN_00553f70(0xb), cVar4 != '\0')) && (!bVar2)) {
      local_8 = -1.0;
    }
    cVar4 = FUN_00553f70(0x6e);
    if (((cVar4 != '\0') || (cVar4 = FUN_00553f70(0xe), cVar4 != '\0')) && (!bVar2)) {
      local_8 = local_8 + 1.0;
    }
    if (bVar8) {
      local_8 = local_8 * 5.0;
    }
    if (local_8 != 0.0) {
      FUN_00771520((int)this);
      bVar3 = true;
      *(undefined1 *)(param_1 + 0x406) = 0;
    }
  }
  uVar5 = FUN_0076c8c0();
  if ((char)uVar5 != '\0') {
    cVar4 = FUN_007402d0(param_1);
    return cVar4;
  }
  uVar6 = FUN_00553fd0(0x69);
  if ((char)uVar6 != '\0') {
    iVar7 = FUN_00771490((int)this);
    if (iVar7 < 1) {
      iVar7 = FUN_00771490((int)this);
    }
    else {
      iVar7 = 0;
    }
    *(int *)(param_1 + 0x35c) = iVar7;
    bVar3 = true;
    *(undefined1 *)(param_1 + 0x406) = 0;
  }
  uVar6 = FUN_00553fd0(0x6a);
  if ((char)uVar6 != '\0') {
    FUN_00771490((int)this);
    FUN_00771570(extraout_ECX);
    bVar3 = true;
    *(undefined1 *)(param_1 + 0x406) = 0;
  }
  uVar6 = FUN_00553fd0(0x34);
  if ((char)uVar6 != '\0') {
    FUN_00771570((int)this);
    *(undefined1 *)(param_1 + 0x406) = 1;
  }
  uVar6 = FUN_00553fd0(0x6b);
  if (((char)uVar6 == '\0') && (cVar4 = FUN_00553f70(0x21), cVar4 == '\0')) {
    uVar6 = FUN_00553fd0(0x6c);
    if ((((char)uVar6 != '\0') || (cVar4 = FUN_00553f70(0x1d), cVar4 != '\0')) && (!bVar2)) {
      FUN_00771870(this);
    }
  }
  else if (!bVar2) {
    FUN_00771820(this);
  }
  uVar6 = FUN_00553fd0(0x2c);
  if ((char)uVar6 != '\0') {
    bVar8 = *(int *)(param_1 + 0x318) != 1;
    if (bVar8) {
      FUN_007762b0(this);
      (**(code **)(**(int **)(param_1 + 0x548) + 0xc0))(0);
    }
    else {
      FUN_00774d90((int)this);
      (**(code **)(**(int **)(param_1 + 0x548) + 0xc0))(1);
    }
    (**(code **)(**(int **)(param_1 + 0x560) + 0xc0))(bVar8);
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x402) = 1;
  }
LAB_007770e8:
  cVar4 = FUN_007402d0(param_1);
  return cVar4;
}


//// FUNCTION FUN_0077710b @ 0077710b ////

void __fastcall FUN_0077710b(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *extraout_ECX;
  undefined1 uVar3;
  undefined4 *unaff_EBX;
  bool in_ZF;
  
  uVar3 = SUB41(unaff_EBX,0);
  if (!in_ZF) {
    DAT_0104e461 = uVar3;
    FUN_009d10d0();
    FUN_009a63a0(0x200,-1);
    *(undefined1 *)((int)param_1 + 0x452) = 1;
  }
  (**(code **)(*(int *)param_1[0x124] + 0x20))(*(undefined1 *)((int)param_1 + 0x45b));
  FUN_009a56b0(CONCAT31(CONCAT21(CONCAT11(0xff,uVar3),uVar3),uVar3),'\x01');
  FUN_00774910(param_1);
  if (DAT_0104e330 == unaff_EBX) {
    iVar2 = FUN_0073e7c0(param_1[0x15a]);
    if (iVar2 == 3) {
      FUN_007761a0((int)param_1);
    }
    iVar2 = FUN_0073e7c0(param_1[0x160]);
    if (iVar2 == 3) {
      FUN_00776210((int)param_1);
    }
    if ((undefined4 *)param_1[0xda] == unaff_EBX) {
      FUN_00776320(param_1);
    }
    else if (param_1[0xda] - (int)unaff_EBX == 1) {
      FUN_00776a50(param_1);
      *(undefined1 *)((int)param_1 + 0x452) = 1;
    }
    FUN_00772780((int)param_1);
    FUN_007728e0((int)param_1);
    FUN_007719e0(extraout_ECX);
    FUN_00772970((int)param_1);
    FUN_00772a40((int)param_1);
    FUN_00774b20(param_1);
    FUN_00772710((int)param_1);
    FUN_00770df0(param_1);
    puVar1 = (undefined4 *)param_1[0x130];
    if (puVar1 != unaff_EBX) {
      if ((undefined4 *)puVar1[0x55] != unaff_EBX) {
        *(undefined4 *)puVar1[0x55] = puVar1[0x54];
      }
      if ((undefined4 *)puVar1[0x54] != unaff_EBX) {
        ((undefined4 *)puVar1[0x54])[1] = puVar1[0x55];
      }
      puVar1[0x54] = unaff_EBX;
      puVar1[0x55] = unaff_EBX;
      (**(code **)(*param_1 + 0xc))(param_1[0x130],1);
    }
    FUN_00772ad0((int)param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00777260 @ 00777260 ////

void __fastcall FUN_00777260(void *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)param_1 + 0x3a0);
  if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != 0)) &&
     ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)((int)param_1 + 0x438) != 0)))) {
    *(undefined1 *)((int)param_1 + 0x45a) = 0;
    *(undefined1 *)((int)param_1 + 0x45b) = 0;
    *(undefined4 *)((int)param_1 + 0x3bc) = 0;
    FUN_00a29560();
    FUN_007765b0(param_1);
    FUN_00774160((int)param_1);
    FUN_009b0f60(4);
  }
  uVar1 = *(uint *)((int)param_1 + 0x3a0);
  uVar2 = ((int)uVar2 < 1) - 1 & uVar2;
  if ((int)*(uint *)((int)param_1 + 0x39c) <= (int)uVar2) {
    uVar2 = *(uint *)((int)param_1 + 0x39c);
  }
  *(uint *)((int)param_1 + 0x3a0) = uVar2;
  if (uVar2 != uVar1) {
    *(undefined1 *)((int)param_1 + 0x452) = 1;
  }
  return;
}


//// FUNCTION FUN_00777300 @ 00777300 ////

void __fastcall FUN_00777300(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  char *_Memory;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  puStack_8 = &LAB_00cd9624;
  local_c = ExceptionList;
  if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != 0)) &&
     ((*(int *)(DAT_0104e4a8 + 0xd0) != 0 && (*(int *)((int)param_1 + 0x438) != 0)))) {
    ExceptionList = &local_c;
    if (*(int *)((int)param_1 + 0x368) == 1) {
      ExceptionList = &local_c;
      FUN_00776710(param_1,'\0');
    }
    if (*(char *)((int)param_1 + 0x45a) == '\0') {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"trailer_audiotrack",0x12);
      local_48 = 0x12;
      local_4c[0x12] = '\0';
      local_6c = local_60;
      local_4 = 3;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      uStack_9c = 0x77743e;
      _strncpy(local_6c,"RECORD_AUDIO",0xc);
      local_68 = 0xc;
      local_6c[0xc] = '\0';
      local_4._0_1_ = 4;
      FUN_009b5030(&uStack_a0,&local_4c);
      local_4._0_1_ = 5;
      puVar2 = FUN_009b5030(local_2c,&local_6c);
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_00669b80(this,puVar2,&LAB_00776780,FUN_007710e0);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x20;
      local_4c = _malloc(0x20);
      _strncpy(local_4c,"TRAILER_AUDIO_TOOLTIP_NO",0x18);
      local_48 = 0x18;
      local_4c[0x18] = '\0';
      local_4 = 8;
      uStack_9c = 0x77753d;
      FUN_009b5030(local_2c,&local_4c);
      local_4 = CONCAT31(local_4._1_3_,9);
      (**(code **)(*DAT_0104da18 + 0x90))();
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      _Memory = local_4c;
      if (0x14 < local_44) {
LAB_00777574:
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    else {
      piVar1 = operator_new(0x3c0);
      local_4 = 0;
      if (piVar1 != (int *)0x0) {
        FUN_00754790(&local_6c);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00763c60(piVar1);
        _Memory = local_6c;
        if (10 < local_64) goto LAB_00777574;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00777590 @ 00777590 ////

void __thiscall FUN_00777590(void *this,uint param_1)

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
    uVar1 = FUN_00776d00();
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


//// FUNCTION FUN_007776f0 @ 007776f0 ////

void __fastcall FUN_007776f0(void *param_1)

{
  undefined1 uVar1;
  char cVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  float10 fVar12;
  uint *puVar13;
  uint local_248;
  wchar_t *local_218;
  uint local_214;
  uint local_210;
  wchar_t local_20c [10];
  undefined2 *local_1f8;
  undefined4 local_1f4;
  uint local_1f0;
  undefined2 local_1ec [10];
  float local_1d8;
  void *local_1d4;
  wchar_t *local_1d0;
  uint local_1cc;
  uint local_1c8;
  wchar_t local_1c4 [10];
  wchar_t *local_1b0;
  uint local_1ac;
  uint local_1a8;
  wchar_t local_1a4 [10];
  wchar_t *local_190;
  uint local_18c;
  uint local_188;
  wchar_t local_184 [10];
  wchar_t *local_170;
  uint local_16c;
  uint local_168;
  wchar_t *local_150;
  uint local_14c;
  uint local_148;
  undefined1 *local_130;
  wchar_t *local_12c;
  uint local_128;
  uint local_124;
  undefined2 *local_10c;
  undefined4 local_108;
  uint local_104;
  undefined2 local_100 [10];
  char *local_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_cc [48];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar5 = DAT_0104e4a8;
  puStack_8 = &LAB_00cd9814;
  local_c = ExceptionList;
  local_10c = local_100;
  local_100[0] = 0;
  local_108 = 0;
  local_104 = 10;
  local_4 = 0;
  local_1d4 = param_1;
  if (DAT_0104e310 == 0) {
    ExceptionList = &local_c;
    puVar11 = (undefined4 *)FUN_00567ff0(&local_12c);
    iVar5 = DAT_0104e4a8;
    FUN_0040cae0(&local_10c,(wchar_t *)*puVar11,puVar11[1]);
    sVar3 = FUN_00ace02d(L"\\The Movies\\Movies\\");
    FUN_0040cae0(&local_10c,L"\\The Movies\\Movies\\",sVar3);
    FUN_0040cae0(&local_10c,*(wchar_t **)(iVar5 + 0x80),*(size_t *)(iVar5 + 0x84));
    if (10 < local_124) {
                    /* WARNING: Subroutine does not return */
      _free(local_12c);
    }
  }
  else {
    ExceptionList = &local_c;
    FUN_0040cae0(&local_10c,(wchar_t *)PTR_DAT_00e59204,DAT_00e59208);
    FUN_0040cae0(&local_10c,*(wchar_t **)(iVar5 + 0x80),*(size_t *)(iVar5 + 0x84));
  }
  sVar3 = FUN_00ace02d(L".ini");
  FUN_0040cae0(&local_10c,L".ini",sVar3);
  FUN_00563240(local_cc);
  local_4._0_1_ = 1;
  *(undefined1 *)((int)param_1 + 0x455) = 0;
  uVar4 = FUN_00564a20(local_cc,&local_10c);
  if ((char)uVar4 == '\0') {
    iVar5 = FUN_0075aa20();
    FUN_0075b310(iVar5);
    iVar5 = FUN_0074b390();
    FUN_0074c8d0(iVar5);
    *(undefined1 *)((int)param_1 + 0x455) = 1;
    *(undefined1 *)((int)param_1 + 0x457) = 1;
    *(undefined1 *)((int)param_1 + 0x458) = 1;
    FUN_0074b390();
    FUN_00748a10();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0055ed70(local_cc);
  }
  else {
    local_218 = local_20c;
    local_20c[0] = L'\0';
    local_214 = 0;
    local_210 = 10;
    uVar4 = FUN_00ace02d(L"global");
    FUN_004036d0(&local_218,L"global",uVar4);
    local_4._0_1_ = 2;
    FUN_00562420(local_cc,&local_218,'\x01');
    if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
      _free(local_218);
    }
    local_218 = local_20c;
    local_20c[0] = L'\0';
    local_214 = 0;
    local_210 = 10;
    uVar4 = FUN_00ace02d(L"GUID");
    FUN_004036d0(&local_218,L"GUID",uVar4);
    local_4._0_1_ = 3;
    iVar5 = FUN_00561ca0(local_cc,&local_218,0);
    local_4._0_1_ = 1;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 1;
    if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
      _free(local_218);
    }
    if (*(int *)(DAT_0104e4a8 + 0x6a0) == iVar5) {
      puVar11 = local_cc;
      pvVar6 = (void *)FUN_0075aa20();
      FUN_0075aca0(pvVar6,puVar11);
      FUN_00774420((int)param_1);
      local_218 = local_20c;
      local_20c[0] = L'\0';
      local_214 = 0;
      local_210 = 10;
      uVar4 = FUN_00ace02d(L"subtitles");
      FUN_004036d0(&local_218,L"subtitles",uVar4);
      local_4._0_1_ = 4;
      uVar7 = FUN_00562420(local_cc,&local_218,'\0');
      local_4._0_1_ = 1;
      if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
        _free(local_218);
      }
      if ((char)uVar7 != '\0') {
        FUN_00562580(local_cc,6);
        cVar2 = FUN_00562580(local_cc,0);
        while (cVar2 != '\0') {
          local_218 = local_20c;
          local_20c[0] = L'\0';
          local_214 = 0;
          local_210 = 10;
          uVar4 = FUN_00ace02d(L"text");
          FUN_004036d0(&local_218,L"text",uVar4);
          local_4._0_1_ = 5;
          FUN_005619b0(local_cc,(int *)&local_150,&local_218);
          if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
            _free(local_218);
          }
          local_1b0 = local_1a4;
          local_1a4[0] = L'\0';
          local_1ac = 0;
          local_1a8 = 10;
          uVar4 = FUN_00ace02d(L"font");
          FUN_004036d0(&local_1b0,L"font",uVar4);
          local_4._0_1_ = 8;
          piVar8 = FUN_005619b0(local_cc,(int *)&local_170,&local_1b0);
          local_4._0_1_ = 9;
          FUN_00568870(&local_12c,piVar8);
          if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
            _free(local_170);
          }
          local_4._0_1_ = 0xb;
          if (10 < local_1a8) {
                    /* WARNING: Subroutine does not return */
            _free(local_1b0);
          }
          iVar5 = FUN_007721c0(local_cc);
          iVar9 = FUN_00772330(local_cc);
          FUN_0076cb80(&local_150,iVar5,iVar9,&local_12c);
          if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
            _free(local_12c);
          }
          local_4._0_1_ = 1;
          if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
            _free(local_150);
          }
          cVar2 = FUN_00562580(local_cc,2);
        }
      }
      local_218 = local_20c;
      local_20c[0] = L'\0';
      local_214 = 0;
      local_210 = 10;
      uVar4 = FUN_00ace02d(L"music");
      FUN_004036d0(&local_218,L"music",uVar4);
      local_4._0_1_ = 0xd;
      uVar7 = FUN_00562420(local_cc,&local_218,'\0');
      local_4._0_1_ = 1;
      if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
        _free(local_218);
      }
      if ((char)uVar7 != '\0') {
        FUN_00562580(local_cc,6);
        FUN_00562580(local_cc,0);
        do {
          local_190 = local_184;
          local_184[0] = L'\0';
          local_18c = 0;
          local_188 = 10;
          uVar4 = FUN_00ace02d(L"text");
          if (local_188 <= uVar4) {
            if (10 < local_188) {
                    /* WARNING: Subroutine does not return */
              _free(local_190);
            }
            local_188 = uVar4 + 0x20 & 0xffffffe0;
            local_190 = _malloc(local_188 * 2);
          }
          _wcsncpy(local_190,L"text",uVar4);
          local_190[uVar4] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,0xe);
          local_18c = uVar4;
          FUN_005619b0(local_cc,(int *)&local_170,&local_190);
          if (10 < local_188) {
                    /* WARNING: Subroutine does not return */
            _free(local_190);
          }
          local_1d0 = local_1c4;
          local_1c4[0] = L'\0';
          local_1cc = 0;
          local_1c8 = 10;
          uVar4 = FUN_00ace02d(L"criteria");
          if (local_1c8 <= uVar4) {
            if (10 < local_1c8) {
                    /* WARNING: Subroutine does not return */
              _free(local_1d0);
            }
            uVar10 = uVar4 + 0x20 >> 5;
            local_1c8 = uVar10 << 5;
            local_1d0 = _malloc(uVar10 * 0x40);
          }
          _wcsncpy(local_1d0,L"criteria",uVar4);
          local_1d0[uVar4] = L'\0';
          local_4._0_1_ = 0x11;
          local_1cc = uVar4;
          FUN_005619b0(local_cc,(int *)&local_150,&local_1d0);
          local_4._0_1_ = 0x13;
          if (10 < local_1c8) {
                    /* WARNING: Subroutine does not return */
            _free(local_1d0);
          }
          iVar5 = FUN_007721c0(local_cc);
          iVar9 = FUN_00772330(local_cc);
          local_130 = &stack0xfffffdac;
          puVar13 = &local_248;
          local_248 = local_248 & 0xffff0000;
          uVar7 = 0;
          uVar4 = 10;
          FUN_004036d0(&stack0xfffffdac,local_170,local_16c);
          puVar11 = FUN_00750430(*(void **)((int)local_1d4 + 0x370),iVar5,iVar9,puVar13,uVar7,uVar4)
          ;
          FUN_004036d0(puVar11 + 0x1d,local_150,local_14c);
          *(undefined1 *)(puVar11 + 0x2f) = 0;
          if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
            _free(local_150);
          }
          local_4._0_1_ = 1;
          if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
            _free(local_170);
          }
          cVar2 = FUN_00562580(local_cc,2);
        } while (cVar2 != '\0');
      }
      local_218 = local_20c;
      local_20c[0] = L'\0';
      local_214 = 0;
      local_210 = 10;
      uVar4 = FUN_00ace02d(L"wavs");
      FUN_004036d0(&local_218,L"wavs",uVar4);
      local_4._0_1_ = 0x14;
      uVar7 = FUN_00562420(local_cc,&local_218,'\0');
      local_4._0_1_ = 1;
      if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
        _free(local_218);
      }
      if ((char)uVar7 != '\0') {
        FUN_00562580(local_cc,6);
        FUN_00562580(local_cc,0);
        do {
          local_1d0 = local_1c4;
          local_1c4[0] = L'\0';
          local_1cc = 0;
          local_1c8 = 10;
          uVar4 = FUN_00ace02d(L"text");
          if (local_1c8 <= uVar4) {
            if (10 < local_1c8) {
                    /* WARNING: Subroutine does not return */
              _free(local_1d0);
            }
            local_1c8 = uVar4 + 0x20 & 0xffffffe0;
            local_1d0 = _malloc(local_1c8 * 2);
          }
          _wcsncpy(local_1d0,L"text",uVar4);
          local_1d0[uVar4] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,0x15);
          local_1cc = uVar4;
          FUN_005619b0(local_cc,(int *)&local_170,&local_1d0);
          if (10 < local_1c8) {
                    /* WARNING: Subroutine does not return */
            _free(local_1d0);
          }
          local_190 = local_184;
          local_184[0] = L'\0';
          local_18c = 0;
          local_188 = 10;
          uVar4 = FUN_00ace02d(L"filename");
          if (local_188 <= uVar4) {
            if (10 < local_188) {
                    /* WARNING: Subroutine does not return */
              _free(local_190);
            }
            local_188 = uVar4 + 0x20 & 0xffffffe0;
            local_190 = _malloc(local_188 * 2);
          }
          _wcsncpy(local_190,L"filename",uVar4);
          local_190[uVar4] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,0x18);
          local_18c = uVar4;
          FUN_005619b0(local_cc,(int *)&local_150,&local_190);
          if (10 < local_188) {
                    /* WARNING: Subroutine does not return */
            _free(local_190);
          }
          local_1b0 = local_1a4;
          local_1a4[0] = L'\0';
          local_1ac = 0;
          local_1a8 = 10;
          uVar4 = FUN_00ace02d(L"criteria");
          if (local_1a8 <= uVar4) {
            if (10 < local_1a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_1b0);
            }
            uVar10 = uVar4 + 0x20 >> 5;
            local_1a8 = uVar10 << 5;
            local_1b0 = _malloc(uVar10 * 0x40);
          }
          _wcsncpy(local_1b0,L"criteria",uVar4);
          local_1b0[uVar4] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,0x1b);
          local_1ac = uVar4;
          FUN_005619b0(local_cc,(int *)&local_12c,&local_1b0);
          if (10 < local_1a8) {
                    /* WARNING: Subroutine does not return */
            _free(local_1b0);
          }
          local_218 = local_20c;
          local_20c[0] = L'\0';
          local_214 = 0;
          local_210 = 10;
          uVar4 = FUN_00ace02d(L"criteriaindex");
          if (local_210 <= uVar4) {
            if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
              _free(local_218);
            }
            local_210 = uVar4 + 0x20 & 0xffffffe0;
            local_218 = _malloc(local_210 * 2);
          }
          _wcsncpy(local_218,L"criteriaindex",uVar4);
          local_218[uVar4] = L'\0';
          local_4._0_1_ = 0x1e;
          local_214 = uVar4;
          uVar7 = FUN_00561ca0(local_cc,&local_218,0);
          local_4._0_1_ = 0x1d;
          uVar1 = (undefined1)local_4;
          local_4._0_1_ = 0x1d;
          if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
            _free(local_218);
          }
          if (local_16c != 0) {
            iVar5 = FUN_007721c0(local_cc);
            local_1f8 = local_1ec;
            local_1ec[0] = 0;
            local_1f4 = 0;
            local_1f0 = 10;
            uVar4 = FUN_00ace02d(L"volume");
            FUN_004036d0(&local_1f8,L"volume",uVar4);
            local_4._0_1_ = 0x1f;
            fVar12 = FUN_00561b60(local_cc,&local_1f8,1.0);
            local_1d8 = (float)fVar12;
            local_4._0_1_ = 0x1d;
            if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
              _free(local_1f8);
            }
            if (local_128 == 0) {
              if (local_14c == 0) {
                FUN_0040cae0(&local_150,local_170,local_16c);
              }
              FUN_0075d7f0(local_1d4,&local_150,&local_170,iVar5,local_1d8,'\0');
              uVar1 = (undefined1)local_4;
            }
            else {
              local_248 = 0x77833f;
              FUN_0075d700(local_1d4,&local_170,iVar5,local_1d8,&local_12c,uVar7,'\0');
              uVar1 = (undefined1)local_4;
            }
          }
          local_4._0_1_ = uVar1;
          if (10 < local_124) {
                    /* WARNING: Subroutine does not return */
            _free(local_12c);
          }
          if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
            _free(local_150);
          }
          local_4._0_1_ = 1;
          if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
            _free(local_170);
          }
          cVar2 = FUN_00562580(local_cc,2);
        } while (cVar2 != '\0');
      }
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_1f4 = 0;
      local_1f0 = 10;
      uVar4 = FUN_00ace02d(L"mics");
      FUN_004036d0(&local_1f8,L"mics",uVar4);
      local_4._0_1_ = 0x20;
      uVar7 = FUN_00562420(local_cc,&local_1f8,'\0');
      local_4._0_1_ = 1;
      if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      if ((char)uVar7 != '\0') {
        FUN_00562580(local_cc,6);
        FUN_00562580(local_cc,0);
        do {
          local_218 = local_20c;
          local_20c[0] = L'\0';
          local_214 = 0;
          local_210 = 10;
          uVar4 = FUN_00ace02d(L"text");
          if (local_210 <= uVar4) {
            if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
              _free(local_218);
            }
            local_210 = uVar4 + 0x20 & 0xffffffe0;
            local_218 = _malloc(local_210 * 2);
          }
          _wcsncpy(local_218,L"text",uVar4);
          local_218[uVar4] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,0x21);
          local_214 = uVar4;
          FUN_005619b0(local_cc,(int *)&local_170,&local_218);
          if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
            _free(local_218);
          }
          local_1b0 = local_1a4;
          local_1a4[0] = L'\0';
          local_1ac = 0;
          local_1a8 = 10;
          uVar4 = FUN_00ace02d(L"filename");
          if (local_1a8 <= uVar4) {
            if (10 < local_1a8) {
                    /* WARNING: Subroutine does not return */
              _free(local_1b0);
            }
            local_1a8 = uVar4 + 0x20 & 0xffffffe0;
            local_1b0 = _malloc(local_1a8 * 2);
          }
          _wcsncpy(local_1b0,L"filename",uVar4);
          local_1b0[uVar4] = L'\0';
          local_4._0_1_ = 0x24;
          local_1ac = uVar4;
          FUN_005619b0(local_cc,(int *)&local_150,&local_1b0);
          local_4 = CONCAT31(local_4._1_3_,0x26);
          if (10 < local_1a8) {
                    /* WARNING: Subroutine does not return */
            _free(local_1b0);
          }
          iVar5 = FUN_007721c0(local_cc);
          local_1d0 = local_1c4;
          local_1c4[0] = L'\0';
          local_1cc = 0;
          local_1c8 = 10;
          uVar4 = FUN_00ace02d(L"volume");
          if (local_1c8 <= uVar4) {
            if (10 < local_1c8) {
                    /* WARNING: Subroutine does not return */
              _free(local_1d0);
            }
            uVar10 = uVar4 + 0x20 >> 5;
            local_1c8 = uVar10 << 5;
            local_1d0 = _malloc(uVar10 * 0x40);
          }
          _wcsncpy(local_1d0,L"volume",uVar4);
          local_1d0[uVar4] = L'\0';
          local_4._0_1_ = 0x27;
          local_1cc = uVar4;
          fVar12 = FUN_00561b60(local_cc,&local_1d0,1.0);
          local_130 = (undefined1 *)(float)fVar12;
          local_4._0_1_ = 0x26;
          if (10 < local_1c8) {
                    /* WARNING: Subroutine does not return */
            _free(local_1d0);
          }
          if (local_14c == 0) {
            FUN_0040cae0(&local_150,local_170,local_16c);
          }
          puVar11 = FUN_0075d7f0(local_1d4,&local_150,&local_170,iVar5,local_130,'\x01');
          if (puVar11 != (undefined4 *)0x0) {
            local_1f8 = local_1ec;
            local_1ec[0] = 0;
            local_1f4 = 0;
            local_1f0 = 10;
            uVar4 = FUN_00ace02d(L"role");
            FUN_004036d0(&local_1f8,L"role",uVar4);
            local_4._0_1_ = 0x28;
            FUN_005619b0(local_cc,(int *)&local_12c,&local_1f8);
            if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
              _free(local_1f8);
            }
            FUN_004036d0(puVar11 + 0x26,local_12c,local_128);
            if (puVar11[0x27] != 0) {
              local_1d8 = -NAN;
              puVar11[0x32] = 0xffff0000;
            }
            if (10 < local_124) {
                    /* WARNING: Subroutine does not return */
              _free(local_12c);
            }
          }
          if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
            _free(local_150);
          }
          local_4._0_1_ = 1;
          if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
            _free(local_170);
          }
          cVar2 = FUN_00562580(local_cc,2);
        } while (cVar2 != '\0');
      }
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_1f4 = 0;
      local_1f0 = 10;
      uVar4 = FUN_00ace02d(L"global");
      FUN_004036d0(&local_1f8,L"global",uVar4);
      local_4._0_1_ = 0x29;
      FUN_00562420(local_cc,&local_1f8,'\x01');
      if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_1f4 = 0;
      local_1f0 = 10;
      uVar4 = FUN_00ace02d(L"HasTitles");
      FUN_004036d0(&local_1f8,L"HasTitles",uVar4);
      local_4._0_1_ = 0x2a;
      iVar5 = FUN_00561ca0(local_cc,&local_1f8,0);
      pvVar6 = local_1d4;
      *(bool *)((int)local_1d4 + 0x457) = iVar5 != 0;
      if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_1f4 = 0;
      local_1f0 = 10;
      uVar4 = FUN_00ace02d(L"HasCredits");
      FUN_004036d0(&local_1f8,L"HasCredits",uVar4);
      local_4._0_1_ = 0x2b;
      iVar5 = FUN_00561ca0(local_cc,&local_1f8,0);
      *(bool *)((int)pvVar6 + 0x458) = iVar5 != 0;
      if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_1f4 = 0;
      local_1f0 = 10;
      uVar4 = FUN_00ace02d(L"MicVolume");
      FUN_004036d0(&local_1f8,L"MicVolume",uVar4);
      local_4._0_1_ = 0x2c;
      fVar12 = FUN_00561b60(local_cc,&local_1f8,0.0);
      *(float *)((int)pvVar6 + 0x444) = (float)fVar12;
      if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_1f4 = 0;
      local_1f0 = 10;
      uVar4 = FUN_00ace02d(L"MusicVol");
      FUN_004036d0(&local_1f8,L"MusicVol",uVar4);
      local_4._0_1_ = 0x2d;
      fVar12 = FUN_00561b60(local_cc,&local_1f8,*(float *)((int)pvVar6 + 0x43c));
      *(float *)((int)pvVar6 + 0x43c) = (float)fVar12;
      local_4._0_1_ = 1;
      if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      FUN_0075dae0(*(void **)((int)pvVar6 + 0x730),*(float *)((int)pvVar6 + 0x43c));
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_1f4 = 0;
      local_1f0 = 10;
      uVar4 = FUN_00ace02d(L"SfxVol");
      FUN_004036d0(&local_1f8,L"SfxVol",uVar4);
      local_4._0_1_ = 0x2e;
      fVar12 = FUN_00561b60(local_cc,&local_1f8,*(float *)((int)pvVar6 + 0x440));
      *(float *)((int)pvVar6 + 0x440) = (float)fVar12;
      local_4._0_1_ = 1;
      if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      FUN_0075dae0(*(void **)((int)pvVar6 + 0x364),*(float *)((int)pvVar6 + 0x440));
      local_1f8 = local_1ec;
      local_1ec[0] = 0;
      local_1f4 = 0;
      local_1f0 = 10;
      uVar4 = FUN_00ace02d(L"TitlesBackdrop");
      FUN_004036d0(&local_1f8,L"TitlesBackdrop",uVar4);
      local_4._0_1_ = 0x2f;
      piVar8 = FUN_005619b0(local_cc,(int *)&local_12c,&local_1f8);
      local_4._0_1_ = 0x30;
      FUN_00568870(&local_ec,piVar8);
      if (10 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_4._0_1_ = 0x32;
      if (10 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      if (local_e8 != 0) {
        iVar5 = FUN_0074b390();
        FUN_004015d0((void *)(iVar5 + 0x198),local_ec,local_e8);
      }
      local_218 = local_20c;
      local_20c[0] = L'\0';
      local_214 = 0;
      local_210 = 10;
      uVar4 = FUN_00ace02d(L"TitlesFont");
      FUN_004036d0(&local_218,L"TitlesFont",uVar4);
      local_4._0_1_ = 0x34;
      piVar8 = FUN_005619b0(local_cc,(int *)&local_170,&local_218);
      local_4._0_1_ = 0x35;
      puVar11 = FUN_00568870(&local_150,piVar8);
      FUN_004015d0(&local_ec,(char *)*puVar11,puVar11[1]);
      if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150);
      }
      if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
        _free(local_170);
      }
      local_4._0_1_ = 0x32;
      if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
        _free(local_218);
      }
      if (local_e8 != 0) {
        iVar5 = FUN_0074b390();
        FUN_004015d0((void *)(iVar5 + 0x158),local_ec,local_e8);
      }
      local_218 = local_20c;
      local_20c[0] = L'\0';
      local_214 = 0;
      local_210 = 10;
      uVar4 = FUN_00ace02d(L"TitlesFontColor");
      FUN_004036d0(&local_218,L"TitlesFontColor",uVar4);
      local_4._0_1_ = 0x36;
      piVar8 = FUN_005619b0(local_cc,(int *)&local_170,&local_218);
      local_4._0_1_ = 0x37;
      puVar11 = FUN_00568870(&local_150,piVar8);
      FUN_004015d0(&local_ec,(char *)*puVar11,puVar11[1]);
      if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150);
      }
      if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
        _free(local_170);
      }
      local_4._0_1_ = 0x32;
      if (10 < local_210) {
                    /* WARNING: Subroutine does not return */
        _free(local_218);
      }
      if (local_e8 != 0) {
        iVar5 = FUN_0074b390();
        FUN_004015d0((void *)(iVar5 + 0x178),local_ec,local_e8);
      }
      iVar5 = FUN_0074b390();
      FUN_0074b420((int *)(iVar5 + 0x1b8));
      FUN_0075dae0(*(void **)((int)pvVar6 + 0x364),*(float *)((int)pvVar6 + 0x440));
      FUN_0075dae0(*(void **)((int)pvVar6 + 0x748),*(float *)((int)pvVar6 + 0x444));
      if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0055ed70(local_cc);
    }
    else {
      local_4._0_1_ = uVar1;
      iVar5 = FUN_0075aa20();
      FUN_0075b310(iVar5);
      iVar5 = FUN_0074b390();
      FUN_0074c8d0(iVar5);
      *(undefined1 *)((int)param_1 + 0x455) = 1;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0055ed70(local_cc);
    }
  }
  if (local_104 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_10c);
}


//// FUNCTION FUN_00778e80 @ 00778e80 ////

void __thiscall FUN_00778e80(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    FUN_00777590(this,1);
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


//// FUNCTION MovieProject_SerializeTimelineToIni @ 00778f00 ////

undefined4 __thiscall
MovieProject_SerializeTimelineToIni(void *this,void *param_1,undefined4 param_2,uint param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  int iVar6;
  void *this_00;
  wchar_t *local_298;
  uint local_294;
  uint local_290;
  wchar_t local_28c [10];
  wchar_t *local_278;
  int *local_274;
  void *local_270;
  wchar_t *local_26c;
  uint local_268;
  uint local_264;
  wchar_t local_260 [10];
  wchar_t *local_24c;
  uint local_248;
  uint local_244;
  wchar_t local_240 [10];
  wchar_t *local_22c;
  uint local_228;
  uint local_224;
  wchar_t local_220 [10];
  wchar_t *local_20c;
  uint local_208;
  uint local_204;
  wchar_t local_200 [10];
  wchar_t *local_1ec;
  uint local_1e8;
  uint local_1e4;
  wchar_t local_1e0 [10];
  wchar_t *local_1cc;
  uint local_1c8;
  uint local_1c4;
  wchar_t local_1c0 [10];
  wchar_t *local_1ac;
  uint local_1a8;
  uint local_1a4;
  wchar_t local_1a0 [10];
  wchar_t *local_18c;
  uint local_188;
  uint local_184;
  wchar_t local_180 [10];
  wchar_t *local_16c;
  uint local_168;
  uint local_164;
  wchar_t local_160 [10];
  undefined4 local_14c [48];
  wchar_t local_8c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Serializes a finished/in-progress movie project's full audio timeline to an
                       ini-tree structure via the FUN_00561xxx/562xxx generic ini-writer helper
                       family (paired with the FUN_00558xxx reader family used by
                       ScriptDefinition_LoadFromIni). Writes numbered sections: subtitle_N
                       (subtitles/text/start/duration/font from this+0x36c list), music_N
                       (music/text/criteria/start/duration from this+0x370 list), wav_N
                       (wavs/text/filename/criteria/criteriaindex/start/duration/volume from
                       this+0x374 list -- sound effects), mic_N
                       (mics/text/filename/start/duration/volume/role from this+0x378 list --
                       character dialogue lines). Also writes global settings:
                       global/HasTitles/HasCredits/MicVolume/TitlesBackdrop/TitlesFont/TitlesFontColor/MusicVol/SfxVol.
                       This is very likely the save/export format for a made movie's full
                       audio/timing data (subtitle timing, music cue placement with auto-select
                       criteria, SFX timing, dialogue lines with character roles) -- directly useful
                       for understanding the movie-making data model. Not RTTI-attributed (single
                       ordinary caller found). */
  puStack_8 = &LAB_00cd9a01;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_270 = this;
  FUN_00563240(local_14c);
  local_1cc = local_1c0;
  local_1c0[0] = L'\0';
  local_1c8 = 0;
  local_1c4 = 10;
  iVar6 = *(int *)((int)this + 0x36c);
  local_278 = (wchar_t *)0x0;
  if ((iVar6 != 0) && (local_274 = *(int **)(iVar6 + 0x68), local_274 != *(int **)(iVar6 + 0x6c))) {
    do {
      iVar6 = *local_274;
      uVar2 = FUN_00ace02d(L"subtitle_");
      if (local_1c4 <= uVar2) {
        if (10 < local_1c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1cc);
        }
        uVar3 = uVar2 + 0x20 >> 5;
        local_1c4 = uVar3 << 5;
        local_1cc = _malloc(uVar3 * 0x40);
      }
      _wcsncpy(local_1cc,L"subtitle_",uVar2);
      local_1cc[uVar2] = L'\0';
      local_1c8 = uVar2;
      sVar4 = _swprintf(local_8c,0xd18f7c,local_278);
      FUN_0040cae0(&local_1cc,local_8c,sVar4);
      local_1ec = local_1e0;
      local_1e0[0] = L'\0';
      local_1e8 = 0;
      local_1e4 = 10;
      uVar2 = FUN_00ace02d(L"subtitles");
      if (local_1e4 <= uVar2) {
        if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ec);
        }
        local_1e4 = uVar2 + 0x20 & 0xffffffe0;
        local_1ec = _malloc(local_1e4 * 2);
      }
      _wcsncpy(local_1ec,L"subtitles",uVar2);
      local_1ec[uVar2] = L'\0';
      local_4._0_1_ = 3;
      local_1e8 = uVar2;
      FUN_00562420(local_14c,&local_1ec,'\x01');
      local_4 = CONCAT31(local_4._1_3_,2);
      if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1ec);
      }
      FUN_00562460(local_14c,&local_1cc,'\x01');
      local_20c = local_200;
      local_200[0] = L'\0';
      local_208 = 0;
      local_204 = 10;
      uVar2 = FUN_00ace02d(L"text");
      if (local_204 <= uVar2) {
        if (10 < local_204) {
                    /* WARNING: Subroutine does not return */
          _free(local_20c);
        }
        local_204 = uVar2 + 0x20 & 0xffffffe0;
        local_20c = _malloc(local_204 * 2);
      }
      _wcsncpy(local_20c,L"text",uVar2);
      local_20c[uVar2] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,4);
      local_208 = uVar2;
      FUN_00561350(local_14c,&local_20c,(undefined4 *)(iVar6 + 0xec));
      if (10 < local_204) {
                    /* WARNING: Subroutine does not return */
        _free(local_20c);
      }
      local_24c = local_240;
      local_240[0] = L'\0';
      local_248 = 0;
      local_244 = 10;
      uVar2 = FUN_00ace02d(L"start");
      if (local_244 <= uVar2) {
        if (10 < local_244) {
                    /* WARNING: Subroutine does not return */
          _free(local_24c);
        }
        uVar3 = uVar2 + 0x20 >> 5;
        local_244 = uVar3 << 5;
        local_24c = _malloc(uVar3 * 0x40);
      }
      _wcsncpy(local_24c,L"start",uVar2);
      local_24c[uVar2] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,5);
      local_248 = uVar2;
      FUN_00561610(local_14c,&local_24c,*(undefined4 *)(iVar6 + 0xc0));
      if (10 < local_244) {
                    /* WARNING: Subroutine does not return */
        _free(local_24c);
      }
      local_26c = local_260;
      local_260[0] = L'\0';
      local_268 = 0;
      local_264 = 10;
      uVar2 = FUN_00ace02d(L"duration");
      if (local_264 <= uVar2) {
        if (10 < local_264) {
                    /* WARNING: Subroutine does not return */
          _free(local_26c);
        }
        local_264 = uVar2 + 0x20 & 0xffffffe0;
        local_26c = _malloc(local_264 * 2);
      }
      _wcsncpy(local_26c,L"duration",uVar2);
      local_26c[uVar2] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,6);
      local_268 = uVar2;
      FUN_00561610(local_14c,&local_26c,*(undefined4 *)(iVar6 + 0xc4));
      if (10 < local_264) {
                    /* WARNING: Subroutine does not return */
        _free(local_26c);
      }
      local_22c = local_220;
      local_220[0] = L'\0';
      local_228 = 0;
      local_224 = 10;
      uVar2 = FUN_00ace02d(L"font");
      if (local_224 <= uVar2) {
        if (10 < local_224) {
                    /* WARNING: Subroutine does not return */
          _free(local_22c);
        }
        local_224 = uVar2 + 0x20 & 0xffffffe0;
        local_22c = _malloc(local_224 * 2);
      }
      _wcsncpy(local_22c,L"font",uVar2);
      local_22c[uVar2] = L'\0';
      local_4._0_1_ = 7;
      local_228 = uVar2;
      puVar5 = FUN_00568790(&local_298,(undefined4 *)(iVar6 + 0xcc));
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_00561350(local_14c,&local_22c,puVar5);
      if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
        _free(local_298);
      }
      if (10 < local_224) {
                    /* WARNING: Subroutine does not return */
        _free(local_22c);
      }
      local_274 = local_274 + 1;
      local_278 = (wchar_t *)((int)local_278 + 1);
    } while (local_274 != *(int **)(*(int *)((int)local_270 + 0x36c) + 0x6c));
  }
  iVar6 = *(int *)((int)local_270 + 0x370);
  if (iVar6 != 0) {
    local_274 = *(int **)(iVar6 + 0x68);
    local_278 = (wchar_t *)0x0;
    if (local_274 != *(int **)(iVar6 + 0x6c)) {
      do {
        iVar6 = *local_274;
        uVar2 = FUN_00ace02d(L"music_");
        if (local_1c4 <= uVar2) {
          if (10 < local_1c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1cc);
          }
          local_1c4 = uVar2 + 0x20 & 0xffffffe0;
          local_1cc = _malloc(local_1c4 * 2);
        }
        _wcsncpy(local_1cc,L"music_",uVar2);
        local_1cc[uVar2] = L'\0';
        local_1c8 = uVar2;
        sVar4 = _swprintf(local_8c,0xd18f7c,local_278);
        FUN_0040cae0(&local_1cc,local_8c,sVar4);
        local_22c = local_220;
        local_220[0] = L'\0';
        local_228 = 0;
        local_224 = 10;
        uVar2 = FUN_00ace02d(L"music");
        if (local_224 <= uVar2) {
          if (10 < local_224) {
                    /* WARNING: Subroutine does not return */
            _free(local_22c);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_224 = uVar3 << 5;
          local_22c = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_22c,L"music",uVar2);
        local_22c[uVar2] = L'\0';
        local_4._0_1_ = 9;
        local_228 = uVar2;
        FUN_00562420(local_14c,&local_22c,'\x01');
        local_4 = CONCAT31(local_4._1_3_,2);
        if (10 < local_224) {
                    /* WARNING: Subroutine does not return */
          _free(local_22c);
        }
        FUN_00562460(local_14c,&local_1cc,'\x01');
        local_26c = local_260;
        local_260[0] = L'\0';
        local_268 = 0;
        local_264 = 10;
        uVar2 = FUN_00ace02d(L"text");
        if (local_264 <= uVar2) {
          if (10 < local_264) {
                    /* WARNING: Subroutine does not return */
            _free(local_26c);
          }
          local_264 = uVar2 + 0x20 & 0xffffffe0;
          local_26c = _malloc(local_264 * 2);
        }
        _wcsncpy(local_26c,L"text",uVar2);
        local_26c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,10);
        local_268 = uVar2;
        FUN_00561350(local_14c,&local_26c,(undefined4 *)(iVar6 + 0xec));
        if (10 < local_264) {
                    /* WARNING: Subroutine does not return */
          _free(local_26c);
        }
        local_24c = local_240;
        local_240[0] = L'\0';
        local_248 = 0;
        local_244 = 10;
        uVar2 = FUN_00ace02d(L"criteria");
        if (local_244 <= uVar2) {
          if (10 < local_244) {
                    /* WARNING: Subroutine does not return */
            _free(local_24c);
          }
          local_244 = uVar2 + 0x20 & 0xffffffe0;
          local_24c = _malloc(local_244 * 2);
        }
        _wcsncpy(local_24c,L"criteria",uVar2);
        local_24c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0xb);
        local_248 = uVar2;
        FUN_00561350(local_14c,&local_24c,(undefined4 *)(iVar6 + 0x74));
        if (10 < local_244) {
                    /* WARNING: Subroutine does not return */
          _free(local_24c);
        }
        local_20c = local_200;
        local_200[0] = L'\0';
        local_208 = 0;
        local_204 = 10;
        uVar2 = FUN_00ace02d(L"start");
        if (local_204 <= uVar2) {
          if (10 < local_204) {
                    /* WARNING: Subroutine does not return */
            _free(local_20c);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_204 = uVar3 << 5;
          local_20c = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_20c,L"start",uVar2);
        local_20c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0xc);
        local_208 = uVar2;
        FUN_00561610(local_14c,&local_20c,*(undefined4 *)(iVar6 + 0xc0));
        if (10 < local_204) {
                    /* WARNING: Subroutine does not return */
          _free(local_20c);
        }
        local_1ec = local_1e0;
        local_1e0[0] = L'\0';
        local_1e8 = 0;
        local_1e4 = 10;
        uVar2 = FUN_00ace02d(L"duration");
        if (local_1e4 <= uVar2) {
          if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1ec);
          }
          local_1e4 = uVar2 + 0x20 & 0xffffffe0;
          local_1ec = _malloc(local_1e4 * 2);
        }
        _wcsncpy(local_1ec,L"duration",uVar2);
        local_1ec[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0xd);
        local_1e8 = uVar2;
        FUN_00561610(local_14c,&local_1ec,*(undefined4 *)(iVar6 + 0xc4));
        if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ec);
        }
        local_274 = local_274 + 1;
        local_278 = (wchar_t *)((int)local_278 + 1);
      } while (local_274 != *(int **)(*(int *)((int)local_270 + 0x370) + 0x6c));
    }
  }
  iVar6 = *(int *)((int)local_270 + 0x374);
  if (iVar6 != 0) {
    local_274 = *(int **)(iVar6 + 0x68);
    local_278 = (wchar_t *)0x0;
    if (local_274 != *(int **)(iVar6 + 0x6c)) {
      do {
        iVar6 = *local_274;
        uVar2 = FUN_00ace02d(L"wav_");
        if (local_1c4 <= uVar2) {
          if (10 < local_1c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1cc);
          }
          local_1c4 = uVar2 + 0x20 & 0xffffffe0;
          local_1cc = _malloc(local_1c4 * 2);
        }
        _wcsncpy(local_1cc,L"wav_",uVar2);
        local_1cc[uVar2] = L'\0';
        local_1c8 = uVar2;
        sVar4 = _swprintf(local_8c,0xd18f7c,local_278);
        FUN_0040cae0(&local_1cc,local_8c,sVar4);
        local_22c = local_220;
        local_220[0] = L'\0';
        local_228 = 0;
        local_224 = 10;
        uVar2 = FUN_00ace02d(L"wavs");
        if (local_224 <= uVar2) {
          if (10 < local_224) {
                    /* WARNING: Subroutine does not return */
            _free(local_22c);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_224 = uVar3 << 5;
          local_22c = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_22c,L"wavs",uVar2);
        local_22c[uVar2] = L'\0';
        local_4._0_1_ = 0xe;
        local_228 = uVar2;
        FUN_00562420(local_14c,&local_22c,'\x01');
        local_4 = CONCAT31(local_4._1_3_,2);
        if (10 < local_224) {
                    /* WARNING: Subroutine does not return */
          _free(local_22c);
        }
        FUN_00562460(local_14c,&local_1cc,'\x01');
        local_26c = local_260;
        local_260[0] = L'\0';
        local_268 = 0;
        local_264 = 10;
        uVar2 = FUN_00ace02d(L"text");
        if (local_264 <= uVar2) {
          if (10 < local_264) {
                    /* WARNING: Subroutine does not return */
            _free(local_26c);
          }
          local_264 = uVar2 + 0x20 & 0xffffffe0;
          local_26c = _malloc(local_264 * 2);
        }
        _wcsncpy(local_26c,L"text",uVar2);
        local_26c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0xf);
        local_268 = uVar2;
        FUN_00561350(local_14c,&local_26c,(undefined4 *)(iVar6 + 0xec));
        if (10 < local_264) {
                    /* WARNING: Subroutine does not return */
          _free(local_26c);
        }
        if (*(int *)(iVar6 + 0x58) != 0) {
          local_24c = local_240;
          local_240[0] = L'\0';
          local_248 = 0;
          local_244 = 10;
          uVar2 = FUN_00ace02d(L"filename");
          if (local_244 <= uVar2) {
            if (10 < local_244) {
                    /* WARNING: Subroutine does not return */
              _free(local_24c);
            }
            local_244 = uVar2 + 0x20 & 0xffffffe0;
            local_24c = _malloc(local_244 * 2);
          }
          _wcsncpy(local_24c,L"filename",uVar2);
          local_24c[uVar2] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,0x10);
          local_248 = uVar2;
          FUN_00561350(local_14c,&local_24c,(undefined4 *)(iVar6 + 0x54));
          if (10 < local_244) {
                    /* WARNING: Subroutine does not return */
            _free(local_24c);
          }
        }
        if (*(int *)(iVar6 + 0x78) != 0) {
          local_20c = local_200;
          local_200[0] = L'\0';
          local_208 = 0;
          local_204 = 10;
          uVar2 = FUN_00ace02d(L"criteria");
          if (local_204 <= uVar2) {
            if (10 < local_204) {
                    /* WARNING: Subroutine does not return */
              _free(local_20c);
            }
            uVar3 = uVar2 + 0x20 >> 5;
            local_204 = uVar3 << 5;
            local_20c = _malloc(uVar3 * 0x40);
          }
          _wcsncpy(local_20c,L"criteria",uVar2);
          local_20c[uVar2] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,0x11);
          local_208 = uVar2;
          FUN_00561350(local_14c,&local_20c,(undefined4 *)(iVar6 + 0x74));
          if (10 < local_204) {
                    /* WARNING: Subroutine does not return */
            _free(local_20c);
          }
          local_1ec = local_1e0;
          local_1e0[0] = L'\0';
          local_1e8 = 0;
          local_1e4 = 10;
          uVar2 = FUN_00ace02d(L"criteriaindex");
          if (local_1e4 <= uVar2) {
            if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
              _free(local_1ec);
            }
            local_1e4 = uVar2 + 0x20 & 0xffffffe0;
            local_1ec = _malloc(local_1e4 * 2);
          }
          _wcsncpy(local_1ec,L"criteriaindex",uVar2);
          local_1ec[uVar2] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,0x12);
          local_1e8 = uVar2;
          FUN_00561610(local_14c,&local_1ec,*(undefined4 *)(iVar6 + 0x94));
          if (10 < local_1e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1ec);
          }
        }
        local_18c = local_180;
        local_180[0] = L'\0';
        local_188 = 0;
        local_184 = 10;
        uVar2 = FUN_00ace02d(L"start");
        if (local_184 <= uVar2) {
          if (10 < local_184) {
                    /* WARNING: Subroutine does not return */
            _free(local_18c);
          }
          local_184 = uVar2 + 0x20 & 0xffffffe0;
          local_18c = _malloc(local_184 * 2);
        }
        _wcsncpy(local_18c,L"start",uVar2);
        local_18c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x13);
        local_188 = uVar2;
        FUN_00561610(local_14c,&local_18c,*(undefined4 *)(iVar6 + 0xc0));
        if (10 < local_184) {
                    /* WARNING: Subroutine does not return */
          _free(local_18c);
        }
        local_16c = local_160;
        local_160[0] = L'\0';
        local_168 = 0;
        local_164 = 10;
        uVar2 = FUN_00ace02d(L"duration");
        if (local_164 <= uVar2) {
          if (10 < local_164) {
                    /* WARNING: Subroutine does not return */
            _free(local_16c);
          }
          local_164 = uVar2 + 0x20 & 0xffffffe0;
          local_16c = _malloc(local_164 * 2);
        }
        _wcsncpy(local_16c,L"duration",uVar2);
        local_16c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x14);
        local_168 = uVar2;
        FUN_00561610(local_14c,&local_16c,*(undefined4 *)(iVar6 + 0xc4));
        if (10 < local_164) {
                    /* WARNING: Subroutine does not return */
          _free(local_16c);
        }
        _swprintf((wchar_t *)&DAT_0104e540,0xd4ebe0,SUB84((double)*(float *)(iVar6 + 0xb8),0));
        local_298 = local_28c;
        local_28c[0] = L'\0';
        local_294 = 0;
        local_290 = 10;
        uVar2 = FUN_00ace02d((short *)&DAT_0104e540);
        if (local_290 <= uVar2) {
          if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
            _free(local_298);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_290 = uVar3 << 5;
          local_298 = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_298,(wchar_t *)&DAT_0104e540,uVar2);
        local_298[uVar2] = L'\0';
        local_1ac = local_1a0;
        local_1a0[0] = L'\0';
        local_1a8 = 0;
        local_1a4 = 10;
        local_294 = uVar2;
        uVar2 = FUN_00ace02d(L"volume");
        if (local_1a4 <= uVar2) {
          if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1ac);
          }
          local_1a4 = uVar2 + 0x20 & 0xffffffe0;
          local_1ac = _malloc(local_1a4 * 2);
        }
        _wcsncpy(local_1ac,L"volume",uVar2);
        local_1ac[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x16);
        local_1a8 = uVar2;
        FUN_00561350(local_14c,&local_1ac,&local_298);
        if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ac);
        }
        if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
          _free(local_298);
        }
        local_274 = local_274 + 1;
        local_278 = (wchar_t *)((int)local_278 + 1);
      } while (local_274 != *(int **)(*(int *)((int)local_270 + 0x374) + 0x6c));
    }
  }
  iVar6 = *(int *)((int)local_270 + 0x378);
  if (iVar6 != 0) {
    local_274 = *(int **)(iVar6 + 0x68);
    local_278 = (wchar_t *)0x0;
    if (local_274 != *(int **)(iVar6 + 0x6c)) {
      do {
        iVar6 = *local_274;
        uVar2 = FUN_00ace02d(L"mic_");
        if (local_1c4 <= uVar2) {
          if (10 < local_1c4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1cc);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_1c4 = uVar3 << 5;
          local_1cc = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_1cc,L"mic_",uVar2);
        local_1cc[uVar2] = L'\0';
        local_1c8 = uVar2;
        sVar4 = _swprintf(local_8c,0xd18f7c,local_278);
        FUN_0040cae0(&local_1cc,local_8c,sVar4);
        local_298 = local_28c;
        local_28c[0] = L'\0';
        local_294 = 0;
        local_290 = 10;
        uVar2 = FUN_00ace02d(L"mics");
        if (local_290 <= uVar2) {
          if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
            _free(local_298);
          }
          local_290 = uVar2 + 0x20 & 0xffffffe0;
          local_298 = _malloc(local_290 * 2);
        }
        _wcsncpy(local_298,L"mics",uVar2);
        local_298[uVar2] = L'\0';
        local_4._0_1_ = 0x17;
        local_294 = uVar2;
        FUN_00562420(local_14c,&local_298,'\x01');
        local_4 = CONCAT31(local_4._1_3_,2);
        if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
          _free(local_298);
        }
        FUN_00562460(local_14c,&local_1cc,'\x01');
        local_1ac = local_1a0;
        local_1a0[0] = L'\0';
        local_1a8 = 0;
        local_1a4 = 10;
        uVar2 = FUN_00ace02d(L"text");
        if (local_1a4 <= uVar2) {
          if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_1ac);
          }
          local_1a4 = uVar2 + 0x20 & 0xffffffe0;
          local_1ac = _malloc(local_1a4 * 2);
        }
        _wcsncpy(local_1ac,L"text",uVar2);
        local_1ac[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x18);
        local_1a8 = uVar2;
        FUN_00561350(local_14c,&local_1ac,(undefined4 *)(iVar6 + 0xec));
        if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ac);
        }
        local_16c = local_160;
        local_160[0] = L'\0';
        local_168 = 0;
        local_164 = 10;
        uVar2 = FUN_00ace02d(L"filename");
        if (local_164 <= uVar2) {
          if (10 < local_164) {
                    /* WARNING: Subroutine does not return */
            _free(local_16c);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_164 = uVar3 << 5;
          local_16c = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_16c,L"filename",uVar2);
        local_16c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x19);
        local_168 = uVar2;
        FUN_00561350(local_14c,&local_16c,(undefined4 *)(iVar6 + 0x54));
        if (10 < local_164) {
                    /* WARNING: Subroutine does not return */
          _free(local_16c);
        }
        local_18c = local_180;
        local_180[0] = L'\0';
        local_188 = 0;
        local_184 = 10;
        uVar2 = FUN_00ace02d(L"start");
        if (local_184 <= uVar2) {
          if (10 < local_184) {
                    /* WARNING: Subroutine does not return */
            _free(local_18c);
          }
          local_184 = uVar2 + 0x20 & 0xffffffe0;
          local_18c = _malloc(local_184 * 2);
        }
        _wcsncpy(local_18c,L"start",uVar2);
        local_18c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x1a);
        local_188 = uVar2;
        FUN_00561610(local_14c,&local_18c,*(undefined4 *)(iVar6 + 0xc0));
        if (10 < local_184) {
                    /* WARNING: Subroutine does not return */
          _free(local_18c);
        }
        local_22c = local_220;
        local_220[0] = L'\0';
        local_228 = 0;
        local_224 = 10;
        uVar2 = FUN_00ace02d(L"duration");
        if (local_224 <= uVar2) {
          if (10 < local_224) {
                    /* WARNING: Subroutine does not return */
            _free(local_22c);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_224 = uVar3 << 5;
          local_22c = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_22c,L"duration",uVar2);
        local_22c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x1b);
        local_228 = uVar2;
        FUN_00561610(local_14c,&local_22c,*(undefined4 *)(iVar6 + 0xc4));
        if (10 < local_224) {
                    /* WARNING: Subroutine does not return */
          _free(local_22c);
        }
        _swprintf((wchar_t *)&DAT_0104e540,0xd4ebe0,SUB84((double)*(float *)(iVar6 + 0xb8),0));
        local_24c = local_240;
        local_240[0] = L'\0';
        local_248 = 0;
        local_244 = 10;
        uVar2 = FUN_00ace02d((short *)&DAT_0104e540);
        if (local_244 <= uVar2) {
          if (10 < local_244) {
                    /* WARNING: Subroutine does not return */
            _free(local_24c);
          }
          local_244 = uVar2 + 0x20 & 0xffffffe0;
          local_24c = _malloc(local_244 * 2);
        }
        _wcsncpy(local_24c,(wchar_t *)&DAT_0104e540,uVar2);
        local_24c[uVar2] = L'\0';
        local_26c = local_260;
        local_260[0] = L'\0';
        local_268 = 0;
        local_264 = 10;
        local_248 = uVar2;
        uVar2 = FUN_00ace02d(L"volume");
        if (local_264 <= uVar2) {
          if (10 < local_264) {
                    /* WARNING: Subroutine does not return */
            _free(local_26c);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_264 = uVar3 << 5;
          local_26c = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_26c,L"volume",uVar2);
        local_26c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x1d);
        local_268 = uVar2;
        FUN_00561350(local_14c,&local_26c,&local_24c);
        if (10 < local_264) {
                    /* WARNING: Subroutine does not return */
          _free(local_26c);
        }
        if (10 < local_244) {
                    /* WARNING: Subroutine does not return */
          _free(local_24c);
        }
        local_20c = local_200;
        local_200[0] = L'\0';
        local_208 = 0;
        local_204 = 10;
        uVar2 = FUN_00ace02d(L"role");
        if (local_204 <= uVar2) {
          if (10 < local_204) {
                    /* WARNING: Subroutine does not return */
            _free(local_20c);
          }
          uVar3 = uVar2 + 0x20 >> 5;
          local_204 = uVar3 << 5;
          local_20c = _malloc(uVar3 * 0x40);
        }
        _wcsncpy(local_20c,L"role",uVar2);
        local_20c[uVar2] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,0x1e);
        local_208 = uVar2;
        FUN_00561350(local_14c,&local_20c,(undefined4 *)(iVar6 + 0x98));
        if (10 < local_204) {
                    /* WARNING: Subroutine does not return */
          _free(local_20c);
        }
        local_274 = local_274 + 1;
        local_278 = (wchar_t *)((int)local_278 + 1);
      } while (local_274 != *(int **)(*(int *)((int)local_270 + 0x378) + 0x6c));
    }
  }
  pvVar1 = local_270;
  local_298 = local_28c;
  local_28c[0] = L'\0';
  local_294 = 0;
  local_290 = 10;
  uVar2 = FUN_00ace02d(L"global");
  if (local_290 <= uVar2) {
    if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
      _free(local_298);
    }
    local_290 = uVar2 + 0x20 & 0xffffffe0;
    local_298 = _malloc(local_290 * 2);
  }
  _wcsncpy(local_298,L"global",uVar2);
  local_298[uVar2] = L'\0';
  local_4 = CONCAT31(local_4._1_3_,0x1f);
  local_294 = uVar2;
  FUN_00562420(local_14c,&local_298,'\x01');
  if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
    _free(local_298);
  }
  local_298 = local_28c;
  local_28c[0] = L'\0';
  local_294 = 0;
  local_290 = 10;
  uVar2 = FUN_00ace02d(L"HasTitles");
  if (local_290 <= uVar2) {
    if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
      _free(local_298);
    }
    uVar3 = uVar2 + 0x20 >> 5;
    local_290 = uVar3 << 5;
    local_298 = _malloc(uVar3 * 0x40);
  }
  _wcsncpy(local_298,L"HasTitles",uVar2);
  local_298[uVar2] = L'\0';
  local_4 = CONCAT31(local_4._1_3_,0x20);
  local_294 = uVar2;
  FUN_00561610(local_14c,&local_298,(uint)*(byte *)((int)pvVar1 + 0x457));
  if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
    _free(local_298);
  }
  local_298 = local_28c;
  local_28c[0] = L'\0';
  local_294 = 0;
  local_290 = 10;
  uVar2 = FUN_00ace02d(L"HasCredits");
  if (local_290 <= uVar2) {
    if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
      _free(local_298);
    }
    local_290 = uVar2 + 0x20 & 0xffffffe0;
    local_298 = _malloc(local_290 * 2);
  }
  _wcsncpy(local_298,L"HasCredits",uVar2);
  local_298[uVar2] = L'\0';
  local_4 = CONCAT31(local_4._1_3_,0x21);
  local_294 = uVar2;
  FUN_00561610(local_14c,&local_298,(uint)*(byte *)((int)pvVar1 + 0x458));
  if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
    _free(local_298);
  }
  local_298 = local_28c;
  local_28c[0] = L'\0';
  local_294 = 0;
  local_290 = 10;
  uVar2 = FUN_00ace02d(L"MicVolume");
  if (local_290 <= uVar2) {
    if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
      _free(local_298);
    }
    local_290 = uVar2 + 0x20 & 0xffffffe0;
    local_298 = _malloc(local_290 * 2);
  }
  _wcsncpy(local_298,L"MicVolume",uVar2);
  local_298[uVar2] = L'\0';
  local_4 = CONCAT31(local_4._1_3_,0x22);
  local_294 = uVar2;
  FUN_005615a0(local_14c,&local_298,*(float *)((int)pvVar1 + 0x444));
  if (local_290 < 0xb) {
    local_298 = local_28c;
    local_28c[0] = L'\0';
    local_294 = 0;
    local_290 = 10;
    uVar2 = FUN_00ace02d(L"TitlesBackdrop");
    if (local_290 <= uVar2) {
      if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
        _free(local_298);
      }
      uVar3 = uVar2 + 0x20 >> 5;
      local_290 = uVar3 << 5;
      local_298 = _malloc(uVar3 * 0x40);
    }
    _wcsncpy(local_298,L"TitlesBackdrop",uVar2);
    local_298[uVar2] = L'\0';
    local_4._0_1_ = 0x23;
    local_294 = uVar2;
    iVar6 = FUN_0074b390();
    puVar5 = FUN_00568790(&local_1ac,(undefined4 *)(iVar6 + 0x198));
    local_4 = CONCAT31(local_4._1_3_,0x24);
    FUN_00561350(local_14c,&local_298,puVar5);
    if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1ac);
    }
    if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
      _free(local_298);
    }
    local_298 = local_28c;
    local_28c[0] = L'\0';
    local_294 = 0;
    local_290 = 10;
    uVar2 = FUN_00ace02d(L"TitlesFont");
    if (local_290 <= uVar2) {
      if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
        _free(local_298);
      }
      uVar3 = uVar2 + 0x20 >> 5;
      local_290 = uVar3 << 5;
      local_298 = _malloc(uVar3 * 0x40);
    }
    _wcsncpy(local_298,L"TitlesFont",uVar2);
    local_298[uVar2] = L'\0';
    local_4._0_1_ = 0x25;
    local_294 = uVar2;
    iVar6 = FUN_0074b390();
    puVar5 = FUN_00568790(&local_1ac,(undefined4 *)(iVar6 + 0x158));
    local_4 = CONCAT31(local_4._1_3_,0x26);
    FUN_00561350(local_14c,&local_298,puVar5);
    if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1ac);
    }
    if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
      _free(local_298);
    }
    local_298 = local_28c;
    local_28c[0] = L'\0';
    local_294 = 0;
    local_290 = 10;
    uVar2 = FUN_00ace02d(L"TitlesFontColor");
    if (local_290 <= uVar2) {
      if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
        _free(local_298);
      }
      uVar3 = uVar2 + 0x20 >> 5;
      local_290 = uVar3 << 5;
      local_298 = _malloc(uVar3 * 0x40);
    }
    _wcsncpy(local_298,L"TitlesFontColor",uVar2);
    local_298[uVar2] = L'\0';
    local_4._0_1_ = 0x27;
    local_294 = uVar2;
    iVar6 = FUN_0074b390();
    puVar5 = FUN_00568790(&local_1ac,(undefined4 *)(iVar6 + 0x178));
    local_4 = CONCAT31(local_4._1_3_,0x28);
    FUN_00561350(local_14c,&local_298,puVar5);
    if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1ac);
    }
    if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
      _free(local_298);
    }
    local_298 = local_28c;
    local_28c[0] = L'\0';
    local_294 = 0;
    local_290 = 10;
    uVar2 = FUN_00ace02d(L"MusicVol");
    if (local_290 <= uVar2) {
      if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
        _free(local_298);
      }
      uVar3 = uVar2 + 0x20 >> 5;
      local_290 = uVar3 << 5;
      local_298 = _malloc(uVar3 * 0x40);
    }
    _wcsncpy(local_298,L"MusicVol",uVar2);
    local_298[uVar2] = L'\0';
    local_4 = CONCAT31(local_4._1_3_,0x29);
    local_294 = uVar2;
    FUN_005615a0(local_14c,&local_298,*(float *)((int)pvVar1 + 0x43c));
    if (local_290 < 0xb) {
      local_298 = local_28c;
      local_28c[0] = L'\0';
      local_294 = 0;
      local_290 = 10;
      uVar2 = FUN_00ace02d(L"SfxVol");
      if (local_290 <= uVar2) {
        if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
          _free(local_298);
        }
        local_290 = uVar2 + 0x20 & 0xffffffe0;
        local_298 = _malloc(local_290 * 2);
      }
      _wcsncpy(local_298,L"SfxVol",uVar2);
      local_298[uVar2] = L'\0';
      local_4._0_1_ = 0x2a;
      local_294 = uVar2;
      FUN_005615a0(local_14c,&local_298,*(float *)((int)pvVar1 + 0x440));
      local_4._0_1_ = 2;
      if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
        _free(local_298);
      }
      puVar5 = local_14c;
      this_00 = (void *)FUN_0075aa20();
      FUN_0075a2c0(this_00,puVar5);
      FUN_00563e20(local_14c,&param_1);
      *(undefined1 *)((int)pvVar1 + 0x454) = 0;
      if (DAT_0104e4a8 != (void *)0x0) {
        local_298 = local_28c;
        local_28c[0] = L'\0';
        local_294 = 0;
        local_290 = 10;
        local_4._0_1_ = 0x2b;
        puVar5 = FUN_00771e00(DAT_0104e4a8,&local_1ac);
        sVar4 = FUN_00ace02d(L"<T1 COLOR = #FFFFFF>");
        FUN_0040cae0(&local_298,L"<T1 COLOR = #FFFFFF>",sVar4);
        FUN_0040cae0(&local_298,(wchar_t *)*puVar5,puVar5[1]);
        sVar4 = FUN_00ace02d(L"</T1>");
        FUN_0040cae0(&local_298,L"</T1>",sVar4);
        if (10 < local_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_1ac);
        }
        (**(code **)(**(int **)((int)pvVar1 + 0x478) + 0x54))();
        if (10 < local_290) {
                    /* WARNING: Subroutine does not return */
          _free(local_298);
        }
      }
      if (10 < local_1c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_1cc);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0055ed70(local_14c);
      if (param_3 < 0xb) {
        ExceptionList = pvStack_c;
        return CONCAT31((int3)(param_3 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_298);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_298);
}


//// FUNCTION FUN_0077b0b0 @ 0077b0b0 ////

void __thiscall FUN_0077b0b0(void *this,undefined4 *param_1)

{
  char cVar1;
  
  if (*(undefined4 **)((int)this + 0x410) != (undefined4 *)0x0) {
    cVar1 = FUN_005ee930(*(undefined4 **)((int)this + 0x410));
    if (cVar1 != '\0') {
      StringRingBuffer_Push((void *)((int)this + 0x414),param_1);
    }
  }
  return;
}


//// FUNCTION WTrailerEditorLite_Tick @ 0077b0e0 ////

void __fastcall WTrailerEditorLite_Tick(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [12];
  void *apvStack_34 [2];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [4];
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9a49;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053d480((int)param_1);
  if ((((*(char *)((int)param_1 + 0x34b) == '\0') && (DAT_0104e4a8 != 0)) &&
      (*(int *)(DAT_0104e4a8 + 0xd0) != 0)) && (param_1[0x10e] != 0)) {
    (**(code **)(*(int *)param_1[0x13c] + 0x20))();
    (**(code **)(*(int *)param_1[0x1b4] + 0x20))();
    (**(code **)(*(int *)param_1[0x1e4] + 0x20))();
  }
  cVar3 = FUN_00553f70(0x73);
  puVar2 = DAT_0104e4d8;
  if ((cVar3 == '\0') && (DAT_0104e4d8 != (undefined4 *)0x0)) {
    iVar1 = DAT_0104e4d8[0x12];
    DAT_0104e4d8[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)();
    }
    (*(code *)DAT_0104e4c4[1])();
    DAT_0104e4d8 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e4c4)();
  }
  uVar5 = FUN_005541d0(0);
  if ((char)uVar5 == '\0') {
    uVar5 = FUN_005541d0(1);
    if ((char)uVar5 != '\0') goto LAB_0077b1ba;
  }
  else {
LAB_0077b1ba:
    if (((undefined4 *)param_1[0x104] != (undefined4 *)0x0) && (param_1[0x12a] != 0)) {
      FUN_005eea30((undefined4 *)param_1[0x104]);
      FUN_005fd4b0((int)(param_1 + 0x105));
    }
  }
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"PP First Time",0xd);
  uStack_48 = 0xd;
  pcStack_4c[0xd] = '\0';
  uStack_4 = 0;
  lVar6 = Config_GetOrCreateInt(DAT_0104c7e4,&pcStack_4c,1);
  if ((lVar6 == 0) || (bVar4 = true, *(char *)((int)param_1 + 0x34b) != '\0')) {
    bVar4 = false;
  }
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (bVar4) {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"tutorial_pp_01",0xe);
    uStack_48 = 0xe;
    pcStack_4c[0xe] = '\0';
    uStack_4 = 1;
    if ((undefined4 *)param_1[0x104] != (undefined4 *)0x0) {
      cVar3 = FUN_005ee930((undefined4 *)param_1[0x104]);
      if (cVar3 != '\0') {
        StringRingBuffer_Push(param_1 + 0x105,&pcStack_4c);
      }
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"PP First Time",0xd);
    uStack_28 = 0xd;
    pcStack_2c[0xd] = '\0';
    pcStack_4c = acStack_40;
    uStack_4 = 2;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"0",1);
    uStack_48 = 1;
    pcStack_4c[1] = '\0';
    uStack_4 = CONCAT31(uStack_4._1_3_,3);
    FUN_005417f0(DAT_0104c7e4,&pcStack_2c,&pcStack_4c);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
  }
  uStack_4 = 0xffffffff;
  if ((int *)param_1[0x130] != (int *)0x0) {
    cVar3 = (**(code **)(*(int *)param_1[0x130] + 0xc4))();
    if ((cVar3 != '\0') && (param_1[0x12a] == 0)) {
      (**(code **)(*(int *)param_1[0x130] + 0x20))();
      (**(code **)(*DAT_0104e458 + 0xc0))();
    }
  }
  if (*(char *)((int)param_1 + 0x457) == '\0') {
LAB_0077b3f2:
    bVar4 = FUN_00773390((int)param_1);
    if ((((!bVar4) && (DAT_0104e4a8 != 0)) && (*(int *)(DAT_0104e4a8 + 0xd0) != 0)) &&
       (param_1[0x10e] != 0)) {
      (**(code **)(*(int *)param_1[0x13c] + 0xc0))();
      goto LAB_0077b437;
    }
  }
  else {
    iVar1 = param_1[0xe8];
    iVar7 = FUN_0074b390();
    iVar7 = FUN_007487e0(iVar7);
    if (iVar7 <= iVar1) goto LAB_0077b3f2;
  }
  (**(code **)(*(int *)param_1[0x13c] + 0xc0))();
LAB_0077b437:
  if (DAT_0104e330 == 0) {
    if ((*(char *)((int)param_1 + 0x34b) == '\0') && (DAT_0104e4a8 != 0)) {
      (**(code **)(*(int *)param_1[0x1ae] + 0xc0))();
    }
    else {
      (**(code **)(*(int *)param_1[0x1ae] + 0xc0))();
    }
  }
  else {
    (**(code **)(*(int *)param_1[0x1ae] + 0xc0))();
  }
  if ((undefined4 *)param_1[0x104] != (undefined4 *)0x0) {
    cVar3 = FUN_005ee930((undefined4 *)param_1[0x104]);
    if (cVar3 != '\0') {
      if (param_1[0x109] == 0) {
        FUN_005ee970(param_1[0x104]);
        if (*(char *)((int)param_1 + 0x453) != '\0') {
          piVar8 = (int *)FUN_00ace790((int *)param_1[0x12a],0,&TM::WWindow::RTTI_Type_Descriptor,
                                       &TM::WBuildButtonList::RTTI_Type_Descriptor,0);
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0xc0))();
          }
          *(undefined1 *)((int)param_1 + 0x453) = 0;
        }
      }
      else {
        if (*(char *)((int)param_1 + 0x453) == '\0') {
          piVar8 = (int *)FUN_00ace790((int *)param_1[0x12a],0,&TM::WWindow::RTTI_Type_Descriptor,
                                       &TM::WBuildButtonList::RTTI_Type_Descriptor,0);
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0xc0))();
          }
          *(undefined1 *)((int)param_1 + 0x453) = 1;
        }
        uVar9 = param_1[0x108];
        if ((uint)param_1[0x107] <= uVar9) {
          uVar9 = uVar9 - param_1[0x107];
        }
        FUN_00403de0(apvStack_34,*(undefined4 **)(param_1[0x106] + uVar9 * 4));
        pvStack_c = (void *)0x4;
        FUN_005fd440((int)(param_1 + 0x105));
        FUN_005eefd0((undefined4 *)param_1[0x104]);
        pvStack_c = (void *)0xffffffff;
        if (&DAT_00000014 < pcStack_2c) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_34[0]);
        }
      }
    }
  }
  piVar8 = (int *)param_1[0x166];
  if (param_1[0xda] == 1) {
    (**(code **)(*piVar8 + 0xc0))();
    (**(code **)(*(int *)param_1[0x16c] + 0xc0))(1);
  }
  else {
    if (DAT_0104e4a8 == 0) {
      (**(code **)(*piVar8 + 0xc0))();
    }
    else {
      (**(code **)(*piVar8 + 0xc0))();
    }
    (**(code **)(*(int *)param_1[0x16c] + 0xc0))(0);
  }
  WWindow_Tick(param_1);
  if ((int *)param_1[0xd3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd3] + 0x20))();
  }
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION FUN_0077b620 @ 0077b620 ////

uint __thiscall FUN_0077b620(void *this,void *param_1,float param_2,float param_3)

{
  char cVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int *this_00;
  uint uVar4;
  int iVar5;
  int *piVar6;
  void *this_01;
  char *pcVar7;
  float *pfVar8;
  size_t sVar9;
  void *pvVar10;
  char *pcVar11;
  uint _Size;
  undefined4 uVar12;
  int iVar13;
  void **ppvVar14;
  uint local_88;
  int *local_84;
  undefined4 *local_80;
  char *local_7c;
  undefined4 local_78;
  uint local_74;
  char local_70 [20];
  char *local_5c;
  uint local_58;
  uint local_54;
  char local_50 [20];
  void *local_3c [13];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9a81;
  local_3c[0xc] = ExceptionList;
  if (param_1 == (void *)0x0) {
    uVar4 = (uint)ExceptionList & 0xffffff00;
  }
  else {
    ExceptionList = local_3c + 0xc;
    local_80 = operator_new(0x4c);
    local_4 = 0;
    if (local_80 == (undefined4 *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = FUN_0074e530(local_80);
    }
    local_4 = 0xffffffff;
    local_84 = this_00;
    FUN_00778e80((void *)((int)this + 0x428),&local_84);
    uVar4 = FUN_0074d980(this_00,(char *)((int)param_1 + 0x90),(char *)((int)param_1 + 0xb0),
                         (int)param_1);
    if ((char)uVar4 != '\0') {
      iVar5 = FUN_00975c50((void *)*this_00,0);
      iVar13 = 0;
      local_80 = (undefined4 *)iVar5;
      if (0 < iVar5) {
        do {
          piVar6 = FUN_00755b20(param_1,iVar13);
          if (piVar6 != (int *)0x0) {
            local_84 = FUN_0074e5d0(piVar6);
            FUN_00978310((void *)*this_00,0,iVar13,(void *)local_84[0x14]);
            FUN_0074e580(this_00 + 2,&local_84);
          }
          if (0.0 <= param_2) {
            local_84 = (int *)(((float)(iVar13 + 1) / (float)(int)local_80) * (param_3 - param_2) +
                              param_2);
            piVar6 = local_84;
            pvVar10 = param_1;
            this_01 = (void *)FUN_007683b0();
            FUN_00768290(this_01,(float)piVar6,pvVar10);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar5);
      }
      for (uVar4 = 0;
          (iVar5 = *(int *)((int)param_1 + 0x120), iVar5 != 0 &&
          (uVar4 < (uint)(*(int *)((int)param_1 + 0x124) - iVar5 >> 2))); uVar4 = uVar4 + 1) {
        pfVar2 = *(float **)(iVar5 + uVar4 * 4);
        FUN_009757a0((void *)*this_00,(byte *)(pfVar2 + 1),*pfVar2,0);
      }
      FUN_00977590((void *)*this_00);
      if (((*(int *)((int)param_1 + 0xf4) == 0) || (*(int *)((int)param_1 + 0xf8) == 0)) ||
         (iVar5 = FUN_007535e0((int)param_1), 5000 < iVar5)) {
        *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)(*this_00 + 0x74);
        *(undefined4 *)((int)param_1 + 0xf8) = *(undefined4 *)(*this_00 + 0x78);
        iVar5 = FUN_007535e0((int)param_1);
        if (5000 < iVar5) {
          local_7c = local_70;
          *(int *)((int)param_1 + 0xf8) = *(int *)((int)param_1 + 0xf4) + 100;
          local_70[0] = '\0';
          local_78 = 0;
          local_74 = 0x20;
          local_7c = _malloc(0x20);
          _strncpy(local_7c,"Scene data incorrect. \n",0x17);
          local_78 = 0x17;
          local_7c[0x17] = '\0';
          FUN_004073f0(&local_7c,"Get Scene Designer to fix \"",0x1b);
          pcVar7 = (char *)((int)param_1 + 0x90);
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_004073f0(&local_7c,(char *)((int)param_1 + 0x90),(int)pcVar7 - ((int)param_1 + 0x91));
          FUN_004073f0(&local_7c,"\" with the folling slider setting\n",0x22);
          for (uVar4 = 0;
              (iVar5 = *(int *)((int)param_1 + 0x120), iVar5 != 0 &&
              (uVar4 < (uint)(*(int *)((int)param_1 + 0x124) - iVar5 >> 2))); uVar4 = uVar4 + 1) {
            pfVar2 = *(float **)(iVar5 + uVar4 * 4);
            pfVar8 = pfVar2 + 1;
            do {
              cVar1 = *(char *)pfVar8;
              pfVar8 = (float *)((int)pfVar8 + 1);
            } while (cVar1 != '\0');
            FUN_004073f0(&local_7c,(char *)(pfVar2 + 1),(int)pfVar8 - ((int)pfVar2 + 5));
            FUN_004073f0(&local_7c," [",2);
            sVar9 = _sprintf((char *)&local_5c,"%.2f",(double)*pfVar2);
            FUN_004073f0(&local_7c,(char *)&local_5c,sVar9);
            FUN_004073f0(&local_7c,"] \n",3);
          }
          if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
            _free(local_7c);
          }
        }
      }
      FUN_00a00ea0((void *)*this_00,(char *)((int)param_1 + 0xd0));
      FUN_009779a0((void *)*this_00,*(int *)((int)param_1 + 0xf0));
      pvVar10 = operator_new(0x14);
      if (pvVar10 == (void *)0x0) {
        pvVar10 = (void *)0x0;
      }
      else {
        *(undefined4 *)((int)pvVar10 + 4) = 0;
        *(undefined4 *)((int)pvVar10 + 8) = 0;
        *(undefined4 *)((int)pvVar10 + 0xc) = 0;
        *(undefined4 *)((int)pvVar10 + 0x10) = 1;
      }
      this_00[0xd] = (int)pvVar10;
      local_4 = 0xffffffff;
      if (*(int *)((int)param_1 + 0x140) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)param_1 + 0x144) - *(int *)((int)param_1 + 0x140) >> 2;
      }
      FUN_004ee1f0(pvVar10,uVar4);
      for (local_88 = 0;
          (iVar5 = *(int *)((int)param_1 + 0x140), iVar5 != 0 &&
          (local_88 < (uint)(*(int *)((int)param_1 + 0x144) - iVar5 >> 2))); local_88 = local_88 + 1
          ) {
        pcVar7 = *(char **)(iVar5 + local_88 * 4);
        local_5c = local_50;
        local_50[0] = '\0';
        local_58 = 0;
        local_54 = 0x14;
        local_3c[0xb] = (void *)0x0;
        local_3c[10] = (void *)0x0;
        local_3c[9] = (void *)0x0;
        local_3c[7] = (void *)0x0;
        local_3c[6] = (void *)0x0;
        local_3c[5] = (void *)0x0;
        local_3c[3] = (void *)0x0;
        local_3c[2] = (void *)0x0;
        local_3c[1] = (void *)0x0;
        local_3c[8] = (void *)0x3f800000;
        local_3c[4] = (void *)0x3f800000;
        local_3c[0] = (void *)0x3f800000;
        _strncpy(local_5c,"",0);
        local_58 = 0;
        *local_5c = '\0';
        local_4 = 2;
        pcVar11 = pcVar7;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        uVar4 = (int)pcVar11 - (int)(pcVar7 + 1);
        if (local_54 <= uVar4) {
          if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
            _free(local_5c);
          }
          local_54 = uVar4 + 0x20 & 0xffffffe0;
          local_5c = _malloc(local_54);
        }
        _strncpy(local_5c,pcVar7,uVar4);
        local_5c[uVar4] = '\0';
        pcVar7 = pcVar7 + 0x20;
        ppvVar14 = local_3c;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppvVar14 = *(void **)pcVar7;
          pcVar7 = pcVar7 + 4;
          ppvVar14 = ppvVar14 + 1;
        }
        local_58 = uVar4;
        FUN_004ee3e0((void *)this_00[0xd],&local_5c);
        local_4 = 0xffffffff;
        if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
          _free(local_5c);
        }
      }
      FUN_0097b260((void *)*this_00,this_00[0xd]);
      for (uVar4 = 0;
          (iVar5 = *(int *)((int)param_1 + 0x150), iVar5 != 0 &&
          (uVar4 < (uint)(*(int *)((int)param_1 + 0x154) - iVar5 >> 2))); uVar4 = uVar4 + 1) {
        puVar3 = *(undefined4 **)(iVar5 + uVar4 * 4);
        FUN_00979320((void *)*this_00,(byte *)*puVar3,(char *)(puVar3 + 1));
      }
      iVar5 = *this_00;
      pcVar7 = (char *)((int)param_1 + 0x160);
      if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
        if (*(uint *)(iVar5 + 0x200) < 5) {
          if (0x14 < *(uint *)(iVar5 + 0x200)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(iVar5 + 0x1f8));
          }
          *(undefined4 *)(iVar5 + 0x200) = 0x20;
          pvVar10 = _malloc(0x20);
          *(void **)(iVar5 + 0x1f8) = pvVar10;
        }
        _strncpy(*(char **)(iVar5 + 0x1f8),"none",4);
        *(undefined4 *)(iVar5 + 0x1fc) = 4;
        *(undefined1 *)(*(int *)(iVar5 + 0x1f8) + 4) = 0;
      }
      else {
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar4 = (int)pcVar7 - ((int)param_1 + 0x161);
        if (*(uint *)(iVar5 + 0x200) <= uVar4) {
          if (0x14 < *(uint *)(iVar5 + 0x200)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(iVar5 + 0x1f8));
          }
          _Size = uVar4 + 0x20 & 0xffffffe0;
          *(uint *)(iVar5 + 0x200) = _Size;
          pvVar10 = _malloc(_Size);
          *(void **)(iVar5 + 0x1f8) = pvVar10;
        }
        _strncpy(*(char **)(iVar5 + 0x1f8),(char *)((int)param_1 + 0x160),uVar4);
        *(uint *)(iVar5 + 0x1fc) = uVar4;
        *(undefined1 *)(uVar4 + *(int *)(iVar5 + 0x1f8)) = 0;
      }
      FUN_00974ee0((void *)(iVar5 + 0x25c),*(byte **)(iVar5 + 0x1f8),0);
      FUN_009fe970((char *)((int)param_1 + 0x180),*(int *)((int)param_1 + 0x1a0),
                   (undefined4 *)*this_00);
      if (*(int *)((int)param_1 + 0x1a4) != 0) {
        FUN_00972790((void *)*this_00,(undefined4 *)((int)param_1 + 0x1a8),
                     *(int *)((int)param_1 + 0x1d0));
      }
      if (*(int *)((int)param_1 + 0x1d4) != 0) {
        FUN_009727e0((void *)*this_00,(undefined4 *)((int)param_1 + 0x1d8),
                     *(int *)((int)param_1 + 0x200));
      }
      FUN_009d10d0();
      uVar12 = FUN_009777b0(*this_00);
      uVar4 = CONCAT31((int3)((uint)uVar12 >> 8),1);
    }
  }
  ExceptionList = local_3c[0xc];
  return uVar4;
}


//// FUNCTION FUN_0077bce0 @ 0077bce0 ////

void __fastcall FUN_0077bce0(int param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  void *_Memory_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  (*(code *)DAT_0104e494[1])();
  DAT_0104e4a8 = 0;
  (*(code *)*DAT_0104e494)();
  uVar4 = *(uint *)(param_1 + 0x3a0);
  uVar3 = *(uint *)(param_1 + 0x39c) & (0 < (int)*(uint *)(param_1 + 0x39c)) - 1;
  *(uint *)(param_1 + 0x3a0) = uVar3;
  if (uVar3 != uVar4) {
    *(undefined1 *)(param_1 + 0x452) = 1;
  }
  if (*(int *)(param_1 + 0x438) != 0) {
    uVar4 = *(uint *)(param_1 + 0x434) >> 2;
    iVar2 = uVar4 * -4;
    if (*(uint *)(param_1 + 0x430) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(param_1 + 0x430);
    }
    _Memory = *(undefined4 **)
               (*(int *)(*(int *)(param_1 + 0x42c) + uVar4 * 4) +
               (*(uint *)(param_1 + 0x434) + iVar2) * 4);
    _Memory_00 = (void *)_Memory[0xd];
    if (_Memory_00 != (void *)0x0) {
      piVar1 = (int *)((int)_Memory_00 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        thunk_FUN_004eddb0((int)_Memory_00);
                    /* WARNING: Subroutine does not return */
        _free(_Memory_00);
      }
      _Memory[0xd] = 0;
    }
    FUN_0074e040(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_007748a0(param_1 + 0x428);
  if (DAT_0104e458 != (int *)0x0) {
    FUN_0076fbe0(DAT_0104e458);
    return;
  }
  return;
}


//// FUNCTION FUN_0077bdf0 @ 0077bdf0 ////

undefined4 __fastcall FUN_0077bdf0(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9a9b;
  local_c = ExceptionList;
  this = (undefined4 *)0x0;
  if (*(int *)((int)param_1 + 0x3e0) == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  iVar2 = FUN_00774c70((int)param_1);
  uVar3 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_00774c70((int)param_1);
    uVar3 = FUN_00773f30(param_1,iVar2);
    uVar1 = *(uint *)(uVar3 + 4);
    if (uVar1 != 0) {
      puVar4 = operator_new(0x204);
      local_4 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        this = FUN_00757a20(puVar4);
      }
      local_4 = 0xffffffff;
      FUN_00758790(this,uVar1);
      this[0x12] = this[0x12] + 1;
      FUN_00757eb0(DAT_0104e4a8,(int)this,uVar1);
      iVar2 = *(int *)((int)param_1 + 0x3a0);
      if (*(char *)((int)param_1 + 0x457) == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_0074b390();
        iVar5 = FUN_007487e0(iVar5);
      }
      iVar2 = FUN_00774040((iVar2 - iVar5) / 100);
      iVar5 = FUN_007535e0(uVar1);
      *(int *)(uVar1 + 0x100) = *(int *)(uVar1 + 0x100) + (iVar5 - iVar2);
      this[0x3f] = this[0x3f] + iVar2;
      puVar4 = this;
      FUN_0075aa20();
      FUN_0075b2b0((int)puVar4);
      FUN_0077b620(param_1,this,-1.0,-1.0);
      FUN_009d10d0();
      FUN_009a63a0(0x200,-1);
      FUN_0076fbe0(DAT_0104e458);
      *(undefined1 *)((int)param_1 + 0x452) = 1;
      FUN_00774d90((int)param_1);
      uVar6 = FUN_00773420((int)param_1);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
  }
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION WTrailerEditorLite_Destructor @ 0077bf70 ////

void __fastcall WTrailerEditorLite_Destructor(undefined4 *param_1)

{
  int *piVar1;
  undefined1 *_Memory;
  char cVar2;
  void *this;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Confirmed via RTTI (vtable 0xD4F0AC -> COL 0xDC5CF8 -> TD 0xE59788
                       ".?AVWTrailerEditorLite@TM@@"). Massive teardown of dozens of child widgets
                       plus many global-singleton releases. This same vtable (0xD4F0AC) is also set
                       by FUN_00783AE0, which is the sibling/caller of FUN_0077E540 -- one of the 5
                       giant (17-51KB) functions delegated to a background agent for analysis. That
                       means FUN_0077E540/FUN_00783AE0 are WTrailerEditorLite's own Tick and a
                       related method -- a "lite" (simplified) trailer-cutting/editing screen,
                       likely a cut-down sibling of WAdvMovieMaker used specifically for promotional
                       trailers. */
  puStack_8 = &LAB_00cd9d54;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4f0ac;
  param_1[0x14] = &PTR_FUN_00d4f094;
  puVar4 = DAT_0104e330;
  local_4 = 0x2f;
  if (DAT_0104e330 != (undefined4 *)0x0) {
    iVar3 = DAT_0104e330[0x12];
    DAT_0104e330[0x12] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)*puVar4)(1);
    }
    DAT_0104e330 = (undefined4 *)0x0;
  }
  FUN_00a2af00();
  DAT_010b9556 = 0;
  DAT_0105ca70 = 0;
  if ((void *)param_1[0xd1] != (void *)0x0) {
    FUN_009de3b0((void *)param_1[0xd1]);
    param_1[0xd1] = 0;
  }
  FUN_00a29440((void *)0x0);
  puVar4 = DAT_0104e64c;
  DAT_010bab30 = 0;
  DAT_010b9550 = 0;
  DAT_010b9554 = *(undefined1 *)(param_1 + 0x114);
  DAT_010b9555 = *(undefined1 *)((int)param_1 + 0x451);
  if (DAT_0104e64c != (undefined4 *)0x0) {
    iVar3 = DAT_0104e64c[0x12];
    DAT_0104e64c[0x12] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)*puVar4)(1);
    }
    (*(code *)DAT_0104e638[1])();
    DAT_0104e64c = (undefined4 *)0x0;
    (*(code *)*DAT_0104e638)();
  }
  FUN_00a29560();
  piVar1 = (int *)param_1[0x104];
  if (piVar1 != (int *)0x0) {
    FUN_005eead0(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  param_1[0x104] = 0;
  FUN_009b0e40(0);
  puVar4 = DAT_0104e4d8;
  if (DAT_0104e4d8 != (undefined4 *)0x0) {
    iVar3 = DAT_0104e4d8[0x12];
    DAT_0104e4d8[0x12] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      (**(code **)*puVar4)(1);
    }
    (*(code *)DAT_0104e4c4[1])();
    DAT_0104e4d8 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e4c4)();
  }
  if ((int *)param_1[0xd3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd3] + 4))();
    param_1[0xd3] = 0;
  }
  puVar4 = (undefined4 *)param_1[0x118];
  if (puVar4 != (undefined4 *)0x0) {
    FUN_0074e760(puVar4);
                    /* WARNING: Subroutine does not return */
    _free(puVar4);
  }
  param_1[0x118] = 0;
  FUN_0074b390();
  FUN_00748a80();
  FUN_007488f0();
  FUN_00a27b60();
  FUN_007737d0((int)param_1);
  if ((DAT_0104e490 == 0) && (DAT_0104e4a8 != (undefined4 *)0x0)) {
    (**(code **)*DAT_0104e4a8)(1);
    (*(code *)DAT_0104e494[1])();
    DAT_0104e4a8 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e494)();
  }
  FUN_0077bce0((int)param_1);
  if (DAT_0104dafc != 0) {
    cVar2 = FUN_0068f290(DAT_0104dafc);
    if (cVar2 != '\0') {
      FUN_009a1560(1);
    }
    FUN_0068fb00(DAT_0104dafc);
  }
  FUN_004237f0(DAT_00f87b04);
  FUN_0071bd00();
  DAT_01050b4c = 0;
  _Memory = (undefined1 *)param_1[0x103];
  if (_Memory != (undefined1 *)0x0) {
    DAT_0105cc5c = *_Memory;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_00759d30();
  DAT_01050b64 = FUN_00494df0;
  puVar4 = (undefined4 *)param_1[0x12a];
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(1);
    }
    (**(code **)(param_1[0x125] + 4))();
    param_1[0x12a] = 0;
    (**(code **)param_1[0x125])();
  }
  FUN_007675a0();
  FUN_009b07a0(0);
  FUN_009b1000(1,param_1[0x112],0);
  FUN_009b1000(2,param_1[0x113],0);
  bVar5 = 1;
  iVar3 = 3;
  puVar4 = param_1;
  this = (void *)FUN_004f3b20();
  FUN_004f9b70(this,iVar3,(int)puVar4,bVar5);
  param_1[0x1fd] = &PTR_LAB_00d4ec0c;
  if ((undefined4 *)param_1[0x1ff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1ff] = param_1[0x1fe];
  }
  if (param_1[0x1fe] != 0) {
    *(undefined4 *)(param_1[0x1fe] + 4) = param_1[0x1ff];
  }
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x202] = 0;
  if ((undefined4 *)param_1[0x1ff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1ff] = param_1[0x1fe];
  }
  if (param_1[0x1fe] != 0) {
    *(undefined4 *)(param_1[0x1fe] + 4) = param_1[0x1ff];
  }
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x1f7] = &PTR_LAB_00d4ec0c;
  if ((undefined4 *)param_1[0x1f9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1f9] = param_1[0x1f8];
  }
  if (param_1[0x1f8] != 0) {
    *(undefined4 *)(param_1[0x1f8] + 4) = param_1[0x1f9];
  }
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fc] = 0;
  if ((undefined4 *)param_1[0x1f9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1f9] = param_1[0x1f8];
  }
  if (param_1[0x1f8] != 0) {
    *(undefined4 *)(param_1[0x1f8] + 4) = param_1[0x1f9];
  }
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1f1] = &PTR_LAB_00d4ec0c;
  if ((undefined4 *)param_1[499] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[499] = param_1[0x1f2];
  }
  if (param_1[0x1f2] != 0) {
    *(undefined4 *)(param_1[0x1f2] + 4) = param_1[499];
  }
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[0x1f6] = 0;
  if ((undefined4 *)param_1[499] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[499] = param_1[0x1f2];
  }
  if (param_1[0x1f2] != 0) {
    *(undefined4 *)(param_1[0x1f2] + 4) = param_1[499];
  }
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[0x1eb] = &PTR_LAB_00d4ec0c;
  if ((undefined4 *)param_1[0x1ed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1ed] = param_1[0x1ec];
  }
  if (param_1[0x1ec] != 0) {
    *(undefined4 *)(param_1[0x1ec] + 4) = param_1[0x1ed];
  }
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1f0] = 0;
  if ((undefined4 *)param_1[0x1ed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1ed] = param_1[0x1ec];
  }
  if (param_1[0x1ec] != 0) {
    *(undefined4 *)(param_1[0x1ec] + 4) = param_1[0x1ed];
  }
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1e5] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x1e7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e7] = param_1[0x1e6];
  }
  if (param_1[0x1e6] != 0) {
    *(undefined4 *)(param_1[0x1e6] + 4) = param_1[0x1e7];
  }
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1ea] = 0;
  if ((undefined4 *)param_1[0x1e7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e7] = param_1[0x1e6];
  }
  if (param_1[0x1e6] != 0) {
    *(undefined4 *)(param_1[0x1e6] + 4) = param_1[0x1e7];
  }
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1df] = &PTR_FUN_00d341fc;
  if ((undefined4 *)param_1[0x1e1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e1] = param_1[0x1e0];
  }
  if (param_1[0x1e0] != 0) {
    *(undefined4 *)(param_1[0x1e0] + 4) = param_1[0x1e1];
  }
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e4] = 0;
  if ((undefined4 *)param_1[0x1e1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e1] = param_1[0x1e0];
  }
  if (param_1[0x1e0] != 0) {
    *(undefined4 *)(param_1[0x1e0] + 4) = param_1[0x1e1];
  }
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1d9] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x1db] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1db] = param_1[0x1da];
  }
  if (param_1[0x1da] != 0) {
    *(undefined4 *)(param_1[0x1da] + 4) = param_1[0x1db];
  }
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1de] = 0;
  if ((undefined4 *)param_1[0x1db] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1db] = param_1[0x1da];
  }
  if (param_1[0x1da] != 0) {
    *(undefined4 *)(param_1[0x1da] + 4) = param_1[0x1db];
  }
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1d3] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x1d5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1d5] = param_1[0x1d4];
  }
  if (param_1[0x1d4] != 0) {
    *(undefined4 *)(param_1[0x1d4] + 4) = param_1[0x1d5];
  }
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d8] = 0;
  if ((undefined4 *)param_1[0x1d5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1d5] = param_1[0x1d4];
  }
  if (param_1[0x1d4] != 0) {
    *(undefined4 *)(param_1[0x1d4] + 4) = param_1[0x1d5];
  }
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1cd] = &PTR_LAB_00d4ed68;
  if ((undefined4 *)param_1[0x1cf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1cf] = param_1[0x1ce];
  }
  if (param_1[0x1ce] != 0) {
    *(undefined4 *)(param_1[0x1ce] + 4) = param_1[0x1cf];
  }
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d2] = 0;
  if ((undefined4 *)param_1[0x1cf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1cf] = param_1[0x1ce];
  }
  if (param_1[0x1ce] != 0) {
    *(undefined4 *)(param_1[0x1ce] + 4) = param_1[0x1cf];
  }
  param_1[0x1ce] = 0;
  param_1[0x1cf] = 0;
  param_1[0x1c7] = &PTR_LAB_00d4ed68;
  if ((undefined4 *)param_1[0x1c9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1c9] = param_1[0x1c8];
  }
  if (param_1[0x1c8] != 0) {
    *(undefined4 *)(param_1[0x1c8] + 4) = param_1[0x1c9];
  }
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1cc] = 0;
  if ((undefined4 *)param_1[0x1c9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1c9] = param_1[0x1c8];
  }
  if (param_1[0x1c8] != 0) {
    *(undefined4 *)(param_1[0x1c8] + 4) = param_1[0x1c9];
  }
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1c1] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x1c3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1c3] = param_1[0x1c2];
  }
  if (param_1[0x1c2] != 0) {
    *(undefined4 *)(param_1[0x1c2] + 4) = param_1[0x1c3];
  }
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c6] = 0;
  if ((undefined4 *)param_1[0x1c3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1c3] = param_1[0x1c2];
  }
  if (param_1[0x1c2] != 0) {
    *(undefined4 *)(param_1[0x1c2] + 4) = param_1[0x1c3];
  }
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1bb] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x1bd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1bd] = param_1[0x1bc];
  }
  if (param_1[0x1bc] != 0) {
    *(undefined4 *)(param_1[0x1bc] + 4) = param_1[0x1bd];
  }
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1c0] = 0;
  if ((undefined4 *)param_1[0x1bd] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1bd] = param_1[0x1bc];
  }
  if (param_1[0x1bc] != 0) {
    *(undefined4 *)(param_1[0x1bc] + 4) = param_1[0x1bd];
  }
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1b5] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x1b7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b7] = param_1[0x1b6];
  }
  if (param_1[0x1b6] != 0) {
    *(undefined4 *)(param_1[0x1b6] + 4) = param_1[0x1b7];
  }
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1ba] = 0;
  if ((undefined4 *)param_1[0x1b7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b7] = param_1[0x1b6];
  }
  if (param_1[0x1b6] != 0) {
    *(undefined4 *)(param_1[0x1b6] + 4) = param_1[0x1b7];
  }
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1af] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x1b1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b1] = param_1[0x1b0];
  }
  if (param_1[0x1b0] != 0) {
    *(undefined4 *)(param_1[0x1b0] + 4) = param_1[0x1b1];
  }
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b4] = 0;
  if ((undefined4 *)param_1[0x1b1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b1] = param_1[0x1b0];
  }
  if (param_1[0x1b0] != 0) {
    *(undefined4 *)(param_1[0x1b0] + 4) = param_1[0x1b1];
  }
  param_1[0x1b0] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1a9] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x1ab] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1ab] = param_1[0x1aa];
  }
  if (param_1[0x1aa] != 0) {
    *(undefined4 *)(param_1[0x1aa] + 4) = param_1[0x1ab];
  }
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1ae] = 0;
  if ((undefined4 *)param_1[0x1ab] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1ab] = param_1[0x1aa];
  }
  if (param_1[0x1aa] != 0) {
    *(undefined4 *)(param_1[0x1aa] + 4) = param_1[0x1ab];
  }
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0;
  param_1[0x1a3] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x1a5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a5] = param_1[0x1a4];
  }
  if (param_1[0x1a4] != 0) {
    *(undefined4 *)(param_1[0x1a4] + 4) = param_1[0x1a5];
  }
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a8] = 0;
  if ((undefined4 *)param_1[0x1a5] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a5] = param_1[0x1a4];
  }
  if (param_1[0x1a4] != 0) {
    *(undefined4 *)(param_1[0x1a4] + 4) = param_1[0x1a5];
  }
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x19d] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x19f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19f] = param_1[0x19e];
  }
  if (param_1[0x19e] != 0) {
    *(undefined4 *)(param_1[0x19e] + 4) = param_1[0x19f];
  }
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a2] = 0;
  if ((undefined4 *)param_1[0x19f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19f] = param_1[0x19e];
  }
  if (param_1[0x19e] != 0) {
    *(undefined4 *)(param_1[0x19e] + 4) = param_1[0x19f];
  }
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x197] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x199] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x199] = param_1[0x198];
  }
  if (param_1[0x198] != 0) {
    *(undefined4 *)(param_1[0x198] + 4) = param_1[0x199];
  }
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19c] = 0;
  if ((undefined4 *)param_1[0x199] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x199] = param_1[0x198];
  }
  if (param_1[0x198] != 0) {
    *(undefined4 *)(param_1[0x198] + 4) = param_1[0x199];
  }
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x191] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x193] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x193] = param_1[0x192];
  }
  if (param_1[0x192] != 0) {
    *(undefined4 *)(param_1[0x192] + 4) = param_1[0x193];
  }
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x196] = 0;
  if ((undefined4 *)param_1[0x193] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x193] = param_1[0x192];
  }
  if (param_1[0x192] != 0) {
    *(undefined4 *)(param_1[0x192] + 4) = param_1[0x193];
  }
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x18b] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x18d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x18d] = param_1[0x18c];
  }
  if (param_1[0x18c] != 0) {
    *(undefined4 *)(param_1[0x18c] + 4) = param_1[0x18d];
  }
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[400] = 0;
  if ((undefined4 *)param_1[0x18d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x18d] = param_1[0x18c];
  }
  if (param_1[0x18c] != 0) {
    *(undefined4 *)(param_1[0x18c] + 4) = param_1[0x18d];
  }
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x185] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x187] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x187] = param_1[0x186];
  }
  if (param_1[0x186] != 0) {
    *(undefined4 *)(param_1[0x186] + 4) = param_1[0x187];
  }
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x18a] = 0;
  if ((undefined4 *)param_1[0x187] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x187] = param_1[0x186];
  }
  if (param_1[0x186] != 0) {
    *(undefined4 *)(param_1[0x186] + 4) = param_1[0x187];
  }
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x17f] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x181] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x181] = param_1[0x180];
  }
  if (param_1[0x180] != 0) {
    *(undefined4 *)(param_1[0x180] + 4) = param_1[0x181];
  }
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x184] = 0;
  if ((undefined4 *)param_1[0x181] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x181] = param_1[0x180];
  }
  if (param_1[0x180] != 0) {
    *(undefined4 *)(param_1[0x180] + 4) = param_1[0x181];
  }
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x179] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x17b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x17b] = param_1[0x17a];
  }
  if (param_1[0x17a] != 0) {
    *(undefined4 *)(param_1[0x17a] + 4) = param_1[0x17b];
  }
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17e] = 0;
  if ((undefined4 *)param_1[0x17b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x17b] = param_1[0x17a];
  }
  if (param_1[0x17a] != 0) {
    *(undefined4 *)(param_1[0x17a] + 4) = param_1[0x17b];
  }
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x173] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x175] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x175] = param_1[0x174];
  }
  if (param_1[0x174] != 0) {
    *(undefined4 *)(param_1[0x174] + 4) = param_1[0x175];
  }
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x178] = 0;
  if ((undefined4 *)param_1[0x175] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x175] = param_1[0x174];
  }
  if (param_1[0x174] != 0) {
    *(undefined4 *)(param_1[0x174] + 4) = param_1[0x175];
  }
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x16d] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x16f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16f] = param_1[0x16e];
  }
  if (param_1[0x16e] != 0) {
    *(undefined4 *)(param_1[0x16e] + 4) = param_1[0x16f];
  }
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x172] = 0;
  if ((undefined4 *)param_1[0x16f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16f] = param_1[0x16e];
  }
  if (param_1[0x16e] != 0) {
    *(undefined4 *)(param_1[0x16e] + 4) = param_1[0x16f];
  }
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x167] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x169] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x169] = param_1[0x168];
  }
  if (param_1[0x168] != 0) {
    *(undefined4 *)(param_1[0x168] + 4) = param_1[0x169];
  }
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16c] = 0;
  if ((undefined4 *)param_1[0x169] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x169] = param_1[0x168];
  }
  if (param_1[0x168] != 0) {
    *(undefined4 *)(param_1[0x168] + 4) = param_1[0x169];
  }
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x161] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x163] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x163] = param_1[0x162];
  }
  if (param_1[0x162] != 0) {
    *(undefined4 *)(param_1[0x162] + 4) = param_1[0x163];
  }
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x166] = 0;
  if ((undefined4 *)param_1[0x163] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x163] = param_1[0x162];
  }
  if (param_1[0x162] != 0) {
    *(undefined4 *)(param_1[0x162] + 4) = param_1[0x163];
  }
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x15b] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x15d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15d] = param_1[0x15c];
  }
  if (param_1[0x15c] != 0) {
    *(undefined4 *)(param_1[0x15c] + 4) = param_1[0x15d];
  }
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x160] = 0;
  if ((undefined4 *)param_1[0x15d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x15d] = param_1[0x15c];
  }
  if (param_1[0x15c] != 0) {
    *(undefined4 *)(param_1[0x15c] + 4) = param_1[0x15d];
  }
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x155] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x157] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x157] = param_1[0x156];
  }
  if (param_1[0x156] != 0) {
    *(undefined4 *)(param_1[0x156] + 4) = param_1[0x157];
  }
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x15a] = 0;
  if ((undefined4 *)param_1[0x157] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x157] = param_1[0x156];
  }
  if (param_1[0x156] != 0) {
    *(undefined4 *)(param_1[0x156] + 4) = param_1[0x157];
  }
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x14f] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x151] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x151] = param_1[0x150];
  }
  if (param_1[0x150] != 0) {
    *(undefined4 *)(param_1[0x150] + 4) = param_1[0x151];
  }
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x154] = 0;
  if ((undefined4 *)param_1[0x151] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x151] = param_1[0x150];
  }
  if (param_1[0x150] != 0) {
    *(undefined4 *)(param_1[0x150] + 4) = param_1[0x151];
  }
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x149] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x14b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14b] = param_1[0x14a];
  }
  if (param_1[0x14a] != 0) {
    *(undefined4 *)(param_1[0x14a] + 4) = param_1[0x14b];
  }
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14e] = 0;
  if ((undefined4 *)param_1[0x14b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14b] = param_1[0x14a];
  }
  if (param_1[0x14a] != 0) {
    *(undefined4 *)(param_1[0x14a] + 4) = param_1[0x14b];
  }
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x143] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x145] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x145] = param_1[0x144];
  }
  if (param_1[0x144] != 0) {
    *(undefined4 *)(param_1[0x144] + 4) = param_1[0x145];
  }
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x148] = 0;
  if ((undefined4 *)param_1[0x145] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x145] = param_1[0x144];
  }
  if (param_1[0x144] != 0) {
    *(undefined4 *)(param_1[0x144] + 4) = param_1[0x145];
  }
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x13d] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x13f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13f] = param_1[0x13e];
  }
  if (param_1[0x13e] != 0) {
    *(undefined4 *)(param_1[0x13e] + 4) = param_1[0x13f];
  }
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x142] = 0;
  if ((undefined4 *)param_1[0x13f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13f] = param_1[0x13e];
  }
  if (param_1[0x13e] != 0) {
    *(undefined4 *)(param_1[0x13e] + 4) = param_1[0x13f];
  }
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x137] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x139] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x139] = param_1[0x138];
  }
  if (param_1[0x138] != 0) {
    *(undefined4 *)(param_1[0x138] + 4) = param_1[0x139];
  }
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13c] = 0;
  if ((undefined4 *)param_1[0x139] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x139] = param_1[0x138];
  }
  if (param_1[0x138] != 0) {
    *(undefined4 *)(param_1[0x138] + 4) = param_1[0x139];
  }
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x131] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x133] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x133] = param_1[0x132];
  }
  if (param_1[0x132] != 0) {
    *(undefined4 *)(param_1[0x132] + 4) = param_1[0x133];
  }
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x136] = 0;
  if ((undefined4 *)param_1[0x133] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x133] = param_1[0x132];
  }
  if (param_1[0x132] != 0) {
    *(undefined4 *)(param_1[0x132] + 4) = param_1[0x133];
  }
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[299] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x12d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12d] = param_1[300];
  }
  if (param_1[300] != 0) {
    *(undefined4 *)(param_1[300] + 4) = param_1[0x12d];
  }
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x130] = 0;
  if ((undefined4 *)param_1[0x12d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12d] = param_1[300];
  }
  if (param_1[300] != 0) {
    *(undefined4 *)(param_1[300] + 4) = param_1[0x12d];
  }
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x125] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x127] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x127] = param_1[0x126];
  }
  if (param_1[0x126] != 0) {
    *(undefined4 *)(param_1[0x126] + 4) = param_1[0x127];
  }
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x12a] = 0;
  if ((undefined4 *)param_1[0x127] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x127] = param_1[0x126];
  }
  if (param_1[0x126] != 0) {
    *(undefined4 *)(param_1[0x126] + 4) = param_1[0x127];
  }
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x11f] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x121] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x121] = param_1[0x120];
  }
  if (param_1[0x120] != 0) {
    *(undefined4 *)(param_1[0x120] + 4) = param_1[0x121];
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x124] = 0;
  if ((undefined4 *)param_1[0x121] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x121] = param_1[0x120];
  }
  if (param_1[0x120] != 0) {
    *(undefined4 *)(param_1[0x120] + 4) = param_1[0x121];
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x119] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x11b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11b] = param_1[0x11a];
  }
  if (param_1[0x11a] != 0) {
    *(undefined4 *)(param_1[0x11a] + 4) = param_1[0x11b];
  }
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11e] = 0;
  if ((undefined4 *)param_1[0x11b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11b] = param_1[0x11a];
  }
  if (param_1[0x11a] != 0) {
    *(undefined4 *)(param_1[0x11a] + 4) = param_1[0x11b];
  }
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  FUN_007748a0((int)(param_1 + 0x10a));
  FUN_005fd4b0((int)(param_1 + 0x105));
  if (0x14 < (uint)param_1[0xfc]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xfa]);
  }
  DAT_01050c3c = 0;
  local_4._0_1_ = 3;
  FUN_00a21540();
  if (10 < (uint)param_1[0xe1]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xdf]);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_destructor_iterator_(param_1 + 0xdb,4,4,FUN_00768b80);
  param_1[0xd4] = &PTR_LAB_00d4ed68;
  if ((undefined4 *)param_1[0xd6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd6] = param_1[0xd5];
  }
  if (param_1[0xd5] != 0) {
    *(undefined4 *)(param_1[0xd5] + 4) = param_1[0xd6];
  }
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd9] = 0;
  if ((undefined4 *)param_1[0xd6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd6] = param_1[0xd5];
  }
  if (param_1[0xd5] != 0) {
    *(undefined4 *)(param_1[0xd5] + 4) = param_1[0xd6];
  }
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0077d420 @ 0077d420 ////

undefined1 __fastcall FUN_0077d420(void *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *this;
  undefined4 uVar8;
  uint uVar9;
  float fVar10;
  void *pvVar11;
  undefined1 local_9;
  
  if (DAT_0104e4a8 == 0) {
    return 0;
  }
  uVar7 = *(uint *)((int)param_1 + 0x3a0);
  uVar6 = *(uint *)((int)param_1 + 0x39c) & (0 < (int)*(uint *)((int)param_1 + 0x39c)) - 1;
  *(uint *)((int)param_1 + 0x3a0) = uVar6;
  if (uVar6 != uVar7) {
    *(undefined1 *)((int)param_1 + 0x452) = 1;
  }
  uVar7 = *(uint *)(DAT_0104e4a8 + 0xd0);
  uVar6 = 0;
  local_9 = 1;
  if (uVar7 != 0) {
    while( true ) {
      fVar2 = (float)(int)uVar7;
      if ((int)uVar7 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar4 = (float)(int)uVar6;
      if ((int)uVar6 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      uVar1 = uVar6 + 1;
      fVar3 = (float)(int)uVar1;
      if ((int)uVar1 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      uVar9 = *(int *)(DAT_0104e4a8 + 0xcc) + uVar6;
      uVar7 = uVar9 >> 2;
      iVar5 = uVar7 * -4;
      if (*(uint *)(DAT_0104e4a8 + 200) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(DAT_0104e4a8 + 200);
      }
      pvVar11 = *(void **)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar7 * 4) + (uVar9 + iVar5) * 4
                          );
      fVar10 = fVar4 / fVar2;
      this = (void *)FUN_007683b0();
      FUN_00768290(this,fVar10,pvVar11);
      uVar6 = *(int *)(DAT_0104e4a8 + 0xcc) + uVar6;
      uVar7 = uVar6 >> 2;
      iVar5 = uVar7 * -4;
      if (*(uint *)(DAT_0104e4a8 + 200) <= uVar7) {
        uVar7 = uVar7 - *(uint *)(DAT_0104e4a8 + 200);
      }
      uVar8 = FUN_0077b620(param_1,*(void **)(*(int *)(*(int *)(DAT_0104e4a8 + 0xc4) + uVar7 * 4) +
                                             (uVar6 + iVar5) * 4),fVar4 / fVar2,fVar3 / fVar2);
      if ((char)uVar8 == '\0') break;
      uVar7 = *(uint *)(DAT_0104e4a8 + 0xd0);
      uVar6 = uVar1;
      if (uVar7 <= uVar1) {
        FUN_009d10d0();
        return 1;
      }
    }
    local_9 = 0;
  }
  FUN_009d10d0();
  return local_9;
}


//// FUNCTION FUN_0077d5a0 @ 0077d5a0 ////

undefined4 * __thiscall FUN_0077d5a0(void *this,byte param_1)

{
  WTrailerEditorLite_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0077d5c0 @ 0077d5c0 ////

uint __thiscall FUN_0077d5c0(void *this,void *param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *unaff_FS_OFFSET;
  wchar_t *in_stack_ffffff74;
  uint in_stack_ffffff78;
  uint in_stack_ffffff7c;
  float fVar14;
  undefined2 **ppuVar15;
  void *pvVar16;
  undefined4 uVar17;
  uint uStack_5c;
  uint uStack_58;
  undefined2 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined2 auStack_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  undefined4 uStack_14;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd9d88;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  uVar6 = *(uint *)((int)this + 0x3a0);
  *(undefined1 *)((int)this + 0x45a) = 0;
  *(undefined1 *)((int)this + 0x45b) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  uVar3 = *(uint *)((int)this + 0x39c) & (0 < (int)*(uint *)((int)this + 0x39c)) - 1;
  *(uint *)((int)this + 0x3a0) = uVar3;
  if (uVar3 != uVar6) {
    *(undefined1 *)((int)this + 0x452) = 1;
  }
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0x3f800000;
  FUN_00771e00(param_1,(undefined4 *)&stack0xffffff70);
  local_4 = 0xffffffff;
  iVar4 = FUN_007683b0();
  FUN_007679c0(iVar4);
  pvVar16 = (void *)0x0;
  fVar14 = 0.0;
  pvVar5 = (void *)FUN_007683b0();
  FUN_00768290(pvVar5,fVar14,pvVar16);
  FUN_0077bce0((int)this);
  FUN_0074e100();
  (*(code *)DAT_0104e494[1])();
  DAT_0104e4a8 = param_1;
  uVar6 = (*(code *)*DAT_0104e494)();
  if (*(int *)((int)DAT_0104e4a8 + 0xd0) != 0) {
    if (*(char *)((int)this + 0x34b) == '\0') {
      (**(code **)(*DAT_0104e5d8 + 0x20))();
      (**(code **)(*DAT_0104e5d8 + 0xc0))();
      FUN_00770c90((int)this);
    }
    if (DAT_0104e490 != (void *)0x0) {
      FUN_0045f620(DAT_0104e490,(undefined4 *)&stack0xffffff74);
      local_4 = 0xffffffff;
      pvVar5 = (void *)FUN_005b25f0((int)DAT_0104e490);
      FUN_007546f0(pvVar5,in_stack_ffffff74,in_stack_ffffff78,in_stack_ffffff7c);
      cVar2 = '\x01';
      ppuVar15 = &puStack_4c;
      pvVar5 = (void *)FUN_005b25f0((int)DAT_0104e490);
      puVar7 = FUN_00755040(pvVar5,ppuVar15,cVar2);
      local_4 = 2;
      uVar6 = FUN_009d4900(puVar7);
      local_4 = 0xffffffff;
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_4c);
      }
      if (uVar6 == 0) {
        pvVar5 = (void *)FUN_005b25f0((int)DAT_0104e490);
        FUN_00759a80(pvVar5);
      }
    }
    if (*(int *)((int)DAT_0104e4a8 + 0x128) < 1) {
      DAT_010b9554 = 1;
      DAT_010b9555 = 1;
      FUN_009750b0((void *)0x0);
      FUN_004015d0((void *)((int)this + 1000),"",0);
      *(undefined4 *)((int)this + 0x408) = 0;
      *(undefined1 *)((int)this + 0x3e6) = 0;
      (**(code **)(*(int *)DAT_0104e5d8[0xd5] + 0xc0))();
    }
    FUN_0074b390();
    FUN_00748a80();
    uVar17 = 0x200;
    pvVar5 = (void *)FUN_0074b390();
    FUN_0074c810(pvVar5,uVar17);
    puVar7 = FUN_00771e00(param_1,&puStack_4c);
    local_4 = 3;
    iVar4 = FUN_0074b390();
    FUN_004036d0((void *)(iVar4 + 0x38),(wchar_t *)*puVar7,puVar7[1]);
    local_4 = 0xffffffff;
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_4c);
    }
    iVar4 = FUN_0074b390();
    FUN_004036d0((void *)(iVar4 + 0x58),*(wchar_t **)((int)param_1 + 0xfc),
                 *(uint *)((int)param_1 + 0x100));
    iVar4 = FUN_0074b390();
    FUN_004036d0((void *)(iVar4 + 0x78),*(wchar_t **)((int)param_1 + 0x20c),
                 *(uint *)((int)param_1 + 0x210));
    iVar4 = 0;
    do {
      iVar8 = FUN_0074b390();
      piVar13 = (int *)(iVar8 + 0x98 + iVar4);
      uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
      if ((uint)piVar13[2] <= uVar6) {
        if (10 < (uint)piVar13[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar13);
        }
        uVar3 = uVar6 + 0x20 >> 5;
        piVar13[2] = uVar3 << 5;
        pvVar5 = _malloc(uVar3 * 0x40);
        *piVar13 = (int)pvVar5;
      }
      _wcsncpy((wchar_t *)*piVar13,(wchar_t *)&lpCaption_00d16918,uVar6);
      piVar13[1] = uVar6;
      *(undefined2 *)(*piVar13 + uVar6 * 2) = 0;
      iVar8 = FUN_0074b390();
      piVar13 = (int *)(iVar8 + 0xf8 + iVar4);
      uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
      if ((uint)piVar13[2] <= uVar6) {
        if (10 < (uint)piVar13[2]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar13);
        }
        uVar3 = uVar6 + 0x20 >> 5;
        piVar13[2] = uVar3 << 5;
        pvVar5 = _malloc(uVar3 * 0x40);
        *piVar13 = (int)pvVar5;
      }
      _wcsncpy((wchar_t *)*piVar13,(wchar_t *)&lpCaption_00d16918,uVar6);
      iVar4 = iVar4 + 0x20;
      piVar13[1] = uVar6;
      *(undefined2 *)(*piVar13 + uVar6 * 2) = 0;
    } while (iVar4 < 0x60);
    iVar4 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    while( true ) {
      if (*(int *)((int)param_1 + 0x264) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((int)param_1 + 0x268) - *(int *)((int)param_1 + 0x264) >> 2;
      }
      if (iVar8 <= iVar4) break;
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x264) + iVar4 * 4);
      iVar9 = *(int *)(iVar8 + 8);
      if ((((iVar9 == 1) || (iVar9 == 3)) || (iVar9 == 2)) && (uStack_58 < 0x60)) {
        iVar9 = FUN_0074b390();
        uVar6 = *(uint *)(iVar8 + 0x10);
        pwVar1 = *(wchar_t **)(iVar8 + 0xc);
        piVar13 = (int *)(iVar9 + 0x98 + uStack_58);
        if ((uint)piVar13[2] <= uVar6) {
          if (10 < (uint)piVar13[2]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*piVar13);
          }
          uVar3 = uVar6 + 0x20 >> 5;
          piVar13[2] = uVar3 << 5;
          pvVar5 = _malloc(uVar3 * 0x40);
          *piVar13 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*piVar13,pwVar1,uVar6);
        piVar13[1] = uVar6;
        *(undefined2 *)(*piVar13 + uVar6 * 2) = 0;
        iVar9 = FUN_0074b390();
        uVar6 = *(uint *)(iVar8 + 0x30);
        pwVar1 = *(wchar_t **)(iVar8 + 0x2c);
        piVar13 = (int *)(iVar9 + 0xf8 + uStack_58);
        if ((uint)piVar13[2] <= uVar6) {
          if (10 < (uint)piVar13[2]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*piVar13);
          }
          uVar3 = uVar6 + 0x20 >> 5;
          piVar13[2] = uVar3 << 5;
          pvVar5 = _malloc(uVar3 * 0x40);
          *piVar13 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*piVar13,pwVar1,uVar6);
        uStack_5c = uStack_5c + 1;
        piVar13[1] = uVar6;
        uStack_58 = uStack_58 + 0x20;
        *(undefined2 *)(*piVar13 + uVar6 * 2) = 0;
      }
      iVar4 = iVar4 + 1;
    }
    iVar8 = 0;
    iVar4 = uStack_5c << 5;
    while( true ) {
      if (*(int *)((int)param_1 + 0x264) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)((int)param_1 + 0x268) - *(int *)((int)param_1 + 0x264) >> 2;
      }
      if (iVar9 <= iVar8) break;
      iVar9 = *(int *)(*(int *)((int)param_1 + 0x264) + iVar8 * 4);
      if ((*(int *)(iVar9 + 8) == 0) && (uStack_5c < 3)) {
        iVar10 = FUN_0074b390();
        uVar6 = *(uint *)(iVar9 + 0x10);
        pwVar1 = *(wchar_t **)(iVar9 + 0xc);
        piVar13 = (int *)(iVar10 + 0x98 + iVar4);
        if ((uint)piVar13[2] <= uVar6) {
          if (10 < (uint)piVar13[2]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*piVar13);
          }
          uVar3 = uVar6 + 0x20 >> 5;
          piVar13[2] = uVar3 << 5;
          pvVar5 = _malloc(uVar3 * 0x40);
          *piVar13 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*piVar13,pwVar1,uVar6);
        piVar13[1] = uVar6;
        *(undefined2 *)(*piVar13 + uVar6 * 2) = 0;
        iVar10 = FUN_0074b390();
        uVar6 = *(uint *)(iVar9 + 0x30);
        pwVar1 = *(wchar_t **)(iVar9 + 0x2c);
        piVar13 = (int *)(iVar10 + 0xf8 + iVar4);
        if ((uint)piVar13[2] <= uVar6) {
          if (10 < (uint)piVar13[2]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*piVar13);
          }
          uVar3 = uVar6 + 0x20 & 0xffffffe0;
          piVar13[2] = uVar3;
          pvVar5 = _malloc(uVar3 * 2);
          *piVar13 = (int)pvVar5;
        }
        _wcsncpy((wchar_t *)*piVar13,pwVar1,uVar6);
        piVar13[1] = uVar6;
        *(undefined2 *)(*piVar13 + uVar6 * 2) = 0;
        uStack_5c = uStack_5c + 1;
        iVar4 = iVar4 + 0x20;
      }
      iVar8 = iVar8 + 1;
    }
    cVar2 = FUN_0077d420(this);
    if (cVar2 != '\0') {
      FUN_009a63a0(0x200,-1);
      FUN_00773260();
      FUN_007776f0(this);
      if (*(int *)((int)this + 0x36c) == 0) {
        FUN_00774420((int)this);
      }
      if (*(char *)((int)this + 0x455) != '\0') {
        FUN_00771e50((int)this);
      }
      FUN_00774e80((int)this);
      FUN_007741b0((int)this);
      FUN_0076fbe0(DAT_0104e458);
      FUN_007741b0((int)this);
      if (DAT_0104e4a8 != (void *)0x0) {
        puStack_4c = auStack_40;
        auStack_40[0] = 0;
        uStack_48 = 0;
        uStack_44 = 10;
        local_4 = 4;
        puVar7 = FUN_00771e00(DAT_0104e4a8,apvStack_2c);
        sVar11 = FUN_00ace02d(L"<T1 COLOR = #FFFFFF>");
        FUN_0040cae0(&puStack_4c,L"<T1 COLOR = #FFFFFF>",sVar11);
        FUN_0040cae0(&puStack_4c,(wchar_t *)*puVar7,puVar7[1]);
        sVar11 = FUN_00ace02d(L"</T1>");
        FUN_0040cae0(&puStack_4c,L"</T1>",sVar11);
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        (**(code **)(**(int **)((int)this + 0x478) + 0x54))();
        local_4 = 0xffffffff;
        if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_4c);
        }
      }
      iVar4 = FUN_007683b0();
      FUN_00767790(iVar4);
      (**(code **)(**(int **)((int)this + 0x4d8) + 0x74))();
      if ((((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (DAT_0104e4a8 != (void *)0x0)) &&
         ((*(int *)((int)DAT_0104e4a8 + 0xd0) != 0 && (*(int *)((int)this + 0x438) != 0)))) {
        *(undefined1 *)((int)this + 0x45a) = 0;
        *(undefined1 *)((int)this + 0x45b) = 0;
        *(undefined4 *)((int)this + 0x3bc) = 0;
        FUN_00a29560();
        FUN_007765b0(this);
        if (*(char *)((int)this + 0x459) != '\0') {
          FUN_009b0e40(0);
          *(undefined1 *)((int)this + 0x459) = 0;
          FUN_00772eb0(*(void **)((int)this + 0x658),"ui/postproc/postprod_track_recordoff.dds");
          if (*(int **)((int)this + 0x34c) != (int *)0x0) {
            (**(code **)(**(int **)((int)this + 0x34c) + 0xc))();
            FUN_00773510((int)this);
          }
        }
        FUN_009b0f60(4);
      }
      *(undefined1 *)((int)this + 0x452) = 1;
      *(undefined1 *)((int)this + 0x454) = 0;
      FUN_00776820(this);
      pvVar5 = DAT_0104e4a8;
      uVar6 = *(uint *)((int)DAT_0104e4a8 + 0xcc);
      iVar4 = (int)DAT_0104e4a8 + 0xc0;
      while( true ) {
        iVar8 = (int)DAT_0104e4a8 + 0xc0;
        if ((iVar4 == iVar8) &&
           (uVar6 == *(int *)((int)DAT_0104e4a8 + 0xd0) + *(int *)((int)DAT_0104e4a8 + 0xcc)))
        break;
        uVar12 = uVar6 >> 2;
        iVar8 = uVar12 * -4;
        uVar3 = *(uint *)((int)pvVar5 + 200);
        if (uVar3 <= uVar12) {
          uVar12 = uVar12 - uVar3;
        }
        piVar13 = (int *)FUN_00773f30(this,*(int *)(*(int *)(*(int *)((int)pvVar5 + 0xc4) +
                                                            uVar12 * 4) + (uVar6 + iVar8) * 4));
        iVar8 = *piVar13;
        iVar9 = FUN_007535c0(piVar13[1]);
        *(int *)(iVar8 + 0x8c) = iVar9;
        uVar6 = uVar6 + 1;
      }
      *unaff_FS_OFFSET = uStack_14;
      return CONCAT31((int3)((uint)iVar8 >> 8),1);
    }
    FUN_0077bce0((int)this);
    iVar4 = FUN_007683b0();
    FUN_00767790(iVar4);
    (**(code **)(*DAT_0104e5d8 + 0x20))();
    (**(code **)(*DAT_0104e5d8 + 0xc0))();
    uVar6 = FUN_00770bb0((int)this);
  }
  *unaff_FS_OFFSET = uStack_c;
  return uVar6 & 0xffffff00;
}


//// FUNCTION FUN_0077df00 @ 0077df00 ////

undefined4 FUN_0077df00(void)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 uVar5;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  undefined2 *puStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined2 auStack_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cd9dbb;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0040cae0(&local_6c,(wchar_t *)PTR_DAT_00e59204,DAT_00e59208);
  FUN_0040cae0(&local_6c,(wchar_t *)PTR_DAT_00e591e4,DAT_00e591e8);
  if (DAT_0104e490 == 0) {
    if (DAT_0104e4a8 != (undefined4 *)0x0) {
      (**(code **)*DAT_0104e4a8)(1);
    }
    (*(code *)DAT_0104e494[1])();
    DAT_0104e4a8 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e494)();
  }
  puVar1 = operator_new(0x6a8);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_007593a0(puVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  (*(code *)DAT_0104e494[1])();
  DAT_0104e4a8 = puVar1;
  (*(code *)*DAT_0104e494)();
  pwVar2 = _wcsstr((wchar_t *)PTR_DAT_00e591e4,L".trl");
  if (pwVar2 == (wchar_t *)0x0) {
    pwVar2 = _wcsstr((wchar_t *)PTR_DAT_00e591e4,L".TRL");
    if (pwVar2 == (wchar_t *)0x0) goto LAB_0077e144;
  }
  uVar3 = FUN_00759790(DAT_0104e4a8,local_6c);
  if ((char)uVar3 != '\0') {
    FUN_00770d70(DAT_0104e478,'\0');
    FUN_004036d0((void *)((int)DAT_0104e478 + 0x37c),local_6c,local_68);
    FUN_007737d0((int)DAT_0104e478);
    uVar3 = FUN_0077d5c0(DAT_0104e478,DAT_0104e4a8);
    if ((DAT_0104e4a8 != (undefined4 *)0x0) && ((char)uVar3 != '\0')) {
      puStack_4c = auStack_40;
      auStack_40[0] = 0;
      uStack_48 = 0;
      uStack_44 = 10;
      local_4._0_1_ = 2;
      puVar1 = FUN_00771e00(DAT_0104e4a8,apvStack_2c);
      sVar4 = FUN_00ace02d(L"<T1 COLOR = #FFFFFF>");
      FUN_0040cae0(&puStack_4c,L"<T1 COLOR = #FFFFFF>",sVar4);
      FUN_0040cae0(&puStack_4c,(wchar_t *)*puVar1,puVar1[1]);
      sVar4 = FUN_00ace02d(L"</T1>");
      FUN_0040cae0(&puStack_4c,L"</T1>",sVar4);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      (**(code **)(**(int **)((int)DAT_0104e478 + 0x478) + 0x54))(&puStack_4c);
      local_4 = (uint)local_4._1_3_ << 8;
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_4c);
      }
    }
  }
LAB_0077e144:
  uVar5 = FUN_0075e320();
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_0077e180 @ 0077e180 ////

undefined4 FUN_0077e180(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  size_t sVar3;
  uint uVar4;
  undefined1 *puVar5;
  char *local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  char local_60 [20];
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
  
  puStack_8 = &LAB_00cd9df0;
  local_c = ExceptionList;
  puVar5 = DAT_0104e310;
  if (DAT_0104e310 == (undefined1 *)0x0) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar2 = (undefined4 *)FUN_00567ff0(&local_2c);
    FUN_0040cae0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
    sVar3 = FUN_00ace02d(L"\\The Movies\\Movies\\");
    FUN_0040cae0(&local_4c,L"\\The Movies\\Movies\\",sVar3);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    uVar4 = FUN_00ace02d((short *)&PTR_LAB_00d4f1f4);
    FUN_004036d0(&local_2c,(wchar_t *)&PTR_LAB_00d4f1f4,uVar4);
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = (undefined1 *)0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"TRAILER_SELECT_MOVIE",0x14);
    local_68 = 0x14;
    local_6c[0x14] = '\0';
    local_4._0_1_ = 2;
    FUN_00761340(&local_6c,&local_4c,&local_2c,0x77df00,1,1);
    if (&DAT_00000014 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_4._0_1_ = 0;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 0;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    puVar5 = local_64;
    if (DAT_0104e310 != (undefined1 *)0x0) {
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 10;
      uVar4 = FUN_00ace02d(L"data\\sample movies\\");
      FUN_004036d0(&local_2c,L"data\\sample movies\\",uVar4);
      local_4._0_1_ = 3;
      FUN_0075fc10(DAT_0104e310,&local_2c);
      local_4._0_1_ = 0;
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      puVar5 = (undefined1 *)FUN_0075e300((int)DAT_0104e310);
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)puVar5 >> 8),1);
}


//// FUNCTION FUN_0077e370 @ 0077e370 ////

uint __thiscall FUN_0077e370(void *this,uint param_1)

{
  undefined3 uVar3;
  uint uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  uVar1 = DAT_0104e394;
  if (((DAT_0104e394 == 0) && (DAT_0104e330 == 0)) && (*(char *)((int)this + 0x349) == '\0')) {
    *(undefined1 *)((int)this + 0x45c) = 0;
    uVar3 = (undefined3)(param_1 >> 8);
    uVar1 = param_1;
    switch(param_1) {
    case 0:
      uVar2 = FUN_007762b0(this);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    case 1:
      uVar2 = FUN_00774d90((int)this);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    case 2:
      uVar2 = FUN_00776710(this,'\0');
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    case 3:
    case 4:
      uVar1 = FUN_00770f40((int)this);
      if ((char)uVar1 != '\0') {
        *(undefined1 *)(extraout_ECX + 0x45a) = 0;
        *(undefined1 *)(extraout_ECX + 0x45b) = 0;
        *(undefined4 *)(extraout_ECX + 0x3bc) = 0;
        *(undefined4 *)(extraout_ECX + 0x368) = 0;
      }
      return CONCAT31((int3)(uVar1 >> 8),1);
    case 5:
      uVar1 = FUN_00770f40((int)this);
      if ((char)uVar1 != '\0') {
        uVar1 = FUN_00767500();
      }
      return CONCAT31((int3)(uVar1 >> 8),1);
    case 6:
      uVar2 = FUN_0077e180();
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    case 7:
      uVar2 = FUN_00777300(this);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    case 9:
      uVar2 = FUN_00774e20((int)this);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    case 0xd:
      *(float *)((int)this + 0x3d4) = -*(float *)((int)this + 0x3d4);
      return CONCAT31(uVar3,1);
    case 0xe:
      uVar2 = FUN_007717d0(this);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    case 0xf:
      uVar2 = FUN_00771070((int)this);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    case 0x10:
      *(bool *)((int)this + 0x34a) = *(char *)((int)this + 0x34a) == '\0';
      *(undefined1 *)((int)this + 0x452) = 1;
      return CONCAT31(uVar3,1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0077e540 @ 0077e540 ////

/* WARNING: Removing unreachable block (ram,0x00782e2e) */

void __fastcall FUN_0077e540(int *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int *piVar9;
  float fVar10;
  uint unaff_EBX;
  float10 fVar11;
  void *pvStack_828;
  undefined4 uStack_824;
  uint uStack_820;
  int *piStack_81c;
  void *pvStack_818;
  int *piStack_7e4;
  void *pvStack_7ac;
  undefined4 uStack_7a8;
  int *piStack_7a4;
  void *pvStack_7a0;
  void *pvStack_774;
  undefined4 uStack_770;
  uint uStack_76c;
  undefined1 *puStack_734;
  void *pvStack_730;
  uint uStack_72c;
  uint uStack_728;
  uint uStack_724;
  undefined4 uStack_720;
  int iStack_71c;
  void *pvStack_718;
  undefined1 *puStack_6c8;
  uint uStack_6c4;
  uint uStack_6c0;
  int iStack_6bc;
  uint uStack_6b8;
  undefined4 uStack_6b4;
  int iStack_6b0;
  void *pvStack_6ac;
  undefined1 *puStack_680;
  undefined4 uStack_67c;
  uint uStack_678;
  undefined1 *_Memory;
  undefined1 *_Memory_00;
  uint uStack_638;
  uint uStack_634;
  uint *puStack_614;
  uint uStack_610;
  uint uStack_60c;
  uint uStack_608;
  uint uStack_604;
  uint *puVar12;
  uint uStack_5c4;
  uint uStack_5c0;
  uint **_Memory_01;
  uint *puStack_5a0;
  uint uStack_59c;
  uint uStack_598;
  uint auStack_594 [2];
  uint *puStack_558;
  undefined1 *puStack_554;
  uint uStack_54c;
  uint **_Memory_02;
  uint *puStack_534;
  uint uStack_530;
  uint uStack_52c;
  uint auStack_528 [2];
  uint uVar13;
  uint *puStack_4cc;
  void *pvStack_4c8;
  undefined1 *puStack_4c4;
  uint uStack_4c0;
  uint uStack_4bc;
  undefined1 *puVar14;
  uint *puStack_484;
  undefined4 uStack_480;
  uint uStack_47c;
  uint auStack_478 [3];
  uint uStack_46c;
  void *pvStack_468;
  uint *puStack_43c;
  undefined4 uStack_438;
  uint uStack_434;
  uint uStack_430;
  uint uVar15;
  undefined1 *puStack_3fc;
  undefined4 uStack_3f8;
  uint uStack_3d4;
  uint auStack_3d0 [3];
  void **ppvStack_3c4;
  uint uStack_3c0;
  int *piStack_3bc;
  void *pvStack_3b8;
  uint *puStack_38c;
  int iStack_388;
  uint uStack_384;
  uint uStack_380;
  int iStack_37c;
  void *pvStack_378;
  uint *puStack_34c;
  int iStack_348;
  uint uStack_344;
  uint uStack_340;
  int iStack_33c;
  void *pvStack_338;
  uint *puStack_30c;
  int iStack_308;
  uint uStack_304;
  uint uStack_300;
  int iStack_2fc;
  void *pvStack_2f8;
  uint *puStack_2cc;
  int iStack_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  int iStack_2bc;
  void *pvStack_2b8;
  undefined1 *puVar16;
  uint *puStack_28c;
  int iStack_288;
  uint uStack_284;
  uint uStack_280;
  int *piStack_27c;
  void *pvStack_278;
  undefined1 *puVar17;
  char *pcStack_24c;
  int iStack_248;
  uint uStack_244;
  undefined **ppuStack_22c;
  uint uStack_228;
  uint uStack_224;
  undefined *puStack_220;
  undefined1 *puStack_218;
  uint uStack_204;
  uint auStack_200 [2];
  uint *puStack_1ec;
  undefined4 uStack_1e8;
  uint *puStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  void *pvStack_1d4;
  void *pvVar18;
  undefined1 *puStack_1a8;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  undefined *puVar19;
  undefined1 *puVar20;
  char *pcStack_168;
  uint uStack_164;
  undefined *puStack_160;
  void *pvStack_154;
  undefined4 uStack_150;
  int *piStack_14c;
  char *pcStack_148;
  undefined4 uStack_144;
  undefined **ppuStack_140;
  int iVar21;
  char *pcVar22;
  uint uStack_128;
  undefined4 *puStack_11c;
  uint *puVar23;
  int **ppiStack_10c;
  uint uStack_108;
  uint uStack_104;
  int *piStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int *piStack_f4;
  undefined4 *puStack_f0;
  uint uVar24;
  void *apvStack_a8 [2];
  uint uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *puStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  uint auStack_78 [3];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  char acStack_58 [12];
  undefined4 uStack_4c;
  undefined4 local_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdaec3;
  pvStack_c = ExceptionList;
  local_3c = 0;
  ExceptionList = &pvStack_c;
  FUN_00785840();
  (**(code **)(*DAT_0104e5d8 + 0x20))();
  (**(code **)(*DAT_0104e5d8 + 0xc0))();
  fVar10 = DAT_0105c404 - 340.0;
  param_1[0xf6] = (int)fVar10;
  param_1[0xf7] = (int)(fVar10 + 160.0);
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puStack_84 = auStack_78;
    auStack_78[0] = auStack_78[0] & 0xffffff00;
    uStack_80 = 0;
    uStack_7c = 0x14;
    _strncpy((char *)puStack_84,"POST_EXIT",9);
    uStack_80 = 9;
    *(char *)((int)puStack_84 + 9) = '\0';
    pcStack_64 = acStack_58;
    acStack_58[0] = '\0';
    uStack_60 = 0;
    uStack_5c = 0x14;
    _strncpy(pcStack_64,"button_goback.",0xe);
    uStack_60 = 0xe;
    pcStack_64[0xe] = '\0';
    pvStack_c = (void *)0x2;
    puStack_f0 = (undefined4 *)0x77e670;
    puVar3 = FUN_009b5030(apvStack_a8,&puStack_84);
    pvStack_c = (void *)0x3;
    unaff_EBX = 7;
    puStack_f0 = (undefined4 *)0x77e6b2;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&pcStack_64,puVar3,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  pvStack_c = (void *)0x6;
  (**(code **)(param_1[0x16d] + 4))();
  param_1[0x172] = (int)puVar3;
  (**(code **)param_1[0x16d])();
  if (((unaff_EBX & 4) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffb, 10 < uStack_a0)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_a8[0]);
  }
  if (((unaff_EBX & 2) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffd, 0x14 < uStack_5c)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_64);
  }
  pvStack_c = (void *)0xffffffff;
  if (((unaff_EBX & 1) != 0) && (0x14 < uStack_7c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_84);
  }
  (**(code **)(*(int *)param_1[0x172] + 0x18))();
  pvVar2 = (void *)0x0;
  puStack_f0 = (undefined4 *)0x77e794;
  (**(code **)(*(int *)param_1[0x172] + 0x18))();
  puStack_f0 = (undefined4 *)0x0;
  uStack_f8 = 1;
  uStack_fc = 0x77e7a3;
  piStack_f4 = param_1;
  (**(code **)(*(int *)param_1[0x172] + 0x5c))();
  uStack_fc = 0;
  uStack_104 = 1;
  uStack_108 = 0x77e7b2;
  piStack_100 = param_1;
  (**(code **)(*(int *)param_1[0x172] + 100))();
  ppiStack_10c = (int **)param_1[0x172];
  uStack_108 = 2;
  (**(code **)(*param_1 + 0xc))();
  puStack_f0 = operator_new(0x3fc);
  uStack_4c = 7;
  if (puStack_f0 == (undefined4 *)0x0) {
    puStack_f0 = (undefined4 *)0x0;
  }
  else {
    puStack_f0 = FUN_00833290(puStack_f0);
  }
  uStack_4c = 0xffffffff;
  (**(code **)(param_1[0x119] + 4))();
  param_1[0x11e] = (int)puStack_f0;
  (**(code **)param_1[0x119])();
  puVar23 = (uint *)0x42800000;
  (**(code **)(*(int *)param_1[0x11e] + 0x5c))();
  (**(code **)(*(int *)param_1[0x11e] + 100))();
  *(undefined4 *)(param_1[0x11e] + 0x354) = 0x44160000;
  *(undefined1 *)(param_1[0x11e] + 0x358) = 1;
  (**(code **)(*(int *)param_1[0x11e] + 0x78))();
  uVar24 = 0;
  uVar4 = FUN_00ace02d(L"<T1 COLOR = #FFFFFF><TRANSLATE>POST_MOVIEPLAYER</TRANSLATE></T1>");
  FUN_004036d0(&stack0xffffff20,L"<T1 COLOR = #FFFFFF><TRANSLATE>POST_MOVIEPLAYER</TRANSLATE></T1>",
               uVar4);
  uStack_68 = 8;
  (**(code **)(*(int *)param_1[0x11e] + 0x54))();
  uStack_6c = 0xffffffff;
  if (10 < uVar24) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  pcVar22 = (char *)0x0;
  (**(code **)(*(int *)param_1[0x11e] + 0x8c))();
  (**(code **)(*param_1 + 0xc))();
  ppuStack_140 = (undefined **)0x77e905;
  puVar3 = operator_new(0x3fc);
  auStack_78[0] = 9;
  if (puVar3 == (undefined4 *)0x0) {
    puStack_11c = (undefined4 *)0x0;
  }
  else {
    puStack_11c = FUN_00833290(puVar3);
  }
  auStack_78[0] = 0xffffffff;
  (**(code **)(param_1[0x11f] + 4))();
  param_1[0x124] = (int)puStack_11c;
  (**(code **)param_1[0x11f])();
  uStack_144 = 2;
  pcStack_148 = (char *)0x77e969;
  ppuStack_140 = (undefined **)param_1;
  (**(code **)(*(int *)param_1[0x124] + 0x60))();
  pcStack_148 = (char *)0x40400000;
  uStack_150 = 1;
  pvStack_154 = (void *)0x77e97c;
  piStack_14c = param_1;
  (**(code **)(*(int *)param_1[0x124] + 100))();
  *(undefined4 *)(param_1[0x124] + 0x354) = 0x43960000;
  *(undefined1 *)(param_1[0x124] + 0x358) = 1;
  pvStack_154 = (void *)0x43960000;
  (**(code **)(*(int *)param_1[0x124] + 0x78))();
  ppiStack_10c = &piStack_100;
  piStack_100 = (int *)((uint)piStack_100 & 0xffff0000);
  uStack_108 = 0;
  uStack_104 = 10;
  uVar4 = FUN_00ace02d(L"<T1 COLOR = #FF0000><TRANSLATE>TRAILER_UPDATING_MESSAGE</TRANSLATE></T1>");
  puStack_160 = (undefined *)0x77e9da;
  FUN_004036d0(&ppiStack_10c,
               L"<T1 COLOR = #FF0000><TRANSLATE>TRAILER_UPDATING_MESSAGE</TRANSLATE></T1>",uVar4);
  uStack_94 = 10;
  (**(code **)(*(int *)param_1[0x124] + 0x54))();
  uStack_98 = 0xffffffff;
  if (10 < uStack_108) {
                    /* WARNING: Subroutine does not return */
    puStack_160 = &UNK_0077ea0c;
    _free(puVar23);
  }
  puStack_160 = (undefined *)0x77ea1e;
  (**(code **)(*(int *)param_1[0x124] + 0x8c))();
  uStack_164 = param_1[0x124];
  puStack_160 = (undefined *)0x2;
  pcStack_168 = (char *)0x77ea30;
  (**(code **)(*param_1 + 0xc))();
  pcStack_168 = (char *)0x0;
  (**(code **)(*(int *)param_1[0x124] + 0x20))();
  piStack_14c = operator_new(0x344);
  apvStack_a8[0] = (void *)0xb;
  if (piStack_14c == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(piStack_14c);
  }
  apvStack_a8[0] = (void *)0xffffffff;
  (**(code **)(param_1[0x1e5] + 4))();
  param_1[0x1ea] = (int)puVar3;
  (**(code **)param_1[0x1e5])();
  fVar10 = (float)param_1[0xf6];
  piVar5 = param_1 + 6;
  uStack_144 = 1;
  ppuStack_140 = &PTR_FUN_00d18c2c;
  iVar21 = *piVar5;
  *(undefined1 **)(*piVar5 + 4) = &stack0xfffffec4;
  *piVar5 = (int)&stack0xfffffec4;
  iVar1 = param_1[0x1ea];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  apvStack_a8[0] = (void *)0xc;
  piVar9 = param_1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(int **)(iVar1 + 0x94) = piVar9;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(float *)(iVar1 + 0x98) = fVar10 + 48.0;
  *(float *)(iVar1 + 0x9c) = fVar10 + 48.0;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar21;
  }
  if (iVar21 != 0) {
    *(int **)(iVar21 + 4) = piVar5;
  }
  piVar5 = param_1 + 6;
  uStack_144 = 2;
  ppuStack_140 = &PTR_FUN_00d18c2c;
  iVar21 = *piVar5;
  *(undefined1 **)(*piVar5 + 4) = &stack0xfffffec4;
  *piVar5 = (int)&stack0xfffffec4;
  iVar1 = param_1[0x1ea];
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  apvStack_a8[0] = (void *)0xd;
  piVar9 = param_1;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(int **)(iVar1 + 0xdc) = piVar9;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar21;
  }
  if (iVar21 != 0) {
    *(int **)(iVar21 + 4) = piVar5;
  }
  piVar5 = param_1 + 6;
  uStack_144 = 1;
  ppuStack_140 = &PTR_FUN_00d18c2c;
  iVar21 = *piVar5;
  *(undefined1 **)(*piVar5 + 4) = &stack0xfffffec4;
  *piVar5 = (int)&stack0xfffffec4;
  iVar1 = param_1[0x1ea];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  apvStack_a8[0] = (void *)0xe;
  piVar9 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(int **)(iVar1 + 0xb8) = piVar9;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar21;
  }
  if (iVar21 != 0) {
    *(int **)(iVar21 + 4) = piVar5;
  }
  piVar5 = param_1 + 6;
  uStack_144 = 2;
  ppuStack_140 = &PTR_FUN_00d18c2c;
  iVar21 = *piVar5;
  *(undefined1 **)(*piVar5 + 4) = &stack0xfffffec4;
  *piVar5 = (int)&stack0xfffffec4;
  uStack_128 = 0;
  iVar1 = param_1[0x1ea];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  apvStack_a8[0] = (void *)0xf;
  piVar9 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(int **)(iVar1 + 0x100) = piVar9;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = 0;
  *(undefined4 *)(iVar1 + 0x108) = 0;
  apvStack_a8[0] = (void *)0xffffffff;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar21;
  }
  if (iVar21 != 0) {
    *(int **)(iVar21 + 4) = piVar5;
  }
  piStack_14c = operator_new(0x50);
  apvStack_a8[0] = (void *)0x10;
  if (piStack_14c != (undefined4 *)0x0) {
    FUN_005e4870(piStack_14c);
  }
  apvStack_a8[0] = (void *)0xffffffff;
  (**(code **)(*(int *)param_1[0x1ea] + 0xa0))();
  piVar5 = (int *)(**(code **)(*(int *)param_1[0x1ea] + 0xa4))();
  piStack_14c = (int *)0xff000000;
  (**(code **)(*piVar5 + 0xc))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar23 = &uStack_104;
    uStack_104 = uStack_104 & 0xffffff00;
    ppiStack_10c = (int **)0x0;
    uStack_108 = 0x14;
    _strncpy((char *)puVar23,"POST_CHANGE_SIZE",0x10);
    ppiStack_10c = (int **)&DAT_00000010;
    *(char *)(puVar23 + 4) = '\0';
    uStack_164 = uStack_164 | 8;
    uStack_128 = 0x20;
    pcVar22 = _malloc(0x20);
    _strncpy(pcVar22,"postproc/button_expand.",0x17);
    pcVar22[0x17] = '\0';
    uStack_164 = uStack_164 | 0x10;
    piStack_1a0 = (int *)0x77eea7;
    puVar3 = FUN_009b5030(&pvStack_154,(undefined4 *)&stack0xfffffef0);
    uStack_164 = uStack_164 | 0x20;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&stack0xfffffed0,puVar3,0x42200000,0x42200000,0,0,0x3f800000
                          ,0x3f800000);
  }
  (**(code **)(param_1[0x197] + 4))();
  param_1[0x19c] = (int)puVar3;
  (**(code **)param_1[0x197])();
  if (((uStack_164 & 0x20) != 0) && (uStack_164 = uStack_164 & 0xffffffdf, 10 < piStack_14c)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_154);
  }
  if (((uStack_164 & 0x10) != 0) && (uStack_164 = uStack_164 & 0xffffffef, 0x14 < uStack_128)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar22);
  }
  if (((uStack_164 & 8) != 0) && (uStack_164 = uStack_164 & 0xfffffff7, 0x14 < uStack_108)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar23);
  }
  puVar20 = &LAB_0077e520;
  (**(code **)(*(int *)param_1[0x19c] + 0x18))();
  puVar19 = &lpClass_00d16914;
  (**(code **)(*(int *)param_1[0x19c] + 0x18))();
  iVar21 = *(int *)param_1[0x19c];
  fVar11 = FUN_0071afe0();
  fVar10 = (float)(fVar11 + (float10)12.0);
  uStack_1a4 = 1;
  puStack_1a8 = (undefined1 *)0x77efe7;
  piStack_1a0 = param_1;
  (**(code **)(iVar21 + 0x5c))();
  puStack_1a8 = (undefined1 *)0xc0800000;
  (**(code **)(*(int *)param_1[0x19c] + 100))();
  if (DAT_0104e45c == '\0') {
    (**(code **)(*param_1 + 0xc))();
  }
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    pcStack_148 = &stack0xfffffec4;
    uStack_144 = 0;
    ppuStack_140 = (undefined **)0x14;
    _strncpy(pcStack_148,"POST_ZOOM",9);
    uStack_144 = 9;
    pcStack_148[9] = '\0';
    uVar4 = (uint)fVar10 | 0x40;
    pcStack_168 = &stack0xfffffea4;
    uStack_164 = 0;
    puStack_160 = (undefined *)0x14;
    _strncpy(pcStack_168,"button_zoomin.",0xe);
    uStack_164 = 0xe;
    pcStack_168[0xe] = '\0';
    uVar4 = uVar4 | 0x80;
    puStack_f0 = (undefined4 *)0x1a;
    pvStack_1d4 = (void *)0x77f0cf;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffe74,&pcStack_148);
    fVar10 = (float)(uVar4 | 0x100);
    puStack_f0 = (undefined4 *)0x1b;
    pvStack_1d4 = (void *)0x77f118;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&pcStack_168,puVar3,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  puStack_f0 = (undefined4 *)0x1e;
  (**(code **)(param_1[0x1af] + 4))();
  param_1[0x1b4] = (int)puVar3;
  (**(code **)param_1[0x1af])();
  if ((((uint)fVar10 & 0x100) != 0) &&
     (fVar10 = (float)((uint)fVar10 & 0xfffffeff), (undefined1 *)0xa < puVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar19);
  }
  if ((SUB41(fVar10,0) < '\0') && (fVar10 = (float)((uint)fVar10 & 0xffffff7f), 0x14 < puStack_160))
  {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_168);
  }
  puStack_f0 = (undefined4 *)0xffffffff;
  if ((((uint)fVar10 & 0x40) != 0) && ((undefined **)0x14 < ppuStack_140)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_148);
  }
  (**(code **)(*(int *)param_1[0x1b4] + 0x18))();
  uVar4 = 0;
  pvVar18 = (void *)0x5;
  pvStack_1d4 = (void *)0x77f1fe;
  (**(code **)(*(int *)param_1[0x1b4] + 0x18))();
  uStack_1d8 = param_1[0x19c];
  pvStack_1d4 = (void *)0x0;
  uStack_1dc = 2;
  uStack_1e0 = 0x77f213;
  (**(code **)(*(int *)param_1[0x1b4] + 0x5c))();
  puStack_1e4 = (uint *)param_1[0x1ea];
  uStack_1e0 = 0xc0800000;
  uStack_1e8 = 1;
  puStack_1ec = (uint *)0x77f22c;
  (**(code **)(*(int *)param_1[0x1b4] + 100))();
  puStack_1ec = (uint *)0x1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(900);
  pvStack_1d4 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puStack_1a8 = &stack0xfffffe64;
    uStack_1a4 = 0;
    piStack_1a0 = (int *)&lpType_0000000a;
    uVar24 = FUN_00ace02d(L"00:00:00");
    auStack_200[1] = 0x77f293;
    FUN_004036d0(&puStack_1a8,L"00:00:00",uVar24);
    uStack_1dc = uStack_1dc | 0x200;
    piVar5 = FUN_00737bb0(pvVar2,&puStack_1a8);
  }
  (**(code **)(param_1[0x1df] + 4))();
  param_1[0x1e4] = (int)piVar5;
  (**(code **)param_1[0x1df])();
  if (((uStack_1dc & 0x200) != 0) &&
     (uStack_1dc = uStack_1dc & 0xfffffdff, &lpType_0000000a < piStack_1a0)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1a8);
  }
  auStack_200[1] = 2;
  auStack_200[0] = 0x77f326;
  (**(code **)(*(int *)param_1[0x1e4] + 100))();
  uStack_204 = param_1[0x11e];
  auStack_200[0] = 0;
  (**(code **)(*(int *)param_1[0x1e4] + 0x5c))();
  pcVar22 = &stack0xfffffe4c;
  _strncpy(pcVar22,"Lithograph Bold",0xf);
  pcVar22[0xf] = '\0';
  puStack_1ec = (uint *)&stack0xfffffdf4;
  puStack_218 = &stack0xfffffe40;
  puVar23 = (uint *)0x0;
  pcStack_148 = (char *)0x22;
  (**(code **)(*(int *)param_1[0x1e4] + 0xfc))();
  if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
    puStack_220 = &UNK_0077f3c8;
    _free(pvVar18);
  }
  *(undefined4 *)(param_1[0x1e4] + 0x350) = 0xffffffff;
  puStack_220 = (undefined *)0x0;
  uStack_224 = 0x77f400;
  (**(code **)(*(int *)param_1[0x1e4] + 0x100))();
  *(undefined1 *)(param_1[0x1e4] + 0x358) = 1;
  uStack_224 = 0;
  uStack_228 = 0x77f41c;
  (**(code **)(*(int *)param_1[0x1e4] + 0x84))();
  *(undefined4 *)(param_1[0x1e4] + 0x34c) = 2;
  ppuStack_22c = (undefined **)param_1[0x1e4];
  uStack_228 = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puStack_1e4 = &uStack_1d8;
    uStack_1d8 = uStack_1d8 & 0xffffff00;
    uStack_1e0 = 0;
    uStack_1dc = 0x40;
    puStack_1e4 = _malloc(0x40);
    puVar23 = (uint *)&stack0xfffffdc4;
    _strncpy((char *)puStack_1e4,"ui/postproc/postprod_buttonstrip.dds",0x24);
    uStack_1e0 = 0x24;
    *(char *)(puStack_1e4 + 9) = '\0';
    puStack_218 = (undefined1 *)((uint)puStack_218 | 0x400);
    uStack_244 = 0x77f4d5;
    piVar5 = FUN_0069d820(pvVar2,&puStack_1e4,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)puStack_218 & 0x400) != 0) && (0x14 < uStack_1dc)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1e4);
  }
  pvVar18 = (void *)0x42080000;
  (**(code **)(*piVar5 + 0x74))();
  uVar4 = 0;
  uStack_244 = 0x77f543;
  (**(code **)(*piVar5 + 0x5c))();
  iStack_248 = param_1[0x1ea];
  uStack_244 = 0x40800000;
  pcStack_24c = (char *)0x1;
  (**(code **)(*piVar5 + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puStack_1ec = &uStack_1e0;
    uStack_1e0 = uStack_1e0 & 0xffffff00;
    uStack_1e8 = 0;
    puStack_1e4 = (uint *)&DAT_00000014;
    _strncpy((char *)puStack_1ec,"POST_PLAY_PREVIEW",0x11);
    uStack_1e8 = 0x11;
    *(char *)((int)puStack_1ec + 0x11) = '\0';
    uVar4 = uVar4 | 0x800;
    puVar23 = auStack_200;
    auStack_200[0] = auStack_200[0] & 0xffffff00;
    uStack_204 = 0x14;
    _strncpy((char *)puVar23,"button_play.",0xc);
    *(char *)(puVar23 + 3) = '\0';
    uVar4 = uVar4 | 0x1000;
    pvStack_278 = (void *)0x77f61d;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffdd0,&puStack_1ec);
    uVar4 = uVar4 | 0x2000;
    pvStack_278 = (void *)0x77f666;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&stack0xfffffdf4,puVar3,0x42200000,0x42200000,0,0,0x3f800000
                          ,0x3f800000);
  }
  (**(code **)(param_1[0x161] + 4))();
  param_1[0x166] = (int)puVar3;
  (**(code **)param_1[0x161])();
  if (((uVar4 & 0x2000) != 0) && (uVar4 = uVar4 & 0xffffdfff, 10 < uStack_228)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar18);
  }
  if (((uVar4 & 0x1000) != 0) && (uVar4 = uVar4 & 0xffffefff, 0x14 < uStack_204)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar23);
  }
  if (((uVar4 & 0x800) != 0) && (&DAT_00000014 < puStack_1e4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1ec);
  }
  uVar4 = 0;
  (**(code **)(*(int *)param_1[0x166] + 0x18))();
  puVar19 = &lpClass_00d16914;
  puVar20 = (undefined1 *)0x0;
  puVar17 = &LAB_005f37f0;
  pvStack_278 = (void *)0x77f749;
  (**(code **)(*(int *)param_1[0x166] + 0x18))();
  pvStack_278 = (void *)(DAT_0105c400 * 0.5 - 16.0);
  uStack_280 = 2;
  uStack_284 = 0x77f76d;
  piStack_27c = param_1;
  (**(code **)(*(int *)param_1[0x166] + 0x60))();
  iStack_288 = param_1[0x1ea];
  uStack_284 = 0xc0800000;
  puStack_28c = (uint *)0x1;
  (**(code **)(*(int *)param_1[0x166] + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  pvStack_278 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    ppuStack_22c = &puStack_220;
    puStack_220 = (undefined *)((uint)puStack_220 & 0xffffff00);
    uStack_228 = 0;
    uStack_224 = 0x14;
    _strncpy((char *)ppuStack_22c,"POST_STOP",9);
    uStack_228 = 9;
    *(char *)((int)ppuStack_22c + 9) = '\0';
    uStack_280 = uStack_280 | 0x4000;
    pcStack_24c = &stack0xfffffdc0;
    iStack_248 = 0;
    uStack_244 = 0x14;
    _strncpy(pcStack_24c,"button_stop.",0xc);
    iStack_248 = 0xc;
    pcStack_24c[0xc] = '\0';
    uStack_280 = uStack_280 | 0x8000;
    pvStack_1d4 = (void *)0x2f;
    pvStack_2b8 = (void *)0x77f850;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffd90,&ppuStack_22c);
    uStack_280 = uStack_280 | 0x10000;
    pvStack_1d4 = (void *)0x30;
    pvStack_2b8 = (void *)0x77f899;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&pcStack_24c,puVar3,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
  }
  pvStack_1d4 = (void *)0x33;
  (**(code **)(param_1[0x13d] + 4))();
  param_1[0x142] = (int)puVar3;
  (**(code **)param_1[0x13d])();
  if (((uStack_280 & 0x10000) != 0) &&
     (uStack_280 = uStack_280 & 0xfffeffff, (undefined *)0xa < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  if (((char)(uStack_280 >> 8) < '\0') && (uStack_280 = uStack_280 & 0xffff7fff, 0x14 < uStack_244))
  {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_24c);
  }
  pvStack_1d4 = (void *)0xffffffff;
  if (((uStack_280 & 0x4000) != 0) && (uStack_280 = uStack_280 & 0xffffbfff, 0x14 < uStack_224)) {
                    /* WARNING: Subroutine does not return */
    _free(ppuStack_22c);
  }
  uVar24 = 0;
  (**(code **)(*(int *)param_1[0x142] + 0x18))();
  puVar19 = &lpClass_00d16914;
  puVar17 = (undefined1 *)0x0;
  puVar16 = &LAB_005f37f0;
  pvStack_2b8 = (void *)0x77f982;
  (**(code **)(*(int *)param_1[0x142] + 0x18))();
  iStack_2bc = param_1[0x166];
  pvStack_2b8 = (void *)0x0;
  uStack_2c0 = 1;
  uStack_2c4 = 0x77f997;
  (**(code **)(*(int *)param_1[0x142] + 0x60))();
  iStack_2c8 = param_1[0x1ea];
  uStack_2c4 = 0;
  puStack_2cc = (uint *)0x1;
  (**(code **)(*(int *)param_1[0x142] + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  pvStack_2b8 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar20 = &stack0xfffffda0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xfffffd94,"POST_REWIND",0xb);
    puStack_28c = &uStack_280;
    uStack_2c0 = uStack_2c0 | 0x20000;
    uStack_280 = uStack_280 & 0xffffff00;
    iStack_288 = 0;
    uStack_284 = 0x14;
    FUN_004015d0(&puStack_28c,"button_rwnd.",0xc);
    uStack_2c0 = uStack_2c0 | 0x40000;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffd50,(undefined4 *)&stack0xfffffd94);
    uStack_2c0 = uStack_2c0 | 0x80000;
    pvStack_2f8 = (void *)0x77faa1;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&puStack_28c,puVar3,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
  }
  (**(code **)(param_1[0x155] + 4))();
  param_1[0x15a] = (int)puVar3;
  (**(code **)param_1[0x155])();
  if (((uStack_2c0 & 0x80000) != 0) &&
     (uStack_2c0 = uStack_2c0 & 0xfff7ffff, (undefined *)0xa < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  if (((uStack_2c0 & 0x40000) != 0) && (uStack_2c0 = uStack_2c0 & 0xfffbffff, 0x14 < uStack_284)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_28c);
  }
  if (((uStack_2c0 & 0x20000) != 0) && (uStack_2c0 = uStack_2c0 & 0xfffdffff, 0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  uVar4 = 0;
  (**(code **)(*(int *)param_1[0x15a] + 0x18))();
  puVar19 = &lpClass_00d16914;
  puVar20 = (undefined1 *)0x0;
  puVar16 = &LAB_005f37f0;
  pvStack_2f8 = (void *)0x77fb8f;
  (**(code **)(*(int *)param_1[0x15a] + 0x18))();
  iStack_2fc = param_1[0x142];
  pvStack_2f8 = (void *)0x0;
  uStack_300 = 1;
  uStack_304 = 0x77fba4;
  (**(code **)(*(int *)param_1[0x15a] + 0x60))();
  iStack_308 = param_1[0x1ea];
  uStack_304 = 0;
  puStack_30c = (uint *)0x1;
  (**(code **)(*(int *)param_1[0x15a] + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  pvStack_2f8 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar17 = &stack0xfffffd60;
    uVar24 = 0x14;
    FUN_004015d0(&stack0xfffffd54,"POST_PAUSE",10);
    puStack_2cc = &uStack_2c0;
    uStack_300 = uStack_300 | 0x100000;
    uStack_2c0 = uStack_2c0 & 0xffffff00;
    iStack_2c8 = 0;
    uStack_2c4 = 0x14;
    FUN_004015d0(&puStack_2cc,"button_pause.",0xd);
    uStack_300 = uStack_300 | 0x200000;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffd10,(undefined4 *)&stack0xfffffd54);
    uStack_300 = uStack_300 | 0x400000;
    pvStack_338 = (void *)0x77fcae;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&puStack_2cc,puVar3,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
  }
  (**(code **)(param_1[0x167] + 4))();
  param_1[0x16c] = (int)puVar3;
  (**(code **)param_1[0x167])();
  if (((uStack_300 & 0x400000) != 0) &&
     (uStack_300 = uStack_300 & 0xffbfffff, (undefined *)0xa < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  if (((uStack_300 & 0x200000) != 0) && (uStack_300 = uStack_300 & 0xffdfffff, 0x14 < uStack_2c4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_2cc);
  }
  if (((uStack_300 & 0x100000) != 0) && (uStack_300 = uStack_300 & 0xffefffff, 0x14 < uVar24)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  uVar24 = 0;
  (**(code **)(*(int *)param_1[0x16c] + 0x18))();
  puVar19 = &lpClass_00d16914;
  puVar17 = (undefined1 *)0x0;
  puVar16 = &LAB_005f37f0;
  pvStack_338 = (void *)0x77fd9c;
  (**(code **)(*(int *)param_1[0x16c] + 0x18))();
  iStack_33c = param_1[0x166];
  pvStack_338 = (void *)0x0;
  uStack_340 = 2;
  uStack_344 = 0x77fdb1;
  (**(code **)(*(int *)param_1[0x16c] + 0x5c))();
  iStack_348 = param_1[0x1ea];
  uStack_344 = 0;
  puStack_34c = (uint *)0x1;
  (**(code **)(*(int *)param_1[0x16c] + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  pvStack_338 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar20 = &stack0xfffffd20;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xfffffd14,"POST_FORWARD",0xc);
    puStack_30c = &uStack_300;
    uStack_340 = uStack_340 | 0x800000;
    uStack_300 = uStack_300 & 0xffffff00;
    iStack_308 = 0;
    uStack_304 = 0x14;
    FUN_004015d0(&puStack_30c,"button_ffwd.",0xc);
    uStack_340 = uStack_340 | 0x1000000;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffcd0,(undefined4 *)&stack0xfffffd14);
    uStack_340 = uStack_340 | 0x2000000;
    pvStack_378 = (void *)0x77febb;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&puStack_30c,puVar3,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
  }
  (**(code **)(param_1[0x15b] + 4))();
  param_1[0x160] = (int)puVar3;
  (**(code **)param_1[0x15b])();
  if (((uStack_340 & 0x2000000) != 0) &&
     (uStack_340 = uStack_340 & 0xfdffffff, (undefined *)0xa < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  if (((uStack_340 & 0x1000000) != 0) && (uStack_340 = uStack_340 & 0xfeffffff, 0x14 < uStack_304))
  {
                    /* WARNING: Subroutine does not return */
    _free(puStack_30c);
  }
  if (((uStack_340 & 0x800000) != 0) && (uStack_340 = uStack_340 & 0xff7fffff, 0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  uVar4 = 0;
  (**(code **)(*(int *)param_1[0x160] + 0x18))();
  puVar19 = &lpClass_00d16914;
  puVar20 = (undefined1 *)0x0;
  puVar16 = &LAB_005f37f0;
  pvStack_378 = (void *)0x77ffa9;
  (**(code **)(*(int *)param_1[0x160] + 0x18))();
  iStack_37c = param_1[0x16c];
  pvStack_378 = (void *)0x0;
  uStack_380 = 2;
  uStack_384 = 0x77ffbe;
  (**(code **)(*(int *)param_1[0x160] + 0x5c))();
  iStack_388 = param_1[0x1ea];
  uStack_384 = 0;
  puStack_38c = (uint *)0x1;
  (**(code **)(*(int *)param_1[0x160] + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  pvStack_378 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar17 = &stack0xfffffce0;
    uVar24 = 0x14;
    FUN_004015d0(&stack0xfffffcd4,"POST_RENDER",0xb);
    puStack_34c = &uStack_340;
    uStack_380 = uStack_380 | 0x4000000;
    uStack_340 = uStack_340 & 0xffffff00;
    iStack_348 = 0;
    uStack_344 = 0x14;
    FUN_004015d0(&puStack_34c,"button_clapperb.",0x10);
    uStack_380 = uStack_380 | 0x8000000;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffc90,(undefined4 *)&stack0xfffffcd4);
    uStack_380 = uStack_380 | 0x10000000;
    pvStack_3b8 = (void *)0x7800c8;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&puStack_34c,puVar3,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  (**(code **)(param_1[0x19d] + 4))();
  param_1[0x1a2] = (int)puVar3;
  (**(code **)param_1[0x19d])();
  if (((uStack_380 & 0x10000000) != 0) &&
     (uStack_380 = uStack_380 & 0xefffffff, (undefined *)0xa < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  if (((uStack_380 & 0x8000000) != 0) && (uStack_380 = uStack_380 & 0xf7ffffff, 0x14 < uStack_344))
  {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34c);
  }
  if (((uStack_380 & 0x4000000) != 0) && (uStack_380 = uStack_380 & 0xfbffffff, 0x14 < uVar24)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  uVar24 = 7;
  puVar17 = (undefined1 *)0x0;
  (**(code **)(*(int *)param_1[0x1a2] + 0x18))();
  puVar19 = &lpClass_00d16914;
  puVar16 = &LAB_005f37f0;
  pvStack_3b8 = (void *)0x7801b6;
  (**(code **)(*(int *)param_1[0x1a2] + 0x18))();
  pvStack_3b8 = (void *)0x42500000;
  uStack_3c0 = 2;
  ppvStack_3c4 = (void **)0x7801c9;
  piStack_3bc = param_1;
  (**(code **)(*(int *)param_1[0x1a2] + 0x60))();
  auStack_3d0[2] = param_1[0x1ea];
  ppvStack_3c4 = (void **)0xc0800000;
  auStack_3d0[1] = 1;
  auStack_3d0[0] = 0x7801e2;
  (**(code **)(*(int *)param_1[0x1a2] + 100))();
  uStack_3d4 = param_1[0x1a2];
  auStack_3d0[0] = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  pvStack_3b8 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar20 = &stack0xfffffca0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xfffffc94,"POST_LOAD",9);
    puStack_38c = &uStack_380;
    uStack_3c0 = uStack_3c0 | 0x20000000;
    uStack_380 = uStack_380 & 0xffffff00;
    iStack_388 = 0;
    uStack_384 = 0x14;
    FUN_004015d0(&puStack_38c,"button_load.",0xc);
    uStack_3c0 = uStack_3c0 | 0x40000000;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffc50,(undefined4 *)&stack0xfffffc94);
    uStack_3c0 = uStack_3c0 | 0x80000000;
    uStack_3f8 = 0x7802d7;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&puStack_38c,puVar3,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  (**(code **)(param_1[0x14f] + 4))();
  param_1[0x154] = (int)puVar3;
  (**(code **)param_1[0x14f])();
  if (((int)uStack_3c0 < 0) && (uStack_3c0 = uStack_3c0 & 0x7fffffff, (undefined *)0xa < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  if (((uStack_3c0 & 0x40000000) != 0) && (uStack_3c0 = uStack_3c0 & 0xbfffffff, 0x14 < uStack_384))
  {
                    /* WARNING: Subroutine does not return */
    _free(puStack_38c);
  }
  if (((uStack_3c0 & 0x20000000) != 0) && (0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  puVar23 = (uint *)0x6;
  puVar20 = &LAB_0077e520;
  (**(code **)(*(int *)param_1[0x154] + 0x18))();
  puVar19 = &lpClass_00d16914;
  uVar4 = 5;
  uStack_3f8 = 0x7803b7;
  (**(code **)(*(int *)param_1[0x154] + 0x18))();
  puStack_3fc = (undefined1 *)param_1[0x1a2];
  uStack_3f8 = 0;
  (**(code **)(*(int *)param_1[0x154] + 0x60))();
  (**(code **)(*(int *)param_1[0x154] + 100))();
  if (DAT_0104e45c == '\0') {
    (**(code **)(*param_1 + 0xc))();
  }
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar17 = &stack0xfffffc68;
    uVar24 = 0x14;
    FUN_004015d0(&stack0xfffffc5c,"POST_SAVE",9);
    ppvStack_3c4 = &pvStack_3b8;
    pvStack_3b8 = (void *)((uint)pvStack_3b8 & 0xffffff00);
    uStack_3c0 = 0;
    piStack_3bc = (int *)&DAT_00000014;
    FUN_004015d0(&ppvStack_3c4,"button_save.",0xc);
    puStack_34c = (uint *)0x59;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffc18,(undefined4 *)&stack0xfffffc5c);
    puStack_34c = (uint *)0x5a;
    uVar4 = 7;
    uStack_430 = 0x7804c5;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&ppvStack_3c4,puVar3,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  puStack_34c = (uint *)0x5d;
  (**(code **)(param_1[0x1a3] + 4))();
  param_1[0x1a8] = (int)puVar3;
  (**(code **)param_1[0x1a3])();
  if (((uVar4 & 4) != 0) && (uVar4 = uVar4 & 0xfffffffb, (undefined1 *)0xa < puVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar19);
  }
  if (((uVar4 & 2) != 0) && (uVar4 = uVar4 & 0xfffffffd, &DAT_00000014 < piStack_3bc)) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_3c4);
  }
  puStack_34c = (uint *)0xffffffff;
  if (((uVar4 & 1) != 0) && (uVar4 = uVar4 & 0xfffffffe, 0x14 < uVar24)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  uVar15 = 5;
  puVar17 = &LAB_0077e520;
  puVar20 = (undefined1 *)0x0;
  (**(code **)(*(int *)param_1[0x1a8] + 0x18))();
  puVar19 = &lpClass_00d16914;
  uVar24 = 0;
  uStack_430 = 0x7805a4;
  (**(code **)(*(int *)param_1[0x1a8] + 0x18))();
  uStack_434 = param_1[0x154];
  uStack_430 = 0;
  uStack_438 = 1;
  puStack_43c = (uint *)0x7805b9;
  (**(code **)(*(int *)param_1[0x1a8] + 0x60))();
  puStack_43c = (uint *)0xc0800000;
  (**(code **)(*(int *)param_1[0x1a8] + 100))();
  if (DAT_0104e45c == '\0') {
    (**(code **)(*param_1 + 0xc))();
  }
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar23 = auStack_3d0;
    auStack_3d0[0] = auStack_3d0[0] & 0xffffff00;
    uStack_3d4 = 0x14;
    FUN_004015d0(&stack0xfffffc24,"POST_FILTER",0xb);
    puStack_3fc = &stack0xfffffc10;
    uVar24 = uVar24 | 8;
    uStack_3f8 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&puStack_3fc,"postproc/button_filter.",0x17);
    uVar24 = uVar24 | 0x10;
    uStack_384 = 0x60;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffbe0,(undefined4 *)&stack0xfffffc24);
    uVar24 = uVar24 | 0x20;
    uStack_384 = 0x61;
    pvStack_468 = (void *)0x7806c8;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&puStack_3fc,puVar3,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  uStack_384 = 100;
  (**(code **)(param_1[0x185] + 4))();
  param_1[0x18a] = (int)puVar3;
  (**(code **)param_1[0x185])();
  if (((uVar24 & 0x20) != 0) && (uVar24 = uVar24 & 0xffffffdf, (undefined1 *)0xa < puVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar19);
  }
  if (((uVar24 & 0x10) != 0) && (uVar24 = uVar24 & 0xffffffef, 0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_3fc);
  }
  uStack_384 = 0xffffffff;
  if (((uVar24 & 8) != 0) && (0x14 < uStack_3d4)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar23);
  }
  uVar4 = 0;
  (**(code **)(*(int *)param_1[0x18a] + 0x18))();
  puVar17 = (undefined1 *)0x0;
  puVar16 = (undefined1 *)0x5;
  pvStack_468 = (void *)0x7807a7;
  (**(code **)(*(int *)param_1[0x18a] + 0x18))();
  uStack_46c = param_1[0x1b4];
  pvStack_468 = (void *)0x0;
  auStack_478[2] = 2;
  auStack_478[1] = 0x7807bc;
  (**(code **)(*(int *)param_1[0x18a] + 0x5c))();
  auStack_478[0] = param_1[0x1ea];
  auStack_478[1] = 0xc0800000;
  uStack_47c = 1;
  uStack_480 = 0x7807d5;
  (**(code **)(*(int *)param_1[0x18a] + 100))();
  puStack_484 = (uint *)param_1[0x18a];
  uStack_480 = 1;
  (**(code **)(*param_1 + 0xc))();
  if (*(char *)((int)param_1 + 0x34b) != '\0') {
    (**(code **)(*(int *)param_1[0x15a] + 0x20))();
    (**(code **)(*(int *)param_1[0x160] + 0x20))();
    *(undefined4 *)(param_1[0x172] + 0x328) = 0x3f0def20;
  }
  pvVar2 = operator_new(0x420);
  pvStack_468 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar20 = &stack0xfffffbf0;
    uVar15 = 10;
    uVar24 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffbe4,(wchar_t *)&lpCaption_00d16918,uVar24);
    puStack_43c = &uStack_430;
    uStack_46c = uStack_46c | 0x40;
    uStack_430 = uStack_430 & 0xffffff00;
    uStack_438 = 0;
    uStack_434 = 0x14;
    FUN_004015d0(&puStack_43c,"ui/postproc/track01.dds",0x17);
    puVar16 = &stack0xfffffb6c;
    uStack_46c = uStack_46c | 0x80;
    ppvStack_3c4 = (void **)0x67;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&puStack_43c,(undefined4 *)&stack0xfffffbe4,0x42b00000,
                          0x42800000,0,0,0x3f800000,0x3f800000);
  }
  ppvStack_3c4 = (void **)0x69;
  (**(code **)(param_1[0x1bb] + 4))();
  param_1[0x1c0] = (int)puVar3;
  (**(code **)param_1[0x1bb])();
  if (((char)uStack_46c < '\0') && (uStack_46c = uStack_46c & 0xffffff7f, 0x14 < uStack_434)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_43c);
  }
  ppvStack_3c4 = (void **)0xffffffff;
  if (((uStack_46c & 0x40) != 0) && (uStack_46c = uStack_46c & 0xffffffbf, 10 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  piVar5 = param_1;
  (**(code **)(*(int *)param_1[0x1c0] + 0x5c))();
  uVar15 = 2;
  (**(code **)(*(int *)param_1[0x1c0] + 100))();
  puVar20 = (undefined1 *)param_1[0x1c0];
  uVar24 = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar23 = (uint *)0x0;
  }
  else {
    puVar17 = &stack0xfffffbb0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xfffffba4,"ui/postproc/scneicon.dds",0x18);
    puStack_484 = (uint *)&stack0xfffffb4c;
    piVar5 = (int *)((uint)piVar5 | 0x100);
    uStack_4bc = 0x780a34;
    puVar23 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xfffffba4,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)piVar5 & 0x100) != 0) && (0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  puVar14 = (undefined1 *)0x0;
  (**(code **)(*puVar23 + 0x5c))();
  uVar4 = 0;
  uStack_4bc = 1;
  uStack_4c0 = 0x780a9d;
  (**(code **)(*puVar23 + 100))();
  uStack_4c0 = 0x42400000;
  puStack_4c4 = (undefined1 *)0x42400000;
  pvStack_4c8 = (void *)0x780aaf;
  (**(code **)(*puVar23 + 0x74))();
  pvStack_4c8 = (void *)0x1;
  puStack_4cc = puVar23;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar16 = &stack0xfffffba8;
    puVar17 = &lpType_0000000a;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffb9c,(wchar_t *)&lpCaption_00d16918,uVar6);
    puStack_484 = auStack_478;
    uVar4 = uVar4 | 0x200;
    auStack_478[0] = auStack_478[0] & 0xffffff00;
    uStack_480 = 0;
    uStack_47c = 0x14;
    FUN_004015d0(&puStack_484,"ui/postproc/track01_dark.dds",0x1c);
    uVar4 = uVar4 | 0x400;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&puStack_484,(undefined4 *)&stack0xfffffb9c,0x42b00000,
                          (DAT_0105c400 - 64.0) - 8.0,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0x1b5] + 4))();
  param_1[0x1ba] = (int)puVar3;
  (**(code **)param_1[0x1b5])();
  if (((uVar4 & 0x400) != 0) && (uVar4 = uVar4 & 0xfffffbff, 0x14 < uStack_47c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_484);
  }
  if (((uVar4 & 0x200) != 0) && (&lpType_0000000a < puVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  uVar4 = param_1[0x1c0];
  (**(code **)(*(int *)param_1[0x1ba] + 0x5c))();
  uVar6 = 1;
  (**(code **)(*(int *)param_1[0x1ba] + 100))();
  puVar17 = (undefined1 *)param_1[0x1ba];
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puStack_484 = auStack_478;
    auStack_478[0] = auStack_478[0] & 0xffffff00;
    uStack_480 = 0;
    uStack_47c = 0x14;
    FUN_004015d0(&puStack_484,"POST_SUBTITLES",0xe);
    puVar20 = &stack0xfffffb68;
    uVar4 = uVar4 | 0x800;
    uVar24 = 0;
    uVar15 = 0x14;
    FUN_004015d0(&stack0xfffffb5c,"ui/postproc/track02.dds",0x17);
    uVar4 = uVar4 | 0x1000;
    puVar3 = FUN_009b5030(&pvStack_4c8,&puStack_484);
    puStack_4cc = (uint *)&stack0xfffffb04;
    uVar4 = uVar4 | 0x2000;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&stack0xfffffb5c,puVar3,0x42000000,0x42800000,0,0,0x3f800000
                          ,0x3f800000);
  }
  (**(code **)(param_1[0x173] + 4))();
  param_1[0x178] = (int)puVar3;
  (**(code **)param_1[0x173])();
  if (((uVar4 & 0x2000) != 0) && (uVar4 = uVar4 & 0xffffdfff, 10 < uStack_4c0)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4c8);
  }
  if (((uVar4 & 0x1000) != 0) && (uVar4 = uVar4 & 0xffffefff, 0x14 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  if (((uVar4 & 0x800) != 0) && (0x14 < uStack_47c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_484);
  }
  piVar5 = param_1;
  (**(code **)(*(int *)param_1[0x178] + 0x5c))();
  (**(code **)(*(int *)param_1[0x178] + 100))();
  uVar4 = param_1[0x178];
  uVar15 = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar23 = (uint *)0x0;
  }
  else {
    puStack_4c4 = &stack0xfffffb48;
    uStack_4c0 = 0;
    uStack_4bc = 0x14;
    FUN_004015d0(&puStack_4c4,"ui/postproc/subtitleicon.dds",0x1c);
    puVar17 = &stack0xfffffae4;
    piVar5 = (int *)((uint)piVar5 | 0x4000);
    auStack_528[1] = 0x780eb6;
    puVar23 = FUN_0069d820(pvVar2,&puStack_4c4,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)piVar5 & 0x4000) != 0) && (0x14 < uStack_4bc)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_4c4);
  }
  puVar16 = (undefined1 *)param_1[0x178];
  puVar20 = (undefined1 *)0x0;
  (**(code **)(*puVar23 + 0x5c))();
  uVar13 = 0;
  auStack_528[1] = 1;
  auStack_528[0] = 0x780f15;
  (**(code **)(*puVar23 + 100))();
  auStack_528[0] = 0x42000000;
  uStack_52c = 0x42000000;
  uStack_530 = 0x780f27;
  (**(code **)(*puVar23 + 0x74))();
  uStack_530 = 1;
  puStack_534 = puVar23;
  (**(code **)(*param_1 + 0xc))();
  puStack_484 = (uint *)(DAT_0105c400 - 72.0);
  uStack_480 = 0x42000000;
  pvVar2 = operator_new(0x450);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar20 = &stack0xfffffafc;
    uVar4 = 0;
    uVar15 = 0x14;
    FUN_004015d0(&stack0xfffffaf0,"TRAILEREDITORLITE_TEXTDROP",0x1a);
    uVar13 = uVar13 | 0x8000;
    puVar14 = &stack0xfffffb64;
    uVar24 = 10;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffb58,(wchar_t *)&lpCaption_00d16918,uVar6);
    uVar13 = uVar13 | 0x10000;
    puStack_4cc = &uStack_4c0;
    uStack_4c0 = uStack_4c0 & 0xffffff00;
    pvStack_4c8 = (void *)0x0;
    puStack_4c4 = &DAT_00000014;
    FUN_004015d0(&puStack_4cc,"ui/postproc/track02.dds",0x17);
    uVar13 = uVar13 | 0x20000;
    puVar17 = &stack0xfffffb20;
    uVar6 = 0x14;
    FUN_004015d0(&stack0xfffffb14,"ui/postproc/track02_dark.dds",0x1c);
    uVar13 = uVar13 | 0x40000;
    auStack_478[1] = 0x80;
    uStack_54c = 0x78107f;
    puVar3 = FUN_00768c70(pvVar2,(int *)&stack0xfffffb14,&puStack_4cc,(undefined4 *)&stack0xfffffb58
                          ,(undefined4 *)&stack0xfffffaf0,&puStack_484);
  }
  auStack_478[1] = 0x84;
  (**(code **)(param_1[0x1eb] + 4))();
  param_1[0x1f0] = (int)puVar3;
  (**(code **)param_1[0x1eb])();
  if (((uVar13 & 0x40000) != 0) && (uVar13 = uVar13 & 0xfffbffff, 0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  if (((uVar13 & 0x20000) != 0) && (uVar13 = uVar13 & 0xfffdffff, &DAT_00000014 < puStack_4c4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_4cc);
  }
  if (((uVar13 & 0x10000) != 0) && (uVar13 = uVar13 & 0xfffeffff, 10 < uVar24)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar14);
  }
  auStack_478[1] = 0xffffffff;
  if (((char)(uVar13 >> 8) < '\0') && (0x14 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  puVar23 = (uint *)0x0;
  _Memory_02 = (uint **)0x2;
  (**(code **)(*(int *)param_1[0x1f0] + 0x5c))();
  uStack_54c = 2;
  (**(code **)(*(int *)param_1[0x1f0] + 100))();
  puStack_554 = (undefined1 *)0x78119e;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_LAB_00d4ec1c;
    puVar3[1] = param_1;
    puVar3[2] = &LAB_007528c0;
    puVar3[3] = 0;
  }
  puStack_554 = (undefined1 *)0x7811c9;
  FUN_00768470(param_1[0x1f0]);
  puStack_558 = (uint *)param_1[0x1f0];
  puStack_554 = (undefined1 *)0x1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puStack_4cc = &uStack_4c0;
    uStack_4c0 = uStack_4c0 & 0xffffff00;
    pvStack_4c8 = (void *)0x0;
    puStack_4c4 = &DAT_00000014;
    FUN_004015d0(&puStack_4cc,"POST_MUSIC",10);
    puStack_534 = auStack_528;
    uVar24 = (uint)_Memory_02 | 0x80000;
    auStack_528[0] = auStack_528[0] & 0xffffff00;
    uStack_530 = 0;
    uStack_52c = 0x14;
    FUN_004015d0(&puStack_534,"ui/postproc/track03.dds",0x17);
    uVar24 = uVar24 | 0x100000;
    puVar7 = FUN_009b5030((undefined4 *)&stack0xfffffaf0,&puStack_4cc);
    puVar23 = (uint *)&stack0xfffffa98;
    _Memory_02 = (uint **)(uVar24 | 0x200000);
    puVar7 = FUN_0069fb10(pvVar2,(int *)&puStack_534,puVar7,0x42000000,0x42800000,0,0,0x3f800000,
                          0x3f800000);
  }
  (**(code **)(param_1[0x179] + 4))();
  param_1[0x17e] = (int)puVar7;
  (**(code **)param_1[0x179])();
  if ((((uint)_Memory_02 & 0x200000) != 0) &&
     (_Memory_02 = (uint **)((uint)_Memory_02 & 0xffdfffff), 10 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  if ((((uint)_Memory_02 & 0x100000) != 0) &&
     (_Memory_02 = (uint **)((uint)_Memory_02 & 0xffefffff), 0x14 < uStack_52c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_534);
  }
  if ((((uint)_Memory_02 & 0x80000) != 0) &&
     (_Memory_02 = (uint **)((uint)_Memory_02 & 0xfff7ffff), &DAT_00000014 < puStack_4c4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_4cc);
  }
  piVar5 = param_1;
  (**(code **)(*(int *)param_1[0x17e] + 0x5c))();
  (**(code **)(*(int *)param_1[0x17e] + 100))();
  uVar24 = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar8 = (uint *)0x0;
  }
  else {
    puStack_554 = &stack0xfffffab8;
    puVar3 = (undefined4 *)0x0;
    uStack_54c = 0x14;
    FUN_004015d0(&puStack_554,"ui/postproc/musicicon.dds",0x19);
    puStack_558 = (uint *)&stack0xfffffa78;
    piVar5 = (int *)((uint)piVar5 | 0x400000);
    auStack_594[1] = 0x781453;
    puVar8 = FUN_0069d820(pvVar2,&puStack_554,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)piVar5 & 0x400000) != 0) && (0x14 < uStack_54c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_554);
  }
  uVar15 = param_1[0x17e];
  puVar20 = (undefined1 *)0x0;
  (**(code **)(*puVar8 + 0x5c))();
  puVar17 = (undefined1 *)0x0;
  auStack_594[1] = 1;
  auStack_594[0] = 0x7814b4;
  (**(code **)(*puVar8 + 100))();
  auStack_594[0] = 0x42000000;
  uStack_598 = 0x42000000;
  uStack_59c = 0x7814c6;
  (**(code **)(*puVar8 + 0x74))();
  uStack_59c = 1;
  puStack_5a0 = puVar8;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x450);
  if (pvVar2 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar23 = &uStack_52c;
    uStack_52c = uStack_52c & 0xffffff00;
    puStack_534 = (uint *)0x0;
    uStack_530 = 0x14;
    pvVar18 = pvVar2;
    FUN_004015d0(&stack0xfffffac8,"TRAILEREDITORLITE_MUSICDROP",0x1b);
    uVar6 = (uint)puVar17 | 0x800000;
    puStack_558 = &uStack_54c;
    uStack_54c = uStack_54c & 0xffff0000;
    puStack_554 = (undefined1 *)0x0;
    puVar3 = (undefined4 *)&lpType_0000000a;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_558,(wchar_t *)&lpCaption_00d16918,uVar4);
    uVar6 = uVar6 | 0x1000000;
    puVar16 = &stack0xfffffaf8;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xfffffaec,"ui/postproc/track03.dds",0x17);
    uVar6 = uVar6 | 0x2000000;
    puVar20 = &stack0xfffffa90;
    uVar24 = 0x14;
    FUN_004015d0(&stack0xfffffa84,"ui/postproc/track03_dark.dds",0x1c);
    puVar17 = (undefined1 *)(uVar6 | 0x4000000);
    puVar7 = FUN_00768c70(pvVar2,(int *)&stack0xfffffa84,(undefined4 *)&stack0xfffffaec,&puStack_558
                          ,(undefined4 *)&stack0xfffffac8,(undefined4 *)&stack0xfffffb10);
    pvVar2 = pvVar18;
  }
  (**(code **)(param_1[0x1f7] + 4))();
  param_1[0x1fc] = (int)puVar7;
  (**(code **)param_1[0x1f7])();
  if ((((uint)puVar17 & 0x4000000) != 0) &&
     (puVar17 = (undefined1 *)((uint)puVar17 & 0xfbffffff), 0x14 < uVar24)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  if ((((uint)puVar17 & 0x2000000) != 0) &&
     (puVar17 = (undefined1 *)((uint)puVar17 & 0xfdffffff), 0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  if ((((uint)puVar17 & 0x1000000) != 0) &&
     (puVar17 = (undefined1 *)((uint)puVar17 & 0xfeffffff), &lpType_0000000a < puVar3)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_558);
  }
  if ((((uint)puVar17 & 0x800000) != 0) &&
     (puVar17 = (undefined1 *)((uint)puVar17 & 0xff7fffff), 0x14 < uStack_530)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar23);
  }
  uVar4 = 0;
  _Memory_01 = (uint **)0x2;
  (**(code **)(*(int *)param_1[0x1fc] + 0x5c))();
  puVar16 = (undefined1 *)param_1[0x178];
  (**(code **)(*(int *)param_1[0x1fc] + 100))();
  uStack_5c0 = 0x781722;
  puVar3 = operator_new(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &PTR_LAB_00d4ec1c;
    puVar3[1] = param_1;
    puVar3[2] = &DAT_007526c0;
    puVar3[3] = 0;
  }
  uStack_5c0 = 0x78174d;
  FUN_00768470(param_1[0x1fc]);
  uStack_5c4 = param_1[0x1fc];
  uStack_5c0 = 1;
  (**(code **)(*param_1 + 0xc))();
  puVar8 = operator_new(0x474);
  if (puVar8 == (uint *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puStack_5a0 = auStack_594;
    auStack_594[0] = auStack_594[0] & 0xffffff00;
    uStack_59c = 0;
    uStack_598 = 0x14;
    puVar12 = puVar8;
    FUN_004015d0(&puStack_5a0,"POST_MUSIC_VOLUME",0x11);
    uVar24 = (uint)_Memory_01 | 0x8000000;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffac8,&puStack_5a0);
    _Memory_01 = (uint **)(uVar24 | 0x10000000);
    puVar3 = FUN_0075db20(puVar8,param_1[0x17e],&LAB_007522e0,puVar3,0x42500000,0x41d80000,0);
    puVar8 = puVar12;
  }
  (**(code **)(param_1[0x1c7] + 4))();
  param_1[0x1cc] = (int)puVar3;
  (**(code **)param_1[0x1c7])();
  if ((((uint)_Memory_01 & 0x10000000) != 0) &&
     (_Memory_01 = (uint **)((uint)_Memory_01 & 0xefffffff), 10 < uStack_530)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar23);
  }
  if ((((uint)_Memory_01 & 0x8000000) != 0) &&
     (_Memory_01 = (uint **)((uint)_Memory_01 & 0xf7ffffff), 0x14 < uStack_598)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_5a0);
  }
  puVar12 = (uint *)param_1[0x1cc];
  puVar14 = (undefined1 *)0x1;
  (**(code **)(*param_1 + 0xc))();
  FUN_0075dae0((void *)param_1[0x1cc],(float)param_1[0x10f]);
  pvVar18 = operator_new(0x420);
  if (pvVar18 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    _Memory_02 = &puStack_534;
    puStack_534 = (uint *)((uint)puStack_534 & 0xffffff00);
    puVar23 = (uint *)&DAT_00000014;
    FUN_004015d0(&stack0xfffffac0,"POST_USER_SOUND_EFFECTS",0x17);
    uVar24 = (uint)puVar16 | 0x20000000;
    puVar8 = &uStack_59c;
    uStack_59c = uStack_59c & 0xffffff00;
    uVar4 = 0;
    puStack_5a0 = (uint *)&DAT_00000014;
    FUN_004015d0(&stack0xfffffa58,"ui/postproc/track02.dds",0x17);
    uVar24 = uVar24 | 0x40000000;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffa7c,(undefined4 *)&stack0xfffffac0);
    _Memory_01 = (uint **)&stack0xfffffa24;
    puVar16 = (undefined1 *)(uVar24 | 0x80000000);
    puVar3 = FUN_0069fb10(pvVar18,(int *)&stack0xfffffa58,puVar3,0x42000000,0x42800000,0,0,
                          0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0x17f] + 4))();
  param_1[0x184] = (int)puVar3;
  (**(code **)param_1[0x17f])();
  if (((int)puVar16 < 0) &&
     (puVar16 = (undefined1 *)((uint)puVar16 & 0x7fffffff), &lpType_0000000a < puVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  if ((((uint)puVar16 & 0x40000000) != 0) &&
     (puVar16 = (undefined1 *)((uint)puVar16 & 0xbfffffff), &DAT_00000014 < puStack_5a0)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar8);
  }
  if ((((uint)puVar16 & 0x20000000) != 0) && (&DAT_00000014 < puVar23)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_02);
  }
  (**(code **)(*(int *)param_1[0x184] + 0x5c))();
  puVar23 = (uint *)0x0;
  (**(code **)(*(int *)param_1[0x184] + 100))();
  uVar24 = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x360);
  uStack_52c = 0xa4;
  if (pvVar2 == (void *)0x0) {
    puVar8 = (uint *)0x0;
  }
  else {
    puVar14 = &stack0xfffffa44;
    uStack_5c4 = 0;
    uStack_5c0 = 0x14;
    FUN_004015d0(&stack0xfffffa38,"ui/postproc/sfxicon.dds",0x17);
    puVar12 = (uint *)&stack0xfffffa04;
    uStack_52c = CONCAT31(uStack_52c._1_3_,0xa5);
    puVar23 = (uint *)0x1;
    uStack_604 = 0x781b25;
    puVar8 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xfffffa38,0,0,0x3f800000,0x3f800000);
  }
  uStack_52c = 0xffffffff;
  if ((((uint)puVar23 & 1) != 0) && (0x14 < uStack_5c0)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar14);
  }
  uVar6 = param_1[0x184];
  puVar20 = (undefined1 *)0x0;
  (**(code **)(*puVar8 + 0x5c))();
  puVar14 = (undefined1 *)0x0;
  uStack_604 = 1;
  uStack_608 = 0x781b81;
  (**(code **)(*puVar8 + 100))();
  uStack_608 = 0x42000000;
  uStack_60c = 0x42000000;
  uStack_610 = 0x781b93;
  (**(code **)(*puVar8 + 0x74))();
  uStack_610 = 1;
  puStack_614 = puVar8;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x450);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    _Memory_01 = &puStack_5a0;
    puStack_5a0 = (uint *)((uint)puStack_5a0 & 0xffffff00);
    uVar4 = 0x14;
    pvVar18 = pvVar2;
    FUN_004015d0(&stack0xfffffa54,"TRAILEREDITORLITE_WAVEDROP",0x1a);
    uStack_604 = uStack_604 | 2;
    puVar12 = &uStack_5c0;
    uStack_5c0 = uStack_5c0 & 0xffff0000;
    uStack_5c4 = 10;
    uVar24 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffa34,(wchar_t *)&lpCaption_00d16918,uVar24);
    uStack_604 = uStack_604 | 4;
    puVar17 = &stack0xfffffa84;
    uVar15 = 0x14;
    FUN_004015d0(&stack0xfffffa78,"ui/postproc/track02.dds",0x17);
    uStack_604 = uStack_604 | 8;
    puVar20 = &stack0xfffffa1c;
    uVar24 = 0x14;
    FUN_004015d0(&stack0xfffffa10,"ui/postproc/track02_dark.dds",0x1c);
    uStack_604 = uStack_604 | 0x10;
    puStack_554 = (undefined1 *)0xab;
    puVar3 = FUN_00768c70(pvVar2,(int *)&stack0xfffffa10,(undefined4 *)&stack0xfffffa78,
                          (undefined4 *)&stack0xfffffa34,(undefined4 *)&stack0xfffffa54,
                          (undefined4 *)&stack0xfffffa9c);
    pvVar2 = pvVar18;
  }
  puStack_554 = (undefined1 *)0xaf;
  (**(code **)(param_1[0x1f1] + 4))();
  param_1[0x1f6] = (int)puVar3;
  (**(code **)param_1[0x1f1])();
  if (((uStack_604 & 0x10) != 0) && (uStack_604 = uStack_604 & 0xffffffef, 0x14 < uVar24)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  if (((uStack_604 & 8) != 0) && (uStack_604 = uStack_604 & 0xfffffff7, 0x14 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  if (((uStack_604 & 4) != 0) && (uStack_604 = uStack_604 & 0xfffffffb, 10 < uStack_5c4)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar12);
  }
  puStack_554 = (undefined1 *)0xffffffff;
  if (((uStack_604 & 2) != 0) && (uStack_604 = uStack_604 & 0xfffffffd, 0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_01);
  }
  (**(code **)(*(int *)param_1[0x1f6] + 0x5c))();
  uVar24 = param_1[0x17e];
  (**(code **)(*(int *)param_1[0x1f6] + 100))();
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_LAB_00d4ec1c;
    puVar3[1] = param_1;
    puVar3[2] = &LAB_0075d580;
    puVar3[3] = 0;
  }
  FUN_00768470(param_1[0x1f6]);
  uStack_638 = param_1[0x1f6];
  uStack_634 = 1;
  (**(code **)(*param_1 + 0xc))();
  puVar23 = operator_new(0x474);
  if (puVar23 == (uint *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puStack_614 = &uStack_608;
    uStack_608 = uStack_608 & 0xffffff00;
    uStack_610 = 0;
    uStack_60c = 0x14;
    puVar8 = puVar23;
    FUN_004015d0(&puStack_614,"POST_WAVE_VOLUME",0x10);
    uVar24 = uVar24 | 0x20;
    puVar7 = FUN_009b5030((undefined4 *)&stack0xfffffa54,&puStack_614);
    uVar24 = uVar24 | 0x40;
    puVar7 = FUN_0075db20(puVar23,param_1[0x184],&LAB_0075d5c0,puVar7,0x42500000,0x41d80000,0);
    puVar23 = puVar8;
  }
  (**(code **)(param_1[0xd4] + 4))();
  param_1[0xd9] = (int)puVar7;
  (**(code **)param_1[0xd4])();
  if (((uVar24 & 0x40) != 0) && (uVar24 = uVar24 & 0xffffffbf, 10 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_01);
  }
  if (((uVar24 & 0x20) != 0) && (0x14 < uStack_60c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_614);
  }
  _Memory_00 = (undefined1 *)param_1[0xd9];
  puVar17 = (undefined1 *)0x1;
  (**(code **)(*param_1 + 0xc))();
  FUN_0075dae0((void *)param_1[0xd9],(float)param_1[0x110]);
  pvVar18 = operator_new(0x420);
  if (pvVar18 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar16 = &stack0xfffffa58;
    _Memory_01 = (uint **)&DAT_00000014;
    FUN_004015d0(&stack0xfffffa4c,"POST_MICROPHONE",0xf);
    uVar4 = (uint)puVar3 | 0x80;
    puVar23 = &uStack_610;
    uStack_610 = uStack_610 & 0xffffff00;
    puStack_614 = (uint *)&DAT_00000014;
    FUN_004015d0(&stack0xfffff9e4,"ui/postproc/track03.dds",0x17);
    uVar4 = uVar4 | 0x100;
    puVar7 = FUN_009b5030((undefined4 *)&stack0xfffffa08,(undefined4 *)&stack0xfffffa4c);
    puVar3 = (undefined4 *)(uVar4 | 0x200);
    puVar7 = FUN_0069fb10(pvVar18,(int *)&stack0xfffff9e4,puVar7,0x42000000,0x42000000,0,0,
                          0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0x18b] + 4))();
  param_1[400] = (int)puVar7;
  (**(code **)param_1[0x18b])();
  if ((((uint)puVar3 & 0x200) != 0) &&
     (puVar3 = (undefined4 *)((uint)puVar3 & 0xfffffdff), &lpType_0000000a < puVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  if ((((uint)puVar3 & 0x100) != 0) &&
     (puVar3 = (undefined4 *)((uint)puVar3 & 0xfffffeff), &DAT_00000014 < puStack_614)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar23);
  }
  if (((char)puVar3 < '\0') && (&DAT_00000014 < _Memory_01)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  (**(code **)(*(int *)param_1[400] + 0x5c))();
  uVar4 = 0;
  uVar15 = 2;
  (**(code **)(*(int *)param_1[400] + 100))();
  puVar20 = (undefined1 *)param_1[400];
  uVar24 = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x360);
  puStack_5a0 = (uint *)0xbc;
  if (pvVar2 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar17 = &stack0xfffff9d0;
    uStack_638 = 0;
    uStack_634 = 0x14;
    FUN_004015d0(&stack0xfffff9c4,"ui/postproc/micicon.dds",0x17);
    _Memory_00 = &stack0xfffff990;
    uVar4 = uVar4 | 0x400;
    puStack_5a0 = (uint *)CONCAT31(puStack_5a0._1_3_,0xbd);
    uStack_678 = 0x7821d6;
    piVar5 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xfffff9c4,0,0,0x3f800000,0x3f800000);
  }
  puStack_5a0 = (uint *)0xffffffff;
  if (((uVar4 & 0x400) != 0) && (0x14 < uStack_634)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  _Memory = (undefined1 *)param_1[400];
  puVar16 = (undefined1 *)0x0;
  (**(code **)(*piVar5 + 0x5c))();
  uStack_678 = 1;
  uStack_67c = 0x78223b;
  (**(code **)(*piVar5 + 100))();
  uStack_67c = 0x42000000;
  puStack_680 = (undefined1 *)0x42000000;
  (**(code **)(*piVar5 + 0x74))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar14 = &stack0xfffffa10;
    uVar6 = 0x14;
    FUN_004015d0(&stack0xfffffa04,"POST_MICROPHONE_RECORD",0x16);
    uStack_678 = uStack_678 | 0x800;
    puVar16 = &stack0xfffff9a8;
    uVar15 = uVar15 & 0xffffff00;
    puVar20 = (undefined1 *)0x0;
    uVar24 = 0x14;
    FUN_004015d0(&stack0xfffff99c,"ui/postproc/postprod_track_recordoff.dds",0x28);
    uStack_678 = uStack_678 | 0x1000;
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffff9c0,(undefined4 *)&stack0xfffffa04);
    _Memory = &stack0xfffff968;
    uStack_678 = uStack_678 | 0x2000;
    pvStack_6ac = (void *)0x78234b;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&stack0xfffff99c,puVar3,0x42000000,0x42000000,0,0,0x3f800000
                          ,0x3f800000);
  }
  (**(code **)(param_1[0x191] + 4))();
  param_1[0x196] = (int)puVar3;
  (**(code **)param_1[0x191])();
  if (((uStack_678 & 0x2000) != 0) && (uStack_678 = uStack_678 & 0xffffdfff, 10 < uStack_638)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  if (((uStack_678 & 0x1000) != 0) && (uStack_678 = uStack_678 & 0xffffefff, 0x14 < uVar24)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  if (((uStack_678 & 0x800) != 0) && (uStack_678 = uStack_678 & 0xfffff7ff, 0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar14);
  }
  (**(code **)(*(int *)param_1[0x196] + 0x18))();
  puVar19 = &lpClass_00d16914;
  uVar4 = 0;
  puVar16 = &LAB_005f37f0;
  pvVar18 = (void *)0x5;
  pvStack_6ac = (void *)0x782435;
  (**(code **)(*(int *)param_1[0x196] + 0x18))();
  iStack_6b0 = param_1[400];
  pvStack_6ac = (void *)0x0;
  uStack_6b4 = 2;
  uStack_6b8 = 0x78244a;
  (**(code **)(*(int *)param_1[0x196] + 0x5c))();
  iStack_6bc = param_1[0x184];
  uStack_6b8 = 0;
  uStack_6c0 = 2;
  uStack_6c4 = 0x78245f;
  (**(code **)(*(int *)param_1[0x196] + 100))();
  puStack_6c8 = (undefined1 *)param_1[0x196];
  uStack_6c4 = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x450);
  pvStack_6ac = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar20 = &stack0xfffff9ac;
    uVar15 = 0x14;
    FUN_004015d0(&stack0xfffff9a0,"TRAILEREDITORLITE_MICDROP",0x19);
    uStack_6b8 = uStack_6b8 | 0x4000;
    puStack_680 = &stack0xfffff98c;
    uStack_67c = 0;
    uStack_678 = 10;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_680,(wchar_t *)&lpCaption_00d16918,uVar4);
    uStack_6b8 = uStack_6b8 | 0x8000;
    puVar17 = &stack0xfffff9d0;
    uStack_634 = 0x14;
    FUN_004015d0(&stack0xfffff9c4,"ui/postproc/track03.dds",0x17);
    uStack_6b8 = uStack_6b8 | 0x10000;
    puVar16 = &stack0xfffff968;
    uVar4 = 0;
    puVar19 = (undefined *)0x14;
    FUN_004015d0(&stack0xfffff95c,"ui/postproc/track03_dark.dds",0x1c);
    uStack_6b8 = uStack_6b8 | 0x20000;
    uStack_608 = 0xca;
    puVar3 = FUN_00768c70(pvVar2,(int *)&stack0xfffff95c,(undefined4 *)&stack0xfffff9c4,&puStack_680
                          ,(undefined4 *)&stack0xfffff9a0,(undefined4 *)&stack0xfffff9e8);
  }
  uStack_608 = 0xce;
  (**(code **)(param_1[0x1fd] + 4))();
  param_1[0x202] = (int)puVar3;
  (**(code **)param_1[0x1fd])();
  if (((uStack_6b8 & 0x20000) != 0) &&
     (uStack_6b8 = uStack_6b8 & 0xfffdffff, (undefined *)0x14 < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  if (((uStack_6b8 & 0x10000) != 0) && (uStack_6b8 = uStack_6b8 & 0xfffeffff, 0x14 < uStack_634)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  if (((char)(uStack_6b8 >> 8) < '\0') && (uStack_6b8 = uStack_6b8 & 0xffff7fff, 10 < uStack_678)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_680);
  }
  uStack_608 = 0xffffffff;
  if (((uStack_6b8 & 0x4000) != 0) && (uStack_6b8 = uStack_6b8 & 0xffffbfff, 0x14 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  (**(code **)(*(int *)param_1[0x202] + 0x5c))();
  uVar24 = param_1[0x184];
  (**(code **)(*(int *)param_1[0x202] + 100))();
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_LAB_00d4ec1c;
    puVar3[1] = param_1;
    puVar3[2] = &LAB_00751b00;
    puVar3[3] = 0;
  }
  FUN_00768470(param_1[0x202]);
  (**(code **)(*param_1 + 0xc))();
  puVar23 = operator_new(0x474);
  if (puVar23 == (uint *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar8 = puVar23;
    FUN_00401de0(&puStack_6c8,"POST_MIC_VOLUME",0xffffffff);
    uVar24 = uVar24 | 0x40000;
    puVar7 = FUN_009b5030((undefined4 *)&stack0xfffff9a0,&puStack_6c8);
    uVar24 = uVar24 | 0x80000;
    puVar7 = FUN_0075db20(puVar23,param_1[0x196],&LAB_00751b40,puVar7,0x41a00000,0x41d80000,0);
    puVar23 = puVar8;
  }
  (**(code **)(param_1[0x1cd] + 4))();
  param_1[0x1d2] = (int)puVar7;
  (**(code **)param_1[0x1cd])();
  if (((uVar24 & 0x80000) != 0) && (uVar24 = uVar24 & 0xfff7ffff, 10 < uVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  if (((uVar24 & 0x40000) != 0) && (0x14 < uStack_6c0)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_6c8);
  }
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar23 = &uStack_6c4;
    uStack_6c4 = uStack_6c4 & 0xffff0000;
    puStack_6c8 = &lpType_0000000a;
    uVar24 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffff930,(wchar_t *)&lpCaption_00d16918,uVar24);
    uVar24 = (uint)puVar3 | 0x100000;
    FUN_00401de0(&stack0xfffff998,"ui/postproc/dragbar.dds",0xffffffff);
    puVar3 = (undefined4 *)(uVar24 | 0x200000);
    pvStack_718 = (void *)0x7828f0;
    puVar7 = FUN_0069fb10(pvVar2,(int *)&stack0xfffff998,(undefined4 *)&stack0xfffff930,DAT_00e595f4
                          ,0x42800000,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0x131] + 4))();
  param_1[0x136] = (int)puVar7;
  (**(code **)param_1[0x131])();
  if ((((uint)puVar3 & 0x200000) != 0) &&
     (puVar3 = (undefined4 *)((uint)puVar3 & 0xffdfffff), &DAT_00000014 < puVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((((uint)puVar3 & 0x100000) != 0) && (&lpType_0000000a < puStack_6c8)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar23);
  }
  (**(code **)(*(int *)param_1[0x136] + 0x18))();
  puVar19 = &lpClass_00d16914;
  puVar20 = &LAB_005f37f0;
  pvStack_718 = (void *)0x7829b7;
  (**(code **)(*(int *)param_1[0x136] + 0x18))();
  iStack_71c = param_1[0x1c0];
  pvStack_718 = (void *)0xc0800000;
  uStack_720 = 2;
  uStack_724 = 0x7829d0;
  (**(code **)(*(int *)param_1[0x136] + 0x5c))();
  uStack_728 = param_1[400];
  uStack_724 = 0;
  uStack_72c = 2;
  pvStack_730 = (void *)0x7829e5;
  (**(code **)(*(int *)param_1[0x136] + 100))();
  puStack_734 = (undefined1 *)param_1[0x136];
  pvStack_730 = (void *)0x1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  pvStack_718 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar20 = &stack0xfffff8fc;
    puVar19 = (undefined *)0xa;
    uVar24 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffff8f0,(wchar_t *)&lpCaption_00d16918,uVar24);
    uStack_724 = uStack_724 | 0x400000;
    FUN_00401de0(&stack0xfffff958,"ui/mov_scrollbut.dds",0xffffffff);
    uStack_724 = uStack_724 | 0x800000;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&stack0xfffff958,(undefined4 *)&stack0xfffff8f0,0x41b00000,
                          0x42480000,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0x1d3] + 4))();
  param_1[0x1d8] = (int)puVar3;
  (**(code **)param_1[0x1d3])();
  if (((uStack_724 & 0x800000) != 0) && (uStack_724 = uStack_724 & 0xff7fffff, 0x14 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar18);
  }
  if (((uStack_724 & 0x400000) != 0) &&
     (uStack_724 = uStack_724 & 0xffbfffff, (undefined *)0xa < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar20);
  }
  (**(code **)(*(int *)param_1[0x1d8] + 0x60))();
  uVar4 = 0xc1a80000;
  (**(code **)(*(int *)param_1[0x1d8] + 100))();
  uVar24 = 1;
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00401de0(&pvStack_730,"ui/postproc/cue_line.dds",0xffffffff);
    puStack_734 = &stack0xfffff89c;
    uVar4 = uVar4 | 0x1000000;
    uStack_76c = 0x782bfc;
    puVar3 = FUN_0069d820(pvVar2,&pvStack_730,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0x1d9] + 4))();
  param_1[0x1de] = (int)puVar3;
  (**(code **)param_1[0x1d9])();
  if (((uVar4 & 0x1000000) != 0) && (0x14 < uStack_728)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_730);
  }
  pvVar18 = (void *)0x0;
  (**(code **)(*(int *)param_1[0x1de] + 0x5c))();
  pvVar2 = (void *)param_1[0x1d8];
  uStack_76c = 2;
  uStack_770 = 0x782c8a;
  (**(code **)(*(int *)param_1[0x1de] + 100))();
  uStack_770 = 0x41800000;
  pvStack_774 = (void *)0x782c9a;
  (**(code **)(*(int *)param_1[0x1de] + 0x78))();
  pvStack_774 = (void *)0x43800000;
  (**(code **)(*(int *)param_1[0x1de] + 0x7c))();
  (**(code **)(*param_1 + 0xc))();
  puVar20 = operator_new(0x420);
  if (puVar20 == (undefined1 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar17 = puVar20;
    FUN_00401de0(&stack0xfffff910,"POST_SPLITSCENE",0xffffffff);
    uStack_76c = uStack_76c | 0x2000000;
    FUN_00401de0(&stack0xfffff8a8,"postproc/button_cutscene.",0xffffffff);
    uStack_76c = uStack_76c | 0x4000000;
    iStack_6bc = 0xe3;
    puVar3 = FUN_009b5030(&puStack_734,(undefined4 *)&stack0xfffff910);
    uStack_76c = uStack_76c | 0x8000000;
    iStack_6bc = 0xe4;
    pvStack_7a0 = (void *)0x782d7a;
    puVar3 = FUN_0069fb10(puVar20,(int *)&stack0xfffff8a8,puVar3,0x42200000,0x42200000,0,0,
                          0x3f800000,0x3f800000);
    puVar20 = puVar17;
  }
  iStack_6bc = 0xe7;
  (**(code **)(param_1[0x137] + 4))();
  param_1[0x13c] = (int)puVar3;
  (**(code **)param_1[0x137])();
  if (((uStack_76c & 0x8000000) != 0) && (uStack_76c = uStack_76c & 0xf7ffffff, 10 < uStack_72c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_734);
  }
  if (((uStack_76c & 0x4000000) != 0) && (uStack_76c = uStack_76c & 0xfbffffff, 0x14 < uVar24)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar18);
  }
  iStack_6bc = 0xffffffff;
  if ((uStack_76c & 0x2000000) != 0) {
    uStack_76c = uStack_76c & 0xfdffffff;
  }
  (**(code **)(*(int *)param_1[0x13c] + 0x18))();
  puVar19 = &lpClass_00d16914;
  puVar17 = &LAB_005f37f0;
  pvStack_7a0 = (void *)0x782e6d;
  (**(code **)(*(int *)param_1[0x13c] + 0x18))();
  pvStack_7a0 = (void *)0x0;
  piStack_7a4 = DAT_0104e5d8;
  uStack_7a8 = 2;
  pvStack_7ac = (void *)0x782e82;
  (**(code **)(*(int *)param_1[0x13c] + 0x60))();
  pvStack_7ac = (void *)0x0;
  (**(code **)(*(int *)param_1[0x13c] + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar18 = operator_new(0x420);
  pvStack_7a0 = pvVar18;
  if (pvVar18 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00401de0(&pvStack_730,"POST_SAVETHUMBNAIL",0xffffffff);
    pvStack_7ac = (void *)((uint)pvStack_7ac | 0x10000000);
    FUN_00401de0(&stack0xfffff868,"button_makethumb.",0xffffffff);
    pvStack_7ac = (void *)((uint)pvStack_7ac | 0x20000000);
    puVar3 = FUN_009b5030(&pvStack_774,&pvStack_730);
    pvStack_7ac = (void *)((uint)pvStack_7ac | 0x40000000);
    puVar3 = FUN_0069fb10(pvVar18,(int *)&stack0xfffff868,puVar3,0x42200000,0x42200000,0,0,
                          0x3f800000,0x3f800000);
  }
  (**(code **)(param_1[0x1a9] + 4))();
  param_1[0x1ae] = (int)puVar3;
  (**(code **)param_1[0x1a9])();
  if ((((uint)pvStack_7ac & 0x40000000) != 0) &&
     (pvStack_7ac = (void *)((uint)pvStack_7ac & 0xbfffffff), 10 < uStack_76c)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_774);
  }
  if ((((uint)pvStack_7ac & 0x20000000) != 0) &&
     (pvStack_7ac = (void *)((uint)pvStack_7ac & 0xdfffffff), (undefined *)0x14 < puVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar17);
  }
  if ((((uint)pvStack_7ac & 0x10000000) != 0) &&
     (pvStack_7ac = (void *)((uint)pvStack_7ac & 0xefffffff), 0x14 < uStack_728)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_730);
  }
  uVar4 = 0;
  puVar17 = &LAB_00775750;
  (**(code **)(*(int *)param_1[0x1ae] + 0x18))();
  puVar19 = &lpClass_00d16914;
  (**(code **)(*(int *)param_1[0x1ae] + 0x18))();
  piStack_7e4 = DAT_0104e5d8;
  (**(code **)(*(int *)param_1[0x1ae] + 0x60))();
  (**(code **)(*(int *)param_1[0x1ae] + 100))();
  if (DAT_0104e45c == '\0') {
    (**(code **)(*param_1 + 0xc))();
  }
  pvVar18 = operator_new(0x420);
  if (pvVar18 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00401de0(&stack0xfffff898,"POST_DELETE_ITEM",0xffffffff);
    piStack_7e4 = (int *)((uint)piStack_7e4 | 0x80000000);
    FUN_00401de0(&stack0xfffff830,"button_delete.",0xffffffff);
    puStack_734 = (undefined1 *)0xf1;
    uStack_76c = 1;
    puVar3 = FUN_009b5030(&pvStack_7ac,(undefined4 *)&stack0xfffff898);
    puStack_734 = (undefined1 *)0xf2;
    uStack_76c = 3;
    pvStack_818 = (void *)0x78315b;
    puVar3 = FUN_0069fb10(pvVar18,(int *)&stack0xfffff830,puVar3,0x42200000,0x42200000,0,0,
                          0x3f800000,0x3f800000);
  }
  puStack_734 = (undefined1 *)0xf5;
  (**(code **)(param_1[0x1c1] + 4))();
  param_1[0x1c6] = (int)puVar3;
  (**(code **)param_1[0x1c1])();
  if (((uStack_76c & 2) != 0) &&
     (uStack_76c = uStack_76c & 0xfffffffd, &lpType_0000000a < piStack_7a4)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_7ac);
  }
  if (((uStack_76c & 1) != 0) &&
     (uStack_76c = uStack_76c & 0xfffffffe, (undefined1 *)0x14 < puVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar19);
  }
  puStack_734 = (undefined1 *)0xffffffff;
  if (((int)piStack_7e4 < 0) && (&DAT_00000014 < puVar20)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  puVar17 = &LAB_0077e520;
  (**(code **)(*(int *)param_1[0x1c6] + 0x18))();
  puVar20 = &lpClass_00d16914;
  pvStack_818 = (void *)0x783249;
  (**(code **)(*(int *)param_1[0x1c6] + 0x18))();
  pvStack_818 = (void *)0x0;
  piStack_81c = DAT_0104e5d8;
  uStack_820 = 2;
  uStack_824 = 0x78325e;
  (**(code **)(*(int *)param_1[0x1c6] + 0x60))();
  pvStack_828 = (void *)param_1[0x1ae];
  uStack_824 = 0;
  (**(code **)(*(int *)param_1[0x1c6] + 100))();
  if (DAT_0104e45c == '\0') {
    (**(code **)(*param_1 + 0xc))();
  }
  if (*(char *)((int)param_1 + 0x34b) == '\0') {
    pvVar2 = operator_new(0x360);
    uStack_76c = 0xf6;
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      pvVar18 = pvVar2;
      FUN_00401de0(&stack0xfffff7f8,"ui/mov_scrolltrack.dds",0xffffffff);
      piStack_7a4 = (int *)((uint)piStack_7a4 | 4);
      uStack_76c = CONCAT31(uStack_76c._1_3_,0xf7);
      puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xfffff7f8,0,0,0x3e800000,0x3f800000);
      pvVar2 = pvVar18;
    }
    if ((((uint)piStack_7a4 & 4) != 0) &&
       (piStack_7a4 = (int *)((uint)piStack_7a4 & 0xfffffffb), (undefined1 *)0x14 < puVar17)) {
                    /* WARNING: Subroutine does not return */
      _free(puVar20);
    }
    puVar7 = (undefined4 *)FUN_005fbfa0(&stack0xfffff7f8,1,param_1[0x1ba],0);
    uStack_76c = 0xf9;
    FUN_005f59e0(puVar3 + 0x28,puVar7);
    FUN_005f9ed0((int)&stack0xfffff7f8);
    puVar7 = (undefined4 *)FUN_005fbfa0(&stack0xfffff7f8,1,(int)puVar3,0x42000000);
    uStack_76c = 0xfa;
    FUN_005f59e0(puVar3 + 0x3a,puVar7);
    FUN_005f9ed0((int)&stack0xfffff7f8);
    puVar7 = (undefined4 *)FUN_005fbfa0(&stack0xfffff7f8,1,param_1[0x1ba],0);
    uStack_76c = 0xfb;
    FUN_005f59e0(puVar3 + 0x31,puVar7);
    FUN_005f9ed0((int)&stack0xfffff7f8);
    puVar7 = (undefined4 *)FUN_005fbfa0(&stack0xfffff7f8,2,(int)puVar3,0x41600000);
    uStack_76c = 0xfc;
    FUN_005f59e0(puVar3 + 0x1f,puVar7);
    uStack_76c = 0xffffffff;
    FUN_005f9ed0((int)&stack0xfffff7f8);
    (**(code **)(*param_1 + 0xc))();
    pvVar18 = operator_new(0x360);
    pvStack_774 = (void *)0xfd;
    pvStack_818 = pvVar18;
    if (pvVar18 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_00401de0(&stack0xfffff7f0,"ui/mov_scrolltrack.dds",0xffffffff);
      pvStack_7ac = (void *)((uint)pvStack_7ac | 8);
      pvStack_774 = (void *)CONCAT31(pvStack_774._1_3_,0xfe);
      piVar5 = FUN_0069d820(pvVar18,(undefined4 *)&stack0xfffff7f0,0x3e800000,0,0x3f400000,
                            0x3f800000);
    }
    if ((((uint)pvStack_7ac & 8) != 0) &&
       (pvStack_7ac = (void *)((uint)pvStack_7ac & 0xfffffff7), &DAT_00000014 < puVar20)) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    puVar3 = (undefined4 *)FUN_005fbfa0(&uStack_7a8,2,(int)puVar3,0);
    pvStack_774 = (void *)0x100;
    FUN_005f59e0(piVar5 + 0x28,puVar3);
    FUN_005f9ed0((int)&uStack_7a8);
    puVar3 = (undefined4 *)FUN_005fbfa0(&uStack_7a8,2,(int)param_1,0x42100000);
    pvStack_774 = (void *)0x101;
    FUN_005f59e0(piVar5 + 0x3a,puVar3);
    FUN_005f9ed0((int)&uStack_7a8);
    puVar3 = (undefined4 *)FUN_005fbfa0(&uStack_7a8,1,param_1[0x1ba],0);
    pvStack_774 = (void *)0x102;
    FUN_005f59e0(piVar5 + 0x31,puVar3);
    FUN_005f9ed0((int)&uStack_7a8);
    puVar3 = (undefined4 *)FUN_005fbfa0(&uStack_7a8,2,(int)piVar5,0x41600000);
    pvStack_774 = (void *)0x103;
    FUN_005f59e0(piVar5 + 0x1f,puVar3);
    pvStack_774 = (void *)0xffffffff;
    FUN_005f9ed0((int)&uStack_7a8);
    (**(code **)(*piVar5 + 0x18))();
    (**(code **)(*param_1 + 0xc))();
    pvVar2 = operator_new(0x360);
    if (pvVar2 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00401de0(&pvStack_828,"ui/mov_scrolltrack.dds",0xffffffff);
      uVar4 = uVar4 | 0x10;
      puVar3 = FUN_0069d820(pvVar2,&pvStack_828,0x3f400000,0,0x3f800000,0x3f800000);
    }
    if (((uVar4 & 0x10) != 0) && (0x14 < uStack_820)) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_828);
    }
    puVar7 = (undefined4 *)FUN_005fbfa0(&pvStack_828,2,(int)piVar5,0);
    FUN_005f59e0(puVar3 + 0x28,puVar7);
    FUN_005f9ed0((int)&pvStack_828);
    puVar7 = (undefined4 *)FUN_005fbfa0(&pvStack_828,2,(int)param_1,0x40800000);
    FUN_005f59e0(puVar3 + 0x3a,puVar7);
    FUN_005f9ed0((int)&pvStack_828);
    puVar7 = (undefined4 *)FUN_005fbfa0(&pvStack_828,1,param_1[0x1ba],0);
    FUN_005f59e0(puVar3 + 0x31,puVar7);
    FUN_005f9ed0((int)&pvStack_828);
    puVar7 = (undefined4 *)FUN_005fbfa0(&pvStack_828,2,(int)puVar3,0x41600000);
    FUN_005f59e0(puVar3 + 0x1f,puVar7);
    FUN_005f9ed0((int)&pvStack_828);
    (**(code **)(*param_1 + 0xc))();
    puVar3 = operator_new(0x344);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007432f0(puVar3);
    }
    (**(code **)(param_1[299] + 4))();
    param_1[0x130] = (int)puVar3;
    (**(code **)param_1[299])();
    *(uint *)(param_1[0x130] + 0x114) = *(uint *)(param_1[0x130] + 0x114) | 8;
    (**(code **)(*(int *)param_1[0x130] + 0x70))();
    puVar3 = operator_new(0x50);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_005e4870(puVar3);
    }
    (**(code **)(*(int *)param_1[0x130] + 0xa0))(puVar3);
    piVar5 = (int *)(**(code **)(*(int *)param_1[0x130] + 0xa4))();
    (**(code **)(*piVar5 + 0xc))(&stack0xfffff7c0);
    (**(code **)(*(int *)param_1[0x130] + 0x20))(0);
    (**(code **)(*(int *)param_1[0x130] + 0x18))(5,&LAB_005f3800,0,&lpClass_00d16914);
    (**(code **)(*param_1 + 0xc))(param_1[0x130],1);
    if (*(char *)((int)param_1 + 0x34b) == '\0') goto LAB_00783a5a;
  }
  (**(code **)(*(int *)param_1[0x1c6] + 0x20))();
  (**(code **)(*(int *)param_1[0x13c] + 0x20))();
  (**(code **)(*(int *)param_1[0x18a] + 0x20))();
  (**(code **)(*(int *)param_1[0x154] + 0x20))();
  (**(code **)(*(int *)param_1[0x1a8] + 0x20))();
  (**(code **)(*(int *)param_1[0x1a2] + 0x20))();
  (**(code **)(*(int *)param_1[0x1b4] + 0x20))();
  (**(code **)(*(int *)param_1[0x19c] + 0x20))();
  (**(code **)(*(int *)param_1[0x136] + 0x20))();
  (**(code **)(*(int *)param_1[0x1d8] + 0x20))();
  (**(code **)(*(int *)param_1[0x1de] + 0x20))();
  (**(code **)(*(int *)param_1[0x1ae] + 0x20))();
  puVar3 = operator_new(0x344);
  if (puVar3 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_007432f0(puVar3);
  }
  piVar5[0x45] = piVar5[0x45] | 8;
  puVar3 = (undefined4 *)FUN_005fbfa0(&stack0xfffff7c8,1,(int)param_1,0);
  FUN_005f59e0(piVar5 + 0x28,puVar3);
  FUN_005f9ed0((int)&stack0xfffff7c8);
  puVar3 = (undefined4 *)FUN_005fbfa0(&stack0xfffff7c8,2,(int)param_1,0);
  FUN_005f59e0(piVar5 + 0x3a,puVar3);
  FUN_005f9ed0((int)&stack0xfffff7c8);
  puVar3 = (undefined4 *)FUN_005fbfa0(&stack0xfffff7c8,2,(int)param_1,0);
  FUN_005f59e0(piVar5 + 0x31,puVar3);
  FUN_005f9ed0((int)&stack0xfffff7c8);
  puVar3 = (undefined4 *)FUN_005fbfa0(&stack0xfffff7c8,2,(int)param_1,0x42a00000);
  FUN_005f59e0(piVar5 + 0x1f,puVar3);
  FUN_005f9ed0((int)&stack0xfffff7c8);
  puVar3 = operator_new(0x50);
  if (puVar3 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_005e4870(puVar3);
  }
  (**(code **)(*piVar9 + 0xc))(&stack0xfffff7c0);
  (**(code **)(*piVar5 + 0xa0))(piVar9);
  (**(code **)(*param_1 + 0xc))(piVar5,1);
  (**(code **)(param_1[299] + 4))();
  param_1[0x130] = 0;
  (**(code **)param_1[299])();
LAB_00783a5a:
  FUN_00774910(param_1);
  FUN_00770bb0((int)param_1);
  if (*(char *)((int)param_1 + 0x34b) != '\0') {
    (**(code **)(*(int *)param_1[0x166] + 0xc0))();
    (**(code **)(*(int *)param_1[0x142] + 0xc0))();
    (**(code **)(*(int *)param_1[0x15a] + 0xc0))();
    (**(code **)(*(int *)param_1[0x160] + 0xc0))();
    (**(code **)(*(int *)param_1[0x16c] + 0xc0))();
  }
  ExceptionList = pvStack_774;
  return;
}


//// FUNCTION FUN_00783ae0 @ 00783ae0 ////

int * __thiscall FUN_00783ae0(void *this,undefined1 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  void *this_00;
  undefined4 *puVar4;
  int *piVar5;
  float10 fVar6;
  int iVar7;
  byte bVar8;
  void *pvVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb18a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d4f0ac;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4f094;
  *(undefined1 *)((int)this + 0x348) = 0;
  *(undefined1 *)((int)this + 0x349) = 0;
  *(undefined1 *)((int)this + 0x34a) = 1;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 **)((int)this + 0x35c) = (undefined4 *)((int)this + 0x350);
  *(undefined4 *)((int)this + 0x350) = &PTR_LAB_00d4ed68;
  *(undefined4 *)((int)this + 0x364) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  _eh_vector_constructor_iterator_((void *)((int)this + 0x36c),4,4,FUN_007684b0,FUN_00768b80);
  *(undefined4 *)((int)this + 0x37c) = (undefined2 *)((int)this + 0x388);
  *(undefined2 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 0x37c),(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3b4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  FUN_00a21530((int)this + 0x3e4);
  DAT_01050c3c = 1;
  *(undefined1 *)((int)this + 0x3e6) = 0;
  *(undefined4 *)((int)this + 1000) = (undefined1 *)((int)this + 0x3f4);
  *(undefined1 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 1000),"",0);
  local_4._0_1_ = 6;
  *(undefined4 *)((int)this + 0x408) = 0;
  puVar2 = operator_new(1);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *puVar2 = DAT_0105cc5c;
    DAT_0105cc5c = 0;
  }
  *(undefined1 **)((int)this + 0x40c) = puVar2;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x444) = 0x3f800000;
  *(undefined1 *)((int)this + 0x452) = 1;
  *(undefined1 *)((int)this + 0x453) = 0;
  *(undefined1 *)((int)this + 0x454) = 0;
  *(undefined1 *)((int)this + 0x455) = 0;
  *(undefined1 *)((int)this + 0x456) = 0;
  *(undefined1 *)((int)this + 0x457) = 1;
  *(undefined1 *)((int)this + 0x458) = 1;
  *(undefined1 *)((int)this + 0x459) = 0;
  *(undefined1 *)((int)this + 0x45a) = 0;
  *(undefined1 *)((int)this + 0x45b) = 0;
  *(undefined1 *)((int)this + 0x45c) = 0;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 **)((int)this + 0x470) = (undefined4 *)((int)this + 0x464);
  *(undefined4 *)((int)this + 0x464) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 **)((int)this + 0x488) = (undefined4 *)((int)this + 0x47c);
  *(undefined4 *)((int)this + 0x47c) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined4 *)((int)this + 0x49c) = 0;
  *(undefined4 **)((int)this + 0x4a0) = (undefined4 *)((int)this + 0x494);
  *(undefined4 *)((int)this + 0x494) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 **)((int)this + 0x4b8) = (undefined4 *)((int)this + 0x4ac);
  *(undefined4 *)((int)this + 0x4ac) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined4 **)((int)this + 0x4d0) = (undefined4 *)((int)this + 0x4c4);
  *(undefined4 *)((int)this + 0x4c4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined4 **)((int)this + 0x4e8) = (undefined4 *)((int)this + 0x4dc);
  *(undefined4 *)((int)this + 0x4dc) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  *(undefined4 **)((int)this + 0x500) = (undefined4 *)((int)this + 0x4f4);
  *(undefined4 *)((int)this + 0x4f4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x518) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 **)((int)this + 0x518) = (undefined4 *)((int)this + 0x50c);
  *(undefined4 *)((int)this + 0x50c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x520) = 0;
  *(undefined4 *)((int)this + 0x530) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0;
  *(undefined4 **)((int)this + 0x530) = (undefined4 *)((int)this + 0x524);
  *(undefined4 *)((int)this + 0x524) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x548) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined4 *)((int)this + 0x544) = 0;
  *(undefined4 **)((int)this + 0x548) = (undefined4 *)((int)this + 0x53c);
  *(undefined4 *)((int)this + 0x53c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x560) = 0;
  *(undefined4 *)((int)this + 0x558) = 0;
  *(undefined4 *)((int)this + 0x55c) = 0;
  *(undefined4 **)((int)this + 0x560) = (undefined4 *)((int)this + 0x554);
  *(undefined4 *)((int)this + 0x554) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x568) = 0;
  *(undefined4 *)((int)this + 0x578) = 0;
  *(undefined4 *)((int)this + 0x570) = 0;
  *(undefined4 *)((int)this + 0x574) = 0;
  *(undefined4 **)((int)this + 0x578) = (undefined4 *)((int)this + 0x56c);
  *(undefined4 *)((int)this + 0x56c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x580) = 0;
  *(undefined4 *)((int)this + 0x590) = 0;
  *(undefined4 *)((int)this + 0x588) = 0;
  *(undefined4 *)((int)this + 0x58c) = 0;
  *(undefined4 **)((int)this + 0x590) = (undefined4 *)((int)this + 0x584);
  *(undefined4 *)((int)this + 0x584) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x598) = 0;
  *(undefined4 *)((int)this + 0x5a8) = 0;
  *(undefined4 *)((int)this + 0x5a0) = 0;
  *(undefined4 *)((int)this + 0x5a4) = 0;
  *(undefined4 **)((int)this + 0x5a8) = (undefined4 *)((int)this + 0x59c);
  *(undefined4 *)((int)this + 0x59c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x5b0) = 0;
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5b8) = 0;
  *(undefined4 *)((int)this + 0x5bc) = 0;
  *(undefined4 **)((int)this + 0x5c0) = (undefined4 *)((int)this + 0x5b4);
  *(undefined4 *)((int)this + 0x5b4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x5c8) = 0;
  *(undefined4 *)((int)this + 0x5d8) = 0;
  *(undefined4 *)((int)this + 0x5d0) = 0;
  *(undefined4 *)((int)this + 0x5d4) = 0;
  *(undefined4 **)((int)this + 0x5d8) = (undefined4 *)((int)this + 0x5cc);
  *(undefined4 *)((int)this + 0x5cc) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x5e0) = 0;
  *(undefined4 *)((int)this + 0x5f0) = 0;
  *(undefined4 *)((int)this + 0x5e8) = 0;
  *(undefined4 *)((int)this + 0x5ec) = 0;
  *(undefined4 **)((int)this + 0x5f0) = (undefined4 *)((int)this + 0x5e4);
  *(undefined4 *)((int)this + 0x5e4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x5f8) = 0;
  *(undefined4 *)((int)this + 0x608) = 0;
  *(undefined4 *)((int)this + 0x600) = 0;
  *(undefined4 *)((int)this + 0x604) = 0;
  *(undefined4 **)((int)this + 0x608) = (undefined4 *)((int)this + 0x5fc);
  *(undefined4 *)((int)this + 0x5fc) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x610) = 0;
  *(undefined4 *)((int)this + 0x620) = 0;
  *(undefined4 *)((int)this + 0x618) = 0;
  *(undefined4 *)((int)this + 0x61c) = 0;
  *(undefined4 **)((int)this + 0x620) = (undefined4 *)((int)this + 0x614);
  *(undefined4 *)((int)this + 0x614) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x628) = 0;
  *(undefined4 *)((int)this + 0x638) = 0;
  *(undefined4 *)((int)this + 0x630) = 0;
  *(undefined4 *)((int)this + 0x634) = 0;
  *(undefined4 **)((int)this + 0x638) = (undefined4 *)((int)this + 0x62c);
  *(undefined4 *)((int)this + 0x62c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x640) = 0;
  *(undefined4 *)((int)this + 0x650) = 0;
  *(undefined4 *)((int)this + 0x648) = 0;
  *(undefined4 *)((int)this + 0x64c) = 0;
  *(undefined4 **)((int)this + 0x650) = (undefined4 *)((int)this + 0x644);
  *(undefined4 *)((int)this + 0x644) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x658) = 0;
  *(undefined4 *)((int)this + 0x668) = 0;
  *(undefined4 *)((int)this + 0x660) = 0;
  *(undefined4 *)((int)this + 0x664) = 0;
  *(undefined4 **)((int)this + 0x668) = (undefined4 *)((int)this + 0x65c);
  *(undefined4 *)((int)this + 0x65c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x670) = 0;
  *(undefined4 *)((int)this + 0x680) = 0;
  *(undefined4 *)((int)this + 0x678) = 0;
  *(undefined4 *)((int)this + 0x67c) = 0;
  *(undefined4 **)((int)this + 0x680) = (undefined4 *)((int)this + 0x674);
  *(undefined4 *)((int)this + 0x674) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x688) = 0;
  *(undefined4 *)((int)this + 0x698) = 0;
  *(undefined4 *)((int)this + 0x690) = 0;
  *(undefined4 *)((int)this + 0x694) = 0;
  *(undefined4 **)((int)this + 0x698) = (undefined4 *)((int)this + 0x68c);
  *(undefined4 *)((int)this + 0x68c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x6a0) = 0;
  *(undefined4 *)((int)this + 0x6b0) = 0;
  *(undefined4 *)((int)this + 0x6a8) = 0;
  *(undefined4 *)((int)this + 0x6ac) = 0;
  *(undefined4 **)((int)this + 0x6b0) = (undefined4 *)((int)this + 0x6a4);
  *(undefined4 *)((int)this + 0x6a4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x6b8) = 0;
  *(undefined4 *)((int)this + 0x6c8) = 0;
  *(undefined4 *)((int)this + 0x6c0) = 0;
  *(undefined4 *)((int)this + 0x6c4) = 0;
  *(undefined4 **)((int)this + 0x6c8) = (undefined4 *)((int)this + 0x6bc);
  *(undefined4 *)((int)this + 0x6bc) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x6d0) = 0;
  *(undefined4 *)((int)this + 0x6e0) = 0;
  *(undefined4 *)((int)this + 0x6d8) = 0;
  *(undefined4 *)((int)this + 0x6dc) = 0;
  *(undefined4 **)((int)this + 0x6e0) = (undefined4 *)((int)this + 0x6d4);
  *(undefined4 *)((int)this + 0x6d4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x6e8) = 0;
  *(undefined4 *)((int)this + 0x6f8) = 0;
  *(undefined4 *)((int)this + 0x6f0) = 0;
  *(undefined4 *)((int)this + 0x6f4) = 0;
  *(undefined4 **)((int)this + 0x6f8) = (undefined4 *)((int)this + 0x6ec);
  *(undefined4 *)((int)this + 0x6ec) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x700) = 0;
  *(undefined4 *)((int)this + 0x710) = 0;
  *(undefined4 *)((int)this + 0x708) = 0;
  *(undefined4 *)((int)this + 0x70c) = 0;
  *(undefined4 **)((int)this + 0x710) = (undefined4 *)((int)this + 0x704);
  *(undefined4 *)((int)this + 0x704) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x718) = 0;
  *(undefined4 *)((int)this + 0x728) = 0;
  *(undefined4 *)((int)this + 0x720) = 0;
  *(undefined4 *)((int)this + 0x724) = 0;
  *(undefined4 **)((int)this + 0x728) = (undefined4 *)((int)this + 0x71c);
  *(undefined4 *)((int)this + 0x71c) = &PTR_LAB_00d4ed68;
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x738) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined4 **)((int)this + 0x740) = (undefined4 *)((int)this + 0x734);
  *(undefined4 *)((int)this + 0x734) = &PTR_LAB_00d4ed68;
  *(undefined4 *)((int)this + 0x748) = 0;
  *(undefined4 *)((int)this + 0x758) = 0;
  *(undefined4 *)((int)this + 0x750) = 0;
  *(undefined4 *)((int)this + 0x754) = 0;
  *(undefined4 **)((int)this + 0x758) = (undefined4 *)((int)this + 0x74c);
  *(undefined4 *)((int)this + 0x74c) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x760) = 0;
  *(undefined4 *)((int)this + 0x770) = 0;
  *(undefined4 *)((int)this + 0x768) = 0;
  *(undefined4 *)((int)this + 0x76c) = 0;
  *(undefined4 **)((int)this + 0x770) = (undefined4 *)((int)this + 0x764);
  *(undefined4 *)((int)this + 0x764) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x778) = 0;
  *(undefined4 *)((int)this + 0x788) = 0;
  *(undefined4 *)((int)this + 0x780) = 0;
  *(undefined4 *)((int)this + 0x784) = 0;
  *(undefined4 **)((int)this + 0x788) = (undefined4 *)((int)this + 0x77c);
  *(undefined4 *)((int)this + 0x77c) = &PTR_FUN_00d341fc;
  *(undefined4 *)((int)this + 0x790) = 0;
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x798) = 0;
  *(undefined4 *)((int)this + 0x79c) = 0;
  *(undefined4 **)((int)this + 0x7a0) = (undefined4 *)((int)this + 0x794);
  *(undefined4 *)((int)this + 0x794) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x7a8) = 0;
  *(undefined4 *)((int)this + 0x7b8) = 0;
  *(undefined4 *)((int)this + 0x7b0) = 0;
  *(undefined4 *)((int)this + 0x7b4) = 0;
  *(undefined4 **)((int)this + 0x7b8) = (undefined4 *)((int)this + 0x7ac);
  *(undefined4 *)((int)this + 0x7ac) = &PTR_LAB_00d4ec0c;
  *(undefined4 *)((int)this + 0x7c0) = 0;
  *(undefined4 *)((int)this + 2000) = 0;
  *(undefined4 *)((int)this + 0x7c8) = 0;
  *(undefined4 *)((int)this + 0x7cc) = 0;
  *(undefined4 **)((int)this + 2000) = (undefined4 *)((int)this + 0x7c4);
  *(undefined4 *)((int)this + 0x7c4) = &PTR_LAB_00d4ec0c;
  *(undefined4 *)((int)this + 0x7d8) = 0;
  *(undefined4 *)((int)this + 0x7e8) = 0;
  *(undefined4 *)((int)this + 0x7e0) = 0;
  *(undefined4 *)((int)this + 0x7e4) = 0;
  *(undefined4 **)((int)this + 0x7e8) = (undefined4 *)((int)this + 0x7dc);
  *(undefined4 *)((int)this + 0x7dc) = &PTR_LAB_00d4ec0c;
  *(undefined4 *)((int)this + 0x7f0) = 0;
  *(undefined4 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x7f8) = 0;
  *(undefined4 *)((int)this + 0x7fc) = 0;
  *(undefined4 **)((int)this + 0x800) = (undefined4 *)((int)this + 0x7f4);
  *(undefined4 *)((int)this + 0x7f4) = &PTR_LAB_00d4ec0c;
  *(undefined4 *)((int)this + 0x808) = 0;
  local_4._0_1_ = 0x2f;
  (*(code *)DAT_0104e464[1])();
  DAT_0104e478 = this;
  (*(code *)*DAT_0104e464)();
  fVar6 = FUN_009b1050(1);
  *(float *)((int)this + 0x448) = (float)fVar6;
  fVar6 = FUN_009b1050(2);
  *(float *)((int)this + 0x44c) = (float)fVar6;
  FUN_0076b480();
  DAT_0104e461 = 0;
  DAT_0105ca70 = &DAT_0104e461;
  DAT_010b9556 = 1;
  pbVar3 = FUN_009de1d0("shadowman.msh",1);
  *(byte **)((int)this + 0x344) = pbVar3;
  FUN_005f0cf0();
  *(undefined1 *)((int)this + 0x450) = DAT_010b9554;
  bVar8 = 1;
  *(undefined1 *)((int)this + 0x451) = DAT_010b9555;
  iVar7 = 3;
  DAT_010b9550 = 1;
  pvVar9 = this;
  this_00 = (void *)FUN_004f3b20();
  FUN_004f98f0(this_00,iVar7,(int)pvVar9,bVar8);
  *(undefined4 *)((int)this + 0x43c) = 0x3f000000;
  *(undefined4 *)((int)this + 0x440) = 0x3f800000;
  *(undefined1 *)((int)this + 0x34b) = param_1;
  DAT_01050b64 = &LAB_00494a40;
  FUN_009a1560(0);
  FUN_009a63a0(0x200,-1);
  FUN_00a28dc0(20.0,0x200,0x120);
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  FUN_0071c290();
  DAT_01050b4c = 1;
  FUN_00424130(DAT_00f87b04,1,0,0);
  pvVar9 = (void *)0x0;
  iVar7 = FUN_0071b2a0();
  FUN_00741d80(this,iVar7,pvVar9);
  FUN_0077e540(this);
  puVar4 = operator_new(0x420);
  local_4._0_1_ = 0x30;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_0076f2d0(puVar4);
  }
  local_4._0_1_ = 0x2f;
  FUN_0073f6e0(this,piVar5);
  *(undefined1 *)((int)this + 0x45a) = 0;
  *(undefined1 *)((int)this + 0x45b) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined1 *)((int)this + 0x45c) = 0;
  *(bool *)((int)this + 0x34a) = DAT_0105be08 < 2;
  puVar4 = operator_new(0x34);
  local_4._0_1_ = 0x31;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_005eea90(puVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,0x2f);
  *(undefined4 **)((int)this + 0x410) = puVar4;
  puVar4 = FUN_00a34900();
  *(undefined4 **)((int)this + 0x34c) = puVar4;
  if (DAT_0104e490 == 0) {
    *(float *)((int)this + 0x3dc) = *(float *)((int)this + 0x3d8) + 160.0;
  }
  *(undefined4 *)((int)this + 0x3d0) = *(undefined4 *)((int)this + 0x3d8);
  *(undefined4 *)((int)this + 0x3d4) = 0x43480000;
  DAT_0104e460 = 1;
  DAT_0104e45d = 1;
  DAT_0104e45f = 1;
  DAT_0104e45e = 1;
  *(undefined1 *)((int)this + 0x349) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0x3f800000;
  FUN_0077bce0((int)this);
  FUN_007737d0((int)this);
  if ((DAT_0104e490 != 0) && (*(char *)((int)this + 0x34b) == '\0')) {
    (**(code **)(*DAT_0104e5d8 + 0x20))(1);
    (**(code **)(*DAT_0104e5d8 + 0xc0))(1);
  }
  FUN_009b1000(1,*(undefined4 *)((int)this + 0x43c),0);
  FUN_009b1000(2,0x3f800000,0);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007843b0 @ 007843b0 ////

int * __cdecl FUN_007843b0(int param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  void *this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iStack_3c;
  undefined4 *puStack_38;
  void *pvStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb1b6;
  local_c = ExceptionList;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xac);
    iVar4 = 0;
    if (iVar2 != param_1 + 0xb8) {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        iVar4 = iVar4 + 1;
      } while (iVar2 != param_1 + 0xb8);
      if (iVar4 != 0) goto LAB_00784401;
    }
    return (int *)0x0;
  }
LAB_00784401:
  DAT_0104e45c = param_2;
  ExceptionList = &local_c;
  (*(code *)DAT_0104e47c[1])();
  DAT_0104e490 = param_1;
  (*(code *)*DAT_0104e47c)();
  uStack_28 = 0x784436;
  this = operator_new(0x80c);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uStack_28 = 0x784455;
    piVar1 = FUN_00783ae0(this,param_4);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104e464[1])();
  DAT_0104e478 = piVar1;
  (*(code *)*DAT_0104e464)();
  iVar2 = *DAT_0104e478;
  uStack_28 = 0x784492;
  uStack_28 = FUN_0071b2a0();
  uStack_2c = 1;
  uStack_30 = 0x78449a;
  (**(code **)(iVar2 + 100))();
  iVar2 = *DAT_0104e478;
  uStack_30 = 0;
  pvStack_34 = (void *)0x7844a9;
  pvStack_34 = (void *)FUN_0071b2a0();
  puStack_38 = (undefined4 *)0x1;
  iStack_3c = 0x7844b1;
  (**(code **)(iVar2 + 0x5c))();
  iStack_3c = DAT_0105c404;
  (**(code **)(*DAT_0104e478 + 0x74))(DAT_0105c400);
  piVar1 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar1 + 0xc))(DAT_0104e478,1);
  if (param_1 != 0) {
    piVar1 = &iStack_3c;
    puVar3 = (undefined4 *)&stack0xffffffdc;
    _Memory = (undefined4 *)0x0;
    iStack_3c = 0;
    iVar2 = FUN_005b25f0(param_1);
    FUN_007563d0(iVar2,puVar3,piVar1);
    puStack_38 = operator_new(0x6a8);
    uStack_2c = 1;
    if (puStack_38 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007593a0(puStack_38);
    }
    uStack_2c = 0xffffffff;
    (*(code *)DAT_0104e4ac[1])();
    DAT_0104e4c0 = puVar3;
    (*(code *)*DAT_0104e4ac)();
    FUN_007590f0(DAT_0104e4c0,_Memory,iStack_3c);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_0077e180();
  ExceptionList = pvStack_34;
  return DAT_0104e478;
}


//// FUNCTION FUN_007845f0 @ 007845f0 ////

int * __thiscall FUN_007845f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00784610 @ 00784610 ////

void __fastcall FUN_00784610(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdb1c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4f8a4;
  param_1[0x14] = &PTR_FUN_00d4f88c;
  local_4 = 0;
  (*(code *)DAT_0104e5c4[1])();
  DAT_0104e5d8 = 0;
  (*(code *)*DAT_0104e5c4)();
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00784770 @ 00784770 ////

undefined4 * __thiscall FUN_00784770(void *this,byte param_1)

{
  FUN_00784610(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WTrailerEditorSceneWin_Tick @ 00784830 ////

/* WARNING: Removing unreachable block (ram,0x007849c1) */

void __fastcall WTrailerEditorSceneWin_Tick(int *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  char acStack_2c [19];
  undefined1 uStack_19;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb1f9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((DAT_0104e458 != 0) && (ExceptionList = &pvStack_c, *(int *)(DAT_0104e458 + 0x358) != 0)) {
    iVar3 = *(int *)(*(int *)(DAT_0104e458 + 0x358) + 0x43c);
    ExceptionList = &pvStack_c;
    pvVar2 = (void *)FUN_0075aa20();
    iVar3 = FUN_0075a190(pvVar2,iVar3);
    if (iVar3 != 0) {
      (**(code **)(*(int *)param_1[0xd1] + 0xc0))(1);
      uVar6 = 1;
      goto LAB_007848a0;
    }
  }
  (**(code **)(*(int *)param_1[0xd1] + 0xc0))(0);
  uVar6 = 0;
LAB_007848a0:
  (**(code **)(*(int *)param_1[0xd2] + 0xc0))(uVar6);
  bVar1 = FUN_00773390(DAT_0104e478);
  if ((bVar1) || (bVar1 = FUN_00773360(DAT_0104e478), bVar1)) {
    (**(code **)(*(int *)param_1[0xd3] + 0xc0))(1);
  }
  else {
    (**(code **)(*(int *)param_1[0xd3] + 0xc0))(0);
  }
  WWindow_Tick(param_1);
  if ((DAT_0104e458 != 0) && (*(int *)(DAT_0104e458 + 0x358) != 0)) {
    iVar3 = *(int *)(*(int *)(DAT_0104e458 + 0x358) + 0x43c);
    pvVar2 = (void *)FUN_0075aa20();
    iVar3 = FUN_0075a190(pvVar2,iVar3);
    if (iVar3 != 0) {
      FUN_006678d0((void *)param_1[0xd1],*(byte *)(iVar3 + 0x3c));
      FUN_006678d0((void *)param_1[0xd2],*(byte *)(iVar3 + 0x3d));
    }
  }
  bVar1 = false;
  if (DAT_0104e478 != 0) {
    bVar1 = FUN_00771410(DAT_0104e478);
  }
  acStack_2c[0] = '\0';
  _strncpy(acStack_2c,"PP Tutorial Clicked",0x13);
  uStack_19 = 0;
  uStack_10 = 0;
  lVar4 = Config_GetOrCreateInt(DAT_0104c7e4,(undefined4 *)&stack0xffffffc8,1);
  if ((lVar4 == 0) || (bVar5 = false, bVar1 != false)) {
    bVar5 = true;
  }
  iVar3 = param_1[0xd6];
  if (bVar5) {
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x328) = 0;
      ExceptionList = pvStack_18;
      return;
    }
  }
  else if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x328) = 0x3f800000;
  }
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_00784b20 @ 00784b20 ////

void __thiscall FUN_00784b20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4f9b8;
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


//// FUNCTION FUN_00784b70 @ 00784b70 ////

void __fastcall FUN_00784b70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4f9b8;
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


//// FUNCTION FUN_00784bc0 @ 00784bc0 ////

int * __fastcall FUN_00784bc0(int *param_1)

{
  int iVar1;
  uint *this;
  undefined4 *puVar2;
  long lVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  void *this_00;
  uint uVar10;
  uint uVar11;
  uint unaff_EDI;
  char *pcVar12;
  char *_Dest;
  char *pcVar13;
  int *_Memory;
  uint uVar14;
  uint uStack_b4;
  undefined1 *_Memory_00;
  int *piVar15;
  char *pcVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined1 **local_7c;
  int *local_78;
  uint *local_74;
  undefined1 *local_70;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [12];
  void *local_54 [2];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb42e;
  pvStack_c = ExceptionList;
  local_7c = (undefined1 **)0x0;
  ExceptionList = &pvStack_c;
  local_78 = param_1;
  FUN_007432f0(param_1);
  uVar18 = 0x41800000;
  local_4 = 0;
  *param_1 = (int)&PTR_FUN_00d4f8a4;
  param_1[0x14] = (int)&PTR_FUN_00d4f88c;
  iVar1 = FUN_0071b2a0();
  FUN_00741a50(param_1,2,iVar1,uVar18);
  uVar18 = 0x41800000;
  iVar1 = FUN_0071b2a0();
  FUN_00741b60(param_1,1,iVar1,uVar18);
  this = operator_new(0x420);
  local_74 = this;
  if (this == (uint *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"mm_launchhelp",0xd);
    local_48 = 0xd;
    local_4c[0xd] = '\0';
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,"button_info.",0xc);
    local_68 = 0xc;
    local_6c[0xc] = '\0';
    local_4 = 3;
    local_7c = (undefined1 **)0x3;
    puVar2 = FUN_009b5030(local_2c,&local_4c);
    local_70 = &stack0xffffff64;
    local_4 = 4;
    local_7c = (undefined1 **)0x7;
    puVar2 = FUN_0069fb10(this,(int *)&local_6c,puVar2,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xd6] = (int)puVar2;
  if ((((uint)local_7c & 4) != 0) &&
     (local_7c = (undefined1 **)((uint)local_7c & 0xfffffffb), 10 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if ((((uint)local_7c & 2) != 0) &&
     (local_7c = (undefined1 **)((uint)local_7c & 0xfffffffd), 0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4 = 0;
  if ((((uint)local_7c & 1) != 0) &&
     (local_7c = (undefined1 **)((uint)local_7c & 0xfffffffe), 0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  piVar17 = param_1;
  (**(code **)(*(int *)param_1[0xd6] + 0x60))();
  pcVar16 = (char *)0x0;
  uVar10 = 0;
  piVar15 = param_1;
  (**(code **)(*(int *)param_1[0xd6] + 100))();
  _Memory_00 = (undefined1 *)0x0;
  uStack_b4 = 0;
  (**(code **)(*(int *)param_1[0xd6] + 0x18))();
  FUN_0073f6e0(param_1,(int *)param_1[0xd6]);
  local_74 = &local_68;
  local_68 = local_68 & 0xffffff00;
  local_70 = (undefined1 *)0x0;
  local_6c = (char *)0x14;
  _strncpy((char *)local_74,"PP Tutorial Clicked",0x13);
  local_70 = (undefined1 *)0x13;
  *(char *)((int)local_74 + 0x13) = '\0';
  local_2c[0]._0_1_ = 8;
  lVar3 = Config_GetOrCreateInt(DAT_0104c7e4,&local_74,1);
  local_2c[0] = (void *)((uint)local_2c[0]._1_3_ << 8);
  if ((char *)0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1[0xd6] + 0x328) = 0x3f800000;
  }
  pvVar4 = operator_new(0x420);
  if (pvVar4 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    piVar17 = (int *)&stack0xffffff78;
    unaff_EDI = 0x14;
    _strncpy((char *)piVar17,"POST_SCENESFX",0xd);
    *(char *)((int)piVar17 + 0xd) = '\0';
    local_74 = &local_68;
    uVar10 = uVar10 | 8;
    local_68 = local_68 & 0xffffff00;
    local_70 = (undefined1 *)0x0;
    local_6c = (char *)0x14;
    _strncpy((char *)local_74,"button_mumble.",0xe);
    local_70 = (undefined1 *)0xe;
    *(char *)((int)local_74 + 0xe) = '\0';
    uVar10 = uVar10 | 0x10;
    local_2c[0] = (void *)0xb;
    puVar2 = FUN_009b5030(local_54,(undefined4 *)&stack0xffffff6c);
    pcVar16 = &stack0xffffff3c;
    uVar10 = uVar10 | 0x20;
    local_2c[0] = (void *)0xc;
    puVar2 = FUN_0069fb10(pvVar4,(int *)&local_74,puVar2,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xd5] = (int)puVar2;
  if (((uVar10 & 0x20) != 0) && (uVar10 = uVar10 & 0xffffffdf, &lpType_0000000a < local_4c)) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0]);
  }
  if (((uVar10 & 0x10) != 0) && (uVar10 = uVar10 & 0xffffffef, (char *)0x14 < local_6c)) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  local_2c[0] = (void *)0x0;
  if (((uVar10 & 8) != 0) && (0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar17);
  }
  piVar5 = param_1;
  (**(code **)(*(int *)param_1[0xd5] + 0x60))();
  pcVar8 = (char *)param_1[0xd6];
  uVar10 = 2;
  (**(code **)(*(int *)param_1[0xd5] + 100))();
  _Memory = param_1;
  (**(code **)(*(int *)param_1[0xd5] + 0x18))();
  FUN_0073f6e0(param_1,(int *)param_1[0xd5]);
  pvVar4 = operator_new(0x3ac);
  if (pvVar4 == (void *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    uStack_b4 = 0x40;
    piVar5 = _malloc(0x40);
    _strncpy((char *)piVar5,"ui/postproc/button_fadein_off.dds",0x21);
    *(char *)((int)piVar5 + 0x21) = '\0';
    uVar10 = uVar10 | 0x40;
    piVar17 = (int *)0x40;
    pcVar16 = _malloc(0x40);
    _strncpy(pcVar16,"ui/postproc/button_fadein_on.dds",0x20);
    pcVar16[0x20] = '\0';
    uVar10 = uVar10 | 0x80;
    local_7c = &local_70;
    local_70 = (undefined1 *)((uint)local_70 & 0xffff0000);
    local_78 = (int *)0x0;
    local_74 = (uint *)&lpType_0000000a;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_7c,(wchar_t *)&lpCaption_00d16918,uVar6);
    uVar10 = uVar10 | 0x100;
    local_54[0] = (void *)0x13;
    piVar7 = FUN_00667c80(pvVar4,&local_7c,(undefined4 *)&stack0xffffff64,
                          (undefined4 *)&stack0xffffff44);
  }
  param_1[0xd1] = (int)piVar7;
  if (((uVar10 & 0x100) != 0) && (uVar10 = uVar10 & 0xfffffeff, &lpType_0000000a < local_74)) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  if (((char)uVar10 < '\0') && (uVar10 = uVar10 & 0xffffff7f, &DAT_00000014 < piVar17)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar16);
  }
  local_54[0] = (void *)0x0;
  if (((uVar10 & 0x40) != 0) && (uVar10 = uVar10 & 0xffffffbf, 0x14 < uStack_b4)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar5);
  }
  uVar6 = 0x40;
  pcVar16 = _malloc(0x40);
  _strncpy(pcVar16,"ui/postproc/button_fadein_off_d.dds",0x23);
  pcVar16[0x23] = '\0';
  local_54[0]._0_1_ = 0x17;
  FUN_006679e0((void *)param_1[0xd1],(undefined4 *)&stack0xffffff64);
  local_54[0] = (void *)((uint)local_54[0]._1_3_ << 8);
  if (0x14 < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar16);
  }
  uVar6 = 0;
  pcVar13 = (char *)0x2;
  piVar17 = param_1;
  (**(code **)(*(int *)param_1[0xd1] + 0x60))();
  _Dest = (char *)0x2;
  (**(code **)(*(int *)param_1[0xd1] + 100))();
  FUN_006677f0((void *)param_1[0xd1],0x42200000);
  pcVar12 = "TRAILEREDSCENEWIN_FADEIN";
  (**(code **)(*(int *)param_1[0xd1] + 0x18))();
  pcVar16 = &stack0xffffff48;
  _strncpy(pcVar16,"FADE_IN",7);
  uVar14 = 7;
  pcVar16[7] = '\0';
  local_7c._0_1_ = 0x18;
  FUN_009b5030((undefined4 *)&stack0xffffff5c,(undefined4 *)&stack0xffffff3c);
  local_7c = (undefined1 **)CONCAT31(local_7c._1_3_,0x19);
  (**(code **)(*(int *)param_1[0xd1] + 0x90))();
  if (&lpType_0000000a < piVar15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  if (0x14 < uVar14) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar8);
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xd1]);
  pvVar4 = operator_new(0x3ac);
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar6 = 0x40;
    pcVar13 = _malloc(0x40);
    _strncpy(pcVar13,"ui/postproc/button_fadeout_off.dds",0x22);
    piVar17 = (int *)0x0;
    pcVar13[0x22] = '\0';
    uVar11 = (uint)pcVar12 | 0x200;
    uVar14 = 0x40;
    pcVar8 = _malloc(0x40);
    _strncpy(pcVar8,"ui/postproc/button_fadeout_on.dds",0x21);
    pcVar8[0x21] = '\0';
    uVar11 = uVar11 | 0x400;
    _Memory_00 = &stack0xffffff64;
    piVar15 = (int *)&lpType_0000000a;
    uVar9 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff58,(wchar_t *)&lpCaption_00d16918,uVar9);
    pcVar12 = (char *)(uVar11 | 0x800);
    piVar5 = FUN_00667c80(pvVar4,&stack0xffffff58,(undefined4 *)&stack0xffffff38,
                          (undefined4 *)&stack0xffffff18);
  }
  param_1[0xd2] = (int)piVar5;
  if ((((uint)pcVar12 & 0x800) != 0) &&
     (pcVar12 = (char *)((uint)pcVar12 & 0xfffff7ff), &lpType_0000000a < piVar15)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  if ((((uint)pcVar12 & 0x400) != 0) &&
     (pcVar12 = (char *)((uint)pcVar12 & 0xfffffbff), 0x14 < uVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar8);
  }
  if ((((uint)pcVar12 & 0x200) != 0) && (0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar13);
  }
  uVar6 = 0x40;
  pcVar16 = _malloc(0x40);
  _strncpy(pcVar16,"ui/postproc/button_fadeout_off_d.dds",0x24);
  pcVar16[0x24] = '\0';
  FUN_006679e0((void *)param_1[0xd2],(undefined4 *)&stack0xffffff38);
  if (0x14 < uVar6) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar16);
  }
  uVar6 = 0;
  pcVar8 = (char *)0x2;
  (**(code **)(*(int *)param_1[0xd2] + 0x60))();
  (**(code **)(*(int *)param_1[0xd2] + 100))();
  FUN_006677f0((void *)param_1[0xd2],0x42200000);
  pcVar13 = "TRAILEREDSCENEWIN_FADEOUT";
  (**(code **)(*(int *)param_1[0xd2] + 0x18))();
  pcVar16 = &stack0xffffff1c;
  pvVar4 = (void *)((uint)piVar17 & 0xffffff00);
  _strncpy(pcVar16,"FADE_OUT",8);
  uVar14 = 8;
  pcVar16[8] = '\0';
  FUN_009b5030((undefined4 *)&stack0xffffff30,(undefined4 *)&stack0xffffff10);
  (**(code **)(*(int *)param_1[0xd2] + 0x90))();
  if (10 < uVar10) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (0x14 < uVar14) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xd2]);
  this_00 = operator_new(0x420);
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcVar8 = &stack0xfffffef8;
    uVar6 = 0x14;
    _strncpy(pcVar8,"POST_TRAILER_STYLE",0x12);
    pcVar8[0x12] = '\0';
    uVar11 = (uint)pcVar13 | 0x1000;
    uVar14 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"postproc/button_titles.",0x17);
    _Dest[0x17] = '\0';
    uVar11 = uVar11 | 0x2000;
    puVar2 = FUN_009b5030((undefined4 *)&stack0xffffff2c,(undefined4 *)&stack0xfffffeec);
    pcVar13 = (char *)(uVar11 | 0x4000);
    puVar2 = FUN_0069fb10(this_00,(int *)&stack0xffffff0c,puVar2,0x42200000,0x42200000,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xd3] = (int)puVar2;
  if ((((uint)pcVar13 & 0x4000) != 0) &&
     (pcVar13 = (char *)((uint)pcVar13 & 0xffffbfff), 10 < uVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((((uint)pcVar13 & 0x2000) != 0) &&
     (pcVar13 = (char *)((uint)pcVar13 & 0xffffdfff), 0x14 < uVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  if ((((uint)pcVar13 & 0x1000) != 0) && (0x14 < uVar6)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar8);
  }
  (**(code **)(*(int *)param_1[0xd3] + 0x60))();
  (**(code **)(*(int *)param_1[0xd3] + 100))(2,param_1[0xd2]);
  (**(code **)(*(int *)param_1[0xd3] + 0x18))(0,&LAB_007846e0,param_1,0);
  FUN_0073f6e0(param_1,(int *)param_1[0xd3]);
  FUN_0073f500(param_1);
  (**(code **)(*DAT_0104e478 + 0xc))(param_1,1);
  ExceptionList = pvVar4;
  return param_1;
}


//// FUNCTION FUN_00785840 @ 00785840 ////

void FUN_00785840(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104e5d8;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb44b;
  pvStack_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104e5d8 != (undefined4 *)0x0) {
    iVar1 = DAT_0104e5d8[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104e5d8[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104e5c4[1])();
    DAT_0104e5d8 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e5c4)();
  }
  piVar3 = operator_new(0x35c);
  uStack_4 = 0;
  if (piVar3 != (int *)0x0) {
    piVar4 = FUN_00784bc0(piVar3);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104e5c4[1])();
  DAT_0104e5d8 = piVar4;
  (*(code *)*DAT_0104e5c4)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00785aa0 @ 00785aa0 ////

undefined4 FUN_00785aa0(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  int extraout_EDX;
  int iVar4;
  void *unaff_ESI;
  uint uStack_24;
  
  PlaySoundA((LPCSTR)0x0,(HMODULE)0x0,0);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x58))();
  FUN_004036d0(&PTR_DAT_00e5986c,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  FUN_004015d0(&PTR_DAT_00e5988c,(char *)param_1[0x11c],param_1[0x11d]);
  DAT_0104e5dc = param_1[0x124];
  (**(code **)(**(int **)(DAT_0104e5f4 + 0x3a8) + 0xc0))(1);
  iVar4 = extraout_EDX;
  if (*(int *)(DAT_0104e5f4 + 0x3b0) != 0) {
    FUN_009b11d0(*(int *)(DAT_0104e5f4 + 0x3b0));
    iVar4 = DAT_0104e5f4;
    *(undefined4 *)(DAT_0104e5f4 + 0x3b0) = 0;
  }
  bVar1 = FUN_0073e890((int)param_1,iVar4);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    FUN_009b01a0(PTR_DAT_00e5988c);
    iVar4 = DAT_0104e5f4;
    uVar3 = FUN_009b1530(&stack0xffffffd0,0xffffffff,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
    *(undefined4 *)(iVar4 + 0x3b0) = uVar3;
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00785c20 @ 00785c20 ////

/* WARNING: Removing unreachable block (ram,0x00785d46) */

void __fastcall FUN_00785c20(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *_Source;
  wchar_t *_Source_00;
  void *pvVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  uint in_stack_ffffff54;
  undefined4 uVar12;
  void *pvVar13;
  wchar_t *pwVar14;
  undefined4 uVar15;
  uint local_84;
  wchar_t *local_6c;
  uint local_64;
  wchar_t local_60 [10];
  char *pcStack_4c;
  uint uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb47b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00a35cf0(DAT_0105cc70,"SFX_GROUPS");
  if (uVar2 != 0) {
    uVar3 = FUN_00a35d60(DAT_0105cc70,uVar2);
    local_84 = 0;
    if (uVar3 != 0) {
      do {
        iVar4 = FUN_00a35db0(DAT_0105cc70,uVar2,local_84);
        _Source = (char *)FUN_00a35e70(DAT_0105cc70,iVar4);
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        pcVar7 = _Source;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(_Source + 1);
        if (0x13 < uVar8) {
          local_24 = uVar8 + 0x20 & 0xffffffe0;
          local_2c = _malloc(local_24);
        }
        _strncpy(local_2c,_Source,uVar8);
        local_2c[uVar8] = '\0';
        local_4 = 0;
        local_28 = uVar8;
        _Source_00 = (wchar_t *)FUN_00a35e50(DAT_0105cc70,iVar4);
        local_6c = local_60;
        local_60[0] = L'\0';
        local_64 = 10;
        uVar8 = FUN_00ace02d(_Source_00);
        if (9 < uVar8) {
          local_64 = uVar8 + 0x20 & 0xffffffe0;
          local_6c = _malloc(local_64 * 2);
        }
        pwVar14 = local_6c;
        _wcsncpy(local_6c,_Source_00,uVar8);
        local_6c[uVar8] = L'\0';
        pvVar13 = (void *)0x49c;
        local_4._0_1_ = 1;
        uVar12 = 0x785d9a;
        pvVar5 = operator_new(0x49c);
        local_4._0_1_ = 2;
        if (pvVar5 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar15 = 3;
          puVar9 = &stack0xffffff54;
          in_stack_ffffff54 = in_stack_ffffff54 & 0xffff0000;
          uVar10 = 0;
          uVar11 = 10;
          FUN_004036d0(&stack0xffffff48,local_6c,uVar8);
          puVar6 = FUN_00787b10(pvVar5,puVar9,uVar10,uVar11,in_stack_ffffff54,uVar12,pvVar13,pwVar14
                                ,_Source_00,uVar15);
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        (**(code **)(**(int **)(param_1 + 0x3f4) + 0xfc))();
        uVar8 = local_28;
        pcVar7 = local_2c;
        pcStack_4c = acStack_40;
        acStack_40[0] = '\0';
        uStack_48 = 0;
        uStack_44 = 0x14;
        if (0x13 < local_28) {
          uStack_44 = local_28 + 0x20 & 0xffffffe0;
          pcStack_4c = _malloc(uStack_44);
        }
        _strncpy(pcStack_4c,pcVar7,uVar8);
        pcVar7 = pcStack_4c;
        uStack_48 = uVar8;
        pcStack_4c[uVar8] = '\0';
        if ((uint)puVar6[0x11e] <= uVar8) {
          if (0x14 < (uint)puVar6[0x11e]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar6[0x11c]);
          }
          uVar11 = uVar8 + 0x20 & 0xffffffe0;
          puVar6[0x11e] = uVar11;
          pvVar5 = _malloc(uVar11);
          puVar6[0x11c] = pvVar5;
        }
        _strncpy((char *)puVar6[0x11c],pcVar7,uVar8);
        puVar6[0x11d] = uVar8;
        *(undefined1 *)(uVar8 + puVar6[0x11c]) = 0;
        puVar6[0x124] = 0;
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_4c);
        }
        if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_84 = local_84 + 1;
      } while (local_84 < uVar3);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00785f40 @ 00785f40 ////

void __thiscall FUN_00785f40(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4fb4c;
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


//// FUNCTION FUN_00785f90 @ 00785f90 ////

void __fastcall FUN_00785f90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4fb4c;
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


//// FUNCTION FUN_00785fe0 @ 00785fe0 ////

void __fastcall FUN_00785fe0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *unaff_EBX;
  undefined1 local_20 [4];
  uint uStack_1c;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x58))(local_20);
  iVar2 = _wcscmp((wchar_t *)*puVar1,(wchar_t *)PTR_DAT_00e5986c);
  if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 200))(1);
  }
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_00786040 @ 00786040 ////

void __fastcall FUN_00786040(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdb4b4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4fb74;
  param_1[0x14] = &PTR_LAB_00d4fb5c;
  local_4 = 2;
  FUN_004036d0(&DAT_0104e5f8,(wchar_t *)param_1[0xed],param_1[0xee]);
  FUN_004015d0(&DAT_0104e618,(char *)param_1[0xf5],param_1[0xf6]);
  (*(code *)DAT_0104e5e0[1])();
  DAT_0104e5f4 = 0;
  (*(code *)*DAT_0104e5e0)();
  PlaySoundA((LPCSTR)0x0,(HMODULE)0x0,0);
  FUN_009b11d0(param_1[0xec]);
  if (0x14 < (uint)param_1[0xf7]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf5]);
  }
  if (10 < (uint)param_1[0xef]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xed]);
  }
  local_4 = 0xffffffff;
  FUN_00667fe0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00786330 @ 00786330 ////

undefined4 * __cdecl FUN_00786330(undefined4 *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdb4f8;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00567ff0(local_2c);
  FUN_0040cae0(&local_4c,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"\\The Movies\\Movie Sounds\\");
  FUN_0040cae0(&local_4c,L"\\The Movies\\Movie Sounds\\",sVar2);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
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


//// FUNCTION FUN_00786620 @ 00786620 ////

undefined4 * __thiscall FUN_00786620(void *this,byte param_1)

{
  FUN_00786040(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00786640 @ 00786640 ////

void __fastcall FUN_00786640(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  void *pvVar4;
  uint uVar5;
  uint unaff_EBX;
  int iStack_118;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *_Dest;
  char *pcVar10;
  uint uStack_e4;
  void *pvStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  void *pvVar11;
  undefined2 **ppuVar12;
  void *local_9c;
  char *pcStack_98;
  uint uStack_94;
  uint uStack_90;
  char acStack_8c [20];
  undefined1 *puStack_78;
  uint *puStack_74;
  undefined1 *local_70;
  uint uStack_6c;
  uint local_68 [5];
  uint *puStack_54;
  char *local_50;
  uint local_4c;
  uint local_48;
  char local_44 [16];
  void *pvStack_34;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cdb682;
  pvStack_c = ExceptionList;
  local_9c = (void *)0x0;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_50 = local_44;
  local_4 = 0;
  local_44[0] = '\0';
  local_4c = 0;
  local_48 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_50,"POST_WAVE_FILE",0xe);
  local_4c = 0xe;
  local_50[0xe] = '\0';
  local_4._0_1_ = 1;
  puVar2 = FUN_009b5030(&local_70,&local_50);
  sVar3 = FUN_00ace02d(L"<P ALIGN\t= CENTER>");
  FUN_0040cae0(&local_2c,L"<P ALIGN\t= CENTER>",sVar3);
  FUN_0040cae0(&local_2c,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L"</P>");
  FUN_0040cae0(&local_2c,L"</P>",sVar3);
  if (10 < local_68[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  ppuVar12 = &local_2c;
  (**(code **)(*param_1 + 0x54))();
  pvVar4 = operator_new(0x420);
  pvStack_34 = pvVar4;
  if (pvVar4 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puStack_74 = local_68;
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = (undefined1 *)0x0;
    uStack_6c = 0x14;
    _strncpy((char *)puStack_74,"button_ok",9);
    local_70 = &DAT_00000009;
    *(char *)((int)puStack_74 + 9) = '\0';
    puStack_54 = &local_48;
    local_48 = local_48 & 0xffffff00;
    local_50 = (char *)0x0;
    local_4c = 0x14;
    _strncpy((char *)puStack_54,"button_tick.",0xc);
    local_50 = (char *)0xc;
    *(char *)(puStack_54 + 3) = '\0';
    puStack_8 = (undefined1 *)0x4;
    uStack_d4 = 0x786818;
    puVar2 = FUN_009b5030(&local_9c,&puStack_74);
    puStack_78 = &stack0xffffff40;
    puStack_8 = (undefined1 *)0x5;
    unaff_EBX = 7;
    uStack_d4 = 0x78685b;
    puVar2 = FUN_0069fb10(pvVar4,(int *)&puStack_54,puVar2,0x42400000,0x42400000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xea] = (int)puVar2;
  if (((unaff_EBX & 4) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffb, 10 < uStack_94)) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  if (((unaff_EBX & 2) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffd, 0x14 < local_4c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_54);
  }
  puStack_8 = (undefined1 *)0x0;
  if (((unaff_EBX & 1) != 0) && (0x14 < uStack_6c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_74);
  }
  pvVar11 = (void *)0x0;
  piVar6 = param_1;
  (**(code **)(*(int *)param_1[0xea] + 0x18))();
  uStack_d4 = 0x786911;
  (**(code **)(*(int *)param_1[0xea] + 0x18))();
  uStack_d8 = param_1[0xdb];
  uStack_d4 = 0x41200000;
  uStack_dc = 2;
  pvStack_e0 = (void *)0x78692a;
  (**(code **)(*(int *)param_1[0xea] + 0x60))();
  uStack_e4 = param_1[0xdb];
  pvStack_e0 = (void *)0x41000000;
  (**(code **)(*(int *)param_1[0xea] + 0x68))();
  (**(code **)(*(int *)param_1[0xea] + 0xc0))();
  (**(code **)(*(int *)param_1[0xdb] + 0xc))();
  pvVar4 = operator_new(0x420);
  if (pvVar4 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcStack_98 = acStack_8c;
    acStack_8c[0] = '\0';
    uStack_94 = 0;
    uStack_90 = 0x14;
    _strncpy(pcStack_98,"button_cancel",0xd);
    uStack_94 = 0xd;
    pcStack_98[0xd] = '\0';
    piVar6 = (int *)&stack0xffffff54;
    ppuVar12 = (undefined2 **)&DAT_00000014;
    _strncpy((char *)piVar6,"button_quit.",0xc);
    *(char *)(piVar6 + 3) = '\0';
    local_4c = 0xb;
    iStack_118 = 0x786a15;
    puVar2 = FUN_009b5030(&pvStack_e0,&pcStack_98);
    puStack_78 = &stack0xfffffefc;
    uStack_e4 = uStack_e4 | 0x38;
    local_4c = 0xc;
    iStack_118 = 0x786a5e;
    puVar2 = FUN_0069fb10(pvVar4,(int *)&stack0xffffff48,puVar2,0x42400000,0x42400000,0,0,0x3f800000
                          ,0x3f800000);
  }
  param_1[0x100] = (int)puVar2;
  if (((uStack_e4 & 0x20) != 0) && (uStack_e4 = uStack_e4 & 0xffffffdf, 10 < uStack_d8)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_e0);
  }
  if (((uStack_e4 & 0x10) != 0) && (uStack_e4 = uStack_e4 & 0xffffffef, &DAT_00000014 < ppuVar12)) {
                    /* WARNING: Subroutine does not return */
    _free(piVar6);
  }
  local_4c = 0;
  if (((uStack_e4 & 8) != 0) && (0x14 < uStack_90)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_98);
  }
  pcVar10 = "WAVBBROWSER_CANCEL";
  (**(code **)(*(int *)param_1[0x100] + 0x18))();
  iStack_118 = 0x786b14;
  (**(code **)(*(int *)param_1[0x100] + 0x18))();
  iStack_118 = 0x41200000;
  (**(code **)(*(int *)param_1[0x100] + 0x5c))(1);
  uVar5 = 0;
  (**(code **)(*(int *)param_1[0x100] + 0x68))(2,param_1[0xdb],0x41000000);
  (**(code **)(*(int *)param_1[0xdb] + 0xc))(param_1[0x100],1);
  puVar2 = operator_new(0x358);
  acStack_8c[0] = '\x10';
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0071eda0(puVar2);
  }
  param_1[0xeb] = (int)puVar2;
  puVar2[0xd1] = puVar2[0xd1] & 0xfffffff7 | 4;
  *(uint *)(param_1[0xeb] + 0x344) = *(uint *)(param_1[0xeb] + 0x344) & 0xfffffffc;
  iVar7 = param_1[0xdb];
  iStack_118 = 0;
  piVar6 = (int *)0x0;
  if (iVar7 != 0) {
    piVar6 = (int *)(iVar7 + 0x18);
    iStack_118 = *piVar6;
    *(int **)(*piVar6 + 4) = &iStack_118;
    *piVar6 = (int)&iStack_118;
  }
  uVar8 = 0x41400000;
  uVar9 = 0x41400000;
  iVar1 = param_1[0xeb];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  acStack_8c[0] = '\x11';
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(int *)(iVar1 + 0xb8) = iVar7;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar8;
  *(undefined4 *)(iVar1 + 0xc0) = uVar9;
  if (piVar6 != (int *)0x0) {
    *piVar6 = iStack_118;
  }
  if (iStack_118 != 0) {
    *(int **)(iStack_118 + 4) = piVar6;
  }
  iVar7 = param_1[0xdb];
  iStack_118 = 0;
  piVar6 = (int *)0x0;
  if (iVar7 != 0) {
    piVar6 = (int *)(iVar7 + 0x18);
    iStack_118 = *piVar6;
    *(int **)(*piVar6 + 4) = &iStack_118;
    *piVar6 = (int)&iStack_118;
  }
  uVar8 = 0x41400000;
  uVar9 = 0x41400000;
  iVar1 = param_1[0xeb];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  acStack_8c[0] = '\x12';
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(int *)(iVar1 + 0x100) = iVar7;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uVar8;
  *(undefined4 *)(iVar1 + 0x108) = uVar9;
  if (piVar6 != (int *)0x0) {
    *piVar6 = iStack_118;
  }
  if (iStack_118 != 0) {
    *(int **)(iStack_118 + 4) = piVar6;
  }
  iVar7 = param_1[0xdb];
  iStack_118 = 0;
  piVar6 = (int *)0x0;
  if (iVar7 != 0) {
    piVar6 = (int *)(iVar7 + 0x18);
    iStack_118 = *piVar6;
    *(int **)(*piVar6 + 4) = &iStack_118;
    *piVar6 = (int)&iStack_118;
  }
  uVar8 = 0x41400000;
  uVar9 = 0x41400000;
  iVar1 = param_1[0xeb];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  acStack_8c[0] = '\x13';
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(int *)(iVar1 + 0x94) = iVar7;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar8;
  *(undefined4 *)(iVar1 + 0x9c) = uVar9;
  if (piVar6 != (int *)0x0) {
    *piVar6 = iStack_118;
  }
  if (iStack_118 != 0) {
    *(int **)(iStack_118 + 4) = piVar6;
  }
  iVar7 = param_1[0x100];
  iStack_118 = 0;
  piVar6 = (int *)0x0;
  if (iVar7 != 0) {
    piVar6 = (int *)(iVar7 + 0x18);
    iStack_118 = *piVar6;
    *(int **)(*piVar6 + 4) = &iStack_118;
    *piVar6 = (int)&iStack_118;
  }
  uVar8 = 0xc1400000;
  _Dest = (char *)0xc1400000;
  iVar1 = param_1[0xeb];
  *(undefined4 *)(iVar1 + 0xc4) = 1;
  acStack_8c[0] = '\x14';
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(int *)(iVar1 + 0xdc) = iVar7;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uVar8;
  *(char **)(iVar1 + 0xe4) = _Dest;
  acStack_8c[0] = '\0';
  if (piVar6 != (int *)0x0) {
    *piVar6 = iStack_118;
  }
  if (iStack_118 != 0) {
    *(int **)(iStack_118 + 4) = piVar6;
  }
  (**(code **)(*(int *)param_1[0xdb] + 0xc))(param_1[0xeb],1);
  pvVar4 = operator_new(0x2a8);
  if (pvVar4 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcVar10 = (char *)0x40;
    _Dest = _malloc(0x40);
    _strncpy(_Dest,"ui/pcgui_dialogue_whitething.dds",0x20);
    _Dest[0x20] = '\0';
    uVar5 = uVar5 | 0x40;
    uStack_94 = CONCAT31(uStack_94._1_3_,0x16);
    puVar2 = FUN_005e73e0(pvVar4,(undefined4 *)&stack0xffffff00);
  }
  uStack_94 = 0;
  if (((uVar5 & 0x40) != 0) && ((char *)0x14 < pcVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  (**(code **)(*(int *)param_1[0xeb] + 0xa0))(puVar2);
  pvVar4 = operator_new(0x3c0);
  pcStack_98._0_1_ = 0x18;
  if (pvVar4 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_006b4f50(pvVar4,1,1);
  }
  param_1[0xfd] = (int)piVar6;
  pcStack_98 = (char *)((uint)pcStack_98._1_3_ << 8);
  (**(code **)(*piVar6 + 0x5c))(1,*(undefined4 *)(param_1[0xeb] + 0x348),0);
  (**(code **)(*(int *)param_1[0xfd] + 100))(1,*(undefined4 *)(param_1[0xeb] + 0x348),0);
  (**(code **)(**(int **)(param_1[0xeb] + 0x348) + 0xc))(param_1[0xfd],1);
  if (10 < uStack_d8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_e0);
  }
  ExceptionList = pvVar11;
  return;
}


//// FUNCTION FUN_00787000 @ 00787000 ////

/* WARNING: Removing unreachable block (ram,0x007871dc) */
/* WARNING: Removing unreachable block (ram,0x007871f1) */
/* WARNING: Removing unreachable block (ram,0x0078729a) */
/* WARNING: Removing unreachable block (ram,0x0078722f) */
/* WARNING: Removing unreachable block (ram,0x00787259) */
/* WARNING: Removing unreachable block (ram,0x00787273) */
/* WARNING: Removing unreachable block (ram,0x0078729c) */
/* WARNING: Removing unreachable block (ram,0x007872c2) */
/* WARNING: Removing unreachable block (ram,0x007872cf) */
/* WARNING: Removing unreachable block (ram,0x00787458) */
/* WARNING: Removing unreachable block (ram,0x00787462) */
/* WARNING: Removing unreachable block (ram,0x00787480) */
/* WARNING: Removing unreachable block (ram,0x00787464) */
/* WARNING: Removing unreachable block (ram,0x0078746a) */
/* WARNING: Removing unreachable block (ram,0x00787479) */

void __fastcall FUN_00787000(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *_Source;
  wchar_t awStack_110 [4];
  undefined4 uStack_108;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint in_stack_ffffff14;
  undefined4 in_stack_ffffff18;
  void *pvVar10;
  undefined4 uVar11;
  wchar_t *pwVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  wchar_t *pwStack_a0;
  uint uStack_9c;
  uint uStack_98;
  wchar_t awStack_94 [10];
  void *apvStack_80 [2];
  uint uStack_78;
  undefined4 auStack_60 [16];
  undefined1 uStack_20;
  int iStack_18;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb6e0;
  pvStack_c = ExceptionList;
  pvVar10 = (void *)0x787030;
  ExceptionList = &pvStack_c;
  PlaySoundA((LPCSTR)0x0,(HMODULE)0x0,0);
  FUN_009b11d0(*(undefined4 *)(param_1 + 0x3b0));
  (**(code **)(**(int **)(param_1 + 0x3f4) + 0xa8))();
  if (*(int *)(param_1 + 0x3b8) == 0) {
    FUN_00785c20(param_1);
  }
  pwStack_a0 = awStack_94;
  awStack_94[0] = L'\0';
  uStack_9c = 0;
  uStack_98 = 10;
  iStack_4 = 0;
  puVar1 = FUN_00786330(apvStack_80);
  FUN_0040cae0(&pwStack_a0,(wchar_t *)*puVar1,puVar1[1]);
  uVar11 = 0x7870b1;
  FUN_0040cae0(&pwStack_a0,*(wchar_t **)(param_1 + 0x3b4),*(size_t *)(param_1 + 0x3b8));
  if (10 < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_80[0]);
  }
  if (*(int *)(param_1 + 0x3b8) != 0) {
    uVar13 = 0x7870d6;
    pvVar2 = operator_new(0x49c);
    iStack_4._0_1_ = 1;
    if (pvVar2 != (void *)0x0) {
      uVar14 = 2;
      puVar6 = &stack0xffffff14;
      in_stack_ffffff14 = in_stack_ffffff14 & 0xffff0000;
      uVar7 = 0;
      uVar8 = 10;
      uVar3 = FUN_00ace02d((short *)&DAT_00d4d3b0);
      FUN_004036d0(&stack0xffffff08,L"..",uVar3);
      FUN_00787b10(pvVar2,puVar6,uVar7,uVar8,in_stack_ffffff14,in_stack_ffffff18,pvVar10,uVar11,
                   uVar13,uVar14);
    }
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    (**(code **)(**(int **)(param_1 + 0x3f4) + 0xfc))();
  }
  iStack_4._0_1_ = 2;
  in_stack_ffffff14 = in_stack_ffffff14 & 0xffff0000;
  uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&stack0xffffff08,(wchar_t *)&lpCaption_00d16918,uVar3);
  pwVar5 = awStack_110;
  awStack_110[0] = L'\0';
  uVar11 = 0;
  uVar3 = 10;
  FUN_004036d0(&stack0xfffffee4,pwStack_a0,uStack_9c);
  FUN_009f2ac0(pwVar5,uVar11,uVar3);
  FUN_009f2760(auStack_60);
  iStack_4 = CONCAT31(iStack_4._1_3_,5);
  uStack_20 = 0;
  FUN_009f34b0(auStack_60,L".wav",pwStack_a0);
  FUN_009f34b0(auStack_60,L".ogg",pwStack_a0);
  FUN_009f34b0(auStack_60,L".wma",pwStack_a0);
  for (uVar3 = 0; (iStack_18 != 0 && (uVar3 < (uint)(iStack_14 - iStack_18 >> 2)));
      uVar3 = uVar3 + 1) {
    pwVar5 = *(wchar_t **)(iStack_18 + uVar3 * 4);
    pvVar10 = operator_new(0x49c);
    iStack_4._0_1_ = 6;
    if (pvVar10 != (void *)0x0) {
      uVar13 = 0;
      uVar11 = 0x5c;
      pvVar2 = (void *)0x787392;
      pwVar12 = pwVar5;
      pwVar4 = _wcsrchr(pwVar5,L'\\');
      _Source = pwVar4 + 1;
      if (pwVar4 == (wchar_t *)0x0) {
        _Source = pwVar5;
      }
      pwVar5 = (wchar_t *)&stack0xffffff14;
      in_stack_ffffff14 = in_stack_ffffff14 & 0xffff0000;
      uVar9 = 10;
      uVar8 = FUN_00ace02d(_Source);
      if (uVar9 <= uVar8) {
        if (10 < uVar9) {
                    /* WARNING: Subroutine does not return */
          _free(pwVar5);
        }
        uVar9 = uVar8 + 0x20 & 0xffffffe0;
        pwVar5 = _malloc(uVar9 * 2);
      }
      uStack_108 = 0x7873ff;
      _wcsncpy(pwVar5,_Source,uVar8);
      pwVar5[uVar8] = L'\0';
      FUN_00787b10(pvVar10,pwVar5,uVar8,uVar9,in_stack_ffffff14,in_stack_ffffff18,pvVar2,pwVar12,
                   uVar11,uVar13);
    }
    iStack_4 = CONCAT31(iStack_4._1_3_,5);
    (**(code **)(**(int **)(param_1 + 0x3f4) + 0xfc))();
  }
  iStack_4 = CONCAT31(iStack_4._1_3_,2);
  FUN_009f2320(auStack_60);
  if (uStack_98 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pwStack_a0);
}


//// FUNCTION FUN_007874d0 @ 007874d0 ////

undefined4 FUN_007874d0(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  wchar_t *unaff_EBX;
  undefined2 *local_6c;
  uint local_68;
  undefined4 local_64;
  undefined2 local_60 [8];
  wchar_t *pwStack_50;
  undefined2 *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined2 local_40 [8];
  void *pvStack_30;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb700;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  PlaySoundA((LPCSTR)0x0,(HMODULE)0x0,0);
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  FUN_004036d0(&local_6c,*(wchar_t **)(DAT_0104e5f4 + 0x3b4),*(uint *)(DAT_0104e5f4 + 0x3b8));
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  uVar1 = FUN_00ace02d((short *)&DAT_00d4d3b0);
  FUN_004036d0(&local_4c,L"..",uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x58))(local_2c);
  iVar3 = _wcscmp((wchar_t *)*puVar2,pwStack_50);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
  if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_50);
  }
  if (iVar3 == 0) {
    if (local_6c == (undefined2 *)0x0) goto LAB_00787693;
    puVar2 = FUN_004211c0(&stack0xffffff90,&pvStack_30,0,(int)local_6c - 1);
    FUN_004036d0(&stack0xffffff90,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    iVar3 = FUN_00ace02d((short *)&DAT_00d2e120);
    iVar3 = FUN_00420300(&stack0xffffff90,(short *)&DAT_00d2e120,0xffffffff,iVar3);
    puVar2 = FUN_004211c0(&stack0xffffff90,&pvStack_30,0,iVar3 + 1);
    FUN_004036d0(&stack0xffffff90,(wchar_t *)*puVar2,puVar2[1]);
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x58))(&pvStack_30);
    FUN_0040cae0(&stack0xffffff90,(wchar_t *)*puVar2,puVar2[1]);
    sVar4 = FUN_00ace02d((short *)&DAT_00d2e120);
    FUN_0040cae0(&stack0xffffff90,L"\\",sVar4);
  }
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
LAB_00787693:
  FUN_004036d0((void *)(DAT_0104e5f4 + 0x3b4),unaff_EBX,(uint)local_6c);
  FUN_0071ef40(*(void **)(DAT_0104e5f4 + 0x3ac),0.0,0.0);
  uVar5 = FUN_00787000(DAT_0104e5f4);
  if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  ExceptionList = pvStack_10;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_007877d0 @ 007877d0 ////

/* WARNING: Removing unreachable block (ram,0x00787856) */

int * __thiscall FUN_007877d0(void *this,int param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *unaff_EBP;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb734;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006889c0(this,'\0');
  *(undefined ***)this = &PTR_FUN_00d4fb74;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d4fb5c;
  *(undefined4 *)((int)this + 0x3b4) = (undefined2 *)((int)this + 0x3c0);
  *(undefined2 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3bc) = 10;
  *(undefined4 *)((int)this + 0x3d4) = (undefined1 *)((int)this + 0x3e0);
  *(undefined1 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0x14;
  *(int *)((int)this + 0x3f8) = param_1;
  local_4 = 2;
  if (DAT_00e59894 == 0) {
    DAT_00e59894 = 0x20;
    PTR_DAT_00e5988c = _malloc(0x20);
  }
  _strncpy(PTR_DAT_00e5988c,"",0);
  DAT_00e59890 = 0;
  *PTR_DAT_00e5988c = 0;
  DAT_0104e5dc = 0;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&PTR_DAT_00e5986c,(wchar_t *)&lpCaption_00d16918,uVar2);
  *(undefined1 *)((int)this + 0x3fc) = param_2;
  (*(code *)DAT_0104e5e0[1])();
  DAT_0104e5f4 = this;
  (*(code *)*DAT_0104e5e0)();
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  FUN_0073e4e0(this,0x44160000);
  *(undefined4 *)((int)this + 0x3b0) = 0;
  piVar3 = (int *)FUN_0071b2a0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
  fVar6 = FUN_0073e630((int)this);
  fVar7 = (float)(((float10)(float)fVar5 - fVar6) * (float10)0.5);
  iVar4 = FUN_0071b2a0();
  FUN_00741940(this,1,iVar4,fVar7);
  piVar3 = (int *)FUN_0071b2a0();
  fVar5 = (float10)(**(code **)(*piVar3 + 0x14))();
  fVar6 = FUN_0073e640((int)this);
  fVar7 = (float)(((float10)(float)fVar5 - fVar6) * (float10)0.5);
  iVar4 = FUN_0071b2a0();
  FUN_00741b60(this,1,iVar4,fVar7);
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0xc))(this,1);
  FUN_00741630(this,0xc,0x785960,this,(char *)0x0);
  FUN_00741630(this,0xd,0x7859a0,this,(char *)0x0);
  FUN_00786640(this);
  FUN_004036d0((undefined4 *)((int)this + 0x3b4),DAT_0104e5f8,DAT_0104e5fc);
  FUN_004015d0((undefined4 *)((int)this + 0x3d4),DAT_0104e618,DAT_0104e61c);
  FUN_00787000((int)this);
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0xac))(this);
  do {
    cVar1 = FUN_007421c0(this);
  } while (cVar1 != '\0');
  ExceptionList = unaff_EBP;
  return this;
}


//// FUNCTION FUN_00787a20 @ 00787a20 ////

void __cdecl FUN_00787a20(int param_1,undefined1 param_2)

{
  int iVar1;
  int *piVar2;
  void *this;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = DAT_0104e5f4;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb74b;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  if ((((DAT_0104e43c == 0) && (DAT_0104e310 == 0)) && (DAT_0104e394 == 0)) && (DAT_0104e420 == 0))
  {
    ExceptionList = &local_c;
    if (DAT_0104e5f4 != (int *)0x0) {
      iVar1 = DAT_0104e5f4[0x12];
      ExceptionList = &local_c;
      DAT_0104e5f4[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*piVar2)(1);
      }
      (*(code *)DAT_0104e5e0[1])();
      DAT_0104e5f4 = (int *)0x0;
      (*(code *)*DAT_0104e5e0)();
    }
    this = operator_new(0x404);
    uStack_4 = 0;
    if (this != (void *)0x0) {
      piVar3 = FUN_007877d0(this,param_1,param_2);
    }
    uStack_4 = 0xffffffff;
    (*(code *)DAT_0104e5e0[1])();
    DAT_0104e5f4 = piVar3;
    (*(code *)*DAT_0104e5e0)();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00787b10 @ 00787b10 ////

undefined4 * __thiscall
FUN_00787b10(void *this,void *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,void *param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 *local_4c;
  int local_48;
  uint local_44;
  undefined1 local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [16];
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdb799;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_4 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"ui/buttons.dds",0xe);
  local_28 = 0xe;
  local_2c[0xe] = '\0';
  local_4._0_1_ = 1;
  FUN_007381d0(this,&param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined ***)this = &PTR_FUN_00d4fd3c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4fd24;
  *(undefined1 **)((int)this + 0x470) = (undefined1 *)((int)this + 0x47c);
  *(undefined1 *)((int)this + 0x47c) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 *)((int)this + 0x478) = 0x14;
  local_4._0_1_ = 4;
  FUN_0073e4e0(this,0x44110000);
  FUN_00737d70(this,0x40800000);
  uVar1 = param_9;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,5);
  switch(param_9) {
  case 0:
    FUN_00403e20(&local_4c,"ui/button_sample.dds");
    pcVar4 = "";
    pcVar3 = (code *)&DAT_00786410;
    break;
  case 1:
    FUN_00403e20(&local_4c,"ui/button_sample.dds");
    pcVar4 = "";
    pcVar3 = FUN_00785aa0;
    break;
  case 2:
    FUN_00403e20(&local_4c,"ui/button_folder.dds");
    pcVar4 = "WAVBUTTON";
    pcVar3 = FUN_007874d0;
    break;
  case 3:
    FUN_00403e20(&local_4c,"ui/button_folder.dds");
    pcVar4 = "WAVBUTTON";
    pcVar3 = (code *)&LAB_00785be0;
    break;
  case 4:
    FUN_00403e20(&local_4c,"ui/button_goback.dds");
    pcVar4 = "WAVBUTTON";
    pcVar3 = (code *)&LAB_00787780;
    break;
  default:
    goto switchD_00787c0f_default;
  }
  FUN_00741630(this,0,(int)pcVar3,this,pcVar4);
switchD_00787c0f_default:
  *(undefined4 *)((int)this + 0x494) = uVar1;
  if (local_48 != 0) {
    (**(code **)(**(int **)((int)this + 0x468) + 0x5c))();
    param_6 = operator_new(0x360);
    uStack_10 = 6;
    if (param_6 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_0069d820(param_6,(undefined4 *)&stack0xffffffa8,0,0,0x3f800000,0x3f800000);
    }
    *(int **)((int)this + 0x498) = piVar2;
    uStack_10 = 5;
    (**(code **)(*piVar2 + 0x5c))();
    (**(code **)(**(int **)((int)this + 0x498) + 100))(1,this);
    (**(code **)(**(int **)((int)this + 0x498) + 0x74))(0x41c00000,0x41c00000);
    FUN_0073f6e0(this,*(int **)((int)this + 0x498));
  }
  if (local_44 < 0x15) {
    if (param_3 < 0xb) {
      ExceptionList = pvStack_c;
      return this;
    }
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_00787db0 @ 00787db0 ////

undefined4 * __thiscall FUN_00787db0(void *this,byte param_1)

{
  FUN_00787dd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00787dd0 @ 00787dd0 ////

void __fastcall FUN_00787dd0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x11e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11c]);
  }
  FUN_005f3230(param_1);
  return;
}


//// FUNCTION FUN_00787e00 @ 00787e00 ////

void __fastcall FUN_00787e00(wchar_t *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  undefined4 *puVar9;
  size_t sVar10;
  wchar_t *_Dest;
  char *pcVar11;
  void *in_stack_fffffe60;
  undefined4 in_stack_fffffe64;
  uint in_stack_fffffe68;
  undefined4 in_stack_fffffe6c;
  undefined4 in_stack_fffffe70;
  void *pvVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int local_16c;
  wchar_t *pwStack_15c;
  char *pcStack_158;
  uint uStack_154;
  uint uStack_150;
  char acStack_14c [16];
  char *pcStack_13c;
  uint uStack_138;
  uint uStack_134;
  char acStack_130 [20];
  int iStack_11c;
  wchar_t *local_118;
  uint uStack_114;
  uint uStack_110;
  wchar_t awStack_10c [10];
  uint uStack_f8;
  char *pcStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  char acStack_e8 [20];
  char *pcStack_d4;
  undefined1 *local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [16];
  undefined1 *puStack_b4;
  void *apvStack_b0 [2];
  uint uStack_a8;
  wchar_t awStack_90 [64];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb81a;
  pvStack_c = ExceptionList;
  local_d0 = local_c4;
  local_c4[0] = 0;
  local_cc = 0;
  local_c8 = 0x14;
  ExceptionList = &pvStack_c;
  local_118 = param_1;
  FUN_004015d0(&local_d0,*(char **)(param_1 + 0x1ea),*(uint *)(param_1 + 0x1ec));
  local_4 = 0;
  (**(code **)(**(int **)(param_1 + 0x1fa) + 0xa8))();
  pvVar3 = operator_new(0x49c);
  if (pvVar3 != (void *)0x0) {
    pcVar11 = acStack_14c;
    pcVar14 = "POST_SFX_HOME";
    acStack_14c[0] = '\0';
    uStack_154 = 0;
    uStack_150 = 0x14;
    pvVar12 = (void *)0x787ebc;
    pcStack_158 = pcVar11;
    _strncpy(pcVar11,"POST_SFX_HOME",0xd);
    uStack_154 = 0xd;
    pcStack_158[0xd] = '\0';
    uVar16 = 4;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_009b5030((undefined4 *)&stack0xfffffe60,&pcStack_158);
    FUN_00787b10(pvVar3,in_stack_fffffe60,in_stack_fffffe64,in_stack_fffffe68,in_stack_fffffe6c,
                 in_stack_fffffe70,pvVar12,pcVar11,pcVar14,uVar16);
  }
  local_4 = 0;
  if ((pvVar3 != (void *)0x0) && (0x14 < uStack_150)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_158);
  }
  (**(code **)(**(int **)(param_1 + 0x1fa) + 0xfc))();
  uVar4 = FUN_00a35cf0(DAT_0105cc70,pcStack_d4);
  uStack_f8 = uVar4;
  if (uVar4 != 0) {
    uVar5 = FUN_00a35d60(DAT_0105cc70,uVar4);
    uVar17 = 0;
    if (uVar5 != 0) {
      do {
        iVar6 = FUN_00a35db0(DAT_0105cc70,uVar4,uVar17);
        pcVar14 = (char *)FUN_00a35e70(DAT_0105cc70,iVar6);
        pcStack_13c = acStack_130;
        uStack_134 = 0x14;
        acStack_130[0] = '\0';
        uStack_138 = 0;
        pcVar11 = pcVar14;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        uVar4 = (int)pcVar11 - (int)(pcVar14 + 1);
        if (0x13 < uVar4) {
          uStack_134 = uVar4 + 0x20 & 0xffffffe0;
          pcStack_13c = _malloc(uStack_134);
        }
        _strncpy(pcStack_13c,pcVar14,uVar4);
        pcStack_13c[uVar4] = '\0';
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
        uStack_138 = uVar4;
        pwVar7 = (wchar_t *)FUN_00a35e50(DAT_0105cc70,iVar6);
        local_118 = awStack_10c;
        awStack_10c[0] = L'\0';
        uStack_114 = 0;
        uStack_110 = 10;
        uVar4 = FUN_00ace02d(pwVar7);
        if (uStack_110 <= uVar4) {
          if (10 < uStack_110) {
                    /* WARNING: Subroutine does not return */
            _free(local_118);
          }
          uVar8 = uVar4 + 0x20 >> 5;
          uStack_110 = uVar8 << 5;
          local_118 = _malloc(uVar8 * 0x40);
        }
        _wcsncpy(local_118,pwVar7,uVar4);
        local_118[uVar4] = L'\0';
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
        uStack_114 = uVar4;
        puVar9 = FUN_00430770(&pcStack_13c,apvStack_b0,4,0xffffffff);
        uVar4 = puVar9[1];
        pcVar11 = (char *)*puVar9;
        if (uStack_134 <= uVar4) {
          if (0x14 < uStack_134) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_13c);
          }
          uStack_134 = uVar4 + 0x20 & 0xffffffe0;
          pcStack_13c = _malloc(uStack_134);
        }
        pvVar3 = (void *)0x7880fd;
        _strncpy(pcStack_13c,pcVar11,uVar4);
        pcStack_13c[uVar4] = '\0';
        uStack_138 = uVar4;
        if (0x14 < uStack_a8) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_b0[0]);
        }
        iVar6 = FUN_009b0520(pcStack_13c);
        if (0 < iVar6) {
          local_16c = 0;
          do {
            pwStack_15c = (wchar_t *)&uStack_150;
            uStack_150 = uStack_150 & 0xffff0000;
            pcStack_158 = (char *)0x0;
            uStack_154 = 10;
            puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
            uVar16 = 0x788180;
            FUN_0040cae0(&pwStack_15c,local_118,uStack_114);
            if (1 < iVar6) {
              sVar10 = FUN_00ace02d((short *)&DAT_00d2ac08);
              FUN_0040cae0(&pwStack_15c,L" (",sVar10);
              pvVar3 = (void *)0x7881b9;
              sVar10 = _swprintf(awStack_90,0xd18f7c,(wchar_t *)(local_16c + 1));
              FUN_0040cae0(&pwStack_15c,awStack_90,sVar10);
              sVar10 = FUN_00ace02d((short *)&DAT_00d2446c);
              uVar16 = 0x7881ea;
              FUN_0040cae0(&pwStack_15c,L")",sVar10);
            }
            uVar13 = 0x7881f4;
            pvVar12 = operator_new(0x49c);
            pcVar11 = pcStack_158;
            pwVar7 = pwStack_15c;
            puStack_8._0_1_ = 7;
            if (pvVar12 == (void *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              uVar15 = 1;
              puStack_b4 = &stack0xfffffe5c;
              _Dest = (wchar_t *)&stack0xfffffe68;
              in_stack_fffffe68 = in_stack_fffffe68 & 0xffff0000;
              uVar4 = 10;
              puVar2 = &stack0xfffffe5c;
              if (&DAT_00000009 < pcStack_158) {
                uVar4 = ((uint)(pcStack_158 + 0x20) >> 5) << 5;
                _Dest = _malloc(((uint)(pcStack_158 + 0x20) >> 5) * 0x40);
                puVar2 = puStack_b4;
              }
              puStack_b4 = puVar2;
              _wcsncpy(_Dest,pwVar7,(size_t)pcVar11);
              _Dest[(int)pcVar11] = L'\0';
              puVar9 = FUN_00787b10(pvVar12,_Dest,pcVar11,uVar4,in_stack_fffffe68,in_stack_fffffe6c,
                                    pvVar3,uVar16,uVar13,uVar15);
            }
            puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
            (**(code **)(**(int **)(iStack_11c + 0x3f4) + 0xfc))();
            uVar4 = uStack_138;
            pcVar11 = pcStack_13c;
            pcStack_f4 = acStack_e8;
            acStack_e8[0] = '\0';
            uStack_f0 = 0;
            uStack_ec = 0x14;
            if (0x13 < uStack_138) {
              uStack_ec = uStack_138 + 0x20 & 0xffffffe0;
              pcStack_f4 = _malloc(uStack_ec);
            }
            _strncpy(pcStack_f4,pcVar11,uVar4);
            pcVar11 = pcStack_f4;
            uStack_f0 = uVar4;
            pcStack_f4[uVar4] = '\0';
            if ((uint)puVar9[0x11e] <= uVar4) {
              if (0x14 < (uint)puVar9[0x11e]) {
                    /* WARNING: Subroutine does not return */
                _free((void *)puVar9[0x11c]);
              }
              uVar8 = uVar4 + 0x20 & 0xffffffe0;
              puVar9[0x11e] = uVar8;
              pvVar3 = _malloc(uVar8);
              puVar9[0x11c] = pvVar3;
            }
            pvVar3 = (void *)0x788351;
            _strncpy((char *)puVar9[0x11c],pcVar11,uVar4);
            puVar9[0x11d] = uVar4;
            *(undefined1 *)(uVar4 + puVar9[0x11c]) = 0;
            puVar9[0x124] = local_16c;
            if (0x14 < uStack_ec) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_f4);
            }
            if (10 < uStack_154) {
                    /* WARNING: Subroutine does not return */
              _free(pwStack_15c);
            }
            local_16c = local_16c + 1;
          } while (local_16c < iVar6);
        }
        if (10 < uStack_110) {
                    /* WARNING: Subroutine does not return */
          _free(local_118);
        }
        puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
        if (0x14 < uStack_134) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_13c);
        }
        uVar17 = uVar17 + 1;
        uVar4 = uStack_f8;
      } while (uVar17 < uVar5);
    }
  }
  if (local_cc < 0x15) {
    ExceptionList = pvStack_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_d4);
}


//// FUNCTION FUN_00788430 @ 00788430 ////

void __fastcall FUN_00788430(int *param_1)

{
  float10 fVar1;
  
  FUN_0073fb40(param_1);
  fVar1 = FUN_006d6b50(param_1[0xdf]);
  *(float *)(param_1[0xde] + 0xb8) = (float)fVar1;
  return;
}


//// FUNCTION FUN_00788520 @ 00788520 ////

void __thiscall FUN_00788520(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4fe50;
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


//// FUNCTION FUN_00788570 @ 00788570 ////

void __fastcall FUN_00788570(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4fe50;
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


//// FUNCTION FUN_007885c0 @ 007885c0 ////

void __fastcall FUN_007885c0(undefined4 *param_1)

{
  float10 fVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdb854;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4fe7c;
  param_1[0x14] = &PTR_FUN_00d4fe60;
  local_4 = 2;
  if (-1 < (int)param_1[0xe1]) {
    FUN_009b11d0(param_1[0xe1]);
  }
  param_1[0xe1] = 0xffffffff;
  (*(code *)DAT_0104e638[1])();
  DAT_0104e64c = 0;
  (*(code *)*DAT_0104e638)();
  fVar1 = FUN_006d6b50(param_1[0xdf]);
  *(float *)(param_1[0xde] + 0xb8) = (float)fVar1;
  if (*(float *)(param_1[0xde] + 0xb8) != (float)param_1[0xe0]) {
    FUN_00770520(DAT_0104e478);
    FUN_00773420(DAT_0104e478);
  }
  FUN_00769330();
  param_1[0xd8] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xda] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xda] = param_1[0xd9];
  }
  if (param_1[0xd9] != 0) {
    *(undefined4 *)(param_1[0xd9] + 4) = param_1[0xda];
  }
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdd] = 0;
  if ((undefined4 *)param_1[0xda] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xda] = param_1[0xd9];
  }
  if (param_1[0xd9] != 0) {
    *(undefined4 *)(param_1[0xd9] + 4) = param_1[0xda];
  }
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xd2] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xd4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd4] = param_1[0xd3];
  }
  if (param_1[0xd3] != 0) {
    *(undefined4 *)(param_1[0xd3] + 4) = param_1[0xd4];
  }
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd7] = 0;
  if ((undefined4 *)param_1[0xd4] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd4] = param_1[0xd3];
  }
  if (param_1[0xd3] != 0) {
    *(undefined4 *)(param_1[0xd3] + 4) = param_1[0xd4];
  }
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00788780 @ 00788780 ////

undefined4 * __thiscall FUN_00788780(void *this,byte param_1)

{
  FUN_007885c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007887a0 @ 007887a0 ////

undefined4 * __thiscall FUN_007887a0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined ******ppppppuVar6;
  char *_Dest;
  void *pvVar7;
  int *piVar8;
  size_t sVar9;
  uint unaff_EBP;
  float10 fVar10;
  uint **ppuStack_104;
  void *pvStack_100;
  undefined1 *puStack_fc;
  uint *puStack_f8;
  uint uVar11;
  uint uStack_ec;
  void *pvStack_e8;
  void *pvStack_e4;
  undefined4 uStack_e0;
  undefined1 *puStack_dc;
  void *pvStack_d8;
  undefined1 *_Memory;
  uint uVar12;
  char *pcVar13;
  float fVar14;
  char *local_9c;
  float fStack_98;
  undefined1 *puStack_94;
  char acStack_90 [4];
  uint uStack_8c;
  undefined1 *puStack_7c;
  char *pcStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  char acStack_6c [4];
  undefined4 uStack_68;
  undefined1 uStack_64;
  int iStack_5c;
  undefined1 uStack_44;
  void *apvStack_38 [2];
  uint uStack_30;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb99c;
  pvStack_c = ExceptionList;
  local_9c = (char *)0x0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  FUN_007432f0(this);
  piVar8 = (int *)((int)this + 0x348);
  *(undefined ***)this = &PTR_FUN_00d4fe7c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4fe60;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(int **)((int)this + 0x354) = piVar8;
  *piVar8 = (int)&PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  piVar1 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(int **)((int)this + 0x36c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x380) = *(undefined4 *)(param_1 + 0xb8);
  local_4 = 2;
  *(undefined4 *)((int)this + 900) = 0xffffffff;
  *(int *)((int)this + 0x378) = param_1;
  FUN_0073e4e0(this,0x43960000);
  piVar2 = (int *)FUN_0071b2a0();
  fVar10 = (float10)(**(code **)(*piVar2 + 0x10))();
  fStack_98 = (float)fVar10;
  fVar10 = FUN_0073e630((int)this);
  fVar14 = (float)(((float10)fStack_98 - fVar10) * (float10)0.5);
  iVar3 = FUN_0071b2a0();
  FUN_00741940(this,1,iVar3,fVar14);
  piVar2 = (int *)FUN_0071b2a0();
  fVar10 = (float10)(**(code **)(*piVar2 + 0x14))();
  fStack_98 = (float)fVar10;
  fVar10 = FUN_0073e640((int)this);
  fVar14 = (float)(((float10)fStack_98 - fVar10) * (float10)0.5);
  iVar3 = FUN_0071b2a0();
  FUN_00741b60(this,1,iVar3,fVar14);
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xc))();
  pvVar4 = operator_new(0x420);
  if (pvVar4 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_9c = acStack_90;
    acStack_90[0] = '\0';
    fStack_98 = 0.0;
    puStack_94 = &DAT_00000014;
    _strncpy(local_9c,"POST_PLAY_PREVIEW",0x11);
    fStack_98 = 2.38221e-44;
    local_9c[0x11] = '\0';
    pcStack_78 = acStack_6c;
    acStack_6c[0] = '\0';
    uStack_74 = 0;
    uStack_70 = 0x14;
    _strncpy(pcStack_78,"button_play.",0xc);
    uStack_74 = 0xc;
    pcStack_78[0xc] = '\0';
    pvStack_c = (void *)0x5;
    pvStack_d8 = (void *)0x78897b;
    puVar5 = FUN_009b5030(apvStack_38,&local_9c);
    puStack_7c = &stack0xffffff3c;
    pvStack_c = (void *)0x6;
    unaff_EBP = 7;
    pvStack_d8 = (void *)0x7889c0;
    puVar5 = FUN_0069fb10(pvVar4,(int *)&pcStack_78,puVar5,0x42000000,0x42000000,0,0,0x3f800000,
                          0x3f800000);
  }
  pvStack_c = (void *)0x9;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x374) = puVar5;
  (**(code **)*piVar1)();
  if (((unaff_EBP & 4) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffb, 10 < uStack_30)) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_38[0]);
  }
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, 0x14 < uStack_70)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_78);
  }
  pvStack_c = (void *)0x2;
  if (((unaff_EBP & 1) != 0) && (&DAT_00000014 < puStack_94)) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  (**(code **)(**(int **)((int)this + 0x374) + 0x18))();
  pcVar13 = "WAVEDITOR_PLAY";
  uVar12 = 0;
  _Memory = (undefined1 *)0x5;
  pvStack_d8 = (void *)0x788a9d;
  (**(code **)(**(int **)((int)this + 0x374) + 0x18))();
  pvStack_d8 = (void *)0x40800000;
  uStack_e0 = 1;
  pvStack_e4 = (void *)0x788ab0;
  puStack_dc = this;
  (**(code **)(**(int **)((int)this + 0x374) + 0x5c))();
  pvStack_e4 = (void *)0x42040000;
  uStack_ec = 2;
  pvStack_e8 = this;
  (**(code **)(**(int **)((int)this + 0x374) + 100))();
  puStack_f8 = (uint *)0x788ad3;
  FUN_0073f6e0(this,*(int **)((int)this + 0x374));
  ppppppuVar6 = operator_new(0x358);
  uStack_44 = 10;
  if (ppppppuVar6 == (undefined ******)0x0) {
    ppppppuVar6 = (undefined ******)0x0;
  }
  else {
    ppppppuVar6 = FUN_006d6b70(ppppppuVar6);
  }
  *(undefined *******)((int)this + 0x37c) = ppppppuVar6;
  puStack_f8 = (uint *)0x2;
  uStack_44 = 2;
  puStack_fc = (undefined1 *)0x788b18;
  (*(code *)(*ppppppuVar6)[0x18])();
  puStack_fc = (undefined1 *)0x41c00000;
  ppuStack_104 = (uint **)0x2;
  pvStack_100 = this;
  (**(code **)(**(int **)((int)this + 0x37c) + 100))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x37c));
  pvVar4 = (void *)0x43800000;
  (**(code **)(**(int **)((int)this + 0x37c) + 0x74))();
  FUN_006d72e0(*(void **)((int)this + 0x37c),*(int *)(iStack_5c + 0xb8));
  pvStack_e8 = (void *)((uint)pvStack_e8 & 0xffffff00);
  uStack_ec = 0x20;
  _Dest = _malloc(0x20);
  _strncpy(_Dest,"POSTPROD_SOUND_VOLUME",0x15);
  uVar11 = 0x15;
  _Dest[0x15] = '\0';
  uStack_64 = 0xb;
  FUN_009b5030((undefined4 *)acStack_90,(undefined4 *)&stack0xffffff0c);
  uStack_64 = 0xc;
  (**(code **)(**(int **)((int)this + 0x37c) + 0x90))();
  if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_94);
  }
  uStack_68 = CONCAT31(uStack_68._1_3_,2);
  if (0x14 < uVar11) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_f8);
  }
  pvVar7 = operator_new(0x420);
  pvStack_d8 = pvVar7;
  if (pvVar7 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    _Memory = &stack0xffffff38;
    pcVar13 = (char *)((uint)pcVar13 & 0xffff0000);
    uVar12 = 10;
    uVar11 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff2c,(wchar_t *)&lpCaption_00d16918,uVar11);
    puStack_f8 = &uStack_ec;
    pvStack_100 = (void *)((uint)pvStack_100 | 8);
    uStack_ec = uStack_ec & 0xffffff00;
    uVar11 = 0x14;
    _strncpy((char *)puStack_f8,"button_quit.",0xc);
    *(char *)(puStack_f8 + 3) = '\0';
    puStack_fc = &stack0xfffffee0;
    pvStack_100 = (void *)((uint)pvStack_100 | 0x10);
    uStack_68 = 0xf;
    puVar5 = FUN_0069fb10(pvVar7,(int *)&puStack_f8,(undefined4 *)&stack0xffffff2c,0x42000000,
                          0x42000000,0,0,0x3f800000,0x3f800000);
  }
  uStack_68 = 0x11;
  (**(code **)(*piVar8 + 4))();
  *(undefined4 **)((int)this + 0x35c) = puVar5;
  (**(code **)*piVar8)();
  if ((((uint)pvStack_100 & 0x10) != 0) &&
     (pvStack_100 = (void *)((uint)pvStack_100 & 0xffffffef), 0x14 < uVar11)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_f8);
  }
  uStack_68 = 2;
  if ((((uint)pvStack_100 & 8) != 0) &&
     (pvStack_100 = (void *)((uint)pvStack_100 & 0xfffffff7), 10 < uVar12)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  (**(code **)(**(int **)((int)this + 0x35c) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x35c) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x35c) + 0x60))();
  (**(code **)(**(int **)((int)this + 0x35c) + 100))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x35c));
  puVar5 = operator_new(0x3fc);
  if (puVar5 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_00833290(puVar5);
  }
  *(int **)((int)this + 0x344) = piVar8;
  (**(code **)(*piVar8 + 0x5c))(1);
  (**(code **)(**(int **)((int)this + 0x344) + 100))(1,this);
  ppuStack_104 = &puStack_f8;
  puStack_f8 = (uint *)((uint)puStack_f8 & 0xffff0000);
  pvStack_100 = (void *)0x0;
  puStack_fc = (undefined1 *)0xa;
  sVar9 = FUN_00ace02d(L"<TABLE WIDTH=200><TR><TD>");
  FUN_0040cae0(&ppuStack_104,L"<TABLE WIDTH=200><TR><TD>",sVar9);
  piVar8 = *(int **)(*(int *)((int)this + 0x378) + 0x4c);
  if (piVar8 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x58))(&pvStack_e4);
    FUN_0040cae0(&ppuStack_104,(wchar_t *)*puVar5,puVar5[1]);
    if (&lpType_0000000a < puStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
  }
  sVar9 = FUN_00ace02d(L"</TD></TR></TABLE>");
  FUN_0040cae0(&ppuStack_104,L"</TD></TR></TABLE>",sVar9);
  (**(code **)(**(int **)((int)this + 0x344) + 0x54))(&ppuStack_104);
  (**(code **)(**(int **)((int)this + 0x344) + 0x84))(0);
  FUN_0073f6e0(this,*(int **)((int)this + 0x344));
  pvVar7 = operator_new(0x288);
  if (pvVar7 == (void *)0x0) {
    uRam00000270 = 0x41400000;
    uRam00000274 = 0x41400000;
    uRam0000026c = 0x42000000;
    uRam00000278 = 0x41c00000;
    uRam0000027c = 0x41c00000;
    FUN_0073fae0(this,0);
    if (&lpType_0000000a < ppuStack_104) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar4);
    }
    ExceptionList = pcVar13;
    return this;
  }
  pcVar13 = _malloc(0x20);
  _strncpy(pcVar13,"ui/buildmenu_window.dds",0x17);
  pcVar13[0x17] = '\0';
  FUN_005e8fd0(pvVar7,(undefined4 *)&stack0xfffffeb0);
                    /* WARNING: Subroutine does not return */
  _free(pcVar13);
}


//// FUNCTION FUN_00788ff0 @ 00788ff0 ////

void __cdecl FUN_00788ff0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104e64c;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb9bb;
  pvStack_c = ExceptionList;
  puVar3 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104e64c != (undefined4 *)0x0) {
    iVar1 = DAT_0104e64c[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104e64c[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104e638[1])();
    DAT_0104e64c = (undefined4 *)0x0;
    (*(code *)*DAT_0104e638)();
  }
  this = operator_new(0x388);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    puVar3 = FUN_007887a0(this,param_1);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104e638[1])();
  DAT_0104e64c = puVar3;
  (*(code *)*DAT_0104e638)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007890d0 @ 007890d0 ////

void __thiscall FUN_007890d0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x78);
  *puVar1 = *param_2;
  *(undefined4 *)((int)this + 0x7c) = param_2[1];
  *(undefined4 *)((int)this + 0x80) = param_2[2];
  *(undefined4 *)((int)this + 0xd4) = *param_2;
  *(undefined4 *)((int)this + 0xd8) = param_2[1];
  *(undefined4 *)((int)this + 0xdc) = param_2[2];
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0x9c) + 0x20);
  *puVar2 = *puVar1;
  puVar2[1] = *(undefined4 *)((int)this + 0x7c);
  puVar2[2] = *(undefined4 *)((int)this + 0x80);
  puVar2 = *(undefined4 **)(*(int *)((int)this + 0xa0) + 0x20);
  *puVar2 = *puVar1;
  puVar2[1] = *(undefined4 *)((int)this + 0x7c);
  puVar2[2] = *(undefined4 *)((int)this + 0x80);
  return;
}


//// FUNCTION FUN_00789140 @ 00789140 ////

void __thiscall FUN_00789140(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xd0) = param_1;
  return;
}


//// FUNCTION FUN_00789150 @ 00789150 ////

void __thiscall FUN_00789150(void *this,undefined4 param_1)

{
  FUN_0078a550(this,param_1);
  *(undefined4 *)((int)this + 0xc4) = param_1;
  return;
}


//// FUNCTION FUN_00789170 @ 00789170 ////

void __thiscall FUN_00789170(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xcc) = param_1;
  return;
}


//// FUNCTION FUN_00789190 @ 00789190 ////

void __thiscall FUN_00789190(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xcd) = param_1;
  return;
}


//// FUNCTION FUN_007891a0 @ 007891a0 ////

void __fastcall FUN_007891a0(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  *(undefined4 *)(param_1 + 0xc0) = 3;
  uVar1 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0xbc) = (int)uVar1;
  return;
}


//// FUNCTION FUN_007891c0 @ 007891c0 ////

void __fastcall FUN_007891c0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = (float)param_1[0x42] + 0.35;
  param_1[0x42] = (int)fVar1;
  if (6.2831855 < fVar1) {
    param_1[0x42] = (int)(fVar1 - 6.2831855);
  }
  fVar2 = (float10)fsin((float10)(float)param_1[0x42]);
  param_1[0x21] =
       (int)(float)((fVar2 + (float10)1.0) * (float10)(float)param_1[0x31] * (float10)0.125 +
                   (float10)(float)param_1[0x31]);
  (**(code **)(*param_1 + 0x20))(param_1 + 0x1e);
  return;
}


//// FUNCTION FUN_00789220 @ 00789220 ////

undefined4 __fastcall FUN_00789220(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xcc) == '\0') || (uVar1 = 1, *(int *)(param_1 + 0xc0) != 1)) {
    uVar1 = 0;
  }
  return uVar1;
}


//// FUNCTION FUN_00789240 @ 00789240 ////

void __fastcall FUN_00789240(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x10c));
}


//// FUNCTION FUN_00789260 @ 00789260 ////

void __fastcall FUN_00789260(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x110));
}


//// FUNCTION FUN_00789280 @ 00789280 ////

void __thiscall FUN_00789280(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x9c);
  if ((iVar1 != 0) && (uVar2 = 0, *(short *)(iVar1 + 0x1c) != 0)) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x28 + iVar3) = param_1;
      iVar1 = *(int *)((int)this + 0x9c);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (uVar2 < *(ushort *)(iVar1 + 0x1c));
  }
  iVar1 = *(int *)((int)this + 0xa0);
  if ((iVar1 != 0) && (uVar2 = 0, *(short *)(iVar1 + 0x1c) != 0)) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x28 + iVar3) = param_1;
      iVar1 = *(int *)((int)this + 0xa0);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x34;
    } while (uVar2 < *(ushort *)(iVar1 + 0x1c));
  }
  return;
}


//// FUNCTION FUN_00789470 @ 00789470 ////

void __fastcall FUN_00789470(int *param_1,undefined4 param_2)

{
  void *this;
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  ulonglong uVar6;
  undefined4 uStack_3c;
  undefined1 local_1d;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((char)param_1[0x33] == '\0') {
    *(undefined1 *)(param_1 + 0x22) = 0x80;
    *(undefined1 *)((int)param_1 + 0x89) = 0x80;
    *(undefined1 *)((int)param_1 + 0x8a) = 0x80;
  }
  switch(param_1[0x30]) {
  case 0:
    uVar6 = FUN_00990ae0(param_1,param_2);
    iVar3 = (int)uVar6 - param_1[0x2e];
    local_1c = (float)iVar3;
    if (iVar3 < 0) {
      local_1c = local_1c + 4.2949673e+09;
    }
    if (local_1c <= 200.0) {
      (**(code **)(*param_1 + 0x20))();
      uVar6 = FUN_00acd42c();
      FUN_0040a4f0(&stack0xffffffdf,(int)uVar6);
      *(char *)((int)param_1 + 0x8b) = (char)((uint)unaff_EBX >> 0x18);
      FUN_0078a8f0((int)param_1);
      FUN_0078b530((int)param_1);
      return;
    }
    (**(code **)(*param_1 + 0x20))();
    param_1[0x30] = 1;
    *(undefined1 *)((int)param_1 + 0x8b) = 0xff;
    FUN_0078a8f0((int)param_1);
    FUN_0078b530((int)param_1);
    return;
  case 1:
    if ((((*(byte *)(param_1 + 0x26) & 1) == 0) || (iVar3 = FUN_00423320(DAT_00f87b04), iVar3 != 0))
       || (sVar2 = FUN_005546e0(), (char)sVar2 == '\0')) {
      if ((undefined4 *)param_1[0x44] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)param_1[0x44])();
      }
      param_1[0x45] = 0;
    }
    else {
      uVar4 = extraout_ECX;
      uVar5 = extraout_EDX;
      if (param_1[0x45] == 0) {
        uVar6 = FUN_00990ae0(extraout_ECX,extraout_EDX);
        uVar5 = (undefined4)(uVar6 >> 0x20);
        param_1[0x45] = (int)uVar6;
        uVar4 = extraout_ECX_00;
      }
      uVar6 = FUN_00990ae0(uVar4,uVar5);
      if (param_1[0x45] + 1000U < (uint)uVar6) {
        if ((undefined4 *)param_1[0x43] == (undefined4 *)0x0) {
          if (param_1[0x3a] != 0) {
            FUN_00403380(&uStack_3c,param_1 + 0x1e);
            FUN_005e2d50(param_1 + 0x39,3);
          }
        }
        else {
          (*(code *)**(undefined4 **)param_1[0x43])();
        }
      }
    }
    if (((*(byte *)(param_1 + 0x26) & 1) == 0) || (*(char *)((int)param_1 + 0xcd) == '\0')) {
      param_1[0x21] = param_1[0x31];
      param_1[0x42] = 0x3fc90fdb;
      (**(code **)(*param_1 + 0x20))();
    }
    else if ((param_1[0x1d] == 0) || (*(int *)(param_1[0x1d] + 0x3b8) == 3)) {
      FUN_007891c0(param_1);
    }
    this = (void *)param_1[0x1d];
    if (this != (void *)0x0) {
      uStack_18 = 0x10000;
      uStack_c = 0x10000;
      uStack_10 = 0;
      uStack_14 = 0;
      uVar6 = FUN_00acd42c();
      uStack_8 = (undefined4)uVar6;
      uVar6 = FUN_00acd42c();
      uStack_4 = (undefined4)uVar6;
      local_1c = (float)param_1[0x21];
      uStack_3c = 0x789720;
      FUN_0089ee90(this,&uStack_18,local_1c,local_1c);
      (**(code **)(*(int *)param_1[0x1d] + 0x2c))();
      FUN_0078b530((int)param_1);
      return;
    }
    break;
  case 2:
    uVar6 = FUN_00990ae0(param_1,param_2);
    local_1c = (float)((int)uVar6 - param_1[0x2f]);
    fVar1 = (float)(int)local_1c;
    if ((int)local_1c < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (fVar1 <= 200.0) {
      uVar6 = FUN_00acd42c();
      FUN_0040a4f0(&local_1d,(int)uVar6);
      *(undefined1 *)((int)param_1 + 0x8b) = local_1d;
      FUN_0078a8f0((int)param_1);
      FUN_0078b530((int)param_1);
      return;
    }
    *(undefined1 *)((int)param_1 + 0x8b) = 0;
    FUN_0078a8f0((int)param_1);
    FUN_0078b530((int)param_1);
    return;
  case 3:
    uVar6 = FUN_00990ae0(param_1,param_2);
    iVar3 = (int)uVar6 - param_1[0x2f];
    local_1c = (float)iVar3;
    if (iVar3 < 0) {
      local_1c = local_1c + 4.2949673e+09;
    }
    if (400.0 < local_1c) {
      *(undefined1 *)((int)param_1 + 0x8b) = 0;
      return;
    }
    local_1c = local_1c * 0.0025;
    uVar6 = FUN_00acd42c();
    FUN_0040a4f0(&local_1d,(int)uVar6);
    *(undefined1 *)((int)param_1 + 0x8b) = local_1d;
    param_1[0x21] = (int)(local_1c * (float)param_1[0x31] * 0.5 + (float)param_1[0x31] * 0.5);
    (**(code **)(*param_1 + 0x20))();
  }
  FUN_0078b530((int)param_1);
  return;
}


//// FUNCTION FUN_007897f0 @ 007897f0 ////

undefined4 * __thiscall FUN_007897f0(void *this,undefined1 param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdb9f4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078ade0(this);
  piVar1 = (int *)((int)this + 0xa8);
  *(undefined ***)this = &PTR_FUN_00d4fff4;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xe4) = (undefined2 *)((int)this + 0xf0);
  *(undefined2 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 10;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined1 *)((int)this + 0x60) = 1;
  *(undefined1 *)((int)this + 0xcc) = param_1;
  uVar6 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0xb8) = (int)uVar6;
  *(undefined4 *)((int)this + 0xc0) = 0;
  fVar2 = DAT_00e598f8 * 0.5;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(void **)((int)this + 0xb0) = this;
  *(float *)((int)this + 0xc4) = fVar2;
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0xc4);
  *(float *)((int)this + 0xd0) = fVar2;
  FUN_00acdb9e(0xe5993c);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0xb4) = iVar3;
  if (s___AVCGroundIcon_TM___00e59924[0x15] != '\0') {
    iVar3 = 0xa8;
    pcVar7 = "GILink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5993c);
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    s___AVCGroundIcon_TM___00e59924[0x15] = '\0';
  }
  *(int ***)((int)this + 0xac) = &DAT_0104e664;
  *piVar1 = (int)DAT_0104e664;
  *(int **)((int)DAT_0104e664 + 4) = piVar1;
  DAT_0104e664 = piVar1;
  *(undefined1 *)((int)this + 0xe0) = 0;
  *(undefined1 *)((int)this + 0xcd) = *(undefined1 *)((int)this + 0xcc);
  *(undefined1 *)((int)this + 0x104) = 1;
  uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 0xe4),(wchar_t *)&lpCaption_00d16918,uVar5);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00789980 @ 00789980 ////

void __fastcall FUN_00789980(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4fff4;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x43]);
}


//// FUNCTION FUN_00789a30 @ 00789a30 ////

void __thiscall FUN_00789a30(void *this,undefined4 *param_1)

{
  FUN_004036d0((void *)((int)this + 0xe4),(wchar_t *)*param_1,param_1[1]);
  return;
}


//// FUNCTION FUN_00789a50 @ 00789a50 ////

undefined4 * __thiscall FUN_00789a50(void *this,byte param_1)

{
  FUN_00789980(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00789a70 @ 00789a70 ////

void __fastcall FUN_00789a70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d50024;
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


//// FUNCTION FUN_00789ac0 @ 00789ac0 ////

undefined4 * __thiscall FUN_00789ac0(void *this,byte param_1)

{
  FUN_00789a70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00789ae0 @ 00789ae0 ////

void __fastcall FUN_00789ae0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d50024;
  return;
}


//// FUNCTION FUN_00789b50 @ 00789b50 ////

int * __thiscall FUN_00789b50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00789b90 @ 00789b90 ////

void __fastcall FUN_00789b90(int param_1)

{
  if (*(char *)(param_1 + 200) == '\0') {
    if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
      **(undefined4 **)(param_1 + 0x68) = *(undefined4 *)(param_1 + 100);
    }
    if (*(int *)(param_1 + 100) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 100) + 4) = *(undefined4 *)(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 200) = 1;
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x3c))();
    }
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 0x3c))();
    }
    FUN_0057c160(*(int *)(param_1 + 0x88));
    return;
  }
  return;
}


//// FUNCTION FUN_00789cd0 @ 00789cd0 ////

void __fastcall FUN_00789cd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdba36;
  local_c = ExceptionList;
  puVar5 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  if ((DAT_0104d524 == 0) ||
     (ExceptionList = &local_c, uVar1 = FUN_00598ee0(DAT_0104d524), (char)uVar1 == '\0')) {
    if (*(int *)(DAT_0104d524 + 0x4c4) != 3) {
      ExceptionList = local_c;
      return;
    }
    iVar2 = FUN_005773c0(*(int *)(param_1 + 0x88));
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    pvVar3 = operator_new(0x1c0);
    local_4 = 1;
    if (pvVar3 != (void *)0x0) {
      puVar5 = FUN_008beba0(pvVar3,*(undefined4 *)(param_1 + 0x88));
    }
    piVar4 = (int *)(param_1 + 0xb0);
  }
  else {
    iVar2 = FUN_005773c0(DAT_0104d524);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return;
    }
    pvVar3 = operator_new(0x1c0);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      puVar5 = FUN_008bf470(pvVar3,*(undefined4 *)(param_1 + 0x88));
    }
    piVar4 = (int *)(param_1 + 0x98);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 4))();
  piVar4[5] = (int)puVar5;
  (**(code **)*piVar4)();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00789e40 @ 00789e40 ////

undefined4 __fastcall FUN_00789e40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}


//// FUNCTION FUN_00789e50 @ 00789e50 ////

void __fastcall FUN_00789e50(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 local_c [12];
  
  if (((param_1[0x31] != 0) || (param_1[0x2b] != 0)) && (param_1[0x22] != 0)) {
    if (DAT_0104d524 != 0) {
      FUN_009840b0(&local_1c,param_1 + 0x23);
      puVar2 = (undefined4 *)(**(code **)(*(int *)param_1[0x22] + 0x34))(local_c);
      FUN_009840b0(&fStack_14,puVar2);
      if (SQRT((local_1c - fStack_14) * (local_1c - fStack_14) +
               (fStack_18 - fStack_10) * (fStack_18 - fStack_10)) <= 5.0) {
        FUN_0057bf30((void *)param_1[0x22],*(undefined4 *)((int)param_1[0x22] + 0xc4));
        FUN_0053d480((int)param_1);
        return;
      }
    }
    FUN_00789b90((int)param_1);
    return;
  }
  piVar1 = param_1 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  (**(code **)*param_1)(1);
  return;
}


//// FUNCTION FUN_00789f50 @ 00789f50 ////

void __fastcall FUN_00789f50(int param_1)

{
  float *pfVar1;
  float fVar2;
  float10 fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_18 = *(float *)(DAT_00f87aa0 + 0xdc);
  local_14 = *(float *)(DAT_00f87aa0 + 0xe0);
  local_10 = *(undefined4 *)(DAT_00f87aa0 + 0xe4);
  local_c = *(float *)(DAT_00f87aa0 + 0xd0);
  local_8 = *(float *)(DAT_00f87aa0 + 0xd4);
  local_4 = *(undefined4 *)(DAT_00f87aa0 + 0xd8);
  fVar3 = (float10)fpatan((float10)local_8 - (float10)local_14,(float10)local_c - (float10)local_18)
  ;
  fVar3 = FUN_004012c0((float)fVar3);
  fVar2 = (float)fVar3;
  pfVar1 = (float *)(param_1 + 0x8c);
  fVar3 = (float10)fcos((float10)fVar2);
  local_18 = *pfVar1;
  local_14 = *(float *)(param_1 + 0x90);
  local_10 = *(undefined4 *)(param_1 + 0x94);
  local_20 = (float)fVar3;
  fVar3 = (float10)fsin((float10)fVar2);
  local_1c = (float)fVar3;
  FUN_00412c90(&local_20);
  local_20 = local_20 + local_20;
  local_1c = local_1c + local_1c;
  local_18 = local_18 + local_20;
  local_14 = local_14 + local_1c;
  FUN_00789cd0(param_1);
  if (*(int **)(param_1 + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xac) + 0x40))(pfVar1,&local_18);
  }
  local_4 = *(undefined4 *)(param_1 + 0x94);
  local_c = *pfVar1 - local_20;
  local_8 = *(float *)(param_1 + 0x90) - local_1c;
  if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc4) + 0x40))(pfVar1,&local_c);
  }
  FUN_0057bf30(*(void **)(param_1 + 0x88),fVar2);
  return;
}


//// FUNCTION FUN_0078a0f0 @ 0078a0f0 ////

void __fastcall FUN_0078a0f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5003c;
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


//// FUNCTION FUN_0078a140 @ 0078a140 ////

undefined4 * __thiscall FUN_0078a140(void *this,undefined4 param_1)

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
  puStack_8 = &LAB_00cdba7a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  piVar1 = (int *)((int)this + 100);
  *(undefined ***)this = &PTR_FUN_00d5005c;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  piVar2 = (int *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(int **)((int)this + 0x80) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 **)((int)this + 0xa4) = (undefined4 *)((int)this + 0x98);
  *(undefined4 *)((int)this + 0x98) = &PTR_LAB_00d5003c;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 **)((int)this + 0xbc) = (undefined4 *)((int)this + 0xb0);
  *(undefined4 *)((int)this + 0xb0) = &PTR_LAB_00d5003c;
  *(undefined4 *)((int)this + 0xc4) = 0;
  local_4 = 4;
  *(undefined1 *)((int)this + 0x60) = 1;
  *(void **)((int)this + 0x6c) = this;
  FUN_00acdb9e(0xe599d8);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x70) = iVar3;
  if (s___AVCInteractGUI_TM___00e599c0[0x16] != '\0') {
    iVar3 = 100;
    pcVar6 = "InteractLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe599d8);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    s___AVCInteractGUI_TM___00e599c0[0x16] = '\0';
  }
  *(int ***)((int)this + 0x68) = &DAT_0104e698;
  *piVar1 = (int)DAT_0104e698;
  *(int **)((int)DAT_0104e698 + 4) = piVar1;
  DAT_0104e698 = piVar1;
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x88) = param_1;
  (**(code **)*piVar2)();
  puVar5 = FUN_00598e50(*(void **)((int)this + 0x88),local_18);
  *(undefined4 *)((int)this + 0x8c) = *puVar5;
  *(undefined4 *)((int)this + 0x90) = puVar5[1];
  *(undefined4 *)((int)this + 0x94) = puVar5[2];
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  FUN_00789f50((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0078a2c0 @ 0078a2c0 ////

void __fastcall FUN_0078a2c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5005c;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x2c] = &PTR_LAB_00d5003c;
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
  param_1[0x26] = &PTR_LAB_00d5003c;
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
  param_1[0x1d] = &PTR_FUN_00d18c4c;
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


//// FUNCTION FUN_0078a440 @ 0078a440 ////

undefined4 * __thiscall FUN_0078a440(void *this,byte param_1)

{
  FUN_0078a2c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0078a460 @ 0078a460 ////

void __fastcall FUN_0078a460(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d5007c;
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


//// FUNCTION FUN_0078a4b0 @ 0078a4b0 ////

undefined4 * __thiscall FUN_0078a4b0(void *this,byte param_1)

{
  FUN_0078a460(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0078a4d0 @ 0078a4d0 ////

void __fastcall FUN_0078a4d0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d5007c;
  return;
}


//// FUNCTION FUN_0078a550 @ 0078a550 ////

void __thiscall FUN_0078a550(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x84) = param_1;
  if (*(int *)((int)this + 0x9c) != 0) {
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x9c) + 0x20) + 0x24) = param_1;
  }
  if (*(int *)((int)this + 0xa0) != 0) {
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0xa0) + 0x20) + 0x24) =
         *(undefined4 *)((int)this + 0x84);
  }
  return;
}


//// FUNCTION FUN_0078a590 @ 0078a590 ////

void __thiscall FUN_0078a590(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x78) = *param_1;
  *(undefined4 *)((int)this + 0x7c) = param_1[1];
  *(undefined4 *)((int)this + 0x80) = param_1[2];
  return;
}


//// FUNCTION FUN_0078a5b0 @ 0078a5b0 ////

void __thiscall FUN_0078a5b0(void *this,byte param_1)

{
  *(uint *)((int)this + 0x98) =
       *(uint *)((int)this + 0x98) ^ ((uint)param_1 << 3 ^ *(uint *)((int)this + 0x98)) & 8;
  return;
}


//// FUNCTION FUN_0078a5d0 @ 0078a5d0 ////

void __thiscall FUN_0078a5d0(void *this,byte param_1)

{
  *(uint *)((int)this + 0x98) =
       *(uint *)((int)this + 0x98) ^ ((uint)param_1 << 4 ^ *(uint *)((int)this + 0x98)) & 0x10;
  return;
}


//// FUNCTION FUN_0078a5f0 @ 0078a5f0 ////

void __thiscall FUN_0078a5f0(void *this,byte param_1)

{
  *(uint *)((int)this + 0x98) =
       *(uint *)((int)this + 0x98) ^ ((uint)param_1 << 2 ^ *(uint *)((int)this + 0x98)) & 4;
  return;
}


//// FUNCTION FUN_0078a610 @ 0078a610 ////

uint __fastcall FUN_0078a610(int param_1)

{
  return *(uint *)(param_1 + 0x98) & 1;
}


//// FUNCTION FUN_0078a630 @ 0078a630 ////

void __fastcall FUN_0078a630(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x74))(1);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}


//// FUNCTION FUN_0078a700 @ 0078a700 ////

void __fastcall FUN_0078a700(int param_1)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = uVar1 | 1;
  if ((*(int *)(param_1 + 0x74) == 0) ||
     (((uVar1 & 2) == 0 && (*(int *)(*(int *)(param_1 + 0x74) + 0x3b8) == 3)))) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x9c) + 0x18);
    if (*(int *)((int)pvVar2 + 0x18) != *(int *)(param_1 + 0x90)) {
      Engine_SetResourceReference(pvVar2,*(int *)(param_1 + 0x90));
    }
    pvVar2 = *(void **)(*(int *)(param_1 + 0xa0) + 0x18);
    if (*(int *)((int)pvVar2 + 0x18) != *(int *)(param_1 + 0x90)) {
      Engine_SetResourceReference(pvVar2,*(int *)(param_1 + 0x90));
    }
  }
  return;
}


//// FUNCTION FUN_0078a760 @ 0078a760 ////

void __fastcall FUN_0078a760(int param_1)

{
  void *pvVar1;
  
  if ((*(int *)(param_1 + 0x74) == 0) || (*(int *)(*(int *)(param_1 + 0x74) + 0x3b8) == 3)) {
    pvVar1 = *(void **)(*(int *)(param_1 + 0x9c) + 0x18);
    if (*(int *)((int)pvVar1 + 0x18) != *(int *)(param_1 + 0x8c)) {
      Engine_SetResourceReference(pvVar1,*(int *)(param_1 + 0x8c));
    }
    pvVar1 = *(void **)(*(int *)(param_1 + 0xa0) + 0x18);
    if (*(int *)((int)pvVar1 + 0x18) != *(int *)(param_1 + 0x8c)) {
      Engine_SetResourceReference(pvVar1,*(int *)(param_1 + 0x8c));
    }
  }
  *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) & 0xfffffffe;
  return;
}


//// FUNCTION FUN_0078a7b0 @ 0078a7b0 ////

void __fastcall FUN_0078a7b0(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x98) = *(uint *)(param_1 + 0x98) | 2;
    pvVar2 = *(void **)(*(int *)(param_1 + 0x9c) + 0x18);
    if (*(int *)((int)pvVar2 + 0x18) != iVar1) {
      Engine_SetResourceReference(pvVar2,iVar1);
    }
    pvVar2 = *(void **)(*(int *)(param_1 + 0xa0) + 0x18);
    if (*(int *)((int)pvVar2 + 0x18) != *(int *)(param_1 + 0x94)) {
      Engine_SetResourceReference(pvVar2,*(int *)(param_1 + 0x94));
    }
  }
  return;
}


//// FUNCTION FUN_0078a800 @ 0078a800 ////

void __fastcall FUN_0078a800(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar1 = *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = uVar1 & 0xfffffffd;
    pvVar2 = *(void **)(*(int *)(param_1 + 0x9c) + 0x18);
    if ((uVar1 & 1) == 0) {
      if (*(int *)((int)pvVar2 + 0x18) != *(int *)(param_1 + 0x8c)) {
        Engine_SetResourceReference(pvVar2,*(int *)(param_1 + 0x8c));
      }
      iVar3 = *(int *)(param_1 + 0x8c);
    }
    else {
      if (*(int *)((int)pvVar2 + 0x18) != *(int *)(param_1 + 0x90)) {
        Engine_SetResourceReference(pvVar2,*(int *)(param_1 + 0x90));
      }
      iVar3 = *(int *)(param_1 + 0x90);
    }
    pvVar2 = *(void **)(*(int *)(param_1 + 0xa0) + 0x18);
    if (*(int *)((int)pvVar2 + 0x18) != iVar3) {
      Engine_SetResourceReference(pvVar2,iVar3);
    }
  }
  return;
}


//// FUNCTION FUN_0078a880 @ 0078a880 ////

void FUN_0078a880(void)

{
  void *_Memory;
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  if (DAT_0104e6b8 != (undefined4 *)0x0) {
    _Memory = (void *)DAT_0104e6b8[6];
    if (_Memory != (void *)0x0) {
      FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    DAT_0104e6b8[6] = 0;
    puVar1 = DAT_0104e6b8;
    LVar3 = InterlockedDecrement(DAT_0104e6b8 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0104e6b8 = (undefined4 *)0x0;
    DAT_0105b588 = uVar2;
  }
  return;
}


//// FUNCTION FUN_0078a8f0 @ 0078a8f0 ////

/* WARNING: Removing unreachable block (ram,0x0078a907) */

void __fastcall FUN_0078a8f0(int param_1)

{
  byte bVar1;
  undefined3 uVar2;
  byte bVar3;
  undefined4 local_10;
  undefined4 local_8;
  
  local_8 = *(uint *)(param_1 + 0x88);
  bVar1 = (byte)(local_8 >> 0x18);
  bVar3 = bVar1 >> 1;
  if (0xff < local_8 >> 0x19) {
    bVar3 = 0xff;
  }
  local_10._0_3_ = (undefined3)local_8;
  uVar2 = (undefined3)local_10;
  local_10 = CONCAT13(bVar3,(undefined3)local_10);
  if ((*(byte *)(param_1 + 0x98) & 8) != 0) {
    if (0x40 < bVar3) {
      local_10 = CONCAT13(0x40,(undefined3)local_10);
    }
    if (0x40 < bVar1) {
      local_8 = CONCAT13(0x40,uVar2);
    }
  }
  if (((*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x18) + 0x18) + 0x54) & 8) == 0) ||
     ((*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x18) + 0x18) + 0x54) & 8) == 0)) {
    local_10 = local_10 & 0xffffff;
    local_8 = local_8 & 0xffffff;
  }
  *(uint *)(*(int *)(*(int *)(param_1 + 0x9c) + 0x20) + 0x2c) = local_10;
  *(uint *)(*(int *)(*(int *)(param_1 + 0xa0) + 0x20) + 0x2c) = local_8;
  return;
}


//// FUNCTION FUN_0078aa20 @ 0078aa20 ////

void __thiscall FUN_0078aa20(void *this,char *param_1,char *param_2,char *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined1 uVar3;
  LONG LVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbac6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0x9c) != 0) {
    pvVar7 = *(void **)(*(int *)((int)this + 0x9c) + 0x18);
    if (pvVar7 != (void *)0x0) {
      ExceptionList = &pvStack_c;
      FUN_00990ec0((int)pvVar7);
                    /* WARNING: Subroutine does not return */
      _free(pvVar7);
    }
    ExceptionList = &pvStack_c;
    *(undefined4 *)(*(int *)((int)this + 0x9c) + 0x18) = 0;
    puVar5 = *(undefined4 **)((int)this + 0x9c);
    if (puVar5 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar5 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      DAT_0105b588 = uVar3;
      *(undefined4 *)((int)this + 0x9c) = 0;
    }
  }
  if (*(int *)((int)this + 0xa0) != 0) {
    pvVar7 = *(void **)(*(int *)((int)this + 0xa0) + 0x18);
    if (pvVar7 != (void *)0x0) {
      FUN_00990ec0((int)pvVar7);
                    /* WARNING: Subroutine does not return */
      _free(pvVar7);
    }
    *(undefined4 *)(*(int *)((int)this + 0xa0) + 0x18) = 0;
    puVar5 = *(undefined4 **)((int)this + 0xa0);
    if (puVar5 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar5 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      DAT_0105b588 = uVar3;
      *(undefined4 *)((int)this + 0xa0) = 0;
    }
  }
  puVar5 = FUN_0040a690(1,'\x01');
  *(undefined4 **)((int)this + 0x9c) = puVar5;
  *(byte *)(puVar5 + 9) = *(byte *)(puVar5 + 9) | 0x40;
  puVar5 = operator_new(0x24);
  uStack_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_009910f0(puVar5);
  }
  *(undefined4 *)(*(int *)((int)this + 0x9c) + 0x18) = uVar6;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x9c) + 0x18) + 0xc) = 6;
  iVar2 = *(int *)(*(int *)((int)this + 0x9c) + 0x18);
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xbfffffff;
  iVar2 = *(int *)(*(int *)((int)this + 0x9c) + 0x18);
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x80000000;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x9c) + 0x18) + 0x14);
  *puVar1 = *puVar1 | 1;
  iVar2 = *(int *)(*(int *)((int)this + 0x9c) + 0x18);
  uStack_4 = 0xffffffff;
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfeffffff;
  puVar5 = FUN_0040a690(1,'\x01');
  *(undefined4 **)((int)this + 0xa0) = puVar5;
  *(byte *)(puVar5 + 9) = *(byte *)(puVar5 + 9) | 0x40;
  puVar5 = operator_new(0x24);
  uStack_4 = 1;
  if (puVar5 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_009910f0(puVar5);
  }
  *(undefined4 *)(*(int *)((int)this + 0xa0) + 0x18) = uVar6;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0xa0) + 0x18) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xa0) + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xa0) + 0x18) + 0x10);
  *puVar1 = *puVar1 | 0x80000000;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xa0) + 0x18) + 0x14);
  *puVar1 = *puVar1 & 0xfffffffe;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xa0) + 0x18) + 0x10);
  *puVar1 = *puVar1 & 0xfeffffff;
  uStack_4 = 0xffffffff;
  if (*(void **)((int)this + 0x8c) != (void *)0x0) {
    FUN_0099b400(*(void **)((int)this + 0x8c));
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  pvVar7 = FUN_0099bb50(param_1,0,0,0,'\0');
  *(void **)((int)this + 0x8c) = pvVar7;
  if (*(void **)((int)this + 0x90) != (void *)0x0) {
    FUN_0099b400(*(void **)((int)this + 0x90));
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  pvVar7 = FUN_0099bb50(param_2,0,0,0,'\0');
  *(void **)((int)this + 0x90) = pvVar7;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    if (*(void **)((int)this + 0x94) != (void *)0x0) {
      FUN_0099b400(*(void **)((int)this + 0x94));
      *(undefined4 *)((int)this + 0x94) = 0;
    }
    pvVar7 = FUN_0099bb50(param_3,0,0,0,'\0');
    *(void **)((int)this + 0x94) = pvVar7;
  }
  pvVar7 = *(void **)(*(int *)((int)this + 0x9c) + 0x18);
  if (*(int *)((int)pvVar7 + 0x18) != *(int *)((int)this + 0x8c)) {
    Engine_SetResourceReference(pvVar7,*(int *)((int)this + 0x8c));
  }
  pvVar7 = *(void **)(*(int *)((int)this + 0xa0) + 0x18);
  if (*(int *)((int)pvVar7 + 0x18) != *(int *)((int)this + 0x8c)) {
    Engine_SetResourceReference(pvVar7,*(int *)((int)this + 0x8c));
  }
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0x9c) + 0x20) + 0x24) =
       *(undefined4 *)((int)this + 0x84);
  puVar5 = *(undefined4 **)(*(int *)((int)this + 0x9c) + 0x20);
  *puVar5 = *(undefined4 *)((int)this + 0x78);
  puVar5[1] = *(undefined4 *)((int)this + 0x7c);
  puVar5[2] = *(undefined4 *)((int)this + 0x80);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0x9c) + 0x20) + 0x2c) = 0xffffffff;
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0xa0) + 0x20) + 0x24) =
       *(undefined4 *)((int)this + 0x84);
  puVar5 = *(undefined4 **)(*(int *)((int)this + 0xa0) + 0x20);
  *puVar5 = *(undefined4 *)((int)this + 0x78);
  puVar5[1] = *(undefined4 *)((int)this + 0x7c);
  puVar5[2] = *(undefined4 *)((int)this + 0x80);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 0xa0) + 0x20) + 0x2c) = 0xffffffff;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0078ad90 @ 0078ad90 ////

void __fastcall FUN_0078ad90(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x74);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  puVar2 = FUN_0089f730('\x01');
  *(undefined4 **)(param_1 + 0x74) = puVar2;
  return;
}


//// FUNCTION FUN_0078ade0 @ 0078ade0 ////

undefined4 * __fastcall FUN_0078ade0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbae3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  piVar1 = param_1 + 0x19;
  *param_1 = &PTR_FUN_00d50098;
  param_1[0x1b] = 0;
  *piVar1 = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0xff;
  *(undefined1 *)((int)param_1 + 0x89) = 0xff;
  *(undefined1 *)((int)param_1 + 0x8a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x8b) = 0xff;
  param_1[0x22] = 0xffffffff;
  param_1[0x29] = 0;
  local_4 = 1;
  param_1[0x1b] = param_1;
  FUN_00acdb9e(0xe59a28);
  iVar2 = FUN_0097dda0();
  param_1[0x1c] = iVar2;
  if (s___AV__InList_VCInteractGUI_TM____00e59a00[0x25] != '\0') {
    iVar2 = 100;
    pcVar4 = "AllLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe59a28);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__InList_VCInteractGUI_TM____00e59a00[0x25] = '\0';
  }
  param_1[0x1a] = &DAT_0104e6d8;
  *piVar1 = (int)DAT_0104e6d8;
  *(int **)((int)DAT_0104e6d8 + 4) = piVar1;
  DAT_0104e6d8 = piVar1;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x21] = 0x3f800000;
  param_1[0x26] = param_1[0x26] & 0xffffff04 | 4;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0078af30 @ 0078af30 ////

/* WARNING: Removing unreachable block (ram,0x0078b0a9) */

void __fastcall FUN_0078af30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined1 uVar4;
  LONG LVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdbb03;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d50098;
  puVar2 = (undefined4 *)param_1[0x1d];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0x1d] = 0;
  }
  if ((void *)param_1[0x23] != (void *)0x0) {
    FUN_0099b400((void *)param_1[0x23]);
    param_1[0x23] = 0;
  }
  if ((void *)param_1[0x24] != (void *)0x0) {
    FUN_0099b400((void *)param_1[0x24]);
    param_1[0x24] = 0;
  }
  if ((void *)param_1[0x25] != (void *)0x0) {
    FUN_0099b400((void *)param_1[0x25]);
    param_1[0x25] = 0;
  }
  if (param_1[0x27] != 0) {
    pvVar3 = *(void **)(param_1[0x27] + 0x18);
    if (pvVar3 != (void *)0x0) {
      FUN_00990ec0((int)pvVar3);
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    *(undefined4 *)(param_1[0x27] + 0x18) = 0;
    puVar2 = (undefined4 *)param_1[0x27];
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 4);
      uVar4 = DAT_0105b588;
      if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar4;
      param_1[0x27] = 0;
    }
  }
  if (param_1[0x28] != 0) {
    pvVar3 = *(void **)(param_1[0x28] + 0x18);
    if (pvVar3 != (void *)0x0) {
      FUN_00990ec0((int)pvVar3);
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    *(undefined4 *)(param_1[0x28] + 0x18) = 0;
    puVar2 = (undefined4 *)param_1[0x28];
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 4);
      uVar4 = DAT_0105b588;
      if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar4;
      param_1[0x28] = 0;
    }
  }
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0078b0e0 @ 0078b0e0 ////

void FUN_0078b0e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  puVar4 = DAT_0104e6cc;
  if (DAT_0104e6cc != &DAT_0104e6d8) {
    do {
      iVar2 = puVar4[2];
      if ((*(int *)(iVar2 + 0x74) == 0) || (*(int *)(*(int *)(iVar2 + 0x74) + 0x3b8) == 3)) {
        pvVar3 = *(void **)(*(int *)(iVar2 + 0x9c) + 0x18);
        if (*(int *)((int)pvVar3 + 0x18) != *(int *)(iVar2 + 0x8c)) {
          Engine_SetResourceReference(pvVar3,*(int *)(iVar2 + 0x8c));
        }
        pvVar3 = *(void **)(*(int *)(iVar2 + 0xa0) + 0x18);
        if (*(int *)((int)pvVar3 + 0x18) != *(int *)(iVar2 + 0x8c)) {
          Engine_SetResourceReference(pvVar3,*(int *)(iVar2 + 0x8c));
        }
      }
      *(uint *)(iVar2 + 0x98) = *(uint *)(iVar2 + 0x98) & 0xfffffffe;
      puVar1 = puVar4 + 1;
      puVar4 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104e6d8);
  }
  return;
}


//// FUNCTION FUN_0078b150 @ 0078b150 ////

void __cdecl FUN_0078b150(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float fVar4;
  
  fVar3 = (float10)fpatan((float10)*(float *)(DAT_00f87aa0 + 0xd4) -
                          (float10)*(float *)(DAT_00f87aa0 + 0xe0),
                          (float10)*(float *)(DAT_00f87aa0 + 0xd0) -
                          (float10)*(float *)(DAT_00f87aa0 + 0xdc));
  fVar3 = FUN_004012c0((float)(fVar3 + (float10)1.5707964));
  DAT_0104e6bc = (float)fVar3;
  if ((float10)-0.7853982 <= fVar3) {
    if (fVar3 <= (float10)0.7853982) {
      fVar4 = 0.0;
    }
    else if (fVar3 <= (float10)2.3561945) {
      fVar4 = 1.5707964;
    }
    else {
      fVar4 = 3.1415927;
    }
  }
  else if ((float10)-2.3561945 <= fVar3) {
    fVar4 = -1.5707964;
  }
  else {
    fVar4 = 3.1415927;
  }
  fVar3 = FUN_004012c0(fVar4);
  DAT_0104e6c0 = (float)fVar3;
  if ((DAT_00f87b04 == 0) || (uVar1 = FUN_00423370(DAT_00f87b04), (char)uVar1 == '\0')) {
    puVar2 = DAT_0104e6cc;
    if (param_1 != 0) {
      for (; puVar2 != &DAT_0104e6d8; puVar2 = (undefined4 *)puVar2[1]) {
        if (((uint)((int *)puVar2[2])[0x26] >> 7 & 1) != 0) {
          (**(code **)(*(int *)puVar2[2] + 0x1c))();
        }
      }
    }
  }
  else {
    FUN_0054a410();
    puVar2 = DAT_0104e6cc;
    if (DAT_0104e6cc != &DAT_0104e6d8) {
      do {
        (**(code **)(*(int *)puVar2[2] + 0x1c))();
        puVar2 = (undefined4 *)puVar2[1];
      } while (puVar2 != &DAT_0104e6d8);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0078b2a0 @ 0078b2a0 ////

void FUN_0078b2a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbb1b;
  local_c = ExceptionList;
  local_10 = local_10 & 0xfffffffe | 2;
  local_14 = 0;
  local_1c = FUN_0078b150;
  local_18 = 7;
  ExceptionList = &local_c;
  FUN_009a14d0((int *)&local_1c);
  DAT_0104e6b8 = FUN_0040a690(1,'\x01');
  puVar1 = operator_new(0x24);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_009910f0(puVar1);
  }
  DAT_0104e6b8[6] = uVar2;
  *(undefined1 *)(DAT_0104e6b8[6] + 0xc) = 6;
  *(uint *)(DAT_0104e6b8[6] + 0x10) = *(uint *)(DAT_0104e6b8[6] + 0x10) & 0xbfffffff;
  *(uint *)(DAT_0104e6b8[6] + 0x10) = *(uint *)(DAT_0104e6b8[6] + 0x10) & 0xfeffffff;
  *(undefined4 *)(DAT_0104e6b8[8] + 0x2c) = 0xa01f1f6b;
  *(byte *)(DAT_0104e6b8 + 9) = *(byte *)(DAT_0104e6b8 + 9) | 0x40;
  local_4 = 0xffffffff;
  *(undefined4 *)(DAT_0104e6b8[8] + 0x24) = 0x400ccccd;
  pvVar3 = FUN_0099bb50("base.dds",0,0,0,'\0');
  if (*(void **)((int)DAT_0104e6b8[6] + 0x18) != pvVar3) {
    Engine_SetResourceReference((void *)DAT_0104e6b8[6],(int)pvVar3);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_0099b400(pvVar3);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0078b3e0 @ 0078b3e0 ////

void __cdecl FUN_0078b3e0(float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  ulonglong uVar3;
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
  
  local_14 = 0.0;
  local_18 = 0.0;
  local_1c = 0.0;
  local_24 = 0.0;
  local_28 = 0.0;
  local_2c = 0.0;
  local_10 = 1.0;
  local_20 = 1.0;
  local_30 = 1.0;
  local_c = 1.0;
  local_8 = 0.0;
  local_4 = 0.0;
  FUN_00527db0(&local_30,param_4);
  pfVar1 = (float *)DAT_0104e6b8[8];
  local_4 = param_3 + local_4;
  *pfVar1 = (local_24 + local_18 + local_30) * 0.0 + local_c + param_1;
  pfVar1[1] = (local_20 + local_2c + local_14) * 0.0 + param_2 + local_8;
  pfVar1[2] = (local_10 + local_28 + local_1c) * 0.0 + local_4;
  *(float *)(DAT_0104e6b8[8] + 0x28) = param_4;
  uVar3 = FUN_00acd42c();
  iVar2 = (int)uVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  *(char *)(DAT_0104e6b8[8] + 0x2f) = (char)iVar2;
  (**(code **)(*DAT_0104e6b8 + 8))();
  return;
}


//// FUNCTION FUN_0078b530 @ 0078b530 ////

void __fastcall FUN_0078b530(int param_1)

{
  float *pfVar1;
  
  FUN_0078a8f0(param_1);
  if ((*(byte *)(param_1 + 0x98) & 0x20) != 0) {
    pfVar1 = *(float **)(*(int *)(param_1 + 0xa0) + 0x20);
    FUN_0078b3e0(*pfVar1,pfVar1[1],pfVar1[2],*(float *)(param_1 + 0xa4));
  }
  (**(code **)(**(int **)(param_1 + 0xa0) + 8))();
  if ((*(byte *)(param_1 + 0x98) & 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0078b58f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x9c) + 8))();
    return;
  }
  return;
}


//// FUNCTION FUN_0078b5a0 @ 0078b5a0 ////

undefined4 * __thiscall FUN_0078b5a0(void *this,byte param_1)

{
  FUN_0078af30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0078b5c0 @ 0078b5c0 ////

void __fastcall FUN_0078b5c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d500dc;
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


//// FUNCTION FUN_0078b610 @ 0078b610 ////

undefined4 * __thiscall FUN_0078b610(void *this,byte param_1)

{
  FUN_0078b5c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0078b630 @ 0078b630 ////

void __fastcall FUN_0078b630(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d500dc;
  return;
}


//// FUNCTION FUN_0078b6a0 @ 0078b6a0 ////

uint __cdecl FUN_0078b6a0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((((-1 < (int)param_1) && ((int)param_1 < 0x100)) && (-1 < param_2)) && (param_2 < 0x100)) {
    iVar1 = param_1 * 0x100 + param_2;
    iVar2 = iVar1 + (iVar1 >> 0x1f & 7U);
    iVar3 = iVar2 >> 3;
    return CONCAT31((int3)(iVar2 >> 0xb),
                    (*(byte *)(g_OccupancyGrid256_B + iVar3) &
                    (byte)(1 << ((char)iVar1 + (char)iVar3 * -8 & 0x1fU))) != 0);
  }
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_0078b700 @ 0078b700 ////

void __fastcall FUN_0078b700(int param_1)

{
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = 1;
  *(undefined1 *)(param_1 + 0x34e) = 0;
  *(undefined1 *)(param_1 + 0x3a0) = 1;
  return;
}


//// FUNCTION FUN_0078b730 @ 0078b730 ////

void __thiscall FUN_0078b730(void *this,uint *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  param_4[1] = 0;
  *param_4 = 0;
  param_3[1] = 0;
  *param_3 = 0;
  if (*(int *)((int)this + 0x350) == 0) {
    iVar1 = (uint)(-1 < (int)(*param_2 - *param_1)) * 2 + -1;
    iVar6 = iVar1 * (*param_2 - *param_1);
    iVar2 = (uint)(-1 < (int)(param_2[1] - param_1[1])) * 2 + -1;
    iVar3 = iVar2 * (param_2[1] - param_1[1]);
    if ((1 < iVar6) && (1 < iVar3)) {
      if (*(int *)((int)this + 0x344) == 0) {
        *(uint *)((int)this + 0x344) = (iVar6 - iVar3 == 0 || iVar6 < iVar3) + 1;
      }
      iVar3 = 1;
      if (*(int *)((int)this + 0x344) == 1) {
        uVar5 = *param_1;
        uVar4 = FUN_00450840(uVar5 - iVar1,param_1[1]);
        if ((char)uVar4 != '\0') {
          uVar5 = FUN_00450840(uVar5 - iVar1,param_1[1] + iVar2);
          if ((char)uVar5 == '\0') {
            iVar3 = 0;
          }
        }
        *param_3 = *param_2 - iVar3 * iVar1;
        *param_4 = *param_2;
        param_3[1] = (iVar3 + 1) * iVar2 + param_1[1];
        param_4[1] = param_2[1];
        param_2[1] = iVar3 * iVar2 + param_1[1];
        return;
      }
      uVar5 = param_1[1];
      uVar4 = FUN_00450840(*param_1,uVar5 - iVar2);
      if ((char)uVar4 != '\0') {
        uVar5 = FUN_00450840(*param_1 + iVar1,uVar5 - iVar2);
        if ((char)uVar5 == '\0') {
          iVar3 = 0;
        }
      }
      param_3[1] = param_2[1] - iVar3 * iVar2;
      param_4[1] = param_2[1];
      *param_3 = (iVar3 + 1) * iVar1 + *param_1;
      *param_4 = *param_2;
      *param_2 = iVar3 * iVar1 + *param_1;
      return;
    }
    *(undefined4 *)((int)this + 0x344) = 0;
  }
  return;
}


//// FUNCTION FUN_0078b940 @ 0078b940 ////

void __thiscall FUN_0078b940(void *this,undefined4 param_1,undefined1 param_2)

{
  *(undefined4 *)((int)this + 0x350) = param_1;
  *(undefined1 *)((int)this + 0x34d) = param_2;
  return;
}


//// FUNCTION FUN_0078b990 @ 0078b990 ////

int * __thiscall FUN_0078b990(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0078ba40 @ 0078ba40 ////

undefined4 FUN_0078ba40(void)

{
  void *_Memory;
  undefined4 uVar1;
  
  _Memory = DAT_0104e708;
  if (DAT_0104e708 != (void *)0x0) {
    FUN_00990ec0((int)DAT_0104e708);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0104e708 = (void *)0x0;
  uVar1 = 0;
  if (DAT_0104e720 != (int *)0x0) {
    FUN_0091ee70(DAT_010504c4,(int *)0x0);
    FUN_0071b530(0,DAT_0104e720);
    (*(code *)DAT_0104e70c[1])();
    DAT_0104e720 = (int *)0x0;
    uVar1 = (*(code *)*DAT_0104e70c)();
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_0078bab0 @ 0078bab0 ////

undefined4 FUN_0078bab0(void)

{
  if ((DAT_0104e720 != 0) && (*(int *)(DAT_0104e720 + 0x350) != 6)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0078bad0 @ 0078bad0 ////

undefined4 FUN_0078bad0(void)

{
  if (DAT_0104e720 != 0) {
    return *(undefined4 *)(DAT_0104e720 + 0x350);
  }
  return 6;
}


//// FUNCTION FUN_0078baf0 @ 0078baf0 ////

void __cdecl FUN_0078baf0(int *param_1,int *param_2,float *param_3,char param_4,char param_5)

{
  int iVar1;
  float *pfVar2;
  undefined2 *puVar3;
  float fVar4;
  int *this;
  undefined4 *puVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbb5b;
  local_c = ExceptionList;
  iVar9 = *param_1;
  iVar10 = *param_2;
  iVar8 = iVar9;
  if (iVar10 <= iVar9) {
    iVar8 = iVar10;
  }
  if (iVar9 <= iVar10) {
    iVar9 = iVar10;
  }
  iVar10 = param_1[1];
  iVar1 = param_2[1];
  iVar7 = iVar10;
  if ((iVar10 < iVar1) || (iVar7 = iVar1, iVar10 <= iVar1)) {
    iVar10 = iVar1;
  }
  local_3c = (float)(iVar8 + -0x80) + (float)(iVar8 + -0x80);
  local_38 = (float)(iVar7 + -0x80) + (float)(iVar7 + -0x80);
  local_30 = (float)(iVar9 + -0x7f) + (float)(iVar9 + -0x7f);
  local_2c = (float)(iVar10 + -0x7f) + (float)(iVar10 + -0x7f);
  local_48 = local_3c - 1.0;
  local_44 = local_38 - 1.0;
  local_24 = local_30 + 1.0;
  local_20 = local_2c + 1.0;
  if (param_5 == '\0') {
    local_3c = local_3c - 1.0;
    local_38 = local_38 - 1.0;
    local_30 = local_30 - 1.0;
    local_2c = local_2c - 1.0;
    local_48 = local_48 - 1.0;
    local_44 = local_44 - 1.0;
    local_24 = local_24 - 1.0;
    local_20 = local_20 - 1.0;
  }
  ExceptionList = &local_c;
  this = FUN_00452010();
  this[0xc] = this[0xc] | 2;
  if (param_4 == '\0') {
    iVar10 = 2;
    iVar9 = 4;
  }
  else {
    iVar10 = 0x12;
    iVar9 = 0x10;
  }
  FUN_009e6720(this,iVar9,iVar10);
  pfVar2 = (float *)this[10];
  puVar3 = (undefined2 *)this[0xb];
  puVar3[2] = 2;
  puVar3[4] = 2;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[1] = 1;
  puVar3[5] = 3;
  fVar4 = *param_3;
  *pfVar2 = local_3c;
  pfVar2[1] = local_38;
  pfVar2[2] = 0.02;
  pfVar2[3] = fVar4;
  pfVar2[4] = 0.25;
  pfVar2[5] = 0.25;
  fVar4 = *param_3;
  pfVar2[6] = local_30;
  pfVar2[7] = local_38;
  pfVar2[8] = 0.02;
  pfVar2[9] = fVar4;
  pfVar2[10] = 0.75;
  pfVar2[0xb] = 0.25;
  fVar4 = *param_3;
  pfVar2[0xc] = local_30;
  pfVar2[0xd] = local_2c;
  pfVar2[0xe] = 0.02;
  pfVar2[0xf] = fVar4;
  pfVar2[0x10] = 0.75;
  pfVar2[0x11] = 0.75;
  fVar4 = *param_3;
  pfVar2[0x12] = local_3c;
  pfVar2[0x13] = local_2c;
  pfVar2[0x14] = 0.02;
  pfVar2[0x15] = fVar4;
  pfVar2[0x16] = 0.25;
  pfVar2[0x17] = 0.75;
  if (param_4 != '\0') {
    puVar3[8] = 0;
    puVar3[10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x19] = 0;
    puVar3[7] = 5;
    puVar3[0xc] = 5;
    puVar3[0xf] = 5;
    puVar3[0xe] = 1;
    puVar3[0x10] = 1;
    puVar3[0x17] = 1;
    puVar3[0x1a] = 3;
    puVar3[0x1c] = 3;
    puVar3[0x1e] = 1;
    puVar3[0x21] = 1;
    puVar3[0x25] = 3;
    puVar3[0x2a] = 3;
    puVar3[0x2d] = 3;
    puVar3[0x14] = 9;
    puVar3[0x16] = 9;
    puVar3[0x1f] = 9;
    puVar3[6] = 4;
    puVar3[9] = 4;
    puVar3[0xb] = 8;
    puVar3[0xd] = 6;
    puVar3[0x12] = 6;
    puVar3[0x13] = 7;
    puVar3[0x15] = 6;
    puVar3[0x18] = 8;
    puVar3[0x1b] = 8;
    puVar3[0x27] = 10;
    puVar3[0x29] = 0xc;
    puVar3[0x31] = 0xb;
    puVar3[0x1d] = 10;
    puVar3[0x24] = 10;
    puVar3[0x20] = 0xb;
    puVar3[0x22] = 0xb;
    puVar3[0x23] = 2;
    puVar3[0x2b] = 2;
    puVar3[0x30] = 2;
    puVar3[0x33] = 2;
    puVar3[0x26] = 0xd;
    puVar3[0x28] = 0xd;
    puVar3[0x2f] = 0xd;
    puVar3[0x2c] = 0xe;
    puVar3[0x2e] = 0xe;
    puVar3[0x35] = 0xe;
    puVar3[0x32] = 0xf;
    puVar3[0x34] = 0xf;
    fVar4 = *param_3;
    pfVar2[0x18] = local_48;
    pfVar2[0x19] = local_44;
    pfVar2[0x1a] = 0.02;
    pfVar2[0x1b] = fVar4;
    pfVar2[0x1c] = 0.0;
    pfVar2[0x1d] = 0.0;
    fVar4 = *param_3;
    pfVar2[0x1e] = local_3c;
    pfVar2[0x1f] = local_44;
    pfVar2[0x20] = 0.02;
    pfVar2[0x21] = fVar4;
    pfVar2[0x22] = 0.25;
    pfVar2[0x23] = 0.0;
    fVar4 = *param_3;
    pfVar2[0x24] = local_30;
    pfVar2[0x25] = local_44;
    pfVar2[0x26] = 0.02;
    pfVar2[0x27] = fVar4;
    pfVar2[0x28] = 0.75;
    pfVar2[0x29] = 0.0;
    fVar4 = *param_3;
    pfVar2[0x2a] = local_24;
    pfVar2[0x2b] = local_44;
    pfVar2[0x2c] = 0.02;
    pfVar2[0x2d] = fVar4;
    pfVar2[0x2e] = 1.0;
    pfVar2[0x2f] = 0.0;
    fVar4 = *param_3;
    pfVar2[0x30] = local_48;
    pfVar2[0x31] = local_38;
    pfVar2[0x32] = 0.02;
    pfVar2[0x33] = fVar4;
    pfVar2[0x34] = 0.0;
    pfVar2[0x35] = 0.25;
    fVar4 = *param_3;
    pfVar2[0x36] = local_24;
    pfVar2[0x37] = local_38;
    pfVar2[0x38] = 0.02;
    pfVar2[0x39] = fVar4;
    pfVar2[0x3a] = 1.0;
    pfVar2[0x3b] = 0.25;
    fVar4 = *param_3;
    pfVar2[0x3c] = local_48;
    pfVar2[0x3d] = local_2c;
    pfVar2[0x3e] = 0.02;
    pfVar2[0x3f] = fVar4;
    pfVar2[0x40] = 0.0;
    pfVar2[0x41] = 0.75;
    fVar4 = *param_3;
    pfVar2[0x42] = local_24;
    pfVar2[0x43] = local_2c;
    pfVar2[0x44] = 0.02;
    pfVar2[0x45] = fVar4;
    pfVar2[0x46] = 1.0;
    pfVar2[0x47] = 0.75;
    fVar4 = *param_3;
    pfVar2[0x48] = local_48;
    pfVar2[0x49] = local_20;
    pfVar2[0x4a] = 0.02;
    pfVar2[0x4b] = fVar4;
    pfVar2[0x4c] = 0.0;
    pfVar2[0x4d] = 1.0;
    fVar4 = *param_3;
    pfVar2[0x4e] = local_3c;
    pfVar2[0x4f] = local_20;
    pfVar2[0x50] = 0.02;
    pfVar2[0x51] = fVar4;
    pfVar2[0x52] = 0.25;
    pfVar2[0x53] = 1.0;
    fVar4 = *param_3;
    pfVar2[0x54] = local_30;
    pfVar2[0x55] = local_20;
    pfVar2[0x56] = 0.02;
    pfVar2[0x57] = fVar4;
    pfVar2[0x58] = 0.75;
    pfVar2[0x59] = 1.0;
    fVar4 = *param_3;
    pfVar2[0x5a] = local_24;
    pfVar2[0x5b] = local_20;
    pfVar2[0x5c] = 0.02;
    pfVar2[0x5d] = fVar4;
    pfVar2[0x5e] = 1.0;
    pfVar2[0x5f] = 1.0;
  }
  if (DAT_0104e708 == (void *)0x0) {
    puVar5 = operator_new(0x24);
    local_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      DAT_0104e708 = (void *)0x0;
    }
    else {
      DAT_0104e708 = (void *)FUN_009910f0(puVar5);
    }
    *(undefined1 *)((int)DAT_0104e708 + 0xc) = 5;
    *(uint *)((int)DAT_0104e708 + 0x10) = *(uint *)((int)DAT_0104e708 + 0x10) & 0xbfffffff;
    *(uint *)((int)DAT_0104e708 + 0x10) = *(uint *)((int)DAT_0104e708 + 0x10) | 0x80000000;
    local_4 = 0xffffffff;
    *(uint *)((int)DAT_0104e708 + 0x10) = *(uint *)((int)DAT_0104e708 + 0x10) & 0xfeffffff;
    pvVar6 = FUN_0099bb50("ui/landscape_softedge.dds",0,0,0,'\0');
    if (*(void **)((int)DAT_0104e708 + 0x18) != pvVar6) {
      Engine_SetResourceReference(DAT_0104e708,(int)pvVar6);
    }
    FUN_0099b400(pvVar6);
  }
  this[0x10] = (int)DAT_0104e708;
  FUN_009e6680(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0078c380 @ 0078c380 ////

int __cdecl FUN_0078c380(float *param_1,char param_2)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  float local_c;
  float local_8;
  
  FUN_00538ef0(&local_c,param_1,0.0);
  if (param_2 == '\0') {
    local_c = local_c + 1.0;
    local_8 = local_8 + 1.0;
  }
  fVar1 = *(float *)(DAT_00f890c0 + 0x44c) + 1.0;
  if (local_c <= fVar1) {
    local_c = fVar1;
  }
  if (*(float *)(DAT_00f890c0 + 0x454) <= local_c) {
    local_c = *(float *)(DAT_00f890c0 + 0x454);
  }
  if (local_8 <= *(float *)(DAT_00f890c0 + 0x450)) {
    local_8 = *(float *)(DAT_00f890c0 + 0x450);
  }
  if (*(float *)(DAT_00f890c0 + 0x458) <= local_8) {
    local_8 = *(float *)(DAT_00f890c0 + 0x458);
  }
  uVar3 = FUN_00acd42c();
  iVar2 = (int)uVar3 / 2;
  DAT_0104e6f8 = iVar2;
  uVar3 = FUN_00acd42c();
  DAT_0104e6fc = (int)uVar3 / 2;
  return iVar2;
}


//// FUNCTION FUN_0078c470 @ 0078c470 ////

uint __cdecl FUN_0078c470(int param_1,int param_2)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((((0x79 < param_1) && (param_1 < 0x86)) && (0x7f < param_2)) && (param_2 < 0x87)) {
LAB_0078c596:
    return param_1 & 0xffffff00;
  }
  FUN_0046cf10(&local_10,param_1,param_2);
  local_8 = local_10 + 1.0;
  local_4 = local_c + 1.0;
  param_1 = FUN_0046d260(&local_8,1);
  if ((char)param_1 == '\0') {
    local_8 = local_10 - 1.6;
    local_4 = local_c - 1.6;
    param_1 = FUN_0046d260(&local_8,1);
    if ((char)param_1 == '\0') {
      local_8 = local_10 + 3.6;
      local_4 = local_c - 1.6;
      param_1 = FUN_0046d260(&local_8,1);
      if ((char)param_1 == '\0') {
        local_8 = local_10 + 3.6;
        local_4 = local_c + 3.6;
        param_1 = FUN_0046d260(&local_8,1);
        if ((char)param_1 == '\0') {
          local_8 = local_10 - 1.6;
          local_4 = local_c + 3.6;
          param_1 = FUN_0046d260(&local_8,1);
          if ((char)param_1 == '\0') goto LAB_0078c596;
        }
      }
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}


//// FUNCTION FUN_0078c5b0 @ 0078c5b0 ////

ulonglong * __thiscall FUN_0078c5b0(void *this,ulonglong *param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 < 5) {
    *(undefined4 *)param_1 = *(undefined4 *)((int)this + param_2 * 8 + 0x368);
    *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + param_2 * 8 + 0x36c);
    FUN_00471b10((longlong *)param_1);
    return param_1;
  }
  uVar1 = FUN_00acd42c();
  *param_1 = uVar1;
  FUN_00471b10((longlong *)param_1);
  return param_1;
}


//// FUNCTION FUN_0078c600 @ 0078c600 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0078c600(void *this,int *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  local_18 = param_1[1];
  local_1c = *param_1;
  iVar2 = *(int *)((int)this + 0x350);
  uVar1 = 1;
  local_20 = 4;
  if (iVar2 == 2) {
    iVar3 = 0x10;
    iVar2 = 0xc;
LAB_0078c66f:
    local_20 = FUN_00990d30(iVar2,iVar3);
  }
  else {
    if (iVar2 == 3) {
      iVar3 = 6;
      uVar1 = 0;
      iVar2 = 4;
      goto LAB_0078c66f;
    }
    if (iVar2 == 4) {
      if (param_2 == '\0') {
        iVar2 = 8;
        do {
          FUN_009e4760(4,&local_1c);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      uVar1 = 5;
      local_20 = 8;
    }
  }
  if (_DAT_0104e704 == 0.0) {
    if (local_20 < 1) goto LAB_0078c6d5;
  }
  else {
    local_20 = 1;
  }
  do {
    if (*(int *)((int)this + 0x350) == 2) {
      uVar1 = FUN_00990ce0();
      uVar1 = ((uVar1 & 0xff ^ 0xffffffff) & 1) << 1 | 1;
    }
    FUN_009e4760(uVar1,&local_1c);
    local_20 = local_20 + -1;
  } while (local_20 != 0);
LAB_0078c6d5:
  iVar2 = param_1[1];
  local_c = 0;
  local_14 = (float)(*param_1 + -0x80) + (float)(*param_1 + -0x80);
  *(float *)((int)this + 0x398) = local_14;
  local_10 = (float)(iVar2 + -0x80) + (float)(iVar2 + -0x80);
  *(float *)((int)this + 0x39c) = local_10;
  FUN_009582c0(&local_14);
  *(undefined4 *)((int)this + 0x3d0) = 1;
  return;
}


//// FUNCTION FUN_0078c750 @ 0078c750 ////

void FUN_0078c750(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x78c756;
  iVar1 = GetPlayerStudio();
  if (iVar1 != 0) {
    uStack_8 = 0x78c75f;
    piVar2 = (int *)GetPlayerStudio();
    uStack_8 = 5;
    local_10 = param_1;
    local_c = param_2;
    FUN_00471b10((longlong *)&local_10);
    (**(code **)(*piVar2 + 0x2c))();
  }
  return;
}


//// FUNCTION FUN_0078c790 @ 0078c790 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __fastcall FUN_0078c790(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 local_8 [8];
  
  if (((*(int *)(param_1 + 0x350) != 6) && (*(int *)(param_1 + 0x348) == 1)) &&
     (_DAT_00e4ff4c <= (float)*(int *)(param_1 + 0x360))) {
    *(undefined1 *)(param_1 + 0x3a0) = 0;
    return *(undefined1 *)(param_1 + 0x3a0);
  }
  if (DAT_0104d970 != '\0') {
    *(undefined1 *)(param_1 + 0x3a0) = 1;
    return *(undefined1 *)(param_1 + 0x3a0);
  }
  if (*(int *)(param_1 + 0x350) != 6) {
    if (*(int *)(param_1 + 0x348) == 1) {
      piVar2 = (int *)GetPlayerStudio();
      puVar3 = (uint *)(**(code **)(*piVar2 + 0x24))(local_8);
      if ((*(int *)(param_1 + 0x394) <= (int)puVar3[1]) &&
         ((*(int *)(param_1 + 0x394) < (int)puVar3[1] || (*(uint *)(param_1 + 0x390) <= *puVar3))))
      {
        *(undefined1 *)(param_1 + 0x3a0) = 1;
        return 1;
      }
      *(undefined1 *)(param_1 + 0x3a0) = 0;
      return 0;
    }
    piVar2 = (int *)GetPlayerStudio();
    puVar3 = (uint *)(param_1 + 0x368 + *(int *)(param_1 + 0x350) * 8);
    puVar4 = (uint *)(**(code **)(*piVar2 + 0x24))(local_8);
    uVar1 = puVar3[1];
    if (((int)uVar1 <= (int)puVar4[1]) && (((int)uVar1 < (int)puVar4[1] || (*puVar3 <= *puVar4)))) {
      *(undefined1 *)(param_1 + 0x3a0) = 1;
      return 1;
    }
    *(undefined1 *)(param_1 + 0x3a0) = 0;
  }
  return *(undefined1 *)(param_1 + 0x3a0);
}


//// FUNCTION FUN_0078c8f0 @ 0078c8f0 ////

undefined4 __fastcall FUN_0078c8f0(int param_1)

{
  undefined3 extraout_var;
  
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x34e) = 0;
  FUN_0078c790(param_1);
  return CONCAT31(extraout_var,1);
}


//// FUNCTION FUN_0078c910 @ 0078c910 ////

undefined1 __fastcall FUN_0078c910(int param_1)

{
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = 2;
  *(undefined1 *)(param_1 + 0x34e) = 1;
  FUN_0078c790(param_1);
  return 1;
}


//// FUNCTION FUN_0078c940 @ 0078c940 ////

undefined1 __fastcall FUN_0078c940(int param_1)

{
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = 3;
  *(undefined1 *)(param_1 + 0x34e) = 1;
  FUN_0078c790(param_1);
  return 1;
}


//// FUNCTION FUN_0078c970 @ 0078c970 ////

undefined1 __fastcall FUN_0078c970(int param_1)

{
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = 4;
  *(undefined1 *)(param_1 + 0x34e) = 1;
  FUN_0078c790(param_1);
  return 1;
}


//// FUNCTION FUN_0078c9a0 @ 0078c9a0 ////

void __cdecl FUN_0078c9a0(int *param_1,char param_2)

{
  float local_4;
  
  local_4 = -NAN;
  FUN_0078baf0(param_1,param_1,&local_4,'\0',param_2);
  return;
}


//// FUNCTION FUN_0078c9d0 @ 0078c9d0 ////

undefined4 __thiscall FUN_0078c9d0(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  
  piVar2 = param_1;
  if ((*(int *)((int)this + 0x350) == 1) || (*(int *)((int)this + 0x350) == 0)) {
    uVar4 = FUN_0078c470(*param_1,param_1[1]);
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
  }
  iVar1 = *(int *)((int)this + 0x350);
  param_1 = (int *)0xffc8ffc8;
  if (iVar1 == 1) {
    param_1 = (int *)0xff804040;
  }
  else if (*(char *)((int)this + 0x3a0) == '\0') {
    param_1 = (int *)0xffff8080;
  }
  if ((iVar1 == 1) || (iVar1 == 0)) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  uVar4 = FUN_0078baf0(piVar2,piVar2,(float *)&param_1,(char)param_2,cVar3);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_0078ca90 @ 0078ca90 ////

void __fastcall FUN_0078ca90(int *param_1)

{
  int iVar1;
  uint3 uVar2;
  int local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00423320(DAT_00f87b04);
  if (iVar1 == 0) {
    FUN_0073fb40(param_1);
    iVar1 = param_1[0xd4];
    if (((iVar1 != 6) && ((char)param_1[0xd7] != '\0')) && (param_1[0xd2] == 0)) {
      local_8 = DAT_0104e6f8;
      local_4 = DAT_0104e6fc;
      uVar2 = (uint3)((uint)iVar1 >> 8);
      if ((iVar1 != 0) && (iVar1 != 1)) {
        FUN_0078c9d0(param_1,&local_8,CONCAT31(uVar2,1));
        return;
      }
      FUN_0078c9d0(param_1,&local_8,(uint)uVar2 << 8);
    }
  }
  return;
}


//// FUNCTION FUN_0078cb10 @ 0078cb10 ////

void __fastcall FUN_0078cb10(float *param_1)

{
  int iVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  
  if (param_1[0xd2] == 0.0) {
    return;
  }
  if (*(char *)(param_1 + 0xd7) == '\0') {
    return;
  }
  fVar2 = param_1[0xd4];
  local_2c = param_1;
  if ((fVar2 != 0.0) || (*(char *)((int)param_1 + 0x34d) != '\0')) {
    local_30 = (float *)0xffffffff;
    if ((fVar2 == 1.4013e-45) || ((fVar2 == 0.0 && (*(char *)((int)param_1 + 0x34d) != '\0')))) {
      local_30 = (float *)0xffff8080;
      local_18 = param_1 + 0xd5;
      local_20 = (float *)*local_18;
      pfVar10 = local_20;
      if (((int)local_20 < (int)DAT_0104e6f8) ||
         (pfVar10 = DAT_0104e6f8, (int)local_20 <= (int)DAT_0104e6f8)) {
        local_20 = DAT_0104e6f8;
      }
      local_2c = (float *)param_1[0xd6];
      local_28 = local_2c;
      if (((int)local_2c < (int)DAT_0104e6fc) ||
         (local_28 = DAT_0104e6fc, (int)local_2c <= (int)DAT_0104e6fc)) {
        local_2c = DAT_0104e6fc;
      }
      param_1[0xd8] = 0.0;
      if ((int)pfVar10 <= (int)local_20) {
        iVar6 = (int)pfVar10 << 8;
        do {
          pfVar11 = local_28;
          if ((int)local_28 <= (int)local_2c) {
            do {
              if ((((-1 < iVar6) && (iVar6 < 0x10000)) && (-1 < (int)pfVar11)) &&
                 ((((int)pfVar11 < 0x100 &&
                   (iVar1 = iVar6 + (int)pfVar11, iVar7 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3,
                   (*(byte *)(iVar7 + g_OccupancyGrid256_A) &
                   (byte)(1 << ((char)iVar1 + (char)iVar7 * -8 & 0x1fU))) != 0)) &&
                  (uVar4 = FUN_0078c470((int)pfVar10,(int)pfVar11), (char)uVar4 != '\0')))) {
                param_1[0xd8] = (float)((int)param_1[0xd8] + 1);
              }
              pfVar11 = (float *)((int)pfVar11 + 1);
            } while ((int)pfVar11 <= (int)local_2c);
          }
          pfVar10 = (float *)((int)pfVar10 + 1);
          iVar6 = iVar6 + 0x100;
        } while ((int)pfVar10 <= (int)local_20);
      }
    }
    else {
      uVar5 = (int)DAT_0104e6fc - (int)param_1[0xd6] >> 0x1f;
      local_18 = param_1 + 0xd5;
      uVar9 = (int)DAT_0104e6f8 - (int)param_1[0xd5] >> 0x1f;
      param_1[0xd8] =
           (float)(((((int)DAT_0104e6fc - (int)param_1[0xd6] ^ uVar5) - uVar5) + 1) *
                  ((((int)DAT_0104e6f8 - (int)param_1[0xd5] ^ uVar9) - uVar9) + 1));
    }
    if (*(char *)(param_1 + 0xe8) == '\0') {
      local_30 = (float *)0xffff8080;
    }
    if ((param_1[0xd4] == 1.4013e-45) || (param_1[0xd4] == 0.0)) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
    }
    FUN_0078baf0((int *)&DAT_0104e6f8,(int *)local_18,(float *)&local_30,
                 *(char *)((int)param_1 + 0x34e),cVar3);
    return;
  }
  pfVar10 = (float *)param_1[0xd5];
  pfVar11 = (float *)param_1[0xd6];
  local_18 = DAT_0104e6f8;
  local_14 = DAT_0104e6fc;
  local_20 = pfVar10;
  local_1c = pfVar11;
  FUN_0078b730(param_1,(uint *)&local_20,(int *)&local_18,(int *)&local_28,(int *)&local_10);
  param_1[0xd8] = 0.0;
  pfVar12 = pfVar10;
  if (((int)pfVar10 < (int)local_18) ||
     (pfVar12 = local_18, local_30 = pfVar10, (int)pfVar10 <= (int)local_18)) {
    local_30 = local_18;
  }
  pfVar10 = pfVar11;
  if (((int)pfVar11 < (int)local_14) || (pfVar10 = local_14, (int)pfVar11 <= (int)local_14)) {
    pfVar11 = local_14;
  }
  pfVar13 = pfVar10;
  local_18 = pfVar12;
  if ((int)pfVar12 <= (int)local_30) {
    do {
      for (; (int)pfVar13 <= (int)pfVar11; pfVar13 = (float *)((int)pfVar13 + 1)) {
        local_14 = pfVar13;
        uVar4 = FUN_0078c9d0(local_2c,(int *)&local_18,0);
        if ((((char)uVar4 != '\0') &&
            (uVar5 = FUN_00450840((uint)pfVar12,(int)pfVar13), (char)uVar5 == '\0')) &&
           (uVar4 = FUN_0078c470((int)pfVar12,(int)pfVar13), (char)uVar4 != '\0')) {
          local_2c[0xd8] = (float)((int)local_2c[0xd8] + 1);
        }
      }
      local_18 = (float *)((int)pfVar12 + 1);
      pfVar13 = pfVar10;
      pfVar12 = local_18;
    } while ((int)local_18 <= (int)local_30);
  }
  pfVar10 = local_2c;
  if ((local_28 == (float *)0x0) && (local_10 == (float *)0x0)) {
    if ((local_24 == (float *)0x0) && (local_c == (float *)0x0)) {
      return;
    }
LAB_0078cc5d:
    local_30 = local_28;
    local_18 = local_10;
    if ((int)local_10 < (int)local_28) goto LAB_0078cc65;
  }
  else {
    local_18 = local_28;
    if ((int)local_10 <= (int)local_28) goto LAB_0078cc5d;
  }
  local_30 = local_10;
LAB_0078cc65:
  local_28 = local_24;
  if (((int)local_24 < (int)local_c) ||
     (local_28 = local_c, pfVar11 = local_24, (int)local_24 <= (int)local_c)) {
    pfVar11 = local_c;
  }
  pfVar12 = local_28;
  pfVar13 = local_18;
  if ((int)local_30 < (int)local_18) {
    return;
  }
  do {
    for (; (int)pfVar12 <= (int)pfVar11; pfVar12 = (float *)((int)pfVar12 + 1)) {
      local_14 = pfVar12;
      uVar4 = FUN_0078c9d0(pfVar10,(int *)&local_18,0);
      if ((((char)uVar4 != '\0') &&
          (((((int)pfVar13 < 0 || (0xff < (int)pfVar13)) || ((int)pfVar12 < 0)) ||
           ((0xff < (int)pfVar12 ||
            (pfVar8 = pfVar12 + (int)pfVar13 * 0x40,
            iVar6 = (int)((int)pfVar8 + ((int)pfVar8 >> 0x1f & 7U)) >> 3,
            (*(byte *)(iVar6 + g_OccupancyGrid256_A) &
            (byte)(1 << ((char)pfVar8 + (char)iVar6 * -8 & 0x1fU))) == 0)))))) &&
         (uVar4 = FUN_0078c470((int)pfVar13,(int)pfVar12), (char)uVar4 != '\0')) {
        pfVar8 = pfVar10 + 0xd8;
        *pfVar8 = (float)((int)*pfVar8 + 1);
      }
    }
    local_18 = (float *)((int)pfVar13 + 1);
    pfVar12 = local_28;
    pfVar13 = local_18;
  } while ((int)local_18 <= (int)local_30);
  return;
}


//// FUNCTION FUN_0078cf00 @ 0078cf00 ////

uint __thiscall FUN_0078cf00(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  void *this_00;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 local_40;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined1 local_28 [40];
  
  uVar3 = param_1[1];
  uVar1 = *param_1;
  uVar2 = FUN_00450840(uVar1,uVar3);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_0078c470(uVar1,uVar3);
    if ((char)uVar2 != '\0') {
      local_30 = (float)(int)(param_1[1] - 0x80) + (float)(int)(param_1[1] - 0x80);
      local_2c = 0;
      local_34 = (float)(int)(*param_1 - 0x80) + (float)(int)(*param_1 - 0x80);
      FUN_009840b0(&local_40,&local_34);
      *(undefined4 *)((int)this + 0x398) = (undefined4)local_40;
      *(undefined4 *)((int)this + 0x39c) = local_40._4_4_;
      local_38 = 0;
      FUN_009582c0((undefined4 *)&local_40);
      uVar3 = FUN_009a20f0(&DAT_0105c2e8,&local_34,2.0);
      if ((char)uVar3 != '\0') {
        FUN_009af7b0(DAT_0105cbec,&local_34,(int *)0x7,4,&LAB_00420160);
        iVar4 = FUN_00990d30(0,100);
        if (0x3c < iVar4) {
          FUN_009af7b0(DAT_0105cbec,&local_34,(int *)0x0,0,&LAB_00420160);
        }
      }
      FUN_004658d0((undefined4 *)*param_1,param_1[1]);
      puVar9 = &DAT_00d17518;
      iVar8 = 0;
      pbVar5 = (byte *)FUN_0041c9c0(local_28,"PAVING_SLAB");
      iVar4 = 2;
      this_00 = (void *)FUN_004f3b20();
      FUN_004f3270(this_00,iVar4,pbVar5,iVar8,puVar9);
      local_40._0_4_ = *(undefined4 *)((int)this + 0x368);
      local_40._4_4_ = *(undefined4 *)((int)this + 0x36c);
      FUN_00471b10(&local_40);
      iVar4 = GetPlayerStudio();
      uVar7 = 0;
      if (iVar4 != 0) {
        piVar6 = (int *)GetPlayerStudio();
        FUN_00471b10((longlong *)&stack0xffffffa4);
        uVar7 = (**(code **)(*piVar6 + 0x2c))();
      }
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_0078d0a0 @ 0078d0a0 ////

uint __thiscall FUN_0078d0a0(void *this,uint param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar3 = FUN_00450840(param_1,param_2);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_0078b6a0(param_1,param_2);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_0078c470(param_1,param_2);
      if ((char)uVar3 != '\0') {
        FUN_00465a00(param_1,param_2);
        uVar4 = *(undefined4 *)((int)this + 0x370);
        uVar5 = *(undefined4 *)((int)this + 0x374);
        FUN_00471b10((longlong *)&stack0xffffffd8);
        FUN_0078c750(uVar4,uVar5);
        local_4 = 0;
        fVar1 = (float)(int)(param_1 - 0x80) + (float)(int)(param_1 - 0x80);
        *(float *)((int)this + 0x398) = fVar1;
        fVar2 = (float)(param_2 + -0x80) + (float)(param_2 + -0x80);
        *(float *)((int)this + 0x39c) = fVar2;
        local_c = fVar1;
        local_8 = fVar2;
        FUN_009582c0(&local_c);
        local_4 = 0;
        local_c = fVar1;
        local_8 = fVar2;
        FUN_009af7b0(DAT_0105cbec,&local_c,(int *)0x7,4,&LAB_00420160);
        *(undefined4 *)((int)this + 0x3d0) = 1;
        return 1;
      }
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_0078d1b0 @ 0078d1b0 ////

void __fastcall FUN_0078d1b0(int param_1)

{
  ulonglong *puVar1;
  int iVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  float fStack00000004;
  float fVar7;
  wchar_t *pwVar8;
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
  puStack_8 = &LAB_00cdbb80;
  local_c = ExceptionList;
  puVar1 = (ulonglong *)(param_1 + 0x390);
  ExceptionList = &local_c;
  uVar6 = FUN_00acd42c();
  *puVar1 = uVar6;
  FUN_00471b10((longlong *)puVar1);
  if (*(int *)(param_1 + 0x3b4) != 0) {
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 10;
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4 = 1;
    fStack00000004 = (float)(longlong)*puVar1 * 1.1920929e-07;
    if (0.0 < fStack00000004) {
      if (fStack00000004 < 10.0) {
        FUN_0043bd80(&local_4c,fStack00000004);
      }
      else {
        uVar6 = FUN_00acd42c();
        FUN_0043bd40(&local_4c,(int)uVar6);
      }
      if (*(char *)(param_1 + 0x3a0) == '\0') {
        sVar3 = FUN_00ace02d(L"<font color=#800000>");
        pwVar8 = L"<font color=#800000>";
      }
      else {
        sVar3 = FUN_00ace02d(L"<font color=#000000>");
        pwVar8 = L"<font color=#000000>";
      }
      FUN_0040cae0(&local_6c,pwVar8,sVar3);
      sVar3 = FUN_00ace02d(L"<c1>$");
      FUN_0040cae0(&local_6c,L"<c1>$",sVar3);
      puVar4 = FUN_0056b470(local_2c,&local_4c);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      sVar3 = FUN_00ace02d(L"</c1>");
      FUN_0040cae0(&local_6c,L"</c1>",sVar3);
      sVar3 = FUN_00ace02d(L"</font>");
      FUN_0040cae0(&local_6c,L"</font>",sVar3);
    }
    (**(code **)(**(int **)(param_1 + 0x3b4) + 0x54))(&local_6c);
    fVar7 = DAT_0105c430 + 20.0;
    iVar2 = **(int **)(param_1 + 0x3b4);
    uVar5 = FUN_0071b2a0();
    (**(code **)(iVar2 + 0x5c))(1,uVar5,fVar7);
    fVar7 = DAT_0105c434 - 20.0;
    iVar2 = **(int **)(param_1 + 0x3b4);
    uVar5 = FUN_0071b2a0();
    (**(code **)(iVar2 + 100))(1,uVar5,fVar7);
    (**(code **)(**(int **)(param_1 + 0x3b4) + 0x84))(0);
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0078d410 @ 0078d410 ////

void __thiscall FUN_0078d410(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbb9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0x354) = *param_1;
  puVar1 = *(undefined4 **)((int)this + 0x3b4);
  *(undefined4 *)((int)this + 0x358) = param_1[1];
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x348) = 1;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)((int)this + 0x3b4) = 0;
  }
  puVar1 = operator_new(0x3fc);
  uStack_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00833290(puVar1);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x3b4) = puVar1;
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xc))(*(undefined4 *)((int)this + 0x3b4),2);
  FUN_0078d1b0((int)this);
  ExceptionList = unaff_EDI;
  return;
}


//// FUNCTION FUN_0078d4e0 @ 0078d4e0 ////

void __fastcall FUN_0078d4e0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d50158;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0078d530 @ 0078d530 ////

void __fastcall FUN_0078d530(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d50158;
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


//// FUNCTION FUN_0078d580 @ 0078d580 ////

void __cdecl FUN_0078d580(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0078d720 @ 0078d720 ////

void __fastcall FUN_0078d720(int param_1)

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


//// FUNCTION FUN_0078d750 @ 0078d750 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0078d750(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdbbd4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d50184;
  param_1[0x14] = &PTR_LAB_00d50168;
  local_4 = 2;
  if (_DAT_00f88708 == 0.0) {
    FUN_00450d60(DAT_00f88720,0);
  }
  for (uVar5 = 0;
      (iVar2 = param_1[0xea], iVar2 != 0 && (uVar5 < (uint)(param_1[0xeb] - iVar2 >> 3)));
      uVar5 = uVar5 + 1) {
    FUN_0078cf00(param_1,(uint *)(iVar2 + uVar5 * 8));
    param_1[0xf4] = 1;
  }
  if ((void *)param_1[0xea] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xea]);
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  puVar3 = (undefined4 *)param_1[0xed];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    param_1[0xed] = 0;
  }
  FUN_009a1510(9);
  FUN_00470a70(DAT_0104917c,DAT_00f87aa0,0x57a,param_1,0);
  (*(code *)DAT_0104e70c[1])();
  DAT_0104e720 = 0;
  (*(code *)*DAT_0104e70c)();
  if (_DAT_0104e700 != 0.0) {
    FUN_004237f0(DAT_00f87b04);
  }
  if (0 < (int)param_1[0xf4]) {
    FUN_004662f0();
    FUN_00450ca0((int)DAT_00f88720);
    pvVar4 = (void *)FUN_00523ea0();
    FUN_005257e0(pvVar4);
  }
  pvVar4 = (void *)FUN_00523ea0();
  FUN_00525910(pvVar4);
  param_1[0xee] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xf0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf0] = param_1[0xef];
  }
  if (param_1[0xef] != 0) {
    *(undefined4 *)(param_1[0xef] + 4) = param_1[0xf0];
  }
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf3] = 0;
  if ((undefined4 *)param_1[0xf0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf0] = param_1[0xef];
  }
  if (param_1[0xef] != 0) {
    *(undefined4 *)(param_1[0xef] + 4) = param_1[0xf0];
  }
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  if ((void *)param_1[0xea] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xea]);
  }
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION WLandscapeGUI_Tick @ 0078d970 ////

void __fastcall WLandscapeGUI_Tick(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 extraout_EDX;
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbbeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078c790((int)param_1);
  iVar1 = FUN_00642110();
  FUN_00642330(iVar1,extraout_EDX);
  if ((param_1[0xea] != 0) && (param_1[0xeb] - param_1[0xea] >> 3 != 0)) {
    iVar1 = 6;
    while (((param_1[0xea] != 0 && (param_1[0xeb] - param_1[0xea] >> 3 != 0)) && (0 < iVar1))) {
      uVar2 = FUN_0078cf00(param_1,(uint *)(param_1[0xeb] + -8));
      if ((char)uVar2 != '\0') {
        iVar1 = iVar1 + -1;
      }
      if ((param_1[0xea] != 0) && (param_1[0xeb] - param_1[0xea] >> 3 != 0)) {
        param_1[0xeb] = param_1[0xeb] + -8;
      }
    }
    if ((param_1[0xea] == 0) || (param_1[0xeb] - param_1[0xea] >> 3 == 0)) {
      param_1[0xf4] = 1;
    }
  }
  if ((0 < param_1[0xf4]) && (iVar1 = param_1[0xf4] + -1, param_1[0xf4] = iVar1, iVar1 == 0)) {
    FUN_004662f0();
    FUN_00450ca0(DAT_00f88720);
    pvVar3 = (void *)FUN_00523ea0();
    FUN_005257e0(pvVar3);
  }
  if (((char)param_1[0xf5] != '\0') && (param_1[0xf6] != 0)) {
    pvVar3 = operator_new(0x160);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      local_18 = param_1[0xe6];
      local_14 = param_1[0xe7];
      local_10 = 0;
      piVar4 = FUN_00959040(pvVar3,&local_18,param_1[0xf6]);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar4);
    *(undefined1 *)(param_1 + 0xf5) = 0;
    param_1[0xf6] = 0;
  }
  WWindow_Tick(param_1);
  if ((param_1[0xd2] == 0) && ((char)param_1[0xd3] != '\0')) {
    FUN_0078ba40();
    ExceptionList = local_c;
    return;
  }
  FUN_0053d480((int)param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0078db50 @ 0078db50 ////

undefined4 * __thiscall FUN_0078db50(void *this,byte param_1)

{
  FUN_0078d750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0078db70 @ 0078db70 ////

void __thiscall FUN_0078db70(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cdbc00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x1fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_00457d60();
    param_1 = extraout_EDX;
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 3;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 8);
    local_8 = 0;
    FUN_0078d580(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION WLandscapeGUI_Constructor @ 0078dc40 ////

/* WARNING: Removing unreachable block (ram,0x0078df25) */
/* WARNING: Removing unreachable block (ram,0x0078dec2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall WLandscapeGUI_Constructor(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  void *pvVar5;
  char acStack_28 [10];
  undefined1 uStack_1e;
  undefined1 uStack_1a;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbc44;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d50184;
  param_1[0x14] = &PTR_LAB_00d50168;
  param_1[0xd2] = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined1 *)((int)param_1 + 0x34d) = 0;
  *(undefined1 *)((int)param_1 + 0x34e) = 0;
  param_1[0xd4] = 6;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)((int)param_1 + 0x35d) = 0;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  plVar1 = (longlong *)(param_1 + 0xda);
  *(undefined4 *)plVar1 = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  local_4 = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  uVar4 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0xe4) = uVar4;
  FUN_00471b10((longlong *)(param_1 + 0xe4));
  *(undefined1 *)(param_1 + 0xe8) = 1;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf1] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = param_1 + 0xee;
  param_1[0xee] = &PTR_FUN_00d18c2c;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0;
  param_1[0xf6] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (*(code *)DAT_0104e70c[1])();
  DAT_0104e720 = param_1;
  (*(code *)*DAT_0104e70c)();
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  if (_DAT_0104e700 != 0.0) {
    FUN_00424130(DAT_00f87b04,4,0,0);
  }
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xc))(param_1,2);
  pvVar5 = (void *)0x0;
  iVar3 = FUN_0071b2a0();
  FUN_00741d80(param_1,iVar3,pvVar5);
  *(undefined4 *)plVar1 = DAT_00f88728;
  param_1[0xdb] = DAT_00f8872c;
  FUN_00471b10(plVar1);
  param_1[0xdc] = DAT_00f88730;
  param_1[0xdd] = DAT_00f88734;
  FUN_00471b10((longlong *)(param_1 + 0xdc));
  param_1[0xde] = DAT_00f88738;
  param_1[0xdf] = DAT_00f8873c;
  FUN_00471b10((longlong *)(param_1 + 0xde));
  param_1[0xe0] = DAT_00f88740;
  param_1[0xe1] = DAT_00f88744;
  FUN_00471b10((longlong *)(param_1 + 0xe0));
  param_1[0xe2] = DAT_00f88748;
  param_1[0xe3] = DAT_00f8874c;
  FUN_00471b10((longlong *)(param_1 + 0xe2));
  FUN_009a14d0((int *)&stack0xffffffbc);
  acStack_28[0] = '\0';
  _strncpy(acStack_28,"lnd_subtlemode",0xe);
  uStack_1a = 0;
  pvStack_c._0_1_ = 3;
  CVarSystem_Register_STUBBED();
  acStack_28[0] = '\0';
  _strncpy(acStack_28,"lnd_paused",10);
  uStack_1e = 0;
  pvStack_c._0_1_ = 4;
  CVarSystem_Register_STUBBED();
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
  if (_DAT_00f88708 == 0.0) {
    FUN_00450d60(DAT_00f88720,1);
  }
  ExceptionList = pvStack_14;
  return param_1;
}


//// FUNCTION FUN_0078df70 @ 0078df70 ////

uint __cdecl FUN_0078df70(undefined1 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbc5b;
  local_c = ExceptionList;
  puVar3 = (undefined4 *)0x0;
  if (DAT_0104e720 != (undefined4 *)0x0) {
    return (uint)DAT_0104e720 & 0xffffff00;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x3e0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = WLandscapeGUI_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104e70c[1])();
  DAT_0104e720 = puVar3;
  uVar2 = (*(code *)*DAT_0104e70c)();
  *(undefined1 *)(DAT_0104e720 + 0xd3) = param_1;
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_0078e010 @ 0078e010 ////

void __thiscall FUN_0078e010(void *this,int *param_1,int *param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  int local_1c;
  int local_10;
  int local_c;
  
  if ((((*param_1 != 0) || (*param_2 != 0)) || (param_1[1] != 0)) || (param_2[1] != 0)) {
    iVar4 = *param_2 - *param_1;
    iVar1 = (uint)(-1 < iVar4) * 2 + -1;
    iVar4 = iVar1 * iVar4;
    iVar2 = (uint)(-1 < param_2[1] - param_1[1]) * 2 + -1;
    iVar5 = iVar2 * (param_2[1] - param_1[1]);
    this_00 = (void *)((int)this + 0x3a4);
    if (*(int *)((int)this + 0x3a8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 0x3ac) - *(int *)((int)this + 0x3a8) >> 3;
    }
    local_1c = iVar4 + 1;
    local_20 = iVar5 + 1;
    FUN_0078db70(this_00,local_1c * local_20 + iVar6);
    if (iVar4 - iVar5 == 0 || iVar4 < iVar5) {
      local_c = param_2[1];
      if (-1 < iVar5) {
        do {
          local_10 = *param_2;
          if (-1 < iVar4) {
            local_1c = iVar4 + 1;
            do {
              iVar5 = *(int *)((int)this + 0x3a8);
              if ((iVar5 == 0) ||
                 ((uint)(*(int *)((int)this + 0x3b0) - iVar5 >> 3) <=
                  (uint)(*(int *)((int)this + 0x3ac) - iVar5 >> 3))) {
                FUN_00458930(this_00,*(undefined4 **)((int)this + 0x3ac),1,&local_10);
              }
              else {
                puVar3 = *(undefined4 **)((int)this + 0x3ac);
                FUN_00455ea0(puVar3,1,&local_10);
                *(undefined4 **)((int)this + 0x3ac) = puVar3 + 2;
              }
              local_10 = local_10 - iVar1;
              local_1c = local_1c + -1;
            } while (local_1c != 0);
          }
          local_c = local_c - iVar2;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
    }
    else {
      local_10 = *param_2;
      if (-1 < iVar4) {
        do {
          local_c = param_2[1];
          if (-1 < iVar5) {
            iVar4 = iVar5 + 1;
            do {
              iVar6 = *(int *)((int)this + 0x3a8);
              if ((iVar6 == 0) ||
                 ((uint)(*(int *)((int)this + 0x3b0) - iVar6 >> 3) <=
                  (uint)(*(int *)((int)this + 0x3ac) - iVar6 >> 3))) {
                FUN_00458930(this_00,*(undefined4 **)((int)this + 0x3ac),1,&local_10);
              }
              else {
                puVar3 = *(undefined4 **)((int)this + 0x3ac);
                FUN_00455ea0(puVar3,1,&local_10);
                *(undefined4 **)((int)this + 0x3ac) = puVar3 + 2;
              }
              local_c = local_c - iVar2;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_10 = local_10 - iVar1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_0078e240 @ 0078e240 ////

void __fastcall FUN_0078e240(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  void *this;
  undefined1 *this_00;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  char *pcVar14;
  undefined4 uVar15;
  int iVar16;
  float fVar17;
  undefined1 *puVar18;
  byte bStack_d1;
  undefined8 uStack_d0;
  int iStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int iStack_ac;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  undefined1 auStack_30 [44];
  
  if (*(char *)((int)param_1 + 0x34d) == '\0') {
    uVar4 = FUN_00553fa0(0x74);
    if ((char)uVar4 == '\0') {
      if (*(char *)((int)param_1 + 0x34d) != '\0') goto LAB_0078e274;
      goto LAB_0078e2f0;
    }
LAB_0078e282:
    if (*(char *)((int)param_1 + 0x364) == '\0') {
      if ((*(int *)((int)param_1 + 0x348) != 1) && (*(int *)((int)param_1 + 0x350) != 6)) {
        FUN_005392c0("UI_INHAND_OBJECT_DELETE");
        FUN_0091ee70(DAT_010504c4,(int *)0x0);
        *(undefined4 *)((int)param_1 + 0x350) = 6;
      }
      puVar2 = *(undefined4 **)((int)param_1 + 0x3b4);
      *(undefined4 *)((int)param_1 + 0x348) = 0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)();
        }
        *(undefined4 *)((int)param_1 + 0x3b4) = 0;
      }
      *(undefined1 *)((int)param_1 + 0x364) = 1;
    }
  }
  else {
LAB_0078e274:
    uVar4 = FUN_00553fa0(0x73);
    if ((char)uVar4 != '\0') goto LAB_0078e282;
LAB_0078e2f0:
    *(undefined1 *)((int)param_1 + 0x364) = 0;
  }
  if (*(int *)((int)param_1 + 0x348) != 1) goto LAB_0078e6a7;
  if (*(char *)((int)param_1 + 0x34d) == '\0') {
    uVar4 = FUN_00553fd0(0x73);
    if (((char)uVar4 == '\0') && (cVar3 = FUN_00553f70(0x73), cVar3 != '\0')) {
      if (*(char *)((int)param_1 + 0x34d) == '\0') goto LAB_0078e6a7;
      goto LAB_0078e338;
    }
  }
  else {
LAB_0078e338:
    uVar4 = FUN_00553fd0(0x74);
    if (((char)uVar4 == '\0') && (cVar3 = FUN_00553f70(0x74), cVar3 != '\0')) goto LAB_0078e6a7;
  }
  puVar2 = *(undefined4 **)((int)param_1 + 0x3b4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)();
    }
    *(undefined4 *)((int)param_1 + 0x3b4) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x348) = 0;
  if (*(char *)((int)param_1 + 0x3a0) == '\0') goto LAB_0078e6a7;
  fVar10 = *(float *)((int)param_1 + 0x354);
  uStack_d0 = CONCAT44(DAT_0104e6fc,DAT_0104e6f8);
  fVar7 = DAT_0104e6f8;
  if ((int)fVar10 < (int)DAT_0104e6f8) {
    fVar7 = fVar10;
  }
  fVar8 = DAT_0104e6f8;
  if ((int)DAT_0104e6f8 < (int)fVar10) {
    fVar8 = fVar10;
  }
  iVar12 = *(int *)((int)param_1 + 0x358);
  iStack_c4 = iVar12;
  if ((iVar12 < DAT_0104e6fc) || (iStack_c4 = DAT_0104e6fc, iVar12 <= DAT_0104e6fc)) {
    iVar12 = DAT_0104e6fc;
  }
  fStack_c0 = fVar8;
  fStack_b8 = fVar7;
  FUN_00450f90(DAT_00f88720,(int)fVar7,iStack_c4,(int)fVar8,iVar12);
  iVar16 = *(int *)((int)param_1 + 0x350);
  if ((iVar16 == 0) && (*(char *)((int)param_1 + 0x34d) == '\0')) {
    fStack_b4 = *(float *)((int)param_1 + 0x358);
    fStack_b8 = *(float *)((int)param_1 + 0x354);
    fStack_c0 = (float)uStack_d0;
    fStack_bc = uStack_d0._4_4_;
    FUN_0078b730(param_1,(uint *)&fStack_b8,(int *)&fStack_c0,(int *)&uStack_d0,(int *)&fStack_b0);
    FUN_0078e010(param_1,(int *)&uStack_d0,(int *)&fStack_b0);
    FUN_0078e010(param_1,(int *)&fStack_b8,(int *)&fStack_c0);
  }
  else if ((iVar16 == 1) || ((iVar16 == 0 && (*(char *)((int)param_1 + 0x34d) != '\0')))) {
    bStack_d1 = 0;
    iVar16 = iStack_c4;
    if ((int)fStack_b8 <= (int)fVar8) {
      do {
        for (; iVar16 <= iVar12; iVar16 = iVar16 + 1) {
          uVar4 = FUN_0078d0a0(param_1,(uint)fVar7,iVar16);
          bStack_d1 = bStack_d1 | (byte)uVar4;
        }
        fVar7 = (float)((int)fVar7 + 1);
        iVar16 = iStack_c4;
      } while ((int)fVar7 <= (int)fStack_c0);
      if (bStack_d1 != 0) {
        pcVar14 = "UI_PATH_DELETE";
        this_00 = auStack_30;
        goto LAB_0078e65c;
      }
    }
  }
  else {
    fVar11 = fVar7;
    iVar16 = iStack_c4;
    fVar10 = fStack_b0;
    if ((int)fStack_b8 <= (int)fVar8) {
      do {
        for (; fVar8 = fStack_c0, fStack_b0 = fVar11, fStack_c0 = fVar8, iVar16 <= iVar12;
            iVar16 = iVar16 + 1) {
          uVar9 = uStack_d0 >> 8;
          uStack_d0 = uStack_d0 & 0xffffffffffffff00;
          if ((((fVar7 == fStack_b8) || (fVar7 == fVar8)) || (iVar16 == iStack_c4)) ||
             (iVar16 == iVar12)) {
            uStack_d0 = CONCAT71((int7)uVar9,1);
          }
          iStack_ac = iVar16;
          FUN_0078c600(param_1,(int *)&fStack_b0,(char)uStack_d0);
          fVar11 = fStack_b0;
          fVar10 = fStack_b0;
        }
        fVar7 = (float)((int)fVar7 + 1);
        fStack_b0 = fVar10;
        fVar11 = fVar7;
        iVar16 = iStack_c4;
      } while ((int)fVar7 <= (int)fVar8);
    }
    if (0.0 < (float)*(longlong *)((int)param_1 + 0x390) * 1.1920929e-07) {
      fVar11 = (float)((int)fStack_b8 + -0x80) + (float)((int)fStack_b8 + -0x80);
      fVar13 = (float)(iStack_c4 + -0x80) + (float)(iStack_c4 + -0x80);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar12 + -0x80);
      fVar8 = (float)((int)fVar8 + -0x80) + (float)((int)fVar8 + -0x80);
      fVar17 = (float)(iVar12 + -0x80);
      fVar17 = fVar17 + fVar17;
      fVar10 = *(float *)((int)param_1 + 0x390);
      fVar7 = *(float *)((int)param_1 + 0x394);
      fStack_c0 = fVar8;
      fStack_bc = fVar17;
      fStack_b8 = fVar11;
      fStack_b4 = fVar13;
      FUN_00471b10((longlong *)&stack0xffffff00);
      FUN_00471e60(fVar10,fVar7,fVar11,fVar13,fVar8,fVar17);
      uVar15 = *(undefined4 *)((int)param_1 + 0x390);
      uVar6 = *(undefined4 *)((int)param_1 + 0x394);
      FUN_00471b10((longlong *)&stack0xffffff10);
      FUN_0078c750(uVar15,uVar6);
    }
    iVar12 = *(int *)((int)param_1 + 0x350);
    if (iVar12 == 2) {
      pcVar14 = "UI_LANDSCAPE_AREA_GRASS";
      this_00 = auStack_80;
    }
    else if (iVar12 == 3) {
      pcVar14 = "UI_LANDSCAPE_AREA_SAND";
      this_00 = auStack_a8;
    }
    else {
      if (iVar12 != 4) goto LAB_0078e670;
      pcVar14 = "UI_LANDSCAPE_AREA_TARMAC";
      this_00 = auStack_58;
    }
LAB_0078e65c:
    puVar18 = &DAT_00d17518;
    iVar16 = 0;
    pbVar5 = (byte *)FUN_0041c9c0(this_00,pcVar14);
    iVar12 = 2;
    this = (void *)FUN_004f3b20();
    FUN_004f3270(this,iVar12,pbVar5,iVar16,puVar18);
  }
LAB_0078e670:
  if (0.0 < (float)*(longlong *)((int)param_1 + 0x390) * 1.1920929e-07) {
    uVar9 = FUN_00acd42c();
    *(int *)((int)param_1 + 0x3d8) = (int)uVar9;
    *(undefined1 *)((int)param_1 + 0x3d4) = 1;
  }
LAB_0078e6a7:
  *(undefined1 *)((int)param_1 + 0x35c) = 1;
  if ((*(int *)((int)param_1 + 0x350) == 1) || (*(int *)((int)param_1 + 0x350) == 0)) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  DAT_0104e6f8 = (float)FUN_0078c380((float *)&DAT_0104cce0,cVar3);
  DAT_0104e6fc = extraout_EDX;
  if (*(int *)((int)param_1 + 0x350) < 5) {
    uStack_d0 = FUN_00acd42c();
    FUN_00471b10(&uStack_d0);
    iVar12 = *(int *)((int)param_1 + 0x350);
    if ((iVar12 == 0) && (*(char *)((int)param_1 + 0x34d) != '\0')) {
      uVar15 = *(undefined4 *)((int)param_1 + 0x370);
      uVar6 = *(undefined4 *)((int)param_1 + 0x374);
    }
    else {
      uVar15 = *(undefined4 *)((int)param_1 + iVar12 * 8 + 0x368);
      uVar6 = *(undefined4 *)((int)param_1 + iVar12 * 8 + 0x36c);
    }
    uStack_d0 = CONCAT44(uVar6,uVar15);
    FUN_00471b10(&uStack_d0);
    FUN_0078d1b0((int)param_1);
  }
  FUN_0053d3a0();
  return;
}


//// FUNCTION FUN_0078e780 @ 0078e780 ////

void __fastcall FUN_0078e780(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d50334;
  param_1[0x14] = &PTR_FUN_00d50318;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_0078e820 @ 0078e820 ////

void __thiscall FUN_0078e820(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x48) = param_1;
  return;
}


//// FUNCTION FUN_0078e860 @ 0078e860 ////

undefined1 FUN_0078e860(void)

{
  return 1;
}


//// FUNCTION FUN_0078e870 @ 0078e870 ////

int * __thiscall FUN_0078e870(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0078e8b0 @ 0078e8b0 ////

undefined4 * __fastcall FUN_0078e8b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbca4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d50334;
  param_1[0x14] = &PTR_FUN_00d50318;
  puVar1 = operator_new(0x50);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_005e4870(puVar1);
  }
  local_4._0_1_ = 0;
  FUN_0073fae0(param_1,puVar1);
  FUN_0073e4e0(param_1,0x43000000);
  puVar1 = operator_new(0x360);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0069ce90(puVar1);
  }
  param_1[0xd2] = piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar2 + 0x74))();
  (**(code **)(*(int *)param_1[0xd2] + 100))();
  (**(code **)(*(int *)param_1[0xd2] + 0x5c))();
  FUN_0073f6e0(param_1,(int *)param_1[0xd2]);
  puVar1 = operator_new(0x3fc);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar1);
  }
  param_1[0xd1] = piVar2;
  (**(code **)(*piVar2 + 0x5c))();
  (**(code **)(*(int *)param_1[0xd1] + 100))();
  FUN_0073f6e0(param_1,(int *)param_1[0xd1]);
  piVar2 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar2 + 0xc))();
  this = operator_new(0x9c);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00746a20(this,0);
  }
  param_1[0xd3] = puVar1;
  FUN_00748590((void *)param_1[0xb5],puVar1);
  FUN_00746910((void *)param_1[0xd3],0);
  ExceptionList = (void *)0x2;
  return param_1;
}


//// FUNCTION FUN_0078ea80 @ 0078ea80 ////

undefined4 * __thiscall FUN_0078ea80(void *this,byte param_1)

{
  FUN_0078e780(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION Tooltip_UpdateHoverStillnessFade @ 0078eb40 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Tooltip_UpdateHoverStillnessFade(void)

{
  if ((DAT_0104cce0 == _DAT_0104e724) && (DAT_0104cce4 == _DAT_0104e728)) {
    _DAT_00e59b60 = _DAT_00e59b60 + 0.1;
    if (1.0 < _DAT_00e59b60) {
      _DAT_00e59b60 = 1.0;
    }
    return;
  }
  _DAT_0104e724 = DAT_0104cce0;
  _DAT_0104e728 = DAT_0104cce4;
  _DAT_00e59b60 = -0.2;
  return;
}


//// FUNCTION FUN_0078ebf0 @ 0078ebf0 ////

void __thiscall FUN_0078ebf0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  uint unaff_ESI;
  void *_Memory;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [2];
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbcb8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_00ace02d(L"<t1>");
  FUN_004036d0(&local_2c,L"<t1>",uVar3);
  local_4 = 0;
  FUN_0040cae0(&local_2c,(wchar_t *)*param_1,param_1[1]);
  sVar4 = FUN_00ace02d(L"</t1>");
  FUN_0040cae0(&local_2c,L"</t1>",sVar4);
  piVar1 = *(int **)((int)this + 0x344);
  iVar2 = *piVar1;
  iVar5 = FUN_0071b2a0();
  _Memory = (void *)(*(float *)(iVar5 + 0x108) - (float)piVar1[0x30]);
  (**(code **)(iVar2 + 0x78))();
  (**(code **)(**(int **)((int)this + 0x344) + 0x54))(&stack0xffffffd0);
  (**(code **)(**(int **)((int)this + 0x344) + 0x84))(0);
  (**(code **)(*(int *)this + 0x84))(0);
  if (10 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_1c;
  return;
}


//// FUNCTION FUN_0078ed50 @ 0078ed50 ////

void __fastcall FUN_0078ed50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d50434;
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


//// FUNCTION FUN_0078eda0 @ 0078eda0 ////

void __fastcall FUN_0078eda0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdbcee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d50444;
  local_4 = 2;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf] = param_1[0xe];
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar2 = (undefined4 *)param_1[0x1d];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x18] + 4))();
    param_1[0x1d] = 0;
    (**(code **)param_1[0x18])();
  }
  param_1[0x18] = &PTR_LAB_00d50434;
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
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf] = param_1[0xe];
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0078ef10 @ 0078ef10 ////

undefined4 * __thiscall FUN_0078ef10(void *this,byte param_1)

{
  FUN_0078eda0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0078ef30 @ 0078ef30 ////

undefined4 * __fastcall FUN_0078ef30(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbd1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d50444;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0043b520(param_1 + 0x12,0.0);
  param_1[0x13] = 0xbf800000;
  param_1[0x14] = 0xbf800000;
  param_1[0x15] = 0xbf800000;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = param_1 + 0x18;
  param_1[0x18] = &PTR_LAB_00d50434;
  param_1[0x1d] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x10] = param_1;
  FUN_00acdb9e(0xe59b44);
  iVar1 = FUN_0097dda0();
  param_1[0x11] = iVar1;
  if (s___AVCNodule_TM___00e59b30[0x11] != '\0') {
    iVar1 = 0x38;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe59b44);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVCNodule_TM___00e59b30[0x11] = '\0';
  }
  param_1[0x16] = 0x80;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0078f070 @ 0078f070 ////

int * __thiscall FUN_0078f070(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0078f0c0 @ 0078f0c0 ////

undefined4 __thiscall FUN_0078f0c0(void *this,int param_1)

{
  undefined4 extraout_EAX;
  float10 fVar1;
  
  (**(code **)(*(int *)((int)this + 0xa0) + 4))();
  *(int *)((int)this + 0xb4) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xa0))();
  fVar1 = FUN_00793f50(param_1,*(undefined4 *)((int)this + 0x48),(float *)0x0);
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(float *)((int)this + 0x4c) = (float)fVar1;
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}


//// FUNCTION CNoduleEvent_UppercaseName @ 0078f110 ////

void __fastcall CNoduleEvent_UppercaseName(int *param_1)

{
  wint_t wVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    do {
      wVar1 = _towupper(*(wint_t *)(*param_1 + uVar2 * 2));
      *(wint_t *)(*param_1 + uVar2 * 2) = wVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[1]);
  }
  return;
}


//// FUNCTION CNoduleEvent_GetName @ 0078f190 ////

undefined4 * __thiscall CNoduleEvent_GetName(void *this,undefined4 *param_1)

{
  CNoduleEvent_UppercaseName((int *)((int)this + 0x78));
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x78),*(uint *)((int)this + 0x7c));
  return param_1;
}


//// FUNCTION FUN_0078f1e0 @ 0078f1e0 ////

void __thiscall FUN_0078f1e0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d5048c;
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


//// FUNCTION FUN_0078f230 @ 0078f230 ////

void __fastcall FUN_0078f230(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5048c;
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


//// FUNCTION FUN_0078f280 @ 0078f280 ////

undefined4 * __thiscall FUN_0078f280(void *this,wchar_t *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int in_stack_00000024;
  int in_stack_00000028;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdbd59;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0078ef30(this);
  *(undefined ***)this = &PTR_FUN_00d5049c;
  *(undefined4 *)((int)this + 0x78) = (undefined2 *)((int)this + 0x84);
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 10;
  *(int *)((int)this + 0x98) = in_stack_00000024;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 **)((int)this + 0xac) = (undefined4 *)((int)this + 0xa0);
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0xb4) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004036d0((undefined4 *)((int)this + 0x78),param_1,param_2);
  in_stack_00000028 = in_stack_00000028 + -1;
  puVar1 = (undefined4 *)
           FUN_0043b520(&stack0x00000024,
                        (float)in_stack_00000024 + (float)in_stack_00000028 * 0.083333336);
  *(undefined4 *)((int)this + 0x48) = *puVar1;
  if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0078f360 @ 0078f360 ////

void __fastcall FUN_0078f360(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5049c;
  param_1[0x28] = &PTR_LAB_00d5048c;
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
  if (10 < (uint)param_1[0x20]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1e]);
  }
  FUN_0078eda0(param_1);
  return;
}


//// FUNCTION FUN_0078f400 @ 0078f400 ////

/* WARNING: Removing unreachable block (ram,0x0078f461) */

void __cdecl FUN_0078f400(void *param_1,void *param_2)

{
  byte bVar1;
  char *_Source;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_60;
  uint local_58;
  byte local_54 [20];
  byte *local_40;
  undefined4 local_3c;
  uint local_38;
  byte local_34 [20];
  void *local_20 [2];
  uint local_18;
  
  uVar2 = FUN_00552520(param_1,param_2);
  if ((char)uVar2 == '\0') {
    return;
  }
  do {
    if (*(int *)((int)param_2 + 4) != 0) {
      local_60 = local_54;
      local_54[0] = 0;
      local_58 = 0x14;
      puVar3 = FUN_00430770(param_2,local_20,0,9);
      uVar2 = puVar3[1];
      _Source = (char *)*puVar3;
      if (0x13 < uVar2) {
        local_58 = uVar2 + 0x20 & 0xffffffe0;
        local_60 = _malloc(local_58);
      }
      _strncpy((char *)local_60,_Source,uVar2);
      local_60[uVar2] = 0;
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
      local_40 = local_34;
      local_34[0] = 0;
      local_3c = 0;
      local_38 = 0x14;
      _strncpy((char *)local_40,"timeline_",9);
      local_3c = 9;
      local_40[9] = 0;
      pbVar4 = local_60;
      pbVar6 = local_40;
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0078f51a:
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0078f51f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0078f51a;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0078f51f:
      if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
        _free(local_40);
      }
      if (iVar5 == 0) {
        if (local_58 < 0x15) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
      if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
    }
    uVar2 = FUN_00552520(param_1,param_2);
    if ((char)uVar2 == '\0') {
      return;
    }
  } while( true );
}


//// FUNCTION FUN_0078f590 @ 0078f590 ////

undefined4 * __thiscall FUN_0078f590(void *this,byte param_1)

{
  FUN_0078f360(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0078f5b0 @ 0078f5b0 ////

void FUN_0078f5b0(void)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  char *local_d8;
  undefined4 local_d4;
  uint local_d0;
  char local_cc [20];
  char *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  char local_ac [20];
  undefined4 local_98;
  undefined4 local_94;
  char *local_90;
  uint local_8c;
  uint local_88;
  char local_84 [20];
  undefined1 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64 [20];
  undefined1 *local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [20];
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbda9;
  pvStack_c = ExceptionList;
  local_d8 = local_cc;
  local_cc[0] = '\0';
  local_d4 = 0;
  local_d0 = 0x20;
  ExceptionList = &pvStack_c;
  local_d8 = _malloc(0x20);
  _strncpy(local_d8,"data/rule/timeline.csv",0x16);
  local_d4 = 0x16;
  local_d8[0x16] = '\0';
  local_b8 = local_ac;
  local_4 = 0;
  local_ac[0] = '\0';
  local_b4 = 0;
  local_b0 = 0x14;
  _strncpy(local_b8,"",0);
  local_b4 = 0;
  *local_b8 = '\0';
  local_98 = 0;
  local_94 = 0;
  local_4._0_1_ = 1;
  bVar1 = FUN_00553a50(&local_b8,&local_d8);
  if (bVar1) {
    local_70 = local_64;
    local_64[0] = 0;
    local_6c = 0;
    local_68 = 0x14;
    local_90 = local_84;
    local_84[0] = '\0';
    local_8c = 0;
    local_88 = 0x14;
    local_50 = local_44;
    local_44[0] = 0;
    local_4c = 0;
    local_48 = 0x14;
    local_30 = local_24;
    local_24[0] = 0;
    local_2c = 0;
    local_28 = 0x14;
    local_4._0_1_ = 5;
    iVar2 = FUN_00567d80(&local_50);
    while (iVar2 < 0x8fc) {
      FUN_0078f400(&local_b8,&local_70);
      bVar1 = FUN_00547e50(&local_70,0,&local_90);
      if ((bVar1) && (bVar1 = FUN_00547e50(&local_70,1,&local_50), bVar1)) {
        bVar1 = FUN_00547e50(&local_70,9,&local_30);
        if (bVar1) {
          FUN_00567d80(&local_30);
        }
        if (8 < local_8c) {
          FUN_00567d80(&local_50);
          puStack_10 = &stack0xfffffef4;
          puVar3 = &stack0xffffff00;
          uVar4 = 0;
          uVar5 = 0x14;
          FUN_004015d0(&stack0xfffffef4,local_90,local_8c);
          FUN_00795ad0(puVar3,uVar4,uVar5);
        }
      }
      iVar2 = FUN_00567d80(&local_50);
    }
    DAT_0104e72c = 0;
    if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
      _free(local_30);
    }
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00552ce0(&local_b8);
  if (local_d0 < 0x15) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_d8);
}


//// FUNCTION FUN_0078f8c0 @ 0078f8c0 ////

int * FUN_0078f8c0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbdcb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = operator_new(0x350);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (local_10 != (undefined4 *)0x0) {
    piVar2 = FUN_0078e8b0(local_10);
  }
  local_4 = 0xffffffff;
  piVar1 = (int *)(**(code **)(*piVar2 + 0xa4))();
  local_10 = (undefined4 *)0x80fcdc16;
  (**(code **)(*piVar1 + 0xc))(&local_10);
  ExceptionList = local_10;
  return piVar2;
}


//// FUNCTION FUN_0078fa40 @ 0078fa40 ////

void __fastcall FUN_0078fa40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  float fStack_c;
  
  if ((*(int *)(param_1 + 0xa4) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    piVar5 = (int *)FUN_005b22a0(*(int *)(param_1 + 0xbc));
    iVar6 = (**(code **)(*piVar5 + 0x24))();
    if ((3 < iVar6) ||
       ((DAT_0104d8e8 != 0 &&
        (iVar6 = *(int *)(param_1 + 0xbc), iVar7 = FUN_005f5ba0(DAT_0104d8e8), iVar7 == iVar6)))) {
      fVar4 = DAT_00e59bb0;
      fVar2 = *(float *)(param_1 + 0x54);
      fVar3 = DAT_00e59bb0 + 8.0;
      fStack_c = *(float *)(param_1 + 0x50) + 3.0;
      if (fVar2 < fStack_c == (fVar2 == fStack_c)) {
        iVar6 = *(int *)(param_1 + 0x58);
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0xff < iVar6) {
          iVar6 = 0xff;
        }
        *(char *)((&DAT_0104e744)[*(int *)(param_1 + 0xc0) * 3] + 0xb) = (char)iVar6;
        *(float *)((&DAT_0104e744)[*(int *)(param_1 + 0xc0) * 3] + 0x14) = fVar4;
        *(float *)((&DAT_0104e744)[*(int *)(param_1 + 0xc0) * 3] + 0x20) = fVar3;
        fVar1 = *(float *)(param_1 + 0x54);
        *(float *)((&DAT_0104e744)[*(int *)(param_1 + 0xc0) * 3] + 0x10) =
             (*(float *)(param_1 + 0x50) + 4.0) - 1.0;
        *(float *)((&DAT_0104e744)[*(int *)(param_1 + 0xc0) * 3] + 0x1c) = (fVar1 - 1.0) + 1.0;
        BuildAndDrawPrimitive((&DAT_0104e744)[*(int *)(param_1 + 0xc0) * 3]);
        fStack_c = fVar2;
      }
      iVar6 = *(int *)(param_1 + 0x58);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      *(char *)((&DAT_0104e740)[*(int *)(param_1 + 0xc0) * 3] + 0xb) = (char)iVar6;
      *(float *)((&DAT_0104e740)[*(int *)(param_1 + 0xc0) * 3] + 0x10) =
           *(float *)(param_1 + 0x50) - 4.0;
      *(float *)((&DAT_0104e740)[*(int *)(param_1 + 0xc0) * 3] + 0x14) = fVar4;
      *(float *)((&DAT_0104e740)[*(int *)(param_1 + 0xc0) * 3] + 0x1c) =
           *(float *)(param_1 + 0x50) + 3.0;
      *(float *)((&DAT_0104e740)[*(int *)(param_1 + 0xc0) * 3] + 0x20) = fVar3;
      BuildAndDrawPrimitive((&DAT_0104e740)[*(int *)(param_1 + 0xc0) * 3]);
      iVar6 = *(int *)(param_1 + 0x58);
      if (iVar6 < 0) {
        uVar8 = 0;
      }
      else if (iVar6 < 0x100) {
        uVar8 = (undefined1)iVar6;
      }
      else {
        uVar8 = 0xff;
      }
      *(undefined1 *)((&DAT_0104e748)[*(int *)(param_1 + 0xc0) * 3] + 0xb) = uVar8;
      *(float *)((&DAT_0104e748)[*(int *)(param_1 + 0xc0) * 3] + 0x10) = fStack_c;
      *(float *)((&DAT_0104e748)[*(int *)(param_1 + 0xc0) * 3] + 0x14) = fVar4;
      *(float *)((&DAT_0104e748)[*(int *)(param_1 + 0xc0) * 3] + 0x1c) = fStack_c + 2.5;
      *(float *)((&DAT_0104e748)[*(int *)(param_1 + 0xc0) * 3] + 0x20) = fVar3;
      BuildAndDrawPrimitive((&DAT_0104e748)[*(int *)(param_1 + 0xc0) * 3]);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0078fce0 @ 0078fce0 ////

void FUN_0078fce0(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbdeb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar5 = FUN_0099bb50("ui/timeline_genres.dds",0,0,0,'\0');
  puVar6 = operator_new(0x24);
  local_4 = 0;
  if (puVar6 == (undefined4 *)0x0) {
    DAT_0104e77c = (void *)0x0;
  }
  else {
    DAT_0104e77c = (void *)FUN_009910f0(puVar6);
  }
  *(undefined1 *)((int)DAT_0104e77c + 0xc) = 6;
  *(uint *)((int)DAT_0104e77c + 0x10) = *(uint *)((int)DAT_0104e77c + 0x10) & 0xbfffffff;
  local_4 = 0xffffffff;
  if (*(void **)((int)DAT_0104e77c + 0x18) != pvVar5) {
    Engine_SetResourceReference(DAT_0104e77c,(int)pvVar5);
  }
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  piVar7 = &DAT_0104e744;
  do {
    fVar3 = DAT_0104e73c + 0.1328125;
    puVar6 = operator_new(0x3c);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_0041f350(puVar6);
    }
    fVar4 = DAT_0104e73c;
    piVar7[-1] = (int)puVar6;
    puVar6[10] = 0;
    puVar6[0xb] = fVar4;
    iVar2 = piVar7[-1];
    *(undefined4 *)(iVar2 + 0x30) = 0x3ed00000;
    *(float *)(iVar2 + 0x34) = fVar3;
    *(undefined4 *)(piVar7[-1] + 8) = 0xffffffff;
    *(void **)(piVar7[-1] + 4) = DAT_0104e77c;
    puVar6 = operator_new(0x3c);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_0041f350(puVar6);
    }
    fVar4 = DAT_0104e73c;
    *piVar7 = (int)puVar6;
    puVar6[10] = 0x3ee00000;
    puVar6[0xb] = fVar4;
    iVar2 = *piVar7;
    *(undefined4 *)(iVar2 + 0x30) = 0x3f380000;
    *(float *)(iVar2 + 0x34) = fVar3;
    *(undefined4 *)(*piVar7 + 8) = 0xffffffff;
    *(void **)(*piVar7 + 4) = DAT_0104e77c;
    puVar6 = operator_new(0x3c);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_0041f350(puVar6);
    }
    piVar7[1] = (int)puVar6;
    puVar6[10] = 0x3f400000;
    puVar6[0xb] = DAT_0104e73c;
    iVar2 = piVar7[1];
    *(undefined4 *)(iVar2 + 0x30) = 0x3f600000;
    *(float *)(iVar2 + 0x34) = fVar3;
    *(undefined4 *)(piVar7[1] + 8) = 0xffffffff;
    piVar1 = piVar7 + 1;
    piVar7 = piVar7 + 3;
    *(void **)(*piVar1 + 4) = DAT_0104e77c;
    DAT_0104e73c = fVar3;
  } while ((int)piVar7 < 0x104e780);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0078ff20 @ 0078ff20 ////

void FUN_0078ff20(void)

{
  void *_Memory;
  
  _Memory = DAT_0104e77c;
  if (DAT_0104e77c != (void *)0x0) {
    FUN_00990ec0((int)DAT_0104e77c);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0104e77c = (void *)0x0;
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104e740);
}


//// FUNCTION FUN_0078ff90 @ 0078ff90 ////

void __fastcall FUN_0078ff90(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fStack_14;
  float fStack_10;
  undefined1 local_8 [8];
  
  if ((param_1[0x29] != 0) && (DAT_0104d8e8 == 0)) {
    pfVar1 = (float *)(**(code **)(*param_1 + 0x18))(local_8);
    fStack_14 = *pfVar1 + 8.0;
    pfVar3 = &fStack_14;
    fStack_10 = pfVar1[1] - 8.0;
    FUN_005f0460();
    FUN_005f0b70(pfVar3);
    param_1[0x17] = param_1[0x17] + 1;
    iVar2 = FUN_00799230((void *)param_1[0x29],(int)param_1);
    if (iVar2 != 0) {
      FUN_007a4920(iVar2);
    }
  }
  return;
}


//// FUNCTION FUN_00790020 @ 00790020 ////

uint __fastcall FUN_00790020(int param_1)

{
  char cVar1;
  uint in_EAX;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    cVar1 = FUN_005b3c80(*(int *)(param_1 + 0xbc));
    if ((cVar1 != '\0') || (in_EAX = *(uint *)(param_1 + 0xbc), *(int *)(in_EAX + 0x210) != 0)) {
      piVar2 = (int *)FUN_005b22a0(*(int *)(param_1 + 0xbc));
      in_EAX = (**(code **)(*piVar2 + 0x24))();
      if (in_EAX == 6) {
        return 1;
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_007900b0 @ 007900b0 ////

undefined4 * __thiscall FUN_007900b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  byte **ppbVar10;
  byte **ppbVar11;
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
  puStack_8 = &LAB_00cdbe2f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078ef30(this);
  *(undefined ***)this = &PTR_FUN_00d5055c;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_FUN_00d1ec60;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 **)((int)this + 0x9c) = (undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0xa4) = 0;
  piVar1 = (int *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0xb4) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 **)((int)this + 0xb4) = (undefined4 *)((int)this + 0xa8);
  *(undefined4 *)((int)this + 0xa8) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0xbc) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0xb0) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 3;
  *(undefined4 *)((int)this + 0xc0) = 2;
  puVar4 = (undefined4 *)FUN_005b8c50(*(void **)((int)this + 0xbc),&param_1);
  FUN_0078e820(this,*puVar4);
  if (*(int *)((int)this + 0xbc) != 0) {
    iVar5 = FUN_005b6b90(*(int *)((int)this + 0xbc));
    puVar4 = (undefined4 *)FUN_00449b40(iVar5);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    FUN_004015d0(&local_4c,(char *)*puVar4,puVar4[1]);
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    _strncpy((char *)local_2c,"genre_comedy",0xc);
    local_28 = 0xc;
    local_2c[0xc] = 0;
    pbVar7 = local_2c;
    pbVar8 = local_4c;
    do {
      bVar3 = *pbVar8;
      bVar9 = bVar3 < *pbVar7;
      if (bVar3 != *pbVar7) {
LAB_0079021c:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00790221;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar8[1];
      bVar9 = bVar3 < pbVar7[1];
      if (bVar3 != pbVar7[1]) goto LAB_0079021c;
      pbVar8 = pbVar8 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar3 != 0);
    iVar5 = 0;
LAB_00790221:
    param_1 = CONCAT31(param_1._1_3_,iVar5 == 0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (iVar5 == 0) {
      *(undefined4 *)((int)this + 0xc0) = 0;
    }
    else {
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      _strncpy((char *)local_2c,"genre_horror",0xc);
      ppbVar11 = &local_2c;
      ppbVar10 = &local_4c;
      local_28 = 0xc;
      local_2c[0xc] = 0;
      uVar6 = FUN_00401ec0(ppbVar10,ppbVar11);
      param_1 = CONCAT31(param_1._1_3_,(char)uVar6);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if ((char)uVar6 == '\0') {
        local_2c = local_20;
        local_20[0] = 0;
        local_28 = 0;
        local_24 = 0x14;
        _strncpy((char *)local_2c,"genre_sci-fi",0xc);
        ppbVar11 = &local_2c;
        ppbVar10 = &local_4c;
        local_28 = 0xc;
        local_2c[0xc] = 0;
        uVar6 = FUN_00401ec0(ppbVar10,ppbVar11);
        param_1 = CONCAT31(param_1._1_3_,(char)uVar6);
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        if ((char)uVar6 == '\0') {
          local_2c = local_20;
          local_20[0] = 0;
          local_28 = 0;
          local_24 = 0x14;
          _strncpy((char *)local_2c,"genre_romance",0xd);
          ppbVar11 = &local_2c;
          ppbVar10 = &local_4c;
          local_28 = 0xd;
          local_2c[0xd] = 0;
          uVar6 = FUN_00401ec0(ppbVar10,ppbVar11);
          param_1 = CONCAT31(param_1._1_3_,(char)uVar6);
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          if ((char)uVar6 == '\0') {
            FUN_00401de0(&local_2c,"genre_action",0xffffffff);
            uVar6 = FUN_00401ec0(&local_4c,&local_2c);
            param_1 = CONCAT31(param_1._1_3_,(char)uVar6);
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c);
            }
            if ((char)uVar6 != '\0') {
              *(undefined4 *)((int)this + 0xc0) = 4;
            }
          }
          else {
            *(undefined4 *)((int)this + 0xc0) = 3;
          }
        }
        else {
          *(undefined4 *)((int)this + 0xc0) = 2;
        }
      }
      else {
        *(undefined4 *)((int)this + 0xc0) = 1;
      }
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00790460 @ 00790460 ////

void __fastcall FUN_00790460(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5055c;
  param_1[0x2a] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x2c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2c] = param_1[0x2b];
  }
  if (param_1[0x2b] != 0) {
    *(undefined4 *)(param_1[0x2b] + 4) = param_1[0x2c];
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  if ((undefined4 *)param_1[0x2c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2c] = param_1[0x2b];
  }
  if (param_1[0x2b] != 0) {
    *(undefined4 *)(param_1[0x2b] + 4) = param_1[0x2c];
  }
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x24] = &PTR_LAB_00d5048c;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1e] = &PTR_FUN_00d1ec60;
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
  FUN_0078eda0(param_1);
  return;
}


//// FUNCTION FUN_007905b0 @ 007905b0 ////

undefined4 * __thiscall FUN_007905b0(void *this,byte param_1)

{
  FUN_00790460(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007905e0 @ 007905e0 ////

undefined4 __fastcall FUN_007905e0(int *param_1)

{
  float *pfVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  undefined2 extraout_var_00;
  float10 fVar3;
  float10 fVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 local_8 [8];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 8))(local_8);
  fVar3 = FUN_0043b710(pfVar1);
  fVar4 = (float10)0.0;
  uVar2 = CONCAT22(extraout_var,
                   (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                   (ushort)(fVar4 == fVar3) << 0xe);
  if (fVar4 != fVar3) {
    (**(code **)(*param_1 + 8))(local_8);
    uVar5 = FUN_0043b560();
    fVar6 = (float)((int)uVar5 + 2);
    fVar4 = FUN_0043b710((float *)&DAT_00e4fa4c);
    fVar3 = (float10)fVar6;
    uVar2 = CONCAT22(extraout_var_00,
                     (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                     (ushort)(fVar4 == fVar3) << 0xe);
    if (fVar4 >= fVar3 && (fVar4 == fVar3) == 0) {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar2;
}


//// FUNCTION FUN_007906c0 @ 007906c0 ////

int __thiscall FUN_007906c0(void *this,int param_1)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  uint3 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 uVar7;
  float10 fVar8;
  ulonglong uVar9;
  
  uVar7 = 1;
  (**(code **)(*(int *)((int)this + 0x78) + 4))();
  iVar3 = param_1;
  *(int *)((int)this + 0x8c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x78))();
  uVar9 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  iVar1 = *(int *)((int)this + 0xac);
  uVar5 = 0;
  if (*(int *)((int)this + 0xa4) != 0) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)this + 8))(&param_1);
    fVar8 = FUN_00793f50(iVar3,*puVar4,(float *)0x0);
    *(float *)((int)this + 0x54) = (float)fVar8;
    *(float *)((int)this + 0x50) = (float)fVar8;
    fVar2 = (float10)0.0;
    uVar5 = CONCAT22(extraout_var,
                     (ushort)(fVar8 < fVar2) << 8 | (ushort)(NAN(fVar8) || NAN(fVar2)) << 10 |
                     (ushort)(fVar8 == fVar2) << 0xe);
    if (fVar8 >= fVar2) goto LAB_00790726;
  }
  uVar7 = 0;
LAB_00790726:
  uVar6 = (uint3)((uint)uVar5 >> 8);
  if (240000 < (uint)((int)uVar9 - iVar1)) {
    return (uint)uVar6 << 8;
  }
  return CONCAT31(uVar6,uVar7);
}


//// FUNCTION FUN_007907b0 @ 007907b0 ////

undefined4 * __thiscall FUN_007907b0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint local_34;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbe61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078ef30(this);
  *(undefined ***)this = &PTR_FUN_00d505d4;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0x8c) = 0;
  piVar1 = (int *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 **)((int)this + 0x9c) = (undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0xa4) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x98) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 2;
  FUN_0078e820(this,DAT_00e4fa4c);
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  *(undefined4 *)((int)this + 0xa8) = param_2;
  local_10 = 0;
  local_2c = 0xffffffff;
  local_30 = FUN_009b01a0("HUD_TIMELINE_PAPARRAZI_EVENT_GENERATED");
  puVar7 = &DAT_00d17518;
  iVar6 = 0;
  puVar5 = &local_34;
  local_34 = local_34 & 0xfffffffe;
  iVar4 = 2;
  this_00 = (void *)FUN_004f3b20();
  FUN_004f3270(this_00,iVar4,(byte *)puVar5,iVar6,puVar7);
  uVar3 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0xac) = (int)uVar3;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007908e0 @ 007908e0 ////

void __fastcall FUN_007908e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d505d4;
  param_1[0x24] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1e] = &PTR_LAB_00d5048c;
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
  FUN_0078eda0(param_1);
  return;
}


//// FUNCTION FUN_007909c0 @ 007909c0 ////

undefined4 * __thiscall FUN_007909c0(void *this,byte param_1)

{
  FUN_007908e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00790a30 @ 00790a30 ////

undefined4 __thiscall FUN_00790a30(void *this,int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  float10 fVar5;
  
  (**(code **)(*(int *)((int)this + 0x78) + 4))();
  iVar2 = param_1;
  *(int *)((int)this + 0x8c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x78))();
  uVar4 = 0;
  if (*(int *)((int)this + 0xa4) != 0) {
    if (*(char *)(*(int *)((int)this + 0xa4) + 0x9d8) != '\0') {
      (**(code **)(*(int *)this + 4))(DAT_00e4fa4c);
    }
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 8))(&param_1);
    fVar5 = FUN_00793f50(iVar2,*puVar3,(float *)0x0);
    *(float *)((int)this + 0x54) = (float)fVar5;
    *(float *)((int)this + 0x50) = (float)fVar5;
    fVar1 = (float10)0.0;
    uVar4 = CONCAT22(extraout_var,
                     (ushort)(fVar5 < fVar1) << 8 | (ushort)(NAN(fVar5) || NAN(fVar1)) << 10 |
                     (ushort)(fVar5 == fVar1) << 0xe);
    if (fVar5 >= fVar1) {
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return uVar4;
}


//// FUNCTION FUN_00790b10 @ 00790b10 ////

undefined4 __fastcall FUN_00790b10(int *param_1)

{
  char cVar1;
  float *pfVar2;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var;
  float10 fVar6;
  float10 fVar7;
  ulonglong uVar8;
  float fVar9;
  undefined1 local_8 [8];
  
  pfVar2 = (float *)(**(code **)(*param_1 + 8))(local_8);
  fVar6 = FUN_0043b710(pfVar2);
  fVar7 = (float10)0.0;
  uVar5 = CONCAT22(extraout_var_00,
                   (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                   (ushort)(fVar7 == fVar6) << 0xe);
  if (fVar7 != fVar6) {
    uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)param_1[0x2b]);
    if ((char)param_1[0x2b] == '\0') {
      if ((int *)param_1[0x29] != (int *)0x0) {
        iVar3 = (**(code **)(*(int *)param_1[0x29] + 0x27c))();
        uVar5 = 0;
        if (iVar3 != 0) {
          uVar4 = FUN_005773c0(param_1[0x29]);
          uVar5 = GetPlayerStudio();
          if (uVar4 == uVar5) {
            iVar3 = (**(code **)(*(int *)param_1[0x29] + 0x27c))();
            cVar1 = FUN_004724b0(iVar3);
            uVar5 = CONCAT31(extraout_var,cVar1);
            if (cVar1 == '\0') {
              uVar4 = FUN_005773c0(param_1[0x29]);
              uVar5 = GetPlayerStudio();
              if (uVar4 == uVar5) goto LAB_00790be1;
            }
            goto LAB_00790be8;
          }
        }
      }
LAB_00790be1:
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    (**(code **)(*param_1 + 8))(local_8);
    uVar8 = FUN_0043b560();
    fVar9 = (float)((int)uVar8 + 2);
    fVar7 = FUN_0043b710((float *)&DAT_00e4fa4c);
    fVar6 = (float10)fVar9;
    uVar5 = CONCAT22(extraout_var_01,
                     (ushort)(fVar7 < fVar6) << 8 | (ushort)(NAN(fVar7) || NAN(fVar6)) << 10 |
                     (ushort)(fVar7 == fVar6) << 0xe);
    if (fVar7 >= fVar6 && (fVar7 == fVar6) == 0) {
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
LAB_00790be8:
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00790bf0 @ 00790bf0 ////

undefined4 * __thiscall FUN_00790bf0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint local_34;
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
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbe91;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078ef30(this);
  *(undefined ***)this = &PTR_FUN_00d5064c;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0x8c) = 0;
  piVar1 = (int *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 **)((int)this + 0x9c) = (undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0xa4) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x98) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 2;
  FUN_0043b510((undefined4 *)((int)this + 0xa8));
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa8) = param_2;
  FUN_0078e820(this,param_2);
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_2c = 0xffffffff;
  local_30 = FUN_009b01a0("HUD_TIMELINE_STARQUITTING_EVENT_GENERATED");
  local_34 = local_34 & 0xfffffffe;
  puVar6 = &DAT_00d17518;
  iVar5 = 0;
  puVar4 = &local_34;
  iVar3 = 2;
  this_00 = (void *)FUN_004f3b20();
  FUN_004f3270(this_00,iVar3,(byte *)puVar4,iVar5,puVar6);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00790d20 @ 00790d20 ////

void __fastcall FUN_00790d20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5064c;
  param_1[0x24] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1e] = &PTR_LAB_00d5048c;
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
  FUN_0078eda0(param_1);
  return;
}


//// FUNCTION FUN_00790e00 @ 00790e00 ////

undefined4 * __thiscall FUN_00790e00(void *this,byte param_1)

{
  FUN_00790d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00790ea0 @ 00790ea0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00790ea0(void)

{
  return (float10)_DAT_00e59c20;
}


//// FUNCTION FUN_00791010 @ 00791010 ////

void __cdecl FUN_00791010(int *param_1)

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


//// FUNCTION FUN_00791140 @ 00791140 ////

void __cdecl FUN_00791140(int param_1)

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


//// FUNCTION FUN_00791170 @ 00791170 ////

void __fastcall FUN_00791170(int *param_1)

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


//// FUNCTION FUN_00791250 @ 00791250 ////

void __cdecl FUN_00791250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_007915f0 @ 007915f0 ////

void __fastcall FUN_007915f0(int *param_1)

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


//// FUNCTION FUN_007916c0 @ 007916c0 ////

undefined4 * __thiscall FUN_007916c0(void *this,int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x21);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    uVar3 = FUN_0049ba60(puVar5 + 3,param_1);
    if ((char)uVar3 == '\0') {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x21);
  }
  return puVar2;
}


//// FUNCTION FUN_00791780 @ 00791780 ////

void __thiscall FUN_00791780(void *this,int param_1)

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


//// FUNCTION FUN_007917e0 @ 007917e0 ////

void __thiscall FUN_007917e0(void *this,int *param_1)

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


//// FUNCTION FUN_00791840 @ 00791840 ////

int * __fastcall FUN_00791840(int *param_1)

{
  FUN_00791170(param_1);
  return param_1;
}


//// FUNCTION FUN_007918b0 @ 007918b0 ////

void __cdecl FUN_007918b0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00791970 @ 00791970 ////

void __cdecl
FUN_00791970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_3,*param_2);
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  cVar2 = (*(code *)param_4)(*param_2,*param_1);
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}


//// FUNCTION FUN_007919d0 @ 007919d0 ////

void __cdecl FUN_007919d0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  char cVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    cVar1 = (*(code *)param_5)(*(undefined4 *)(param_1 + iVar2 * 4),param_4);
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  *(undefined4 *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00791a30 @ 00791a30 ////

void __cdecl FUN_00791a30(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 **ppuVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *local_c;
  undefined4 *local_8 [2];
  
  puVar5 = param_3;
  iVar9 = (int)param_3 - param_1 >> 2;
  iVar11 = param_2 - param_1 >> 2;
  iVar7 = iVar11;
  param_2 = iVar9;
  while (iVar2 = iVar7, iVar2 != 0) {
    iVar7 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar9) && (0 < param_2)) {
    puVar10 = (undefined4 *)(param_1 + param_2 * 4);
    do {
      uVar1 = *puVar10;
      if (puVar10 + iVar11 == puVar5) {
        ppuVar8 = (undefined4 **)&param_1;
      }
      else {
        param_3 = puVar10 + iVar11;
        ppuVar8 = &param_3;
      }
      puVar6 = *ppuVar8;
      puVar4 = puVar10;
      while (puVar3 = puVar6, puVar3 != puVar10) {
        *puVar4 = *puVar3;
        iVar7 = (int)puVar5 - (int)puVar3 >> 2;
        if (iVar11 < iVar7) {
          local_c = puVar3 + iVar11;
          ppuVar8 = &local_c;
        }
        else {
          local_8[0] = (undefined4 *)(param_1 + (iVar7 * 0x3fffffff + iVar11) * 4);
          ppuVar8 = local_8;
        }
        puVar4 = puVar3;
        puVar6 = *ppuVar8;
      }
      puVar10 = puVar10 + -1;
      param_2 = param_2 + -1;
      *puVar4 = uVar1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00791c10 @ 00791c10 ////

int * __fastcall FUN_00791c10(int *param_1)

{
  FUN_007915f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00791c70 @ 00791c70 ////

void FUN_00791c70(void *param_1)

{
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    FUN_00791c70(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00791cb0 @ 00791cb0 ////

int * __fastcall FUN_00791cb0(int *param_1)

{
  FUN_007915f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00791cc0 @ 00791cc0 ////

int * __fastcall FUN_00791cc0(int *param_1)

{
  FUN_00791170(param_1);
  return param_1;
}


//// FUNCTION FUN_00791ce0 @ 00791ce0 ////

void FUN_00791ce0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x24);
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


//// FUNCTION FUN_00791d20 @ 00791d20 ////

void FUN_00791d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    puVar1[5] = param_4[2];
    puVar1[6] = param_4[3];
    puVar1[7] = param_4[4];
    *(undefined1 *)(puVar1 + 8) = param_5;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
  }
  return;
}


//// FUNCTION FUN_00791dd0 @ 00791dd0 ////

void * FUN_00791dd0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00791e00 @ 00791e00 ////

void __cdecl
FUN_00791e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00791970(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_00791970(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_00791970(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_00791970(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_00791970(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00791eb0 @ 00791eb0 ////

void __cdecl FUN_00791eb0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    cVar1 = (*(code *)param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                               *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if (cVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_007919d0(param_1,iVar2,param_2,param_4,param_5);
  return;
}


//// FUNCTION FUN_00791f70 @ 00791f70 ////

undefined4 * __thiscall FUN_00791f70(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdbec1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0078ef30(this);
  *(undefined ***)this = &PTR_FUN_00d506ac;
  piVar1 = (int *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x84) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 **)((int)this + 0x84) = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = &PTR_FUN_00d16aac;
  *(int *)((int)this + 0x8c) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x80) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 **)((int)this + 0x9c) = (undefined4 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x90) = &PTR_LAB_00d5048c;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined1 *)((int)this + 0xac) = 0;
  param_1 = *(int *)(param_1 + 0xa0);
  local_4 = 2;
  ppuVar3 = FUN_0049ba10(&param_1);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,*ppuVar3,(uint)ppuVar3[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00792080 @ 00792080 ////

void __fastcall FUN_00792080(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d506ac;
  param_1[0x24] = &PTR_LAB_00d5048c;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x1e] = &PTR_FUN_00d16aac;
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
  FUN_0078eda0(param_1);
  return;
}


//// FUNCTION FUN_00792160 @ 00792160 ////

void __fastcall FUN_00792160(int param_1)

{
  FUN_00791c70(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00792190 @ 00792190 ////

void __thiscall FUN_00792190(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_007916c0(this,param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    uVar2 = FUN_0049ba60(param_2,puVar1 + 3);
    if ((char)uVar2 == '\0') {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


//// FUNCTION FUN_007921f0 @ 007921f0 ////

void __fastcall FUN_007921f0(int param_1)

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


//// FUNCTION FUN_00792220 @ 00792220 ////

undefined4 * FUN_00792220(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00792250 @ 00792250 ////

void __fastcall FUN_00792250(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00791ce0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00792290 @ 00792290 ////

void __cdecl
FUN_00792290(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puStack_4;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00791e00(param_2,puVar5,param_3 + -1,param_4);
  puStack_4 = puVar5;
  while (((param_2 < puStack_4 &&
          (cVar3 = (*(code *)param_4)(puStack_4[-1],*puStack_4), cVar3 == '\0')) &&
         (cVar3 = (*(code *)param_4)(*puStack_4,puStack_4[-1]), cVar3 == '\0'))) {
    puStack_4 = puStack_4 + -1;
  }
  do {
    puVar5 = puVar5 + 1;
    puVar2 = puVar5;
    puVar6 = puStack_4;
    if ((param_3 <= puVar5) || (cVar3 = (*(code *)param_4)(*puVar5,*puStack_4), cVar3 != '\0'))
    break;
    cVar3 = (*(code *)param_4)(*puStack_4,*puVar5);
  } while (cVar3 == '\0');
joined_r0x00792328:
  do {
    puVar4 = puStack_4;
    if (param_3 <= puVar2) {
joined_r0x0079236e:
      for (; param_2 < puStack_4; puStack_4 = puStack_4 + -1) {
        puVar4 = puVar4 + -1;
        cVar3 = (*(code *)param_4)(*puVar4,*puVar6);
        if (cVar3 == '\0') {
          cVar3 = (*(code *)param_4)(*puVar6,*puVar4);
          if (cVar3 != '\0') break;
          uVar1 = puVar6[-1];
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar4;
          *puVar4 = uVar1;
        }
      }
      if (puStack_4 == param_2) {
        if (puVar2 == param_3) {
          *param_1 = puVar6;
          param_1[1] = puVar5;
          return;
        }
        if (puVar5 != puVar2) {
          uVar1 = *puVar6;
          *puVar6 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar6;
        *puVar6 = *puVar2;
        puVar5 = puVar5 + 1;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      else {
        puStack_4 = puStack_4 + -1;
        if (puVar2 == param_3) {
          puVar6 = puVar6 + -1;
          if (puStack_4 != puVar6) {
            uVar1 = *puStack_4;
            *puStack_4 = *puVar6;
            *puVar6 = uVar1;
          }
          puVar4 = puVar5 + -1;
          uVar1 = *puVar6;
          puVar5 = puVar5 + -1;
          *puVar6 = *puVar4;
          *puVar5 = uVar1;
        }
        else {
          uVar1 = *puVar2;
          *puVar2 = *puStack_4;
          *puStack_4 = uVar1;
          puVar2 = puVar2 + 1;
        }
      }
      goto joined_r0x00792328;
    }
    cVar3 = (*(code *)param_4)(*puVar6,*puVar2);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)param_4)(*puVar2,*puVar6);
      if (cVar3 != '\0') goto joined_r0x0079236e;
      uVar1 = *puVar5;
      *puVar5 = *puVar2;
      puVar5 = puVar5 + 1;
      *puVar2 = uVar1;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_00792450 @ 00792450 ////

void __cdecl FUN_00792450(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_00791eb0(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1),param_3);
  }
  return;
}


