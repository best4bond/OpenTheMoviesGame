//// FUNCTION FUN_00710740 @ 00710740 ////

void __thiscall FUN_00710740(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00710450();
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
      _Dst = FUN_0070f1e0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0070edd0(param_1,iVar5,param_1 + param_2);
      FUN_0070f1e0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0070def0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0070edd0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0070e3e0(param_1,(int)pvVar3,iVar5);
    FUN_0070def0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_007109e0 @ 007109e0 ////

void __thiscall FUN_007109e0(void *this,undefined4 *param_1)

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
  FUN_00710560(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00710a30 @ 00710a30 ////

void __thiscall FUN_00710a30(void *this,undefined4 *param_1)

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
  FUN_00710740(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00710a80 @ 00710a80 ////

void __fastcall FUN_00710a80(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *local_fc;
  int *local_f8;
  int local_f4;
  undefined1 *local_f0;
  char *local_ec;
  undefined4 local_e8;
  uint local_e4;
  char local_e0 [20];
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  char *local_ac;
  undefined4 local_a8;
  uint local_a4;
  char local_a0 [20];
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [10];
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
  puStack_8 = &LAB_00cd2021;
  local_c = ExceptionList;
  piVar4 = (int *)0x0;
  local_fc = (int *)0x0;
  if ((*(int *)(param_1 + 0x400) == 0) ||
     (*(int *)(param_1 + 0x404) - *(int *)(param_1 + 0x400) >> 2 == 0)) {
    ExceptionList = &local_c;
    local_f4 = param_1;
    piVar1 = operator_new(0x428);
    local_f8 = piVar1;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      local_8c = local_80;
      local_80[0] = 0;
      local_88 = 0;
      local_84 = 10;
      uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_8c,(wchar_t *)&lpCaption_00d16918,uVar2);
      local_cc = local_c0;
      local_c0[0] = '\0';
      local_c8 = 0;
      local_c4 = 0x14;
      _strncpy(local_cc,"listbutton",10);
      local_c8 = 10;
      local_cc[10] = '\0';
      local_f0 = &stack0xfffffee4;
      piVar4 = (int *)0x3;
      local_4 = 2;
      local_fc = (int *)0x3;
      piVar1 = FUN_00713630(piVar1,local_f4,(int *)&local_cc,&local_8c,DAT_0104de64,DAT_0104de60,0,0
                            ,0x3f800000,0x3f2c0000);
    }
    if ((((uint)piVar4 & 2) != 0) && (piVar4 = (int *)((uint)piVar4 & 0xfffffffd), 0x14 < local_c4))
    {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    local_4 = 0xffffffff;
    if ((((uint)piVar4 & 1) != 0) && (piVar4 = (int *)((uint)piVar4 & 0xfffffffe), 10 < local_84)) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_fc = piVar1;
    FUN_007109e0((void *)(local_f4 + 0x3fc),&local_fc);
    local_f8 = operator_new(0x478);
    if (local_f8 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      local_ac = local_a0;
      local_a0[0] = '\0';
      local_a8 = 0;
      local_a4 = 0x14;
      _strncpy(local_ac,"SAVE_COSTUME_DELETE",0x13);
      local_a8 = 0x13;
      local_ac[0x13] = '\0';
      local_ec = local_e0;
      local_e0[0] = '\0';
      local_e8 = 0;
      local_e4 = 0x14;
      _strncpy(local_ec,"button_delete.",0xe);
      local_e8 = 0xe;
      local_ec[0xe] = '\0';
      local_6c = local_60;
      local_60[0] = 0;
      local_68 = 0;
      local_64 = 10;
      uVar2 = FUN_00ace02d(L"blank");
      FUN_004036d0(&local_6c,L"blank",uVar2);
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar2 = FUN_00ace02d(L"blank");
      FUN_004036d0(&local_4c,L"blank",uVar2);
      local_fc = (int *)((uint)piVar4 | 0x3c);
      local_4 = 9;
      puVar3 = FUN_009b5030(local_2c,&local_ac);
      local_f0 = &stack0xfffffee4;
      uVar9 = 0x3f800000;
      uVar10 = 0x3f800000;
      piVar4 = (int *)((uint)piVar4 | 0x7c);
      uVar7 = 0;
      uVar8 = 0;
      local_4 = 10;
      local_fc = piVar4;
      fVar5 = (float10)(**(code **)(*piVar1 + 0x14))();
      fVar6 = (float)(fVar5 * (float10)0.5);
      fVar5 = (float10)(**(code **)(*piVar1 + 0x14))();
      piVar1 = FUN_00713500(local_f8,local_f4,&local_4c,&local_6c,(int *)&local_ec,puVar3,
                            (float)(fVar5 * (float10)0.5),fVar6,uVar7,uVar8,uVar9,uVar10);
    }
    local_f8 = piVar1;
    if ((((uint)piVar4 & 0x40) != 0) && (piVar4 = (int *)((uint)piVar4 & 0xffffffbf), 10 < local_24)
       ) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if ((((uint)piVar4 & 0x20) != 0) && (piVar4 = (int *)((uint)piVar4 & 0xffffffdf), 10 < local_44)
       ) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if ((((uint)piVar4 & 0x10) != 0) && (piVar4 = (int *)((uint)piVar4 & 0xffffffef), 10 < local_64)
       ) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if ((((uint)piVar4 & 8) != 0) && (piVar4 = (int *)((uint)piVar4 & 0xfffffff7), 0x14 < local_e4))
    {
                    /* WARNING: Subroutine does not return */
      _free(local_ec);
    }
    local_4 = 0xffffffff;
    if ((((uint)piVar4 & 4) != 0) && (0x14 < local_a4)) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
    (**(code **)(*piVar1 + 0xc0))();
    (**(code **)(*piVar1 + 0x20))();
    FUN_00710a30((void *)(local_f4 + 0x40c),&local_f8);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00710ed0 @ 00710ed0 ////

void __fastcall FUN_00710ed0(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  wchar_t *_Source;
  int *piVar6;
  uint uVar7;
  undefined1 *this;
  undefined4 *puVar8;
  float10 fVar9;
  float fVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined1 *local_f0;
  wchar_t *local_ec;
  uint local_e8;
  uint local_e4;
  wchar_t local_e0 [10];
  wchar_t *local_cc;
  uint local_c8;
  uint local_c4;
  wchar_t local_c0 [10];
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
  wchar_t *local_4c;
  size_t local_48;
  uint uStack_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2103;
  local_c = ExceptionList;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_f8 = param_1;
  if (*(void **)(param_1 + 0x400) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x400));
  }
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(void **)(param_1 + 0x410) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x410));
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  FUN_00710a80(param_1);
  FUN_00a23c20();
  local_f4 = FUN_0070e070();
  local_fc = 0;
  if (0 < local_f4) {
    do {
      piVar6 = operator_new(0x450);
      local_100 = piVar6;
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        local_ec = local_e0;
        local_e0[0] = L'\0';
        local_e8 = 0;
        local_e4 = 10;
        uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
        if (local_e4 <= uVar7) {
          if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ec);
          }
          local_e4 = uVar7 + 0x20 & 0xffffffe0;
          local_ec = _malloc(local_e4 * 2);
        }
        _wcsncpy(local_ec,(wchar_t *)&lpCaption_00d16918,uVar7);
        local_ec[uVar7] = L'\0';
        local_6c = local_60;
        local_60[0] = '\0';
        local_68 = 0;
        local_64 = 0x14;
        local_e8 = uVar7;
        _strncpy(local_6c,"listbutton",10);
        local_68 = 10;
        local_6c[10] = '\0';
        local_f0 = &stack0xfffffedc;
        bVar2 = true;
        bVar1 = true;
        local_4 = 2;
        piVar6 = FUN_00712740(piVar6,param_1,local_fc,(int *)&local_6c,&local_ec,DAT_0104de64,
                              DAT_0104de60,0,0,0x3f800000,0x3f2c0000);
      }
      if ((bVar1) && (bVar1 = false, 0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_4 = 0xffffffff;
      if ((bVar2) && (bVar2 = false, 10 < local_e4)) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      iVar11 = *(int *)(param_1 + 0x400);
      local_100 = piVar6;
      if ((iVar11 == 0) ||
         ((uint)(*(int *)(param_1 + 0x408) - iVar11 >> 2) <=
          (uint)(*(int *)(param_1 + 0x404) - iVar11 >> 2))) {
        FUN_00710560((void *)(param_1 + 0x3fc),*(undefined4 **)(param_1 + 0x404),1,&local_100);
      }
      else {
        puVar8 = *(undefined4 **)(param_1 + 0x404);
        *puVar8 = piVar6;
        *(undefined4 **)(param_1 + 0x404) = puVar8 + 1;
      }
      FUN_0070e7d0(&local_4c,local_fc);
      uVar7 = DAT_0104a9c4;
      _Source = DAT_0104a9c0;
      local_cc = local_c0;
      local_4 = 5;
      local_c0[0] = L'\0';
      local_c8 = 0;
      local_c4 = 10;
      if (9 < DAT_0104a9c4) {
        local_c4 = DAT_0104a9c4 + 0x20 & 0xffffffe0;
        local_cc = _malloc(local_c4 * 2);
      }
      _wcsncpy(local_cc,_Source,uVar7);
      local_c8 = uVar7;
      local_cc[uVar7] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_0040cae0(&local_cc,local_4c,local_48);
      this = operator_new(0x478);
      local_f0 = this;
      if (this == (undefined1 *)0x0) {
        local_100 = (int *)0x0;
      }
      else {
        local_8c = local_80;
        local_80[0] = '\0';
        local_88 = 0;
        local_84 = 0x14;
        _strncpy(local_8c,"SAVE_COSTUME_DELETE",0x13);
        local_88 = 0x13;
        local_8c[0x13] = '\0';
        local_ac = local_a0;
        local_a0[0] = '\0';
        local_a8 = 0;
        local_a4 = 0x14;
        _strncpy(local_ac,"button_delete.",0xe);
        local_a8 = 0xe;
        local_ac[0xe] = '\0';
        local_4 = 9;
        puVar8 = FUN_009b5030(local_2c,&local_8c);
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        local_100 = (int *)&stack0xfffffedc;
        uVar13 = 0x3f800000;
        uVar14 = 0x3f800000;
        iVar11 = 0;
        uVar12 = 0;
        local_4 = 10;
        fVar9 = (float10)(**(code **)(*piVar6 + 0x14))();
        fVar10 = (float)(fVar9 * (float10)0.5);
        fVar9 = (float10)(**(code **)(*piVar6 + 0x14))();
        local_100 = FUN_00713500(this,local_f8,&local_cc,&local_4c,(int *)&local_ac,puVar8,
                                 (float)(fVar9 * (float10)0.5),fVar10,iVar11,uVar12,uVar13,uVar14);
      }
      if ((bVar3) && (bVar3 = false, 10 < local_24)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if ((bVar4) && (bVar4 = false, 0x14 < local_a4)) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      local_4 = 6;
      if ((bVar5) && (bVar5 = false, 0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      iVar11 = *(int *)(local_f8 + 0x410);
      if ((iVar11 == 0) ||
         ((uint)(*(int *)(local_f8 + 0x418) - iVar11 >> 2) <=
          (uint)(*(int *)(local_f8 + 0x414) - iVar11 >> 2))) {
        FUN_00710740((void *)(local_f8 + 0x40c),*(undefined4 **)(local_f8 + 0x414),1,&local_100);
      }
      else {
        puVar8 = *(undefined4 **)(local_f8 + 0x414);
        *puVar8 = local_100;
        *(undefined4 **)(local_f8 + 0x414) = puVar8 + 1;
      }
      if (10 < local_c4) {
                    /* WARNING: Subroutine does not return */
        _free(local_cc);
      }
      local_4 = 0xffffffff;
      if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_fc = local_fc + 1;
      param_1 = local_f8;
    } while (local_fc < local_f4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007114b0 @ 007114b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007114b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *unaff_EBX;
  char *unaff_EBP;
  bool bVar6;
  float10 fVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  uint *puStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  uint uStack_dc;
  char acStack_d8 [4];
  int *piStack_d4;
  uint uVar12;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_88;
  uint local_84;
  undefined2 *puStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 auStack_70 [14];
  undefined4 uStack_54;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd21cb;
  pvStack_c = ExceptionList;
  local_84 = 0;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0x10))();
  piVar2 = (int *)FUN_0071b2b0();
  fVar7 = (float10)(**(code **)(*piVar2 + 0x14))();
  if ((DAT_0104de78 & 1) == 0) {
    DAT_0104de78 = DAT_0104de78 | 1;
    DAT_0104de70 = 0x42480000;
    _DAT_0104de74 = 300.0;
  }
  if ((DAT_0104de78 & 2) == 0) {
    DAT_0104de78 = DAT_0104de78 | 2;
    DAT_0104de68 = (undefined1 *)0x43c80000;
    DAT_0104de6c = (float)(fVar7 - (float10)_DAT_0104de74);
  }
  (**(code **)(*param_1 + 0x78))();
  (**(code **)(*param_1 + 0x7c))();
  iVar1 = *param_1;
  uStack_a4 = DAT_0104de70;
  uStack_a8 = FUN_0071b2b0();
  (**(code **)(iVar1 + 0x5c))();
  iVar1 = *param_1;
  FUN_0071b2b0();
  (**(code **)(iVar1 + 100))();
  pvVar3 = operator_new(0x288);
  uStack_24 = 0;
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    local_84 = 0x20;
    unaff_EBX = _malloc(0x20);
    _strncpy(unaff_EBX,"ui/buildmenu_window.dds",0x17);
    uStack_88 = 0x17;
    unaff_EBX[0x17] = '\0';
    uStack_24 = CONCAT31(uStack_24._1_3_,1);
    uStack_a4 = 1;
    puVar4 = FUN_005e8fd0(pvVar3,(undefined4 *)&stack0xffffff74);
  }
  uStack_24 = 0xffffffff;
  if (((uStack_a4 & 1) != 0) && (0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  puVar4[0x9c] = 0x41400000;
  puVar4[0x9d] = 0x41400000;
  puVar4[0x9b] = 0x42000000;
  puVar4[0x9e] = 0x41c00000;
  puVar4[0x9f] = 0x41c00000;
  (**(code **)(*param_1 + 0xa0))();
  param_1[0x45] = param_1[0x45] & 0xfffffffd;
  pvVar3 = operator_new(0x360);
  uStack_28 = 3;
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    uStack_88 = 0x20;
    unaff_EBP = _malloc(0x20);
    _strncpy(unaff_EBP,"ui/buildflourish.dds",0x14);
    unaff_EBP[0x14] = '\0';
    uStack_a8 = uStack_a8 | 2;
    uStack_28 = CONCAT31(uStack_28._1_3_,4);
    piStack_d4 = (int *)0x711713;
    piVar2 = FUN_0069d820(pvVar3,(undefined4 *)&stack0xffffff70,0,0,0x3f800000,0x3f800000);
  }
  uStack_28 = 0xffffffff;
  if (((uStack_a8 & 2) != 0) && (0x14 < uStack_88)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  uVar12 = 0x42800000;
  (**(code **)(*piVar2 + 0x74))();
  (**(code **)(*param_1 + 0xc))();
  iVar1 = *piVar2;
  (**(code **)(iVar1 + 0x10))();
  acStack_d8[0] = '\x01';
  acStack_d8[1] = '\0';
  acStack_d8[2] = '\0';
  acStack_d8[3] = '\0';
  uStack_dc = 0x711785;
  piStack_d4 = param_1;
  (**(code **)(iVar1 + 0x5c))();
  uStack_dc = 0x41700000;
  uStack_e4 = 1;
  puStack_e8 = (uint *)0x711794;
  piStack_e0 = param_1;
  (**(code **)(*piVar2 + 0x68))();
  puStack_e8 = (uint *)0x1;
  (**(code **)(*piVar2 + 0x50))();
  puStack_7c = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0;
  uStack_74 = 10;
  uVar5 = FUN_00ace02d(
                      L"<P ALIGN = CENTER><v2><nobr><translate>dialog_save-costume</translate></nobr></v2></P>"
                      );
  FUN_004036d0(&puStack_7c,
               L"<P ALIGN = CENTER><v2><nobr><translate>dialog_save-costume</translate></nobr></v2></P>"
               ,uVar5);
  uStack_54 = 6;
  puVar4 = operator_new(0x3fc);
  uStack_54._0_1_ = 7;
  if (puVar4 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar4);
  }
  uStack_54 = CONCAT31(uStack_54._1_3_,6);
  (**(code **)(*piVar2 + 0x54))();
  puVar11 = DAT_0104de68;
  (**(code **)(*piVar2 + 0x78))();
  (**(code **)(*piVar2 + 0x8c))();
  acStack_d8[0] = -1;
  acStack_d8[1] = -1;
  acStack_d8[2] = -1;
  acStack_d8[3] = -1;
  uStack_e4 = CONCAT13(1,(undefined3)uStack_e4);
  FUN_00830550(piVar2,9,acStack_d8);
  FUN_00830550(piVar2,3,(char *)((int)&uStack_e4 + 3));
  (**(code **)(*piVar2 + 0x5c))();
  (**(code **)(*piVar2 + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar3 = operator_new(0x420);
  bVar6 = pvVar3 == (void *)0x0;
  if (bVar6) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar4 = (undefined4 *)&stack0xffffff44;
    uVar12 = 10;
    uVar5 = FUN_00ace02d(L"<translate>BUTTON_CANCEL</translate>");
    FUN_004036d0(&stack0xffffff38,L"<translate>BUTTON_CANCEL</translate>",uVar5);
    puStack_e8 = &uStack_dc;
    uStack_dc = uStack_dc & 0xffffff00;
    uStack_e4 = 0;
    piStack_e0 = (int *)&DAT_00000014;
    _strncpy((char *)puStack_e8,"button_goback.",0xe);
    uStack_e4 = 0xe;
    *(char *)((int)puStack_e8 + 0xe) = '\0';
    puVar11 = &stack0xfffffedc;
    piVar2 = FUN_0069fb10(pvVar3,(int *)&puStack_e8,(undefined4 *)&stack0xffffff38,0x42480000,
                          0x42480000,0,0,0x3f800000,0x3f800000);
  }
  if ((!bVar6) && (&DAT_00000014 < piStack_e0)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_e8);
  }
  if ((!bVar6) && (10 < uVar12)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar4);
  }
  (**(code **)(*piVar2 + 0x18))();
  (**(code **)(*piVar2 + 0x18))(5,&LAB_005f37f0,0,"SAVEGAMESLOT_CANCEL");
  piVar10 = param_1;
  (**(code **)(*piVar2 + 0x5c))(1,param_1,0);
  piVar9 = param_1;
  (**(code **)(*piVar2 + 100))(1,param_1,0);
  (**(code **)(*param_1 + 0xc))(piVar2,1);
  fVar7 = (float10)(**(code **)(*piVar2 + 0x14))();
  DAT_0104de60 = ((float)DAT_0104de68 - 64.0) - 30.0;
  DAT_0104de64 = (DAT_0104de6c - (float)(fVar7 + (float10)(float)piVar10)) * 0.125;
  puVar4 = operator_new(0x344);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_007432f0(puVar4);
  }
  (**(code **)(param_1[0xf2] + 4))();
  param_1[0xf7] = (int)puVar4;
  (**(code **)param_1[0xf2])();
  uVar8 = 0;
  (**(code **)(*(int *)param_1[0xf7] + 0x5c))(1,param_1,0);
  (**(code **)(*(int *)param_1[0xf7] + 100))(1,param_1,piVar9);
  (**(code **)(*(int *)param_1[0xf7] + 0x74))(DAT_0104de68,uVar8);
  (**(code **)(*param_1 + 0xc))(param_1[0xf7],1);
  FUN_0070faf0(param_1,(undefined1 *)piVar9);
  FUN_00710ed0((int)param_1);
  FUN_0070f640((int)param_1);
  if (param_1 <= &lpType_0000000a) {
    ExceptionList = puVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)0x1);
}


//// FUNCTION FUN_00711b40 @ 00711b40 ////

int * __fastcall FUN_00711b40(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2266;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d470d4;
  param_1[0x14] = (int)&PTR_LAB_00d470b8;
  param_1[0xd1] = (int)(param_1 + 0xd4);
  *(undefined2 *)(param_1 + 0xd4) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 10;
  param_1[0xdd] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = (int)(param_1 + 0xda);
  param_1[0xda] = (int)&PTR_FUN_00d172a0;
  param_1[0xdf] = 0;
  param_1[0xe3] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = (int)(param_1 + 0xe0);
  param_1[0xe0] = (int)&PTR_FUN_00d172a0;
  param_1[0xe5] = 0;
  param_1[0xe9] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = (int)(param_1 + 0xe6);
  param_1[0xe6] = (int)&PTR_LAB_00d31644;
  param_1[0xeb] = 0;
  param_1[0xef] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = (int)(param_1 + 0xec);
  param_1[0xec] = (int)&PTR_FUN_00d195f8;
  param_1[0xf1] = 0;
  param_1[0xf5] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = (int)(param_1 + 0xf2);
  param_1[0xf2] = (int)&PTR_FUN_00d18c2c;
  param_1[0xf7] = 0;
  param_1[0xfb] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = (int)(param_1 + 0xf8);
  param_1[0xf8] = (int)&PTR_LAB_00d47090;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  local_4 = 9;
  FUN_00424130(DAT_00f87b04,1,0,0);
  FUN_009a1560(1);
  param_1[0xd9] = DAT_0105ea84;
  DAT_0104de5c = param_1;
  FUN_007114b0(param_1);
  param_1[0x45] = param_1[0x45] | 8;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00711cc0 @ 00711cc0 ////

int * FUN_00711cc0(void)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd227b;
  local_c = ExceptionList;
  piVar1 = DAT_0104de5c;
  if (DAT_0104de5c == (int *)0x0) {
    ExceptionList = &local_c;
    piVar1 = operator_new(0x41c);
    local_4 = 0;
    if (piVar1 != (int *)0x0) {
      piVar1 = FUN_00711b40(piVar1);
      ExceptionList = local_c;
      return piVar1;
    }
    piVar1 = (int *)0x0;
  }
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_00711d60 @ 00711d60 ////

void __fastcall FUN_00711d60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d47324;
  param_1[0x14] = &PTR_FUN_00d4730c;
  FUN_0069f010(param_1);
  return;
}


//// FUNCTION FUN_00711d80 @ 00711d80 ////

int * __thiscall FUN_00711d80(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00711dc0 @ 00711dc0 ////

void __fastcall FUN_00711dc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d47444;
  param_1[0x14] = &PTR_FUN_00d47428;
  if (10 < (uint)param_1[0x10c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10a]);
  }
  FUN_0069f010(param_1);
  return;
}


//// FUNCTION FUN_00711df0 @ 00711df0 ////

undefined4 * __thiscall FUN_00711df0(void *this,byte param_1)

{
  FUN_00711d60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00711e10 @ 00711e10 ////

undefined4 FUN_00711e10(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2298;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_2 + 0x424) + 0x58))();
  puStack_8 = (undefined1 *)0x0;
  FUN_0070e7b0(DAT_0104de5c,puVar1);
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  uVar2 = FUN_0070ee00();
  ExceptionList = pvStack_10;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00711e90 @ 00711e90 ////

void __fastcall FUN_00711e90(int param_1)

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


//// FUNCTION FUN_00711ec0 @ 00711ec0 ////

undefined4 * __thiscall FUN_00711ec0(void *this,byte param_1)

{
  FUN_00711dc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00711f10 @ 00711f10 ////

void __fastcall FUN_00711f10(int param_1)

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


//// FUNCTION FUN_00711f30 @ 00711f30 ////

void __fastcall FUN_00711f30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d47548;
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


//// FUNCTION FUN_00711f80 @ 00711f80 ////

/* WARNING: Removing unreachable block (ram,0x0071218a) */

int FUN_00711f80(int *param_1)

{
  float fVar1;
  size_t sVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 *_Memory;
  undefined2 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60 [10];
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd22b8;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  sVar2 = FUN_00ace02d(
                      L"<P ALIGN\t= CENTER><v2><nobr><translate>OVERWRITE_TEXT_TAG</translate></nobr></v2></P><br>"
                      );
  FUN_0040cae0(&local_6c,
               L"<P ALIGN\t= CENTER><v2><nobr><translate>OVERWRITE_TEXT_TAG</translate></nobr></v2></P><br>"
               ,sVar2);
  puVar3 = FUN_0043bdc0(local_2c,L"<P ALIGN\t= CENTER><v3><nobr>",param_1 + 0x10a);
  puVar3 = FUN_0043be60(local_4c,puVar3,L"</nobr></v3></P>");
  FUN_0040cae0(&local_6c,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (local_24 < 0xb) {
    sVar2 = FUN_00ace02d(L"<P ALIGN\t= CENTER><v4><nobr>");
    FUN_0040cae0(&local_6c,L"<P ALIGN\t= CENTER><v4><nobr>",sVar2);
    sVar2 = FUN_00ace02d(L"</nobr></v4></P><br>");
    FUN_0040cae0(&local_6c,L"</nobr></v4></P><br>",sVar2);
    sVar2 = FUN_00ace02d(
                        L"<P ALIGN\t= CENTER><v2><nobr><translate>ARE_YOU_SURE_TEXT_TAG</translate></nobr></v2></P>"
                        );
    FUN_0040cae0(&local_6c,
                 L"<P ALIGN\t= CENTER><v2><nobr><translate>ARE_YOU_SURE_TEXT_TAG</translate></nobr></v2></P>"
                 ,sVar2);
    pfVar4 = FUN_00726520();
    fVar1 = *pfVar4;
    fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
    (**(code **)((int)fVar1 + 100))
              (1,param_1,(float)(fVar5 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
    fVar1 = *pfVar4;
    fVar5 = (float10)(**(code **)(*param_1 + 0x10))();
    (**(code **)((int)fVar1 + 0x5c))
              (1,param_1,(float)(fVar5 * (float10)0.5 - (float10)DAT_00e58508 * (float10)0.5));
    (**(code **)(*(int *)pfVar4[0xd1] + 0x18))(0,FUN_0071b530,pfVar4,"REVIEW_CLOSE");
    (**(code **)(*(int *)pfVar4[0xd1] + 0x18))(5,&LAB_005f37f0,0,"REVIEW_CLOSE");
    (**(code **)(*(int *)pfVar4[0xd2] + 0x18))(0,&LAB_00711d40,param_1,"REVIEW_CLOSE");
    _Memory = &LAB_005f37f0;
    (**(code **)(*(int *)pfVar4[0xd2] + 0x18))(5,&LAB_005f37f0,0);
    (**(code **)(*(int *)param_1[0x113] + 0xac))(pfVar4);
    (**(code **)(*(int *)param_1[0x113] + 0xc))(pfVar4,1);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_007121a0 @ 007121a0 ////

void __fastcall FUN_007121a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d47694;
  param_1[0x14] = &PTR_FUN_00d47678;
  param_1[0x118] = &PTR_FUN_00d47548;
  if ((undefined4 *)param_1[0x11a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11a] = param_1[0x119];
  }
  if (param_1[0x119] != 0) {
    *(undefined4 *)(param_1[0x119] + 4) = param_1[0x11a];
  }
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11d] = 0;
  if ((undefined4 *)param_1[0x11a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11a] = param_1[0x119];
  }
  if (param_1[0x119] != 0) {
    *(undefined4 *)(param_1[0x119] + 4) = param_1[0x11a];
  }
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  if (10 < (uint)param_1[0x112]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x110]);
  }
  if (10 < (uint)param_1[0x10a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x108]);
  }
  FUN_0069f010(param_1);
  return;
}


//// FUNCTION FUN_007123a0 @ 007123a0 ////

/* WARNING: Removing unreachable block (ram,0x007125cd) */

int FUN_007123a0(undefined4 param_1,int *param_2)

{
  float fVar1;
  size_t sVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 *_Memory;
  undefined2 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80 [8];
  void *apvStack_70 [2];
  uint uStack_68;
  void *apvStack_50 [2];
  uint uStack_48;
  void *pvStack_30;
  undefined1 local_2c [4];
  uint uStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd22fb;
  pvStack_c = ExceptionList;
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  sVar2 = FUN_00ace02d(
                      L"<P ALIGN\t= CENTER><v2><nobr><translate>OVERWRITE_TEXT_TAG</translate></nobr></v2></P><br>"
                      );
  FUN_0040cae0(&local_8c,
               L"<P ALIGN\t= CENTER><v2><nobr><translate>OVERWRITE_TEXT_TAG</translate></nobr></v2></P><br>"
               ,sVar2);
  puVar3 = (undefined4 *)(**(code **)(*(int *)param_2[0x109] + 0x58))(local_2c);
  puVar3 = FUN_0043bdc0(apvStack_50,L"<P ALIGN\t= CENTER><v3><nobr>",puVar3);
  puVar3 = FUN_0043be60(apvStack_70,puVar3,L"</nobr></v3></P>");
  FUN_0040cae0(&stack0xffffff70,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_70[0]);
  }
  if (uStack_48 < 0xb) {
    if (uStack_28 < 0xb) {
      sVar2 = FUN_00ace02d(L"<P ALIGN\t= CENTER><v4><nobr>");
      FUN_0040cae0(&stack0xffffff70,L"<P ALIGN\t= CENTER><v4><nobr>",sVar2);
      sVar2 = FUN_00ace02d(L"</nobr></v4></P><br>");
      FUN_0040cae0(&stack0xffffff70,L"</nobr></v4></P><br>",sVar2);
      sVar2 = FUN_00ace02d(
                          L"<P ALIGN\t= CENTER><v2><nobr><translate>ARE_YOU_SURE_TEXT_TAG</translate></nobr></v2></P>"
                          );
      FUN_0040cae0(&stack0xffffff70,
                   L"<P ALIGN\t= CENTER><v2><nobr><translate>ARE_YOU_SURE_TEXT_TAG</translate></nobr></v2></P>"
                   ,sVar2);
      pfVar4 = FUN_00726520();
      fVar1 = *pfVar4;
      fVar5 = (float10)(**(code **)(*param_2 + 0x14))();
      (**(code **)((int)fVar1 + 100))
                (1,param_2,(float)(fVar5 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
      fVar1 = *pfVar4;
      fVar5 = (float10)(**(code **)(*param_2 + 0x10))();
      (**(code **)((int)fVar1 + 0x5c))
                (1,param_2,(float)(fVar5 * (float10)0.5 - (float10)DAT_00e58508 * (float10)0.5));
      (**(code **)(*(int *)pfVar4[0xd1] + 0x18))(0,FUN_0071b530,pfVar4,"REVIEW_CLOSE");
      (**(code **)(*(int *)pfVar4[0xd1] + 0x18))(5,&LAB_005f37f0,0,"REVIEW_CLOSE");
      (**(code **)(*(int *)pfVar4[0xd2] + 0x18))(0,FUN_00711e10,param_2,"REVIEW_CLOSE");
      _Memory = &LAB_005f37f0;
      (**(code **)(*(int *)pfVar4[0xd2] + 0x18))(5,&LAB_005f37f0,0);
      (**(code **)(*(int *)param_2[0x108] + 0xac))(pfVar4);
      (**(code **)(*(int *)param_2[0x108] + 0xc))(pfVar4,1);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_50[0]);
}


//// FUNCTION FUN_007125f0 @ 007125f0 ////

/* WARNING: Removing unreachable block (ram,0x007126af) */

int FUN_007125f0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_retaddr;
  char acStack_64 [19];
  undefined1 uStack_51;
  void *pvStack_50;
  int local_4c;
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2320;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)param_2[0x109] + 0x58))(&local_4c);
  puStack_8 = (undefined1 *)0x0;
  if (local_4c == 0) {
    acStack_64[0] = '\0';
    _strncpy(acStack_64,"BUTTON_SAVE-COSTUME",0x13);
    uStack_51 = 0;
    puStack_8._0_1_ = 1;
    puVar1 = FUN_009b5030(apvStack_30,(undefined4 *)&stack0xffffff90);
    FUN_004036d0(&pvStack_50,(wchar_t *)*puVar1,puVar1[1]);
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_30[0]);
    }
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    (**(code **)(*(int *)param_2[0x109] + 0x54))(&pvStack_50);
  }
  FUN_0055d180((int *)&pvStack_50);
  uVar2 = FUN_0070e890(&pvStack_50);
  if ((char)uVar2 == '\0') {
    iVar3 = FUN_00711e10(unaff_retaddr,(int)param_2);
  }
  else {
    iVar3 = FUN_007123a0(unaff_retaddr,param_2);
  }
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_50);
  }
  ExceptionList = pvStack_10;
  return iVar3;
}


//// FUNCTION FUN_00712740 @ 00712740 ////

undefined4 * __thiscall
FUN_00712740(void *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float unaff_retaddr;
  void *_Memory;
  undefined4 local_4c [8];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2359;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0069fb10(this,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  *(undefined4 *)((int)this + 0x420) = param_2;
  *(undefined4 *)((int)this + 0x424) = param_2;
  puVar4 = (undefined4 *)((int)this + 0x428);
  *(undefined ***)this = &PTR_FUN_00d47444;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d47428;
  *puVar4 = (undefined2 *)((int)this + 0x434);
  *(undefined2 *)((int)this + 0x434) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 10;
  *(undefined4 *)((int)this + 0x44c) = param_1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00741630(this,0,0x711f80,this,"SAVEGAMESLOT_OK");
  puVar2 = FUN_0070e7d0(local_2c,*(int *)((int)this + 0x420));
  FUN_004036d0(puVar4,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  puVar2 = operator_new(0x3fc);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  puVar4 = FUN_0043bdc0(local_2c,L"<v3><nobr>",puVar4);
  FUN_0043be60(local_4c,puVar4,L"</nobr></v3>");
  local_4 = CONCAT31(local_4._1_3_,3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  puVar4 = local_4c;
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar3 + 0x84))();
  _Memory = DAT_00e58210;
  (**(code **)(*piVar3 + 0x5c))(1);
  FUN_0073f6e0(this,piVar3);
  fVar5 = (float10)(**(code **)(*piVar3 + 0x14))();
  (**(code **)(*piVar3 + 100))
            (1,this,(float)((float10)(unaff_retaddr * 0.5) - fVar5 * (float10)0.5));
  do {
    cVar1 = (**(code **)(*piVar3 + 0x50))(1);
  } while (cVar1 != '\0');
  (**(code **)(*piVar3 + 0x14))();
  if (&lpType_0000000a < puVar4) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_2c[0];
  return this;
}


//// FUNCTION FUN_00712970 @ 00712970 ////

undefined4 * __thiscall FUN_00712970(void *this,byte param_1)

{
  FUN_007121a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00712cf0 @ 00712cf0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00712cf0(int *param_1)

{
  int ***pppiVar1;
  char cVar2;
  size_t sVar3;
  int ****ppppiVar4;
  void *pvVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint unaff_EDI;
  float10 fVar10;
  undefined4 uVar11;
  void *pvStack_158;
  int ***pppiStack_150;
  float fStack_14c;
  void *_Memory;
  int ****ppppiVar12;
  uint uVar13;
  void *pvStack_118;
  int ***pppiStack_110;
  void *pvStack_10c;
  uint uStack_108;
  int ***pppiStack_104;
  uint *puStack_ec;
  float fStack_e8;
  int ***pppiStack_e4;
  uint uStack_e0;
  int *piStack_bc;
  undefined4 *local_98 [6];
  undefined4 uStack_80;
  undefined1 uStack_70;
  undefined1 uStack_54;
  undefined2 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40 [12];
  undefined1 uStack_28;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd24bf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0070dc30();
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  sVar3 = FUN_00ace02d(
                      L"<P ALIGN\t= CENTER><v2><nobr><translate>ENTER_NAME_TEXT_TAG</translate></nobr></v2></P>"
                      );
  FUN_0040cae0(&local_4c,
               L"<P ALIGN\t= CENTER><v2><nobr><translate>ENTER_NAME_TEXT_TAG</translate></nobr></v2></P>"
               ,sVar3);
  if ((DAT_0104dea8 & 1) == 0) {
    DAT_0104dea8 = DAT_0104dea8 | 1;
    DAT_0104dea0 = 400.0;
    DAT_0104dea4 = (char *)0x43480000;
  }
  local_98[0] = operator_new(0x344);
  local_4._0_1_ = 1;
  if (local_98[0] == (undefined4 *)0x0) {
    ppppiVar4 = (int ****)0x0;
  }
  else {
    ppppiVar4 = (int ****)FUN_007432f0(local_98[0]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  (*(code *)(*ppppiVar4)[0x1e])();
  pcVar6 = DAT_0104dea4;
  (*(code *)(*ppppiVar4)[0x1f])();
  pppiVar1 = *ppppiVar4;
  (**(code **)(*param_1 + 0x14))();
  piStack_bc = param_1;
  (*(code *)pppiVar1[0x19])();
  pppiVar1 = *ppppiVar4;
  (**(code **)(*param_1 + 0x10))();
  (*(code *)pppiVar1[0x17])();
  pvVar5 = operator_new(0x288);
  if (pvVar5 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    unaff_EDI = 0x20;
    pcVar6 = _malloc(0x20);
    uStack_e0 = 0x712e6e;
    _strncpy(pcVar6,"ui/buildmenu_window.dds",0x17);
    pcVar6[0x17] = '\0';
    uStack_24 = CONCAT31(uStack_24._1_3_,3);
    piStack_bc = (int *)0x1;
    puVar7 = FUN_005e8fd0(pvVar5,(undefined4 *)&stack0xffffff4c);
  }
  uStack_24 = 0;
  if ((((uint)piStack_bc & 1) != 0) && (0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar6);
  }
  puVar7[0x9c] = 0x41400000;
  puVar7[0x9d] = 0x41400000;
  puVar7[0x9b] = 0x42000000;
  puVar7[0x9e] = 0x41c00000;
  puVar7[0x9f] = 0x41c00000;
  (*(code *)(*ppppiVar4)[0x28])();
  puVar7 = operator_new(0x3fc);
  uStack_28 = 5;
  if (puVar7 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_00833290(puVar7);
  }
  uStack_28 = 0;
  (**(code **)(*piVar8 + 0x54))();
  (**(code **)(*piVar8 + 0x78))();
  uStack_e0 = 0x712f5d;
  (**(code **)(*piVar8 + 0x8c))();
  uStack_e0 = 0;
  fStack_e8 = 1.4013e-45;
  puStack_ec = (uint *)0x712f6a;
  pppiStack_e4 = (int ***)ppppiVar4;
  (**(code **)(*piVar8 + 100))();
  puStack_ec = (uint *)0x0;
  (**(code **)(*piVar8 + 0x5c))();
  (**(code **)(*piVar8 + 0x30))();
  (*(code *)(*ppppiVar4)[3])();
  fVar10 = (float10)(**(code **)(*piVar8 + 0x14))();
  fStack_e8 = (float)((float10)_DAT_00e58218 + fVar10);
  pppiStack_104 = (int ***)0x712fa5;
  puVar7 = operator_new(0x3c8);
  uStack_54 = 6;
  if (puVar7 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_00738920(puVar7);
  }
  param_1[0x109] = (int)piVar8;
  uStack_108 = 1;
  uStack_54 = 0;
  pvStack_10c = (void *)0x712fe1;
  pppiStack_104 = (int ***)ppppiVar4;
  (**(code **)(*piVar8 + 0x5c))();
  pvStack_10c = (void *)0x1;
  pppiStack_110 = (int ***)ppppiVar4;
  (**(code **)(*(int *)param_1[0x109] + 100))();
  pvStack_118 = (void *)(DAT_0104dea0 - (DAT_00e58214 + DAT_00e58214));
  (**(code **)(*(int *)param_1[0x109] + 0x78))();
  *(undefined4 *)(param_1[0x109] + 0x394) = 0x18;
  if ((DAT_0104dea8 & 2) == 0) {
    DAT_0104dea8 = DAT_0104dea8 | 2;
    DAT_0104de80 = &DAT_0104de8c;
    DAT_0104de8c = 0;
    _DAT_0104de84 = 0;
    DAT_0104de88 = 0x14;
    _strncpy(&DAT_0104de8c,"BUTTON_SAVE-COSTUME",0x13);
    _DAT_0104de84 = 0x13;
    DAT_0104de80[0x13] = 0;
    _atexit(FUN_00d12a80);
  }
  FUN_009b5030(local_98,&DAT_0104de80);
  uStack_70 = 7;
  (**(code **)(*(int *)param_1[0x109] + 0x54))();
  FUN_00738730((void *)param_1[0x109],'\x01');
  *(undefined1 *)(param_1[0x109] + 0x38c) = 1;
  (**(code **)(*(int *)param_1[0x109] + 0x8c))();
  uVar13 = 1;
  (*(code *)(*ppppiVar4)[3])();
  (**(code **)(*(int *)param_1[0x109] + 0x14))();
  if ((DAT_0104dea8 & 4) == 0) {
    _DAT_0104de7c = DAT_0104dea0 * 0.3;
    DAT_0104dea8 = DAT_0104dea8 | 4;
  }
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puStack_ec = &uStack_e0;
    uStack_e0 = uStack_e0 & 0xffff0000;
    fStack_e8 = 0.0;
    pppiStack_e4 = (int ***)&lpType_0000000a;
    uVar9 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_ec,(wchar_t *)&lpCaption_00d16918,uVar9);
    pppiStack_110 = (int ***)&pppiStack_104;
    pppiStack_104 = (int ***)((uint)pppiStack_104 & 0xffffff00);
    pvStack_10c = (void *)0x0;
    uStack_108 = 0x14;
    _strncpy((char *)pppiStack_110,"button_quit.",0xc);
    pvStack_10c = (void *)0xc;
    *(char *)(pppiStack_110 + 3) = '\0';
    pvStack_118 = (void *)((uint)pvStack_118 | 6);
    uStack_80 = 10;
    fStack_14c = 1.0395373e-38;
    piVar8 = FUN_0069fb10(pvVar5,(int *)&pppiStack_110,&puStack_ec,0x42800000,0x42800000,0,0,
                          0x3f800000,0x3f800000);
  }
  if ((((uint)pvStack_118 & 4) != 0) &&
     (pvStack_118 = (void *)((uint)pvStack_118 & 0xfffffffb), 0x14 < uStack_108)) {
                    /* WARNING: Subroutine does not return */
    _free(pppiStack_110);
  }
  uStack_80 = 7;
  if ((((uint)pvStack_118 & 2) != 0) &&
     (pvStack_118 = (void *)((uint)pvStack_118 & 0xfffffffd), &lpType_0000000a < pppiStack_e4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_ec);
  }
  pcVar6 = "SAVELOAD_CANCEL";
  _Memory = (void *)0x0;
  ppppiVar12 = ppppiVar4;
  (**(code **)(*piVar8 + 0x18))();
  pvStack_158 = (void *)0x0;
  uVar9 = 5;
  fStack_14c = 1.0395563e-38;
  (**(code **)(*piVar8 + 0x18))();
  fStack_14c = (DAT_0104dea0 * 0.5 - _DAT_0104de7c * 0.5) - 32.0;
  pppiStack_150 = (int ***)ppppiVar4;
  (**(code **)(*piVar8 + 0x5c))();
  (**(code **)(*piVar8 + 100))();
  (*(code *)(*ppppiVar4)[3])();
  pvVar5 = operator_new(0x420);
  pvStack_10c = pvVar5;
  if (pvVar5 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    pcVar6 = &stack0xfffffee0;
    uVar13 = 10;
    uVar9 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffed4,(wchar_t *)&lpCaption_00d16918,uVar9);
    pppiStack_150 = (int ***)&stack0xfffffebc;
    fStack_14c = 0.0;
    uVar9 = 0x14;
    _strncpy((char *)pppiStack_150,"button_tick.",0xc);
    fStack_14c = 1.68156e-44;
    *(char *)(pppiStack_150 + 3) = '\0';
    ppppiVar12 = (int ****)&stack0xfffffe88;
    pvStack_158 = (void *)((uint)pvStack_158 | 0x18);
    piVar8 = FUN_0069fb10(pvVar5,(int *)&pppiStack_150,(undefined4 *)&stack0xfffffed4,0x42800000,
                          0x42800000,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)pvStack_158 & 0x10) != 0) &&
     (pvStack_158 = (void *)((uint)pvStack_158 & 0xffffffef), 0x14 < uVar9)) {
                    /* WARNING: Subroutine does not return */
    _free(pppiStack_150);
  }
  if ((((uint)pvStack_158 & 8) != 0) && (10 < uVar13)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar6);
  }
  (**(code **)(*piVar8 + 0x18))();
  uVar11 = 0;
  (**(code **)(*piVar8 + 0x18))(5,&LAB_005f37f0,0,"SAVELOAD_OK");
  (**(code **)(*piVar8 + 0x5c))(1,ppppiVar4,(_DAT_0104de7c + DAT_0104dea0) * 0.5 - 32.0);
  (**(code **)(*piVar8 + 100))(1,ppppiVar4,uVar11);
  (*(code *)(*ppppiVar4)[3])(piVar8,1);
  (*(code *)(*ppppiVar4)[0x23])(0);
  do {
    cVar2 = (*(code *)(*ppppiVar4)[0x14])(1);
  } while (cVar2 != '\0');
  (**(code **)(*(int *)param_1[0x108] + 0xac))(ppppiVar4);
  (**(code **)(*(int *)param_1[0x108] + 0xc))(ppppiVar4,1);
  if (&lpType_0000000a < ppppiVar12) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (&lpType_0000000a < pppiStack_150) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_158);
  }
  ExceptionList = pvStack_118;
  return CONCAT31((int3)((uint)ppppiVar12 >> 8),1);
}


//// FUNCTION FUN_00713500 @ 00713500 ////

undefined4 * __thiscall
FUN_00713500(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2502;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069fb10(this,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  *(undefined ***)this = &PTR_FUN_00d47694;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d47678;
  *(undefined4 *)((int)this + 0x420) = (undefined2 *)((int)this + 0x42c);
  *(undefined2 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x428) = 10;
  *(undefined4 *)((int)this + 0x440) = (undefined2 *)((int)this + 0x44c);
  *(undefined2 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 10;
  piVar1 = (int *)((int)this + 0x460);
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(int **)((int)this + 0x46c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d47548;
  *(undefined4 *)((int)this + 0x474) = 0;
  local_4 = 3;
  FUN_004036d0((undefined4 *)((int)this + 0x420),(wchar_t *)*param_2,param_2[1]);
  FUN_004036d0((undefined4 *)((int)this + 0x440),(wchar_t *)*param_3,param_3[1]);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x474) = param_1;
  (**(code **)*piVar1)();
  FUN_00741630(this,0,0x712990,0,"SAVE_CREATE_DELETEDIALOGUE");
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00713630 @ 00713630 ////

undefined4 * __thiscall
FUN_00713630(void *this,undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  void *_Memory;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  float local_4;
  
  local_4 = -NAN;
  puStack_8 = &LAB_00cd252b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0069fb10(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_4 = 0.0;
  *(undefined ***)this = &PTR_FUN_00d47324;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4730c;
  *(undefined4 *)((int)this + 0x420) = param_1;
  FUN_00741630(this,0,0x712cf0,param_1,"SAVEGAMESLOT_OK");
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar2 = FUN_00ace02d(L"<v3><nobr><translate>BUTTON_SAVE-COSTUME</translate></nobr></v3>");
  FUN_004036d0(&local_2c,L"<v3><nobr><translate>BUTTON_SAVE-COSTUME</translate></nobr></v3>",uVar2);
  local_4._0_1_ = 1;
  puVar3 = operator_new(0x3fc);
  local_4._0_1_ = 2;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar3);
  }
  local_4 = (float)CONCAT31(local_4._1_3_,1);
  (**(code **)(*piVar4 + 0x54))();
  uVar2 = 0;
  (**(code **)(*piVar4 + 0x84))();
  _Memory = this;
  (**(code **)(*piVar4 + 0x5c))(1);
  FUN_0073f6e0(this,piVar4);
  local_4 = local_4 * 0.5;
  fVar5 = (float10)(**(code **)(*piVar4 + 0x14))();
  local_4 = (float)((float10)local_4 - fVar5 * (float10)0.5);
  (**(code **)(*piVar4 + 100))(1,this,local_4);
  do {
    cVar1 = (**(code **)(*piVar4 + 0x50))(1);
  } while (cVar1 != '\0');
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_2c;
  return this;
}


//// FUNCTION FUN_007137e0 @ 007137e0 ////

void __fastcall FUN_007137e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d47b24;
  param_1[0x14] = &PTR_FUN_00d47b08;
  FUN_0069f010(param_1);
  return;
}


//// FUNCTION FUN_00713800 @ 00713800 ////

void __fastcall FUN_00713800(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,0,0);
  FUN_009a1560(1);
  iVar1 = *param_1;
  uVar4 = 0;
  iVar2 = FUN_0071b2b0();
  (**(code **)(iVar1 + 0x70))(iVar2,uVar4);
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0xc))(param_1,1);
  return;
}


//// FUNCTION WSaveLoadScreen_Tick @ 00713850 ////

void __fastcall WSaveLoadScreen_Tick(int *param_1)

{
  WWindow_Tick(param_1);
                    /* WARNING: Could not recover jumptable at 0x0071385d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))();
  return;
}


//// FUNCTION FUN_007138e0 @ 007138e0 ////

int * __thiscall FUN_007138e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00713920 @ 00713920 ////

int * __thiscall FUN_00713920(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00713a70 @ 00713a70 ////

void __cdecl FUN_00713a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00713b80 @ 00713b80 ////

undefined4 * __thiscall FUN_00713b80(void *this,byte param_1)

{
  FUN_007137e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00713c20 @ 00713c20 ////

undefined4 __fastcall FUN_00713c20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_EAX;
  
  puVar2 = *(undefined4 **)(param_1 + 0x38c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x378) + 4))();
    *(undefined4 *)(param_1 + 0x38c) = 0;
    in_EAX = (*(code *)**(undefined4 **)(param_1 + 0x378))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x3a4);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x390) + 4))();
    *(undefined4 *)(param_1 + 0x3a4) = 0;
    in_EAX = (*(code *)**(undefined4 **)(param_1 + 0x390))();
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_00713ca0 @ 00713ca0 ////

undefined4 FUN_00713ca0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd254b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0xbfc);
  (**(code **)(this[0xe] + 4))();
  this[0x13] = param_2;
  (**(code **)this[0xe])();
  uVar2 = FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00713d30 @ 00713d30 ////

undefined4 FUN_00713d30(void)

{
  return DAT_0104ded0;
}


//// FUNCTION FUN_00713d40 @ 00713d40 ////

void __fastcall FUN_00713d40(int param_1)

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


//// FUNCTION FUN_00713d60 @ 00713d60 ////

void __fastcall FUN_00713d60(int param_1)

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


//// FUNCTION FUN_00713ea0 @ 00713ea0 ////

void __cdecl FUN_00713ea0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_007140d0 @ 007140d0 ////

void __fastcall FUN_007140d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  size_t sVar8;
  int extraout_ECX;
  int iVar9;
  float extraout_ECX_00;
  wchar_t *_Format;
  float10 fVar10;
  float10 fVar11;
  wchar_t *pwVar12;
  float fVar13;
  int iStack_138;
  undefined2 *puStack_134;
  wchar_t *local_130;
  uint uStack_12c;
  undefined2 auStack_128 [10];
  wchar_t awStack_114 [64];
  wchar_t awStack_94 [64];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd258b;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0x428) == 0) {
    _Format = (wchar_t *)0x0;
  }
  else {
    _Format = (wchar_t *)(*(int *)(param_1 + 0x42c) - *(int *)(param_1 + 0x428) >> 2);
  }
  ExceptionList = &pvStack_c;
  local_130 = _Format;
  (**(code **)(**(int **)(param_1 + 0x3d4) + 0xc0))();
  (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc0))();
  if (((int)_Format <= DAT_00e58224) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x404), puVar1 != (undefined4 *)0x0)) {
    piVar2 = puVar1 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)();
    }
    (**(code **)(*(int *)(param_1 + 0x3f0) + 4))();
    *(undefined4 *)(param_1 + 0x404) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x3f0))();
  }
  puStack_134 = auStack_128;
  auStack_128[0] = 0;
  local_130 = (wchar_t *)0x0;
  uStack_12c = 10;
  uVar7 = FUN_00ace02d(L"<t2>");
  FUN_004036d0(&puStack_134,L"<t2>",uVar7);
  pvStack_c = (void *)0x0;
  if (_Format == (wchar_t *)0x0) {
    sVar8 = FUN_00ace02d((short *)&DAT_00d31574);
    pwVar12 = L"0/0";
  }
  else {
    sVar8 = _swprintf(awStack_114,0xd18f7c,(wchar_t *)(*(int *)(param_1 + 0x420) + 1));
    FUN_0040cae0(&puStack_134,awStack_114,sVar8);
    sVar8 = FUN_00ace02d((short *)&DAT_00d24214);
    FUN_0040cae0(&puStack_134,L"/",sVar8);
    sVar8 = _swprintf(awStack_94,0xd18f7c,_Format);
    pwVar12 = awStack_94;
  }
  FUN_0040cae0(&puStack_134,pwVar12,sVar8);
  sVar8 = FUN_00ace02d(L"</t2>");
  FUN_0040cae0(&puStack_134,L"</t2>",sVar8);
  iVar9 = 0;
  if (*(int **)(param_1 + 0x41c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x41c) + 0x54))();
    (**(code **)(**(int **)(param_1 + 0x41c) + 0x84))(0);
    piVar2 = *(int **)(param_1 + 0x3d4);
    piVar3 = *(int **)(param_1 + 0x41c);
    iVar9 = *piVar3;
    fVar10 = (float10)(**(code **)(*piVar2 + 0x10))();
    fVar11 = (float10)(**(code **)(*piVar3 + 0x10))();
    (**(code **)(iVar9 + 0x5c))(1,piVar2,(float)(((float10)(float)fVar10 - fVar11) * (float10)0.5));
    (**(code **)(**(int **)(param_1 + 0x41c) + 100))(2,*(undefined4 *)(param_1 + 0x3ec),0xc0000000);
    do {
      cVar6 = (**(code **)(**(int **)(param_1 + 0x41c) + 0x50))();
      iVar9 = extraout_ECX;
    } while (cVar6 != '\0');
  }
  if (DAT_00e58224 < (int)_Format) {
    fVar13 = (float)*(int *)(param_1 + 0x420) / (float)((int)_Format - DAT_00e58224);
  }
  else {
    fVar13 = 0.0;
  }
  fVar5 = (float)DAT_00e58224;
  pvVar4 = *(void **)(param_1 + 0x404);
  if (pvVar4 != (void *)0x0) {
    FUN_00407070(&stack0xfffffeac,fVar13);
    FUN_0071fb50(pvVar4,iVar9);
    pvVar4 = *(void **)(param_1 + 0x404);
    fVar13 = extraout_ECX_00;
    FUN_00407070(&stack0xfffffeac,fVar5 / (float)iStack_138);
    FUN_0071fc90(pvVar4,fVar13);
  }
  if (uStack_12c < 0xb) {
    ExceptionList = pvStack_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_134);
}


//// FUNCTION FUN_007143a0 @ 007143a0 ////

bool FUN_007143a0(int *param_1,int *param_2,int *param_3)

{
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  LONG LVar6;
  void *pvVar7;
  int iVar8;
  int local_a8;
  int local_a4;
  wchar_t *local_a0;
  uint local_9c;
  uint local_98;
  wchar_t local_94 [10];
  FILETIME local_80;
  int local_78;
  FILETIME local_74;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  wchar_t *local_2c;
  size_t local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd25c3;
  local_c = ExceptionList;
  local_4c = local_40;
  iVar8 = -1;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00a23c20();
  local_78 = FUN_00a23460();
  local_a8 = 0;
  if (0 < local_78) {
    local_a4 = -1;
    do {
      iVar2 = FUN_00a23460();
      FUN_00a236f0((int *)&local_2c,iVar2 + local_a4);
      uVar3 = FUN_00ace02d(L"autosave");
      uVar4 = FUN_0055d250(&local_2c,(ushort *)L"autosave",0,uVar3);
      uVar3 = DAT_0104a9a4;
      pwVar1 = DAT_0104a9a0;
      if (uVar4 != 0xffffffff) {
        local_98 = 10;
        local_a0 = local_94;
        local_94[0] = L'\0';
        local_9c = 0;
        if (9 < DAT_0104a9a4) {
          uVar4 = DAT_0104a9a4 + 0x20 >> 5;
          local_98 = uVar4 << 5;
          local_a0 = _malloc(uVar4 * 0x40);
        }
        _wcsncpy(local_a0,pwVar1,uVar3);
        local_9c = uVar3;
        local_a0[uVar3] = L'\0';
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_0040cae0(&local_a0,local_2c,local_28);
        sVar5 = FUN_00ace02d(L".jad");
        FUN_0040cae0(&local_a0,L".jad",sVar5);
        if (iVar8 < 0) {
          FUN_004036d0(&local_4c,local_2c,local_28);
          FUN_004036d0(&local_6c,local_a0,local_9c);
          FUN_009d3840(&local_a0,&local_80.dwLowDateTime);
          iVar8 = local_a8;
        }
        else {
          FUN_009d3840(&local_a0,&local_74.dwLowDateTime);
          LVar6 = CompareFileTime(&local_74,&local_80);
          if (LVar6 == 1) {
            FUN_004036d0(&local_4c,local_2c,local_28);
            FUN_004036d0(&local_6c,local_a0,local_9c);
            local_80.dwLowDateTime = local_74.dwLowDateTime;
            local_80.dwHighDateTime = local_74.dwHighDateTime;
            iVar8 = local_a8;
          }
        }
        if (10 < local_98) {
                    /* WARNING: Subroutine does not return */
          _free(local_a0);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_a8 = local_a8 + 1;
      local_a4 = local_a4 + -1;
    } while (local_a8 < local_78);
  }
  uVar3 = local_48;
  pwVar1 = local_4c;
  *param_1 = iVar8;
  if ((uint)param_2[2] <= local_48) {
    if (10 < (uint)param_2[2]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_2);
    }
    uVar4 = local_48 + 0x20 & 0xffffffe0;
    param_2[2] = uVar4;
    pvVar7 = _malloc(uVar4 * 2);
    *param_2 = (int)pvVar7;
  }
  _wcsncpy((wchar_t *)*param_2,pwVar1,uVar3);
  uVar4 = local_68;
  pwVar1 = local_6c;
  param_2[1] = uVar3;
  *(undefined2 *)(*param_2 + uVar3 * 2) = 0;
  if ((uint)param_3[2] <= local_68) {
    if (10 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*param_3);
    }
    uVar3 = local_68 + 0x20 >> 5;
    param_3[2] = uVar3 << 5;
    pvVar7 = _malloc(uVar3 * 0x40);
    *param_3 = (int)pvVar7;
  }
  _wcsncpy((wchar_t *)*param_3,pwVar1,uVar4);
  param_3[1] = uVar4;
  *(undefined2 *)(*param_3 + uVar4 * 2) = 0;
  if (local_64 < 0xb) {
    if (local_44 < 0xb) {
      ExceptionList = local_c;
      return *param_1 != -1;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_00714740 @ 00714740 ////

void __thiscall FUN_00714740(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d47c3c;
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


//// FUNCTION FUN_00714780 @ 00714780 ////

void __fastcall FUN_00714780(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d47c3c;
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


//// FUNCTION FUN_00714820 @ 00714820 ////

void __fastcall FUN_00714820(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d47c4c;
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


//// FUNCTION FUN_007148a0 @ 007148a0 ////

void __fastcall FUN_007148a0(int param_1)

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


//// FUNCTION FUN_007148f0 @ 007148f0 ////

void * FUN_007148f0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00714920 @ 00714920 ////

int * FUN_00714920(void)

{
  wchar_t *pwVar1;
  int *piVar2;
  undefined4 *puVar3;
  tm *ptVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  int *unaff_retaddr;
  int iVar11;
  wchar_t *local_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  wchar_t awStack_1c8 [10];
  wchar_t *pwStack_1b4;
  size_t sStack_1b0;
  uint uStack_1ac;
  wchar_t awStack_1a8 [10];
  undefined8 uStack_194;
  uint uStack_18c;
  uint uStack_188;
  wchar_t awStack_184 [10];
  wchar_t *pwStack_170;
  uint local_16c;
  uint uStack_168;
  void *apvStack_150 [2];
  uint uStack_148;
  void *apvStack_130 [2];
  uint uStack_128;
  wchar_t awStack_110 [128];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd25f1;
  pvStack_c = ExceptionList;
  local_1d4 = (wchar_t *)0x0;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)GetPlayerStudio();
  (**(code **)(*piVar2 + 0x20))(&local_16c);
  puStack_8 = (undefined1 *)0x0;
  puVar3 = FUN_0043c090();
  FUN_0040cae0(&pwStack_170,(wchar_t *)*puVar3,puVar3[1]);
  _time(&uStack_194);
  ptVar4 = _localtime(&uStack_194);
  FUN_00acfa94(awStack_110,0x80,L"%H%M%A%d%B%Y",ptVar4);
  pwStack_1b4 = awStack_1a8;
  awStack_1a8[0] = L'\0';
  sStack_1b0 = 0;
  uStack_1ac = 10;
  uVar5 = FUN_00ace02d(awStack_110);
  FUN_004036d0(&pwStack_1b4,awStack_110,uVar5);
  FUN_0040cae0(&pwStack_170,pwStack_1b4,sStack_1b0);
  if (10 < uStack_1ac) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_1b4);
  }
  piVar2 = FUN_00569220((int *)&pwStack_1b4,(int *)&pwStack_170);
  FUN_004036d0(&pwStack_170,(wchar_t *)*piVar2,piVar2[1]);
  if (10 < uStack_1ac) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_1b4);
  }
  local_1d4 = awStack_1c8;
  iVar11 = 0;
  awStack_1c8[0] = L'\0';
  uStack_1d0 = 0;
  uStack_1cc = 10;
  FUN_004036d0(&local_1d4,pwStack_170,local_16c);
  puStack_8._0_1_ = 1;
  FUN_00a23c20();
  iVar6 = FUN_00a23460();
  iVar10 = 0;
  if (0 < iVar6) {
    do {
      iVar7 = FUN_00a23460();
      FUN_00a236f0((int *)&pwStack_1b4,(iVar7 - iVar10) + -1);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      iVar7 = __wcsicmp(local_1d4,pwStack_1b4);
      if (iVar7 == 0) {
        iVar10 = -1;
        puVar3 = FUN_00569df0(apvStack_130,iVar11);
        puVar3 = FUN_00443250(apvStack_150,&pwStack_170,puVar3);
        uVar5 = puVar3[1];
        pwVar1 = (wchar_t *)*puVar3;
        if (uStack_1cc <= uVar5) {
          if (10 < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
            _free(local_1d4);
          }
          uStack_1cc = uVar5 + 0x20 & 0xffffffe0;
          local_1d4 = _malloc(uStack_1cc * 2);
        }
        _wcsncpy(local_1d4,pwVar1,uVar5);
        local_1d4[uVar5] = L'\0';
        uStack_1d0 = uVar5;
        if (10 < uStack_148) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_150[0]);
        }
        if (10 < uStack_128) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_130[0]);
        }
        iVar11 = iVar11 + 1;
      }
      puStack_8._0_1_ = 1;
      if (10 < uStack_1ac) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_1b4);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar6);
  }
  uVar5 = DAT_0104a9a4;
  pwVar1 = DAT_0104a9a0;
  awStack_184[0] = L'\0';
  uStack_18c = 0;
  uStack_194._4_4_ = awStack_184;
  uStack_188 = 10;
  if (9 < DAT_0104a9a4) {
    uStack_188 = DAT_0104a9a4 + 0x20 & 0xffffffe0;
    uStack_194._4_4_ = _malloc(uStack_188 * 2);
  }
  _wcsncpy(uStack_194._4_4_,pwVar1,uVar5);
  uStack_18c = uVar5;
  uStack_194._4_4_[uVar5] = L'\0';
  FUN_0040cae0((void *)((int)&uStack_194 + 4),local_1d4,uStack_1d0);
  uVar5 = uStack_18c;
  pwVar1 = uStack_194._4_4_;
  *unaff_retaddr = (int)(unaff_retaddr + 3);
  *(undefined2 *)(unaff_retaddr + 3) = 0;
  unaff_retaddr[1] = 0;
  unaff_retaddr[2] = 10;
  if (9 < uStack_18c) {
    uVar8 = uStack_18c + 0x20 & 0xffffffe0;
    unaff_retaddr[2] = uVar8;
    pvVar9 = _malloc(uVar8 * 2);
    *unaff_retaddr = (int)pvVar9;
  }
  _wcsncpy((wchar_t *)*unaff_retaddr,pwVar1,uVar5);
  unaff_retaddr[1] = uVar5;
  *(undefined2 *)(*unaff_retaddr + uVar5 * 2) = 0;
  if (10 < uStack_188) {
                    /* WARNING: Subroutine does not return */
    _free(uStack_194._4_4_);
  }
  if (10 < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_1d4);
  }
  if (10 < uStack_168) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_170);
  }
  ExceptionList = pvStack_10;
  return unaff_retaddr;
}


//// FUNCTION FUN_00714cd0 @ 00714cd0 ////

undefined4 FUN_00714cd0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  void *local_20;
  uint uStack_18;
  
  if (*(int *)(param_2 + 0x514) != 0) {
    if (DAT_0104deb0 == '\0') {
      FUN_004036d0(&PTR_DAT_00e5822c,*(wchar_t **)(param_2 + 0x490),*(uint *)(param_2 + 0x494));
    }
    uVar1 = FUN_009d36d0((undefined4 *)(param_2 + 0x510),(uint *)0x0);
    if ((char)uVar1 != '\0') {
      FUN_009d3590((undefined4 *)(param_2 + 0x510));
    }
    piVar2 = FUN_00714920();
    if (DAT_0104deb0 == '\0') {
      FUN_004036d0(&PTR_DAT_00e5824c,(wchar_t *)*piVar2,piVar2[1]);
    }
    if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    DAT_0104deb0 = '\x01';
    if (DAT_0104a978 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = DAT_0104a978 + 0x28;
    }
    FUN_00470a70(DAT_0104917c,iVar3,0x209,*(undefined4 *)(param_2 + 0x534),0);
  }
  uVar1 = FUN_0071b530(*(undefined4 *)(param_2 + 0x534),(int *)*(undefined4 *)(param_2 + 0x534));
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00714db0 @ 00714db0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00714db0(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  int ***pppiVar7;
  undefined4 uVar8;
  size_t sVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  void *unaff_ESI;
  float10 fVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  int *piVar19;
  int *_Memory;
  int *piVar20;
  void *pvVar21;
  undefined2 **ppuVar22;
  int *piVar23;
  void *_Memory_00;
  int *piVar24;
  undefined1 *_Memory_01;
  int *piStack_1c8;
  undefined *puStack_1c4;
  uint uVar25;
  int ***pppiStack_1bc;
  int *_Memory_02;
  undefined1 *_Memory_03;
  void *pvStack_18c;
  undefined1 *puStack_188;
  int *piStack_184;
  undefined4 *puStack_180;
  int **ppiStack_17c;
  void *pvStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  void *pvStack_16c;
  uint uStack_168;
  uint uStack_164;
  undefined2 *puStack_158;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined2 auStack_14c [2];
  undefined2 *puStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined2 auStack_13c [2];
  undefined2 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined2 auStack_12c [34];
  undefined2 *puStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 auStack_dc [10];
  undefined2 *puStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 auStack_bc [30];
  undefined1 uStack_80;
  undefined2 *puStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined2 auStack_70 [4];
  int iStack_68;
  undefined1 uStack_60;
  undefined4 auStack_58 [2];
  undefined1 uStack_50;
  undefined4 auStack_4c [3];
  undefined1 uStack_40;
  undefined1 uStack_30;
  undefined1 uStack_24;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd26d5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)((int)this + 0x38c) + 0xa8))();
  puVar2 = FUN_0043bdc0(&pvStack_16c,L"<v3><nobr>",(undefined4 *)(param_1 + 0x4dc));
  _pppiStack_1bc = CONCAT44(0x714e0f,pppiStack_1bc);
  FUN_0043be60(auStack_4c,puVar2,L"</nobr></v3>");
  iStack_4 = 0;
  if (10 < uStack_164) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_16c);
  }
  puStack_180 = operator_new(0x3fc);
  iStack_4._0_1_ = 1;
  if (puStack_180 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puStack_180);
  }
  puVar2 = auStack_4c;
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  piStack_170 = piVar3;
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar3 + 0x84))();
  _Memory_03 = (undefined1 *)0x1;
  (**(code **)(**(int **)((int)this + 0x38c) + 0xc))();
  (**(code **)(*piVar3 + 0x14))();
  puStack_7c = auStack_70;
  auStack_70[0] = 0;
  iStack_78 = 0;
  uStack_74 = 10;
  _pppiStack_1bc = CONCAT44(0x714edf,pppiStack_1bc);
  FUN_004036d0(&puStack_7c,*(wchar_t **)(param_1 + 0x4b0),*(uint *)(param_1 + 0x4b4));
  uStack_14 = 2;
  pvVar4 = operator_new(900);
  uStack_14 = 3;
  if (pvVar4 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00737bb0(pvVar4,&puStack_7c);
  }
  ppiStack_17c = &piStack_170;
  piStack_170 = (int *)((uint)piStack_170 & 0xffffff00);
  pvStack_178 = (void *)0x0;
  uStack_174 = 0x14;
  _pppiStack_1bc = CONCAT44(ppiStack_17c,0x714f45);
  piStack_184 = piVar3;
  _strncpy((char *)ppiStack_17c,"default",7);
  pvStack_178 = (void *)0x7;
  *(char *)((int)ppiStack_17c + 7) = '\0';
  pppiStack_1bc = &ppiStack_17c;
  pvVar21 = (void *)0x10;
  uStack_14 = 4;
  (**(code **)(*piVar3 + 0xfc))();
  uStack_24 = 2;
  if (&DAT_00000014 < piStack_184) {
                    /* WARNING: Subroutine does not return */
    puStack_1c4 = &UNK_00714fa1;
    _free(pvStack_18c);
  }
  piVar3[0xd4] = -0x1000000;
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
  puStack_1c4 = (undefined *)0x714fc4;
  FUN_00737cd0(piVar3,(float)fVar15);
  uVar25 = 0;
  puStack_1c4 = (undefined *)0x714fd0;
  (**(code **)(*piVar3 + 0x84))();
  puStack_1c4 = (undefined *)0x1;
  piStack_1c8 = piVar3;
  (**(code **)(**(int **)((int)this + 0x38c) + 0xc))();
  fVar15 = (float10)(**(code **)(*piVar3 + 0x14))();
  _pppiStack_1bc = CONCAT44((float)(fVar15 + (float10)(float)pvVar21),pppiStack_1bc);
  puVar5 = FUN_0043c090();
  puVar5 = FUN_0043bdc0((undefined4 *)&stack0xfffffe68,L"<v4><nobr>",puVar5);
  FUN_0043be60(auStack_58,puVar5,L"</nobr></v4>");
  uStack_30 = 5;
  if (&lpType_0000000a < &stack0xfffffe50) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  puVar5 = operator_new(0x3fc);
  uStack_30 = 6;
  if (puVar5 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar5);
  }
  uStack_30 = 5;
  _Memory_02 = piVar3;
  (**(code **)(*piVar3 + 0x54))();
  _Memory_01 = (undefined1 *)0x0;
  (**(code **)(*piVar3 + 0x84))();
  piVar10 = piVar3;
  (**(code **)(**(int **)((int)this + 0x38c) + 0xc))();
  fVar15 = (float10)(**(code **)(*piVar3 + 0x14))();
  puStack_e8 = auStack_dc;
  piStack_1c8 = (int *)(float)(fVar15 + (float10)(float)piStack_1c8);
  auStack_dc[0] = 0;
  uStack_e4 = 0;
  uStack_e0 = 10;
  uVar6 = FUN_00ace02d(L"<v4><nobr><phrasebook><translate>SAVE_LOAD_BALANCE</translate>");
  FUN_004036d0(&puStack_e8,L"<v4><nobr><phrasebook><translate>SAVE_LOAD_BALANCE</translate>",uVar6);
  puStack_c8 = auStack_bc;
  auStack_bc[0] = 0;
  uStack_c4 = 0;
  uStack_c0 = 10;
  uStack_40 = 8;
  _pppiStack_1bc = FUN_00acd42c();
  FUN_00471b10((longlong *)&pppiStack_1bc);
  FUN_00444a70((uint *)&pppiStack_1bc,&puStack_c8);
  puVar5 = FUN_0043bdc0(&puStack_188,L"<phrase key=balance>",&puStack_c8);
  puVar5 = FUN_0043be60((undefined4 *)&stack0xfffffe58,puVar5,L"</phrase></phrasebook></nobr></v4>")
  ;
  FUN_0040cae0(&puStack_e8,(wchar_t *)*puVar5,puVar5[1]);
  if (&lpType_0000000a < puVar2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_03);
  }
  if (&lpType_0000000a < puStack_180) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_188);
  }
  pppiVar7 = operator_new(0x3fc);
  pvVar21 = (void *)(_pppiStack_1bc >> 0x20);
  uStack_40 = 9;
  pppiStack_1bc = pppiVar7;
  if (pppiVar7 == (int ***)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(pppiVar7);
  }
  uStack_40 = 8;
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar3 + 0x84))();
  piVar24 = piVar3;
  (**(code **)(**(int **)((int)this + 0x38c) + 0xc))();
  fVar15 = (float10)(**(code **)(*piVar3 + 0x14))();
  pvVar4 = (void *)(float)(fVar15 + (float10)(float)piVar10);
  uVar16 = FUN_00acd42c();
  puStack_1c4 = (undefined *)uVar16;
  uVar16 = FUN_00acd42c();
  uVar8 = (undefined4)uVar16;
  puStack_158 = auStack_14c;
  auStack_14c[0] = 0;
  uStack_154 = 0;
  puStack_150 = &lpType_0000000a;
  uVar6 = FUN_00ace02d(L"<v4><nobr><phrasebook><translate>SAVE_LOAD_HOURS_PLAYED</translate>");
  FUN_004036d0(&puStack_158,L"<v4><nobr><phrasebook><translate>SAVE_LOAD_HOURS_PLAYED</translate>",
               uVar6);
  uStack_50 = 10;
  puVar5 = FUN_00569df0(&pvStack_178,puStack_1c4);
  puVar5 = FUN_0043bdc0((undefined4 *)&stack0xfffffe48,L"<phrase key=hours>",puVar5);
  puVar5 = FUN_0043be60((undefined4 *)&stack0xfffffe68,puVar5,L"</phrase>");
  FUN_0040cae0(&puStack_158,(wchar_t *)*puVar5,puVar5[1]);
  if (&lpType_0000000a < &stack0xfffffe50) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  if (&lpType_0000000a < _Memory_02) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar21);
  }
  if (&lpType_0000000a < piStack_170) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_178);
  }
  puVar5 = FUN_00569df0((undefined4 *)&stack0xfffffe48,uVar8);
  puVar5 = FUN_0043bdc0((undefined4 *)&stack0xfffffe68,L"<phrase key=mins>",puVar5);
  puVar5 = FUN_0043be60(&pvStack_178,puVar5,L"</phrase>");
  FUN_0040cae0(&puStack_158,(wchar_t *)*puVar5,puVar5[1]);
  if (&lpType_0000000a < piStack_170) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_178);
  }
  if (&lpType_0000000a < &stack0xfffffe50) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  if (&lpType_0000000a < _Memory_02) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar21);
  }
  sVar9 = FUN_00ace02d(L"</phrasebook></nobr></v4>");
  FUN_0040cae0(&puStack_158,L"</phrasebook></nobr></v4>",sVar9);
  puVar5 = operator_new(0x3fc);
  uStack_50 = 0xb;
  if (puVar5 == (undefined4 *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = FUN_00833290(puVar5);
  }
  uStack_50 = 10;
  (**(code **)(*piVar10 + 0x54))(&puStack_158);
  _Memory_00 = (void *)0x0;
  (**(code **)(*piVar10 + 0x84))();
  piVar23 = (int *)0x1;
  piVar20 = piVar10;
  (**(code **)(**(int **)((int)this + 0x38c) + 0xc))();
  fVar15 = (float10)(**(code **)(*piVar10 + 0x14))();
  puStack_148 = auStack_13c;
  piVar24 = (int *)(float)(fVar15 + (float10)(float)piVar24);
  auStack_13c[0] = 0;
  uStack_144 = 0;
  uStack_140 = 10;
  uVar6 = FUN_00ace02d(L"<v4><nobr><phrasebook><translate>SAVE_LOAD_FILMS_RELEASED</translate>");
  FUN_004036d0(&puStack_148,L"<v4><nobr><phrasebook><translate>SAVE_LOAD_FILMS_RELEASED</translate>"
               ,uVar6);
  uStack_60 = 0xc;
  puVar5 = FUN_00569df0(&piStack_1c8,*(undefined4 *)(param_1 + 0x4d4));
  puVar5 = FUN_0043bdc0((undefined4 *)&stack0xfffffe58,L"<phrase key=films>",puVar5);
  puVar5 = FUN_0043be60(&puStack_188,puVar5,L"</phrase></phrasebook></nobr></v4>");
  FUN_0040cae0(&puStack_148,(wchar_t *)*puVar5,puVar5[1]);
  if (&lpType_0000000a < puStack_180) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_188);
  }
  if (&lpType_0000000a < puVar2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_03);
  }
  if (10 < uVar25) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_1c8);
  }
  puVar2 = operator_new(0x3fc);
  uStack_60 = 0xd;
  if (puVar2 == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = FUN_00833290(puVar2);
  }
  uStack_60 = 0xc;
  (**(code **)(*piVar11 + 0x54))(&puStack_148);
  (**(code **)(*piVar11 + 0x84))(0);
  piVar14 = piVar11;
  (**(code **)(**(int **)((int)this + 0x38c) + 0xc))(piVar11,1);
  fVar15 = (float10)(**(code **)(*piVar11 + 0x14))();
  puStack_138 = auStack_12c;
  piVar20 = (int *)(float)(fVar15 + (float10)(float)piVar20);
  auStack_12c[0] = 0;
  uStack_134 = 0;
  puStack_130 = &lpType_0000000a;
  uVar25 = FUN_00ace02d(L"<v4><nobr><phrasebook><translate>SAVE_LOAD_LEAGUE_POS</translate>");
  FUN_004036d0(&puStack_138,L"<v4><nobr><phrasebook><translate>SAVE_LOAD_LEAGUE_POS</translate>",
               uVar25);
  auStack_70[0]._0_1_ = 0xe;
  puVar2 = FUN_00569df0((undefined4 *)&stack0xfffffe28,*(undefined4 *)(iStack_68 + 0x4d8));
  puVar2 = FUN_0043bdc0((undefined4 *)&stack0xfffffe48,L"<phrase key=pos>",puVar2);
  puVar2 = FUN_0043be60((undefined4 *)&stack0xfffffe68,puVar2,L"</phrase></phrasebook></nobr></v4>")
  ;
  FUN_0040cae0(&puStack_138,(wchar_t *)*puVar2,puVar2[1]);
  if (&lpType_0000000a < &stack0xfffffe50) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  if (&lpType_0000000a < _Memory_02) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar21);
  }
  if (&lpType_0000000a < _Memory_01) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar4);
  }
  piVar12 = operator_new(0x3fc);
  auStack_70[0]._0_1_ = 0xf;
  if (piVar12 == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = FUN_00833290(piVar12);
  }
  ppuVar22 = &puStack_138;
  auStack_70[0] = CONCAT11(auStack_70[0]._1_1_,0xe);
  (**(code **)(*piVar13 + 0x54))(ppuVar22);
  pvVar21 = (void *)0x0;
  (**(code **)(*piVar24 + 0x84))();
  piVar13 = (int *)0x1;
  (**(code **)(**(int **)((int)this + 0x38c) + 0xc))(piVar12);
  fVar15 = (float10)(**(code **)(*piVar23 + 0x14))();
  piVar23 = (int *)(float)(fVar15 + (float10)(float)piVar14);
  if (*(char *)(iStack_78 + 0x4fc) != '\0') {
    puVar2 = operator_new(0x3fc);
    uStack_80 = 0x10;
    if (puVar2 == (undefined4 *)0x0) {
      piVar14 = (int *)0x0;
    }
    else {
      piVar14 = FUN_00833290(puVar2);
    }
    piVar24 = (int *)&stack0xfffffe24;
    uVar6 = 10;
    uVar25 = FUN_00ace02d(L"<v4><nobr><translate>FRONTEND_SANDBOX</translate></nobr></v4>");
    FUN_004036d0(&stack0xfffffe18,L"<v4><nobr><translate>FRONTEND_SANDBOX</translate></nobr></v4>",
                 uVar25);
    uStack_80 = 0x11;
    (**(code **)(*piVar14 + 0x54))(&stack0xfffffe18);
    (**(code **)(*piVar23 + 0x84))(0);
    (**(code **)(**(int **)((int)this + 0x38c) + 0xc))(ppuVar22,1);
    fVar15 = (float10)(**(code **)(*piVar13 + 0x14))();
    piVar23 = (int *)(float)(fVar15 + (float10)(float)piVar23);
    uStack_80 = 0xe;
    if (10 < uVar6) {
                    /* WARNING: Subroutine does not return */
      _free(piVar24);
    }
  }
  fVar17 = _DAT_00e58310 + (float)piVar23;
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x14))();
  piVar23 = (int *)(float)(fVar15 * (float10)0.5 - (float10)fVar17 * (float10)0.5);
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
  fVar17 = (float)(fVar15 * (float10)0.5);
  fVar15 = (float10)(**(code **)(*piVar12 + 0x10))();
  piVar14 = (int *)(float)((float10)fVar17 - fVar15 * (float10)0.5);
  fVar17 = *(float *)((int)this + 0x38c);
  (**(code **)(*piVar12 + 0x5c))(1,fVar17,piVar14);
  uVar8 = *(undefined4 *)((int)this + 0x38c);
  _Memory = (int *)0x1;
  piVar12 = piVar13;
  (**(code **)(*piVar20 + 100))(1,uVar8);
  do {
    cVar1 = (**(code **)(*piVar14 + 0x50))(1);
  } while (cVar1 != '\0');
  fVar15 = (float10)(**(code **)(*piVar14 + 0x14))();
  piVar20 = (int *)(float)(fVar15 + (float10)fVar17);
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
  fVar17 = (float)(fVar15 * (float10)0.5);
  fVar15 = (float10)(**(code **)(*piVar23 + 0x10))();
  piVar19 = (int *)0x1;
  (**(code **)(*piVar23 + 0x5c))
            (1,*(undefined4 *)((int)this + 0x38c),(float)((float10)fVar17 - fVar15 * (float10)0.5));
  uVar18 = *(undefined4 *)((int)this + 0x38c);
  piVar14 = (int *)0x1;
  (**(code **)(*piVar12 + 100))(1,uVar18,uVar8);
  do {
    cVar1 = (**(code **)(*piVar20 + 0x50))(1);
  } while (cVar1 != '\0');
  (**(code **)(*piVar20 + 0x14))();
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
  fVar17 = (float)(fVar15 * (float10)0.5);
  fVar15 = (float10)(**(code **)(*_Memory + 0x10))();
  (**(code **)(*_Memory + 0x5c))
            (1,*(undefined4 *)((int)this + 0x38c),(float)((float10)fVar17 - fVar15 * (float10)0.5));
  uVar8 = *(undefined4 *)((int)this + 0x38c);
  (**(code **)(*piVar19 + 100))(1,uVar8,uVar18);
  do {
    cVar1 = (**(code **)(*piVar14 + 0x50))(1);
  } while (cVar1 != '\0');
  (**(code **)(*piVar14 + 0x14))();
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
  fVar17 = (float)(fVar15 * (float10)0.5);
  fVar15 = (float10)(**(code **)(*piVar3 + 0x10))();
  (**(code **)(*piVar3 + 0x5c))
            (1,*(undefined4 *)((int)this + 0x38c),(float)((float10)fVar17 - fVar15 * (float10)0.5));
  uVar18 = *(undefined4 *)((int)this + 0x38c);
  (**(code **)(*piVar3 + 100))(1,uVar18,uVar8);
  do {
    cVar1 = (**(code **)(*piVar3 + 0x50))(1);
  } while (cVar1 != '\0');
  (**(code **)(*piVar3 + 0x14))();
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
  fVar17 = (float)(fVar15 * (float10)0.5);
  fVar15 = (float10)(**(code **)(*piVar10 + 0x10))();
  piVar3 = (int *)0x1;
  (**(code **)(*piVar10 + 0x5c))
            (1,*(undefined4 *)((int)this + 0x38c),(float)((float10)fVar17 - fVar15 * (float10)0.5));
  uVar8 = *(undefined4 *)((int)this + 0x38c);
  (**(code **)(*piVar10 + 100))(1,uVar8,uVar18);
  do {
    cVar1 = (**(code **)(*piVar10 + 0x50))(1);
  } while (cVar1 != '\0');
  (**(code **)(*piVar10 + 0x14))();
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
  fVar17 = (float)(fVar15 * (float10)0.5);
  fVar15 = (float10)(**(code **)(*piVar11 + 0x10))();
  (**(code **)(*piVar11 + 0x5c))
            (1,*(undefined4 *)((int)this + 0x38c),(float)((float10)fVar17 - fVar15 * (float10)0.5));
  piVar10 = *(int **)((int)this + 0x38c);
  (**(code **)(*piVar11 + 100))(1,piVar10,uVar8);
  do {
    cVar1 = (**(code **)(*piVar11 + 0x50))(1);
  } while (cVar1 != '\0');
  (**(code **)(*piVar11 + 0x14))();
  fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
  fVar17 = (float)(fVar15 * (float10)0.5);
  fVar15 = (float10)(**(code **)(*piVar3 + 0x10))();
  (**(code **)(*piVar3 + 0x5c))
            (1,*(undefined4 *)((int)this + 0x38c),(float)((float10)fVar17 - fVar15 * (float10)0.5));
  uVar8 = *(undefined4 *)((int)this + 0x38c);
  (**(code **)(*piVar3 + 100))(1,uVar8,piVar10);
  do {
    cVar1 = (**(code **)(*piVar3 + 0x50))(1);
  } while (cVar1 != '\0');
  (**(code **)(*piVar3 + 0x14))();
  if (piVar10 != (int *)0x0) {
    fVar15 = (float10)(**(code **)(**(int **)((int)this + 0x38c) + 0x10))();
    fVar17 = (float)(fVar15 * (float10)0.5);
    fVar15 = (float10)(**(code **)(*piVar10 + 0x10))();
    (**(code **)(*piVar10 + 0x5c))
              (1,*(undefined4 *)((int)this + 0x38c),(float)((float10)fVar17 - fVar15 * (float10)0.5)
              );
    (**(code **)(*piVar10 + 100))(1,*(undefined4 *)((int)this + 0x38c),uVar8);
    do {
      cVar1 = (**(code **)(*piVar10 + 0x50))(1);
    } while (cVar1 != '\0');
    (**(code **)(*piVar10 + 0x14))();
  }
  if (&lpType_0000000a < piVar24) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  if (&lpType_0000000a < piVar23) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar21);
  }
  if (&lpType_0000000a < piVar13) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (&lpType_0000000a < _Memory_03) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_02);
  }
  if (&lpType_0000000a < piStack_1c8) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory_01);
  }
  if (&lpType_0000000a < puStack_148) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_150);
  }
  if (&lpType_0000000a < puStack_188) {
                    /* WARNING: Subroutine does not return */
    _free(&stack0xfffffe50);
  }
  if (10 < uStack_168) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_170);
  }
  ExceptionList = puStack_130;
  return;
}


//// FUNCTION FUN_00715c90 @ 00715c90 ////

void __fastcall FUN_00715c90(int param_1)

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


//// FUNCTION FUN_00715d00 @ 00715d00 ////

undefined4 * FUN_00715d00(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00715d30 @ 00715d30 ////

undefined4 FUN_00715d30(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  void *unaff_ESI;
  undefined1 local_20 [4];
  uint uStack_1c;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_2 + 0x424) + 0x58))(local_20);
  if (DAT_0104deb0 == '\0') {
    FUN_004036d0(&PTR_DAT_00e5822c,(wchar_t *)*puVar1,puVar1[1]);
  }
  if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  piVar2 = FUN_00714920();
  if (DAT_0104deb0 == '\0') {
    FUN_004036d0(&PTR_DAT_00e5824c,(wchar_t *)*piVar2,piVar2[1]);
  }
  if (10 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  DAT_0104deb0 = 1;
  if (DAT_0104a978 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_0104a978 + 0x28;
  }
  FUN_00470a70(DAT_0104917c,iVar3,0x209,0,0);
  uVar4 = FUN_0071b530(*(undefined4 *)(param_2 + 0x420),(int *)*(undefined4 *)(param_2 + 0x420));
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION FUN_00715e00 @ 00715e00 ////

/* WARNING: Removing unreachable block (ram,0x0071607e) */

int FUN_00715e00(int *param_1)

{
  float fVar1;
  size_t sVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float10 fVar5;
  undefined1 *_Memory;
  undefined2 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80 [10];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd26eb;
  pvStack_c = ExceptionList;
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  sVar2 = FUN_00ace02d(
                      L"<P ALIGN\t= CENTER><v2><nobr><translate>OVERWRITE_TEXT_TAG</translate></nobr></v2></P>"
                      );
  FUN_0040cae0(&local_8c,
               L"<P ALIGN\t= CENTER><v2><nobr><translate>OVERWRITE_TEXT_TAG</translate></nobr></v2></P>"
               ,sVar2);
  puVar3 = FUN_0043bdc0(local_4c,L"<P ALIGN\t= CENTER><v3><nobr>",param_1 + 0x124);
  puVar3 = FUN_0043be60(local_6c,puVar3,L"</nobr></v3></P>");
  FUN_0040cae0(&local_8c,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  puVar3 = FUN_0043c630(local_2c,param_1[0x115],param_1[0x116],param_1[0x117],param_1[0x118],
                        param_1[0x119],param_1[0x11a]);
  puVar3 = FUN_0043bdc0(local_6c,L"<P ALIGN\t= CENTER><v4><nobr>",puVar3);
  puVar3 = FUN_0043be60(local_4c,puVar3,L"</nobr></v4></P>");
  FUN_0040cae0(&local_8c,(wchar_t *)*puVar3,puVar3[1]);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (local_64 < 0xb) {
    if (local_24 < 0xb) {
      sVar2 = FUN_00ace02d(
                          L"<P ALIGN\t= CENTER><v2><nobr><translate>ARE_YOU_SURE_TEXT_TAG</translate></nobr></v2></P>"
                          );
      FUN_0040cae0(&local_8c,
                   L"<P ALIGN\t= CENTER><v2><nobr><translate>ARE_YOU_SURE_TEXT_TAG</translate></nobr></v2></P>"
                   ,sVar2);
      pfVar4 = FUN_00726520();
      fVar1 = *pfVar4;
      fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
      (**(code **)((int)fVar1 + 100))
                (1,param_1,(float)(fVar5 * (float10)0.5 - (float10)DAT_00e5850c * (float10)0.5));
      fVar1 = *pfVar4;
      fVar5 = (float10)(**(code **)(*param_1 + 0x10))();
      (**(code **)((int)fVar1 + 0x5c))
                (1,param_1,(float)(fVar5 * (float10)0.5 - (float10)DAT_00e58508 * (float10)0.5));
      (**(code **)(*(int *)pfVar4[0xd1] + 0x18))(0,FUN_0071b530,pfVar4,"REVIEW_CLOSE");
      (**(code **)(*(int *)pfVar4[0xd1] + 0x18))(5,&LAB_005f37f0,0,"REVIEW_CLOSE");
      (**(code **)(*(int *)pfVar4[0xd2] + 0x18))(0,FUN_00714cd0,param_1,"REVIEW_CLOSE");
      _Memory = &LAB_005f37f0;
      (**(code **)(*(int *)pfVar4[0xd2] + 0x18))(5,&LAB_005f37f0,0);
      (**(code **)(*(int *)param_1[0x14d] + 0xac))(pfVar4);
      (**(code **)(*(int *)param_1[0x14d] + 0xc))(pfVar4,1);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c[0]);
}


//// FUNCTION FUN_007160a0 @ 007160a0 ////

void __fastcall FUN_007160a0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_EDX;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd27a2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d480a4;
  param_1[0x14] = &PTR_LAB_00d4808c;
  local_4 = 0xb;
  iVar4 = 0;
  while( true ) {
    if (param_1[0x10a] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(param_1[0x10b] - param_1[0x10a]) >> 2;
    }
    if (iVar3 <= iVar4) break;
    puVar2 = *(undefined4 **)(param_1[0x10a] + iVar4 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(param_1[0x10a] + iVar4 * 4) = 0;
    }
    iVar4 = iVar4 + 1;
  }
  iVar4 = 0;
  while( true ) {
    if (param_1[0x10e] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(param_1[0x10f] - param_1[0x10e]) >> 2;
    }
    if (iVar3 <= iVar4) break;
    puVar2 = *(undefined4 **)(param_1[0x10e] + iVar4 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(param_1[0x10e] + iVar4 * 4) = 0;
    }
    iVar4 = iVar4 + 1;
  }
  FUN_009a1560(0);
  FUN_004237f0(DAT_00f87b04);
  FUN_0071bd00();
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  (*(code *)DAT_0104debc[1])();
  DAT_0104ded0 = 0;
  (*(code *)*DAT_0104debc)();
  if ((DAT_0104dafc != 0) && (DAT_0104dae4 != 0)) {
    FUN_00690180();
  }
  if ((void *)param_1[0x10e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10e]);
  }
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  if ((void *)param_1[0x10a] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10a]);
  }
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x102] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x104] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x104] = param_1[0x103];
  }
  if (param_1[0x103] != 0) {
    *(undefined4 *)(param_1[0x103] + 4) = param_1[0x104];
  }
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x107] = 0;
  if ((undefined4 *)param_1[0x104] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x104] = param_1[0x103];
  }
  if (param_1[0x103] != 0) {
    *(undefined4 *)(param_1[0x103] + 4) = param_1[0x104];
  }
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0xfc] = &PTR_LAB_00d31644;
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
  param_1[0xf6] = &PTR_FUN_00d172a0;
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
  param_1[0xea] = &PTR_LAB_00d47c4c;
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
  param_1[0xe4] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xe6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe6] = param_1[0xe5];
  }
  if (param_1[0xe5] != 0) {
    *(undefined4 *)(param_1[0xe5] + 4) = param_1[0xe6];
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe9] = 0;
  if ((undefined4 *)param_1[0xe6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe6] = param_1[0xe5];
  }
  if (param_1[0xe5] != 0) {
    *(undefined4 *)(param_1[0xe5] + 4) = param_1[0xe6];
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xde] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe3] = 0;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xd8] = &PTR_FUN_00d18c2c;
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
  param_1[0xd2] = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_00716640 @ 00716640 ////

int __fastcall FUN_00716640(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (**(code **)(**(int **)(param_1 + 0x374) + 0xa8))();
  while ((*(int *)(param_1 + 0x428) != 0 &&
         (iVar3 = 0, *(int *)(param_1 + 0x42c) - *(int *)(param_1 + 0x428) >> 2 != 0))) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x42c) + -4);
    iVar3 = *(int *)(param_1 + 0x42c) + -4;
    if (*(int *)(param_1 + 0x428) != 0) {
      iVar3 = *(int *)(param_1 + 0x42c) - *(int *)(param_1 + 0x428) >> 2;
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + -4;
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar3 = (**(code **)*puVar2)(1);
      }
    }
  }
  while ((*(int *)(param_1 + 0x438) != 0 &&
         (iVar3 = 0, *(int *)(param_1 + 0x43c) - *(int *)(param_1 + 0x438) >> 2 != 0))) {
    puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x43c) + -4);
    iVar3 = *(int *)(param_1 + 0x43c) + -4;
    if (*(int *)(param_1 + 0x438) != 0) {
      iVar3 = *(int *)(param_1 + 0x43c) - *(int *)(param_1 + 0x438) >> 2;
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + -4;
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar3 = (**(code **)*puVar2)(1);
      }
    }
  }
  return iVar3;
}


//// FUNCTION FUN_00716710 @ 00716710 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00716710(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_EDI;
  float10 fVar7;
  
  (**(code **)(**(int **)(param_1 + 0x374) + 0xa8))();
  iVar4 = *(int *)(param_1 + 0x420);
  iVar5 = DAT_00e58224 + iVar4;
  if (*(int *)(param_1 + 0x428) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x42c) - *(int *)(param_1 + 0x428) >> 2;
  }
  if (iVar6 <= iVar5) {
    if (*(int *)(param_1 + 0x428) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x42c) - *(int *)(param_1 + 0x428) >> 2;
    }
  }
  for (; iVar4 < iVar5; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x428) + iVar4 * 4);
    (**(code **)(*piVar1 + 0x5c))(1,*(undefined4 *)(param_1 + 0x374),0);
    (**(code **)(*piVar1 + 100))(1,*(undefined4 *)(param_1 + 0x374),unaff_EDI);
    (**(code **)(**(int **)(param_1 + 0x374) + 0xc))(piVar1,1);
    piVar1[0x12] = piVar1[0x12] + 1;
    piVar2 = *(int **)(*(int *)(param_1 + 0x438) + iVar4 * 4);
    (**(code **)(*piVar2 + 0x5c))(2,piVar1,0x40000000);
    iVar6 = *piVar2;
    fVar7 = (float10)(**(code **)(*piVar1 + 0x14))();
    (**(code **)(iVar6 + 100))(1,piVar1,(float)(fVar7 * (float10)0.25));
    (**(code **)(**(int **)(param_1 + 0x374) + 0xc))(piVar2,1);
    piVar2[0x12] = piVar2[0x12] + 1;
    (**(code **)(*piVar1 + 0x14))();
  }
  FUN_007140d0(param_1);
  puVar3 = *(undefined4 **)(param_1 + 0x38c);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x378) + 4))();
    *(undefined4 *)(param_1 + 0x38c) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x378))();
  }
  puVar3 = *(undefined4 **)(param_1 + 0x3a4);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  piVar1 = puVar3 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar3)(1);
  }
  (**(code **)(*(int *)(param_1 + 0x390) + 4))();
  *(undefined4 *)(param_1 + 0x3a4) = 0;
                    /* WARNING: Could not recover jumptable at 0x007168b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1 + 0x390))();
  return;
}


//// FUNCTION FUN_007168c0 @ 007168c0 ////

void __thiscall FUN_007168c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00e58224;
  iVar2 = *(int *)((int)this + 0x420) + param_1;
  *(int *)((int)this + 0x420) = iVar2;
  if (-1 < iVar2) {
    if (*(int *)((int)this + 0x428) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x42c) - *(int *)((int)this + 0x428) >> 2;
    }
    if (iVar1 < iVar2) goto LAB_00716902;
  }
  *(undefined4 *)((int)this + 0x420) = 0;
LAB_00716902:
  if (*(int *)((int)this + 0x428) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x42c) - *(int *)((int)this + 0x428) >> 2;
  }
  iVar2 = iVar2 - iVar1;
  if ((0 < iVar2) && (iVar2 < *(int *)((int)this + 0x420))) {
    *(int *)((int)this + 0x420) = iVar2;
  }
  FUN_00716710((int)this);
  return;
}


//// FUNCTION FUN_00716940 @ 00716940 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00716940(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  void *this_00;
  char *_Dest;
  int *piVar5;
  undefined4 *puVar6;
  float unaff_ESI;
  float10 fVar7;
  float fVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd2803;
  local_c = ExceptionList;
  puVar6 = (undefined4 *)0x0;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    if ((_DAT_0104dee0 & 1) == 0) {
      _DAT_0104dee0 = _DAT_0104dee0 | 1;
      local_4 = 0;
      ExceptionList = &local_c;
      fVar7 = (float10)(**(code **)(**(int **)((int)this + 0x35c) + 0x14))();
      _DAT_0104dedc = (float)(fVar7 * (float10)0.25);
    }
    local_4 = 0xffffffff;
    if ((_DAT_0104dee0 & 2) == 0) {
      _DAT_0104dee0 = _DAT_0104dee0 | 2;
      DAT_0104ded4 = (char *)0x43af0000;
      DAT_0104ded8 = 200.0;
    }
    if (*(int **)((int)this + 0x38c) == (int *)0x0) {
      puVar4 = operator_new(0x344);
      local_4 = 1;
      if (puVar4 != (undefined4 *)0x0) {
        puVar6 = FUN_007432f0(puVar4);
      }
      local_4 = 0xffffffff;
      (**(code **)(*(int *)((int)this + 0x378) + 4))();
      *(undefined4 **)((int)this + 0x38c) = puVar6;
      (*(code *)**(undefined4 **)((int)this + 0x378))();
      _Dest = DAT_0104ded4;
      (**(code **)(**(int **)((int)this + 0x38c) + 0x78))();
      (**(code **)(**(int **)((int)this + 0x38c) + 0x7c))(DAT_0104ded8);
      piVar5 = *(int **)((int)this + 0x35c);
      iVar1 = **(int **)((int)this + 0x38c);
      fVar7 = (float10)(**(code **)(*piVar5 + 0x10))();
      fVar8 = (float)(fVar7 + (float10)_DAT_00e58314);
      (**(code **)(iVar1 + 0x5c))(1,piVar5);
      (**(code **)(**(int **)((int)this + 0x38c) + 100))
                (1,*(undefined4 *)((int)this + 0x35c),(float)_Dest - DAT_0104ded8 * 0.5);
      this_00 = operator_new(0x288);
      if (this_00 == (void *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        unaff_ESI = 4.48416e-44;
        _Dest = _malloc(0x20);
        _strncpy(_Dest,"ui/buildmenu_window.dds",0x17);
        _Dest[0x17] = '\0';
        fVar8 = 1.4013e-45;
        puVar6 = FUN_005e8fd0(this_00,(undefined4 *)&stack0xffffffb4);
      }
      if ((((uint)fVar8 & 1) != 0) && (0x14 < (uint)unaff_ESI)) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
      puVar6[0x9c] = 0x41400000;
      puVar6[0x9d] = 0x41400000;
      puVar6[0x9b] = 0x42000000;
      puVar6[0x9e] = 0x41c00000;
      puVar6[0x9f] = 0x41c00000;
      (**(code **)(**(int **)((int)this + 0x38c) + 0xa0))(puVar6);
      (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x38c),1);
      puVar6 = operator_new(0x344);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = FUN_007432f0(puVar6);
      }
      (**(code **)(*(int *)((int)this + 0x390) + 4))();
      *(undefined4 **)((int)this + 0x3a4) = puVar6;
      (*(code *)**(undefined4 **)((int)this + 0x390))();
      puVar6 = operator_new(0x50);
      if (puVar6 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = FUN_005e4870(puVar6);
      }
      (**(code **)(*piVar5 + 0xc))(&DAT_00e58228);
      (**(code **)(**(int **)((int)this + 0x3a4) + 0xa0))(piVar5);
      fVar8 = 16.0;
      (**(code **)(**(int **)((int)this + 0x3a4) + 0x7c))(0x41800000);
      (**(code **)(**(int **)((int)this + 0x3a4) + 0x78))(_DAT_00e58314 + _DAT_00e58314);
      (**(code **)(**(int **)((int)this + 0x3a4) + 0x5c))
                (2,*(undefined4 *)((int)this + 0x35c),0x41200000);
      (**(code **)(**(int **)((int)this + 0x3a4) + 100))
                (1,*(undefined4 *)((int)this + 0x35c),fVar8 - 8.0);
      (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x3a4),2);
    }
    else {
      (**(code **)(**(int **)((int)this + 0x38c) + 100))(1,*(undefined4 *)((int)this + 0x35c));
      do {
        cVar3 = (**(code **)(**(int **)((int)this + 0x38c) + 0x50))(1);
      } while (cVar3 != '\0');
      (**(code **)(**(int **)((int)this + 0x3a4) + 100))
                (1,*(undefined4 *)((int)this + 0x35c),unaff_ESI - 8.0);
      do {
        cVar3 = (**(code **)(**(int **)((int)this + 0x3a4) + 0x50))();
      } while (cVar3 != '\0');
    }
    ExceptionList = (void *)FUN_00714db0(this,param_1);
  }
  uVar2 = (uint)ExceptionList >> 8;
  ExceptionList = local_c;
  return CONCAT31((int3)uVar2,1);
}


//// FUNCTION FUN_00716da0 @ 00716da0 ////

undefined4 __fastcall FUN_00716da0(void *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined2 unaff_DI;
  ulonglong uVar4;
  undefined4 local_4;
  
  if (*(int *)((int)param_1 + 0x428) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int)param_1 + 0x42c) - *(int *)((int)param_1 + 0x428) >> 2;
  }
  pfVar2 = (float *)FUN_0071fd70(*(void **)((int)param_1 + 0x404),&local_4);
  if (DAT_00e58224 < iVar3) {
    fVar1 = (float)(iVar3 - DAT_00e58224) * *pfVar2;
  }
  else {
    fVar1 = 0.0;
  }
  FUN_00acf400((double)(fVar1 + 0.5),unaff_DI);
  uVar4 = FUN_00acd42c();
  iVar3 = (int)uVar4;
  if (*(int *)((int)param_1 + 0x420) != iVar3) {
    iVar3 = FUN_007168c0(param_1,iVar3 - *(int *)((int)param_1 + 0x420));
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}


//// FUNCTION FUN_00716eb0 @ 00716eb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00716eb0(int *param_1)

{
  int iVar1;
  int ***pppiVar2;
  char cVar3;
  size_t sVar4;
  int ****ppppiVar5;
  void *pvVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint uVar10;
  uint unaff_EDI;
  float10 fVar11;
  undefined4 uVar12;
  void *pvStack_158;
  int ***pppiStack_150;
  float fStack_14c;
  void *_Memory;
  int ****ppppiVar13;
  uint uVar14;
  void *pvStack_118;
  int ***pppiStack_110;
  void *pvStack_10c;
  uint uStack_108;
  int ***pppiStack_104;
  uint *puStack_ec;
  float fStack_e8;
  int ***pppiStack_e4;
  uint uStack_e0;
  int *piStack_bc;
  undefined4 *apuStack_98 [6];
  undefined4 uStack_80;
  undefined1 uStack_70;
  undefined1 uStack_54;
  undefined2 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 auStack_40 [12];
  undefined1 uStack_28;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd290f;
  pvStack_c = ExceptionList;
  iVar1 = param_1[0x108];
  piVar9 = (int *)(iVar1 + 0x3a8);
  ExceptionList = &pvStack_c;
  (**(code **)(*piVar9 + 4))();
  *(int **)(iVar1 + 0x3bc) = param_1;
  (**(code **)*piVar9)();
  puStack_4c = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 0;
  uStack_44 = 10;
  iStack_4 = 0;
  sVar4 = FUN_00ace02d(
                      L"<P ALIGN\t= CENTER><v2><nobr><translate>ENTER_NAME_TEXT_TAG</translate></nobr></v2></P>"
                      );
  FUN_0040cae0(&puStack_4c,
               L"<P ALIGN\t= CENTER><v2><nobr><translate>ENTER_NAME_TEXT_TAG</translate></nobr></v2></P>"
               ,sVar4);
  if ((DAT_0104df10 & 1) == 0) {
    DAT_0104df10 = DAT_0104df10 | 1;
    DAT_0104df08 = 400.0;
    DAT_0104df0c = (char *)0x43480000;
  }
  apuStack_98[0] = operator_new(0x344);
  iStack_4._0_1_ = 1;
  if (apuStack_98[0] == (undefined4 *)0x0) {
    ppppiVar5 = (int ****)0x0;
  }
  else {
    ppppiVar5 = (int ****)FUN_007432f0(apuStack_98[0]);
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  (*(code *)(*ppppiVar5)[0x1e])();
  pcVar7 = DAT_0104df0c;
  (*(code *)(*ppppiVar5)[0x1f])();
  pppiVar2 = *ppppiVar5;
  (**(code **)(*param_1 + 0x14))();
  piStack_bc = param_1;
  (*(code *)pppiVar2[0x19])();
  pppiVar2 = *ppppiVar5;
  (**(code **)(*param_1 + 0x10))();
  (*(code *)pppiVar2[0x17])();
  pvVar6 = operator_new(0x288);
  if (pvVar6 == (void *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    unaff_EDI = 0x20;
    pcVar7 = _malloc(0x20);
    uStack_e0 = 0x71703e;
    _strncpy(pcVar7,"ui/buildmenu_window.dds",0x17);
    pcVar7[0x17] = '\0';
    uStack_24 = CONCAT31(uStack_24._1_3_,3);
    piStack_bc = (int *)0x1;
    puVar8 = FUN_005e8fd0(pvVar6,(undefined4 *)&stack0xffffff4c);
  }
  uStack_24 = 0;
  if ((((uint)piStack_bc & 1) != 0) && (0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar7);
  }
  puVar8[0x9c] = 0x41400000;
  puVar8[0x9d] = 0x41400000;
  puVar8[0x9b] = 0x42000000;
  puVar8[0x9e] = 0x41c00000;
  puVar8[0x9f] = 0x41c00000;
  (*(code *)(*ppppiVar5)[0x28])();
  puVar8 = operator_new(0x3fc);
  uStack_28 = 5;
  if (puVar8 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_00833290(puVar8);
  }
  uStack_28 = 0;
  (**(code **)(*piVar9 + 0x54))();
  (**(code **)(*piVar9 + 0x78))();
  uStack_e0 = 0x71712d;
  (**(code **)(*piVar9 + 0x8c))();
  uStack_e0 = 0;
  fStack_e8 = 1.4013e-45;
  puStack_ec = (uint *)0x71713a;
  pppiStack_e4 = (int ***)ppppiVar5;
  (**(code **)(*piVar9 + 100))();
  puStack_ec = (uint *)0x0;
  (**(code **)(*piVar9 + 0x5c))();
  (**(code **)(*piVar9 + 0x30))();
  (*(code *)(*ppppiVar5)[3])();
  fVar11 = (float10)(**(code **)(*piVar9 + 0x14))();
  fStack_e8 = (float)((float10)_DAT_00e58320 + fVar11);
  pppiStack_104 = (int ***)0x717175;
  puVar8 = operator_new(0x3c8);
  uStack_54 = 6;
  if (puVar8 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_00738920(puVar8);
  }
  param_1[0x109] = (int)piVar9;
  uStack_108 = 1;
  uStack_54 = 0;
  pvStack_10c = (void *)0x7171b1;
  pppiStack_104 = (int ***)ppppiVar5;
  (**(code **)(*piVar9 + 0x5c))();
  pvStack_10c = (void *)0x1;
  pppiStack_110 = (int ***)ppppiVar5;
  (**(code **)(*(int *)param_1[0x109] + 100))();
  pvStack_118 = (void *)(DAT_0104df08 - (DAT_00e5831c + DAT_00e5831c));
  (**(code **)(*(int *)param_1[0x109] + 0x78))();
  *(undefined4 *)(param_1[0x109] + 0x394) = 0x18;
  if ((DAT_0104df10 & 2) == 0) {
    DAT_0104df10 = DAT_0104df10 | 2;
    DAT_0104dee8 = &DAT_0104def4;
    DAT_0104def4 = 0;
    _DAT_0104deec = 0;
    DAT_0104def0 = 0x20;
    DAT_0104dee8 = _malloc(0x20);
    _strncpy(DAT_0104dee8,"DEFAULT_SAVE_NAME_TEXT_TAG",0x1a);
    _DAT_0104deec = 0x1a;
    DAT_0104dee8[0x1a] = '\0';
    _atexit(FUN_00d12ae0);
  }
  FUN_009b5030(apuStack_98,&DAT_0104dee8);
  uStack_70 = 7;
  (**(code **)(*(int *)param_1[0x109] + 0x54))();
  FUN_00738730((void *)param_1[0x109],'\x01');
  (**(code **)(*(int *)param_1[0x109] + 0x8c))();
  uVar14 = 1;
  (*(code *)(*ppppiVar5)[3])();
  (**(code **)(*(int *)param_1[0x109] + 0x14))();
  if ((DAT_0104df10 & 4) == 0) {
    _DAT_0104dee4 = DAT_0104df08 * 0.3;
    DAT_0104df10 = DAT_0104df10 | 4;
  }
  pvVar6 = operator_new(0x420);
  if (pvVar6 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    puStack_ec = &uStack_e0;
    uStack_e0 = uStack_e0 & 0xffff0000;
    fStack_e8 = 0.0;
    pppiStack_e4 = (int ***)&lpType_0000000a;
    uVar10 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_ec,(wchar_t *)&lpCaption_00d16918,uVar10);
    pppiStack_110 = (int ***)&pppiStack_104;
    pppiStack_104 = (int ***)((uint)pppiStack_104 & 0xffffff00);
    pvStack_10c = (void *)0x0;
    uStack_108 = 0x14;
    _strncpy((char *)pppiStack_110,"button_quit.",0xc);
    pvStack_10c = (void *)0xc;
    *(char *)(pppiStack_110 + 3) = '\0';
    pvStack_118 = (void *)((uint)pvStack_118 | 6);
    uStack_80 = 10;
    fStack_14c = 1.0418975e-38;
    piVar9 = FUN_0069fb10(pvVar6,(int *)&pppiStack_110,&puStack_ec,0x42800000,0x42800000,0,0,
                          0x3f800000,0x3f800000);
  }
  if ((((uint)pvStack_118 & 4) != 0) &&
     (pvStack_118 = (void *)((uint)pvStack_118 & 0xfffffffb), 0x14 < uStack_108)) {
                    /* WARNING: Subroutine does not return */
    _free(pppiStack_110);
  }
  uStack_80 = 7;
  if ((((uint)pvStack_118 & 2) != 0) &&
     (pvStack_118 = (void *)((uint)pvStack_118 & 0xfffffffd), &lpType_0000000a < pppiStack_e4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_ec);
  }
  pcVar7 = "SAVELOAD_CANCEL";
  _Memory = (void *)0x0;
  ppppiVar13 = ppppiVar5;
  (**(code **)(*piVar9 + 0x18))();
  pvStack_158 = (void *)0x0;
  uVar10 = 5;
  fStack_14c = 1.0419166e-38;
  (**(code **)(*piVar9 + 0x18))();
  fStack_14c = (DAT_0104df08 * 0.5 - _DAT_0104dee4 * 0.5) - 32.0;
  pppiStack_150 = (int ***)ppppiVar5;
  (**(code **)(*piVar9 + 0x5c))();
  (**(code **)(*piVar9 + 100))();
  (*(code *)(*ppppiVar5)[3])();
  pvVar6 = operator_new(0x420);
  pvStack_10c = pvVar6;
  if (pvVar6 == (void *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    pcVar7 = &stack0xfffffee0;
    uVar14 = 10;
    uVar10 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffed4,(wchar_t *)&lpCaption_00d16918,uVar10);
    pppiStack_150 = (int ***)&stack0xfffffebc;
    fStack_14c = 0.0;
    uVar10 = 0x14;
    _strncpy((char *)pppiStack_150,"button_tick.",0xc);
    fStack_14c = 1.68156e-44;
    *(char *)(pppiStack_150 + 3) = '\0';
    ppppiVar13 = (int ****)&stack0xfffffe88;
    pvStack_158 = (void *)((uint)pvStack_158 | 0x18);
    piVar9 = FUN_0069fb10(pvVar6,(int *)&pppiStack_150,(undefined4 *)&stack0xfffffed4,0x42800000,
                          0x42800000,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)pvStack_158 & 0x10) != 0) &&
     (pvStack_158 = (void *)((uint)pvStack_158 & 0xffffffef), 0x14 < uVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(pppiStack_150);
  }
  if ((((uint)pvStack_158 & 8) != 0) && (10 < uVar14)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar7);
  }
  (**(code **)(*piVar9 + 0x18))();
  uVar12 = 0;
  (**(code **)(*piVar9 + 0x18))(5,&LAB_005f37f0,0,"SAVELOAD_OK");
  (**(code **)(*piVar9 + 0x5c))(1,ppppiVar5,(_DAT_0104dee4 + DAT_0104df08) * 0.5 - 32.0);
  (**(code **)(*piVar9 + 100))(1,ppppiVar5,uVar12);
  (*(code *)(*ppppiVar5)[3])(piVar9,1);
  (*(code *)(*ppppiVar5)[0x23])(0);
  do {
    cVar3 = (*(code *)(*ppppiVar5)[0x14])(1);
  } while (cVar3 != '\0');
  (**(code **)(*(int *)param_1[0x108] + 0xac))(ppppiVar5);
  (**(code **)(*(int *)param_1[0x108] + 0xc))(ppppiVar5,1);
  if (&lpType_0000000a < ppppiVar13) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (&lpType_0000000a < pppiStack_150) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_158);
  }
  ExceptionList = pvStack_118;
  return CONCAT31((int3)((uint)ppppiVar13 >> 8),1);
}


//// FUNCTION FUN_007176d0 @ 007176d0 ////

undefined4 * __thiscall FUN_007176d0(void *this,byte param_1)

{
  FUN_007160a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00717770 @ 00717770 ////

undefined4 * __thiscall
FUN_00717770(void *this,undefined4 param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  void *_Memory;
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  float local_4;
  
  local_4 = -NAN;
  puStack_8 = &LAB_00cd293b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0069fb10(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_4 = 0.0;
  *(undefined ***)this = &PTR_FUN_00d47b24;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d47b08;
  *(undefined4 *)((int)this + 0x420) = param_1;
  FUN_00741630(this,0,0x716eb0,param_1,"SAVEGAMESLOT_OK");
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar2 = FUN_00ace02d(L"<v3><nobr><translate>NEW_SAVE_TEXT_TAG</translate></nobr></v3>");
  FUN_004036d0(&local_2c,L"<v3><nobr><translate>NEW_SAVE_TEXT_TAG</translate></nobr></v3>",uVar2);
  local_4._0_1_ = 1;
  puVar3 = operator_new(0x3fc);
  local_4._0_1_ = 2;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar3);
  }
  local_4 = (float)CONCAT31(local_4._1_3_,1);
  (**(code **)(*piVar4 + 0x54))();
  uVar2 = 0;
  (**(code **)(*piVar4 + 0x84))();
  _Memory = this;
  (**(code **)(*piVar4 + 0x5c))(1);
  FUN_0073f6e0(this,piVar4);
  FUN_00740dc0(this,(undefined4 *)&stack0xffffffc0);
  local_4 = local_4 * 0.5;
  fVar5 = (float10)(**(code **)(*piVar4 + 0x14))();
  local_4 = (float)((float10)local_4 - fVar5 * (float10)0.5);
  (**(code **)(*piVar4 + 100))(1,this,local_4);
  do {
    cVar1 = (**(code **)(*piVar4 + 0x50))(1);
  } while (cVar1 != '\0');
  if (10 < uVar2) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_2c;
  return this;
}


//// FUNCTION FUN_00717920 @ 00717920 ////

void __thiscall FUN_00717920(void *this,undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  uint uVar6;
  uint unaff_ESI;
  float10 fVar7;
  undefined4 *puStack_18c;
  undefined4 *puStack_160;
  undefined **ppuStack_11c;
  char *pcStack_118;
  int *piStack_114;
  undefined ***pppuStack_110;
  void *pvStack_10c;
  char *pcStack_108;
  void *pvStack_104;
  char *pcStack_100;
  char *pcVar8;
  void **_Memory;
  undefined1 *puStack_d8;
  void *pvStack_d4;
  char *pcStack_d0;
  uint uStack_cc;
  undefined4 *puStack_c8;
  void **ppvStack_c4;
  char *pcStack_c0;
  int *piStack_bc;
  uint *puStack_b8;
  float fStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2a13;
  pvStack_c = ExceptionList;
  uStack_9c = 0x71794e;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x344);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(puVar3);
  }
  uStack_9c = *(undefined4 *)((int)this + 0x35c);
  uStack_a0 = 1;
  local_4 = 0xffffffff;
  uStack_a4 = 0x717990;
  (**(code **)(*piVar4 + 100))();
  uStack_a8 = *(undefined4 *)((int)this + 0x35c);
  uStack_a4 = 0x41000000;
  uStack_ac = 2;
  uStack_b0 = 0x7179a5;
  (**(code **)(*piVar4 + 0x60))();
  uStack_b0 = 0x428c0000;
  fStack_b4 = 1.0421066e-38;
  (**(code **)(*piVar4 + 0x78))();
  iVar2 = *piVar4;
  fStack_b4 = 1.0421084e-38;
  fVar7 = (float10)(**(code **)(**(int **)((int)this + 0x35c) + 0x14))();
  fStack_b4 = (float)fVar7;
  puStack_b8 = (uint *)0x7179c7;
  (**(code **)(iVar2 + 0x7c))();
  puStack_b8 = (uint *)0x1;
  pcStack_c0 = (char *)0x7179d5;
  piStack_bc = piVar4;
  (**(code **)(**(int **)((int)this + 0x35c) + 0xc))();
  pcStack_c0 = "BUILDBUTTONITEM_LIST";
  puStack_c8 = (undefined4 *)&LAB_00717710;
  uStack_cc = 0xc;
  pcStack_d0 = (char *)0x7179e9;
  ppvStack_c4 = this;
  (**(code **)(*(int *)this + 0x18))();
  pcStack_d0 = "BUILDBUTTONITEM_LIST";
  puStack_d8 = &LAB_00717740;
  pvStack_d4 = this;
  (**(code **)(*(int *)this + 0x18))();
  fVar7 = (float10)(**(code **)(*piVar4 + 0x14))();
  ppvStack_c4 = (void **)(float)((fVar7 * (float10)0.5 - (float10)64.0) - (float10)20.0);
  fVar7 = (float10)(**(code **)(*piVar4 + 0x10))();
  puVar3 = *(undefined4 **)((int)this + 0x3d4);
  pcStack_c0 = (char *)(float)(fVar7 * (float10)0.5 - (float10)32.0);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)((int)this + 0x3c0) + 4))();
    *(undefined4 *)((int)this + 0x3d4) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x3c0))();
  }
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    puStack_c8 = (undefined4 *)0x0;
  }
  else {
    param_1 = &stack0xffffff74;
    unaff_ESI = 10;
    puStack_c8 = pvVar5;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff68,(wchar_t *)&lpCaption_00d16918,uVar6);
    puStack_b8 = &uStack_ac;
    uStack_ac = uStack_ac & 0xffffff00;
    fStack_b4 = 0.0;
    uStack_b0 = 0x14;
    _strncpy((char *)puStack_b8,"button_up.",10);
    fStack_b4 = 1.4013e-44;
    *(char *)((int)puStack_b8 + 10) = '\0';
    piStack_bc = (int *)&stack0xffffff14;
    uStack_cc = 3;
    pcStack_100 = (char *)0x717b29;
    puStack_c8 = FUN_0069fb10(pvVar5,(int *)&puStack_b8,(undefined4 *)&stack0xffffff68,0x42480000,
                              0x42480000,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)((int)this + 0x3c0) + 4))();
  *(undefined4 **)((int)this + 0x3d4) = puStack_c8;
  (*(code *)**(undefined4 **)((int)this + 0x3c0))();
  if (((uStack_cc & 2) != 0) && (uStack_cc = uStack_cc & 0xfffffffd, 0x14 < uStack_b0)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_b8);
  }
  if (((uStack_cc & 1) != 0) && (uStack_cc = uStack_cc & 0xfffffffe, 10 < unaff_ESI)) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  _Memory = ppvStack_c4;
  (**(code **)(**(int **)((int)this + 0x3d4) + 100))();
  (**(code **)(**(int **)((int)this + 0x3d4) + 0x60))();
  pcVar8 = "BUILDBUTTONITEM_LISTUP";
  pcStack_100 = &LAB_00717710;
  pvStack_104 = (void *)0x3;
  pcStack_108 = (char *)0x717bf6;
  (**(code **)(**(int **)((int)this + 0x3d4) + 0x18))();
  pcStack_108 = "BUILDBUTTONITEM_LISTUP";
  pppuStack_110 = (undefined ***)&LAB_005f37f0;
  piStack_114 = (int *)0x0;
  pcStack_118 = (char *)0x717c0d;
  pvStack_10c = this;
  (**(code **)(**(int **)((int)this + 0x3d4) + 0x18))();
  pcStack_118 = "BUILDBUTTONITEM_LISTUP";
  ppuStack_11c = (undefined **)0x0;
  (**(code **)(**(int **)((int)this + 0x3d4) + 0x18))();
  puVar3 = *(undefined4 **)((int)this + 0x3ec);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)((int)this + 0x3d8) + 4))();
    *(undefined4 *)((int)this + 0x3ec) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x3d8))();
  }
  pvVar5 = operator_new(0x420);
  pvStack_104 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    pppuStack_110 = (undefined ***)0x0;
  }
  else {
    _Memory = &pvStack_d4;
    pvStack_d4 = (void *)((uint)pvStack_d4 & 0xffff0000);
    puStack_d8 = (undefined1 *)0xa;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff20,(wchar_t *)&lpCaption_00d16918,uVar6);
    pcStack_100 = &stack0xffffff0c;
    piStack_114 = (int *)((uint)piStack_114 | 4);
    pcVar8 = (char *)0x14;
    _strncpy(pcStack_100,"button_down.",0xc);
    pcStack_100[0xc] = '\0';
    piStack_114 = (int *)((uint)piStack_114 | 8);
    pppuStack_110 = (undefined ***)&stack0xfffffecc;
    pppuStack_110 =
         (undefined ***)
         FUN_0069fb10(pvVar5,(int *)&pcStack_100,(undefined4 *)&stack0xffffff20,0x42480000,
                      0x42480000,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)((int)this + 0x3d8) + 4))();
  *(undefined ****)((int)this + 0x3ec) = pppuStack_110;
  (*(code *)**(undefined4 **)((int)this + 0x3d8))();
  if ((((uint)piStack_114 & 8) != 0) &&
     (piStack_114 = (int *)((uint)piStack_114 & 0xfffffff7), (char *)0x14 < pcVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_100);
  }
  if ((((uint)piStack_114 & 4) != 0) && ((undefined1 *)0xa < puStack_d8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  (**(code **)(**(int **)((int)this + 0x3ec) + 0x68))();
  (**(code **)(**(int **)((int)this + 0x3ec) + 0x60))();
  pcVar8 = "BUILDBUTTONITEM_LISTDOWN";
  (**(code **)(**(int **)((int)this + 0x3ec) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x3ec) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x3ec) + 0x18))();
  (**(code **)(*piVar4 + 0xc))();
  (**(code **)(*piVar4 + 0xc))();
  puVar3 = *(undefined4 **)((int)this + 0x404);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)((int)this + 0x3f0) + 4))();
    *(undefined4 *)((int)this + 0x404) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x3f0))();
  }
  puVar3 = operator_new(0x37c);
  if (puVar3 == (undefined4 *)0x0) {
    puStack_160 = (undefined4 *)0x0;
  }
  else {
    puStack_160 = FUN_00720df0(puVar3);
  }
  (**(code **)(*(int *)((int)this + 0x3f0) + 4))();
  *(undefined4 **)((int)this + 0x404) = puStack_160;
  (*(code *)**(undefined4 **)((int)this + 0x3f0))();
  (**(code **)(**(int **)((int)this + 0x404) + 0x78))();
  (**(code **)(**(int **)((int)this + 0x404) + 0xfc))();
  pcStack_108 = *(char **)((int)this + 0x3d4);
  pppuStack_110 = &ppuStack_11c;
  pcStack_118 = (char *)0x0;
  piStack_114 = (int *)0x0;
  ppuStack_11c = &PTR_FUN_00d18c2c;
  if (pcStack_108 != (char *)0x0) {
    piStack_114 = (int *)((int)pcStack_108 + 0x18);
    pcStack_118 = (char *)*piStack_114;
    *(char ***)(*piStack_114 + 4) = &pcStack_118;
    *piStack_114 = (int)&pcStack_118;
  }
  pvStack_104 = (void *)0xc0000000;
  pcStack_100 = (char *)0xc0000000;
  iVar2 = *(int *)((int)this + 0x404);
  *(undefined4 *)(iVar2 + 0x7c) = 2;
  (**(code **)(*(int *)(iVar2 + 0x80) + 4))();
  *(char **)(iVar2 + 0x94) = pcStack_108;
  (*(code *)**(undefined4 **)(iVar2 + 0x80))();
  *(void **)(iVar2 + 0x98) = pvStack_104;
  *(char **)(iVar2 + 0x9c) = pcStack_100;
  if (piStack_114 != (int *)0x0) {
    *piStack_114 = (int)pcStack_118;
  }
  if (pcStack_118 != (char *)0x0) {
    *(int **)(pcStack_118 + 4) = piStack_114;
  }
  pcStack_108 = *(char **)((int)this + 0x3ec);
  pppuStack_110 = &ppuStack_11c;
  pcStack_118 = (char *)0x0;
  piStack_114 = (int *)0x0;
  ppuStack_11c = &PTR_FUN_00d18c2c;
  if (pcStack_108 != (char *)0x0) {
    piStack_114 = (int *)((int)pcStack_108 + 0x18);
    pcStack_118 = (char *)*piStack_114;
    *(char ***)(*piStack_114 + 4) = &pcStack_118;
    *piStack_114 = (int)&pcStack_118;
  }
  pvStack_104 = (void *)0xc0000000;
  pcStack_100 = (char *)0xc0000000;
  iVar2 = *(int *)((int)this + 0x404);
  *(undefined4 *)(iVar2 + 0xc4) = 1;
  (**(code **)(*(int *)(iVar2 + 200) + 4))();
  *(char **)(iVar2 + 0xdc) = pcStack_108;
  (*(code *)**(undefined4 **)(iVar2 + 200))();
  *(void **)(iVar2 + 0xe0) = pvStack_104;
  *(char **)(iVar2 + 0xe4) = pcStack_100;
  ppuStack_11c = &PTR_FUN_00d18c2c;
  if (piStack_114 != (int *)0x0) {
    *piStack_114 = (int)pcStack_118;
  }
  if (pcStack_118 != (char *)0x0) {
    *(int **)(pcStack_118 + 4) = piStack_114;
  }
  pcStack_108 = (char *)0x0;
  pcStack_118 = (char *)0x0;
  piStack_114 = (int *)0x0;
  (**(code **)(**(int **)((int)this + 0x404) + 0x5c))();
  FUN_0071fb50(*(void **)((int)this + 0x404),0);
  FUN_0071fc90(*(void **)((int)this + 0x404),1.0);
  (**(code **)(**(int **)((int)this + 0x404) + 0x18))(9,&LAB_00716e30,this);
  (**(code **)(*piVar4 + 0xc))(*(undefined4 *)((int)this + 0x404),1);
  puVar3 = *(undefined4 **)((int)this + 0x41c);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*(int *)((int)this + 0x408) + 4))();
    *(undefined4 *)((int)this + 0x41c) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x408))();
  }
  puVar3 = operator_new(0x3fc);
  pcStack_118 = (char *)0xe;
  if (puVar3 == (undefined4 *)0x0) {
    puStack_18c = (undefined4 *)0x0;
  }
  else {
    puStack_18c = FUN_00833290(puVar3);
  }
  pcStack_118 = (char *)0xffffffff;
  (**(code **)(*(int *)((int)this + 0x408) + 4))();
  *(undefined4 **)((int)this + 0x41c) = puStack_18c;
  (*(code *)**(undefined4 **)((int)this + 0x408))();
  (**(code **)(**(int **)((int)this + 0x41c) + 100))(2,*(undefined4 *)((int)this + 0x3ec),0);
  (**(code **)(**(int **)((int)this + 0x41c) + 0x5c))(1,*(undefined4 *)((int)this + 0x3d4),0);
  *(undefined4 *)(*(int *)((int)this + 0x41c) + 0x354) = 0x43000000;
  *(undefined1 *)(*(int *)((int)this + 0x41c) + 0x358) = 1;
  (**(code **)(*piVar4 + 0xc))(*(undefined4 *)((int)this + 0x41c),1);
  ExceptionList = pcVar8;
  return;
}


//// FUNCTION FUN_00718220 @ 00718220 ////

void FUN_00718220(void)

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
  puStack_8 = &LAB_00cd2a28;
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


//// FUNCTION FUN_007182e0 @ 007182e0 ////

void __thiscall FUN_007182e0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00718220();
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
      _Dst = FUN_00715d00((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_007148f0(param_1,iVar5,param_1 + param_2);
      FUN_00715d00(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00713a70(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_007148f0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00713ea0(param_1,(int)pvVar3,iVar5);
    FUN_00713a70(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00718520 @ 00718520 ////

undefined4 * __thiscall FUN_00718520(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd2a7a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d1c4e4;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined ***)this = &PTR_FUN_00d1e128;
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = (undefined2 *)((int)this + 0x50);
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 10;
  local_4 = 0;
  FUN_004036d0((undefined4 *)((int)this + 0x44),*(wchar_t **)(param_1 + 0x44),
               *(uint *)(param_1 + 0x48));
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = (undefined2 *)((int)this + 0x74);
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x68),*(wchar_t **)(param_1 + 0x68),
               *(uint *)(param_1 + 0x6c));
  *(undefined4 *)((int)this + 0x88) = (undefined2 *)((int)this + 0x94);
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x88),*(wchar_t **)(param_1 + 0x88),
               *(uint *)(param_1 + 0x8c));
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = (undefined2 *)((int)this + 0xc0);
  *(undefined2 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xb4),*(wchar_t **)(param_1 + 0xb4),
               *(uint *)(param_1 + 0xb8));
  *(undefined1 *)((int)this + 0xd4) = *(undefined1 *)(param_1 + 0xd4);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004c0f60((void *)((int)this + 0xd8),param_1 + 0xd8);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007186a0 @ 007186a0 ////

void __thiscall FUN_007186a0(void *this,undefined4 *param_1)

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
  FUN_007182e0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_007186f0 @ 007186f0 ////

undefined4 * __thiscall
FUN_007186f0(void *this,undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,int *param_6,undefined4 *param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint unaff_EBX;
  void *unaff_ESI;
  uint unaff_EDI;
  float10 fVar6;
  void *_Memory;
  undefined1 *local_70;
  undefined4 *local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60 [5];
  void *pvStack_4c;
  void *apvStack_40 [2];
  uint uStack_38;
  void *local_2c [2];
  uint local_24;
  undefined1 uStack_18;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  float local_4;
  
  local_4 = -NAN;
  puStack_8 = &LAB_00cd2ae2;
  pvStack_c = ExceptionList;
  local_70 = &stack0xffffff6c;
  ExceptionList = &pvStack_c;
  FUN_0069fb10(this,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13);
  local_4 = 0.0;
  *(undefined ***)this = &PTR_FUN_00d482dc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d482c4;
  *(undefined4 *)((int)this + 0x420) = param_4;
  *(undefined4 *)((int)this + 0x424) = param_4;
  FUN_00718520((void *)((int)this + 0x428),param_2);
  *(undefined4 *)((int)this + 0x510) = (undefined2 *)((int)this + 0x51c);
  *(undefined2 *)((int)this + 0x51c) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 *)((int)this + 0x518) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x510),(wchar_t *)*param_3,param_3[1]);
  local_4._0_1_ = 2;
  *(undefined4 *)((int)this + 0x534) = param_1;
  puVar2 = operator_new(0x3fc);
  local_4._0_1_ = 3;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  uVar4 = FUN_00ace02d(L"autosave");
  uVar4 = FUN_0055d250(param_3,(ushort *)L"autosave",0,uVar4);
  if (uVar4 == 0xffffffff) {
    puVar2 = FUN_0043bdc0(local_2c,L"<v3><nobr>",(undefined4 *)((int)this + 0x490));
    FUN_0043be60(&local_6c,puVar2,L"</nobr></v3>");
    local_4 = (float)CONCAT31(local_4._1_3_,5);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    (**(code **)(*piVar3 + 0x54))();
    FUN_00740dc0(this,&local_70);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
  }
  else {
    local_6c = local_60;
    local_60[0]._0_2_ = 0;
    local_68 = 0;
    local_64 = 10;
    uVar4 = FUN_00ace02d(L"<v3><nobr><translate>SAVE_GAME_AUTOSAVE</translate></nobr></v3>");
    FUN_004036d0(&local_6c,L"<v3><nobr><translate>SAVE_GAME_AUTOSAVE</translate></nobr></v3>",uVar4)
    ;
    local_4 = (float)CONCAT31(local_4._1_3_,4);
    (**(code **)(*piVar3 + 0x54))();
    FUN_00740dc0(this,&local_70);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    if (10 < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
  }
  _Memory = (void *)0x0;
  (**(code **)(*piVar3 + 0x84))();
  (**(code **)(*piVar3 + 0x5c))(1);
  FUN_0073f6e0(this,piVar3);
  puVar2 = FUN_0043c630((undefined4 *)&stack0xffffff80,*(uint *)((int)this + 0x454),
                        *(uint *)((int)this + 0x458),*(int *)((int)this + 0x45c),
                        *(undefined4 *)((int)this + 0x460),*(int *)((int)this + 0x464),
                        *(undefined4 *)((int)this + 0x468));
  puVar2 = FUN_0043bdc0(apvStack_40,L"<v4><nobr>",puVar2);
  FUN_0043be60(local_60,puVar2,L"</nobr></v4>");
  uStack_18 = 6;
  if (10 < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_40[0]);
  }
  if (unaff_EBX < 0xb) {
    puVar2 = operator_new(0x3fc);
    uStack_18 = 7;
    if (puVar2 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00833290(puVar2);
    }
    uStack_18 = 6;
    (**(code **)(*piVar5 + 0x54))(local_60);
    (**(code **)(*piVar5 + 0x84))(0);
    (**(code **)(*piVar5 + 0x5c))(1,this,DAT_00e58350);
    do {
      cVar1 = (**(code **)(*piVar5 + 0x50))(1);
    } while (cVar1 != '\0');
    FUN_0073f6e0(this,piVar5);
    local_4 = (float)puStack_8 * 0.5;
    fVar6 = (float10)(**(code **)(*piVar3 + 0x14))();
    puStack_8 = (undefined1 *)(float)fVar6;
    fVar6 = (float10)(**(code **)(*piVar5 + 0x14))();
    puStack_8 = (undefined1 *)
                (float)((float10)local_4 - (fVar6 + (float10)(float)puStack_8) * (float10)0.5);
    (**(code **)(*piVar3 + 100))(1,this,puStack_8);
    do {
      cVar1 = (**(code **)(*piVar3 + 0x50))(1);
    } while (cVar1 != '\0');
    fVar6 = (float10)(**(code **)(*piVar3 + 0x14))();
    fStack_14 = (float)(fVar6 + (float10)fStack_14);
    (**(code **)(*piVar5 + 100))(1,this,fStack_14);
    do {
      cVar1 = (**(code **)(*piVar5 + 0x50))(1);
    } while (cVar1 != '\0');
    if (unaff_EDI < 0xb) {
      ExceptionList = pvStack_4c;
      return this;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_ESI);
}


//// FUNCTION FUN_00718b20 @ 00718b20 ////

undefined4 * __thiscall FUN_00718b20(void *this,byte param_1)

{
  FUN_00718b40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00718b40 @ 00718b40 ////

void __fastcall FUN_00718b40(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd2af8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d482dc;
  param_1[0x14] = &PTR_FUN_00d482c4;
  local_4 = 0;
  if (10 < (uint)param_1[0x146]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x144]);
  }
  FUN_004b2660(param_1 + 0x10a);
  local_4 = 0xffffffff;
  FUN_0069f010(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00718bc0 @ 00718bc0 ////

/* WARNING: Removing unreachable block (ram,0x0071947c) */
/* WARNING: Removing unreachable block (ram,0x00719495) */

void __thiscall FUN_00718bc0(void *this,undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  void *this_00;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  float10 fVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  wchar_t *local_224;
  int *local_220;
  undefined1 *local_21c;
  undefined1 *puStack_218;
  wchar_t *local_214;
  uint local_210;
  uint local_20c;
  wchar_t local_208 [10];
  char *pcStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  char acStack_1e8 [20];
  char *pcStack_1d4;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  char acStack_1c8 [20];
  char *pcStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  char acStack_1a8 [20];
  undefined2 *local_194;
  undefined4 local_190;
  uint local_18c;
  undefined2 local_188 [10];
  wchar_t *local_174;
  size_t local_170;
  uint local_16c;
  wchar_t local_168 [10];
  char *local_154;
  undefined4 local_150;
  uint local_14c;
  char local_148 [20];
  void *apvStack_134 [2];
  uint uStack_12c;
  void *apvStack_114 [2];
  uint uStack_10c;
  undefined4 local_f4 [26];
  undefined4 auStack_8c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd2d2c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0x344) == 0) {
    local_174 = local_168;
    local_168[0] = L'\0';
    local_170 = 0;
    local_16c = 10;
    local_214 = local_208;
    local_208[0] = L'\0';
    local_210 = 0;
    local_20c = 10;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    ExceptionList = &pvStack_c;
    bVar4 = FUN_007143a0((int *)&local_220,(int *)&local_174,(int *)&local_214);
    if (bVar4) {
      FUN_004b27d0(local_f4);
      local_21c = &stack0xfffffda8;
      pwVar9 = (wchar_t *)&stack0xfffffdb4;
      uVar12 = 0;
      uVar13 = 10;
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004036d0(&stack0xfffffda8,local_214,local_210);
      uVar12 = FUN_004b2e70((int)local_f4,pwVar9,uVar12,uVar13);
      if ((char)uVar12 != '\0') {
        this_00 = operator_new(0x538);
        bVar4 = this_00 == (void *)0x0;
        local_21c = this_00;
        if (bVar4) {
          piVar5 = (int *)0x0;
        }
        else {
          local_194 = local_188;
          local_188[0] = 0;
          local_190 = 0;
          local_18c = 10;
          uVar12 = FUN_00ace02d((short *)&lpCaption_00d16918);
          FUN_004036d0(&local_194,(wchar_t *)&lpCaption_00d16918,uVar12);
          local_154 = local_148;
          local_148[0] = '\0';
          local_150 = 0;
          local_14c = 0x14;
          _strncpy(local_154,"listbutton",10);
          local_150 = 10;
          local_154[10] = '\0';
          local_224 = (wchar_t *)&stack0xfffffdb8;
          local_4 = 5;
          piVar5 = FUN_007186f0(this_00,this,(int)local_f4,&local_214,local_220,
                                CONCAT31((int3)((uint)param_1[1] >> 8),
                                         *(int *)((int)this + 0x344) != 0),(int *)&local_154,
                                &local_194,param_1[1],*param_1,0,0,0x3f800000,0x3f2c0000);
        }
        if ((!bVar4) && (0x14 < local_14c)) {
                    /* WARNING: Subroutine does not return */
          _free(local_154);
        }
        local_4 = 2;
        if ((!bVar4) && (10 < local_18c)) {
                    /* WARNING: Subroutine does not return */
          _free(local_194);
        }
        (**(code **)(*piVar5 + 0x18))();
        (**(code **)(*piVar5 + 0x18))();
        piVar5[0x109] = 0;
        local_220 = piVar5;
        FUN_007109e0((void *)((int)this + 0x424),&local_220);
        puVar6 = operator_new(0x478);
        bVar4 = puVar6 == (undefined1 *)0x0;
        local_21c = puVar6;
        if (bVar4) {
          local_224 = (wchar_t *)0x0;
        }
        else {
          pcStack_1d4 = acStack_1c8;
          acStack_1c8[0] = '\0';
          uStack_1d0 = 0;
          uStack_1cc = 0x14;
          _strncpy(pcStack_1d4,"SAVE_GAME_DELETE",0x10);
          uStack_1d0 = 0x10;
          pcStack_1d4[0x10] = '\0';
          pcStack_1b4 = acStack_1a8;
          acStack_1a8[0] = '\0';
          uStack_1b0 = 0;
          uStack_1ac = 0x14;
          _strncpy(pcStack_1b4,"button_delete.",0xe);
          uStack_1b0 = 0xe;
          pcStack_1b4[0xe] = '\0';
          pcStack_1f4 = acStack_1e8;
          acStack_1e8[0] = '\0';
          uStack_1f0 = 0;
          uStack_1ec = 0x14;
          _strncpy(pcStack_1f4,"SAVE_GAME_AUTOSAVE",0x12);
          uStack_1f0 = 0x12;
          pcStack_1f4[0x12] = '\0';
          local_4 = 0xb;
          local_220 = FUN_009b5030(apvStack_134,&pcStack_1d4);
          local_4 = 0xc;
          local_224 = (wchar_t *)FUN_009b5030(apvStack_114,&pcStack_1f4);
          puStack_218 = &stack0xfffffdb8;
          local_4 = 0xd;
          uVar15 = 0;
          uVar16 = 0;
          uVar17 = 0x3f800000;
          uVar18 = 0x3f800000;
          fVar11 = (float10)(**(code **)(*piVar5 + 0x14))();
          fVar14 = (float)(fVar11 * (float10)0.5);
          fVar11 = (float10)(**(code **)(*piVar5 + 0x14))();
          local_224 = (wchar_t *)
                      FUN_00719bf0(puVar6,this,&local_214,(undefined4 *)local_224,
                                   (int *)&pcStack_1b4,local_220,(float)(fVar11 * (float10)0.5),
                                   fVar14,uVar15,uVar16,uVar17,uVar18);
        }
        if ((!bVar4) && (10 < uStack_10c)) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_114[0]);
        }
        if ((!bVar4) && (10 < uStack_12c)) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_134[0]);
        }
        if ((!bVar4) && (0x14 < uStack_1ec)) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_1f4);
        }
        if ((!bVar4) && (0x14 < uStack_1ac)) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_1b4);
        }
        local_4 = 2;
        if ((!bVar4) && (0x14 < uStack_1cc)) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_1d4);
        }
        FUN_007186a0((void *)((int)this + 0x434),&local_224);
      }
      local_4._0_1_ = 1;
      FUN_004b2660(local_f4);
    }
    if (10 < local_20c) {
                    /* WARNING: Subroutine does not return */
      _free(local_214);
    }
    local_4 = 0xffffffff;
    if (10 < local_16c) {
                    /* WARNING: Subroutine does not return */
      _free(local_174);
    }
  }
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar4 = false;
  local_4 = 0xffffffff;
  FUN_00a23c20();
  local_21c = (undefined1 *)FUN_00a23460();
  local_220 = (int *)0x0;
  if (0 < (int)local_21c) {
    do {
      piVar5 = local_220;
      iVar7 = FUN_00a23460();
      FUN_00a236f0((int *)&local_174,(iVar7 - (int)piVar5) + -1);
      local_4 = 0x13;
      uVar12 = FUN_00ace02d(L"autosave");
      uVar13 = FUN_0055d250(&local_174,(ushort *)L"autosave",0,uVar12);
      uVar12 = DAT_0104a9a4;
      pwVar9 = DAT_0104a9a0;
      if (uVar13 == 0xffffffff) {
        local_214 = local_208;
        local_20c = 10;
        local_208[0] = L'\0';
        local_210 = 0;
        if (9 < DAT_0104a9a4) {
          local_20c = DAT_0104a9a4 + 0x20 & 0xffffffe0;
          local_214 = _malloc(local_20c * 2);
        }
        _wcsncpy(local_214,pwVar9,uVar12);
        local_210 = uVar12;
        local_214[uVar12] = L'\0';
        local_4._0_1_ = 0x14;
        FUN_0040cae0(&local_214,local_174,local_170);
        sVar8 = FUN_00ace02d(L".jad");
        FUN_0040cae0(&local_214,L".jad",sVar8);
        FUN_004b27d0(local_f4);
        uVar12 = local_210;
        puStack_218 = &stack0xfffffda8;
        pwVar9 = (wchar_t *)&stack0xfffffdb4;
        uVar13 = 10;
        local_4 = CONCAT31(local_4._1_3_,0x15);
        local_224 = local_214;
        puVar6 = &stack0xfffffda8;
        if (9 < local_210) {
          uVar13 = local_210 + 0x20 & 0xffffffe0;
          pwVar9 = _malloc(uVar13 * 2);
          puVar6 = puStack_218;
        }
        puStack_218 = puVar6;
        _wcsncpy(pwVar9,local_224,uVar12);
        pwVar9[uVar12] = L'\0';
        uVar12 = FUN_004b2e70((int)local_f4,pwVar9,uVar12,uVar13);
        if ((char)uVar12 != '\0') {
          puVar6 = operator_new(0x538);
          puStack_218 = puVar6;
          if (puVar6 == (undefined1 *)0x0) {
            pwVar9 = (wchar_t *)0x0;
          }
          else {
            local_194 = local_188;
            local_188[0] = 0;
            local_190 = 0;
            local_18c = 10;
            uVar12 = FUN_00ace02d((short *)&lpCaption_00d16918);
            FUN_004036d0(&local_194,(wchar_t *)&lpCaption_00d16918,uVar12);
            pcStack_1d4 = acStack_1c8;
            acStack_1c8[0] = '\0';
            uStack_1d0 = 0;
            uStack_1cc = 0x14;
            _strncpy(pcStack_1d4,"listbutton",10);
            uStack_1d0 = 10;
            pcStack_1d4[10] = '\0';
            bVar4 = true;
            local_224 = (wchar_t *)&stack0xfffffdb8;
            local_4 = 0x18;
            pwVar9 = (wchar_t *)
                     FUN_007186f0(puVar6,this,(int)local_f4,&local_214,local_220,
                                  CONCAT31((int3)((uint)param_1[1] >> 8),
                                           *(int *)((int)this + 0x344) != 0),(int *)&pcStack_1d4,
                                  &local_194,param_1[1],*param_1,0,0,0x3f800000,0x3f2c0000);
          }
          if ((bVar4) && (bVar4 = false, 0x14 < uStack_1cc)) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_1d4);
          }
          local_4 = 0x15;
          if (*(int *)((int)this + 0x344) == 0) {
            (**(code **)(*(int *)pwVar9 + 0x18))();
          }
          else {
            (**(code **)(*(int *)pwVar9 + 0x18))();
          }
          (**(code **)(*(int *)pwVar9 + 0x18))();
          iVar7 = *(int *)((int)this + 0x428);
          local_224 = pwVar9;
          if ((iVar7 == 0) ||
             ((uint)(*(int *)((int)this + 0x430) - iVar7 >> 2) <=
              (uint)(*(int *)((int)this + 0x42c) - iVar7 >> 2))) {
            FUN_00710560((void *)((int)this + 0x424),*(undefined4 **)((int)this + 0x42c),1,
                         &local_224);
          }
          else {
            puVar10 = *(undefined4 **)((int)this + 0x42c);
            *puVar10 = pwVar9;
            *(undefined4 **)((int)this + 0x42c) = puVar10 + 1;
          }
          local_224 = operator_new(0x478);
          if (local_224 == (wchar_t *)0x0) {
            local_224 = (wchar_t *)0x0;
          }
          else {
            pcStack_1f4 = acStack_1e8;
            acStack_1e8[0] = '\0';
            uStack_1f0 = 0;
            uStack_1ec = 0x14;
            _strncpy(pcStack_1f4,"SAVE_GAME_DELETE",0x10);
            uStack_1f0 = 0x10;
            pcStack_1f4[0x10] = '\0';
            pcStack_1b4 = acStack_1a8;
            acStack_1a8[0] = '\0';
            uStack_1b0 = 0;
            uStack_1ac = 0x14;
            _strncpy(pcStack_1b4,"button_delete.",0xe);
            uStack_1b0 = 0xe;
            pcStack_1b4[0xe] = '\0';
            local_4 = 0x1d;
            puVar10 = FUN_009b5030(apvStack_134,&pcStack_1f4);
            bVar3 = true;
            bVar2 = true;
            bVar1 = true;
            puStack_218 = &stack0xfffffdb8;
            uVar17 = 0x3f800000;
            uVar18 = 0x3f800000;
            uVar15 = 0;
            uVar16 = 0;
            local_4 = 0x1e;
            fVar11 = (float10)(**(code **)(*(int *)pwVar9 + 0x14))();
            fVar14 = (float)(fVar11 * (float10)0.5);
            fVar11 = (float10)(**(code **)(*(int *)pwVar9 + 0x14))();
            local_224 = (wchar_t *)
                        FUN_00719bf0(local_224,this,&local_214,auStack_8c,(int *)&pcStack_1b4,
                                     puVar10,(float)(fVar11 * (float10)0.5),fVar14,uVar15,uVar16,
                                     uVar17,uVar18);
          }
          if ((bVar1) && (bVar1 = false, 10 < uStack_12c)) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_134[0]);
          }
          if ((bVar2) && (bVar2 = false, 0x14 < uStack_1ac)) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_1b4);
          }
          local_4 = 0x15;
          if ((bVar3) && (bVar3 = false, 0x14 < uStack_1ec)) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_1f4);
          }
          iVar7 = *(int *)((int)this + 0x438);
          if ((iVar7 == 0) ||
             ((uint)(*(int *)((int)this + 0x440) - iVar7 >> 2) <=
              (uint)(*(int *)((int)this + 0x43c) - iVar7 >> 2))) {
            FUN_007182e0((void *)((int)this + 0x434),*(undefined4 **)((int)this + 0x43c),1,
                         &local_224);
          }
          else {
            puVar10 = *(undefined4 **)((int)this + 0x43c);
            *puVar10 = local_224;
            *(undefined4 **)((int)this + 0x43c) = puVar10 + 1;
          }
        }
        local_4 = CONCAT31(local_4._1_3_,0x14);
        FUN_004b2660(local_f4);
        if (10 < local_20c) {
                    /* WARNING: Subroutine does not return */
          _free(local_214);
        }
        local_4 = 0xffffffff;
        if (10 < local_16c) {
                    /* WARNING: Subroutine does not return */
          _free(local_174);
        }
      }
      else {
        local_4 = 0xffffffff;
        if (10 < local_16c) {
                    /* WARNING: Subroutine does not return */
          _free(local_174);
        }
      }
      local_4 = 0xffffffff;
      local_220 = (int *)((int)local_220 + 1);
    } while ((int)local_220 < (int)local_21c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007197f0 @ 007197f0 ////

undefined4 FUN_007197f0(int param_1,int param_2)

{
  void *this;
  uint in_EAX;
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_009d3590((undefined4 *)(param_2 + 0x420));
    this = *(void **)(param_2 + 0x474);
    FUN_00716640((int)this);
    if (*(int *)((int)this + 0x344) != 0) {
      FUN_00719e10((int)this);
    }
    FUN_00718bc0(this,&DAT_0104deb4);
    FUN_00716710((int)this);
    uVar1 = FUN_0071b530(0,*(int **)(param_1 + 0x118));
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00719bf0 @ 00719bf0 ////

undefined4 * __thiscall
FUN_00719bf0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2dc2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069fb10(this,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  *(undefined ***)this = &PTR_FUN_00d484d4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d484b8;
  *(undefined4 *)((int)this + 0x420) = (undefined2 *)((int)this + 0x42c);
  *(undefined2 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 *)((int)this + 0x428) = 10;
  *(undefined4 *)((int)this + 0x440) = (undefined2 *)((int)this + 0x44c);
  *(undefined2 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 10;
  piVar1 = (int *)((int)this + 0x460);
  *(undefined4 *)((int)this + 0x46c) = 0;
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(int **)((int)this + 0x46c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d47c3c;
  *(undefined4 *)((int)this + 0x474) = 0;
  local_4 = 3;
  FUN_004036d0((undefined4 *)((int)this + 0x420),(wchar_t *)*param_2,param_2[1]);
  FUN_004036d0((undefined4 *)((int)this + 0x440),(wchar_t *)*param_3,param_3[1]);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x474) = param_1;
  (**(code **)*piVar1)();
  FUN_00741630(this,0,0x719860,0,"SAVE_CREATE_DELETEDIALOGUE");
  FUN_00741630(this,5,0x5f37f0,0,"SAVE_CREATE_DELETEDIALOGUE");
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00719d30 @ 00719d30 ////

undefined4 * __thiscall FUN_00719d30(void *this,byte param_1)

{
  FUN_00719d50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00719d50 @ 00719d50 ////

void __fastcall FUN_00719d50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d484d4;
  param_1[0x14] = &PTR_FUN_00d484b8;
  param_1[0x118] = &PTR_FUN_00d47c3c;
  if ((undefined4 *)param_1[0x11a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11a] = param_1[0x119];
  }
  if (param_1[0x119] != 0) {
    *(undefined4 *)(param_1[0x119] + 4) = param_1[0x11a];
  }
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11d] = 0;
  if ((undefined4 *)param_1[0x11a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11a] = param_1[0x119];
  }
  if (param_1[0x119] != 0) {
    *(undefined4 *)(param_1[0x119] + 4) = param_1[0x11a];
  }
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  if (10 < (uint)param_1[0x112]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x110]);
  }
  if (10 < (uint)param_1[0x10a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x108]);
  }
  FUN_0069f010(param_1);
  return;
}


//// FUNCTION FUN_00719e10 @ 00719e10 ////

void __fastcall FUN_00719e10(int param_1)

{
  undefined1 *this;
  uint uVar1;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  int unaff_ESI;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 **local_fc;
  int local_f8;
  undefined1 *local_f4;
  undefined1 *local_f0 [9];
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [4];
  char *pcStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  char acStack_b0 [36];
  undefined2 *local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80 [2];
  undefined2 *puStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined2 auStack_70 [10];
  undefined2 *puStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined2 auStack_50 [10];
  void *apvStack_3c [2];
  uint uStack_34;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2ed1;
  local_c = ExceptionList;
  local_fc = (undefined1 **)0x0;
  if ((*(int *)(param_1 + 0x428) == 0) ||
     (*(int *)(param_1 + 0x42c) - *(int *)(param_1 + 0x428) >> 2 == 0)) {
    ExceptionList = &local_c;
    local_f8 = param_1;
    this = operator_new(0x428);
    bVar4 = this == (undefined1 *)0x0;
    local_f4 = this;
    if (bVar4) {
      piVar2 = (int *)0x0;
    }
    else {
      local_8c = local_80;
      local_80[0] = 0;
      local_88 = 0;
      local_84 = 10;
      uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_8c,(wchar_t *)&lpCaption_00d16918,uVar1);
      local_cc = local_c0;
      local_c0[0] = '\0';
      local_c8 = 0;
      local_c4 = 0x14;
      _strncpy(local_cc,"listbutton",10);
      local_c8 = 10;
      local_cc[10] = '\0';
      local_f0[0] = &stack0xfffffee4;
      local_4 = 2;
      local_fc = (undefined1 **)0x3;
      piVar2 = FUN_00717770(this,local_f8,(int *)&local_cc,&local_8c,DAT_0104deb8,DAT_0104deb4,0,0,
                            0x3f800000,0x3f2c0000);
    }
    if ((!bVar4) && (0x14 < local_c4)) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    local_4 = 0xffffffff;
    if ((!bVar4) && (10 < local_84)) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    (**(code **)(*piVar2 + 0x18))();
    FUN_007109e0((void *)(unaff_ESI + 0x424),(undefined4 *)&stack0xfffffef4);
    this_00 = operator_new(0x478);
    bVar4 = this_00 == (void *)0x0;
    if (bVar4) {
      piVar2 = (int *)0x0;
    }
    else {
      pcStack_bc = acStack_b0;
      acStack_b0[0] = '\0';
      uStack_b8 = 0;
      uStack_b4 = 0x14;
      _strncpy(pcStack_bc,"SAVE_GAME_DELETE",0x10);
      uStack_b8 = 0x10;
      pcStack_bc[0x10] = '\0';
      local_fc = local_f0;
      local_f0[0] = (undefined1 *)((uint)local_f0[0] & 0xffffff00);
      local_f8 = 0;
      local_f4 = &DAT_00000014;
      _strncpy((char *)local_fc,"button_delete.",0xe);
      local_f8 = 0xe;
      *(char *)((int)local_fc + 0xe) = '\0';
      puStack_7c = auStack_70;
      auStack_70[0] = 0;
      uStack_78 = 0;
      uStack_74 = 10;
      uVar1 = FUN_00ace02d(L"blank");
      FUN_004036d0(&puStack_7c,L"blank",uVar1);
      puStack_5c = auStack_50;
      auStack_50[0] = 0;
      uStack_58 = 0;
      uStack_54 = 10;
      uVar1 = FUN_00ace02d(L"blank");
      FUN_004036d0(&puStack_5c,L"blank",uVar1);
      uStack_14 = 9;
      puVar3 = FUN_009b5030(apvStack_3c,&pcStack_bc);
      uVar9 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar7 = 0;
      uVar8 = 0;
      uStack_14 = 10;
      fVar5 = (float10)(**(code **)(*piVar2 + 0x14))();
      fVar6 = (float)(fVar5 * (float10)0.5);
      fVar5 = (float10)(**(code **)(*piVar2 + 0x14))();
      piVar2 = FUN_00719bf0(this_00,unaff_ESI,&puStack_5c,&puStack_7c,(int *)&local_fc,puVar3,
                            (float)(fVar5 * (float10)0.5),fVar6,uVar7,uVar8,uVar9,uVar10);
    }
    if ((!bVar4) && (10 < uStack_34)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_3c[0]);
    }
    if ((!bVar4) && (10 < uStack_54)) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_5c);
    }
    if ((!bVar4) && (10 < uStack_74)) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_7c);
    }
    if ((!bVar4) && (&DAT_00000014 < local_f4)) {
                    /* WARNING: Subroutine does not return */
      _free(local_fc);
    }
    uStack_14 = 0xffffffff;
    if ((!bVar4) && (0x14 < uStack_b4)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_bc);
    }
    (**(code **)(*piVar2 + 0xc0))();
    (**(code **)(*piVar2 + 0x20))();
    FUN_007186a0((void *)(local_f8 + 0x434),&local_f4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0071a270 @ 0071a270 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071a270(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *this;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint unaff_EBX;
  char *unaff_EBP;
  char *unaff_ESI;
  bool bVar8;
  float10 fVar9;
  int *piVar10;
  void *pvVar11;
  wchar_t *pwVar12;
  uint *puStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  char acStack_dc [4];
  int iStack_d8;
  int *piStack_ac;
  void *pvStack_a8;
  undefined1 *puStack_a4;
  uint uStack_88;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd2fb1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x60);
  local_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_005e5010(puVar3);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0xa0))();
  piVar4 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar4 + 0x10))();
  piVar4 = (int *)FUN_0071b2b0();
  fVar9 = (float10)(**(code **)(*piVar4 + 0x14))();
  if ((DAT_0104df24 & 1) == 0) {
    DAT_0104df24 = DAT_0104df24 | 1;
    DAT_0104df1c = 0x43160000;
    _DAT_0104df20 = 250.0;
  }
  if ((DAT_0104df24 & 2) == 0) {
    DAT_0104df24 = DAT_0104df24 | 2;
    DAT_0104df14 = 400.0;
    DAT_0104df18 = (float)(fVar9 - (float10)_DAT_0104df20);
  }
  puStack_a4 = (undefined1 *)0x71a33c;
  puVar3 = operator_new(0x344);
  puStack_8 = (undefined1 *)0x1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puVar3);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(param_1[0xd2] + 4))();
  param_1[0xd7] = (int)puVar3;
  (**(code **)param_1[0xd2])();
  puStack_a4 = (undefined1 *)0x71a392;
  (**(code **)(*(int *)param_1[0xd7] + 0x78))();
  puStack_a4 = (undefined1 *)DAT_0104df18;
  pvStack_a8 = (void *)0x71a3a4;
  (**(code **)(*(int *)param_1[0xd7] + 0x7c))();
  pvStack_a8 = (void *)DAT_0104df1c;
  piStack_ac = param_1;
  (**(code **)(*(int *)param_1[0xd7] + 0x5c))();
  (**(code **)(*(int *)param_1[0xd7] + 100))();
  this = operator_new(0x288);
  puStack_a4 = this;
  if (this == (undefined1 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uStack_88 = 0x20;
    unaff_EBP = _malloc(0x20);
    _strncpy(unaff_EBP,"ui/buildmenu_window.dds",0x17);
    unaff_EBX = 0x17;
    unaff_EBP[0x17] = '\0';
    pvStack_a8 = (void *)0x1;
    puVar3 = FUN_005e8fd0(this,(undefined4 *)&stack0xffffff70);
  }
  if ((((uint)pvStack_a8 & 1) != 0) &&
     (pvStack_a8 = (void *)((uint)pvStack_a8 & 0xfffffffe), 0x14 < uStack_88)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  puVar3[0x9c] = 0x41400000;
  puVar3[0x9d] = 0x41400000;
  puVar3[0x9b] = 0x42000000;
  puVar3[0x9e] = 0x41c00000;
  puVar3[0x9f] = 0x41c00000;
  (**(code **)(*(int *)param_1[0xd7] + 0xa0))();
  *(uint *)(param_1[0xd7] + 0x114) = *(uint *)(param_1[0xd7] + 0x114) & 0xfffffffd;
  pvVar5 = operator_new(0x360);
  pvStack_a8 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    unaff_EBX = 0x20;
    unaff_ESI = _malloc(0x20);
    _strncpy(unaff_ESI,"ui/buildflourish.dds",0x14);
    unaff_ESI[0x14] = '\0';
    piStack_ac = (int *)((uint)piStack_ac | 2);
    iStack_d8 = 0x71a575;
    piVar4 = FUN_0069d820(pvVar5,(undefined4 *)&stack0xffffff6c,0,0,0x3f800000,0x3f800000);
  }
  if ((((uint)piStack_ac & 2) != 0) &&
     (piStack_ac = (int *)((uint)piStack_ac & 0xfffffffd), 0x14 < unaff_EBX)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  (**(code **)(*piVar4 + 0x74))();
  (**(code **)(*(int *)param_1[0xd7] + 0xc))();
  iVar1 = param_1[0xd7];
  iVar2 = *piVar4;
  (**(code **)(iVar2 + 0x10))();
  acStack_dc[0] = '\x01';
  acStack_dc[1] = '\0';
  acStack_dc[2] = '\0';
  acStack_dc[3] = '\0';
  uStack_e0 = 0x71a5f9;
  iStack_d8 = iVar1;
  (**(code **)(iVar2 + 0x5c))();
  uStack_e4 = param_1[0xd7];
  uStack_e0 = 0x41700000;
  uStack_e8 = 1;
  puStack_ec = (uint *)0x71a60e;
  (**(code **)(*piVar4 + 0x68))();
  puStack_ec = (uint *)0x1;
  (**(code **)(*piVar4 + 0x50))();
  if (param_1[0xd1] == 0) {
    uVar6 = FUN_00ace02d(
                        L"<P ALIGN = CENTER><v2><nobr><translate>LOAD_GAME_TEXT_TAG</translate></nobr></v2></P>"
                        );
    pwVar12 = 
    L"<P ALIGN = CENTER><v2><nobr><translate>LOAD_GAME_TEXT_TAG</translate></nobr></v2></P>";
  }
  else {
    uVar6 = FUN_00ace02d(
                        L"<P ALIGN = CENTER><v2><nobr><translate>SAVE_GAME_TEXT_TAG</translate></nobr></v2></P>"
                        );
    pwVar12 = 
    L"<P ALIGN = CENTER><v2><nobr><translate>SAVE_GAME_TEXT_TAG</translate></nobr></v2></P>";
  }
  FUN_004036d0(&stack0xffffff60,pwVar12,uVar6);
  puVar3 = operator_new(0x3fc);
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar3);
  }
  (**(code **)(*piVar4 + 0x54))();
  (**(code **)(*piVar4 + 0x78))();
  (**(code **)(*piVar4 + 0x8c))();
  acStack_dc[0] = -1;
  acStack_dc[1] = -1;
  acStack_dc[2] = -1;
  acStack_dc[3] = -1;
  uStack_e8 = CONCAT13(1,(undefined3)uStack_e8);
  FUN_00830550(piVar4,9,acStack_dc);
  FUN_00830550(piVar4,3,(char *)((int)&uStack_e8 + 3));
  pvVar11 = (void *)0x0;
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*(int *)param_1[0xd7] + 0xc))();
  (**(code **)(*piVar4 + 0x14))();
  pvVar5 = operator_new(0x420);
  bVar8 = pvVar5 == (void *)0x0;
  if (bVar8) {
    piVar4 = (int *)0x0;
  }
  else {
    piStack_ac = (int *)&stack0xffffff60;
    pvStack_a8 = (void *)0x0;
    puStack_a4 = &lpType_0000000a;
    uVar6 = FUN_00ace02d(L"<translate>LOAD_EXIT_SCREEN</translate>");
    FUN_004036d0(&piStack_ac,L"<translate>LOAD_EXIT_SCREEN</translate>",uVar6);
    puStack_ec = &uStack_e0;
    uStack_e0 = uStack_e0 & 0xffffff00;
    uStack_e8 = 0;
    uStack_e4 = 0x14;
    _strncpy((char *)puStack_ec,"button_goback.",0xe);
    uStack_e8 = 0xe;
    *(char *)((int)puStack_ec + 0xe) = '\0';
    piVar4 = FUN_0069fb10(pvVar5,(int *)&puStack_ec,&piStack_ac,0x42800000,0x42800000,0,0,0x3f800000
                          ,0x3f800000);
  }
  if ((!bVar8) && (0x14 < uStack_e4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_ec);
  }
  if ((!bVar8) && (&lpType_0000000a < puStack_a4)) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_ac);
  }
  (**(code **)(*piVar4 + 0x18))();
  (**(code **)(*piVar4 + 0x18))(5,&LAB_005f37f0,0,"SAVELOAD_CLOSE");
  (**(code **)(*piVar4 + 0x5c))(1);
  piVar10 = param_1;
  (**(code **)(*piVar4 + 100))(1,param_1,DAT_00e5837c);
  (**(code **)(*param_1 + 0xc))(piVar4,1);
  FUN_00717920(param_1,(undefined1 *)param_1);
  DAT_0104deb4 = (DAT_0104df14 - 64.0) - _DAT_00e58220;
  DAT_0104deb8 = (DAT_0104df18 - (_DAT_00e58378 + (float)param_1)) / (float)DAT_00e58224 -
                 _DAT_0104deac;
  if (param_1[0xd1] == 1) {
    FUN_00719e10((int)param_1);
  }
  FUN_00718bc0(param_1,&DAT_0104deb4);
  puVar3 = operator_new(0x344);
  if (puVar3 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_007432f0(puVar3);
  }
  (**(code **)(param_1[0xd8] + 4))();
  param_1[0xdd] = (int)puVar7;
  (**(code **)param_1[0xd8])();
  (**(code **)(*(int *)param_1[0xdd] + 0x5c))(1,param_1[0xd7],0);
  (**(code **)(*(int *)param_1[0xdd] + 100))(1,param_1[0xd7],piVar10);
  (**(code **)(*(int *)param_1[0xdd] + 0x74))
            (DAT_0104df14,
             (float)DAT_00e58224 * DAT_0104deb8 + (float)(DAT_00e58224 + -1) * _DAT_0104deac);
  (**(code **)(*(int *)param_1[0xd7] + 0xc))(param_1[0xdd],1);
  param_1[0x108] = 0;
  FUN_00716710((int)param_1);
  (**(code **)(*param_1 + 0xc))(param_1[0xd7],1);
  if (puVar3 <= &lpType_0000000a) {
    ExceptionList = pvVar11;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)0x0);
}


//// FUNCTION FUN_0071aa60 @ 0071aa60 ////

int * __thiscall FUN_0071aa60(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_EDX;
  void *unaff_EDI;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3062;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(int *)((int)this + 0x344) = param_1;
  *(undefined ***)this = &PTR_FUN_00d480a4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d4808c;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 **)((int)this + 0x354) = (undefined4 *)((int)this + 0x348);
  *(undefined4 *)((int)this + 0x348) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 **)((int)this + 0x36c) = (undefined4 *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x360) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 **)((int)this + 900) = (undefined4 *)((int)this + 0x378);
  *(undefined4 *)((int)this + 0x378) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 **)((int)this + 0x39c) = (undefined4 *)((int)this + 0x390);
  *(undefined4 *)((int)this + 0x390) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 **)((int)this + 0x3b4) = (undefined4 *)((int)this + 0x3a8);
  *(undefined4 *)((int)this + 0x3a8) = &PTR_LAB_00d47c4c;
  *(undefined4 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 **)((int)this + 0x3cc) = (undefined4 *)((int)this + 0x3c0);
  *(undefined4 *)((int)this + 0x3c0) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 **)((int)this + 0x3e4) = (undefined4 *)((int)this + 0x3d8);
  *(undefined4 *)((int)this + 0x3d8) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 **)((int)this + 0x3fc) = (undefined4 *)((int)this + 0x3f0);
  *(undefined4 *)((int)this + 0x3f0) = &PTR_LAB_00d31644;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 **)((int)this + 0x414) = (undefined4 *)((int)this + 0x408);
  *(undefined4 *)((int)this + 0x408) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  local_4 = 0xb;
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,0,0);
  FUN_009a1560(1);
  iVar1 = *(int *)this;
  uVar4 = 0;
  iVar2 = FUN_0071b2b0();
  (**(code **)(iVar1 + 0x70))(iVar2,uVar4);
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0xc))(this,1);
  FUN_0071a270(this);
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  DAT_00e5e280 = 1;
  ExceptionList = unaff_EDI;
  return this;
}


//// FUNCTION FUN_0071ac30 @ 0071ac30 ////

undefined4 FUN_0071ac30(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  undefined4 uVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104ded0;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd307b;
  pvStack_c = ExceptionList;
  piVar4 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104ded0 != (undefined4 *)0x0) {
    iVar1 = DAT_0104ded0[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104ded0[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104debc[1])();
    DAT_0104ded0 = (undefined4 *)0x0;
    (*(code *)*DAT_0104debc)();
  }
  this = operator_new(0x444);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    piVar4 = FUN_0071aa60(this,0);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104debc[1])();
  DAT_0104ded0 = piVar4;
  uVar3 = (*(code *)*DAT_0104debc)();
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0071acf0 @ 0071acf0 ////

int * __cdecl FUN_0071acf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  void *this_00;
  int *piVar3;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [16];
  void *pvStack_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [16];
  void *pvStack_30;
  void *local_2c;
  uint uStack_28;
  uint local_24;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = DAT_0104ded0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd30cb;
  pvStack_c = ExceptionList;
  piVar3 = (int *)0x0;
  if ((param_1 != 0) || (DAT_0104a982 == '\0')) {
    ExceptionList = &pvStack_c;
    if (DAT_0104ded0 != (undefined4 *)0x0) {
      iVar1 = DAT_0104ded0[0x12];
      ExceptionList = &pvStack_c;
      DAT_0104ded0[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)();
      }
      (*(code *)DAT_0104debc[1])();
      DAT_0104ded0 = (undefined4 *)0x0;
      (*(code *)*DAT_0104debc)();
    }
    this = operator_new(0x444);
    local_4 = 7;
    if (this != (void *)0x0) {
      piVar3 = FUN_0071aa60(this,param_1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104debc[1])();
    DAT_0104ded0 = piVar3;
    (*(code *)*DAT_0104debc)();
    ExceptionList = pvStack_c;
    return DAT_0104ded0;
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  ExceptionList = &pvStack_c;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"SAVE_BEFORE_LOAD_TEXT",0x15);
  local_48 = 0x15;
  local_4c[0x15] = '\0';
  local_6c = local_60;
  local_4 = 0;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x20;
  local_6c = _malloc(0x20);
  _strncpy(local_6c,"SAVE_BEFORE_LOAD_TITLE",0x16);
  local_68 = 0x16;
  local_6c[0x16] = '\0';
  local_4._0_1_ = 1;
  FUN_009b5030((undefined4 *)&stack0xffffff68,&local_4c);
  local_4._0_1_ = 2;
  puVar2 = FUN_009b5030(&local_2c,&local_6c);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00669b80(this_00,puVar2,&LAB_00713ba0,FUN_0071ac30);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
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
  local_44 = 0x14;
  _strncpy(local_4c,"POST_NO",7);
  local_48 = 7;
  local_4c[7] = '\0';
  local_4 = 5;
  FUN_009b5030(&local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,6);
  (**(code **)(*DAT_0104da18 + 0x90))();
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_50);
  }
  ExceptionList = pvStack_10;
  return (int *)0x0;
}


//// FUNCTION FUN_0071afe0 @ 0071afe0 ////

float10 FUN_0071afe0(void)

{
  return (float10)0.0;
}


//// FUNCTION FUN_0071aff0 @ 0071aff0 ////

float10 FUN_0071aff0(void)

{
  return (float10)0.0;
}


//// FUNCTION FUN_0071b000 @ 0071b000 ////

float10 __fastcall FUN_0071b000(int param_1)

{
  return (float10)*(float *)(param_1 + 0x368);
}


//// FUNCTION FUN_0071b010 @ 0071b010 ////

float10 __fastcall FUN_0071b010(int param_1)

{
  return (float10)*(float *)(param_1 + 0x36c);
}


//// FUNCTION FUN_0071b030 @ 0071b030 ////

int * __thiscall FUN_0071b030(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0071b190 @ 0071b190 ////

void __cdecl FUN_0071b190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
  }
  return;
}


//// FUNCTION FUN_0071b2a0 @ 0071b2a0 ////

undefined4 FUN_0071b2a0(void)

{
  return DAT_0104df40;
}


//// FUNCTION FUN_0071b2b0 @ 0071b2b0 ////

int FUN_0071b2b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd30f6;
  local_c = ExceptionList;
  if (DAT_0104df40[0xd6] == 0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x344);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_007432f0(puVar1);
    }
    piVar4 = DAT_0104df40;
    piVar3 = DAT_0104df40 + 0xd1;
    local_4 = 0xffffffff;
    (**(code **)(DAT_0104df40[0xd1] + 4))();
    puVar2 = (undefined4 *)*piVar3;
    piVar4[0xd6] = (int)puVar1;
    (*(code *)*puVar2)();
    *(uint *)(DAT_0104df40[0xd6] + 0x114) = *(uint *)(DAT_0104df40[0xd6] + 0x114) & 0xfffffffd;
    (**(code **)(*(int *)DAT_0104df40[0xd6] + 100))(1,DAT_0104df40,0);
    uVar5 = 0;
    piVar4 = DAT_0104df40;
    (**(code **)(*(int *)DAT_0104df40[0xd6] + 0x5c))(1,DAT_0104df40,0);
    (**(code **)(*(int *)DAT_0104df40[0xd6] + 0x74))(0x44800000,0x44400000);
    puVar1 = operator_new(0xbc);
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00744eb0(puVar1);
    }
    uVar6 = 0xffffffff;
    FUN_0073e510((void *)DAT_0104df40[0xd6],puVar2);
    (**(code **)(*DAT_0104df40 + 0xc))(DAT_0104df40[0xd6],1,puVar1,piVar4,uVar5,uVar6);
  }
  ExceptionList = local_c;
  return DAT_0104df40[0xd6];
}


//// FUNCTION FUN_0071b400 @ 0071b400 ////

int * FUN_0071b400(void)

{
  undefined4 *puVar1;
  int *this;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3116;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x344);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_007432f0(puVar1);
  }
  this[0x45] = this[0x45] & 0xfffffffd;
  local_4 = 0xffffffff;
  (**(code **)(*this + 100))(1,DAT_0104df40,0);
  uVar4 = 1;
  piVar5 = DAT_0104df40;
  (**(code **)(*this + 0x5c))(1,DAT_0104df40,0);
  pvVar3 = (void *)0x44800000;
  (**(code **)(*this + 0x74))(0x44800000,0x44400000);
  puVar1 = operator_new(0xbc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00744eb0(puVar1);
  }
  uVar6 = 0xffffffff;
  FUN_0073e510(this,puVar2);
  (**(code **)(*DAT_0104df40 + 0xc))(this,1,pvVar3,puVar1,uVar4,piVar5,uVar6);
  ExceptionList = pvVar3;
  return this;
}


//// FUNCTION FUN_0071b4f0 @ 0071b4f0 ////

undefined4 FUN_0071b4f0(void)

{
  return DAT_0104df58;
}


//// FUNCTION FUN_0071b500 @ 0071b500 ////

void FUN_0071b500(undefined4 param_1)

{
  (*(code *)DAT_0104df44[1])();
  DAT_0104df58 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0071b522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104df44)();
  return;
}


//// FUNCTION FUN_0071b530 @ 0071b530 ////

undefined4 FUN_0071b530(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 in_EAX;
  
  if (param_2 != (int *)0x0) {
    in_EAX = (**(code **)(*param_2 + 0x20))(0);
    piVar1 = param_2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      in_EAX = (**(code **)*param_2)(1);
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_0071b770 @ 0071b770 ////

void __cdecl FUN_0071b770(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -8) {
    param_3[-2] = *(undefined4 *)(param_2 + -8);
    param_3[-1] = *(undefined4 *)(param_2 + -4);
    param_3 = param_3 + -2;
  }
  return;
}


//// FUNCTION FUN_0071b7f0 @ 0071b7f0 ////

void __cdecl FUN_0071b7f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0071b820 @ 0071b820 ////

uint __thiscall FUN_0071b820(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xe4) = DAT_0105c404;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0x108) = DAT_0105c400;
  if (param_1 != '\0') {
    for (iVar1 = *(int *)((int)this + 0x124); iVar1 != (int)this + 0x130;
        iVar1 = *(int *)(iVar1 + 4)) {
      uVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x50))(1);
    }
    return uVar2 & 0xffffff00;
  }
  return 0;
}


//// FUNCTION FUN_0071b910 @ 0071b910 ////

undefined4 __fastcall FUN_0071b910(int param_1)

{
  return *(undefined4 *)(param_1 + 0x360);
}


//// FUNCTION FUN_0071b920 @ 0071b920 ////

undefined4 __fastcall FUN_0071b920(int param_1)

{
  return *(undefined4 *)(param_1 + 0x364);
}


//// FUNCTION FUN_0071b930 @ 0071b930 ////

int __fastcall FUN_0071b930(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_5;
  undefined4 local_4;
  
  iVar3 = *(int *)(param_1 + 0x124);
  local_5 = 1;
  for (; iVar3 != param_1 + 0x130; iVar3 = *(int *)(iVar3 + 4)) {
    local_4 = 0;
    cVar1 = (**(code **)(**(int **)(iVar3 + 8) + 0x34))(&DAT_0104cce0,&local_4);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(*(int *)(*(int *)(iVar3 + 8) + 0x50) + 4))(&local_5), cVar1 != '\0')) {
      if (*(int *)(iVar3 + 8) != 0) {
        return *(int *)(iVar3 + 8);
      }
      break;
    }
  }
  iVar2 = FUN_0071b2b0();
  iVar3 = *(int *)(iVar2 + 0x124);
  do {
    if (iVar3 == iVar2 + 0x130) {
LAB_0071b9f2:
      iVar3 = FUN_00642110();
      cVar1 = (**(code **)(*(int *)(*(int *)(iVar3 + 0x364) + 0x50) + 4))(&local_5);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = FUN_00642110();
      return iVar3;
    }
    local_4 = 0;
    cVar1 = (**(code **)(**(int **)(iVar3 + 8) + 0x34))(&DAT_0104cce0,&local_4);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(*(int *)(*(int *)(iVar3 + 8) + 0x50) + 4))(&local_5), cVar1 != '\0')) {
      if (*(int *)(iVar3 + 8) != 0) {
        return *(int *)(iVar3 + 8);
      }
      goto LAB_0071b9f2;
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}


//// FUNCTION FUN_0071ba30 @ 0071ba30 ////

void __fastcall FUN_0071ba30(int *param_1)

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


//// FUNCTION FUN_0071bac0 @ 0071bac0 ////

void __thiscall FUN_0071bac0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d487b0;
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


//// FUNCTION FUN_0071bb10 @ 0071bb10 ////

void __fastcall FUN_0071bb10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d487b0;
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


//// FUNCTION FUN_0071bbb0 @ 0071bbb0 ////

void __cdecl FUN_0071bbb0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION WScreen_Tick @ 0071bc10 ////

void __fastcall WScreen_Tick(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  WWindow_Tick(param_1);
  iVar3 = FUN_0063a590();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_0063a590();
    (**(code **)(*piVar4 + 0x28))();
  }
  if (DAT_0104df98 != &DAT_0104dfa4) {
    do {
      piVar2 = DAT_0104df98;
      puVar1 = (undefined4 *)DAT_0104df98[2];
      piVar4 = DAT_0104df98 + 1;
      if ((int *)DAT_0104df98[1] != (int *)0x0) {
        *(int *)DAT_0104df98[1] = *DAT_0104df98;
      }
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar4;
      }
      *piVar2 = 0;
      *piVar4 = 0;
      if (puVar1 != (undefined4 *)0x0) {
        piVar4 = puVar1 + 0x12;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
    } while (DAT_0104df98 != &DAT_0104dfa4);
  }
  return;
}


//// FUNCTION FUN_0071bd00 @ 0071bd00 ////

void FUN_0071bd00(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  if ((int **)DAT_0104df64 != &DAT_0104df70) {
    FUN_00566c20(DAT_0104cdf4,*(undefined4 *)(DAT_0104df40 + 0x35c));
    puVar4 = (undefined4 *)(DAT_0104df40 + 0x150);
    *(undefined4 ***)(DAT_0104df40 + 0x154) = &DAT_0104dfa4;
    *puVar4 = DAT_0104dfa4;
    *(undefined4 **)((int)DAT_0104dfa4 + 4) = puVar4;
    iVar2 = DAT_0104df70[2];
    DAT_0104dfa4 = puVar4;
    (*(code *)DAT_0104df2c[1])();
    DAT_0104df40 = iVar2;
    (*(code *)*DAT_0104df2c)();
    piVar3 = DAT_0104df70;
    piVar1 = DAT_0104df70 + 1;
    if ((int *)DAT_0104df70[1] != (int *)0x0) {
      *(int *)DAT_0104df70[1] = *DAT_0104df70;
    }
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *piVar1;
    }
    *piVar3 = 0;
    *piVar1 = 0;
  }
  if (*(char *)(DAT_0104df40 + 0x370) != '\0') {
    FUN_009abb00('\x01');
  }
  return;
}


//// FUNCTION FUN_0071bdc0 @ 0071bdc0 ////

void FUN_0071bdc0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  DAT_0104df28 = 0;
  piVar5 = DAT_0104df64;
  while (piVar5 != &DAT_0104df70) {
    puVar2 = (undefined4 *)piVar5[2];
    DAT_0104df64 = piVar5;
    if ((int *)piVar5[1] != (int *)0x0) {
      *(int *)piVar5[1] = *piVar5;
    }
    if (*piVar5 != 0) {
      *(int *)(*piVar5 + 4) = piVar5[1];
    }
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5 = DAT_0104df64;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      piVar5 = DAT_0104df64;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
        piVar5 = DAT_0104df64;
      }
    }
  }
  DAT_0104df64 = &DAT_0104df70;
  puVar2 = DAT_0104df40;
  piVar5 = DAT_0104df98;
  while (DAT_0104df40 = puVar2, DAT_0104df98 = piVar5, piVar5 != &DAT_0104dfa4) {
    puVar3 = (undefined4 *)piVar5[2];
    if ((int *)piVar5[1] != (int *)0x0) {
      *(int *)piVar5[1] = *piVar5;
    }
    if (*piVar5 != 0) {
      *(int *)(*piVar5 + 4) = piVar5[1];
    }
    *piVar5 = 0;
    piVar5[1] = 0;
    puVar2 = DAT_0104df40;
    piVar5 = DAT_0104df98;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      puVar2 = DAT_0104df40;
      piVar5 = DAT_0104df98;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
        puVar2 = DAT_0104df40;
        piVar5 = DAT_0104df98;
      }
    }
  }
  if (puVar2 != (undefined4 *)0x0) {
    iVar4 = puVar2[0x12];
    puVar2[0x12] = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104df2c[1])();
    DAT_0104df40 = (undefined4 *)0x0;
    (*(code *)*DAT_0104df2c)();
  }
  FUN_0073e770();
  return;
}


//// FUNCTION FUN_0071bf20 @ 0071bf20 ////

undefined4 * __fastcall FUN_0071bf20(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3168;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d487e4;
  param_1[0x14] = &PTR_LAB_00d487c8;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = param_1 + 0xd1;
  param_1[0xd1] = &PTR_FUN_00d18c2c;
  param_1[0xd6] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  param_1[0x46] = 0;
  param_1[0xd7] = 0x3f800000;
  uVar2 = DAT_0105c404;
  uVar6 = DAT_0105c400;
  param_1[0x38] = DAT_0105c404;
  param_1[0x39] = uVar2;
  param_1[0x7d] = uVar2;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  param_1[0x26] = 0;
  param_1[0x41] = uVar6;
  param_1[0x27] = 0;
  param_1[0x42] = uVar6;
  param_1[0x7f] = 0;
  param_1[0x7e] = uVar6;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x7c] = 0;
  FUN_00741630(param_1,0,0x71bc80,0,"SCREEN");
  FUN_00741630(param_1,2,0x71bcc0,0,"SCREEN");
  puVar3 = operator_new(0x348);
  local_4._0_1_ = 4;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_006407a0(puVar3);
  }
  uVar6 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  puVar3 = param_1;
  (**(code **)(*piVar4 + 0x5c))(1,param_1,0);
  (**(code **)(*piVar4 + 100))(1,param_1,0);
  (**(code **)(*piVar4 + 0x74))(puVar3,uVar6);
  FUN_0073f6e0(param_1,piVar4);
  (**(code **)(*piVar4 + 0x80))(1);
  piVar4[0x12] = piVar4[0x12] + 1;
  puVar3 = (undefined4 *)param_1[0xd8];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  param_1[0xd8] = piVar4;
  puVar3 = operator_new(0x348);
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_006407a0(puVar3);
  }
  pvVar5 = (void *)0x0;
  puVar3 = param_1;
  (**(code **)(*piVar4 + 0x5c))(1,param_1);
  (**(code **)(*piVar4 + 100))(1);
  (**(code **)(*piVar4 + 0x74))(puVar3,uVar6);
  FUN_0073f6e0(param_1,piVar4);
  (**(code **)(*piVar4 + 0x80))(2);
  piVar4[0x12] = piVar4[0x12] + 1;
  puVar3 = (undefined4 *)param_1[0xd9];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  param_1[0xd9] = piVar4;
  param_1[0xdb] = (float)param_1 * 0.0009765625;
  param_1[0xda] = 0;
  FUN_0071b820(param_1,'\x01');
  ExceptionList = pvVar5;
  return param_1;
}


//// FUNCTION FUN_0071c170 @ 0071c170 ////

undefined4 * __thiscall FUN_0071c170(void *this,byte param_1)

{
  FUN_0071c190(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0071c190 @ 0071c190 ////

void __fastcall FUN_0071c190(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd31a4;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[0xd9];
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0xd9] = 0;
  puVar2 = (undefined4 *)param_1[0xd8];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0xd8] = 0;
  param_1[0xd1] = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_0071c290 @ 0071c290 ////

void FUN_0071c290(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = (int)DAT_0104df40;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd31bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  bVar2 = FUN_009abb40();
  *(bool *)(iVar1 + 0x370) = bVar2;
  if (*(char *)((int)DAT_0104df40 + 0x370) != '\0') {
    FUN_009abb00('\0');
  }
  piVar3 = (int *)((int)DAT_0104df40 + 0x150);
  *(int ***)((int)DAT_0104df40 + 0x154) = &DAT_0104df70;
  *piVar3 = (int)DAT_0104df70;
  *(int **)((int)DAT_0104df70 + 4) = piVar3;
  DAT_0104df70 = piVar3;
  puVar4 = operator_new(0x374);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_0071bf20(puVar4);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104df2c[1])();
  DAT_0104df40 = puVar4;
  (*(code *)*DAT_0104df2c)();
  DAT_0104df40[0xd7] = *(undefined4 *)((int)DAT_0104cdf4 + 0x38);
  FUN_00566c20(DAT_0104cdf4,0x3f800000);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0071c380 @ 0071c380 ////

void FUN_0071c380(void)

{
  undefined4 *puVar1;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd31db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  thunk_FUN_0082d0e0();
  puVar1 = operator_new(0x374);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0071bf20(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104df2c[1])();
  DAT_0104df40 = puVar1;
  (*(code *)*DAT_0104df2c)();
  uStack_10 = uStack_10 & 0xfffffffe | 2;
  uStack_14 = 0;
  puStack_1c = &LAB_0071b560;
  uStack_18 = 0xb;
  FUN_009a14d0((int *)&puStack_1c);
  DAT_0104df28 = 1;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0071c440 @ 0071c440 ////

void FUN_0071c440(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd31fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0071bdc0();
  iVar1 = FUN_007fd5d0();
  if (iVar1 != 0) {
    iVar1 = FUN_007fd5d0();
    FUN_00801020(iVar1);
  }
  iVar1 = FUN_007ef840();
  if (iVar1 != 0) {
    iVar1 = FUN_007ef840();
    FUN_007f2830(iVar1);
  }
  iVar1 = FUN_007e34b0();
  if (iVar1 != 0) {
    iVar1 = FUN_007e34b0();
    FUN_007e47a0(iVar1);
  }
  iVar1 = FUN_00803080();
  if (iVar1 != 0) {
    iVar1 = FUN_00803080();
    FUN_00804490(iVar1);
  }
  iVar1 = FUN_007dc3a0();
  if (iVar1 != 0) {
    iVar1 = FUN_007dc3a0();
    FUN_007de4b0(iVar1);
  }
  iVar1 = FUN_007e00e0();
  if (iVar1 != 0) {
    iVar1 = FUN_007e00e0();
    FUN_007e1410(iVar1);
  }
  iVar1 = FUN_007ea7b0();
  if (iVar1 != 0) {
    iVar1 = FUN_007ea7b0();
    FUN_007ebb40(iVar1);
  }
  iVar1 = FUN_007f8640();
  if (iVar1 != 0) {
    iVar1 = FUN_007f8640();
    FUN_007f9970(iVar1);
  }
  thunk_FUN_0082d0e0();
  puVar2 = operator_new(0x374);
  puVar3 = (undefined4 *)0x0;
  uStack_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = FUN_0071bf20(puVar2);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104df2c[1])();
  DAT_0104df40 = puVar3;
  (*(code *)*DAT_0104df2c)();
  DAT_0104df28 = 1;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0071c580 @ 0071c580 ////

void __fastcall FUN_0071c580(int param_1)

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


//// FUNCTION FUN_0071c5b0 @ 0071c5b0 ////

undefined4 * FUN_0071c5b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0071bbb0(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_0071c5e0 @ 0071c5e0 ////

void __fastcall FUN_0071c5e0(int param_1)

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


//// FUNCTION FUN_0071c710 @ 0071c710 ////

void FUN_0071c710(void)

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
  puStack_8 = &LAB_00cd3218;
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


//// FUNCTION FUN_0071c7d0 @ 0071c7d0 ////

void __thiscall FUN_0071c7d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cd3230;
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
      uVar2 = FUN_0071c710();
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
      puVar5 = (undefined4 *)FUN_0071b7f0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0071bbb0(puVar5,param_2,&local_20);
      FUN_0071b7f0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_0071b7f0(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_0071c5b0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_0071b190(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0071b7f0(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0071b770((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_0071b190(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0071ca80 @ 0071ca80 ////

void __thiscall FUN_0071ca80(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0071bbb0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_0071c7d0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0071cb90 @ 0071cb90 ////

undefined4 * __fastcall FUN_0071cb90(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *param_1 = &PTR_FUN_00d48904;
  param_1[0x14] = &PTR_FUN_00d488e8;
  return param_1;
}


//// FUNCTION FUN_0071cc00 @ 0071cc00 ////

undefined4 * __thiscall FUN_0071cc00(void *this,undefined4 *param_1)

{
  FUN_0071fd70(*(void **)((int)this + 0x350),param_1);
  return param_1;
}


//// FUNCTION FUN_0071cc90 @ 0071cc90 ////

undefined4 * __thiscall FUN_0071cc90(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0071ccb0 @ 0071ccb0 ////

void __thiscall FUN_0071ccb0(void *this,float param_1)

{
  FUN_0071fc90(*(void **)((int)this + 0x350),param_1);
  return;
}


//// FUNCTION FUN_0071ccd0 @ 0071ccd0 ////

void __thiscall FUN_0071ccd0(void *this,int param_1)

{
  FUN_0071fb50(*(void **)((int)this + 0x350),param_1);
  return;
}


//// FUNCTION FUN_0071ccf0 @ 0071ccf0 ////

int * __fastcall FUN_0071ccf0(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint unaff_EBP;
  char *unaff_EDI;
  bool bVar7;
  int iVar8;
  int *piVar9;
  uint **local_50;
  undefined **local_4c;
  uint local_48;
  uint *local_44;
  undefined ***pppuStack_40;
  int *piStack_38;
  undefined4 uStack_34;
  uint *local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd332d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  local_4 = 0;
  *param_1 = (int)&PTR_FUN_00d48a4c;
  param_1[0x14] = (int)&PTR_FUN_00d48a30;
  param_1[0xd1] = 1;
  pvVar3 = operator_new(0x420);
  bVar7 = pvVar3 == (void *)0x0;
  if (bVar7) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_30 = local_24;
    local_24[0] = local_24[0] & 0xffff0000;
    local_2c = 0;
    local_28 = 10;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_30,(wchar_t *)&lpCaption_00d16918,uVar4);
    local_50 = &local_44;
    local_44 = (uint *)((uint)local_44 & 0xffffff00);
    local_4c = (undefined **)0x0;
    local_48 = 0x14;
    _strncpy((char *)local_50,"button_up.",10);
    local_4c = (undefined **)0xa;
    *(char *)((int)local_50 + 10) = '\0';
    local_4 = 3;
    puVar5 = FUN_0069fb10(pvVar3,(int *)&local_50,&local_30,0x41800000,0x41800000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xd2] = (int)puVar5;
  if ((!bVar7) && (0x14 < local_48)) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  local_4 = 0;
  if ((!bVar7) && (10 < local_28)) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  uVar4 = 0;
  (**(code **)(*(int *)param_1[0xd2] + 0x18))();
  (**(code **)(*(int *)param_1[0xd2] + 0x18))();
  local_44 = (uint *)(param_1 + 6);
  local_50 = (uint **)0x1;
  pppuStack_40 = &local_4c;
  local_4c = &PTR_FUN_00d18c2c;
  local_48 = *local_44;
  *(uint **)(*local_44 + 4) = &local_48;
  *local_44 = (uint)&local_48;
  uStack_34 = 0;
  local_30 = (uint *)0x0;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  local_24[0]._0_1_ = 6;
  piStack_38 = param_1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(int **)(iVar1 + 0x94) = piStack_38;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uStack_34;
  *(uint **)(iVar1 + 0x9c) = local_30;
  if (local_44 != (uint *)0x0) {
    *local_44 = local_48;
  }
  if (local_48 != 0) {
    *(uint **)(local_48 + 4) = local_44;
  }
  pppuStack_40 = &local_4c;
  local_44 = (uint *)(param_1 + 6);
  local_50 = (uint **)0x1;
  local_4c = &PTR_FUN_00d18c2c;
  local_48 = *local_44;
  *(uint **)(*local_44 + 4) = &local_48;
  *local_44 = (uint)&local_48;
  uStack_34 = 0;
  local_30 = (uint *)0x0;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  local_24[0]._0_1_ = 7;
  piStack_38 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(int **)(iVar1 + 0xb8) = piStack_38;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uStack_34;
  *(uint **)(iVar1 + 0xc0) = local_30;
  if (local_44 != (uint *)0x0) {
    *local_44 = local_48;
  }
  if (local_48 != 0) {
    *(uint **)(local_48 + 4) = local_44;
  }
  piStack_38 = (int *)param_1[0xd2];
  pppuStack_40 = &local_4c;
  local_50 = (uint **)0x1;
  local_48 = 0;
  local_44 = (uint *)0x0;
  local_4c = &PTR_FUN_00d18c2c;
  if (piStack_38 != (int *)0x0) {
    local_44 = (uint *)((int)piStack_38 + 0x18);
    local_48 = *local_44;
    *(uint **)(*local_44 + 4) = &local_48;
    *local_44 = (uint)&local_48;
  }
  uStack_34 = 0x41800000;
  local_30 = (uint *)0x41800000;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xe8) = 1;
  local_24[0]._0_1_ = 8;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(int **)(iVar1 + 0x100) = piStack_38;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uStack_34;
  *(uint **)(iVar1 + 0x108) = local_30;
  if (local_44 != (uint *)0x0) {
    *local_44 = local_48;
  }
  if (local_48 != 0) {
    *(uint **)(local_48 + 4) = local_44;
  }
  piStack_38 = (int *)param_1[0xd2];
  pppuStack_40 = &local_4c;
  local_50 = (uint **)0x1;
  local_48 = 0;
  local_44 = (uint *)0x0;
  local_4c = &PTR_FUN_00d18c2c;
  if (piStack_38 != (int *)0x0) {
    local_44 = (uint *)((int)piStack_38 + 0x18);
    local_48 = *local_44;
    *(uint **)(*local_44 + 4) = &local_48;
    *local_44 = (uint)&local_48;
  }
  uStack_34 = 0x41800000;
  local_30 = (uint *)0x41800000;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xc4) = 1;
  local_24[0]._0_1_ = 9;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(int **)(iVar1 + 0xdc) = piStack_38;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uStack_34;
  *(uint **)(iVar1 + 0xe4) = local_30;
  local_24[0] = (uint)local_24[0]._1_3_ << 8;
  if (local_44 != (uint *)0x0) {
    *local_44 = local_48;
  }
  if (local_48 != 0) {
    *(uint **)(local_48 + 4) = local_44;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xd2]);
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_50 = &local_44;
    local_44 = (uint *)((uint)local_44 & 0xffff0000);
    local_4c = (undefined **)0x0;
    local_48 = 10;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_50,(wchar_t *)&lpCaption_00d16918,uVar6);
    uVar4 = uVar4 | 4;
    unaff_EDI = &stack0xffffff9c;
    unaff_EBP = 0x14;
    _strncpy(unaff_EDI,"button_down.",0xc);
    uVar4 = uVar4 | 8;
    local_24[0] = 0xc;
    puVar5 = FUN_0069fb10(pvVar3,(int *)&stack0xffffff90,&local_50,0x41800000,0x41800000,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xd3] = (int)puVar5;
  if (((uVar4 & 8) != 0) && (uVar4 = uVar4 & 0xfffffff7, 0x14 < unaff_EBP)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  local_24[0] = 0;
  if (((uVar4 & 4) != 0) && (10 < local_48)) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  (**(code **)(*(int *)param_1[0xd3] + 0x18))();
  (**(code **)(*(int *)param_1[0xd3] + 0x18))(5,&LAB_005f37f0,0,"SCROLLBARV_SPINDOWN");
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x41800000;
  iVar8 = param_1[0xd3];
  *(undefined4 *)(iVar8 + 0x7c) = 2;
  local_44._0_1_ = 0xf;
  (**(code **)(*(int *)(iVar8 + 0x80) + 4))();
  *(int **)(iVar8 + 0x94) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0x80))();
  *(undefined4 *)(iVar8 + 0x98) = 0x41800000;
  *(uint ***)(iVar8 + 0x9c) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x0;
  iVar8 = param_1[0xd3];
  *(undefined4 *)(iVar8 + 0xa0) = 1;
  local_44._0_1_ = 0x10;
  (**(code **)(*(int *)(iVar8 + 0xa4) + 4))();
  *(int **)(iVar8 + 0xb8) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0xa4))();
  *(undefined4 *)(iVar8 + 0xbc) = 0;
  *(uint ***)(iVar8 + 0xc0) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  iVar1 = param_1[0xd3];
  iVar8 = 0;
  piVar9 = (int *)0x0;
  if (iVar1 != 0) {
    piVar9 = (int *)(iVar1 + 0x18);
    iVar8 = *piVar9;
    *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
    *piVar9 = (int)&stack0xffffff98;
  }
  local_50 = (uint **)0x41800000;
  iVar2 = param_1[0xd3];
  *(undefined4 *)(iVar2 + 0xe8) = 1;
  local_44._0_1_ = 0x11;
  (**(code **)(*(int *)(iVar2 + 0xec) + 4))();
  *(int *)(iVar2 + 0x100) = iVar1;
  (*(code *)**(undefined4 **)(iVar2 + 0xec))();
  *(undefined4 *)(iVar2 + 0x104) = 0x41800000;
  *(uint ***)(iVar2 + 0x108) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar8;
  }
  if (iVar8 != 0) {
    *(int **)(iVar8 + 4) = piVar9;
  }
  iVar1 = param_1[0xd3];
  iVar8 = 0;
  piVar9 = (int *)0x0;
  if (iVar1 != 0) {
    piVar9 = (int *)(iVar1 + 0x18);
    iVar8 = *piVar9;
    *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
    *piVar9 = (int)&stack0xffffff98;
  }
  local_50 = (uint **)0x41800000;
  iVar2 = param_1[0xd3];
  *(undefined4 *)(iVar2 + 0xc4) = 1;
  local_44._0_1_ = 0x12;
  (**(code **)(*(int *)(iVar2 + 200) + 4))();
  *(int *)(iVar2 + 0xdc) = iVar1;
  (*(code *)**(undefined4 **)(iVar2 + 200))();
  *(undefined4 *)(iVar2 + 0xe0) = 0x41800000;
  *(uint ***)(iVar2 + 0xe4) = local_50;
  local_44._0_1_ = 0;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar8;
  }
  if (iVar8 != 0) {
    *(int **)(iVar8 + 4) = piVar9;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xd3]);
  puVar5 = operator_new(0x37c);
  local_44._0_1_ = 0x13;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_00720df0(puVar5);
  }
  param_1[0xd4] = (int)puVar5;
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x0;
  iVar8 = param_1[0xd4];
  *(undefined4 *)(iVar8 + 0xa0) = 1;
  local_44._0_1_ = 0x14;
  (**(code **)(*(int *)(iVar8 + 0xa4) + 4))();
  *(int **)(iVar8 + 0xb8) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0xa4))();
  *(undefined4 *)(iVar8 + 0xbc) = 0;
  *(uint ***)(iVar8 + 0xc0) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  iVar1 = param_1[0xd4];
  iVar8 = 0;
  piVar9 = (int *)0x0;
  if (iVar1 != 0) {
    piVar9 = (int *)(iVar1 + 0x18);
    iVar8 = *piVar9;
    *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
    *piVar9 = (int)&stack0xffffff98;
  }
  local_50 = (uint **)0x41800000;
  iVar2 = param_1[0xd4];
  *(undefined4 *)(iVar2 + 0xe8) = 1;
  local_44._0_1_ = 0x15;
  (**(code **)(*(int *)(iVar2 + 0xec) + 4))();
  *(int *)(iVar2 + 0x100) = iVar1;
  (*(code *)**(undefined4 **)(iVar2 + 0xec))();
  *(undefined4 *)(iVar2 + 0x104) = 0x41800000;
  *(uint ***)(iVar2 + 0x108) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar8;
  }
  if (iVar8 != 0) {
    *(int **)(iVar8 + 4) = piVar9;
  }
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x41800000;
  iVar8 = param_1[0xd4];
  *(undefined4 *)(iVar8 + 0x7c) = 1;
  local_44._0_1_ = 0x16;
  (**(code **)(*(int *)(iVar8 + 0x80) + 4))();
  *(int **)(iVar8 + 0x94) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0x80))();
  *(undefined4 *)(iVar8 + 0x98) = 0x41800000;
  *(uint ***)(iVar8 + 0x9c) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x41800000;
  iVar8 = param_1[0xd4];
  *(undefined4 *)(iVar8 + 0xc4) = 2;
  local_44._0_1_ = 0x17;
  (**(code **)(*(int *)(iVar8 + 200) + 4))();
  *(int **)(iVar8 + 0xdc) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 200))();
  *(undefined4 *)(iVar8 + 0xe0) = 0x41800000;
  *(uint ***)(iVar8 + 0xe4) = local_50;
  local_44 = (uint *)((uint)local_44._1_3_ << 8);
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xd4]);
  FUN_0073f500(param_1);
  ExceptionList = local_4c;
  return param_1;
}


//// FUNCTION FUN_0071d860 @ 0071d860 ////

undefined4 * __thiscall FUN_0071d860(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0071d890 @ 0071d890 ////

int * __fastcall FUN_0071d890(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint unaff_EBP;
  char *unaff_EDI;
  bool bVar7;
  int iVar8;
  int *piVar9;
  uint **local_50;
  undefined **local_4c;
  uint local_48;
  uint *local_44;
  undefined ***pppuStack_40;
  int *local_38;
  undefined4 uStack_34;
  uint *local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd342d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  local_4 = 0;
  *param_1 = (int)&PTR_FUN_00d48ba4;
  param_1[0x14] = (int)&PTR_FUN_00d48b8c;
  param_1[0xd1] = 0;
  pvVar3 = operator_new(0x420);
  bVar7 = pvVar3 == (void *)0x0;
  if (bVar7) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_30 = local_24;
    local_24[0] = local_24[0] & 0xffff0000;
    local_2c = 0;
    local_28 = 10;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_30,(wchar_t *)&lpCaption_00d16918,uVar4);
    local_50 = &local_44;
    local_44 = (uint *)((uint)local_44 & 0xffffff00);
    local_4c = (undefined **)0x0;
    local_48 = 0x14;
    _strncpy((char *)local_50,"button_left.",0xc);
    local_4c = (undefined **)0xc;
    *(char *)(local_50 + 3) = '\0';
    local_4 = 3;
    puVar5 = FUN_0069fb10(pvVar3,(int *)&local_50,&local_30,0x41800000,0x41800000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xd2] = (int)puVar5;
  if ((!bVar7) && (0x14 < local_48)) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  local_4 = 0;
  if ((!bVar7) && (10 < local_28)) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  uVar4 = 0;
  (**(code **)(*(int *)param_1[0xd2] + 0x18))();
  (**(code **)(*(int *)param_1[0xd2] + 0x18))();
  local_44 = (uint *)(param_1 + 6);
  local_50 = (uint **)0x1;
  pppuStack_40 = &local_4c;
  local_4c = &PTR_FUN_00d18c2c;
  local_48 = *local_44;
  *(uint **)(*local_44 + 4) = &local_48;
  *local_44 = (uint)&local_48;
  uStack_34 = 0;
  local_30 = (uint *)0x0;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  local_24[0]._0_1_ = 6;
  local_38 = param_1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(int **)(iVar1 + 0x94) = local_38;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uStack_34;
  *(uint **)(iVar1 + 0x9c) = local_30;
  if (local_44 != (uint *)0x0) {
    *local_44 = local_48;
  }
  if (local_48 != 0) {
    *(uint **)(local_48 + 4) = local_44;
  }
  pppuStack_40 = &local_4c;
  local_44 = (uint *)(param_1 + 6);
  local_50 = (uint **)0x1;
  local_4c = &PTR_FUN_00d18c2c;
  local_48 = *local_44;
  *(uint **)(*local_44 + 4) = &local_48;
  *local_44 = (uint)&local_48;
  uStack_34 = 0;
  local_30 = (uint *)0x0;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  local_24[0]._0_1_ = 7;
  local_38 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(int **)(iVar1 + 0xb8) = local_38;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uStack_34;
  *(uint **)(iVar1 + 0xc0) = local_30;
  if (local_44 != (uint *)0x0) {
    *local_44 = local_48;
  }
  if (local_48 != 0) {
    *(uint **)(local_48 + 4) = local_44;
  }
  local_38 = (int *)param_1[0xd2];
  pppuStack_40 = &local_4c;
  local_50 = (uint **)0x1;
  local_48 = 0;
  local_44 = (uint *)0x0;
  local_4c = &PTR_FUN_00d18c2c;
  if (local_38 != (int *)0x0) {
    local_44 = (uint *)((int)local_38 + 0x18);
    local_48 = *local_44;
    *(uint **)(*local_44 + 4) = &local_48;
    *local_44 = (uint)&local_48;
  }
  uStack_34 = 0x41800000;
  local_30 = (uint *)0x41800000;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xe8) = 1;
  local_24[0]._0_1_ = 8;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(int **)(iVar1 + 0x100) = local_38;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uStack_34;
  *(uint **)(iVar1 + 0x108) = local_30;
  if (local_44 != (uint *)0x0) {
    *local_44 = local_48;
  }
  if (local_48 != 0) {
    *(uint **)(local_48 + 4) = local_44;
  }
  local_38 = (int *)param_1[0xd2];
  pppuStack_40 = &local_4c;
  local_50 = (uint **)0x1;
  local_48 = 0;
  local_44 = (uint *)0x0;
  local_4c = &PTR_FUN_00d18c2c;
  if (local_38 != (int *)0x0) {
    local_44 = (uint *)((int)local_38 + 0x18);
    local_48 = *local_44;
    *(uint **)(*local_44 + 4) = &local_48;
    *local_44 = (uint)&local_48;
  }
  uStack_34 = 0x41800000;
  local_30 = (uint *)0x41800000;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xc4) = 1;
  local_24[0]._0_1_ = 9;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(int **)(iVar1 + 0xdc) = local_38;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uStack_34;
  *(uint **)(iVar1 + 0xe4) = local_30;
  local_24[0] = (uint)local_24[0]._1_3_ << 8;
  if (local_44 != (uint *)0x0) {
    *local_44 = local_48;
  }
  if (local_48 != 0) {
    *(uint **)(local_48 + 4) = local_44;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xd2]);
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    local_50 = &local_44;
    local_44 = (uint *)((uint)local_44 & 0xffff0000);
    local_4c = (undefined **)0x0;
    local_48 = 10;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_50,(wchar_t *)&lpCaption_00d16918,uVar6);
    unaff_EDI = &stack0xffffff9c;
    uVar4 = uVar4 | 4;
    unaff_EBP = 0x14;
    _strncpy(unaff_EDI,"button_right.",0xd);
    uVar4 = uVar4 | 8;
    local_24[0] = 0xc;
    puVar5 = FUN_0069fb10(pvVar3,(int *)&stack0xffffff90,&local_50,0x41800000,0x41800000,0,0,
                          0x3f800000,0x3f800000);
  }
  param_1[0xd3] = (int)puVar5;
  if (((uVar4 & 8) != 0) && (uVar4 = uVar4 & 0xfffffff7, 0x14 < unaff_EBP)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  local_24[0] = 0;
  if (((uVar4 & 4) != 0) && (10 < local_48)) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  (**(code **)(*(int *)param_1[0xd3] + 0x18))();
  (**(code **)(*(int *)param_1[0xd3] + 0x18))(5,&LAB_005f37f0,0,"SCROLLBARH_SPINDOWN");
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x0;
  iVar8 = param_1[0xd3];
  *(undefined4 *)(iVar8 + 0x7c) = 1;
  local_44._0_1_ = 0xf;
  (**(code **)(*(int *)(iVar8 + 0x80) + 4))();
  *(int **)(iVar8 + 0x94) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0x80))();
  *(undefined4 *)(iVar8 + 0x98) = 0;
  *(uint ***)(iVar8 + 0x9c) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  iVar1 = param_1[0xd3];
  iVar8 = 0;
  piVar9 = (int *)0x0;
  if (iVar1 != 0) {
    piVar9 = (int *)(iVar1 + 0x18);
    iVar8 = *piVar9;
    *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
    *piVar9 = (int)&stack0xffffff98;
  }
  local_50 = (uint **)0x41800000;
  iVar2 = param_1[0xd3];
  *(undefined4 *)(iVar2 + 0xa0) = 2;
  local_44._0_1_ = 0x10;
  (**(code **)(*(int *)(iVar2 + 0xa4) + 4))();
  *(int *)(iVar2 + 0xb8) = iVar1;
  (*(code *)**(undefined4 **)(iVar2 + 0xa4))();
  *(undefined4 *)(iVar2 + 0xbc) = 0x41800000;
  *(uint ***)(iVar2 + 0xc0) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar8;
  }
  if (iVar8 != 0) {
    *(int **)(iVar8 + 4) = piVar9;
  }
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x0;
  iVar8 = param_1[0xd3];
  *(undefined4 *)(iVar8 + 0xe8) = 2;
  local_44._0_1_ = 0x11;
  (**(code **)(*(int *)(iVar8 + 0xec) + 4))();
  *(int **)(iVar8 + 0x100) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0xec))();
  *(undefined4 *)(iVar8 + 0x104) = 0;
  *(uint ***)(iVar8 + 0x108) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  iVar1 = param_1[0xd3];
  iVar8 = 0;
  piVar9 = (int *)0x0;
  if (iVar1 != 0) {
    piVar9 = (int *)(iVar1 + 0x18);
    iVar8 = *piVar9;
    *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
    *piVar9 = (int)&stack0xffffff98;
  }
  local_50 = (uint **)0x41800000;
  iVar2 = param_1[0xd3];
  *(undefined4 *)(iVar2 + 0xc4) = 1;
  local_44._0_1_ = 0x12;
  (**(code **)(*(int *)(iVar2 + 200) + 4))();
  *(int *)(iVar2 + 0xdc) = iVar1;
  (*(code *)**(undefined4 **)(iVar2 + 200))();
  *(undefined4 *)(iVar2 + 0xe0) = 0x41800000;
  *(uint ***)(iVar2 + 0xe4) = local_50;
  local_44._0_1_ = 0;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar8;
  }
  if (iVar8 != 0) {
    *(int **)(iVar8 + 4) = piVar9;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xd3]);
  puVar5 = operator_new(0x37c);
  local_44._0_1_ = 0x13;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_00721db0(puVar5);
  }
  param_1[0xd4] = (int)puVar5;
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x41800000;
  iVar8 = param_1[0xd4];
  *(undefined4 *)(iVar8 + 0xa0) = 1;
  local_44._0_1_ = 0x14;
  (**(code **)(*(int *)(iVar8 + 0xa4) + 4))();
  *(int **)(iVar8 + 0xb8) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0xa4))();
  *(undefined4 *)(iVar8 + 0xbc) = 0x41800000;
  *(uint ***)(iVar8 + 0xc0) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x41800000;
  iVar8 = param_1[0xd4];
  *(undefined4 *)(iVar8 + 0xe8) = 2;
  local_44._0_1_ = 0x15;
  (**(code **)(*(int *)(iVar8 + 0xec) + 4))();
  *(int **)(iVar8 + 0x100) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0xec))();
  *(undefined4 *)(iVar8 + 0x104) = 0x41800000;
  *(uint ***)(iVar8 + 0x108) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  piVar9 = param_1 + 6;
  iVar1 = *piVar9;
  *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
  *piVar9 = (int)&stack0xffffff98;
  local_50 = (uint **)0x0;
  iVar8 = param_1[0xd4];
  *(undefined4 *)(iVar8 + 0x7c) = 1;
  local_44._0_1_ = 0x16;
  (**(code **)(*(int *)(iVar8 + 0x80) + 4))();
  *(int **)(iVar8 + 0x94) = param_1;
  (*(code *)**(undefined4 **)(iVar8 + 0x80))();
  *(undefined4 *)(iVar8 + 0x98) = 0;
  *(uint ***)(iVar8 + 0x9c) = local_50;
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar1;
  }
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar9;
  }
  iVar1 = param_1[0xd4];
  iVar8 = 0;
  piVar9 = (int *)0x0;
  if (iVar1 != 0) {
    piVar9 = (int *)(iVar1 + 0x18);
    iVar8 = *piVar9;
    *(undefined1 **)(*piVar9 + 4) = &stack0xffffff98;
    *piVar9 = (int)&stack0xffffff98;
  }
  local_50 = (uint **)0x41800000;
  iVar2 = param_1[0xd4];
  *(undefined4 *)(iVar2 + 0xc4) = 1;
  local_44._0_1_ = 0x17;
  (**(code **)(*(int *)(iVar2 + 200) + 4))();
  *(int *)(iVar2 + 0xdc) = iVar1;
  (*(code *)**(undefined4 **)(iVar2 + 200))();
  *(undefined4 *)(iVar2 + 0xe0) = 0x41800000;
  *(uint ***)(iVar2 + 0xe4) = local_50;
  local_44 = (uint *)((uint)local_44._1_3_ << 8);
  if (piVar9 != (int *)0x0) {
    *piVar9 = iVar8;
  }
  if (iVar8 != 0) {
    *(int **)(iVar8 + 4) = piVar9;
  }
  (**(code **)(*(int *)param_1[0xd4] + 0x18))(9,&LAB_0071cc40,param_1,"SCROLLBARH_SLIDER");
  FUN_0073f6e0(param_1,(int *)param_1[0xd4]);
  FUN_0073f500(param_1);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_0071e420 @ 0071e420 ////

undefined4 * __thiscall FUN_0071e420(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0071eda0 @ 0071eda0 ////

undefined4 * __fastcall FUN_0071eda0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3523;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d48cc4;
  param_1[0x14] = &PTR_FUN_00d48ca8;
  param_1[0xd1] = param_1[0xd1] & 0xfffffffa | 10;
  param_1[0xd5] = 0;
  puVar1 = operator_new(0x344);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puVar1);
  }
  param_1[0xd2] = piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar2 + 0x70))(param_1,0);
  FUN_0073f6e0(param_1,(int *)param_1[0xd2]);
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_0071ef10 @ 0071ef10 ////

undefined4 * __thiscall FUN_0071ef10(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0071ef40 @ 0071ef40 ////

void __thiscall FUN_0071ef40(void *this,float param_1,float param_2)

{
  void *extraout_ECX;
  void *pvVar1;
  
  pvVar1 = this;
  if (*(int *)((int)this + 0x34c) != 0) {
    FUN_00407070(&stack0xfffffff8,param_1);
    FUN_0071ccd0(*(void **)((int)this + 0x34c),(int)pvVar1);
    pvVar1 = extraout_ECX;
  }
  if (*(int *)((int)this + 0x350) != 0) {
    FUN_00407070(&stack0xfffffff8,param_2);
    FUN_0071ccd0(*(void **)((int)this + 0x350),(int)pvVar1);
  }
  return;
}


//// FUNCTION WScrollContainer_Tick @ 0071f080 ////

void __fastcall WScrollContainer_Tick(int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 extraout_ECX;
  float extraout_ECX_00;
  uint unaff_EBX;
  undefined4 unaff_EBP;
  float10 fVar6;
  float fVar7;
  float fVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  char cVar12;
  float local_5c;
  undefined1 *puStack_50;
  int *piStack_4c;
  int *piStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int aiStack_34 [7];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd35f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((int *)param_1[0xd3] != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)param_1[0xd3] + 0x24))();
  }
  if ((int *)param_1[0xd4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd4] + 0x24))();
  }
  fStack_3c = (float)param_1[0x27];
  fStack_40 = (float)param_1[0x30];
  aiStack_34[0] = param_1[0x27];
  fStack_38 = (float)param_1[0x30];
  *(uint *)(param_1[0xd2] + 0x114) = *(uint *)(param_1[0xd2] + 0x114) & 0xfffffffd;
  (**(code **)(*(int *)param_1[0xd2] + 0x4c))();
  *(uint *)(param_1[0xd2] + 0x114) = *(uint *)(param_1[0xd2] + 0x114) | 2;
  fVar2 = fStack_40 - fStack_38;
  puStack_50 = (undefined1 *)(*(float *)(param_1[0xd2] + 0x108) - (float)param_1[0x30]);
  piStack_4c = (int *)(*(float *)(param_1[0xd2] + 0xe4) - (float)param_1[0x27]);
  if (param_1[0xd5] == 1) {
    local_5c = 32.0;
  }
  else if (param_1[0xd5] == 2) {
    local_5c = 48.0;
  }
  else {
    local_5c = 16.0;
  }
  if ((((byte)param_1[0xd1] & 3) == 2) &&
     ((fStack_44 < (float)param_1[0x30] ||
      (unaff_EBX = CONCAT22((short)(unaff_EBX >> 0x10),(ushort)(byte)unaff_EBX),
      (float)param_1[0x42] < fStack_3c)))) {
    unaff_EBX = CONCAT22((short)(unaff_EBX >> 0x10),CONCAT11(1,(char)unaff_EBX));
  }
  if ((((byte)param_1[0xd1] & 0xc) == 8) &&
     ((fStack_38 < (float)param_1[0x27] ||
      (unaff_EBX = unaff_EBX & 0xffffff00, (float)param_1[0x39] < fStack_40)))) {
    unaff_EBX = CONCAT31((int3)(unaff_EBX >> 8),1);
  }
  if ((char)(unaff_EBX >> 8) == '\0') {
    if ((int *)param_1[0xd3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xd3] + 0x20))();
    }
    puVar4 = (undefined4 *)FUN_005fbfa0(aiStack_34,2,(int)param_1,0);
    iVar1 = param_1[0xd2];
    *(undefined4 *)(iVar1 + 0xc4) = *puVar4;
    puStack_8 = (undefined1 *)0xb;
    (**(code **)(*(int *)(iVar1 + 200) + 4))();
    *(undefined4 *)(iVar1 + 0xdc) = puVar4[6];
    (*(code *)**(undefined4 **)(iVar1 + 200))();
    *(undefined4 *)(iVar1 + 0xe0) = puVar4[7];
    *(undefined4 *)(iVar1 + 0xe4) = puVar4[8];
    pvStack_c = (void *)0xffffffff;
    FUN_005f9ed0((int)&fStack_38);
  }
  else {
    cVar12 = (char)unaff_EBX;
    if (param_1[0xd3] == 0) {
      piStack_48 = operator_new(0x358);
      puStack_8 = (undefined1 *)0x0;
      if (piStack_48 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_0071d890(piStack_48);
      }
      param_1[0xd3] = (int)piVar3;
      puStack_8 = (undefined1 *)0xffffffff;
      (**(code **)(*piVar3 + 0xfc))();
      puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,0);
      iVar1 = param_1[0xd3];
      *(undefined4 *)(iVar1 + 0xc4) = *puVar4;
      pvStack_c = (void *)0x1;
      (**(code **)(*(int *)(iVar1 + 200) + 4))();
      *(undefined4 *)(iVar1 + 0xdc) = puVar4[6];
      (*(code *)**(undefined4 **)(iVar1 + 200))();
      *(undefined4 *)(iVar1 + 0xe0) = puVar4[7];
      *(undefined4 *)(iVar1 + 0xe4) = puVar4[8];
      FUN_005f9ed0((int)&fStack_38);
      puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,param_1[0xd3],unaff_EBX);
      iVar1 = param_1[0xd3];
      *(undefined4 *)(iVar1 + 0x7c) = *puVar4;
      pvStack_c = (void *)0x2;
      (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
      *(undefined4 *)(iVar1 + 0x94) = puVar4[6];
      (*(code *)**(undefined4 **)(iVar1 + 0x80))();
      *(undefined4 *)(iVar1 + 0x98) = puVar4[7];
      *(undefined4 *)(iVar1 + 0x9c) = puVar4[8];
      FUN_005f9ed0((int)&fStack_38);
      puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,1,(int)param_1,0);
      iVar1 = param_1[0xd3];
      *(undefined4 *)(iVar1 + 0xa0) = *puVar4;
      pvStack_c = (void *)0x3;
      (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
      *(undefined4 *)(iVar1 + 0xb8) = puVar4[6];
      (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
      *(undefined4 *)(iVar1 + 0xbc) = puVar4[7];
      *(undefined4 *)(iVar1 + 0xc0) = puVar4[8];
      FUN_005f9ed0((int)aiStack_34);
      if ((param_1[0xd4] == 0) || (cVar12 == '\0')) {
        puVar4 = (undefined4 *)FUN_005fbfa0(aiStack_34,2,(int)param_1,0);
        puStack_8 = (undefined1 *)0x6;
        FUN_005f59e0((void *)(param_1[0xd3] + 0xe8),puVar4);
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_005f9ed0((int)aiStack_34);
      }
      else {
        puVar4 = (undefined4 *)FUN_005fbfa0(aiStack_34,2,(int)param_1,local_5c);
        puStack_8 = (undefined1 *)0x4;
        FUN_005f59e0((void *)(param_1[0xd3] + 0xe8),puVar4);
        FUN_005f9ed0((int)aiStack_34);
        puVar4 = (undefined4 *)FUN_005fbfa0(aiStack_34,2,(int)param_1,local_5c);
        puStack_8 = (undefined1 *)0x5;
        FUN_005f59e0((void *)(param_1[0xd4] + 0xc4),puVar4);
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_005f9ed0((int)aiStack_34);
      }
      FUN_0073f6e0(param_1,(int *)param_1[0xd3]);
    }
    if (((char)(unaff_EBX >> 0x18) == '\0') || ((char)(unaff_EBX >> 0x10) != cVar12)) {
      if ((param_1[0xd4] == 0) || (cVar12 == '\0')) {
        puVar4 = (undefined4 *)FUN_005fbfa0(aiStack_34,2,(int)param_1,0);
        iVar1 = param_1[0xd3];
        *(undefined4 *)(iVar1 + 0xe8) = *puVar4;
        puStack_8 = (undefined1 *)0x9;
        (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
        *(undefined4 *)(iVar1 + 0x100) = puVar4[6];
        (*(code *)**(undefined4 **)(iVar1 + 0xec))();
        *(undefined4 *)(iVar1 + 0x104) = puVar4[7];
        *(undefined4 *)(iVar1 + 0x108) = puVar4[8];
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_005f9ed0((int)aiStack_34);
      }
      else {
        puVar4 = (undefined4 *)FUN_005fbfa0(aiStack_34,2,(int)param_1,local_5c);
        puStack_8 = (undefined1 *)0x7;
        FUN_005f59e0((void *)(param_1[0xd3] + 0xe8),puVar4);
        FUN_005f9ed0((int)aiStack_34);
        puVar4 = (undefined4 *)FUN_005fbfa0(aiStack_34,2,(int)param_1,local_5c);
        puStack_8 = (undefined1 *)0x8;
        FUN_005f59e0((void *)(param_1[0xd4] + 0xc4),puVar4);
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_005f9ed0((int)aiStack_34);
      }
      (**(code **)(*(int *)param_1[0xd3] + 0x50))();
    }
    uVar11 = 1;
    (**(code **)(*(int *)param_1[0xd3] + 0x20))();
    puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,local_5c);
    iVar1 = param_1[0xd2];
    *(undefined4 *)(iVar1 + 0xc4) = *puVar4;
    pvStack_c = (void *)0xa;
    (**(code **)(*(int *)(iVar1 + 200) + 4))();
    *(undefined4 *)(iVar1 + 0xdc) = puVar4[6];
    (*(code *)**(undefined4 **)(iVar1 + 200))();
    *(undefined4 *)(iVar1 + 0xe0) = puVar4[7];
    *(undefined4 *)(iVar1 + 0xe4) = puVar4[8];
    pvStack_c = (void *)0xffffffff;
    FUN_005f9ed0((int)&fStack_38);
    piStack_4c = (int *)&stack0xffffff88;
    uVar9 = (undefined2)extraout_ECX;
    uVar10 = (undefined2)((uint)extraout_ECX >> 0x10);
    if (local_5c < 0.0 == (local_5c == 0.0)) {
      fVar7 = fVar2 / local_5c;
    }
    else {
      fVar7 = 1.0;
    }
    FUN_00407070(&stack0xffffff88,fVar7);
    FUN_0071ccb0((void *)param_1[0xd3],(float)CONCAT22(uVar10,uVar9));
    pfVar5 = (float *)FUN_0071cc00((void *)param_1[0xd3],&piStack_4c);
    fVar6 = FUN_00acf400((double)((local_5c - fVar2) * *pfVar5 + 0.5),uVar11);
    *(float *)(param_1[0xd2] + 0xbc) = (float)-fVar6;
  }
  if ((char)unaff_EBP == '\0') {
    if ((int *)param_1[0xd4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xd4] + 0x20))();
    }
    puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,0);
    iVar1 = param_1[0xd2];
    *(undefined4 *)(iVar1 + 0xe8) = *puVar4;
    pvStack_c = (void *)0x17;
    (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
    *(undefined4 *)(iVar1 + 0x100) = puVar4[6];
    (*(code *)**(undefined4 **)(iVar1 + 0xec))();
    *(undefined4 *)(iVar1 + 0x104) = puVar4[7];
    *(undefined4 *)(iVar1 + 0x108) = puVar4[8];
    uStack_10 = 0xffffffff;
    FUN_005f9ed0((int)&fStack_3c);
  }
  else {
    cVar12 = (char)((uint)unaff_EBP >> 8);
    if (param_1[0xd4] == 0) {
      piStack_4c = operator_new(0x358);
      pvStack_c = (void *)0xc;
      if (piStack_4c == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_0071ccf0(piStack_4c);
      }
      param_1[0xd4] = (int)piVar3;
      pvStack_c = (void *)0xffffffff;
      (**(code **)(*piVar3 + 0xfc))();
      puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_3c,2,(int)param_1,0);
      iVar1 = param_1[0xd4];
      *(undefined4 *)(iVar1 + 0xe8) = *puVar4;
      uStack_10 = 0xd;
      (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
      *(undefined4 *)(iVar1 + 0x100) = puVar4[6];
      (*(code *)**(undefined4 **)(iVar1 + 0xec))();
      *(undefined4 *)(iVar1 + 0x104) = puVar4[7];
      *(undefined4 *)(iVar1 + 0x108) = puVar4[8];
      FUN_005f9ed0((int)&fStack_3c);
      puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_3c,2,param_1[0xd4],unaff_EBP);
      iVar1 = param_1[0xd4];
      *(undefined4 *)(iVar1 + 0xa0) = *puVar4;
      uStack_10 = 0xe;
      (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
      *(undefined4 *)(iVar1 + 0xb8) = puVar4[6];
      (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
      *(undefined4 *)(iVar1 + 0xbc) = puVar4[7];
      *(undefined4 *)(iVar1 + 0xc0) = puVar4[8];
      FUN_005f9ed0((int)&fStack_3c);
      puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_3c,1,(int)param_1,0);
      iVar1 = param_1[0xd4];
      *(undefined4 *)(iVar1 + 0x7c) = *puVar4;
      uStack_10 = 0xf;
      (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
      *(undefined4 *)(iVar1 + 0x94) = puVar4[6];
      (*(code *)**(undefined4 **)(iVar1 + 0x80))();
      *(undefined4 *)(iVar1 + 0x98) = puVar4[7];
      *(undefined4 *)(iVar1 + 0x9c) = puVar4[8];
      FUN_005f9ed0((int)&fStack_38);
      if ((param_1[0xd3] == 0) || (cVar12 == '\0')) {
        puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,0);
        pvStack_c = (void *)0x12;
      }
      else {
        puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,unaff_EBX);
        pvStack_c = (void *)0x10;
        FUN_005f59e0((void *)(param_1[0xd3] + 0xe8),puVar4);
        FUN_005f9ed0((int)&fStack_38);
        puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,unaff_EBX);
        pvStack_c = (void *)0x11;
      }
      FUN_005f59e0((void *)(param_1[0xd4] + 0xc4),puVar4);
      pvStack_c = (void *)0xffffffff;
      FUN_005f9ed0((int)&fStack_38);
      FUN_0073f6e0(param_1,(int *)param_1[0xd4]);
    }
    if (((char)((uint)unaff_EBP >> 0x10) == '\0') || ((char)((uint)unaff_EBP >> 0x18) != cVar12)) {
      if ((param_1[0xd3] == 0) || (cVar12 == '\0')) {
        puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,0);
        iVar1 = param_1[0xd4];
        *(undefined4 *)(iVar1 + 0xc4) = *puVar4;
        pvStack_c = (void *)0x15;
        (**(code **)(*(int *)(iVar1 + 200) + 4))();
        *(undefined4 *)(iVar1 + 0xdc) = puVar4[6];
        (*(code *)**(undefined4 **)(iVar1 + 200))();
        *(undefined4 *)(iVar1 + 0xe0) = puVar4[7];
        *(undefined4 *)(iVar1 + 0xe4) = puVar4[8];
      }
      else {
        puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,unaff_EBX);
        pvStack_c = (void *)0x13;
        FUN_005f59e0((void *)(param_1[0xd3] + 0xe8),puVar4);
        FUN_005f9ed0((int)&fStack_38);
        puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_38,2,(int)param_1,unaff_EBX);
        pvStack_c = (void *)0x14;
        FUN_005f59e0((void *)(param_1[0xd4] + 0xc4),puVar4);
      }
      pvStack_c = (void *)0xffffffff;
      FUN_005f9ed0((int)&fStack_38);
      (**(code **)(*(int *)param_1[0xd4] + 0x50))();
    }
    uVar9 = 1;
    (**(code **)(*(int *)param_1[0xd4] + 0x20))();
    puVar4 = (undefined4 *)FUN_005fbfa0(&fStack_3c,2,(int)param_1,unaff_EBP);
    iVar1 = param_1[0xd2];
    *(undefined4 *)(iVar1 + 0xe8) = *puVar4;
    uStack_10 = 0x16;
    (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
    *(undefined4 *)(iVar1 + 0x100) = puVar4[6];
    (*(code *)**(undefined4 **)(iVar1 + 0xec))();
    *(undefined4 *)(iVar1 + 0x104) = puVar4[7];
    *(undefined4 *)(iVar1 + 0x108) = puVar4[8];
    uStack_10 = 0xffffffff;
    FUN_005f9ed0((int)&fStack_3c);
    puStack_50 = &stack0xffffff84;
    if (local_5c < 0.0 == (local_5c == 0.0)) {
      fVar7 = fVar2 / local_5c;
    }
    else {
      fVar7 = 1.0;
    }
    fVar8 = extraout_ECX_00;
    FUN_00407070(&stack0xffffff84,fVar7);
    FUN_0071ccb0((void *)param_1[0xd4],fVar8);
    pfVar5 = (float *)FUN_0071cc00((void *)param_1[0xd4],&puStack_50);
    fVar6 = FUN_00acf400((double)((local_5c - fVar2) * *pfVar5 + 0.5),uVar9);
    *(float *)(param_1[0xd2] + 0x98) = (float)-fVar6;
  }
  WWindow_Tick(param_1);
  ExceptionList = pvStack_18;
  return;
}


//// FUNCTION FUN_0071fb30 @ 0071fb30 ////

void __fastcall FUN_0071fb30(int *param_1)

{
  (**(code **)(*param_1 + 0x100))();
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_0071fb50 @ 0071fb50 ////

void __thiscall FUN_0071fb50(void *this,int param_1)

{
  *(int *)((int)this + 0x34c) = param_1;
  (**(code **)(*(int *)this + 0x100))();
  (**(code **)(*(int *)this + 0x50))(1);
  *(undefined1 *)((int)this + 0x358) = 1;
  return;
}


//// FUNCTION FUN_0071fb80 @ 0071fb80 ////

void __fastcall FUN_0071fb80(int *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float local_4;
  
  if (((float)param_1[0xd4] != 0.0) && (param_1[0xd4] != 0x3f800000)) {
    if (param_1[0xd1] == 0) {
      fVar2 = (float)param_1[0xd4];
      local_4 = *(float *)(param_1[0xd2] + 0xc0) - (float)param_1[0x30];
      fVar3 = (float10)(**(code **)(*param_1 + 0x10))();
      FUN_00407070(&local_4,(float)((float10)local_4 / (((float10)1.0 - (float10)fVar2) * fVar3)));
      param_1[0xd3] = (int)local_4;
      *(undefined1 *)(param_1 + 0xd6) = 1;
      return;
    }
    fVar2 = *(float *)(param_1[0xd2] + 0x9c);
    local_4 = (float)param_1[0xd4];
    fVar1 = (float)param_1[0x27];
    fVar3 = (float10)(**(code **)(*param_1 + 0x14))();
    FUN_00407070(&local_4,(float)((float10)(fVar2 - fVar1) /
                                 (((float10)1.0 - (float10)local_4) * fVar3)));
    param_1[0xd3] = (int)local_4;
    *(undefined1 *)(param_1 + 0xd6) = 1;
    return;
  }
  param_1[0xd3] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 1;
  return;
}


//// FUNCTION FUN_0071fc90 @ 0071fc90 ////

void __thiscall FUN_0071fc90(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  
  *(float *)((int)this + 0x354) = param_1;
  if (*(int *)((int)this + 0x378) == 1) {
    param_1 = 32.0;
  }
  else if (*(int *)((int)this + 0x378) == 2) {
    param_1 = 24.0;
  }
  else {
    param_1 = 16.0;
  }
  fVar1 = *(float *)((int)this + 0x354);
  if (*(int *)((int)this + 0x344) == 0) {
    fVar2 = (float10)(**(code **)(*(int *)this + 0x10))();
    if ((float10)param_1 <= fVar2 * (float10)fVar1) {
LAB_0071fd3b:
      *(undefined4 *)((int)this + 0x350) = *(undefined4 *)((int)this + 0x354);
      goto LAB_0071fd47;
    }
    fVar2 = (float10)(**(code **)(*(int *)this + 0x10))();
  }
  else {
    fVar2 = (float10)(**(code **)(*(int *)this + 0x14))();
    if ((float10)param_1 <= fVar2 * (float10)fVar1) goto LAB_0071fd3b;
    fVar2 = (float10)(**(code **)(*(int *)this + 0x14))();
  }
  FUN_00407070(&param_1,(float)((float10)param_1 / fVar2));
  *(float *)((int)this + 0x350) = param_1;
LAB_0071fd47:
  (**(code **)(*(int *)this + 0x100))();
  (**(code **)(*(int *)this + 0x50))(1);
  return;
}


//// FUNCTION FUN_0071fd70 @ 0071fd70 ////

void __thiscall FUN_0071fd70(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x34c);
  return;
}


//// FUNCTION FUN_0071fd80 @ 0071fd80 ////

void __fastcall FUN_0071fd80(int *param_1)

{
  float fVar1;
  char cVar2;
  
  fVar1 = 1.0 - (float)param_1[0xd5];
  fVar1 = (fVar1 * (float)param_1[0xd3] + (float)param_1[0xd5]) / fVar1;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[0xd3] = (int)fVar1;
  (**(code **)(*param_1 + 0x100))();
  (**(code **)(*param_1 + 0x50))(1);
  *(undefined1 *)(param_1 + 0xd6) = 1;
  do {
    cVar2 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar2 != '\0');
  return;
}


//// FUNCTION FUN_0071fe00 @ 0071fe00 ////

void __fastcall FUN_0071fe00(int *param_1)

{
  float fVar1;
  char cVar2;
  
  fVar1 = 1.0 - (float)param_1[0xd5];
  fVar1 = (fVar1 * (float)param_1[0xd3] - (float)param_1[0xd5]) / fVar1;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[0xd3] = (int)fVar1;
  (**(code **)(*param_1 + 0x100))();
  (**(code **)(*param_1 + 0x50))(1);
  *(undefined1 *)(param_1 + 0xd6) = 1;
  do {
    cVar2 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar2 != '\0');
  return;
}


//// FUNCTION FUN_007208f0 @ 007208f0 ////

undefined4 * __fastcall FUN_007208f0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *local_38;
  int *piStack_34;
  undefined1 *local_30;
  undefined **local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined ***local_20;
  void *pvStack_1c;
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd36e3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_38 = param_1;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d48e3c;
  param_1[0x14] = &PTR_DAT_00d48e24;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0x3f800000;
  param_1[0xd5] = 0x3f800000;
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  param_1[0x45] = param_1[0x45] | 0xc;
  param_1[0xd3] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  local_30 = (undefined1 *)0x1;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = (undefined4 *)*local_24;
  *(undefined4 ***)(*local_24 + 4) = &local_28;
  *local_24 = (int)&local_28;
  local_14 = 0x41800000;
  local_10 = 0x41800000;
  param_1[0x3a] = 1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_18 = param_1;
  (**(code **)(param_1[0x3b] + 4))();
  param_1[0x40] = local_18;
  (**(code **)param_1[0x3b])();
  param_1[0x41] = local_14;
  param_1[0x42] = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = (int)local_28;
  }
  if (local_28 != (undefined4 *)0x0) {
    local_28[1] = local_24;
  }
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  local_30 = (undefined1 *)0x1;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = (undefined4 *)*local_24;
  *(undefined4 ***)(*local_24 + 4) = &local_28;
  *local_24 = (int)&local_28;
  local_14 = 0x41800000;
  local_10 = 0x41800000;
  param_1[0x31] = 1;
  local_4._0_1_ = 2;
  local_18 = param_1;
  (**(code **)(param_1[0x32] + 4))();
  param_1[0x37] = local_18;
  (**(code **)param_1[0x32])();
  param_1[0x38] = local_14;
  param_1[0x39] = local_10;
  local_4._0_1_ = 0;
  if (local_24 != (int *)0x0) {
    *local_24 = (int)local_28;
  }
  if (local_28 != (undefined4 *)0x0) {
    local_28[1] = local_24;
  }
  piStack_34 = operator_new(0x358);
  local_4._0_1_ = 3;
  if (piStack_34 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_006898b0(piStack_34);
  }
  param_1[0xd2] = piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar2 + 0x18))(7,&LAB_0071fe80,param_1,"SCROLLSLIDER_SLIDER");
  local_30 = &stack0xffffffc4;
  piStack_34 = param_1 + 6;
  local_38 = (undefined4 *)*piStack_34;
  *(undefined4 ***)(*piStack_34 + 4) = &local_38;
  *piStack_34 = (int)&local_38;
  local_24 = (int *)0x0;
  local_20 = (undefined ***)0x0;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  local_14._0_1_ = 4;
  local_28 = param_1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(undefined4 **)(iVar1 + 0x94) = local_28;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(int **)(iVar1 + 0x98) = local_24;
  *(undefined ****)(iVar1 + 0x9c) = local_20;
  if (piStack_34 != (int *)0x0) {
    *piStack_34 = (int)local_38;
  }
  if (local_38 != (undefined4 *)0x0) {
    local_38[1] = piStack_34;
  }
  local_30 = &stack0xffffffc4;
  piStack_34 = param_1 + 6;
  local_38 = (undefined4 *)*piStack_34;
  *(undefined4 ***)(*piStack_34 + 4) = &local_38;
  *piStack_34 = (int)&local_38;
  local_24 = (int *)0x0;
  local_20 = (undefined ***)0x0;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  local_14._0_1_ = 5;
  local_28 = param_1;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(undefined4 **)(iVar1 + 0xdc) = local_28;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(int **)(iVar1 + 0xe0) = local_24;
  *(undefined ****)(iVar1 + 0xe4) = local_20;
  if (piStack_34 != (int *)0x0) {
    *piStack_34 = (int)local_38;
  }
  if (local_38 != (undefined4 *)0x0) {
    local_38[1] = piStack_34;
  }
  local_30 = &stack0xffffffc4;
  piStack_34 = param_1 + 6;
  local_38 = (undefined4 *)*piStack_34;
  *(undefined4 ***)(*piStack_34 + 4) = &local_38;
  *piStack_34 = (int)&local_38;
  local_24 = (int *)0x0;
  local_20 = (undefined ***)0x0;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  local_14._0_1_ = 6;
  local_28 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(undefined4 **)(iVar1 + 0xb8) = local_28;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(int **)(iVar1 + 0xbc) = local_24;
  *(undefined ****)(iVar1 + 0xc0) = local_20;
  if (piStack_34 != (int *)0x0) {
    *piStack_34 = (int)local_38;
  }
  if (local_38 != (undefined4 *)0x0) {
    local_38[1] = piStack_34;
  }
  local_30 = &stack0xffffffc4;
  piStack_34 = param_1 + 6;
  local_38 = (undefined4 *)*piStack_34;
  *(undefined4 ***)(*piStack_34 + 4) = &local_38;
  *piStack_34 = (int)&local_38;
  local_24 = (int *)0x0;
  local_20 = (undefined ***)0x0;
  iVar1 = param_1[0xd2];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  local_14._0_1_ = 7;
  local_28 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(undefined4 **)(iVar1 + 0x100) = local_28;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(int **)(iVar1 + 0x104) = local_24;
  *(undefined ****)(iVar1 + 0x108) = local_20;
  local_14 = (uint)local_14._1_3_ << 8;
  if (piStack_34 != (int *)0x0) {
    *piStack_34 = (int)local_38;
  }
  if (local_38 != (undefined4 *)0x0) {
    local_38[1] = piStack_34;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xd2]);
  FUN_00741630(param_1,0,0x7208a0,param_1,"SCROLLSLIDER_BAR");
  param_1[0xd1] = 0;
  param_1[0xde] = 0;
  ExceptionList = pvStack_1c;
  return param_1;
}


//// FUNCTION FUN_00720dd0 @ 00720dd0 ////

undefined4 * __thiscall FUN_00720dd0(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00720df0 @ 00720df0 ////

undefined4 * __fastcall FUN_00720df0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint unaff_EBP;
  char *unaff_EDI;
  char *_Dest;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  char *pcStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3840;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007208f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d48f5c;
  param_1[0x14] = &PTR_DAT_00d48f44;
  param_1[0xd1] = 1;
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_30 = local_24;
    local_24[0] = local_24[0] & 0xffffff00;
    local_2c = 0;
    local_28 = 0x20;
    local_30 = _malloc(0x20);
    _strncpy((char *)local_30,"ui/scrollbar_vslider.dds",0x18);
    local_2c = 0x18;
    *(char *)(local_30 + 6) = '\0';
    local_4 = CONCAT31(local_4._1_3_,2);
    uStack_68 = 0x720ec5;
    puVar3 = FUN_0069d820(pvVar2,&local_30,0x3f400000,0,0x3f800000,0x3e800000);
  }
  param_1[0xdb] = puVar3;
  local_4 = 0;
  if ((pvVar2 != (void *)0x0) && (0x14 < local_28)) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  (**(code **)(*(int *)param_1[0xdb] + 100))();
  uVar8 = 0;
  uStack_68 = 1;
  uStack_6c = 0x720f19;
  (**(code **)(*(int *)param_1[0xdb] + 0x5c))();
  uStack_6c = 0x41800000;
  pcStack_70 = (char *)0x41800000;
  (**(code **)(*(int *)param_1[0xdb] + 0x74))();
  FUN_0073f6e0(param_1,(int *)param_1[0xdb]);
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    unaff_EBP = 0x20;
    unaff_EDI = _malloc(0x20);
    _strncpy(unaff_EDI,"ui/scrollbar_vslider.dds",0x18);
    unaff_EDI[0x18] = '\0';
    uVar8 = uVar8 | 2;
    local_24[0] = CONCAT31(local_24[0]._1_3_,5);
    puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffffb0,0x3f400000,0x3f400000,0x3f800000,
                          0x3f800000);
  }
  param_1[0xdd] = puVar3;
  local_24[0] = 0;
  if (((uVar8 & 2) != 0) && (0x14 < unaff_EBP)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  (**(code **)(*(int *)param_1[0xdd] + 0x68))();
  uVar8 = 0;
  (**(code **)(*(int *)param_1[0xdd] + 0x5c))();
  (**(code **)(*(int *)param_1[0xdd] + 0x74))();
  FUN_0073f6e0(param_1,(int *)param_1[0xdd]);
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    pcStack_70 = &stack0xffffff9c;
    uStack_6c = 0;
    uStack_68 = 0x20;
    pcStack_70 = _malloc(0x20);
    _strncpy(pcStack_70,"ui/scrollbar_vslider.dds",0x18);
    uStack_6c = 0x18;
    pcStack_70[0x18] = '\0';
    uVar8 = uVar8 | 4;
    puVar3 = FUN_0069d820(pvVar2,&pcStack_70,0x3f400000,0x3e800000,0x3f800000,0x3f400000);
  }
  param_1[0xdc] = puVar3;
  if (((uVar8 & 4) != 0) && (0x14 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_70);
  }
  (**(code **)(*(int *)param_1[0xdc] + 0x78))();
  (**(code **)(*(int *)param_1[0xdc] + 0x5c))();
  uStack_68 = param_1[0xdb];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xdc];
  *(undefined4 *)(iVar1 + 0x7c) = 2;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(uint *)(iVar1 + 0x94) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar7;
  *(undefined4 *)(iVar1 + 0x9c) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xdd];
  pcStack_70 = &stack0xffffff84;
  _Dest = (char *)0x1;
  uVar8 = 0;
  puVar6 = (uint *)0x0;
  if (uStack_68 != 0) {
    puVar6 = (uint *)(uStack_68 + 0x18);
    uVar8 = *puVar6;
    *(undefined1 **)(*puVar6 + 4) = &stack0xffffff88;
    *puVar6 = (uint)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar4 = param_1[0xdc];
  *(undefined4 *)(iVar4 + 0xc4) = 1;
  (**(code **)(*(int *)(iVar4 + 200) + 4))();
  *(uint *)(iVar4 + 0xdc) = uStack_68;
  (*(code *)**(undefined4 **)(iVar4 + 200))();
  *(undefined4 *)(iVar4 + 0xe0) = uVar7;
  *(undefined4 *)(iVar4 + 0xe4) = uVar9;
  if (puVar6 != (uint *)0x0) {
    *puVar6 = uVar8;
  }
  if (uVar8 != 0) {
    *(uint **)(uVar8 + 4) = puVar6;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xdc]);
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar8 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/scrollbar_vslider.dds",0x18);
    _Dest[0x18] = '\0';
    puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffff80,0,0,0x3e800000,0x3e800000);
  }
  param_1[0xd7] = puVar3;
  if ((pvVar2 != (void *)0x0) && (0x14 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar8 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/scrollbar_vslider.dds",0x18);
    _Dest[0x18] = '\0';
    puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffff80,0,0x3e800000,0x3e800000,0x3f400000);
  }
  param_1[0xd8] = puVar3;
  if ((pvVar2 != (void *)0x0) && (0x14 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar8 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/scrollbar_vslider.dds",0x18);
    _Dest[0x18] = '\0';
    puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffff80,0,0x3f400000,0x3e800000,0x3f800000);
  }
  param_1[0xd9] = puVar3;
  if ((pvVar2 != (void *)0x0) && (0x14 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd7];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(uint *)(iVar1 + 0x100) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uVar7;
  *(undefined4 *)(iVar1 + 0x108) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd7];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(uint *)(iVar1 + 0xb8) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar7;
  *(undefined4 *)(iVar1 + 0xc0) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd7];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(uint *)(iVar1 + 0x94) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar7;
  *(undefined4 *)(iVar1 + 0x9c) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd7];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0x41800000;
  uVar9 = 0x41800000;
  iVar1 = param_1[0xd7];
  *(undefined4 *)(iVar1 + 0xc4) = 1;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(uint *)(iVar1 + 0xdc) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uVar7;
  *(undefined4 *)(iVar1 + 0xe4) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd8];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(uint *)(iVar1 + 0x100) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uVar7;
  *(undefined4 *)(iVar1 + 0x108) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd8];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(uint *)(iVar1 + 0xb8) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar7;
  *(undefined4 *)(iVar1 + 0xc0) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd7];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd8];
  *(undefined4 *)(iVar1 + 0x7c) = 2;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(uint *)(iVar1 + 0x94) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar7;
  *(undefined4 *)(iVar1 + 0x9c) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd9];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd8];
  *(undefined4 *)(iVar1 + 0xc4) = 1;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(uint *)(iVar1 + 0xdc) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uVar7;
  *(undefined4 *)(iVar1 + 0xe4) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd9];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(uint *)(iVar1 + 0x100) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uVar7;
  *(undefined4 *)(iVar1 + 0x108) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd9];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(uint *)(iVar1 + 0xb8) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar7;
  *(undefined4 *)(iVar1 + 0xc0) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd9];
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(uint *)(iVar1 + 0xdc) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uVar7;
  *(undefined4 *)(iVar1 + 0xe4) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd9];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0x41800000;
  uVar9 = 0x41800000;
  iVar1 = param_1[0xd9];
  *(undefined4 *)(iVar1 + 0x7c) = 2;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(uint *)(iVar1 + 0x94) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar7;
  *(undefined4 *)(iVar1 + 0x9c) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  *(undefined1 *)(param_1 + 0xda) = 0;
  (**(code **)(*(int *)param_1[0xd2] + 0xc))();
  (**(code **)(*(int *)param_1[0xd2] + 0xc))();
  (**(code **)(*(int *)param_1[0xd2] + 0xc))(param_1[0xd8],1);
  ExceptionList = piVar5;
  return param_1;
}


//// FUNCTION FUN_00721d80 @ 00721d80 ////

undefined4 * __thiscall FUN_00721d80(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00721db0 @ 00721db0 ////

undefined4 * __fastcall FUN_00721db0(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint unaff_EBP;
  char *unaff_EDI;
  char *_Dest;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  char *pcStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd39a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007208f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d4907c;
  param_1[0x14] = &PTR_DAT_00d49064;
  param_1[0xd1] = 0;
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_30 = local_24;
    local_24[0] = local_24[0] & 0xffffff00;
    local_2c = 0;
    local_28 = 0x20;
    local_30 = _malloc(0x20);
    _strncpy((char *)local_30,"ui/scrollbar_slider.dds",0x17);
    local_2c = 0x17;
    *(char *)((int)local_30 + 0x17) = '\0';
    local_4 = CONCAT31(local_4._1_3_,2);
    uStack_68 = 0x721e81;
    puVar3 = FUN_0069d820(pvVar2,&local_30,0,0x3f400000,0x3e800000,0x3f800000);
  }
  param_1[0xdb] = puVar3;
  local_4 = 0;
  if ((pvVar2 != (void *)0x0) && (0x14 < local_28)) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  (**(code **)(*(int *)param_1[0xdb] + 100))();
  uVar8 = 0;
  uStack_68 = 1;
  uStack_6c = 0x721ed5;
  (**(code **)(*(int *)param_1[0xdb] + 0x5c))();
  uStack_6c = 0x41800000;
  pcStack_70 = (char *)0x41800000;
  (**(code **)(*(int *)param_1[0xdb] + 0x74))();
  FUN_0073f6e0(param_1,(int *)param_1[0xdb]);
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    unaff_EBP = 0x20;
    unaff_EDI = _malloc(0x20);
    _strncpy(unaff_EDI,"ui/scrollbar_slider.dds",0x17);
    unaff_EDI[0x17] = '\0';
    uVar8 = uVar8 | 2;
    local_24[0] = CONCAT31(local_24[0]._1_3_,5);
    puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffffb0,0x3f400000,0x3f400000,0x3f800000,
                          0x3f800000);
  }
  param_1[0xdd] = puVar3;
  local_24[0] = 0;
  if (((uVar8 & 2) != 0) && (0x14 < unaff_EBP)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  (**(code **)(*(int *)param_1[0xdd] + 100))();
  uVar8 = 0;
  (**(code **)(*(int *)param_1[0xdd] + 0x60))();
  (**(code **)(*(int *)param_1[0xdd] + 0x74))();
  FUN_0073f6e0(param_1,(int *)param_1[0xdd]);
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    pcStack_70 = &stack0xffffff9c;
    uStack_6c = 0;
    uStack_68 = 0x20;
    pcStack_70 = _malloc(0x20);
    _strncpy(pcStack_70,"ui/scrollbar_slider.dds",0x17);
    uStack_6c = 0x17;
    pcStack_70[0x17] = '\0';
    uVar8 = uVar8 | 4;
    puVar3 = FUN_0069d820(pvVar2,&pcStack_70,0x3e800000,0x3f400000,0x3f400000,0x3f800000);
  }
  param_1[0xdc] = puVar3;
  if (((uVar8 & 4) != 0) && (0x14 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_70);
  }
  (**(code **)(*(int *)param_1[0xdc] + 0x7c))();
  (**(code **)(*(int *)param_1[0xdc] + 100))();
  uStack_68 = param_1[0xdb];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xdc];
  *(undefined4 *)(iVar1 + 0xa0) = 2;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(uint *)(iVar1 + 0xb8) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar7;
  *(undefined4 *)(iVar1 + 0xc0) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xdd];
  pcStack_70 = &stack0xffffff84;
  _Dest = (char *)0x1;
  uVar8 = 0;
  puVar6 = (uint *)0x0;
  if (uStack_68 != 0) {
    puVar6 = (uint *)(uStack_68 + 0x18);
    uVar8 = *puVar6;
    *(undefined1 **)(*puVar6 + 4) = &stack0xffffff88;
    *puVar6 = (uint)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar4 = param_1[0xdc];
  *(undefined4 *)(iVar4 + 0xe8) = 1;
  (**(code **)(*(int *)(iVar4 + 0xec) + 4))();
  *(uint *)(iVar4 + 0x100) = uStack_68;
  (*(code *)**(undefined4 **)(iVar4 + 0xec))();
  *(undefined4 *)(iVar4 + 0x104) = uVar7;
  *(undefined4 *)(iVar4 + 0x108) = uVar9;
  if (puVar6 != (uint *)0x0) {
    *puVar6 = uVar8;
  }
  if (uVar8 != 0) {
    *(uint **)(uVar8 + 4) = puVar6;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0xdc]);
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar8 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/scrollbar_slider.dds",0x17);
    _Dest[0x17] = '\0';
    puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffff80,0,0,0x3e800000,0x3e800000);
  }
  param_1[0xd7] = puVar3;
  if ((pvVar2 != (void *)0x0) && (0x14 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar8 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/scrollbar_slider.dds",0x17);
    _Dest[0x17] = '\0';
    puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffff80,0x3e800000,0,0x3f400000,0x3e800000);
  }
  param_1[0xd8] = puVar3;
  if ((pvVar2 != (void *)0x0) && (0x14 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  pvVar2 = operator_new(0x360);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar8 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/scrollbar_slider.dds",0x17);
    _Dest[0x17] = '\0';
    puVar3 = FUN_0069d820(pvVar2,(undefined4 *)&stack0xffffff80,0x3f400000,0,0x3f800000,0x3e800000);
  }
  param_1[0xd9] = puVar3;
  if ((pvVar2 != (void *)0x0) && (0x14 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_68 = param_1[0xd7];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0x41800000;
  uVar9 = 0x41800000;
  iVar1 = param_1[0xd7];
  *(undefined4 *)(iVar1 + 0xe8) = 1;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(uint *)(iVar1 + 0x100) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uVar7;
  *(undefined4 *)(iVar1 + 0x108) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd7];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(uint *)(iVar1 + 0xb8) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar7;
  *(undefined4 *)(iVar1 + 0xc0) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd7];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(uint *)(iVar1 + 0x94) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar7;
  *(undefined4 *)(iVar1 + 0x9c) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd7];
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(uint *)(iVar1 + 0xdc) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uVar7;
  *(undefined4 *)(iVar1 + 0xe4) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd9];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd8];
  *(undefined4 *)(iVar1 + 0xe8) = 1;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(uint *)(iVar1 + 0x100) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uVar7;
  *(undefined4 *)(iVar1 + 0x108) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd7];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd8];
  *(undefined4 *)(iVar1 + 0xa0) = 2;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(uint *)(iVar1 + 0xb8) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar7;
  *(undefined4 *)(iVar1 + 0xc0) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd8];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(uint *)(iVar1 + 0x94) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar7;
  *(undefined4 *)(iVar1 + 0x9c) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd8];
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(uint *)(iVar1 + 0xdc) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uVar7;
  *(undefined4 *)(iVar1 + 0xe4) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd9];
  *(undefined4 *)(iVar1 + 0xe8) = 2;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(uint *)(iVar1 + 0x100) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = uVar7;
  *(undefined4 *)(iVar1 + 0x108) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd9];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0x41800000;
  uVar9 = 0x41800000;
  iVar1 = param_1[0xd9];
  *(undefined4 *)(iVar1 + 0xa0) = 2;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(uint *)(iVar1 + 0xb8) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = uVar7;
  *(undefined4 *)(iVar1 + 0xc0) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd9];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(uint *)(iVar1 + 0x94) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = uVar7;
  *(undefined4 *)(iVar1 + 0x9c) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  uStack_68 = param_1[0xd2];
  pcStack_70 = &stack0xffffff84;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  if (uStack_68 != 0) {
    piVar5 = (int *)(uStack_68 + 0x18);
    iVar4 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffff88;
    *piVar5 = (int)&stack0xffffff88;
  }
  uVar7 = 0;
  uVar9 = 0;
  iVar1 = param_1[0xd9];
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(uint *)(iVar1 + 0xdc) = uStack_68;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = uVar7;
  *(undefined4 *)(iVar1 + 0xe4) = uVar9;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  *(undefined1 *)(param_1 + 0xda) = 0;
  (**(code **)(*(int *)param_1[0xd2] + 0xc))();
  (**(code **)(*(int *)param_1[0xd2] + 0xc))();
  (**(code **)(*(int *)param_1[0xd2] + 0xc))(param_1[0xd8],1);
  ExceptionList = piVar5;
  return param_1;
}


//// FUNCTION FUN_00722d30 @ 00722d30 ////

undefined4 * __thiscall FUN_00722d30(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00723260 @ 00723260 ////

undefined4 * __fastcall FUN_00723260(undefined4 *param_1)

{
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d49188;
  return param_1;
}


//// FUNCTION FUN_00723280 @ 00723280 ////

int * __thiscall FUN_00723280(void *this,byte param_1)

{
  FUN_005e7000(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007232a0 @ 007232a0 ////

void __fastcall FUN_007232a0(int *param_1)

{
  FUN_005e6f20((undefined4 *)param_1[0x10b]);
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_007232d0 @ 007232d0 ////

undefined4 * __thiscall FUN_007232d0(void *this,byte param_1)

{
  thunk_FUN_0053d4f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00723300 @ 00723300 ////

undefined4 __fastcall FUN_00723300(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  void *pvVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3a2b;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)param_1[0xf0];
  if (puVar1 == (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    puVar1 = operator_new(0x54c);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_00658480(puVar1);
    }
    pvVar6 = (void *)0x0;
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x70))(param_1);
    iVar3 = (**(code **)(*param_1 + 0xfc))();
    iVar3 = FUN_004df220(iVar3);
    cVar5 = *(char *)(iVar3 + 0x4cd);
    iVar3 = (**(code **)(*param_1 + 0xfc))();
    iVar3 = FUN_004df220(iVar3);
    FUN_0065d0c0(piVar2,*(char *)(iVar3 + 0x4cc),cVar5);
    (**(code **)(*param_1 + 0xc))(piVar2,1);
    (**(code **)(param_1[0xeb] + 4))();
    param_1[0xf0] = (int)piVar2;
    uVar4 = (**(code **)param_1[0xeb])();
    ExceptionList = pvVar6;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  piVar2 = puVar1 + 0x12;
  ExceptionList = &pvStack_c;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    (**(code **)*puVar1)(1);
  }
  (**(code **)(param_1[0xeb] + 4))();
  param_1[0xf0] = 0;
  uVar4 = (**(code **)param_1[0xeb])();
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION WShotFiddler_Tick @ 00723550 ////

void __fastcall WShotFiddler_Tick(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  float10 fVar5;
  int *piStack_4;
  
  piStack_4 = param_1;
  WWindow_Tick(param_1);
  (**(code **)(*(int *)param_1[0x103] + 0xc))();
  piStack_4 = (int *)0x0;
  if (param_1[0xd8] != 0) {
    iVar3 = FUN_004df240(param_1[0xd8]);
    if (iVar3 != 0) {
      pvVar4 = (void *)FUN_004df240(param_1[0xd8]);
      fVar5 = FUN_00977920(pvVar4);
      FUN_00407070(&piStack_4,(float)fVar5);
    }
  }
  iVar3 = *(int *)param_1[0x102];
  piVar1 = (int *)param_1[0xfc];
  fVar5 = (float10)(**(code **)(*piVar1 + 0x10))();
  (**(code **)(iVar3 + 0x5c))(1,piVar1,(float)((fVar5 - (float10)48.0) * (float10)(float)piStack_4))
  ;
  do {
    cVar2 = (**(code **)(*(int *)param_1[0x102] + 0x50))(1);
  } while (cVar2 != '\0');
  return;
}


//// FUNCTION FUN_00723600 @ 00723600 ////

void FUN_00723600(void)

{
  void *pvVar1;
  int *piVar2;
  ulonglong uVar3;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [9];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3a4b;
  local_c = ExceptionList;
  if (DAT_0104dff8 != 0) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    ExceptionList = &local_c;
    uVar3 = FUN_00acd42c();
    local_3c = (undefined4)uVar3;
    uVar3 = FUN_00acd42c();
    local_38 = (undefined4)uVar3;
    uVar3 = FUN_00acd42c();
    local_44 = (int)uVar3;
    uVar3 = FUN_00acd42c();
    local_40 = (undefined4)uVar3;
    pvVar1 = operator_new(0x30);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_009a5a30(pvVar1,&local_44);
    }
    *(int **)(DAT_0104dff8 + 0x348) = piVar2;
    local_4 = 0xffffffff;
    pvVar1 = (void *)FUN_004df240(*(int *)(DAT_0104dff8 + 0x360));
    if (pvVar1 != (void *)0x0) {
      local_34 = 0;
      local_30[0] = 0.0;
      local_30[1] = 0.0;
      local_30[2] = 0.0;
      local_30[3] = 0.0;
      local_30[4] = 0.0;
      local_30[5] = 0.0;
      local_30[7] = 0.0;
      local_30[8] = 0.0;
      local_30[6] = 1.2217306;
      FUN_00971f40(pvVar1,&local_34);
      FUN_0040b490((void *)((int)pvVar1 + 0x90),local_30);
      FUN_0040b490((void *)((int)pvVar1 + 0x90),local_30 + 3);
      FUN_00a25410((int)&local_34);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00723800 @ 00723800 ////

void __fastcall FUN_00723800(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *this;
  int *piVar4;
  
  iVar2 = FUN_004de100(*(int *)(param_1 + 0x360));
  iVar2 = *(int *)(iVar2 + 8);
  iVar3 = FUN_004de100(*(int *)(param_1 + 0x360));
  if (iVar2 != iVar3 + 0x14) {
    do {
      iVar3 = FUN_0048c950(*(int *)(iVar2 + 8));
      if (iVar3 != 0) {
        cVar1 = '\0';
        this = (void *)FUN_0048c950(*(int *)(iVar2 + 8));
        iVar3 = FUN_0059c6e0(this,cVar1);
        cVar1 = FUN_00430e40(iVar3);
        if (cVar1 != '\0') {
          piVar4 = (int *)FUN_0048c950(*(int *)(iVar2 + 8));
          (**(code **)(*piVar4 + 300))(0);
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
      iVar3 = FUN_004de100(*(int *)(param_1 + 0x360));
    } while (iVar2 != iVar3 + 0x14);
  }
  return;
}


//// FUNCTION FUN_00723880 @ 00723880 ////

void __fastcall FUN_00723880(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *this;
  int *piVar4;
  
  iVar2 = FUN_004de100(*(int *)(param_1 + 0x360));
  iVar2 = *(int *)(iVar2 + 8);
  iVar3 = FUN_004de100(*(int *)(param_1 + 0x360));
  if (iVar2 != iVar3 + 0x14) {
    do {
      iVar3 = FUN_0048c950(*(int *)(iVar2 + 8));
      if (iVar3 != 0) {
        cVar1 = '\0';
        this = (void *)FUN_0048c950(*(int *)(iVar2 + 8));
        iVar3 = FUN_0059c6e0(this,cVar1);
        cVar1 = FUN_00430e40(iVar3);
        if (cVar1 != '\0') {
          piVar4 = (int *)FUN_0048c950(*(int *)(iVar2 + 8));
          (**(code **)(*piVar4 + 300))(1);
        }
      }
      iVar2 = *(int *)(iVar2 + 4);
      iVar3 = FUN_004de100(*(int *)(param_1 + 0x360));
    } while (iVar2 != iVar3 + 0x14);
  }
  return;
}


//// FUNCTION FUN_00723900 @ 00723900 ////

void __thiscall FUN_00723900(void *this,int param_1)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  void *apvStack_20 [2];
  uint uStack_18;
  
  puVar2 = *(undefined4 **)((int)this + 0x3c0);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 0x3ac) + 4))();
    *(undefined4 *)((int)this + 0x3c0) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x3ac))();
  }
  if (*(int *)((int)this + 0x360) != 0) {
    this_00 = (void *)FUN_004df240(*(int *)((int)this + 0x360));
    if (this_00 != (void *)0x0) {
      puVar2 = FUN_009f4620(apvStack_20,param_1);
      FUN_004015d0((void *)(*(int *)((int)this + 0x360) + 0x100),(char *)*puVar2,puVar2[1]);
      if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_20[0]);
      }
      FUN_00a00ea0(this_00,*(char **)(*(int *)((int)this + 0x360) + 0x100));
    }
  }
  return;
}


//// FUNCTION FUN_007239b0 @ 007239b0 ////

void __fastcall FUN_007239b0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd3ae6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d491b4;
  param_1[0x14] = &PTR_FUN_00d4919c;
  bVar5 = 1;
  iVar3 = 3;
  local_4 = 9;
  puVar4 = param_1;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f9b70(pvVar1,iVar3,(int)puVar4,bVar5);
  pvVar1 = (void *)FUN_004df240(param_1[0xd8]);
  if (pvVar1 != (void *)0x0) {
    FUN_009765c0(pvVar1,0);
    FUN_00977590(pvVar1);
    FUN_00978cd0(pvVar1,*(uint *)((int)pvVar1 + 0x74),1);
  }
  FUN_004237f0(DAT_00f87b04);
  if ((undefined4 *)param_1[0x55] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x55] = param_1[0x54];
  }
  if (param_1[0x54] != 0) {
    *(undefined4 *)(param_1[0x54] + 4) = param_1[0x55];
  }
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_0071bd00();
  DAT_00f87aa8 = 0;
  FUN_00418990(DAT_00f87aa0);
  puVar4 = (undefined4 *)param_1[0xea];
  if (puVar4 != (undefined4 *)0x0) {
    piVar2 = puVar4 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(1);
    }
    (**(code **)(param_1[0xe5] + 4))();
    param_1[0xea] = 0;
    (**(code **)param_1[0xe5])();
  }
  iVar3 = FUN_006a36e0();
  if (iVar3 != 0) {
    piVar2 = (int *)FUN_006a36e0();
    (**(code **)(*piVar2 + 0x20))(1);
  }
  FUN_00723880((int)param_1);
  puVar4 = (undefined4 *)param_1[0x103];
  if (puVar4 != (undefined4 *)0x0) {
    piVar2 = puVar4 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(1);
    }
    param_1[0x103] = 0;
  }
  DAT_010b9550 = 0;
  FUN_00566c20(DAT_0104cdf4,param_1[0x104]);
  piVar2 = (int *)param_1[0x10b];
  if (piVar2 != (int *)0x0) {
    FUN_005e7000(piVar2);
                    /* WARNING: Subroutine does not return */
    _free(piVar2);
  }
  param_1[0x10b] = 0;
  param_1[0x105] = &PTR_FUN_00d2dc34;
  if ((undefined4 *)param_1[0x107] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x107] = param_1[0x106];
  }
  if (param_1[0x106] != 0) {
    *(undefined4 *)(param_1[0x106] + 4) = param_1[0x107];
  }
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x10a] = 0;
  if ((undefined4 *)param_1[0x107] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x107] = param_1[0x106];
  }
  if (param_1[0x106] != 0) {
    *(undefined4 *)(param_1[0x106] + 4) = param_1[0x107];
  }
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0xfd] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xff] = param_1[0xfe];
  }
  if (param_1[0xfe] != 0) {
    *(undefined4 *)(param_1[0xfe] + 4) = param_1[0xff];
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x102] = 0;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xff] = param_1[0xfe];
  }
  if (param_1[0xfe] != 0) {
    *(undefined4 *)(param_1[0xfe] + 4) = param_1[0xff];
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0xf7] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xf9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf9] = param_1[0xf8];
  }
  if (param_1[0xf8] != 0) {
    *(undefined4 *)(param_1[0xf8] + 4) = param_1[0xf9];
  }
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfc] = 0;
  if ((undefined4 *)param_1[0xf9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf9] = param_1[0xf8];
  }
  if (param_1[0xf8] != 0) {
    *(undefined4 *)(param_1[0xf8] + 4) = param_1[0xf9];
  }
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xf1] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xf3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf3] = param_1[0xf2];
  }
  if (param_1[0xf2] != 0) {
    *(undefined4 *)(param_1[0xf2] + 4) = param_1[0xf3];
  }
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  if ((undefined4 *)param_1[0xf3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf3] = param_1[0xf2];
  }
  if (param_1[0xf2] != 0) {
    *(undefined4 *)(param_1[0xf2] + 4) = param_1[0xf3];
  }
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xeb] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xed] = param_1[0xec];
  }
  if (param_1[0xec] != 0) {
    *(undefined4 *)(param_1[0xec] + 4) = param_1[0xed];
  }
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xe5] = &PTR_FUN_00d2db94;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xdf] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xe1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe1] = param_1[0xe0];
  }
  if (param_1[0xe0] != 0) {
    *(undefined4 *)(param_1[0xe0] + 4) = param_1[0xe1];
  }
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  if ((undefined4 *)param_1[0xe1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe1] = param_1[0xe0];
  }
  if (param_1[0xe0] != 0) {
    *(undefined4 *)(param_1[0xe0] + 4) = param_1[0xe1];
  }
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xd9] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdb] = param_1[0xda];
  }
  if (param_1[0xda] != 0) {
    *(undefined4 *)(param_1[0xda] + 4) = param_1[0xdb];
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xde] = 0;
  if ((undefined4 *)param_1[0xdb] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdb] = param_1[0xda];
  }
  if (param_1[0xda] != 0) {
    *(undefined4 *)(param_1[0xda] + 4) = param_1[0xdb];
  }
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd3] = &PTR_FUN_00d1ec60;
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
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00723f40 @ 00723f40 ////

undefined4 * __thiscall FUN_00723f40(void *this,byte param_1)

{
  FUN_007239b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION WShotFiddler_Constructor @ 00723f60 ////

/* WARNING: Removing unreachable block (ram,0x0072523c) */
/* WARNING: Removing unreachable block (ram,0x00724afb) */

undefined *** __thiscall WShotFiddler_Constructor(void *this,undefined **param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  size_t sVar11;
  char *pcVar12;
  void *pvVar13;
  int *piVar14;
  char *pcVar15;
  byte *pbVar16;
  char *pcVar17;
  byte *pbVar18;
  bool bVar19;
  float10 fVar20;
  void *pvVar21;
  uint *puStack_220;
  undefined4 uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_1fc;
  char *pcStack_1e0;
  void *pvStack_1dc;
  int *piStack_1d8;
  undefined4 uVar22;
  float *pfVar23;
  undefined4 uVar24;
  uint *puVar25;
  undefined1 *puStack_1b0;
  uint uStack_1ac;
  byte *pbStack_1a8;
  float _Size;
  undefined4 *puStack_180;
  undefined ***_Dest;
  void *pvStack_168;
  undefined **ppuStack_164;
  uint uStack_160;
  uint *puStack_15c;
  undefined ***pppuStack_158;
  code *pcStack_154;
  undefined1 **_Dest_00;
  undefined1 *puStack_130;
  void *pvStack_124;
  undefined1 *puStack_118;
  undefined **ppuStack_f4;
  void **_Dest_01;
  undefined ***pppuStack_e8;
  void *pvStack_e0;
  int iVar26;
  int iVar27;
  byte bVar28;
  uint uVar29;
  void *pvVar30;
  uint *local_b8;
  undefined4 uStack_b4;
  undefined1 *puStack_b0;
  uint uStack_ac;
  undefined **appuStack_a8 [15];
  undefined4 uStack_6c;
  undefined1 uStack_64;
  undefined1 uStack_54;
  undefined1 uStack_4c;
  undefined1 uStack_3c;
  undefined1 uStack_34;
  undefined1 uStack_24;
  undefined1 uStack_1c;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Confirmed via RTTI COL walk (vtable at 0xD491B4 -> COL at 0xDC383C -> TD
                       0xE584C0 ".?AVWShotFiddler@TM@@") -- NOT the movie player/viewer despite
                       surface similarity (playbar, slider, star rating). This is a shot
                       preview-and-adjust tool: builds a star-rating display via
                       CProject_GetQualityWithAwardBoost, a backdrop-chooser button
                       (sf_choosebackdrop), playback transport (ui/mov_playbar.dds + ui/slider.dds),
                       and scans the current shot's track list for "ai_"-prefixed or "endshoot" cues
                       to drive camera state transitions. Likely used during post-production/AMM to
                       fine-tune an individual shot with live preview. The real TM::WMoviePlayer
                       class exists in the binary (confirmed via RTTI string
                       ".?AVWMoviePlayer@TM@@") but has not been located/traced yet -- good next
                       target for the "how do you watch a finished movie" thread. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3ebb;
  pvStack_c = ExceptionList;
  local_b8 = (uint *)0x0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d491b4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4919c;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  piVar5 = (int *)((int)this + 0x350);
  *(undefined4 *)((int)this + 0x358) = 0;
  *piVar5 = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 **)((int)this + 0x358) = (undefined4 *)((int)this + 0x34c);
  *(undefined4 *)((int)this + 0x34c) = &PTR_FUN_00d1ec60;
  *(undefined ***)((int)this + 0x360) = param_1;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1 + 6;
    *(undefined ***)((int)this + 0x354) = ppuVar1;
    *piVar5 = (int)*ppuVar1;
    *(int **)(*ppuVar1 + 4) = piVar5;
    *ppuVar1 = (undefined *)piVar5;
  }
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 **)((int)this + 0x370) = (undefined4 *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x364) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 **)((int)this + 0x388) = (undefined4 *)((int)this + 0x37c);
  *(undefined4 *)((int)this + 0x37c) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 **)((int)this + 0x3a0) = (undefined4 *)((int)this + 0x394);
  *(undefined4 *)((int)this + 0x394) = &PTR_FUN_00d2db94;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 **)((int)this + 0x3b8) = (undefined4 *)((int)this + 0x3ac);
  *(undefined4 *)((int)this + 0x3ac) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 **)((int)this + 0x3d0) = (undefined4 *)((int)this + 0x3c4);
  *(undefined4 *)((int)this + 0x3c4) = &PTR_FUN_00d172a0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 **)((int)this + 1000) = (undefined4 *)((int)this + 0x3dc);
  *(undefined4 *)((int)this + 0x3dc) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 **)((int)this + 0x400) = (undefined4 *)((int)this + 0x3f4);
  *(undefined4 *)((int)this + 0x3f4) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 **)((int)this + 0x420) = (undefined4 *)((int)this + 0x414);
  *(undefined4 *)((int)this + 0x414) = &PTR_FUN_00d2dc34;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x410) = *(undefined4 *)((int)DAT_0104cdf4 + 0x38);
  local_4 = 9;
  FUN_00566c20(DAT_0104cdf4,0x3f800000);
  FUN_0071c290();
  pvVar30 = (void *)0x0;
  iVar4 = FUN_0071b2b0();
  FUN_00741d80(this,iVar4,pvVar30);
  piVar5 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar5 + 0xc))();
  bVar28 = 1;
  iVar4 = 3;
  pvStack_e0 = (void *)0x724116;
  pvVar30 = this;
  pvVar6 = (void *)FUN_004f3b20();
  pvStack_e0 = (void *)0x72411d;
  FUN_004f98f0(pvVar6,iVar4,(int)pvVar30,bVar28);
  FUN_00418990(DAT_00f87aa0);
  uVar29 = 0x5f2;
  iVar4 = FUN_004df4a0(*(int *)((int)this + 0x360));
  piVar5 = (int *)FUN_004b5850(iVar4);
  Camera_StateMachine_Transition(DAT_00f87aa0,piVar5,uVar29);
  puVar7 = operator_new(0x50);
  pvStack_c._0_1_ = 10;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_0053d690(puVar7);
    *puVar7 = &PTR_FUN_00d49188;
  }
  pvStack_c._0_1_ = 9;
  *(undefined4 **)((int)this + 0x40c) = puVar7;
  FUN_0078ba40();
  puVar7 = operator_new(0x344);
  pvStack_c._0_1_ = 0xb;
  if (puVar7 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_007432f0(puVar7);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,9);
  (**(code **)(*piVar5 + 0x7c))();
  pvStack_e0 = (void *)0x1;
  (**(code **)(*piVar5 + 100))();
  local_b8 = (uint *)&stack0xffffff3c;
  piVar8 = (int *)((int)this + 0x18);
  iVar4 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xffffff40;
  *piVar8 = (int)&stack0xffffff40;
  uStack_ac = 0;
  appuStack_a8[0] = (undefined **)0x0;
  piVar5[0x28] = 1;
  uStack_1c = 0xc;
  puStack_b0 = this;
  (**(code **)(piVar5[0x29] + 4))();
  piVar5[0x2e] = (int)puStack_b0;
  (**(code **)piVar5[0x29])();
  piVar5[0x2f] = uStack_ac;
  piVar5[0x30] = (int)appuStack_a8[0];
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar8;
  }
  local_b8 = (uint *)&stack0xffffff3c;
  piVar8 = (int *)((int)this + 0x18);
  iVar4 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xffffff40;
  *piVar8 = (int)&stack0xffffff40;
  uStack_ac = 0;
  appuStack_a8[0] = (undefined **)0x0;
  piVar5[0x3a] = 2;
  uStack_1c = 0xd;
  puStack_b0 = this;
  (**(code **)(piVar5[0x3b] + 4))();
  piVar5[0x40] = (int)puStack_b0;
  (**(code **)piVar5[0x3b])();
  piVar5[0x41] = uStack_ac;
  piVar5[0x42] = (int)appuStack_a8[0];
  uStack_1c = 9;
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar8;
  }
  pppuStack_e8 = (undefined ***)0x724337;
  puVar7 = operator_new(0x50);
  uStack_1c = 0xe;
  if (puVar7 != (undefined4 *)0x0) {
    FUN_005e4870(puVar7);
  }
  uStack_1c = 9;
  pppuStack_e8 = (undefined ***)0x724368;
  (**(code **)(*piVar5 + 0xa0))();
  pppuStack_e8 = (undefined ***)0x724372;
  piVar8 = (int *)(**(code **)(*piVar5 + 0xa4))();
  pppuStack_e8 = appuStack_a8;
  appuStack_a8[0] = (undefined **)0xff000000;
  (**(code **)(*piVar8 + 0xc))();
  ppuStack_f4 = (undefined **)0x724399;
  FUN_0073f6e0(this,piVar5);
  puVar7 = operator_new(0x344);
  uStack_24 = 0xf;
  if (puVar7 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_007432f0(puVar7);
  }
  uStack_24 = 9;
  (**(code **)(*piVar5 + 0x7c))();
  ppuStack_f4 = this;
  (**(code **)(*piVar5 + 0x68))();
  piVar8 = (int *)((int)this + 0x18);
  pvStack_e0 = (void *)0x1;
  iVar4 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xffffff28;
  *piVar8 = (int)&stack0xffffff28;
  piVar5[0x28] = 1;
  uStack_34 = 0x10;
  (**(code **)(piVar5[0x29] + 4))();
  piVar5[0x2e] = (int)this;
  (**(code **)piVar5[0x29])();
  piVar5[0x2f] = 0;
  piVar5[0x30] = 0;
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar8;
  }
  piVar8 = (int *)((int)this + 0x18);
  pvStack_e0 = (void *)0x2;
  iVar4 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xffffff28;
  *piVar8 = (int)&stack0xffffff28;
  piVar5[0x3a] = 2;
  uStack_34 = 0x11;
  (**(code **)(piVar5[0x3b] + 4))();
  piVar5[0x40] = (int)this;
  (**(code **)piVar5[0x3b])();
  piVar5[0x41] = 0;
  piVar5[0x42] = 0;
  uStack_34 = 9;
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar8;
  }
  puVar7 = operator_new(0x50);
  uStack_34 = 0x12;
  if (puVar7 != (undefined4 *)0x0) {
    FUN_005e4870(puVar7);
  }
  uStack_34 = 9;
  (**(code **)(*piVar5 + 0xa0))();
  piVar8 = (int *)(**(code **)(*piVar5 + 0xa4))();
  (**(code **)(*piVar8 + 0xc))();
  FUN_0073f6e0(this,piVar5);
  puVar9 = operator_new(0x344);
  uStack_3c = 0x13;
  if (puVar9 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_007432f0(puVar9);
  }
  uStack_3c = 9;
  (**(code **)(*piVar5 + 0x78))();
  (**(code **)(*piVar5 + 0x5c))();
  piVar8 = (int *)((int)this + 0x18);
  pppuStack_e8 = &ppuStack_f4;
  ppuStack_f4 = &PTR_FUN_00d18c2c;
  iVar4 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xffffff10;
  *piVar8 = (int)&stack0xffffff10;
  iVar26 = 0;
  iVar27 = 0;
  piVar5[0x1f] = 1;
  uStack_4c = 0x14;
  pvStack_e0 = this;
  (**(code **)(piVar5[0x20] + 4))();
  piVar5[0x25] = (int)pvStack_e0;
  (**(code **)piVar5[0x20])();
  piVar5[0x26] = iVar26;
  piVar5[0x27] = iVar27;
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar8;
  }
  pppuStack_e8 = &ppuStack_f4;
  _Dest_01 = (void **)((int)this + 0x18);
  ppuStack_f4 = &PTR_FUN_00d18c2c;
  pvVar30 = *_Dest_01;
  *(undefined1 **)((int)*_Dest_01 + 4) = &stack0xffffff10;
  *_Dest_01 = &stack0xffffff10;
  iVar4 = 0;
  iVar26 = 0;
  piVar5[0x31] = 2;
  uStack_4c = 0x15;
  pvStack_e0 = this;
  (**(code **)(piVar5[0x32] + 4))();
  piVar5[0x37] = (int)pvStack_e0;
  (**(code **)piVar5[0x32])();
  piVar5[0x38] = iVar4;
  piVar5[0x39] = iVar26;
  uStack_4c = 9;
  if (_Dest_01 != (void **)0x0) {
    *_Dest_01 = pvVar30;
  }
  if (pvVar30 != (void *)0x0) {
    *(void ***)((int)pvVar30 + 4) = _Dest_01;
  }
  puStack_118 = (undefined1 *)0x72475d;
  puVar9 = operator_new(0x50);
  uStack_4c = 0x16;
  if (puVar9 != (undefined4 *)0x0) {
    FUN_005e4870(puVar9);
  }
  uStack_4c = 9;
  puStack_118 = (undefined1 *)0x72478e;
  (**(code **)(*piVar5 + 0xa0))();
  puStack_118 = (undefined1 *)0x724798;
  piVar8 = (int *)(**(code **)(*piVar5 + 0xa4))();
  puStack_118 = &stack0xffffff28;
  (**(code **)(*piVar8 + 0xc))();
  pvStack_124 = (void *)0x7247bf;
  FUN_0073f6e0(this,piVar5);
  puVar9 = operator_new(0x344);
  uStack_54 = 0x17;
  if (puVar9 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_007432f0(puVar9);
  }
  uStack_54 = 9;
  (**(code **)(*piVar5 + 0x78))();
  uVar29 = 0;
  pvStack_124 = this;
  (**(code **)(*piVar5 + 0x60))();
  piVar8 = (int *)((int)this + 0x18);
  iVar4 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xfffffef8;
  *piVar8 = (int)&stack0xfffffef8;
  ppuStack_f4 = (undefined **)0x0;
  iVar26 = 0;
  piVar5[0x1f] = 1;
  uStack_64 = 0x18;
  (**(code **)(piVar5[0x20] + 4))();
  piVar5[0x25] = (int)this;
  (**(code **)piVar5[0x20])();
  piVar5[0x26] = (int)ppuStack_f4;
  piVar5[0x27] = iVar26;
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar8;
  }
  piVar8 = (int *)((int)this + 0x18);
  iVar4 = *piVar8;
  *(undefined1 **)(*piVar8 + 4) = &stack0xfffffef8;
  *piVar8 = (int)&stack0xfffffef8;
  ppuStack_f4 = (undefined **)0x0;
  iVar26 = 0;
  piVar5[0x31] = 2;
  uStack_64 = 0x19;
  (**(code **)(piVar5[0x32] + 4))();
  piVar5[0x37] = (int)this;
  (**(code **)piVar5[0x32])();
  piVar5[0x38] = (int)ppuStack_f4;
  piVar5[0x39] = iVar26;
  uStack_64 = 9;
  if (piVar8 != (int *)0x0) {
    *piVar8 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar8;
  }
  puStack_130 = (undefined1 *)0x724977;
  puVar9 = operator_new(0x50);
  uStack_64 = 0x1a;
  if (puVar9 != (undefined4 *)0x0) {
    FUN_005e4870(puVar9);
  }
  uStack_64 = 9;
  puStack_130 = (undefined1 *)0x7249a8;
  (**(code **)(*piVar5 + 0xa0))();
  puStack_130 = (undefined1 *)0x7249b2;
  piVar8 = (int *)(**(code **)(*piVar5 + 0xa4))();
  puStack_130 = &stack0xffffff10;
  (**(code **)(*piVar8 + 0xc))();
  FUN_0073f6e0(this,piVar5);
  pvVar30 = operator_new(0x420);
  if (pvVar30 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    _Dest_01 = &pvStack_e0;
    pvStack_e0 = (void *)((uint)pvStack_e0 & 0xffffff00);
    pppuStack_e8 = (undefined ***)0x0;
    puVar7 = (undefined4 *)&DAT_00000014;
    _strncpy((char *)_Dest_01,"sf_close",8);
    pppuStack_e8 = (undefined ***)0x8;
    *(undefined1 *)(_Dest_01 + 2) = 0;
    local_b8 = &uStack_ac;
    uStack_ac = uStack_ac & 0xffffff00;
    uStack_b4 = 0;
    puStack_b0 = &DAT_00000014;
    _strncpy((char *)local_b8,"button_tick.",0xc);
    uStack_b4 = 0xc;
    *(char *)(local_b8 + 3) = '\0';
    uStack_6c = 0x1d;
    pcStack_154 = (code *)0x724a94;
    puVar9 = FUN_009b5030(&puStack_118,(undefined4 *)&stack0xffffff14);
    uStack_6c = 0x1e;
    uVar29 = 7;
    pcStack_154 = (code *)0x724ada;
    piVar5 = FUN_0069fb10(pvVar30,(int *)&local_b8,puVar9,0x42800000,0x42800000,0,0,0x3f800000,
                          0x3f800000);
  }
  if ((uVar29 & 4) != 0) {
    uVar29 = uVar29 & 0xfffffffb;
  }
  if (((uVar29 & 2) != 0) && (uVar29 = uVar29 & 0xfffffffd, &DAT_00000014 < puStack_b0)) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  uStack_6c = 9;
  if (((uVar29 & 1) != 0) && (&DAT_00000014 < puVar7)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_01);
  }
  uVar29 = 0;
  _Dest_00 = (undefined1 **)0x2;
  (**(code **)(*piVar5 + 0x60))();
  (**(code **)(*piVar5 + 0x68))();
  pcStack_154 = FUN_0071b530;
  pppuStack_158 = (undefined ***)0x0;
  puStack_15c = (uint *)0x724b8d;
  (**(code **)(*piVar5 + 0x18))();
  puStack_15c = (uint *)0xd49348;
  uStack_160 = 0;
  ppuStack_164 = (undefined **)&LAB_005f37f0;
  pvStack_168 = (void *)0x5;
  (**(code **)(*piVar5 + 0x18))();
  FUN_0073f6e0(this,piVar5);
  piVar5 = FUN_007a1630('\x01');
  _Dest = this;
  (**(code **)(*piVar5 + 0x5c))();
  (**(code **)(*piVar5 + 100))();
  puStack_15c = (uint *)((int)this + 0x18);
  pvStack_168 = (void *)0x2;
  pppuStack_158 = &ppuStack_164;
  ppuStack_164 = &PTR_FUN_00d18c2c;
  uStack_160 = *puStack_15c;
  *(uint **)(*puStack_15c + 4) = &uStack_160;
  *puStack_15c = (uint)&uStack_160;
  iVar4 = -0x3e400000;
  iVar26 = -0x3e400000;
  piVar5[0x3a] = 2;
  pvVar30 = this;
  (**(code **)(piVar5[0x3b] + 4))();
  piVar5[0x40] = (int)pvVar30;
  (**(code **)piVar5[0x3b])();
  piVar5[0x41] = iVar4;
  piVar5[0x42] = iVar26;
  if (puStack_15c != (uint *)0x0) {
    *puStack_15c = uStack_160;
  }
  if (uStack_160 != 0) {
    *(uint **)(uStack_160 + 4) = puStack_15c;
  }
  FUN_0073f6e0(this,piVar5);
  pppuStack_e8 = (undefined ***)&stack0xffffff24;
  pvStack_e0 = (void *)0xa;
  uVar10 = FUN_00ace02d(L"<h1 color=#ffffff>");
  FUN_004036d0(&pppuStack_e8,L"<h1 color=#ffffff>",uVar10);
  puVar7 = FUN_0045f620(*(void **)(*(int *)((int)this + 0x360) + 0xb4),&pvStack_168);
  FUN_0040cae0(&pppuStack_e8,(wchar_t *)*puVar7,puVar7[1]);
  if (10 < uStack_160) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_168);
  }
  sVar11 = FUN_00ace02d(L"</h1>");
  FUN_0040cae0(&pppuStack_e8,L"</h1>",sVar11);
  puVar7 = operator_new(0x3fc);
  if (puVar7 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00833290(puVar7);
  }
  pppuStack_158 = &ppuStack_164;
  puStack_15c = (uint *)((int)this + 0x18);
  pvStack_168 = (void *)0x1;
  ppuStack_164 = &PTR_FUN_00d18c2c;
  uStack_160 = *puStack_15c;
  *(uint **)(*puStack_15c + 4) = &uStack_160;
  *puStack_15c = (uint)&uStack_160;
  iVar4 = 0x42800000;
  iVar26 = 0x42800000;
  piVar5[0x28] = 1;
  pvVar30 = this;
  (**(code **)(piVar5[0x29] + 4))();
  piVar5[0x2e] = (int)pvVar30;
  (**(code **)piVar5[0x29])();
  piVar5[0x2f] = iVar4;
  piVar5[0x30] = iVar26;
  if (puStack_15c != (uint *)0x0) {
    *puStack_15c = uStack_160;
  }
  if (uStack_160 != 0) {
    *(uint **)(uStack_160 + 4) = puStack_15c;
  }
  pppuStack_158 = &ppuStack_164;
  puStack_15c = (uint *)((int)this + 0x18);
  pvStack_168 = (void *)0x2;
  ppuStack_164 = &PTR_FUN_00d18c2c;
  uStack_160 = *puStack_15c;
  *(uint **)(*puStack_15c + 4) = &uStack_160;
  *puStack_15c = (uint)&uStack_160;
  iVar4 = 0x42800000;
  iVar26 = 0x42800000;
  piVar5[0x3a] = 2;
  pvVar30 = this;
  (**(code **)(piVar5[0x3b] + 4))();
  piVar5[0x40] = (int)pvVar30;
  (**(code **)piVar5[0x3b])();
  piVar5[0x41] = iVar4;
  piVar5[0x42] = iVar26;
  if (puStack_15c != (uint *)0x0) {
    *puStack_15c = uStack_160;
  }
  if (uStack_160 != 0) {
    *(uint **)(uStack_160 + 4) = puStack_15c;
  }
  (**(code **)(*piVar5 + 100))();
  do {
    cVar3 = (**(code **)(*piVar5 + 0x50))();
  } while (cVar3 != '\0');
  (**(code **)(*piVar5 + 0x54))();
  (**(code **)(*piVar5 + 0x8c))();
  FUN_0073f6e0(this,piVar5);
  puVar7 = operator_new(0x394);
  if (puVar7 == (undefined4 *)0x0) {
    puStack_180 = (undefined4 *)0x0;
  }
  else {
    puStack_180 = FUN_0089ea20(puVar7);
  }
  (**(code **)(*(int *)((int)this + 0x414) + 4))();
  *(undefined4 **)((int)this + 0x428) = puStack_180;
  (*(code *)**(undefined4 **)((int)this + 0x414))();
  pcVar12 = &stack0xfffffebc;
  uVar10 = 0x14;
  _strncpy(pcVar12,"starrating_small",0x10);
  pcVar12[0x10] = '\0';
  pbStack_1a8 = (byte *)0x724fc2;
  FUN_0089e070(*(void **)((int)this + 0x428),(undefined4 *)&stack0xfffffeb0,0,0,'\x01');
  if (0x14 < uVar10) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar12);
  }
  pvStack_124 = (void *)0x0;
  FUN_00882710(*(void **)(*(int *)((int)this + 0x428) + 0x358),(float *)&pvStack_124);
  pvStack_124 = (void *)((float)pvStack_124 * 1.33);
  (**(code **)(**(int **)((int)this + 0x428) + 0x74))();
  FUN_0089e5f0(*(void **)((int)this + 0x428),'\x01');
  pbStack_1a8 = (byte *)0x2;
  uStack_1ac = 0x725052;
  (**(code **)(**(int **)((int)this + 0x428) + 100))();
  uStack_1ac = 0;
  (**(code **)(**(int **)((int)this + 0x428) + 0x5c))();
  iVar4 = FUN_004df4b0(*(int *)((int)this + 0x360));
  if (iVar4 != 0) {
    pfVar23 = (float *)&stack0xfffffe60;
    pvVar30 = (void *)FUN_004df4b0(*(int *)((int)this + 0x360));
    CProject_GetQualityWithAwardBoost(pvVar30,pfVar23);
  }
  pvVar30 = operator_new(0x34);
  if (pvVar30 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_005e7240(pvVar30,*(int *)(*(int *)((int)this + 0x428) + 0x358),0,0);
  }
  *(int **)((int)this + 0x42c) = piVar8;
  FUN_0073f6e0(this,*(int **)((int)this + 0x428));
  pvVar30 = operator_new(0x420);
  if (pvVar30 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    _Dest_00 = &puStack_130;
    puStack_130 = (undefined1 *)((uint)puStack_130 & 0xffffff00);
    uVar29 = 0x14;
    _strncpy((char *)_Dest_00,"sf_choosebackdrop",0x11);
    *(char *)((int)_Dest_00 + 0x11) = '\0';
    uVar10 = (uint)piVar5 | 8;
    _Dest = &ppuStack_164;
    ppuStack_164 = (undefined **)((uint)ppuStack_164 & 0xffffff00);
    pvStack_168 = (void *)0x14;
    _strncpy((char *)_Dest,"button_backd",0xc);
    *(char *)(_Dest + 3) = '\0';
    uVar10 = uVar10 | 0x10;
    piStack_1d8 = (int *)0x7251b0;
    puVar7 = FUN_009b5030((undefined4 *)&stack0xfffffe64,(undefined4 *)&stack0xfffffec4);
    piVar5 = (int *)(uVar10 | 0x20);
    piStack_1d8 = (int *)0x7251f6;
    puVar7 = FUN_0069fb10(pvVar30,(int *)&stack0xfffffe90,puVar7,0x42800000,0x42800000,0,0,
                          0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)((int)this + 0x3c4) + 4))();
  *(undefined4 **)((int)this + 0x3d8) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x3c4))();
  if (((uint)piVar5 & 0x20) != 0) {
    piVar5 = (int *)((uint)piVar5 & 0xffffffdf);
  }
  if ((((uint)piVar5 & 0x10) != 0) &&
     (piVar5 = (int *)((uint)piVar5 & 0xffffffef), (void *)0x14 < pvStack_168)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  if ((((uint)piVar5 & 8) != 0) && (0x14 < uVar29)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  (**(code **)(**(int **)((int)this + 0x3d8) + 0x18))();
  uVar29 = 0;
  pvVar30 = (void *)0x5;
  piStack_1d8 = (int *)0x7252d7;
  (**(code **)(**(int **)((int)this + 0x3d8) + 0x18))();
  piStack_1d8 = (int *)0x41000000;
  pcStack_1e0 = (char *)0x2;
  pvStack_1dc = this;
  (**(code **)(**(int **)((int)this + 0x3d8) + 0x60))();
  bVar28 = 2;
  (**(code **)(**(int **)((int)this + 0x3d8) + 0x68))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x3d8));
  iVar4 = FUN_004df220(*(int *)((int)this + 0x360));
  if ((iVar4 == 0) ||
     (iVar4 = FUN_004df220(*(int *)((int)this + 0x360)), *(int *)(iVar4 + 0x11c) == 0)) {
    (**(code **)(**(int **)((int)this + 0x3d8) + 0xc0))();
  }
  else {
    pvVar6 = (void *)FUN_004df4a0(*(int *)((int)this + 0x360));
    if (pvVar6 == (void *)0x0) {
      pcVar12 = "";
    }
    else {
      puVar7 = FUN_004b6370(pvVar6,(undefined4 *)&stack0xfffffe2c);
      pcVar12 = (char *)*puVar7;
      pvStack_1dc = (void *)((uint)pvStack_1dc | 0x40);
    }
    iVar4 = FUN_004df220(*(int *)((int)this + 0x360));
    pvVar6 = (void *)FUN_0097e350(*(void **)(iVar4 + 0x11c),0);
    FUN_009f50a0(pvVar6,pcVar12);
    if ((((uint)pvStack_1dc & 0x40) != 0) &&
       (pvStack_1dc = (void *)((uint)pvStack_1dc & 0xffffffbf), 0x14 < uVar29)) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar30);
    }
    iVar4 = FUN_009f41d0();
    if (iVar4 < 1) {
      (**(code **)(**(int **)((int)this + 0x3d8) + 0xc0))();
    }
  }
  puStack_1b0 = (undefined1 *)FUN_004df240(*(int *)((int)this + 0x360));
  if (puStack_1b0 != (undefined1 *)0x0) {
    FUN_009765c0(puStack_1b0,1);
    FUN_004e3280(*(int *)((int)this + 0x360) + 0xb8);
    uStack_1ac = 0;
    uVar29 = FUN_00973ac0(puStack_1b0);
    if (0 < (int)uVar29) {
      do {
        iVar4 = FUN_00974ea0(puStack_1b0,uStack_1ac);
        if ((iVar4 < 0) || ((int)(uint)(byte)puStack_1b0[0x4e] <= iVar4)) {
          pcVar12 = (char *)0x0;
        }
        else {
          pcVar12 = (char *)FUN_009722a0(puStack_1b0,iVar4);
        }
        uStack_1fc = 0x72546b;
        iVar4 = __strnicmp(pcVar12,"ai_",3);
        if (iVar4 != 0) {
          uStack_1fc = 0x725483;
          iVar4 = __strnicmp(pcVar12,"endshoot",8);
          if (iVar4 != 0) {
            if (*(int *)((int)this + 0x3a8) == 0) {
              piStack_1d8 = FUN_00729e10(*(int *)((int)this + 0x360),0);
              (**(code **)(*(int *)((int)this + 0x394) + 4))();
              *(int **)((int)this + 0x3a8) = piStack_1d8;
              (*(code *)**(undefined4 **)((int)this + 0x394))();
            }
            fVar20 = FUN_00976530((int)puStack_1b0,uStack_1ac);
            piStack_1d8 = (int *)(float)fVar20;
            uStack_1fc = 0x7254ed;
            FUN_007299f0(*(void **)((int)this + 0x3a8),pcVar12);
            puVar7 = *(undefined4 **)(*(int *)((int)this + 0x360) + 0xbc);
            if (puVar7 != *(undefined4 **)(*(int *)((int)this + 0x360) + 0xc0)) {
              do {
                pbStack_1a8 = &stack0xfffffe64;
                _Size = 2.8026e-44;
                pcVar17 = pcVar12;
                do {
                  cVar3 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                } while (cVar3 != '\0');
                uVar29 = (int)pcVar17 - (int)(pcVar12 + 1);
                if (0x13 < uVar29) {
                  _Size = (float)(uVar29 + 0x20 & 0xffffffe0);
                  pbStack_1a8 = _malloc((size_t)_Size);
                }
                uStack_1fc = 0x725564;
                _strncpy((char *)pbStack_1a8,pcVar12,uVar29);
                pbStack_1a8[uVar29] = 0;
                pbVar18 = (byte *)*puVar7;
                pbVar16 = pbStack_1a8;
                do {
                  bVar2 = *pbVar18;
                  bVar19 = bVar2 < *pbVar16;
                  if (bVar2 != *pbVar16) {
LAB_007255a5:
                    iVar4 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
                    goto LAB_007255aa;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar18[1];
                  bVar19 = bVar2 < pbVar16[1];
                  if (bVar2 != pbVar16[1]) goto LAB_007255a5;
                  pbVar18 = pbVar18 + 2;
                  pbVar16 = pbVar16 + 2;
                } while (bVar2 != 0);
                iVar4 = 0;
LAB_007255aa:
                if (0x14 < (uint)_Size) {
                    /* WARNING: Subroutine does not return */
                  _free(pbStack_1a8);
                }
                if (iVar4 == 0) {
                  puVar7[8] = piStack_1d8;
                  goto LAB_0072568f;
                }
                puVar7 = puVar7 + 9;
              } while (puVar7 != *(undefined4 **)(*(int *)((int)this + 0x360) + 0xc0));
            }
            pcVar17 = &stack0xfffffe38;
            uVar29 = 0x14;
            pcVar15 = pcVar12;
            do {
              cVar3 = *pcVar15;
              pcVar15 = pcVar15 + 1;
            } while (cVar3 != '\0');
            uVar10 = (int)pcVar15 - (int)(pcVar12 + 1);
            if (0x13 < uVar10) {
              uVar29 = uVar10 + 0x20 & 0xffffffe0;
              pcVar17 = _malloc(uVar29);
            }
            uStack_1fc = 0x725647;
            _strncpy(pcVar17,pcVar12,uVar10);
            pcVar17[uVar10] = '\0';
            FUN_004e4c90((void *)(*(int *)((int)this + 0x360) + 0xb8),(undefined4 *)&stack0xfffffe2c
                        );
            if (0x14 < uVar29) {
                    /* WARNING: Subroutine does not return */
              _free(pcVar17);
            }
LAB_0072568f:
            PTR_FUN_00e66ef8 = &LAB_00729b40;
            DAT_01050b5c = 0;
          }
        }
        uVar10 = uStack_1ac + 1;
        uStack_1ac = uVar10;
        uVar29 = FUN_00973ac0(puStack_1b0);
      } while ((int)uVar10 < (int)uVar29);
    }
    FUN_00978cd0(puStack_1b0,*(uint *)(puStack_1b0 + 0x74),1);
    FUN_009750b0(*(void **)(puStack_1b0 + 0x148));
  }
  piStack_1d8 = operator_new(0x344);
  if (piStack_1d8 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_007432f0(piStack_1d8);
  }
  (**(code **)(*(int *)((int)this + 0x3dc) + 4))();
  *(undefined4 **)((int)this + 0x3f0) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x3dc))();
  (**(code **)(**(int **)((int)this + 0x3f0) + 0x7c))();
  piVar5 = (int *)((int)this + 0x18);
  piStack_1d8 = (int *)0x1;
  iVar4 = *piVar5;
  *(undefined1 **)(*piVar5 + 4) = &stack0xfffffe30;
  *piVar5 = (int)&stack0xfffffe30;
  uVar22 = 0;
  uVar24 = 0;
  iVar26 = *(int *)((int)this + 0x3f0);
  *(undefined4 *)(iVar26 + 0xa0) = 1;
  pvVar30 = this;
  (**(code **)(*(int *)(iVar26 + 0xa4) + 4))();
  *(void **)(iVar26 + 0xb8) = pvVar30;
  (*(code *)**(undefined4 **)(iVar26 + 0xa4))();
  *(undefined4 *)(iVar26 + 0xbc) = uVar22;
  *(undefined4 *)(iVar26 + 0xc0) = uVar24;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar4;
  }
  if (iVar4 != 0) {
    *(int **)(iVar4 + 4) = piVar5;
  }
  piVar5 = (int *)((int)this + 0x18);
  piStack_1d8 = (int *)0x2;
  pvVar30 = (void *)*piVar5;
  *(undefined1 **)(*piVar5 + 4) = &stack0xfffffe30;
  *piVar5 = (int)&stack0xfffffe30;
  uVar22 = 0;
  puVar25 = (uint *)0x0;
  iVar4 = *(int *)((int)this + 0x3f0);
  *(undefined4 *)(iVar4 + 0xe8) = 2;
  pvVar6 = this;
  (**(code **)(*(int *)(iVar4 + 0xec) + 4))();
  *(void **)(iVar4 + 0x100) = pvVar6;
  (*(code *)**(undefined4 **)(iVar4 + 0xec))();
  *(undefined4 *)(iVar4 + 0x104) = uVar22;
  *(uint **)(iVar4 + 0x108) = puVar25;
  if (piVar5 != (int *)0x0) {
    *piVar5 = (int)pvVar30;
  }
  if (pvVar30 != (void *)0x0) {
    *(int **)((int)pvVar30 + 4) = piVar5;
  }
  pvVar6 = (void *)0x44000000;
  uStack_1fc = 1;
  (**(code **)(**(int **)((int)this + 0x3f0) + 100))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x3f0));
  pvVar13 = operator_new(0x360);
  if (pvVar13 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar25 = &uStack_1ac;
    uStack_1ac = uStack_1ac & 0xffffff00;
    puStack_1b0 = &DAT_00000014;
    _strncpy((char *)puVar25,"ui/mov_playbar.dds",0x12);
    *(char *)((int)puVar25 + 0x12) = '\0';
    bVar28 = 0x82;
    uStack_214 = 0x725950;
    piVar5 = FUN_0069d820(pvVar13,(undefined4 *)&stack0xfffffe48,0x3f800000,0,0x3f700000,0x3f800000)
    ;
  }
  if (((char)bVar28 < '\0') && (bVar28 = bVar28 & 0x7f, &DAT_00000014 < puStack_1b0)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar25);
  }
  (**(code **)(*piVar5 + 0x74))();
  uStack_214 = 0x7259ba;
  (**(code **)(*piVar5 + 0x5c))();
  uStack_218 = *(uint *)((int)this + 0x3f0);
  uStack_214 = 0;
  uStack_21c = 1;
  puStack_220 = (uint *)0x7259cc;
  (**(code **)(*piVar5 + 100))();
  puStack_220 = (uint *)0x1;
  (**(code **)(**(int **)((int)this + 0x3f0) + 0xc))();
  pvVar13 = operator_new(0x360);
  if (pvVar13 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    pcStack_1e0 = &stack0xfffffe2c;
    pvStack_1dc = (void *)0x0;
    piStack_1d8 = (int *)0x14;
    _strncpy(pcStack_1e0,"ui/mov_playbar.dds",0x12);
    pvStack_1dc = (void *)0x12;
    pcStack_1e0[0x12] = '\0';
    uStack_214 = uStack_214 | 0x100;
    uStack_160 = CONCAT31(uStack_160._1_3_,0x3a);
    piVar5 = FUN_0069d820(pvVar13,&pcStack_1e0,0x3f700000,0,0x3f800000,0x3f800000);
  }
  uStack_160 = 0x23;
  if (((uStack_214 & 0x100) != 0) && (uStack_214 = uStack_214 & 0xfffffeff, 0x14 < piStack_1d8)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1e0);
  }
  (**(code **)(*piVar5 + 0x74))();
  iVar4 = 2;
  (**(code **)(*piVar5 + 0x60))();
  (**(code **)(*piVar5 + 100))();
  (**(code **)(**(int **)((int)this + 0x3f0) + 0xc))();
  pvVar13 = operator_new(0x360);
  if (pvVar13 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar25 = &uStack_1fc;
    uStack_1fc = uStack_1fc & 0xffffff00;
    uVar29 = 0x14;
    _strncpy((char *)puVar25,"ui/mov_playbar.dds",0x12);
    *(char *)((int)puVar25 + 0x12) = '\0';
    piVar8 = FUN_0069d820(pvVar13,(undefined4 *)&stack0xfffffdf8,0x3f000000,0,0x3f700000,0x3f800000)
    ;
    if (0x14 < uVar29) {
                    /* WARNING: Subroutine does not return */
      _free(puVar25);
    }
  }
  piVar14 = (int *)FUN_005fbfa0(&stack0xfffffdcc,2,iVar4,0);
  piVar8[0x28] = *piVar14;
  (**(code **)(piVar8[0x29] + 4))();
  piVar8[0x2e] = piVar14[6];
  (**(code **)piVar8[0x29])();
  piVar8[0x2f] = piVar14[7];
  piVar8[0x30] = piVar14[8];
  FUN_005f9ed0((int)&stack0xfffffdcc);
  piVar5 = (int *)FUN_005fbfa0(&stack0xfffffdcc,1,(int)piVar5,0);
  piVar8[0x3a] = *piVar5;
  (**(code **)(piVar8[0x3b] + 4))();
  piVar8[0x40] = piVar5[6];
  (**(code **)piVar8[0x3b])();
  piVar8[0x41] = piVar5[7];
  piVar8[0x42] = piVar5[8];
  FUN_005f9ed0((int)&stack0xfffffdcc);
  (**(code **)(*piVar8 + 0x7c))();
  uVar29 = 0;
  (**(code **)(*piVar8 + 100))();
  (**(code **)(**(int **)((int)this + 0x3f0) + 0xc))();
  pvVar13 = operator_new(0x360);
  if (pvVar13 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puStack_220 = &uStack_214;
    uStack_214 = uStack_214 & 0xffffff00;
    uStack_21c = 0;
    uStack_218 = 0x14;
    pvVar21 = pvVar13;
    FUN_004015d0(&puStack_220,"ui/slider.dds",0xd);
    uVar29 = uVar29 | 0x400;
    puVar7 = FUN_0069d820(pvVar13,&puStack_220,0,0x3e800000,0x3e800000,0x3f000000);
    pvVar13 = pvVar21;
  }
  (**(code **)(*(int *)((int)this + 0x3f4) + 4))();
  *(undefined4 **)((int)this + 0x408) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x3f4))();
  if (((uVar29 & 0x400) != 0) && (0x14 < uStack_218)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_220);
  }
  (**(code **)(**(int **)((int)this + 0x408) + 100))();
  (**(code **)(**(int **)((int)this + 0x408) + 0x5c))(1,*(undefined4 *)((int)this + 0x3f0));
  (**(code **)(**(int **)((int)this + 0x408) + 0x74))(0x42400000,0x42400000);
  (**(code **)(**(int **)((int)this + 0x3f0) + 0xc))(*(undefined4 *)((int)this + 0x408),1);
  DAT_00f87aa8 = &LAB_00723430;
  if (pvVar13 != (void *)0x0) {
    FUN_009765c0(pvVar13,1);
  }
  FUN_00424130(DAT_00f87b04,3,0,0);
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  FUN_00723800((int)this);
  DAT_010b9550 = 1;
  if (bVar28 < 0xb) {
    ExceptionList = pvVar30;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar6);
}


//// FUNCTION FUN_00725e50 @ 00725e50 ////

undefined *** __cdecl FUN_00725e50(undefined **param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *this;
  undefined ***pppuVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = DAT_0104dff8;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3edb;
  pvStack_c = ExceptionList;
  pppuVar4 = (undefined ***)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104dff8 != (undefined ***)0x0) {
    iVar2 = (int)DAT_0104dff8[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104dff8[0x12] = (undefined **)(iVar2 + -1);
    if (iVar2 + -1 == 0) {
      (**(code **)*puVar1)(1);
    }
    (*(code *)DAT_0104dfe4[1])();
    DAT_0104dff8 = (undefined ***)0x0;
    (*(code *)*DAT_0104dfe4)();
  }
  iVar2 = FUN_006a36e0();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_006a36e0();
    (**(code **)(*piVar3 + 0x20))(0);
  }
  this = operator_new(0x450);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    pppuVar4 = WShotFiddler_Constructor(this,param_1);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104dfe4[1])();
  DAT_0104dff8 = pppuVar4;
  (*(code *)*DAT_0104dfe4)();
  ExceptionList = pvStack_c;
  return DAT_0104dff8;
}


//// FUNCTION FUN_00725f30 @ 00725f30 ////

void __fastcall FUN_00725f30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d49384;
  param_1[0x14] = &PTR_FUN_00d4936c;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_00725f50 @ 00725f50 ////

undefined4 * __thiscall FUN_00725f50(void *this,byte param_1)

{
  FUN_00725f30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00725f70 @ 00725f70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00725f70(float *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  float *this;
  uint uVar6;
  bool bVar7;
  float *pfStack_cc;
  undefined1 *puStack_c8;
  char *pcStack_c4;
  float fStack_c0;
  undefined1 *puVar8;
  void **local_94;
  undefined4 local_90;
  uint local_8c;
  void *local_88;
  undefined2 *puStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined2 auStack_78 [14];
  undefined4 uStack_5c;
  undefined4 uStack_3c;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3fc3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x288);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_94 = &local_88;
    local_88 = (void *)((uint)local_88 & 0xffffff00);
    local_90 = 0;
    local_8c = 0x20;
    local_94 = _malloc(0x20);
    fStack_c0 = 1.0503647e-38;
    _strncpy((char *)local_94,"ui/buildmenu_window.dds",0x17);
    local_90 = 0x17;
    *(char *)((int)local_94 + 0x17) = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_005e8fd0(pvVar2,&local_94);
  }
  local_4 = 0xffffffff;
  if ((pvVar2 != (void *)0x0) && (0x14 < local_8c)) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  puVar3[0x9c] = 0x41400000;
  puVar3[0x9d] = 0x41400000;
  puVar3[0x9b] = 0x42000000;
  puVar3[0x9e] = 0x41c00000;
  puVar3[0x9f] = 0x41c00000;
  (**(code **)((int)*param_1 + 0xa0))();
  (**(code **)((int)*param_1 + 0x78))();
  (**(code **)((int)*param_1 + 0x7c))();
  fStack_c0 = 1.050392e-38;
  puVar3 = operator_new(0x3fc);
  uStack_10 = 3;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar3);
  }
  piVar4[0xd5] = (int)DAT_00e58508;
  uStack_10 = 0xffffffff;
  fStack_c0 = 1.0504017e-38;
  puVar8 = puStack_8;
  (**(code **)(*piVar4 + 0x54))();
  fStack_c0 = DAT_00e58508;
  pcStack_c4 = (char *)0x7260fa;
  (**(code **)(*piVar4 + 0x78))();
  pcStack_c4 = (char *)0x0;
  puStack_c8 = (undefined1 *)0x726105;
  (**(code **)(*piVar4 + 0x8c))();
  puStack_c8 = (undefined1 *)0x0;
  pfStack_cc = param_1;
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(*piVar4 + 0x30))();
  (**(code **)((int)*param_1 + 0xc))();
  (**(code **)(*piVar4 + 0x14))();
  if ((DAT_0104e000 & 1) == 0) {
    _DAT_0104dffc = DAT_00e58508 * 0.3;
    DAT_0104e000 = DAT_0104e000 | 1;
  }
  pvVar2 = operator_new(0x420);
  bVar7 = pvVar2 == (void *)0x0;
  if (bVar7) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puStack_84 = auStack_78;
    auStack_78[0] = 0;
    uStack_80 = 0;
    uStack_7c = 10;
    uVar5 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_84,(wchar_t *)&lpCaption_00d16918,uVar5);
    pfStack_cc = &fStack_c0;
    fStack_c0 = (float)((uint)fStack_c0 & 0xffffff00);
    puStack_c8 = (undefined1 *)0x0;
    pcStack_c4 = &DAT_00000014;
    _strncpy((char *)pfStack_cc,"button_quit.",0xc);
    puStack_c8 = (undefined1 *)0xc;
    *(char *)(pfStack_cc + 3) = '\0';
    uStack_3c = 6;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&pfStack_cc,&puStack_84,0x42800000,0x42800000,0,0,0x3f800000
                          ,0x3f800000);
  }
  param_1[0xd1] = (float)puVar3;
  if ((!bVar7) && (&DAT_00000014 < pcStack_c4)) {
                    /* WARNING: Subroutine does not return */
    _free(pfStack_cc);
  }
  uStack_3c = 0xffffffff;
  if ((!bVar7) && (10 < uStack_7c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_84);
  }
  (**(code **)(*(int *)param_1[0xd1] + 0x5c))();
  uVar5 = 0;
  (**(code **)(*(int *)param_1[0xd1] + 100))();
  (**(code **)((int)*param_1 + 0xc))();
  this = operator_new(0x420);
  pfStack_cc = this;
  if (this == (float *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puStack_84 = auStack_78;
    auStack_78[0] = 0;
    uStack_80 = 0;
    uStack_7c = 10;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_84,(wchar_t *)&lpCaption_00d16918,uVar6);
    uVar5 = uVar5 | 8;
    pcStack_c4 = &stack0xffffff48;
    fStack_c0 = 0.0;
    puVar8 = (undefined1 *)0x14;
    _strncpy(pcStack_c4,"button_tick.",0xc);
    fStack_c0 = 1.68156e-44;
    pcStack_c4[0xc] = '\0';
    puStack_c8 = &stack0xfffffeec;
    uVar5 = uVar5 | 0x10;
    uStack_5c = 0xb;
    puVar3 = FUN_0069fb10(this,(int *)&pcStack_c4,&puStack_84,0x42800000,0x42800000,0,0,0x3f800000,
                          0x3f800000);
  }
  param_1[0xd2] = (float)puVar3;
  if (((uVar5 & 0x10) != 0) && (uVar5 = uVar5 & 0xffffffef, (undefined1 *)0x14 < puVar8)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_c4);
  }
  uStack_5c = 0xffffffff;
  if (((uVar5 & 8) != 0) && (10 < uStack_7c)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_84);
  }
  (**(code **)(*(int *)param_1[0xd2] + 0x5c))();
  (**(code **)(*(int *)param_1[0xd2] + 100))(1,param_1);
  (**(code **)((int)*param_1 + 0xc))(param_1[0xd2],1);
  (**(code **)((int)*param_1 + 0x8c))(0);
  do {
    cVar1 = (**(code **)((int)*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  ExceptionList = local_88;
  return;
}


//// FUNCTION FUN_007264c0 @ 007264c0 ////

float * __fastcall FUN_007264c0(float *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3fd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = (float)&PTR_FUN_00d49384;
  param_1[0x14] = (float)&PTR_FUN_00d4936c;
  FUN_00725f70(param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00726520 @ 00726520 ////

float * FUN_00726520(void)

{
  float *pfVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd3ffb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pfVar1 = operator_new(0x34c);
  local_4 = 0;
  if (pfVar1 != (float *)0x0) {
    pfVar1 = FUN_007264c0(pfVar1);
    ExceptionList = local_c;
    return pfVar1;
  }
  ExceptionList = local_c;
  return (float *)0x0;
}


//// FUNCTION FUN_00726580 @ 00726580 ////

int __fastcall FUN_00726580(int param_1)

{
  return param_1 + 0x378;
}


//// FUNCTION FUN_00726590 @ 00726590 ////

uint __fastcall FUN_00726590(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(code **)(param_1 + 0x270) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x270))(param_1,*(undefined4 *)(param_1 + 0x274));
  }
  *(undefined1 *)(param_1 + 0x344) = 1;
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_007265f0 @ 007265f0 ////

int * __thiscall FUN_007265f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007266f0 @ 007266f0 ////

void __thiscall FUN_007266f0(void *this,float param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  
  piVar1 = *(int **)((int)this + 0x47c);
  *(float *)((int)this + 0x490) = param_1;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x10))();
  fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
  *(float *)(*(int *)((int)this + 0x47c) + 0xbc) =
       (float)(((float10)(float)fVar2 - fVar3) * (float10)param_1);
  return;
}


//// FUNCTION FUN_00726740 @ 00726740 ////

undefined8 __fastcall FUN_00726740(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x46c);
  iVar2 = 0;
  if ((iVar1 != 0) && (param_2 = 0, *(int *)(param_1 + 0x470) - iVar1 >> 5 != 0)) {
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x470) - iVar1 >> 5;
    }
    uVar4 = FUN_00acd42c();
    param_2 = (undefined4)(uVar4 >> 0x20);
    iVar2 = (int)uVar4;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3 + -1;
    }
  }
  return CONCAT44(param_2,iVar2);
}


//// FUNCTION WSlider_Tick @ 00726790 ////

void __fastcall WSlider_Tick(int *param_1)

{
  byte bVar1;
  
  WWindow_Tick(param_1);
  bVar1 = *(byte *)(param_1 + 0xd1);
  if (bVar1 != *(byte *)((int)param_1 + 0x345)) {
    *(byte *)((int)param_1 + 0x345) = bVar1;
    if ((void *)param_1[0xdd] != (void *)0x0) {
      FUN_00728c00((void *)param_1[0xdd],param_1 + 0xde,(uint)bVar1);
    }
  }
  *(undefined1 *)(param_1 + 0xd1) = 0;
  return;
}


//// FUNCTION FUN_007267d0 @ 007267d0 ////

float10 __fastcall FUN_007267d0(int param_1)

{
  return (float10)*(float *)(*(int *)(param_1 + 0x35c) + 0x490);
}


//// FUNCTION FUN_007267e0 @ 007267e0 ////

void __fastcall FUN_007267e0(int param_1)

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


//// FUNCTION FUN_00726850 @ 00726850 ////

void __fastcall FUN_00726850(int *param_1)

{
  int *piVar1;
  undefined2 unaff_SI;
  float10 fVar2;
  float local_8;
  float fStack_4;
  
  local_8 = (float)param_1[0x126];
  if (0 < (int)local_8) {
    fVar2 = FUN_00acf400((double)((float)(int)local_8 * (float)param_1[0x124]),unaff_SI);
    fVar2 = fVar2 + (float10)0.5;
    if ((float10)param_1[0x126] <= fVar2) {
      fVar2 = fVar2 - (float10)1.0;
    }
    FUN_00407070(&local_8,(float)(fVar2 / (float10)param_1[0x126]));
    piVar1 = (int *)param_1[0x11f];
    param_1[0x124] = (int)local_8;
    fVar2 = (float10)(**(code **)(*param_1 + 0x10))();
    fStack_4 = (float)fVar2;
    fVar2 = (float10)(**(code **)(*piVar1 + 0x10))();
    *(float *)(param_1[0x11f] + 0xbc) = (float)(((float10)fStack_4 - fVar2) * (float10)local_8);
  }
  return;
}


//// FUNCTION FUN_00726930 @ 00726930 ////

void __fastcall FUN_00726930(int param_1)

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


//// FUNCTION FUN_00726950 @ 00726950 ////

void __fastcall FUN_00726950(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d49488;
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


//// FUNCTION FUN_007269b0 @ 007269b0 ////

void __thiscall FUN_007269b0(void *this,char *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  size_t sVar6;
  void *local_74;
  undefined4 local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60 [10];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4030;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)((int)this + 0x35c);
  local_70 = *(undefined4 *)(*(int *)(iVar2 + 0x47c) + 0x9c);
  local_74 = (void *)((*(float *)(iVar2 + 0x108) - *(float *)(iVar2 + 0xc0)) * param_2 +
                     *(float *)(iVar2 + 0xc0));
  ExceptionList = &pvStack_c;
  FUN_00747290(*(void **)((int)this + 0x2d4),&local_74);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  puVar4 = FUN_009b5030(local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00526220(0,(float *)&local_74,puVar4,(undefined4 *)((int)this + 0x398));
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  uVar5 = FUN_00ace02d(L"<p align=left><shadow><t2 color=#ffffff>");
  FUN_004036d0(&local_6c,L"<p align=left><shadow><t2 color=#ffffff>",uVar5);
  local_4c = local_40;
  local_4 = 2;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4._0_1_ = 3;
  puVar4 = FUN_009b5030(local_2c,&local_4c);
  FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  sVar6 = FUN_00ace02d(L"</t2></shadow></p>");
  FUN_0040cae0(&local_6c,L"</t2></shadow></p>",sVar6);
  (**(code **)(**(int **)((int)this + 0x3b0) + 0x54))(&local_6c);
  (**(code **)(**(int **)((int)this + 0x3b0) + 0x8c))(0);
  if (&lpType_0000000a < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION WSliderSlider_Tick @ 00726bf0 ////

void __fastcall WSliderSlider_Tick(int *param_1)

{
  int *piVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar2;
  undefined2 unaff_DI;
  float10 fVar3;
  undefined8 uVar4;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  piVar1 = (int *)param_1[0x11f];
  fVar3 = (float10)(**(code **)(*param_1 + 0x10))();
  fStack_c = (float)fVar3;
  fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
  fVar3 = (float10)(float)piVar1[0x2f] / ((float10)fStack_c - fVar3);
  uVar2 = extraout_EDX;
  if (((*(byte *)(param_1[0x11f] + 0x344) & 1) == 0) &&
     (fStack_c = (float)param_1[0x126], 0 < (int)fStack_c)) {
    fVar3 = FUN_00acf400((double)(fVar3 * (float10)(int)fStack_c),unaff_DI);
    fVar3 = fVar3 + (float10)0.5;
    if ((float10)param_1[0x126] <= fVar3) {
      fVar3 = fVar3 - (float10)1.0;
    }
    fVar3 = fVar3 / (float10)param_1[0x126];
    uVar2 = extraout_EDX_00;
  }
  param_1[0x125] = param_1[0x124];
  if ((float10)0.0 <= fVar3) {
    if ((float10)1.0 < fVar3) {
      fVar3 = (float10)1.0;
    }
  }
  else {
    fVar3 = (float10)0.0;
  }
  param_1[0x124] = (int)(float)fVar3;
  if ((float)param_1[0x125] != (float)param_1[0x124]) {
    if ((code *)param_1[0x9c] != (code *)0x0) {
      (*(code *)param_1[0x9c])(param_1);
      uVar2 = extraout_EDX_01;
    }
    if ((param_1[0x11b] != 0) && (param_1[0x11c] - param_1[0x11b] >> 5 != 0)) {
      uVar4 = FUN_00726740((int)param_1,uVar2);
      if ((int)uVar4 != param_1[0x11e]) {
        param_1[0x11e] = (int)uVar4;
        uStack_4 = *(undefined4 *)(param_1[0x11f] + 0x9c);
        fStack_8 = *(float *)(param_1[0x11f] + 0xc0);
        FUN_00747290((void *)param_1[0xb5],&fStack_8);
        fStack_c = -NAN;
        FUN_00526220(0,&fStack_8,(undefined4 *)(param_1[0x11e] * 0x20 + param_1[0x11b]),&fStack_c);
      }
    }
  }
  if ((*(byte *)(param_1[0x11f] + 0x344) & 1) == 0) {
    FUN_00726850(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00726d90 @ 00726d90 ////

undefined4 * __fastcall FUN_00726d90(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  void *this;
  int *piVar4;
  uint **local_30;
  undefined **local_2c;
  uint local_28;
  uint *local_24;
  undefined ***local_20;
  void *pvStack_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd40bb;
  pvStack_c = ExceptionList;
  local_30 = &local_24;
  local_24 = (uint *)((uint)local_24 & 0xffffff00);
  local_2c = (undefined **)0x0;
  local_28 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy((char *)local_30,"ui/slider.dds",0xd);
  local_2c = (undefined **)0xd;
  *(char *)((int)local_30 + 0xd) = '\0';
  local_4 = 0;
  FUN_005f32e0(param_1,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  *param_1 = &PTR_FUN_00d49534;
  param_1[0x14] = &PTR_FUN_00d49518;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0xffffffff;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x124] = 0;
  param_1[0x45] = param_1[0x45] | 4;
  local_4._0_1_ = 4;
  FUN_005f2d90(param_1,0,0,0,0,0x3e800000,0x3e800000);
  FUN_005f2d90(param_1,0,1,0x3e800000,0,0x3f000000,0x3e800000);
  FUN_005f2d90(param_1,0,2,0x3f400000,0,0x3f800000,0x3e800000);
  puVar3 = operator_new(0x358);
  local_4._0_1_ = 5;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_006898b0(puVar3);
  }
  param_1[0x11f] = puVar3;
  local_24 = param_1 + 6;
  local_30 = (uint **)0x1;
  local_20 = &local_2c;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(uint **)(*local_24 + 4) = &local_28;
  *local_24 = (uint)&local_28;
  local_14 = 0;
  local_10 = 0;
  iVar1 = param_1[0x11f];
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  local_4._0_1_ = 6;
  local_18 = param_1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(undefined4 **)(iVar1 + 0x94) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = local_14;
  *(undefined4 *)(iVar1 + 0x9c) = local_10;
  if (local_24 != (uint *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(uint **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  local_30 = (uint **)0x2;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(uint **)(*local_24 + 4) = &local_28;
  *local_24 = (uint)&local_28;
  local_14 = 0;
  local_10 = 0;
  iVar1 = param_1[0x11f];
  *(undefined4 *)(iVar1 + 0xc4) = 2;
  local_4._0_1_ = 7;
  local_18 = param_1;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(undefined4 **)(iVar1 + 0xdc) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = local_14;
  *(undefined4 *)(iVar1 + 0xe4) = local_10;
  if (local_24 != (uint *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(uint **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = param_1 + 6;
  local_30 = (uint **)0x1;
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(uint **)(*local_24 + 4) = &local_28;
  *local_24 = (uint)&local_28;
  local_14 = 0;
  local_10 = 0;
  iVar1 = param_1[0x11f];
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  local_4._0_1_ = 8;
  local_18 = param_1;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(undefined4 **)(iVar1 + 0xb8) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = local_14;
  *(undefined4 *)(iVar1 + 0xc0) = local_10;
  if (local_24 != (uint *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(uint **)(local_28 + 4) = local_24;
  }
  local_18 = (undefined4 *)param_1[0x11f];
  local_20 = &local_2c;
  local_30 = (uint **)0x1;
  local_28 = 0;
  local_24 = (uint *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_18 != (undefined4 *)0x0) {
    local_24 = (uint *)((int)local_18 + 0x18);
    local_28 = *local_24;
    *(uint **)(*local_24 + 4) = &local_28;
    *local_24 = (uint)&local_28;
  }
  local_14 = 0x42000000;
  local_10 = 0x42000000;
  iVar1 = param_1[0x11f];
  *(undefined4 *)(iVar1 + 0xe8) = 1;
  local_4._0_1_ = 9;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(undefined4 **)(iVar1 + 0x100) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0xec))();
  *(undefined4 *)(iVar1 + 0x104) = local_14;
  *(undefined4 *)(iVar1 + 0x108) = local_10;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_24 != (uint *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(uint **)(local_28 + 4) = local_24;
  }
  FUN_0073f6e0(param_1,(int *)param_1[0x11f]);
  do {
    cVar2 = (**(code **)(*(int *)param_1[0x11f] + 0x50))();
  } while (cVar2 != '\0');
  this = operator_new(0x360);
  if (this == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    local_30 = &local_24;
    local_24 = (uint *)((uint)local_24 & 0xffffff00);
    local_2c = (undefined **)0x0;
    local_28 = 0x14;
    _strncpy((char *)local_30,"ui/slider.dds",0xd);
    local_2c = (undefined **)0xd;
    *(char *)((int)local_30 + 0xd) = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xb);
    piVar4 = FUN_0069d820(this,&local_30,0,0x3e800000,0x3e800000,0x3f000000);
  }
  local_4 = 4;
  if ((this != (void *)0x0) && (0x14 < local_28)) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  (**(code **)(*piVar4 + 0x70))();
  (**(code **)(*(int *)param_1[0x11f] + 0xc))();
  do {
    cVar2 = (**(code **)(*piVar4 + 0x50))(1);
  } while (cVar2 != '\0');
  FUN_0073f490(param_1,32.0);
  ExceptionList = pvStack_1c;
  return param_1;
}


//// FUNCTION FUN_007272d0 @ 007272d0 ////

undefined4 * __thiscall FUN_007272d0(void *this,byte param_1)

{
  FUN_007272f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007272f0 @ 007272f0 ////

void __fastcall FUN_007272f0(undefined4 *param_1)

{
  FUN_0069b050((int)(param_1 + 0x120));
  if ((undefined4 *)param_1[0x11b] != (undefined4 *)0x0) {
    FUN_00481090((undefined4 *)param_1[0x11b],(undefined4 *)param_1[0x11c]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11b]);
  }
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  FUN_005f3230(param_1);
  return;
}


//// FUNCTION FUN_00727350 @ 00727350 ////

void __thiscall FUN_00727350(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  bool bVar6;
  float unaff_ESI;
  int unaff_EDI;
  int iStack_50;
  undefined **ppuStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined ***pppuStack_38;
  int *piStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd40fc;
  pvStack_c = ExceptionList;
  bVar6 = false;
  piVar4 = *(int **)((int)this + 0x484);
  ExceptionList = &pvStack_c;
  ppvVar3 = &pvStack_c;
  if (piVar4 != *(int **)((int)this + 0x488)) {
    do {
      puVar2 = (undefined4 *)piVar4[5];
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)();
        }
        (**(code **)(*piVar4 + 4))();
        piVar4[5] = 0;
        (**(code **)*piVar4)();
      }
      piVar4 = piVar4 + 6;
      ppvVar3 = ExceptionList;
    } while (piVar4 != *(int **)((int)this + 0x488));
  }
  ExceptionList = ppvVar3;
  piVar4 = *(int **)((int)this + 0x47c);
  *(int *)((int)this + 0x498) = param_1;
  (**(code **)(*(int *)this + 0x10))();
  (**(code **)(*piVar4 + 0x10))();
  iStack_50 = 0;
  if (0 < *(int *)((int)this + 0x498)) {
    do {
      this_00 = operator_new(0x360);
      uStack_4 = 0;
      if (this_00 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        pcStack_2c = acStack_20;
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"ui/slider.dds",0xd);
        uStack_28 = 0xd;
        pcStack_2c[0xd] = '\0';
        bVar6 = true;
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        piVar4 = FUN_0069d820(this_00,&pcStack_2c,0x3e8c0000,0x3e800000,0x3ebc0000,0x3f000000);
      }
      uStack_4 = 0xffffffff;
      if ((bVar6) && (bVar6 = false, 0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      (**(code **)(*piVar4 + 0x74))();
      (**(code **)(*piVar4 + 100))(1);
      (**(code **)(*piVar4 + 0x5c))
                (1,this,((((float)unaff_EDI + 0.5) / (float)*(int *)((int)this + 0x498)) * unaff_ESI
                        - 12.0) + 16.0);
      iVar5 = (**(code **)(*piVar4 + 0x108))();
      *(undefined4 *)(iVar5 + 8) = 0x80ffffff;
      (**(code **)(*(int *)this + 0xc))(piVar4,1);
      piStack_3c = piVar4 + 6;
      pppuStack_38 = &ppuStack_44;
      ppuStack_44 = &PTR_FUN_00d2d110;
      iStack_40 = *piStack_3c;
      *(int **)(*piStack_3c + 4) = &iStack_40;
      *piStack_3c = (int)&iStack_40;
      uStack_4 = 3;
      piStack_30 = piVar4;
      FUN_0069b990((void *)((int)this + 0x480),(int)&ppuStack_44);
      uStack_4 = 0xffffffff;
      ppuStack_44 = &PTR_FUN_00d2d110;
      if (piStack_3c != (int *)0x0) {
        *piStack_3c = iStack_40;
      }
      if (iStack_40 != 0) {
        *(int **)(iStack_40 + 4) = piStack_3c;
      }
      iStack_50 = iStack_50 + 1;
      piStack_30 = (int *)0x0;
      iStack_40 = 0;
      piStack_3c = (int *)0x0;
    } while (iStack_50 < *(int *)((int)this + 0x498));
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007275e0 @ 007275e0 ////

void __thiscall FUN_007275e0(void *this,float param_1)

{
  float fVar1;
  undefined4 uStack_4;
  
  FUN_0073f410(this,param_1);
  if (param_1 < 500.0) {
    uStack_4 = 16.0;
    fVar1 = param_1 - 16.0;
    if (fVar1 < 16.0) {
      fVar1 = (fVar1 + 16.0) * 0.5;
      uStack_4 = fVar1;
    }
    fVar1 = (param_1 - (fVar1 - uStack_4)) * 0.5 * 0.00390625;
    FUN_005f2d90(this,0,0,0,0,fVar1,0x3e800000);
    FUN_005f2d90(this,0,2,1.0 - fVar1,0,0x3f800000,0x3e800000);
  }
  FUN_00727350(this,*(int *)((int)this + 0x498));
  return;
}


//// FUNCTION FUN_00727730 @ 00727730 ////

undefined *** __thiscall FUN_00727730(void *this,undefined **param_1,char *param_2)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  size_t sVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  void *unaff_EBP;
  uint *puVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
  float10 fVar16;
  ulonglong uVar17;
  undefined **ppuStack_24c;
  undefined *puStack_248;
  undefined **ppuStack_244;
  undefined ***pppuStack_240;
  undefined **ppuStack_23c;
  undefined ***pppuStack_238;
  uint uStack_234;
  void *pvVar18;
  undefined4 uVar19;
  int iVar20;
  float local_20c;
  int local_208;
  void *local_204;
  void *local_200 [2];
  float local_1f8;
  void *pvStack_1f4;
  uint uStack_1ec;
  undefined4 *local_1dc;
  uint local_1d8;
  uint *local_1d4;
  uint local_1d0;
  wchar_t *local_1cc;
  uint local_1c8;
  uint uStack_1c4;
  wchar_t awStack_1c0 [6];
  int local_1b4;
  undefined2 *local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined2 local_1a4 [26];
  char *local_170;
  uint local_16c;
  uint local_168;
  char local_164 [20];
  void *local_150;
  char local_14c [61];
  char acStack_10f [159];
  void *pvStack_70;
  undefined1 uStack_54;
  undefined1 uStack_4c;
  undefined1 uStack_40;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd41ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_150 = this;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d4971c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d49700;
  *(undefined1 *)((int)this + 0x344) = 0;
  *(undefined1 *)((int)this + 0x345) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 **)((int)this + 0x354) = (undefined4 *)((int)this + 0x348);
  *(undefined4 *)((int)this + 0x348) = &PTR_FUN_00d49488;
  *(undefined4 *)((int)this + 0x35c) = 0;
  piVar9 = (int *)((int)this + 0x360);
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(int **)((int)this + 0x36c) = piVar9;
  *piVar9 = (int)&PTR_FUN_00d2db94;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined1 **)((int)this + 0x378) = (undefined1 *)((int)this + 900);
  *(undefined1 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0x14;
  *(undefined1 *)((int)this + 0x399) = 0xff;
  *(undefined1 *)((int)this + 0x39a) = 0xff;
  *(undefined1 *)((int)this + 0x39b) = 0xff;
  *(undefined1 *)((int)this + 0x39b) = 0xff;
  *(undefined1 *)((int)this + 0x39a) = 0xff;
  *(undefined1 *)((int)this + 0x399) = 0xff;
  *(undefined1 *)((int)this + 0x398) = 0xff;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 **)((int)this + 0x3a8) = (undefined4 *)((int)this + 0x39c);
  *(undefined4 *)((int)this + 0x39c) = &PTR_FUN_00d195f8;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  pcVar5 = param_2;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  FUN_004015d0((void *)((int)this + 0x378),param_2,(int)pcVar5 - (int)(param_2 + 1));
  (**(code **)(*piVar9 + 4))();
  *(undefined ***)((int)this + 0x374) = param_1;
  (**(code **)*piVar9)();
  local_1b0 = local_1a4;
  local_208 = 0;
  local_1a4[0] = 0;
  local_1ac = 0;
  local_1a8 = 10;
  local_4 = CONCAT31(local_4._1_3_,5);
  local_204 = (void *)FUN_00728cd0(*(int *)((int)this + 0x374));
  if (local_204 != (void *)0x0) {
    local_1d8 = FUN_00973ac0(local_204);
    local_20c = 0.0;
    if (0 < (int)local_1d8) {
      do {
        pvVar18 = local_204;
        iVar6 = FUN_00974ea0(local_204,(int)local_20c);
        if ((iVar6 < 0) || ((int)(uint)*(byte *)((int)pvVar18 + 0x4e) <= iVar6)) {
          pcVar5 = (char *)0x0;
        }
        else {
          pcVar5 = (char *)FUN_009722a0(pvVar18,iVar6);
        }
        local_1d4 = &local_1c8;
        local_1c8 = local_1c8 & 0xffffff00;
        local_1d0 = 0;
        local_1cc = (wchar_t *)0x14;
        pcVar10 = pcVar5;
        do {
          cVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar4 != '\0');
        uVar11 = (int)pcVar10 - (int)(pcVar5 + 1);
        if (0x13 < uVar11) {
          local_1cc = (wchar_t *)(uVar11 + 0x20 & 0xffffffe0);
          local_1d4 = _malloc((size_t)local_1cc);
        }
        _strncpy((char *)local_1d4,pcVar5,uVar11);
        pvVar18 = local_204;
        fVar3 = local_20c;
        *(byte *)((int)local_1d4 + uVar11) = 0;
        pbVar14 = *(byte **)((int)this + 0x378);
        puVar12 = local_1d4;
        do {
          bVar1 = (byte)*puVar12;
          bVar15 = bVar1 < *pbVar14;
          if (bVar1 != *pbVar14) {
LAB_00727967:
            iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_0072796c;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)puVar12 + 1);
          bVar15 = bVar1 < pbVar14[1];
          if (bVar1 != pbVar14[1]) goto LAB_00727967;
          puVar12 = (uint *)((int)puVar12 + 2);
          pbVar14 = pbVar14 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_0072796c:
        local_1d0 = uVar11;
        if (iVar6 == 0) {
          if ((wchar_t *)0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
            _free(local_1d4);
          }
          if (-1 < (int)local_20c) {
            fVar16 = FUN_00976530((int)local_204,(int)local_20c);
            local_20c = (float)fVar16;
            iVar6 = *(int *)((int)pvVar18 + 0xc4);
            iVar20 = (int)fVar3 * 0x18;
            local_1d8 = iVar6 + iVar20;
            if (*(int *)(iVar6 + 0x10 + iVar20) == 0) {
              uVar11 = FUN_00ace02d((short *)&lpCaption_00d16918);
              FUN_004036d0(&local_1b0,(wchar_t *)&lpCaption_00d16918,uVar11);
            }
            else {
              local_208 = *(int *)(iVar20 + 0xc + *(int *)((int)pvVar18 + 0xc4));
              uVar17 = FUN_00acd42c();
              iVar6 = (int)uVar17;
              if (local_208 <= iVar6) {
                iVar6 = *(int *)(local_1d8 + 0xc) + -1;
              }
              if (iVar6 < 0) {
                iVar6 = 0;
              }
              uVar11 = FUN_00ace02d(L"<p align=left><shadow><t2 color=#ffffff><translate>");
              FUN_004036d0(&local_1b0,L"<p align=left><shadow><t2 color=#ffffff><translate>",uVar11)
              ;
              pcVar5 = (char *)FUN_009722a0(local_204,
                                            *(int *)(*(int *)(iVar20 + 0x10 +
                                                             *(int *)((int)local_204 + 0xc4)) +
                                                    iVar6 * 4));
              puVar7 = FUN_005686a0(&local_1d4,pcVar5);
              FUN_0040cae0(&local_1b0,(wchar_t *)*puVar7,puVar7[1]);
              if ((wchar_t *)0xa < local_1cc) {
                    /* WARNING: Subroutine does not return */
                _free(local_1d4);
              }
              sVar8 = FUN_00ace02d(L"</translate></t2></shadow></p>");
              FUN_0040cae0(&local_1b0,L"</translate></t2></shadow></p>",sVar8);
            }
            local_208 = *(int *)(iVar20 + 0xc + *(int *)((int)local_204 + 0xc4));
            iVar6 = 0x10;
            bVar15 = true;
            pcVar5 = param_2;
            pcVar10 = "sld_blue_ground";
            goto code_r0x00727adf;
          }
          break;
        }
        if ((wchar_t *)0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
          _free(local_1d4);
        }
        local_20c = (float)((int)local_20c + 1);
      } while ((int)local_20c < (int)local_1d8);
    }
  }
  goto LAB_00727ea5;
  while( true ) {
    iVar6 = iVar6 + -1;
    bVar15 = *pcVar5 == *pcVar10;
    pcVar5 = pcVar5 + 1;
    pcVar10 = pcVar10 + 1;
    if (!bVar15) break;
code_r0x00727adf:
    if (iVar6 == 0) break;
  }
  if (bVar15) {
    local_208 = FUN_009ad870(&DAT_010b9588,(byte *)"blue_ground_v00.dds");
    if (local_208 < 2) {
      local_208 = 0;
    }
    iVar20 = local_208;
    uVar17 = FUN_00acd42c();
    iVar6 = (int)uVar17;
    if (iVar20 <= iVar6) {
      iVar6 = iVar20 + -1;
    }
    if (iVar6 < 10) {
      pcVar5 = "blue_ground_v0%d";
    }
    else {
      pcVar5 = "blue_ground_v%d";
    }
    _sprintf(local_14c,pcVar5);
    uVar11 = FUN_00ace02d(L"<p align=left><shadow><t2 color=#ffffff>");
    FUN_004036d0(&local_1b0,L"<p align=left><shadow><t2 color=#ffffff>",uVar11);
    local_1d4 = &local_1c8;
    pcVar5 = local_14c;
    local_1c8 = local_1c8 & 0xffffff00;
    local_1d0 = 0;
    local_1cc = (wchar_t *)0x14;
    do {
      cVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar4 != '\0');
    uVar11 = (int)pcVar5 - (int)(local_14c + 1);
    if (0x13 < uVar11) {
      local_1cc = (wchar_t *)(uVar11 + 0x20 & 0xffffffe0);
      local_1d4 = _malloc((size_t)local_1cc);
    }
    _strncpy((char *)local_1d4,local_14c,uVar11);
    *(byte *)((int)local_1d4 + uVar11) = 0;
    local_4._0_1_ = 6;
    uStack_234 = 0x727bde;
    local_1d0 = uVar11;
    puVar7 = FUN_009b5030(local_200,&local_1d4);
    FUN_0040cae0(&local_1b0,(wchar_t *)*puVar7,puVar7[1]);
    if (10 < (uint)local_1f8) {
                    /* WARNING: Subroutine does not return */
      _free(local_200[0]);
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    if ((wchar_t *)0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
      _free(local_1d4);
    }
    sVar8 = FUN_00ace02d(L"</t2></shadow></p>");
    FUN_0040cae0(&local_1b0,L"</t2></shadow></p>",sVar8);
  }
  else {
    iVar6 = 0xe;
    bVar15 = true;
    pcVar5 = param_2;
    pcVar10 = "sld_miniature";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar15 = *pcVar5 == *pcVar10;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    } while (bVar15);
    if (bVar15) {
      FUN_00a26b40(&DAT_010b9570);
      if ((DAT_010b9578 == 0) || (local_208 = DAT_010b957c - DAT_010b9578 >> 2, local_208 < 2)) {
        local_208 = 0;
      }
      iVar6 = local_208;
      uVar17 = FUN_00acd42c();
      local_20c = (float)uVar17;
      if ((int)local_20c < 0) {
        local_20c = 0.0;
      }
      else if (iVar6 <= (int)local_20c) {
        local_20c = (float)(iVar6 + -1);
      }
      if (*(void **)((int)local_204 + 0x148) != (void *)0x0) {
        local_1d8 = FUN_0097e350(*(void **)((int)local_204 + 0x148),0);
        local_1b4 = 0;
        if (0 < *(int *)(local_1d8 + 0x38)) {
          do {
            iVar6 = local_1b4;
            pcVar5 = *(char **)(*(int *)(local_1d8 + 0x3c) + local_1b4 * 4);
            iVar20 = _strncmp("mbp_",pcVar5,4);
            if (iVar20 == 0) {
              local_1dc = (undefined4 *)0x0;
              local_204 = (void *)0x0;
              FUN_009ad890(pcVar5,(int *)&local_1dc,(int *)&local_204);
              FUN_009ad980(&DAT_010b9588,acStack_10f + 3,
                           (char *)**(undefined4 **)(DAT_010b9578 + (int)local_20c * 4),
                           (int *)&local_204);
              pcVar5 = acStack_10f + 3;
              do {
                cVar4 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar4 != '\0');
              pcVar5[(int)(local_14c + (0x3c - (int)(acStack_10f + 4)))] = '\0';
              pcVar5 = acStack_10f + 3;
              do {
                cVar4 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar4 != '\0');
              iVar6 = (int)pcVar5 - (int)(acStack_10f + 4);
              if (((4 < iVar6) && (local_14c[iVar6 + 0x3c] == '_')) && (acStack_10f[iVar6] == 'v'))
              {
                acStack_10f[iVar6 + 1] = '0';
                acStack_10f[iVar6 + 2] = '0';
              }
              uVar11 = FUN_00ace02d(L"<p align=left><shadow><t2 color=#ffffff>");
              FUN_004036d0(&local_1b0,L"<p align=left><shadow><t2 color=#ffffff>",uVar11);
              local_1d4 = &local_1c8;
              pcVar5 = acStack_10f + 3;
              local_1c8 = local_1c8 & 0xffffff00;
              local_1d0 = 0;
              local_1cc = (wchar_t *)0x14;
              do {
                cVar4 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar4 != '\0');
              uVar11 = (int)pcVar5 - (int)(acStack_10f + 4);
              if (0x13 < uVar11) {
                local_1cc = (wchar_t *)(uVar11 + 0x20 & 0xffffffe0);
                local_1d4 = _malloc((size_t)local_1cc);
              }
              _strncpy((char *)local_1d4,acStack_10f + 3,uVar11);
              *(byte *)((int)local_1d4 + uVar11) = 0;
              local_4._0_1_ = 7;
              uStack_234 = 0x727e2e;
              local_1d0 = uVar11;
              puVar7 = FUN_009b5030(local_200,&local_1d4);
              FUN_0040cae0(&local_1b0,(wchar_t *)*puVar7,puVar7[1]);
              if (10 < (uint)local_1f8) {
                    /* WARNING: Subroutine does not return */
                _free(local_200[0]);
              }
              local_4 = CONCAT31(local_4._1_3_,5);
              if ((wchar_t *)0x14 < local_1cc) {
                    /* WARNING: Subroutine does not return */
                _free(local_1d4);
              }
              sVar8 = FUN_00ace02d(L"</t2></shadow></p>");
              FUN_0040cae0(&local_1b0,L"</t2></shadow></p>",sVar8);
              iVar6 = local_1b4;
            }
            local_1b4 = iVar6 + 1;
          } while (local_1b4 < *(int *)(local_1d8 + 0x38));
        }
      }
    }
  }
LAB_00727ea5:
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffffd;
  FUN_0073e4e0(this,0x43b40000);
  local_170 = local_164;
  local_164[0] = '\0';
  local_16c = 0;
  local_168 = 0x14;
  pcVar5 = param_2;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  uVar11 = (int)pcVar5 - (int)(param_2 + 1);
  if (0x13 < uVar11) {
    local_168 = uVar11 + 0x20 & 0xffffffe0;
    local_170 = _malloc(local_168);
  }
  _strncpy(local_170,param_2,uVar11);
  local_170[uVar11] = '\0';
  uVar13 = 0;
  local_4._0_1_ = 8;
  local_16c = uVar11;
  if (uVar11 != 0) {
    do {
      iVar6 = _toupper((int)local_170[uVar13]);
      local_170[uVar13] = (char)iVar6;
      uVar13 = uVar13 + 1;
    } while (uVar13 < local_16c);
  }
  local_1dc = operator_new(0x49c);
  local_4._0_1_ = 9;
  if (local_1dc == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_00726d90(local_1dc);
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  (**(code **)(*(int *)((int)this + 0x348) + 4))();
  *(undefined4 **)((int)this + 0x35c) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x348))();
  FUN_00727350(*(void **)((int)this + 0x35c),local_208);
  (**(code **)(**(int **)((int)this + 0x35c) + 100))();
  uStack_234 = 1;
  pppuStack_238 = (undefined ***)0x728008;
  (**(code **)(**(int **)((int)this + 0x35c) + 0x5c))();
  pppuStack_238 = (undefined ***)0x43b40000;
  ppuStack_23c = (undefined **)0x728018;
  (**(code **)(**(int **)((int)this + 0x35c) + 0x78))();
  if (0.0 <= fStack_10) {
    if (1.0 < fStack_10) {
      fStack_10 = 1.0;
    }
  }
  else {
    fStack_10 = 0.0;
  }
  piVar9 = *(int **)((int)this + 0x35c);
  piVar2 = (int *)piVar9[0x11f];
  piVar9[0x124] = (int)fStack_10;
  ppuStack_23c = (undefined **)0x72807c;
  local_1f8 = fStack_10;
  fVar16 = (float10)(**(code **)(*piVar9 + 0x10))();
  local_1f8 = (float)fVar16;
  ppuStack_23c = (undefined **)0x728087;
  fVar16 = (float10)(**(code **)(*piVar2 + 0x10))();
  ppuStack_23c = (undefined **)0xd35d78;
  ppuStack_244 = (undefined **)&LAB_00726670;
  *(float *)(piVar9[0x11f] + 0xbc) = (float)(((float10)local_1f8 - fVar16) * (float10)fStack_10);
  puStack_248 = (undefined *)0x9;
  ppuStack_24c = (undefined **)0x7280b3;
  pppuStack_240 = this;
  (**(code **)(**(int **)((int)this + 0x35c) + 0x18))();
  ppuStack_24c = (undefined **)0xd35d78;
  (**(code **)(**(int **)((int)this + 0x35c) + 0x18))(5,&LAB_007266c0,this);
  FUN_00741630(this,5,0x7266c0,this,"SLIDER");
  FUN_0073f6e0(this,*(int **)((int)this + 0x35c));
  do {
    cVar4 = (**(code **)(**(int **)((int)this + 0x35c) + 0x50))(1);
  } while (cVar4 != '\0');
  local_1cc = awStack_1c0;
  awStack_1c0[0] = L'\0';
  local_1c8 = 0;
  uStack_1c4 = 10;
  uStack_40 = 10;
  uVar11 = FUN_00ace02d(L"<p align=right><shadow><t1 color=#ffffff>");
  if (uStack_1c4 <= uVar11) {
    if (10 < uStack_1c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1cc);
    }
    uStack_1c4 = uVar11 + 0x20 & 0xffffffe0;
    local_1cc = _malloc(uStack_1c4 * 2);
  }
  _wcsncpy(local_1cc,L"<p align=right><shadow><t1 color=#ffffff>",uVar11);
  local_1cc[uVar11] = L'\0';
  local_1c8 = uVar11;
  puVar7 = FUN_009b5030(&ppuStack_23c,(undefined4 *)((int)this + 0x378));
  FUN_0040cae0(&local_1cc,(wchar_t *)*puVar7,puVar7[1]);
  if (10 < uStack_234) {
                    /* WARNING: Subroutine does not return */
    _free(ppuStack_23c);
  }
  sVar8 = FUN_00ace02d(L":</t1></shadow></p>");
  FUN_0040cae0(&local_1cc,L":</t1></shadow></p>",sVar8);
  puVar7 = operator_new(0x3fc);
  uStack_40 = 0xb;
  if (puVar7 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_00833290(puVar7);
  }
  uStack_40 = 10;
  (**(code **)(*piVar9 + 100))(1,this,0x40000000);
  ppuStack_23c = (undefined **)((int)this + 0x18);
  puStack_248 = (undefined *)0x1;
  pppuStack_238 = &ppuStack_244;
  ppuStack_244 = &PTR_FUN_00d18c2c;
  pppuStack_240 = (undefined ***)*ppuStack_23c;
  *(undefined *****)(*ppuStack_23c + 4) = &pppuStack_240;
  *ppuStack_23c = (undefined *)&pppuStack_240;
  iVar6 = -0x3d000000;
  iVar20 = -0x3d000000;
  piVar9[0x28] = 1;
  uStack_4c = 0xc;
  pvVar18 = this;
  (**(code **)(piVar9[0x29] + 4))();
  piVar9[0x2e] = (int)pvVar18;
  (**(code **)piVar9[0x29])();
  piVar9[0x2f] = iVar6;
  piVar9[0x30] = iVar20;
  if (ppuStack_23c != (undefined **)0x0) {
    *ppuStack_23c = (undefined *)pppuStack_240;
  }
  if (pppuStack_240 != (undefined ***)0x0) {
    pppuStack_240[1] = ppuStack_23c;
  }
  pppuStack_238 = &ppuStack_244;
  ppuStack_23c = (undefined **)((int)this + 0x18);
  puStack_248 = (undefined *)0x0;
  ppuStack_244 = &PTR_FUN_00d18c2c;
  pppuStack_240 = (undefined ***)*ppuStack_23c;
  *(undefined *****)(*ppuStack_23c + 4) = &pppuStack_240;
  *ppuStack_23c = (undefined *)&pppuStack_240;
  iVar6 = 0x3f000000;
  iVar20 = 0x3f000000;
  piVar9[0x3a] = 0;
  uStack_4c = 0xd;
  pvVar18 = this;
  (**(code **)(piVar9[0x3b] + 4))();
  piVar9[0x40] = (int)pvVar18;
  (**(code **)piVar9[0x3b])();
  piVar9[0x41] = iVar6;
  piVar9[0x42] = iVar20;
  uStack_4c = 10;
  if (ppuStack_23c != (undefined **)0x0) {
    *ppuStack_23c = (undefined *)pppuStack_240;
  }
  if (pppuStack_240 != (undefined ***)0x0) {
    pppuStack_240[1] = ppuStack_23c;
  }
  FUN_0073f6e0(this,piVar9);
  do {
    cVar4 = (**(code **)(*piVar9 + 0x50))(1);
  } while (cVar4 != '\0');
  (**(code **)(*piVar9 + 0x54))(&local_1d8);
  (**(code **)(*piVar9 + 0x8c))(0);
  puVar7 = operator_new(0x3fc);
  uStack_54 = 0xe;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_00833290(puVar7);
  }
  uStack_54 = 10;
  (**(code **)(*(int *)((int)this + 0x39c) + 4))();
  *(undefined4 **)((int)this + 0x3b0) = puVar7;
  (*(code *)**(undefined4 **)((int)this + 0x39c))();
  pppuStack_240 = &ppuStack_24c;
  ppuStack_244 = (undefined **)((int)this + 0x18);
  ppuStack_24c = &PTR_FUN_00d18c2c;
  puStack_248 = *ppuStack_244;
  *(undefined ***)(*ppuStack_244 + 4) = &puStack_248;
  *ppuStack_244 = (undefined *)&puStack_248;
  uStack_234 = 0x3f000000;
  uVar19 = 0x3f000000;
  iVar6 = *(int *)((int)this + 0x3b0);
  *(undefined4 *)(iVar6 + 0xa0) = 0;
  uStack_54 = 0xf;
  pppuStack_238 = this;
  (**(code **)(*(int *)(iVar6 + 0xa4) + 4))();
  *(undefined ****)(iVar6 + 0xb8) = pppuStack_238;
  (*(code *)**(undefined4 **)(iVar6 + 0xa4))();
  *(uint *)(iVar6 + 0xbc) = uStack_234;
  *(undefined4 *)(iVar6 + 0xc0) = uVar19;
  if (ppuStack_244 != (undefined **)0x0) {
    *ppuStack_244 = puStack_248;
  }
  if (puStack_248 != (undefined *)0x0) {
    *(undefined ***)(puStack_248 + 4) = ppuStack_244;
  }
  pppuStack_240 = &ppuStack_24c;
  ppuStack_244 = (undefined **)((int)this + 0x18);
  ppuStack_24c = &PTR_FUN_00d18c2c;
  puStack_248 = *ppuStack_244;
  *(undefined ***)(*ppuStack_244 + 4) = &puStack_248;
  *ppuStack_244 = (undefined *)&puStack_248;
  uStack_234 = 0xc3000000;
  uVar19 = 0xc3000000;
  iVar6 = *(int *)((int)this + 0x3b0);
  *(undefined4 *)(iVar6 + 0xe8) = 2;
  uStack_54 = 0x10;
  pppuStack_238 = this;
  (**(code **)(*(int *)(iVar6 + 0xec) + 4))();
  *(undefined ****)(iVar6 + 0x100) = pppuStack_238;
  (*(code *)**(undefined4 **)(iVar6 + 0xec))();
  *(uint *)(iVar6 + 0x104) = uStack_234;
  *(undefined4 *)(iVar6 + 0x108) = uVar19;
  uStack_54 = 10;
  if (ppuStack_244 != (undefined **)0x0) {
    *ppuStack_244 = puStack_248;
  }
  if (puStack_248 != (undefined *)0x0) {
    *(undefined ***)(puStack_248 + 4) = ppuStack_244;
  }
  (**(code **)(**(int **)((int)this + 0x3b0) + 100))(1,this,0x40000000);
  FUN_0073f6e0(this,*(int **)((int)this + 0x3b0));
  do {
    cVar4 = (**(code **)(**(int **)((int)this + 0x3b0) + 0x50))(1);
  } while (cVar4 != '\0');
  (**(code **)(**(int **)((int)this + 0x3b0) + 0x54))(&local_20c);
  (**(code **)(**(int **)((int)this + 0x3b0) + 0x8c))(0);
  if (10 < uStack_1ec) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_1f4);
  }
  if (&DAT_00000014 < local_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(local_1d4);
  }
  if ((uint)local_20c < 0xb) {
    ExceptionList = pvStack_70;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EBP);
}


//// FUNCTION FUN_00728640 @ 00728640 ////

undefined4 * __thiscall FUN_00728640(void *this,byte param_1)

{
  FUN_00728660(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00728660 @ 00728660 ////

void __fastcall FUN_00728660(undefined4 *param_1)

{
  param_1[0xe7] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xe9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe9] = param_1[0xe8];
  }
  if (param_1[0xe8] != 0) {
    *(undefined4 *)(param_1[0xe8] + 4) = param_1[0xe9];
  }
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xec] = 0;
  if ((undefined4 *)param_1[0xe9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe9] = param_1[0xe8];
  }
  if (param_1[0xe8] != 0) {
    *(undefined4 *)(param_1[0xe8] + 4) = param_1[0xe9];
  }
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  if (0x14 < (uint)param_1[0xe0]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xde]);
  }
  param_1[0xd8] = &PTR_FUN_00d2db94;
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
  param_1[0xd2] = &PTR_FUN_00d49488;
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
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_007287e0 @ 007287e0 ////

int * __thiscall FUN_007287e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00728950 @ 00728950 ////

void __thiscall FUN_00728950(void *this,int *param_1)

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


//// FUNCTION FUN_00728a10 @ 00728a10 ////

void __cdecl FUN_00728a10(int param_1)

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


//// FUNCTION FUN_00728a30 @ 00728a30 ////

void __cdecl FUN_00728a30(int *param_1)

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


//// FUNCTION FUN_00728a60 @ 00728a60 ////

void __fastcall FUN_00728a60(int *param_1)

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


//// FUNCTION FUN_00728ac0 @ 00728ac0 ////

void __fastcall FUN_00728ac0(int *param_1)

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


//// FUNCTION FUN_00728c00 @ 00728c00 ////

void __thiscall FUN_00728c00(void *this,undefined4 *param_1,uint param_2)

{
  void *this_00;
  
  if (*(int *)((int)this + 0x358) != 0) {
    if (*(void **)((int)this + 0x374) != (void *)0x0) {
      FUN_00975910(*(void **)((int)this + 0x374),(byte *)*param_1,param_2);
      return;
    }
    this_00 = (void *)FUN_004df240(*(int *)((int)this + 0x358));
    if (this_00 != (void *)0x0) {
      FUN_00975910(this_00,(byte *)*param_1,param_2);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00728c50 @ 00728c50 ////

uint __thiscall FUN_00728c50(void *this,int param_1)

{
  void *this_00;
  byte *pbVar1;
  uint in_EAX;
  undefined4 *puVar2;
  float10 fVar3;
  float fVar4;
  undefined4 uVar5;
  
  this_00 = *(void **)((int)this + 0x358);
  if (this_00 != (void *)0x0) {
    fVar3 = FUN_007267d0(param_1);
    fVar4 = (float)fVar3;
    puVar2 = (undefined4 *)FUN_00726580(param_1);
    FUN_004e9fa0(this_00,puVar2,fVar4);
    if (*(int *)((int)this + 0x374) != 0) {
      puVar2 = (undefined4 *)FUN_00726580(param_1);
      pbVar1 = (byte *)*puVar2;
      uVar5 = 1;
      fVar3 = FUN_007267d0(param_1);
      FUN_009757a0(*(void **)((int)this + 0x374),pbVar1,(float)fVar3,uVar5);
    }
    (**(code **)(*(int *)((int)this + 0x35c) + 4))();
    *(int *)((int)this + 0x370) = param_1;
    in_EAX = (*(code *)**(undefined4 **)((int)this + 0x35c))();
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00728cd0 @ 00728cd0 ////

int __fastcall FUN_00728cd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x358) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x374);
    if (iVar1 == 0) {
      iVar1 = FUN_004df240(*(int *)(param_1 + 0x358));
      return iVar1;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_00728db0 @ 00728db0 ////

void __thiscall FUN_00728db0(void *this,int param_1)

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


//// FUNCTION FUN_00728e10 @ 00728e10 ////

int * __fastcall FUN_00728e10(int *param_1)

{
  FUN_00728ac0(param_1);
  return param_1;
}


//// FUNCTION FUN_00728e20 @ 00728e20 ////

int * __fastcall FUN_00728e20(int *param_1)

{
  FUN_00728a60(param_1);
  return param_1;
}


//// FUNCTION FUN_00728f20 @ 00728f20 ////

void __fastcall FUN_00728f20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d49820;
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


//// FUNCTION FUN_00728fd0 @ 00728fd0 ////

int * __fastcall FUN_00728fd0(int *param_1)

{
  FUN_00728ac0(param_1);
  return param_1;
}


//// FUNCTION FUN_00728fe0 @ 00728fe0 ////

int * __fastcall FUN_00728fe0(int *param_1)

{
  FUN_00728a60(param_1);
  return param_1;
}


//// FUNCTION FUN_00728ff0 @ 00728ff0 ////

void FUN_00728ff0(void)

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


//// FUNCTION FUN_00729030 @ 00729030 ////

void FUN_00729030(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_007290a0 @ 007290a0 ////

void FUN_007290a0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_007290a0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_007290e0 @ 007290e0 ////

void __fastcall FUN_007290e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00728ff0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00729120 @ 00729120 ////

void __fastcall FUN_00729120(int param_1)

{
  FUN_007290a0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00729150 @ 00729150 ////

int __fastcall FUN_00729150(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00728ff0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00729180 @ 00729180 ////

void __thiscall
FUN_00729180(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cd4208;
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
  piVar3 = (int *)FUN_00729030(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0072927b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00728db0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_00728950(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0072927b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00728950(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_00728db0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_00729330 @ 00729330 ////

void __thiscall FUN_00729330(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cd4228;
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
  FUN_00728ac0((int *)&param_2);
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
      goto LAB_007294a1;
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
      piVar2 = (int *)FUN_00728a30(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_00728a10((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_007294a1:
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
            FUN_00728db0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00728950(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_00728db0(this,(int)piVar5);
              break;
            }
LAB_00729564:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00728950(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_00729564;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_00728db0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00728950(this,piVar5);
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


//// FUNCTION FUN_007295f0 @ 007295f0 ////

void __thiscall FUN_007295f0(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x15) == '\0') {
    piVar3 = (int *)piVar5[1];
    do {
      piVar5 = piVar3;
      local_4 = *param_2 < piVar5[3];
      if (local_4) {
        piVar3 = (int *)*piVar5;
      }
      else {
        piVar3 = (int *)piVar5[2];
      }
    } while (*(char *)((int)piVar3 + 0x15) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00729180(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00728a60((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_00729180(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007296b0 @ 007296b0 ////

void __thiscall FUN_007296b0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_007290a0((void *)piVar6[1]);
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
    FUN_00729330(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00729770 @ 00729770 ////

undefined4 * __thiscall FUN_00729770(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00729180(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00729180(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_00729180(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_00728a60((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00729180(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_00729180(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_00728ac0((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_00729180(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_00729180(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_007295f0(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_00729910 @ 00729910 ////

int * __thiscall FUN_00729910(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_8 [2];
  
  piVar3 = *(int **)((int)this + 4);
  if (*(char *)(piVar3[1] + 0x15) == '\0') {
    piVar1 = (int *)piVar3[1];
    do {
      if (piVar1[3] < *param_1) {
        piVar2 = (int *)piVar1[2];
      }
      else {
        piVar2 = (int *)*piVar1;
        piVar3 = piVar1;
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0x15) == '\0');
  }
  if ((piVar3 != *(int **)((int)this + 4)) && (piVar3[3] <= *param_1)) {
    return piVar3 + 4;
  }
  local_8[0] = *param_1;
  local_8[1] = 0;
  piVar3 = FUN_00729770(this,&param_1,piVar3,local_8);
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_007299f0 @ 007299f0 ////

void __thiscall FUN_007299f0(void *this,char *param_1)

{
  undefined **ppuVar1;
  char cVar2;
  void *this_00;
  undefined ***pppuVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd424b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x3b4);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    pppuVar3 = (undefined ***)0x0;
  }
  else {
    pppuVar3 = FUN_00727730(this_00,this,param_1);
  }
  local_4 = 0xffffffff;
  (*(code *)(*pppuVar3)[6])(9);
  if (*(int *)((int)this + 0x370) == 0) {
    (*(code *)(*pppuVar3)[0x19])(1,this,0x42000000);
  }
  else {
    (*(code *)(*pppuVar3)[0x19])(2,*(int *)((int)this + 0x370),0xc0000000);
  }
  (**(code **)(*(int *)((int)this + 0x35c) + 4))();
  *(undefined ****)((int)this + 0x370) = pppuVar3;
  (*(code *)**(undefined4 **)((int)this + 0x35c))();
  ppuVar1 = *pppuVar3;
  fVar5 = (float10)(**(code **)(*(int *)this + 0x10))();
  fVar6 = (float10)(*(code *)(*pppuVar3)[4])();
  (*(code *)ppuVar1[0x17])(1,this);
  (**(code **)(*(int *)this + 0xc))(pppuVar3,2);
  do {
    cVar2 = (*(code *)(*pppuVar3)[0x14])(1);
  } while (cVar2 != '\0');
  piVar4 = FUN_00729910((void *)((int)this + 0x378),(int *)&stack0xffffffdc);
  *piVar4 = (int)pppuVar3;
  ExceptionList = (void *)(float)(((float10)(float)fVar5 - fVar6) * (float10)0.5);
  return;
}


//// FUNCTION FUN_00729b80 @ 00729b80 ////

int __fastcall FUN_00729b80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00728ff0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00729bb0 @ 00729bb0 ////

undefined4 * __thiscall FUN_00729bb0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4284;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d4984c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d49830;
  piVar1 = (int *)((int)this + 0x348);
  *(undefined4 *)((int)this + 0x350) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d1ec60;
  *(int *)((int)this + 0x358) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x34c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_LAB_00d49820;
  *(undefined4 *)((int)this + 0x370) = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x374) = param_2;
  iVar3 = FUN_00728ff0();
  *(int *)((int)this + 0x37c) = iVar3;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 0x37c) + 4) = *(int *)((int)this + 0x37c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x37c) = *(undefined4 *)((int)this + 0x37c);
  *(int *)(*(int *)((int)this + 0x37c) + 8) = *(int *)((int)this + 0x37c);
  *(undefined4 *)((int)this + 0x380) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00729c90 @ 00729c90 ////

void * __thiscall FUN_00729c90(void *this,byte param_1)

{
  FUN_00729cb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00729cb0 @ 00729cb0 ////

void __fastcall FUN_00729cb0(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd42b4;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  FUN_007296b0((void *)(param_1 + 0x378),&local_10,(int *)**(int **)(param_1 + 0x37c),
               *(int **)(param_1 + 0x37c));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x37c));
}


//// FUNCTION FUN_00729e10 @ 00729e10 ////

int * __cdecl FUN_00729e10(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  void *this;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piStack_58;
  undefined **ppuStack_3c;
  int iStack_38;
  int *piStack_34;
  undefined ***pppuStack_30;
  int iStack_28;
  void *pvStack_24;
  int iStack_20;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = DAT_0104e018;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd42db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0104e018 != (undefined4 *)0x0) {
    iVar6 = DAT_0104e018[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104e018[0x12] = iVar6 + -1;
    if (iVar6 + -1 == 0) {
      (**(code **)*puVar1)(1);
    }
    (*(code *)DAT_0104e004[1])();
    DAT_0104e018 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e004)();
  }
  this = operator_new(900);
  uStack_4 = 0;
  if (this == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00729bb0(this,param_1,param_2);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104e004[1])();
  DAT_0104e018 = piVar3;
  (*(code *)*DAT_0104e004)();
  (**(code **)(*DAT_0104e018 + 0x7c))(0x43800000);
  iVar6 = *DAT_0104e018;
  uVar5 = 0;
  iVar4 = FUN_0071b2b0();
  (**(code **)(iVar6 + 0x68))(2,iVar4,uVar5);
  iStack_28 = FUN_0071b2b0();
  pppuStack_30 = &ppuStack_3c;
  iStack_38 = 0;
  piStack_34 = (int *)0x0;
  ppuStack_3c = &PTR_FUN_00d18c2c;
  if (iStack_28 != 0) {
    piStack_34 = (int *)(iStack_28 + 0x18);
    iStack_38 = *piStack_34;
    *(int **)(*piStack_34 + 4) = &iStack_38;
    *piStack_34 = (int)&iStack_38;
  }
  piVar2 = DAT_0104e018;
  pvStack_24 = (void *)0x0;
  iStack_20 = 0;
  piVar3 = DAT_0104e018 + 0x29;
  uStack_14 = 1;
  DAT_0104e018[0x28] = 1;
  (**(code **)(*piVar3 + 4))();
  puVar1 = (undefined4 *)*piVar3;
  piVar2[0x2e] = iStack_28;
  (*(code *)*puVar1)();
  piVar2[0x2f] = (int)pvStack_24;
  piVar2[0x30] = iStack_20;
  uStack_14 = 0xffffffff;
  if (piStack_34 != (int *)0x0) {
    *piStack_34 = iStack_38;
  }
  if (iStack_38 != 0) {
    *(int **)(iStack_38 + 4) = piStack_34;
  }
  iVar4 = FUN_0071b2b0();
  iVar6 = 0;
  piStack_58 = (int *)0x0;
  if (iVar4 != 0) {
    piStack_58 = (int *)(iVar4 + 0x18);
    iVar6 = *piStack_58;
    *(undefined1 **)(*piStack_58 + 4) = &stack0xffffffa4;
    *piStack_58 = (int)&stack0xffffffa4;
  }
  piVar2 = DAT_0104e018;
  piVar3 = DAT_0104e018 + 0x3b;
  uStack_14 = 2;
  DAT_0104e018[0x3a] = 2;
  (**(code **)(*piVar3 + 4))();
  puVar1 = (undefined4 *)*piVar3;
  piVar2[0x40] = iVar4;
  (*(code *)*puVar1)();
  piVar2[0x41] = 0;
  piVar2[0x42] = 0;
  uStack_14 = 0xffffffff;
  if (piStack_58 != (int *)0x0) {
    *piStack_58 = iVar6;
  }
  if (iVar6 != 0) {
    *(int **)(iVar6 + 4) = piStack_58;
  }
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0xc))(DAT_0104e018,1);
  ExceptionList = pvStack_24;
  return DAT_0104e018;
}


//// FUNCTION FUN_0072a0a0 @ 0072a0a0 ////

void __fastcall FUN_0072a0a0(int param_1)

{
  int iVar1;
  bool bVar2;
  void *this;
  
  this = (void *)(**(code **)(**(int **)(param_1 + 0x37c) + 0xa4))();
  iVar1 = *(int *)(param_1 + 0x360);
  bVar2 = false;
  if (iVar1 == 1) {
LAB_0072a0c8:
    if (*(char *)(param_1 + 0x398) == '\0') {
      FUN_005e7ce0(this,1);
      *(undefined1 *)(param_1 + 0x398) = 1;
    }
  }
  else {
    if (iVar1 == 2) {
      bVar2 = true;
    }
    else if (iVar1 == 3) {
      bVar2 = true;
      goto LAB_0072a0c8;
    }
    if (*(char *)(param_1 + 0x398) != '\0') {
      FUN_005e7ce0(this,1);
      *(undefined1 *)(param_1 + 0x398) = 0;
    }
  }
  if (bVar2) {
    if (*(char *)(param_1 + 0x399) == '\0') {
      FUN_005e7e20(this,1);
      *(undefined1 *)(param_1 + 0x399) = 1;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x399) != '\0') {
    FUN_005e7e20(this,1);
    *(undefined1 *)(param_1 + 0x399) = 0;
  }
  return;
}


//// FUNCTION FUN_0072a140 @ 0072a140 ////

void __fastcall FUN_0072a140(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[0xd8];
  iVar1 = *param_1;
  if (iVar3 == 1) {
    iVar3 = param_1[0xd6];
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x60))(1,uVar2,iVar3);
    iVar3 = param_1[0xd7];
    iVar1 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x68))(1,uVar2,iVar3);
    (**(code **)(*(int *)param_1[0xdf] + 0x60))(2,param_1,0x41400000);
    (**(code **)(*(int *)param_1[0xdf] + 0x68))(2,param_1,0x41400000);
    return;
  }
  if (iVar3 != 2) {
    if (iVar3 != 3) {
      iVar3 = param_1[0xd6];
      uVar2 = FUN_0071b2a0();
      (**(code **)(iVar1 + 0x5c))(1,uVar2,iVar3);
      iVar3 = param_1[0xd7];
      iVar1 = *param_1;
      uVar2 = FUN_0071b2a0();
      (**(code **)(iVar1 + 0x68))(1,uVar2,iVar3);
      (**(code **)(*(int *)param_1[0xdf] + 0x5c))(1,param_1,0x41400000);
      (**(code **)(*(int *)param_1[0xdf] + 0x68))(2,param_1,0x41400000);
      return;
    }
    iVar3 = param_1[0xd6];
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x60))(1,uVar2,iVar3);
    iVar3 = param_1[0xd7];
    iVar1 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 100))(1,uVar2,iVar3);
    (**(code **)(*(int *)param_1[0xdf] + 0x60))(2,param_1,0x41400000);
    (**(code **)(*(int *)param_1[0xdf] + 100))(1,param_1,0x41400000);
    return;
  }
  iVar3 = param_1[0xd6];
  uVar2 = FUN_0071b2a0();
  (**(code **)(iVar1 + 0x5c))(1,uVar2,iVar3);
  iVar3 = param_1[0xd7];
  iVar1 = *param_1;
  uVar2 = FUN_0071b2a0();
  (**(code **)(iVar1 + 100))(1,uVar2,iVar3);
  (**(code **)(*(int *)param_1[0xdf] + 0x5c))(1,param_1,0x41400000);
  (**(code **)(*(int *)param_1[0xdf] + 100))(1,param_1,0x41400000);
  return;
}


//// FUNCTION FUN_0072a2b0 @ 0072a2b0 ////

void __fastcall FUN_0072a2b0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0063d7a0(param_1);
  if ((char)uVar1 != '\0') {
    FUN_0063e040(param_1);
    FUN_0072a0a0((int)param_1);
    (**(code **)(*param_1 + 0x100))();
    (**(code **)(*param_1 + 0x50))(1);
    FUN_0073fb40(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_0072a2f0 @ 0072a2f0 ////

int * __thiscall FUN_0072a2f0(void *this,undefined4 param_1,uint param_2)

{
  void *this_00;
  undefined4 *this_01;
  int *piVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4324;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0063db20(this,param_1);
  local_4._0_1_ = 1;
  *(undefined ***)this = &PTR_FUN_00d4997c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d49960;
  this_00 = operator_new(0x2a8);
  if (this_00 == (void *)0x0) {
    this_01 = (undefined4 *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/speechbubble.dds",0x13);
    local_28 = 0x13;
    local_2c[0x13] = '\0';
    local_4 = CONCAT31(local_4._1_3_,3);
    this_01 = FUN_005e73e0(this_00,&local_2c);
  }
  local_4 = 1;
  if ((this_00 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_005e7ce0(this_01,1);
  FUN_005e7e20(this_01,1);
  (**(code **)(**(int **)((int)this + 0x37c) + 0xa0))(this_01);
  piVar1 = (int *)(**(code **)(**(int **)((int)this + 0x37c) + 0xa4))();
  (**(code **)(*piVar1 + 0xc))(&stack0x00000000);
  FUN_0073f6e0(this,*(int **)((int)this + 0x37c));
  FUN_0063e040(this);
  FUN_0072a140(this);
  *(undefined1 *)((int)this + 0x398) = 0;
  *(undefined1 *)((int)this + 0x399) = 0;
  if (10 < param_2) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0xc0ffffff);
  }
  ExceptionList = pvStack_14;
  return this;
}


//// FUNCTION FUN_0072a480 @ 0072a480 ////

undefined4 * __thiscall FUN_0072a480(void *this,byte param_1)

{
  FUN_0072a4a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0072a4a0 @ 0072a4a0 ////

void __fastcall FUN_0072a4a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4997c;
  param_1[0x14] = &PTR_FUN_00d49960;
  FUN_0063dd60(param_1);
  return;
}


//// FUNCTION FUN_0072a530 @ 0072a530 ////

int * __thiscall FUN_0072a530(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0072a570 @ 0072a570 ////

void __fastcall FUN_0072a570(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  piVar1 = *(int **)(param_1 + 0x340 + *(int *)(param_1 + 0x434) * 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))();
    uVar2 = FUN_00acd42c();
    *(int *)(param_1 + 0x44c) = (int)uVar2;
  }
  return;
}


//// FUNCTION FUN_0072a5d0 @ 0072a5d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0072a5d0(int *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  ulonglong uVar7;
  float fVar8;
  float local_10;
  int local_c;
  int local_4;
  
  uVar7 = FUN_00990ae0(param_1,param_2);
  local_4 = (int)uVar7;
  fVar8 = (float)param_1[0x113];
  if (param_1[0x113] < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  fVar1 = (float)(local_4 - param_1[0x112]);
  if (local_4 - param_1[0x112] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar1 = fVar1 * fVar8 * 0.001;
  local_10 = 0.0;
  local_c = 0;
  piVar5 = param_1 + 0xd6;
  while( true ) {
    if (param_1[0x120] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1[0x121] - param_1[0x120] >> 5;
    }
    if (iVar4 <= local_c) break;
    iVar4 = *(int *)*piVar5;
    fVar8 = (fVar1 - local_10) + (float)param_1[0x114];
    iVar2 = FUN_0071b2b0();
    (**(code **)(iVar4 + 100))(2,iVar2,fVar8);
    (**(code **)(*(int *)*piVar5 + 0x50))(1);
    fVar6 = (float10)(**(code **)(*(int *)*piVar5 + 0x14))();
    local_c = local_c + 1;
    local_10 = (float)(fVar6 + (float10)local_10);
    piVar5 = piVar5 + 6;
  }
  param_1[0x114] = (int)(fVar1 + (float)param_1[0x114]);
  param_1[0x112] = local_4;
  if (param_1[0x118] == 1) {
    local_4 = local_4 - param_1[0x117];
    fVar8 = (float)local_4;
    if (local_4 < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar8 = fVar8 / _DAT_00e585dc;
    if ((fVar8 < 0.0) || ((fVar8 < 1.0 && ((fVar8 < 0.0 || (fVar8 < 1.0)))))) {
      if (param_1[0x106] != 0) {
        puVar3 = FUN_006a47d0(&local_4);
        FUN_0069ce60((void *)param_1[0x106],*puVar3);
      }
      if (param_1[0x10c] != 0) {
        puVar3 = FUN_006a47d0(&local_4);
        FUN_0069ce60((void *)param_1[0x10c],*puVar3);
        FUN_0073fb40(param_1);
        return;
      }
    }
    else {
      param_1[0x118] = 2;
    }
  }
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_0072a7d0 @ 0072a7d0 ////

undefined4 __fastcall FUN_0072a7d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00990ae0(param_1,param_2);
  uVar1 = (int)uVar2 - *(int *)(param_1 + 0x3f4);
  if (1000 < uVar1) {
    uVar1 = FUN_005541d0(0xc);
    if ((char)uVar1 != '\0') {
      if (-1 < *(int *)(param_1 + 1000)) {
        FUN_009b11d0(*(int *)(param_1 + 1000));
      }
      *(undefined4 *)(param_1 + 1000) = 0xffffffff;
      if (*(int *)(param_1 + 0x430) == 0) {
        *(undefined4 *)(param_1 + 0x3e4) = 1;
        return 1;
      }
      uVar1 = (*(int *)(param_1 + 0x434) - *(int *)(param_1 + 0x430) >> 5) + 1;
      *(uint *)(param_1 + 0x3e4) = uVar1;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_0072a840 @ 0072a840 ////

void FUN_0072a840(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd433b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar2);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x11b);
  uVar1 = DAT_0104e030;
  (**(code **)(this[0xe] + 4))();
  this[0x13] = uVar1;
  (**(code **)this[0xe])();
  FUN_004707d0(DAT_0104917c,(int)this);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0072a8e0 @ 0072a8e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0072a8e0(void *this,int param_1)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  float10 fVar3;
  
  if (-1 < param_1) {
    if (*(int *)((int)this + 0x480) == 0) {
      in_EAX = 0;
    }
    else {
      in_EAX = *(int *)((int)this + 0x484) - *(int *)((int)this + 0x480) >> 5;
    }
    if (param_1 < (int)in_EAX) {
      piVar2 = (int *)FUN_0071b2b0();
      iVar1 = *(int *)((int)this + param_1 * 0x18 + 0x358);
      fVar3 = (float10)(**(code **)(*piVar2 + 0x14))();
      if ((float10)*(float *)(iVar1 + 0x9c) < fVar3 - (float10)_DAT_00e585e0) {
        return 1;
      }
      return 0;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_0072a970 @ 0072a970 ////

void __fastcall FUN_0072a970(void *param_1)

{
  void *this;
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd435b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_1 + 0x43f) == '\0') {
    ExceptionList = &local_c;
    FUN_004237f0(DAT_00f87b04);
  }
  FUN_00748240(*(int *)((int)param_1 + 0x2d4));
  this = operator_new(0xbc);
  local_4 = 0;
  if (this == (void *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_00745100(this,0xff,7,0);
  }
  local_4 = 0xffffffff;
  FUN_00744f30(this_00,1,5);
  FUN_0073e510(param_1,this_00);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0072aa10 @ 0072aa10 ////

void __fastcall FUN_0072aa10(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  undefined4 *this_00;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd437b;
  local_c = ExceptionList;
  iVar2 = 0;
  piVar3 = (int *)(param_1 + 0x358);
  ExceptionList = &local_c;
  while( true ) {
    this_00 = (undefined4 *)0x0;
    if (*(int *)(param_1 + 0x480) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x484) - *(int *)(param_1 + 0x480) >> 5;
    }
    if (iVar1 <= iVar2) break;
    FUN_00748240(*(int *)(*piVar3 + 0x2d4));
    this = operator_new(0xbc);
    local_4 = 0;
    if (this != (void *)0x0) {
      this_00 = FUN_00745100(this,0xff,7,0);
    }
    local_4 = 0xffffffff;
    FUN_00744f30(this_00,1,5);
    FUN_0073e510((void *)*piVar3,this_00);
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0072aaf0 @ 0072aaf0 ////

void __fastcall FUN_0072aaf0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d49a88;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0072ab40 @ 0072ab40 ////

void __fastcall FUN_0072ab40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d49a88;
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


//// FUNCTION FUN_0072ab90 @ 0072ab90 ////

void __thiscall FUN_0072ab90(void *this,undefined4 *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  int iVar6;
  uint unaff_ESI;
  float10 fVar7;
  ulonglong uVar8;
  float fVar9;
  void *_Memory;
  char acStack_f8 [12];
  undefined2 *puStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined2 auStack_e0 [10];
  void *apvStack_cc [2];
  uint uStack_c4;
  void *apvStack_ac [2];
  uint uStack_a4;
  wchar_t awStack_8c [48];
  void *pvStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd439b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0x10))();
  uVar8 = FUN_00acd42c();
  puStack_ec = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = 0;
  uStack_e4 = 10;
  uVar3 = FUN_00ace02d(L"<table align=justify width=");
  FUN_004036d0(&puStack_ec,L"<table align=justify width=",uVar3);
  uStack_4 = 0;
  sVar4 = _swprintf(awStack_8c,0xd18f7c,(wchar_t *)uVar8);
  FUN_0040cae0(&puStack_ec,awStack_8c,sVar4);
  puVar5 = FUN_0043bdc0(apvStack_cc,L"><tr><td align=center><translate>",param_1);
  puVar5 = FUN_0043be60(apvStack_ac,puVar5,L"</translate></td></tr></table>");
  FUN_0040cae0(&puStack_ec,(wchar_t *)*puVar5,puVar5[1]);
  if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_ac[0]);
  }
  if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_cc[0]);
  }
  acStack_f8[8] = '\x14';
  acStack_f8[9] = '\0';
  acStack_f8[10] = '\0';
  acStack_f8[0xb] = '\0';
  acStack_f8[7] = 0xff;
  acStack_f8[6] = 0x40;
  acStack_f8[5] = 0x49;
  acStack_f8[4] = 0x58;
  FUN_00830550(*(void **)((int)this + param_2 * 0x18 + 0x358),7,acStack_f8 + 8);
  acStack_f8[3] = 0xff;
  acStack_f8[2] = 0xff;
  acStack_f8[1] = 0xff;
  acStack_f8[0] = -1;
  FUN_00830550(*(void **)((int)this + param_2 * 0x18 + 0x358),8,acStack_f8);
  FUN_00830550(*(void **)((int)this + param_2 * 0x18 + 0x358),9,acStack_f8 + 4);
  (**(code **)(**(int **)((int)this + param_2 * 0x18 + 0x358) + 0x54))(&puStack_ec);
  (**(code **)(**(int **)((int)this + param_2 * 0x18 + 0x358) + 0x84))(0);
  (**(code **)(**(int **)((int)this + param_2 * 0x18 + 0x358) + 0x14))();
  if (param_2 == 0) {
    iVar6 = FUN_0071b2b0();
  }
  else {
    iVar6 = *(int *)((int)this + param_2 * 0x18 + 0x340);
  }
  (**(code **)(**(int **)((int)this + param_2 * 0x18 + 0x358) + 100))(2,iVar6,0);
  piVar2 = *(int **)((int)this + param_2 * 0x18 + 0x358);
  fVar7 = (float10)(**(code **)(*(int *)this + 0x10))();
  fVar9 = (float)fVar7;
  fVar7 = (float10)(**(code **)(*piVar2 + 0x10))();
  _Memory = (void *)(float)(((float10)fVar9 - fVar7) * (float10)0.5);
  (**(code **)(**(int **)((int)this + param_2 * 0x18 + 0x358) + 0x5c))(1,this,_Memory);
  do {
    cVar1 = (**(code **)(*(int *)this + 0x50))(1);
  } while (cVar1 != '\0');
  if (10 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_2c;
  return;
}


//// FUNCTION FUN_0072add0 @ 0072add0 ////

void FUN_0072add0(void)

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
  puStack_8 = &LAB_00cd43b8;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_00405d50(local_50,(undefined4 *)"invalid vector<T> subscript",0x1b);
  local_4 = 0;
  FUN_00405f00(local_34,local_50);
  local_34[0] = &PTR_FUN_00d16dc0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_00ddd664);
}


//// FUNCTION FUN_0072ae70 @ 0072ae70 ////

void __fastcall FUN_0072ae70(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cd4440;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d49b74;
  param_1[0x14] = &PTR_FUN_00d49b58;
  puVar2 = (undefined4 *)param_1[0x106];
  local_4 = 6;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x101] + 4))();
    param_1[0x106] = 0;
    (**(code **)param_1[0x101])();
  }
  puVar2 = (undefined4 *)param_1[0x10c];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x107] + 4))();
    param_1[0x10c] = 0;
    (**(code **)param_1[0x107])();
  }
  if (-1 < (int)param_1[0x10e]) {
    FUN_009b11d0(param_1[0x10e]);
  }
  param_1[0x10e] = 0xffffffff;
  if ((undefined4 *)param_1[0x124] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x124],(undefined4 *)param_1[0x125]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x124]);
  }
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  if ((undefined4 *)param_1[0x120] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x120],(undefined4 *)param_1[0x121]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x120]);
  }
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x107] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  if ((undefined4 *)param_1[0x109] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x109] = param_1[0x108];
  }
  if (param_1[0x108] != 0) {
    *(undefined4 *)(param_1[0x108] + 4) = param_1[0x109];
  }
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x101] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x106] = 0;
  if ((undefined4 *)param_1[0x103] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x103] = param_1[0x102];
  }
  if (param_1[0x102] != 0) {
    *(undefined4 *)(param_1[0x102] + 4) = param_1[0x103];
  }
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(param_1 + 0xe9,0x18,4,FUN_006ab2b0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(param_1 + 0xd1,0x18,4,FUN_00443200);
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0072b0c0 @ 0072b0c0 ////

void __thiscall FUN_0072b0c0(void *this,void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x480);
  uVar2 = param_2 - 1;
  if ((iVar1 == 0) || ((uint)(*(int *)((int)this + 0x484) - iVar1 >> 5) <= uVar2)) {
    uVar2 = FUN_0072add0();
  }
  FUN_004015d0(param_1,*(char **)(uVar2 * 0x20 + iVar1),*(uint *)(uVar2 * 0x20 + 4 + iVar1));
  return;
}


//// FUNCTION FUN_0072b100 @ 0072b100 ////

void __thiscall FUN_0072b100(void *this,void *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x490);
  uVar2 = param_2 - 1;
  if ((iVar1 == 0) || ((uint)(*(int *)((int)this + 0x494) - iVar1 >> 5) <= uVar2)) {
    uVar2 = FUN_0072add0();
  }
  FUN_004015d0(param_1,*(char **)(uVar2 * 0x20 + iVar1),*(uint *)(uVar2 * 0x20 + 4 + iVar1));
  return;
}


//// FUNCTION FUN_0072b140 @ 0072b140 ////

undefined4 * __fastcall FUN_0072b140(undefined4 *param_1)

{
  void *this;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd44c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d49b74;
  param_1[0x14] = &PTR_FUN_00d49b58;
  _eh_vector_constructor_iterator_(param_1 + 0xd1,0x18,4,FUN_004431b0,FUN_00443200);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(param_1 + 0xe9,0x18,4,FUN_006ab260,FUN_006ab2b0);
  param_1[0x104] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = param_1 + 0x101;
  param_1[0x101] = &PTR_FUN_00d2d110;
  param_1[0x106] = 0;
  param_1[0x10a] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = param_1 + 0x107;
  param_1[0x107] = &PTR_FUN_00d2d110;
  param_1[0x10c] = 0;
  *(undefined1 *)((int)param_1 + 0x43f) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  uVar1 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  bVar4 = 1;
  iVar2 = 6;
  param_1[0x111] = (int)uVar1;
  param_1[0x112] = (int)uVar1;
  puVar3 = param_1;
  this = (void *)FUN_004f3b20();
  FUN_004f98f0(this,iVar2,(int)puVar3,bVar4);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0072b250 @ 0072b250 ////

undefined4 * __thiscall FUN_0072b250(void *this,byte param_1)

{
  FUN_0072ae70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0072b270 @ 0072b270 ////

void __fastcall FUN_0072b270(int *param_1,undefined4 param_2)

{
  int iVar1;
  void *this;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd44e3;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)0x0;
  if ((param_1[0x10c] != 0) && (param_1[0x106] != 0)) {
    ExceptionList = &local_c;
    uVar5 = FUN_00990ae0(param_1,param_2);
    if (((uint)param_1[0x116] <= (uint)((int)uVar5 - param_1[0x117])) && (param_1[0x118] == 0)) {
      param_1[0x118] = 1;
      uVar5 = FUN_00990ae0(param_1[0x116],param_1[0x117]);
      param_1[0x117] = (int)uVar5;
    }
    if (param_1[0x118] == 2) {
      if (param_1[0x124] == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1[0x125] - param_1[0x124] >> 5;
      }
      if (param_1[0x115] < iVar1) {
        param_1[0x115] = param_1[0x115] + 1;
        if ((undefined4 *)param_1[0x106] != (undefined4 *)0x0) {
          FUN_00401440((undefined4 *)param_1[0x106]);
          FUN_005ebbb0(param_1 + 0x101,0);
        }
        piVar2 = param_1 + 0x107;
        FUN_005ebbd0(param_1 + 0x101,(int)piVar2);
        local_2c = local_20;
        local_20[0] = 0;
        local_28 = 0;
        local_24 = 0x14;
        local_4 = 0;
        FUN_0072b100(param_1,&local_2c,param_1[0x115]);
        this = operator_new(0x360);
        local_4._0_1_ = 1;
        if (this != (void *)0x0) {
          puVar4 = FUN_0069d820(this,&local_2c,0,0,0x3f800000,0x3f800000);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        (**(code **)(*piVar2 + 4))();
        param_1[0x10c] = (int)puVar4;
        (**(code **)*piVar2)();
        piVar2 = (int *)FUN_0071b2b0();
        piVar3 = (int *)FUN_0071b2b0();
        iVar1 = *(int *)param_1[0x10c];
        (**(code **)(*piVar2 + 0x14))();
        (**(code **)(*piVar3 + 0x10))();
        (**(code **)(iVar1 + 0x74))();
        iVar1 = *(int *)param_1[0x10c];
        FUN_0071b2b0();
        (**(code **)(iVar1 + 0x5c))();
        iVar1 = *(int *)param_1[0x10c];
        FUN_0071b2b0();
        (**(code **)(iVar1 + 100))();
        FUN_0069ce60((void *)param_1[0x10c],0xffffff);
        (**(code **)(*param_1 + 0xc))(param_1[0x10c]);
        param_1[0x118] = 0;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
      }
      else {
        param_1[0x118] = 3;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0072b4c0 @ 0072b4c0 ////

/* WARNING: Removing unreachable block (ram,0x0072bb38) */

void __fastcall FUN_0072b4c0(int *param_1)

{
  uint uVar1;
  char *_Source;
  uint _Count;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  char *pcStack_e0;
  uint uStack_dc;
  void **ppvVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 *puVar15;
  void *local_ac;
  char *pcStack_a8;
  char *pcStack_a4;
  char *local_78;
  uint uStack_74;
  uint uStack_70;
  char acStack_6c [20];
  char *pcStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  char acStack_4c [28];
  undefined4 uStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4563;
  pvStack_c = ExceptionList;
  local_78 = (char *)0x0;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x50);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    ppvVar12 = &local_ac;
    local_ac = (void *)((uint)local_ac & 0xffffff00);
    uVar13 = 0;
    uVar14 = 0x14;
    FUN_004015d0(&stack0xffffff48,"ui/welcome_bg.dds",0x11);
    FUN_005e4a50(pvVar2,(char *)ppvVar12,uVar13,uVar14);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0xa0))();
  piVar3 = (int *)FUN_0071b2b0();
  piVar4 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0x14))();
  fVar11 = (float10)(**(code **)(*piVar4 + 0x10))();
  local_78 = (char *)(float)fVar11;
  pcStack_a4 = (char *)0x72b575;
  puVar5 = operator_new(0x344);
  puStack_8 = (undefined1 *)0x1;
  if (puVar5 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar5);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  pcStack_a4 = local_78;
  pcStack_a8 = (char *)0x72b5be;
  (**(code **)(*piVar3 + 0x74))();
  iVar6 = *piVar3;
  pcStack_a8 = (char *)0x0;
  local_ac = (void *)0x72b5c7;
  local_ac = (void *)FUN_0071b2b0();
  (**(code **)(iVar6 + 0x5c))();
  iVar6 = *piVar3;
  FUN_0071b2b0();
  (**(code **)(iVar6 + 0x68))();
  (**(code **)(*param_1 + 0xc))();
  local_78 = acStack_6c;
  acStack_6c[0] = '\0';
  uStack_74 = 0;
  uStack_70 = 0x14;
  uVar14 = 0;
  puVar15 = (undefined1 *)0x0;
  uStack_30 = 2;
  piVar4 = param_1 + 0xd1;
  while( true ) {
    if (param_1[0x120] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_1[0x121] - param_1[0x120] >> 5;
    }
    if (iVar6 <= (int)uVar14) break;
    pcStack_a8 = operator_new(0x3fc);
    uStack_30._0_1_ = 3;
    if (pcStack_a8 == (char *)0x0) {
      pcStack_a8 = (char *)0x0;
    }
    else {
      pcStack_a8 = (char *)FUN_00833290((undefined4 *)pcStack_a8);
    }
    uStack_30 = CONCAT31(uStack_30._1_3_,2);
    (**(code **)(*piVar4 + 4))();
    piVar4[5] = (int)pcStack_a8;
    (**(code **)*piVar4)();
    iVar6 = param_1[0x120];
    if ((iVar6 == 0) || ((uint)(param_1[0x121] - iVar6 >> 5) <= uVar14)) {
      FUN_0072add0();
      return;
    }
    uVar1 = *(uint *)(puVar15 + iVar6 + 4);
    pcStack_a8 = *(char **)(puVar15 + iVar6);
    if (uStack_70 <= uVar1) {
      if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
        _free(local_78);
      }
      uStack_70 = uVar1 + 0x20 & 0xffffffe0;
      local_78 = _malloc(uStack_70);
    }
    _strncpy(local_78,pcStack_a8,uVar1);
    local_78[uVar1] = '\0';
    uStack_dc = 0x72b723;
    uStack_74 = uVar1;
    puVar5 = FUN_00568790(&pcStack_58,&local_78);
    uStack_30._0_1_ = 4;
    FUN_0072ab90(param_1,puVar5,uVar14);
    uStack_30 = CONCAT31(uStack_30._1_3_,2);
    if (10 < uStack_50) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_58);
    }
    (**(code **)(*piVar3 + 0xc))();
    uVar14 = uVar14 + 1;
    puVar15 = puVar15 + 0x20;
    piVar4 = piVar4 + 6;
  }
  pvVar2 = operator_new(0x360);
  piVar3 = (int *)0x0;
  pcStack_a8 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    pcStack_58 = acStack_4c;
    acStack_4c[0] = '\0';
    uStack_54 = 0;
    uStack_50 = 0x14;
    _strncpy(pcStack_58,"ui/welcome_mask.dds",0x13);
    uStack_54 = 0x13;
    pcStack_58[0x13] = '\0';
    puVar15 = &stack0xffffff2c;
    uStack_30 = CONCAT31(uStack_30._1_3_,6);
    pcStack_a4 = (char *)0x1;
    uStack_dc = 0x72b812;
    piVar3 = FUN_0069d820(pvVar2,&pcStack_58,0,0,0x3f800000,0x3f800000);
  }
  uStack_30 = 2;
  if ((((uint)pcStack_a4 & 1) != 0) && (0x14 < uStack_50)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_58);
  }
  pvVar2 = local_ac;
  (**(code **)(*piVar3 + 0x74))();
  iVar6 = *piVar3;
  FUN_0071b2b0();
  uVar14 = 1;
  uStack_dc = 0x72b85c;
  (**(code **)(iVar6 + 0x5c))();
  iVar6 = *piVar3;
  uStack_dc = 0;
  pcStack_e0 = (char *)0x72b865;
  pcStack_e0 = (char *)FUN_0071b2b0();
  (**(code **)(iVar6 + 100))();
  (**(code **)(*param_1 + 0xc))();
  pcVar7 = &stack0xffffff4c;
  iVar6 = param_1[0x124];
  pcStack_58._0_1_ = 8;
  if ((iVar6 == 0) || ((uint)(param_1[0x125] - iVar6 >> 5) <= param_1[0x115] - 1U)) {
    FUN_0072add0();
    return;
  }
  iVar10 = (param_1[0x115] - 1U) * 0x20;
  uVar1 = *(uint *)(iVar10 + 4 + iVar6);
  _Source = *(char **)(iVar10 + iVar6);
  if (0x13 < uVar1) {
    pcVar7 = _malloc(uVar1 + 0x20 & 0xffffffe0);
  }
  _strncpy(pcVar7,_Source,uVar1);
  pcVar7[uVar1] = '\0';
  pvVar8 = operator_new(0x360);
  puVar5 = (undefined4 *)0x0;
  pcStack_58._0_1_ = 9;
  if (pvVar8 != (void *)0x0) {
    puVar5 = FUN_0069d820(pvVar8,(undefined4 *)&stack0xffffff40,0,0,0x3f800000,0x3f800000);
  }
  pcStack_58 = (char *)CONCAT31(pcStack_58._1_3_,8);
  (**(code **)(param_1[0x101] + 4))();
  param_1[0x106] = (int)puVar5;
  (**(code **)param_1[0x101])();
  (**(code **)(*(int *)param_1[0x106] + 0x74))();
  iVar6 = *(int *)param_1[0x106];
  FUN_0071b2b0();
  (**(code **)(iVar6 + 0x5c))();
  iVar6 = *(int *)param_1[0x106];
  uVar9 = FUN_0071b2b0();
  (**(code **)(iVar6 + 100))();
  uVar1 = param_1[0x115];
  param_1[0x115] = uVar1 + 1;
  iVar6 = param_1[0x124];
  if ((iVar6 != 0) && (uVar1 < (uint)(param_1[0x125] - iVar6 >> 5))) {
    _Count = *(uint *)(uVar1 * 0x20 + 4 + iVar6);
    pcVar7 = *(char **)(uVar1 * 0x20 + iVar6);
    if (uVar14 <= _Count) {
      if (0x14 < uVar14) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_e0);
      }
      pcStack_e0 = _malloc(_Count + 0x20 & 0xffffffe0);
    }
    _strncpy(pcStack_e0,pcVar7,_Count);
    pcStack_e0[_Count] = '\0';
    uStack_dc = _Count;
    pvVar8 = operator_new(0x360);
    puVar5 = (undefined4 *)0x0;
    local_78._0_1_ = 10;
    if (pvVar8 != (void *)0x0) {
      puVar5 = FUN_0069d820(pvVar8,&pcStack_e0,0,0,0x3f800000,0x3f800000);
    }
    local_78 = (char *)CONCAT31(local_78._1_3_,8);
    (**(code **)(param_1[0x107] + 4))();
    param_1[0x10c] = (int)puVar5;
    (**(code **)param_1[0x107])();
    (**(code **)(*(int *)param_1[0x10c] + 0x74))();
    iVar6 = *(int *)param_1[0x10c];
    FUN_0071b2b0();
    (**(code **)(iVar6 + 0x5c))(1);
    iVar6 = *(int *)param_1[0x10c];
    uVar13 = 0;
    iVar10 = FUN_0071b2b0();
    (**(code **)(iVar6 + 100))(1,iVar10,uVar13);
    (**(code **)(*param_1 + 0xc))(param_1[0x10c],1);
    (**(code **)(*param_1 + 0xc))(param_1[0x106],1);
    iVar6 = (**(code **)(*(int *)param_1[0x106] + 0x108))();
    FUN_00a26d00(*(int *)(*(int *)(iVar6 + 4) + 0x18));
    if (0x14 < uVar9) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    ExceptionList = puVar15;
    return;
  }
  FUN_0072add0();
  return;
}


//// FUNCTION WSplashScreen_Tick @ 0072bb60 ////

void __fastcall WSplashScreen_Tick(int *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 uVar9;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  float10 fVar10;
  ulonglong uVar11;
  int iVar12;
  int *piVar13;
  byte bVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 *local_54;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [20];
  undefined1 local_34 [36];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4583;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar4 = FUN_009b0020();
  uVar9 = extraout_EDX;
  if ((char)uVar4 == '\0') {
LAB_0072bba7:
    bVar2 = false;
  }
  else {
    iVar16 = 2;
    FUN_004f3b20();
    fVar10 = FUN_004f30a0(iVar16);
    bVar2 = true;
    uVar9 = extraout_EDX_00;
    if (fVar10 <= (float10)0.0) goto LAB_0072bba7;
  }
  if ((*(char *)((int)param_1 + 0x43d) == '\0') && (bVar2)) {
    iVar16 = FUN_004f3b20();
    iVar16 = FUN_004f30b0(iVar16);
    uVar9 = extraout_EDX_01;
    if (iVar16 != 6) goto LAB_0072be51;
  }
  if (param_1[0x120] == 0) {
    iVar16 = 0;
  }
  else {
    iVar16 = param_1[0x121] - param_1[0x120] >> 5;
  }
  iVar12 = param_1[0x10d];
  if (iVar16 < iVar12) {
    uVar11 = FUN_00990ae0(iVar12,uVar9);
    uVar9 = (undefined4)(uVar11 >> 0x20);
    if (2000 < (uint)((int)uVar11 - param_1[0x11e])) {
      if (*(char *)((int)param_1 + 0x43f) == '\0') {
        if (*(char *)((int)param_1 + 0x43d) == '\0') {
          FUN_004201a0(DAT_00f87b04,0);
          bVar14 = 1;
          iVar16 = 6;
          piVar13 = param_1;
          pvVar7 = (void *)FUN_004f3b20();
          FUN_004f9b70(pvVar7,iVar16,(int)piVar13,bVar14);
          FUN_0072aa10((int)param_1);
          FUN_0072a970(param_1);
          *(undefined1 *)((int)param_1 + 0x43d) = 1;
          uVar9 = extraout_EDX_08;
        }
        else {
          cVar3 = FUN_007470e0(param_1[0xb5]);
          uVar9 = extraout_EDX_09;
          if (cVar3 != '\0') {
            *(undefined1 *)(param_1 + 0x10f) = 1;
            FUN_0072a840();
            uVar9 = extraout_EDX_10;
          }
        }
      }
      else if ((char)param_1[0x110] == '\0') {
        FUN_004201a0(DAT_00f87b04,0);
        bVar14 = 1;
        iVar16 = 6;
        piVar13 = param_1;
        pvVar7 = (void *)FUN_004f3b20();
        FUN_004f9b70(pvVar7,iVar16,(int)piVar13,bVar14);
        puVar8 = operator_new(0xa4);
        local_4 = 1;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = FUN_0046f7a0(puVar8);
        }
        local_4 = 0xffffffff;
        FUN_0046f5d0(puVar8,0x11b);
        FUN_0046f8b0(puVar8 + 0xe,DAT_0104e030);
        FUN_005e9280(DAT_0104d82c,extraout_EDX_06,puVar8);
        *(undefined1 *)(param_1 + 0x110) = 1;
        uVar9 = extraout_EDX_07;
      }
    }
    goto LAB_0072be51;
  }
  if (*(char *)((int)param_1 + 0x43e) != '\0') {
    uVar5 = FUN_0072a8e0(param_1,iVar12 + -1);
    if ((char)uVar5 != '\0') {
      iVar16 = extraout_ECX;
      uVar9 = extraout_EDX_02;
      if (-1 < param_1[0x10e]) {
        FUN_009b11d0(param_1[0x10e]);
        iVar16 = extraout_ECX_00;
        uVar9 = extraout_EDX_03;
      }
      param_1[0x10e] = -1;
      uVar11 = FUN_00990ae0(iVar16,uVar9);
      param_1[0x11e] = (int)uVar11;
      local_54 = local_48;
      local_48[0] = 0;
      local_50 = 0;
      local_4c = 0x14;
      local_4 = 0;
      FUN_0072b0c0(param_1,&local_54,param_1[0x10d]);
      if (bVar2) {
        puVar15 = &DAT_00d17518;
        iVar12 = 0;
        pbVar6 = (byte *)FUN_0041c9c0(local_34,local_54);
        iVar16 = 6;
        pvVar7 = (void *)FUN_004f3b20();
        iVar16 = FUN_004f3270(pvVar7,iVar16,pbVar6,iVar12,puVar15);
        param_1[0x10e] = iVar16;
      }
      *(undefined1 *)((int)param_1 + 0x43e) = 0;
      FUN_0072a570((int)param_1);
      local_4 = 0xffffffff;
      uVar9 = extraout_EDX_04;
      if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_54);
      }
      goto LAB_0072be51;
    }
    iVar12 = extraout_ECX;
    uVar9 = extraout_EDX_02;
    if (*(char *)((int)param_1 + 0x43e) != '\0') goto LAB_0072be51;
  }
  if (bVar2) {
    bVar2 = FUN_009b1140(param_1[0x10e]);
    uVar9 = extraout_EDX_05;
    if (bVar2) goto LAB_0072be51;
  }
  else {
    uVar11 = FUN_00990ae0(iVar12,uVar9);
    uVar9 = (undefined4)(uVar11 >> 0x20);
    iVar16 = (int)uVar11 - param_1[0x11e];
    fVar1 = (float)iVar16;
    if (iVar16 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (fVar1 <= (float)param_1[param_1[0x10d] + 0x118] * 1000.0) goto LAB_0072be51;
  }
  *(undefined1 *)((int)param_1 + 0x43e) = 1;
  param_1[0x10d] = param_1[0x10d] + 1;
LAB_0072be51:
  FUN_0072b270(param_1,uVar9);
  (**(code **)(*param_1 + 0x80))(1);
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0xd8))();
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_0072be90 @ 0072be90 ////

void __thiscall FUN_0072be90(void *this,undefined4 *param_1)

{
  uint _Count;
  char *_Source;
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  size_t sVar5;
  int iVar6;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4598;
  local_c = ExceptionList;
  iVar6 = 1;
  bVar3 = true;
  ExceptionList = &local_c;
  while( true ) {
    local_4 = 0xffffffff;
    _Count = param_1[1];
    _Source = (char *)*param_1;
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    if (0x13 < _Count) {
      local_64 = _Count + 0x20 & 0xffffffe0;
      local_6c = _malloc(local_64);
    }
    _strncpy(local_6c,_Source,_Count);
    local_6c[_Count] = '\0';
    local_4 = 0;
    local_68 = _Count;
    FUN_004073f0(&local_6c,"_LINE",5);
    sVar5 = _sprintf(local_4c,(char *)&param_2_00d1b93c,iVar6);
    FUN_004073f0(&local_6c,local_4c,sVar5);
    bVar4 = FUN_009b46b0(&local_6c);
    if (bVar4) {
      iVar1 = *(int *)((int)this + 0x480);
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0x488) - iVar1 >> 5) <=
          (uint)(*(int *)((int)this + 0x484) - iVar1 >> 5))) {
        FUN_00439fd0((void *)((int)this + 0x47c),*(int **)((int)this + 0x484),1,&local_6c);
        iVar6 = iVar6 + 1;
      }
      else {
        piVar2 = *(int **)((int)this + 0x484);
        FUN_00439ea0(piVar2,1,&local_6c);
        *(int **)((int)this + 0x484) = piVar2 + 8;
        iVar6 = iVar6 + 1;
      }
    }
    else {
      bVar3 = false;
    }
    local_4 = 0xffffffff;
    if (0x14 < local_64) break;
    if (!bVar3) {
      ExceptionList = local_c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_0072c010 @ 0072c010 ////

void __thiscall FUN_0072c010(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int local_74;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  size_t local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd45c8;
  local_c = ExceptionList;
  local_74 = 1;
  ExceptionList = &local_c;
  do {
    local_4 = 0xffffffff;
    FUN_00569d60(&local_4c,local_74);
    uVar6 = param_1[1];
    pcVar3 = (char *)*param_1;
    local_6c = local_60;
    local_4 = 0;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    if (0x13 < uVar6) {
      local_64 = uVar6 + 0x20 & 0xffffffe0;
      local_6c = _malloc(local_64);
    }
    _strncpy(local_6c,pcVar3,uVar6);
    local_6c[uVar6] = '\0';
    iVar2 = 3 - local_48;
    local_68 = uVar6;
    if (0 < iVar2) {
      do {
        uVar7 = local_68 + 1;
        pcVar3 = local_6c;
        uVar6 = local_64;
        if (local_64 <= uVar7) {
          uVar6 = local_68 + 0x21 & 0xffffffe0;
          pcVar3 = _malloc(uVar6);
          _strncpy(pcVar3,local_6c,local_68);
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
        }
        local_64 = uVar6;
        local_6c = pcVar3;
        _strncpy(local_6c + local_68,"0",1);
        iVar2 = iVar2 + -1;
        local_6c[uVar7] = '\0';
        local_68 = uVar7;
      } while (iVar2 != 0);
    }
    FUN_004073f0(&local_6c,local_4c,local_48);
    uVar7 = local_68 + 4;
    pcVar3 = local_6c;
    uVar6 = local_64;
    if (local_64 <= uVar7) {
      uVar6 = local_68 + 0x24 & 0xffffffe0;
      pcVar3 = _malloc(uVar6);
      _strncpy(pcVar3,local_6c,local_68);
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    local_64 = uVar6;
    local_6c = pcVar3;
    _strncpy(local_6c + local_68,".dds",4);
    local_6c[uVar7] = '\0';
    local_68 = uVar7;
    puVar4 = FUN_0040d6b0(local_2c,"data/textures/",&local_6c);
    local_4._0_1_ = 2;
    uVar5 = FUN_009d3660(puVar4,(uint *)0x0);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if ((char)uVar5 != '\0') {
      iVar2 = *(int *)((int)this + 0x490);
      if ((iVar2 == 0) ||
         ((uint)(*(int *)((int)this + 0x498) - iVar2 >> 5) <=
          (uint)(*(int *)((int)this + 0x494) - iVar2 >> 5))) {
        FUN_00439fd0((void *)((int)this + 0x48c),*(int **)((int)this + 0x494),1,&local_6c);
      }
      else {
        piVar1 = *(int **)((int)this + 0x494);
        FUN_00439ea0(piVar1,1,&local_6c);
        *(int **)((int)this + 0x494) = piVar1 + 8;
      }
    }
    local_74 = local_74 + 1;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  } while ((char)uVar5 != '\0');
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0072c2e0 @ 0072c2e0 ////

void __fastcall FUN_0072c2e0(int *param_1)

{
  float fVar1;
  uint _Count;
  int iVar2;
  int *piVar3;
  char *_Dest;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  uint _Size;
  void *pvStack_1c;
  int *piStack_c;
  char *pcStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  pcStack_8 = &LAB_00cd45e8;
  piStack_c = ExceptionList;
  ExceptionList = &piStack_c;
  FUN_0071c290();
  *(undefined1 *)(param_1 + 0x10f) = 0;
  *(undefined1 *)((int)param_1 + 0x43d) = 0;
  *(undefined1 *)((int)param_1 + 0x43e) = 1;
  param_1[0x118] = 0;
  param_1[0x10e] = -1;
  param_1[0x10d] = 1;
  uVar7 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  param_1[0x11e] = (int)uVar7;
  FUN_00424130(DAT_00f87b04,1,0,0);
  FUN_004201a0(DAT_00f87b04,1);
  iVar4 = *param_1;
  uVar9 = 0;
  iVar2 = FUN_0071b2b0();
  (**(code **)(iVar4 + 0x70))(iVar2,uVar9);
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0xc))(param_1,1);
  param_1[0x115] = 1;
  FUN_0072c010(param_1,piStack_c);
  param_1[0x116] = 2000;
  uVar7 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_00);
  param_1[0x117] = (int)uVar7;
  param_1[0x114] = 0;
  FUN_0072be90(param_1,(undefined4 *)pcStack_8);
  _Dest = &stack0xffffffd0;
  _Size = 0x14;
  param_1[0x11d] = 0;
  piStack_c = (int *)0x0;
  iVar4 = 0;
  pfVar5 = (float *)(param_1 + 0x119);
  while( true ) {
    piVar3 = (int *)0x0;
    if (param_1[0x120] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1[0x121] - param_1[0x120] >> 5;
    }
    if (iVar2 <= (int)piStack_c) goto LAB_0072c4d8;
    iVar2 = param_1[0x120];
    if ((iVar2 == 0) || (piVar3 = piStack_c, (int *)(param_1[0x121] - iVar2 >> 5) <= piStack_c))
    break;
    pcStack_8 = *(char **)(iVar4 + iVar2);
    _Count = *(uint *)(iVar4 + 4 + iVar2);
    if (_Size <= _Count) {
      if (0x14 < _Size) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      _Dest = _malloc(_Size);
    }
    _strncpy(_Dest,pcStack_8,_Count);
    _Dest[_Count] = '\0';
    fVar6 = FUN_009b03c0(_Dest,0,0);
    *pfVar5 = (float)fVar6;
    if (fVar6 == (float10)0.0) {
      *pfVar5 = 12.0;
    }
    fVar1 = *pfVar5;
    piStack_c = (int *)((int)piStack_c + 1);
    pfVar5 = pfVar5 + 1;
    iVar4 = iVar4 + 0x20;
    param_1[0x11d] = (int)(fVar1 + (float)param_1[0x11d]);
  }
  FUN_0072add0();
LAB_0072c4d8:
  piStack_c = piVar3;
  if ((int *)param_1[0x124] != piVar3) {
    piStack_c = (int *)(param_1[0x125] - param_1[0x124] >> 5);
  }
  uVar7 = FUN_00acd42c();
  uVar8 = FUN_00acd42c();
  param_1[0x116] = (int)uVar8 - (int)uVar7;
  FUN_0072b4c0(param_1);
  if ((int *)param_1[param_1[0x10d] * 6 + 0xd0] != piVar3) {
    (**(code **)(*(int *)param_1[param_1[0x10d] * 6 + 0xd0] + 0x14))();
    uVar7 = FUN_00acd42c();
    param_1[0x113] = (int)uVar7;
  }
  if (_Size < 0x15) {
    ExceptionList = pvStack_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Dest);
}


//// FUNCTION FUN_0072c590 @ 0072c590 ////

void __cdecl FUN_0072c590(undefined4 param_1)

{
  undefined3 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 local_91;
  undefined1 *local_90;
  int local_8c;
  uint local_88;
  undefined1 local_84 [20];
  undefined1 *local_70;
  int local_6c;
  uint local_68;
  undefined1 local_64 [20];
  char *local_50;
  undefined4 local_4c;
  uint local_48;
  char local_44 [20];
  char *local_30;
  undefined4 local_2c;
  uint local_28;
  char local_24 [20];
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cd462e;
  pvStack_c = ExceptionList;
  local_70 = local_64;
  local_64[0] = 0;
  local_6c = 0;
  local_68 = 0x14;
  local_90 = local_84;
  local_84[0] = 0;
  local_8c = 0;
  local_88 = 0x14;
  uStack_3 = 0;
  uVar1 = uStack_3;
  local_4 = 1;
  uStack_3 = 0;
  local_91 = 0;
  ExceptionList = &pvStack_c;
  switch(param_1) {
  case 0:
    ExceptionList = &pvStack_c;
    FUN_00403e20(&local_70,"ui/welcome_");
    FUN_00403e20(&local_90,"GAMESTARTINTRO");
    break;
  case 1:
    ExceptionList = &pvStack_c;
    FUN_00403e20(&local_70,"ui/outro_");
    pcVar3 = "ENDSCREEN_LIFE_2005_PLAT";
    goto LAB_0072c63a;
  case 2:
    ExceptionList = &pvStack_c;
    uStack_3 = uVar1;
    FUN_00403e20(&local_70,"ui/outro_");
    pcVar3 = "ENDSCREEN_LIFE_2005_GOLD";
    goto LAB_0072c63a;
  case 3:
    ExceptionList = &pvStack_c;
    uStack_3 = uVar1;
    FUN_00403e20(&local_70,"ui/outro_");
    pcVar3 = "ENDSCREEN_LIFE_2005_NOTWON";
    goto LAB_0072c63a;
  case 4:
    ExceptionList = &pvStack_c;
    uStack_3 = uVar1;
    FUN_00403e20(&local_70,"ui/outro_");
    pcVar3 = "ENDSCREEN_LIFE_POST2005";
LAB_0072c63a:
    FUN_00403e20(&local_90,pcVar3);
    local_30 = local_24;
    local_91 = 1;
    local_24[0] = '\0';
    local_2c = 0;
    local_28 = 0x14;
    _strncpy(local_30,"1",1);
    local_2c = 1;
    local_30[1] = '\0';
    local_50 = local_44;
    local_44[0] = '\0';
    local_4c = 0;
    local_48 = 0x14;
    _strncpy(local_50,"CompletedGame",0xd);
    local_4c = 0xd;
    local_50[0xd] = '\0';
    local_4 = 3;
    FUN_005417f0(g_configRegistryPath,&local_50,&local_30);
    if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
    local_4 = 1;
    if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
      _free(local_30);
    }
    break;
  case 5:
    ExceptionList = &pvStack_c;
    uStack_3 = uVar1;
    FUN_00403e20(&local_70,"ui/outro_");
    FUN_00403e20(&local_90,"ENDSCREEN_LIFE_PRE2005_PLTGD");
    break;
  case 6:
    ExceptionList = &pvStack_c;
    uStack_3 = uVar1;
    FUN_00403e20(&local_70,"ui/outro_");
    FUN_00403e20(&local_90,"ENDSCREEN_LIFE_PRE2005_PLAT");
    break;
  case 7:
    ExceptionList = &pvStack_c;
    uStack_3 = uVar1;
    FUN_00403e20(&local_70,"ui/outro_");
    FUN_00403e20(&local_90,"ENDSCREEN_LIFE_PRE2005_GOLD");
  }
  if (((DAT_0104e030 == (int *)0x0) && (local_6c != 0)) && (local_8c != 0)) {
    local_10 = operator_new(0x49c);
    local_4 = 4;
    if (local_10 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_0072b140(local_10);
    }
    local_4 = 1;
    (*(code *)DAT_0104e01c[1])();
    DAT_0104e030 = piVar2;
    (*(code *)*DAT_0104e01c)();
    FUN_0072c2e0(DAT_0104e030);
    *(undefined1 *)((int)DAT_0104e030 + 0x43f) = local_91;
  }
  if (local_88 < 0x15) {
    if (local_68 < 0x15) {
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_90);
}


//// FUNCTION SplashScreen_Constructor @ 0072c8d0 ////

/* WARNING: Removing unreachable block (ram,0x0072c941) */

void SplashScreen_Constructor(void)

{
  char local_20 [6];
  undefined1 local_1a;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4648;
  local_c = ExceptionList;
  local_20[0] = '\0';
  ExceptionList = &local_c;
  _strncpy(local_20,"splash",6);
  local_1a = 0;
  local_4 = 0;
  FUN_005434b0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0072c9d0 @ 0072c9d0 ////

int * __thiscall FUN_0072c9d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0072ca10 @ 0072ca10 ////

int * __thiscall FUN_0072ca10(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0072ca40 @ 0072ca40 ////

int * __thiscall FUN_0072ca40(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0072cac0 @ 0072cac0 ////

void FUN_0072cac0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (DAT_0104e054 != &DAT_0104e060) {
    do {
      puVar2 = (undefined4 *)DAT_0104e054[2];
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_0104e054 != &DAT_0104e060);
  }
  return;
}


//// FUNCTION FUN_0072cc10 @ 0072cc10 ////

void __fastcall FUN_0072cc10(int param_1)

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


//// FUNCTION FUN_0072cc40 @ 0072cc40 ////

void __fastcall FUN_0072cc40(int param_1)

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


//// FUNCTION FUN_0072ccb0 @ 0072ccb0 ////

/* WARNING: Removing unreachable block (ram,0x0072ccf7) */

void __fastcall FUN_0072ccb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d49db4;
  param_1[0x14] = &PTR_FUN_00d49d98;
  if ((undefined4 *)param_1[0xd7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd7] = param_1[0xd6];
  }
  if (param_1[0xd6] != 0) {
    *(undefined4 *)(param_1[0xd6] + 4) = param_1[0xd7];
  }
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  if (param_1[0xd6] != 0) {
    *(undefined4 *)(param_1[0xd6] + 4) = param_1[0xd7];
  }
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_0072cd40 @ 0072cd40 ////

void __thiscall FUN_0072cd40(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d49eb4;
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


//// FUNCTION FUN_0072cd90 @ 0072cd90 ////

void __fastcall FUN_0072cd90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d49eb4;
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


//// FUNCTION FUN_0072ce10 @ 0072ce10 ////

void __fastcall FUN_0072ce10(int param_1)

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


//// FUNCTION FUN_0072ce30 @ 0072ce30 ////

void __fastcall FUN_0072ce30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d49ec4;
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


//// FUNCTION FUN_0072ceb0 @ 0072ceb0 ////

void __fastcall FUN_0072ceb0(int param_1)

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


//// FUNCTION FUN_0072ced0 @ 0072ced0 ////

void __fastcall FUN_0072ced0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d49ed4;
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


//// FUNCTION FUN_0072cf20 @ 0072cf20 ////

undefined4 * __thiscall FUN_0072cf20(void *this,undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  uint uStack_124;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  undefined4 uStack_118;
  char *local_b4;
  undefined4 local_b0;
  uint local_ac;
  char local_a8 [20];
  void *local_94;
  void *local_90;
  void *pvStack_70;
  undefined1 uStack_60;
  undefined4 *puStack_58;
  undefined1 uStack_48;
  undefined1 uStack_44;
  undefined1 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd46e1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_90 = this;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d49db4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d49d98;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x350) = param_1;
  fVar1 = DAT_00e58630;
  *(undefined4 *)((int)this + 0x354) = param_2;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0073e4e0(this,fVar1);
  pvVar2 = operator_new(0x360);
  local_94 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_b4 = local_a8;
    local_a8[0] = '\0';
    local_b0 = 0;
    local_ac = 0x20;
    local_b4 = _malloc(0x20);
    _strncpy(local_b4,"ui/gridbutton_starmak.dds",0x19);
    local_b0 = 0x19;
    local_b4[0x19] = '\0';
    local_4 = CONCAT31(local_4._1_3_,3);
    puVar3 = FUN_0069d820(pvVar2,&local_b4,0,0,0x3f800000,0x3f800000);
  }
  *(undefined4 **)((int)this + 0x348) = puVar3;
  local_4 = 1;
  if ((pvVar2 != (void *)0x0) && (0x14 < local_ac)) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  (**(code **)(**(int **)((int)this + 0x348) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x348) + 100))();
  (**(code **)(**(int **)((int)this + 0x348) + 0x74))();
  uStack_118 = 0x72d09e;
  FUN_0073f6e0(this,*(int **)((int)this + 0x348));
  puVar3 = operator_new(0x360);
  uStack_24 = 5;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_0069ce90(puVar3);
  }
  *(int **)((int)this + 0x344) = piVar4;
  uStack_24 = 1;
  uStack_118 = 1;
  puStack_11c = (undefined4 *)0x72d0f4;
  (**(code **)(*piVar4 + 0x5c))();
  puStack_11c = (undefined4 *)0x41a80000;
  uStack_124 = 1;
  puStack_120 = this;
  (**(code **)(**(int **)((int)this + 0x344) + 100))();
  (**(code **)(**(int **)((int)this + 0x344) + 0x74))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x344));
  puVar3 = operator_new(0x3c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0041f350(puVar3);
  }
  puStack_11c = operator_new(0x24);
  uStack_44 = 6;
  if (puStack_11c == (undefined4 *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_009910f0(puStack_11c);
  }
  puVar3[1] = iVar5;
  *(undefined1 *)(iVar5 + 0xc) = 6;
  *(uint *)(puVar3[1] + 0x10) = *(uint *)(puVar3[1] + 0x10) & 0xbfffffff;
  *(uint *)(puVar3[1] + 0x10) = *(uint *)(puVar3[1] + 0x10) & 0x7fffffff;
  *(uint *)(puVar3[1] + 0x10) = *(uint *)(puVar3[1] + 0x10) & 0xfeffffff;
  uStack_44 = 1;
  pvVar2 = (void *)FUN_00a1d960(*(int *)((int)this + 0x350));
  if (*(void **)((int)puVar3[1] + 0x18) != pvVar2) {
    Engine_SetResourceReference((void *)puVar3[1],(int)pvVar2);
  }
  if (pvVar2 != (void *)0x0) {
    FUN_0099b400(pvVar2);
  }
  (**(code **)(**(int **)((int)this + 0x344) + 0x104))();
  puStack_120 = operator_new(0x3fc);
  uStack_48 = 7;
  if (puStack_120 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puStack_120);
  }
  *(int **)((int)this + 0x34c) = piVar4;
  uStack_48 = 1;
  (**(code **)(*piVar4 + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x34c) + 100))();
  *(float *)(*(int *)((int)this + 0x34c) + 0x354) = DAT_00e58630 - 40.0;
  puVar10 = &uStack_124;
  uStack_124 = uStack_124 & 0xffff0000;
  uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&stack0xfffffed0,(wchar_t *)&lpCaption_00d16918,uVar6);
  uStack_60 = 8;
  sVar7 = FUN_00ace02d(L"<TABLE WIDTH = ");
  FUN_0040cae0(&stack0xfffffed0,L"<TABLE WIDTH = ",sVar7);
  sVar7 = _swprintf((wchar_t *)&stack0xffffff18,0xd18f84,SUB84((double)(DAT_00e58630 - 40.0),0));
  FUN_0040cae0(&stack0xfffffed0,(wchar_t *)&stack0xffffff18,sVar7);
  sVar7 = FUN_00ace02d((short *)&PTR_DAT_00d49f18);
  FUN_0040cae0(&stack0xfffffed0,(wchar_t *)&PTR_DAT_00d49f18,sVar7);
  FUN_0040cae0(&stack0xfffffed0,(wchar_t *)*puStack_58,puStack_58[1]);
  sVar7 = FUN_00ace02d(L"</T3></TD></TR></TABLE>");
  FUN_0040cae0(&stack0xfffffed0,L"</T3></TD></TR></TABLE>",sVar7);
  (**(code **)(**(int **)((int)this + 0x34c) + 0x54))();
  (**(code **)(**(int **)((int)this + 0x34c) + 0x84))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x34c));
  FUN_00741630(this,0,0x72caf0,0,"");
  *(void **)((int)this + 0x360) = this;
  FUN_00acdb9e(0xe586e0);
  iVar5 = FUN_0097dda0();
  *(int *)((int)this + 0x364) = iVar5;
  if (s___AV__CP_VWCheckBox_TM___TM___00e586c0[0x1e] != '\0') {
    iVar5 = 0x358;
    pcVar9 = "MyLink";
    pcVar8 = (char *)FUN_00acdb9e(0xe586e0);
    FUN_0097df60(pcVar8,pcVar9,iVar5);
    s___AV__CP_VWCheckBox_TM___TM___00e586c0[0x1e] = '\0';
  }
  piVar4 = (int *)((int)this + 0x358);
  *(int ***)((int)this + 0x35c) = &DAT_0104e060;
  *piVar4 = (int)DAT_0104e060;
  *(int **)((int)DAT_0104e060 + 4) = piVar4;
  DAT_0104e060 = piVar4;
  if (&lpType_0000000a < puVar10) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  ExceptionList = pvStack_70;
  return this;
}


//// FUNCTION FUN_0072d420 @ 0072d420 ////

undefined4 * __thiscall FUN_0072d420(void *this,byte param_1)

{
  FUN_0072ccb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0072d440 @ 0072d440 ////

void __fastcall FUN_0072d440(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  void *this;
  int *piVar4;
  undefined4 *puVar5;
  int local_1c;
  int local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd46fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0072cac0();
  local_1c = 0;
  local_14 = 0;
  bVar2 = true;
  puVar5 = DAT_010b951c;
  if (DAT_010b951c != DAT_010b9520) {
    do {
      uVar1 = *puVar5;
      if ((param_1[0xd8] <= local_1c) && (local_14 < 6)) {
        this = operator_new(0x368);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = FUN_0072cf20(this,uVar1,local_1c);
        }
        local_4 = 0xffffffff;
        (**(code **)(*piVar4 + 100))(1,param_1,0x42180000);
        if (bVar2) {
          (**(code **)(*piVar4 + 0x5c))(1,param_1,0);
        }
        else {
          (**(code **)(*piVar4 + 0x5c))(1,param_1,DAT_00e58630);
        }
        (**(code **)(*param_1 + 0xc))(piVar4,1);
        bVar2 = !bVar2;
        local_14 = local_14 + 1;
      }
      local_1c = local_1c + 1;
      puVar5 = puVar5 + 1;
    } while (puVar5 != DAT_010b9520);
  }
  do {
    cVar3 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar3 != '\0');
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0072d580 @ 0072d580 ////

void __fastcall FUN_0072d580(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4734;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d49fa4;
  param_1[0x14] = &PTR_LAB_00d49f8c;
  local_4 = 2;
  (*(code *)DAT_0104e034[1])();
  DAT_0104e048 = 0;
  (*(code *)*DAT_0104e034)();
  FUN_004201a0(DAT_00f87b04,0);
  param_1[0xdd] = &PTR_FUN_00d49ed4;
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
  param_1[0xd1] = &PTR_FUN_00d49ec4;
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


//// FUNCTION FUN_0072d770 @ 0072d770 ////

int * __thiscall FUN_0072d770(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  void *this_00;
  uint uVar7;
  size_t sVar8;
  uint unaff_ESI;
  uint unaff_EDI;
  float10 fVar9;
  float10 fVar10;
  uint uStack_238;
  uint *puStack_1fc;
  void *pvStack_1f8;
  char *pcStack_1f4;
  uint uStack_1f0;
  undefined1 *puStack_1ec;
  undefined1 *puStack_1c4;
  undefined4 uStack_1c0;
  char *pcStack_1bc;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b4;
  char *pcVar11;
  uint uVar12;
  undefined1 *puStack_18c;
  undefined4 uStack_188;
  uint uVar13;
  void **_Dest;
  uint uStack_170;
  void *pvStack_16c;
  undefined4 uStack_168;
  char *pcVar14;
  float fVar15;
  undefined1 *puVar16;
  char *local_138;
  undefined1 *local_134;
  uint local_130;
  char local_12c [20];
  undefined1 *puStack_118;
  undefined4 uStack_10c;
  undefined1 uStack_ec;
  undefined1 local_d4;
  undefined4 uStack_b4;
  void *local_b0;
  undefined4 uStack_7c;
  undefined4 uStack_44;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd49e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_b0 = this;
  FUN_007432f0(this);
  piVar5 = (int *)((int)this + 0x344);
  *(undefined ***)this = &PTR_FUN_00d49fa4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d49f8c;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(int **)((int)this + 0x350) = piVar5;
  *piVar5 = (int)&PTR_FUN_00d49ec4;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_FUN_00d49ed4;
  *(undefined4 *)((int)this + 0x388) = 0;
  local_d4 = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  if (DAT_010b951c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_010b9520 - DAT_010b951c >> 2;
  }
  *(int *)((int)this + 0x368) = iVar2;
  *(int *)((int)this + 0x364) = iVar2 + -6;
  if (iVar2 + -6 < 0) {
    *(undefined4 *)((int)this + 0x364) = 0;
  }
  (**(code **)(*piVar5 + 4))();
  *(int *)((int)this + 0x358) = param_1;
  (**(code **)*piVar5)();
  FUN_0073e4e0(this,DAT_00e58638);
  pvVar3 = operator_new(0x288);
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    local_138 = local_12c;
    local_12c[0] = '\0';
    local_134 = (undefined1 *)0x0;
    local_130 = 0x20;
    local_138 = _malloc(0x20);
    _strncpy(local_138,"ui/buildmenu_window.dds",0x17);
    local_134 = (undefined1 *)0x17;
    local_138[0x17] = '\0';
    local_4 = CONCAT31(local_4._1_3_,5);
    puVar4 = FUN_005e8fd0(pvVar3,&local_138);
  }
  local_4 = 3;
  if ((pvVar3 != (void *)0x0) && (0x14 < local_130)) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  puVar4[0x9c] = 0x41400000;
  puVar4[0x9d] = 0x41400000;
  puVar4[0x9b] = 0x42000000;
  puVar4[0x9e] = 0x41c00000;
  puVar4[0x9f] = 0x41c00000;
  FUN_0073fae0(this,puVar4);
  piVar5 = (int *)FUN_0071b2a0();
  fVar9 = (float10)(**(code **)(*piVar5 + 0x10))();
  fVar10 = FUN_0073e630((int)this);
  fVar15 = (float)(((float10)(float)fVar9 - fVar10) * (float10)0.5);
  iVar2 = FUN_0071b2a0();
  FUN_00741940(this,1,iVar2,fVar15);
  piVar5 = (int *)FUN_0071b2a0();
  fVar9 = (float10)(**(code **)(*piVar5 + 0x14))();
  fVar10 = FUN_0073e640((int)this);
  fVar15 = (float)(((float10)(float)fVar9 - fVar10) * (float10)0.5);
  iVar2 = FUN_0071b2a0();
  FUN_00741b60(this,1,iVar2,fVar15);
  pvVar3 = operator_new(0x360);
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    local_138 = local_12c;
    local_12c[0] = '\0';
    local_134 = (undefined1 *)0x0;
    local_130 = 0x20;
    local_138 = _malloc(0x20);
    _strncpy(local_138,"ui/buildflourish.dds",0x14);
    local_134 = &DAT_00000014;
    local_138[0x14] = '\0';
    local_4 = CONCAT31(local_4._1_3_,8);
    uStack_168 = 0x72da38;
    puStack_118 = &stack0xfffffea0;
    piVar5 = FUN_0069d820(pvVar3,&local_138,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 3;
  if ((pvVar3 != (void *)0x0) && (0x14 < local_130)) {
                    /* WARNING: Subroutine does not return */
    _free(local_138);
  }
  puVar16 = (undefined1 *)0x42800000;
  pcVar14 = (char *)0x43000000;
  (**(code **)(*piVar5 + 0x74))();
  FUN_0073f6e0(this,piVar5);
  iVar2 = *piVar5;
  (**(code **)(iVar2 + 0x10))();
  uStack_168 = 0x72daaa;
  pvVar3 = this;
  (**(code **)(iVar2 + 0x5c))();
  uStack_168 = 0x41700000;
  uStack_170 = 1;
  pvStack_16c = this;
  (**(code **)(*piVar5 + 0x68))();
  pcVar6 = operator_new(0x360);
  local_138 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    pcVar14 = &stack0xfffffeb4;
    unaff_ESI = unaff_ESI & 0xffffff00;
    unaff_EDI = 0x14;
    _strncpy(pcVar14,"ui/job_star.dds",0xf);
    puVar16 = (undefined1 *)0xf;
    pcVar14[0xf] = '\0';
    pvVar3 = (void *)((uint)pvVar3 | 4);
    uStack_24 = CONCAT31(uStack_24._1_3_,0xb);
    uStack_188 = 0x72db3c;
    piVar5 = FUN_0069d820(pcVar6,(undefined4 *)&stack0xfffffea8,0,0,0x3f800000,0x3f800000);
  }
  uStack_24 = 3;
  if ((((uint)pvVar3 & 4) != 0) && (0x14 < unaff_EDI)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar14);
  }
  _Dest = (void **)0x42800000;
  (**(code **)(*piVar5 + 0x74))();
  FUN_0073f6e0(this,piVar5);
  iVar2 = *piVar5;
  (**(code **)(iVar2 + 0x10))();
  uVar13 = 1;
  uStack_188 = 0x72dbaf;
  pvVar3 = this;
  (**(code **)(iVar2 + 0x5c))();
  uStack_188 = 0x41700000;
  puStack_18c = this;
  (**(code **)(*piVar5 + 0x68))();
  this_00 = operator_new(0x420);
  if (this_00 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar16 = &stack0xfffffeb8;
    unaff_ESI = 10;
    uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xfffffeac,(wchar_t *)&lpCaption_00d16918,uVar7);
    _Dest = &pvStack_16c;
    uVar7 = (uint)pvVar3 | 8;
    pvStack_16c = (void *)((uint)pvStack_16c & 0xffffff00);
    uStack_170 = 0x14;
    _strncpy((char *)_Dest,"button_up.",10);
    *(char *)((int)_Dest + 10) = '\0';
    pvVar3 = (void *)(uVar7 | 0x10);
    uStack_44 = 0xf;
    puStack_1b4 = (undefined1 *)0x72dc98;
    puVar4 = FUN_0069fb10(this_00,(int *)&stack0xfffffe88,(undefined4 *)&stack0xfffffeac,0x42000000,
                          0x42000000,0,0,0x3f800000,0x3f800000);
  }
  *(undefined4 **)((int)this + 0x370) = puVar4;
  if ((((uint)pvVar3 & 0x10) != 0) &&
     (pvVar3 = (void *)((uint)pvVar3 & 0xffffffef), 0x14 < uStack_170)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  uStack_44 = 3;
  if ((((uint)pvVar3 & 8) != 0) && (10 < unaff_ESI)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar16);
  }
  uVar12 = 2;
  (**(code **)(**(int **)((int)this + 0x370) + 0x60))();
  uVar7 = 1;
  pcVar6 = this;
  (**(code **)(**(int **)((int)this + 0x370) + 100))();
  pcVar11 = "SCROLLBARV_SPINUP";
  puStack_1b4 = &LAB_0072d720;
  puStack_1b8 = (undefined1 *)0x0;
  pcStack_1bc = (char *)0x72dd57;
  pcVar14 = this;
  (**(code **)(**(int **)((int)this + 0x370) + 0x18))();
  pcStack_1bc = "SCROLLBARV_SPINUP";
  uStack_1c0 = 0;
  puStack_1c4 = &LAB_005f37f0;
  (**(code **)(**(int **)((int)this + 0x370) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x370));
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puStack_18c = &stack0xfffffe80;
    uStack_188 = 0;
    uVar13 = 10;
    uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_18c,(wchar_t *)&lpCaption_00d16918,uVar7);
    pcVar14 = &stack0xfffffe5c;
    puStack_1b8 = (undefined1 *)((uint)puStack_1b8 | 0x20);
    pcVar6 = (char *)((uint)pcVar6 & 0xffffff00);
    uVar7 = 0x14;
    _strncpy(pcVar14,"button_down.",0xc);
    pcVar11 = (char *)0x0;
    pcVar14[0xc] = '\0';
    puStack_1b4 = &stack0xfffffe28;
    puStack_1b8 = (undefined1 *)((uint)puStack_1b8 | 0x40);
    uStack_7c = 0x14;
    puStack_1ec = (undefined1 *)0x72de50;
    puVar4 = FUN_0069fb10(pvVar3,(int *)&stack0xfffffe50,&puStack_18c,0x42000000,0x42000000,0,0,
                          0x3f800000,0x3f800000);
  }
  *(undefined4 **)((int)this + 0x36c) = puVar4;
  if ((((uint)puStack_1b8 & 0x40) != 0) &&
     (puStack_1b8 = (undefined1 *)((uint)puStack_1b8 & 0xffffffbf), 0x14 < uVar7)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar14);
  }
  uStack_7c = 3;
  if ((((uint)puStack_1b8 & 0x20) != 0) &&
     (puStack_1b8 = (undefined1 *)((uint)puStack_1b8 & 0xffffffdf), 10 < uVar13)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_18c);
  }
  (**(code **)(**(int **)((int)this + 0x36c) + 0x60))();
  uVar13 = 2;
  (**(code **)(**(int **)((int)this + 0x36c) + 100))();
  puStack_1ec = &LAB_0072d6f0;
  uStack_1f0 = 0;
  pcStack_1f4 = (char *)0x72def7;
  pcVar14 = this;
  (**(code **)(**(int **)((int)this + 0x36c) + 0x18))();
  pcStack_1f4 = "SCROLLBARV_SPINDOWN";
  pvStack_1f8 = (void *)0x0;
  puStack_1fc = (uint *)&LAB_005f37f0;
  (**(code **)(**(int **)((int)this + 0x36c) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x36c));
  pvVar3 = operator_new(0x420);
  if (pvVar3 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    pcVar6 = &stack0xfffffe68;
    uVar12 = 0x14;
    _strncpy(pcVar6,"SM_CANCEL",9);
    pcVar6[9] = '\0';
    pcVar14 = &stack0xfffffe24;
    uStack_1f0 = uStack_1f0 | 0x80;
    uVar13 = 0x14;
    _strncpy(pcVar14,"button_goback.",0xe);
    pcVar14[0xe] = '\0';
    uStack_1f0 = uStack_1f0 | 0x100;
    uStack_b4 = 0x19;
    puVar4 = FUN_009b5030(&puStack_1c4,(undefined4 *)&stack0xfffffe5c);
    puStack_1ec = &stack0xfffffdf0;
    uStack_1f0 = uStack_1f0 | 0x200;
    uStack_b4 = 0x1a;
    puVar4 = FUN_0069fb10(pvVar3,(int *)&stack0xfffffe18,puVar4,0x42000000,0x42000000,0,0,0x3f800000
                          ,0x3f800000);
  }
  *(undefined4 **)((int)this + 0x35c) = puVar4;
  if (((uStack_1f0 & 0x200) != 0) &&
     (uStack_1f0 = uStack_1f0 & 0xfffffdff, (char *)0xa < pcStack_1bc)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1c4);
  }
  if (((uStack_1f0 & 0x100) != 0) && (uStack_1f0 = uStack_1f0 & 0xfffffeff, 0x14 < uVar13)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar14);
  }
  uStack_b4 = 3;
  if (((char)uStack_1f0 < '\0') && (uStack_1f0 = uStack_1f0 & 0xffffff7f, 0x14 < uVar12)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar6);
  }
  (**(code **)(**(int **)((int)this + 0x35c) + 0x5c))();
  puVar16 = this;
  (**(code **)(**(int **)((int)this + 0x35c) + 100))();
  pcVar6 = "SM_CLOSE";
  (**(code **)(**(int **)((int)this + 0x35c) + 0x18))();
  uStack_238 = 5;
  (**(code **)(**(int **)((int)this + 0x35c) + 0x18))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x35c));
  puStack_1b8 = &stack0xfffffe54;
  uVar7 = (uint)pcVar11 & 0xffff0000;
  puStack_1b4 = (undefined1 *)0x0;
  pcVar14 = &stack0xfffffe30;
  uVar13 = 0x14;
  _strncpy(pcVar14,"SM_IMPORT",9);
  pcVar14[9] = '\0';
  uStack_ec = 0x1f;
  puVar4 = FUN_009b5030(&puStack_1fc,(undefined4 *)&stack0xfffffe24);
  sVar8 = FUN_00ace02d(L"<TABLE><TR><TD WIDTH = ");
  FUN_0040cae0(&puStack_1b8,L"<TABLE><TR><TD WIDTH = ",sVar8);
  sVar8 = _swprintf((wchar_t *)&stack0xfffffe8c,0xd18f84,SUB84((double)(DAT_00e58638 - 100.0),0));
  FUN_0040cae0(&puStack_1b8,(wchar_t *)&stack0xfffffe8c,sVar8);
  sVar8 = FUN_00ace02d(L" ALIGN\t= CENTER><T1>");
  FUN_0040cae0(&puStack_1b8,L" ALIGN\t= CENTER><T1>",sVar8);
  FUN_0040cae0(&puStack_1b8,(wchar_t *)*puVar4,puVar4[1]);
  sVar8 = FUN_00ace02d(L"</T1></TD></TR></TABLE>");
  FUN_0040cae0(&puStack_1b8,L"</T1></TD></TR></TABLE>",sVar8);
  if ((char *)0xa < pcStack_1f4) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1fc);
  }
  uStack_ec = 0x1e;
  if (0x14 < uVar13) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar14);
  }
  puVar4 = operator_new(0x3fc);
  uStack_ec = 0x20;
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00833290(puVar4);
  }
  uStack_ec = 0x1e;
  (**(code **)(*piVar5 + 0x54))();
  pcVar14 = (char *)0x42480000;
  uVar13 = 0;
  (**(code **)(*piVar5 + 0x5c))(1,this);
  (**(code **)(*piVar5 + 100))(1,this,0x3f800000);
  piVar5[0xd5] = (int)(DAT_00e58638 - 100.0);
  (**(code **)(*piVar5 + 0x84))(0);
  FUN_0073f6e0(this,piVar5);
  pvVar3 = operator_new(0x3ac);
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar16 = (undefined1 *)0x20;
    pcVar6 = _malloc(0x20);
    _strncpy(pcVar6,"ui/button_toggleoff.dds",0x17);
    pcVar6[0x17] = '\0';
    uVar13 = uVar13 | 0x400;
    uStack_238 = 0x20;
    pcVar14 = _malloc(0x20);
    _strncpy(pcVar14,"ui/button_toggleon.dds",0x16);
    pcVar14[0x16] = '\0';
    uVar13 = uVar13 | 0x800;
    puStack_1fc = &uStack_1f0;
    uStack_1f0 = uStack_1f0 & 0xffffff00;
    pvStack_1f8 = (void *)0x0;
    pcStack_1f4 = (char *)0x20;
    puStack_1fc = _malloc(0x20);
    _strncpy((char *)puStack_1fc,"STARMAKER_MAKEDIRECTOR",0x16);
    pvStack_1f8 = (void *)0x16;
    *(char *)((int)puStack_1fc + 0x16) = '\0';
    uVar13 = uVar13 | 0x1000;
    uStack_10c = 0x24;
    puVar4 = FUN_009b5030(&puStack_1b4,&puStack_1fc);
    uVar13 = uVar13 | 0x2000;
    uStack_10c = 0x25;
    piVar5 = FUN_00667c80(pvVar3,puVar4,(undefined4 *)&stack0xfffffdc0,
                          (undefined4 *)&stack0xfffffde4);
  }
  uStack_10c = 0x29;
  (**(code **)(*(int *)((int)this + 0x374) + 4))();
  *(int **)((int)this + 0x388) = piVar5;
  (*(code *)**(undefined4 **)((int)this + 0x374))();
  if (((uVar13 & 0x2000) != 0) && (uVar13 = uVar13 & 0xffffdfff, 10 < uVar7)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1b4);
  }
  if (((uVar13 & 0x1000) != 0) && (uVar13 = uVar13 & 0xffffefff, (char *)0x14 < pcStack_1f4)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1fc);
  }
  if (((uVar13 & 0x800) != 0) && (uVar13 = uVar13 & 0xfffff7ff, 0x14 < uStack_238)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar14);
  }
  uStack_10c = 0x1e;
  if (((uVar13 & 0x400) != 0) && (&DAT_00000014 < puVar16)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar6);
  }
  (**(code **)(**(int **)((int)this + 0x388) + 0x68))(2,this,0xc1900000);
  (**(code **)(**(int **)((int)this + 0x388) + 0x5c))(1,this,0x40c00000);
  FUN_006677f0(*(void **)((int)this + 0x388),0x42700000);
  FUN_006678d0(*(void **)((int)this + 0x388),0);
  FUN_0073f6e0(this,*(int **)((int)this + 0x388));
  piVar5 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar5 + 0xc))(this,1);
  FUN_0072d440(this);
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffffd;
  do {
    cVar1 = FUN_007421c0(this);
  } while (cVar1 != '\0');
  FUN_004201a0(DAT_00f87b04,1);
  if (10 < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_1f8);
  }
  DAT_0105cc5c = puStack_1fc._0_1_;
  ExceptionList = local_134;
  return this;
}


//// FUNCTION FUN_0072e5f0 @ 0072e5f0 ////

undefined4 * __thiscall FUN_0072e5f0(void *this,byte param_1)

{
  FUN_0072d580(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0072e610 @ 0072e610 ////

void __cdecl FUN_0072e610(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar2 = DAT_0104e048;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4a0b;
  pvStack_c = ExceptionList;
  piVar3 = (int *)0x0;
  ExceptionList = &pvStack_c;
  if (DAT_0104e048 != (undefined4 *)0x0) {
    iVar1 = DAT_0104e048[0x12];
    ExceptionList = &pvStack_c;
    DAT_0104e048[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104e034[1])();
    DAT_0104e048 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e034)();
  }
  this = operator_new(0x38c);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    piVar3 = FUN_0072d770(this,param_1);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104e034[1])();
  DAT_0104e048 = piVar3;
  (*(code *)*DAT_0104e034)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0072e6d0 @ 0072e6d0 ////

void __fastcall FUN_0072e6d0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d4a170;
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


//// FUNCTION FUN_0072e720 @ 0072e720 ////

undefined4 * __thiscall FUN_0072e720(void *this,byte param_1)

{
  FUN_0072e6d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0072e740 @ 0072e740 ////

void __fastcall FUN_0072e740(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d4a170;
  return;
}


//// FUNCTION FUN_0072e7a0 @ 0072e7a0 ////

undefined1 __fastcall FUN_0072e7a0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x34c);
}


//// FUNCTION FUN_0072e7b0 @ 0072e7b0 ////

void __thiscall FUN_0072e7b0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x344);
  return;
}


//// FUNCTION FUN_0072e7c0 @ 0072e7c0 ////

int __thiscall FUN_0072e7c0(void *this,int *param_1)

{
  char *_Dest;
  size_t sVar1;
  void *this_00;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_7c;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char local_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cd4a53;
  pvStack_c = ExceptionList;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_6c = local_60;
  uVar5 = FUN_00acd42c();
  local_7c = 5;
  uVar4 = 0x14;
  _Dest = local_60;
  do {
    if (uVar4 < 0x12) {
      if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
      local_64 = 0x20;
      _Dest = _malloc(0x20);
      local_6c = _Dest;
    }
    _strncpy(_Dest,"ui/starrating_seg",0x11);
    local_68 = 0x11;
    local_6c[0x11] = '\0';
    sVar1 = _sprintf(local_4c,(char *)&param_2_00d1b93c);
    FUN_004073f0(&local_6c,local_4c,sVar1);
    FUN_004073f0(&local_6c,".dds",4);
    this_00 = operator_new(0x360);
    local_4._0_1_ = 1;
    if (this_00 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = FUN_0069d820(this_00,&local_6c,0,0,0x3f800000,0x3f800000);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    piVar7 = param_1;
    (**(code **)(*piVar2 + 0x74))();
    (**(code **)(*piVar2 + 100))(1);
    if (piVar7 == this) {
      uVar6 = 1;
    }
    else {
      uVar6 = 2;
    }
    (**(code **)(*piVar2 + 0x5c))(uVar6,piVar7,0);
    (**(code **)(*(int *)this + 0xc))(piVar2,1);
    local_7c = local_7c + -1;
    uVar4 = local_64;
    _Dest = local_6c;
  } while (local_7c != 0);
  iVar3 = (int)uVar5 / 5;
  if (((int)uVar5 % 5 == 0) &&
     (iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),*(char *)((int)this + 0x34c)),
     *(char *)((int)this + 0x34c) == '\0')) {
    *(undefined1 *)((int)this + 0x34c) = 1;
  }
  else {
    *(undefined1 *)((int)this + 0x34c) = 0;
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return iVar3;
}


//// FUNCTION FUN_0072e9d0 @ 0072e9d0 ////

void __thiscall FUN_0072e9d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x344) = param_1;
  FUN_0072e7c0(this,*(int **)((int)this + 0x348));
  return;
}


//// FUNCTION FUN_0072e9f0 @ 0072e9f0 ////

int * __thiscall FUN_0072e9f0(void *this,int param_1,int *param_2)

{
  char cVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4a68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d4a194;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4a17c;
  *(int *)((int)this + 0x344) = param_1;
  *(int **)((int)this + 0x348) = param_2;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x34c) = 0;
  FUN_0072e7c0(this,param_2);
  FUN_0073f500(this);
  FUN_0073f410(this,*(float *)((int)this + 0x348) * 5.0);
  do {
    cVar1 = FUN_007421c0(this);
  } while (cVar1 != '\0');
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_0072eaa0 @ 0072eaa0 ////

undefined4 * __thiscall FUN_0072eaa0(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0072eb70 @ 0072eb70 ////

int * __thiscall FUN_0072eb70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0072ec30 @ 0072ec30 ////

char __fastcall FUN_0072ec30(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4a90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = (**(code **)(*(int *)(param_1 + -0x50) + 0x34))();
  puVar3 = auStack_38;
  uVar5 = 0x14;
  uVar4 = 0;
  auStack_38[0] = 0;
  if (cVar1 == '\0') {
    FUN_004015d0(&stack0xffffffbc,"off",3);
    pvStack_c = (void *)0xffffffff;
    pvVar2 = (void *)FUN_008819d0(*(void **)(param_1 + 0x308),"roundel");
    uVar5 = FUN_0088a2b0(pvVar2,puVar3,uVar4,uVar5);
    uStack_30 = 0x72ed28;
    pvVar2 = (void *)FUN_008819d0(*(void **)(param_1 + 0x308),"roundel");
    FUN_008887b0(pvVar2,uVar5);
    *(undefined1 *)(param_1 + 900) = 0;
  }
  else {
    FUN_004015d0(&stack0xffffffbc,"over",4);
    pvStack_c = (void *)0xffffffff;
    pvVar2 = (void *)FUN_008819d0(*(void **)(param_1 + 0x308),"roundel");
    uVar5 = FUN_0088a2b0(pvVar2,puVar3,uVar4,uVar5);
    uStack_30 = 0x72ecc5;
    pvVar2 = (void *)FUN_008819d0(*(void **)(param_1 + 0x308),"roundel");
    FUN_008887b0(pvVar2,uVar5);
    if (*(char *)(param_1 + 900) == '\0') {
      FUN_005392c0("STAR_CHARTS_HIGHLIGHT");
    }
    *(undefined1 *)(param_1 + 900) = 1;
  }
  cVar1 = FUN_0089e220(param_1);
  uVar4 = FUN_005540f0(0x12);
  if ((char)uVar4 != '\0') {
    FUN_006a9f30(0);
    uStack_30 = 0x72ed5d;
    FUN_007e7970(1);
    *(undefined1 *)(param_1 + 0x374) = 1;
    ExceptionList = (void *)0x0;
    return '\x01';
  }
  ExceptionList = (void *)0x0;
  return cVar1;
}


//// FUNCTION FUN_0072f030 @ 0072f030 ////

undefined4 __fastcall FUN_0072f030(int param_1)

{
  void *pvVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4ac8;
  local_c = ExceptionList;
  puVar2 = local_28;
  local_28[0] = 0;
  uVar3 = 0;
  uVar4 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffffcc,"off",3);
  local_4 = 0xffffffff;
  pvVar1 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"roundel");
  uVar4 = FUN_0088a2b0(pvVar1,puVar2,uVar3,uVar4);
  uStack_20 = 0x72f0a4;
  pvVar1 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"roundel");
  FUN_008887b0(pvVar1,uVar4);
  FUN_006a9f30(0);
  uStack_20 = 0x72f0b9;
  uVar3 = FUN_007e7970(1);
  *(undefined1 *)(param_1 + 0x3c4) = 1;
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0072f0e0 @ 0072f0e0 ////

void __fastcall FUN_0072f0e0(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;
  void *in_stack_ffffff7c;
  undefined4 in_stack_ffffff80;
  uint in_stack_ffffff84;
  uint *puVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  void *apvStack_54 [2];
  uint uStack_4c;
  uint auStack_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4af0;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x3a8) == 0) {
    return;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_008819d0(*(void **)(param_1 + 0x358),"fg");
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return;
  }
  if ((*(uint *)(param_1 + 0x218) >> 4 & 1) == 0) {
    ExceptionList = local_c;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x3a8) + 0x84))();
  uVar5 = FUN_00acd42c();
  iVar2 = (int)uVar5;
  FUN_00569d60(apvStack_54,iVar2);
  uStack_4 = 0;
  iVar1 = FUN_008819d0(*(void **)(param_1 + 0x358),"fg");
  iVar1 = *(int *)(iVar1 + 0x260) / 10;
  if (iVar1 < iVar2) {
    FUN_0041c9c0(auStack_34,"HUD_STUDIORATINGUP");
  }
  else {
    if (iVar1 <= iVar2) goto LAB_0072f1f4;
    FUN_0041c9c0(auStack_34,"HUD_STUDIORATINGDOWN");
  }
  auStack_34[0] = auStack_34[0] & 0xfffffffe;
  puVar6 = auStack_34;
  puVar8 = &DAT_00d17518;
  iVar2 = 0;
  iVar1 = 2;
  pvVar3 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar3,iVar1,(byte *)puVar6,iVar2,puVar8);
LAB_0072f1f4:
  FUN_00403de0(&stack0xffffff7c,apvStack_54);
  uStack_4 = uStack_4 & 0xffffff00;
  pvVar3 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"fg");
  uVar4 = FUN_0088a2b0(pvVar3,in_stack_ffffff7c,in_stack_ffffff80,in_stack_ffffff84);
  if ((0 < (int)uVar4) && (*(uint *)(param_1 + 0x3c8) != uVar4)) {
    *(uint *)(param_1 + 0x3c8) = uVar4;
    iVar1 = FUN_008819d0(*(void **)(param_1 + 0x358),"fg");
    if (iVar1 != 0) {
      uVar7 = 7;
      pvVar3 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"fg");
      FUN_0088fd50(pvVar3,uVar4,uVar7);
    }
  }
  if (uStack_4c < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_54[0]);
}


//// FUNCTION FUN_0072f290 @ 0072f290 ////

void __thiscall FUN_0072f290(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d4a2d4;
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


//// FUNCTION FUN_0072f2e0 @ 0072f2e0 ////

void __fastcall FUN_0072f2e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4a2d4;
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


//// FUNCTION FUN_0072f370 @ 0072f370 ////

undefined4 * __thiscall FUN_0072f370(void *this,int param_1)

{
  int *piVar1;
  undefined4 *this_00;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 *in_stack_ffffff58;
  undefined4 uVar10;
  uint uVar11;
  void **ppvVar12;
  undefined1 uVar13;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  void *local_4c [2];
  uint local_44;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4b90;
  pvStack_c = ExceptionList;
  puVar8 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  FUN_0089ea20(this);
  *(undefined ***)this = &PTR_FUN_00d4a364;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4a34c;
  piVar1 = (int *)((int)this + 0x398);
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 **)((int)this + 0x3a0) = (undefined4 *)((int)this + 0x394);
  *(undefined4 *)((int)this + 0x394) = &PTR_FUN_00d1e55c;
  *(int *)((int)this + 0x3a8) = param_1;
  if (param_1 != 0) {
    piVar5 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x39c) = piVar5;
    *piVar1 = *piVar5;
    *(int **)(*piVar5 + 4) = piVar1;
    *piVar5 = (int)piVar1;
  }
  this_00 = (undefined4 *)((int)this + 0x3b4);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 1;
  FUN_0043b460(this_00);
  *(undefined4 *)((int)this + 0x3c8) = 1;
  *(undefined4 *)((int)this + 0x3cc) = 1;
  piVar1 = (int *)((int)this + 0x3d8);
  *(undefined1 *)((int)this + 0x3c4) = 0;
  *(undefined1 *)((int)this + 0x3d4) = 0;
  *(undefined1 *)((int)this + 0x3d5) = 1;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(int **)((int)this + 0x3e4) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"league_position",0xf);
  local_68 = 0xf;
  local_6c[0xf] = '\0';
  local_4._0_1_ = 3;
  FUN_0089e070(this,&local_6c,1,0,'\x01');
  local_4._0_1_ = 2;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  *(undefined4 *)((int)this + 0x3ac) = 0;
  iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"league_position");
  if (iVar2 != 0) {
    in_stack_ffffff58 = &stack0xffffff64;
    uVar10 = 0;
    uVar11 = 0x14;
    FUN_004015d0(&stack0xffffff58,"change",6);
    local_4._0_1_ = 2;
    pvVar3 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"league_position");
    uVar10 = FUN_0088a2b0(pvVar3,in_stack_ffffff58,uVar10,uVar11);
    *(undefined4 *)((int)this + 0x3ac) = uVar10;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x20;
  local_6c = _malloc(0x20);
  _strncpy(local_6c,"STUDIO_LEAGUEPOSITION",0x15);
  local_68 = 0x15;
  local_6c[0x15] = '\0';
  ppvVar12 = local_4c;
  local_4._0_1_ = 5;
  uVar10 = 0x72f577;
  puVar4 = FUN_009b5030(ppvVar12,&local_6c);
  local_4._0_1_ = 6;
  FUN_00740dc0(this,puVar4);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"league_position");
  if (iVar2 != 0) {
    FUN_00881c00(*(void **)((int)this + 0x358),"league_position",*(uint *)((int)this + 0x3ac));
  }
  if ((*(int *)((int)this + 0x3a8) == 0) ||
     (iVar2 = FUN_0050ad80(*(int *)((int)this + 0x3a8)), iVar2 == 0)) goto LAB_0072f806;
  piVar5 = (int *)FUN_0050ad80(*(int *)((int)this + 0x3a8));
  uVar6 = (**(code **)(*piVar5 + 0x28))();
  local_6c = local_60;
  *(undefined4 *)((int)this + 0x3b0) = uVar6;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  local_4._0_1_ = 7;
  sVar7 = _sprintf((char *)local_4c,(char *)&param_2_00d1b93c);
  FUN_004073f0(&local_6c,(char *)local_4c,sVar7);
  if ((*(int *)((int)this + 0x3b0) < 0xb) && (0 < *(int *)((int)this + 0x3b0))) {
    iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"number_from");
    if ((iVar2 != 0) &&
       (iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"number_to"), iVar2 != 0)) {
      FUN_00403de0(&stack0xffffff58,&local_6c);
      local_4 = CONCAT31(local_4._1_3_,7);
      pvVar3 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"number_from");
      uVar11 = FUN_0088a2b0(pvVar3,in_stack_ffffff58,uVar10,(uint)ppvVar12);
      FUN_00881c00(*(void **)((int)this + 0x358),"number_from",uVar11);
      FUN_00403e20(&local_6c,"");
      iVar2 = *(int *)((int)this + 0x3b0);
      if (10 < iVar2) {
        iVar2 = 9;
      }
      FUN_004701b0(&local_6c,iVar2);
      FUN_00403de0(&stack0xffffff58,&local_6c);
LAB_0072f7ba:
      local_4._0_1_ = 7;
      pvVar3 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"number_to");
      uVar11 = FUN_0088a2b0(pvVar3,in_stack_ffffff58,uVar10,(uint)ppvVar12);
      FUN_00881c00(*(void **)((int)this + 0x358),"number_to",uVar11);
    }
  }
  else {
    iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"number_from");
    if ((iVar2 != 0) &&
       (iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"number_to"), iVar2 != 0)) {
      FUN_00401de0(&stack0xffffff58,"10",0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,7);
      pvVar3 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"number_from");
      uVar11 = FUN_0088a2b0(pvVar3,in_stack_ffffff58,uVar10,(uint)ppvVar12);
      FUN_00881c00(*(void **)((int)this + 0x358),"number_from",uVar11);
      FUN_00401de0(&stack0xffffff58,"9",0xffffffff);
      goto LAB_0072f7ba;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
LAB_0072f806:
  FUN_0043b4d0(this_00,1);
  *this_00 = 0x14;
  FUN_00741630(this,5,0x72eb90,this,"STUDIOLEAGUEPOSITION");
  FUN_00741630(this,0,0x72f330,this,"STUDIOLEAGUEPOSITION");
  iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"fg");
  if (iVar2 != 0) {
    iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"fg");
    iVar2 = FUN_00888870(*(int *)(iVar2 + 0x164));
    *(int *)((int)this + 0x3d0) = iVar2 + -0x14;
    *(int *)((int)this + 0x3cc) = iVar2 + -0x14;
    FUN_0072f0e0((int)this);
    uVar11 = *(uint *)((int)this + 0x3c8);
    pvVar3 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"fg");
    FUN_008887b0(pvVar3,uVar11);
    iVar2 = FUN_008819d0(*(void **)((int)this + 0x358),"bg");
    iVar2 = FUN_00888870(*(int *)(iVar2 + 0x164));
    uVar9 = iVar2 - 1;
    uVar11 = uVar9;
    pvVar3 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"bg");
    FUN_008887b0(pvVar3,uVar11);
    uVar13 = 7;
    pvVar3 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"bg");
    FUN_0088fd50(pvVar3,uVar9,uVar13);
  }
  pvVar3 = operator_new(0x360);
  if (pvVar3 != (void *)0x0) {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x20;
    local_6c = _malloc(0x20);
    _strncpy(local_6c,"ui/time_container.dds",0x15);
    local_68 = 0x15;
    local_6c[0x15] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xd);
    puVar8 = FUN_0069d820(pvVar3,&local_6c,0x3f400000,0,0,0x3f800000);
  }
  local_4 = 0xe;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x3ec) = puVar8;
  (**(code **)*piVar1)();
  if ((pvVar3 != (void *)0x0) && (0x14 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_0072f9f0 @ 0072f9f0 ////

void __fastcall FUN_0072f9f0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4bc4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4a364;
  param_1[0x14] = &PTR_FUN_00d4a34c;
  local_4 = 2;
  (**(code **)(param_1[0xe5] + 4))();
  param_1[0xea] = 0;
  (**(code **)param_1[0xe5])();
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
  param_1[0xf6] = &PTR_FUN_00d2d110;
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
  param_1[0xe5] = &PTR_FUN_00d1e55c;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  local_4 = 0xffffffff;
  FUN_0089eb00(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0072fdd0 @ 0072fdd0 ////

void FUN_0072fdd0(void)

{
  void *pvVar1;
  int iVar2;
  int *this;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  float local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4c0b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x3f0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    this = (int *)0x0;
  }
  else {
    iVar2 = GetPlayerStudio();
    this = FUN_0072f370(pvVar1,iVar2);
  }
  local_4 = 0xffffffff;
  FUN_00882710((void *)this[0xd6],&local_14);
  (**(code **)(*this + 0x74))(local_14,local_10);
  FUN_0089e5f0(this,'\x01');
  iVar2 = *this;
  fVar5 = FUN_0071afe0();
  fVar6 = (float)(fVar5 - (float10)12.0);
  iVar3 = FUN_0071b2b0();
  pvVar1 = (void *)0x2;
  (**(code **)(iVar2 + 0x60))(2,iVar3,fVar6);
  iVar2 = *this;
  fVar5 = FUN_0071aff0();
  fVar6 = (float)(fVar5 - (float10)25.0);
  iVar3 = FUN_0071b2b0();
  (**(code **)(iVar2 + 100))(1,iVar3,fVar6);
  piVar4 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar4 + 0xc))(this,1);
  (*(code *)DAT_0104e080[1])();
  DAT_0104e094 = this;
  (*(code *)*DAT_0104e080)();
  ExceptionList = pvVar1;
  return;
}


//// FUNCTION FUN_0072fed0 @ 0072fed0 ////

undefined4 * __thiscall FUN_0072fed0(void *this,byte param_1)

{
  FUN_0072f9f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0072ff00 @ 0072ff00 ////

int * __thiscall FUN_0072ff00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0072ff60 @ 0072ff60 ////

undefined4 __fastcall FUN_0072ff60(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_00730020 @ 00730020 ////

void __fastcall FUN_00730020(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00539330(*(int **)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = 3;
    this = (void *)FUN_00539330(*(int **)(param_1 + 0x4c8));
    FUN_009021d0(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_007302a0 @ 007302a0 ////

undefined4 * __fastcall FUN_007302a0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 0x52c) != (int *)0x0) {
    puVar1 = FUN_0073c910(*(int **)(param_1 + 0x52c));
    return puVar1;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007302c0 @ 007302c0 ////

void __fastcall FUN_007302c0(int param_1)

{
  void *this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x11c);
    this = (void *)FUN_0073caf0(*(int *)(param_1 + 0x52c));
    FUN_00982950(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_007302f0 @ 007302f0 ////

void __thiscall FUN_007302f0(void *this,undefined4 param_1)

{
  FUN_0073b810(*(void **)((int)this + 0x52c),1);
  *(undefined4 *)((int)this + 0x530) = param_1;
  *(undefined1 *)((int)this + 0x534) = 1;
  return;
}


//// FUNCTION FUN_00730350 @ 00730350 ////

void __fastcall FUN_00730350(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char **ppcVar2;
  undefined4 local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4c28;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"Stunts",6);
  local_28 = 6;
  local_2c[6] = '\0';
  ppcVar2 = &local_2c;
  puVar1 = &local_34;
  local_4 = 0;
  this = (void *)FUN_00577370(*(int *)(param_1 + 0x4c8));
  FUN_00441750(this,puVar1,ppcVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_30 = &stack0xffffffbc;
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x10c))();
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_007304b0 @ 007304b0 ////

void __fastcall FUN_007304b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4a4b0;
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


//// FUNCTION FUN_00730500 @ 00730500 ////

undefined4 * __thiscall FUN_00730500(void *this,undefined4 param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4c56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006899b0(this);
  piVar1 = (int *)((int)this + 0x348);
  *(undefined ***)this = &PTR_FUN_00d4a4dc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4a4c0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(int **)((int)this + 0x354) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x35c) = 0;
  local_4 = 1;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x35c) = param_1;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00730580 @ 00730580 ////

undefined4 * __fastcall FUN_00730580(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4c6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x3a8);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_007305f0(this,param_1,*(undefined4 *)(param_1 + 0x35c));
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007305f0 @ 007305f0 ////

undefined4 * __thiscall FUN_007305f0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *this_00;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4cb2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0068c340(this);
  piVar5 = (int *)((int)this + 0x360);
  *(undefined ***)this = &PTR_FUN_00d4a5fc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4a5e4;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(int **)((int)this + 0x36c) = piVar5;
  *piVar5 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x374) = 0;
  piVar1 = (int *)((int)this + 0x378);
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(int **)((int)this + 900) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x38c) = 0;
  piVar2 = (int *)((int)this + 0x390);
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(int **)((int)this + 0x39c) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d18c4c;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  local_4 = 3;
  FUN_0073e4e0(this,0x42200000);
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0x3a4) = param_2;
  (**(code **)*piVar2)();
  (**(code **)(*piVar5 + 4))();
  *(int *)((int)this + 0x374) = param_1;
  (**(code **)*piVar5)();
  iVar3 = *(int *)((int)this + 0x374);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x124) != iVar3 + 0x130)) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x124) + 8);
    (**(code **)(*piVar1 + 4))();
    *(undefined4 *)((int)this + 0x38c) = uVar4;
    (**(code **)*piVar1)();
    iVar3 = *(int *)((int)this + 0x38c);
    piVar5 = (int *)(iVar3 + 0x150);
    if (*(int **)(iVar3 + 0x154) != (int *)0x0) {
      **(int **)(iVar3 + 0x154) = *piVar5;
    }
    if (*piVar5 != 0) {
      *(undefined4 *)(*piVar5 + 4) = *(undefined4 *)(iVar3 + 0x154);
    }
    *piVar5 = 0;
    *(undefined4 *)(iVar3 + 0x154) = 0;
    (**(code **)(**(int **)((int)this + 0x38c) + 0x70))(this,0);
    FUN_0073f6e0(this,*(int **)((int)this + 0x38c));
    this_00 = (void *)FUN_00ace790(*(int **)((int)this + 0x38c),0,&TM::WWindow::RTTI_Type_Descriptor
                                   ,&TM::WViewportCharacter::RTTI_Type_Descriptor,0);
    if (this_00 != (void *)0x0) {
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0x3f800000;
      uStack_18 = 0;
      uStack_14 = 0xc0200000;
      uStack_10 = 0x3f800000;
      FUN_0073cb00(this_00,&uStack_18,&uStack_24,0x3f060a92);
      FUN_0073b810(this_00,1);
    }
  }
  if (DAT_0104d8e8 != (void *)0x0) {
    FUN_005f5bb0(DAT_0104d8e8,this);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007307e0 @ 007307e0 ////

void __fastcall FUN_007307e0(int *param_1)

{
  FUN_00689830(param_1);
  param_1[0xd4] = 0x41a00000;
  param_1[0xd5] = 0x42200000;
  return;
}


//// FUNCTION FUN_00730820 @ 00730820 ////

undefined4 * __thiscall FUN_00730820(void *this,byte param_1)

{
  FUN_00730840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00730840 @ 00730840 ////

void __fastcall FUN_00730840(undefined4 *param_1)

{
  int iVar1;
  void *this;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4cf2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4a5fc;
  param_1[0x14] = &PTR_FUN_00d4a5e4;
  local_4 = 3;
  if (DAT_0104d8e8 != (void *)0x0) {
    FUN_005f5bb0(DAT_0104d8e8,0);
  }
  iVar1 = param_1[0xe3];
  if ((iVar1 != 0) && (param_1[0xdd] != 0)) {
    if (*(undefined4 **)(iVar1 + 0x154) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar1 + 0x154) = *(undefined4 *)(iVar1 + 0x150);
    }
    if (*(int *)(iVar1 + 0x150) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x150) + 4) = *(undefined4 *)(iVar1 + 0x154);
    }
    *(undefined4 *)(iVar1 + 0x150) = 0;
    *(undefined4 *)(iVar1 + 0x154) = 0;
    (**(code **)(*(int *)param_1[0xe3] + 0x70))(param_1[0xdd],0);
    (**(code **)(*(int *)param_1[0xdd] + 0xc))(param_1[0xe3],1);
    this = (void *)FUN_00ace790((int *)param_1[0xe3],0,&TM::WWindow::RTTI_Type_Descriptor,
                                &TM::WViewportCharacter::RTTI_Type_Descriptor,0);
    if (this != (void *)0x0) {
      uStack_24 = 0;
      uStack_20 = 0;
      puStack_1c = &DAT_3fd33333;
      uStack_18 = 0;
      uStack_14 = 0xbf333333;
      puStack_10 = &DAT_3fd33333;
      FUN_0073cb00(this,&uStack_18,&uStack_24,0x3f060a92);
      FUN_0073b810(this,0);
    }
  }
  param_1[0xe4] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0xe6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe6] = param_1[0xe5];
  }
  if (param_1[0xe5] != 0) {
    *(undefined4 *)(param_1[0xe5] + 4) = param_1[0xe6];
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe9] = 0;
  if ((undefined4 *)param_1[0xe6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe6] = param_1[0xe5];
  }
  if (param_1[0xe5] != 0) {
    *(undefined4 *)(param_1[0xe5] + 4) = param_1[0xe6];
  }
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xde] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe3] = 0;
  if ((undefined4 *)param_1[0xe0] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe0] = param_1[0xdf];
  }
  if (param_1[0xdf] != 0) {
    *(undefined4 *)(param_1[0xdf] + 4) = param_1[0xe0];
  }
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xd8] = &PTR_FUN_00d18c2c;
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
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00730ae0 @ 00730ae0 ////

void __fastcall FUN_00730ae0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4d4e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4a71c;
  param_1[0x14] = &PTR_LAB_00d4a700;
  puVar2 = (undefined4 *)param_1[0x14b];
  local_4 = 5;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x146] + 4))();
    param_1[0x14b] = 0;
    (**(code **)param_1[0x146])();
  }
  puVar2 = (undefined4 *)param_1[0x138];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  puVar2 = (undefined4 *)param_1[0x144];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x13f] + 4))();
    param_1[0x144] = 0;
    (**(code **)param_1[0x13f])();
  }
  param_1[0x146] = &PTR_LAB_00d2dc14;
  if ((undefined4 *)param_1[0x148] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x148] = param_1[0x147];
  }
  if (param_1[0x147] != 0) {
    *(undefined4 *)(param_1[0x147] + 4) = param_1[0x148];
  }
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x14b] = 0;
  if ((undefined4 *)param_1[0x148] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x148] = param_1[0x147];
  }
  if (param_1[0x147] != 0) {
    *(undefined4 *)(param_1[0x147] + 4) = param_1[0x148];
  }
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x13f] = &PTR_LAB_00d4a4b0;
  if ((undefined4 *)param_1[0x141] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x140] != 0) {
    *(undefined4 *)(param_1[0x140] + 4) = param_1[0x141];
  }
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x144] = 0;
  if ((undefined4 *)param_1[0x141] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x140] != 0) {
    *(undefined4 *)(param_1[0x140] + 4) = param_1[0x141];
  }
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x139] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d25c70;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00730e80 @ 00730e80 ////

void __fastcall FUN_00730e80(void *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4e1d;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"iconpanel2",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_2c,1,0,'\x01');
  puVar3 = &stack0xffffff70;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff64,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar4 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  *(undefined4 *)((int)param_1 + 0x430) = uVar4;
  puVar3 = &stack0xffffff70;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff64,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar4 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  *(undefined4 *)((int)param_1 + 0x428) = uVar4;
  puVar3 = &stack0xffffff70;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff64,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar4 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  *(undefined4 *)((int)param_1 + 0x434) = uVar4;
  puVar3 = &stack0xffffff70;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff64,"Closed",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar4 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  *(undefined4 *)((int)param_1 + 0x42c) = uVar4;
  puVar3 = &stack0xffffff70;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff64,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"hud_star");
  uVar4 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  *(undefined4 *)((int)param_1 + 0x438) = uVar4;
  puVar3 = &stack0xffffff70;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff64,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"star_card");
  uVar4 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  *(undefined4 *)((int)param_1 + 0x43c) = uVar4;
  puVar3 = &stack0xffffff70;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff64,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"star_card");
  uVar4 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  *(undefined4 *)((int)param_1 + 0x440) = uVar4;
  pvVar1 = operator_new(0x4dc);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    local_6c = (undefined4 *)0x0;
  }
  else {
    local_6c = FUN_007ac880(pvVar1,1,0,0,0);
  }
  local_4._0_1_ = 0;
  (**(code **)(*(int *)((int)param_1 + 0x4e4) + 4))();
  *(undefined4 **)((int)param_1 + 0x4f8) = local_6c;
  (*(code *)**(undefined4 **)((int)param_1 + 0x4e4))();
  FUN_007e9550(param_1,'\0');
  if (*(int *)((int)param_1 + 0x4f8) != 0) {
    puStack_64 = (undefined4 *)0x0;
    uStack_60 = 0;
    FUN_00882710(*(void **)(*(int *)((int)param_1 + 0x4f8) + 0x358),(float *)&puStack_64);
    (**(code **)(**(int **)((int)param_1 + 0x4f8) + 0x74))();
    FUN_0089e5f0(*(void **)((int)param_1 + 0x4f8),'\x01');
    iVar2 = FUN_00577370(*(int *)((int)param_1 + 0x4c8));
    FUN_00441450(iVar2);
    (**(code **)(**(int **)((int)param_1 + 0x4f8) + 0x10c))();
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"star_mood",9);
    uStack_48 = 9;
    pcStack_4c[9] = '\0';
    local_4._0_1_ = 9;
    FUN_0087ecc0(*(void **)(*(int *)((int)param_1 + 0x358) + 0x178),*(int **)((int)param_1 + 0x4f8),
                 &pcStack_4c,1,0,(undefined1 *)0x0);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    puVar3 = &stack0xffffff70;
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff64,"showmood",8);
    local_4._0_1_ = 0;
    pvVar1 = (void *)FUN_008819d0(*(void **)((int)param_1 + 0x358),"star_info");
    uVar5 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
    FUN_00881b40(*(void **)((int)param_1 + 0x358),"star_info",uVar5);
  }
  FUN_007e8be0((int)param_1);
  FUN_00730350((int)param_1);
  pvVar1 = operator_new(0x360);
  if (pvVar1 == (void *)0x0) {
    local_6c = (undefined4 *)0x0;
  }
  else {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x20;
    pcStack_4c = _malloc(0x20);
    _strncpy(pcStack_4c,"ui/activity_busyfilm.dds",0x18);
    uStack_48 = 0x18;
    pcStack_4c[0x18] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xc);
    puStack_64 = (undefined4 *)&stack0xffffff74;
    local_6c = FUN_0069d820(pvVar1,&pcStack_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xd;
  (**(code **)(*(int *)((int)param_1 + 0x4cc) + 4))();
  *(undefined4 **)((int)param_1 + 0x4e0) = local_6c;
  (*(code *)**(undefined4 **)((int)param_1 + 0x4cc))();
  local_4 = 0;
  if ((pvVar1 != (void *)0x0) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (*(int *)(*(int *)((int)param_1 + 0x4c8) + 0x814) != 3) {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"",0);
    uStack_48 = 0;
    *pcStack_4c = '\0';
    puStack_64 = (undefined4 *)&stack0xffffff74;
    local_4._0_1_ = 0xe;
    (**(code **)(**(int **)((int)param_1 + 0x4e0) + 0x100))();
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    FUN_0069ce60(*(void **)((int)param_1 + 0x4e0),0xffffff);
  }
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"star_job",8);
  uStack_48 = 8;
  pcStack_4c[8] = '\0';
  local_4._0_1_ = 0xf;
  FUN_0087ecc0(*(void **)(*(int *)((int)param_1 + 0x358) + 0x178),*(int **)((int)param_1 + 0x4e0),
               &pcStack_4c,1,0,(undefined1 *)0x0);
  local_4._0_1_ = 0;
  if (uStack_44 < 0x15) {
    puStack_64 = operator_new(0x3e4);
    local_4._0_1_ = 0x10;
    if (puStack_64 == (undefined4 *)0x0) {
      local_68 = (undefined4 *)0x0;
    }
    else {
      local_68 = FUN_0073d300(puStack_64);
    }
    local_4._0_1_ = 0;
    (**(code **)(*(int *)((int)param_1 + 0x518) + 4))();
    *(undefined4 **)((int)param_1 + 0x52c) = local_68;
    (*(code *)**(undefined4 **)((int)param_1 + 0x518))();
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"ai_staricon.flm",0xf);
    uStack_48 = 0xf;
    pcStack_4c[0xf] = '\0';
    local_4._0_1_ = 0x11;
    FUN_0073dda0(*(void **)((int)param_1 + 0x52c),&pcStack_4c);
    local_4._0_1_ = 0;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    if (*(int *)((int)param_1 + 0x4c8) != 0) {
      puStack_64 = (undefined4 *)0x0;
      uStack_60 = 0;
      puStack_5c = &DAT_3fd33333;
      uStack_58 = 0;
      uStack_54 = 0xbf333333;
      puStack_50 = &DAT_3fd33333;
      FUN_0073cb00(*(void **)((int)param_1 + 0x52c),&uStack_58,&puStack_64,0x3f060a92);
      FUN_0073cff0(*(void **)((int)param_1 + 0x52c),*(int **)((int)param_1 + 0x4c8));
    }
    if ((DAT_0104d8e8 == 0) || (*(int *)((int)param_1 + 0x4c8) == 0)) {
      pcStack_4c = acStack_40;
      acStack_40[0] = '\0';
      uStack_48 = 0;
      uStack_44 = 0x14;
      _strncpy(pcStack_4c,"star_head",9);
      uStack_48 = 9;
      pcStack_4c[9] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0x14);
      FUN_0087ecc0(*(void **)(*(int *)((int)param_1 + 0x358) + 0x178),
                   *(int **)((int)param_1 + 0x52c),&pcStack_4c,1,0,(undefined1 *)0x0);
    }
    else {
      puStack_64 = operator_new(0x360);
      local_4._0_1_ = 0x12;
      if (puStack_64 == (undefined4 *)0x0) {
        local_68 = (undefined4 *)0x0;
      }
      else {
        local_68 = FUN_00730500(puStack_64,*(undefined4 *)((int)param_1 + 0x4c8));
      }
      local_4._0_1_ = 0;
      (**(code **)(*(int *)((int)param_1 + 0x4fc) + 4))();
      *(undefined4 **)((int)param_1 + 0x510) = local_68;
      (*(code *)**(undefined4 **)((int)param_1 + 0x4fc))();
      (**(code **)(**(int **)((int)param_1 + 0x510) + 0xc))();
      (**(code **)(**(int **)((int)param_1 + 0x52c) + 0x70))();
      pcStack_4c = acStack_40;
      acStack_40[0] = '\0';
      uStack_48 = 0;
      uStack_44 = 0x14;
      _strncpy(pcStack_4c,"star_head",9);
      uStack_48 = 9;
      pcStack_4c[9] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0x13);
      FUN_0087ecc0(*(void **)(*(int *)((int)param_1 + 0x358) + 0x178),
                   *(int **)((int)param_1 + 0x510),&pcStack_4c,1,0,(undefined1 *)0x0);
    }
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_4c);
}


//// FUNCTION FUN_00731770 @ 00731770 ////

undefined4 * __thiscall FUN_00731770(void *this,byte param_1)

{
  FUN_00731790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00731790 @ 00731790 ////

void __fastcall FUN_00731790(undefined4 *param_1)

{
  param_1[0xd2] = &PTR_FUN_00d18c4c;
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
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_00731810 @ 00731810 ////

undefined4 * __thiscall FUN_00731810(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4e7e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d4a71c;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d4a700;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d25c70;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 **)((int)this + 0x508) = (undefined4 *)((int)this + 0x4fc);
  *(undefined4 *)((int)this + 0x4fc) = &PTR_LAB_00d4a4b0;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x514) = 0;
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined4 *)((int)this + 0x51c) = 0;
  *(undefined4 *)((int)this + 0x520) = 0;
  *(undefined4 **)((int)this + 0x524) = (undefined4 *)((int)this + 0x518);
  *(undefined4 *)((int)this + 0x518) = &PTR_LAB_00d2dc14;
  *(undefined4 *)((int)this + 0x52c) = 0;
  local_4 = 5;
  *(undefined1 *)((int)this + 0x534) = 0;
  iVar3 = FUN_00990d30(0x1e,0x46);
  *(int *)((int)this + 0x530) = iVar3;
  FUN_00730e80(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00731930 @ 00731930 ////

undefined4 * __thiscall FUN_00731930(void *this,byte param_1)

{
  FUN_00730ae0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00731950 @ 00731950 ////

void __fastcall FUN_00731950(int param_1)

{
  char cVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  uint unaff_EBP;
  void *unaff_EDI;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  char *local_b0;
  void **local_ac;
  int *local_a8;
  int *local_a4;
  void *local_a0 [2];
  uint uStack_98;
  undefined1 local_8c [12];
  void *pvStack_80;
  uint uStack_78;
  undefined1 local_6c [12];
  void *pvStack_60;
  uint uStack_58;
  undefined1 local_4c [12];
  void *pvStack_40;
  uint uStack_38;
  undefined1 local_2c [12];
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd4edf;
  pvStack_c = ExceptionList;
  if (DAT_0104d8e8 != 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_005f5ba0(DAT_0104d8e8);
    if (((iVar2 != 0) && (this = (void *)FUN_005b2220(iVar2), this != (void *)0x0)) &&
       (iVar2 = FUN_005a7640(this,*(int *)(param_1 + 0x4c8),0), iVar2 != 0)) {
      uVar3 = FUN_005a6130(iVar2);
      switch(uVar3) {
      case 0:
        goto switchD_007319c4_caseD_0;
      case 1:
        FUN_00401de0(&local_ac,"ui/button_dummy_red.dds",0xffffffff);
        local_4 = 0;
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
        if (unaff_EBP < 0x15) {
          ExceptionList = pvStack_20;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(unaff_EDI);
      case 2:
        FUN_00401de0(local_8c,"ui/button_dummy_green.dds",0xffffffff);
        local_4 = 1;
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_8c);
        if (uStack_98 < 0x15) {
          ExceptionList = pvStack_20;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_a0[0]);
      case 3:
        FUN_00401de0(local_4c,"ui/button_dummy_blue.dds",0xffffffff);
        local_4 = 2;
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_4c);
        if (uStack_58 < 0x15) {
          ExceptionList = pvStack_20;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvStack_60);
      default:
        FUN_00401de0(local_2c,"ui/empty.dds",0xffffffff);
        local_4 = 4;
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_2c);
        if (uStack_38 < 0x15) {
          ExceptionList = pvStack_20;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(pvStack_40);
      }
    }
    local_ac = local_a0;
    local_a0[0] = (void *)((uint)local_a0[0] & 0xffffff00);
    local_a8 = (int *)0x0;
    local_a4 = (int *)0x14;
    _strncpy((char *)local_ac,"ui/empty.dds",0xc);
    local_a8 = (int *)0xc;
    *(char *)(local_ac + 3) = '\0';
    local_4 = 5;
    (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
    if (unaff_EBP < 0x15) {
      ExceptionList = pvStack_20;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  iVar2 = 0;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1ec))();
  if (iVar4 != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1ec))();
    iVar2 = *(int *)(iVar2 + 0xa0);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar10 = 0;
    pTVar9 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
    pTVar8 = &TM::CPhaseBase::RTTI_Type_Descriptor;
    iVar4 = 0;
    piVar5 = (int *)FUN_005b22a0(iVar2);
    iVar4 = FUN_00ace790(piVar5,iVar4,pTVar8,pTVar9,iVar10);
  }
  local_b0 = (char *)0x0;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1c4))();
  if ((cVar1 == '\0') && ((iVar2 == 0 || (iVar4 == 0)))) {
    piVar5 = (int *)FUN_0053ae00(*(int *)(param_1 + 0x4c8));
    if (piVar5 != (int *)0x0) {
      iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                           &TM::CLeadsRoom::RTTI_Type_Descriptor,0);
      if (((iVar2 != 0) ||
          (iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                &TM::CCastRoom::RTTI_Type_Descriptor,0), iVar2 != 0)) ||
         (iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                               &TM::CCrewRoom::RTTI_Type_Descriptor,0), iVar2 != 0))
      goto LAB_00731d65;
      iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                           &TM::CRehearseRoom::RTTI_Type_Descriptor,0);
      if ((iVar2 == 0) &&
         (iVar2 = FUN_00ace790(piVar5,0,&TM::TMRoom::RTTI_Type_Descriptor,
                               &TM::CHospitalRoom::RTTI_Type_Descriptor,0), iVar2 == 0))
      goto LAB_00731d73;
      local_b0 = "ui/activity_busy.dds";
      goto LAB_00731d6d;
    }
LAB_00731d73:
    iVar2 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
    if (iVar2 != 0) {
      iVar10 = 0;
      pTVar9 = &TM::DesireStuntTrain::RTTI_Type_Descriptor;
      pTVar8 = &TM::TMBaseDesire::RTTI_Type_Descriptor;
      iVar4 = 0;
      iVar2 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
      piVar5 = (int *)FUN_00401c30(iVar2);
      iVar2 = FUN_00ace790(piVar5,iVar4,pTVar8,pTVar9,iVar10);
      if (iVar2 != 0) {
        local_b0 = "ui/activity_busy.dds";
        goto LAB_00731e6b;
      }
    }
  }
  else {
LAB_00731d65:
    local_b0 = "ui/activity_busyfilm.dds";
LAB_00731d6d:
    if (local_b0 == (char *)0x0) goto LAB_00731d73;
  }
  if ((*(int **)(param_1 + 0x4c8))[0x205] == 0x10) {
    local_a8 = (int *)0x0;
    local_a4 = (int *)0x0;
    local_a0[0] = (void *)0x0;
    local_4 = 6;
    (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1f8))();
    if (local_a8 != (int *)0x0) {
      if (((int)local_a4 - (int)local_a8 >> 2 != 0) && (piVar5 = local_a8, local_a8 != local_a4)) {
        do {
          iVar2 = *piVar5;
          if (iVar2 != 0) {
            piVar6 = (int *)FUN_005b22a0(iVar2);
            iVar4 = (**(code **)(*piVar6 + 0x24))();
            if (iVar4 == 4) {
              if ((*(int *)(iVar2 + 0x210) != 0) &&
                 (iVar2 = FUN_0053ae00(*(int *)(iVar2 + 0x210)), iVar2 != 0)) {
                local_b0 = "ui/activity_busyfilm.dds";
                break;
              }
            }
            else {
              piVar6 = (int *)FUN_005b22a0(iVar2);
              iVar2 = (**(code **)(*piVar6 + 0x24))();
              if (iVar2 == 5) {
                local_b0 = "ui/activity_idlefilm.dds";
              }
            }
          }
          piVar5 = piVar5 + 1;
        } while (piVar5 != local_a4);
      }
      if (local_a8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_a8);
      }
    }
  }
  else {
    local_b0 = "ui/activity_busytemp.dds";
  }
LAB_00731e6b:
  if (local_b0 == (char *)0x0) {
    local_b0 = "ui/activity_idle.dds";
  }
  local_ac = local_a0;
  local_a0[0] = (void *)((uint)local_a0[0] & 0xffffff00);
  local_a8 = (int *)0x0;
  local_a4 = (int *)0x14;
  pcVar7 = local_b0;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_ac,local_b0,(int)pcVar7 - (int)(local_b0 + 1));
  local_4 = 7;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
  uStack_18 = 0xffffffff;
  if (unaff_EBP < 0x15) {
    FUN_0069ce60(*(void **)(param_1 + 0x4e0),0xffffffff);
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EDI);
switchD_007319c4_caseD_0:
  FUN_00401de0(local_6c,"ui/button_dummyoff.dds",0xffffffff);
  local_4 = 3;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_6c);
  if (uStack_78 < 0x15) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_80);
}


//// FUNCTION FUN_00732270 @ 00732270 ////

undefined4 * __fastcall FUN_00732270(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d4a9b4;
  param_1[0x14] = &PTR_FUN_00d4a99c;
  return param_1;
}


//// FUNCTION FUN_007322a0 @ 007322a0 ////

undefined4 * __thiscall FUN_007322a0(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00732460 @ 00732460 ////

int __fastcall FUN_00732460(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00732520 @ 00732520 ////

int __fastcall FUN_00732520(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00732740 @ 00732740 ////

int * __thiscall FUN_00732740(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00732760 @ 00732760 ////

int * __thiscall FUN_00732760(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00732790 @ 00732790 ////

int * __cdecl FUN_00732790(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_007327e0 @ 007327e0 ////

int * __cdecl FUN_007327e0(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_00732820 @ 00732820 ////

undefined4 * __cdecl FUN_00732820(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00732860 @ 00732860 ////

undefined4 * __cdecl FUN_00732860(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007329d0 @ 007329d0 ////

undefined4 FUN_007329d0(void)

{
  if (DAT_0104d8e8 != 0) {
    return *(undefined4 *)(DAT_0104d8e8 + 0x61c);
  }
  return DAT_0104e0ac;
}


//// FUNCTION FUN_007329f0 @ 007329f0 ////

float10 __fastcall FUN_007329f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
  }
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return ((float10)*(int *)(param_1 + 0x394) * (float10)DAT_00e5bd34 +
         (float10)DAT_00e5bd34 * (float10)0.4 * (float10)*(int *)(param_1 + 0x398)) -
         fVar2 * (float10)10.0;
}


//// FUNCTION FUN_00732a70 @ 00732a70 ////

ulonglong __fastcall FUN_00732a70(int *param_1)

{
  ulonglong uVar1;
  
  (**(code **)(*param_1 + 0x14))();
  FUN_007329f0((int)param_1);
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_00732ab0 @ 00732ab0 ////

ulonglong __fastcall FUN_00732ab0(int *param_1)

{
  undefined2 unaff_SI;
  float10 fVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  fVar1 = FUN_007329f0((int)param_1);
  fVar2 = (float10)(**(code **)(*param_1 + 0x14))();
  FUN_00ad1180((double)(((float10)(float)fVar1 - fVar2) / ((float10)DAT_00e5bd34 * (float10)0.6)),
               unaff_SI);
  uVar3 = FUN_00acd42c();
  return uVar3;
}


//// FUNCTION FUN_00732d40 @ 00732d40 ////

void __cdecl FUN_00732d40(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00732da0 @ 00732da0 ////

void __cdecl FUN_00732da0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00732ed0 @ 00732ed0 ////

void __fastcall FUN_00732ed0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d4aab8;
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


//// FUNCTION FUN_00733040 @ 00733040 ////

undefined4 * __thiscall FUN_00733040(void *this,byte param_1)

{
  FUN_005783d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00733060 @ 00733060 ////

undefined4 * __thiscall FUN_00733060(void *this,byte param_1)

{
  FUN_00732ed0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00733080 @ 00733080 ////

void __cdecl FUN_00733080(int *param_1,int *param_2)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4ef8;
  pvStack_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_10 = param_1[5];
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d25c70;
  ExceptionList = &pvStack_c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &pvStack_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 4))();
  param_2[5] = local_10;
  (**(code **)*param_2)();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00733150 @ 00733150 ////

void __cdecl FUN_00733150(int *param_1,int *param_2)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4f18;
  pvStack_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_10 = param_1[5];
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d4aab8;
  ExceptionList = &pvStack_c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &pvStack_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 4))();
  param_2[5] = local_10;
  (**(code **)*param_2)();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00733220 @ 00733220 ////

void __cdecl
FUN_00733220(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4f38;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    cVar3 = (*(code *)param_10)(*(undefined4 *)(iVar1 + 0x14),param_9);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
    puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar2)();
    param_2 = iVar4;
  }
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
  (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
  puVar2[5] = param_9;
  (**(code **)*puVar2)();
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007332f0 @ 007332f0 ////

void __cdecl FUN_007332f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4f58;
  local_c = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x18;
  iVar2 = (param_2 - param_1) / 0x18;
  iVar5 = iVar2;
  local_38 = iVar1;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_38 % iVar3;
    local_38 = iVar3;
  }
  if ((local_38 < iVar1) && (0 < local_38)) {
    piVar8 = (int *)(param_1 + local_38 * 0x18);
    param_2 = iVar2 * 0x18;
    ExceptionList = &local_c;
    do {
      local_18 = &local_24;
      iVar1 = param_2 + (int)piVar8;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_FUN_00d25c70;
      local_10 = *(int *)(iVar2 * -0x18 + 0x14 + iVar1);
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if (iVar1 == param_3) {
        piVar7 = &param_1;
      }
      else {
        iStack_30 = iVar1;
        piVar7 = &iStack_30;
      }
      piVar6 = (int *)*piVar7;
      piVar7 = piVar8;
      while (piVar4 = piVar6, piVar4 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7[5] = piVar4[5];
        (**(code **)*piVar7)();
        iVar1 = (param_3 - (int)piVar4) / 0x18;
        if (iVar2 < iVar1) {
          iStack_2c = param_2 + (int)piVar4;
          piVar7 = &iStack_2c;
        }
        else {
          iStack_28 = param_1 + (iVar2 - iVar1) * 0x18;
          piVar7 = &iStack_28;
        }
        piVar6 = (int *)*piVar7;
        piVar7 = piVar4;
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = local_10;
      (**(code **)*piVar7)();
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      piVar8 = piVar8 + -6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007334d0 @ 007334d0 ////

void __cdecl
FUN_007334d0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4f78;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    cVar3 = (*(code *)param_10)(*(undefined4 *)(iVar1 + 0x14),param_9);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
    puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar2)();
    param_2 = iVar4;
  }
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
  (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
  puVar2[5] = param_9;
  (**(code **)*puVar2)();
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007335a0 @ 007335a0 ////

void __cdecl FUN_007335a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4f98;
  local_c = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x18;
  iVar2 = (param_2 - param_1) / 0x18;
  iVar5 = iVar2;
  local_38 = iVar1;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_38 % iVar3;
    local_38 = iVar3;
  }
  if ((local_38 < iVar1) && (0 < local_38)) {
    piVar8 = (int *)(param_1 + local_38 * 0x18);
    param_2 = iVar2 * 0x18;
    ExceptionList = &local_c;
    do {
      local_18 = &local_24;
      iVar1 = param_2 + (int)piVar8;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_LAB_00d4aab8;
      local_10 = *(int *)(iVar2 * -0x18 + 0x14 + iVar1);
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if (iVar1 == param_3) {
        piVar7 = &param_1;
      }
      else {
        iStack_30 = iVar1;
        piVar7 = &iStack_30;
      }
      piVar6 = (int *)*piVar7;
      piVar7 = piVar8;
      while (piVar4 = piVar6, piVar4 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7[5] = piVar4[5];
        (**(code **)*piVar7)();
        iVar1 = (param_3 - (int)piVar4) / 0x18;
        if (iVar2 < iVar1) {
          iStack_2c = param_2 + (int)piVar4;
          piVar7 = &iStack_2c;
        }
        else {
          iStack_28 = param_1 + (iVar2 - iVar1) * 0x18;
          piVar7 = &iStack_28;
        }
        piVar6 = (int *)*piVar7;
        piVar7 = piVar4;
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = local_10;
      (**(code **)*piVar7)();
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      piVar8 = piVar8 + -6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00733780 @ 00733780 ////

void __fastcall FUN_00733780(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x35c) != 0) {
        iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x35c) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_007337f0 @ 007337f0 ////

undefined1 __thiscall FUN_007337f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = FUN_0072ff60(iVar2);
      if ((iVar1 != 0) && (iVar2 = FUN_0072ff60(iVar2), iVar2 == param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}


//// FUNCTION FUN_00733870 @ 00733870 ////

void __thiscall FUN_00733870(void *this,int param_1)

{
  int *this_00;
  char cVar1;
  int iVar2;
  
  if ((0 < param_1) && (iVar2 = *(int *)((int)this + 0x35c), iVar2 != *(int *)((int)this + 0x360)))
  {
    do {
      this_00 = *(int **)(iVar2 + 0x14);
      cVar1 = FUN_007e7910((int)this_00);
      if ((cVar1 != '\0') && (1 < *(int *)((int)this + 0x394))) {
        FUN_007e7e10(this_00);
        *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + -1;
        *(int *)((int)this + 0x398) = *(int *)((int)this + 0x398) + 1;
        cVar1 = (**(code **)(*this_00 + 0x100))();
        if (cVar1 == '\0') {
          FUN_0089e5f0(this_00,'\x01');
        }
        param_1 = param_1 + -1;
        if (param_1 < 1) {
          return;
        }
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)((int)this + 0x360));
  }
  return;
}


//// FUNCTION FUN_00733900 @ 00733900 ////

void __thiscall FUN_00733900(void *this,int param_1)

{
  int *this_00;
  char cVar1;
  int iVar2;
  
  if ((0 < param_1) && (iVar2 = *(int *)((int)this + 0x35c), iVar2 != *(int *)((int)this + 0x360)))
  {
    do {
      this_00 = *(int **)(iVar2 + 0x14);
      cVar1 = FUN_007e7910((int)this_00);
      if (cVar1 == '\0') {
        FUN_007e7dc0(this_00);
        *(int *)((int)this + 0x398) = *(int *)((int)this + 0x398) + -1;
        *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + 1;
        cVar1 = (**(code **)(*this_00 + 0x100))();
        if (cVar1 == '\0') {
          FUN_0089e5f0(this_00,'\x01');
        }
        param_1 = param_1 + -1;
        if (param_1 < 1) {
          return;
        }
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)((int)this + 0x360));
  }
  return;
}


//// FUNCTION FUN_00733980 @ 00733980 ////

void __thiscall FUN_00733980(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      piVar1 = *(int **)(iVar3 + 0x14);
      cVar2 = FUN_007e7910((int)piVar1);
      if ((cVar2 != '\0') && (piVar1 != param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return;
      }
    }
    FUN_007e7e10(piVar1);
    *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + -1;
    *(int *)((int)this + 0x398) = *(int *)((int)this + 0x398) + 1;
  }
  return;
}


//// FUNCTION FUN_007339f0 @ 007339f0 ////

int __thiscall FUN_007339f0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_0072ff60(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_0072ff60(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return 0;
}


//// FUNCTION FUN_00733a90 @ 00733a90 ////

int __fastcall FUN_00733a90(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x35c);
  iVar2 = 0;
  if (iVar3 != *(int *)(param_1 + 0x360)) {
    do {
      cVar1 = FUN_007e7910(*(int *)(iVar3 + 0x14));
      if (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0x360));
  }
  return iVar2;
}


//// FUNCTION FUN_00733ad0 @ 00733ad0 ////

int __fastcall FUN_00733ad0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x35c);
  iVar2 = 0;
  if (iVar3 != *(int *)(param_1 + 0x360)) {
    do {
      cVar1 = FUN_007e7910(*(int *)(iVar3 + 0x14));
      if (cVar1 == '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0x360));
  }
  return iVar2;
}


//// FUNCTION FUN_00733b90 @ 00733b90 ////

void __cdecl FUN_00733b90(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_00733080(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3[5],param_2[5]);
  if (cVar1 != '\0') {
    FUN_00733080(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_00733080(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_00733c00 @ 00733c00 ////

void __cdecl
FUN_00733c00(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffd4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4fb8;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    in_stack_ffffffd4 = 0x733c53;
    cVar2 = (*(code *)param_10)();
    if (cVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    piVar5 = (int *)(param_1 + iVar4 * 0x18);
    (**(code **)(*piVar5 + 4))();
    piVar5[5] = *(int *)(param_1 + iVar3 * 0x18 + 0x14);
    (**(code **)*piVar5)();
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    (**(code **)(*(int *)(param_1 + iVar4 * 0x18) + 4))();
    puVar1[5] = *(undefined4 *)(param_1 + param_3 * 0x18 + -4);
    (**(code **)*puVar1)();
    iVar4 = param_3 + -1;
  }
  iVar3 = 0;
  piVar5 = (int *)0x0;
  if (param_9 != 0) {
    piVar5 = (int *)(param_9 + 0x18);
    iVar3 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffffc8;
    *piVar5 = (int)&stack0xffffffc8;
  }
  FUN_00733220(param_1,iVar4,param_2,&PTR_FUN_00d25c70,iVar3,piVar5,&stack0xffffffc4,
               in_stack_ffffffd4,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00733d60 @ 00733d60 ////

void __cdecl FUN_00733d60(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_00733150(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3[5],param_2[5]);
  if (cVar1 != '\0') {
    FUN_00733150(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_00733150(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_00733dd0 @ 00733dd0 ////

void __cdecl
FUN_00733dd0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffd4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4fd8;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    in_stack_ffffffd4 = 0x733e23;
    cVar2 = (*(code *)param_10)();
    if (cVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    piVar5 = (int *)(param_1 + iVar4 * 0x18);
    (**(code **)(*piVar5 + 4))();
    piVar5[5] = *(int *)(param_1 + iVar3 * 0x18 + 0x14);
    (**(code **)*piVar5)();
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    (**(code **)(*(int *)(param_1 + iVar4 * 0x18) + 4))();
    puVar1[5] = *(undefined4 *)(param_1 + param_3 * 0x18 + -4);
    (**(code **)*puVar1)();
    iVar4 = param_3 + -1;
  }
  iVar3 = 0;
  piVar5 = (int *)0x0;
  if (param_9 != 0) {
    piVar5 = (int *)(param_9 + 0x18);
    iVar3 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffffc8;
    *piVar5 = (int)&stack0xffffffc8;
  }
  FUN_007334d0(param_1,iVar4,param_2,&PTR_LAB_00d4aab8,iVar3,piVar5,&stack0xffffffc4,
               in_stack_ffffffd4,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00733f30 @ 00733f30 ////

void __cdecl
FUN_00733f30(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffffe0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd4ff8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  (**(code **)*param_3)();
  iVar1 = 0;
  piVar2 = (int *)0x0;
  if (param_9 != 0) {
    piVar2 = (int *)(param_9 + 0x18);
    iVar1 = *piVar2;
    *(undefined1 **)(*piVar2 + 4) = &stack0xffffffd4;
    *piVar2 = (int)&stack0xffffffd4;
  }
  FUN_00733c00(param_1,0,(param_2 - param_1) / 0x18,&PTR_FUN_00d25c70,iVar1,piVar2,&stack0xffffffd0,
               in_stack_ffffffe0,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00734010 @ 00734010 ////

void __cdecl
FUN_00734010(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffffe0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5018;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  (**(code **)*param_3)();
  iVar1 = 0;
  piVar2 = (int *)0x0;
  if (param_9 != 0) {
    piVar2 = (int *)(param_9 + 0x18);
    iVar1 = *piVar2;
    *(undefined1 **)(*piVar2 + 4) = &stack0xffffffd4;
    *piVar2 = (int)&stack0xffffffd4;
  }
  FUN_00733dd0(param_1,0,(param_2 - param_1) / 0x18,&PTR_LAB_00d4aab8,iVar1,piVar2,&stack0xffffffd0,
               in_stack_ffffffe0,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007340f0 @ 007340f0 ////

void __thiscall FUN_007340f0(void *this,int param_1,char param_2)

{
  char cVar1;
  int *this_00;
  float10 fVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
    (**(code **)(*this_00 + 0x5c))(1,this,0);
    cVar1 = FUN_007e7910((int)this_00);
    if (cVar1 == '\0') {
      uVar5 = DAT_00e5bd38;
      (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,DAT_00e5bd34 * 0.4);
      uVar4 = (undefined2)uVar5;
    }
    else {
      uVar5 = DAT_00e5bd38;
      (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,DAT_00e5bd34);
      uVar4 = (undefined2)uVar5;
    }
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    if (param_2 == '\0') {
      fVar6 = *(float *)((int)this + 0x390) + 10.0;
    }
    else {
      fVar6 = 10.0;
    }
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),fVar6);
    (**(code **)(*this_00 + 0x5c))(1,this,0);
    cVar1 = FUN_007e7910((int)this_00);
    fVar6 = DAT_00e5bd34;
    if (cVar1 == '\0') {
      fVar6 = DAT_00e5bd34 * 0.4;
    }
    uVar5 = DAT_00e5bd38;
    (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar6);
    uVar4 = (undefined2)uVar5;
  }
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00);
  }
  (**(code **)(*(int *)this + 0x14))();
  FUN_007329f0((int)this);
  uVar3 = FUN_00acd42c();
  FUN_00733900(this,(int)uVar3);
  fVar2 = FUN_007329f0((int)this);
  fVar6 = (float)fVar2;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x14))();
  FUN_00ad1180((double)(((float10)fVar6 - fVar2) / ((float10)DAT_00e5bd34 * (float10)0.6)),uVar4);
  uVar3 = FUN_00acd42c();
  FUN_00733870(this,(int)uVar3);
  return;
}


//// FUNCTION FUN_007342a0 @ 007342a0 ////

void __fastcall FUN_007342a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DI;
  float10 fVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  iVar1 = param_1[0xe5];
  iVar2 = param_1[0xe6];
  iVar3 = FUN_00733a90((int)param_1);
  param_1[0xe5] = iVar3;
  iVar3 = FUN_00733ad0((int)param_1);
  param_1[0xe6] = iVar3;
  fVar4 = FUN_007329f0((int)param_1);
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar5 = (float10)(float)fVar4 - fVar5;
  if ((fVar5 < (float10)0.0 == (fVar5 == (float10)0.0)) &&
     ((param_1[0xe5] == iVar1 || (param_1[0xe6] == iVar2)))) {
    param_1[0xe4] = (int)((float)fVar5 / (float)(iVar2 + 1) + 2.0);
    fVar4 = FUN_007329f0((int)param_1);
    fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
    FUN_00ad1180((double)(((float10)(float)fVar4 - fVar5) / ((float10)DAT_00e5bd34 * (float10)0.6)),
                 unaff_DI);
    uVar6 = FUN_00acd42c();
    FUN_00733870(param_1,(int)uVar6);
    return;
  }
  param_1[0xe4] = 0;
  (**(code **)(*param_1 + 0x14))();
  FUN_007329f0((int)param_1);
  uVar6 = FUN_00acd42c();
  FUN_00733900(param_1,(int)uVar6);
  return;
}


//// FUNCTION FUN_007343d0 @ 007343d0 ////

void __cdecl FUN_007343d0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d25c70;
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


//// FUNCTION FUN_00734440 @ 00734440 ////

void __cdecl FUN_00734440(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d4aab8;
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


//// FUNCTION FUN_007344b0 @ 007344b0 ////

void __cdecl FUN_007344b0(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00733b90(param_1,param_1 + iVar1 * 6,param_1 + iVar1 * 0xc,param_4);
    FUN_00733b90(param_2 + iVar1 * -6,param_2,param_2 + iVar1 * 6,param_4);
    FUN_00733b90(param_3 + iVar1 * -0xc,param_3 + iVar1 * -6,param_3,param_4);
    FUN_00733b90(param_1 + iVar1 * 6,param_2,param_3 + iVar1 * -6,param_4);
    return;
  }
  FUN_00733b90(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00734560 @ 00734560 ////

void __cdecl FUN_00734560(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffe4;
  
  iVar2 = (param_2 - param_1) / 0x18;
  iVar3 = iVar2 / 2;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      iVar5 = 0;
      piVar6 = (int *)0x0;
      piVar4 = piVar4 + -6;
      iVar1 = *piVar4;
      iVar3 = iVar3 + -1;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 0x18);
        iVar5 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffffd8;
        *piVar6 = (int)&stack0xffffffd8;
      }
      FUN_00733c00(param_1,iVar3,iVar2,&PTR_FUN_00d25c70,iVar5,piVar6,&stack0xffffffd4,
                   in_stack_ffffffe4,iVar1,param_3);
    } while (0 < iVar3);
  }
  return;
}


//// FUNCTION FUN_00734630 @ 00734630 ////

void __cdecl FUN_00734630(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_00733d60(param_1,param_1 + iVar1 * 6,param_1 + iVar1 * 0xc,param_4);
    FUN_00733d60(param_2 + iVar1 * -6,param_2,param_2 + iVar1 * 6,param_4);
    FUN_00733d60(param_3 + iVar1 * -0xc,param_3 + iVar1 * -6,param_3,param_4);
    FUN_00733d60(param_1 + iVar1 * 6,param_2,param_3 + iVar1 * -6,param_4);
    return;
  }
  FUN_00733d60(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_007346e0 @ 007346e0 ////

void __cdecl FUN_007346e0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffe4;
  
  iVar2 = (param_2 - param_1) / 0x18;
  iVar3 = iVar2 / 2;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      iVar5 = 0;
      piVar6 = (int *)0x0;
      piVar4 = piVar4 + -6;
      iVar1 = *piVar4;
      iVar3 = iVar3 + -1;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 0x18);
        iVar5 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffffd8;
        *piVar6 = (int)&stack0xffffffd8;
      }
      FUN_00733dd0(param_1,iVar3,iVar2,&PTR_LAB_00d4aab8,iVar5,piVar6,&stack0xffffffd4,
                   in_stack_ffffffe4,iVar1,param_3);
    } while (0 < iVar3);
  }
  return;
}


//// FUNCTION FUN_007347b0 @ 007347b0 ////

void __cdecl FUN_007347b0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffffec;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_2 + -4);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x18);
    iVar2 = *piVar3;
    *(undefined1 **)(*piVar3 + 4) = &stack0xffffffe0;
    *piVar3 = (int)&stack0xffffffe0;
  }
  FUN_00733f30(param_1,param_2 + -0x18,(int *)(param_2 + -0x18),&PTR_FUN_00d25c70,iVar2,piVar3,
               &stack0xffffffdc,in_stack_ffffffec,iVar1,param_3);
  return;
}


//// FUNCTION FUN_00734820 @ 00734820 ////

void __cdecl FUN_00734820(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffffec;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_2 + -4);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x18);
    iVar2 = *piVar3;
    *(undefined1 **)(*piVar3 + 4) = &stack0xffffffe0;
    *piVar3 = (int)&stack0xffffffe0;
  }
  FUN_00734010(param_1,param_2 + -0x18,(int *)(param_2 + -0x18),&PTR_LAB_00d4aab8,iVar2,piVar3,
               &stack0xffffffdc,in_stack_ffffffec,iVar1,param_3);
  return;
}


//// FUNCTION FUN_007348c0 @ 007348c0 ////

void __cdecl FUN_007348c0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d25c70;
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


//// FUNCTION FUN_00734960 @ 00734960 ////

void __cdecl FUN_00734960(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d4aab8;
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


//// FUNCTION FUN_00734a30 @ 00734a30 ////

void __cdecl FUN_00734a30(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_007344b0(param_2,piVar4,param_3 + -6,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],piStack_8[5]), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(piStack_8[5],piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -6;
  }
  do {
    piVar4 = piVar4 + 6;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(piVar4[5],piStack_8[5]), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(piStack_8[5],piVar4[5]);
  } while (cVar2 == '\0');
joined_r0x00734aea:
  do {
    if (param_3 <= piVar1) {
LAB_00734b34:
      if (param_2 < piStack_8) {
        piVar3 = piStack_8 + -1;
        do {
          cVar2 = (*(code *)param_4)(*piVar3,piVar5[5]);
          piVar4 = local_4;
          if (cVar2 == '\0') {
            cVar2 = (*(code *)param_4)(piVar5[5],*piVar3);
            if (cVar2 != '\0') break;
            piVar5 = piVar5 + -6;
            FUN_00733080(piVar5,piVar3 + -5);
          }
          piStack_8 = piStack_8 + -6;
          piVar3 = piVar3 + -6;
        } while (param_2 < piStack_8);
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_00733080(piVar5,piVar4);
        }
        piVar4 = piVar4 + 6;
        FUN_00733080(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        local_4 = piVar4;
        piVar5 = piVar5 + 6;
      }
      else {
        piStack_8 = piStack_8 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piStack_8 != piVar5) {
            FUN_00733080(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -6;
          FUN_00733080(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_00733080(piVar1,piStack_8);
          piVar1 = piVar1 + 6;
        }
      }
      goto joined_r0x00734aea;
    }
    cVar2 = (*(code *)param_4)(piVar5[5],piVar1[5]);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(piVar1[5],piVar5[5]);
      if (cVar2 != '\0') goto LAB_00734b34;
      local_4 = piVar4 + 6;
      FUN_00733080(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 6;
  } while( true );
}


//// FUNCTION FUN_00734c80 @ 00734c80 ////

void __cdecl FUN_00734c80(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar2, iVar2 = iVar3 + 0x18, iVar2 != param_2) {
      cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 0x14));
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = iVar2;
        if (cVar4 != '\0') {
          do {
            iVar5 = iVar1 + -0x18;
            cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + -0x1c))
            ;
            iVar1 = iVar5;
          } while (cVar4 != '\0');
          if ((iVar5 != iVar2) && (iVar2 != iVar3 + 0x30)) {
            FUN_007332f0(iVar5,iVar2,iVar3 + 0x30);
          }
        }
      }
      else if ((param_1 != iVar2) && (iVar2 != iVar3 + 0x30)) {
        FUN_007332f0(param_1,iVar2,iVar3 + 0x30);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00734d30 @ 00734d30 ////

void __cdecl FUN_00734d30(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_00734630(param_2,piVar4,param_3 + -6,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],piStack_8[5]), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(piStack_8[5],piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -6;
  }
  do {
    piVar4 = piVar4 + 6;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(piVar4[5],piStack_8[5]), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(piStack_8[5],piVar4[5]);
  } while (cVar2 == '\0');
joined_r0x00734dea:
  do {
    if (param_3 <= piVar1) {
LAB_00734e34:
      if (param_2 < piStack_8) {
        piVar3 = piStack_8 + -1;
        do {
          cVar2 = (*(code *)param_4)(*piVar3,piVar5[5]);
          piVar4 = local_4;
          if (cVar2 == '\0') {
            cVar2 = (*(code *)param_4)(piVar5[5],*piVar3);
            if (cVar2 != '\0') break;
            piVar5 = piVar5 + -6;
            FUN_00733150(piVar5,piVar3 + -5);
          }
          piStack_8 = piStack_8 + -6;
          piVar3 = piVar3 + -6;
        } while (param_2 < piStack_8);
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_00733150(piVar5,piVar4);
        }
        piVar4 = piVar4 + 6;
        FUN_00733150(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        local_4 = piVar4;
        piVar5 = piVar5 + 6;
      }
      else {
        piStack_8 = piStack_8 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piStack_8 != piVar5) {
            FUN_00733150(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -6;
          FUN_00733150(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_00733150(piVar1,piStack_8);
          piVar1 = piVar1 + 6;
        }
      }
      goto joined_r0x00734dea;
    }
    cVar2 = (*(code *)param_4)(piVar5[5],piVar1[5]);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(piVar1[5],piVar5[5]);
      if (cVar2 != '\0') goto LAB_00734e34;
      local_4 = piVar4 + 6;
      FUN_00733150(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 6;
  } while( true );
}


//// FUNCTION FUN_00734f80 @ 00734f80 ////

void __cdecl FUN_00734f80(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar2, iVar2 = iVar3 + 0x18, iVar2 != param_2) {
      cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 0x14));
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = iVar2;
        if (cVar4 != '\0') {
          do {
            iVar5 = iVar1 + -0x18;
            cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + -0x1c))
            ;
            iVar1 = iVar5;
          } while (cVar4 != '\0');
          if ((iVar5 != iVar2) && (iVar2 != iVar3 + 0x30)) {
            FUN_007335a0(iVar5,iVar2,iVar3 + 0x30);
          }
        }
      }
      else if ((param_1 != iVar2) && (iVar2 != iVar3 + 0x30)) {
        FUN_007335a0(param_1,iVar2,iVar3 + 0x30);
      }
    }
  }
  return;
}


//// FUNCTION FUN_007351b0 @ 007351b0 ////

void __cdecl FUN_007351b0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x18) {
    FUN_007347b0(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_00735210 @ 00735210 ////

void __cdecl FUN_00735210(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x18) {
    FUN_00734820(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_00735270 @ 00735270 ////

void FUN_00735270(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_005783d0(param_1);
  }
  return;
}


//// FUNCTION FUN_007352a0 @ 007352a0 ////

void __fastcall FUN_007352a0(int param_1)

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
    FUN_005783d0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007352f0 @ 007352f0 ////

undefined4 * FUN_007352f0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007348c0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00735320 @ 00735320 ////

void FUN_00735320(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00732ed0(param_1);
  }
  return;
}


//// FUNCTION FUN_00735350 @ 00735350 ////

void __fastcall FUN_00735350(int param_1)

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
    FUN_00732ed0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007353a0 @ 007353a0 ////

undefined4 * FUN_007353a0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00734960(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007353d0 @ 007353d0 ////

void FUN_007353d0(void)

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
  puStack_8 = &LAB_00cd5038;
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


//// FUNCTION FUN_00735440 @ 00735440 ////

void FUN_00735440(void)

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
  puStack_8 = &LAB_00cd5058;
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


//// FUNCTION FUN_007354b0 @ 007354b0 ////

void __cdecl FUN_007354b0(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_00735590:
      if (1 < iVar2) {
        FUN_00734c80((int)param_1,(int)param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x18) {
          FUN_00734560((int)param_1,(int)param_2,param_4);
        }
        FUN_007351b0((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_00735590;
    }
    FUN_00734a30(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x18 < ((int)param_2 - (int)local_4) / 0x18) {
      FUN_007354b0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_007354b0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00735600 @ 00735600 ////

void __cdecl FUN_00735600(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_007356e0:
      if (1 < iVar2) {
        FUN_00734f80((int)param_1,(int)param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x18) {
          FUN_007346e0((int)param_1,(int)param_2,param_4);
        }
        FUN_00735210((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_007356e0;
    }
    FUN_00734d30(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x18 < ((int)param_2 - (int)local_4) / 0x18) {
      FUN_00735600(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00735600(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00735750 @ 00735750 ////

void __fastcall FUN_00735750(int param_1)

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
    FUN_005783d0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00735760 @ 00735760 ////

void __thiscall FUN_00735760(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00732790((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_005783d0(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007357c0 @ 007357c0 ////

void __fastcall FUN_007357c0(int param_1)

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
    FUN_00732ed0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00735820 @ 00735820 ////

void __thiscall FUN_00735820(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007327e0((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00732ed0(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00735910 @ 00735910 ////

void __thiscall FUN_00735910(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cd5078;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d25c70;
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
      FUN_007353d0();
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
        iVar3 = FUN_00732520((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007343d0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007348c0(puVar5,param_2,(int)&local_34);
      FUN_007343d0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00735270(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007343d0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007352f0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00732d40(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007343d0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00732820((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00732d40(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00735c40 @ 00735c40 ////

void __thiscall FUN_00735c40(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cd5098;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d4aab8;
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
      FUN_00735440();
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
        iVar3 = FUN_00732460((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00734440(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00734960(puVar5,param_2,(int)&local_34);
      FUN_00734440((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00735320(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00734440((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007353a0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_00732da0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00734440((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00732860((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_00732da0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00735ff0 @ 00735ff0 ////

void __fastcall FUN_00735ff0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd50e2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4aae4;
  param_1[0x14] = &PTR_FUN_00d4aac8;
  local_4 = 3;
  FUN_007352a0((int)(param_1 + 0xd2));
  while( true ) {
    if ((param_1[0xd7] == 0) || ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 == 0)) break;
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d4aab8;
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
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  param_1[0xda] = &PTR_LAB_00d4aab8;
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
  FUN_00735350((int)(param_1 + 0xd6));
  FUN_007352a0((int)(param_1 + 0xd2));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007361e0 @ 007361e0 ////

void __fastcall FUN_007361e0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_4;
  
  piVar6 = *(int **)(param_1 + 0x35c);
  iStack_4 = param_1;
  if (piVar6 != *(int **)(param_1 + 0x360)) {
    while( true ) {
      puVar1 = (undefined4 *)piVar6[5];
      piVar3 = (int *)FUN_0072ff60((int)puVar1);
      if (piVar3 != (int *)0x0) break;
LAB_00736230:
      piVar6 = piVar6 + 6;
      if (piVar6 == *(int **)(param_1 + 0x360)) {
        return;
      }
    }
    cVar2 = (**(code **)(*piVar3 + 0x204))();
    if (cVar2 != '\0') {
      iVar4 = FUN_005773c0((int)piVar3);
      iVar5 = GetPlayerStudio();
      if (iVar4 == iVar5) goto LAB_00736230;
    }
    FUN_00735820((void *)(param_1 + 0x358),&iStack_4,piVar6);
    if (puVar1 != (undefined4 *)0x0) {
      piVar6 = puVar1 + 0x12;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00736270 @ 00736270 ////

void __fastcall FUN_00736270(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00735600((int *)param_1[0xd7],(int *)param_1[0xd8],(param_1[0xd8] - param_1[0xd7]) / 0x18,
               &LAB_00732390);
  if (param_1[0xd7] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar4 = 0;
  cVar1 = '\0';
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      FUN_007340f0(param_1,iVar4,cVar1);
      cVar1 = FUN_007e7910(*(int *)(param_1[0xd7] + 0x14 + iVar3));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < iVar2);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_00736330 @ 00736330 ////

void __thiscall FUN_00736330(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar4 = *(int **)((int)this + 0x35c);
    if (piVar4 != *(int **)((int)this + 0x360)) {
      do {
        puVar2 = (undefined4 *)piVar4[5];
        if (puVar2 == param_1) {
          cVar3 = FUN_007e7910((int)puVar2);
          if (cVar3 == '\0') {
            *(int *)((int)this + 0x398) = *(int *)((int)this + 0x398) + -1;
          }
          else {
            *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + -1;
          }
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_00735820((void *)((int)this + 0x358),&param_1,piVar4);
          break;
        }
        piVar4 = piVar4 + 6;
      } while (piVar4 != *(int **)((int)this + 0x360));
    }
    FUN_007342a0(this);
    if (*(int *)((int)this + 0x394) == 0) {
      FUN_00733900(this,1);
      FUN_00736270(this);
      return;
    }
    fVar5 = (float10)(**(code **)(*(int *)this + 0x14))();
    param_1 = (undefined4 *)(float)fVar5;
    FUN_007329f0((int)this);
    uVar6 = FUN_00acd42c();
    FUN_00733900(this,(int)uVar6);
    FUN_00736270(this);
  }
  return;
}


//// FUNCTION FUN_00736510 @ 00736510 ////

void __thiscall FUN_00736510(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_00736555;
    }
  }
  iVar1 = 0;
LAB_00736555:
  FUN_00735910(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_00736580 @ 00736580 ////

void __thiscall FUN_00736580(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007365c5;
    }
  }
  iVar1 = 0;
LAB_007365c5:
  FUN_00735c40(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007365f0 @ 007365f0 ////

undefined4 * __thiscall FUN_007365f0(void *this,char param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5122;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d4aae4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4aac8;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 **)((int)this + 0x374) = (undefined4 *)((int)this + 0x368);
  *(undefined4 *)((int)this + 0x368) = &PTR_LAB_00d4aab8;
  *(undefined4 *)((int)this + 0x37c) = 0;
  this_00 = (undefined4 *)((int)this + 0x380);
  local_4 = 3;
  FUN_0043b460(this_00);
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff5;
  puVar2 = DAT_0104e0ac;
  if (param_1 != '\0') {
    if (DAT_0104e0ac != (undefined4 *)0x0) {
      iVar1 = DAT_0104e0ac[0x12];
      DAT_0104e0ac[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104e098[1])();
      DAT_0104e0ac = (undefined4 *)0x0;
      (*(code *)*DAT_0104e098)();
    }
    (*(code *)DAT_0104e098[1])();
    DAT_0104e0ac = this;
    (*(code *)*DAT_0104e098)();
  }
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(this,DAT_00e5bd38);
  FUN_0043b4d0(this_00,1);
  *this_00 = 5;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00736750 @ 00736750 ////

undefined4 * __thiscall FUN_00736750(void *this,byte param_1)

{
  FUN_00735ff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00736770 @ 00736770 ////

void __thiscall FUN_00736770(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007348c0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00736510(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00736800 @ 00736800 ////

void __thiscall FUN_00736800(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00734960(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00736580(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00736890 @ 00736890 ////

void __fastcall FUN_00736890(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *this;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5143;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007361e0((int)param_1);
  iVar6 = param_1[0xd3];
  bVar1 = false;
  local_2c = 0;
  if (iVar6 != param_1[0xd4]) {
    do {
      iVar5 = *(int *)(iVar6 + 0x14);
      if (((iVar5 != 0) && (cVar2 = FUN_007337f0(param_1,iVar5), cVar2 == '\0')) &&
         (iVar3 = FUN_0097e350(*(void **)(iVar5 + 0x11c),0), iVar3 != 0)) {
        this = operator_new(0x538);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else if (param_1[0xd7] == 0) {
          piVar4 = FUN_00731810(this,iVar5,0);
        }
        else {
          piVar4 = FUN_00731810(this,iVar5,(param_1[0xd8] - param_1[0xd7]) / 0x18);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar4);
        local_18 = &local_24;
        param_1[0xe5] = param_1[0xe5] + 1;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d4aab8;
        if (piVar4 != (int *)0x0) {
          local_1c = piVar4 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar4;
        FUN_00736800(param_1 + 0xd6,(int)&local_24);
        local_4 = 0xffffffff;
        FUN_00732ed0(&local_24);
        if (param_1[0xd7] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
        }
        FUN_007340f0(param_1,iVar5 + -1,'\0');
        local_2c = local_2c + 1;
        bVar1 = true;
      }
      iVar6 = iVar6 + 0x18;
    } while (iVar6 != param_1[0xd4]);
    if ((bVar1) && (local_2c == 1)) {
      FUN_007342a0(param_1);
      FUN_00736270(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00736a60 @ 00736a60 ////

void __thiscall FUN_00736a60(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5158;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d25c70;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_00736770((void *)((int)this + 0x348),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d25c70;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_00736890(this);
  FUN_007342a0(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00736b40 @ 00736b40 ////

void __fastcall FUN_00736b40(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5178;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd1] = 0;
  FUN_007352a0((int)(param_1 + 0xd2));
  puVar6 = DAT_0104ced4;
  if (DAT_0104ced4 != &DAT_0104cee0) {
    do {
      piVar2 = (int *)puVar6[2];
      if ((piVar2 != (int *)0x0) && (cVar3 = (**(code **)(*piVar2 + 0x204))(), cVar3 != '\0')) {
        iVar4 = FUN_005773c0((int)piVar2);
        iVar5 = GetPlayerStudio();
        if ((iVar4 == iVar5) && (cVar3 = FUN_0056f530((int)piVar2), cVar3 != '\0')) {
          param_1[0xd1] = param_1[0xd1] + 1;
          piStack_1c = piVar2 + 6;
          pppuStack_18 = &ppuStack_24;
          ppuStack_24 = &PTR_FUN_00d25c70;
          iStack_20 = *piStack_1c;
          *(int **)(*piStack_1c + 4) = &iStack_20;
          *piStack_1c = (int)&iStack_20;
          uStack_4 = 0;
          piStack_10 = piVar2;
          FUN_00736770(param_1 + 0xd2,(int)&ppuStack_24);
          uStack_4 = 0xffffffff;
          FUN_005783d0(&ppuStack_24);
        }
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cee0);
  }
  FUN_007354b0((int *)param_1[0xd3],(int *)param_1[0xd4],(param_1[0xd4] - param_1[0xd3]) / 0x18,
               &LAB_007322c0);
  FUN_007342a0(param_1);
  FUN_00736890(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00736c80 @ 00736c80 ////

void __thiscall FUN_00736c80(void *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  fVar4 = param_1;
  if (param_1 != 0.0) {
    piVar6 = *(int **)((int)this + 0x34c);
    if (piVar6 != *(int **)((int)this + 0x350)) {
      do {
        if ((float)piVar6[5] == param_1) {
          FUN_00735760((void *)((int)this + 0x348),&param_1,piVar6);
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          break;
        }
        piVar6 = piVar6 + 6;
      } while (piVar6 != *(int **)((int)this + 0x350));
    }
    piVar6 = *(int **)((int)this + 0x35c);
    if (piVar6 != *(int **)((int)this + 0x360)) {
LAB_00736ce1:
      puVar9 = (undefined4 *)piVar6[5];
      iVar7 = FUN_0072ff60((int)puVar9);
      if ((iVar7 == 0) || (fVar8 = (float)FUN_0072ff60((int)puVar9), fVar8 != fVar4))
      goto LAB_00736cfa;
      cVar5 = FUN_007e7910((int)puVar9);
      if (cVar5 == '\0') {
        *(int *)((int)this + 0x398) = *(int *)((int)this + 0x398) + -1;
      }
      else {
        *(int *)((int)this + 0x394) = *(int *)((int)this + 0x394) + -1;
      }
      if (puVar9 != (undefined4 *)0x0) {
        piVar1 = puVar9 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x360);
      piVar1 = piVar6 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar6 + 4))();
        piVar6[5] = piVar6[0xb];
        (**(code **)*piVar6)();
        piVar1 = piVar6 + 0xc;
        piVar6 = piVar6 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x360);
      for (puVar9 = puVar3 + -6; puVar9 != puVar3; puVar9 = puVar9 + 6) {
        FUN_00732ed0(puVar9);
      }
      *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -0x18;
    }
LAB_00736d86:
    FUN_007342a0(this);
    if (DAT_0104bce4 != 0) {
      FUN_00736b40(this);
    }
    if (*(int *)((int)this + 0x394) == 0) {
      FUN_00733900(this,1);
      FUN_00736270(this);
      return;
    }
    param_1 = DAT_00e5bd34 * 0.6;
    (**(code **)(*(int *)this + 0x14))();
    uVar10 = FUN_00acd42c();
    FUN_00733900(this,(int)uVar10);
    FUN_00736270(this);
  }
  return;
LAB_00736cfa:
  piVar6 = piVar6 + 6;
  if (piVar6 == *(int **)((int)this + 0x360)) goto LAB_00736d86;
  goto LAB_00736ce1;
}


//// FUNCTION FUN_00736e60 @ 00736e60 ////

void __fastcall FUN_00736e60(int *param_1)

{
  int iVar1;
  int *this;
  char cVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((param_1[0xd1] != 0) && (iVar4 = param_1[0xd7], iVar4 != param_1[0xd8])) {
    while( true ) {
      this = *(int **)(iVar4 + 0x14);
      iVar1 = iVar4 + 0x18;
      cVar2 = '\0';
      if (iVar1 != param_1[0xd8]) {
        local_8 = 0;
        cVar2 = (**(code **)(**(int **)(iVar4 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
      }
      uStack_4 = 0;
      cVar3 = (**(code **)(*this + 0x34))(&DAT_0104cce0,&uStack_4);
      if ((((cVar3 != '\0') && (cVar2 == '\0')) && (0 < param_1[0xe5])) &&
         (cVar2 = FUN_007e7910((int)this), cVar2 == '\0')) break;
      iVar4 = iVar1;
      if (iVar1 == param_1[0xd8]) {
        return;
      }
    }
    FUN_007e7dc0(this);
    param_1[0xe5] = param_1[0xe5] + 1;
    param_1[0xe6] = param_1[0xe6] + -1;
    cVar2 = (**(code **)(*this + 0x100))();
    if (cVar2 == '\0') {
      FUN_0089e5f0(this,'\x01');
    }
    uVar5 = FUN_00732ab0(param_1);
    if (0 < (int)uVar5) {
      FUN_00733980(param_1,this);
    }
    FUN_00736b40(param_1);
    do {
      cVar2 = (**(code **)(*param_1 + 0x50))(1);
    } while (cVar2 != '\0');
  }
  return;
}


//// FUNCTION FUN_00736f80 @ 00736f80 ////

void __fastcall FUN_00736f80(int *param_1)

{
  FUN_00736b40(param_1);
  FUN_00736e60(param_1);
  FUN_00736270(param_1);
  return;
}


//// FUNCTION FUN_00736fa0 @ 00736fa0 ////

void __fastcall FUN_00736fa0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1[0xe5];
  iVar2 = FUN_00733a90((int)param_1);
  iVar3 = FUN_00423320(DAT_00f87b04);
  if (iVar3 != 4) {
    uVar4 = FUN_0043b490((uint *)(param_1 + 0xe0));
    if ((char)uVar4 != '\0') {
      FUN_00736b40(param_1);
      FUN_00736e60(param_1);
      FUN_00736270(param_1);
      WWindow_Tick(param_1);
      return;
    }
    if (iVar1 != iVar2) {
      FUN_00736b40(param_1);
    }
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00737010 @ 00737010 ////

undefined4 * __thiscall FUN_00737010(void *this,float param_1)

{
  float local_34 [2];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd51a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0089ea20(this);
  local_2c = local_20;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d4ac04;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4abe8;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"starrating_small",0x10);
  local_28 = 0x10;
  local_2c[0x10] = '\0';
  local_4._0_1_ = 1;
  FUN_0089e070(this,&local_2c,0,1,'\x01');
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00882710(*(void **)((int)this + 0x358),local_34);
  FUN_0073e4e0(this,local_34[0] * param_1);
  FUN_0089e5f0(this,'\x01');
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00737100 @ 00737100 ////

undefined4 * __thiscall FUN_00737100(void *this,byte param_1)

{
  thunk_FUN_0089eb00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00737130 @ 00737130 ////

void __fastcall FUN_00737130(int param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puStack00000004;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 local_48 [4];
  undefined4 uStack_44;
  undefined1 uVar8;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd51c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = FUN_00acd42c();
  FUN_00569d60(&local_2c,(int)uVar4 / 10);
  puStack00000004 = &stack0xffffffac;
  puVar5 = local_48;
  local_48[0] = 0;
  uVar6 = 0;
  uVar7 = 0x14;
  local_4 = 0;
  FUN_004015d0(&stack0xffffffac,local_2c,local_28);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"fg");
  uVar2 = FUN_0088a2b0(pvVar1,puVar5,uVar6,uVar7);
  uVar7 = uVar2;
  pvVar1 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"fg");
  FUN_008887b0(pvVar1,uVar7);
  uVar8 = 7;
  uStack_44 = 0x7371f8;
  pvVar1 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"fg");
  FUN_0088fd50(pvVar1,uVar2,uVar8);
  iVar3 = FUN_008819d0(*(void **)(param_1 + 0x358),"bg");
  iVar3 = FUN_00888870(*(int *)(iVar3 + 0x164));
  uVar2 = iVar3 - 1;
  uVar7 = uVar2;
  pvVar1 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"bg");
  FUN_008887b0(pvVar1,uVar7);
  uVar8 = 7;
  uStack_44 = 0x737248;
  pvVar1 = (void *)FUN_008819d0(*(void **)(param_1 + 0x358),"bg");
  FUN_0088fd50(pvVar1,uVar2,uVar8);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00737290 @ 00737290 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00737290(void *this,float param_1)

{
  float local_8;
  float local_4;
  
  FUN_00566700(*(void **)((int)this + 0x348),&local_8);
  local_8 = _DAT_00e58928 + local_8;
  (**(code **)(*(int *)this + 0x74))(param_1 + param_1 + local_8,local_4 + param_1 + param_1);
  return;
}


//// FUNCTION FUN_007372e0 @ 007372e0 ////

float10 __thiscall FUN_007372e0(int *param_1,float param_2)

{
  float unaff_retaddr;
  float local_8;
  float local_4;
  
  FUN_00566700((void *)param_1[0xd2],&local_8);
  (**(code **)(*param_1 + 0x7c))(local_4 + param_2);
  return (float10)local_8 + (float10)unaff_retaddr;
}


//// FUNCTION FUN_00737320 @ 00737320 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00737320(int *param_1,float param_2)

{
  float unaff_ESI;
  float unaff_retaddr;
  float local_8 [2];
  
  FUN_00566700((void *)param_1[0xd2],local_8);
  local_8[0] = _DAT_00e58928 + local_8[0];
  (**(code **)(*param_1 + 0x78))(local_8[0] + param_2);
  return (float10)unaff_ESI + (float10)unaff_retaddr;
}


//// FUNCTION FUN_00737370 @ 00737370 ////

int __fastcall FUN_00737370(int param_1)

{
  return param_1 + 0x360;
}


//// FUNCTION FUN_00737380 @ 00737380 ////

void __fastcall FUN_00737380(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd51e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4ad2c;
  param_1[0x14] = &PTR_FUN_00d4ad10;
  local_4 = 1;
  if ((undefined4 *)param_1[0xd2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xd2])(1);
  }
  param_1[0xd2] = 0;
  if (10 < (uint)param_1[0xda]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd8]);
  }
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00737410 @ 00737410 ////

void __thiscall FUN_00737410(void *this,float param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float unaff_retaddr;
  float fStack_40;
  undefined4 uStack_3c;
  void *pvStack_38;
  uint uStack_30;
  undefined4 local_2c [5];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd51f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00565d20(*(void **)((int)this + 0x348),local_2c);
  local_4 = 0;
  (**(code **)(**(int **)((int)this + 0x348) + 4))();
  puVar2 = FUN_00566700(*(void **)((int)this + 0x348),&fStack_40);
  (**(code **)(**(int **)((int)this + 0x348) + 4))(&uStack_30,param_1,*puVar2,puVar2[1]);
  pfVar3 = (float *)FUN_00566700(*(void **)((int)this + 0x348),&uStack_3c);
  fVar1 = *pfVar3;
  fStack_40 = pfVar3[1];
  if (fVar1 < param_1) {
    fVar1 = param_1;
  }
  (**(code **)(*(int *)this + 0x78))(fVar1 + unaff_retaddr);
  if (uStack_30 < 0xb) {
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_38);
}


//// FUNCTION FUN_007374f0 @ 007374f0 ////

void __thiscall FUN_007374f0(void *this,undefined4 *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd521b;
  local_c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x348) == 0) {
    ExceptionList = &local_c;
    puVar2 = operator_new(0x88);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00566a50(puVar2);
    }
    *(undefined4 **)((int)this + 0x348) = puVar2;
  }
  local_4 = 0xffffffff;
  uVar3 = 0;
  if (*(char *)((int)this + 0x358) != '\0') {
    uVar3 = 2;
  }
  if (*(char *)((int)this + 0x359) != '\0') {
    uVar3 = uVar3 | 8;
  }
  *(undefined4 *)(*(int *)((int)this + 0x348) + 0x38) = *(undefined4 *)((int)this + 0x350);
  *(char *)((int)this + 0x35a) = param_3;
  if (param_3 == '\0') {
    FUN_005663b0(*(void **)((int)this + 0x348),param_1,param_2,uVar3);
  }
  else {
    FUN_00566490(*(void **)((int)this + 0x348),param_1,param_2,uVar3,(int *)&stack0x00000010);
  }
  if ((*(int *)(*(int *)((int)this + 0x348) + 0x3c) != 0) &&
     (iVar1 = *(int *)((int)this + 0x360), *(int *)((int)this + 0x364) != 0)) {
    do {
      fVar5 = FUN_009a7d30(*(undefined4 **)(*(int *)((int)this + 0x348) + 0x3c),
                           (uint)*(ushort *)(iVar1 + uVar4 * 2));
      uVar4 = uVar4 + 1;
      *(float *)((int)this + 0x380) = (float)(fVar5 + (float10)*(float *)((int)this + 0x380));
    } while (uVar4 < *(uint *)((int)this + 0x364));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00737610 @ 00737610 ////

void __fastcall FUN_00737610(int *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fStack_8;
  int iStack_4;
  
  if (param_1[0xd2] == 0) {
    return;
  }
  *(int *)(param_1[0xd2] + 0x38) = param_1[0xd4];
  if ((*(byte *)(param_1 + 0x45) & 2) != 0) {
    (**(code **)(*param_1 + 0xf8))();
    FUN_00565ab0((void *)param_1[0xd2],param_1 + 0x7c);
  }
  fVar3 = (float)param_1[0x30];
  fVar1 = (float10)fVar3;
  if (param_1[0xd3] == 1) {
    fVar2 = (float10)(**(code **)(*param_1 + 0x10))();
    fVar1 = FUN_00566580((void *)param_1[0xd2]);
    fVar1 = (float10)(float)(fVar2 + (float10)fVar3) - fVar1;
  }
  else if (param_1[0xd3] == 2) {
    fVar1 = (float10)(**(code **)(*param_1 + 0x10))();
    fStack_8 = (float)fVar1;
    fVar1 = FUN_00566580((void *)param_1[0xd2]);
    fVar1 = ((float10)fStack_8 - fVar1) * (float10)0.5 + (float10)fVar3;
  }
  iStack_4 = param_1[0x27];
  fStack_8 = (float)fVar1;
  FUN_00565a90((void *)param_1[0xd2],&fStack_8);
  if (*(char *)((int)param_1 + 0x345) == '\0') {
    fVar3 = 0.0;
  }
  else {
    fVar1 = (float10)(**(code **)(*param_1 + 0x10))();
    fVar3 = (float)fVar1;
    if ((float10)(float)param_1[0xd5] == fVar1) goto LAB_0073770e;
    param_1[0xd5] = (int)fVar3;
  }
  (**(code **)(*(int *)param_1[0xd2] + 8))(fVar3);
LAB_0073770e:
  (**(code **)(*(int *)param_1[0xd2] + 0xc))(param_1[0xb5]);
  return;
}


//// FUNCTION FUN_00737730 @ 00737730 ////

undefined4 * __fastcall FUN_00737730(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d4ad2c;
  param_1[0x14] = &PTR_FUN_00d4ad10;
  *(undefined1 *)(param_1 + 0xd4) = 0xff;
  *(undefined1 *)((int)param_1 + 0x351) = 0xff;
  *(undefined1 *)((int)param_1 + 0x352) = 0xff;
  *(undefined1 *)((int)param_1 + 0x353) = 0xff;
  param_1[0xd4] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)((int)param_1 + 0x359) = 0;
  *(undefined2 *)(param_1 + 0xdb) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 10;
  param_1[0xd8] = param_1 + 0xdb;
  *(undefined1 *)((int)param_1 + 0x35a) = 0;
  *(undefined1 *)((int)param_1 + 0x345) = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd5] = 0;
  param_1[0xd7] = 0;
  param_1[0xd4] = 0xff000000;
  *(undefined1 *)(param_1 + 0xd1) = 1;
  return param_1;
}


//// FUNCTION FUN_007377f0 @ 007377f0 ////

undefined4 * __thiscall FUN_007377f0(void *this,byte param_1)

{
  FUN_00737380(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00737810 @ 00737810 ////

undefined4 * __thiscall FUN_00737810(void *this,undefined4 *param_1)

{
  uint uVar1;
  
  if (*(void **)((int)this + 0x348) != (void *)0x0) {
    FUN_00565d20(*(void **)((int)this + 0x348),param_1);
    return param_1;
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar1);
  return param_1;
}


//// FUNCTION FUN_00737940 @ 00737940 ////

void __thiscall FUN_00737940(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *unaff_ESI;
  float10 fVar4;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5263;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)this + 0x364) == 0) {
    ExceptionList = &pvStack_c;
    FUN_004036d0((void *)((int)this + 0x360),(wchar_t *)*param_1,param_1[1]);
  }
  if (*(int *)((int)this + 0x348) == 0) {
    puVar2 = operator_new(0x88);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00566a50(puVar2);
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)this + 0x348) = puVar2;
  }
  *(undefined4 *)(*(int *)((int)this + 0x348) + 0x38) = *(undefined4 *)((int)this + 0x350);
  if (*(char *)((int)this + 0x344) == '\0') {
    uVar3 = FUN_00ace02d((short *)&DAT_00d1966c);
    uVar3 = FUN_0055d250(param_1,(ushort *)&DAT_00d1966c,0,uVar3);
    if (uVar3 != 0xffffffff) {
      puVar2 = FUN_004211c0(param_1,&local_2c,0,uVar3);
      local_4 = 1;
      (**(code **)(**(int **)((int)this + 0x348) + 4))(puVar2);
      puStack_8 = (undefined1 *)0xffffffff;
      if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
        _free(unaff_ESI);
      }
      goto LAB_00737a55;
    }
  }
  *(undefined4 *)(*(int *)((int)this + 0x348) + 0x80) = *(undefined4 *)((int)this + 0x34c);
  (**(code **)(**(int **)((int)this + 0x348) + 4))(param_1);
LAB_00737a55:
  if (*(char *)((int)this + 0x345) != '\0') {
    iVar1 = **(int **)((int)this + 0x348);
    fVar4 = (float10)(**(code **)(*(int *)this + 0x10))();
    (**(code **)(iVar1 + 8))((float)fVar4);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00737a90 @ 00737a90 ////

void __fastcall FUN_00737a90(int *param_1)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_38;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5278;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  fVar5 = (float10)(**(code **)(*param_1 + 0x10))();
  if (fVar5 < (float10)(float)param_1[0xd7] == (fVar5 == (float10)(float)param_1[0xd7])) {
    fVar5 = FUN_009a7d30(*(undefined4 **)(param_1[0xd2] + 0x3c),0x2e);
    uVar1 = param_1[0xd9];
    iVar2 = param_1[0xd8];
    uVar4 = 0;
    fStack_38 = 0.0;
    if (uVar1 != 0) {
      do {
        fVar6 = FUN_009a7d30(*(undefined4 **)(param_1[0xd2] + 0x3c),
                             (uint)*(ushort *)(iVar2 + uVar4 * 2));
        if (((float10)(float)param_1[0xd7] - fVar6) - (float10)(float)(fVar5 * (float10)3.0) <=
            (float10)fStack_38) break;
        uVar4 = uVar4 + 1;
        fStack_38 = (float)(fVar6 + (float10)fStack_38);
      } while (uVar4 < uVar1);
    }
    FUN_004211c0(param_1 + 0xd8,apvStack_2c,0,uVar4);
    uStack_4 = 0;
    sVar3 = FUN_00ace02d((short *)&DAT_00d3c928);
    FUN_0040cae0(apvStack_2c,L"...",sVar3);
    (**(code **)(*param_1 + 0x54))(apvStack_2c);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00737bb0 @ 00737bb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00737bb0(void *this,undefined4 *param_1)

{
  float local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd52a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d4ad2c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4ad10;
  *(undefined1 *)((int)this + 0x350) = 0xff;
  *(undefined1 *)((int)this + 0x351) = 0xff;
  *(undefined1 *)((int)this + 0x352) = 0xff;
  *(undefined1 *)((int)this + 0x353) = 0xff;
  *(undefined4 *)((int)this + 0x350) = 0xffffffff;
  *(undefined1 *)((int)this + 0x358) = 0;
  *(undefined1 *)((int)this + 0x359) = 0;
  *(undefined2 **)((int)this + 0x360) = (undefined2 *)((int)this + 0x36c);
  *(undefined2 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x368) = 10;
  *(undefined1 *)((int)this + 0x35a) = 0;
  *(undefined1 *)((int)this + 0x345) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  local_18 = -1.7014118e+38;
  local_4 = 1;
  *(undefined1 *)((int)this + 0x344) = 1;
  *(undefined4 *)((int)this + 0x350) = 0xff000000;
  FUN_00737940(this,param_1);
  FUN_00566700(*(void **)((int)this + 0x348),&local_18);
  local_18 = _DAT_00e58928 + local_18;
  (**(code **)(*(int *)this + 0x74))(local_18,local_14);
  ExceptionList = local_14;
  return this;
}


//// FUNCTION FUN_00737cd0 @ 00737cd0 ////

void __thiscall FUN_00737cd0(void *this,float param_1)

{
  if (param_1 != *(float *)((int)this + 0x35c)) {
    *(float *)((int)this + 0x35c) = param_1;
    FUN_00737a90(this);
  }
  return;
}


//// FUNCTION FUN_00737d70 @ 00737d70 ////

void __thiscall FUN_00737d70(void *this,undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(**(int **)((int)this + 0x468) + 0x8c))(param_1);
  iVar1 = *(int *)this;
  fVar2 = (float10)(**(code **)(**(int **)((int)this + 0x468) + 0x14))();
  (**(code **)(iVar1 + 0x7c))((float)fVar2);
  (**(code **)(**(int **)((int)this + 0x468) + 0x14))();
  return;
}


//// FUNCTION FUN_00737db0 @ 00737db0 ////

void __thiscall FUN_00737db0(void *this,float param_1)

{
  FUN_0073f410(this,param_1);
  (**(code **)(**(int **)((int)this + 0x468) + 0x78))(param_1);
  *(float *)(*(int *)((int)this + 0x468) + 0x354) = param_1;
  FUN_00830e70(*(int **)((int)this + 0x468));
  return;
}


//// FUNCTION FUN_00737e30 @ 00737e30 ////

void __thiscall FUN_00737e30(void *this,undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined **local_2c;
  int local_28;
  int *local_24;
  undefined ***local_20;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd52d0;
  pvStack_c = ExceptionList;
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  ExceptionList = &pvStack_c;
  if (this != (void *)0x0) {
    local_24 = (int *)((int)this + 0x18);
    local_28 = *local_24;
    ExceptionList = &pvStack_c;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = 0;
  local_10 = 0;
  iVar1 = *(int *)((int)this + 0x468);
  *(undefined4 *)(iVar1 + 0x7c) = 1;
  local_4 = 0;
  local_18 = this;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(void **)(iVar1 + 0x94) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(undefined4 *)(iVar1 + 0x98) = local_14;
  *(undefined4 *)(iVar1 + 0x9c) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_20 = &local_2c;
  local_24 = (int *)((int)this + 0x18);
  local_2c = &PTR_FUN_00d18c2c;
  local_28 = *local_24;
  *(int **)(*local_24 + 4) = &local_28;
  *local_24 = (int)&local_28;
  local_14 = 0;
  local_10 = 0;
  iVar1 = *(int *)((int)this + 0x468);
  local_4 = 1;
  *(undefined4 *)(iVar1 + 0xa0) = 1;
  local_18 = this;
  (**(code **)(*(int *)(iVar1 + 0xa4) + 4))();
  *(void **)(iVar1 + 0xb8) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 0xa4))();
  *(undefined4 *)(iVar1 + 0xbc) = local_14;
  *(undefined4 *)(iVar1 + 0xc0) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_18 = *(void **)((int)this + 0x468);
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_18 != (void *)0x0) {
    local_24 = (int *)((int)local_18 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = 0;
  local_10 = 0;
  iVar1 = *(int *)((int)this + 0x468);
  *(undefined4 *)(iVar1 + 0xc4) = 1;
  local_4 = 2;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(void **)(iVar1 + 0xdc) = local_18;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(undefined4 *)(iVar1 + 0xe0) = local_14;
  *(undefined4 *)(iVar1 + 0xe4) = local_10;
  if (local_24 != (int *)0x0) {
    *local_24 = local_28;
  }
  if (local_28 != 0) {
    *(int **)(local_28 + 4) = local_24;
  }
  local_18 = *(void **)((int)this + 0x468);
  local_20 = &local_2c;
  local_28 = 0;
  local_24 = (int *)0x0;
  local_2c = &PTR_FUN_00d18c2c;
  if (local_18 != (void *)0x0) {
    local_24 = (int *)((int)local_18 + 0x18);
    local_28 = *local_24;
    *(int **)(*local_24 + 4) = &local_28;
    *local_24 = (int)&local_28;
  }
  local_14 = 0;
  local_10 = 0;
  iVar1 = *(int *)((int)this + 0x468);
  *(undefined4 *)(iVar1 + 0xe8) = 1;
  local_4 = 3;
  (**(code **)(*(int *)(iVar1 + 0xec) + 4))();
  *(void **)(iVar1 + 0x100) = local_18;
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
  local_18 = (void *)0x0;
  local_28 = 0;
  local_24 = (void *)0x0;
  piVar2 = (int *)FUN_0071b2a0();
  fVar3 = (float10)(**(code **)(*piVar2 + 0x10))();
  *(float *)(*(int *)((int)this + 0x468) + 0x354) = (float)fVar3;
  (**(code **)(**(int **)((int)this + 0x468) + 0x54))(param_1);
  (**(code **)(**(int **)((int)this + 0x468) + 0x88))(0);
  (**(code **)(**(int **)((int)this + 0x468) + 0x8c))(0);
  iVar1 = *(int *)this;
  fVar3 = (float10)(**(code **)(**(int **)((int)this + 0x468) + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)fVar3);
  iVar1 = *(int *)this;
  fVar3 = (float10)(**(code **)(**(int **)((int)this + 0x468) + 0x14))();
  (**(code **)(iVar1 + 0x7c))((float)fVar3);
  iVar1 = **(int **)((int)this + 0x468);
  fVar3 = (float10)(**(code **)(*(int *)this + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)fVar3);
  ExceptionList = local_24;
  return;
}


//// FUNCTION FUN_007381d0 @ 007381d0 ////

undefined4 * __thiscall FUN_007381d0(void *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd52f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005f32e0(this,param_2);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d4ae54;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4ae38;
  *(undefined4 *)((int)this + 0x46c) = 0;
  puVar1 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(int **)((int)this + 0x468) = piVar2;
  FUN_0073f6e0(this,piVar2);
  FUN_00737e30(this,param_1);
  FUN_005f2d90(this,0,0,0,0,0x3e800000,0x3e800000);
  FUN_005f2d90(this,0,1,0x3e800000,0,0x3f400000,0x3e800000);
  FUN_005f2d90(this,0,2,0x3f400000,0,0x3f800000,0x3e800000);
  FUN_005f2d90(this,1,0,0,0x3e800000,0x3e800000,0x3f000000);
  FUN_005f2d90(this,1,1,0x3e800000,0x3e800000,0x3f400000,0x3f000000);
  FUN_005f2d90(this,1,2,0x3f400000,0x3e800000,0x3f800000,0x3f000000);
  FUN_005f2d90(this,2,0,0,0x3f000000,0x3e800000,0x3f400000);
  FUN_005f2d90(this,2,1,0x3e800000,0x3f000000,0x3f400000,0x3f400000);
  FUN_005f2d90(this,2,2,0x3f400000,0x3f000000,0x3f800000,0x3f400000);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007383b0 @ 007383b0 ////

undefined4 * __thiscall FUN_007383b0(void *this,byte param_1)

{
  thunk_FUN_005f3230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007383d0 @ 007383d0 ////

void __fastcall FUN_007383d0(int *param_1)

{
  FUN_0073e730(param_1);
  FUN_006a3370(param_1);
  return;
}


//// FUNCTION FUN_00738400 @ 00738400 ////

void __thiscall FUN_00738400(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x390) = param_1;
  return;
}


//// FUNCTION FUN_00738410 @ 00738410 ////

void __fastcall FUN_00738410(int param_1)

{
  *(undefined1 *)(param_1 + 0x390) = 0;
  return;
}


//// FUNCTION FUN_00738420 @ 00738420 ////

uint __fastcall FUN_00738420(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00553fa0(0x69);
  if ((char)uVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x388) = 0;
    *(undefined4 *)(param_1 + 900) = 0;
    return 1;
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00738450 @ 00738450 ////

undefined4 __fastcall FUN_00738450(int param_1)

{
  char cVar1;
  uint3 extraout_var;
  undefined4 uVar2;
  undefined3 extraout_var_01;
  undefined3 extraout_var_00;
  
  cVar1 = FUN_00553f70(0x6d);
  if (cVar1 != '\0') {
    if (0 < *(int *)(param_1 + 900)) {
      *(int *)(param_1 + 900) = *(int *)(param_1 + 900) + -1;
    }
    cVar1 = FUN_00553f70(0x3a);
    uVar2 = CONCAT31(extraout_var_00,cVar1);
    if (cVar1 == '\0') {
      cVar1 = FUN_00553f70(0x3b);
      uVar2 = CONCAT31(extraout_var_01,cVar1);
      if (cVar1 == '\0') {
        uVar2 = *(undefined4 *)(param_1 + 900);
        *(undefined4 *)(param_1 + 0x388) = uVar2;
      }
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return (uint)extraout_var << 8;
}


//// FUNCTION FUN_007384d0 @ 007384d0 ////

void __fastcall FUN_007384d0(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5316;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d4af6c;
  param_1[0x14] = &PTR_FUN_00d4af54;
  local_4 = 1;
  if (param_1[0xe7] == 0) {
    if (10 < (uint)param_1[0xec]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[0xea]);
    }
    local_4 = 0xffffffff;
    FUN_00737380(param_1);
    ExceptionList = local_c;
    return;
  }
  _Memory = *(void **)(param_1[0xe7] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xe7]);
}


//// FUNCTION WTextEdit_Tick @ 00738590 ////

void __fastcall WTextEdit_Tick(int *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  float local_18;
  undefined4 local_10 [2];
  undefined4 auStack_8 [2];
  
  if ((*(char *)((int)param_1 + 0x38f) == '\0') && ((*(byte *)(param_1 + 0x86) & 3) == 0)) {
    uVar4 = FUN_00553fa0(0x73);
    if ((char)uVar4 != '\0') {
      (**(code **)(*param_1 + 0x3c))();
    }
  }
  iVar7 = param_1[0xe6];
  if ((-1 < iVar7) && (iVar7 < 3)) {
    param_1[0xe6] = iVar7 + 1;
  }
  local_18 = DAT_0104cce0;
  if (*(char *)((int)param_1 + 0x38f) == '\0') goto LAB_007386ee;
  pfVar5 = (float *)FUN_0073f790(param_1,local_10);
  pfVar6 = (float *)FUN_0073f750(param_1,auStack_8);
  fVar1 = *pfVar5;
  fVar2 = *pfVar6;
  fVar9 = (float10)(**(code **)(*param_1 + 0x10))();
  if ((float10)(fVar1 - fVar2) < fVar9) {
LAB_00738672:
    local_18 = (1.0 / DAT_0104e134) * local_18;
  }
  else {
    pfVar5 = (float *)FUN_0073f790(param_1,auStack_8);
    pfVar6 = (float *)FUN_0073f750(param_1,local_10);
    fVar1 = *pfVar5;
    fVar2 = *pfVar6;
    fVar9 = (float10)(**(code **)(*param_1 + 0x10))();
    if (fVar9 < (float10)(fVar1 - fVar2)) goto LAB_00738672;
    if ((void *)param_1[0xd2] != (void *)0x0) {
      FUN_00565b10((void *)param_1[0xd2],0);
    }
  }
  iVar7 = FUN_00565ed0((void *)param_1[0xd2],local_18,*(float *)(param_1[0xd2] + 0x5c) + 2.0);
  param_1[0xe2] = iVar7;
  uVar4 = FUN_00553fd0(0x73);
  if ((char)uVar4 == '\0') {
    cVar3 = FUN_00553f70(0x73);
    if (cVar3 != '\0') goto LAB_007386ee;
  }
  *(undefined1 *)((int)param_1 + 0x38f) = 0;
LAB_007386ee:
  if ((*(byte *)(param_1 + 0x86) & 0x10) != 0) {
    cVar3 = (**(code **)(*param_1 + 0xc4))();
    if (cVar3 != '\0') {
      iVar7 = *param_1;
      uVar8 = (**(code **)(iVar7 + 0x40))();
      (**(code **)(iVar7 + 200))(uVar8);
    }
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00738730 @ 00738730 ////

void __thiscall FUN_00738730(void *this,char param_1)

{
  undefined4 *puVar1;
  void *apvStack_20 [2];
  uint uStack_18;
  
  (**(code **)(*(int *)this + 0x38))();
  puVar1 = FUN_00737810(this,apvStack_20);
  *(undefined4 *)((int)this + 0x388) = puVar1[1];
  if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_20[0]);
  }
  if (param_1 != '\0') {
    *(undefined4 *)((int)this + 900) = 0;
    return;
  }
  *(undefined4 *)((int)this + 900) = *(undefined4 *)((int)this + 0x388);
  return;
}


//// FUNCTION FUN_00738790 @ 00738790 ////

void __fastcall FUN_00738790(void *param_1)

{
  if (*(int *)((int)param_1 + 0x3a4) != 0) {
    FUN_00738730(param_1,'\0');
    *(undefined4 *)((int)param_1 + 0x398) = 0;
  }
  return;
}


//// FUNCTION FUN_007387b0 @ 007387b0 ////

void __thiscall FUN_007387b0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_8 [2];
  
  puVar1 = (undefined4 *)
           FUN_009a8180(*(void **)(*(int *)((int)this + 0x348) + 0x3c),local_8,(ushort *)*param_1);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  return;
}


//// FUNCTION FUN_007387f0 @ 007387f0 ////

void __thiscall FUN_007387f0(void *this,float *param_1)

{
  float local_10 [3];
  float local_4;
  
  FUN_00565bb0(*(void **)((int)this + 0x348),local_10,*(int *)((int)this + 900));
  *param_1 = local_10[0];
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_00738830 @ 00738830 ////

uint __fastcall FUN_00738830(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *local_20 [2];
  uint local_18;
  
  uVar2 = FUN_00553fa0(0x6a);
  if ((char)uVar2 == '\0') {
    return uVar2 & 0xffffff00;
  }
  puVar3 = FUN_00565d20(*(void **)(param_1 + 0x348),local_20);
  uVar1 = puVar3[1];
  *(undefined4 *)(param_1 + 0x388) = uVar1;
  *(undefined4 *)(param_1 + 900) = uVar1;
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00738890 @ 00738890 ////

undefined4 __fastcall FUN_00738890(int param_1)

{
  char cVar1;
  uint3 extraout_var;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined3 extraout_var_01;
  void *local_20 [2];
  uint local_18;
  undefined3 extraout_var_00;
  
  cVar1 = FUN_00553f70(0x6e);
  if (cVar1 == '\0') {
    return (uint)extraout_var << 8;
  }
  puVar2 = FUN_00565d20(*(void **)(param_1 + 0x348),local_20);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  if (*(int *)(param_1 + 900) < (int)puVar2[1]) {
    *(int *)(param_1 + 900) = *(int *)(param_1 + 900) + 1;
  }
  cVar1 = FUN_00553f70(0x3a);
  uVar3 = CONCAT31(extraout_var_00,cVar1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00553f70(0x3b);
    uVar3 = CONCAT31(extraout_var_01,cVar1);
    if (cVar1 == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 900);
      *(undefined4 *)(param_1 + 0x388) = uVar3;
    }
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00738920 @ 00738920 ////

undefined4 * __fastcall FUN_00738920(undefined4 *param_1)

{
  uint uVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5341;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00737730(param_1);
  *param_1 = &PTR_FUN_00d4af6c;
  param_1[0x14] = &PTR_FUN_00d4af54;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined1 *)((int)param_1 + 0x38f) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe5] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xe8) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3a1) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3a2) = 0xff;
  *(undefined1 *)((int)param_1 + 0x3a3) = 0xff;
  param_1[0xe8] = 0xffffffff;
  param_1[0xe9] = 0;
  local_4 = 0;
  param_1[0xea] = param_1 + 0xed;
  *(undefined2 *)(param_1 + 0xed) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0xea,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4._0_1_ = 1;
  param_1[0x45] = param_1[0x45] | 8;
  *(undefined1 *)((int)param_1 + 0x38d) = 1;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined1 *)((int)param_1 + 0x38e) = 0;
  this = operator_new(0x290);
  local_4._0_1_ = 2;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_005e4290(this,'\0');
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0073fae0(param_1,puVar2);
  param_1[0xe8] = 0xff000000;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00738a70 @ 00738a70 ////

undefined4 * __thiscall FUN_00738a70(void *this,byte param_1)

{
  FUN_007384d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00738ad0 @ 00738ad0 ////

undefined4 __fastcall FUN_00738ad0(int param_1)

{
  void *this;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00553fa0(0x29);
  if ((((char)uVar1 != '\0') && (this = *(void **)(param_1 + 0x3a4), this != (void *)0x0)) &&
     (1 < *(int *)(param_1 + 0x398))) {
    uVar2 = 0;
    if (*(int *)((int)this + 0x3a4) != 0) {
      uVar2 = FUN_00738730(this,'\0');
      *(undefined4 *)((int)this + 0x398) = 0;
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00738b20 @ 00738b20 ////

undefined4 __thiscall FUN_00738b20(void *this,void *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  if (*(int *)((int)param_1 + 4) == 0) {
    *(undefined4 *)((int)this + 900) = 0;
    *(undefined4 *)((int)this + 0x388) = 0;
  }
  uVar4 = *(uint *)((int)this + 0x388);
  uVar1 = *(uint *)((int)this + 900);
  if ((int)uVar4 <= (int)uVar1) {
    if ((int)uVar1 <= (int)uVar4) {
      return uVar1 & 0xffffff00;
    }
    if ((int)uVar1 < *(int *)((int)param_1 + 4)) {
      puVar2 = FUN_004211c0(param_1,local_60,uVar1 + 1,0xffffffff);
      puVar3 = FUN_004211c0(param_1,local_40,0,uVar4);
      puVar2 = FUN_00443250(local_20,puVar3,puVar2);
      FUN_004036d0(param_1,(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
      uVar4 = local_18;
      local_20[0] = local_60[0];
      local_18 = local_58;
      if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
        _free(local_40[0]);
      }
    }
    else {
      puVar2 = FUN_004211c0(param_1,local_20,0,uVar4);
      uVar4 = FUN_004036d0(param_1,(wchar_t *)*puVar2,puVar2[1]);
    }
    if (local_18 < 0xb) {
      *(undefined4 *)((int)this + 900) = *(undefined4 *)((int)this + 0x388);
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  if ((int)uVar4 < *(int *)((int)param_1 + 4)) {
    puVar2 = FUN_004211c0(param_1,local_20,uVar4 + 1,0xffffffff);
    puVar3 = FUN_004211c0(param_1,local_40,0,*(uint *)((int)this + 900));
    puVar2 = FUN_00443250(local_60,puVar3,puVar2);
    FUN_004036d0(param_1,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
      _free(local_40[0]);
    }
  }
  else {
    puVar2 = FUN_004211c0(param_1,local_20,0,uVar1);
    local_58 = FUN_004036d0(param_1,(wchar_t *)*puVar2,puVar2[1]);
  }
  if (local_18 < 0xb) {
    *(undefined4 *)((int)this + 0x388) = *(undefined4 *)((int)this + 900);
    return CONCAT31((int3)(local_58 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_20[0]);
}


//// FUNCTION FUN_00738d00 @ 00738d00 ////

void __fastcall FUN_00738d00(int *param_1)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  int iVar6;
  ulonglong uVar7;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  undefined2 *local_2c;
  int local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cd536b;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(char *)((int)param_1 + 0x38e) != '\0') {
    ExceptionList = &pvStack_c;
    FUN_004036d0(&local_2c,(wchar_t *)param_1[0xea],param_1[0xeb]);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 10;
    local_4._0_1_ = 1;
    iVar6 = local_28;
    if (0 < local_28) {
      do {
        sVar3 = FUN_00ace02d((short *)&DAT_00d18358);
        FUN_0040cae0(&local_4c,L"*",sVar3);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    (**(code **)(*param_1 + 0x54))(&local_4c);
    local_4 = (uint)local_4._1_3_ << 8;
    if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  if ((((*(byte *)(param_1 + 0x86) & 0x10) != 0) && ((char)param_1[0xe4] == '\0')) &&
     ((cVar2 = (**(code **)(*param_1 + 0x40))(), cVar2 != '\0' ||
      (*(char *)((int)param_1 + 0x38f) != '\0')))) {
    if (param_1[0xe7] == 0) {
      puVar4 = operator_new(0x3c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_0041f350(puVar4);
      }
      param_1[0xe7] = (int)puVar4;
      puVar4 = operator_new(0x24);
      local_4._0_1_ = 2;
      if (puVar4 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_009910f0(puVar4);
      }
      *(undefined4 *)(param_1[0xe7] + 4) = uVar5;
      *(undefined1 *)(*(int *)(param_1[0xe7] + 4) + 0xc) = 6;
      local_4 = (uint)local_4._1_3_ << 8;
      *(uint *)(*(int *)(param_1[0xe7] + 4) + 0x10) =
           *(uint *)(*(int *)(param_1[0xe7] + 4) + 0x10) & 0xbfffffff;
    }
    iVar6 = param_1[0xe1];
    iVar1 = param_1[0xe2];
    if (iVar1 == iVar6) {
      FUN_00565bb0((void *)param_1[0xd2],&fStack_6c,iVar6);
      iVar6 = param_1[0xe7];
      *(undefined4 *)(iVar6 + 0x18) = 0;
      *(float *)(iVar6 + 0x10) = fStack_6c - 1.0;
      *(undefined4 *)(iVar6 + 0x14) = uStack_60;
      iVar6 = param_1[0xe7];
      *(undefined4 *)(iVar6 + 0x24) = 0;
      *(float *)(iVar6 + 0x1c) = fStack_6c + 1.0;
      *(undefined4 *)(iVar6 + 0x20) = uStack_68;
      iVar6 = param_1[0xe8];
      *(int *)(param_1[0xe7] + 8) = iVar6;
      uVar7 = FUN_00990ae0(iVar6,extraout_EDX);
      if (((uVar7 & 0xffffffff) / 500 & 1) == 0) goto LAB_00739050;
      iVar6 = param_1[0xe7];
    }
    else if (iVar6 < iVar1) {
      FUN_00565bb0((void *)param_1[0xd2],&fStack_6c,iVar6);
      FUN_00565bb0((void *)param_1[0xd2],&fStack_5c,param_1[0xe2]);
      FUN_00565bb0((void *)param_1[0xd2],(float *)&local_4c,param_1[0xe1]);
      iVar6 = param_1[0xe7];
      *(undefined4 *)(iVar6 + 0x14) = uStack_60;
      *(float *)(iVar6 + 0x10) = fStack_6c;
      *(undefined4 *)(iVar6 + 0x18) = 0;
      iVar6 = param_1[0xe7];
      *(undefined4 *)(iVar6 + 0x20) = uStack_58;
      *(undefined4 *)(iVar6 + 0x1c) = uStack_54;
      *(undefined4 *)(iVar6 + 0x24) = 0;
      *(undefined4 *)(param_1[0xe7] + 8) = 0x80ffff00;
      iVar6 = param_1[0xe7];
    }
    else {
      FUN_00565bb0((void *)param_1[0xd2],&fStack_5c,iVar1);
      FUN_00565bb0((void *)param_1[0xd2],&fStack_6c,param_1[0xe1]);
      FUN_00565bb0((void *)param_1[0xd2],(float *)&local_4c,param_1[0xe2]);
      iVar6 = param_1[0xe7];
      *(undefined4 *)(iVar6 + 0x14) = uStack_50;
      *(float *)(iVar6 + 0x10) = fStack_5c;
      *(undefined4 *)(iVar6 + 0x18) = 0;
      iVar6 = param_1[0xe7];
      *(undefined4 *)(iVar6 + 0x20) = uStack_68;
      *(undefined4 *)(iVar6 + 0x1c) = uStack_64;
      *(undefined4 *)(iVar6 + 0x24) = 0;
      *(undefined4 *)(param_1[0xe7] + 8) = 0x80ffff00;
      iVar6 = param_1[0xe7];
    }
    FUN_007477d0((void *)param_1[0xb5],iVar6);
  }
LAB_00739050:
  FUN_00737610(param_1);
  if (*(char *)((int)param_1 + 0x38e) != '\0') {
    (**(code **)(*param_1 + 0x54))(&local_2c);
  }
  if (local_24 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_007390a0 @ 007390a0 ////

void __thiscall FUN_007390a0(void *this,undefined4 *param_1)

{
  int *this_00;
  uint _Count;
  wchar_t *_Source;
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  uint uVar5;
  void *pvVar6;
  bool bVar7;
  float10 fVar8;
  void *local_9c [2];
  uint local_94;
  undefined4 local_7c [2];
  undefined4 auStack_74 [2];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd53a2;
  pvStack_c = ExceptionList;
  this_00 = (int *)((int)this + 0x3a8);
  ExceptionList = &pvStack_c;
  FUN_00738b20(this,this_00);
  puVar2 = FUN_004211c0(this_00,local_9c,*(uint *)((int)this + 0x388),0xffffffff);
  puVar3 = FUN_004211c0(this_00,local_6c,0,*(uint *)((int)this + 900));
  puVar3 = FUN_00443250(local_4c,puVar3,param_1);
  puVar2 = FUN_00443250(local_2c,puVar3,puVar2);
  FUN_004036d0(this_00,(wchar_t *)*puVar2,puVar2[1]);
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
    _free(local_6c[0]);
  }
  if (10 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c[0]);
  }
  pfVar4 = (float *)FUN_009a8180(*(void **)(*(int *)((int)this + 0x348) + 0x3c),local_7c,
                                 (ushort *)*this_00);
  fVar8 = (float10)(**(code **)(*(int *)this + 0x10))();
  if (fVar8 < (float10)*pfVar4) {
    do {
      puVar2 = FUN_004211c0(this_00,local_9c,0,*(int *)((int)this + 0x3ac) - 1);
      _Count = puVar2[1];
      _Source = (wchar_t *)*puVar2;
      if (*(uint *)((int)this + 0x3b0) <= _Count) {
        if (10 < *(uint *)((int)this + 0x3b0)) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*this_00);
        }
        uVar5 = _Count + 0x20 & 0xffffffe0;
        *(uint *)((int)this + 0x3b0) = uVar5;
        pvVar6 = _malloc(uVar5 * 2);
        *this_00 = (int)pvVar6;
      }
      _wcsncpy((wchar_t *)*this_00,_Source,_Count);
      *(uint *)((int)this + 0x3ac) = _Count;
      *(undefined2 *)(*this_00 + _Count * 2) = 0;
      if (10 < local_94) {
                    /* WARNING: Subroutine does not return */
        _free(local_9c[0]);
      }
      pfVar4 = (float *)FUN_009a8180(*(void **)(*(int *)((int)this + 0x348) + 0x3c),local_7c,
                                     (ushort *)*this_00);
      fVar8 = (float10)(**(code **)(*(int *)this + 0x10))();
    } while (fVar8 < (float10)*pfVar4);
  }
  bVar7 = false;
  FUN_00737940(this,this_00);
  *(int *)((int)this + 900) = *(int *)((int)this + 900) + param_1[1];
  do {
    if ((int)*(uint *)((int)this + 900) < 1) {
LAB_007392d9:
      bVar1 = false;
    }
    else {
      puVar2 = FUN_004211c0(this_00,local_9c,0,*(uint *)((int)this + 900));
      bVar7 = true;
      uStack_4 = 0;
      pfVar4 = (float *)FUN_009a8180(*(void **)(*(int *)((int)this + 0x348) + 0x3c),auStack_74,
                                     (ushort *)*puVar2);
      fVar8 = (float10)(**(code **)(*(int *)this + 0x10))();
      bVar1 = true;
      if ((float10)*pfVar4 <= fVar8) goto LAB_007392d9;
    }
    uStack_4 = 0xffffffff;
    if ((bVar7) && (bVar7 = false, 10 < local_94)) {
                    /* WARNING: Subroutine does not return */
      _free(local_9c[0]);
    }
    if (!bVar1) {
      *(undefined4 *)((int)this + 0x388) = *(undefined4 *)((int)this + 900);
      ExceptionList = pvStack_c;
      return;
    }
    *(int *)((int)this + 900) = *(int *)((int)this + 900) + -1;
  } while( true );
}


//// FUNCTION FUN_00739350 @ 00739350 ////

void __thiscall FUN_00739350(void *this,undefined4 *param_1)

{
  void *this_00;
  uint _Count;
  wchar_t *_Source;
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint uVar4;
  float10 fVar5;
  wchar_t *local_b4;
  uint local_b0;
  uint local_ac;
  wchar_t local_a8 [10];
  undefined4 local_94 [2];
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd53bb;
  pvStack_c = ExceptionList;
  local_b4 = local_a8;
  local_a8[0] = L'\0';
  local_b0 = 0;
  local_ac = 10;
  this_00 = (void *)((int)this + 0x3a8);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00738b20(this,this_00);
  puVar1 = FUN_004211c0(this_00,local_8c,*(uint *)((int)this + 0x388),0xffffffff);
  puVar2 = FUN_004211c0(this_00,local_4c,0,*(uint *)((int)this + 900));
  puVar2 = FUN_00443250(local_2c,puVar2,param_1);
  puVar1 = FUN_00443250(local_6c,puVar2,puVar1);
  FUN_004036d0(&local_b4,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  pfVar3 = (float *)FUN_009a8180(*(void **)(*(int *)((int)this + 0x348) + 0x3c),local_94,
                                 (ushort *)local_b4);
  fVar5 = (float10)(**(code **)(*(int *)this + 0x10))();
  if (fVar5 < (float10)*pfVar3) {
    do {
      puVar1 = FUN_004211c0(&local_b4,local_8c,0,local_b0 - 1);
      _Count = puVar1[1];
      _Source = (wchar_t *)*puVar1;
      if (local_ac <= _Count) {
        if (10 < local_ac) {
                    /* WARNING: Subroutine does not return */
          _free(local_b4);
        }
        uVar4 = _Count + 0x20 >> 5;
        local_ac = uVar4 << 5;
        local_b4 = _malloc(uVar4 * 0x40);
      }
      _wcsncpy(local_b4,_Source,_Count);
      local_b4[_Count] = L'\0';
      local_b0 = _Count;
      if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c[0]);
      }
      pfVar3 = (float *)FUN_009a8180(*(void **)(*(int *)((int)this + 0x348) + 0x3c),local_94,
                                     (ushort *)local_b4);
      fVar5 = (float10)(**(code **)(*(int *)this + 0x10))();
    } while (fVar5 < (float10)*pfVar3);
  }
  FUN_00737940(this,&local_b4);
  if (10 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00739580 @ 00739580 ////

undefined4 __fastcall FUN_00739580(void *param_1)

{
  undefined4 *this;
  uint uVar1;
  char cVar2;
  uint3 extraout_var;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_60 [2];
  uint local_58;
  void *local_40 [2];
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  cVar2 = FUN_00553f70(0x72);
  if (cVar2 == '\0') {
    return (uint)extraout_var << 8;
  }
  this = (undefined4 *)((int)param_1 + 0x3a8);
  uVar3 = FUN_00738b20(param_1,this);
  if ((((char)uVar3 == '\0') && (uVar1 = *(uint *)((int)param_1 + 900), -1 < (int)uVar1)) &&
     (uVar1 == *(uint *)((int)param_1 + 0x388))) {
    uVar4 = *(uint *)((int)param_1 + 0x388) + 1;
    *(uint *)((int)param_1 + 0x388) = uVar4;
    if ((int)uVar4 < *(int *)((int)param_1 + 0x3ac)) {
      puVar5 = FUN_004211c0(this,local_20,uVar4,0xffffffff);
      puVar6 = FUN_004211c0(this,local_40,0,*(uint *)((int)param_1 + 900));
      puVar5 = FUN_00443250(local_60,puVar6,puVar5);
      FUN_00403e70(this,puVar5);
      if (10 < local_58) {
                    /* WARNING: Subroutine does not return */
        _free(local_60[0]);
      }
      if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
        _free(local_40[0]);
      }
    }
    else {
      puVar5 = FUN_004211c0(this,local_20,0,uVar1);
      FUN_00403e70(this,puVar5);
    }
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  *(undefined4 *)((int)param_1 + 0x388) = *(undefined4 *)((int)param_1 + 900);
  FUN_00737940(param_1,this);
  uVar3 = 0;
  if (*(code **)((int)param_1 + 0x270) != (code *)0x0) {
    uVar3 = (**(code **)((int)param_1 + 0x270))(param_1,*(undefined4 *)((int)param_1 + 0x274));
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_007396c0 @ 007396c0 ////

char __fastcall FUN_007396c0(int param_1)

{
  int *this;
  void *pvVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ushort _C;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  undefined1 *apuStack_210 [2];
  undefined4 uStack_208;
  void *apvStack_204 [2];
  uint uStack_1fc;
  void *apvStack_1e4 [2];
  uint uStack_1dc;
  void *apvStack_1c4 [2];
  uint uStack_1bc;
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
  void *apvStack_e4 [2];
  uint uStack_dc;
  void *apvStack_c4 [2];
  uint uStack_bc;
  void *apvStack_a4 [2];
  uint uStack_9c;
  void *apvStack_84 [2];
  uint uStack_7c;
  void *apvStack_64 [2];
  uint uStack_5c;
  void *apvStack_44 [2];
  uint uStack_3c;
  void *apvStack_24 [2];
  uint uStack_1c;
  
  if ((*(byte *)(param_1 + 0x1c8) & 0x10) == 0) {
    return '\0';
  }
  this = (int *)(param_1 + -0x50);
  cVar5 = (**(code **)(*(int *)(param_1 + -0x50) + 0xc4))();
  if (cVar5 == '\0') {
    return '\0';
  }
  cVar5 = (**(code **)(*this + 0x40))();
  cVar6 = FUN_007402d0(param_1);
  if ((((*(uint *)(param_1 + 0x1c8) & 1) == 0) || ((*(uint *)(param_1 + 0x1c8) & 2) == 0)) ||
     ((cVar7 = FUN_00553f70(0x73), cVar7 == '\0' &&
      (uVar8 = FUN_00553fa0(0x73), (char)uVar8 == '\0')))) goto LAB_0073987a;
  (**(code **)(*this + 0x38))();
  fStack_214 = DAT_0104cd04;
  fStack_218 = DAT_0104cd00;
  fStack_21c = DAT_0104cce4;
  fStack_220 = DAT_0104cce0;
  pfVar9 = (float *)FUN_0073f790(this,apuStack_210);
  pfVar10 = (float *)FUN_0073f750(this,&uStack_208);
  fVar2 = *pfVar9;
  fVar3 = *pfVar10;
  fVar16 = (float10)(**(code **)(*this + 0x10))();
  if ((float10)(fVar2 - fVar3) < fVar16) {
LAB_007397e7:
    fStack_218 = fStack_218 * (1.0 / DAT_0104e134);
    fStack_220 = (1.0 / DAT_0104e134) * fStack_220;
    fStack_214 = fStack_214 * (1.0 / DAT_0104e138);
    fStack_21c = (1.0 / DAT_0104e138) * fStack_21c;
  }
  else {
    pfVar9 = (float *)FUN_0073f790(this,&uStack_208);
    pfVar10 = (float *)FUN_0073f750(this,apuStack_210);
    fVar2 = *pfVar9;
    fVar3 = *pfVar10;
    fVar16 = (float10)(**(code **)(*this + 0x10))();
    if (fVar16 < (float10)(fVar2 - fVar3)) goto LAB_007397e7;
    if (*(void **)(param_1 + 0x2f8) != (void *)0x0) {
      FUN_00565b10(*(void **)(param_1 + 0x2f8),0);
    }
  }
  apuStack_210[0] = &stack0xfffffdc0;
  iVar11 = FUN_00565ed0(*(void **)(param_1 + 0x2f8),fStack_218,fStack_214);
  apuStack_210[0] = &stack0xfffffdc0;
  iVar12 = FUN_00565ed0(*(void **)(param_1 + 0x2f8),fStack_220,fStack_21c);
  *(int *)(param_1 + 0x334) = iVar11;
  *(int *)(param_1 + 0x338) = iVar12;
  *(undefined1 *)(param_1 + 0x33f) = 1;
LAB_0073987a:
  if ((cVar5 != '\0') && (uVar13 = FUN_00738ad0((int)this), (char)uVar13 == '\0')) {
    (**(code **)(*this + 200))();
    uVar8 = FUN_00738420((int)this);
    if ((((char)uVar8 == '\0') &&
        (((uVar8 = FUN_00738830((int)this), (char)uVar8 == '\0' &&
          (uVar13 = FUN_00739580(this), (char)uVar13 == '\0')) &&
         (uVar13 = FUN_00738450((int)this), (char)uVar13 == '\0')))) &&
       ((uVar13 = FUN_00738890((int)this), (char)uVar13 == '\0' &&
        (uVar8 = FUN_00554060(), (short)uVar8 != 0)))) {
      do {
        _C = (ushort)uVar8;
        if (_C < 0x20) {
          if ((uVar8 & 0xffff) == 8) {
            pvVar1 = (void *)(param_1 + 0x358);
            uVar13 = FUN_00738b20((void *)(param_1 + -0x50),pvVar1);
            if ((((char)uVar13 == '\0') && (uVar8 = *(uint *)(param_1 + 0x334), 0 < (int)uVar8)) &&
               (uVar4 = *(uint *)(param_1 + 0x338), uVar8 == uVar4)) {
              *(uint *)(param_1 + 0x334) = uVar8 - 1;
              if ((int)uVar4 < *(int *)(param_1 + 0x35c)) {
                puVar14 = FUN_004211c0(pvVar1,apvStack_1e4,uVar4,0xffffffff);
                puVar15 = FUN_004211c0(pvVar1,apvStack_104,0,*(uint *)(param_1 + 0x334));
                puVar14 = FUN_00443250(apvStack_44,puVar15,puVar14);
                FUN_00403e70(pvVar1,puVar14);
                if (10 < uStack_3c) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_44[0]);
                }
                if (10 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_104[0]);
                }
                if (10 < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_1e4[0]);
                }
              }
              else {
                puVar14 = FUN_004211c0(pvVar1,apvStack_1a4,0,uVar8 - 1);
                FUN_00403e70(pvVar1,puVar14);
                if (10 < uStack_19c) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_1a4[0]);
                }
              }
            }
          }
          else if ((uVar8 & 0xffff) == 0xd) {
            if (*(char *)(param_1 + 0x2f4) != '\0') {
              pvVar1 = (void *)(param_1 + 0x358);
              FUN_00738b20((int *)(param_1 + -0x50),pvVar1);
              if ((int)*(uint *)(param_1 + 0x338) < *(int *)(param_1 + 0x35c)) {
                puVar14 = FUN_004211c0(pvVar1,apvStack_184,*(uint *)(param_1 + 0x338),0xffffffff);
                puVar15 = FUN_004211c0(pvVar1,apvStack_84,0,*(uint *)(param_1 + 0x334));
                puVar15 = FUN_0043be60(apvStack_1c4,puVar15,L"\n");
                puVar14 = FUN_00443250(apvStack_c4,puVar15,puVar14);
                FUN_00403e70(pvVar1,puVar14);
                if (10 < uStack_bc) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_c4[0]);
                }
                if (10 < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_1c4[0]);
                }
                pvVar1 = apvStack_184[0];
                uVar8 = uStack_17c;
                if (10 < uStack_7c) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_84[0]);
                }
              }
              else {
                puVar14 = FUN_004211c0(pvVar1,apvStack_144,0,*(uint *)(param_1 + 0x334));
                puVar14 = FUN_0043be60(apvStack_204,puVar14,L"\n");
                FUN_00403e70(pvVar1,puVar14);
                pvVar1 = apvStack_144[0];
                uVar8 = uStack_13c;
                if (10 < uStack_1fc) {
                    /* WARNING: Subroutine does not return */
                  _free(apvStack_204[0]);
                }
              }
              goto joined_r0x00739d7a;
            }
            (**(code **)(*(int *)(param_1 + -0x50) + 0x3c))();
          }
        }
        else {
          pvVar1 = (void *)(param_1 + 0x358);
          FUN_00738b20((int *)(param_1 + -0x50),pvVar1);
          if (*(char *)(param_1 + 0x33d) != '\0') {
            fVar16 = FUN_00566580(*(void **)(param_1 + 0x2f8));
            fVar17 = (float10)(**(code **)(*(int *)(param_1 + -0x50) + 0x10))();
            fVar18 = FUN_009a7d30(*(undefined4 **)(*(int *)(param_1 + 0x2f8) + 0x3c),0x57);
            if ((float10)(float)fVar17 - fVar18 < (float10)(float)fVar16) goto LAB_00739d92;
          }
          if ((((_C != 0x3c) && (_C != 0x3e)) && ((_C != 0x5c && (_C != 0x2f)))) &&
             (((*(int *)(param_1 + 0x334) < *(int *)(param_1 + 0x344) ||
               (*(int *)(param_1 + 0x344) == -1)) &&
              ((*(char *)(param_1 + 0x33c) == '\0' ||
               ((iVar11 = _iswalnum(_C), iVar11 != 0 || (_C == 0x20)))))))) {
            if ((int)*(uint *)(param_1 + 0x338) < *(int *)(param_1 + 0x35c)) {
              puVar14 = FUN_004211c0(pvVar1,apvStack_a4,*(uint *)(param_1 + 0x338),0xffffffff);
              puVar15 = FUN_004211c0(pvVar1,apvStack_e4,0,*(uint *)(param_1 + 0x334));
              puVar15 = FUN_00566070(apvStack_124,puVar15,uVar8);
              puVar14 = FUN_00443250(apvStack_164,puVar15,puVar14);
              FUN_00403e70(pvVar1,puVar14);
              if (10 < uStack_15c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_164[0]);
              }
              if (10 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_124[0]);
              }
              pvVar1 = apvStack_a4[0];
              uVar8 = uStack_9c;
              if (10 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_e4[0]);
              }
            }
            else {
              puVar14 = FUN_004211c0(pvVar1,apvStack_24,0,*(uint *)(param_1 + 0x334));
              puVar14 = FUN_00566070(apvStack_64,puVar14,uVar8);
              FUN_00403e70(pvVar1,puVar14);
              pvVar1 = apvStack_24[0];
              uVar8 = uStack_1c;
              if (10 < uStack_5c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_64[0]);
              }
            }
joined_r0x00739d7a:
            if (10 < uVar8) {
                    /* WARNING: Subroutine does not return */
              _free(pvVar1);
            }
            *(int *)(param_1 + 0x334) = *(int *)(param_1 + 0x334) + 1;
          }
        }
LAB_00739d92:
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x334);
        uVar8 = FUN_00554060();
      } while ((short)uVar8 != 0);
      FUN_00737940((void *)(param_1 + -0x50),(undefined4 *)(param_1 + 0x358));
      cVar6 = '\x01';
      if (*(code **)(param_1 + 0x220) != (code *)0x0) {
        (**(code **)(param_1 + 0x220))((void *)(param_1 + -0x50));
      }
    }
  }
  return cVar6;
}


//// FUNCTION FUN_00739df0 @ 00739df0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00739df0(int param_1)

{
  int iVar1;
  float unaff_ESI;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  float local_8;
  
  fVar3 = FUN_00566c00(DAT_0104cdf4);
  if ((float10)1.0 <= fVar3) {
    fVar3 = (float10)1.0;
  }
  else {
    fVar3 = FUN_00566c00(DAT_0104cdf4);
  }
  iVar1 = *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0x354);
  fVar4 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar4 = fVar4 + (float10)4.2949673e+09;
  }
  local_8 = (float)(fVar4 + fVar3);
  if (_DAT_00e58944 < local_8) {
    (**(code **)(**(int **)(param_1 + 0x37c) + 0x20))(1);
  }
  puVar2 = (undefined4 *)(param_1 + 1000);
  iVar1 = 0;
  do {
    if (*(float *)((int)&DAT_00e58938 + iVar1) < local_8) {
      (**(code **)(*(int *)*puVar2 + 0x20))(1);
      fVar3 = (float10)unaff_ESI;
      if (0 < iVar1) {
        fVar3 = fVar3 - (float10)*(float *)((int)&DAT_00e58938 + iVar1);
      }
      fVar4 = fVar3;
      if (iVar1 < 0xc) {
        fVar4 = (float10)*(float *)((int)&DAT_00e5893c + iVar1) -
                (float10)*(float *)((int)&DAT_00e58938 + iVar1);
      }
      fVar3 = fVar3 / fVar4;
      if ((float10)0.0 <= fVar3) {
        if ((float10)1.0 < fVar3) {
          fVar3 = (float10)1.0;
        }
      }
      else {
        fVar3 = (float10)0.0;
      }
      fVar3 = (float10)fsin(fVar3 * (float10)3.1415927);
      local_8 = (float)(fVar3 * (float10)*(float *)((int)&DAT_00e5892c + iVar1) * (float10)0.25 +
                       (float10)(float)puVar2[3]);
      (**(code **)(*(int *)*puVar2 + 0x74))(local_8,local_8);
    }
    iVar1 = iVar1 + 4;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xc);
  return;
}


//// FUNCTION FUN_00739f20 @ 00739f20 ////

void __fastcall FUN_00739f20(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  
  iVar4 = param_1[0xd8];
  iVar1 = *param_1;
  if (iVar4 == 1) {
    iVar4 = param_1[0xd6];
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x60))(1,uVar2,iVar4);
    iVar4 = param_1[0xd7];
    iVar1 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x68))(1,uVar2,iVar4);
    piVar3 = param_1 + 0xfa;
    pfVar5 = (float *)(param_1 + 0xea);
    iVar4 = 3;
    do {
      (**(code **)(*(int *)*piVar3 + 0x60))(2,param_1,pfVar5[8] - *pfVar5);
      (**(code **)(*(int *)*piVar3 + 0x68))(2,param_1,pfVar5[9] - pfVar5[1]);
      piVar3 = piVar3 + 1;
      pfVar5 = pfVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    (**(code **)(*(int *)param_1[0xdf] + 0x60))
              (2,param_1,(float)param_1[0xf8] - (float)param_1[0xf0]);
    (**(code **)(*(int *)param_1[0xdf] + 0x68))
              (2,param_1,(float)param_1[0xf9] - (float)param_1[0xf1]);
    return;
  }
  if (iVar4 != 2) {
    if (iVar4 != 3) {
      iVar4 = param_1[0xd6];
      uVar2 = FUN_0071b2a0();
      (**(code **)(iVar1 + 0x5c))(1,uVar2,iVar4);
      iVar4 = param_1[0xd7];
      iVar1 = *param_1;
      uVar2 = FUN_0071b2a0();
      (**(code **)(iVar1 + 0x68))(1,uVar2,iVar4);
      piVar3 = param_1 + 0xfa;
      pfVar5 = (float *)(param_1 + 0xea);
      iVar4 = 3;
      do {
        (**(code **)(*(int *)*piVar3 + 0x5c))(1,param_1,pfVar5[8] + *pfVar5);
        (**(code **)(*(int *)*piVar3 + 0x68))(2,param_1,pfVar5[9] - pfVar5[1]);
        piVar3 = piVar3 + 1;
        pfVar5 = pfVar5 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      (**(code **)(*(int *)param_1[0xdf] + 0x5c))
                (1,param_1,(float)param_1[0xf8] + (float)param_1[0xf0]);
      (**(code **)(*(int *)param_1[0xdf] + 0x68))
                (2,param_1,(float)param_1[0xf9] - (float)param_1[0xf1]);
      return;
    }
    iVar4 = param_1[0xd6];
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x60))(1,uVar2,iVar4);
    iVar4 = param_1[0xd7];
    iVar1 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 100))(1,uVar2,iVar4);
    piVar3 = param_1 + 0xfa;
    pfVar5 = (float *)(param_1 + 0xea);
    iVar4 = 3;
    do {
      (**(code **)(*(int *)*piVar3 + 0x60))(2,param_1,pfVar5[8] - *pfVar5);
      (**(code **)(*(int *)*piVar3 + 100))(1,param_1,pfVar5[9] + pfVar5[1]);
      piVar3 = piVar3 + 1;
      pfVar5 = pfVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    (**(code **)(*(int *)param_1[0xdf] + 0x60))
              (2,param_1,(float)param_1[0xf8] - (float)param_1[0xf0]);
    (**(code **)(*(int *)param_1[0xdf] + 100))
              (1,param_1,(float)param_1[0xf9] + (float)param_1[0xf1]);
    return;
  }
  iVar4 = param_1[0xd6];
  uVar2 = FUN_0071b2a0();
  (**(code **)(iVar1 + 0x5c))(1,uVar2,iVar4);
  iVar4 = param_1[0xd7];
  iVar1 = *param_1;
  uVar2 = FUN_0071b2a0();
  (**(code **)(iVar1 + 100))(1,uVar2,iVar4);
  piVar3 = param_1 + 0xfa;
  pfVar5 = (float *)(param_1 + 0xea);
  iVar4 = 3;
  do {
    (**(code **)(*(int *)*piVar3 + 0x5c))(1,param_1,pfVar5[8] + *pfVar5);
    (**(code **)(*(int *)*piVar3 + 100))(1,param_1,pfVar5[9] + pfVar5[1]);
    piVar3 = piVar3 + 1;
    pfVar5 = pfVar5 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  (**(code **)(*(int *)param_1[0xdf] + 0x5c))(1,param_1,(float)param_1[0xf8] + (float)param_1[0xf0])
  ;
  (**(code **)(*(int *)param_1[0xdf] + 100))(1,param_1,(float)param_1[0xf9] + (float)param_1[0xf1]);
  return;
}


//// FUNCTION FUN_0073a210 @ 0073a210 ////

void __fastcall FUN_0073a210(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd53db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063d8c0(param_1);
  piVar3 = (int *)(param_1 + 1000);
  iVar2 = 3;
  do {
    FUN_00748240(*(int *)(*piVar3 + 0x2d4));
    this = operator_new(0xbc);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00745100(this,0xc0,3,0);
    }
    local_4 = 0xffffffff;
    FUN_0073e510((void *)*piVar3,puVar1);
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0073a2b0 @ 0073a2b0 ////

void __fastcall FUN_0073a2b0(int param_1)

{
  void *this;
  undefined4 *this_00;
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd53fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063d830(param_1);
  piVar2 = (int *)(param_1 + 1000);
  iVar1 = 3;
  do {
    FUN_00748240(*(int *)(*piVar2 + 0x2d4));
    this = operator_new(0xbc);
    local_4 = 0;
    if (this == (void *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00 = FUN_00745100(this,0xc0,3,0);
    }
    local_4 = 0xffffffff;
    FUN_00744f30(this_00,1,5);
    FUN_0073e510((void *)*piVar2,this_00);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0073a360 @ 0073a360 ////

void __fastcall FUN_0073a360(int param_1)

{
  float *pfVar1;
  undefined4 unaff_EDI;
  int local_1c;
  float local_18;
  float local_14;
  
  local_18 = *(float *)(param_1 + 0x400) - *(float *)(param_1 + 0x358);
  local_14 = *(float *)(param_1 + 0x404) - *(float *)(param_1 + 0x35c);
  if (32.0 < local_18) {
    local_18 = 32.0;
  }
  if (32.0 < local_14) {
    local_14 = 32.0;
  }
  if (local_18 < -32.0) {
    local_18 = -32.0;
  }
  if (local_14 < -32.0) {
    local_14 = -32.0;
  }
  local_1c = 0;
  pfVar1 = (float *)(param_1 + 0x3a8);
  do {
    *pfVar1 = local_18 * (float)local_1c * 0.25;
    pfVar1[1] = (float)local_1c * 0.25 * local_14;
    FUN_00acf400((double)*pfVar1,(short)unaff_EDI);
    FUN_00acf400((double)pfVar1[1],(short)unaff_EDI);
    local_1c = local_1c + 1;
    *pfVar1 = *pfVar1 + 0.5;
    pfVar1[1] = pfVar1[1] + 0.5;
    pfVar1 = pfVar1 + 2;
  } while (local_1c < 4);
  *(float *)(param_1 + 0x400) = *(float *)(param_1 + 0x400) - local_18 * 0.025;
  *(float *)(param_1 + 0x404) = *(float *)(param_1 + 0x404) - local_14 * 0.025;
  return;
}


//// FUNCTION FUN_0073a4b0 @ 0073a4b0 ////

int * __thiscall FUN_0073a4b0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  uint unaff_EBP;
  undefined4 *puVar7;
  char *pcVar8;
  uint *puStack_34;
  undefined4 uStack_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [8];
  void *pvStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cd546e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0063db20(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d4b0ac;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4b090;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  pvVar2 = operator_new(0x2a8);
  if (pvVar2 != (void *)0x0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/newbubble.dds",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    local_4 = (undefined4 *)CONCAT31(local_4._1_3_,3);
    FUN_005e73e0(pvVar2,&local_2c);
  }
  local_4 = (undefined4 *)0x1;
  if ((pvVar2 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(**(int **)((int)this + 0x37c) + 0xa0))();
  piVar3 = (int *)(**(code **)(**(int **)((int)this + 0x37c) + 0xa4))();
  (**(code **)(*piVar3 + 0xc))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x37c));
  local_4 = &DAT_00e5892c;
  puVar7 = (undefined4 *)((int)this + 1000);
  while( true ) {
    puVar7[3] = *local_4;
    pvVar2 = operator_new(0x360);
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puStack_34 = &local_28;
      local_28 = local_28 & 0xffffff00;
      uStack_30 = 0;
      local_2c = &DAT_00000014;
      _strncpy((char *)puStack_34,"ui/bubblebit.dds",0x10);
      uStack_30 = 0x10;
      *(char *)(puStack_34 + 4) = '\0';
      unaff_EBP = unaff_EBP | 2;
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
      puVar4 = FUN_0069d820(pvVar2,&puStack_34,0,0,0x3f800000,0x3f800000);
    }
    *puVar7 = puVar4;
    pvStack_c = (void *)0x1;
    if (((unaff_EBP & 2) != 0) && (unaff_EBP = 0, &DAT_00000014 < local_2c)) break;
    (**(code **)(*(int *)*puVar7 + 0x74))();
    (**(code **)(*(int *)*puVar7 + 0x20))();
    FUN_0073f6e0(this,(int *)*puVar7);
    uVar1 = DAT_00e58948;
    local_4 = local_4 + 1;
    puVar7 = puVar7 + 1;
    if (0xe58937 < (int)local_4) {
      *(undefined4 *)((int)this + 0x3c8) = DAT_00e58948;
      *(undefined4 *)((int)this + 0x3cc) = uVar1;
      *(undefined4 *)((int)this + 0x3a8) = 0;
      *(undefined4 *)((int)this + 0x3ac) = 0;
      uVar1 = DAT_00e5894c;
      *(undefined4 *)((int)this + 0x3d0) = DAT_00e5894c;
      *(undefined4 *)((int)this + 0x3b0) = 0;
      *(undefined4 *)((int)this + 0x3b4) = 0;
      *(undefined4 *)((int)this + 0x3d4) = uVar1;
      uVar1 = DAT_00e58950;
      *(undefined4 *)((int)this + 0x3d8) = DAT_00e58950;
      *(undefined4 *)((int)this + 0x3b8) = 0;
      *(undefined4 *)((int)this + 0x3bc) = 0;
      *(undefined4 *)((int)this + 0x3dc) = uVar1;
      uVar1 = DAT_00e58954;
      *(undefined4 *)((int)this + 0x3e0) = DAT_00e58954;
      *(undefined4 *)((int)this + 0x3e4) = uVar1;
      *(undefined4 *)((int)this + 0x3c0) = 0;
      *(undefined4 *)((int)this + 0x3c4) = 0;
      FUN_0063e040(this);
      *(undefined4 *)((int)this + 0x400) = *(undefined4 *)((int)this + 0x358);
      *(undefined4 *)((int)this + 0x404) = *(undefined4 *)((int)this + 0x35c);
      FUN_00739f20(this);
      (**(code **)(**(int **)((int)this + 0x37c) + 0x20))();
      *(void **)((int)this + 0x3a0) = this;
      FUN_00acdb9e(0xe5897c);
      puStack_8 = &stack0xffffff9c;
      iVar5 = FUN_0097dda0();
      *(int *)((int)this + 0x3a4) = iVar5;
      if (DAT_00e58978 != '\0') {
        iVar5 = 0x398;
        puStack_8 = &stack0xffffff94;
        pcVar8 = "ThoughtBubbleLink";
        pcVar6 = (char *)FUN_00acdb9e(0xe5897c);
        FUN_0097df60(pcVar6,pcVar8,iVar5);
        DAT_00e58978 = '\0';
      }
      piVar3 = (int *)((int)this + 0x398);
      *(int ***)((int)this + 0x39c) = &DAT_0104e0c4;
      *piVar3 = (int)DAT_0104e0c4;
      *(int **)((int)DAT_0104e0c4 + 4) = piVar3;
      DAT_0104e0c4 = piVar3;
      ExceptionList = pvStack_18;
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_34);
}


//// FUNCTION FUN_0073a8e0 @ 0073a8e0 ////

/* WARNING: Removing unreachable block (ram,0x0073a927) */

void __fastcall FUN_0073a8e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d4b0ac;
  param_1[0x14] = &PTR_FUN_00d4b090;
  if ((undefined4 *)param_1[0xe7] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe7] = param_1[0xe6];
  }
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  if (param_1[0xe6] != 0) {
    *(undefined4 *)(param_1[0xe6] + 4) = param_1[0xe7];
  }
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  FUN_0063dd60(param_1);
  return;
}


//// FUNCTION FUN_0073a9d0 @ 0073a9d0 ////

undefined4 * __thiscall FUN_0073a9d0(void *this,byte param_1)

{
  FUN_0073a8e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0073a9f0 @ 0073a9f0 ////

void __fastcall FUN_0073a9f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d4b1b8;
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


//// FUNCTION FUN_0073aa40 @ 0073aa40 ////

undefined4 * __thiscall FUN_0073aa40(void *this,byte param_1)

{
  FUN_0073a9f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0073aa60 @ 0073aa60 ////

void __fastcall FUN_0073aa60(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d4b1b8;
  return;
}


//// FUNCTION FUN_0073aae0 @ 0073aae0 ////

void __fastcall FUN_0073aae0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  int iVar4;
  
  iVar4 = param_1[0xdf];
  iVar1 = *param_1;
  if (iVar4 == 1) {
    iVar4 = param_1[0xdc];
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x60))(1,uVar2,iVar4);
    iVar4 = param_1[0xdd];
    iVar1 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x68))(1,uVar2,iVar4);
    (**(code **)(*(int *)param_1[0xda] + 0x60))(2,param_1,0x41400000);
    (**(code **)(*(int *)param_1[0xda] + 0x68))(2,param_1,0x41400000);
  }
  else if (iVar4 == 2) {
    iVar4 = param_1[0xdc];
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x5c))(1,uVar2,iVar4);
    iVar4 = param_1[0xdd];
    iVar1 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 100))(1,uVar2,iVar4);
    (**(code **)(*(int *)param_1[0xda] + 0x5c))(1,param_1,0x41400000);
    (**(code **)(*(int *)param_1[0xda] + 100))(1,param_1,0x41400000);
  }
  else if (iVar4 == 3) {
    iVar4 = param_1[0xdc];
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x60))(1,uVar2,iVar4);
    iVar4 = param_1[0xdd];
    iVar1 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 100))(1,uVar2,iVar4);
    (**(code **)(*(int *)param_1[0xda] + 0x60))(2,param_1,0x41400000);
    (**(code **)(*(int *)param_1[0xda] + 100))(1,param_1,0x41400000);
  }
  else {
    iVar4 = param_1[0xdc];
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x5c))(1,uVar2,iVar4);
    iVar4 = param_1[0xdd];
    iVar1 = *param_1;
    uVar2 = FUN_0071b2a0();
    (**(code **)(iVar1 + 0x68))(1,uVar2,iVar4);
    (**(code **)(*(int *)param_1[0xda] + 0x5c))(1,param_1,0x41400000);
    (**(code **)(*(int *)param_1[0xda] + 0x68))(2,param_1,0x41400000);
  }
  (**(code **)(*(int *)param_1[0xda] + 0x84))(0);
  iVar4 = *param_1;
  fVar3 = (float10)(**(code **)(*(int *)param_1[0xda] + 0x10))();
  (**(code **)(iVar4 + 0x78))((float)(fVar3 + (float10)12.0));
  iVar4 = *param_1;
  fVar3 = (float10)(**(code **)(*(int *)param_1[0xda] + 0x14))();
  (**(code **)(iVar4 + 0x7c))((float)(fVar3 + (float10)12.0));
  return;
}


//// FUNCTION FUN_0073aca0 @ 0073aca0 ////

void __fastcall FUN_0073aca0(int param_1)

{
  int iVar1;
  bool bVar2;
  void *this;
  undefined1 uVar3;
  
  this = (void *)(**(code **)(**(int **)(param_1 + 0x368) + 0xa4))();
  iVar1 = *(int *)(param_1 + 0x37c);
  bVar2 = false;
  if (iVar1 == 1) {
LAB_0073acc8:
    if (*(char *)((int)this + 0x284) != '\0') goto LAB_0073aceb;
    uVar3 = 1;
  }
  else {
    if (iVar1 == 2) {
      bVar2 = true;
    }
    else if (iVar1 == 3) {
      bVar2 = true;
      goto LAB_0073acc8;
    }
    if (*(char *)((int)this + 0x284) == '\0') goto LAB_0073aceb;
    uVar3 = 0;
  }
  FUN_005e7ce0(this,uVar3);
LAB_0073aceb:
  if (bVar2) {
    if (*(char *)((int)this + 0x285) == '\0') {
      FUN_005e7e20(this,1);
      return;
    }
  }
  else if (*(char *)((int)this + 0x285) != '\0') {
    FUN_005e7e20(this,0);
  }
  return;
}


//// FUNCTION FUN_0073ad30 @ 0073ad30 ////

void FUN_0073ad30(void)

{
  return;
}


//// FUNCTION FUN_0073ad70 @ 0073ad70 ////

int * __thiscall FUN_0073ad70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0073adb0 @ 0073adb0 ////

void __fastcall FUN_0073adb0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00567960(*(float *)(param_1 + 0x370),*(float *)(param_1 + 0x374));
  *(undefined4 *)(param_1 + 0x37c) = uVar1;
  return;
}


//// FUNCTION FUN_0073ade0 @ 0073ade0 ////

/* WARNING: Removing unreachable block (ram,0x0073afa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0073ade0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar4;
  ulonglong uVar5;
  char *_Dest;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd54f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d4b1f4;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d4b1d8;
  *(undefined4 *)((int)this + 0x344) = (undefined2 *)((int)this + 0x350);
  *(undefined2 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 10;
  local_4 = 0;
  FUN_004036d0((undefined4 *)((int)this + 0x344),(wchar_t *)*param_1,param_1[1]);
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x364) = 2;
  puVar1 = operator_new(0x3fc);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00833290(puVar1);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 **)((int)this + 0x368) = puVar1;
  piVar2 = (int *)FUN_0071b2a0();
  fVar4 = (float10)(**(code **)(*piVar2 + 0x10))();
  *(float *)(*(int *)((int)this + 0x368) + 0x354) = (float)(fVar4 * (float10)0.5);
  (**(code **)(**(int **)((int)this + 0x368) + 0x54))();
  (**(code **)(**(int **)((int)this + 0x368) + 0x5c))();
  (**(code **)(**(int **)((int)this + 0x368) + 100))();
  FUN_0073f6e0(this,*(int **)((int)this + 0x368));
  (**(code **)(**(int **)((int)this + 0x368) + 0x84))();
  fVar4 = (float10)(**(code **)(**(int **)((int)this + 0x368) + 0x10))();
  FUN_0073f410(this,(float)(fVar4 + (float10)12.0));
  fVar4 = (float10)(**(code **)(**(int **)((int)this + 0x368) + 0x14))();
  FUN_0073f490(this,(float)(fVar4 + (float10)12.0));
  pvVar3 = operator_new(0x288);
  if (pvVar3 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    _Dest = &stack0xffffffc0;
    _strncpy(_Dest,"ui/tooltip2.dds",0xf);
    _Dest[0xf] = '\0';
    piVar2 = FUN_005e8fd0(pvVar3,(undefined4 *)&stack0xffffffb4);
  }
  (**(code **)(*piVar2 + 0xc))();
  (**(code **)(**(int **)((int)this + 0x368) + 0xa0))();
  DAT_0104e0e4 = 0;
  uVar5 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  _DAT_0104e0e8 = (undefined4)uVar5;
  pvVar3 = operator_new(0x9c);
  if (pvVar3 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00746a20(pvVar3,0);
  }
  *(undefined4 **)((int)this + 0x36c) = puVar1;
  FUN_00746910(*(void **)((int)this + 0x36c),0);
  FUN_00748590(*(void **)((int)this + 0x2d4),*(undefined4 *)((int)this + 0x36c));
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined1 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined1 *)((int)this + 0x380) = 1;
  ExceptionList = this;
  return this;
}


//// FUNCTION FUN_0073b0a0 @ 0073b0a0 ////

undefined4 * __thiscall FUN_0073b0a0(void *this,byte param_1)

{
  FUN_0073b0c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0073b0c0 @ 0073b0c0 ////

void __fastcall FUN_0073b0c0(undefined4 *param_1)

{
  if (10 < (uint)param_1[0xd3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd1]);
  }
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_0073b200 @ 0073b200 ////

void __fastcall FUN_0073b200(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  size_t sVar5;
  float unaff_EBX;
  float10 fVar6;
  float fStack_74;
  undefined2 *puStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined2 auStack_64 [10];
  undefined1 auStack_50 [4];
  void *apvStack_4c [2];
  uint uStack_44;
  void *pvStack_34;
  undefined1 auStack_30 [4];
  uint uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5510;
  local_c = ExceptionList;
  if (param_1[0x46] == 0) {
    return;
  }
  if ((char)param_1[0xe0] != '\0') {
    return;
  }
  ExceptionList = &local_c;
  fVar6 = (float10)(**(code **)(*(int *)param_1[0xda] + 0x10))();
  puStack_70 = (undefined2 *)(float)fVar6;
  if ((param_1[0xdf] == 3) || (param_1[0xdf] == 1)) {
    fVar6 = (float10)(float)param_1[0xdc];
  }
  else {
    piVar2 = (int *)FUN_0071b2a0();
    fVar6 = (float10)(**(code **)(*piVar2 + 0x10))();
    fVar6 = fVar6 - (float10)(float)param_1[0xdc];
  }
  fStack_74 = (float)(fVar6 - (float10)20.0);
  (**(code **)(*(int *)param_1[0xda] + 0x58))(apvStack_4c);
  puStack_8 = (undefined1 *)0x0;
  if (unaff_EBX < fStack_74) {
    uVar3 = FUN_00ace02d((short *)&DAT_00d19bd0);
    uVar3 = FUN_0055d250(auStack_50,(ushort *)&DAT_00d19bd0,0,uVar3);
    if (uVar3 == 0xffffffff) {
      puStack_70 = auStack_64;
      auStack_64[0] = 0;
      uStack_6c = 0;
      uStack_68 = 10;
      uVar3 = FUN_00ace02d(L"<table><tr><td width=");
      FUN_004036d0(&puStack_70,L"<table><tr><td width=",uVar3);
      puStack_8._0_1_ = 1;
      FUN_0043bd80(&puStack_70,unaff_EBX * 0.9);
      puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[0xda] + 0x58))(auStack_30);
      sVar5 = FUN_00ace02d((short *)&DAT_00d19724);
      FUN_0040cae0(&fStack_74,L">",sVar5);
      FUN_0040cae0(&fStack_74,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_34);
      }
      sVar5 = FUN_00ace02d(L"</td></tr></table>");
      FUN_0040cae0(&fStack_74,L"</td></tr></table>",sVar5);
      (**(code **)(*(int *)param_1[0xda] + 0x54))(&fStack_74);
      (**(code **)(*(int *)param_1[0xda] + 0x84))(0);
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_70);
      }
      goto LAB_0073b3d4;
    }
  }
  FUN_00ace02d((short *)&DAT_00d19bd0);
LAB_0073b3d4:
  iVar1 = *param_1;
  fVar6 = (float10)(**(code **)(*(int *)param_1[0xda] + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)(fVar6 + (float10)12.0));
  iVar1 = *param_1;
  fVar6 = (float10)(**(code **)(*(int *)param_1[0xda] + 0x14))();
  (**(code **)(iVar1 + 0x7c))((float)(fVar6 + (float10)12.0));
  if (uStack_44 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(apvStack_4c[0]);
}


//// FUNCTION FUN_0073b440 @ 0073b440 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0073b440(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = param_1[0xd9] + -1;
  param_1[0xd9] = iVar1;
  if ((iVar1 < 1) && (DAT_0104e0e4 != 1)) {
    if (DAT_0104e0e4 != 3) {
      DAT_0104e0e4 = 1;
      uVar2 = FUN_00990ae0(param_1,iVar1);
      _DAT_0104e0e8 = (undefined4)uVar2;
      goto LAB_0073b479;
    }
  }
  else {
LAB_0073b479:
    if (DAT_0104e0e4 != 3) goto LAB_0073b489;
  }
  (**(code **)(*param_1 + 4))();
LAB_0073b489:
  if ((char)DAT_0104e104[0xe0] == '\0') {
    FUN_0073b200(DAT_0104e104);
    return;
  }
  return;
}


//// FUNCTION FUN_0073b4a0 @ 0073b4a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_0073b4a0(undefined4 *param_1,char param_2,int param_3,undefined4 param_4,undefined1 *param_5,
            undefined4 param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float *pfVar5;
  int *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd552b;
  local_c = ExceptionList;
  if (DAT_0104e0ec == DAT_0105bec0) {
    return;
  }
  DAT_0104e0ec = DAT_0105bec0;
  ExceptionList = &local_c;
  if (DAT_0104e104 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    iVar2 = _wcscmp((wchar_t *)DAT_0104e104[0xd1],(wchar_t *)*param_1);
    puVar1 = DAT_0104e104;
    if (iVar2 == 0) {
      DAT_0104e104[0xd9] = param_4;
      if (*(char *)(DAT_0104e104 + 0xde) == '\0') {
        ExceptionList = local_c;
        return;
      }
      local_1c[0] = 0.0;
      local_1c[1] = 0.0;
      local_28 = (float)DAT_0104e104[0xdc];
      local_24 = (float)DAT_0104e104[0xdd];
      local_20 = 0;
      uVar3 = FUN_009a1b30(&DAT_0105c2e8,&local_28,local_1c);
      if ((char)uVar3 != '\0') {
        ExceptionList = local_c;
        return;
      }
      local_34 = &stack0xffffffc0;
      uVar3 = DAT_0104cce0;
      uVar7 = DAT_0104cce4;
      iVar2 = FUN_0071b2a0();
      FUN_00747460(*(void **)(iVar2 + 0x2d4),local_1c + 2,uVar3,uVar7);
      ExceptionList = local_c;
      return;
    }
    if (DAT_0104e104 != (undefined4 *)0x0) {
      iVar2 = DAT_0104e104[0x12];
      DAT_0104e104[0x12] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)*puVar1)();
      }
      (*(code *)DAT_0104e0f0[1])();
      DAT_0104e104 = (undefined4 *)0x0;
      (*(code *)*DAT_0104e0f0)();
    }
  }
  local_34 = operator_new(900);
  uStack_4 = 0;
  if (local_34 == (undefined1 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_0073ade0(local_34,param_1);
  }
  uStack_4 = 0xffffffff;
  (*(code *)DAT_0104e0f0[1])();
  DAT_0104e104 = piVar4;
  (*(code *)*DAT_0104e0f0)();
  *(undefined1 *)(DAT_0104e104 + 0xde) = param_7;
  *(bool *)(DAT_0104e104 + 0xe0) = param_2 == '\0';
  if (param_2 != '\0') {
    DAT_0104e104[0xdf] = param_3;
  }
  local_28 = 0.0;
  local_24 = 0.0;
  if ((char)DAT_0104e104[0xde] != '\0') {
    local_34 = param_5;
    uStack_30 = param_6;
    uStack_2c = 0;
    uVar3 = FUN_009a1b30(&DAT_0105c2e8,(float *)&local_34,&local_28);
    if ((char)uVar3 != '\0') goto LAB_0073b6fc;
  }
  local_34 = &stack0xffffffc0;
  uVar3 = DAT_0104cce0;
  uVar7 = DAT_0104cce4;
  iVar2 = FUN_0071b2a0();
  pfVar5 = (float *)FUN_00747460(*(void **)(iVar2 + 0x2d4),&local_34,uVar3,uVar7);
  local_28 = *pfVar5;
  local_24 = pfVar5[1];
LAB_0073b6fc:
  DAT_0104e104[0xdc] = (int)local_28;
  DAT_0104e104[0xdd] = (int)local_24;
  piVar4 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar4 + 0xc))();
  (**(code **)(*DAT_0104e104 + 0x6c))();
  piVar4 = DAT_0104e104;
  uVar3 = extraout_EDX;
  if ((char)DAT_0104e104[0xe0] == '\0') {
    FUN_0073b200(DAT_0104e104);
    piVar4 = extraout_ECX;
    uVar3 = extraout_EDX_00;
  }
  DAT_0104e0e4 = 0;
  uVar6 = FUN_00990ae0(piVar4,uVar3);
  _DAT_0104e0e8 = (int)uVar6;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0073b7e0 @ 0073b7e0 ////

undefined4 __fastcall FUN_0073b7e0(int param_1)

{
  if ((*(char *)(param_1 + 0x375) == '\0') &&
     ((*(char *)(param_1 + 0x374) != '\0' || (*(int *)(param_1 + 0x370) != 0)))) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_0073b810 @ 0073b810 ////

void __thiscall FUN_0073b810(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x374) = param_1;
  return;
}


//// FUNCTION FUN_0073b840 @ 0073b840 ////

void __fastcall FUN_0073b840(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5548;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4b36c;
  param_1[0x14] = &PTR_FUN_00d4b350;
  puVar1 = (undefined4 *)param_1[0xd1];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0xd1] = 0;
  }
  if ((void *)param_1[0xdb] != (void *)0x0) {
    FUN_0099b400((void *)param_1[0xdb]);
    param_1[0xdb] = 0;
  }
  if (param_1[0xdc] == 0) {
    local_4 = 0xffffffff;
    FUN_00742900(param_1);
    ExceptionList = pvStack_c;
    return;
  }
  _Memory = *(void **)(param_1[0xdc] + 4);
  if (_Memory == (void *)0x0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 0;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xdc]);
  }
  FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0073b970 @ 0073b970 ////

void __thiscall FUN_0073b970(void *this,int param_1)

{
  uint *puVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd556b;
  local_c = ExceptionList;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x36c) != 0)) {
    ExceptionList = &local_c;
    if (*(void **)((int)this + 0x36c) != (void *)0x0) {
      ExceptionList = &local_c;
      FUN_0099b400(*(void **)((int)this + 0x36c));
      *(undefined4 *)((int)this + 0x36c) = 0;
    }
    if (*(int *)((int)this + 0x370) != 0) {
      pvVar3 = *(void **)(*(int *)((int)this + 0x370) + 4);
      if (pvVar3 != (void *)0x0) {
        FUN_00990ec0((int)pvVar3);
                    /* WARNING: Subroutine does not return */
        _free(pvVar3);
      }
      *(undefined4 *)(*(int *)((int)this + 0x370) + 4) = 0;
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x370));
    }
    puVar5 = operator_new(0x3c);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = FUN_0041f350(puVar5);
    }
    *(undefined4 **)((int)this + 0x370) = puVar5;
    puVar5 = operator_new(0x24);
    local_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_009910f0(puVar5);
    }
    *(undefined4 *)(*(int *)((int)this + 0x370) + 4) = uVar6;
    *(undefined1 *)(*(int *)(*(int *)((int)this + 0x370) + 4) + 0xc) = 3;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x370) + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x370) + 4) + 0x10);
    *puVar1 = *puVar1 & 0x7fffffff;
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x370) + 4) + 0x10);
    *puVar1 = *puVar1 & 0xfeffffff;
    iVar4 = *(int *)((int)this + 0x370);
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0;
    iVar4 = *(int *)((int)this + 0x370);
    *(undefined4 *)(iVar4 + 0x30) = 0x3f800000;
    *(undefined4 *)(iVar4 + 0x34) = 0x3f800000;
    *(undefined4 *)(*(int *)((int)this + 0x370) + 8) = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x36c);
    *(int *)((int)this + 0x36c) = iVar4;
    piVar2 = (int *)(iVar4 + 0x30);
    *piVar2 = *piVar2 + 1;
    pvVar3 = *(void **)(*(int *)((int)this + 0x370) + 4);
    local_4 = 0xffffffff;
    if (*(int *)((int)pvVar3 + 0x18) != *(int *)((int)this + 0x36c)) {
      Engine_SetResourceReference(pvVar3,*(int *)((int)this + 0x36c));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION ViewportTooltip_Constructor @ 0073bbb0 ////

/* WARNING: Removing unreachable block (ram,0x0073bc79) */

undefined4 * __fastcall ViewportTooltip_Constructor(undefined4 *param_1)

{
  bool bVar1;
  char local_20 [17];
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5590;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  bVar1 = s___AVWToolTip_TM___00e589d4[0x12] != '\0';
  *param_1 = &PTR_FUN_00d4b36c;
  param_1[0x14] = &PTR_FUN_00d4b350;
  param_1[0xd1] = 0;
  *(undefined1 *)(param_1 + 0xde) = 0xff;
  *(undefined1 *)((int)param_1 + 0x379) = 0xff;
  *(undefined1 *)((int)param_1 + 0x37a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x37b) = 0xff;
  local_4 = 0;
  param_1[0xde] = 0xffffffff;
  if (bVar1) {
    s___AVWToolTip_TM___00e589d4[0x12] = '\0';
    local_20[0] = '\0';
    _strncpy(local_20,"wnd_hideviewports",0x11);
    local_f = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    CVarSystem_Register_STUBBED();
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(undefined1 *)((int)param_1 + 0x375) = 0;
  param_1[0xde] = 0xffd6e2fa;
  *(undefined1 *)(param_1 + 0xdd) = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0073bcd0 @ 0073bcd0 ////

undefined4 * __thiscall FUN_0073bcd0(void *this,byte param_1)

{
  FUN_0073b840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0073bcf0 @ 0073bcf0 ////

undefined4 * __fastcall FUN_0073bcf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined4 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_00cd55a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d4b36c;
  param_1[0x14] = &PTR_FUN_00d4b350;
  *(undefined1 *)(param_1 + 0xde) = 0xff;
  *(undefined1 *)((int)param_1 + 0x379) = 0xff;
  *(undefined1 *)((int)param_1 + 0x37a) = 0xff;
  *(undefined1 *)((int)param_1 + 0x37b) = 0xff;
  param_1[0xde] = 0xffffffff;
  local_4 = 0;
  param_1[0xde] = 0xffd6e2fa;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(undefined1 *)(param_1 + 0xdd) = 1;
  *(undefined1 *)((int)param_1 + 0x375) = 0;
  puVar1 = FUN_00433eb0();
  param_1[0xd1] = puVar1;
  puVar1[0x27] = puVar1[0x27] & 0xfffffff7;
  FUN_0097e330((void *)param_1[0xd1],0);
  FUN_004012c0(0.0);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  (**(code **)(*(int *)param_1[0xd1] + 0x20))(&local_18);
  param_1[0xd2] = 0x40c00000;
  param_1[0xd3] = 0x40c00000;
  param_1[0xd4] = 0x40000000;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0x3f800000;
  param_1[0xd9] = 0x42480000;
  param_1[0xda] = 0x3f060a92;
  pbVar2 = FUN_009de1d0((char *)*puStack_8,1);
  (**(code **)(*(int *)param_1[0xd1] + 0x18))(pbVar2);
  if (pbVar2 != (byte *)0x0) {
    FUN_009de3b0(pbVar2);
  }
  ExceptionList = (void *)0x0;
  return param_1;
}


//// FUNCTION FUN_0073be90 @ 0073be90 ////

void __fastcall FUN_0073be90(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  float *pfVar3;
  void *pvVar4;
  int *_Memory;
  float10 fVar5;
  ulonglong uVar6;
  undefined4 in_stack_ffffff80;
  undefined4 in_stack_ffffff84;
  undefined4 in_stack_ffffff88;
  undefined4 uVar7;
  int iStack_60;
  int iStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd55cb;
  local_c = ExceptionList;
  if (((((*(byte *)(param_1 + 0x86) & 0x20) == 0) || ((float)param_1[0x7e] != (float)param_1[0x7c]))
      && (ExceptionList = &local_c, piVar2 = (int *)FUN_0071b2b0(),
         (float)param_1[0x7e] < 0.0 == ((float)param_1[0x7e] == 0.0))) &&
     (((fVar5 = (float10)(**(code **)(*piVar2 + 0x10))(),
       fVar5 < (float10)(float)param_1[0x7c] == (fVar5 == (float10)(float)param_1[0x7c]) &&
       ((float)param_1[0x7d] < 0.0 == ((float)param_1[0x7d] == 0.0))) &&
      (fVar5 = (float10)(**(code **)(*piVar2 + 0x14))(),
      fVar5 < (float10)(float)param_1[0x7f] == (fVar5 == (float10)(float)param_1[0x7f]))))) {
    if ((float)param_1[0x7c] < 0.0) {
      param_1[0x86] = param_1[0x86] | 0x20;
      param_1[0x7c] = 0;
    }
    _Memory = (int *)0x0;
    if ((float)param_1[0x7f] < 0.0) {
      param_1[0x86] = param_1[0x86] | 0x20;
      param_1[0x7f] = 0;
    }
    fVar5 = (float10)(**(code **)(*piVar2 + 0x10))();
    if (fVar5 < (float10)(float)param_1[0x7e]) {
      param_1[0x86] = param_1[0x86] | 0x20;
      fVar5 = (float10)(**(code **)(*piVar2 + 0x10))();
      param_1[0x7e] = (int)(float)fVar5;
    }
    uVar7 = 0x73bfb5;
    fVar5 = (float10)(**(code **)(*piVar2 + 0x14))();
    if (fVar5 < (float10)(float)param_1[0x7d]) {
      param_1[0x86] = param_1[0x86] | 0x20;
      uVar7 = 0x73bfcf;
      fVar5 = (float10)(**(code **)(*piVar2 + 0x14))();
      param_1[0x7d] = (int)(float)fVar5;
    }
    if ((*(byte *)(param_1 + 0x86) & 0x20) == 0) {
      iStack_60 = param_1[0x27];
      fStack_3c = (float)param_1[0x30];
      iStack_5c = param_1[0x39];
      fStack_34 = (float)param_1[0x42];
      fStack_58 = (float)param_1[0xda];
      fStack_48 = (float)param_1[0xd2];
      iStack_44 = param_1[0xd3];
      iStack_40 = param_1[0xd4];
      fStack_54 = (float)param_1[0xd5];
      iStack_50 = param_1[0xd6];
      iStack_4c = param_1[0xd7];
    }
    else {
      fStack_3c = (float)param_1[0x7c];
      iStack_60 = param_1[0x7f];
      fStack_34 = (float)param_1[0x7e];
      iStack_5c = param_1[0x7d];
      fStack_48 = (float)param_1[0xd2];
      iStack_44 = param_1[0xd3];
      iStack_40 = param_1[0xd4];
      fStack_54 = (float)param_1[0xd5];
      iStack_50 = param_1[0xd6];
      iStack_4c = param_1[0xd7];
      fStack_58 = ((fStack_34 - fStack_3c) / ((float)param_1[0x42] - (float)param_1[0x30])) *
                  (float)param_1[0xda];
    }
    pvVar4 = (void *)param_1[0xb5];
    fStack_38 = (float)iStack_5c;
    fStack_30 = (float)iStack_60;
    FUN_00413e40(&stack0xffffff80,&fStack_3c);
    pfVar3 = (float *)FUN_00747350(pvVar4,auStack_1c,in_stack_ffffff80,in_stack_ffffff84,
                                   in_stack_ffffff88,uVar7);
    fStack_3c = *pfVar3;
    fStack_38 = pfVar3[1];
    fStack_34 = pfVar3[2];
    fStack_30 = pfVar3[3];
    iStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uVar6 = FUN_00acd42c();
    uStack_24 = (undefined4)uVar6;
    uVar6 = FUN_00acd42c();
    uStack_20 = (undefined4)uVar6;
    uVar6 = FUN_00acd42c();
    iStack_2c = (int)uVar6;
    uVar6 = FUN_00acd42c();
    uStack_28 = (undefined4)uVar6;
    pvVar4 = operator_new(0x30);
    uStack_4 = 0;
    if (pvVar4 != (void *)0x0) {
      _Memory = FUN_009a5a30(pvVar4,&iStack_2c);
    }
    uStack_4 = 0xffffffff;
    FUN_009a5050(0x3f800000,0);
    fVar5 = FUN_004012c0(fStack_58);
    FUN_009a1950(&DAT_0105c2e8,(float)fVar5);
    FUN_009a6070(&DAT_0105c2e8,(float)param_1[0xd8]);
    DAT_0105c3e4 = param_1[0xd9];
    FUN_009a5390(0x105c2e8);
    FUN_009a2830(&DAT_0105c2e8,&fStack_48,&fStack_54,0.0);
    uVar1 = DAT_0105eae8;
    DAT_0105eae8 = 1;
    (**(code **)(*param_1 + 0x104))();
    DAT_0105eae8 = uVar1;
    if (_Memory != (int *)0x0) {
      FUN_009a5b60((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0073c230 @ 0073c230 ////

void __fastcall FUN_0073c230(int *param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  size_t sVar11;
  void *pvVar12;
  float10 fVar13;
  int iVar14;
  float local_78;
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  char acStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd55f3;
  local_c = ExceptionList;
  if (DAT_0105be90 != '\0') {
    *(undefined1 *)((int)param_1 + 0x375) = 1;
    return;
  }
  ExceptionList = &local_c;
  if (param_1[0xdc] == 0) {
    ExceptionList = &local_c;
    puVar8 = operator_new(0x3c);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = FUN_0041f350(puVar8);
    }
    param_1[0xdc] = (int)puVar8;
    puVar8 = operator_new(0x24);
    local_4 = 0;
    if (puVar8 == (undefined4 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_009910f0(puVar8);
    }
    *(undefined4 *)(param_1[0xdc] + 4) = uVar9;
    *(undefined1 *)(*(int *)(param_1[0xdc] + 4) + 0xc) = 3;
    puVar1 = (uint *)(*(int *)(param_1[0xdc] + 4) + 0x10);
    *puVar1 = *puVar1 & 0xbfffffff;
    puVar1 = (uint *)(*(int *)(param_1[0xdc] + 4) + 0x10);
    *puVar1 = *puVar1 & 0x7fffffff;
    puVar1 = (uint *)(*(int *)(param_1[0xdc] + 4) + 0x10);
    *puVar1 = *puVar1 & 0xfeffffff;
    iVar2 = param_1[0xdc];
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    iVar2 = param_1[0xdc];
    *(undefined4 *)(iVar2 + 0x30) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0x34) = 0x3f800000;
    *(undefined4 *)(param_1[0xdc] + 8) = 0xffffffff;
  }
  iVar6 = DAT_00e67ba4;
  iVar2 = DAT_00e67ba0;
  uVar5 = DAT_00e67b8c;
  local_4 = 0xffffffff;
  local_78 = (float)param_1[0xda];
  fVar3 = ABS((float)param_1[0x42] - (float)param_1[0x30]);
  fVar4 = ABS((float)param_1[0x39] - (float)param_1[0x27]);
  if ((((0.0 < fVar3) && (0.0 < fVar4)) && (fVar3 != fVar4)) && (fVar3 < fVar4)) {
    local_78 = (fVar4 / fVar3) * local_78;
  }
  iVar14 = -1;
  DAT_00e67b8c = 0;
  iVar10 = FUN_009d0f30();
  FUN_009a63a0(iVar10,iVar14);
  uVar9 = FUN_009a6fb0('\x01');
  if ((char)uVar9 != '\0') {
    fVar13 = FUN_004012c0(local_78);
    FUN_009a1950(&DAT_0105c2e8,(float)fVar13);
    FUN_009a6070(&DAT_0105c2e8,(float)param_1[0xd8]);
    DAT_0105c3e4 = param_1[0xd9];
    FUN_009a5390(0x105c2e8);
    FUN_009a2830(&DAT_0105c2e8,(float *)(param_1 + 0xd2),(float *)(param_1 + 0xd5),0.0);
    FUN_009a56b0(param_1[0xde],'\x01');
    FUN_009a4f10();
    uVar7 = DAT_0105eae8;
    DAT_0105eae8 = 1;
    (**(code **)(*param_1 + 0x104))();
    FUN_009a57d0(0,1,0xffffffff,0,(undefined4 *)0x0);
    DAT_0105eae8 = uVar7;
    FUN_009a4fb0();
    DAT_0104e108 = DAT_0104e108 + 1;
    pcStack_6c = acStack_60;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x14;
    _strncpy(pcStack_6c,"sic",3);
    uStack_68 = 3;
    pcStack_6c[3] = '\0';
    local_4 = 1;
    sVar11 = _sprintf(acStack_4c,(char *)&param_2_00d1b93c,DAT_0104e108);
    FUN_004073f0(&pcStack_6c,acStack_4c,sVar11);
    if (param_1[0xdb] == 0) {
      pvVar12 = FUN_0099bb50(pcStack_6c,0x31545844,0x40,0x40,'\0');
      param_1[0xdb] = (int)pvVar12;
    }
    FUN_009a56e0(param_1[0xdb]);
    FUN_009a6fb0('\0');
    if (*(int *)((int)*(void **)(param_1[0xdc] + 4) + 0x18) != param_1[0xdb]) {
      Engine_SetResourceReference(*(void **)(param_1[0xdc] + 4),param_1[0xdb]);
    }
    *(undefined1 *)((int)param_1 + 0x375) = 0;
    local_4 = 0xffffffff;
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_6c);
    }
  }
  FUN_009a63a0(iVar2,iVar6);
  DAT_00e67b8c = uVar5;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0073c660 @ 0073c660 ////

void __fastcall FUN_0073c660(int *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_1[0xdc] == 0) {
    FUN_0073c230(param_1);
  }
  iVar2 = param_1[0xdc];
  if (iVar2 != 0) {
    fVar3 = (float)param_1[0x42];
    fVar1 = (float)param_1[0x30];
    fVar4 = (float)param_1[0x27];
    fVar5 = (float)param_1[0x39];
    fVar6 = ABS(fVar3 - fVar1);
    local_10 = 0.0;
    local_c = 0.0;
    local_8 = 1.0;
    local_4 = 1.0;
    fVar7 = ABS(fVar5 - fVar4);
    if (((0.0 < fVar6) && (0.0 < fVar7)) && (fVar6 != fVar7)) {
      if (fVar6 <= fVar7) {
        local_10 = (1.0 - fVar6 / fVar7) * 0.5;
        local_8 = 1.0 - local_10;
      }
      else {
        local_c = (1.0 - fVar7 / fVar6) * 0.5;
        local_4 = 1.0 - local_c;
      }
    }
    if ((*(byte *)(param_1 + 0x86) & 0x20) == 0) {
      *(float *)(iVar2 + 0x10) = fVar1;
      *(float *)(iVar2 + 0x14) = fVar4;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      iVar2 = param_1[0xdc];
      *(float *)(iVar2 + 0x1c) = fVar3;
      *(float *)(iVar2 + 0x20) = fVar5;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      iVar2 = param_1[0xdc];
      *(float *)(iVar2 + 0x28) = local_10;
      *(float *)(iVar2 + 0x2c) = local_c;
      iVar2 = param_1[0xdc];
      *(float *)(iVar2 + 0x30) = local_8;
      *(float *)(iVar2 + 0x34) = local_4;
    }
    else {
      if (fVar1 <= (float)param_1[0x7c]) {
        fVar1 = (float)param_1[0x7c];
      }
      *(float *)(iVar2 + 0x10) = fVar1;
      if (fVar4 <= (float)param_1[0x7f]) {
        fVar4 = (float)param_1[0x7f];
      }
      *(float *)(param_1[0xdc] + 0x14) = fVar4;
      if ((float)param_1[0x7e] <= fVar3) {
        fVar3 = (float)param_1[0x7e];
      }
      *(float *)(param_1[0xdc] + 0x1c) = fVar3;
      if ((float)param_1[0x7d] <= fVar5) {
        fVar5 = (float)param_1[0x7d];
      }
      *(float *)(param_1[0xdc] + 0x20) = fVar5;
      fVar1 = (local_8 - local_10) / ((float)param_1[0x42] - (float)param_1[0x30]);
      fVar4 = (local_4 - local_c) / ((float)param_1[0x39] - (float)param_1[0x27]);
      *(float *)(param_1[0xdc] + 0x28) =
           (*(float *)(param_1[0xdc] + 0x10) - (float)param_1[0x30]) * fVar1 + local_10;
      *(float *)(param_1[0xdc] + 0x2c) =
           (*(float *)(param_1[0xdc] + 0x14) - (float)param_1[0x27]) * fVar4 + local_c;
      *(float *)(param_1[0xdc] + 0x30) =
           local_8 - ((float)param_1[0x42] - *(float *)(param_1[0xdc] + 0x1c)) * fVar1;
      *(float *)(param_1[0xdc] + 0x34) =
           local_4 - ((float)param_1[0x39] - *(float *)(param_1[0xdc] + 0x20)) * fVar4;
    }
    FUN_007477d0((void *)param_1[0xb5],param_1[0xdc]);
  }
  return;
}


//// FUNCTION FUN_0073c910 @ 0073c910 ////

undefined4 * __fastcall FUN_0073c910(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cd560b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1[0xdc] == 0) {
    ExceptionList = &local_c;
    FUN_0073c230(param_1);
    if (param_1[0xdc] == 0) {
      ExceptionList = local_c;
      return (undefined4 *)0x0;
    }
  }
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
  *(undefined1 *)(iVar3 + 0xc) = 3;
  *(uint *)(puVar1[1] + 0x10) = *(uint *)(puVar1[1] + 0x10) & 0xbfffffff;
  *(uint *)(puVar1[1] + 0x10) = *(uint *)(puVar1[1] + 0x10) & 0x7fffffff;
  *(uint *)(puVar1[1] + 0x10) = *(uint *)(puVar1[1] + 0x10) & 0xfeffffff;
  puVar1[10] = 0;
  puVar1[0xd] = 0x3f800000;
  puVar1[0xb] = 0;
  puVar1[2] = 0xffffffff;
  puVar1[0xc] = 0x3f800000;
  local_4 = 0xffffffff;
  if (*(int *)((int)puVar1[1] + 0x18) != param_1[0xdb]) {
    Engine_SetResourceReference((void *)puVar1[1],param_1[0xdb]);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_0073ca50 @ 0073ca50 ////

void __fastcall FUN_0073ca50(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x375) != '\0') ||
     (((char)param_1[0xdd] == '\0' && (param_1[0xdc] == 0)))) {
    FUN_0073c230(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_0073ca80 @ 0073ca80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0073ca80(int *param_1)

{
  if ((_DAT_0104e10c == 0.0) &&
     (((*(byte *)(param_1 + 0x86) & 0x20) == 0 || ((float)param_1[0x7e] != (float)param_1[0x7c]))))
  {
    if (((char)param_1[0xdd] == '\0') && (param_1[0xdc] != 0)) {
      FUN_0073c660(param_1);
      FUN_00740280((int)param_1);
      return;
    }
    FUN_0073be90(param_1);
    FUN_00740280((int)param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_0073caf0 @ 0073caf0 ////

undefined4 __fastcall FUN_0073caf0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x344);
}


//// FUNCTION FUN_0073cb00 @ 0073cb00 ////

void __thiscall FUN_0073cb00(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)this + 0xfc))(param_1,param_2,0x3e4ccccd,0x42480000,param_3);
  return;
}


//// FUNCTION FUN_0073cb40 @ 0073cb40 ////

undefined4 __fastcall FUN_0073cb40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x39c);
}


//// FUNCTION FUN_0073cb60 @ 0073cb60 ////

void __fastcall FUN_0073cb60(int param_1)

{
  if (*(void **)(param_1 + 0x39c) != (void *)0x0) {
    Model_UpdateVisuals(*(void **)(param_1 + 0x39c));
                    /* WARNING: Could not recover jumptable at 0x0073cb7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x344) + 8))();
    return;
  }
  return;
}


//// FUNCTION FUN_0073cb80 @ 0073cb80 ////

void __thiscall FUN_0073cb80(void *this,byte param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x344);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x9c) =
         *(uint *)(iVar1 + 0x9c) ^ ((uint)param_1 << 9 ^ *(uint *)(iVar1 + 0x9c)) & 0x200;
    *(undefined4 *)(*(int *)((int)this + 0x344) + 200) = 0x3c75c28f;
  }
  return;
}


//// FUNCTION FUN_0073cbc0 @ 0073cbc0 ////

void __thiscall FUN_0073cbc0(void *this,void *param_1,char param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 uVar3;
  LONG LVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar5 = *(undefined4 **)((int)this + 0x344);
  uVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar5 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    DAT_0105b588 = uVar3;
    *(undefined4 *)((int)this + 0x344) = 0;
  }
  if (*(void **)((int)this + 0x398) != (void *)0x0) {
    FUN_009d2c50(*(void **)((int)this + 0x398),(void *)0x0,'\x01',-1.0,-1.0);
    if (*(undefined4 **)((int)this + 0x398) != (undefined4 *)0x0) {
      FUN_009d2b50(*(undefined4 **)((int)this + 0x398));
      *(undefined4 *)((int)this + 0x398) = 0;
    }
  }
  if (param_1 != (void *)0x0) {
    if (param_2 == '\0') {
      puVar5 = FUN_00433eb0();
      *(undefined4 **)((int)this + 0x344) = puVar5;
      FUN_0097e2b0((int)puVar5);
      FUN_0097e330(*(void **)((int)this + 0x344),1);
      puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
      *puVar1 = *puVar1 | 8;
      puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
      *puVar1 = *puVar1 | 0x8000000;
      iVar2 = **(int **)((int)this + 0x344);
      uVar9 = FUN_0097e350(param_1,0);
      (**(code **)(iVar2 + 0x18))(uVar9);
    }
    else {
      *(void **)((int)this + 0x344) = param_1;
      InterlockedIncrement((LONG *)((int)param_1 + 0x10));
    }
    *(undefined4 *)((int)this + 0x394) = 0;
    if (*(int *)((int)this + 0x39c) == 0) {
      pvVar6 = FUN_0097c450(*(char **)((int)this + 0x3a0),0,(undefined4 *)0x0,0);
      uVar9 = 0;
      *(void **)((int)this + 0x39c) = pvVar6;
      fVar8 = FUN_004012c0(-1.57);
      uStack_c = 0;
      uStack_8 = 0;
      uStack_4 = 0;
      FUN_00978350(*(void **)((int)this + 0x39c),&uStack_c,(float)fVar8,uVar9);
    }
    else {
      uVar7 = *(uint *)(*(int *)((int)this + 0x39c) + 0x8c);
    }
    _param_2 = 1.0;
    if (*(int *)((int)this + 0x394) != 0) {
      _param_2 = 0.0;
    }
    FUN_009757a0(*(void **)((int)this + 0x39c),(byte *)"ai_male",_param_2,0);
    FUN_00978310(*(void **)((int)this + 0x39c),0,0,*(void **)((int)this + 0x344));
    if (uVar7 != 0) {
      FUN_00978cd0(*(void **)((int)this + 0x39c),uVar7,1);
    }
  }
  return;
}


//// FUNCTION FUN_0073cd90 @ 0073cd90 ////

void __thiscall FUN_0073cd90(void *this,float param_1)

{
  float fVar1;
  void *pvVar2;
  float10 fVar3;
  char cVar4;
  float fVar5;
  
  fVar1 = param_1;
  if ((*(int *)((int)this + 0x398) != 0) && (param_1 != 0.0)) {
    fVar3 = FUN_0042ff00((int)param_1);
    fVar5 = (float)fVar3;
    fVar3 = FUN_0042fef0((int)param_1);
    if (*(int **)((int)this + 0x390) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x390) + 0x1ac))(param_1);
      fVar3 = (float10)(**(code **)(**(int **)((int)this + 0x390) + 0x1b0))(param_1);
    }
    param_1 = (float)fVar3;
    cVar4 = '\x01';
    pvVar2 = (void *)FUN_004319b0((int)fVar1);
    FUN_009d2c50(*(void **)((int)this + 0x398),pvVar2,cVar4,fVar5,param_1);
  }
  return;
}


//// FUNCTION FUN_0073ce10 @ 0073ce10 ////

void __thiscall FUN_0073ce10(void *this,undefined4 *param_1,float param_2)

{
  if (*(void **)((int)this + 0x39c) != (void *)0x0) {
    FUN_009757a0(*(void **)((int)this + 0x39c),(byte *)*param_1,param_2,0);
  }
  return;
}


//// FUNCTION FUN_0073ce30 @ 0073ce30 ////

void __fastcall FUN_0073ce30(int param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    if (*(void **)(param_1 + 0x39c) != (void *)0x0) {
      FUN_00971df0(*(void **)(param_1 + 0x39c));
      *(undefined4 *)(param_1 + 0x39c) = 0;
    }
    this = FUN_0097c450(*(char **)(param_1 + 0x3a0),0,(undefined4 *)0x0,0);
    *(void **)(param_1 + 0x39c) = this;
    FUN_00978310(this,0,0,*(void **)(param_1 + 0x344));
    uVar4 = 0;
    fVar3 = FUN_004012c0(-1.57);
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    FUN_00978350(*(void **)(param_1 + 0x39c),&uStack_c,(float)fVar3,uVar4);
    fStack_10 = 1.0;
    if (*(int *)(param_1 + 0x394) != 0) {
      fStack_10 = 0.0;
    }
    FUN_009757a0(*(void **)(param_1 + 0x39c),(byte *)"ai_male",fStack_10,0);
    if (*(char *)(*(int *)(param_1 + 0x39c) + 0x4d) != '\0') {
      iVar2 = 0;
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x39c) + 0x5c) + iVar2 * 4);
        if ((piVar1 != (int *)0x0) && (piVar1[0x10] == 0)) {
          (**(code **)(*piVar1 + 0x28))(0);
          *(uint *)(piVar1[0x10] + 0x9c) = *(uint *)(piVar1[0x10] + 0x9c) | 0x8000000;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x39c) + 0x4d));
    }
  }
  return;
}


//// FUNCTION FUN_0073cf50 @ 0073cf50 ////

void __fastcall FUN_0073cf50(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x344);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0x344) = 0;
  }
  if (*(void **)(param_1 + 0x398) != (void *)0x0) {
    FUN_009d2c50(*(void **)(param_1 + 0x398),(void *)0x0,'\x01',-1.0,-1.0);
    if (*(undefined4 **)(param_1 + 0x398) != (undefined4 *)0x0) {
      FUN_009d2b50(*(undefined4 **)(param_1 + 0x398));
      *(undefined4 *)(param_1 + 0x398) = 0;
    }
  }
  if (*(void **)(param_1 + 0x39c) != (void *)0x0) {
    FUN_00971df0(*(void **)(param_1 + 0x39c));
    *(undefined4 *)(param_1 + 0x39c) = 0;
  }
  return;
}


//// FUNCTION FUN_0073cff0 @ 0073cff0 ////

void __thiscall FUN_0073cff0(void *this,int *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)((int)this + 0x344);
  if (puVar4 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar4 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)((int)this + 0x344) = 0;
  }
  if (*(void **)((int)this + 0x398) != (void *)0x0) {
    FUN_009d2c50(*(void **)((int)this + 0x398),(void *)0x0,'\x01',-1.0,-1.0);
    if (*(undefined4 **)((int)this + 0x398) != (undefined4 *)0x0) {
      FUN_009d2b50(*(undefined4 **)((int)this + 0x398));
      *(undefined4 *)((int)this + 0x398) = 0;
    }
  }
  if (param_1 != (int *)0x0) {
    puVar4 = FUN_00433eb0();
    *(undefined4 **)((int)this + 0x344) = puVar4;
    FUN_0097e2b0((int)puVar4);
    FUN_0097e330(*(void **)((int)this + 0x344),1);
    puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
    *puVar1 = *puVar1 | 8;
    puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
    *puVar1 = *puVar1 | 0x8000000;
    *(int *)((int)this + 0x394) = param_1[0x128];
    FUN_00982950(*(void **)((int)this + 0x344),param_1[0x47]);
    FUN_0073ce30((int)this);
  }
  iVar5 = FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  (**(code **)(*(int *)((int)this + 0x37c) + 4))();
  *(int *)((int)this + 0x390) = iVar5;
  (*(code *)**(undefined4 **)((int)this + 0x37c))();
  return;
}


//// FUNCTION FUN_0073d110 @ 0073d110 ////

void __thiscall FUN_0073d110(void *this,int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)((int)this + 0x344);
  if (puVar4 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar4 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)((int)this + 0x344) = 0;
  }
  if (*(void **)((int)this + 0x398) != (void *)0x0) {
    FUN_009d2c50(*(void **)((int)this + 0x398),(void *)0x0,'\x01',-1.0,-1.0);
    if (*(undefined4 **)((int)this + 0x398) != (undefined4 *)0x0) {
      FUN_009d2b50(*(undefined4 **)((int)this + 0x398));
      *(undefined4 *)((int)this + 0x398) = 0;
    }
  }
  if (param_1 != 0) {
    puVar4 = FUN_00433eb0();
    *(undefined4 **)((int)this + 0x344) = puVar4;
    FUN_0097e2b0((int)puVar4);
    FUN_0097e330(*(void **)((int)this + 0x344),1);
    puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
    *puVar1 = *puVar1 | 8;
    puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
    *puVar1 = *puVar1 | 0x8000000;
    *(undefined4 *)((int)this + 0x394) = param_2;
    FUN_00982950(*(void **)((int)this + 0x344),param_1);
    FUN_0073ce30((int)this);
  }
  (**(code **)(*(int *)((int)this + 0x37c) + 4))();
  *(undefined4 *)((int)this + 0x390) = 0;
  (*(code *)**(undefined4 **)((int)this + 0x37c))();
  return;
}


//// FUNCTION FUN_0073d220 @ 0073d220 ////

void __thiscall FUN_0073d220(void *this,int *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 **)((int)this + 0x344);
  if (puVar4 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar4 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)((int)this + 0x344) = 0;
  }
  if (param_1 != (int *)0x0) {
    puVar4 = FUN_00433eb0();
    *(undefined4 **)((int)this + 0x344) = puVar4;
    FUN_0097e2b0((int)puVar4);
    FUN_0097e330(*(void **)((int)this + 0x344),1);
    puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
    *puVar1 = *puVar1 | 8;
    puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
    *puVar1 = *puVar1 | 0x8000000;
    FUN_00982950(*(void **)((int)this + 0x344),param_1[0x47]);
    FUN_0073ce30((int)this);
  }
  iVar5 = FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  (**(code **)(*(int *)((int)this + 0x37c) + 4))();
  *(int *)((int)this + 0x390) = iVar5;
  (*(code *)**(undefined4 **)((int)this + 0x37c))();
  return;
}


//// FUNCTION FUN_0073d300 @ 0073d300 ////

undefined4 * __fastcall FUN_0073d300(undefined4 *param_1)

{
  ViewportTooltip_Constructor(param_1);
  *param_1 = &PTR_FUN_00d4b4ac;
  param_1[0x14] = &PTR_FUN_00d4b494;
  param_1[0xe2] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xdf] = &PTR_FUN_00d18c4c;
  param_1[0xe4] = 0;
  param_1[0xe2] = param_1 + 0xdf;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  param_1[0xe8] = param_1 + 0xeb;
  param_1[0xe9] = 0;
  param_1[0xea] = 0x14;
  param_1[0xf0] = param_1 + 0xf3;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0x14;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  return param_1;
}


//// FUNCTION FUN_0073daf0 @ 0073daf0 ////

void __thiscall FUN_0073daf0(void *this,int *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 *puVar8;
  float10 fVar9;
  char cVar10;
  float fVar11;
  float fStack_e0;
  uint auStack_d8 [51];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cd5704;
  pvStack_c = ExceptionList;
  puVar4 = *(undefined4 **)((int)this + 0x344);
  ExceptionList = &pvStack_c;
  if (puVar4 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    LVar3 = InterlockedDecrement(puVar4 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)((int)this + 0x344) = 0;
  }
  if (*(void **)((int)this + 0x398) != (void *)0x0) {
    FUN_009d2c50(*(void **)((int)this + 0x398),(void *)0x0,'\x01',-1.0,-1.0);
    if (*(undefined4 **)((int)this + 0x398) != (undefined4 *)0x0) {
      FUN_009d2b50(*(undefined4 **)((int)this + 0x398));
      *(undefined4 *)((int)this + 0x398) = 0;
    }
  }
  if (param_1 != (int *)0x0) {
    puVar4 = FUN_00433eb0();
    *(undefined4 **)((int)this + 0x344) = puVar4;
    FUN_0097e2b0((int)puVar4);
    FUN_0097e330(*(void **)((int)this + 0x344),1);
    puVar1 = (uint *)(*(int *)((int)this + 0x344) + 0x9c);
    *puVar1 = *puVar1 | 8;
    *(uint *)(*(int *)((int)this + 0x344) + 0x9c) =
         *(uint *)(*(int *)((int)this + 0x344) + 0x9c) | 0x8000000;
    *(int *)((int)this + 0x394) = param_1[0x128];
    FUN_009d2990(auStack_d8,(char *)0x0,(char *)0x0,0.0);
    uStack_4 = 0;
    iVar5 = (**(code **)(*param_1 + 0xf0))();
    if (iVar5 != 0) {
      iVar5 = (**(code **)(*param_1 + 0xf0))();
      FUN_004356e0(auStack_d8,(uint *)(iVar5 + 0x38));
      pvVar6 = FUN_009d30f0(*(int *)((int)this + 0x344),*(int *)((int)this + 0x394),1,auStack_d8,
                            '\0');
      *(void **)((int)this + 0x398) = pvVar6;
      uStack_4._0_1_ = 1;
      pvVar6 = operator_new(0xe0);
      uStack_4._0_1_ = 2;
      if (pvVar6 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        iVar5 = FUN_0059c6e0(param_1,'\0');
        puVar4 = FUN_00432150(pvVar6,iVar5);
      }
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      puVar8 = (undefined4 *)0x0;
      if (puVar4 != (undefined4 *)0x0) {
        puVar8 = puVar4;
      }
      piVar7 = (int *)FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
      fVar9 = FUN_0042ff00((int)puVar8);
      fVar11 = (float)fVar9;
      fVar9 = FUN_0042fef0((int)puVar8);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x220))(*(undefined4 *)((int)this + 0x398));
        (**(code **)(*piVar7 + 0x1ac))(puVar8);
        fVar9 = (float10)(**(code **)(*piVar7 + 0x1b0))(puVar8);
      }
      fStack_e0 = (float)fVar9;
      cVar10 = '\x01';
      pvVar6 = (void *)FUN_004319b0((int)puVar8);
      FUN_009d2c50(*(void **)((int)this + 0x398),pvVar6,cVar10,fVar11,fStack_e0);
      uStack_4 = uStack_4 & 0xffffff00;
      if (puVar8 != (undefined4 *)0x0) {
        piVar7 = puVar8 + 0x12;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          (**(code **)*puVar8)(1);
        }
      }
    }
    FUN_0073ce30((int)this);
    uStack_4 = 0xffffffff;
    FUN_00434ae0((int)auStack_d8);
  }
  iVar5 = FUN_00ace790(param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  (**(code **)(*(int *)((int)this + 0x37c) + 4))();
  *(int *)((int)this + 0x390) = iVar5;
  (*(code *)**(undefined4 **)((int)this + 0x37c))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0073dda0 @ 0073dda0 ////

void __thiscall FUN_0073dda0(void *this,undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = *(byte **)((int)this + 0x3a0);
  pbVar2 = (byte *)*param_1;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_0073dde4:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_0073dde9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_0073dde4;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0073dde9:
  if (iVar3 != 0) {
    FUN_004015d0((void *)((int)this + 0x3a0),(char *)*param_1,param_1[1]);
    if (*(void **)((int)this + 0x39c) != (void *)0x0) {
      FUN_00971df0(*(void **)((int)this + 0x39c));
      *(undefined4 *)((int)this + 0x39c) = 0;
    }
    FUN_0073ce30((int)this);
  }
  return;
}


//// FUNCTION FUN_0073de30 @ 0073de30 ////

void __fastcall FUN_0073de30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5742;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d4b4ac;
  param_1[0x14] = &PTR_FUN_00d4b494;
  local_4 = 3;
  FUN_0073cf50((int)param_1);
  if (0x14 < (uint)param_1[0xf2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf0]);
  }
  if (0x14 < (uint)param_1[0xea]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe8]);
  }
  param_1[0xdf] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0xe1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe1] = param_1[0xe0];
  }
  if (param_1[0xe0] != 0) {
    *(undefined4 *)(param_1[0xe0] + 4) = param_1[0xe1];
  }
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe4] = 0;
  if ((undefined4 *)param_1[0xe1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe1] = param_1[0xe0];
  }
  if (param_1[0xe0] != 0) {
    *(undefined4 *)(param_1[0xe0] + 4) = param_1[0xe1];
  }
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  local_4 = 0xffffffff;
  FUN_0073b840(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0073df30 @ 0073df30 ////

void __fastcall FUN_0073df30(void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0x374) != '\0') {
    if ((*(int *)((int)param_1 + 0x39c) != 0) &&
       (uVar1 = FUN_00971d30(*(int *)((int)param_1 + 0x39c)), (char)uVar1 != '\0')) {
      uVar2 = FUN_00479e80((undefined4 *)((int)param_1 + 0x3a0),(undefined4 *)((int)param_1 + 0x3c0)
                          );
      if (((char)uVar2 != '\0') && (*(int *)((int)param_1 + 0x3c4) != 0)) {
        FUN_0073dda0(param_1,(undefined4 *)((int)param_1 + 0x3c0));
      }
    }
    if (*(void **)((int)param_1 + 0x39c) != (void *)0x0) {
      FUN_00977c80(*(void **)((int)param_1 + 0x39c));
    }
    FUN_0053d480((int)param_1);
  }
  *(undefined1 *)((int)param_1 + 0x3e0) = 1;
  return;
}


//// FUNCTION FUN_0073dfa0 @ 0073dfa0 ////

void __fastcall FUN_0073dfa0(int *param_1)

{
  if ((char)param_1[0xf8] == '\0') {
    FUN_0073df30(param_1);
  }
  FUN_0073ca80(param_1);
  return;
}


//// FUNCTION FUN_0073dfc0 @ 0073dfc0 ////

undefined4 * __thiscall FUN_0073dfc0(void *this,byte param_1)

{
  FUN_0073de30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0073dfe0 @ 0073dfe0 ////

void __fastcall FUN_0073dfe0(int *param_1)

{
  FUN_0073ca50(param_1);
  FUN_0073df30(param_1);
  return;
}


//// FUNCTION FUN_0073e010 @ 0073e010 ////

void __fastcall FUN_0073e010(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cd5766;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d4b5ec;
  param_1[0x14] = &PTR_FUN_00d4b5d0;
  local_4 = 1;
  if ((void *)param_1[0xdf] != (void *)0x0) {
    FUN_00971df0((void *)param_1[0xdf]);
    param_1[0xdf] = 0;
  }
  if (0x14 < (uint)param_1[0xe2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe0]);
  }
  local_4 = 0xffffffff;
  FUN_0073b840(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0073e0b0 @ 0073e0b0 ////

void __fastcall FUN_0073e0b0(int param_1)

{
  int iVar1;
  void *pvVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x37c) == 0) {
    iVar1 = FUN_0097e350(*(void **)(param_1 + 0x344),0);
    if ((*(byte *)(iVar1 + 0xe4) & 0x40) != 0) {
      pvVar2 = FUN_0097c450(*(char **)(param_1 + 0x380),0,(undefined4 *)0x0,0);
      *(void **)(param_1 + 0x37c) = pvVar2;
      uVar4 = *(undefined4 *)(param_1 + 0x344);
      fVar3 = FUN_004012c0(0.0);
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      FUN_00978350(*(void **)(param_1 + 0x37c),&local_c,(float)fVar3,uVar4);
      FUN_009777b0(*(int *)(param_1 + 0x37c));
      FUN_00977c80(*(void **)(param_1 + 0x37c));
    }
  }
  return;
}


