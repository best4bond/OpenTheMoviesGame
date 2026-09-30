//// FUNCTION FUN_007b9cf0 @ 007b9cf0 ////

void __fastcall FUN_007b9cf0(int *param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde4c8;
  pvStack_c = ExceptionList;
  iVar1 = param_1[0xd6];
  ExceptionList = &pvStack_c;
  if (((iVar1 == 0) || (ExceptionList = &pvStack_c, *(int *)(iVar1 + 0x1c0) != 4)) ||
     (ExceptionList = &pvStack_c, param_1[0xdc] != 0)) goto LAB_007b9ed1;
  ExceptionList = &pvStack_c;
  cVar2 = FUN_004de210(iVar1);
  if (cVar2 == '\0') {
    pvVar3 = operator_new(0x360);
    local_4 = 3;
    if (pvVar3 != (void *)0x0) {
      FUN_00401de0(local_2c,"ui/icons_thumb_good.dds",0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,4);
      piVar4 = FUN_0069d820(pvVar3,local_2c,0,0,0x3f800000,0x3f800000);
      goto joined_r0x007b9e5a;
    }
    piVar4 = (int *)0x0;
  }
  else {
    pvVar3 = operator_new(0x360);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00401de0(local_4c,"ui/icons_thumb_bad.dds",0xffffffff);
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar4 = FUN_0069d820(pvVar3,local_4c,0,0,0x3f800000,0x3f800000);
      local_2c[0] = local_4c[0];
      local_24 = local_44;
joined_r0x007b9e5a:
      if (0x14 < local_24) {
        local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 0x74))();
  (**(code **)(*piVar4 + 0x5c))(1);
  (**(code **)(*piVar4 + 100))(1,param_1,0);
  (**(code **)(*param_1 + 0xc))(piVar4,1);
  (**(code **)(param_1[0xd7] + 4))();
  param_1[0xdc] = (int)piVar4;
  (**(code **)param_1[0xd7])();
  do {
    cVar2 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar2 != '\0');
  (**(code **)(*param_1 + 0x84))(0);
LAB_007b9ed1:
  WWindow_Tick(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007b9f40 @ 007b9f40 ////

void __fastcall FUN_007b9f40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d55e34;
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


//// FUNCTION FUN_007ba040 @ 007ba040 ////

undefined4 * __thiscall FUN_007ba040(void *this,byte param_1)

{
  FUN_007b9f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ba060 @ 007ba060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007ba060(int *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  size_t sVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int *piVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  float *pfVar12;
  int **ppiVar13;
  undefined4 *unaff_EBX;
  int *unaff_EBP;
  float10 fVar14;
  undefined4 uVar15;
  float fStack_1d0;
  int iStack_1cc;
  undefined4 **ppuStack_1c4;
  undefined *puStack_1c0;
  undefined4 *puStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a0;
  int *piStack_19c;
  int *piStack_198;
  undefined4 uStack_194;
  int *piStack_190;
  int *piStack_18c;
  int *piStack_188;
  TypeDescriptor *pTVar16;
  TypeDescriptor *pTVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puStack_13c;
  uint uStack_138;
  uint uStack_134;
  undefined1 auStack_130 [4];
  undefined4 auStack_12c [2];
  undefined1 auStack_124 [8];
  float fStack_11c;
  float fStack_114;
  float fStack_10c;
  undefined4 local_108;
  float fStack_104;
  undefined4 *local_fc;
  int *local_f8;
  undefined2 *local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined2 local_e8 [2];
  void *apvStack_e4 [2];
  uint uStack_dc;
  void *pvStack_c0;
  undefined1 *puStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [20];
  undefined4 uStack_9c;
  wchar_t local_8c [14];
  undefined1 uStack_70;
  undefined1 uStack_5c;
  undefined1 uStack_34;
  undefined1 uStack_28;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cde5ef;
  pvStack_c = ExceptionList;
  local_108 = 0;
  local_f4 = local_e8;
  local_e8[0] = 0;
  local_f0 = 0;
  local_ec = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_fc = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (local_fc == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(local_fc);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  local_f8 = piVar3;
  sVar4 = FUN_00ace02d(L"<nobr><table><tr><td align=right width=20><x5>");
  FUN_0040cae0(&local_f4,L"<nobr><table><tr><td align=right width=20><x5>",sVar4);
  sVar4 = _swprintf(local_8c,0xd18f7c,(wchar_t *)param_1[0xde]);
  FUN_0040cae0(&local_f4,local_8c,sVar4);
  sVar4 = FUN_00ace02d(L"</x5></td></tr></table></nobr>");
  FUN_0040cae0(&local_f4,L"</x5></td></tr></table></nobr>",sVar4);
  (**(code **)(*piVar3 + 0x54))();
  (**(code **)(*piVar3 + 0x84))();
  fVar14 = (float10)(**(code **)(*piVar3 + 0x10))();
  puStack_13c = (undefined1 *)(float)fVar14;
  fVar14 = (float10)(**(code **)(*piVar3 + 0x14))();
  fStack_104 = (float)fVar14;
  fStack_114 = (float)fVar14;
  uVar19 = 1;
  (**(code **)(*param_1 + 0xc))();
  iVar5 = FUN_004df220(param_1[0xd6]);
  puStack_bc = auStack_b0;
  auStack_b0[0] = 0;
  uStack_b8 = 0;
  uStack_b4 = 0x14;
  uStack_14 = 2;
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)FUN_00528460(iVar5);
    puStack_13c = auStack_130;
    auStack_130[0] = 0;
    uStack_138 = 0;
    uStack_134 = 0x14;
    FUN_004015d0(&puStack_13c,(char *)*puVar6,puVar6[1]);
    uStack_14 = 3;
    puVar6 = FUN_00430770(&puStack_13c,apvStack_e4,4,0xffffffff);
    FUN_004015d0(&puStack_13c,(char *)*puVar6,puVar6[1]);
    if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_e4[0]);
    }
    iVar18 = 0;
    pTVar17 = &TM::CSetBlueprint::RTTI_Type_Descriptor;
    pTVar16 = &TM::TMBlueprint::RTTI_Type_Descriptor;
    iVar5 = 0;
    piVar3 = (int *)FUN_0095f2d0(&puStack_13c);
    pvVar7 = (void *)FUN_00ace790(piVar3,iVar5,pTVar16,pTVar17,iVar18);
    if (pvVar7 != (void *)0x0) {
      unaff_EBX = operator_new(0x360);
      uStack_14 = 4;
      if (unaff_EBX == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = FUN_0069ce90(unaff_EBX);
      }
      uStack_14 = 3;
      FUN_0095f980(pvVar7,apvStack_e4);
      uStack_14 = 5;
      (**(code **)(*piVar3 + 0x100))();
      uStack_28 = 3;
      if (0x14 < local_f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_f8);
      }
      (**(code **)(*piVar3 + 0x74))();
      piStack_188 = (int *)0x7ba30b;
      (**(code **)(*piVar3 + 0x5c))();
      piStack_188 = (int *)0x0;
      piStack_190 = (int *)0x1;
      uStack_194 = 0x7ba316;
      piStack_18c = param_1;
      (**(code **)(*piVar3 + 100))();
      uStack_194 = 1;
      piStack_19c = (int *)0x7ba320;
      piStack_198 = piVar3;
      (**(code **)(*param_1 + 0xc))();
      unaff_EBP = (int *)(DAT_00e5a734 + (float)unaff_EBP);
      if (fStack_10c <= DAT_00e5a734) {
        fStack_11c = DAT_00e5a734;
      }
    }
    uStack_14 = 2;
    if (0x14 < uStack_134) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_13c);
    }
  }
  uStack_14 = 2;
  puVar6 = operator_new(0x344);
  uStack_14 = 6;
  if (puVar6 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0(puVar6);
  }
  uStack_14 = 2;
  (**(code **)(*piVar3 + 0x5c))();
  (**(code **)(*piVar3 + 100))();
  (**(code **)(*param_1 + 0xc))();
  puVar6 = operator_new(0x3fc);
  uStack_34 = 7;
  if (puVar6 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_00833290(puVar6);
  }
  uStack_34 = 2;
  uVar9 = FUN_00ace02d(L"<nobr><x6><translate>SITT_DIFFICULTY</translate></x6></nobr>");
  piStack_188 = (int *)0x7ba408;
  FUN_004036d0(auStack_124,L"<nobr><x6><translate>SITT_DIFFICULTY</translate></x6></nobr>",uVar9);
  (**(code **)(*piVar8 + 0x54))();
  piStack_188 = (int *)0x7ba421;
  (**(code **)(*piVar8 + 0x84))();
  piStack_188 = (int *)0x0;
  piStack_190 = (int *)0x1;
  uStack_194 = 0x7ba42d;
  piStack_18c = piVar3;
  (**(code **)(*piVar8 + 100))();
  uStack_194 = 0;
  piStack_19c = (int *)0x1;
  piStack_198 = piVar3;
  (**(code **)(*piVar8 + 0x5c))();
  uStack_1a0 = 1;
  (**(code **)(*piVar3 + 0xc))();
  uStack_1ac = 0x7ba44d;
  piStack_18c = operator_new(0x360);
  uStack_5c = 8;
  if (piStack_18c == (undefined4 *)0x0) {
    piStack_188 = (int *)0x0;
  }
  else {
    piStack_188 = FUN_0069ce90(piStack_18c);
  }
  puVar6 = auStack_12c;
  uStack_5c = 2;
  uStack_1ac = 0x7ba489;
  pvVar7 = (void *)FUN_004df4a0(param_1[0xd6]);
  uStack_1ac = 0x7ba490;
  puStack_1b8 = FUN_004b7880(pvVar7,puVar6);
  piStack_18c = &uStack_1b4;
  uStack_1b4 = 0;
  piStack_1b0 = (int *)0x3ec00000;
  uStack_1ac = 0x3f800000;
  pvVar7 = (void *)0x3f200000;
  uStack_5c = 9;
  (**(code **)(*piStack_188 + 0x100))();
  uStack_70 = 2;
  if (0x14 < uStack_138) {
                    /* WARNING: Subroutine does not return */
    puStack_1c0 = &UNK_007ba4e1;
    _free(unaff_EBX);
  }
  puStack_1c0 = (undefined *)DAT_00e5a72c;
  ppuStack_1c4 = (undefined4 **)0x7ba4f9;
  uVar9 = DAT_00e5a730;
  (**(code **)(*piStack_19c + 0x74))();
  ppuStack_1c4 = (undefined4 **)0x0;
  (**(code **)(*piVar8 + 0x5c))();
  (**(code **)(*piStack_1b0 + 100))();
  (**(code **)(*piVar3 + 0xc))();
  FUN_0073e590(ppuStack_1c4,piVar8);
  (**(code **)(*piVar3 + 0x84))();
  fVar14 = (float10)(**(code **)(*piVar3 + 0x10))();
  fStack_1d0 = (float)(fVar14 + (float10)-2.0);
  fVar14 = (float10)(**(code **)(*piVar3 + 0x14))();
  if ((float10)(float)piVar8 <= fVar14) {
    (**(code **)(*piVar3 + 0x14))();
  }
  if (_DAT_00e5a788 == 0.0) {
    fVar1 = DAT_00e5a734 * 1.5 + fStack_1d0;
    iVar5 = FUN_004de100(param_1[0xd6]);
    iVar5 = *(int *)(iVar5 + 8);
    iVar18 = FUN_004de100(param_1[0xd6]);
    if (iVar5 != iVar18 + 0x14) {
      do {
        pfVar12 = (float *)FUN_0048c9e0(*(void **)(iVar5 + 8),&piStack_198);
        if ((0.0 < *pfVar12) && (iVar18 = FUN_0048c9f0(*(int *)(iVar5 + 8)), iVar18 != 0)) {
          ppuStack_1c4 = &puStack_1b8;
          puStack_1b8 = (undefined4 *)((uint)puStack_1b8 & 0xffffff00);
          puStack_1c0 = (undefined *)0x0;
          uVar9 = 0x14;
          uStack_9c = CONCAT31(uStack_9c._1_3_,0xc);
          iVar18 = FUN_0048c9f0(*(int *)(iVar5 + 8));
          iVar18 = FUN_005a6130(iVar18);
          if (iVar18 == 1) {
            if (uVar9 < 0x18) {
              if (0x14 < uVar9) {
                    /* WARNING: Subroutine does not return */
                _free(ppuStack_1c4);
              }
              uVar9 = 0x20;
              ppuStack_1c4 = _malloc(0x20);
            }
            _strncpy((char *)ppuStack_1c4,"ui/button_dummy_red.dds",0x17);
            puStack_1c0 = (undefined *)0x17;
            *(char *)((int)ppuStack_1c4 + 0x17) = '\0';
          }
          else if (iVar18 == 2) {
            if (uVar9 < 0x1a) {
              if (0x14 < uVar9) {
                    /* WARNING: Subroutine does not return */
                _free(ppuStack_1c4);
              }
              uVar9 = 0x20;
              ppuStack_1c4 = _malloc(0x20);
            }
            _strncpy((char *)ppuStack_1c4,"ui/button_dummy_green.dds",0x19);
            puStack_1c0 = (undefined *)0x19;
            *(char *)((int)ppuStack_1c4 + 0x19) = '\0';
          }
          else if (iVar18 == 3) {
            if (uVar9 < 0x19) {
              if (0x14 < uVar9) {
                    /* WARNING: Subroutine does not return */
                _free(ppuStack_1c4);
              }
              uVar9 = 0x20;
              ppuStack_1c4 = _malloc(0x20);
            }
            _strncpy((char *)ppuStack_1c4,"ui/button_dummy_blue.dds",0x18);
            puStack_1c0 = (undefined *)0x18;
            *(char *)(ppuStack_1c4 + 6) = '\0';
          }
          if (puStack_1c0 != (undefined *)0x0) {
            piStack_19c = operator_new(0x360);
            uStack_9c._0_1_ = 0xd;
            if (piStack_19c == (int *)0x0) {
              piVar3 = (int *)0x0;
            }
            else {
              piVar3 = FUN_0069ce90(piStack_19c);
            }
            piStack_19c = (int *)&stack0xfffffe0c;
            uVar15 = 0x3f400000;
            uStack_9c = CONCAT31(uStack_9c._1_3_,0xc);
            (**(code **)(*piVar3 + 0x100))(&ppuStack_1c4);
            (**(code **)(*piVar3 + 0x74))(DAT_00e5a734 * 0.5,DAT_00e5a734);
            (**(code **)(*piVar3 + 0x5c))(1,param_1,uVar15);
            (**(code **)(*piVar3 + 100))(1,param_1,0);
            (**(code **)(*param_1 + 0xc))(piVar3,1);
            fStack_1d0 = DAT_00e5a734 * 0.5 + fStack_1d0;
          }
          uStack_9c = CONCAT31(uStack_9c._1_3_,2);
          if (0x14 < uVar9) {
                    /* WARNING: Subroutine does not return */
            _free(ppuStack_1c4);
          }
        }
        iVar5 = *(int *)(iVar5 + 4);
        iVar18 = FUN_004de100(param_1[0xd6]);
      } while (iVar5 != iVar18 + 0x14);
    }
    if (fStack_1d0 <= fVar1) {
      fStack_1d0 = fVar1;
    }
  }
  else {
    iStack_1cc = 1;
    do {
      ppuStack_1c4 = &puStack_1b8;
      puStack_1b8 = (undefined4 *)((uint)puStack_1b8 & 0xffffff00);
      puStack_1c0 = (undefined *)0x0;
      uVar9 = 0x14;
      uStack_9c._0_1_ = 10;
      if (iStack_1cc == 1) {
        uVar9 = 0x20;
        ppuStack_1c4 = _malloc(0x20);
        _strncpy((char *)ppuStack_1c4,"ui/button_dummy_red.dds",0x17);
        puStack_1c0 = (undefined *)0x17;
        *(char *)((int)ppuStack_1c4 + 0x17) = '\0';
        pvVar11 = (void *)param_1[0xd6];
        iVar18 = 0;
        iVar5 = 1;
        pvVar10 = (void *)FUN_005b2220(*(int *)((int)pvVar11 + 0xb4));
        iVar5 = FUN_005a76b0(pvVar10,iVar5,iVar18);
        if (((iVar5 != 0) && (pvVar11 != (void *)0x0)) &&
           (pvVar11 = (void *)FUN_004e0670(pvVar11,iVar5), pvVar11 != (void *)0x0)) {
          ppiVar13 = &piStack_19c;
LAB_007ba70e:
          FUN_0048c9e0(pvVar11,ppiVar13);
        }
LAB_007ba72a:
        if (puStack_1c0 != (undefined *)0x0) {
          piStack_198 = operator_new(0x360);
          uStack_9c._0_1_ = 0xb;
          if (piStack_198 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = FUN_0069ce90(piStack_198);
          }
          piStack_198 = (int *)&stack0xfffffe0c;
          uVar15 = 0x3f400000;
          uStack_9c._0_1_ = 10;
          (**(code **)(*piVar3 + 0x100))(&ppuStack_1c4);
          (**(code **)(*piVar3 + 0x74))(DAT_00e5a734 * 0.5,DAT_00e5a734);
          piVar8 = param_1;
          (**(code **)(*piVar3 + 0x5c))(1,param_1,uVar15);
          cVar2 = (char)((uint)piVar8 >> 0x18);
          (**(code **)(*piVar3 + 100))(1,param_1,0);
          if (cVar2 != '\0') {
            FUN_0069ce60(piVar3,0x40ffffff);
          }
          (**(code **)(*param_1 + 0xc))(piVar3,1);
          fStack_1d0 = DAT_00e5a734 * 0.5 + fStack_1d0;
        }
      }
      else {
        if (iStack_1cc == 2) {
          uVar9 = 0x20;
          ppuStack_1c4 = _malloc(0x20);
          _strncpy((char *)ppuStack_1c4,"ui/button_dummy_blue.dds",0x18);
          puStack_1c0 = (undefined *)0x18;
          *(char *)(ppuStack_1c4 + 6) = '\0';
          pvVar11 = (void *)param_1[0xd6];
          iVar18 = 0;
          iVar5 = 3;
          pvVar10 = (void *)FUN_005b2220(*(int *)((int)pvVar11 + 0xb4));
          iVar5 = FUN_005a76b0(pvVar10,iVar5,iVar18);
          if (((iVar5 != 0) && (pvVar11 != (void *)0x0)) &&
             (pvVar11 = (void *)FUN_004e0670(pvVar11,iVar5), pvVar11 != (void *)0x0)) {
            ppiVar13 = (int **)&stack0xfffffeb8;
            goto LAB_007ba70e;
          }
          goto LAB_007ba72a;
        }
        if (iStack_1cc == 3) {
          uVar9 = 0x20;
          ppuStack_1c4 = _malloc(0x20);
          _strncpy((char *)ppuStack_1c4,"ui/button_dummy_green.dds",0x19);
          puStack_1c0 = (undefined *)0x19;
          *(char *)((int)ppuStack_1c4 + 0x19) = '\0';
          pvVar11 = (void *)param_1[0xd6];
          iVar18 = 0;
          iVar5 = 2;
          pvVar10 = (void *)FUN_005b2220(*(int *)((int)pvVar11 + 0xb4));
          iVar5 = FUN_005a76b0(pvVar10,iVar5,iVar18);
          if (((iVar5 != 0) && (pvVar11 != (void *)0x0)) &&
             (pvVar11 = (void *)FUN_004e0670(pvVar11,iVar5), pvVar11 != (void *)0x0)) {
            ppiVar13 = (int **)&stack0xfffffeb4;
            goto LAB_007ba70e;
          }
          goto LAB_007ba72a;
        }
      }
      uStack_9c = CONCAT31(uStack_9c._1_3_,2);
      if (0x14 < uVar9) {
                    /* WARNING: Subroutine does not return */
        _free(ppuStack_1c4);
      }
      iStack_1cc = iStack_1cc + 1;
    } while (iStack_1cc < 4);
  }
  if (*(int *)(param_1[0xd6] + 0x1c0) != 4) goto LAB_007bacc4;
  cVar2 = FUN_004de210(param_1[0xd6]);
  if (cVar2 == '\0') {
    piVar3 = operator_new(0x360);
    piStack_198 = piVar3;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      ppuStack_1c4 = &puStack_1b8;
      puStack_1b8 = (undefined4 *)((uint)puStack_1b8 & 0xffffff00);
      puStack_1c0 = (undefined *)0x0;
      uVar9 = 0x20;
      ppuStack_1c4 = _malloc(0x20);
      _strncpy((char *)ppuStack_1c4,"ui/icons_thumb_good.dds",0x17);
      puStack_1c0 = (undefined *)0x17;
      *(char *)((int)ppuStack_1c4 + 0x17) = '\0';
      uStack_9c = CONCAT31(uStack_9c._1_3_,0x12);
      uStack_1a0 = 2;
      piStack_19c = (int *)&stack0xfffffe0c;
      piVar3 = FUN_0069d820(piVar3,&ppuStack_1c4,0,0,0x3f800000,0x3f800000);
    }
    if ((uStack_1a0 & 2) != 0) goto joined_r0x007bac68;
  }
  else {
    piVar3 = operator_new(0x360);
    piStack_198 = piVar3;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      ppuStack_1c4 = &puStack_1b8;
      puStack_1b8 = (undefined4 *)((uint)puStack_1b8 & 0xffffff00);
      puStack_1c0 = (undefined *)0x0;
      uVar9 = 0x20;
      ppuStack_1c4 = _malloc(0x20);
      _strncpy((char *)ppuStack_1c4,"ui/icons_thumb_bad.dds",0x16);
      puStack_1c0 = (undefined *)0x16;
      *(char *)((int)ppuStack_1c4 + 0x16) = '\0';
      uStack_9c = CONCAT31(uStack_9c._1_3_,0xf);
      piStack_19c = (int *)&stack0xfffffe0c;
      piVar3 = FUN_0069d820(piVar3,&ppuStack_1c4,0,0,0x3f800000,0x3f800000);
    }
    uStack_1a0 = 1;
joined_r0x007bac68:
    if (0x14 < uVar9) {
      uStack_9c = 2;
                    /* WARNING: Subroutine does not return */
      _free(ppuStack_1c4);
    }
  }
  uStack_9c = 2;
  (**(code **)(*piVar3 + 0x74))();
  (**(code **)(*piVar3 + 0x5c))(1);
  (**(code **)(*piVar3 + 100))(1,param_1,0);
  (**(code **)(*param_1 + 0xc))(piVar3,1);
  (**(code **)(param_1[0xd7] + 4))();
  param_1[0xdc] = (int)piVar3;
  (**(code **)param_1[0xd7])();
LAB_007bacc4:
  piVar3 = piStack_190;
  param_1[0xdf] = (int)fStack_1d0;
  (**(code **)(*piStack_190 + 0x5c))();
  (**(code **)(*piVar3 + 100))(1,param_1);
  do {
    cVar2 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar2 != '\0');
  (**(code **)(*param_1 + 0x84))(0);
  if (0x14 < uVar19) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBP);
  }
  if (10 < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar7);
  }
  ExceptionList = pvStack_c0;
  return;
}


//// FUNCTION FUN_007bad90 @ 007bad90 ////

int * __thiscall FUN_007bad90(void *this,int param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde624;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d55f1c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d55f00;
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
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(int *)((int)this + 0x378) = param_2;
  local_4 = 2;
  *(char *)((int)this + 0x374) = param_3;
  *(undefined4 *)((int)this + 0x37c) = 0;
  if (param_3 != '\0') {
    FUN_007b92c0(this);
    ExceptionList = local_c;
    return this;
  }
  FUN_007ba060(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007bae70 @ 007bae70 ////

undefined4 * __thiscall FUN_007bae70(void *this,byte param_1)

{
  FUN_007bae90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007bae90 @ 007bae90 ////

void __fastcall FUN_007bae90(undefined4 *param_1)

{
  param_1[0xd7] = &PTR_FUN_00d2d110;
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
  param_1[0xd1] = &PTR_FUN_00d1ec60;
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
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_007baf90 @ 007baf90 ////

void __cdecl FUN_007baf90(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d55e34;
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


//// FUNCTION FUN_007bb000 @ 007bb000 ////

int * __cdecl FUN_007bb000(int param_1,int param_2,char param_3)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde63b;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    this = operator_new(0x380);
    local_4 = 0;
    if (this != (void *)0x0) {
      piVar1 = FUN_007bad90(this,param_1,param_2,param_3);
      ExceptionList = local_c;
      return piVar1;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_007bb070 @ 007bb070 ////

void __cdecl FUN_007bb070(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d55e34;
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


//// FUNCTION FUN_007bb1c0 @ 007bb1c0 ////

undefined4 * FUN_007bb1c0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007bb070(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007bb1f0 @ 007bb1f0 ////

void FUN_007bb1f0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007b9f40(param_1);
  }
  return;
}


//// FUNCTION FUN_007bb220 @ 007bb220 ////

void FUN_007bb220(void)

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
  puStack_8 = &LAB_00cde658;
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


//// FUNCTION FUN_007bb2e0 @ 007bb2e0 ////

void __fastcall FUN_007bb2e0(int param_1)

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
    FUN_007b9f40(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007bb330 @ 007bb330 ////

void __thiscall FUN_007bb330(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cde678;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d55e34;
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
      FUN_007bb220();
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
        iVar3 = FUN_007b8f20((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007baf90(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007bb070(puVar5,param_2,(int)&local_34);
      FUN_007baf90((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007bb1f0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007baf90((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007bb1c0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007b9260(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007baf90((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007b9020((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007b9260(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_007bb680 @ 007bb680 ////

void __thiscall FUN_007bb680(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007bb6c5;
    }
  }
  iVar1 = 0;
LAB_007bb6c5:
  FUN_007bb330(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007bb6f0 @ 007bb6f0 ////

void __fastcall FUN_007bb6f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d56034;
  param_1[0x14] = &PTR_LAB_00d5601c;
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
  FUN_007bb2e0((int)(param_1 + 0xe0));
  FUN_007ad020(param_1);
  return;
}


//// FUNCTION FUN_007bb790 @ 007bb790 ////

void __thiscall FUN_007bb790(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007bb070(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007bb680(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007bb820 @ 007bb820 ////

undefined4 * __thiscall FUN_007bb820(void *this,byte param_1)

{
  FUN_007bb6f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007bb840 @ 007bb840 ////

void __thiscall FUN_007bb840(void *this,int param_1,int param_2,char param_3)

{
  int *piVar1;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_007bb000(param_1,param_2,param_3);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d55e34;
  if (piVar1 != (int *)0x0) {
    local_1c = piVar1 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  local_10 = piVar1;
  FUN_007bb790((void *)((int)this + 0x380),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_LAB_00d55e34;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = (int *)0x0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_007b9060(this,piVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007bb920 @ 007bb920 ////

void __fastcall FUN_007bb920(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float local_4;
  
  if (((*(int **)((int)param_1 + 0x35c) != (int *)0x0) &&
      (iVar3 = FUN_00ace790(*(int **)((int)param_1 + 0x35c),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                            &TM::CProjectObject::RTTI_Type_Descriptor,0), iVar3 != 0)) &&
     (iVar3 = FUN_005d1940(iVar3), iVar3 != 0)) {
    iVar1 = *(int *)(iVar3 + 0xac);
    FUN_005b25d0(iVar3);
    uVar6 = 0;
    iVar5 = 1;
    for (; iVar1 != iVar3 + 0xb8; iVar1 = *(int *)(iVar1 + 4)) {
      iVar2 = *(int *)(iVar1 + 8);
      if (iVar2 != 0) {
        pfVar4 = &local_4;
        this = (void *)FUN_004df4a0(iVar2);
        pfVar4 = (float *)FUN_004b58b0(this,pfVar4);
        if (*pfVar4 != 0.0) {
          FUN_007bb840(param_1,iVar2,iVar5,'\x01' - (uVar6 < DAT_00e5a73c));
          uVar6 = uVar6 + 1;
        }
      }
      iVar5 = iVar5 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_007bb9e0 @ 007bb9e0 ////

int * __thiscall FUN_007bb9e0(void *this,undefined4 param_1,int param_2,undefined1 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde6d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007acf80(this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR_FUN_00d56034;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5601c;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 **)((int)this + 0x39c) = (undefined4 *)((int)this + 0x390);
  *(undefined4 *)((int)this + 0x390) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  local_4 = 2;
  *(undefined4 *)((int)this + 0x378) = 4;
  FUN_007bb920(this);
  FUN_007acb90(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007bba90 @ 007bba90 ////

undefined4 * __fastcall FUN_007bba90(undefined4 *param_1)

{
  FUN_0089ea20(param_1);
  *param_1 = &PTR_FUN_00d56154;
  param_1[0x14] = &PTR_FUN_00d5613c;
  return param_1;
}


//// FUNCTION FUN_007bbac0 @ 007bbac0 ////

void __fastcall FUN_007bbac0(int *param_1)

{
  (**(code **)(*param_1 + 0x104))();
  (**(code **)(*param_1 + 0x108))();
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007bbae0 @ 007bbae0 ////

undefined4 * __thiscall FUN_007bbae0(void *this,byte param_1)

{
  thunk_FUN_0089eb00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007bbb10 @ 007bbb10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_007bbb10(void *this,undefined4 param_1,undefined4 param_2,int *param_3,undefined1 param_4)

{
  int *piVar1;
  undefined4 *this_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint **ppuVar6;
  float local_34;
  uint *local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde735;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007acf80(this,param_2,(int)param_3,param_4);
  piVar1 = (int *)((int)this + 0x380);
  *(undefined ***)this = &PTR_FUN_00d562b4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5629c;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(int **)((int)this + 0x38c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2dc34;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 **)((int)this + 0x3a4) = (undefined4 *)((int)this + 0x398);
  *(undefined4 *)((int)this + 0x398) = &PTR_LAB_00d2c758;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  this_00 = (undefined4 *)((int)this + 0x3b0);
  *this_00 = (undefined2 *)((int)this + 0x3bc);
  *(undefined2 *)((int)this + 0x3bc) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 10;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = param_1;
  _param_4 = operator_new(0x394);
  local_4._0_1_ = 4;
  if (_param_4 == (undefined4 *)0x0) {
    _param_4 = (undefined4 *)0x0;
  }
  else {
    FUN_0089ea20(_param_4);
    *_param_4 = &PTR_FUN_00d56154;
    _param_4[0x14] = &PTR_FUN_00d5613c;
  }
  local_4._0_1_ = 3;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x394) = _param_4;
  (**(code **)*piVar1)();
  *(undefined1 *)(*(int *)((int)this + 0x394) + 0x363) = 0;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"sitt_movie_root",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4._0_1_ = 5;
  FUN_0089e070(*(void **)((int)this + 0x394),&local_2c,0,1,'\x01');
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  uVar2 = FUN_00882710(*(void **)(*(int *)((int)this + 0x394) + 0x358),&local_34);
  if ((char)uVar2 != '\0') {
    (**(code **)(**(int **)((int)this + 0x394) + 0x74))(local_34,local_30);
    FUN_0089e5f0(*(void **)((int)this + 0x394),'\x01');
    (**(code **)(**(int **)((int)this + 0x394) + 100))(1,this,DAT_00e5a7ec);
    (**(code **)(**(int **)((int)this + 0x394) + 0x5c))(1,this,DAT_00e5a7e0);
    FUN_00881b80(*(void **)(*(int *)((int)this + 0x394) + 0x358),"icon",
                 (&PTR_DAT_00e5a7f0)[*(int *)((int)this + 0x3d8) * 8]);
  }
  FUN_0073f6e0(this,*(int **)((int)this + 0x394));
  iVar3 = FUN_008819d0(*(void **)(*(int *)((int)this + 0x394) + 0x358),"fg");
  iVar3 = FUN_00888870(*(int *)(iVar3 + 0x164));
  *(int *)((int)this + 0x3d4) = iVar3;
  puVar4 = (undefined4 *)(**(code **)(*param_3 + 0x5c))(&local_2c);
  FUN_004036d0(this_00,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  iVar3 = FUN_00ace790(param_3,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if ((iVar3 != 0) && (_DAT_0104d664 != 0.0)) {
    iVar3 = FUN_005d1940(iVar3);
    if (iVar3 != 0) {
      iVar5 = FUN_005b2130(iVar3);
      if (iVar5 != 0) {
        local_30 = &local_24;
        local_24 = local_24 & 0xffffff00;
        local_2c = (char *)0x0;
        local_28 = 0x14;
        _strncpy((char *)local_30,"",0);
        local_2c = (char *)0x0;
        *(char *)local_30 = '\0';
        ppuVar6 = &local_30;
        puStack_8._0_1_ = 6;
        iVar5 = FUN_005b2130(iVar3);
        puVar4 = (undefined4 *)FUN_004bd050(iVar5);
        uVar2 = FUN_00401ec0(puVar4,ppuVar6);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
        if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
          _free(local_30);
        }
        if ((char)uVar2 == '\0') {
          iVar3 = FUN_005b2130(iVar3);
          puVar4 = (undefined4 *)FUN_004bd050(iVar3);
          puVar4 = FUN_00568790(&local_30,puVar4);
          FUN_00403e70(this_00,puVar4);
          if (10 < local_28) {
                    /* WARNING: Subroutine does not return */
            _free(local_30);
          }
        }
        else {
          FUN_00403e90(this_00,L"(user or generated)");
        }
      }
    }
  }
  local_30 = &local_24;
  local_24 = local_24 & 0xffffff00;
  local_2c = (char *)0x0;
  local_28 = 0x14;
  _strncpy((char *)local_30,"$dummy",6);
  local_2c = (char *)0x6;
  *(char *)((int)local_30 + 6) = '\0';
  puStack_8._0_1_ = 7;
  FUN_0087f280(*(void **)(*(int *)(*(int *)((int)this + 0x394) + 0x358) + 0x178),&local_30,this_00,0
               ,0xff000000);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  FUN_0073f410(this,DAT_00e5a7e8);
  FUN_0073f490(this,DAT_00e5a7e4);
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_007bbf80 @ 007bbf80 ////

void __fastcall FUN_007bbf80(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cde772;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d562b4;
  param_1[0x14] = &PTR_LAB_00d5629c;
  puVar2 = (undefined4 *)param_1[0xeb];
  local_4 = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xe6] + 4))();
    param_1[0xeb] = 0;
    (**(code **)param_1[0xe6])();
  }
  if (10 < (uint)param_1[0xee]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xec]);
  }
  param_1[0xe6] = &PTR_LAB_00d2c758;
  if ((undefined4 *)param_1[0xe8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe8] = param_1[0xe7];
  }
  if (param_1[0xe7] != 0) {
    *(undefined4 *)(param_1[0xe7] + 4) = param_1[0xe8];
  }
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xeb] = 0;
  if ((undefined4 *)param_1[0xe8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe8] = param_1[0xe7];
  }
  if (param_1[0xe7] != 0) {
    *(undefined4 *)(param_1[0xe7] + 4) = param_1[0xe8];
  }
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe0] = &PTR_FUN_00d2dc34;
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
  local_4 = 0xffffffff;
  FUN_007ad020(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007bc110 @ 007bc110 ////

undefined4 * __thiscall FUN_007bc110(void *this,byte param_1)

{
  FUN_007bbf80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007bc150 @ 007bc150 ////

void __fastcall FUN_007bc150(int *param_1)

{
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0x84))(0);
  return;
}


//// FUNCTION FUN_007bc170 @ 007bc170 ////

void __thiscall FUN_007bc170(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_ESI;
  undefined4 uVar1;
  void *pvVar2;
  
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x5c))(1,this,param_3);
    pvVar2 = *(void **)((int)this + 0x394);
    if (pvVar2 == (void *)0x0) {
      uVar1 = 1;
      pvVar2 = this;
    }
    else {
      uVar1 = 2;
    }
    (**(code **)(*param_1 + 100))(uVar1,pvVar2,unaff_ESI);
    (**(code **)(*(int *)this + 0xc))(param_1,1);
    (**(code **)(*(int *)((int)this + 0x380) + 4))();
    *(int **)((int)this + 0x394) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x380))();
  }
  return;
}


//// FUNCTION FUN_007bc1e0 @ 007bc1e0 ////

void __fastcall FUN_007bc1e0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *unaff_ESI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde78b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x344);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar2 + 0x7c))(0x41200000);
  (**(code **)(*piVar2 + 0x78))(0x41200000);
  FUN_007bc170(param_1,piVar2,0,0);
  ExceptionList = unaff_ESI;
  return;
}


//// FUNCTION FUN_007bc270 @ 007bc270 ////

void __fastcall FUN_007bc270(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d563e4;
  param_1[0x14] = &PTR_LAB_00d563cc;
  param_1[0xe6] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xe8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe8] = param_1[0xe7];
  }
  if (param_1[0xe7] != 0) {
    *(undefined4 *)(param_1[0xe7] + 4) = param_1[0xe8];
  }
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xeb] = 0;
  if ((undefined4 *)param_1[0xe8] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe8] = param_1[0xe7];
  }
  if (param_1[0xe7] != 0) {
    *(undefined4 *)(param_1[0xe7] + 4) = param_1[0xe8];
  }
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe0] = &PTR_FUN_00d18c2c;
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
  FUN_007ad020(param_1);
  return;
}


//// FUNCTION FUN_007bc370 @ 007bc370 ////

void FUN_007bc370(void *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  uint unaff_EBX;
  int *piVar8;
  undefined4 local_dc;
  void *pvStack_cc;
  uint uStack_c4;
  wchar_t awStack_b8 [4];
  void *apvStack_b0 [2];
  uint uStack_a8;
  undefined4 uStack_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde7f7;
  local_c = ExceptionList;
  piVar8 = (int *)0x0;
  ExceptionList = &local_c;
  iVar1 = FUN_005762e0(param_1,param_2);
  if (iVar1 != 0) {
    puVar2 = operator_new(0x344);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      piVar8 = FUN_007432f0(puVar2);
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar8 + 0x78))();
    pvVar3 = operator_new(0x360);
    puStack_8 = (undefined1 *)0x1;
    if (pvVar3 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      puVar2 = FUN_004b6980(apvStack_b0,(float)(int)param_1 * 0.2);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      unaff_EBX = 1;
      piVar4 = FUN_0069d820(pvVar3,puVar2,0,0x3e800000,0x3f800000,0x3f400000);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    if (((unaff_EBX & 1) != 0) && (0x14 < uStack_a8)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_b0[0]);
    }
    (**(code **)(*piVar4 + 0x74))();
    (**(code **)(*piVar4 + 0x5c))(1);
    pvVar3 = (void *)0x1;
    (**(code **)(*piVar4 + 100))(1,piVar8,0xc0400000);
    (**(code **)(*piVar8 + 0xc))(piVar4,1);
    piVar4 = (int *)0x0;
    uVar5 = FUN_00ace02d(L"<nobr><x6>");
    FUN_004036d0(&stack0xffffff08,L"<nobr><x6>",uVar5);
    uStack_30 = 4;
    pwVar6 = (wchar_t *)FUN_00576340(param_1,param_2);
    sVar7 = _swprintf(awStack_b8,0xd18f7c,pwVar6);
    FUN_0040cae0(&stack0xffffff08,awStack_b8,sVar7);
    sVar7 = FUN_00ace02d((short *)&DAT_00d564e8);
    FUN_0040cae0(&stack0xffffff08,L" / ",sVar7);
    pwVar6 = (wchar_t *)FUN_005762e0(param_1,param_2);
    sVar7 = _swprintf(awStack_b8,0xd18f7c,pwVar6);
    FUN_0040cae0(&stack0xffffff08,awStack_b8,sVar7);
    sVar7 = FUN_00ace02d(L"</x6></nobr>");
    FUN_0040cae0(&stack0xffffff08,L"</x6></nobr>",sVar7);
    puVar2 = operator_new(0x3fc);
    uStack_30._0_1_ = 5;
    if (puVar2 != (undefined4 *)0x0) {
      piVar4 = FUN_00833290(puVar2);
    }
    uStack_30 = CONCAT31(uStack_30._1_3_,4);
    (**(code **)(*piVar4 + 0x54))(&stack0xffffff08);
    (**(code **)(*piVar4 + 100))(1,piVar8,0);
    (**(code **)(*piVar4 + 0x84))(0);
    FUN_0073e590(piVar4,*(int **)((int)pvVar3 + 0x3ac));
    (**(code **)(*piVar8 + 0xc))(piVar4,1);
    (**(code **)(*piVar8 + 0x8c))(0);
    local_dc = 0;
    if (0 < *(int *)((int)pvVar3 + 0x3b0)) {
      local_dc = 0x41000000;
    }
    FUN_007bc170(pvVar3,piVar8,local_dc,0);
    *(int *)((int)pvVar3 + 0x3b0) = *(int *)((int)pvVar3 + 0x3b0) + 1;
    if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_cc);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007bc690 @ 007bc690 ////

undefined4 * __thiscall FUN_007bc690(void *this,byte param_1)

{
  FUN_007bc270(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007bc6b0 @ 007bc6b0 ////

void __fastcall FUN_007bc6b0(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)FUN_00ace790(*(int **)(param_1 + 0x35c),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                                &TM::CStaff::RTTI_Type_Descriptor,0);
  if (pvVar1 != (void *)0x0) {
    iVar2 = 1;
    do {
      FUN_007bc370(pvVar1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  return;
}


//// FUNCTION FUN_007bc700 @ 007bc700 ////

int * __thiscall FUN_007bc700(void *this,undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  int *piVar9;
  float10 fVar10;
  void *pvStack_15c;
  int *piStack_158;
  wchar_t awStack_134 [2];
  undefined4 *puStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int *piStack_120;
  wchar_t awStack_100 [2];
  undefined4 uStack_fc;
  int *piStack_f8;
  undefined2 *puStack_b8;
  void *pvStack_b4;
  undefined4 uStack_b0;
  undefined2 auStack_ac [12];
  void *local_94;
  undefined1 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_4c;
  undefined1 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde8b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_94 = this;
  FUN_007acf80(this,param_1,param_2,param_3);
  piVar9 = (int *)0x0;
  *(undefined ***)this = &PTR_FUN_00d563e4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d563cc;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 **)((int)this + 0x38c) = (undefined4 *)((int)this + 0x380);
  *(undefined4 *)((int)this + 0x380) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x394) = 0;
  piVar4 = (int *)((int)this + 0x398);
  *(undefined4 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x39c) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(int **)((int)this + 0x3a4) = piVar4;
  *piVar4 = (int)&PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x378) = 3;
  puVar1 = operator_new(0x344);
  local_4._0_1_ = 3;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puVar1);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*piVar2 + 0x78))();
  puStack_b8 = auStack_ac;
  auStack_ac[0] = 0;
  pvStack_b4 = (void *)0x0;
  uStack_b0 = 10;
  uVar3 = FUN_00ace02d(L"<nobr><x4><translate>SITT_STUNTSHISTORY</translate></x4></nobr>");
  FUN_004036d0(&puStack_b8,L"<nobr><x4><translate>SITT_STUNTSHISTORY</translate></x4></nobr>",uVar3)
  ;
  puStack_8._0_1_ = 4;
  puVar1 = operator_new(0x3fc);
  puStack_8._0_1_ = 5;
  if (puVar1 != (undefined4 *)0x0) {
    piVar9 = FUN_00833290(puVar1);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
  (**(code **)(*piVar9 + 0x54))();
  FUN_0073e590(piVar9,piVar2);
  (**(code **)(*piVar9 + 100))();
  (**(code **)(*piVar9 + 0x84))();
  (**(code **)(*piVar2 + 0xc))();
  uVar3 = FUN_00ace02d(L"<nobr><x6><translate>SITT_DIFFICULTY</translate></x6></nobr>");
  piStack_f8 = (int *)0x7bc8b0;
  FUN_004036d0(&stack0xffffff2c,L"<nobr><x6><translate>SITT_DIFFICULTY</translate></x6></nobr>",
               uVar3);
  puVar1 = operator_new(0x3fc);
  uStack_24 = 6;
  if (puVar1 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_00833290(puVar1);
  }
  uStack_24 = 4;
  (**(code **)(*piVar9 + 0x54))();
  uStack_fc = 1;
  awStack_100[0] = L'죺';
  awStack_100[1] = L'{';
  piStack_f8 = piVar2;
  (**(code **)(*piVar9 + 0x5c))();
  awStack_100[0] = L'\0';
  awStack_100[1] = L'쀀';
  (**(code **)(*piVar9 + 100))();
  (**(code **)(*piVar9 + 0x84))();
  (**(code **)(*piVar2 + 0xc))();
  uVar3 = FUN_00ace02d(L"<nobr><x6><translate>SITT_SUCCESS</translate></x6></nobr>");
  piStack_120 = (int *)0x7bc93f;
  FUN_004036d0(&uStack_fc,L"<nobr><x6><translate>SITT_SUCCESS</translate></x6></nobr>",uVar3);
  puVar1 = operator_new(0x3fc);
  uStack_4c = 7;
  if (puVar1 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_00833290(puVar1);
  }
  uStack_4c = 4;
  (**(code **)(*piVar9 + 0x54))();
  uStack_124 = 2;
  uStack_128 = 0x7bc98d;
  piStack_120 = piVar2;
  (**(code **)(*piVar9 + 0x60))();
  uStack_128 = 0xc0000000;
  uStack_12c = 1;
  puStack_130 = (undefined4 *)0x2;
  awStack_134[0] = L'즠';
  awStack_134[1] = L'{';
  (**(code **)(*piVar9 + 100))();
  awStack_134[0] = L'\0';
  awStack_134[1] = L'\0';
  (**(code **)(*piVar9 + 0x84))();
  (**(code **)(*piVar4 + 4))();
  *(int **)((int)this + 0x3ac) = piVar9;
  (**(code **)*piVar4)();
  (**(code **)(*piVar2 + 0xc))();
  (**(code **)(*piVar2 + 0x8c))();
  FUN_007bc170(this,piVar2,0,0);
  FUN_007bc6b0((int)this);
  FUN_007acb90(this);
  puStack_130 = operator_new(0x3fc);
  uStack_78 = 8;
  if (puStack_130 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puStack_130);
  }
  uStack_78 = 4;
  uVar3 = FUN_00ace02d(L"<x6><table><tr><td width=");
  FUN_004036d0(&uStack_128,L"<x6><table><tr><td width=",uVar3);
  fVar10 = FUN_0073e630((int)this);
  sVar5 = _swprintf(awStack_100,0xd18f84,SUB84((double)fVar10,0));
  FUN_0040cae0(&uStack_128,awStack_100,sVar5);
  sVar5 = FUN_00ace02d(L" align=center>");
  FUN_0040cae0(&uStack_128,L" align=center>",sVar5);
  sVar5 = FUN_00ace02d(L"<hr>");
  FUN_0040cae0(&uStack_128,L"<hr>",sVar5);
  sVar5 = FUN_00ace02d(L"</td></tr></table></x6>");
  FUN_0040cae0(&uStack_128,L"</td></tr></table></x6>",sVar5);
  (**(code **)(*piVar4 + 0x54))();
  (**(code **)(*piVar4 + 0x84))();
  piStack_158 = (int *)0x7bcae4;
  FUN_007bc170(this,piVar4,0,0);
  puVar1 = operator_new(0x344);
  uStack_80 = 9;
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(puVar1);
  }
  iVar6 = *piVar4;
  uStack_80 = 4;
  (**(code **)(*piVar2 + 0x10))();
  (**(code **)(iVar6 + 0x78))();
  puVar1 = operator_new(0x3fc);
  uStack_84 = 10;
  if (puVar1 == (undefined4 *)0x0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = FUN_00833290(puVar1);
  }
  uStack_84 = 4;
  uVar3 = FUN_00ace02d(L"<nobr><x6><translate>SITT_TOTAL</translate></x6></nobr>");
  piStack_158 = (int *)0x7bcb76;
  FUN_004036d0(awStack_134,L"<nobr><x6><translate>SITT_TOTAL</translate></x6></nobr>",uVar3);
  (**(code **)(*piVar9 + 0x54))();
  uVar3 = 0;
  pvStack_15c = (void *)0x1;
  piStack_158 = piVar4;
  (**(code **)(*piVar9 + 0x5c))();
  (**(code **)(*piVar9 + 100))(1,piVar4);
  (**(code **)(*piVar9 + 0x84))(0);
  (**(code **)(*piVar4 + 0xc))(piVar9,1);
  iVar6 = FUN_00ace790(*(int **)((int)this + 0x35c),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar6 != 0) {
    puVar1 = operator_new(0x3fc);
    auStack_ac[0]._0_1_ = 0xb;
    if (puVar1 == (undefined4 *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = FUN_00833290(puVar1);
    }
    auStack_ac[0] = CONCAT11(auStack_ac[0]._1_1_,4);
    uVar7 = FUN_00ace02d(L"<nobr><x6>");
    FUN_004036d0(&pvStack_15c,L"<nobr><x6>",uVar7);
    pwVar8 = (wchar_t *)FUN_005763d0(iVar6);
    sVar5 = _swprintf(awStack_134,0xd18f7c,pwVar8);
    FUN_0040cae0(&pvStack_15c,awStack_134,sVar5);
    sVar5 = FUN_00ace02d((short *)&DAT_00d564e8);
    FUN_0040cae0(&pvStack_15c,L" / ",sVar5);
    pwVar8 = (wchar_t *)FUN_005763a0(iVar6);
    sVar5 = _swprintf(awStack_134,0xd18f7c,pwVar8);
    FUN_0040cae0(&pvStack_15c,awStack_134,sVar5);
    sVar5 = FUN_00ace02d(L"</x6></nobr>");
    FUN_0040cae0(&pvStack_15c,L"</x6></nobr>",sVar5);
    (**(code **)(*piVar9 + 0x54))(&pvStack_15c);
    (**(code **)(*piVar9 + 0x84))(0);
    FUN_0073e590(piVar9,*(int **)((int)this + 0x3ac));
    (**(code **)(*piVar9 + 100))(1,piVar4,0);
    (**(code **)(*piVar4 + 0xc))(piVar9,1);
    (**(code **)(*piVar4 + 0x8c))(0);
  }
  FUN_007bc170(this,piVar4,0,0);
  FUN_0073e590((void *)0x40000000,piVar2);
  if (uVar3 < 0xb) {
    ExceptionList = pvStack_b4;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_15c);
}


//// FUNCTION FUN_007bcd60 @ 007bcd60 ////

void __fastcall FUN_007bcd60(int *param_1)

{
  FUN_005e6f20((undefined4 *)param_1[0xfd]);
  FUN_0073fb40(param_1);
  return;
}


//// FUNCTION FUN_007bce10 @ 007bce10 ////

undefined4 * __thiscall
FUN_007bce10(void *this,undefined4 param_1,undefined4 param_2,int *param_3,void *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *this_00;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde904;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bbb10(this,param_1,param_2,param_3,(char)param_4);
  piVar6 = (int *)((int)this + 0x3dc);
  *(undefined ***)this = &PTR_FUN_00d5670c;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d566f4;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(int **)((int)this + 1000) = piVar6;
  *piVar6 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)((int)this + 0x37d) = 0;
  iVar2 = FUN_00ace790(param_3,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  (**(code **)(*piVar6 + 4))();
  *(int *)((int)this + 0x3f0) = iVar2;
  (**(code **)*piVar6)();
  iVar2 = FUN_005773c0(*(int *)((int)this + 0x3f0));
  if (iVar2 != 0) {
    param_4 = operator_new(0x4b8);
    local_4._0_1_ = 2;
    if (param_4 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007ac740(param_4,0,1);
    }
    local_4._0_1_ = 1;
    (**(code **)(*(int *)((int)this + 0x398) + 4))();
    *(undefined4 **)((int)this + 0x3ac) = puVar3;
    (*(code *)**(undefined4 **)((int)this + 0x398))();
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"moodbar_dummy",0xd);
    uStack_28 = 0xd;
    pcStack_2c[0xd] = '\0';
    local_4._0_1_ = 3;
    FUN_0087f320(*(void **)(*(int *)(*(int *)((int)this + 0x394) + 0x358) + 0x178),&pcStack_2c,
                 *(int *)(*(int *)((int)this + 0x3ac) + 0x358));
    local_4._0_1_ = 1;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
  }
  iVar2 = *(int *)((int)this + 0x3ac);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x400) == 1)) {
    uVar1 = *(undefined4 *)((int)this + 0x3f0);
    (**(code **)(*(int *)(iVar2 + 0x4a0) + 4))();
    *(undefined4 *)(iVar2 + 0x4b4) = uVar1;
    (*(code *)**(undefined4 **)(iVar2 + 0x4a0))();
  }
  FUN_0073f490(this,DAT_00e5a8b0);
  if (*(int **)((int)this + 0x3ac) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x3ac) + 0x110))();
  }
  iVar2 = FUN_008819d0(*(void **)(*(int *)((int)this + 0x394) + 0x358),"fg");
  if (iVar2 != 0) {
    iVar2 = FUN_008819d0(*(void **)(*(int *)((int)this + 0x394) + 0x358),"fg");
    iVar2 = FUN_00888870(*(int *)(iVar2 + 0x164));
    uVar8 = *(uint *)((int)this + 0x3d0);
    *(int *)((int)this + 0x3d4) = iVar2;
    pvVar4 = (void *)FUN_008819d0(*(void **)(*(int *)((int)this + 0x394) + 0x358),"fg");
    FUN_008887b0(pvVar4,uVar8);
  }
  pvVar4 = operator_new(0x34);
  local_4._0_1_ = 4;
  if (pvVar4 == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    iVar2 = *(int *)(*(int *)((int)this + 0x394) + 0x358);
    param_4 = (void *)(*(int *)((int)this + 0x3d0) / *(int *)((int)this + 0x3d4));
    iVar5 = *(int *)((int)this + 0x3f0);
    iVar7 = 2;
    this_00 = (void *)FUN_007fd5d0();
    iVar5 = FUN_007fea40(this_00,iVar5);
    piVar6 = FUN_005e7240(pvVar4,iVar2,iVar5,iVar7);
  }
  *(int **)((int)this + 0x3f4) = piVar6;
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((*(int *)((int)this + 0x394) != 0) && (*(void **)((int)this + 0x3f0) != (void *)0x0)) {
    FUN_00585ff0(*(void **)((int)this + 0x3f0),&param_4);
    FUN_005e7160(*(undefined4 **)((int)this + 0x3f4));
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007bd100 @ 007bd100 ////

void __fastcall FUN_007bd100(undefined4 *param_1)

{
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cde926;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d5670c;
  param_1[0x14] = &PTR_LAB_00d566f4;
  _Memory = (int *)param_1[0xfd];
  local_4 = 1;
  if (_Memory != (int *)0x0) {
    FUN_005e7000(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0xf7] = &PTR_FUN_00d16954;
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
  local_4 = 0xffffffff;
  FUN_007bbf80(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007bd1f0 @ 007bd1f0 ////

undefined4 * __thiscall FUN_007bd1f0(void *this,byte param_1)

{
  FUN_007bd100(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007bd210 @ 007bd210 ////

void __fastcall FUN_007bd210(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)param_1);
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_007bd250 @ 007bd250 ////

void FUN_007bd250(void)

{
  FUN_0043b700(&DAT_0104e858,0.0);
  return;
}


//// FUNCTION FUN_007bd260 @ 007bd260 ////

void __thiscall
FUN_007bd260(void *this,undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 5) = param_3;
  *(undefined1 *)((int)this + 6) = param_4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


//// FUNCTION FUN_007bd290 @ 007bd290 ////

undefined1 __thiscall FUN_007bd290(void *this,char param_1)

{
  if (param_1 != '\0') {
    return *(undefined1 *)((int)this + 5);
  }
  return *(undefined1 *)((int)this + 4);
}


//// FUNCTION FUN_007bd2b0 @ 007bd2b0 ////

void __thiscall FUN_007bd2b0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)this;
  return;
}


//// FUNCTION FUN_007bd2c0 @ 007bd2c0 ////

void __fastcall FUN_007bd2c0(void *param_1)

{
  FUN_0043b6e0(param_1,(float *)&DAT_0104e858);
  return;
}


//// FUNCTION FUN_007bd2d0 @ 007bd2d0 ////

undefined1 __fastcall FUN_007bd2d0(int param_1)

{
  return *(undefined1 *)(param_1 + 6);
}


//// FUNCTION FUN_007bd2e0 @ 007bd2e0 ////

undefined4 __thiscall FUN_007bd2e0(void *this,char param_1)

{
  if (param_1 != '\0') {
    return *(undefined4 *)((int)this + 0x10);
  }
  return *(undefined4 *)((int)this + 8);
}


//// FUNCTION FUN_007bd300 @ 007bd300 ////

undefined4 __thiscall FUN_007bd300(void *this,char param_1)

{
  if (param_1 != '\0') {
    return *(undefined4 *)((int)this + 0x14);
  }
  return *(undefined4 *)((int)this + 0xc);
}


//// FUNCTION FUN_007bd320 @ 007bd320 ////

void __thiscall FUN_007bd320(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return;
}


//// FUNCTION FUN_007bd340 @ 007bd340 ////

void __thiscall FUN_007bd340(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return;
}


//// FUNCTION FUN_007bd360 @ 007bd360 ////

void __thiscall FUN_007bd360(void *this,char param_1)

{
  if (param_1 != '\0') {
    *(undefined1 *)((int)this + 5) = 0;
    return;
  }
  *(undefined1 *)((int)this + 4) = 0;
  return;
}


//// FUNCTION FUN_007bd3b0 @ 007bd3b0 ////

void FUN_007bd3b0(void)

{
  FUN_0098f9e0(0x989790);
  FUN_0098fd30("MostRecentCeremonyViewed.YearInDays",&DAT_0104e858,3);
  return;
}


//// FUNCTION FUN_007bd3d0 @ 007bd3d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007bd3d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_1 + 6) != '\0') {
    uVar1 = FUN_0043b6e0(param_1,(float *)&DAT_00e4fa4c);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_0043b680(param_1,(float *)&DAT_0104e858);
      if ((char)uVar1 != '\0') {
        _DAT_0104e858 = *param_1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_007bd410 @ 007bd410 ////

void __fastcall FUN_007bd410(int *param_1)

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
  puStack_8 = &LAB_00cde938;
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


//// FUNCTION FUN_007bd4d0 @ 007bd4d0 ////

int __fastcall FUN_007bd4d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}


//// FUNCTION FUN_007bd540 @ 007bd540 ////

int __fastcall FUN_007bd540(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
}


//// FUNCTION FUN_007bd5c0 @ 007bd5c0 ////

int __fastcall FUN_007bd5c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 1;
}


//// FUNCTION FUN_007bd6a0 @ 007bd6a0 ////

void __cdecl FUN_007bd6a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 7;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 7; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_007bd6d0 @ 007bd6d0 ////

void __cdecl FUN_007bd6d0(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_007bd7b0 @ 007bd7b0 ////

void __cdecl FUN_007bd7b0(int param_1,int param_2,int param_3)

{
  if (3 < param_1) {
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,param_1,param_2,param_3);
    return;
  }
  if ((&DAT_01058f10)[param_1 * 0xe + param_2] != param_3) {
    (&DAT_01058f10)[param_1 * 0xe + param_2] = param_3;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,param_1,param_2,param_3);
  }
  return;
}


//// FUNCTION FUN_007bd950 @ 007bd950 ////

void __cdecl FUN_007bd950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -7;
    param_3 = param_3 + -7;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_007bd980 @ 007bd980 ////

void __cdecl FUN_007bd980(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _memmove((void *)(param_3 + iVar1 * -2),param_1,iVar1 * 2);
  return;
}


//// FUNCTION FUN_007bda90 @ 007bda90 ////

void * FUN_007bda90(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 1) * 2;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_007bdae0 @ 007bdae0 ////

void __cdecl FUN_007bdae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
      param_3[6] = param_1[6];
    }
    param_3 = param_3 + 7;
  }
  return;
}


//// FUNCTION FUN_007bdb70 @ 007bdb70 ////

undefined2 * FUN_007bdb70(undefined2 *param_1,int param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  return param_1 + param_2;
}


//// FUNCTION FUN_007bdba0 @ 007bdba0 ////

void __cdecl FUN_007bdba0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
      param_1[5] = param_3[5];
      param_1[6] = param_3[6];
    }
    param_1 = param_1 + 7;
  }
  return;
}


//// FUNCTION FUN_007bdc20 @ 007bdc20 ////

void __fastcall FUN_007bdc20(int param_1)

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


//// FUNCTION FUN_007bdca0 @ 007bdca0 ////

undefined4 * FUN_007bdca0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_007bdba0(param_1,param_2,param_3);
  return param_1 + param_2 * 7;
}


//// FUNCTION FUN_007bdcd0 @ 007bdcd0 ////

void __fastcall FUN_007bdcd0(int param_1)

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


//// FUNCTION FUN_007bdd00 @ 007bdd00 ////

void __fastcall FUN_007bdd00(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


//// FUNCTION FUN_007bdd40 @ 007bdd40 ////

void __thiscall FUN_007bdd40(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_30;
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
  puStack_c = &LAB_00cde950;
  local_10 = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_30 = *param_3;
  local_2c = param_3[1];
  local_28 = param_3[2];
  local_24 = param_3[3];
  local_20 = param_3[4];
  local_1c = param_3[5];
  local_18 = param_3[6];
  local_14 = &stack0xffffffc4;
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)((int)this + 0xc) - iVar2) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffc4;
    if (0x9249249U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_00703f90();
      uVar6 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (*(int *)((int)this + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x9249249 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_007bd4d0((int)this);
        uVar6 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar6 * 0x1c);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_007bdae0(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_007bdba0(puVar4,param_2,&local_30);
      FUN_007bdae0(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 7);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar6 * 7;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 7;
      *(undefined4 **)((int)this + 4) = puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar3 - (int)param_1) / 0x1c) < param_2) {
      FUN_007bdae0(param_1,puVar3,param_1 + param_2 * 7);
      local_8 = 2;
      FUN_007bdca0(*(undefined4 **)((int)this + 8),
                   param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1c,&local_30);
      iVar2 = *(int *)((int)this + 8) + param_2 * 0x1c;
      *(int *)((int)this + 8) = iVar2;
      FUN_007bd6a0(param_1,(undefined4 *)(iVar2 + param_2 * -0x1c),&local_30);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_007bdae0(puVar3 + param_2 * -7,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_007bd950(param_1,puVar3 + param_2 * -7,puVar3);
    FUN_007bd6a0(param_1,param_1 + param_2 * 7,&local_30);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007be030 @ 007be030 ////

void __thiscall FUN_007be030(void *this,undefined2 *param_1,uint param_2,ushort *param_3)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined2 *_Dst;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = *(int *)((int)this + 4);
  param_3 = (ushort *)(uint)*param_3;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar5 >> 1;
  }
  uVar6 = CONCAT44(iVar5,iVar1);
  if (param_2 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - iVar5 >> 1;
    }
    if (0x7fffffffU - iVar5 < param_2) {
      uVar6 = FUN_00703f20();
    }
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    uVar2 = (uint)uVar6;
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar5 >> 1;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x7fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar5 >> 1;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((int)this + 8) - iVar5 >> 1;
        }
        uVar2 = iVar5 + param_2;
      }
      pvVar3 = operator_new(uVar2 * 2);
      _Size = ((int)param_1 - (int)*(void **)((int)this + 4) >> 1) * 2;
      pvVar4 = _memmove(pvVar3,*(void **)((int)this + 4),_Size);
      _Dst = FUN_007bdb70((undefined2 *)((int)pvVar4 + _Size),param_2,(undefined2 *)&param_3);
      _memmove(_Dst,param_1,(*(int *)((int)this + 8) - (int)param_1 >> 1) << 1);
      pvVar4 = *(void **)((int)this + 4);
      if (pvVar4 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)pvVar4 >> 1;
      }
      if (pvVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvVar4);
      }
      *(void **)((int)this + 0xc) = (void *)(uVar2 * 2 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((int)pvVar3 + (param_2 + iVar5) * 2);
      *(void **)((int)this + 4) = pvVar3;
      return;
    }
    iVar5 = *(int *)((int)this + 8);
    if ((uint)(iVar5 - (int)param_1 >> 1) < param_2) {
      FUN_007bda90(param_1,iVar5,param_1 + param_2);
      FUN_007bdb70(*(undefined2 **)((int)this + 8),
                   param_2 - ((int)*(undefined2 **)((int)this + 8) - (int)param_1 >> 1),
                   (undefined2 *)&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 2;
      *(int *)((int)this + 8) = iVar5;
      FUN_007bd6d0(param_1,(undefined2 *)(iVar5 + param_2 * -2),(undefined2 *)&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -2);
    pvVar4 = FUN_007bda90(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_007bd980(param_1,(int)pvVar3,iVar5);
    FUN_007bd6d0(param_1,param_1 + param_2,(undefined2 *)&param_3);
  }
  return;
}


//// FUNCTION FUN_007be200 @ 007be200 ////

void __thiscall FUN_007be200(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x1c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x1c;
      goto LAB_007be249;
    }
  }
  iVar1 = 0;
LAB_007be249:
  FUN_007bdd40(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_007be2c0 @ 007be2c0 ////

int __fastcall FUN_007be2c0(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cde989;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_4 = 2;
  uStack_3 = 0;
  FUN_009910f0((undefined4 *)(param_1 + 0x30));
  _local_4 = CONCAT31(uStack_3,3);
  pvVar1 = FUN_0099bb50("ui/stipple.dds",0,0,0,'\0');
  *(undefined1 *)(param_1 + 0x3c) = 6;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0x24ffffff | 0x1a000000;
  if (*(void **)(param_1 + 0x48) != pvVar1) {
    Engine_SetResourceReference((undefined4 *)(param_1 + 0x30),(int)pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007be370 @ 007be370 ////

void __thiscall FUN_007be370(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x1c))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007bdba0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 7;
    return;
  }
  FUN_007be200(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007be450 @ 007be450 ////

void __thiscall FUN_007be450(void *this,undefined4 *param_1,undefined4 *param_2)

{
  FUN_0046eda0(this,param_1);
  FUN_0046eda0(this,param_2);
  return;
}


//// FUNCTION FUN_007be470 @ 007be470 ////

void __thiscall FUN_007be470(void *this,float *param_1,float *param_2)

{
  void *this_00;
  int iVar1;
  ushort *puVar2;
  bool bVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  float local_58;
  float local_54;
  uint local_50;
  float local_4c;
  int local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  int local_34;
  uint local_30;
  float local_2c;
  short local_28 [6];
  undefined4 local_1c [4];
  undefined4 local_c;
  
  local_4c = (float)(int)ROUND(*param_1);
  local_48 = (int)ROUND(param_1[1]);
  local_40 = (float)(int)ROUND(*param_2);
  local_34 = (int)ROUND(param_2[1]);
  bVar3 = 1e-05 <= ABS(*param_1 - *param_2);
  if (bVar3) {
    local_54 = 0.125;
    local_58 = (float)((int)local_40 - (int)local_4c) * 0.125;
  }
  else {
    local_58 = 0.125;
    local_54 = (float)(local_34 - local_48) * 0.125;
  }
  local_30 = (uint)bVar3;
  local_38 = (float)(uint)!bVar3;
  local_28[0] = 0;
  local_28[1] = 1;
  local_28[2] = 2;
  local_28[3] = 1;
  local_28[4] = 2;
  local_28[5] = 3;
  param_2 = (float *)0x0;
  this_00 = (void *)((int)this + 0x10);
  do {
    if (*(int *)((int)this + 0x14) == 0) {
      sVar5 = 0;
    }
    else {
      sVar5 = (short)((*(int *)((int)this + 0x18) - *(int *)((int)this + 0x14)) / 0x1c);
    }
    local_50 = (uint)(ushort)(local_28[(int)param_2] + sVar5);
    iVar1 = *(int *)((int)this + 0x24);
    if ((iVar1 == 0) ||
       ((uint)(*(int *)((int)this + 0x2c) - iVar1 >> 1) <=
        (uint)(*(int *)((int)this + 0x28) - iVar1 >> 1))) {
      FUN_007be030((void *)((int)this + 0x20),*(undefined2 **)((int)this + 0x28),1,
                   (ushort *)&local_50);
    }
    else {
      puVar2 = *(ushort **)((int)this + 0x28);
      *puVar2 = local_28[(int)param_2] + sVar5;
      *(ushort **)((int)this + 0x28) = puVar2 + 1;
    }
    param_2 = (float *)((int)param_2 + 1);
  } while ((int)param_2 < 6);
  local_c = 0xffffffff;
  FUN_007be370(this_00,local_1c);
  local_4c = (float)(int)local_4c;
  iVar1 = *(int *)((int)this + 0x18);
  fVar4 = (float)local_48;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  local_48 = 0;
  local_44 = 0;
  local_c = 0xffffffff;
  *(float *)(iVar1 + -0x1c) = local_4c;
  *(float *)(iVar1 + -0x18) = fVar4;
  *(undefined4 *)(*(int *)((int)this + 0x18) + -0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x18) + -0x10) = 0;
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  FUN_007be370(this_00,local_1c);
  iVar1 = *(int *)((int)this + 0x18);
  local_38 = (float)((int)local_40 + (int)local_38);
  *(undefined4 *)(iVar1 + -0x14) = 0;
  local_40 = local_58;
  local_3c = 0;
  local_c = 0xffffffff;
  *(float *)(iVar1 + -0x1c) = local_38;
  *(float *)(iVar1 + -0x18) = fVar4;
  *(undefined4 *)(*(int *)((int)this + 0x18) + -0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x18) + -0x10) = 0;
  iVar1 = *(int *)((int)this + 0x18);
  *(float *)(iVar1 + -8) = local_58;
  *(undefined4 *)(iVar1 + -4) = 0;
  FUN_007be370(this_00,local_1c);
  iVar1 = *(int *)((int)this + 0x18);
  iVar6 = local_34 + local_30;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  local_30 = 0;
  *(float *)(iVar1 + -0x1c) = local_4c;
  *(float *)(iVar1 + -0x18) = (float)iVar6;
  *(undefined4 *)(*(int *)((int)this + 0x18) + -0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x18) + -0x10) = 0;
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)(iVar1 + -8) = 0;
  *(float *)(iVar1 + -4) = local_54;
  local_2c = local_54;
  local_c = 0xffffffff;
  FUN_007be370(this_00,local_1c);
  iVar1 = *(int *)((int)this + 0x18);
  *(float *)(iVar1 + -0x1c) = local_38;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  *(float *)(iVar1 + -0x18) = (float)iVar6;
  *(undefined4 *)(*(int *)((int)this + 0x18) + -0xc) = 0xffffffff;
  *(undefined4 *)(*(int *)((int)this + 0x18) + -0x10) = 0;
  iVar1 = *(int *)((int)this + 0x18);
  *(float *)(iVar1 + -8) = local_58;
  *(float *)(iVar1 + -4) = local_54;
  return;
}


//// FUNCTION FUN_007be7a0 @ 007be7a0 ////

void __thiscall FUN_007be7a0(void *this,void *param_1)

{
  float *pfVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar1 = *(float **)((int)this + 4);
  if (pfVar1 != *(float **)((int)this + 8)) {
    do {
      local_10 = *pfVar1;
      local_c = pfVar1[1];
      local_18 = pfVar1[2];
      local_14 = pfVar1[3];
      pfVar1 = pfVar1 + 4;
      FUN_00747290(param_1,&local_10);
      FUN_00747290(param_1,&local_18);
      FUN_007be470(this,&local_10,&local_18);
    } while (pfVar1 != *(float **)((int)this + 8));
  }
  if (*(void **)((int)this + 4) == (void *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}


//// FUNCTION FUN_007be840 @ 007be840 ////

int __thiscall FUN_007be840(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  FUN_007be7a0(this,param_1);
  iVar4 = DAT_01058f28;
  iVar3 = DAT_01058f24;
  if (DAT_01058f28 != 1) {
    DAT_01058f28 = 1;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,1);
  }
  if (DAT_01058f24 != 1) {
    DAT_01058f24 = 1;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,1);
  }
  iVar5 = *(int *)((int)this + 0x48);
  if (((*(byte *)(iVar5 + 0x54) & 8) != 0) && (iVar5 = 0, *(int *)((int)this + 0x14) != 0)) {
    iVar6 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14);
    iVar5 = iVar6 * -0x6db6db6d;
    if ((iVar6 / 0x1c != 0) &&
       ((puVar1 = *(undefined4 **)((int)this + 0x24), puVar1 != (undefined4 *)0x0 &&
        (iVar5 = 0, *(int *)((int)this + 0x28) - (int)puVar1 >> 1 != 0)))) {
      if (puVar1 == (undefined4 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(int *)((int)this + 0x28) - (int)puVar1 >> 1;
      }
      puVar2 = *(undefined4 **)((int)this + 0x14);
      if (puVar2 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)((*(int *)((int)this + 0x18) - (int)puVar2) / 0x1c);
      }
      iVar5 = FUN_00a24a80(piVar7,puVar2,uVar8 / 3,puVar1);
    }
  }
  if (DAT_01058f28 != iVar4) {
    DAT_01058f28 = iVar4;
    iVar5 = (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,6,iVar4);
  }
  if (DAT_01058f24 != iVar3) {
    DAT_01058f24 = iVar3;
    iVar5 = (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,5,iVar3);
  }
  return iVar5;
}


//// FUNCTION FUN_007be9a0 @ 007be9a0 ////

undefined4 * __cdecl FUN_007be9a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (param_1 == *(int *)((int)&DAT_00e5a8e0 + uVar1)) {
      return &DAT_00e5a8e0 + iVar2 * 5;
    }
    uVar1 = uVar1 + 0x14;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x424);
  return &DAT_00e5a8e0;
}


//// FUNCTION FUN_007be9e0 @ 007be9e0 ////

undefined4 * __cdecl FUN_007be9e0(int param_1,int param_2,undefined4 *param_3)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cde9ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x360);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_0069d820(this,param_3,(float)param_1 * 0.125,(float)param_2 * 0.125,
                          (float)(param_1 + 1) * 0.125,(float)(param_2 + 1) * 0.125);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007bea90 @ 007bea90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_007bea90(void)

{
  bool bVar1;
  undefined4 *puVar2;
  
  if ((DAT_0104e89c & 1) == 0) {
    DAT_0104e89c = DAT_0104e89c | 1;
    DAT_0104e87c = &DAT_0104e888;
    DAT_0104e888 = 0;
    _DAT_0104e880 = 0;
    DAT_0104e884 = 0x20;
    DAT_0104e87c = _malloc(0x20);
    _strncpy(DAT_0104e87c,"ui\\lifetimeawards.dds",0x15);
    _DAT_0104e880 = 0x15;
    DAT_0104e87c[0x15] = '\0';
    _atexit(FUN_00d13180);
  }
  if ((DAT_0104e89c & 2) == 0) {
    DAT_0104e89c = DAT_0104e89c | 2;
    DAT_0104e85c = &DAT_0104e868;
    DAT_0104e868 = 0;
    _DAT_0104e860 = 0;
    DAT_0104e864 = 0x14;
    _strncpy(&DAT_0104e868,"ui\\awardstunts.dds",0x12);
    _DAT_0104e860 = 0x12;
    DAT_0104e85c[0x12] = 0;
    _atexit(FUN_00d13160);
  }
  bVar1 = FUN_00861ac0();
  puVar2 = &DAT_0104e85c;
  if (!bVar1) {
    puVar2 = &DAT_0104e87c;
  }
  return puVar2;
}


//// FUNCTION FUN_007beba0 @ 007beba0 ////

void __cdecl FUN_007beba0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_007be9a0(param_1);
  puVar2 = FUN_007bea90();
  FUN_007be9e0(puVar1[1],puVar1[2],puVar2);
  return;
}


//// FUNCTION FUN_007bebd0 @ 007bebd0 ////

void __cdecl FUN_007bebd0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_007be9a0(param_1);
  puVar2 = FUN_007bea90();
  FUN_007be9e0(puVar1[3],puVar1[4],puVar2);
  return;
}


//// FUNCTION FUN_007bedd0 @ 007bedd0 ////

void __cdecl FUN_007bedd0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x25);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x25);
  }
  return;
}


//// FUNCTION FUN_007bee60 @ 007bee60 ////

void __cdecl FUN_007bee60(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x25);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x25);
  }
  return;
}


//// FUNCTION FUN_007beff0 @ 007beff0 ////

void __thiscall FUN_007beff0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x25) == '\0') {
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


//// FUNCTION FUN_007bf050 @ 007bf050 ////

void __thiscall FUN_007bf050(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x25) == '\0') {
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


//// FUNCTION FUN_007bf0c0 @ 007bf0c0 ////

void __fastcall FUN_007bf0c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x25);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x25);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x25);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x25);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_007bf140 @ 007bf140 ////

void __fastcall FUN_007bf140(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x25) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x25);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x25);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x25) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x25) == '\0');
    if (*(char *)((int)piVar4 + 0x25) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_007bf250 @ 007bf250 ////

int * __fastcall FUN_007bf250(int *param_1)

{
  FUN_007bf0c0(param_1);
  return param_1;
}


//// FUNCTION FUN_007bf260 @ 007bf260 ////

void FUN_007bf260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    puVar1[5] = param_4[2];
    puVar1[6] = param_4[3];
    puVar1[7] = param_4[4];
    puVar1[8] = param_4[5];
    *(undefined1 *)(puVar1 + 9) = param_5;
    *(undefined1 *)((int)puVar1 + 0x25) = 0;
  }
  return;
}


//// FUNCTION FUN_007bf2c0 @ 007bf2c0 ////

int * __fastcall FUN_007bf2c0(int *param_1)

{
  FUN_007bf140(param_1);
  return param_1;
}


//// FUNCTION FUN_007bf2d0 @ 007bf2d0 ////

void FUN_007bf2d0(void)

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
  *(undefined1 *)(puVar1 + 9) = 1;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  return;
}


//// FUNCTION FUN_007bf320 @ 007bf320 ////

void FUN_007bf320(void *param_1)

{
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    FUN_007bf320(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_007bf360 @ 007bf360 ////

undefined4 * __cdecl FUN_007bf360(undefined4 *param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  ulonglong uVar6;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cde9e8;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  sVar1 = FUN_00ace02d(L"<e2><phrasebook>");
  FUN_0040cae0(&local_6c,L"<e2><phrasebook>",sVar1);
  uVar6 = FUN_0043b560();
  iVar2 = FUN_0085c570();
  bVar5 = (int)uVar6 != iVar2;
  uVar3 = FUN_0043b680(&stack0x00000008,(float *)&DAT_00e4fa4c);
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  if ((char)uVar3 == '\0') {
    if (bVar5) {
      uStack_44 = 0x14;
      _strncpy(acStack_40,"SITT_AWARDS_PAST",0x10);
      uStack_48 = 0x10;
      pcStack_4c[0x10] = '\0';
      local_4._0_1_ = 4;
      puVar4 = FUN_009b5030(apvStack_2c,&pcStack_4c);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
    else {
      uStack_44 = 0x20;
      pcStack_4c = _malloc(0x20);
      _strncpy(pcStack_4c,"SITT_AWARDS_CENTENNIALPAST",0x1a);
      uStack_48 = 0x1a;
      pcStack_4c[0x1a] = '\0';
      local_4._0_1_ = 3;
      puVar4 = FUN_009b5030(apvStack_2c,&pcStack_4c);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
  }
  else {
    uStack_44 = 0x20;
    if (bVar5) {
      pcStack_4c = _malloc(0x20);
      _strncpy(pcStack_4c,"SITT_AWARDS_UPCOMING",0x14);
      uStack_48 = 0x14;
      pcStack_4c[0x14] = '\0';
      local_4._0_1_ = 2;
      puVar4 = FUN_009b5030(apvStack_2c,&pcStack_4c);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
    else {
      pcStack_4c = _malloc(0x20);
      _strncpy(pcStack_4c,"SITT_AWARDS_CENTENNIALUPCOMING",0x1e);
      uStack_48 = 0x1e;
      pcStack_4c[0x1e] = '\0';
      local_4._0_1_ = 1;
      puVar4 = FUN_009b5030(apvStack_2c,&pcStack_4c);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (uStack_44 < 0x15) {
    sVar1 = FUN_00ace02d(L"<phrase key=date>");
    FUN_0040cae0(&local_6c,L"<phrase key=date>",sVar1);
    puVar4 = FUN_0043c090();
    FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
    sVar1 = FUN_00ace02d(L"</phrase>");
    FUN_0040cae0(&local_6c,L"</phrase>",sVar1);
    sVar1 = FUN_00ace02d(L"</phrasebook></e2>");
    FUN_0040cae0(&local_6c,L"</phrasebook></e2>",sVar1);
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    FUN_004036d0(param_1,local_6c,local_68);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    ExceptionList = pvStack_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_4c);
}


//// FUNCTION FUN_007bf6d0 @ 007bf6d0 ////

int * FUN_007bf6d0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [6];
  void *pvStack_54;
  uint local_4c [8];
  void *local_2c [2];
  uint local_24;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdea23;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_00ace02d((short *)&DAT_00d331c4);
  FUN_004036d0(&local_6c,L"e2",uVar1);
  local_4 = 0;
  puVar2 = FUN_007bf360(local_2c);
  local_4._0_1_ = 1;
  FUN_00831bd0(local_4c,&local_6c,puVar2);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4._0_1_ = 3;
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  puVar2 = operator_new(0x3fc);
  local_4._0_1_ = 5;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  piVar3[0xd5] = 0x43480000;
  (**(code **)(*piVar3 + 0x54))(local_4c);
  (**(code **)(*piVar3 + 0x84))(0);
  if (10 < local_4c[0]) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_54);
  }
  ExceptionList = pvStack_14;
  return piVar3;
}


//// FUNCTION FUN_007bf800 @ 007bf800 ////

void __thiscall FUN_007bf800(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x25) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_007bf870 @ 007bf870 ////

int * __fastcall FUN_007bf870(int *param_1)

{
  FUN_007bf0c0(param_1);
  return param_1;
}


//// FUNCTION FUN_007bf880 @ 007bf880 ////

int * __fastcall FUN_007bf880(int *param_1)

{
  FUN_007bf140(param_1);
  return param_1;
}


//// FUNCTION FUN_007bf890 @ 007bf890 ////

void __fastcall FUN_007bf890(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007bf2d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_007bf8d0 @ 007bf8d0 ////

void __fastcall FUN_007bf8d0(int param_1)

{
  FUN_007bf320(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_007bf920 @ 007bf920 ////

void __fastcall FUN_007bf920(void *param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint _Count;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar7;
  ulonglong uVar8;
  char *pcVar9;
  char acStack_64 [8];
  float local_5c;
  int local_58;
  void *local_54;
  wchar_t *local_50;
  uint uStack_4c;
  uint uStack_48;
  wchar_t awStack_44 [8];
  undefined1 auStack_34 [8];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdea40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_54 = param_1;
  uVar8 = FUN_00990ae0(param_1,param_2);
  local_50 = (wchar_t *)((int)uVar8 - DAT_0104e8a0);
  if ((wchar_t *)0x64 < local_50) {
    local_50 = (wchar_t *)0x64;
  }
  fVar2 = (float)(int)local_50;
  if ((int)local_50 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  DAT_0104e8a0 = (int)uVar8;
  *(float *)((int)param_1 + 0x360) = fVar2 * 0.0002 + *(float *)((int)param_1 + 0x360);
  local_58 = **(int **)((int)param_1 + 0x358);
  if ((int *)local_58 != *(int **)((int)param_1 + 0x358)) {
    do {
      iVar3 = local_58;
      piVar1 = *(int **)(local_58 + 0x18);
      if (piVar1 != (int *)0x0) {
        local_50 = *(wchar_t **)((int)local_54 + 0x360);
        fVar7 = FUN_004012c0((float)local_50);
        local_5c = (float)fVar7;
        iVar4 = (**(code **)(*piVar1 + 0x108))();
        *(float *)(iVar4 + 0xc) = local_5c;
      }
      uVar5 = FUN_0085f570();
      if (((char)uVar5 == '\0') ||
         (uVar8 = FUN_00990ae0(extraout_ECX,extraout_EDX), 0xf9 < (uint)((uVar8 & 0xffffffff) % 500)
         )) {
        pcVar9 = acStack_64 + 4;
        acStack_64[7] = 0xff;
        acStack_64[6] = 0xff;
        acStack_64[5] = 0xff;
        acStack_64[4] = 0xff;
      }
      else {
        pcVar9 = acStack_64;
        acStack_64[3] = 0xff;
        acStack_64[2] = 0xdb;
        acStack_64[1] = 0xe5;
        acStack_64[0] = -0xe;
      }
      FUN_00830550(*(void **)(iVar3 + 0x10),8,pcVar9);
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x58))(apvStack_2c);
      local_50 = awStack_44;
      puStack_8 = (undefined1 *)0x0;
      awStack_44[0] = L'\0';
      uStack_4c = 0;
      uStack_48 = 10;
      _Count = FUN_00ace02d((short *)&lpCaption_00d16918);
      if (uStack_48 <= _Count) {
        if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
          _free(local_50);
        }
        uVar6 = _Count + 0x20 >> 5;
        uStack_48 = uVar6 << 5;
        local_50 = _malloc(uVar6 * 0x40);
      }
      _wcsncpy(local_50,(wchar_t *)&lpCaption_00d16918,_Count);
      local_50[_Count] = L'\0';
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
      uStack_4c = _Count;
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x54))(&local_50);
      local_c = (void *)((uint)local_c & 0xffffff00);
      if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_54);
      }
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x54))(auStack_34);
      uStack_4 = 0xffffffff;
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      FUN_007bf0c0(&local_58);
    } while (local_58 != *(int *)((int)local_54 + 0x358));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007bfb50 @ 007bfb50 ////

void __thiscall FUN_007bfb50(void *this,float param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 unaff_EBX;
  void *local_4;
  
  local_4 = this;
  FUN_007bf800((void *)((int)this + 0x354),&local_4,(int *)&param_1);
  pvVar3 = local_4;
  if (local_4 != *(void **)((int)this + 0x358)) {
    piVar4 = (int *)FUN_007beba0((int)param_1);
    param_1 = *(float *)(*(int *)((int)pvVar3 + 0x14) + 0x9c) - *(float *)((int)this + 0x9c);
    (**(code **)(*piVar4 + 0x5c))
              (1,this,*(float *)(*(int *)((int)pvVar3 + 0x14) + 0xc0) - *(float *)((int)this + 0xc0)
              );
    (**(code **)(*piVar4 + 100))(1,this,unaff_EBX);
    (**(code **)(*piVar4 + 0x74))(0x42200000,0x42200000);
    puVar2 = *(undefined4 **)((int)pvVar3 + 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)((int)pvVar3 + 0x14) = 0;
    }
    *(int **)((int)pvVar3 + 0x14) = piVar4;
    (**(code **)(*(int *)this + 0xc))(piVar4,1);
  }
  return;
}


//// FUNCTION FUN_007bfc00 @ 007bfc00 ////

int __fastcall FUN_007bfc00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007bf2d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007bfc30 @ 007bfc30 ////

void __fastcall FUN_007bfc30(int *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  uint *_Dest;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_EBP;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uStack_b8;
  undefined1 uVar11;
  undefined4 uStack_8c;
  undefined4 local_88;
  int *local_84;
  undefined1 *local_80;
  float afStack_7c [2];
  char *pcStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  char acStack_68 [28];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [6];
  int *piStack_34;
  uint uStack_30;
  uint uStack_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdea7b;
  local_c = ExceptionList;
  local_80 = *(undefined1 **)param_1[0xd6];
  ExceptionList = &local_c;
  local_84 = param_1;
  if ((int *)local_80 != (int *)param_1[0xd6]) {
    do {
      puVar2 = local_80;
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      local_88 = 0;
      local_4 = 0;
      FUN_0085f4d0(*(int *)(local_80 + 0xc),&local_4c,(undefined1 *)((int)&uStack_8c + 3),&local_88)
      ;
      (**(code **)(**(int **)(puVar2 + 0x10) + 0x54))();
      (**(code **)(**(int **)(puVar2 + 0x10) + 0x84))();
      if ((char)((uint)unaff_EBP >> 0x18) == '\0') {
        puVar1 = *(undefined4 **)(puVar2 + 0x1c);
        if (puVar1 != (undefined4 *)0x0) {
          piVar4 = puVar1 + 0x12;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)*puVar1)();
          }
          *(undefined4 *)(puVar2 + 0x1c) = 0;
        }
      }
      else {
        piVar4 = *(int **)(puVar2 + 0x1c);
        if (piVar4 == (int *)0x0) {
          local_84 = operator_new(0x394);
          local_c._0_1_ = 1;
          if (local_84 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = FUN_0089ea20(local_84);
          }
          *(int **)(puVar2 + 0x1c) = piVar4;
          acStack_68[0] = '\0';
          uStack_70 = 0;
          uStack_6c = 0x20;
          pcStack_74 = acStack_68;
          pcStack_74 = _malloc(0x20);
          uStack_b8 = 0x7bfd3f;
          _strncpy(pcStack_74,"starrating_doublefill",0x15);
          uStack_70 = 0x15;
          pcStack_74[0x15] = '\0';
          local_c._0_1_ = 2;
          uStack_b8 = 0x7bfd6b;
          FUN_0089e070(piVar4,&pcStack_74,0,1,'\x01');
          local_c = (void *)((uint)local_c._1_3_ << 8);
          if (0x14 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_74);
          }
          FUN_00882710((void *)piVar4[0xd6],afStack_7c);
          (**(code **)(*piVar4 + 0x74))();
          FUN_0089e5f0(piVar4,'\x01');
          uStack_b8 = 2;
          (**(code **)(*piVar4 + 0x5c))();
          (**(code **)(*piVar4 + 100))();
          (**(code **)(*param_1 + 0xc))(piVar4,1);
        }
        uVar8 = FUN_00acd42c();
        FUN_00569d60(&piStack_34,(int)uVar8 / 10);
        uVar9 = uStack_30;
        local_80 = &stack0xffffff3c;
        _Dest = &uStack_b8;
        uStack_b8 = uStack_b8 & 0xffffff00;
        uVar10 = 0x14;
        local_84 = piStack_34;
        puVar3 = &stack0xffffff3c;
        if (0x13 < uStack_30) {
          uVar10 = uStack_30 + 0x20 & 0xffffffe0;
          _Dest = _malloc(uVar10);
          puVar3 = local_80;
        }
        local_80 = puVar3;
        _strncpy((char *)_Dest,(char *)local_84,uVar9);
        *(undefined1 *)((int)_Dest + uVar9) = 0;
        local_c._0_1_ = 3;
        pvVar5 = (void *)FUN_008819d0((void *)piVar4[0xd6],"fg");
        uVar10 = FUN_0088a2b0(pvVar5,_Dest,uVar9,uVar10);
        uVar9 = uVar10;
        pvVar5 = (void *)FUN_008819d0((void *)piVar4[0xd6],"fg");
        FUN_008887b0(pvVar5,uVar9);
        uVar11 = 7;
        pvVar5 = (void *)FUN_008819d0((void *)piVar4[0xd6],"fg");
        FUN_0088fd50(pvVar5,uVar10,uVar11);
        iVar6 = FUN_008819d0((void *)piVar4[0xd6],"bg");
        iVar6 = FUN_00888870(*(int *)(iVar6 + 0x164));
        uVar10 = iVar6 - 1;
        uVar9 = uVar10;
        pvVar5 = (void *)FUN_008819d0((void *)piVar4[0xd6],"bg");
        FUN_008887b0(pvVar5,uVar9);
        uVar11 = 7;
        pvVar5 = (void *)FUN_008819d0((void *)piVar4[0xd6],"bg");
        FUN_0088fd50(pvVar5,uVar10,uVar11);
        local_c = (void *)((uint)local_c._1_3_ << 8);
        param_1 = uStack_8c;
        if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_34);
        }
      }
      uVar7 = FUN_0085f540();
      if (((char)uVar7 != '\0') && (puVar2[0x20] == '\0')) {
        FUN_007bfb50(param_1,*(float *)(puVar2 + 0xc));
        puVar2[0x20] = 0;
      }
      iVar6 = **(int **)(puVar2 + 0x18);
      FUN_0085f540();
      (**(code **)(iVar6 + 0x20))();
      local_4 = 0xffffffff;
      if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      FUN_007bf0c0((int *)&local_80);
    } while (local_80 != (undefined1 *)param_1[0xd6]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007bfff0 @ 007bfff0 ////

void __fastcall FUN_007bfff0(int *param_1)

{
  uint uVar1;
  
  WWindow_Tick(param_1);
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xd1));
  if ((char)uVar1 != '\0') {
    FUN_007bfc30(param_1);
  }
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_007c0020 @ 007c0020 ////

void __thiscall
FUN_007c0020(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cdea98;
  local_c = ExceptionList;
  if (0xaaaaaa8 < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_007bf260(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x24);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x24) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[9] == '\0') {
LAB_007c011b:
        *(undefined1 *)(*piVar4 + 0x24) = 1;
        *(undefined1 *)(piVar5 + 9) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x24) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_007beff0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x24) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x24) = 0;
        FUN_007bf050(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[9] == '\0') goto LAB_007c011b;
      if (piVar6 == (int *)*piVar2) {
        FUN_007bf050(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x24) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x24) = 0;
      FUN_007beff0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x24);
  } while( true );
}


//// FUNCTION FUN_007c01d0 @ 007c01d0 ////

void __thiscall FUN_007c01d0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cdeab8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x25) != '\0') {
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
  FUN_007bf0c0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x25) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x25) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x25) == '\0') {
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
      iVar1 = param_2[9];
      *(char *)(param_2 + 9) = (char)_Memory[9];
      *(char *)(_Memory + 9) = (char)iVar1;
      goto LAB_007c0341;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x25) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x25) == '\0') {
      piVar2 = (int *)FUN_007bedd0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x25) == '\0') {
      uVar3 = FUN_007bee60((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_007c0341:
  if ((char)_Memory[9] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[9] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[9] == '\0') {
            *(undefined1 *)(piVar4 + 9) = 1;
            *(undefined1 *)(piVar5 + 9) = 0;
            FUN_007beff0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x25) == '\0') {
            if ((*(char *)(*piVar4 + 0x24) != '\x01') || (*(char *)(piVar4[2] + 0x24) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x24) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x24) = 1;
                *(undefined1 *)(piVar4 + 9) = 0;
                FUN_007bf050(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 9) = (char)piVar5[9];
              *(undefined1 *)(piVar5 + 9) = 1;
              *(undefined1 *)(piVar4[2] + 0x24) = 1;
              FUN_007beff0(this,(int)piVar5);
              break;
            }
LAB_007c0404:
            *(undefined1 *)(piVar4 + 9) = 0;
          }
        }
        else {
          if ((char)piVar4[9] == '\0') {
            *(undefined1 *)(piVar4 + 9) = 1;
            *(undefined1 *)(piVar5 + 9) = 0;
            FUN_007bf050(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x25) == '\0') {
            if ((*(char *)(piVar4[2] + 0x24) == '\x01') && (*(char *)(*piVar4 + 0x24) == '\x01'))
            goto LAB_007c0404;
            if (*(char *)(*piVar4 + 0x24) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x24) = 1;
              *(undefined1 *)(piVar4 + 9) = 0;
              FUN_007beff0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 9) = (char)piVar5[9];
            *(undefined1 *)(piVar5 + 9) = 1;
            *(undefined1 *)(*piVar4 + 0x24) = 1;
            FUN_007bf050(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 9) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_007c0490 @ 007c0490 ////

void __thiscall FUN_007c0490(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x25) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x25) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_007c0020(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_007bf140((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_007c0020(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007c0550 @ 007c0550 ////

void __thiscall FUN_007c0550(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_007bf320((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x25) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x25) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x25);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x25);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x25);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x25);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_007c01d0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_007c06a0 @ 007c06a0 ////

void __fastcall FUN_007c06a0(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdead8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d56924;
  param_1[0x14] = &PTR_FUN_00d56908;
  local_4 = 0;
  FUN_007c0550(param_1 + 0xd5,&local_10,*(int **)param_1[0xd6],(int *)param_1[0xd6]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xd6]);
}


//// FUNCTION FUN_007c0730 @ 007c0730 ////

int __fastcall FUN_007c0730(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007bf2d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007c0760 @ 007c0760 ////

undefined4 * __fastcall FUN_007c0760(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdeaf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d56924;
  param_1[0x14] = &PTR_FUN_00d56908;
  FUN_0043b440(param_1 + 0xd1,10);
  iVar1 = FUN_007bf2d0();
  param_1[0xd6] = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(undefined4 *)(param_1[0xd6] + 4) = param_1[0xd6];
  *(undefined4 *)param_1[0xd6] = param_1[0xd6];
  *(undefined4 *)(param_1[0xd6] + 8) = param_1[0xd6];
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007c07f0 @ 007c07f0 ////

undefined4 * __thiscall FUN_007c07f0(void *this,byte param_1)

{
  FUN_007c06a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c0810 @ 007c0810 ////

int * FUN_007c0810(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int *this;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int *this_00;
  int iVar8;
  size_t sVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  void *pvVar13;
  int *piVar14;
  uint uVar15;
  wchar_t *pwVar16;
  int *piVar17;
  void *this_01;
  float *this_02;
  char *pcVar18;
  float10 fVar19;
  wchar_t *pwStack_378;
  char acStack_34c [4];
  int *piStack_348;
  float fStack_344;
  undefined4 uStack_340;
  float fVar20;
  uint uVar21;
  int iVar22;
  float fStack_2ec;
  wchar_t *_Source;
  float *pfVar23;
  uint uStack_2cc;
  uint local_2c8;
  wchar_t awStack_2c4 [2];
  undefined4 *local_2c0;
  int *local_2bc;
  float fStack_2b8;
  ushort *puStack_2b0;
  undefined4 uStack_2ac;
  uint uStack_2a8;
  ushort auStack_2a4 [4];
  int **ppiStack_29c;
  undefined4 uStack_298;
  uint uStack_294;
  int *piStack_290;
  int *piStack_28c;
  wchar_t **ppwStack_288;
  undefined4 uStack_284;
  uint uStack_280;
  wchar_t *pwStack_27c;
  uint uStack_278;
  void **ppvStack_274;
  undefined4 uStack_270;
  uint uStack_26c;
  void *apvStack_268 [5];
  undefined4 uStack_254;
  undefined4 uStack_250;
  char *pcStack_24c;
  undefined4 uStack_248;
  uint uStack_244;
  char acStack_240 [20];
  wchar_t *pwStack_22c;
  uint uStack_228;
  uint uStack_224;
  float fStack_20c;
  int *piStack_208;
  void *pvStack_204;
  int *piStack_200;
  undefined4 uStack_1fc;
  void *apvStack_1f8 [2];
  uint uStack_1f0;
  undefined2 *puStack_1e0;
  undefined4 uStack_1dc;
  uint uStack_1d8;
  undefined2 auStack_1d4 [2];
  undefined **ppuStack_1d0;
  int iStack_1cc;
  int *piStack_1c8;
  undefined4 uStack_1bc;
  void *apvStack_1a8 [2];
  uint uStack_1a0;
  char acStack_188 [4];
  undefined **ppuStack_184;
  int iStack_180;
  int *piStack_17c;
  undefined4 uStack_170;
  void *pvStack_154;
  uint uStack_14c;
  wchar_t *pwStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined4 auStack_128 [5];
  void *apvStack_114 [2];
  uint uStack_10c;
  undefined4 auStack_f4 [3];
  void *apvStack_e8 [2];
  uint uStack_e0;
  void *pvStack_b8;
  void *apvStack_b4 [2];
  uint uStack_ac;
  undefined1 uStack_a0;
  void *apvStack_94 [2];
  uint uStack_8c;
  undefined1 uStack_7c;
  void *apvStack_74 [2];
  uint uStack_6c;
  void *apvStack_54 [2];
  uint uStack_4c;
  void *pvStack_40;
  undefined4 uStack_2c;
  char cStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdec55;
  pvStack_c = ExceptionList;
  local_2c8 = 0;
  ExceptionList = &pvStack_c;
  local_2c0 = operator_new(0x364);
  local_4 = 0;
  if (local_2c0 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_007c0760(local_2c0);
  }
  local_4 = 0xffffffff;
  local_2c0 = operator_new(0x344);
  local_4 = 1;
  if (local_2c0 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_007432f0(local_2c0);
  }
  local_4 = 0xffffffff;
  local_2bc = piVar5;
  (**(code **)(*piVar5 + 0x78))();
  (**(code **)(*this + 0x78))();
  FUN_0073e590(piVar5,this);
  bVar2 = false;
  bVar1 = true;
  (**(code **)(*piVar5 + 100))();
  do {
    cVar3 = (**(code **)(*this + 0x50))();
  } while (cVar3 != '\0');
  pcVar18 = "AWARDS_SCREEN_STUNTACHIEVEMENTAWARDS";
  if ((char)pvStack_c == '\0') {
    pcVar18 = "SITT_AWARDS_TITLE";
  }
  ppiStack_29c = &piStack_290;
  uStack_298 = 0;
  piStack_290 = (int *)((uint)piStack_290 & 0xffffff00);
  uStack_294 = 0x14;
  pcVar6 = pcVar18;
  do {
    cVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar3 != '\0');
  FUN_004015d0(&ppiStack_29c,pcVar18,(int)pcVar6 - (int)(pcVar18 + 1));
  uStack_18 = 2;
  FUN_009b5030(auStack_f4,&ppiStack_29c);
  if (0x14 < uStack_294) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_29c);
  }
  ppvStack_274 = apvStack_268;
  apvStack_268[0] = (void *)((uint)apvStack_268[0] & 0xffffff00);
  uStack_270 = 0;
  uStack_26c = 0x20;
  ppvStack_274 = _malloc(0x20);
  _strncpy((char *)ppvStack_274,"SITT_AWARDS_TOACHIEVE",0x15);
  uStack_270 = 0x15;
  *(char *)((int)ppvStack_274 + 0x15) = '\0';
  uStack_18._0_1_ = 5;
  FUN_009b5030(apvStack_114,&ppvStack_274);
  if (0x14 < uStack_26c) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_274);
  }
  auStack_1d4[0] = 0;
  uStack_1dc = 0;
  puStack_1e0 = auStack_1d4;
  uStack_248 = 0x324043;
  uStack_1d8 = 10;
  uVar7 = FUN_00ace02d((short *)&DAT_00d33224);
  FUN_004036d0(&puStack_1e0,L"e4",uVar7);
  uStack_18._0_1_ = 8;
  FUN_00831bd0(&pwStack_134,&puStack_1e0,auStack_f4);
  uStack_18 = CONCAT31(uStack_18._1_3_,10);
  if (10 < uStack_1d8) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_1e0);
  }
  FUN_004036d0(&stack0xfffffce8,pwStack_134,uStack_130);
  this_00 = FUN_00833680();
  (**(code **)(*this_00 + 100))();
  FUN_0073e590(this_00,piVar5);
  (**(code **)(*piVar5 + 0xc))();
  iVar8 = FUN_008666a0((char)_cStack_20);
  if ((int)(iVar8 + 1U) <= (int)((-(uint)(cStack_20 != '\0') & 0xfffffffa) + 9)) {
    pcVar18 = "STUNT";
    if (cStack_20 == '\0') {
      pcVar18 = "";
    }
    ppwStack_288 = &pwStack_27c;
    pwStack_27c = (wchar_t *)((uint)pwStack_27c & 0xffffff00);
    uStack_284 = 0;
    uStack_280 = 0x14;
    uStack_2c._0_1_ = 0xb;
    FUN_004073f0(&ppwStack_288,"AWARDS_SCREEN_",0xe);
    pcVar6 = pcVar18;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    FUN_004073f0(&ppwStack_288,pcVar18,(int)pcVar6 - (int)(pcVar18 + 1));
    FUN_004073f0(&ppwStack_288,"RANK_",5);
    sVar9 = _sprintf(acStack_188,(char *)&param_2_00d1b93c);
    FUN_004073f0(&ppwStack_288,acStack_188,sVar9);
    puVar10 = FUN_009b5030(apvStack_54,&ppwStack_288);
    puVar11 = FUN_0043bdc0(apvStack_94,L"<phrasebook>",auStack_128);
    puVar11 = FUN_0043be60(apvStack_74,puVar11,L"<phrase key=RANK>");
    puVar10 = FUN_00443250(apvStack_b4,puVar11,puVar10);
    uStack_340 = 0x7c0c3b;
    FUN_0043be60(apvStack_e8,puVar10,L"</phrase></phrasebook>");
    if (10 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_b4[0]);
    }
    if (10 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_74[0]);
    }
    if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_94[0]);
    }
    if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_54[0]);
    }
    if (0x14 < uStack_280) {
                    /* WARNING: Subroutine does not return */
      _free(ppwStack_288);
    }
    puStack_2b0 = auStack_2a4;
    auStack_2a4[0] = 0;
    uStack_2ac = 0;
    uStack_2a8 = 10;
    uVar7 = FUN_00ace02d((short *)&DAT_00d331c4);
    FUN_004036d0(&puStack_2b0,L"e2",uVar7);
    uStack_2c._0_1_ = 0xe;
    FUN_00831bd0((undefined4 *)&stack0xfffffcd8,&puStack_2b0,apvStack_e8);
    piVar5 = FUN_00833750();
    uStack_2c._0_1_ = 0xd;
    if (10 < uStack_2a8) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_2b0);
    }
    (**(code **)(*piVar5 + 100))();
    FUN_0073e590(piVar5,(int *)0x1);
    (**(code **)(iRam00000001 + 0xc))();
    fStack_2ec = ((float)piVar5[0x39] - (float)this[0x27]) + 5.0;
    iVar22 = 0x1000000;
    puVar12 = FUN_00867060(iVar8 + 1U,(char)_cStack_20);
    pfVar23 = *(float **)(puVar12 + 4);
    if (pfVar23 != *(float **)(puVar12 + 8)) {
      uStack_254 = 0;
      uStack_250 = 0;
      pvStack_b8 = (void *)((uint)pvStack_b8 & 0xffffff00);
      do {
        cVar3 = (char)((uint)iVar22 >> 0x18);
        piStack_28c = (int *)0x0;
        if (cVar3 != '\0') {
          pvVar13 = operator_new(0x360);
          apvStack_268[0] = pvVar13;
          if (pvVar13 == (void *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            pcStack_24c = acStack_240;
            acStack_240[0] = '\0';
            uStack_248 = 0;
            uStack_244 = 0x20;
            pcStack_24c = _malloc(0x20);
            _strncpy(pcStack_24c,"ui/achievewin_div.dds",0x15);
            uStack_248 = 0x15;
            pcStack_24c[0x15] = '\0';
            bVar1 = true;
            uStack_2c = CONCAT31(uStack_2c._1_3_,0x10);
            piVar5 = FUN_0069d820(pvVar13,&pcStack_24c,0,0,0x3f800000,0x3f800000);
          }
          uStack_2c._0_1_ = 0xd;
          uStack_2c._1_3_ = 0;
          piStack_28c = piVar5;
          if ((bVar1) && (bVar1 = false, 0x14 < uStack_244)) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_24c);
          }
          iVar8 = *piVar5;
          (**(code **)(*this + 0x10))();
          (**(code **)(iVar8 + 0x74))();
          (**(code **)(*piVar5 + 0x5c))();
          (**(code **)(*piVar5 + 100))();
          (**(code **)(*this + 0xc))();
        }
        pvVar13 = operator_new(0x360);
        apvStack_268[0] = pvVar13;
        if (pvVar13 == (void *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          puStack_2b0 = auStack_2a4;
          auStack_2a4[0] = auStack_2a4[0] & 0xff00;
          uStack_2ac = 0;
          uStack_2a8 = 0x20;
          puStack_2b0 = _malloc(0x20);
          _strncpy((char *)puStack_2b0,"ui/lifetimeawards_glow.dds",0x1a);
          uStack_2ac = 0x1a;
          *(char *)(puStack_2b0 + 0xd) = '\0';
          bVar2 = true;
          uStack_2c = CONCAT31(uStack_2c._1_3_,0x13);
          piVar5 = FUN_0069d820(pvVar13,&puStack_2b0,0,0,0x3f800000,0x3f800000);
        }
        uStack_2c = 0xd;
        if ((bVar2) && (bVar2 = false, 0x14 < uStack_2a8)) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_2b0);
        }
        (**(code **)(*piVar5 + 0x5c))();
        (**(code **)(*piVar5 + 100))();
        (**(code **)(*piVar5 + 0x74))();
        fVar20 = 1.4013e-45;
        piVar17 = piVar5;
        (**(code **)(*this + 0xc))();
        ppwStack_288 = (wchar_t **)this[0xd8];
        fVar19 = FUN_004012c0((float)ppwStack_288);
        fStack_2b8 = (float)fVar19;
        iVar8 = (**(code **)(*piVar5 + 0x108))();
        *(float *)(iVar8 + 0xc) = fStack_2b8;
        iVar8 = (**(code **)(*piVar5 + 0x108))();
        *(wchar_t **)(iVar8 + 0x28) = pwStack_27c;
        *(uint *)(iVar8 + 0x2c) = uStack_278;
        piVar14 = (int *)FUN_007bebd0(*this_00);
        piStack_290 = piVar14;
        (**(code **)(*piVar14 + 0x74))();
        uStack_340 = 1;
        fStack_344 = 1.1393571e-38;
        (**(code **)(*piVar14 + 0x5c))();
        fStack_344 = fVar20 + 4.0;
        acStack_34c[0] = '\x01';
        acStack_34c[1] = '\0';
        acStack_34c[2] = '\0';
        acStack_34c[3] = '\0';
        piStack_348 = this;
        (**(code **)(*piVar14 + 100))();
        (**(code **)(*this + 0xc))();
        pwVar16 = (wchar_t *)&stack0xfffffcec;
        uVar21 = 10;
        uVar7 = FUN_00ace02d((short *)&DAT_00d33190);
        if (uVar21 <= uVar7) {
          if (10 < uVar21) {
                    /* WARNING: Subroutine does not return */
            _free(pwVar16);
          }
          uVar15 = uVar7 + 0x20 >> 5;
          uVar21 = uVar15 << 5;
          pwVar16 = _malloc(uVar15 * 0x40);
        }
        _wcsncpy(pwVar16,L"e3",uVar7);
        pwVar16[uVar7] = L'\0';
        uStack_7c = 0x15;
        piVar17 = FUN_0085f360((int *)apvStack_1f8,*piVar17);
        uStack_7c = 0x16;
        FUN_008319b0(&pwStack_27c,(undefined4 *)&stack0xfffffce0,piVar17);
        uVar7 = uStack_278;
        if (10 < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_1f8[0]);
        }
        uStack_7c = 0x18;
        if (10 < uVar21) {
                    /* WARNING: Subroutine does not return */
          _free(pwVar16);
        }
        pwStack_378 = (wchar_t *)&stack0xfffffc94;
        pwVar16 = pwStack_27c;
        if (9 < uStack_278) {
          pwStack_378 = _malloc((uStack_278 + 0x20 >> 5) * 0x40);
        }
        _wcsncpy(pwStack_378,pwVar16,uVar7);
        pwStack_378[uVar7] = L'\0';
        piVar17 = FUN_00833750();
        (**(code **)(*piVar17 + 100))();
        (**(code **)(*piVar17 + 0x5c))();
        (**(code **)(*piVar17 + 0x84))();
        (**(code **)(*this + 0xc))();
        puVar10 = operator_new(0x3fc);
        uStack_a0 = 0x1a;
        if (puVar10 == (undefined4 *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14 = FUN_00833290(puVar10);
        }
        uStack_a0 = 0x18;
        acStack_34c[0] = -1;
        acStack_34c[1] = -1;
        acStack_34c[2] = -1;
        acStack_34c[3] = -1;
        FUN_00830550(piVar14,8,acStack_34c);
        FUN_00830550(piVar14,6,"default");
        uStack_2cc = 10;
        FUN_00830550(piVar14,7,(char *)&uStack_2cc);
        fVar19 = (float10)(**(code **)(*this + 0x10))();
        piVar14[0xd5] = (int)(float)fVar19;
        *(undefined1 *)(piVar14 + 0xd6) = 1;
        (**(code **)(*piVar14 + 0x84))(0);
        (**(code **)(*piVar14 + 0x5c))(1,piVar17,0);
        (**(code **)(*piVar14 + 100))(2,piVar17,0xc0a00000);
        (**(code **)(*this + 0xc))(piVar14,1);
        fVar20 = ((float)piVar14[0x39] - fStack_2ec) + 20.0;
        if (fVar20 < 48.0) {
          fVar20 = 48.0;
        }
        if (piStack_28c != (int *)0x0) {
          (**(code **)(*piStack_28c + 0x7c))();
        }
        fStack_20c = *pfVar23;
        uStack_1fc = 0;
        pvStack_204 = apvStack_268[0];
        apvStack_1f8[0] = pvStack_b8;
        piStack_208 = piVar14;
        piStack_200 = piVar5;
        FUN_007c0490(this + 0xd5,apvStack_268,(int *)&fStack_20c);
        fStack_2ec = fVar20 + fStack_2ec;
        iVar22 = (uint)(cVar3 == '\0') << 0x18;
        pvVar13 = FUN_00857bd0(acStack_188);
        uStack_2c._0_1_ = 0x1b;
        this_01 = FUN_00857d80(auStack_1d4);
        uStack_2c._0_1_ = 0x1c;
        this_02 = FUN_00857b30(this_01,*pfVar23);
        bVar4 = FUN_00856dd0(this_02,(int)pvVar13);
        ppuStack_1d0 = &PTR_FUN_00d1aed0;
        if (piStack_1c8 != (int *)0x0) {
          *piStack_1c8 = iStack_1cc;
        }
        if (iStack_1cc != 0) {
          *(int **)(iStack_1cc + 4) = piStack_1c8;
        }
        uStack_1bc = 0;
        iStack_1cc = 0;
        piStack_1c8 = (int *)0x0;
        uStack_2c._0_1_ = 0x18;
        ppuStack_184 = &PTR_FUN_00d1aed0;
        if (piStack_17c != (int *)0x0) {
          *piStack_17c = iStack_180;
        }
        if (iStack_180 != 0) {
          *(int **)(iStack_180 + 4) = piStack_17c;
        }
        uStack_170 = 0;
        iStack_180 = 0;
        piStack_17c = (int *)0x0;
        if (bVar4) {
          FUN_007bfb50(this,*pfVar23);
        }
        uStack_2c._0_1_ = 0xd;
        if (10 < uStack_224) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_22c);
        }
        pfVar23 = pfVar23 + 1;
      } while (pfVar23 != *(float **)(puVar12 + 8));
    }
    uStack_2c = CONCAT31(uStack_2c._1_3_,10);
    if (10 < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_e8[0]);
    }
  }
  if (cStack_20 == '\0') {
    pwVar16 = awStack_2c4;
    awStack_2c4[0] = L'\0';
    uStack_2cc = 0;
    local_2c8 = 10;
    uVar7 = FUN_00ace02d((short *)&DAT_00d331c4);
    if (local_2c8 <= uVar7) {
      if (10 < local_2c8) {
                    /* WARNING: Subroutine does not return */
        _free(pwVar16);
      }
      uVar21 = uVar7 + 0x20 >> 5;
      local_2c8 = uVar21 << 5;
      pwVar16 = _malloc(uVar21 * 0x40);
    }
    _wcsncpy(pwVar16,L"e2",uVar7);
    pwVar16[uVar7] = L'\0';
    uStack_2c._0_1_ = 0x1d;
    uStack_2cc = uVar7;
    puVar10 = FUN_007bf360(apvStack_1a8);
    uStack_2c._0_1_ = 0x1e;
    FUN_00831bd0(&pwStack_22c,(undefined4 *)&stack0xfffffd30,puVar10);
    if (10 < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_1a8[0]);
    }
    uStack_2c._0_1_ = 0x20;
    if (10 < local_2c8) {
                    /* WARNING: Subroutine does not return */
      _free(pwVar16);
    }
    pwVar16 = (wchar_t *)&stack0xfffffce4;
    _Source = pwStack_22c;
    if (9 < uStack_228) {
      pwVar16 = _malloc((uStack_228 + 0x20 & 0xffffffe0) * 2);
    }
    _wcsncpy(pwVar16,_Source,uStack_228);
    pwVar16[uStack_228] = L'\0';
    piVar5 = FUN_00833750();
    (**(code **)(*piVar5 + 100))();
    FUN_0073e590(piVar5,(int *)0x43e60000);
    (**(code **)(iRam43e60000 + 0xc))();
    uStack_2c = CONCAT31(uStack_2c._1_3_,10);
    if (10 < uStack_224) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_22c);
    }
  }
  (**(code **)(iRam43e60000 + 0x8c))();
  (**(code **)(*this + 0xc))();
  FUN_007bfc30(this);
  if (10 < uStack_14c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_154);
  }
  if (uStack_12c < 0xb) {
    if (uStack_10c < 0xb) {
      ExceptionList = pvStack_40;
      return this;
    }
                    /* WARNING: Subroutine does not return */
    _free(apvStack_114[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(pwStack_134);
}


//// FUNCTION FUN_007c1780 @ 007c1780 ////

void FUN_007c1780(void)

{
  if ((DAT_0104a974 != 0) &&
     ((*(float *)(DAT_0104a974 + 0x78) == 1.0 || (*(float *)(DAT_0104a974 + 0x78) == 3.0)))) {
    FUN_007c0810();
    return;
  }
  FUN_007bf6d0();
  return;
}


//// FUNCTION FUN_007c1800 @ 007c1800 ////

void __fastcall FUN_007c1800(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x480));
}


//// FUNCTION FUN_007c1820 @ 007c1820 ////

void __fastcall FUN_007c1820(int param_1)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(param_1 + 0x488) / (float)*(int *)(param_1 + 0x484);
  *(float *)(param_1 + 0x9c) =
       (*(float *)(param_1 + 0x410) - *(float *)(param_1 + 0x380)) * fVar1 +
       *(float *)(param_1 + 0x380);
  *(float *)(param_1 + 0xe4) =
       (*(float *)(param_1 + 0x458) - *(float *)(param_1 + 0x3c8)) * fVar1 +
       *(float *)(param_1 + 0x3c8);
  *(float *)(param_1 + 0xc0) =
       (*(float *)(param_1 + 0x434) - *(float *)(param_1 + 0x3a4)) * fVar1 +
       *(float *)(param_1 + 0x3a4);
  *(float *)(param_1 + 0x108) =
       (*(float *)(param_1 + 0x47c) - *(float *)(param_1 + 0x3ec)) * fVar1 +
       *(float *)(param_1 + 0x3ec);
  return;
}


//// FUNCTION FUN_007c19a0 @ 007c19a0 ////

undefined4 * __fastcall FUN_007c19a0(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d56aec;
  param_1[0x14] = &PTR_FUN_00d56ad0;
  return param_1;
}


//// FUNCTION FUN_007c19c0 @ 007c19c0 ////

undefined4 * __thiscall FUN_007c19c0(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c19e0 @ 007c19e0 ////

int * __thiscall FUN_007c19e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007c1a20 @ 007c1a20 ////

int * __thiscall FUN_007c1a20(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007c1c40 @ 007c1c40 ////

void __fastcall FUN_007c1c40(int *param_1)

{
  int *piVar1;
  
  if ((char)param_1[0x123] != '\0') {
    piVar1 = param_1 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_1)(1);
    }
    return;
  }
  FUN_0053d480((int)param_1);
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007c1d10 @ 007c1d10 ////

void __fastcall FUN_007c1d10(int *param_1)

{
  char cVar1;
  
  (**(code **)(*(int *)param_1[0xdc] + 0x20))(1);
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_007c1e90 @ 007c1e90 ////

void __cdecl FUN_007c1e90(int *param_1,int param_2,int param_3,int *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_2;
    return;
  }
  do {
    if (*(int *)(param_2 + 0x14) == *param_4) break;
    param_2 = param_2 + 0x18;
  } while (param_2 != param_3);
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007c1f20 @ 007c1f20 ////

void __fastcall FUN_007c1f20(undefined4 *param_1)

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


//// FUNCTION FUN_007c1f70 @ 007c1f70 ////

undefined4 * __thiscall FUN_007c1f70(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  (**(code **)(*(int *)((int)this + 4) + 4))();
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  (*(code *)**(undefined4 **)((int)this + 4))();
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  (**(code **)(*(int *)((int)this + 0x28) + 4))();
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  (*(code *)**(undefined4 **)((int)this + 0x28))();
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  (**(code **)(*(int *)((int)this + 0x4c) + 4))();
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  (*(code *)**(undefined4 **)((int)this + 0x4c))();
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  (**(code **)(*(int *)((int)this + 0x70) + 4))();
  *(undefined4 *)((int)this + 0x84) = param_1[0x21];
  (*(code *)**(undefined4 **)((int)this + 0x70))();
  *(undefined4 *)((int)this + 0x88) = param_1[0x22];
  *(undefined4 *)((int)this + 0x8c) = param_1[0x23];
  return this;
}


//// FUNCTION FUN_007c2030 @ 007c2030 ////

void __cdecl FUN_007c2030(int *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  wchar_t *_Format;
  int iVar1;
  int *this;
  size_t sVar2;
  int *this_00;
  void *unaff_EBP;
  float10 fVar3;
  wchar_t *local_54;
  undefined4 *local_50;
  wchar_t local_4c [8];
  wchar_t local_3c [2];
  float fStack_38;
  void *pvStack_34;
  undefined2 *puStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined2 auStack_24 [2];
  undefined4 *puStack_20;
  undefined4 *puStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdec86;
  pvStack_c = ExceptionList;
  _Format = (wchar_t *)(int)ROUND((1.0 - param_4) * 255.0);
  local_50 = (undefined4 *)(param_4 * 255.0);
  local_54 = (wchar_t *)(int)ROUND((float)local_50);
  ExceptionList = &pvStack_c;
  _swprintf(local_4c,0xd56c70,_Format);
  _swprintf(local_3c,0xd56c70,local_54);
  local_50 = operator_new(0x3fc);
  local_4 = 0;
  if (local_50 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00833290(local_50);
  }
  iVar1 = *this;
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0x10))();
  (**(code **)(iVar1 + 0x78))();
  puStack_30 = auStack_24;
  auStack_24[0] = 0;
  uStack_2c = 0;
  uStack_28 = 10;
  puStack_8 = (undefined1 *)0x1;
  sVar2 = FUN_00ace02d(L"<u4><font color=#");
  FUN_0040cae0(&puStack_30,L"<u4><font color=#",sVar2);
  sVar2 = FUN_00ace02d((short *)&local_50);
  FUN_0040cae0(&puStack_30,(wchar_t *)&local_50,sVar2);
  sVar2 = FUN_00ace02d(L"000000>");
  FUN_0040cae0(&puStack_30,L"000000>",sVar2);
  FUN_0040cae0(&puStack_30,(wchar_t *)*param_1,param_1[1]);
  sVar2 = FUN_00ace02d(L"</font></u4>");
  FUN_0040cae0(&puStack_30,L"</font></u4>",sVar2);
  (**(code **)(*this + 0x54))();
  pvStack_c = (void *)0xffffffff;
  if (10 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_34);
  }
  FUN_00830550(this,8,&stack0xffffff98);
  (**(code **)(*this + 0x8c))();
  (**(code **)(*this + 100))();
  (**(code **)(*this + 0x5c))(1,param_1,0);
  puStack_20 = operator_new(0x3fc);
  uStack_28 = 2;
  if (puStack_20 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_00833290(puStack_20);
  }
  iVar1 = *this_00;
  uStack_28 = 0xffffffff;
  fVar3 = (float10)(**(code **)(*param_1 + 0x10))();
  (**(code **)(iVar1 + 0x78))((float)fVar3);
  local_54 = local_4c + 2;
  local_4c[2] = 0;
  local_50 = (undefined4 *)0x0;
  local_4c[0] = L'\n';
  local_4c[1] = L'\0';
  uStack_2c = 3;
  sVar2 = FUN_00ace02d(L"<u4><font color=#");
  FUN_0040cae0(&local_54,L"<u4><font color=#",sVar2);
  sVar2 = FUN_00ace02d((short *)&stack0xffffff9c);
  FUN_0040cae0(&local_54,(wchar_t *)&stack0xffffff9c,sVar2);
  sVar2 = FUN_00ace02d(L"000000>");
  FUN_0040cae0(&local_54,L"000000>",sVar2);
  FUN_0040cae0(&local_54,(wchar_t *)*puStack_1c,puStack_1c[1]);
  sVar2 = FUN_00ace02d(L"</font></u4>");
  FUN_0040cae0(&local_54,L"</font></u4>",sVar2);
  (**(code **)(*this_00 + 0x54))(&local_54);
  puStack_30 = (undefined2 *)0xffffffff;
  if (local_50 < (undefined4 *)0xb) {
    FUN_00830550(this_00,8,&stack0xffffff78);
    (**(code **)(*this_00 + 0x8c))(0);
    (**(code **)(*this_00 + 100))(1,this,0);
    (**(code **)(*this_00 + 0x5c))(1,param_1,0);
    if (fStack_38 <= 0.5) {
      (**(code **)(*param_1 + 0xc))(this_00,1);
    }
    else {
      (**(code **)(*param_1 + 0xc))(this);
      this = this_00;
    }
    (**(code **)(*param_1 + 0xc))(this,1);
    (**(code **)(*param_1 + 0x8c))(0);
    ExceptionList = unaff_EBP;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Format);
}


//// FUNCTION FUN_007c23e0 @ 007c23e0 ////

void __fastcall FUN_007c23e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  char acStack_80 [20];
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdecd6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0xa8))();
  pcStack_6c = acStack_60;
  acStack_60[0] = '\0';
  uStack_68 = 0;
  uStack_64 = 0x20;
  pcStack_6c = _malloc(0x20);
  _strncpy(pcStack_6c,"AWARDS_ACHIEVEMENT_WON",0x16);
  uStack_68 = 0x16;
  pcStack_6c[0x16] = '\0';
  pcStack_8c = acStack_80;
  uStack_4 = 0;
  acStack_80[0] = '\0';
  uStack_88 = 0;
  uStack_84 = 0x20;
  pcStack_8c = _malloc(0x20);
  _strncpy(pcStack_8c,"AWARDS_ACHIEVEMENT_TOWIN",0x18);
  uStack_88 = 0x18;
  pcStack_8c[0x18] = '\0';
  uStack_4._0_1_ = 1;
  puVar1 = FUN_009b5030(apvStack_2c,&pcStack_6c);
  uStack_4._0_1_ = 2;
  puVar2 = FUN_009b5030(apvStack_4c,&pcStack_8c);
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  FUN_007c2030(*(int **)(param_1 + 0x3a0),puVar2,puVar1,*(float *)(param_1 + 0x4ec));
  if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_4c[0]);
  }
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_8c);
  }
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_6c);
  }
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0xa8))();
  pcStack_8c = acStack_80;
  acStack_80[0] = '\0';
  uStack_88 = 0;
  uStack_84 = 0x20;
  pcStack_8c = _malloc(0x20);
  _strncpy(pcStack_8c,"AWARDS_ACHIEVEMENT_WON_PRZ",0x1a);
  uStack_88 = 0x1a;
  pcStack_8c[0x1a] = '\0';
  pcStack_6c = acStack_60;
  uStack_4 = 4;
  acStack_60[0] = '\0';
  uStack_68 = 0;
  uStack_64 = 0x20;
  pcStack_6c = _malloc(0x20);
  _strncpy(pcStack_6c,"AWARDS_ACHIEVEMENT_TOWIN_PRZ",0x1c);
  uStack_68 = 0x1c;
  pcStack_6c[0x1c] = '\0';
  uStack_4._0_1_ = 5;
  puVar1 = FUN_009b5030(apvStack_4c,&pcStack_8c);
  uStack_4._0_1_ = 6;
  puVar2 = FUN_009b5030(apvStack_2c,&pcStack_6c);
  uStack_4 = CONCAT31(uStack_4._1_3_,7);
  FUN_007c2030(*(int **)(param_1 + 0x3b8),puVar2,puVar1,*(float *)(param_1 + 0x4ec));
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_4c[0]);
  }
  if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_6c);
  }
  if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_8c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007c26b0 @ 007c26b0 ////

int * FUN_007c26b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *unaff_EDI;
  float10 fVar6;
  int *piStack_b8;
  int *piStack_98;
  uint uStack_94;
  void *pvStack_90;
  int *piStack_8c;
  uint uVar7;
  float fStack_78;
  undefined4 uStack_6c;
  uint uStack_68;
  int iVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00cded21;
  pvStack_c = ExceptionList;
  uStack_68 = 0x7c26d6;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x344);
  piVar5 = (int *)0x0;
  local_4 = (int *)0x0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puVar1);
  }
  uStack_68 = DAT_00e5ade8;
  local_4 = (int *)0xffffffff;
  uStack_6c = 0x7c270e;
  (**(code **)(*piVar2 + 0x74))();
  piVar4 = local_4;
  uStack_6c = 0x42700000;
  (**(code **)(*local_4 + 0x74))();
  (**(code **)(*piVar4 + 0x5c))();
  FUN_0073e5e0(piVar4,piVar2);
  (**(code **)(*piVar2 + 0xc))();
  piStack_8c = (int *)0x7c274e;
  puVar1 = operator_new(0x3fc);
  if (puVar1 != (undefined4 *)0x0) {
    piVar5 = FUN_00833290(puVar1);
  }
  pvStack_90 = (void *)0x1;
  uStack_94 = 0x7c277d;
  piStack_8c = piVar2;
  (**(code **)(*piVar5 + 100))();
  uStack_94 = 0;
  piStack_98 = piVar4;
  (**(code **)(*piVar5 + 0x5c))();
  iVar8 = *piVar5;
  fVar6 = (float10)(**(code **)(*piVar2 + 0x10))();
  (**(code **)(*piVar4 + 0x10))();
  (**(code **)(iVar8 + 0x78))();
  piStack_8c = (int *)&stack0xffffff80;
  uVar7 = 0;
  uVar3 = FUN_00ace02d((short *)&DAT_00d56cf8);
  FUN_004036d0(&piStack_8c,L"u5",uVar3);
  FUN_008319b0(&uStack_6c,&piStack_8c,(undefined4 *)(float)fVar6);
  (**(code **)(*piVar5 + 0x54))();
  if (10 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x42700000);
  }
  if (10 < uVar7) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_90);
  }
  (**(code **)(*piVar5 + 0x8c))();
  (**(code **)(*piVar2 + 0xc))();
  piStack_b8 = (int *)0x7c2863;
  puVar1 = operator_new(0x3fc);
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar1);
  }
  piStack_b8 = piVar5;
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*piVar4 + 0x5c))(1,piVar5,0);
  iVar8 = *piVar4;
  fVar6 = (float10)(**(code **)(*piVar5 + 0x10))();
  (**(code **)(iVar8 + 0x78))((float)fVar6);
  piStack_b8 = (int *)&stack0xffffff54;
  uVar7 = 0;
  uVar3 = FUN_00ace02d((short *)&DAT_00d56cf0);
  FUN_004036d0(&piStack_b8,L"u6",uVar3);
  puVar1 = FUN_008319b0(&piStack_98,&piStack_b8,unaff_EDI);
  (**(code **)(*piVar4 + 0x54))(puVar1);
  if (uStack_94 < 0xb) {
    if (uVar7 < 0xb) {
      (**(code **)(*piVar4 + 0x8c))(0);
      (**(code **)(*piVar2 + 0xc))(piVar4,1);
      fStack_78 = ((float)piVar4[0x39] - (float)piVar2[0x27]) + 1.0;
      if (fStack_78 < 58.0) {
        fStack_78 = 58.0;
      }
      (**(code **)(*piVar2 + 0x7c))(fStack_78);
      ExceptionList = piStack_8c;
      return piVar2;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)0x2);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)0x2);
}


//// FUNCTION FUN_007c2a10 @ 007c2a10 ////

void __fastcall FUN_007c2a10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d56d08;
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


//// FUNCTION FUN_007c2ab0 @ 007c2ab0 ////

void __fastcall FUN_007c2ab0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d56d18;
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


//// FUNCTION FUN_007c2b80 @ 007c2b80 ////

undefined4 * __thiscall FUN_007c2b80(void *this,byte param_1)

{
  FUN_007c1f20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c2bd0 @ 007c2bd0 ////

undefined4 * __thiscall FUN_007c2bd0(void *this,undefined4 *param_1)

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
  return this;
}


//// FUNCTION FUN_007c2c30 @ 007c2c30 ////

void __fastcall FUN_007c2c30(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  ulonglong uVar6;
  float fVar7;
  undefined4 uVar8;
  
  uVar6 = FUN_00990ae0(param_1,param_2);
  iVar1 = (int)uVar6;
  uVar2 = iVar1 - DAT_0104e8ac;
  if (100 < uVar2) {
    uVar2 = 100;
  }
  fVar7 = (float)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  DAT_0104e8a8 = fVar7 * 0.0002 + DAT_0104e8a8;
  fVar5 = FUN_004012c0(DAT_0104e8a8);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x418) + 0x108))();
  *(float *)(iVar3 + 0xc) = (float)fVar5;
  iVar3 = *(int *)(param_1 + 0x448);
  if (iVar3 != *(int *)(param_1 + 0x44c)) {
    do {
      fVar5 = FUN_004012c0(DAT_0104e8a8);
      iVar4 = (**(code **)(**(int **)(iVar3 + 0x14) + 0x108))();
      *(float *)(iVar4 + 0xc) = (float)fVar5;
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0x44c));
  }
  if (*(char *)(param_1 + 0x4f8) != '\0') {
    uVar2 = iVar1 - DAT_0104e8ac;
    if (100 < uVar2) {
      uVar2 = 100;
    }
    fVar7 = (float)(int)uVar2;
    if ((int)uVar2 < 0) {
      fVar7 = fVar7 + 4.2949673e+09;
    }
    fVar7 = fVar7 * 0.0005 + *(float *)(param_1 + 0x4ec);
    *(float *)(param_1 + 0x4ec) = fVar7;
    if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    *(float *)(param_1 + 0x4ec) = fVar7;
  }
  fVar7 = *(float *)(param_1 + 0x4fc) - 2.0;
  *(float *)(param_1 + 0x4fc) = fVar7;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(param_1 + 0x4fc) = fVar7;
  fVar7 = 580.0 - (fVar7 + 125.0) * 0.5;
  uVar8 = 1;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x5c))(1,*(undefined4 *)(param_1 + 0x358),fVar7);
  fVar7 = 680.0 - fVar7 * 0.5;
  (**(code **)(**(int **)(param_1 + 0x3d0) + 100))(1,*(undefined4 *)(param_1 + 0x358),fVar7);
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x74))(uVar8,fVar7);
  DAT_0104e8ac = iVar1;
  FUN_007c23e0(param_1);
  return;
}


//// FUNCTION FUN_007c2e00 @ 007c2e00 ////

/* WARNING: Removing unreachable block (ram,0x007c2f26) */

void __fastcall FUN_007c2e00(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  wchar_t *pwStack_80;
  void *pvStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  void *pvStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  void *pvStack_2c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cded53;
  pvStack_c = ExceptionList;
  pwStack_80 = L"쒃褄⑄蔈쟀⑄t";
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x3fc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  iVar1 = *piVar3;
  local_4 = 0xffffffff;
  pwStack_80 = (wchar_t *)0x7c2e58;
  fVar5 = (float10)(**(code **)(*param_1 + 0x10))();
  pwStack_80 = (wchar_t *)(float)fVar5;
  (**(code **)(iVar1 + 0x78))();
  *(undefined1 *)(piVar3 + 0xd6) = 1;
  (**(code **)(*piVar3 + 100))(1,param_1,0x40800000);
  pwStack_80 = L"AWARDS_SCREEN_STUNTACHIEVEMENTAWARDS";
  if ((char)param_1[0x140] == '\0') {
    pwStack_80 = L"AWARDS_SCREEN_ACHIEVEMENTAWARDS";
  }
  FUN_00568cb0(&pwStack_80,&uStack_5c);
  uStack_14 = 1;
  uVar4 = FUN_00ace02d((short *)&DAT_00d56d34);
  FUN_004036d0(&stack0xffffff84,L"u1",uVar4);
  uStack_14._0_1_ = 2;
  puVar2 = FUN_00831790(&uStack_3c,(undefined4 *)&stack0xffffff84,&uStack_5c);
  uStack_14 = CONCAT31(uStack_14._1_3_,3);
  (**(code **)(*piVar3 + 0x54))(puVar2);
  if (uStack_38 < 0xb) {
    uStack_18 = 0xffffffff;
    if (uStack_58 < 0xb) {
      (**(code **)(*piVar3 + 0x8c))(0);
      (**(code **)(*param_1 + 0xc))(piVar3,1);
      ExceptionList = pvStack_2c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_60);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_40);
}


//// FUNCTION FUN_007c2f90 @ 007c2f90 ////

/* WARNING: Removing unreachable block (ram,0x007c3037) */
/* WARNING: Removing unreachable block (ram,0x007c302f) */

int * FUN_007c2f90(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  int *piVar2;
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cded91;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x360);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0069d820(this,param_1 + 8,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xffffffff;
  FUN_0069ce60(puVar1,0xb3ffffff);
  puVar1 = FUN_004312e0(local_2c,param_1,"_DESCR");
  local_4 = 1;
  FUN_009b5030(local_6c,puVar1);
  puVar1 = FUN_004312e0(local_4c,param_1,"_NAME");
  local_4._0_1_ = 3;
  FUN_009b5030(local_8c,puVar1);
  local_4 = CONCAT31(local_4._1_3_,4);
  piVar2 = FUN_007c26b0();
  if (10 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (local_64 < 0xb) {
    local_4 = 0xffffffff;
    if (local_24 < 0x15) {
      (**(code **)(*piVar2 + 0x8c))();
      ExceptionList = pvStack_10;
      return piVar2;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c[0]);
}


//// FUNCTION FUN_007c3170 @ 007c3170 ////

int * __cdecl FUN_007c3170(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar6 = (uint *)(param_3 + 10);
  do {
    pcVar1 = (char *)*param_1;
    uVar2 = param_1[1];
    if (puVar6[-8] <= uVar2) {
      if (0x14 < puVar6[-8]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar6[-8] = uVar4;
      pvVar5 = _malloc(uVar4);
      *param_3 = (int)pvVar5;
    }
    _strncpy((char *)*param_3,pcVar1,uVar2);
    iVar3 = *param_3;
    puVar6[-9] = uVar2;
    *(undefined1 *)(uVar2 + iVar3) = 0;
    uVar2 = param_1[9];
    pcVar1 = (char *)param_1[8];
    if (*puVar6 <= uVar2) {
      if (0x14 < *puVar6) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar6[-2]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar6 = uVar4;
      pvVar5 = _malloc(uVar4);
      puVar6[-2] = (uint)pvVar5;
    }
    _strncpy((char *)puVar6[-2],pcVar1,uVar2);
    puVar6[-1] = uVar2;
    *(undefined1 *)(uVar2 + puVar6[-2]) = 0;
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 0x10;
    puVar6 = puVar6 + 0x10;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_007c3260 @ 007c3260 ////

int * __cdecl FUN_007c3260(int param_1,int param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar7 = (uint *)(param_3 + 10);
  do {
    pcVar1 = *(char **)(param_2 + -0x40);
    uVar2 = *(uint *)(param_2 + -0x3c);
    iVar6 = param_2 + -0x40;
    puVar8 = puVar7 + -0x10;
    param_3 = param_3 + -0x10;
    if (puVar7[-0x18] <= uVar2) {
      if (0x14 < puVar7[-0x18]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar7[-0x18] = uVar4;
      pvVar5 = _malloc(uVar4);
      *param_3 = (int)pvVar5;
    }
    _strncpy((char *)*param_3,pcVar1,uVar2);
    iVar3 = *param_3;
    puVar7[-0x19] = uVar2;
    *(undefined1 *)(uVar2 + iVar3) = 0;
    uVar2 = *(uint *)(param_2 + -0x1c);
    pcVar1 = *(char **)(param_2 + -0x20);
    if (*puVar8 <= uVar2) {
      if (0x14 < *puVar8) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar7[-0x12]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar8 = uVar4;
      pvVar5 = _malloc(uVar4);
      puVar7[-0x12] = (uint)pvVar5;
    }
    _strncpy((char *)puVar7[-0x12],pcVar1,uVar2);
    puVar7[-0x11] = uVar2;
    *(undefined1 *)(uVar2 + puVar7[-0x12]) = 0;
    param_2 = iVar6;
    puVar7 = puVar8;
  } while (iVar6 != param_1);
  return param_3;
}


//// FUNCTION FUN_007c3370 @ 007c3370 ////

void __fastcall FUN_007c3370(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d56dfc;
  param_1[0x14] = &PTR_FUN_00d56de0;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x120]);
}


//// FUNCTION FUN_007c3460 @ 007c3460 ////

int * __cdecl FUN_007c3460(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_3 + 10);
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(puVar6 + -7);
        *(undefined1 *)(puVar6 + -7) = 0;
        puVar6[-9] = 0;
        puVar6[-8] = 0x14;
        uVar1 = param_1[1];
        pcVar2 = (char *)*param_1;
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          puVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4);
          *param_3 = (int)pvVar5;
        }
        _strncpy((char *)*param_3,pcVar2,uVar1);
        iVar3 = *param_3;
        puVar6[-9] = uVar1;
        *(undefined1 *)(uVar1 + iVar3) = 0;
        puVar6[-2] = (uint)(puVar6 + 1);
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x14;
        uVar1 = param_1[9];
        pcVar2 = (char *)param_1[8];
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          *puVar6 = uVar4;
          pvVar5 = _malloc(uVar4);
          puVar6[-2] = (uint)pvVar5;
        }
        _strncpy((char *)puVar6[-2],pcVar2,uVar1);
        puVar6[-1] = uVar1;
        *(undefined1 *)(uVar1 + puVar6[-2]) = 0;
      }
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      puVar6 = puVar6 + 0x10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_007c3560 @ 007c3560 ////

undefined4 * __thiscall
FUN_007c3560(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 param_4)

{
  FUN_0069d820(this,param_3,0,0,0x3f800000,0x3f800000);
  *(undefined ***)this = &PTR_FUN_00d56dfc;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d56de0;
  FUN_007415d0((void *)((int)this + 0x360),param_1);
  FUN_007415d0((void *)((int)this + 900),param_1 + 9);
  FUN_007415d0((void *)((int)this + 0x3a8),param_1 + 0x12);
  FUN_007415d0((void *)((int)this + 0x3cc),param_1 + 0x1b);
  FUN_007415d0((void *)((int)this + 0x3f0),param_2);
  FUN_007415d0((void *)((int)this + 0x414),param_2 + 9);
  FUN_007415d0((void *)((int)this + 0x438),param_2 + 0x12);
  FUN_007415d0((void *)((int)this + 0x45c),param_2 + 0x1b);
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = param_4;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined1 *)((int)this + 0x48c) = 0;
  FUN_007c1820((int)this);
  return this;
}


//// FUNCTION FUN_007c3640 @ 007c3640 ////

undefined4 * __thiscall FUN_007c3640(void *this,byte param_1)

{
  FUN_007c3370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c3690 @ 007c3690 ////

int * __cdecl FUN_007c3690(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_3 + 10);
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(puVar6 + -7);
        *(undefined1 *)(puVar6 + -7) = 0;
        puVar6[-9] = 0;
        puVar6[-8] = 0x14;
        uVar1 = param_1[1];
        pcVar2 = (char *)*param_1;
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          puVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4);
          *param_3 = (int)pvVar5;
        }
        _strncpy((char *)*param_3,pcVar2,uVar1);
        iVar3 = *param_3;
        puVar6[-9] = uVar1;
        *(undefined1 *)(uVar1 + iVar3) = 0;
        puVar6[-2] = (uint)(puVar6 + 1);
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x14;
        uVar1 = param_1[9];
        pcVar2 = (char *)param_1[8];
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          *puVar6 = uVar4;
          pvVar5 = _malloc(uVar4);
          puVar6[-2] = (uint)pvVar5;
        }
        _strncpy((char *)puVar6[-2],pcVar2,uVar1);
        puVar6[-1] = uVar1;
        *(undefined1 *)(uVar1 + puVar6[-2]) = 0;
      }
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      puVar6 = puVar6 + 0x10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_007c3820 @ 007c3820 ////

void FUN_007c3820(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  FUN_007c3460(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_007c3840 @ 007c3840 ////

void __fastcall FUN_007c3840(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdedbe;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_00990ec0(param_1 + 0x30);
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007c38d0 @ 007c38d0 ////

void FUN_007c38d0(void)

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
  puStack_8 = &LAB_00cdedd8;
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


//// FUNCTION FUN_007c3940 @ 007c3940 ////

void FUN_007c3940(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_007c1f20(param_1);
  }
  return;
}


//// FUNCTION FUN_007c3970 @ 007c3970 ////

void FUN_007c3970(void)

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
  puStack_8 = &LAB_00cdedf8;
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


//// FUNCTION FUN_007c3a00 @ 007c3a00 ////

void __thiscall FUN_007c3a00(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int extraout_ECX;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cdee10;
  local_10 = ExceptionList;
  iVar3 = *(int *)((int)this + 4);
  uVar7 = (int)param_3 - (int)param_2 >> 6;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - iVar3 >> 6;
  }
  if (uVar7 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar3 >> 6;
    }
    ExceptionList = &local_10;
    if (0x3ffffffU - iVar6 < uVar7) {
      ExceptionList = &local_10;
      uVar2 = FUN_007c3970();
      iVar3 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar3 >> 6;
    }
    if (uVar2 < iVar6 + uVar7) {
      if (0x3ffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar3 >> 6;
      }
      if (uVar2 < iVar6 + uVar7) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 6;
        }
        uVar2 = iVar3 + uVar7;
      }
      piVar4 = operator_new(uVar2 * 0x40);
      local_8 = 0;
      piVar5 = FUN_007c3460(*(undefined4 **)((int)this + 4),param_1,piVar4);
      piVar5 = FUN_007c3690(param_2,param_3,piVar5);
      FUN_007c3460(param_1,*(undefined4 **)((int)this + 8),piVar5);
      puVar1 = *(undefined4 **)((int)this + 4);
      if (puVar1 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)puVar1 >> 6;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_007c3940(puVar1,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar4 + uVar2 * 0x10;
      *(int **)((int)this + 8) = piVar4 + (uVar7 + iVar3) * 0x10;
      *(int **)((int)this + 4) = piVar4;
      ExceptionList = local_10;
      return;
    }
    piVar4 = *(int **)((int)this + 8);
    if ((uint)((int)piVar4 - (int)param_1 >> 6) < uVar7) {
      FUN_007c3460(param_1,piVar4,param_1 + uVar7 * 0x10);
      piVar4 = *(int **)((int)this + 8);
      local_8 = 2;
      FUN_007c3690(param_2 + ((int)piVar4 - (int)param_1 >> 6) * 0x10,param_3,piVar4);
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + uVar7 * 0x40;
      FUN_007c3170(param_2,param_2 + ((int)piVar4 - (int)param_1 >> 6) * 0x10,param_1);
      ExceptionList = local_10;
      return;
    }
    piVar5 = FUN_007c3460(piVar4 + uVar7 * -0x10,piVar4,piVar4);
    *(int **)((int)this + 8) = piVar5;
    FUN_007c3260((int)param_1,(int)(piVar4 + uVar7 * -0x10),piVar4);
    FUN_007c3170(param_2,param_3,param_1);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007c3ca0 @ 007c3ca0 ////

undefined4 * __fastcall FUN_007c3ca0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdee28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d56f2c;
  param_1[0x14] = &PTR_FUN_00d56f10;
  FUN_007be2c0((int)(param_1 + 0xd1));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007c3d00 @ 007c3d00 ////

undefined4 * __thiscall FUN_007c3d00(void *this,byte param_1)

{
  FUN_007c3d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c3d20 @ 007c3d20 ////

void __fastcall FUN_007c3d20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdee48;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_007c3840((int)(param_1 + 0xd1));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007c3d70 @ 007c3d70 ////

int __thiscall FUN_007c3d70(void *this,uint param_1)

{
  int iVar1;
  uint extraout_EDX;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if (param_1 < (uint)((*(int *)((int)this + 8) - iVar1) / 0x18)) goto LAB_007c3d9b;
  }
  FUN_007c38d0();
  param_1 = extraout_EDX;
LAB_007c3d9b:
  return iVar1 + param_1 * 0x18;
}


//// FUNCTION FUN_007c3db0 @ 007c3db0 ////

undefined4 __thiscall FUN_007c3db0(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3ffffff < param_1) {
    param_1 = FUN_007c3970();
  }
  pvVar1 = operator_new(param_1 * 0x40);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x40 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_007c3e00 @ 007c3e00 ////

void __fastcall FUN_007c3e00(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    FUN_007c1f20(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007c3e70 @ 007c3e70 ////

void __thiscall FUN_007c3e70(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *this_00;
  int *piVar3;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdee84;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)((int)this + 0x438);
  if ((iVar1 == 0) ||
     (ExceptionList = &pvStack_c,
     (uint)((*(int *)((int)this + 0x43c) - iVar1) / 0x18) <= param_1 - 1U)) {
    ExceptionList = &pvStack_c;
    FUN_007c38d0();
  }
  uVar2 = *(undefined4 *)(iVar1 + (param_1 - 1U) * 0x18 + 0x14);
  this_00 = operator_new(0x360);
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    pcStack_2c = acStack_20;
    acStack_20[0] = '\0';
    uStack_28 = 0;
    uStack_24 = 0x20;
    pcStack_2c = _malloc(0x20);
    _strncpy(pcStack_2c,"ui/lifetimeaward_rosettebig.dds",0x1f);
    uStack_28 = 0x1f;
    pcStack_2c[0x1f] = '\0';
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    piVar3 = FUN_0069d820(this_00,&pcStack_2c,0,0,0x3f800000,0x3f800000);
  }
  uStack_4 = 0xffffffff;
  if ((this_00 != (void *)0x0) && (0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  (**(code **)(*piVar3 + 100))();
  (**(code **)(*piVar3 + 0x5c))(1,uVar2);
  (**(code **)(*piVar3 + 0x74))(unaff_ESI,unaff_EDI);
  (**(code **)(**(int **)((int)this + 1000) + 0xc))(piVar3,1);
  ExceptionList = this_00;
  return;
}


//// FUNCTION FUN_007c4040 @ 007c4040 ////

void __fastcall FUN_007c4040(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x4e8) == 9) || (local_4 = 0x43520000, *(char *)(param_1 + 0x500) != '\0')
     ) {
    local_4 = 0x43960000;
  }
  (**(code **)(**(int **)(param_1 + 0x418) + 0x74))(local_4,local_4);
  iVar1 = *(int *)(param_1 + 0x438);
  uVar2 = *(int *)(param_1 + 0x4e8) - 1;
  if ((iVar1 != 0) && (uVar2 < (uint)((*(int *)(param_1 + 0x43c) - iVar1) / 0x18))) {
    FUN_0073e590(*(void **)(param_1 + 0x418),*(int **)(iVar1 + 0x14 + uVar2 * 0x18));
    iVar1 = *(int *)(param_1 + 0x438);
    uVar2 = *(int *)(param_1 + 0x4e8) - 1;
    if ((iVar1 != 0) && (uVar2 < (uint)((*(int *)(param_1 + 0x43c) - iVar1) / 0x18))) {
      FUN_0073e5e0(*(void **)(param_1 + 0x418),*(int **)(iVar1 + 0x14 + uVar2 * 0x18));
      return;
    }
    FUN_007c38d0();
    return;
  }
  FUN_007c38d0();
  return;
}


//// FUNCTION FUN_007c4120 @ 007c4120 ////

int __thiscall FUN_007c4120(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cdee90;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 6;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x3ffffff < uVar1) {
      uVar1 = FUN_007c3970();
    }
    piVar2 = operator_new(uVar1 * 0x40);
    *(int **)((int)this + 4) = piVar2;
    *(int **)((int)this + 8) = piVar2;
    *(int **)((int)this + 0xc) = piVar2 + uVar1 * 0x10;
    local_8 = 0;
    piVar2 = FUN_007c3690(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),piVar2);
    *(int **)((int)this + 8) = piVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_007c41f0 @ 007c41f0 ////

void __fastcall FUN_007c41f0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  char *local_54;
  void *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  char *local_2c;
  size_t local_28;
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdeedd;
  pvStack_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  piVar5 = (int *)0x0;
  local_54 = (char *)0x0;
  ExceptionList = &pvStack_c;
  local_50 = operator_new(0x490);
  if (local_50 != (void *)0x0) {
    local_54 = "ui/stuntaward_cert";
    if (*(char *)(param_1 + 0x500) == '\0') {
      local_54 = "ui/lifetimeaward_cert";
    }
    FUN_0048f010(&local_54,&local_2c);
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    bVar3 = true;
    bVar2 = true;
    local_4 = 2;
    local_54 = (char *)0x3;
    FUN_004073f0(&local_4c,local_2c,local_28);
    FUN_004073f0(&local_4c,"big.dds",7);
    iVar1 = *(int *)(param_1 + 0x438);
    uVar6 = *(int *)(param_1 + 0x4e8) - 1;
    if ((iVar1 == 0) || ((uint)((*(int *)(param_1 + 0x43c) - iVar1) / 0x18) <= uVar6)) {
      FUN_007c38d0();
      return;
    }
    piVar5 = FUN_007c3560(local_50,(undefined4 *)(*(int *)(iVar1 + uVar6 * 0x18 + 0x14) + 0x7c),
                          (undefined4 *)(param_1 + 0x454),&local_4c,9);
  }
  if ((bVar2) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  if ((bVar3) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar1 = *(int *)(param_1 + 0x438);
  uVar6 = *(int *)(param_1 + 0x4e8) - 1;
  if ((iVar1 != 0) && (uVar6 < (uint)((*(int *)(param_1 + 0x43c) - iVar1) / 0x18))) {
    (**(code **)(*piVar5 + 0x70))(*(undefined4 *)(iVar1 + 0x14 + uVar6 * 0x18),0);
    (**(code **)(**(int **)(param_1 + 0x388) + 0xc))(piVar5,1);
    puVar4 = operator_new(0x10);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = &PTR_LAB_00d56bf0;
      puVar4[1] = param_1;
      puVar4[2] = FUN_007c1d10;
      puVar4[3] = 0;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar5[0x120]);
  }
  FUN_007c38d0();
  return;
}


//// FUNCTION FUN_007c43f0 @ 007c43f0 ////

void __fastcall FUN_007c43f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5706c;
  param_1[0x14] = &PTR_FUN_00d57054;
  FUN_005f9ed0((int)(param_1 + 0x130));
  FUN_005f9ed0((int)(param_1 + 0x127));
  FUN_005f9ed0((int)(param_1 + 0x11e));
  FUN_005f9ed0((int)(param_1 + 0x115));
  FUN_0069b050((int)(param_1 + 0x111));
  FUN_006e80c0((int)(param_1 + 0x10d));
  param_1[0x107] = &PTR_LAB_00d56d18;
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
  param_1[0xfb] = &PTR_LAB_00d56d08;
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
  param_1[0xef] = &PTR_FUN_00d18c2c;
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
  param_1[0xe3] = &PTR_FUN_00d18c2c;
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
  param_1[0xdd] = &PTR_FUN_00d18c2c;
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
  param_1[0xd7] = &PTR_FUN_00d18c2c;
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
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_007c48b0 @ 007c48b0 ////

int * FUN_007c48b0(float param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  float *pfVar5;
  int *this;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 local_e4;
  undefined ****ppppuStack_d8;
  int iStack_d4;
  int *piStack_d0;
  undefined4 ***apppuStack_cc [2];
  int *piStack_c4;
  void *local_b8;
  int local_b4;
  undefined1 local_b0 [4];
  undefined **local_ac;
  int local_a8;
  int *local_a4;
  undefined4 local_98;
  void *local_84 [2];
  uint local_7c;
  uint *local_78;
  undefined1 local_58 [8];
  int iStack_50;
  int *piStack_4c;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdef5c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar4 = FUN_00857d80(local_b0);
  local_4 = 0;
  pfVar5 = FUN_00857b30(pvVar4,param_1);
  FUN_00500630(local_58,pfVar5);
  local_4._0_1_ = 2;
  local_ac = &PTR_FUN_00d1aed0;
  if (local_a4 != (int *)0x0) {
    *local_a4 = local_a8;
  }
  if (local_a8 != 0) {
    *(int **)(local_a8 + 4) = local_a4;
  }
  local_98 = 0;
  local_a8 = 0;
  local_a4 = (int *)0x0;
  pvVar4 = FUN_00857bd0(local_84);
  local_4._0_1_ = 3;
  bVar2 = FUN_00856dd0(local_58,(int)pvVar4);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_78 != (uint *)0x0) {
    *local_78 = local_7c;
  }
  if (local_7c != 0) {
    *(uint **)(local_7c + 4) = local_78;
  }
  bVar1 = false;
  if (bVar2) {
    this = (int *)FUN_007beba0((int)param_1);
    FUN_00856da0((int)local_58);
    FUN_007bd2b0(DAT_0104e8a4,&local_b8);
    uVar8 = FUN_0043b560();
    uVar9 = FUN_0043b560();
    if ((int)uVar9 == (int)uVar8) {
      cVar3 = FUN_007bd2d0((int)DAT_0104e8a4);
      if (cVar3 != '\0') {
        bVar1 = true;
      }
    }
  }
  else {
    this = (int *)FUN_007bebd0((int)param_1);
  }
  uVar8 = FUN_00acd42c();
  iVar6 = (int)uVar8;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (0xff < iVar6) {
    iVar6 = 0xff;
  }
  local_e4 = CONCAT13((char)iVar6,0xffffff);
  FUN_0069ce60(this,local_e4);
  FUN_0085f360((int *)local_84,(int)param_1);
  local_4._0_1_ = 4;
  FUN_00861de0(apvStack_2c,(int)param_1);
  local_4._0_1_ = 5;
  piVar7 = FUN_007c26b0();
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  local_4._0_1_ = 2;
  if (10 < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free(local_84[0]);
  }
  if (bVar1) {
    pvVar4 = operator_new(0x360);
    local_b8 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      piStack_c4 = (int *)0x0;
    }
    else {
      ppppuStack_d8 = (undefined ****)apppuStack_cc;
      apppuStack_cc[0] = (undefined4 ***)((uint)apppuStack_cc[0] & 0xffffff00);
      iStack_d4 = 0;
      piStack_d0 = (int *)0x14;
      _strncpy((char *)ppppuStack_d8,"ui/logoglow.dds",0xf);
      iStack_d4 = 0xf;
      *(char *)((int)ppppuStack_d8 + 0xf) = '\0';
      local_4 = CONCAT31(local_4._1_3_,7);
      piStack_c4 = FUN_0069d820(pvVar4,&ppppuStack_d8,0,0,0x3f800000,0x3f800000);
    }
    local_4 = 2;
    if ((pvVar4 != (void *)0x0) && (0x14 < piStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(ppppuStack_d8);
    }
    (**(code **)(*piStack_c4 + 0x74))();
    FUN_0073e590(piStack_c4,this);
    FUN_0073e5e0(piStack_c4,this);
    piStack_c4[0x45] = piStack_c4[0x45] & 0xfffffffd;
    (**(code **)(*piVar7 + 0xc))();
    piStack_d0 = piStack_c4 + 6;
    apppuStack_cc[0] = &ppppuStack_d8;
    ppppuStack_d8 = (undefined ****)&PTR_FUN_00d2d110;
    iStack_d4 = *piStack_d0;
    *(int **)(*piStack_d0 + 4) = &iStack_d4;
    *piStack_d0 = (int)&iStack_d4;
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_0069b990((void *)(local_b4 + 0x444),(int)&ppppuStack_d8);
    FUN_005ec7f0(&ppppuStack_d8);
  }
  if (piStack_4c != (int *)0x0) {
    *piStack_4c = iStack_50;
  }
  if (iStack_50 != 0) {
    *(int **)(iStack_50 + 4) = piStack_4c;
  }
  ExceptionList = pvStack_c;
  return piVar7;
}


//// FUNCTION FUN_007c4c50 @ 007c4c50 ////

undefined4 * __thiscall FUN_007c4c50(void *this,byte param_1)

{
  FUN_007c43f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c4c70 @ 007c4c70 ////

/* WARNING: Removing unreachable block (ram,0x007c51ca) */

void __fastcall FUN_007c4c70(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  size_t sVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  void *pvVar12;
  char *_Dest;
  undefined4 extraout_EDX;
  float *pfVar13;
  void *unaff_EDI;
  int iVar14;
  uint uStack_260;
  undefined4 *puStack_250;
  undefined4 *puVar15;
  uint *puStack_240;
  undefined4 *puStack_23c;
  char *pcStack_238;
  uint auStack_234 [2];
  char *pcStack_22c;
  int **ppiStack_220;
  int *piStack_21c;
  int *piStack_218;
  int *piStack_214;
  int *piStack_210;
  undefined4 uStack_20c;
  int *piStack_208;
  int *piStack_200;
  int iVar16;
  undefined4 *puStack_1f0;
  undefined4 *puStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int **ppiStack_1d0;
  uint uStack_1cc;
  undefined4 uStack_1c8;
  int *piStack_1c4;
  undefined4 *puStack_1c0;
  undefined4 uStack_1bc;
  int *piStack_1b8;
  void *pvVar17;
  int *piStack_1b0;
  void *_Memory;
  undefined4 *puStack_1a0;
  undefined4 *puStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint uVar18;
  wchar_t *pwStack_164;
  undefined1 *puStack_160;
  uint uVar19;
  undefined1 *puStack_150;
  void *pvStack_138;
  undefined2 *puStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined2 auStack_128 [10];
  undefined4 uStack_114;
  void *pvStack_104;
  undefined4 uStack_100;
  undefined1 *puStack_fc;
  wchar_t *local_f8;
  size_t sStack_f4;
  void *pvStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  wchar_t awStack_b4 [6];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_88;
  undefined4 uStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_150 = &stack0xfffffffc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cdf0d7;
  pvStack_14 = ExceptionList;
  local_f8 = (wchar_t *)0x0;
  puStack_160 = (undefined1 *)0x7c4ca7;
  ExceptionList = &pvStack_14;
  puVar3 = operator_new(0x3fc);
  local_c = 0;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar3);
  }
  iVar16 = *piVar4;
  local_c = 0xffffffff;
  (**(code **)(**(int **)(param_1 + 0x358) + 0x10))();
  puStack_160 = (undefined1 *)0x7c4ce7;
  (**(code **)(iVar16 + 0x78))();
  *(undefined1 *)(piVar4 + 0xd6) = 1;
  pwStack_164 = *(wchar_t **)(param_1 + 0x358);
  puStack_160 = (undefined1 *)0x42a00000;
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*piVar4 + 0x5c))();
  pwStack_164 = L"AWARDS_SCREEN_STUNTRANK_";
  if (param_1[0x500] == '\0') {
    pwStack_164 = L"AWARDS_SCREEN_RANK_";
  }
  FUN_00568cb0(&pwStack_164,&local_f8);
  puStack_134 = auStack_128;
  uStack_28 = 1;
  auStack_128[0] = 0;
  uStack_130 = 0;
  uStack_12c = 10;
  uVar5 = FUN_00ace02d((short *)&DAT_00d57228);
  FUN_004036d0(&puStack_134,L"u2",uVar5);
  puStack_150 = (undefined1 *)0x0;
  uStack_28._0_1_ = 3;
  FUN_0040cae0(&stack0xfffffeac,local_f8,sStack_f4);
  sVar6 = _swprintf(awStack_b4,0xd18f7c,*(wchar_t **)(param_1 + 0x4e8));
  FUN_0040cae0(&stack0xfffffeac,awStack_b4,sVar6);
  FUN_00831570(&uStack_d4,&puStack_134,(undefined4 *)&stack0xfffffeac);
  uStack_28 = CONCAT31(uStack_28._1_3_,4);
  (**(code **)(*piVar4 + 0x54))();
  if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_d8);
  }
  if (&lpType_0000000a < puStack_150) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  if (10 < uStack_130) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_138);
  }
  uStack_2c = 0xffffffff;
  if (10 < sStack_f4) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_fc);
  }
  (**(code **)(*piVar4 + 0x84))();
  FUN_0073e590(piVar4,*(int **)(param_1 + 0x358));
  (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
  uStack_18c = 0x7c4e97;
  puVar3 = operator_new(0x3fc);
  uStack_38 = 5;
  if (puVar3 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(puVar3);
  }
  uStack_18c = *(undefined4 *)(param_1 + 0x358);
  uStack_190 = 1;
  uStack_38 = 0xffffffff;
  uStack_194 = 0x7c4eda;
  (**(code **)(*piVar7 + 0x5c))();
  uStack_198 = *(undefined4 *)(param_1 + 0x358);
  uStack_194 = 0x430c0000;
  puStack_19c = (undefined4 *)0x1;
  puStack_1a0 = (undefined4 *)0x7c4eef;
  (**(code **)(*piVar7 + 100))();
  puStack_1a0 = (undefined4 *)0x43860000;
  (**(code **)(*piVar7 + 0x78))();
  puStack_160 = &stack0xfffffeac;
  uVar19 = 0;
  uVar5 = FUN_00ace02d(L"AWARDS_REQUIREMENTS");
  FUN_004036d0(&puStack_160,L"AWARDS_REQUIREMENTS",uVar5);
  uStack_54 = 6;
  uVar18 = 0;
  uVar5 = FUN_00ace02d((short *)&DAT_00d571f8);
  FUN_004036d0(&stack0xfffffe80,L"u3",uVar5);
  uStack_54._0_1_ = 7;
  piStack_1b0 = (int *)0x7c4f8f;
  puVar3 = FUN_00831570(&uStack_100,(undefined4 *)&stack0xfffffe80,&puStack_160);
  uStack_54 = CONCAT31(uStack_54._1_3_,8);
  (**(code **)(*piVar7 + 0x54))();
  if (&lpType_0000000a < puStack_fc) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_104);
  }
  if (10 < uVar18) {
                    /* WARNING: Subroutine does not return */
    _free(piVar4);
  }
  uStack_58 = 0xffffffff;
  if (10 < uVar19) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_164);
  }
  (**(code **)(*piVar7 + 0x8c))();
  piStack_1b0 = piVar7;
  (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
  piStack_1b8 = (int *)0x7c5014;
  puStack_19c = operator_new(0x344);
  uStack_64 = 9;
  if (puStack_19c == (undefined4 *)0x0) {
    puStack_1a0 = (undefined4 *)0x0;
  }
  else {
    puStack_1a0 = FUN_007432f0(puStack_19c);
  }
  uStack_64 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x38c) + 4))();
  *(undefined4 **)(param_1 + 0x3a0) = puStack_1a0;
  (*(code *)**(undefined4 **)(param_1 + 0x38c))();
  pvVar17 = (void *)0x0;
  uStack_1bc = 1;
  puStack_1c0 = (undefined4 *)0x7c5075;
  piStack_1b8 = piVar7;
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x5c))();
  puStack_1c0 = (undefined4 *)0x0;
  uStack_1c8 = 2;
  uStack_1cc = 0x7c5085;
  piStack_1c4 = piVar7;
  (**(code **)(**(int **)(param_1 + 0x3a0) + 100))();
  uStack_1cc = 0x43860000;
  ppiStack_1d0 = (int **)0x7c5095;
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x78))();
  pvVar12 = *(void **)(param_1 + 0x3a0);
  ppiStack_1d0 = (int **)0x1;
  (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
  iStack_1dc = 0x7c50b3;
  puStack_1c0 = operator_new(0x3fc);
  uStack_88 = 10;
  if (puStack_1c0 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(puStack_1c0);
  }
  iStack_1dc = *(int *)(param_1 + 0x358);
  iStack_1e0 = 1;
  uStack_88 = 0xffffffff;
  uStack_1e4 = 0x7c50f6;
  (**(code **)(*piVar7 + 0x5c))();
  fStack_1e8 = *(float *)(param_1 + 0x358);
  uStack_1e4 = 0x430c0000;
  puStack_1ec = (undefined4 *)0x1;
  (**(code **)(*piVar7 + 100))();
  (**(code **)(*piVar7 + 0x78))();
  piStack_1b0 = (int *)&stack0xfffffe5c;
  _Memory = (void *)((uint)puVar3 & 0xffff0000);
  uVar18 = 0;
  uVar5 = FUN_00ace02d(L"AWARDS_REWARDS");
  FUN_004036d0(&piStack_1b0,L"AWARDS_REWARDS",uVar5);
  ppiStack_1d0 = &piStack_1c4;
  uStack_a4 = 0xb;
  piStack_1c4 = (int *)((uint)piStack_1c4 & 0xffff0000);
  uStack_1cc = 0;
  uStack_1c8 = 10;
  uVar5 = FUN_00ace02d((short *)&DAT_00d571f8);
  FUN_004036d0(&ppiStack_1d0,L"u3",uVar5);
  uStack_a4._0_1_ = 0xc;
  piStack_200 = (int *)0x7c51ad;
  FUN_00831570(&puStack_150,&ppiStack_1d0,&piStack_1b0);
  uStack_a4 = CONCAT31(uStack_a4._1_3_,0xd);
  (**(code **)(*piVar7 + 0x54))();
  if (10 < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar12);
  }
  uStack_a8 = 0xffffffff;
  if (10 < uVar18) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar17);
  }
  (**(code **)(*piVar7 + 0x8c))();
  piStack_200 = piVar7;
  (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
  piStack_208 = (int *)0x7c5232;
  puStack_1ec = operator_new(0x344);
  awStack_b4[0] = L'\x0e';
  awStack_b4[1] = L'\0';
  if (puStack_1ec == (undefined4 *)0x0) {
    puStack_1f0 = (undefined4 *)0x0;
  }
  else {
    puStack_1f0 = FUN_007432f0(puStack_1ec);
  }
  awStack_b4[0] = L'\xffff';
  awStack_b4[1] = L'\xffff';
  (**(code **)(*(int *)(param_1 + 0x3a4) + 4))();
  *(undefined4 **)(param_1 + 0x3b8) = puStack_1f0;
  (*(code *)**(undefined4 **)(param_1 + 0x3a4))();
  pvVar17 = (void *)0x0;
  uStack_20c = 1;
  piStack_210 = (int *)0x7c5293;
  piStack_208 = piVar7;
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x5c))();
  piStack_210 = (int *)0x0;
  piStack_218 = (int *)0x2;
  piStack_21c = (int *)0x7c52a3;
  piStack_214 = piVar7;
  (**(code **)(**(int **)(param_1 + 0x3b8) + 100))();
  piStack_21c = (int *)0x43860000;
  ppiStack_220 = (int **)0x7c52b3;
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x78))();
  pvVar12 = *(void **)(param_1 + 0x3b8);
  ppiStack_220 = (int **)0x1;
  (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
  pcStack_22c = (char *)0x7c52d1;
  piStack_210 = operator_new(0x3fc);
  pvStack_d8 = (void *)0xf;
  if (piStack_210 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(piStack_210);
  }
  auStack_234[1] = 1;
  pvStack_d8 = (void *)0xffffffff;
  auStack_234[0] = 0x7c530e;
  pcStack_22c = param_1;
  (**(code **)(*piVar7 + 0x5c))();
  auStack_234[0] = 0x44190000;
  puStack_23c = (undefined4 *)0x1;
  puStack_240 = (uint *)0x7c531d;
  pcStack_238 = param_1;
  (**(code **)(*piVar7 + 100))();
  puStack_240 = (uint *)0x43340000;
  (**(code **)(*piVar7 + 0x78))();
  piStack_200 = (int *)&stack0xfffffe0c;
  puVar3 = (undefined4 *)0x0;
  uVar18 = 0;
  uVar5 = FUN_00ace02d(L"AWARDS_ACHIEVEMENT_SIGNOFF");
  FUN_004036d0(&piStack_200,L"AWARDS_ACHIEVEMENT_SIGNOFF",uVar5);
  ppiStack_220 = &piStack_214;
  sStack_f4 = 0x10;
  piStack_214 = (int *)((uint)piStack_214 & 0xffff0000);
  piStack_21c = (int *)0x0;
  piStack_218 = (int *)&lpType_0000000a;
  uVar5 = FUN_00ace02d((short *)&DAT_00d57198);
  FUN_004036d0(&ppiStack_220,L"u7",uVar5);
  sStack_f4._0_1_ = 0x11;
  FUN_00831570(&puStack_1a0,&ppiStack_220,&piStack_200);
  sStack_f4 = CONCAT31(sStack_f4._1_3_,0x12);
  (**(code **)(*piVar7 + 0x54))();
  if (&lpType_0000000a < puStack_19c) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (&lpType_0000000a < piStack_21c) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar12);
  }
  local_f8 = (wchar_t *)0xffffffff;
  if (10 < uVar18) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar17);
  }
  (**(code **)(*piVar7 + 0x8c))();
  (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
  puVar11 = *(undefined4 **)(param_1 + 0x430);
  if (puVar11 != (undefined4 *)0x0) {
    piVar7 = puVar11 + 0x12;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      (**(code **)*puVar11)();
    }
    (**(code **)(*(int *)(param_1 + 0x41c) + 4))();
    param_1[0x430] = '\0';
    param_1[0x431] = '\0';
    param_1[0x432] = '\0';
    param_1[0x433] = '\0';
    (*(code *)**(undefined4 **)(param_1 + 0x41c))();
  }
  puStack_23c = operator_new(0x398);
  pvStack_104 = (void *)0x13;
  if (puStack_23c != (undefined4 *)0x0) {
    puVar3 = FUN_007c3ca0(puStack_23c);
  }
  pvStack_104 = (void *)0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x41c) + 4))();
  *(undefined4 **)(param_1 + 0x430) = puVar3;
  (*(code *)**(undefined4 **)(param_1 + 0x41c))();
  (**(code **)(**(int **)(param_1 + 0x430) + 0x70))();
  uStack_260 = *(uint *)(param_1 + 0x430);
  (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
  FUN_007be450((void *)(*(int *)(param_1 + 0x430) + 0x344),(undefined4 *)&stack0xfffffe04,
               (undefined4 *)&stack0xfffffdb4);
  puVar3 = (undefined4 *)piVar4[0x30];
  iVar16 = 0x43210000;
  FUN_007be450((void *)(*(int *)(param_1 + 0x430) + 0x344),(undefined4 *)&stack0xfffffe04,
               (undefined4 *)&stack0xfffffdb4);
  puVar8 = FUN_00867060(*(uint *)(param_1 + 0x4e8),param_1[0x500]);
  iStack_1e0 = 0;
  iStack_1dc = 0;
  pfVar13 = *(float **)(puVar8 + 4);
  uStack_114 = 0x14;
  if (pfVar13 != *(float **)(puVar8 + 8)) {
    do {
      piVar4 = FUN_007c48b0(*pfVar13);
      (**(code **)(*piVar4 + 0x5c))();
      (**(code **)(*piVar4 + 100))();
      (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
      if ((piStack_200 == (int *)0x0) ||
         ((uint)(iVar16 - (int)piStack_200 >> 2) <= (uint)((int)puVar3 - (int)piStack_200 >> 2))) {
        FUN_006cf230(&stack0xfffffdfc,puVar3,1,(undefined4 *)&stack0xfffffd90);
      }
      else {
        *puVar3 = piVar4;
        puVar3 = puVar3 + 1;
      }
      (**(code **)(*piVar4 + 0x14))();
      pfVar13 = pfVar13 + 1;
    } while (pfVar13 != *(float **)(puVar8 + 8));
  }
  iVar16 = iStack_1e0;
  cVar1 = param_1[0x500];
  iVar14 = 0;
  puStack_250 = (undefined4 *)0x43960000;
  piStack_1c4 = *(int **)(*(int *)(param_1 + 0x358) + 0x9c);
  if ((cVar1 != '\0') != 0xfffffffc) {
    puVar3 = (undefined4 *)(*(float *)(*(int *)(param_1 + 0x358) + 0xc0) + 40.0);
    do {
      if (iVar16 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iStack_1dc - iVar16 >> 2;
      }
      if (iVar14 < iVar9) {
        puStack_250 = (undefined4 *)
                      ((*(float *)(*(int *)(iVar16 + iVar14 * 4) + 0xe4) -
                       *(float *)(*(int *)(param_1 + 0x358) + 0x9c)) + 2.0);
      }
      else {
        puStack_250 = (undefined4 *)((float)puStack_250 + 61.0);
      }
      fStack_1e8 = (float)piStack_1c4 + (float)puStack_250;
      puStack_1ec = puVar3;
      FUN_007be450((void *)(*(int *)(param_1 + 0x430) + 0x344),&puStack_1ec,
                   (undefined4 *)&stack0xfffffe0c);
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)((cVar1 != '\0') + 4));
  }
  puVar8 = FUN_00855800(*(uint *)(param_1 + 0x4e8),param_1[0x500]);
  FUN_007c4120(&ppiStack_220,(int)puVar8);
  uStack_114 = CONCAT31(uStack_114._1_3_,0x15);
  if ((*(int *)(param_1 + 0x4e8) == 9) && (iVar16 = FUN_0085c560(), 1 < iVar16)) {
    iVar14 = FUN_008558a0();
    FUN_007c3a00(&ppiStack_220,piStack_218,*(undefined4 **)(iVar14 + 4),*(undefined4 **)(iVar14 + 8)
                );
    if (2 < iVar16) {
      iVar16 = FUN_008558b0();
      FUN_007c3a00(&ppiStack_220,piStack_218,*(undefined4 **)(iVar16 + 4),
                   *(undefined4 **)(iVar16 + 8));
    }
  }
  if (piStack_21c != piStack_218) {
    piVar7 = piStack_218 + -0x10;
    piVar4 = piStack_21c;
    do {
      piVar10 = FUN_007c2f90(piVar4);
      (**(code **)(*piVar10 + 0x5c))();
      (**(code **)(*piVar10 + 100))();
      (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
      if (piVar4 != piVar7) {
        piStack_210 = (int *)((float)piVar10[0x39] + 1.5);
        uStack_20c = 0x442dc000;
        piStack_214 = (int *)0x43d58000;
        piStack_208 = piStack_210;
        FUN_007be450((void *)(*(int *)(param_1 + 0x430) + 0x344),&piStack_214,&uStack_20c);
      }
      (**(code **)(*piVar10 + 0x14))();
      piVar4 = piVar4 + 0x10;
    } while (piVar4 != piStack_218);
  }
  puVar3 = operator_new(0x398);
  if (puVar3 == (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
    piVar4 = piStack_200;
  }
  else {
    puStack_240 = auStack_234;
    auStack_234[0] = auStack_234[0] & 0xffffff00;
    puStack_23c = (undefined4 *)0x0;
    pcStack_238 = (char *)0x20;
    puVar15 = puVar3;
    puStack_240 = _malloc(0x20);
    _strncpy((char *)puStack_240,"ui/lifetimeaward_sig.dds",0x18);
    puStack_23c = (undefined4 *)0x18;
    *(char *)(puStack_240 + 6) = '\0';
    uStack_114 = CONCAT31(uStack_114._1_3_,0x17);
    piStack_200 = (int *)0x1;
    puVar11 = FUN_0069dac0(puVar3,&puStack_240,0);
    piVar4 = (int *)0x1;
    puVar3 = puVar15;
  }
  uStack_114 = 0x18;
  (**(code **)(*(int *)(param_1 + 0x3ec) + 4))();
  *(undefined4 **)(param_1 + 0x400) = puVar11;
  (*(code *)**(undefined4 **)(param_1 + 0x3ec))();
  uStack_114 = 0x15;
  if ((((uint)piVar4 & 1) != 0) &&
     (piVar4 = (int *)((uint)piVar4 & 0xfffffffe), piStack_200 = piVar4, &DAT_00000014 < pcStack_238
     )) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_240);
  }
  FUN_0069dce0(*(void **)(param_1 + 0x400),8,4,2,0x42c80000);
  *(undefined1 *)(*(int *)(param_1 + 0x400) + 0x390) = 1;
  _Dest = param_1;
  (**(code **)(**(int **)(param_1 + 0x400) + 0x5c))();
  (**(code **)(**(int **)(param_1 + 0x400) + 100))();
  (**(code **)(**(int **)(param_1 + 0x400) + 0x74))();
  (**(code **)(**(int **)(param_1 + 0x358) + 0xc))();
  pvVar12 = operator_new(0x360);
  puVar11 = (undefined4 *)0x0;
  if (pvVar12 != (void *)0x0) {
    uStack_260 = 0x20;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ui/lifetimeaward_rosettebig.dds",0x1f);
    _Dest[0x1f] = '\0';
    piVar4 = (int *)((uint)piVar4 | 2);
    puVar11 = FUN_0069d820(pvVar12,(undefined4 *)&stack0xfffffd98,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)(param_1 + 0x3bc) + 4))();
  *(undefined4 **)(param_1 + 0x3d0) = puVar11;
  (*(code *)**(undefined4 **)(param_1 + 0x3bc))();
  if ((((uint)piVar4 & 2) != 0) && (0x14 < uStack_260)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x370) + 0xc))();
  if (param_1[0x4f0] == '\0') {
    iVar16 = FUN_008666a0(param_1[0x500]);
    if (*(int *)(param_1 + 0x4e8) <= iVar16) {
      FUN_0069db50(*(int *)(param_1 + 0x400),extraout_EDX,7);
      (**(code **)(**(int **)(param_1 + 0x3d0) + 0x20))();
    }
    if ((param_1[0x4f0] == '\0') &&
       (iVar16 = FUN_008666a0(param_1[0x500]), *(int *)(param_1 + 0x4e8) <= iVar16)) {
      uVar2 = 0x3f800000;
      goto LAB_007c5b5f;
    }
  }
  uVar2 = 0;
LAB_007c5b5f:
  *(undefined4 *)(param_1 + 0x4ec) = uVar2;
  if (puStack_250 == (undefined4 *)0x0) {
    if (piStack_214 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_214);
    }
    ExceptionList = puStack_150;
    return;
  }
  if (puStack_250 != puVar3) {
    puVar11 = puStack_250 + 8;
    do {
      if (0x14 < (uint)puVar11[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar11);
      }
      if (0x14 < (uint)puVar11[-6]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar11[-8]);
      }
      puVar15 = puVar11 + 8;
      puVar11 = puVar11 + 0x10;
    } while (puVar15 != puVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_250);
}


//// FUNCTION FUN_007c5be0 @ 007c5be0 ////

void __fastcall FUN_007c5be0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  
  (**(code **)(*(int *)param_1[0xd6] + 0xa8))();
  puVar2 = (undefined4 *)param_1[0xf4];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xef] + 4))();
    param_1[0xf4] = 0;
    (**(code **)param_1[0xef])();
  }
  FUN_0069b050((int)(param_1 + 0x111));
  FUN_007c4c70((char *)param_1);
  FUN_007c23e0((int)param_1);
  do {
    cVar3 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar3 != '\0');
  return;
}


//// FUNCTION FUN_007c5c50 @ 007c5c50 ////

void __thiscall FUN_007c5c50(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int extraout_ECX;
  int iVar2;
  uint unaff_EBP;
  int *piVar3;
  uint uVar4;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  undefined1 auStack_6c [20];
  char *pcStack_58;
  size_t sStack_54;
  uint uStack_50;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf12d;
  local_c = ExceptionList;
  piVar3 = (int *)0x0;
  if (param_1 == *(int *)((int)this + 0x4e8)) {
    return;
  }
  ExceptionList = &local_c;
  (**(code **)(**(int **)((int)this + 0x370) + 0x20))(0);
  this_00 = operator_new(0x490);
  if (this_00 != (void *)0x0) {
    FUN_0048f010(&stack0xffffff80,&pcStack_58);
    puStack_78 = auStack_6c;
    auStack_6c[0] = 0;
    uStack_74 = 0;
    uStack_70 = 0x14;
    puStack_8 = (undefined1 *)0x2;
    unaff_EBP = 3;
    FUN_004073f0(&puStack_78,pcStack_58,sStack_54);
    FUN_004073f0(&puStack_78,"big.dds",7);
    iVar2 = *(int *)((int)this + 0x438);
    uVar4 = *(int *)((int)this + 0x4e8) - 1;
    if ((iVar2 == 0) || ((uint)((*(int *)((int)this + 0x43c) - iVar2) / 0x18) <= uVar4)) {
      FUN_007c38d0();
    }
    piVar3 = FUN_007c3560(this_00,(undefined4 *)((int)this + 0x454),
                          (undefined4 *)(*(int *)(iVar2 + uVar4 * 0x18 + 0x14) + 0x7c),&puStack_78,9
                         );
  }
  if (((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, 0x14 < uStack_70)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_78);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (((unaff_EBP & 1) != 0) && (0x14 < uStack_50)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_58);
  }
  iVar2 = *(int *)((int)this + 0x438);
  uVar4 = *(int *)((int)this + 0x4e8) - 1;
  if ((iVar2 == 0) || ((uint)((*(int *)((int)this + 0x43c) - iVar2) / 0x18) <= uVar4)) {
    FUN_007c38d0();
    iVar2 = extraout_ECX;
  }
  (**(code **)(*piVar3 + 0x70))(*(undefined4 *)(iVar2 + 0x14 + uVar4 * 0x18),0);
  (**(code **)(**(int **)((int)this + 0x388) + 0xc))(piVar3,1);
  puVar1 = operator_new(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_00d56bf0;
    puVar1[1] = this;
    puVar1[2] = FUN_007c41f0;
    puVar1[3] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)piVar3[0x120]);
}


//// FUNCTION FUN_007c6230 @ 007c6230 ////

void __thiscall
FUN_007c6230(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  void *this_00;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint unaff_EBX;
  void *unaff_ESI;
  char *pcVar7;
  bool bVar8;
  char *local_94;
  undefined4 local_90;
  uint local_8c;
  char local_88 [20];
  undefined1 *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [20];
  undefined1 *local_54;
  void *local_50;
  void *local_4c [2];
  uint local_44;
  void *pvStack_3c;
  undefined1 uStack_34;
  int iStack_1c;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdf1bf;
  pvStack_c = ExceptionList;
  local_74 = local_68;
  local_68[0] = 0;
  local_70 = 0;
  local_6c = 0x14;
  local_4 = 0;
  pcVar7 = "AWARDS_SCREEN_STUNTRANK_";
  if (*(char *)((int)this + 0x500) == '\0') {
    pcVar7 = "AWARDS_SCREEN_RANK_";
  }
  pcVar2 = pcVar7;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_004073f0(&local_74,pcVar7,(int)pcVar2 - (int)(pcVar7 + 1));
  sVar3 = _sprintf((char *)local_4c,(char *)&param_2_00d1b93c);
  FUN_004073f0(&local_74,(char *)local_4c,sVar3);
  this_00 = operator_new(0x420);
  bVar8 = this_00 == (void *)0x0;
  local_50 = this_00;
  if (bVar8) {
    piVar5 = (int *)0x0;
  }
  else {
    local_94 = local_88;
    local_88[0] = '\0';
    local_90 = 0;
    local_8c = 0x20;
    local_94 = _malloc(0x20);
    _strncpy(local_94,"lifetimeaward_certsmall",0x17);
    local_90 = 0x17;
    local_94[0x17] = '\0';
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar4 = FUN_009b5030(local_4c,&local_74);
    local_4 = 3;
    local_54 = &stack0xffffff48;
    piVar5 = FUN_0069fb10(this_00,(int *)&local_94,puVar4,param_4,param_3,0,0,0x3f800000,0x3f800000)
    ;
  }
  if ((!bVar8) && (10 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  local_4 = 0;
  if ((!bVar8) && (0x14 < local_8c)) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  (**(code **)(*piVar5 + 100))();
  (**(code **)(*piVar5 + 0x5c))();
  (**(code **)(*piVar5 + 0x18))(0,&LAB_007c5ef0,this);
  if (*(char *)((int)this + 0x4f0) == '\0') {
    iVar6 = FUN_008666a0(*(char *)((int)this + 0x500));
    if (iVar6 < iStack_14) goto LAB_007c645d;
    if (*(char *)((int)this + 0x4f0) != '\0') goto LAB_007c6440;
  }
  else {
LAB_007c6440:
    iVar6 = FUN_007bd2e0(DAT_0104e8a4,*(char *)((int)this + 0x500));
    if (iVar6 < iStack_14) {
LAB_007c645d:
      (**(code **)(*piVar5 + 0xc0))(0);
    }
  }
  (**(code **)(*(int *)this + 0xc))(piVar5,2);
  piVar5 = piVar5 + 6;
  iVar6 = *piVar5;
  *(undefined1 **)(*piVar5 + 4) = &stack0xffffff40;
  *piVar5 = (int)&stack0xffffff40;
  uStack_34 = 6;
  FUN_006ea220((void *)((int)this + 0x434),(int)&stack0xffffff3c);
  uStack_34 = 0;
  if (piVar5 != (int *)0x0) {
    *piVar5 = iVar6;
  }
  if (iVar6 != 0) {
    *(int **)(iVar6 + 4) = piVar5;
  }
  if (*(char *)((int)this + 0x4f0) == '\0') {
    iVar6 = FUN_008666a0(*(char *)((int)this + 0x500));
    if (iVar6 <= iStack_1c) {
      if (*(char *)((int)this + 0x4f0) == '\0') goto LAB_007c6531;
      goto LAB_007c650c;
    }
  }
  else {
LAB_007c650c:
    iVar6 = FUN_007bd2e0(DAT_0104e8a4,*(char *)((int)this + 0x500));
    if (iVar6 <= iStack_1c) goto LAB_007c6531;
  }
  FUN_007c3e70(this,param_5 + 1);
LAB_007c6531:
  if (0x14 < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  ExceptionList = pvStack_3c;
  return;
}


//// FUNCTION FUN_007c6560 @ 007c6560 ////

void __fastcall FUN_007c6560(void *param_1)

{
  uint uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = 0;
  do {
    if ((int)uVar1 < 8) {
      local_c = 0x42d20000;
      local_10 = 0x42b80000;
      local_4 = (float)(uVar1 % 2) * 100.0 + 774.0;
      local_8 = (float)(uVar1 / 2) * 103.0 + 123.0;
    }
    else {
      local_c = 0x431b0000;
      local_10 = 0x43090000;
      local_4 = 799.0;
      local_8 = 525.0;
    }
    FUN_007c6230(param_1,local_4,local_8,local_c,local_10,uVar1);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 9);
  return;
}


//// FUNCTION FUN_007c6610 @ 007c6610 ////

void __fastcall FUN_007c6610(void *param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  do {
    FUN_007c6230(param_1,0x4447c000,(float)local_4 * 148.0 + 123.0,0x431b0000,0x43090000,local_4);
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  return;
}


//// FUNCTION FUN_007c6660 @ 007c6660 ////

void __fastcall FUN_007c6660(void **param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  void *this;
  int *piVar6;
  uint unaff_EBX;
  void *unaff_ESI;
  bool bVar7;
  char *pcStack_128;
  void **ppvVar8;
  wchar_t *pwStack_110;
  void *pvStack_10c;
  void **ppvStack_108;
  undefined1 *puStack_100;
  void *pvStack_fc;
  undefined1 *puStack_f8;
  uint *puStack_f4;
  undefined4 uStack_f0;
  void **ppvStack_ec;
  uint auStack_e8 [2];
  void **ppvStack_e0;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *local_9c;
  void *local_98;
  undefined1 *local_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_58;
  char *pcStack_30;
  size_t sStack_2c;
  uint uStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf31c;
  pvStack_c = ExceptionList;
  local_9c = (char *)0x0;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x50);
  local_4 = 0;
  local_98 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    local_94 = &stack0xffffff34;
    pcVar9 = &stack0xffffff40;
    uVar10 = 0;
    uVar11 = 0x14;
    FUN_004015d0(&stack0xffffff34,"ui/lifetimeawards_bg.dds",0x18);
    FUN_005e4a50(pvVar2,pcVar9,uVar10,uVar11);
  }
  local_4 = 0xffffffff;
  (**(code **)((int)*param_1 + 0xa0))();
  pvVar2 = operator_new(0x360);
  local_98 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    local_9c = "ui/stuntaward_cert";
    if (*(char *)(param_1 + 0x140) == '\0') {
      local_9c = "ui/lifetimeaward_cert";
    }
    FUN_0048f010(&local_9c,&pcStack_30);
    local_94 = auStack_88;
    auStack_88[0] = 0;
    uStack_90 = 0;
    uStack_8c = 0x14;
    local_9c = &stack0xffffff40;
    puStack_8 = (undefined1 *)0x3;
    unaff_EBX = 3;
    uVar13 = 0x3f800000;
    uVar14 = 0x3f800000;
    uVar10 = 0;
    uVar12 = 0;
    FUN_004073f0(&local_94,pcStack_30,sStack_2c);
    FUN_004073f0(&local_94,"big.dds",7);
    puVar3 = FUN_0069d820(pvVar2,&local_94,uVar10,uVar12,uVar13,uVar14);
  }
  puStack_8 = (undefined1 *)0x5;
  (**(code **)((int)param_1[0xd7] + 4))();
  param_1[0xdc] = puVar3;
  (**(code **)param_1[0xd7])();
  if (((unaff_EBX & 2) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffd, 0x14 < uStack_8c)) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (((unaff_EBX & 1) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffe, 0x14 < uStack_28)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_30);
  }
  (**(code **)(*(int *)param_1[0xdc] + 0x5c))();
  pvVar2 = (void *)0x1;
  (**(code **)(*(int *)param_1[0xdc] + 100))();
  (**(code **)(*(int *)param_1[0xdc] + 0x74))();
  (**(code **)((int)*param_1 + 0xc))();
  do {
    ppvStack_e0 = (void **)0x7c687d;
    cVar1 = (**(code **)((int)*param_1 + 0x50))();
  } while (cVar1 != '\0');
  ppvStack_e0 = (void **)0x7c6896;
  FUN_007c1f70(param_1 + 0x115,(undefined4 *)((int)param_1[0xdc] + 0x7c));
  ppvStack_e0 = (void **)0x7c68a0;
  puVar3 = operator_new(0x344);
  pcStack_30 = (char *)0x6;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puVar3);
  }
  pcStack_30 = (char *)0xffffffff;
  (**(code **)((int)param_1[0xd1] + 4))();
  param_1[0xd6] = puVar3;
  (**(code **)param_1[0xd1])();
  auStack_e8[1] = 1;
  auStack_e8[0] = 0x7c68f7;
  ppvStack_e0 = param_1;
  (**(code **)(*(int *)param_1[0xd6] + 0x5c))();
  auStack_e8[0] = 0x42300000;
  uStack_f0 = 1;
  puStack_f4 = (uint *)0x7c690a;
  ppvStack_ec = param_1;
  (**(code **)(*(int *)param_1[0xd6] + 100))();
  puStack_f4 = (uint *)0x4429c000;
  puStack_f8 = (undefined1 *)0x441f8000;
  pvStack_fc = (void *)0x7c691f;
  (**(code **)(*(int *)param_1[0xd6] + 0x74))();
  puStack_100 = param_1[0xd6];
  pvStack_fc = (void *)0x1;
  (**(code **)(*(int *)param_1[0xdc] + 0xc))();
  puVar3 = param_1[0xfa];
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = puVar3 + 0x12;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      ppvStack_108 = (void **)0x7c6948;
      (**(code **)*puVar3)();
    }
    (**(code **)((int)param_1[0xf5] + 4))();
    param_1[0xfa] = (void *)0x0;
    (**(code **)param_1[0xf5])();
  }
  ppvStack_108 = (void **)0x7c696c;
  ppvStack_ec = operator_new(0x344);
  uStack_58 = 7;
  if (ppvStack_ec == (void **)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(ppvStack_ec);
  }
  uStack_58 = 0xffffffff;
  (**(code **)((int)param_1[0xf5] + 4))();
  param_1[0xfa] = puVar3;
  (**(code **)param_1[0xf5])();
  pvStack_10c = (void *)0x7c69c1;
  ppvStack_108 = param_1;
  (**(code **)(*(int *)param_1[0xfa] + 0x70))();
  pwStack_110 = param_1[0xfa];
  pvStack_10c = (void *)0x1;
  (**(code **)((int)*param_1 + 0xc))();
  FUN_006e80c0((int)(param_1 + 0x10d));
  if (*(char *)(param_1 + 0x140) == '\0') {
    FUN_007c6560(param_1);
  }
  else {
    FUN_007c6610(param_1);
  }
  pvVar4 = operator_new(0x360);
  uStack_68 = 8;
  pvStack_fc = pvVar4;
  if (pvVar4 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puStack_f4 = auStack_e8;
    auStack_e8[0] = auStack_e8[0] & 0xffffff00;
    uStack_f0 = 0;
    ppvStack_ec = (void **)&DAT_00000014;
    _strncpy((char *)puStack_f4,"ui/logoglow.dds",0xf);
    uStack_f0 = 0xf;
    *(char *)((int)puStack_f4 + 0xf) = '\0';
    puStack_f8 = &stack0xfffffee0;
    puStack_100 = (undefined1 *)((uint)puStack_100 | 4);
    uStack_68 = CONCAT31(uStack_68._1_3_,9);
    pcStack_128 = (char *)0x7c6a80;
    puVar3 = FUN_0069d820(pvVar4,&puStack_f4,0,0,0x3f800000,0x3f800000);
  }
  uStack_68 = 10;
  (**(code **)((int)param_1[0x101] + 4))();
  param_1[0x106] = puVar3;
  (**(code **)param_1[0x101])();
  uStack_68 = 0xffffffff;
  if ((((uint)puStack_100 & 4) != 0) &&
     (puStack_100 = (undefined1 *)((uint)puStack_100 & 0xfffffffb), &DAT_00000014 < ppvStack_ec)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_f4);
  }
  *(uint *)((int)param_1[0x106] + 0x114) = *(uint *)((int)param_1[0x106] + 0x114) & 0xfffffffd;
  pvVar4 = param_1[0x106];
  (**(code **)((int)*param_1 + 0xc))();
  puVar3 = operator_new(0x344);
  uStack_70 = 0xb;
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_007432f0(puVar3);
  }
  uStack_70 = 0xffffffff;
  (**(code **)((int)param_1[0xdd] + 4))();
  param_1[0xe2] = puVar5;
  (**(code **)param_1[0xdd])();
  ppvVar8 = param_1;
  (**(code **)(*(int *)param_1[0xe2] + 0x70))();
  pcStack_128 = param_1[0xe2];
  (**(code **)((int)*param_1 + 0xc))();
  FUN_007c2e00((int *)param_1);
  if ((*(char *)(param_1 + 0x140) == '\0') &&
     (((cVar1 = FUN_007bd290(DAT_0104e8a4,'\0'), cVar1 == '\0' ||
       (cVar1 = FUN_007bd2d0((int)DAT_0104e8a4), cVar1 != '\0')) && (DAT_0104e7a3 != '\0')))) {
    pwStack_110 = L"<translate>AWARDS_TOOLTIP_SKIP</translate>";
  }
  else {
    pwStack_110 = L"<translate>AWARDS_TOOLTIP_CLOSE</translate>";
  }
  this = operator_new(0x420);
  ppvStack_ec = this;
  if (this == (void *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    FUN_00568cb0(&pwStack_110,&pvStack_10c);
    FUN_0048f010(&stack0xfffffeec,(undefined4 *)&stack0xffffff58);
    pvVar4 = (void *)((uint)pvVar4 | 0x18);
    uStack_80 = 0xe;
    piVar6 = FUN_0069fb10(this,(int *)&stack0xffffff58,&pvStack_10c,0x42580000,0x42580000,0,0,
                          0x3f800000,0x3f800000);
  }
  if ((((uint)pvVar4 & 0x10) != 0) &&
     (pvVar4 = (void *)((uint)pvVar4 & 0xffffffef), 0x14 < unaff_EBX)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  uStack_80 = 0xffffffff;
  if ((((uint)pvVar4 & 8) != 0) && (&lpType_0000000a < puVar3)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_10c);
  }
  (**(code **)(*piVar6 + 0x18))();
  (**(code **)(*piVar6 + 0x18))();
  (**(code **)(*piVar6 + 0x60))();
  (**(code **)(*piVar6 + 0x68))();
  (**(code **)((int)*param_1 + 0xc))();
  cVar1 = FUN_007bd290(DAT_0104e8a4,*(char *)(param_1 + 0x140));
  if ((cVar1 == '\0') || (cVar1 = FUN_007bd2d0((int)DAT_0104e8a4), cVar1 != '\0')) {
    pvVar4 = operator_new(0x420);
    bVar7 = pvVar4 == (void *)0x0;
    if (bVar7) {
      piVar6 = (int *)0x0;
    }
    else {
      ppvStack_108 = &pvStack_fc;
      pvStack_fc = (void *)((uint)pvStack_fc & 0xffff0000);
      puStack_100 = &lpType_0000000a;
      uVar11 = FUN_00ace02d(L"<translate>AWARDS_TOOLTIP_BACK</translate>");
      FUN_004036d0(&ppvStack_108,L"<translate>AWARDS_TOOLTIP_BACK</translate>",uVar11);
      pcStack_128 = &stack0xfffffee4;
      ppvVar8 = (void **)&DAT_00000014;
      _strncpy(pcStack_128,"button_left.",0xc);
      pcStack_128[0xc] = '\0';
      piVar6 = FUN_0069fb10(pvVar4,(int *)&pcStack_128,&ppvStack_108,0x42580000,0x42580000,0,0,
                            0x3f800000,0x3f800000);
    }
    if ((!bVar7) && (&DAT_00000014 < ppvVar8)) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_128);
    }
    if ((!bVar7) && (&lpType_0000000a < puStack_100)) {
                    /* WARNING: Subroutine does not return */
      _free(ppvStack_108);
    }
    (**(code **)(*piVar6 + 0x18))();
    (**(code **)(*piVar6 + 0x18))(5,&LAB_005f37f0,0,"AWARDS_BACK");
    (**(code **)(*piVar6 + 0x5c))(1,param_1,0x41600000);
    FUN_0073e5e0(piVar6,(int *)param_1);
    (**(code **)((int)*param_1 + 0xc))(piVar6,1);
  }
  FUN_007c4040((int)param_1);
  ExceptionList = pvVar2;
  return;
}


//// FUNCTION FUN_007c6ec0 @ 007c6ec0 ////

void ** __thiscall FUN_007c6ec0(void *this,void *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ulonglong uVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf3ee;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d5706c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d57054;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  local_4 = 0;
  *(undefined4 **)((int)this + 0x350) = (undefined4 *)((int)this + 0x344);
  *(undefined4 *)((int)this + 0x344) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 **)((int)this + 0x368) = (undefined4 *)((int)this + 0x35c);
  *(undefined4 *)((int)this + 0x35c) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 **)((int)this + 0x380) = (undefined4 *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x374) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 **)((int)this + 0x398) = (undefined4 *)((int)this + 0x38c);
  *(undefined4 *)((int)this + 0x38c) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 **)((int)this + 0x3b0) = (undefined4 *)((int)this + 0x3a4);
  *(undefined4 *)((int)this + 0x3a4) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 **)((int)this + 0x3c8) = (undefined4 *)((int)this + 0x3bc);
  *(undefined4 *)((int)this + 0x3bc) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 **)((int)this + 0x3e0) = (undefined4 *)((int)this + 0x3d4);
  *(undefined4 *)((int)this + 0x3d4) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 1000) = 0;
  *(undefined4 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 **)((int)this + 0x3f8) = (undefined4 *)((int)this + 0x3ec);
  *(undefined4 *)((int)this + 0x3ec) = &PTR_LAB_00d56d08;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 **)((int)this + 0x410) = (undefined4 *)((int)this + 0x404);
  *(undefined4 *)((int)this + 0x404) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x424) = 0;
  *(undefined4 **)((int)this + 0x428) = (undefined4 *)((int)this + 0x41c);
  *(undefined4 *)((int)this + 0x41c) = &PTR_LAB_00d56d18;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x43c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  FUN_00742090((undefined4 *)((int)this + 0x454));
  *(undefined1 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  *(char *)((int)this + 0x500) = param_2;
  DAT_0104e8a4 = param_1;
  pvVar5 = (void *)0x0;
  local_4 = CONCAT31(local_4._1_3_,0xd);
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 1;
  iVar2 = FUN_0071b2b0();
  FUN_00741d80(this,iVar2,pvVar5);
  cVar1 = FUN_007bd290(DAT_0104e8a4,param_2);
  if (cVar1 != '\0') {
    iVar2 = FUN_007bd300(DAT_0104e8a4,param_2);
    iVar3 = FUN_007bd2e0(DAT_0104e8a4,param_2);
    if (iVar3 < iVar2) {
      iVar2 = FUN_007bd2e0(DAT_0104e8a4,param_2);
      *(int *)((int)this + 0x4e8) = iVar2 + 1;
      uVar4 = FUN_00990ae0(extraout_ECX,extraout_EDX);
      *(int *)((int)this + 0x4f4) = (int)uVar4 + 0x5dc;
      *(undefined1 *)((int)this + 0x4f0) = 1;
      *(undefined1 *)((int)this + 0x4fa) = 0;
      *(undefined1 *)((int)this + 0x4fb) = 0;
      *(undefined1 *)((int)this + 0x4f9) = 0;
      goto LAB_007c7147;
    }
  }
  cVar1 = *(char *)((int)this + 0x500);
  iVar2 = FUN_008666a0(cVar1);
  if (iVar2 + 1 < (int)((-(uint)(cVar1 != '\0') & 0xfffffffa) + 9)) {
    iVar2 = FUN_008666a0(*(char *)((int)this + 0x500));
    iVar2 = iVar2 + 1;
  }
  else {
    iVar2 = (-(uint)(*(char *)((int)this + 0x500) != '\0') & 0xfffffffa) + 9;
  }
  *(int *)((int)this + 0x4e8) = iVar2;
  *(undefined1 *)((int)this + 0x4f0) = 0;
LAB_007c7147:
  FUN_007c6660(this);
  FUN_007c5be0(this);
  uVar4 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_00);
  *(int *)((int)this + 0x4f4) = (int)uVar4 + 2000;
  FUN_0053d480((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007c7190 @ 007c7190 ////

void ** __cdecl FUN_007c7190(void *param_1,char param_2)

{
  void *this;
  void **ppvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf40b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x504);
  local_4 = 0;
  if (this != (void *)0x0) {
    ppvVar1 = FUN_007c6ec0(this,param_1,param_2);
    ExceptionList = local_c;
    return ppvVar1;
  }
  ExceptionList = local_c;
  return (void **)0x0;
}


//// FUNCTION FUN_007c7230 @ 007c7230 ////

undefined4 * __fastcall FUN_007c7230(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d574e4;
  param_1[0x14] = &PTR_FUN_00d574cc;
  return param_1;
}


//// FUNCTION FUN_007c7260 @ 007c7260 ////

undefined4 * __thiscall FUN_007c7260(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c7280 @ 007c7280 ////

void __fastcall FUN_007c7280(int *param_1)

{
  WWindow_Tick(param_1);
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_007c72c0 @ 007c72c0 ////

void __cdecl FUN_007c72c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *this;
  int *unaff_EBX;
  float10 fVar3;
  int **ppiVar4;
  void *pvVar5;
  int *piStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf42b;
  pvStack_c = ExceptionList;
  piStack_28 = (int *)0x7c72e4;
  ExceptionList = &pvStack_c;
  puVar2 = operator_new(0x3fc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_00833290(puVar2);
  }
  piStack_28 = param_1;
  local_4 = 0xffffffff;
  (**(code **)(*this + 0x5c))(1);
  (**(code **)(*this + 100))(1,param_1,(float)param_1[0x39] - (float)param_1[0x27]);
  FUN_00830550(this,6,"default");
  FUN_00830550(this,7,(char *)&pvStack_c);
  if ((char)puStack_8 == '\0') {
    ppiVar4 = &piStack_28;
    piStack_28 = (int *)0xff000000;
  }
  else {
    FUN_00830550(this,9,(char *)&puStack_8);
    ppiVar4 = (int **)&stack0xffffffec;
    unaff_EBX = (int *)0xffffffff;
  }
  FUN_00830550(this,8,(char *)ppiVar4);
  iVar1 = *this;
  fVar3 = (float10)(**(code **)(*param_1 + 0x10))();
  pvVar5 = (void *)(float)fVar3;
  (**(code **)(iVar1 + 0x78))();
  fVar3 = (float10)(**(code **)(*param_1 + 0x10))();
  this[0xd5] = (int)(float)fVar3;
  *(undefined1 *)(this + 0xd6) = 1;
  (**(code **)(*this + 0x54))(unaff_EBX);
  (**(code **)(*this + 0x8c))(0);
  (**(code **)(*param_1 + 0xc))(this,1);
  (**(code **)(*param_1 + 0x8c))(0);
  ExceptionList = pvVar5;
  return;
}


//// FUNCTION FUN_007c7650 @ 007c7650 ////

undefined4 * __fastcall FUN_007c7650(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d5760c;
  param_1[0x14] = &PTR_FUN_00d575f0;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd1] = &PTR_FUN_00d18c2c;
  param_1[0xd6] = 0;
  param_1[0xd4] = param_1 + 0xd1;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd7] = &PTR_FUN_00d2d110;
  param_1[0xdc] = 0;
  param_1[0xda] = param_1 + 0xd7;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = param_1 + 0xdd;
  param_1[0xdd] = &PTR_FUN_00d2d110;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0x3f800000;
  param_1[0xe5] = 0;
  param_1[0xe7] = 0x46;
  return param_1;
}


//// FUNCTION FUN_007c7700 @ 007c7700 ////

undefined4 * FUN_007c7700(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf44b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x3a0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007c7650(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007c7760 @ 007c7760 ////

void __thiscall FUN_007c7760(void *this,int param_1,char param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *_Dest;
  void *pvVar4;
  undefined **ppuVar5;
  int iVar6;
  size_t sVar7;
  char *unaff_EBX;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 *_Memory;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *local_138;
  char *pcStack_134;
  uint uStack_130;
  uint uStack_12c;
  char acStack_128 [12];
  undefined1 *puStack_11c;
  void *pvStack_118;
  char *pcStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  char acStack_108 [20];
  void *pvStack_f4;
  undefined1 *puStack_f0;
  void *apvStack_ec [2];
  uint uStack_e4;
  undefined4 *puStack_d4;
  undefined4 uStack_d0;
  undefined2 *puStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined2 auStack_c0 [6];
  void *apvStack_b4 [2];
  undefined1 *puStack_ac;
  uint uStack_a4;
  void *apvStack_8c [2];
  uint uStack_84;
  void *pvStack_6c;
  uint uStack_64;
  void *apvStack_54 [2];
  undefined1 *apuStack_4c [2];
  uint uStack_44;
  undefined4 uStack_2c;
  int iStack_24;
  char cStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf590;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != *(int *)((int)this + 0x39c)) {
    puVar3 = *(undefined4 **)((int)this + 0x358);
    ExceptionList = &pvStack_c;
    *(int *)((int)this + 0x39c) = param_1;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)();
      }
      (**(code **)(*(int *)((int)this + 0x344) + 4))();
      *(undefined4 *)((int)this + 0x358) = 0;
      (*(code *)**(undefined4 **)((int)this + 0x344))();
    }
    local_138 = operator_new(0x344);
    uStack_4 = 0;
    if (local_138 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_007432f0(local_138);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 0x344) + 4))();
    *(undefined4 **)((int)this + 0x358) = puVar3;
    (*(code *)**(undefined4 **)((int)this + 0x344))();
    uVar14 = 1;
    (**(code **)(**(int **)((int)this + 0x358) + 0x5c))();
    _Dest = this;
    (**(code **)(**(int **)((int)this + 0x358) + 100))();
    (**(code **)(**(int **)((int)this + 0x358) + 0x74))();
    (**(code **)(*(int *)this + 0xc))();
    if (cStack_20 == '\0') {
      uStack_130 = uStack_130 & 0xffffff00;
      pcStack_134 = (char *)0x20;
      unaff_EBX = _malloc(0x20);
      _strncpy(unaff_EBX,"AWARDS_SCREEN_NEXTUP",0x14);
      local_138 = (undefined4 *)&DAT_00000014;
      unaff_EBX[0x14] = '\0';
      uStack_2c = 3;
      puVar3 = FUN_009b5030(apvStack_54,(undefined4 *)&stack0xfffffec4);
      uVar13 = 0xc;
    }
    else {
      uVar14 = 0x20;
      _Dest = _malloc(0x20);
      _strncpy(_Dest,"AWARDS_SCREEN_NEWAWARD",0x16);
      _Dest[0x16] = '\0';
      uStack_2c = 1;
      puVar3 = FUN_009b5030(apvStack_b4,(undefined4 *)&stack0xfffffea4);
      uVar13 = 3;
    }
    puStack_d4 = &uStack_c8;
    uStack_c8 = (uint)uStack_c8._2_2_ << 0x10;
    uStack_d0 = 0;
    puStack_cc = (undefined2 *)0xa;
    FUN_004036d0(&puStack_d4,(wchar_t *)*puVar3,puVar3[1]);
    if (((uVar13 & 8) != 0) && (uVar13 = uVar13 & 0xfffffff7, &lpType_0000000a < apuStack_4c[0])) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_54[0]);
    }
    if (((uVar13 & 4) != 0) && (uVar13 = uVar13 & 0xfffffffb, &DAT_00000014 < pcStack_134)) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    if (((uVar13 & 2) != 0) && (uVar13 = uVar13 & 0xfffffffd, &lpType_0000000a < puStack_ac)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_b4[0]);
    }
    uStack_2c = 5;
    if (((uVar13 & 1) != 0) && (0x14 < uVar14)) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    FUN_007c72c0(*(int **)((int)this + 0x358));
    FUN_00861de0(&pcStack_114,iStack_24);
    uStack_2c._0_1_ = 8;
    FUN_007c72c0(*(int **)((int)this + 0x358));
    uStack_2c._0_1_ = 5;
    if (10 < uStack_10c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_114);
    }
    pvVar4 = operator_new(0x360);
    uStack_2c._0_1_ = 9;
    pvStack_118 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puStack_11c = &stack0xfffffe80;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0x3f800000;
      uVar12 = 0x3f800000;
      puVar3 = FUN_00861fb0(iStack_24);
      puVar3 = FUN_0069d820(pvVar4,puVar3,uVar9,uVar10,uVar11,uVar12);
    }
    uStack_2c = CONCAT31(uStack_2c._1_3_,5);
    (**(code **)(*(int *)((int)this + 0x374) + 4))();
    *(undefined4 **)((int)this + 0x388) = puVar3;
    (*(code *)**(undefined4 **)((int)this + 0x374))();
    (**(code **)(**(int **)((int)this + 0x388) + 100))();
    (**(code **)(**(int **)((int)this + 0x388) + 0x74))(0x42c80000);
    FUN_0073e590(*(void **)((int)this + 0x388),*(int **)((int)this + 0x358));
    (**(code **)(**(int **)((int)this + 0x358) + 0xc))(*(undefined4 *)((int)this + 0x388),1);
    (**(code **)(**(int **)((int)this + 0x358) + 0x8c))(0);
    _Memory = &stack0xfffffe90;
    uVar14 = 0x14;
    apuStack_4c[0]._0_1_ = 10;
    FUN_004073f0(&stack0xfffffe84,"AWARDSNEW_",10);
    ppuVar5 = FUN_00860970(uStack_44);
    FUN_004073f0(&stack0xfffffe84,*ppuVar5,(size_t)ppuVar5[1]);
    FUN_004073f0(&stack0xfffffe84,"_HINT",5);
    FUN_009b5030(apvStack_b4,(undefined4 *)&stack0xfffffe84);
    apuStack_4c[0] = (undefined1 *)CONCAT31(apuStack_4c[0]._1_3_,0xc);
    if (0x14 < uVar14) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    FUN_007c72c0(*(int **)((int)this + 0x358));
    iVar6 = **(int **)((int)this + 0x358);
    fVar8 = (float10)(**(code **)(iVar6 + 0x14))();
    (**(code **)(iVar6 + 0x7c))((float)(fVar8 + (float10)20.0));
    pcStack_114 = acStack_108;
    acStack_108[0] = '\0';
    uStack_110 = 0;
    uStack_10c = 0x20;
    pcStack_114 = _malloc(0x20);
    _strncpy(pcStack_114,"AWARDS_SCREEN_WINNERBONUS",0x19);
    uStack_110 = 0x19;
    pcStack_114[0x19] = '\0';
    uStack_4._0_1_ = 0xd;
    FUN_009b5030(apvStack_ec,&pcStack_114);
    uStack_4._0_1_ = 0xe;
    FUN_007c72c0(*(int **)((int)this + 0x358));
    if (10 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ec[0]);
    }
    uStack_4._0_1_ = 0xc;
    if (0x14 < uStack_10c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_114);
    }
    iVar6 = Award_GetBonusIndex();
    puStack_cc = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 0;
    uStack_c4 = 10;
    uStack_4._0_1_ = 0xf;
    puVar3 = FUN_00859f50(apvStack_8c,iVar6);
    pcStack_134 = acStack_128;
    acStack_128[0] = '\0';
    uStack_130 = 0;
    uStack_12c = 0x14;
    uStack_4._0_1_ = 0x11;
    FUN_004073f0(&pcStack_134,"AWARDSNEW_BONUS_",0x10);
    FUN_004073f0(&pcStack_134,(char *)*puVar3,puVar3[1]);
    puVar3 = FUN_009b5030(apvStack_ec,&pcStack_134);
    sVar7 = FUN_00ace02d((short *)&DAT_00d3445c);
    FUN_0040cae0(&puStack_cc,L"<b>",sVar7);
    FUN_0040cae0(&puStack_cc,(wchar_t *)*puVar3,puVar3[1]);
    sVar7 = FUN_00ace02d(L"</b>");
    FUN_0040cae0(&puStack_cc,L"</b>",sVar7);
    if (10 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ec[0]);
    }
    if (0x14 < uStack_12c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_134);
    }
    uStack_4._0_1_ = 0xf;
    if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_8c[0]);
    }
    FUN_007c72c0(*(int **)((int)this + 0x358));
    puVar3 = FUN_00859f50(apvStack_ec,iVar6);
    pcStack_114 = acStack_108;
    acStack_108[0] = '\0';
    uStack_110 = 0;
    uStack_10c = 0x14;
    uStack_4._0_1_ = 0x13;
    FUN_004073f0(&pcStack_114,"AWARDSNEW_BONUS_DESC_",0x15);
    FUN_004073f0(&pcStack_114,(char *)*puVar3,puVar3[1]);
    FUN_009b5030(apuStack_4c,&pcStack_114);
    if (0x14 < uStack_10c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_114);
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,0x15);
    if (0x14 < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_ec[0]);
    }
    FUN_007c72c0(*(int **)((int)this + 0x358));
    puVar3 = *(undefined4 **)((int)this + 0x370);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)();
      }
      (**(code **)(*(int *)((int)this + 0x35c) + 4))();
      *(undefined4 *)((int)this + 0x370) = 0;
      (*(code *)**(undefined4 **)((int)this + 0x35c))();
    }
    if (param_2 != '\0') {
      pvVar4 = operator_new(0x360);
      pvStack_f4 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        pcStack_134 = acStack_128;
        acStack_128[0] = '\0';
        uStack_130 = 0;
        uStack_12c = 0x14;
        _strncpy(pcStack_134,"ui/logoglow.dds",0xf);
        uStack_130 = 0xf;
        pcStack_134[0xf] = '\0';
        puStack_f0 = &stack0xfffffea8;
        local_138 = (undefined4 *)((uint)local_138 | 0x10);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x18);
        puVar3 = FUN_0069d820(pvVar4,&pcStack_134,0,0,0x3f800000,0x3f800000);
      }
      uStack_4 = 0x19;
      (**(code **)(*(int *)((int)this + 0x35c) + 4))();
      *(undefined4 **)((int)this + 0x370) = puVar3;
      (*(code *)**(undefined4 **)((int)this + 0x35c))();
      uStack_4 = 0x15;
      if ((((uint)local_138 & 0x10) != 0) && (0x14 < uStack_12c)) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_134);
      }
      puVar2 = (uint *)(*(int *)((int)this + 0x370) + 0x114);
      *puVar2 = *puVar2 & 0xfffffffd;
      (**(code **)(**(int **)((int)this + 0x358) + 0xc))();
      *(undefined4 *)((int)this + 0x398) = 0;
    }
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(apuStack_4c[0]);
    }
    if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_cc);
    }
    if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_6c);
    }
    uStack_4 = 0xffffffff;
    if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_ac);
    }
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x390) = 0xbf800000;
  (**(code **)(*(int *)this + 8))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007c80d0 @ 007c80d0 ////

undefined4 * __thiscall FUN_007c80d0(void *this,byte param_1)

{
  FUN_007c80f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c80f0 @ 007c80f0 ////

void __fastcall FUN_007c80f0(undefined4 *param_1)

{
  param_1[0xdd] = &PTR_FUN_00d2d110;
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
  param_1[0xd7] = &PTR_FUN_00d2d110;
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
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_007c82b0 @ 007c82b0 ////

undefined4 * __fastcall FUN_007c82b0(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d577b0;
  return param_1;
}


//// FUNCTION FUN_007c82f0 @ 007c82f0 ////

int * __thiscall FUN_007c82f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007c8330 @ 007c8330 ////

int * __thiscall FUN_007c8330(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007c8370 @ 007c8370 ////

int * __thiscall FUN_007c8370(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007c83b0 @ 007c83b0 ////

void __fastcall FUN_007c83b0(int *param_1)

{
  void **ppvVar1;
  int iVar2;
  void *this;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 extraout_EDX;
  undefined4 *this_00;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf5b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  WWindow_Tick(param_1);
  (**(code **)(*param_1 + 0xd8))();
  puVar4 = (undefined4 *)param_1[0xd6];
  this_00 = (undefined4 *)0x0;
  if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 0x108) != '\0')) {
    if (puVar4 != (undefined4 *)0x0) {
      piVar3 = puVar4 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(param_1[0xd1] + 4))();
      param_1[0xd6] = 0;
      (**(code **)param_1[0xd1])();
    }
    ppvVar1 = FUN_007c7190(param_1 + 0xe4,'\0');
    (**(code **)(param_1[0xd7] + 4))();
    param_1[0xdc] = (int)ppvVar1;
    (**(code **)param_1[0xd7])();
    (**(code **)(*param_1 + 0xc))(param_1[0xdc],2);
  }
  if ((int *)param_1[0xdc] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1[0xdc] + 0xfc))();
    if (iVar2 == 1) {
      puVar4 = (undefined4 *)param_1[0xdc];
      if (puVar4 != (undefined4 *)0x0) {
        piVar3 = puVar4 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar4)(1);
        }
        (**(code **)(param_1[0xd7] + 4))();
        param_1[0xdc] = 0;
        (**(code **)param_1[0xd7])();
      }
      FUN_007bd3d0(param_1 + 0xe4);
    }
  }
  if ((int *)param_1[0xdc] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1[0xdc] + 0xfc))();
    if (iVar2 == 2) {
      puVar4 = (undefined4 *)param_1[0xdc];
      if (puVar4 != (undefined4 *)0x0) {
        piVar3 = puVar4 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar4)(1);
        }
        (**(code **)(param_1[0xd7] + 4))();
        param_1[0xdc] = 0;
        (**(code **)param_1[0xd7])();
      }
      piVar3 = param_1 + 0xe4;
      FUN_007bd3d0(piVar3);
      FUN_007bd360(piVar3,'\0');
      this = operator_new(0x454);
      uStack_4 = 0;
      if (this == (void *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = CeremonyController_Constructor(this,(int)piVar3);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(param_1[0xd1] + 4))();
      param_1[0xd6] = (int)piVar3;
      (**(code **)param_1[0xd1])();
      (**(code **)(*param_1 + 0xc))(param_1[0xd6],2);
    }
  }
  if ((int *)param_1[0xdc] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1[0xdc] + 0xfc))();
    if (iVar2 == 3) {
      puVar4 = (undefined4 *)param_1[0xdc];
      if (puVar4 != (undefined4 *)0x0) {
        piVar3 = puVar4 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar4)(1);
        }
        (**(code **)(param_1[0xd7] + 4))();
        param_1[0xdc] = 0;
        (**(code **)param_1[0xd7])();
      }
      piVar3 = param_1 + 0xe4;
      FUN_007bd3d0(piVar3);
      FUN_007bd360(piVar3,'\0');
      ppvVar1 = FUN_007c7190(piVar3,'\x01');
      (**(code **)(param_1[0xdd] + 4))();
      param_1[0xe2] = (int)ppvVar1;
      (**(code **)param_1[0xdd])();
      (**(code **)(*param_1 + 0xc))(param_1[0xe2],2);
    }
  }
  if ((int *)param_1[0xe2] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1[0xe2] + 0xfc))();
    if (iVar2 == 2) {
      puVar4 = (undefined4 *)param_1[0xe2];
      if (puVar4 != (undefined4 *)0x0) {
        piVar3 = puVar4 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar4)(1);
        }
        (**(code **)(param_1[0xdd] + 4))();
        param_1[0xe2] = 0;
        (**(code **)param_1[0xdd])();
      }
      FUN_007bd360(param_1 + 0xe4,'\x01');
      ppvVar1 = FUN_007c7190(param_1 + 0xe4,'\0');
      (**(code **)(param_1[0xd7] + 4))();
      param_1[0xdc] = (int)ppvVar1;
      (**(code **)param_1[0xd7])();
      (**(code **)(*param_1 + 0xc))(param_1[0xdc],2);
    }
  }
  if ((int *)param_1[0xe2] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)param_1[0xe2] + 0xfc))();
    if (iVar2 == 1) {
      puVar4 = (undefined4 *)param_1[0xe2];
      if (puVar4 != (undefined4 *)0x0) {
        piVar3 = puVar4 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar4)(1);
        }
        (**(code **)(param_1[0xdd] + 4))();
        param_1[0xe2] = 0;
        (**(code **)param_1[0xdd])();
      }
      FUN_007bd3d0(param_1 + 0xe4);
    }
  }
  if ((((param_1[0xd6] == 0) && (param_1[0xdc] == 0)) && (param_1[0xe2] == 0)) &&
     ((char)param_1[0xe3] == '\0')) {
    *(undefined1 *)(param_1 + 0xe3) = 1;
    puVar4 = operator_new(0xa4);
    uStack_4 = 1;
    if (puVar4 != (undefined4 *)0x0) {
      this_00 = FUN_0046f7a0(puVar4);
    }
    uStack_4 = 0xffffffff;
    FUN_0046f5d0(this_00,0x430);
    (**(code **)(this_00[0xe] + 4))();
    this_00[0x13] = param_1;
    (**(code **)this_00[0xe])();
    FUN_005e9280(DAT_0104d82c,extraout_EDX,this_00);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007c8760 @ 007c8760 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_007c8760(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf5d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0104e8b4 == '\0') {
    DAT_0104e8b4 = '\x01';
    ExceptionList = &local_c;
    FUN_00471840("MT_AWARDS_OPENAWARDSCREEN",0x408);
    FUN_00471840("MT_AWARDS_CLOSEAWARDSCREEN",0x430);
  }
  DAT_0104e8b8 = *param_1;
  _DAT_0104e8bc = param_1[1];
  DAT_0104e8c0 = param_1[2];
  DAT_0104e8c4 = param_1[3];
  DAT_0104e8c8 = param_1[4];
  DAT_0104e8cc = param_1[5];
  this = (undefined4 *)0x0;
  if (DAT_0104e8e4 == (undefined4 *)0x0) {
    puVar1 = operator_new(100);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_0053c420(puVar1);
      *puVar1 = &PTR_FUN_00d577b0;
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104e8d0[1])();
    DAT_0104e8e4 = puVar1;
    (*(code *)*DAT_0104e8d0)();
    puVar1 = operator_new(0xa4);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      this = FUN_0046f7a0(puVar1);
    }
    local_4 = 0xffffffff;
    FUN_0046f5d0(this,0x408);
    puVar1 = DAT_0104e8e4;
    (**(code **)(this[0xe] + 4))();
    this[0x13] = puVar1;
    (**(code **)this[0xe])();
    FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007c88c0 @ 007c88c0 ////

undefined4 * __thiscall FUN_007c88c0(void *this,byte param_1)

{
  thunk_FUN_0053c500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c88f0 @ 007c88f0 ////

bool FUN_007c88f0(void)

{
  return DAT_0104e8e4 != 0;
}


//// FUNCTION FUN_007c8900 @ 007c8900 ////

void __fastcall FUN_007c8900(int param_1)

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


//// FUNCTION FUN_007c8930 @ 007c8930 ////

void __fastcall FUN_007c8930(int param_1)

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


//// FUNCTION FUN_007c8990 @ 007c8990 ////

void FUN_007c8990(void)

{
  undefined4 *puVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0043b520(&local_18,0.0);
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_14 = 0;
  local_13 = 0;
  local_12 = 0;
  puVar1 = (undefined4 *)FUN_0085bae0(&local_1c);
  local_18 = *puVar1;
  local_14 = 1;
  FUN_007c8760(&local_18);
  return;
}


//// FUNCTION FUN_007c89f0 @ 007c89f0 ////

void __fastcall FUN_007c89f0(int param_1)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  int iVar2;
  byte bVar3;
  char **ppcVar4;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf5e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071b530(param_1,(int *)param_1);
  FUN_004237f0(DAT_00f87b04);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"TANNOY_CEREMONY_ABOUTTOSTART",0x1c);
  local_28 = 0x1c;
  local_2c[0x1c] = '\0';
  ppcVar4 = &local_2c;
  iVar2 = 2;
  local_4 = 0;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f6e10(pvVar1,iVar2,ppcVar4);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  bVar3 = 1;
  iVar2 = 5;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f9b70(pvVar1,iVar2,param_1,bVar3);
  FUN_0071bd00();
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007c8b70 @ 007c8b70 ////

void __fastcall FUN_007c8b70(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_5c;
  int *piVar3;
  char *_Dest;
  uint uVar4;
  float local_34 [2];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf626;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x394);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0089ea20(puVar1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awardcorner_l",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 1;
  pvStack_5c = (void *)0x7c8c09;
  FUN_0089e070(piVar2,&local_2c,0,1,'\x01');
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_00882710((void *)piVar2[0xd6],local_34);
  (**(code **)(*piVar2 + 0x74))();
  FUN_0089e5f0(piVar2,'\x01');
  pvStack_5c = (void *)0x1;
  piVar3 = param_1;
  (**(code **)(*piVar2 + 0x5c))();
  (**(code **)(*piVar2 + 100))(1,param_1,0x40000000);
  (**(code **)(*param_1 + 0xc))(piVar2,1);
  puVar1 = operator_new(0x394);
  local_2c = (char *)0x2;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_0089ea20(puVar1);
  }
  _Dest = &stack0xffffffb8;
  uVar4 = 0x14;
  _strncpy(_Dest,"awardcorner_r",0xd);
  _Dest[0xd] = '\0';
  local_2c = (char *)0x3;
  FUN_0089e070(piVar2,(undefined4 *)&stack0xffffffac,0,1,'\x01');
  local_2c = (char *)0xffffffff;
  if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  FUN_00882710((void *)piVar2[0xd6],(float *)&pvStack_5c);
  (**(code **)(*piVar2 + 0x74))(pvStack_5c,piVar3);
  FUN_0089e5f0(piVar2,'\x01');
  (**(code **)(*piVar2 + 0x60))(2,param_1,0x40a00000);
  (**(code **)(*piVar2 + 100))(1,param_1,0x40000000);
  (**(code **)(*param_1 + 0xc))(piVar2,1);
  ExceptionList = pvStack_5c;
  return;
}


//// FUNCTION AwardsScreen_Constructor @ 007c8d70 ////

/* WARNING: Removing unreachable block (ram,0x007c8de9) */

void AwardsScreen_Constructor(void)

{
  char local_20 [10];
  undefined1 local_16;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf638;
  local_c = ExceptionList;
  local_20[0] = '\0';
  ExceptionList = &local_c;
  _strncpy(local_20,"awd_screen",10);
  local_16 = 0;
  local_4 = 0;
  FUN_005434b0();
  local_4 = 0xffffffff;
  FUN_007bd3b0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007c8e10 @ 007c8e10 ////

void __fastcall FUN_007c8e10(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d577fc;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007c8e40 @ 007c8e40 ////

void __fastcall FUN_007c8e40(int param_1)

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


//// FUNCTION FUN_007c8e60 @ 007c8e60 ////

void __fastcall FUN_007c8e60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d577fc;
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


//// FUNCTION FUN_007c8ee0 @ 007c8ee0 ////

void __fastcall FUN_007c8ee0(int param_1)

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


//// FUNCTION FUN_007c8f00 @ 007c8f00 ////

void __fastcall FUN_007c8f00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5780c;
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


//// FUNCTION FUN_007c8f50 @ 007c8f50 ////

void __fastcall FUN_007c8f50(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d5781c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007c8fa0 @ 007c8fa0 ////

void __fastcall FUN_007c8fa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5781c;
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


//// FUNCTION FUN_007c8ff0 @ 007c8ff0 ////

int * __fastcall FUN_007c8ff0(int *param_1)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  void **ppvVar5;
  int *piVar6;
  undefined4 extraout_EDX;
  int *piVar7;
  int iVar8;
  byte bVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf69b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  piVar7 = param_1 + 0xd1;
  *param_1 = (int)&PTR_FUN_00d57844;
  param_1[0x14] = (int)&PTR_FUN_00d5782c;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = (int)piVar7;
  *piVar7 = (int)&PTR_FUN_00d577fc;
  param_1[0xd6] = 0;
  piVar6 = param_1 + 0xd7;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = (int)piVar6;
  *piVar6 = (int)&PTR_FUN_00d5780c;
  param_1[0xdc] = 0;
  piVar1 = param_1 + 0xdd;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = (int)piVar1;
  *piVar1 = (int)&PTR_FUN_00d5780c;
  param_1[0xe2] = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  FUN_007bd260(param_1 + 0xe4,DAT_0104e8b8,DAT_0104e8bd,DAT_0104e8be,DAT_0104e8bc);
  *(undefined1 *)(param_1 + 0xea) = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (DAT_0104e8bd != '\0') {
    FUN_007bd320(param_1 + 0xe4,DAT_0104e8c0,DAT_0104e8c4);
  }
  if (DAT_0104e8be != '\0') {
    FUN_007bd340(param_1 + 0xe4,DAT_0104e8c8,DAT_0104e8cc);
  }
  bVar9 = 1;
  iVar8 = 5;
  piVar4 = param_1;
  pvVar3 = (void *)FUN_004f3b20();
  FUN_004f98f0(pvVar3,iVar8,(int)piVar4,bVar9);
  FUN_0053ca50();
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,0,0);
  pvVar3 = (void *)0x0;
  iVar8 = FUN_0071b2b0();
  FUN_00741d80(param_1,iVar8,pvVar3);
  piVar4 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar4 + 0xc))(param_1,1);
  FUN_007c8b70(param_1);
  cVar2 = FUN_007bd290(param_1 + 0xe4,'\0');
  if ((cVar2 == '\0') || (cVar2 = FUN_007bd2d0((int)(param_1 + 0xe4)), cVar2 != '\0')) {
    piVar6 = param_1 + 0xe4;
    cVar2 = FUN_007bd290(piVar6,'\x01');
    if ((cVar2 == '\0') || (cVar2 = FUN_007bd2d0((int)piVar6), cVar2 != '\0')) {
      pvVar3 = operator_new(0x454);
      pvStack_c._0_1_ = 5;
      if (pvVar3 == (void *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = CeremonyController_Constructor(pvVar3,(int)piVar6);
      }
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
      (**(code **)(*piVar7 + 4))();
      param_1[0xd6] = (int)piVar6;
      (**(code **)*piVar7)();
      piVar7 = (int *)param_1[0xd6];
    }
    else {
      ppvVar5 = FUN_007c7190(piVar6,'\x01');
      (**(code **)(*piVar1 + 4))();
      param_1[0xe2] = (int)ppvVar5;
      (**(code **)*piVar1)();
      piVar7 = (int *)param_1[0xe2];
    }
  }
  else {
    ppvVar5 = FUN_007c7190(param_1 + 0xe4,'\0');
    (**(code **)(*piVar6 + 4))();
    param_1[0xdc] = (int)ppvVar5;
    (**(code **)*piVar6)();
    piVar7 = (int *)param_1[0xdc];
  }
  FUN_0073f6e0(param_1,piVar7);
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_007c9260 @ 007c9260 ////

void __fastcall FUN_007c9260(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdf6f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d57844;
  param_1[0x14] = &PTR_FUN_00d5782c;
  local_4 = 4;
  (**(code **)(param_1[0xd1] + 4))();
  param_1[0xd6] = 0;
  (**(code **)param_1[0xd1])();
  puVar2 = DAT_0104e8e4;
  if (DAT_0104e8e4 != (undefined4 *)0x0) {
    iVar1 = DAT_0104e8e4[0x12];
    DAT_0104e8e4[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104e8d0[1])();
    DAT_0104e8e4 = (undefined4 *)0x0;
    (*(code *)*DAT_0104e8d0)();
  }
  DAT_0105cc5c = *(undefined1 *)(param_1 + 0xea);
  param_1[0xdd] = &PTR_FUN_00d5780c;
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
  param_1[0xd7] = &PTR_FUN_00d5780c;
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
  param_1[0xd1] = &PTR_FUN_00d577fc;
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


//// FUNCTION FUN_007c94d0 @ 007c94d0 ////

undefined4 * __thiscall FUN_007c94d0(void *this,byte param_1)

{
  FUN_007c9260(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c9540 @ 007c9540 ////

void __fastcall FUN_007c9540(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdf728;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d57964;
  param_1[0x14] = &PTR_FUN_00d57948;
  local_4 = 0;
  if (DAT_0104e8f0 != (undefined4 *)0x0) {
    FUN_009b0e90(DAT_0104e8f0[2]);
    FUN_009b0ed0(DAT_0104e8f0[2]);
    if (DAT_0104e8f0 != (undefined4 *)0x0) {
      FUN_009d2c50(DAT_0104e8f0,(void *)0x0,'\x01',-1.0,-1.0);
      if (DAT_0104e8f0 != (undefined4 *)0x0) {
        FUN_009d2b50(DAT_0104e8f0);
        DAT_0104e8f0 = (undefined4 *)0x0;
      }
    }
  }
  if (DAT_0104e8ec != (undefined4 *)0x0) {
    FUN_009d2c50(DAT_0104e8ec,(void *)0x0,'\x01',-1.0,-1.0);
    if (DAT_0104e8ec != (undefined4 *)0x0) {
      FUN_009d2b50(DAT_0104e8ec);
      DAT_0104e8ec = (undefined4 *)0x0;
    }
  }
  FUN_004126f0(1);
  FUN_00470a70(DAT_0104917c,DAT_00f87aa0,0x57a,param_1,0);
  if (DAT_0104e8e8 != (void *)0x0) {
    FUN_00971df0(DAT_0104e8e8);
    DAT_0104e8e8 = (void *)0x0;
  }
  puVar2 = &DAT_0104e8f8;
  puVar3 = (undefined4 *)(DAT_00f87b04 + 0xc);
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_009cc650(DAT_00f87b04 + 0xc);
  DAT_01050c3c = *(undefined1 *)(param_1 + 0xd3);
  DAT_0104e8f4 = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007c9690 @ 007c9690 ////

undefined4 FUN_007c9690(void)

{
  bool bVar1;
  
  if (-1 < DAT_00e5aff4) {
    bVar1 = FUN_009b1140(DAT_00e5aff4);
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_007c9870 @ 007c9870 ////

void __cdecl FUN_007c9870(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x19);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x19);
  }
  return;
}


//// FUNCTION FUN_007c98a0 @ 007c98a0 ////

void __thiscall FUN_007c98a0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x19) == '\0') {
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


//// FUNCTION FUN_007c9970 @ 007c9970 ////

void __cdecl FUN_007c9970(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x19);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x19);
  }
  return;
}


//// FUNCTION FUN_007c99a0 @ 007c99a0 ////

void __fastcall FUN_007c99a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x19);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x19);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x19);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x19);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_007c9ba0 @ 007c9ba0 ////

void FUN_007c9ba0(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *this;
  void *this_00;
  LONG LVar2;
  uint uVar3;
  uint *_Memory;
  
  this = FUN_00433eb0();
  FUN_0097e2b0((int)this);
  FUN_0097e330(this,0);
  this[0x27] = this[0x27] & 0xfffffff5;
  this[0x32] = 0x3dcccccd;
  this_00 = FUN_009d30f0((int)this,param_2,1,param_1 + 8,'\0');
  LVar2 = InterlockedDecrement(this + 4);
  uVar1 = DAT_0105b588;
  if (LVar2 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*this)(1);
  }
  DAT_0105b588 = uVar1;
  FUN_009d63a0(this_00,(float)param_1[0x3b]);
  uVar3 = FUN_009d3720(param_1);
  _Memory = operator_new(uVar3);
  FUN_009d3ca0(param_1,_Memory,uVar3,(undefined1 *)0x0);
  FUN_009cd120(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_007c9cd0 @ 007c9cd0 ////

undefined4 * __thiscall FUN_007c9cd0(void *this,byte param_1)

{
  FUN_007c9540(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007c9cf0 @ 007c9cf0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007c9cf0(int param_1)

{
  undefined1 uVar1;
  void *this;
  int *_Memory;
  float10 fVar2;
  ulonglong uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf74b;
  pvStack_c = ExceptionList;
  local_28 = *(undefined4 *)(param_1 + 0x9c);
  local_24 = *(undefined4 *)(param_1 + 0x108);
  local_2c = *(undefined4 *)(param_1 + 0xc0);
  local_20 = *(undefined4 *)(param_1 + 0xe4);
  ExceptionList = &pvStack_c;
  FUN_00747290(*(void **)(param_1 + 0x2d4),&local_2c);
  FUN_00747290(*(void **)(param_1 + 0x2d4),&local_24);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  uVar3 = FUN_00acd42c();
  local_14 = (undefined4)uVar3;
  uVar3 = FUN_00acd42c();
  local_10 = (undefined4)uVar3;
  uVar3 = FUN_00acd42c();
  local_1c = (int)uVar3;
  uVar3 = FUN_00acd42c();
  local_18 = (undefined4)uVar3;
  this = operator_new(0x30);
  local_4 = 0;
  if (this == (void *)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = FUN_009a5a30(this,&local_1c);
  }
  local_4 = 0xffffffff;
  if ((DAT_0104e9a8 & 1) == 0) {
    DAT_0104e9a8 = DAT_0104e9a8 | 1;
    _DAT_0104e99c = 0x40866666;
    _DAT_0104e9a0 = 0;
    _DAT_0104e9a4 = 0x3f666666;
  }
  if ((DAT_0104e9a8 & 2) == 0) {
    DAT_0104e9a8 = DAT_0104e9a8 | 2;
    _DAT_0104e990 = 0;
    _DAT_0104e994 = 0x3ea3d70a;
    _DAT_0104e998 = 0x40166666;
  }
  FUN_009a6070(&DAT_0105c2e8,0.5);
  DAT_0105c3e4 = 0x42c80000;
  FUN_009a5390(0x105c2e8);
  fVar2 = FUN_004012c0(1.3962635);
  FUN_009a1950(&DAT_0105c2e8,(float)fVar2);
  fVar2 = FUN_004012c0(0.8);
  FUN_009a1950(&DAT_0105c2e8,(float)fVar2);
  FUN_009a2830(&DAT_0105c2e8,(float *)&DAT_0104e99c,(float *)&DAT_0104e990,0.0);
  Model_UpdateVisuals(DAT_0104e8e8);
  if (DAT_0104e8f0 != 0) {
    (**(code **)(**(int **)(DAT_0104e8f0 + 8) + 0x10))(0);
  }
  if (DAT_0104e8ec != 0) {
    (**(code **)(**(int **)(DAT_0104e8ec + 8) + 0x10))(0);
  }
  uVar1 = DAT_0105bec4;
  DAT_0105bec4 = 1;
  FUN_009a1420();
  DAT_0105bec4 = uVar1;
  if (_Memory != (int *)0x0) {
    FUN_009a5b60((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007c9f20 @ 007c9f20 ////

void FUN_007c9f20(undefined4 *param_1,float param_2)

{
  FUN_009757a0(DAT_0104e8e8,(byte *)*param_1,param_2,0);
  return;
}


//// FUNCTION FUN_007c9f40 @ 007c9f40 ////

void FUN_007c9f40(int *param_1)

{
  if (DAT_0104e8f0 != 0) {
    if (DAT_0104e8f5 == '\0') {
      DAT_00e5aff4 = FUN_00982230(*(void **)(DAT_0104e8f0 + 8),*param_1,0,'\0',"award");
      return;
    }
    DAT_00e5aff4 = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_007c9f80 @ 007c9f80 ////

void FUN_007c9f80(int *param_1)

{
  if (DAT_0104e8ec != 0) {
    if (DAT_0104e8f5 == '\0') {
      DAT_00e5aff4 = FUN_00982230(*(void **)(DAT_0104e8ec + 8),*param_1,0,'\0',"award");
      return;
    }
    DAT_00e5aff4 = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_007c9fc0 @ 007c9fc0 ////

void FUN_007c9fc0(char param_1)

{
  bool bVar1;
  
  DAT_0104e8f5 = param_1;
  if ((param_1 != '\0') && (-1 < DAT_00e5aff4)) {
    bVar1 = FUN_009b1140(DAT_00e5aff4);
    if (bVar1) {
      if (-1 < DAT_00e5aff4) {
        FUN_009b11d0(DAT_00e5aff4);
      }
      DAT_00e5aff4 = -1;
    }
  }
  return;
}


//// FUNCTION FUN_007ca010 @ 007ca010 ////

void FUN_007ca010(undefined4 *param_1)

{
  FUN_009722e0(DAT_0104e8e8,(byte *)*param_1);
  return;
}


//// FUNCTION FUN_007ca1c0 @ 007ca1c0 ////

void __fastcall FUN_007ca1c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x19) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x19);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x19);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x19) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x19) == '\0');
    if (*(char *)((int)piVar4 + 0x19) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_007ca270 @ 007ca270 ////

void __thiscall FUN_007ca270(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x19) == '\0') {
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


//// FUNCTION FUN_007ca2d0 @ 007ca2d0 ////

int * __fastcall FUN_007ca2d0(int *param_1)

{
  FUN_007c99a0(param_1);
  return param_1;
}


//// FUNCTION FUN_007ca3a0 @ 007ca3a0 ////

undefined4 * __fastcall FUN_007ca3a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdf768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  local_4 = 0;
  FUN_009d2990(param_1 + 8,(char *)0x0,(char *)0x0,0.0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007ca400 @ 007ca400 ////

void __fastcall FUN_007ca400(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdf788;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00434ae0((int)(param_1 + 8));
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ca450 @ 007ca450 ////

void __fastcall FUN_007ca450(int param_1)

{
  FUN_00740280(param_1);
  FUN_007c9cf0(param_1);
  return;
}


//// FUNCTION FUN_007ca5e0 @ 007ca5e0 ////

int * __fastcall FUN_007ca5e0(int *param_1)

{
  FUN_007ca1c0(param_1);
  return param_1;
}


//// FUNCTION FUN_007ca610 @ 007ca610 ////

int * __fastcall FUN_007ca610(int *param_1)

{
  FUN_007c99a0(param_1);
  return param_1;
}


//// FUNCTION FUN_007ca620 @ 007ca620 ////

void FUN_007ca620(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 6) = 1;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  return;
}


//// FUNCTION FUN_007ca660 @ 007ca660 ////

void FUN_007ca660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    puVar1[5] = param_4[2];
    *(undefined1 *)(puVar1 + 6) = param_5;
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
  }
  return;
}


//// FUNCTION FUN_007ca6e0 @ 007ca6e0 ////

void FUN_007ca6e0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x19) == '\0') {
    FUN_007ca6e0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_007ca740 @ 007ca740 ////

undefined4 * __thiscall FUN_007ca740(void *this,byte param_1)

{
  FUN_007ca400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ca760 @ 007ca760 ////

uint * __thiscall FUN_007ca760(void *this,uint *param_1)

{
  *(uint *)this = *(uint *)this ^ (*param_1 ^ *(uint *)this) & 1;
  *(uint *)((int)this + 4) = param_1[1];
  *(uint *)((int)this + 8) = param_1[2];
  _eh_vector_copy_constructor_iterator_
            ((void *)((int)this + 0xc),param_1 + 3,0x20,2,FUN_00403de0,FUN_00401490);
  _eh_vector_copy_constructor_iterator_
            ((void *)((int)this + 0x4c),param_1 + 0x13,0x20,2,FUN_00403de0,FUN_00401490);
  _eh_vector_copy_constructor_iterator_
            ((void *)((int)this + 0x8c),param_1 + 0x23,0x20,2,FUN_00403de0,FUN_00401490);
  return this;
}


//// FUNCTION FUN_007ca820 @ 007ca820 ////

int * __fastcall FUN_007ca820(int *param_1)

{
  FUN_007ca1c0(param_1);
  return param_1;
}


//// FUNCTION FUN_007ca830 @ 007ca830 ////

void __fastcall FUN_007ca830(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007ca620();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_007ca870 @ 007ca870 ////

void __fastcall FUN_007ca870(int param_1)

{
  FUN_007ca6e0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_007ca8b0 @ 007ca8b0 ////

undefined4 * __thiscall FUN_007ca8b0(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_007ca760((void *)((int)this + 0x20),param_1 + 8);
  *(undefined4 *)((int)this + 0xec) = param_1[0x3b];
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007ca930 @ 007ca930 ////

int __fastcall FUN_007ca930(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007ca620();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007ca970 @ 007ca970 ////

void __cdecl FUN_007ca970(void *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdf7d1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_007ca8b0(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007ca9e0 @ 007ca9e0 ////

void __fastcall FUN_007ca9e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_1 + 8);
    }
    FUN_007ca400(*(undefined4 **)(*(int *)(param_1 + 4) + uVar2 * 4));
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_007caa20 @ 007caa20 ////

void __fastcall FUN_007caa20(int param_1)

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
      FUN_007ca400(*(undefined4 **)(*(int *)(param_1 + 4) + uVar2 * 4));
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


//// FUNCTION FUN_007caab0 @ 007caab0 ////

void FUN_007caab0(void)

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
  puStack_8 = &LAB_00cdf7e8;
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


//// FUNCTION FUN_007cab20 @ 007cab20 ////

void __thiscall
FUN_007cab20(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cdf808;
  local_c = ExceptionList;
  if (0x15555553 < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_007ca660(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x18);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x18) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[6] == '\0') {
LAB_007cac1b:
        *(undefined1 *)(*piVar4 + 0x18) = 1;
        *(undefined1 *)(piVar5 + 6) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x18) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_007ca270(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x18) = 0;
        FUN_007c98a0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[6] == '\0') goto LAB_007cac1b;
      if (piVar6 == (int *)*piVar2) {
        FUN_007c98a0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x18) = 0;
      FUN_007ca270(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x18);
  } while( true );
}


//// FUNCTION FUN_007cacd0 @ 007cacd0 ////

void __thiscall FUN_007cacd0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cdf828;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x19) != '\0') {
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
  FUN_007c99a0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x19) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x19) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x19) == '\0') {
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
      iVar1 = param_2[6];
      *(char *)(param_2 + 6) = (char)_Memory[6];
      *(char *)(_Memory + 6) = (char)iVar1;
      goto LAB_007cae41;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x19) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x19) == '\0') {
      piVar2 = (int *)FUN_007c9970(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x19) == '\0') {
      uVar3 = FUN_007c9870((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_007cae41:
  if ((char)_Memory[6] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[6] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[6] == '\0') {
            *(undefined1 *)(piVar4 + 6) = 1;
            *(undefined1 *)(piVar5 + 6) = 0;
            FUN_007ca270(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x19) == '\0') {
            if ((*(char *)(*piVar4 + 0x18) != '\x01') || (*(char *)(piVar4[2] + 0x18) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x18) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x18) = 1;
                *(undefined1 *)(piVar4 + 6) = 0;
                FUN_007c98a0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 6) = (char)piVar5[6];
              *(undefined1 *)(piVar5 + 6) = 1;
              *(undefined1 *)(piVar4[2] + 0x18) = 1;
              FUN_007ca270(this,(int)piVar5);
              break;
            }
LAB_007caf04:
            *(undefined1 *)(piVar4 + 6) = 0;
          }
        }
        else {
          if ((char)piVar4[6] == '\0') {
            *(undefined1 *)(piVar4 + 6) = 1;
            *(undefined1 *)(piVar5 + 6) = 0;
            FUN_007c98a0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x19) == '\0') {
            if ((*(char *)(piVar4[2] + 0x18) == '\x01') && (*(char *)(*piVar4 + 0x18) == '\x01'))
            goto LAB_007caf04;
            if (*(char *)(*piVar4 + 0x18) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x18) = 1;
              *(undefined1 *)(piVar4 + 6) = 0;
              FUN_007ca270(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 6) = (char)piVar5[6];
            *(undefined1 *)(piVar5 + 6) = 1;
            *(undefined1 *)(*piVar4 + 0x18) = 1;
            FUN_007c98a0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 6) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_007caf90 @ 007caf90 ////

void __thiscall FUN_007caf90(void *this,uint param_1)

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
  if (0x1111111 - uVar1 < param_1) {
    uVar1 = FUN_007caab0();
  }
  uVar4 = uVar1 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((param_1 < uVar4) && (uVar1 <= 0x1111111 - uVar4)) {
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


//// FUNCTION FUN_007cb0e0 @ 007cb0e0 ////

void __thiscall FUN_007cb0e0(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x19) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_007cab20(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_007ca1c0((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_007cab20(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007cb1a0 @ 007cb1a0 ////

void __thiscall FUN_007cb1a0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_007ca6e0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x19) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x19) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x19);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x19);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x19);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x19);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_007cacd0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_007cb260 @ 007cb260 ////

void __thiscall FUN_007cb260(void *this,undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    FUN_007caf90(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*(int *)(*(int *)((int)this + 4) + uVar2 * 4) == 0) {
    pvVar1 = operator_new(0xf0);
    *(void **)(*(int *)((int)this + 4) + uVar2 * 4) = pvVar1;
  }
  FUN_007ca970(*(void **)(*(int *)((int)this + 4) + uVar2 * 4),param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_007cb2d0 @ 007cb2d0 ////

undefined4 * __thiscall FUN_007cb2d0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_007cab20(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_007cab20(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_007cab20(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_007ca1c0((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x19) != '\0') {
          FUN_007cab20(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_007cab20(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_007c99a0((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x19) != '\0') {
          FUN_007cab20(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_007cab20(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_007cb0e0(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_007cb470 @ 007cb470 ////

int * __thiscall FUN_007cb470(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_c [3];
  
  piVar3 = *(int **)((int)this + 4);
  if (*(char *)(piVar3[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)piVar2 + 0x19) == '\0');
  }
  if ((piVar3 != *(int **)((int)this + 4)) && (piVar3[3] <= *param_1)) {
    return piVar3 + 4;
  }
  local_c[0] = *param_1;
  local_c[1] = 0;
  local_c[2] = 0;
  piVar3 = FUN_007cb2d0(this,&param_1,piVar3,local_c);
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_007cb520 @ 007cb520 ////

void __fastcall FUN_007cb520(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_007cb1a0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_007cb550 @ 007cb550 ////

void FUN_007cb550(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  char *local_418;
  undefined4 local_414;
  uint local_410;
  char local_40c [20];
  char *local_3f8;
  uint local_3f4;
  uint local_3f0;
  char local_3ec [20];
  int iStack_3d8;
  char *local_3d4;
  uint local_3d0;
  uint local_3cc;
  char local_3c8 [20];
  undefined1 *local_3b4;
  undefined4 local_3b0;
  uint local_3ac;
  undefined1 local_3a8 [20];
  void *apvStack_394 [2];
  uint uStack_38c;
  void *apvStack_374 [2];
  uint uStack_36c;
  void *apvStack_354 [2];
  uint uStack_34c;
  void *apvStack_334 [2];
  uint uStack_32c;
  void *apvStack_314 [2];
  uint uStack_30c;
  undefined4 local_2f4 [18];
  int local_2ac;
  int iStack_2a8;
  undefined4 local_2a0 [54];
  undefined4 auStack_1c8 [8];
  undefined1 auStack_1a8 [204];
  float fStack_dc;
  undefined1 auStack_d8 [204];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf8c4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009c89a0(local_2f4);
  local_4 = 0;
  FUN_009ca9d0(local_2f4,"*.ccs",PTR_DAT_00e5aff8,(undefined1 *)0x1);
  local_418 = local_40c;
  local_40c[0] = '\0';
  local_414 = 0;
  local_410 = 0x14;
  _strncpy(local_418,"awardsannouncers",0x10);
  local_414 = 0x10;
  local_418[0x10] = '\0';
  local_4._0_1_ = 1;
  FUN_0055c540(local_2a0,&local_418);
  if (0x14 < local_410) {
                    /* WARNING: Subroutine does not return */
    _free(local_418);
  }
  iVar12 = 0;
  do {
    if (local_2ac == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iStack_2a8 - local_2ac >> 2;
    }
    if (iVar2 <= iVar12) {
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00558920(local_2a0);
      local_4 = 0xffffffff;
      FUN_009c8560(local_2f4);
      ExceptionList = local_c;
      return;
    }
    local_3d4 = local_3c8;
    local_3c8[0] = '\0';
    local_3d0 = 0;
    local_3cc = 0x14;
    _strncpy(local_3d4,"G_announce_nnnn.ccs",0x13);
    local_3d0 = 0x13;
    local_3d4[0x13] = '\0';
    pcVar10 = *(char **)(local_2ac + iVar12 * 4);
    pcVar3 = _strrchr(pcVar10,0x5c);
    pcVar5 = pcVar3 + 1;
    if (pcVar3 == (char *)0x0) {
      pcVar5 = pcVar10;
    }
    local_3f8 = local_3ec;
    local_3ec[0] = '\0';
    local_3f4 = 0;
    local_3f0 = 0x14;
    pcVar10 = pcVar5;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar11 = (int)pcVar10 - (int)(pcVar5 + 1);
    if (0x13 < uVar11) {
      local_3f0 = uVar11 + 0x20 & 0xffffffe0;
      local_3f8 = _malloc(local_3f0);
    }
    _strncpy(local_3f8,pcVar5,uVar11);
    local_3f8[uVar11] = '\0';
    local_3f4 = uVar11;
    if (uVar11 == local_3d0) {
      iVar2 = __strnicmp(local_3f8 + 1,local_3d4 + 1,10);
      if (iVar2 != 0) goto LAB_007cba3d;
      local_3b4 = local_3a8;
      local_3a8[0] = 0;
      local_3b0 = 0;
      local_3ac = 0x14;
      pcVar10 = local_3f8;
      do {
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (0xb < (uint)((int)pcVar10 - (int)(local_3f8 + 1))) {
        uVar4 = ((int)pcVar10 - (int)(local_3f8 + 1)) - 0xb;
        uVar11 = 4;
        if (uVar4 < 4) {
          uVar11 = uVar4;
        }
        FUN_004015d0(&local_3b4,local_3f8 + 0xb,uVar11);
      }
      local_4._0_1_ = 6;
      iStack_3d8 = FUN_00567d80(&local_3b4);
      if (0x707 < iStack_3d8) {
        iVar2 = _tolower((int)*local_3f8);
        bVar13 = (char)iVar2 != 'm';
        pcVar10 = "male";
        if (bVar13) {
          pcVar10 = "female";
        }
        local_418 = local_40c;
        local_40c[0] = '\0';
        local_414 = 0;
        local_410 = 0x14;
        pcVar5 = pcVar10;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_004015d0(&local_418,pcVar10,(int)pcVar5 - (int)(pcVar10 + 1));
        FUN_004312e0(apvStack_394,&local_418,"_head");
        FUN_004312e0(apvStack_374,&local_418,"_age");
        local_4._0_1_ = 9;
        uVar6 = FUN_00558a50(local_2a0,&local_3b4,(undefined4 *)0x1);
        if ((char)uVar6 != '\0') {
          uVar6 = FUN_00558490(local_2a0,apvStack_394);
          if ((char)uVar6 != '\0') {
            uVar6 = FUN_00558490(local_2a0,apvStack_374);
            if ((char)uVar6 != '\0') {
              FUN_007ca3a0(auStack_1c8);
              local_4._0_1_ = 10;
              puVar7 = FUN_0047aee0(apvStack_314,&PTR_DAT_00e5aff8,&local_3f8);
              FUN_004015d0(auStack_1c8,(char *)*puVar7,puVar7[1]);
              if (0x14 < uStack_30c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_314[0]);
              }
              puVar7 = FUN_005584e0(local_2a0,apvStack_354,apvStack_394);
              puVar7 = FUN_004312e0(apvStack_334,puVar7,".hd");
              local_4._0_1_ = 0xc;
              puVar8 = FUN_009d2990(auStack_d8,(char *)*puVar7,(char *)0x0,0.0);
              FUN_004356e0(auStack_1a8,puVar8);
              FUN_00434ae0((int)auStack_d8);
              if (0x14 < uStack_32c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_334[0]);
              }
              local_4._0_1_ = 10;
              if (0x14 < uStack_34c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_354[0]);
              }
              fVar14 = FUN_00558610(local_2a0,apvStack_374,18.0);
              fStack_dc = (float)fVar14;
              FUN_007cb260(&DAT_0104e970,auStack_1c8);
              piVar9 = FUN_007cb470(&DAT_0104e984,&iStack_3d8);
              if (bVar13) {
                piVar9 = piVar9 + 1;
              }
              uVar11 = (DAT_0104e97c + DAT_0104e980) - 1;
              if (DAT_0104e978 <= uVar11) {
                uVar11 = uVar11 - DAT_0104e978;
              }
              *piVar9 = *(int *)(DAT_0104e974 + uVar11 * 4);
              local_4._0_1_ = 9;
              FUN_007ca400(auStack_1c8);
              if (0x14 < uStack_36c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_374[0]);
              }
              if (0x14 < uStack_38c) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_394[0]);
              }
              if (0x14 < local_410) {
                    /* WARNING: Subroutine does not return */
                _free(local_418);
              }
              if (0x14 < local_3ac) {
                    /* WARNING: Subroutine does not return */
                _free(local_3b4);
              }
              goto LAB_007cba3d;
            }
          }
        }
        if (0x14 < uStack_36c) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_374[0]);
        }
        if (0x14 < uStack_38c) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_394[0]);
        }
        if (0x14 < local_410) {
                    /* WARNING: Subroutine does not return */
          _free(local_418);
        }
      }
      if (0x14 < local_3ac) {
                    /* WARNING: Subroutine does not return */
        _free(local_3b4);
      }
      if (0x14 < local_3f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_3f8);
      }
      if (0x14 < local_3cc) {
                    /* WARNING: Subroutine does not return */
        _free(local_3d4);
      }
    }
    else {
LAB_007cba3d:
      if (0x14 < local_3f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_3f8);
      }
      if (0x14 < local_3cc) {
                    /* WARNING: Subroutine does not return */
        _free(local_3d4);
      }
    }
    iVar12 = iVar12 + 1;
  } while( true );
}


//// FUNCTION FUN_007cbb40 @ 007cbb40 ////

int __fastcall FUN_007cbb40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007ca620();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007cbb90 @ 007cbb90 ////

void __cdecl FUN_007cbb90(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piStack_4;
  
  if (DAT_0104e8f6 == '\0') {
    FUN_007cb550();
    DAT_0104e8f6 = '\x01';
  }
  if (DAT_0104e98c != 0) {
    uVar4 = FUN_0043b560();
    cVar1 = *(char *)(DAT_0104e988[1] + 0x19);
    piVar2 = (int *)DAT_0104e988[1];
    piStack_4 = DAT_0104e988;
    while (cVar1 == '\0') {
      if ((int)uVar4 < piVar2[3]) {
        piVar3 = (int *)*piVar2;
        piStack_4 = piVar2;
      }
      else {
        piVar3 = (int *)piVar2[2];
      }
      piVar2 = piVar3;
      cVar1 = *(char *)((int)piVar3 + 0x19);
    }
    if (piStack_4 != (int *)*DAT_0104e988) {
      FUN_007ca1c0((int *)&piStack_4);
    }
    *param_1 = piStack_4[4];
    param_1[1] = piStack_4[5];
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_007cbc20 @ 007cbc20 ////

undefined4 * __fastcall FUN_007cbc20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 *puStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_00cdf8d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d57964;
  param_1[0x14] = &PTR_FUN_00d57948;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  local_4 = (void *)0x0;
  DAT_0104e8f4 = 1;
  FUN_00470a70(DAT_0104917c,DAT_00f87aa0,0x5f2,param_1,0);
  FUN_004126f0(0);
  *(undefined1 *)(param_1 + 0xd3) = DAT_01050c3c;
  DAT_01050c3c = 1;
  DAT_0104e8e8 = FUN_0097c450("ai_award_present.flm",0,(undefined4 *)0x0,0);
  uVar5 = 0;
  local_24 = (undefined4 *)&stack0xffffffc4;
  fVar4 = FUN_004012c0(0.0);
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_1c = (undefined1 *)0x0;
  FUN_00978350(DAT_0104e8e8,&local_24,(float)fVar4,uVar5);
  FUN_007cbb90((int *)&local_24);
  if (local_24 != (undefined4 *)0x0) {
    DAT_0104e8f0 = FUN_007c9ba0(local_24,0);
    FUN_00978310(DAT_0104e8e8,0,0,*(void **)(DAT_0104e8f0 + 8));
  }
  if (puStack_18 != (undefined4 *)0x0) {
    DAT_0104e8ec = FUN_007c9ba0(puStack_18,1);
    FUN_00978310(DAT_0104e8e8,0,1,*(void **)(DAT_0104e8ec + 8));
  }
  FUN_009777b0((int)DAT_0104e8e8);
  puVar2 = (undefined4 *)(DAT_00f87b04 + 0xc);
  puVar3 = &DAT_0104e8f8;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_10 = 0x40a00000;
  pvStack_c = (void *)0x0;
  puStack_8 = (undefined1 *)0x40200000;
  local_1c = &stack0xffffffbc;
  FUN_009cc750();
  FUN_009cc650(DAT_00f87b04 + 0xc);
  ExceptionList = local_4;
  return param_1;
}


//// FUNCTION FUN_007cbe20 @ 007cbe20 ////

void __fastcall FUN_007cbe20(int *param_1)

{
  FUN_0053d480((int)param_1);
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007cbe30 @ 007cbe30 ////

void __fastcall FUN_007cbe30(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x3ec)) {
    FUN_009b11d0(*(int *)(param_1 + 0x3ec));
    *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_007cbe90 @ 007cbe90 ////

int * __thiscall FUN_007cbe90(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007cc090 @ 007cc090 ////

void __cdecl FUN_007cc090(int *param_1)

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


//// FUNCTION FUN_007cc100 @ 007cc100 ////

void __cdecl FUN_007cc100(int param_1)

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


//// FUNCTION FUN_007cc130 @ 007cc130 ////

void __fastcall FUN_007cc130(int *param_1)

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


//// FUNCTION FUN_007cc4c0 @ 007cc4c0 ////

void __thiscall FUN_007cc4c0(void *this,char param_1)

{
  *(char *)((int)this + 0x3f0) = param_1;
  if ((param_1 != '\0') && (-1 < *(int *)((int)this + 0x3ec))) {
    FUN_009b11d0(*(int *)((int)this + 0x3ec));
    *(undefined4 *)((int)this + 0x3ec) = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_007cc750 @ 007cc750 ////

void __fastcall FUN_007cc750(int *param_1)

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


//// FUNCTION FUN_007cc7c0 @ 007cc7c0 ////

void __thiscall FUN_007cc7c0(void *this,int param_1)

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


//// FUNCTION FUN_007cc820 @ 007cc820 ////

void __thiscall FUN_007cc820(void *this,int *param_1)

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


//// FUNCTION FUN_007cc880 @ 007cc880 ////

int * __fastcall FUN_007cc880(int *param_1)

{
  FUN_007cc130(param_1);
  return param_1;
}


//// FUNCTION FUN_007cc900 @ 007cc900 ////

void * __cdecl FUN_007cc900(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_007cca00 @ 007cca00 ////

void __cdecl FUN_007cca00(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007ccac0 @ 007ccac0 ////

bool __fastcall FUN_007ccac0(int param_1)

{
  return (bool)('\x01' - (*(int *)(param_1 + 0x3cc) != *(int *)(param_1 + 0x3c4)));
}


//// FUNCTION FUN_007ccb70 @ 007ccb70 ////

void __fastcall FUN_007ccb70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d57ad8;
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


//// FUNCTION FUN_007ccc10 @ 007ccc10 ////

void FUN_007ccc10(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_007ccc10(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_007ccc60 @ 007ccc60 ////

void __fastcall FUN_007ccc60(int param_1)

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


//// FUNCTION FUN_007ccc90 @ 007ccc90 ////

int * __fastcall FUN_007ccc90(int *param_1)

{
  FUN_007cc750(param_1);
  return param_1;
}


//// FUNCTION FUN_007ccce0 @ 007ccce0 ////

int * __fastcall FUN_007ccce0(int *param_1)

{
  FUN_007cc130(param_1);
  return param_1;
}


//// FUNCTION FUN_007ccd20 @ 007ccd20 ////

void __thiscall
FUN_007ccd20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  *(undefined4 *)((int)this + 0x10) = param_4[1];
  *(undefined4 *)((int)this + 0x14) = param_4[2];
  *(undefined4 *)((int)this + 0x18) = param_4[3];
  *(undefined4 *)((int)this + 0x1c) = param_4[4];
  *(undefined4 *)((int)this + 0x20) = param_4[5];
  *(undefined4 *)((int)this + 0x24) = param_4[6];
  *(undefined4 *)((int)this + 0x28) = param_4[7];
  *(undefined4 *)((int)this + 0x2c) = param_4[8];
  *(undefined1 *)((int)this + 0x30) = param_5;
  *(undefined1 *)((int)this + 0x31) = 0;
  return;
}


//// FUNCTION FUN_007ccd80 @ 007ccd80 ////

void * FUN_007ccd80(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_007ccdd0 @ 007ccdd0 ////

undefined4 * __thiscall
FUN_007ccdd0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdf8f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0069ce90(this);
  *(undefined ***)this = &PTR_FUN_00d57b04;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d57ae8;
  *(undefined4 *)((int)this + 0x360) = 0;
  this_00 = (undefined4 *)((int)this + 0x364);
  *(undefined4 *)((int)this + 0x368) = 0;
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x394) = *param_1;
  *(undefined4 *)((int)this + 0x398) = param_1[1];
  *(undefined4 *)((int)this + 0x39c) = param_2;
  *(undefined4 *)((int)this + 0x3a0) = *param_3;
  *(undefined4 *)((int)this + 0x3a4) = param_3[1];
  local_4 = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  FUN_00415910(this_00,1.0,0.0,0.1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007ccec0 @ 007ccec0 ////

undefined4 * __thiscall FUN_007ccec0(void *this,byte param_1)

{
  thunk_FUN_0069cf00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007ccf30 @ 007ccf30 ////

void __fastcall FUN_007ccf30(int param_1)

{
  FUN_007ccc10(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_007ccf60 @ 007ccf60 ////

void __fastcall FUN_007ccf60(int param_1)

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


//// FUNCTION FUN_007ccf90 @ 007ccf90 ////

int * __fastcall FUN_007ccf90(int *param_1)

{
  FUN_007cc750(param_1);
  return param_1;
}


//// FUNCTION FUN_007ccfa0 @ 007ccfa0 ////

void __fastcall FUN_007ccfa0(int param_1)

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


//// FUNCTION FUN_007ccfe0 @ 007ccfe0 ////

void FUN_007ccfe0(void)

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


//// FUNCTION FUN_007cd020 @ 007cd020 ////

void * FUN_007cd020(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_007ccd20(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_007cd0b0 @ 007cd0b0 ////

void __fastcall FUN_007cd0b0(int param_1)

{
  int iVar1;
  int local_4;
  
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x3c4);
  local_4 = **(int **)(param_1 + 0x3b0);
  if ((int *)local_4 != *(int **)(param_1 + 0x3b0)) {
    do {
      iVar1 = local_4;
      (**(code **)(**(int **)(local_4 + 0x20) + 0xc))(local_4 + 0x18);
      (**(code **)(**(int **)(iVar1 + 0x2c) + 0xc))(iVar1 + 0x24);
      FUN_007cc750(&local_4);
    } while (local_4 != *(int *)(param_1 + 0x3b0));
  }
  if (-1 < *(int *)(param_1 + 0x3ec)) {
    FUN_009b11d0(*(int *)(param_1 + 0x3ec));
    *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  }
  return;
}


//// FUNCTION FUN_007cd120 @ 007cd120 ////

void __fastcall FUN_007cd120(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007ccfe0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_007cd150 @ 007cd150 ////

int __fastcall FUN_007cd150(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007ccfe0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007cd180 @ 007cd180 ////

void __thiscall
FUN_007cd180(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cdf918;
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
  piVar3 = FUN_007cd020(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_007cd27b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_007cc7c0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_007cc820(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_007cd27b;
      if (piVar6 == (int *)*piVar2) {
        FUN_007cc820(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_007cc7c0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_007cd330 @ 007cd330 ////

void FUN_007cd330(void)

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
  puStack_8 = &LAB_00cdf938;
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


//// FUNCTION FUN_007cd3a0 @ 007cd3a0 ////

void __thiscall FUN_007cd3a0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cdf958;
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
  FUN_007cc750((int *)&param_2);
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
      goto LAB_007cd511;
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
      piVar2 = (int *)FUN_007cc090(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_007cc100((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_007cd511:
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
            FUN_007cc7c0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_007cc820(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_007cc7c0(this,(int)piVar5);
              break;
            }
LAB_007cd5d4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_007cc820(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_007cd5d4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_007cc7c0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_007cc820(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xc) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_007cd660 @ 007cd660 ////

void * __thiscall FUN_007cd660(void *this,byte param_1)

{
  FUN_007c3840((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007cd680 @ 007cd680 ////

undefined4 __thiscall FUN_007cd680(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
    param_1 = FUN_007cd330();
  }
  pvVar1 = operator_new(param_1 * 4);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 4 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_007cd6d0 @ 007cd6d0 ////

void __thiscall FUN_007cd6d0(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x31) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x31) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_007cd180(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_007cc130((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_007cd180(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007cd790 @ 007cd790 ////

void __thiscall FUN_007cd790(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_007ccc10((void *)piVar6[1]);
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
    FUN_007cd3a0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_007cd860 @ 007cd860 ////

void * __thiscall FUN_007cd860(void *this,void *param_1)

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
        uVar3 = FUN_007cd680(this,uVar4);
        if ((char)uVar3 == '\0') {
          return this;
        }
        pvVar2 = FUN_007ccd80(*(void **)((int)param_1 + 4),*(int *)((int)param_1 + 8),
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
      FUN_007cc900(*(void **)((int)param_1 + 4),(int)pvVar2,_Memory);
      pvVar2 = FUN_007ccd80(pvVar2,*(int *)((int)param_1 + 8),*(void **)((int)this + 8));
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


//// FUNCTION FUN_007cd9b0 @ 007cd9b0 ////

undefined4 * __thiscall FUN_007cd9b0(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_007cd180(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_007cd180(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_007cd180(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_007cc130((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x31) != '\0') {
          FUN_007cd180(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_007cd180(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_007cc750((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x31) != '\0') {
          FUN_007cd180(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_007cd180(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_007cd6d0(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_007cdb50 @ 007cdb50 ////

uint * __thiscall FUN_007cdb50(void *this,uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x31) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x31) == '\0');
  }
  if ((puVar4 != *(uint **)((int)this + 4)) && (puVar4[3] <= *param_1)) {
    return puVar4 + 4;
  }
  local_24 = *param_1;
  local_14 = 0xffffffff;
  local_18 = 0xffffffff;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  local_4 = 0xffffffff;
  local_10 = 0xffffffff;
  local_20 = local_24;
  local_1c = local_24;
  piVar3 = FUN_007cd9b0(this,&param_1,puVar4,&local_24);
  return (uint *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_007cdc30 @ 007cdc30 ////

undefined4 __fastcall FUN_007cdc30(int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = FUN_007cdb50((void *)(*param_1 + 0x3ac),(uint *)&stack0x00000004);
  puVar2 = FUN_007cdb50((void *)(*param_1 + 0x3ac),(uint *)&stack0x00000008);
  if ((float)puVar2[1] < (float)puVar1[1]) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_007cdc80 @ 007cdc80 ////

void __fastcall FUN_007cdc80(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_007cd790(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_007cdcb0 @ 007cdcb0 ////

void __fastcall FUN_007cdcb0(undefined4 *param_1)

{
  void *_Memory;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdf9a2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d57c34;
  param_1[0x14] = &PTR_FUN_00d57c18;
  _Memory = (void *)param_1[0xfe];
  local_4 = 3;
  if (_Memory != (void *)0x0) {
    FUN_007c3840((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0xfe] = 0;
  param_1[0xf5] = &PTR_LAB_00d57ad8;
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
  if ((void *)param_1[0xf0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf0]);
  }
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  local_4 = 0;
  FUN_007cd790(param_1 + 0xeb,&local_10,*(int **)param_1[0xec],(int *)param_1[0xec]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xec]);
}


//// FUNCTION FUN_007cde00 @ 007cde00 ////
// DECOMPILE FAILED: 
Low-level Error: Trying to construct memory range beyond end of address space: ram

//// FUNCTION FUN_007ce3f0 @ 007ce3f0 ////

int * __thiscall FUN_007ce3f0(void *this,int param_1)

{
  char cVar1;
  float *pfVar2;
  void *pvVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  float local_64;
  float local_60;
  undefined1 auStack_58 [40];
  void *pvStack_30;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfa1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)FUN_007cdb50((void *)((int)this + 0x3ac),(uint *)&stack0x00000008);
  pvVar3 = operator_new(0x3a8);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    local_64 = *(float *)((int)this + 0x3b8) - 4.0;
    local_60 = local_64;
    piVar4 = FUN_007ccdd0(pvVar3,&local_64,this,pfVar2);
  }
  iVar6 = *piVar4;
  local_4 = 0xffffffff;
  FUN_00861fb0(param_1);
  (**(code **)(iVar6 + 0x100))();
  (**(code **)(*piVar4 + 0x90))(puStack_8);
  (**(code **)(*(int *)this + 0xc))(piVar4,1);
  (**(code **)(**(int **)((int)this + 1000) + 0x80))(1);
  cVar1 = FUN_007bd2c0(*(void **)((int)this + 0x3f4));
  if (cVar1 == '\0') {
    FUN_00747290(*(void **)((int)this + 0x2d4),&stack0xffffff70);
    puVar9 = (undefined4 *)&stack0xffffff70;
    FUN_005f0460();
    FUN_005f0b70(puVar9);
  }
  *pfVar2 = (*(float *)((int)this + 0x3b8) - 4.0) + *pfVar2;
  if (*(char *)((int)this + 0x3f0) == '\0') {
    cVar1 = FUN_007bd2c0(*(void **)((int)this + 0x3f4));
    if (cVar1 == '\0') {
      puVar10 = &DAT_00d17518;
      iVar8 = 0;
      pbVar5 = (byte *)FUN_0041c9c0(&stack0xffffff80,"HUD_AWARDS_AWARD_AWARDED");
      iVar6 = 5;
      pvVar3 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar3,iVar6,pbVar5,iVar8,puVar10);
      iVar6 = GetPlayerStudio();
      puVar11 = &DAT_00d17518;
      puVar10 = &stack0xffffff80;
      iVar8 = 0;
      if (iStack_1c == iVar6) {
        pcVar7 = "HUD_AWARDS_CROWD_CHEER_MEDIUM";
      }
      else {
        pbVar5 = (byte *)FUN_0041c9c0(puVar10,"HUD_AWARDS_CROWD_CHEER_SMALL");
        iVar6 = 5;
        pvVar3 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar3,iVar6,pbVar5,iVar8,puVar11);
        pcVar7 = "HUD_AWARDS_CROWD_HECKLE";
        puVar10 = auStack_58;
      }
      puVar11 = &DAT_00d17518;
      iVar8 = 0;
      pbVar5 = (byte *)FUN_0041c9c0(puVar10,pcVar7);
      iVar6 = 5;
      pvVar3 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar3,iVar6,pbVar5,iVar8,puVar11);
      if (-1 < *(int *)((int)this + 0x3ec)) {
        FUN_009b11d0(*(int *)((int)this + 0x3ec));
        *(undefined4 *)((int)this + 0x3ec) = 0xffffffff;
      }
    }
  }
  iVar6 = GetPlayerStudio();
  if (iStack_1c == iVar6) {
    FUN_007d0ea0(*(int **)((int)this + 1000));
  }
  ExceptionList = pvStack_30;
  return piVar4;
}


//// FUNCTION FUN_007ce630 @ 007ce630 ////

void __fastcall FUN_007ce630(int *param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  byte *pbVar3;
  void *pvVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 auStack_28 [40];
  
  uVar7 = FUN_00990ae0(param_1,param_2);
  if (((uint)param_1[0xf4] < (uint)uVar7) && ((uint *)param_1[0xf3] != (uint *)param_1[0xf1])) {
    puVar2 = FUN_007cdb50(param_1 + 0xeb,(uint *)param_1[0xf3]);
    (**(code **)(*(int *)puVar2[4] + 0xc))(puVar2 + 3);
    (**(code **)(*(int *)puVar2[7] + 0xc))(puVar2 + 6);
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if ((char)param_1[0xfc] == '\0') {
      puVar11 = &DAT_00d17518;
      iVar10 = 0;
      pbVar3 = (byte *)FUN_0041c9c0(auStack_28,"HUD_AWARDS_NOMINEELIGHTUP");
      iVar8 = 5;
      pvVar4 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar4,iVar8,pbVar3,iVar10,puVar11);
      piVar1 = (int *)param_1[0xf3];
      iVar8 = GetPlayerStudio();
      puVar11 = &DAT_00d17518;
      iVar10 = 0;
      if (*piVar1 == iVar8) {
        pcVar9 = "HUD_AWARDS_CROWD_CHEER_MEDIUM";
      }
      else {
        pbVar3 = (byte *)FUN_0041c9c0(auStack_28,"HUD_AWARDS_CROWD_CHEER_SMALL");
        iVar8 = 5;
        pvVar4 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar4,iVar8,pbVar3,iVar10,puVar11);
        pcVar9 = "HUD_AWARDS_CROWD_HECKLE";
      }
      puVar11 = &DAT_00d17518;
      iVar10 = 0;
      pbVar3 = (byte *)FUN_0041c9c0(auStack_28,pcVar9);
      iVar8 = 5;
      pvVar4 = (void *)FUN_004f3b20();
      FUN_004f3270(pvVar4,iVar8,pbVar3,iVar10,puVar11);
      uVar5 = extraout_ECX_00;
      uVar6 = extraout_EDX_00;
    }
    uVar7 = FUN_00990ae0(uVar5,uVar6);
    param_1[0xf4] = (int)uVar7 + 2000;
    param_1[0xf3] = param_1[0xf3] + 4;
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007ce740 @ 007ce740 ////

int __fastcall FUN_007ce740(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007ccfe0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007ce770 @ 007ce770 ////

void __cdecl FUN_007ce770(uint *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  void *this;
  uint *puVar3;
  uint *puVar4;
  uint *local_c;
  uint local_8;
  uint local_4;
  
  if ((param_1 != param_2) && (puVar3 = param_1 + 1, puVar3 != param_2)) {
    this = (void *)(param_3 + 0x3ac);
    do {
      local_c = (uint *)*puVar3;
      local_8 = *param_1;
      puVar1 = FUN_007cdb50(this,(uint *)&local_c);
      puVar2 = FUN_007cdb50(this,&local_8);
      puVar4 = puVar3;
      if ((float)puVar1[1] <= (float)puVar2[1]) {
        do {
          local_4 = puVar4[-1];
          local_8 = *puVar3;
          local_c = puVar4;
          puVar1 = FUN_007cdb50(this,&local_8);
          puVar2 = FUN_007cdb50(this,&local_4);
          puVar4 = puVar4 + -1;
        } while ((float)puVar2[1] < (float)puVar1[1]);
        if ((local_c != puVar3) && (puVar3 != puVar3 + 1)) {
          FUN_007cca00((int)local_c,(int)puVar3,puVar3 + 1);
        }
      }
      else if ((param_1 != puVar3) && (puVar3 != puVar3 + 1)) {
        FUN_007cca00((int)param_1,(int)puVar3,puVar3 + 1);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != param_2);
  }
  return;
}


//// FUNCTION FUN_007ce870 @ 007ce870 ////

void __cdecl FUN_007ce870(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  void *this;
  uint local_4;
  
  puVar3 = param_2;
  puVar2 = param_1;
  local_4 = *param_1;
  param_1 = (uint *)*param_2;
  this = (void *)(param_4 + 0x3ac);
  puVar4 = FUN_007cdb50(this,(uint *)&param_1);
  puVar5 = FUN_007cdb50(this,&local_4);
  if ((float)puVar5[1] < (float)puVar4[1]) {
    uVar1 = *puVar3;
    *puVar3 = *puVar2;
    *puVar2 = uVar1;
  }
  param_2 = (uint *)*puVar3;
  param_1 = (uint *)*param_3;
  puVar4 = FUN_007cdb50(this,(uint *)&param_1);
  puVar5 = FUN_007cdb50(this,(uint *)&param_2);
  if ((float)puVar5[1] < (float)puVar4[1]) {
    uVar1 = *param_3;
    *param_3 = *puVar3;
    *puVar3 = uVar1;
  }
  param_3 = (uint *)*puVar3;
  param_1 = (uint *)*puVar2;
  puVar4 = FUN_007cdb50(this,(uint *)&param_3);
  puVar5 = FUN_007cdb50(this,(uint *)&param_1);
  if ((float)puVar5[1] < (float)puVar4[1]) {
    uVar1 = *puVar3;
    *puVar3 = *puVar2;
    *puVar2 = uVar1;
  }
  return;
}


//// FUNCTION FUN_007ce950 @ 007ce950 ////

void __cdecl FUN_007ce950(uint *param_1,void *param_2,int param_3,uint param_4,int param_5)

{
  uint *puVar1;
  void *this;
  uint *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint local_4;
  
  puVar1 = param_1;
  pvVar4 = param_2;
  if (param_3 < (int)param_2) {
    local_4 = param_4;
    param_2 = (void *)(param_5 + 0x3ac);
    do {
      this = param_2;
      pvVar3 = (void *)(((int)pvVar4 + -1) / 2);
      param_1 = (uint *)puVar1[(int)pvVar3];
      param_1 = FUN_007cdb50(param_2,(uint *)&param_1);
      puVar2 = FUN_007cdb50(this,&local_4);
      if ((float)param_1[1] <= (float)puVar2[1]) break;
      puVar1[(int)pvVar4] = puVar1[(int)pvVar3];
      pvVar4 = pvVar3;
    } while (param_3 < (int)pvVar3);
  }
  puVar1[(int)pvVar4] = param_4;
  return;
}


//// FUNCTION FUN_007ce9f0 @ 007ce9f0 ////

undefined4 * __thiscall FUN_007ce9f0(void *this,byte param_1)

{
  FUN_007cdcb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007cea10 @ 007cea10 ////

void __fastcall FUN_007cea10(int *param_1)

{
  float fVar1;
  void *this;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  void *unaff_EBP;
  int iVar6;
  bool bVar7;
  int *piStack_c0;
  int *piStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *piStack_ac;
  float fStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfa78;
  pvStack_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &pvStack_c;
  FUN_007ccc10(*(void **)(param_1[0xec] + 4));
  *(int *)(param_1[0xec] + 4) = param_1[0xec];
  param_1[0xed] = 0;
  *(int *)param_1[0xec] = param_1[0xec];
  *(int *)(param_1[0xec] + 8) = param_1[0xec];
  this = operator_new(0x420);
  bVar7 = this == (void *)0x0;
  if (bVar7) {
    piVar3 = (int *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    uVar2 = FUN_00ace02d(L"<translate>AWARDS_TOOLTIP_VIEW</translate>");
    FUN_004036d0(&local_2c,L"<translate>AWARDS_TOOLTIP_VIEW</translate>",uVar2);
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"button_view.",0xc);
    local_48 = 0xc;
    local_4c[0xc] = '\0';
    local_4 = 2;
    uStack_9c = 0x7ceb2d;
    piVar3 = FUN_0069fb10(this,(int *)&local_4c,&local_2c,0x42200000,0x42200000,0,0,0x3f800000,
                          0x3f800000);
  }
  if ((!bVar7) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  if ((!bVar7) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(*piVar3 + 0x18))();
  uStack_9c = 0x7ceb99;
  (**(code **)(*piVar3 + 0x18))();
  uStack_9c = 0x41200000;
  piStack_a4 = (int *)0x2;
  fStack_a8 = 1.1472139e-38;
  piStack_a0 = param_1;
  (**(code **)(*piVar3 + 0x60))();
  fStack_a8 = 27.0;
  uStack_b0 = 1;
  uStack_b4 = 0x7cebb7;
  piStack_ac = param_1;
  (**(code **)(*piVar3 + 100))();
  uStack_b4 = 1;
  piStack_b8 = piVar3;
  (**(code **)(*param_1 + 0xc))();
  piStack_a4 = (int *)0x0;
  puVar4 = DAT_0104bcf0;
  if (DAT_0104bcf0 != &DAT_0104bcfc) {
    do {
      puVar4 = (undefined4 *)puVar4[1];
      iVar6 = iVar6 + 1;
      piStack_a4 = (int *)iVar6;
    } while (puVar4 != &DAT_0104bcfc);
  }
  piVar3 = piStack_a4;
  piStack_a4 = (int *)(352.0 / (float)(int)piStack_a4);
  if (32.0 < (float)piStack_a4) {
    piStack_a4 = (int *)0x42000000;
  }
  fVar1 = ROUND((float)piStack_a4);
  fStack_a8 = 36.0;
  piStack_a4 = (int *)((uint)piStack_a4 & 0xffffff00);
  param_1[0xee] = (int)(float)(int)fVar1;
  iVar6 = GetPlayerStudio();
  puVar4 = DAT_0104bcf0;
  if (0 < (int)piVar3) {
    do {
      piStack_c0 = piStack_a4;
      FUN_007cde00(iVar6);
      fStack_a8 = fStack_a8 + (float)param_1[0xee];
      piStack_a4 = (int *)CONCAT31(piStack_a4._1_3_,(char)piStack_a4 == '\0');
      do {
        if (puVar4 == &DAT_0104bcfc) break;
        iVar6 = puVar4[2];
        puVar4 = (undefined4 *)puVar4[1];
        iVar5 = GetPlayerStudio();
      } while (iVar6 == iVar5);
      piVar3 = (int *)((int)piVar3 + -1);
    } while (piVar3 != (int *)0x0);
  }
  piStack_c0 = (int *)0x7cec99;
  piStack_a0 = operator_new(0x3bc);
  local_44 = 5;
  if (piStack_a0 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piStack_c0 = (int *)0x7cecba;
    piVar3 = FUN_007d0d60(piStack_a0,param_1[0xfd]);
  }
  local_44 = 0xffffffff;
  (**(code **)(param_1[0xf5] + 4))();
  param_1[0xfa] = (int)piVar3;
  (**(code **)param_1[0xf5])();
  piStack_c0 = param_1;
  (**(code **)(*(int *)param_1[0xfa] + 0x60))(2);
  (**(code **)(*(int *)param_1[0xfa] + 100))(1,param_1,0x42140000);
  FUN_0063e260((void *)param_1[0xfa],0x3e4ccccd);
  (**(code **)(*(int *)param_1[0xfa] + 0x20))(0);
  (**(code **)(*param_1 + 0xc))(param_1[0xfa],1);
  piStack_b8 = (int *)0x438e0000;
  uStack_b4 = 0x42da0000;
  piStack_c0 = (int *)0x438e0000;
  FUN_00747290((void *)param_1[0xb5],&piStack_b8);
  FUN_00747290((void *)param_1[0xb5],&piStack_c0);
  FUN_007be450((void *)param_1[0xfe],&piStack_b8,&piStack_c0);
  ExceptionList = unaff_EBP;
  return;
}


//// FUNCTION FUN_007ceda0 @ 007ceda0 ////

void __cdecl FUN_007ceda0(uint *param_1,uint *param_2,uint *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_007ce870(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_007ce870(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_007ce870(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_007ce870(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_007ce870(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_007cee50 @ 007cee50 ////

void __cdecl FUN_007cee50(uint *param_1,uint *param_2,uint *param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  void *this;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  uint local_8;
  uint *local_4;
  
  puVar3 = (uint *)((int)param_2 * 2 + 2);
  bVar5 = puVar3 == param_3;
  local_4 = param_2;
  puVar2 = param_2;
  puVar4 = param_2;
  if ((int)puVar3 < (int)param_3) {
    do {
      param_2 = (uint *)param_1[(int)puVar3];
      local_8 = param_1[(int)puVar3 + -1];
      this = (void *)(param_5 + 0x3ac);
      param_2 = FUN_007cdb50(this,(uint *)&param_2);
      puVar1 = FUN_007cdb50(this,&local_8);
      puVar4 = puVar3;
      if ((float)puVar1[1] < (float)param_2[1]) {
        puVar4 = (uint *)((int)puVar3 + -1);
      }
      param_1[(int)puVar2] = param_1[(int)puVar4];
      puVar3 = (uint *)((int)puVar4 * 2 + 2);
      bVar5 = puVar3 == param_3;
      puVar2 = puVar4;
    } while ((int)puVar3 < (int)param_3);
  }
  if (bVar5) {
    param_1[(int)puVar4] = param_1[(int)param_3 + -1];
    puVar4 = (uint *)((int)param_3 + -1);
  }
  FUN_007ce950(param_1,puVar4,(int)local_4,param_4,param_5);
  return;
}


//// FUNCTION FUN_007cef30 @ 007cef30 ////

int * __thiscall FUN_007cef30(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfacd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063f620(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d57c34;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d57c18;
  iVar1 = FUN_007ccfe0();
  *(int *)((int)this + 0x3b0) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)this + 0x3b0) + 4) = *(int *)((int)this + 0x3b0);
  *(undefined4 *)*(undefined4 *)((int)this + 0x3b0) = *(undefined4 *)((int)this + 0x3b0);
  *(int *)(*(int *)((int)this + 0x3b0) + 8) = *(int *)((int)this + 0x3b0);
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3d0) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 **)((int)this + 0x3e0) = (undefined4 *)((int)this + 0x3d4);
  *(undefined4 *)((int)this + 0x3d4) = &PTR_LAB_00d57ad8;
  *(undefined4 *)((int)this + 1000) = 0;
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 0x3ec) = 0xffffffff;
  *(undefined1 *)((int)this + 0x3f0) = 0;
  *(int *)((int)this + 0x3f4) = param_1;
  pvVar2 = operator_new(0x54);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007be2c0((int)pvVar2);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  *(int *)((int)this + 0x3f8) = iVar1;
  FUN_007cea10(this);
  *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)((int)this + 0x3c4);
  FUN_0063e270(this,0x3f59999a);
  *(undefined1 *)((int)this + 0x344) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007cf060 @ 007cf060 ////

void __cdecl FUN_007cf060(undefined4 *param_1,uint *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  void *pvVar9;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  uint *local_4;
  
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_007ceda0(param_2,puVar6,param_3 + -1,param_4);
  puVar7 = puVar6 + 1;
  local_10 = puVar7;
  if (param_2 < puVar6) {
    pvVar9 = (void *)(param_4 + 0x3ac);
    while( true ) {
      local_c = (uint *)puVar6[-1];
      local_8 = (uint *)*puVar6;
      puVar2 = FUN_007cdb50(pvVar9,(uint *)&local_c);
      puVar3 = FUN_007cdb50(pvVar9,(uint *)&local_8);
      if ((float)puVar3[1] < (float)puVar2[1]) break;
      local_c = (uint *)puVar6[-1];
      local_8 = (uint *)*puVar6;
      puVar2 = FUN_007cdb50(pvVar9,(uint *)&local_8);
      puVar3 = FUN_007cdb50(pvVar9,(uint *)&local_c);
      if (((float)puVar3[1] < (float)puVar2[1]) || (puVar6 = puVar6 + -1, puVar6 <= param_2)) break;
    }
  }
  puVar2 = puVar7;
  puVar3 = local_10;
  local_c = puVar6;
  puVar8 = puVar6;
  if (puVar7 < param_3) {
    pvVar9 = (void *)(param_4 + 0x3ac);
    while( true ) {
      local_c = (uint *)*puVar6;
      local_8 = (uint *)*puVar7;
      puVar4 = FUN_007cdb50(pvVar9,(uint *)&local_8);
      puVar5 = FUN_007cdb50(pvVar9,(uint *)&local_c);
      puVar2 = puVar7;
      puVar3 = puVar7;
      local_c = puVar6;
      if ((float)puVar5[1] < (float)puVar4[1]) break;
      local_8 = (uint *)*puVar6;
      local_c = (uint *)*puVar7;
      puVar4 = FUN_007cdb50(pvVar9,(uint *)&local_8);
      puVar5 = FUN_007cdb50(pvVar9,(uint *)&local_c);
      local_c = puVar6;
      if (((float)puVar5[1] < (float)puVar4[1]) ||
         (puVar7 = puVar7 + 1, puVar2 = puVar7, puVar3 = puVar7, param_3 <= puVar7)) break;
    }
  }
joined_r0x007cf1a7:
  do {
    puVar4 = puVar6;
    local_10 = puVar3;
    if (param_3 <= puVar2) {
joined_r0x007cf25e:
      while (param_2 < puVar6) {
        puVar4 = puVar4 + -1;
        local_8 = (uint *)*puVar4;
        local_4 = (uint *)*puVar8;
        local_8 = FUN_007cdb50((void *)(param_4 + 0x3ac),(uint *)&local_8);
        puVar7 = FUN_007cdb50((void *)(param_4 + 0x3ac),(uint *)&local_4);
        if ((float)local_8[1] <= (float)puVar7[1]) {
          local_8 = (uint *)*puVar4;
          local_4 = (uint *)*puVar8;
          local_4 = FUN_007cdb50((void *)(param_4 + 0x3ac),(uint *)&local_4);
          puVar3 = FUN_007cdb50((void *)(param_4 + 0x3ac),(uint *)&local_8);
          puVar6 = local_c;
          puVar7 = local_10;
          if ((float)puVar3[1] < (float)local_4[1]) break;
          uVar1 = puVar8[-1];
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        local_c = local_c + -1;
        puVar7 = local_10;
        puVar6 = local_c;
      }
      if (puVar6 == param_2) {
        if (puVar2 == param_3) {
          *param_1 = puVar8;
          param_1[1] = puVar7;
          return;
        }
        if (puVar7 != puVar2) {
          uVar1 = *puVar8;
          *puVar8 = *puVar7;
          *puVar7 = uVar1;
        }
        local_4 = (uint *)*puVar8;
        *puVar8 = *puVar2;
        puVar7 = puVar7 + 1;
        *puVar2 = (uint)local_4;
        puVar2 = puVar2 + 1;
        puVar3 = puVar7;
        puVar8 = puVar8 + 1;
      }
      else {
        puVar6 = puVar6 + -1;
        local_c = puVar6;
        if (puVar2 == param_3) {
          puVar8 = puVar8 + -1;
          if (puVar6 != puVar8) {
            uVar1 = *puVar6;
            *puVar6 = *puVar8;
            *puVar8 = uVar1;
          }
          puVar3 = puVar7 + -1;
          uVar1 = *puVar8;
          puVar7 = puVar7 + -1;
          *puVar8 = *puVar3;
          *puVar7 = uVar1;
          puVar3 = puVar7;
        }
        else {
          uVar1 = *puVar2;
          *puVar2 = *puVar6;
          *puVar6 = uVar1;
          puVar2 = puVar2 + 1;
          puVar3 = local_10;
        }
      }
      goto joined_r0x007cf1a7;
    }
    local_10 = (uint *)*puVar2;
    local_8 = (uint *)*puVar8;
    local_8 = FUN_007cdb50((void *)(param_4 + 0x3ac),(uint *)&local_8);
    puVar6 = FUN_007cdb50((void *)(param_4 + 0x3ac),(uint *)&local_10);
    if ((float)local_8[1] <= (float)puVar6[1]) {
      local_10 = (uint *)*puVar8;
      local_8 = (uint *)*puVar2;
      local_8 = FUN_007cdb50((void *)(param_4 + 0x3ac),(uint *)&local_8);
      puVar3 = FUN_007cdb50((void *)(param_4 + 0x3ac),(uint *)&local_10);
      puVar6 = local_c;
      puVar4 = local_c;
      local_10 = puVar7;
      if ((float)puVar3[1] < (float)local_8[1]) goto joined_r0x007cf25e;
      uVar1 = *puVar7;
      *puVar7 = *puVar2;
      puVar7 = puVar7 + 1;
      *puVar2 = uVar1;
    }
    puVar6 = local_c;
    puVar2 = puVar2 + 1;
    puVar3 = puVar7;
  } while( true );
}


//// FUNCTION FUN_007cf3c0 @ 007cf3c0 ////

void __cdecl FUN_007cf3c0(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_2 - (int)param_1 >> 2);
  puVar2 = (uint *)((int)puVar3 - (param_2 - (int)param_1 >> 0x1f) >> 1);
  while (0 < (int)puVar2) {
    iVar1 = (int)puVar2 + -1;
    puVar2 = (uint *)((int)puVar2 + -1);
    FUN_007cee50(param_1,puVar2,puVar3,param_1[iVar1],param_3);
  }
  return;
}


//// FUNCTION FUN_007cf4a0 @ 007cf4a0 ////

void __cdecl FUN_007cf4a0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(uint *)((int)param_1 + iVar2 + -4);
    *(uint *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_007cee50(param_1,(uint *)0x0,(uint *)(iVar2 + -4 >> 2),uVar1,param_3);
  }
  return;
}


//// FUNCTION FUN_007cf4f0 @ 007cf4f0 ////

void __cdecl FUN_007cf4f0(uint *param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint *local_8;
  uint *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_007cf587:
      if (1 < iVar2) {
        FUN_007ce770(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_007cf3c0(param_1,(int)param_2,param_4);
        }
        FUN_007cf4a0(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_007cf587;
    }
    FUN_007cf060(&local_8,param_1,param_2,param_4);
    puVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_007cf4f0(param_1,local_8,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_007cf4f0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_007cf600 @ 007cf600 ////

void __thiscall FUN_007cf600(void *this,void *param_1)

{
  void *this_00;
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 *puVar6;
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
  
  FUN_007cd860((void *)((int)this + 0x3bc),param_1);
  FUN_007cf4f0(*(uint **)((int)this + 0x3c0),*(uint **)((int)this + 0x3c4),
               (int)*(uint **)((int)this + 0x3c4) - (int)*(uint **)((int)this + 0x3c0) >> 2,
               (int)this);
  *(undefined4 *)((int)this + 0x3cc) = *(undefined4 *)((int)this + 0x3c0);
  uVar2 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x3d0) = (int)uVar2;
  if (*(char *)((int)this + 0x3f0) == '\0') {
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
    local_24 = FUN_009b01a0("HUD_AWARDS_NOMINATIONS_ARE");
    puVar6 = &DAT_00d17518;
    iVar5 = 0;
    pbVar4 = local_28;
    iVar3 = 5;
    this_00 = (void *)FUN_004f3b20();
    uVar1 = FUN_004f3270(this_00,iVar3,pbVar4,iVar5,puVar6);
    *(undefined4 *)((int)this + 0x3ec) = uVar1;
  }
  return;
}


//// FUNCTION FUN_007cf800 @ 007cf800 ////

void __thiscall FUN_007cf800(void *this,int *param_1)

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


//// FUNCTION FUN_007cf8c0 @ 007cf8c0 ////

void __cdecl FUN_007cf8c0(int param_1)

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


//// FUNCTION FUN_007cf8e0 @ 007cf8e0 ////

void __cdecl FUN_007cf8e0(int *param_1)

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


//// FUNCTION FUN_007cf910 @ 007cf910 ////

void __fastcall FUN_007cf910(int *param_1)

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


//// FUNCTION FUN_007cf970 @ 007cf970 ////

void __fastcall FUN_007cf970(int *param_1)

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


//// FUNCTION FUN_007cfb10 @ 007cfb10 ////

void __thiscall FUN_007cfb10(void *this,int param_1)

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


//// FUNCTION FUN_007cfb70 @ 007cfb70 ////

int * __fastcall FUN_007cfb70(int *param_1)

{
  FUN_007cf970(param_1);
  return param_1;
}


//// FUNCTION FUN_007cfb80 @ 007cfb80 ////

int * __fastcall FUN_007cfb80(int *param_1)

{
  FUN_007cf910(param_1);
  return param_1;
}


//// FUNCTION FUN_007cfc50 @ 007cfc50 ////

int * __fastcall FUN_007cfc50(int *param_1)

{
  FUN_007cf970(param_1);
  return param_1;
}


//// FUNCTION FUN_007cfc60 @ 007cfc60 ////

int * __fastcall FUN_007cfc60(int *param_1)

{
  FUN_007cf910(param_1);
  return param_1;
}


//// FUNCTION FUN_007cfc70 @ 007cfc70 ////

void FUN_007cfc70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_007cfce0 @ 007cfce0 ////

void FUN_007cfce0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_007cfce0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_007cfd50 @ 007cfd50 ////

void __fastcall FUN_007cfd50(int param_1)

{
  FUN_007cfce0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_007cfd80 @ 007cfd80 ////

void FUN_007cfd80(void)

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


//// FUNCTION FUN_007cfdc0 @ 007cfdc0 ////

void __fastcall FUN_007cfdc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007cfd80();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_007cfdf0 @ 007cfdf0 ////

int __fastcall FUN_007cfdf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007cfd80();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007cfe20 @ 007cfe20 ////

void __thiscall
FUN_007cfe20(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cdfae8;
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
  piVar3 = (int *)FUN_007cfc70(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_007cff1b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_007cfb10(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_007cf800(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_007cff1b;
      if (piVar6 == (int *)*piVar2) {
        FUN_007cf800(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_007cfb10(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_007cffd0 @ 007cffd0 ////

void __thiscall FUN_007cffd0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cdfb08;
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
  FUN_007cf970((int *)&param_2);
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
      goto LAB_007d0141;
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
      piVar2 = (int *)FUN_007cf8e0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_007cf8c0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_007d0141:
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
            FUN_007cfb10(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_007cf800(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_007cfb10(this,(int)piVar5);
              break;
            }
LAB_007d0204:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_007cf800(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_007d0204;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_007cfb10(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_007cf800(this,piVar5);
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


//// FUNCTION FUN_007d0290 @ 007d0290 ////

void __thiscall FUN_007d0290(void *this,undefined4 *param_1,int *param_2)

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
      puVar4 = (undefined4 *)FUN_007cfe20(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_007cf910((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_007cfe20(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007d0350 @ 007d0350 ////

void __thiscall FUN_007d0350(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_007cfce0((void *)piVar6[1]);
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
    FUN_007cffd0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_007d0410 @ 007d0410 ////

undefined4 * __thiscall FUN_007d0410(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_007cfe20(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_007cfe20(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_007cfe20(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_007cf910((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_007cfe20(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_007cfe20(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_007cf970((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_007cfe20(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_007cfe20(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_007d0290(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_007d05b0 @ 007d05b0 ////

int * __thiscall FUN_007d05b0(void *this,int *param_1)

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
  piVar3 = FUN_007d0410(this,&param_1,piVar3,local_8);
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_007d0660 @ 007d0660 ////

void __fastcall FUN_007d0660(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_007d0350(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_007d0690 @ 007d0690 ////

void __fastcall FUN_007d0690(int *param_1)

{
  char cVar1;
  wchar_t *_Format;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  size_t sVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  wchar_t *pwVar11;
  float10 fVar12;
  void *_Memory;
  int *piStack_148;
  int *piStack_144;
  int *apiStack_11c [9];
  void *pvStack_f8;
  undefined2 *puStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined2 auStack_e8 [6];
  void *pvStack_dc;
  void *pvStack_d8;
  undefined2 *puStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined2 auStack_c8 [6];
  wchar_t awStack_bc [2];
  void *pvStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  void *pvStack_6c;
  undefined4 uStack_34;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfb68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  apiStack_11c[1] = param_1;
  (**(code **)(*param_1 + 0x78))();
  puVar3 = operator_new(0x3fc);
  puStack_8 = (undefined1 *)0x0;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar3);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar4 + 0x78))();
  FUN_00830550(piVar4,9,&DAT_00e5b0d8);
  puStack_d4 = auStack_c8;
  auStack_c8[0] = 0;
  uStack_d0 = 0;
  uStack_cc = 10;
  uVar5 = FUN_00ace02d(L"AWARDS_SCREEN_YOURTOTALS");
  FUN_004036d0(&puStack_d4,L"AWARDS_SCREEN_YOURTOTALS",uVar5);
  puStack_f4 = auStack_e8;
  pvStack_c = (void *)0x1;
  auStack_e8[0] = 0;
  uStack_f0 = 0;
  uStack_ec = 10;
  uVar5 = FUN_00ace02d((short *)&DAT_00d57d38);
  FUN_004036d0(&puStack_f4,L"w4",uVar5);
  pvStack_c._0_1_ = 2;
  piStack_144 = (int *)0x7d07a0;
  FUN_00831570(&uStack_b4,&puStack_f4,&puStack_d4);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,3);
  (**(code **)(*piVar4 + 0x54))();
  if (10 < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_b8);
  }
  if (10 < uStack_f0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_f8);
  }
  uStack_10 = 0xffffffff;
  if (uStack_d0 < 0xb) {
    (**(code **)(*piVar4 + 0x8c))();
    piStack_148 = (int *)0x1;
    piStack_144 = param_1;
    (**(code **)(*piVar4 + 0x5c))();
    (**(code **)(*piVar4 + 100))(1,param_1,0x42200000);
    (**(code **)(*param_1 + 0xc))(piVar4,1);
    uStack_34 = 4;
    sVar6 = FUN_00ace02d(L"<table>");
    FUN_0040cae0(&stack0xfffffec0,L"<table>",sVar6);
    apiStack_11c[0] = (int *)FUN_00861af0();
    apiStack_11c[1] = (int *)FUN_00860ec0();
    apiStack_11c[2] = (int *)FUN_00861040();
    apiStack_11c[3] = (int *)FUN_00861150();
    piStack_144 = (int *)0x0;
    do {
      piVar4 = (int *)apiStack_11c[(int)piStack_144][1];
      piVar10 = (int *)*piVar4;
      if (piVar10 != piVar4) {
        do {
          piVar2 = piVar10 + 3;
          FUN_007bd2b0((void *)param_1[0xee],(undefined4 *)&stack0xfffffee0);
          uVar7 = FUN_0085cea0(*piVar2);
          if ((char)uVar7 != '\0') {
            piVar8 = FUN_007d05b0(param_1 + 0xeb,piVar2);
            _Format = (wchar_t *)*piVar8;
            iVar9 = FUN_00860d80(*piVar2);
            pwVar11 = L"wa";
            if ((int)_Format < iVar9) {
              pwVar11 = L"w9";
            }
            sVar6 = FUN_00ace02d(L"<tr><td><");
            FUN_0040cae0(&stack0xfffffec0,L"<tr><td><",sVar6);
            sVar6 = FUN_00ace02d(pwVar11);
            FUN_0040cae0(&stack0xfffffec0,pwVar11,sVar6);
            sVar6 = FUN_00ace02d((short *)&DAT_00d19724);
            FUN_0040cae0(&stack0xfffffec0,L">",sVar6);
            sVar6 = _swprintf(awStack_bc,0xd18f7c,_Format);
            FUN_0040cae0(&stack0xfffffec0,awStack_bc,sVar6);
            sVar6 = FUN_00ace02d((short *)&DAT_00d57ea8);
            FUN_0040cae0(&stack0xfffffec0,L"</",sVar6);
            sVar6 = FUN_00ace02d(pwVar11);
            FUN_0040cae0(&stack0xfffffec0,pwVar11,sVar6);
            sVar6 = FUN_00ace02d(L"></td>");
            FUN_0040cae0(&stack0xfffffec0,L"></td>",sVar6);
            puVar3 = FUN_00861de0(&pvStack_dc,*piVar2);
            sVar6 = FUN_00ace02d(L"<td><w9>");
            FUN_0040cae0(&stack0xfffffec0,L"<td><w9>",sVar6);
            FUN_0040cae0(&stack0xfffffec0,(wchar_t *)*puVar3,puVar3[1]);
            sVar6 = FUN_00ace02d(L"</w9></td></tr>");
            FUN_0040cae0(&stack0xfffffec0,L"</w9></td></tr>",sVar6);
            param_1 = piStack_148;
            if (&lpType_0000000a < puStack_d4) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_dc);
            }
          }
          if (*(char *)((int)piVar10 + 0x11) == '\0') {
            piVar2 = (int *)piVar10[2];
            if (*(char *)((int)piVar2 + 0x11) == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x11);
              piVar10 = piVar2;
              piVar2 = (int *)*piVar2;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar2 + 0x11);
                piVar10 = piVar2;
                piVar2 = (int *)*piVar2;
              }
            }
            else {
              cVar1 = *(char *)(piVar10[1] + 0x11);
              piVar8 = (int *)piVar10[1];
              piVar2 = piVar10;
              while ((piVar10 = piVar8, cVar1 == '\0' && (piVar2 == (int *)piVar10[2]))) {
                cVar1 = *(char *)(piVar10[1] + 0x11);
                piVar8 = (int *)piVar10[1];
                piVar2 = piVar10;
              }
            }
          }
        } while (piVar10 != piVar4);
      }
      piVar4 = piStack_144;
      if ((int)piStack_144 < 3) {
        sVar6 = FUN_00ace02d(L"<tr><td height=8></td></tr>");
        FUN_0040cae0(&stack0xfffffec0,L"<tr><td height=8></td></tr>",sVar6);
      }
      piStack_144 = (int *)((int)piVar4 + 1);
      if (3 < (int)piStack_144) {
        sVar6 = FUN_00ace02d(L"</table>");
        FUN_0040cae0(&stack0xfffffec0,L"</table>",sVar6);
        puVar3 = operator_new(0x3fc);
        uStack_34._0_1_ = 5;
        if (puVar3 == (undefined4 *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = FUN_00833290(puVar3);
        }
        uStack_34 = CONCAT31(uStack_34._1_3_,4);
        (**(code **)(*piVar4 + 0x78))(0x43440000);
        (**(code **)(*piVar4 + 0x54))(&piStack_144);
        (**(code **)(*piVar4 + 0x8c))(0);
        uVar5 = 0x41b00000;
        _Memory = (void *)0x1;
        (**(code **)(*piVar4 + 0x5c))(1,param_1);
        (**(code **)(*piVar4 + 100))(1,param_1,0x42880000);
        (**(code **)(*param_1 + 0xc))(piVar4,1);
        fVar12 = (float10)(**(code **)(*piVar4 + 0x14))();
        (**(code **)(*param_1 + 0x7c))((float)((float10)425.0 - ((float10)304.0 - fVar12)));
        if (uVar5 < 0xb) {
          ExceptionList = pvStack_6c;
          return;
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_d8);
}


//// FUNCTION FUN_007d0bc0 @ 007d0bc0 ////

void __fastcall FUN_007d0bc0(int *param_1)

{
  (**(code **)(*param_1 + 0xa8))();
  FUN_007d0690(param_1);
  return;
}


//// FUNCTION FUN_007d0be0 @ 007d0be0 ////

void __fastcall FUN_007d0be0(int param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_6c;
  undefined4 local_68;
  float local_64 [2];
  int local_5c;
  int *local_58;
  undefined1 local_38 [4];
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfb90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00857d80(local_64);
  local_4 = 0;
  while( true ) {
    pvVar2 = FUN_00857bd0(local_38);
    local_4._0_1_ = 1;
    bVar1 = FUN_00856dd0(local_64,(int)pvVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34 = &PTR_FUN_00d1aed0;
    if (local_2c != (int *)0x0) {
      *local_2c = local_30;
    }
    if (local_30 != 0) {
      *(int **)(local_30 + 4) = local_2c;
    }
    local_20 = 0;
    local_30 = 0;
    local_2c = (int *)0x0;
    if (!bVar1) break;
    FUN_00856da0((int)local_64);
    bVar1 = FUN_00861a90();
    if (!bVar1) {
      iVar3 = FUN_00856da0((int)local_64);
      iVar3 = *(int *)(iVar3 + 0xb8);
      iVar4 = GetPlayerStudio();
      if (iVar3 == iVar4) {
        iVar3 = FUN_00856da0((int)local_64);
        pfVar5 = (float *)FUN_007bd2b0(*(void **)(param_1 + 0x3b8),&local_68);
        uVar6 = FUN_0043b6c0((void *)(iVar3 + 100),pfVar5);
        if ((char)uVar6 != '\0') {
          iVar3 = FUN_00856da0((int)local_64);
          local_6c = *(int *)(iVar3 + 0x60);
          piVar7 = FUN_007d05b0((void *)(param_1 + 0x3ac),&local_6c);
          *piVar7 = *piVar7 + 1;
        }
      }
    }
    FUN_00857260(local_64);
  }
  if (local_58 != (int *)0x0) {
    *local_58 = local_5c;
  }
  if (local_5c != 0) {
    *(int **)(local_5c + 4) = local_58;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d0d30 @ 007d0d30 ////

int __fastcall FUN_007d0d30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007cfd80();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_007d0d60 @ 007d0d60 ////

int * __thiscall FUN_007d0d60(void *this,int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfbb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063f620(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d57f24;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d57f0c;
  iVar1 = FUN_007cfd80();
  *(int *)((int)this + 0x3b0) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 0x3b0) + 4) = *(int *)((int)this + 0x3b0);
  *(undefined4 *)*(undefined4 *)((int)this + 0x3b0) = *(undefined4 *)((int)this + 0x3b0);
  *(int *)(*(int *)((int)this + 0x3b0) + 8) = *(int *)((int)this + 0x3b0);
  *(undefined4 *)((int)this + 0x3b4) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(int *)((int)this + 0x3b8) = param_1;
  FUN_007d0be0((int)this);
  FUN_007d0690(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007d0e00 @ 007d0e00 ////

void * __thiscall FUN_007d0e00(void *this,byte param_1)

{
  FUN_007d0e20((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d0e20 @ 007d0e20 ////

void __fastcall FUN_007d0e20(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdfbc8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_007d0350((void *)(param_1 + 0x3ac),&local_10,(int *)**(int **)(param_1 + 0x3b0),
               *(int **)(param_1 + 0x3b0));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x3b0));
}


//// FUNCTION FUN_007d0ea0 @ 007d0ea0 ////

void __fastcall FUN_007d0ea0(int *param_1)

{
  int *piVar1;
  
  piVar1 = FUN_007d05b0(param_1 + 0xeb,(int *)&stack0x00000004);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*param_1 + 0xa8))();
  FUN_007d0690(param_1);
  return;
}


//// FUNCTION FUN_007d0ed0 @ 007d0ed0 ////

undefined4 * __fastcall FUN_007d0ed0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfbf3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0063f620(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d58044;
  param_1[0x14] = &PTR_FUN_00d5802c;
  FUN_0063e260(param_1,0x3e3851ec);
  FUN_0063e6c0(param_1,0xffedf1fa,0xffd6e3e9);
  puVar1 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(puVar1);
  }
  param_1[0xeb] = piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  puVar1 = param_1;
  (**(code **)(*piVar2 + 0x5c))(1,param_1,0x42240000);
  (**(code **)(*(int *)param_1[0xeb] + 100))(1,param_1,0x41d00000);
  FUN_0073f6e0(param_1,(int *)param_1[0xeb]);
  ExceptionList = puVar1;
  return param_1;
}


//// FUNCTION FUN_007d0fd0 @ 007d0fd0 ////

void __fastcall FUN_007d0fd0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdfc08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d58044;
  param_1[0x14] = &PTR_FUN_00d5802c;
  puVar2 = (undefined4 *)param_1[0xeb];
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    param_1[0xeb] = 0;
  }
  local_4 = 0xffffffff;
  FUN_0063f180(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007d1040 @ 007d1040 ////

undefined4 * __thiscall FUN_007d1040(void *this,byte param_1)

{
  FUN_007d0fd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d1060 @ 007d1060 ////

void __fastcall FUN_007d1060(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint _Count;
  float10 fVar3;
  undefined4 unaff_retaddr;
  void *local_30;
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [6];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfc28;
  pvStack_c = ExceptionList;
  local_30 = (void *)0x43160000;
  ExceptionList = &pvStack_c;
  while( true ) {
    *(void **)(param_1[0xeb] + 0x354) = local_30;
    *(undefined1 *)(param_1[0xeb] + 0x358) = 1;
    local_2c = local_20;
    local_20[0] = L'\0';
    local_28 = 0;
    local_24 = 10;
    _Count = FUN_00ace02d((short *)&lpCaption_00d16918);
    if (local_24 <= _Count) {
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      local_24 = _Count + 0x20 & 0xffffffe0;
      local_2c = _malloc(local_24 * 2);
    }
    _wcsncpy(local_2c,(wchar_t *)&lpCaption_00d16918,_Count);
    local_2c[_Count] = L'\0';
    local_4 = 0;
    local_28 = _Count;
    (**(code **)(*(int *)param_1[0xeb] + 0x54))(&local_2c);
    puStack_8 = (undefined1 *)0xffffffff;
    if (10 < local_28) break;
    (**(code **)(*(int *)param_1[0xeb] + 0x54))(unaff_retaddr);
    (**(code **)(*(int *)param_1[0xeb] + 0x84))(0);
    fVar3 = (float10)(**(code **)(*(int *)param_1[0xeb] + 0x14))();
    if ((fVar3 <= (float10)(float)local_30 * (float10)0.35) ||
       (local_30 = (void *)((float)local_30 + 50.0),
       (float)local_30 < 300.0 == ((float)local_30 == 300.0))) {
      piVar1 = (int *)param_1[0xeb];
      iVar2 = *param_1;
      fVar3 = (float10)(**(code **)(*piVar1 + 0x14))();
      fVar3 = (float10)(**(code **)(*piVar1 + 0x10))((float)(fVar3 + (float10)52.0));
      (**(code **)(iVar2 + 0x74))((float)(fVar3 + (float10)82.0));
      ExceptionList = pvStack_14;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_30);
}


//// FUNCTION FUN_007d1200 @ 007d1200 ////

void __fastcall FUN_007d1200(int *param_1)

{
  WWindow_Tick(param_1);
  FUN_0053d480((int)param_1);
  return;
}


//// FUNCTION FUN_007d14f0 @ 007d14f0 ////

int * __cdecl FUN_007d14f0(int *param_1,int *param_2,int *param_3)

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


//// FUNCTION FUN_007d1540 @ 007d1540 ////

void __cdecl FUN_007d1540(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdfc51;
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


//// FUNCTION FUN_007d15e0 @ 007d15e0 ////

void __fastcall FUN_007d15e0(int *param_1)

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


//// FUNCTION FUN_007d1620 @ 007d1620 ////

void __cdecl FUN_007d1620(int *param_1,int *param_2,int *param_3)

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


//// FUNCTION FUN_007d16a0 @ 007d16a0 ////

int * __thiscall FUN_007d16a0(void *this,byte param_1)

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


//// FUNCTION FUN_007d1760 @ 007d1760 ////

void __fastcall FUN_007d1760(int param_1)

{
  if (*(int *)(param_1 + 0x38c) != -1) {
    *(int *)(param_1 + 0x390) = *(int *)(param_1 + 0x38c);
    *(undefined4 *)(param_1 + 0x38c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x358) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x354) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x370) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x36c) = 0;
    *(undefined4 *)(param_1 + 0x368) = 0;
    *(undefined4 *)(param_1 + 0x380) = 0;
    *(undefined4 *)(param_1 + 0x37c) = 0;
    *(undefined4 *)(param_1 + 0x364) = 0;
    *(undefined4 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined4 *)(param_1 + 0x374) = 0;
    *(undefined4 *)(param_1 + 0x35c) = 0;
    FUN_00415910((undefined4 *)(param_1 + 0x354),2.0,0.0,0.1);
  }
  return;
}


//// FUNCTION FUN_007d17c0 @ 007d17c0 ////

void __thiscall FUN_007d17c0(void *this,int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(*(int *)((int)this + 0x348) + param_1 * 4) + 0x90))(param_2);
  return;
}


//// FUNCTION FUN_007d1950 @ 007d1950 ////

void FUN_007d1950(int *param_1)

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


//// FUNCTION FUN_007d1970 @ 007d1970 ////

int * __cdecl FUN_007d1970(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cdfc71;
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


//// FUNCTION FUN_007d1a20 @ 007d1a20 ////

void __thiscall FUN_007d1a20(void *this,int param_1)

{
  if (param_1 != *(int *)((int)this + 0x38c)) {
    FUN_007d1760((int)this);
    *(int *)((int)this + 0x38c) = param_1;
    *(undefined4 *)((int)this + 0x358) = 0x3f800000;
    *(undefined4 *)((int)this + 0x354) = 0x3f800000;
    *(undefined4 *)((int)this + 0x370) = 0x3f800000;
    *(undefined4 *)((int)this + 0x36c) = 0;
    *(undefined4 *)((int)this + 0x368) = 0;
    *(undefined4 *)((int)this + 0x380) = 0;
    *(undefined4 *)((int)this + 0x37c) = 0;
    *(undefined4 *)((int)this + 0x364) = 0;
    *(undefined4 *)((int)this + 0x378) = 0;
    *(undefined4 *)((int)this + 0x360) = 0;
    *(undefined4 *)((int)this + 0x374) = 0;
    *(undefined4 *)((int)this + 0x35c) = 0;
    FUN_00415910((undefined4 *)((int)this + 0x354),2.0,0.0,0.1);
  }
  return;
}


//// FUNCTION FUN_007d1a90 @ 007d1a90 ////

void __cdecl FUN_007d1a90(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cdfc91;
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


//// FUNCTION FUN_007d1b40 @ 007d1b40 ////

void __cdecl FUN_007d1b40(int *param_1,int *param_2)

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


//// FUNCTION FUN_007d1c20 @ 007d1c20 ////

int * FUN_007d1c20(int *param_1,int param_2,int *param_3)

{
  FUN_007d1a90(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_007d1c50 @ 007d1c50 ////

void FUN_007d1c50(int *param_1,int *param_2)

{
  FUN_007d1b40(param_1,param_2);
  return;
}


//// FUNCTION FUN_007d1c70 @ 007d1c70 ////

void FUN_007d1c70(void)

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
  puStack_8 = &LAB_00cdfca8;
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


//// FUNCTION FUN_007d1d70 @ 007d1d70 ////

void __thiscall FUN_007d1d70(void *this,int *param_1,uint param_2,int *param_3)

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
  
  puStack_c = &LAB_00cdfcc8;
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
      uVar7 = FUN_007d1c70();
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
      piVar5 = FUN_007d1970(*(int **)((int)this + 4),param_1,piVar4);
      FUN_007d1a90(piVar5,param_2,(int *)&param_3);
      FUN_007d1970(param_1,*(int **)((int)this + 8),piVar5 + param_2);
      piVar5 = *(int **)((int)this + 4);
      local_8 = 0;
      if (piVar5 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - (int)piVar5 >> 2;
      }
      if (piVar5 != (int *)0x0) {
        FUN_007d1b40(piVar5,*(int **)((int)this + 8));
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
        FUN_007d1970(param_1,piVar5,param_1 + param_2);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007d1c20(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 2),(int *)&param_3);
        iVar6 = *(int *)((int)this + 8) + param_2 * 4;
        *(int *)((int)this + 8) = iVar6;
        local_8 = 0;
        FUN_007d1620(param_1,(int *)(iVar6 + param_2 * -4),(int *)&param_3);
      }
      else {
        piVar4 = FUN_007d1970(piVar5 + -param_2,piVar5,piVar5);
        *(int **)((int)this + 8) = piVar4;
        FUN_007d14f0(param_1,piVar5 + -param_2,piVar5);
        FUN_007d1620(param_1,param_1 + param_2,(int *)&param_3);
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


//// FUNCTION FUN_007d2030 @ 007d2030 ////

void __fastcall FUN_007d2030(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    FUN_007d1b40(*(int **)(param_1 + 4),*(int **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_007d20c0 @ 007d20c0 ////

undefined4 * __thiscall FUN_007d20c0(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfcf6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d58164;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5814c;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 900) = *param_1;
  *(undefined4 *)((int)this + 0x388) = param_1[1];
  *(undefined4 *)((int)this + 0x394) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x390) = 0xffffffff;
  *(undefined4 *)((int)this + 0x358) = 0x3f800000;
  *(undefined4 *)((int)this + 0x354) = 0x3f800000;
  *(undefined4 *)((int)this + 0x370) = 0x3f800000;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  FUN_0053d480((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007d21f0 @ 007d21f0 ////

void __thiscall FUN_007d21f0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_007d1a90(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 1;
    return;
  }
  FUN_007d1d70(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_007d2260 @ 007d2260 ////

undefined4 * __thiscall FUN_007d2260(void *this,byte param_1)

{
  FUN_007d2280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d2280 @ 007d2280 ////

void __fastcall FUN_007d2280(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdfd08;
  local_c = ExceptionList;
  local_4 = 0;
  if ((int *)param_1[0xd2] != (int *)0x0) {
    ExceptionList = &local_c;
    FUN_007d1b40((int *)param_1[0xd2],(int *)param_1[0xd3]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd2]);
  }
  ExceptionList = &local_c;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d2300 @ 007d2300 ////

int * __thiscall FUN_007d2300(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfd33;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar3 = operator_new(0x360);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_0069d820(pvVar3,param_1,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar4 + 0x74))();
  if ((*(int *)((int)this + 0x348) == 0) ||
     (*(int *)((int)this + 0x34c) - *(int *)((int)this + 0x348) >> 2 == 0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
  (**(code **)(*piVar4 + 0x5c))(uVar5);
  pvVar3 = this;
  (**(code **)(*piVar4 + 100))(1,this,*(float *)((int)this + 0x388) * 0.5);
  (**(code **)(*piVar4 + 0x74))(*(undefined4 *)((int)this + 900),*(undefined4 *)((int)this + 0x388))
  ;
  (**(code **)(*(int *)this + 0xc))(piVar4,1);
  piVar4[0x12] = piVar4[0x12] + 1;
  FUN_007d21f0((void *)((int)this + 0x344),(int *)&stack0xffffffd4);
  iVar2 = piVar4[0x12];
  piVar4[0x12] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    (**(code **)*piVar4)(1);
  }
  piVar1 = piVar4 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar4)(1);
  }
  ExceptionList = pvVar3;
  return piVar4;
}


//// FUNCTION CeremonyState_AttachToController @ 007d2490 ////

undefined4 * __fastcall CeremonyState_AttachToController(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  return param_1;
}


//// FUNCTION FUN_007d24b0 @ 007d24b0 ////

void __fastcall FUN_007d24b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d24f0 @ 007d24f0 ////

undefined4 * __fastcall FUN_007d24f0(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d58278;
  return param_1;
}


//// FUNCTION FUN_007d2510 @ 007d2510 ////

bool __fastcall FUN_007d2510(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  return *(int *)(param_1 + 4) + 2000U < (uint)uVar1;
}


//// FUNCTION FUN_007d2530 @ 007d2530 ////

void __fastcall FUN_007d2530(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0x3bc) = (int)uVar1 + 2000;
  return;
}


//// FUNCTION FUN_007d2550 @ 007d2550 ////

int * __thiscall FUN_007d2550(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007d2590 @ 007d2590 ////

int * __thiscall FUN_007d2590(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007d25d0 @ 007d25d0 ////

int * __thiscall FUN_007d25d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007d2610 @ 007d2610 ////

int * __thiscall FUN_007d2610(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007d2650 @ 007d2650 ////

int * __thiscall FUN_007d2650(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007d2690 @ 007d2690 ////

int * __thiscall FUN_007d2690(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007d2710 @ 007d2710 ////

int __fastcall FUN_007d2710(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


//// FUNCTION FUN_007d2ac0 @ 007d2ac0 ////

void __cdecl FUN_007d2ac0(int param_1)

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


//// FUNCTION FUN_007d2ae0 @ 007d2ae0 ////

void __cdecl FUN_007d2ae0(int *param_1)

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


//// FUNCTION FUN_007d2b10 @ 007d2b10 ////

void __thiscall FUN_007d2b10(void *this,int param_1)

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


//// FUNCTION FUN_007d2b70 @ 007d2b70 ////

void __cdecl FUN_007d2b70(int param_1)

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


//// FUNCTION FUN_007d2b90 @ 007d2b90 ////

void __thiscall FUN_007d2b90(void *this,int *param_1)

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


//// FUNCTION FUN_007d2c20 @ 007d2c20 ////

void __fastcall FUN_007d2c20(int *param_1)

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


//// FUNCTION FUN_007d2c80 @ 007d2c80 ////

void __cdecl FUN_007d2c80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_007d2cd0 @ 007d2cd0 ////

void __cdecl FUN_007d2cd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_007d2d10 @ 007d2d10 ////

void __cdecl FUN_007d2d10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_007d3010 @ 007d3010 ////

void FUN_007d3010(float param_1)

{
  FUN_007c9f20(&PTR_DAT_00e5b674,param_1);
  return;
}


//// FUNCTION FUN_007d3030 @ 007d3030 ////

void FUN_007d3030(void)

{
  FUN_007c9f20(&PTR_DAT_00e5b6b4,0.0);
  return;
}


//// FUNCTION FUN_007d3050 @ 007d3050 ////

void FUN_007d3050(void)

{
  FUN_007c9f20(&PTR_DAT_00e5b6f4,0.0);
  return;
}


//// FUNCTION FUN_007d30b0 @ 007d30b0 ////

void FUN_007d30b0(void)

{
  FUN_007c9f20(&PTR_DAT_00e5b714,0.0);
  return;
}


//// FUNCTION FUN_007d3190 @ 007d3190 ////

undefined4 * __fastcall FUN_007d3190(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfd48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d5828c;
  local_4 = 0;
  FUN_007c9f20(&PTR_DAT_00e5b6b4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b6f4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,0.0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007d3260 @ 007d3260 ////

undefined4 * __thiscall FUN_007d3260(void *this,byte param_1)

{
  FUN_007d3280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d3280 @ 007d3280 ////

void __fastcall FUN_007d3280(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d3290 @ 007d3290 ////

undefined4 * FUN_007d3290(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfd6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d32f0(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d32f0 @ 007d32f0 ////

undefined4 * __fastcall FUN_007d32f0(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfd88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d582a0;
  local_4 = 0;
  FUN_007c9f20(&PTR_DAT_00e5b6b4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b6f4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,0.0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007d33c0 @ 007d33c0 ////

undefined4 * __thiscall FUN_007d33c0(void *this,byte param_1)

{
  FUN_007d33e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d33e0 @ 007d33e0 ////

void __fastcall FUN_007d33e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d33f0 @ 007d33f0 ////

undefined4 * __thiscall FUN_007d33f0(void *this,byte param_1)

{
  FUN_007d3410(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d3410 @ 007d3410 ////

void __fastcall FUN_007d3410(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d3440 @ 007d3440 ////

void __fastcall FUN_007d3440(int param_1)

{
  int iVar1;
  
  DAT_0104e9ac = 1;
  FUN_007c9fc0('\x01');
  FUN_007cc4c0(*(void **)(param_1 + 0x358),'\x01');
  iVar1 = *(int *)(param_1 + 0x41c);
  while (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x41c) + 4))();
    if (*(undefined4 **)(param_1 + 0x41c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x41c))(1);
    }
    *(int *)(param_1 + 0x41c) = iVar1;
  }
  FUN_007cc4c0(*(void **)(param_1 + 0x358),'\0');
  FUN_007c9fc0('\0');
  DAT_0104e9ac = 0;
  return;
}


//// FUNCTION FUN_007d34f0 @ 007d34f0 ////

void __fastcall FUN_007d34f0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x370) + 0x100))();
  FUN_006e3d40(*(int *)(param_1 + 0x404));
  return;
}


//// FUNCTION FUN_007d3870 @ 007d3870 ////

void __thiscall FUN_007d3870(void *this,int param_1)

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


//// FUNCTION FUN_007d38d0 @ 007d38d0 ////

void __thiscall FUN_007d38d0(void *this,int *param_1)

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


//// FUNCTION FUN_007d39b0 @ 007d39b0 ////

void __fastcall FUN_007d39b0(int *param_1)

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


//// FUNCTION FUN_007d3ab0 @ 007d3ab0 ////

int * __fastcall FUN_007d3ab0(int *param_1)

{
  FUN_007d2c20(param_1);
  return param_1;
}


//// FUNCTION FUN_007d3af0 @ 007d3af0 ////

void __cdecl FUN_007d3af0(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_2;
    return;
  }
  do {
    if (*param_2 == *param_4) break;
    param_2 = param_2 + 1;
  } while (param_2 != param_3);
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007d3b30 @ 007d3b30 ////

void __cdecl FUN_007d3b30(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_007d3b60 @ 007d3b60 ////

void __cdecl FUN_007d3b60(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_007d3b90 @ 007d3b90 ////

void __cdecl FUN_007d3b90(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_007d3c80 @ 007d3c80 ////

void __cdecl FUN_007d3c80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_007d3cb0 @ 007d3cb0 ////

undefined4 * __cdecl FUN_007d3cb0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *local_90;
  uint local_8c;
  uint local_88;
  char local_84 [20];
  char *local_70;
  undefined4 local_6c;
  uint local_68;
  char local_64 [20];
  undefined4 local_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdfdbb;
  local_c = ExceptionList;
  local_90 = local_84;
  local_50 = 0;
  local_84[0] = '\0';
  local_8c = 0;
  local_88 = 0x14;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00ace790(param_2,0,&TM::CStudio::RTTI_Type_Descriptor,
                       &TM::CStudioAI::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    local_70 = local_64;
    local_64[0] = '\0';
    local_6c = 0;
    local_68 = 0x40;
    local_70 = _malloc(0x40);
    _strncpy(local_70,"PROFILESCREEN_DIALOGUE_DEFAULTSTUDIONAME",0x28);
    local_6c = 0x28;
    local_70[0x28] = '\0';
    local_4._0_1_ = 1;
    piVar2 = (int *)GetPlayerStudio();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x20))(local_2c);
    local_4 = CONCAT31(local_4._1_3_,2);
    piVar2 = FUN_009b57d0((int *)apvStack_4c,&local_70,puVar3);
    FUN_004015d0(&local_90,(char *)*piVar2,piVar2[1]);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_70);
    }
  }
  else {
    FUN_004073f0(&local_90,"AWARDS_DIALOGUE_WINNERIS_",0x19);
    FUN_004073f0(&local_90,*(char **)(iVar1 + 0x1f0),*(size_t *)(iVar1 + 500));
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_90,local_8c);
  if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007d3e60 @ 007d3e60 ////

void __fastcall FUN_007d3e60(int param_1)

{
  uint uVar1;
  ushort *local_2c;
  uint local_28;
  uint local_24;
  ushort local_20 [8];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfde0;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = local_20[0] & 0xff00;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy((char *)local_2c,"button_right.",0xd);
  local_28 = 0xd;
  *(char *)((int)local_2c + 0xd) = '\0';
  local_4 = 0;
  FUN_0069f100(*(void **)(param_1 + 0x388),(int *)&local_2c,0,0,0x3f800000,0x3f800000);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar1 = FUN_00ace02d(L"<translate>AWARDS_TOOLTIP_NEXT</translate>");
  FUN_004036d0(&local_2c,L"<translate>AWARDS_TOOLTIP_NEXT</translate>",uVar1);
  local_4 = 1;
  (**(code **)(**(int **)(param_1 + 0x388) + 0x90))();
  if (10 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(&stack0xffffffb8);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_007d3f90 @ 007d3f90 ////

/* WARNING: Removing unreachable block (ram,0x007d403f) */

void __fastcall FUN_007d3f90(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 *unaff_retaddr;
  void *pvStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  void *pvStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfe00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x20))(1);
  uVar3 = FUN_00ace02d((short *)&DAT_00d5832c);
  FUN_004036d0(&stack0xffffffb0,L"w3",uVar3);
  puStack_8 = (undefined1 *)0x0;
  puVar4 = FUN_008319b0(&uStack_30,(undefined4 *)&stack0xffffffb0,unaff_retaddr);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  (**(code **)(**(int **)(param_1 + 0x3a0) + 0x54))(puVar4);
  if (uStack_2c < 0xb) {
    pvStack_c = (void *)0xffffffff;
    iVar1 = **(int **)(param_1 + 0x3a0);
    fVar5 = (float10)(**(code **)(iVar1 + 0x14))();
    (**(code **)(iVar1 + 100))(1,param_1,(float)((float10)616.0 - fVar5 * (float10)0.5));
    do {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x3a0) + 0x50))(1);
    } while (cVar2 != '\0');
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_34);
}


//// FUNCTION FUN_007d40a0 @ 007d40a0 ////

/* WARNING: Removing unreachable block (ram,0x007d4155) */

void __fastcall FUN_007d40a0(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 *unaff_retaddr;
  void *pvStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  void *pvStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfe20;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x20))(1);
  uVar3 = FUN_00ace02d((short *)&DAT_00d5832c);
  FUN_004036d0(&stack0xffffffb0,L"w3",uVar3);
  puStack_8 = (undefined1 *)0x0;
  puVar4 = FUN_008319b0(&uStack_30,(undefined4 *)&stack0xffffffb0,unaff_retaddr);
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  (**(code **)(**(int **)(param_1 + 0x3b8) + 0x54))(puVar4);
  if (uStack_2c < 0xb) {
    pvStack_c = (void *)0xffffffff;
    iVar1 = **(int **)(param_1 + 0x3b8);
    fVar5 = (float10)(**(code **)(iVar1 + 0x14))();
    (**(code **)(iVar1 + 100))(1,param_1,(float)((float10)616.0 - fVar5 * (float10)0.5));
    do {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x3b8) + 0x50))(1);
    } while (cVar2 != '\0');
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_34);
}


//// FUNCTION FUN_007d4220 @ 007d4220 ////

void __fastcall FUN_007d4220(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58338;
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


//// FUNCTION FUN_007d42c0 @ 007d42c0 ////

void __fastcall FUN_007d42c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58348;
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


//// FUNCTION FUN_007d4360 @ 007d4360 ////

void __fastcall FUN_007d4360(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58358;
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


//// FUNCTION FUN_007d4400 @ 007d4400 ////

void __fastcall FUN_007d4400(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58368;
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


//// FUNCTION FUN_007d44a0 @ 007d44a0 ////

void __fastcall FUN_007d44a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58378;
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


//// FUNCTION FUN_007d4540 @ 007d4540 ////

void __fastcall FUN_007d4540(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58388;
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


//// FUNCTION FUN_007d4680 @ 007d4680 ////

void FUN_007d4680(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_007d46c0 @ 007d46c0 ////

int * __fastcall FUN_007d46c0(int *param_1)

{
  FUN_007d39b0(param_1);
  return param_1;
}


//// FUNCTION FUN_007d46d0 @ 007d46d0 ////

void FUN_007d46d0(void)

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


//// FUNCTION FUN_007d4720 @ 007d4720 ////

void FUN_007d4720(void)

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


//// FUNCTION FUN_007d4770 @ 007d4770 ////

void FUN_007d4770(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_007d4770(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_007d47b0 @ 007d47b0 ////

void FUN_007d47b0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_007d47b0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_007d47f0 @ 007d47f0 ////

int * __fastcall FUN_007d47f0(int *param_1)

{
  FUN_0063b190(param_1);
  return param_1;
}


//// FUNCTION FUN_007d4800 @ 007d4800 ////

int * __fastcall FUN_007d4800(int *param_1)

{
  FUN_007d2c20(param_1);
  return param_1;
}


//// FUNCTION FUN_007d4890 @ 007d4890 ////

void * FUN_007d4890(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_007d48c0 @ 007d48c0 ////

void __cdecl FUN_007d48c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_007d4930 @ 007d4930 ////

void __thiscall FUN_007d4930(void *this,void *param_1)

{
  undefined4 uVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfe38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(this,local_2c);
  local_4 = 0;
  uVar1 = FUN_00558750(param_1,local_2c,0);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d49a0 @ 007d49a0 ////

void __thiscall FUN_007d49a0(void *this,void *param_1)

{
  undefined4 uVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfe58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(this,local_2c);
  local_4 = 0;
  uVar1 = FUN_00558750(param_1,local_2c,0);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d4a10 @ 007d4a10 ////

void __thiscall FUN_007d4a10(void *this,void *param_1)

{
  float10 fVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfe78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(this,local_2c);
  local_4 = 0;
  fVar1 = FUN_00558610(param_1,local_2c,0.0);
  *(float *)((int)this + 0xc) = (float)fVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d4a80 @ 007d4a80 ////

void __thiscall FUN_007d4a80(void *this,void *param_1)

{
  undefined4 *puVar1;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdfe98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(this,local_4c);
  local_4 = 0;
  puVar1 = FUN_005584e0(param_1,local_2c,local_4c);
  FUN_004015d0((void *)((int)this + 0xc),(char *)*puVar1,puVar1[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d4b60 @ 007d4b60 ////

void __fastcall FUN_007d4b60(int param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
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
  puStack_8 = &LAB_00cdfec8;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x20;
  ExceptionList = &local_c;
  local_6c = _malloc(0x20);
  _strncpy(local_6c,"AWARDS_DIALOGUE_NOMINEES_",0x19);
  local_68 = 0x19;
  local_6c[0x19] = '\0';
  local_4 = 0;
  ppuVar1 = FUN_00860970(*(int *)(**(int **)(param_1 + 0x418) + 0x60));
  FUN_004073f0(&local_6c,*ppuVar1,(size_t)ppuVar1[1]);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,local_6c,local_68);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"",0);
  local_48 = 0;
  *local_4c = '\0';
  local_4._0_1_ = 3;
  piVar2 = (int *)FUN_009b5f90(&local_2c,0xffffffff,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_007d3f90(param_1);
  FUN_007c9f40(piVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d4cd0 @ 007d4cd0 ////

void __fastcall FUN_007d4cd0(int param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
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
  puStack_8 = &LAB_00cdfef8;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x20;
  ExceptionList = &local_c;
  local_6c = _malloc(0x20);
  _strncpy(local_6c,"AWARDS_DIALOGUE_WINNERIS_",0x19);
  local_68 = 0x19;
  local_6c[0x19] = '\0';
  local_4 = 0;
  ppuVar1 = FUN_00860970(*(int *)(**(int **)(param_1 + 0x418) + 0x60));
  FUN_004073f0(&local_6c,*ppuVar1,(size_t)ppuVar1[1]);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,local_6c,local_68);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"",0);
  local_48 = 0;
  *local_4c = '\0';
  local_4._0_1_ = 3;
  piVar2 = (int *)FUN_009b5f90(&local_2c,0xffffffff,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_007d40a0(param_1);
  FUN_007c9f80(piVar2);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d4e40 @ 007d4e40 ////

void __fastcall FUN_007d4e40(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cdff20;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 0;
  iVar1 = *(int *)(**(int **)(param_1 + 0x418) + 0x60);
  ExceptionList = &local_c;
  FUN_004073f0(&local_4c,"AWARDS_DIALOGUE_EXPLAIN_",0x18);
  ppuVar2 = FUN_00860970(iVar1);
  FUN_004073f0(&local_4c,*ppuVar2,(size_t)ppuVar2[1]);
  FUN_009b5030(local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_007d40a0(param_1);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d4f10 @ 007d4f10 ////

void __fastcall FUN_007d4f10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined4 local_110;
  ushort *puStack_10c;
  uint uStack_108;
  uint uStack_104;
  ushort auStack_100 [10];
  char *local_ec;
  undefined4 local_e8;
  uint local_e4;
  char local_e0 [20];
  void *apvStack_cc [2];
  uint uStack_c4;
  wchar_t awStack_8c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cdff5c;
  pvStack_c = ExceptionList;
  local_ec = local_e0;
  local_e0[0] = '\0';
  local_e8 = 0;
  local_e4 = 0x14;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  FUN_007bd2b0(*(void **)(param_1 + 0x424),&local_110);
  uVar4 = FUN_0043b560();
  iVar1 = FUN_0085bb00();
  if ((int)uVar4 == iVar1) {
    if (local_e4 < 0x1e) {
      if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ec);
      }
      local_e4 = 0x20;
      local_ec = _malloc(0x20);
    }
    _strncpy(local_ec,"AWARDS_DIALOGUE_WELCOME_FIRST",0x1d);
    local_e8 = 0x1d;
    local_ec[0x1d] = '\0';
  }
  else {
    FUN_007bd2b0(*(void **)(param_1 + 0x424),&local_110);
    uVar4 = FUN_0043b560();
    if ((int)uVar4 < 0x7db) {
      puStack_10c = auStack_100;
      auStack_100[0] = auStack_100[0] & 0xff00;
      uStack_108 = 0;
      uStack_104 = 0x20;
      puStack_10c = _malloc(0x20);
      _strncpy((char *)puStack_10c,"AWARDS_DIALOGUE_WELCOME_",0x18);
      uStack_108 = 0x18;
      *(char *)(puStack_10c + 0xc) = '\0';
      local_4._0_1_ = 1;
      FUN_007bd2b0(*(void **)(param_1 + 0x424),&local_110);
      uVar4 = FUN_0043b560();
      sVar3 = _sprintf((char *)apvStack_cc,(char *)&param_2_00d1b93c,(int)uVar4);
      FUN_004073f0(&puStack_10c,(char *)apvStack_cc,sVar3);
      FUN_004015d0(&local_ec,(char *)puStack_10c,uStack_108);
      local_4._0_1_ = 0;
      if (0x14 < uStack_104) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_10c);
      }
    }
    else {
      if (local_e4 < 0x23) {
        if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ec);
        }
        local_e4 = 0x40;
        local_ec = _malloc(0x40);
      }
      _strncpy(local_ec,"AWARDS_DIALOGUE_WELCOME_AFTER_2010",0x22);
      local_e8 = 0x22;
      local_ec[0x22] = '\0';
    }
  }
  puVar2 = FUN_009b5030(apvStack_cc,&local_ec);
  puStack_10c = auStack_100;
  auStack_100[0] = 0;
  uStack_108 = 0;
  uStack_104 = 10;
  local_4._0_1_ = 3;
  sVar3 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(&puStack_10c,L"<phrasebook>",sVar3);
  FUN_0040cae0(&puStack_10c,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L"<phrase key=YEAR>");
  FUN_0040cae0(&puStack_10c,L"<phrase key=YEAR>",sVar3);
  FUN_007bd2b0(*(void **)(param_1 + 0x424),&local_110);
  uVar4 = FUN_0043b560();
  sVar3 = _swprintf(awStack_8c,0xd18f7c,(wchar_t *)uVar4);
  FUN_0040cae0(&puStack_10c,awStack_8c,sVar3);
  sVar3 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(&puStack_10c,L"</phrase></phrasebook>",sVar3);
  FUN_007d3f90(param_1);
  if (10 < uStack_104) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_10c);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (10 < uStack_c4) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_cc[0]);
  }
  FUN_007c9f40((int *)&local_ec);
  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007d5240 @ 007d5240 ////

void __fastcall FUN_007d5240(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined4 local_50;
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
  puStack_8 = &LAB_00cdff88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bd2b0(*(void **)(param_1 + 0x424),&local_50);
  uVar5 = FUN_0043b560();
  iVar2 = FUN_0085bb00();
  pcVar4 = "AWARDS_DIALOGUE_WELCOME_REPLY_FIRST";
  if ((int)uVar5 != iVar2) {
    pcVar4 = "AWARDS_DIALOGUE_WELCOME_REPLY_GENERIC";
  }
  puStack_4c = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 0;
  uStack_44 = 0x14;
  pcVar3 = pcVar4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_4c,pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
  uStack_4 = 0;
  FUN_009b5030(apvStack_2c,&puStack_4c);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  FUN_007d40a0(param_1);
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_4c);
  }
  puStack_4c = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 0;
  uStack_44 = 0x14;
  pcVar3 = pcVar4;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&puStack_4c,pcVar4,(int)pcVar3 - (int)(pcVar4 + 1));
  uStack_4 = 2;
  FUN_007c9f80((int *)&puStack_4c);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_4c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007d5380 @ 007d5380 ////

void __fastcall FUN_007d5380(int param_1)

{
  int *piVar1;
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
  puStack_8 = &LAB_00cdffb0;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"AWARDS_DIALOGUE_CONCLUDE_1",0x1a);
  local_48 = 0x1a;
  local_4c[0x1a] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar1 = (int *)FUN_009b5f90(&local_4c,0xffffffff,&local_2c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_007d3f90(param_1);
  FUN_007c9f40(piVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d5490 @ 007d5490 ////

void __fastcall FUN_007d5490(int param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  int *piVar3;
  char *pcVar4;
  size_t sVar5;
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
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cdffe0;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x444) == 0) ||
     (uVar1 = *(int *)(param_1 + 0x448) - *(int *)(param_1 + 0x444) >> 2, uVar1 == 0)) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"",0);
    local_28 = 0;
    *local_2c = '\0';
    local_4c = local_40;
    local_4 = 2;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"AWARDS_DIALOGUE_CONCLUDE_2",0x1a);
    local_48 = 0x1a;
    local_4c[0x1a] = '\0';
    local_4 = CONCAT31(local_4._1_3_,3);
    piVar3 = (int *)FUN_009b5f90(&local_4c,0xffffffff,&local_2c);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_007d40a0(param_1);
    FUN_007c9f80(piVar3);
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    local_4 = 0;
    if (uVar1 < 2) {
      sVar5 = 0x1b;
      pcVar4 = "AWARDS_DIALOGUE_CONCLUDE_2_";
    }
    else {
      sVar5 = 0x1c;
      pcVar4 = "AWARDS_DIALOGUE_CONCLUDE_2A_";
    }
    ExceptionList = &local_c;
    FUN_004073f0(&local_4c,pcVar4,sVar5);
    ppuVar2 = FUN_00860970(**(int **)(param_1 + 0x444));
    FUN_004073f0(&local_4c,*ppuVar2,(size_t)ppuVar2[1]);
    FUN_009b5030(&local_2c,&local_4c);
    local_4._0_1_ = 1;
    FUN_007d40a0(param_1);
    local_4 = (uint)local_4._1_3_ << 8;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_007c9f80((int *)&local_4c);
    (**(code **)(**(int **)(param_1 + 0x370) + 0xfc))(**(undefined4 **)(param_1 + 0x444),1);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007d56b0 @ 007d56b0 ////

void __fastcall FUN_007d56b0(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x418) != *(int *)(param_1 + 0x410)) &&
      (iVar1 = *(int *)(param_1 + 0x40c), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x410) - iVar1 >> 2 != 0)) {
    FUN_007d1a20(*(void **)(param_1 + 0x3d4),*(int *)(param_1 + 0x418) - iVar1 >> 2);
    return;
  }
  FUN_007d1760(*(int *)(param_1 + 0x3d4));
  return;
}


//// FUNCTION FUN_007d5700 @ 007d5700 ////

void __thiscall FUN_007d5700(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_007d5770 @ 007d5770 ////

undefined4 __fastcall FUN_007d5770(void *param_1)

{
  undefined **ppuVar1;
  undefined *local_128;
  void *local_124 [2];
  uint local_11c;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce001c;
  local_c = ExceptionList;
  if (*(char *)((int)param_1 + 0x10) == '\0') {
    if (*(int *)((int)param_1 + 8) == 0) {
      ppuVar1 = (void *)((int)param_1 + 4);
      if (*(int *)((int)param_1 + 4) == 0) {
        local_128 = &lpClass_00d16914;
        ppuVar1 = &local_128;
      }
      ExceptionList = &local_c;
      FUN_0048f010(ppuVar1,local_124);
      local_4 = 0;
      FUN_00558a50(DAT_00f88624,local_124,(undefined4 *)0x1);
      local_4 = 0xffffffff;
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124[0]);
      }
      FUN_007d4930(param_1,DAT_00f88624);
    }
    else {
      ExceptionList = &local_c;
      FUN_0048f010((void *)((int)param_1 + 8),local_124);
      local_4 = 1;
      FUN_0055c540(local_e4,local_124);
      if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
        _free(local_124[0]);
      }
      ppuVar1 = (undefined **)((int)param_1 + 4);
      if (*(int *)((int)param_1 + 4) == 0) {
        local_128 = &lpClass_00d16914;
        ppuVar1 = &local_128;
      }
      FUN_0048f010(ppuVar1,local_104);
      local_4._0_1_ = 4;
      FUN_00558a50(local_e4,local_104,(undefined4 *)0x1);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      FUN_007d4930(param_1,local_e4);
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
    }
    *(undefined1 *)((int)param_1 + 0x10) = 1;
  }
  ExceptionList = local_c;
  return *(undefined4 *)((int)param_1 + 0xc);
}


//// FUNCTION FUN_007d58e0 @ 007d58e0 ////

void __fastcall FUN_007d58e0(int param_1)

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


//// FUNCTION FUN_007d5910 @ 007d5910 ////

undefined4 * FUN_007d5910(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007d5940 @ 007d5940 ////

undefined4 * FUN_007d5940(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007d5970 @ 007d5970 ////

int * __fastcall FUN_007d5970(int *param_1)

{
  FUN_007d39b0(param_1);
  return param_1;
}


//// FUNCTION FUN_007d5980 @ 007d5980 ////

void __fastcall FUN_007d5980(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007d46d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_007d59c0 @ 007d59c0 ////

void __fastcall FUN_007d59c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007d4720();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_007d5a00 @ 007d5a00 ////

void __fastcall FUN_007d5a00(int param_1)

{
  FUN_007d4770(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_007d5a30 @ 007d5a30 ////

void __fastcall FUN_007d5a30(int param_1)

{
  FUN_007d47b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_007d5ae0 @ 007d5ae0 ////

void FUN_007d5ae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  FUN_007d3c80(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_007d5b00 @ 007d5b00 ////

undefined4 * FUN_007d5b00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0043;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    *puVar1 = &PTR_FUN_00d58514;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_007d5380(DAT_0104e9c8);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_007d5ba0 @ 007d5ba0 ////

undefined4 * FUN_007d5ba0(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce005b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d5c00(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d5c00 @ 007d5c00 ////

undefined4 * __fastcall FUN_007d5c00(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d58528;
  local_4 = 0;
  FUN_007c9f20(&PTR_DAT_00e5b6d4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b714,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.33);
  FUN_007c9f20(&PTR_DAT_00e5b674,1.0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_007d5ce0 @ 007d5ce0 ////

undefined4 * __thiscall FUN_007d5ce0(void *this,byte param_1)

{
  FUN_007d5d00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d5d00 @ 007d5d00 ////

void __fastcall FUN_007d5d00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d5d10 @ 007d5d10 ////

undefined4 * __thiscall FUN_007d5d10(void *this,byte param_1)

{
  FUN_007d5d30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d5d30 @ 007d5d30 ////

void __fastcall FUN_007d5d30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d5d40 @ 007d5d40 ////

undefined4 * FUN_007d5d40(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce009b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d5da0(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d5da0 @ 007d5da0 ////

undefined4 * __fastcall FUN_007d5da0(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce00b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d5853c;
  local_4 = 0;
  FUN_007d5490(DAT_0104e9c8);
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_007d5e50 @ 007d5e50 ////

undefined4 * __thiscall FUN_007d5e50(void *this,byte param_1)

{
  FUN_007d5e70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d5e70 @ 007d5e70 ////

void __fastcall FUN_007d5e70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d5e80 @ 007d5e80 ////

undefined4 * FUN_007d5e80(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce00e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_007d2710(DAT_0104e9c8 + 0x440);
  if (uVar1 < 2) {
    puVar2 = operator_new(8);
    local_4 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_007d5f20(puVar2,extraout_EDX_00);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  else {
    puVar2 = operator_new(8);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2 = FUN_007d6020(puVar2,extraout_EDX);
      ExceptionList = local_c;
      return puVar2;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d5f20 @ 007d5f20 ////

undefined4 * __fastcall FUN_007d5f20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  void *unaff_ESI;
  ulonglong uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce00f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar2 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar2;
  *param_1 = &PTR_FUN_00d58550;
  puVar1 = (undefined4 *)(DAT_0104e9c8 + 0x3b8);
  *(undefined4 *)(DAT_0104e9c8 + 0x3bc) = 0;
  local_4 = 0;
  (**(code **)(*(int *)*puVar1 + 0x20))(0);
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,1.0);
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_007d5ff0 @ 007d5ff0 ////

undefined4 * __thiscall FUN_007d5ff0(void *this,byte param_1)

{
  FUN_007d6010(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6010 @ 007d6010 ////

void __fastcall FUN_007d6010(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6020 @ 007d6020 ////

undefined4 * __fastcall FUN_007d6020(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0118;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar2 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar2;
  *param_1 = &PTR_FUN_00d58564;
  puVar1 = (undefined4 *)(DAT_0104e9c8 + 0x3b8);
  *(undefined4 *)(DAT_0104e9c8 + 0x3bc) = 0;
  local_4 = 0;
  (**(code **)(*(int *)*puVar1 + 0x20))(0);
  FUN_007c9f20(&PTR_DAT_00e5b6b4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b6f4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b674,0.0);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_007d6100 @ 007d6100 ////

undefined4 * __thiscall FUN_007d6100(void *this,byte param_1)

{
  FUN_007d6120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6120 @ 007d6120 ////

void __fastcall FUN_007d6120(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6130 @ 007d6130 ////

undefined4 * __fastcall FUN_007d6130(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *unaff_ESI;
  ulonglong uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0138;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar3 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar3;
  *param_1 = &PTR_FUN_00d58578;
  local_4 = 0;
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  puVar1 = (undefined4 *)(DAT_0104e9c8 + 0x3b8);
  *(undefined4 *)(DAT_0104e9c8 + 0x3bc) = 0;
  (**(code **)(*(int *)*puVar1 + 0x20))(0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.0);
  if (((*(int *)(DAT_0104e9c8 + 0x418) != *(int *)(DAT_0104e9c8 + 0x410)) &&
      (iVar2 = *(int *)(DAT_0104e9c8 + 0x40c), iVar2 != 0)) &&
     (*(int *)(DAT_0104e9c8 + 0x410) - iVar2 >> 2 != 0)) {
    FUN_007d1a20(*(void **)(DAT_0104e9c8 + 0x3d4),*(int *)(DAT_0104e9c8 + 0x418) - iVar2 >> 2);
    ExceptionList = unaff_ESI;
    return param_1;
  }
  FUN_007d1760(*(int *)(DAT_0104e9c8 + 0x3d4));
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_007d6220 @ 007d6220 ////

bool __fastcall FUN_007d6220(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  return *(int *)(param_1 + 4) + 2000U < (uint)uVar1;
}


//// FUNCTION FUN_007d6240 @ 007d6240 ////

undefined4 * FUN_007d6240(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0163;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar1 = &PTR_FUN_00d5858c;
    FUN_007d3010(0.0);
    FUN_007d3050();
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d62f0 @ 007d62f0 ////

undefined4 * __thiscall FUN_007d62f0(void *this,byte param_1)

{
  FUN_007d6310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6310 @ 007d6310 ////

void __fastcall FUN_007d6310(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6320 @ 007d6320 ////

undefined4 * __thiscall FUN_007d6320(void *this,byte param_1)

{
  FUN_007d6340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6340 @ 007d6340 ////

void __fastcall FUN_007d6340(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d6350 @ 007d6350 ////

undefined4 * FUN_007d6350(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce017b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d63b0(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d63b0 @ 007d63b0 ////

undefined4 * __fastcall FUN_007d63b0(undefined4 *param_1,undefined4 param_2)

{
  void *unaff_ESI;
  ulonglong uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce0198;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d585a0;
  local_4 = 0;
  FUN_007d4b60(DAT_0104e9c8);
  FUN_007c9f20(&PTR_DAT_00e5b6b4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b6f4,0.0);
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x370) + 0xfc))
            (*(undefined4 *)(**(int **)(DAT_0104e9c8 + 0x418) + 0x60),0);
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_007d64c0 @ 007d64c0 ////

undefined4 * __thiscall FUN_007d64c0(void *this,byte param_1)

{
  FUN_007d64e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d64e0 @ 007d64e0 ////

void __fastcall FUN_007d64e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d64f0 @ 007d64f0 ////

undefined4 * FUN_007d64f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce01c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    CeremonyState_AttachToController(puVar1,extraout_EDX);
    *puVar1 = &PTR_FUN_00d585b4;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_007d4f10(DAT_0104e9c8);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_007d6590 @ 007d6590 ////

undefined4 * __thiscall FUN_007d6590(void *this,byte param_1)

{
  FUN_007d65b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d65b0 @ 007d65b0 ////

void __fastcall FUN_007d65b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


//// FUNCTION FUN_007d65c0 @ 007d65c0 ////

undefined4 * FUN_007d65c0(void)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce01db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(8);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_007d6620(puVar1,extraout_EDX);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007d6620 @ 007d6620 ////

undefined4 * __fastcall FUN_007d6620(undefined4 *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce01f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00d58264;
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[1] = (int)uVar1;
  *param_1 = &PTR_FUN_00d585c8;
  local_4 = 0;
  (**(code **)(**(int **)(DAT_0104e9c8 + 0x3a0) + 0x20))(0);
  FUN_007c9f20(&PTR_DAT_00e5b674,1.0);
  FUN_007c9f20(&PTR_DAT_00e5b6d4,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b714,0.0);
  FUN_007c9f20(&PTR_DAT_00e5b694,0.33);
  ExceptionList = param_1;
  return param_1;
}


//// FUNCTION FUN_007d6720 @ 007d6720 ////

undefined4 * __thiscall FUN_007d6720(void *this,byte param_1)

{
  FUN_007d6740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007d6740 @ 007d6740 ////

void __fastcall FUN_007d6740(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d58264;
  return;
}


