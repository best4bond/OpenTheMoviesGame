//// FUNCTION FUN_0086bc50 @ 0086bc50 ////

void __thiscall FUN_0086bc50(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0086add0((void *)piVar6[1]);
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
    FUN_0086b610(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0086bd10 @ 0086bd10 ////

void __thiscall FUN_0086bd10(void *this,undefined4 *param_1,float *param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  bool local_4;
  
  pfVar4 = param_2;
  pfVar2 = (float *)(*(float **)((int)this + 4))[1];
  cVar1 = *(char *)((int)pfVar2 + 0x15);
  bVar5 = true;
  local_4 = true;
  pfVar3 = *(float **)((int)this + 4);
  while (cVar1 == '\0') {
    bVar5 = pfVar2[3] <= *param_2;
    if (bVar5) {
      pfVar7 = (float *)pfVar2[2];
    }
    else {
      pfVar7 = (float *)*pfVar2;
    }
    local_4 = !bVar5;
    bVar5 = !bVar5;
    pfVar3 = pfVar2;
    pfVar2 = pfVar7;
    cVar1 = *(char *)((int)pfVar7 + 0x15);
  }
  param_2 = pfVar3;
  if (bVar5) {
    if (pfVar3 == (float *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_0086bd72;
    }
    FUN_0086a210((int *)&param_2);
  }
  if (*pfVar4 <= param_2[3]) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_0086bd72:
  puVar6 = (undefined4 *)FUN_0086b460(this,&param_2,local_4,pfVar3,pfVar4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_0086bdd0 @ 0086bdd0 ////

void __thiscall FUN_0086bdd0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0086ae10((void *)piVar6[1]);
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
    FUN_0086b8d0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0086be90 @ 0086be90 ////

undefined4 * __thiscall FUN_0086be90(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0086b2b0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0086b2b0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_0086b2b0(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_0086a120((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_0086b2b0(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_0086b2b0(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_0086a180((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_0086b2b0(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_0086b2b0(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_0086bb90(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_0086c030 @ 0086c030 ////

undefined4 * __thiscall FUN_0086c030(void *this,undefined4 *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  pfVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0086b460(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  pfVar1 = *(float **)((int)this + 4);
  if (param_2 == (float *)*pfVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0086b460(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == pfVar1) {
    puVar4 = (undefined4 *)pfVar1[2];
    uVar3 = FUN_0081f960((float *)(puVar4 + 3),param_3);
    if ((char)uVar3 != '\0') {
      FUN_0086b460(this,param_1,'\0',puVar4,pfVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_0081f960(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0086a210((int *)&param_3);
      pfVar1 = param_3;
      uVar3 = FUN_0081f960(param_3 + 3,pfVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)((int)pfVar1[2] + 0x15) != '\0') {
          FUN_0086b460(this,param_1,'\0',pfVar1,pfVar2);
          return param_1;
        }
        FUN_0086b460(this,param_1,'\x01',param_2,pfVar2);
        return param_1;
      }
    }
    uVar3 = FUN_0081f960(param_2 + 3,pfVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0086a500((int *)&param_3);
      pfVar1 = param_3;
      if (param_3 != *(float **)((int)this + 4)) {
        uVar3 = FUN_0081f960(pfVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_0086c1b0;
      }
      if (*(char *)((int)param_2[2] + 0x15) != '\0') {
        FUN_0086b460(this,param_1,'\0',param_2,pfVar2);
        return param_1;
      }
      FUN_0086b460(this,param_1,'\x01',pfVar1,pfVar2);
      return param_1;
    }
  }
LAB_0086c1b0:
  puVar4 = (undefined4 *)FUN_0086bd10(this,local_8,pfVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_0086c200 @ 0086c200 ////

uint * __thiscall FUN_0086c200(void *this,uint *param_1)

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
  piVar3 = FUN_0086be90(this,&param_1,puVar4,local_8);
  return (uint *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_0086c2b0 @ 0086c2b0 ////

float * __thiscall FUN_0086c2b0(void *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float local_8 [2];
  
  pfVar1 = param_1;
  pfVar2 = (float *)FUN_0086a5d0(this,param_1);
  if ((pfVar2 != *(float **)((int)this + 4)) && (pfVar2[3] <= *pfVar1)) {
    return pfVar2 + 4;
  }
  local_8[0] = *pfVar1;
  local_8[1] = 0.0;
  piVar3 = FUN_0086c030(this,&param_1,pfVar2,local_8);
  return (float *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_0086c340 @ 0086c340 ////

void __fastcall FUN_0086c340(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0086bc50(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0086c370 @ 0086c370 ////

void __fastcall FUN_0086c370(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0086bdd0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0086c3a0 @ 0086c3a0 ////

int __fastcall FUN_0086c3a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0086ac70();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0086c3d0 @ 0086c3d0 ////

int __fastcall FUN_0086c3d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0086ad20();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0086c400 @ 0086c400 ////

void __fastcall FUN_0086c400(int *param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  wchar_t *_Source;
  void **ppvVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  int *extraout_ECX;
  int *extraout_ECX_00;
  uint uVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 fVar10;
  undefined8 uVar11;
  undefined **local_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined ***pppuStack_34;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9418;
  ppvVar2 = &pvStack_c;
  piVar6 = param_1;
  pvStack_c = ExceptionList;
  for (puVar1 = DAT_0104bcf0; ExceptionList = ppvVar2, puVar1 != &DAT_0104bcfc;
      puVar1 = (undefined4 *)puVar1[1]) {
    fVar3 = (float)FUN_00ace790((int *)puVar1[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                                &TM::CStudioAI::RTTI_Type_Descriptor,0);
    iVar4 = (**(code **)(*param_1 + 0xc))();
    fVar10 = FUN_0086b180(fVar3,iVar4);
    piVar6 = extraout_ECX;
    param_2 = extraout_EDX;
    if ((float10)0.0 < fVar10) {
      pppuStack_34 = &local_40;
      pppuStack_1c = &ppuStack_28;
      uStack_3c = 0;
      uStack_38 = 0;
      local_40 = &PTR_FUN_00d1aed0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppuStack_28 = &PTR_FUN_00d1e55c;
      fStack_14 = 0.0;
      fStack_10 = (float)fVar10;
      uStack_4 = 0;
      FUN_0045f4a0((int)pppuStack_34);
      uStack_2c = 0;
      (*(code *)*local_40)();
      (*(code *)ppuStack_28[1])();
      fStack_14 = fVar3;
      (*(code *)*ppuStack_28)();
      FUN_00851890(param_3,(int)&local_40);
      uStack_4 = 0xffffffff;
      FUN_008501c0(&local_40);
      piVar6 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
    ppvVar2 = ExceptionList;
  }
  uVar11 = FUN_0085cee0(piVar6,param_2);
  puVar5 = (uint *)uVar11;
  uVar9 = *puVar5 * 0x19660d + 0x3c6ef35f;
  *puVar5 = uVar9;
  piVar6 = FUN_005726a0((int *)&local_40,uVar9 & 1,puVar5);
  uVar9 = piVar6[1];
  _Source = (wchar_t *)*piVar6;
  if ((uint)param_1[3] <= uVar9) {
    if (10 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[1]);
    }
    uVar7 = uVar9 + 0x20 & 0xffffffe0;
    param_1[3] = uVar7;
    pvVar8 = _malloc(uVar7 * 2);
    param_1[1] = (int)pvVar8;
  }
  _wcsncpy((wchar_t *)param_1[1],_Source,uVar9);
  param_1[2] = uVar9;
  *(undefined2 *)(param_1[1] + uVar9 * 2) = 0;
  if (10 < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0086c5b0 @ 0086c5b0 ////

void FUN_0086c5b0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  void *this;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  uint local_58;
  undefined4 local_54;
  float local_50;
  undefined1 local_4c [4];
  int *local_48;
  undefined4 local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9440;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_48 = (int *)FUN_0086ac70();
  *(undefined1 *)((int)local_48 + 0x15) = 1;
  local_48[1] = (int)local_48;
  *local_48 = (int)local_48;
  local_48[2] = (int)local_48;
  local_44 = 0;
  local_4 = 0;
  puVar12 = DAT_0104d688;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      uVar5 = FUN_0085c460((void *)puVar12[2]);
      if (((char)uVar5 != '\0') &&
         (iVar13 = *(int *)(puVar12[2] + 0xac), iVar13 != puVar12[2] + 0xb8)) {
        do {
          cVar4 = FUN_004de210(*(int *)(iVar13 + 8));
          if (cVar4 == '\0') {
            iVar6 = FUN_004de100(*(int *)(iVar13 + 8));
            iVar6 = *(int *)(iVar6 + 8);
            iVar7 = FUN_004de100(*(int *)(iVar13 + 8));
            if (iVar6 != iVar7 + 0x14) {
              do {
                pfVar8 = (float *)FUN_0048c9e0(*(void **)(iVar6 + 8),&local_54);
                if (((0.0 < *pfVar8) && (iVar7 = FUN_0048c9f0(*(int *)(iVar6 + 8)), iVar7 != 0)) &&
                   ((local_58 = FUN_005a64e0(iVar7), local_58 != 0 ||
                    (local_58 = FUN_005a6470(iVar7), local_58 != 0)))) {
                  pfVar9 = (float *)FUN_0086c200(local_4c,&local_58);
                  pfVar8 = &local_50;
                  this = (void *)FUN_004df4a0(*(int *)(iVar13 + 8));
                  pfVar8 = (float *)FUN_004b58b0(this,pfVar8);
                  *pfVar9 = *pfVar8 + *pfVar9;
                }
                iVar6 = *(int *)(iVar6 + 4);
                iVar7 = FUN_004de100(*(int *)(iVar13 + 8));
              } while (iVar6 != iVar7 + 0x14);
            }
          }
          iVar13 = *(int *)(iVar13 + 4);
        } while (iVar13 != puVar12[2] + 0xb8);
      }
      puVar1 = puVar12 + 1;
      puVar12 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d694);
  }
  piVar10 = (int *)*local_48;
  piVar11 = piVar10;
  if (piVar10 != local_48) {
    while( true ) {
      if (*(char *)((int)piVar10 + 0x15) == '\0') {
        piVar2 = (int *)piVar10[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar4 = *(char *)(*piVar2 + 0x15);
          piVar10 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar2 + 0x15);
            piVar10 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar4 = *(char *)(piVar10[1] + 0x15);
          piVar3 = (int *)piVar10[1];
          piVar2 = piVar10;
          while ((piVar10 = piVar3, cVar4 == '\0' && (piVar2 == (int *)piVar10[2]))) {
            cVar4 = *(char *)(piVar10[1] + 0x15);
            piVar3 = (int *)piVar10[1];
            piVar2 = piVar10;
          }
        }
      }
      if (piVar10 == local_48) break;
      if ((float)piVar11[4] < (float)piVar10[4]) {
        piVar11 = piVar10;
      }
    }
    if ((piVar11 != local_48) && (iVar13 = piVar11[3], iVar13 != 0)) {
      local_34 = &local_40;
      local_1c = &local_28;
      local_3c = 0;
      local_38 = 0;
      local_40 = &PTR_FUN_00d1aed0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = &PTR_FUN_00d1e55c;
      local_14 = 0;
      local_10 = piVar11[4];
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0045f4a0((int)local_34);
      local_2c = iVar13;
      (*(code *)*local_40)();
      uVar5 = GetPlayerStudio();
      (*(code *)local_28[1])();
      local_14 = uVar5;
      (*(code *)*local_28)();
      FUN_00851890(param_1,(int)&local_40);
      FUN_008501c0(&local_40);
    }
  }
  local_4 = 0xffffffff;
  FUN_0086bc50(local_4c,&param_1,(int *)*local_48,local_48);
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_0086c890 @ 0086c890 ////

void FUN_0086c890(void *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  void *this;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_4c;
  float local_48;
  float local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9458;
  local_c = ExceptionList;
  iVar6 = 0;
  local_48 = 0.0;
  puVar8 = DAT_0104d688;
  ExceptionList = &local_c;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      uVar4 = FUN_0085c460((void *)puVar8[2]);
      if ((char)uVar4 != '\0') {
        iVar7 = *(int *)(puVar8[2] + 0xac);
        local_4c = 0.0;
        if (iVar7 != puVar8[2] + 0xb8) {
          do {
            cVar2 = FUN_004de210(*(int *)(iVar7 + 8));
            if ((cVar2 == '\0') &&
               (uVar3 = FUN_004e0fd0(*(float *)(iVar7 + 8)), (char)uVar3 != '\0')) {
              pfVar5 = &local_44;
              this = (void *)FUN_004df4a0(*(int *)(iVar7 + 8));
              pfVar5 = (float *)FUN_004b58b0(this,pfVar5);
              local_4c = *pfVar5 + local_4c;
            }
            iVar7 = *(int *)(iVar7 + 4);
          } while (iVar7 != puVar8[2] + 0xb8);
        }
        if (local_48 < local_4c) {
          iVar6 = puVar8[2];
          local_48 = local_4c;
        }
      }
      puVar1 = puVar8 + 1;
      puVar8 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d694);
    if (iVar6 != 0) {
      local_34 = &local_40;
      local_1c = &local_28;
      local_3c = 0;
      local_38 = 0;
      local_40 = &PTR_FUN_00d1aed0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = &PTR_FUN_00d1e55c;
      local_14 = 0;
      local_10 = local_48;
      local_4 = 0;
      FUN_0045f4a0((int)local_34);
      local_2c = iVar6;
      (*(code *)*local_40)();
      uVar4 = GetPlayerStudio();
      (*(code *)local_28[1])();
      local_14 = uVar4;
      (*(code *)*local_28)();
      FUN_00851890(param_1,(int)&local_40);
      FUN_008501c0(&local_40);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0086ca10 @ 0086ca10 ////

void FUN_0086ca10(void *param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float10 fVar14;
  undefined8 uVar15;
  float local_6c;
  int *local_68;
  int *local_64;
  undefined4 uStack_60;
  byte local_5c [8];
  float afStack_54 [2];
  undefined1 local_4c [4];
  float *local_48;
  undefined4 local_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  float fStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  float fStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9480;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0045f410();
  iVar11 = 0;
  for (iVar4 = *(int *)(iVar2 + 0x98); iVar4 != iVar2 + 0xa4; iVar4 = *(int *)(iVar4 + 4)) {
    iVar11 = iVar11 + 1;
  }
  uVar15 = FUN_0085cee0(iVar4,iVar11);
  piVar7 = (int *)uVar15;
  puVar8 = DAT_0104bcf0;
  local_64 = piVar7;
  if (DAT_0104bcf0 == &DAT_0104bcfc) {
    ExceptionList = local_c;
    return;
  }
  while (fVar3 = (float)FUN_00ace790((int *)puVar8[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                                     &TM::CStudioAI::RTTI_Type_Descriptor,0), fVar3 == 0.0) {
    if ((undefined4 *)puVar8[1] == &DAT_0104bcfc) {
      ExceptionList = local_c;
      return;
    }
    local_6c = 0.0;
    puVar8 = (undefined4 *)puVar8[1];
  }
  iVar4 = *piVar7 * 0x19660d + 0x3c6ef35f;
  iVar2 = iVar4 * 0x19660d + 0x3c6ef35f;
  iVar5 = iVar2 * 0x19660d + 0x3c6ef35f;
  local_5c[0] = ~(byte)iVar4 & 1;
  local_5c[1] = ~(byte)iVar2 & 1;
  iVar4 = iVar5 * 0x19660d + 0x3c6ef35f;
  iVar2 = iVar4 * 0x19660d + 0x3c6ef35f;
  *piVar7 = iVar2;
  local_5c[2] = ~(byte)iVar5 & 1;
  local_5c[3] = ~(byte)iVar4 & 1;
  local_5c[4] = ~(byte)iVar2 & 1;
  local_6c = fVar3;
  local_48 = (float *)FUN_0086ad20();
  *(undefined1 *)((int)local_48 + 0x15) = 1;
  local_48[1] = (float)local_48;
  *local_48 = (float)local_48;
  local_48[2] = (float)local_48;
  local_44 = 0;
  iVar4 = *(int *)((int)fVar3 + 0x238);
  local_4 = 0;
  if (iVar4 != (int)fVar3 + 0x244) {
    do {
      uVar6 = FUN_0085c4d0(*(int *)(iVar4 + 8));
      if (((char)uVar6 != '\0') &&
         (piVar7 = (int *)FUN_005a2a30(*(int *)(iVar4 + 8)), piVar7 != (int *)0x0)) {
        fVar3 = (float)iVar11;
        if (iVar11 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        iVar2 = (**(code **)(*piVar7 + 0x2c))();
        fVar13 = *(float *)(iVar4 + 8);
        fVar3 = ABS(fVar3 * 0.5 - (float)iVar2);
        cVar1 = *(char *)((int)local_48[1] + 0x15);
        pfVar10 = (float *)local_48[1];
        pfVar9 = local_48;
        while (pfVar12 = pfVar10, cVar1 == '\0') {
          if (fVar3 <= pfVar12[3]) {
            pfVar10 = (float *)*pfVar12;
          }
          else {
            pfVar10 = (float *)pfVar12[2];
            pfVar12 = pfVar9;
          }
          cVar1 = *(char *)((int)pfVar10 + 0x15);
          pfVar9 = pfVar12;
        }
        if ((pfVar9 == local_48) || (fVar3 < pfVar9[3])) {
          afStack_54[1] = 0.0;
          afStack_54[0] = fVar3;
          puVar8 = FUN_0086c030(local_4c,&uStack_60,pfVar9,afStack_54);
          pfVar9 = (float *)*puVar8;
        }
        pfVar9[4] = fVar13;
        fVar3 = local_6c;
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != (int)fVar3 + 0x244);
  }
  pfVar10 = (float *)*local_48;
  fVar13 = 0.0;
  iVar4 = 0;
  do {
    if ((pfVar10 == local_48) || (fVar13 = pfVar10[4], local_5c[iVar4] != 0)) break;
    iVar4 = iVar4 + 1;
    if (*(char *)((int)pfVar10 + 0x15) == '\0') {
      pfVar9 = (float *)pfVar10[2];
      if (*(char *)((int)pfVar9 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*pfVar9 + 0x15);
        pfVar10 = pfVar9;
        pfVar9 = (float *)*pfVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*pfVar9 + 0x15);
          pfVar10 = pfVar9;
          pfVar9 = (float *)*pfVar9;
        }
      }
      else {
        cVar1 = *(char *)((int)pfVar10[1] + 0x15);
        pfVar12 = (float *)pfVar10[1];
        pfVar9 = pfVar10;
        while ((pfVar10 = pfVar12, cVar1 == '\0' && (pfVar9 == (float *)pfVar10[2]))) {
          cVar1 = *(char *)((int)pfVar10[1] + 0x15);
          pfVar12 = (float *)pfVar10[1];
          pfVar9 = pfVar10;
        }
      }
    }
  } while (iVar4 < 5);
  if (fVar13 != 0.0) {
    pppuStack_34 = &ppuStack_40;
    pppuStack_1c = &ppuStack_28;
    uStack_3c = 0;
    uStack_38 = 0;
    ppuStack_40 = &PTR_FUN_00d1aed0;
    fStack_2c = 0.0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppuStack_28 = &PTR_FUN_00d1e55c;
    fStack_14 = 0.0;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar4 = (**(code **)(*local_68 + 0xc))();
    fVar14 = FUN_0086b180(fVar3,iVar4);
    fStack_10 = (float)fVar14;
    (*(code *)ppuStack_40[1])();
    fStack_2c = fVar13;
    (*(code *)*ppuStack_40)();
    (*(code *)ppuStack_28[1])();
    fStack_14 = fVar3;
    (*(code *)*ppuStack_28)();
    FUN_00851890(param_1,(int)&ppuStack_40);
    FUN_008501c0(&ppuStack_40);
  }
  local_4 = 0xffffffff;
  FUN_0086bdd0(local_4c,&local_6c,(int *)*local_48,(int *)local_48);
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_0086cda0 @ 0086cda0 ////

void FUN_0086cda0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  uint local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [4];
  int *local_48;
  undefined4 local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce94a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_48 = (int *)FUN_0086ac70();
  *(undefined1 *)((int)local_48 + 0x15) = 1;
  local_48[1] = (int)local_48;
  *local_48 = (int)local_48;
  local_48[2] = (int)local_48;
  local_44 = 0;
  local_4 = 0;
  puVar12 = DAT_0104d688;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      uVar5 = FUN_0085c460((void *)puVar12[2]);
      if (((char)uVar5 != '\0') &&
         (iVar13 = *(int *)(puVar12[2] + 0xac), iVar13 != puVar12[2] + 0xb8)) {
        do {
          local_58 = *(float *)(*(int *)(iVar13 + 8) + 0xf4);
          cVar4 = FUN_004de210(*(int *)(iVar13 + 8));
          if ((cVar4 == '\0') && (0.0 < local_58)) {
            iVar6 = FUN_004de100(*(int *)(iVar13 + 8));
            iVar6 = *(int *)(iVar6 + 8);
            iVar7 = FUN_004de100(*(int *)(iVar13 + 8));
            if (iVar6 != iVar7 + 0x14) {
              do {
                pfVar8 = (float *)FUN_0048c9e0(*(void **)(iVar6 + 8),&local_54);
                if (((0.0 < *pfVar8) && (iVar7 = FUN_0048c9f0(*(int *)(iVar6 + 8)), iVar7 != 0)) &&
                   ((local_5c = FUN_005a64e0(iVar7), local_5c != 0 ||
                    (local_5c = FUN_005a6470(iVar7), local_5c != 0)))) {
                  piVar9 = (int *)FUN_0086af50(local_4c,&local_50,&local_5c);
                  if ((int *)*piVar9 == local_48) {
                    puVar10 = FUN_0086c200(local_4c,&local_5c);
                    *puVar10 = 0x3f800000;
                  }
                  pfVar8 = (float *)FUN_0086c200(local_4c,&local_5c);
                  *pfVar8 = local_58 * *pfVar8;
                }
                iVar6 = *(int *)(iVar6 + 4);
                iVar7 = FUN_004de100(*(int *)(iVar13 + 8));
              } while (iVar6 != iVar7 + 0x14);
            }
          }
          iVar13 = *(int *)(iVar13 + 4);
        } while (iVar13 != puVar12[2] + 0xb8);
      }
      puVar1 = puVar12 + 1;
      puVar12 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d694);
  }
  piVar9 = (int *)*local_48;
  piVar11 = piVar9;
  if (piVar9 != local_48) {
    while( true ) {
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar4 = *(char *)(*piVar2 + 0x15);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar2 + 0x15);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar4 = *(char *)(piVar9[1] + 0x15);
          piVar3 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar3, cVar4 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar4 = *(char *)(piVar9[1] + 0x15);
            piVar3 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
      if (piVar9 == local_48) break;
      if ((float)piVar9[4] < (float)piVar11[4]) {
        piVar11 = piVar9;
      }
    }
    if ((piVar11 != local_48) && (iVar13 = piVar11[3], iVar13 != 0)) {
      local_34 = &local_40;
      local_1c = &local_28;
      local_3c = 0;
      local_38 = 0;
      local_40 = &PTR_FUN_00d1aed0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = &PTR_FUN_00d1e55c;
      local_14 = 0;
      local_10 = 1.0 - (float)piVar11[4];
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0045f4a0((int)&local_40);
      local_2c = iVar13;
      (*(code *)*local_40)();
      uVar5 = GetPlayerStudio();
      (*(code *)local_28[1])();
      local_14 = uVar5;
      (*(code *)*local_28)();
      FUN_00851890(param_1,(int)&local_40);
      FUN_008501c0(&local_40);
    }
  }
  local_4 = 0xffffffff;
  FUN_0086bc50(local_4c,&param_1,(int *)*local_48,local_48);
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_0086d120 @ 0086d120 ////

void __fastcall FUN_0086d120(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d635e4;
  FUN_00746640(param_1);
  return;
}


//// FUNCTION FUN_0086d190 @ 0086d190 ////

undefined4 * __thiscall FUN_0086d190(void *this,byte param_1)

{
  FUN_0086d120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0086d1b0 @ 0086d1b0 ////

void __thiscall FUN_0086d1b0(void *this,float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)((int)this + 0xa0);
  fVar1 = *(float *)((int)this + 0xa0);
  fVar2 = *(float *)((int)this + 0xa8);
  fVar3 = *(float *)((int)this + 0xa0);
  fVar4 = *(float *)((int)this + 0x98);
  *param_1 = ((param_2 + (*(float *)((int)this + 0x9c) - *(float *)((int)this + 0xa4))) -
             *(float *)((int)this + 0x9c)) * *(float *)((int)this + 0x94) +
             *(float *)((int)this + 0x9c);
  param_1[1] = ((param_3 + (fVar1 - fVar2)) - fVar3) * fVar4 + fVar5;
  return;
}


//// FUNCTION FUN_0086d240 @ 0086d240 ////

void __thiscall FUN_0086d240(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_009840b0(&local_10,(undefined4 *)(*param_1 + 0x10));
  *(float *)((int)this + 0xac) = local_10;
  *(undefined4 *)((int)this + 0xb0) = local_c;
  puVar2 = (undefined4 *)(*param_1 + 0x1c);
  fVar3 = 1.2381465e-38;
  FUN_009840b0(&local_10,puVar2);
  *(float *)((int)this + 0xb4) = local_10;
  *(undefined4 *)((int)this + 0xb8) = local_c;
  FUN_009840b0(&stack0xffffffe0,(undefined4 *)(*param_1 + 0x10));
  FUN_0086d1b0(this,&local_10,fVar3,(float)puVar2);
  FUN_009840b0(&stack0xffffffe0,(undefined4 *)(*param_1 + 0x1c));
  FUN_0086d1b0(this,&local_8,fVar3,(float)puVar2);
  iVar1 = *param_1;
  *(float *)(iVar1 + 0x10) = local_10;
  *(undefined4 *)(iVar1 + 0x14) = local_c;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  iVar1 = *param_1;
  *(float *)(iVar1 + 0x1c) = local_8;
  *(undefined4 *)(iVar1 + 0x20) = local_4;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return;
}


//// FUNCTION FUN_0086d300 @ 0086d300 ////

void __thiscall FUN_0086d300(void *this,int param_1)

{
  float local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_0086d1b0(this,&local_10,*(float *)(param_1 + 8),*(float *)(param_1 + 0xc));
  *(float *)(param_1 + 8) = local_10;
  *(undefined4 *)(param_1 + 0xc) = local_c;
  *(float *)(param_1 + 0x14) = *(float *)((int)this + 0x94) * *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x18) = *(float *)((int)this + 0x98) * *(float *)(param_1 + 0x18);
  if (*(char *)(*(int *)(param_1 + 0x10) + 8) != '\0') {
    *(float *)((int)this + 0xbc) = DAT_0105cb50;
    *(undefined4 *)((int)this + 0xc0) = DAT_0105cb54;
    *(float *)((int)this + 0xc4) = DAT_0105cb58;
    *(undefined4 *)((int)this + 200) = DAT_0105cb5c;
    FUN_0086d1b0(this,&local_10,*(float *)((int)this + 0xbc),*(float *)((int)this + 0xc0));
    FUN_0086d1b0(this,&local_8,*(float *)((int)this + 0xc4),*(float *)((int)this + 200));
    DAT_0105cb50 = local_10;
    DAT_0105cb54 = local_c;
    DAT_0105cb58 = local_8;
    DAT_0105cb5c = local_4;
  }
  return;
}


//// FUNCTION FUN_0086d400 @ 0086d400 ////

void __thiscall FUN_0086d400(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0x98);
  *param_1 = (1.0 / *(float *)((int)this + 0x94)) * *param_1;
  param_1[1] = (1.0 / fVar1) * param_1[1];
  return;
}


//// FUNCTION FUN_0086d450 @ 0086d450 ////

void __thiscall FUN_0086d450(void *this,float *param_1)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0086d1b0(this,&local_10,*param_1,param_1[1]);
  FUN_0086d1b0(this,&local_8,param_1[2],param_1[3]);
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}


//// FUNCTION FUN_0086d4c0 @ 0086d4c0 ////

undefined4 * __thiscall FUN_0086d4c0(void *this,undefined4 param_1)

{
  FUN_00746480(this);
  *(undefined ***)this = &PTR_FUN_00d635e4;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xcc) = param_1;
  *(undefined4 *)((int)this + 0x98) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x3f800000;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  FUN_004015d0((void *)((int)this + 0x60),"CFlashScaler",0xc);
  return this;
}


//// FUNCTION FUN_0086d680 @ 0086d680 ////

undefined4 __cdecl
FUN_0086d680(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  if (((0.0 < (param_8 - param_4) * (param_5 - param_3) - (param_6 - param_4) * (param_7 - param_3))
      && (0.0 < (param_8 - param_6) * (param_1 - param_5) -
                (param_7 - param_5) * (param_2 - param_6))) &&
     (0.0 < (param_8 - param_2) * (param_3 - param_1) - (param_7 - param_1) * (param_4 - param_2)))
  {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0086daf0 @ 0086daf0 ////

void __cdecl FUN_0086daf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_0086db50 @ 0086db50 ////

void __cdecl FUN_0086db50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_0086dbb0 @ 0086dbb0 ////

void __cdecl FUN_0086dbb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0086dc20 @ 0086dc20 ////

void __cdecl FUN_0086dc20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -4;
    param_3 = param_3 + -4;
  }
  return;
}


//// FUNCTION FUN_0086dc60 @ 0086dc60 ////

void __cdecl FUN_0086dc60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -4;
    param_3 = param_3 + -4;
  }
  return;
}


//// FUNCTION FUN_0086ddb0 @ 0086ddb0 ////

void __thiscall FUN_0086ddb0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = param_2[1];
  iVar3 = *(int *)((int)this + 4);
  iVar4 = *param_2;
  iVar5 = param_2[2];
  iVar6 = *(int *)this;
  iVar7 = *(int *)((int)this + 8);
  iVar8 = param_2[3];
  iVar9 = *(int *)((int)this + 0xc);
  iVar10 = param_2[3];
  iVar11 = *(int *)((int)this + 4);
  iVar12 = param_2[2];
  iVar13 = param_2[5];
  iVar14 = *(int *)((int)this + 8);
  iVar15 = param_2[4];
  iVar16 = *(int *)this;
  iVar17 = *(int *)((int)this + 0x10);
  iVar18 = param_2[4];
  iVar19 = *(int *)((int)this + 4);
  iVar20 = param_2[5];
  iVar21 = *(int *)((int)this + 0xc);
  iVar22 = *(int *)((int)this + 0x14);
  *param_1 = (int)ROUND(((float)*(int *)((int)this + 8) * (float)param_2[1] +
                        (float)*param_2 * (float)*(int *)this) * 1.5258789e-05);
  param_1[1] = (int)ROUND(((float)iVar3 * (float)iVar4 + (float)iVar1 * (float)iVar2) *
                          1.5258789e-05);
  param_1[2] = (int)ROUND(((float)iVar7 * (float)iVar8 + (float)iVar5 * (float)iVar6) *
                          1.5258789e-05);
  param_1[3] = (int)ROUND(((float)iVar11 * (float)iVar12 + (float)iVar9 * (float)iVar10) *
                          1.5258789e-05);
  param_1[4] = (int)ROUND(((float)iVar15 * (float)iVar16 + (float)iVar13 * (float)iVar14) *
                          1.5258789e-05 + (float)iVar17);
  param_1[5] = (int)ROUND(((float)iVar20 * (float)iVar21 + (float)iVar18 * (float)iVar19) *
                          1.5258789e-05 + (float)iVar22);
  return;
}


//// FUNCTION FUN_0086deb0 @ 0086deb0 ////

void __thiscall
FUN_0086deb0(void *this,float param_1,float param_2,undefined4 param_3,undefined4 param_4,
            float param_5,float param_6,int param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float local_8;
  float local_4;
  
  local_8 = param_1;
  local_4 = param_2;
  if (*(char *)this != '\0') {
    local_4 = (float)*(int *)((int)this + 0x14) * 1.5258789e-05 *
              (float)*(int *)((int)this + 8) * 1.5258789e-05 -
              (float)*(int *)((int)this + 0x10) * 1.5258789e-05 *
              (float)*(int *)((int)this + 0xc) * 1.5258789e-05;
    if (local_4 != 0.0) {
      local_4 = 1.0 / local_4;
    }
    fVar2 = param_1 - (float)*(int *)((int)this + 0x18);
    fVar1 = param_2 - (float)*(int *)((int)this + 0x1c);
    local_8 = ((float)*(int *)((int)this + 0x14) * fVar2 * 1.5258789e-05 +
              (float)-*(int *)((int)this + 0xc) * fVar1 * 1.5258789e-05) * local_4;
    local_4 = ((float)*(int *)((int)this + 8) * fVar1 * 1.5258789e-05 +
              (float)-*(int *)((int)this + 0x10) * fVar2 * 1.5258789e-05) * local_4;
  }
  switch(*(char *)this) {
  case '\x10':
    break;
  default:
    *(undefined4 *)(param_7 + 0xc) = *(undefined4 *)((int)this + 4);
    *(undefined4 *)(param_7 + 0x14) = 0;
    *(undefined4 *)(param_7 + 0x10) = 0;
  case '\x12':
    return;
  case '@':
  case 'A':
    *(undefined4 *)(param_7 + 0xc) = 0xffffffff;
    *(float *)(param_7 + 0x10) = local_8 / param_5;
    *(float *)(param_7 + 0x14) = local_4 / param_6;
    return;
  }
  iVar3 = 0;
  param_5 = 0.0;
  if (*(byte *)((int)this + 0x20) != 0) {
    pfVar4 = (float *)((int)this + 0x24);
    do {
      if (local_8 <= *pfVar4) {
        if (iVar3 == 0) {
          param_5 = *(float *)((int)this + 0x28);
        }
        else {
          param_5 = *(float *)((int)this + iVar3 * 8 + 0x20);
        }
        break;
      }
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 2;
    } while (iVar3 < (int)(uint)*(byte *)((int)this + 0x20));
  }
  *(undefined4 *)(param_7 + 0x14) = 0;
  *(undefined4 *)(param_7 + 0x10) = 0;
  *(float *)(param_7 + 0xc) = param_5;
  return;
}


//// FUNCTION FUN_0086e090 @ 0086e090 ////

void FUN_0086e090(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce94bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x24);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_01050110 = (void *)0x0;
  }
  else {
    DAT_01050110 = (void *)FUN_009910f0(puVar1);
  }
  *(undefined1 *)((int)DAT_01050110 + 0xc) = 6;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) & 0xbfffffff;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) & 0x7fffffff;
  *(uint *)((int)DAT_01050110 + 0x14) = *(uint *)((int)DAT_01050110 + 0x14) & 0xfffffffe;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) | 0x8000000;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) | 0x10000000;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) & 0xfeffffff;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) | 0x2000000;
  local_4 = 0xffffffff;
  if (*(int *)((int)DAT_01050110 + 0x18) != 0) {
    Engine_SetResourceReference(DAT_01050110,0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0086e150 @ 0086e150 ////

void FUN_0086e150(void)

{
  void *_Memory;
  
  _Memory = DAT_01050110;
  if (DAT_01050110 != (void *)0x0) {
    FUN_00990ec0((int)DAT_01050110);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_01050110 = (void *)0x0;
  return;
}


//// FUNCTION FUN_0086e470 @ 0086e470 ////

void __cdecl FUN_0086e470(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0086e590 @ 0086e590 ////

void __cdecl FUN_0086e590(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}


//// FUNCTION FUN_0086e5d0 @ 0086e5d0 ////

void __cdecl FUN_0086e5d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}


//// FUNCTION FUN_0086e670 @ 0086e670 ////

void __fastcall FUN_0086e670(int param_1)

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


//// FUNCTION FUN_0086e6b0 @ 0086e6b0 ////

void FUN_0086e6b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_0086e710 @ 0086e710 ////

void __thiscall FUN_0086e710(void *this,int *param_1,int *param_2)

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


//// FUNCTION FUN_0086e750 @ 0086e750 ////

void __thiscall FUN_0086e750(void *this,undefined *param_1)

{
  int *piVar1;
  int *_Memory;
  int *piVar2;
  char cVar3;
  
  piVar1 = *(int **)((int)this + 4);
  piVar2 = (int *)*piVar1;
  do {
    while( true ) {
      _Memory = piVar2;
      if (_Memory == piVar1) {
        return;
      }
      cVar3 = (*(code *)param_1)(_Memory + 2);
      if (cVar3 != '\0') break;
      piVar2 = (int *)*_Memory;
    }
    piVar2 = (int *)*_Memory;
  } while (_Memory == *(int **)((int)this + 4));
  *(int **)_Memory[1] = (int *)*_Memory;
  *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0086e7f0 @ 0086e7f0 ////

void * FUN_0086e7f0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0086e820 @ 0086e820 ////

void __cdecl FUN_0086e820(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_0086e860 @ 0086e860 ////

void __cdecl FUN_0086e860(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_0086e940 @ 0086e940 ////

float10 __cdecl FUN_0086e940(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 8) - iVar3 >> 4;
  }
  fVar9 = (float10)0.0;
  iVar5 = 0;
  iVar8 = iVar6 + -1;
  if (3 < iVar6) {
    iVar7 = iVar8 * 0x10;
    pfVar4 = (float *)(iVar3 + 0x24);
    do {
      pfVar1 = (float *)(iVar7 + iVar3);
      iVar8 = iVar5 + 3;
      iVar5 = iVar5 + 4;
      iVar2 = iVar7 + 4;
      iVar7 = (int)pfVar4 + (0xc - iVar3);
      fVar9 = ((float10)pfVar4[4] * (float10)pfVar4[-1] - (float10)pfVar4[3] * (float10)*pfVar4) +
              ((float10)pfVar4[-5] * (float10)*pfVar4 - (float10)pfVar4[-1] * (float10)pfVar4[-4]) +
              ((float10)pfVar4[-9] * (float10)pfVar4[-4] - (float10)pfVar4[-5] * (float10)pfVar4[-8]
              ) + ((float10)*pfVar1 * (float10)pfVar4[-8] -
                  (float10)*(float *)(iVar2 + iVar3) * (float10)pfVar4[-9]) + fVar9;
      pfVar4 = pfVar4 + 0x10;
    } while (iVar5 < iVar6 + -3);
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar6 - iVar5;
    iVar5 = iVar5 << 4;
    iVar8 = iVar8 << 4;
    do {
      iVar7 = iVar5;
      iVar6 = iVar6 + -1;
      fVar9 = ((float10)*(float *)(iVar3 + 4 + iVar7) * (float10)*(float *)(iVar3 + iVar8) -
              (float10)*(float *)(iVar3 + iVar7) * (float10)*(float *)(iVar3 + 4 + iVar8)) + fVar9;
      iVar5 = iVar7 + 0x10;
      iVar8 = iVar7;
    } while (iVar6 != 0);
  }
  return fVar9 * (float10)0.5;
}


//// FUNCTION FUN_0086ea20 @ 0086ea20 ////

undefined4 __cdecl
FUN_0086ea20(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  int extraout_ECX;
  int extraout_EDX;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_6 + param_2 * 4) * 0x10;
  fVar1 = *(float *)(iVar8 + iVar10);
  fVar2 = *(float *)(iVar8 + iVar10 + 4);
  iVar8 = *(int *)(param_6 + param_3 * 4) * 0x10;
  fVar3 = *(float *)(iVar8 + iVar10);
  fVar4 = *(float *)(iVar8 + iVar10 + 4);
  iVar8 = *(int *)(param_6 + param_4 * 4) * 0x10;
  fVar5 = *(float *)(iVar8 + iVar10);
  fVar6 = *(float *)(iVar8 + iVar10 + 4);
  fVar7 = (fVar3 - fVar1) * (fVar6 - fVar2) - (fVar5 - fVar1) * (fVar4 - fVar2);
  if (fVar7 < 0.001) {
    return CONCAT22((short)((uint)fVar6 >> 0x10),
                    (ushort)(fVar7 < 0.001) << 8 | (ushort)NAN(fVar7) << 10 |
                    (ushort)(fVar7 == 0.001) << 0xe);
  }
  iVar8 = 0;
  if (0 < param_5) {
    do {
      if ((((iVar8 != param_2) && (iVar8 != param_3)) && (iVar8 != param_4)) &&
         (iVar8 = *(int *)(param_6 + iVar8 * 4) * 0x10,
         uVar9 = FUN_0086d680(fVar1,fVar2,fVar3,fVar4,fVar5,fVar6,*(float *)(iVar8 + iVar10),
                              *(float *)(iVar8 + 4 + iVar10)), iVar8 = extraout_ECX,
         iVar10 = extraout_EDX, (char)uVar9 != '\0')) {
        return uVar9 & 0xffffff00;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_5);
  }
  return CONCAT31((int3)((uint)param_5 >> 8),1);
}


//// FUNCTION FUN_0086eb40 @ 0086eb40 ////

ulonglong __fastcall FUN_0086eb40(int param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  float10 extraout_ST0;
  ulonglong uVar5;
  ulonglong uVar6;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  float local_48;
  float local_28;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar4 = (int *)*piVar3;
  local_48 = -1.0;
  if (piVar4 != piVar3) {
    do {
      fVar1 = (*(float *)piVar4[5] - *(float *)piVar4[4]) * 0.0 -
              (((float *)piVar4[5])[1] - ((float *)piVar4[4])[1]);
      if ((fVar1 != 0.0) && ((float)piVar4[3] == param_3[3])) {
        FUN_00acd42c();
        FUN_00acd42c();
        uVar5 = FUN_00acd42c();
        uVar6 = FUN_00acd42c();
        param_2 = (float)(uVar6 >> 0x20);
        fVar1 = (float)((int)uVar6 - (int)uVar5) / fVar1;
        if ((((float10)0.0 < extraout_ST0) && ((0.0 <= fVar1 && (fVar1 < 1.0 != (fVar1 == 1.0)))))
           && ((extraout_ST0 < (float10)local_48 || (local_48 < 0.0)))) {
          local_48 = (float)extraout_ST0;
          *in_stack_00000020 = piVar4;
          fVar2 = param_3[3];
          fVar1 = param_3[1];
          *in_stack_00000018 = (float)(extraout_ST0 + (float10)*param_3);
          in_stack_00000018[1] = (float)(extraout_ST0 * (float10)0.0) + fVar1;
          in_stack_00000018[2] = local_28;
          in_stack_00000018[3] = fVar2;
          param_2 = local_28;
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 4));
    piVar3 = (int *)CONCAT22((short)((uint)param_1 >> 0x10),
                             (ushort)(local_48 < 0.0) << 8 | (ushort)NAN(local_48) << 10 |
                             (ushort)(local_48 == 0.0) << 0xe);
    if (local_48 >= 0.0) {
      *in_stack_0000001c = local_48;
      return CONCAT44(param_2,CONCAT31((int3)((uint)piVar3 >> 8),1));
    }
  }
  return CONCAT44(param_2,piVar3) & 0xffffffffffffff00;
}


//// FUNCTION FUN_0086ed00 @ 0086ed00 ////

void __fastcall FUN_0086ed00(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  fVar2 = 0.0;
  for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 4);
      puVar1 != *(undefined4 **)(param_1 + 4); puVar1 = (undefined4 *)*puVar1) {
    fVar2 = fVar2 - (((float *)puVar1[5])[1] * *(float *)puVar1[4] -
                    ((float *)puVar1[4])[1] * *(float *)puVar1[5]);
  }
  *(float *)(param_1 + 0x30) = fVar2 * 0.5;
  return;
}


//// FUNCTION FUN_0086ed60 @ 0086ed60 ////

uint __thiscall FUN_0086ed60(void *this,float param_1,float param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 4);
  uVar8 = 0;
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 4)) {
      return uVar8 & 1;
    }
    pfVar2 = (float *)puVar1[4];
    fVar3 = *(float *)puVar1[5] - *pfVar2;
    fVar4 = ((float *)puVar1[5])[1] - pfVar2[1];
    fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
    if ((param_1 - *pfVar2) * (param_1 - *pfVar2) + (param_2 - pfVar2[1]) * (param_2 - pfVar2[1]) <
        9.999999e-09) break;
    if (9.999999e-09 < fVar5) {
      fVar7 = -fVar3;
      fVar6 = fVar7 * 0.0 + fVar4;
      if (0.0001 < ABS(fVar6)) {
        fVar6 = (((pfVar2[1] * fVar7 + *pfVar2 * fVar4) - param_1 * fVar4) - param_2 * fVar7) /
                fVar6;
        fVar5 = (((fVar6 * 0.0 + param_2) - pfVar2[1]) * fVar4 +
                ((fVar6 + param_1) - *pfVar2) * fVar3) / fVar5;
        if ((0.0 <= fVar5) && (fVar5 < 1.0)) {
          if (ABS(fVar6) < 0.0001) {
            return 1;
          }
          if (0.0 < fVar6) {
            uVar8 = uVar8 + 1;
          }
        }
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}


//// FUNCTION FUN_0086eef0 @ 0086eef0 ////

void __fastcall FUN_0086eef0(int param_1)

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


//// FUNCTION FUN_0086ef20 @ 0086ef20 ////

undefined4 * FUN_0086ef20(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0086f0a0 @ 0086f0a0 ////

void __fastcall FUN_0086f0a0(int param_1)

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


//// FUNCTION FUN_0086f0d0 @ 0086f0d0 ////

undefined4 * FUN_0086f0d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0086e820(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_0086f100 @ 0086f100 ////

undefined4 * FUN_0086f100(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0086e860(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_0086f150 @ 0086f150 ////

void __fastcall FUN_0086f150(int param_1)

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


//// FUNCTION FUN_0086f180 @ 0086f180 ////

void __fastcall FUN_0086f180(int param_1)

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


//// FUNCTION FUN_0086f1b0 @ 0086f1b0 ////

void __thiscall FUN_0086f1b0(void *this,uint param_1)

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
  puStack_8 = &LAB_00ce94d8;
  local_c = ExceptionList;
  if (0xfffffffU - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_0086f250 @ 0086f250 ////

void FUN_0086f250(void)

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
  puStack_8 = &LAB_00ce94f8;
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


//// FUNCTION FUN_0086f2c0 @ 0086f2c0 ////

void FUN_0086f2c0(void)

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
  puStack_8 = &LAB_00ce9518;
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


//// FUNCTION FUN_0086f330 @ 0086f330 ////

void FUN_0086f330(void)

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
  puStack_8 = &LAB_00ce9538;
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


//// FUNCTION FUN_0086f480 @ 0086f480 ////

void __thiscall FUN_0086f480(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce9550;
  local_10 = ExceptionList;
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_18 = param_3[3];
  iVar7 = *(int *)((int)this + 4);
  local_14 = &stack0xffffffd0;
  if (iVar7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar7 >> 4;
  }
  uVar8 = CONCAT44(iVar7,iVar2);
  if (param_2 != 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd0;
    if (0xfffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar8 = FUN_0086f250();
      puVar1 = local_14;
    }
    local_14 = puVar1;
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar7 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    if (uVar3 < iVar2 + param_2) {
      if (0xfffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
      }
      if (uVar3 < iVar2 + param_2) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
        }
        uVar3 = iVar7 + param_2;
      }
      puVar4 = operator_new(uVar3 * 0x10);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0086e590(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0086e820(puVar5,param_2,&local_24);
      FUN_0086e590(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - (int)_Memory >> 4;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar3 * 4;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar7) * 4;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 4) < param_2) {
      FUN_0086e590(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_0086f0d0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar7 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar7;
      FUN_0086daf0(param_1,(undefined4 *)(iVar7 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0086e590(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0086dc20(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_0086daf0(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0086f6f0 @ 0086f6f0 ////

void __thiscall FUN_0086f6f0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce9560;
  local_10 = ExceptionList;
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_18 = param_3[3];
  iVar7 = *(int *)((int)this + 4);
  local_14 = &stack0xffffffd0;
  if (iVar7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar7 >> 4;
  }
  uVar8 = CONCAT44(iVar7,iVar2);
  if (param_2 != 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd0;
    if (0xfffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar8 = FUN_0086f2c0();
      puVar1 = local_14;
    }
    local_14 = puVar1;
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar7 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    if (uVar3 < iVar2 + param_2) {
      if (0xfffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
      }
      if (uVar3 < iVar2 + param_2) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
        }
        uVar3 = iVar7 + param_2;
      }
      puVar4 = operator_new(uVar3 * 0x10);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0086e5d0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0086e860(puVar5,param_2,&local_24);
      FUN_0086e5d0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - (int)_Memory >> 4;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar3 * 4;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar7) * 4;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 4) < param_2) {
      FUN_0086e5d0(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_0086f100(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar7 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar7;
      FUN_0086db50(param_1,(undefined4 *)(iVar7 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0086e5d0(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0086dc60(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_0086db50(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0086f960 @ 0086f960 ////

void __thiscall FUN_0086f960(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0086f330();
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
      _Dst = FUN_0086ef20((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0086e7f0(param_1,iVar5,param_1 + param_2);
      FUN_0086ef20(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0086dbb0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0086e7f0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0086e470(param_1,(int)pvVar3,iVar5);
    FUN_0086dbb0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0086fb40 @ 0086fb40 ////

void __thiscall FUN_0086fb40(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00ce9570;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_0086e6b0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_0086f1b0(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0086fd60 @ 0086fd60 ////

void __thiscall FUN_0086fd60(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0086e820(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_0086f480(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0086fdd0 @ 0086fdd0 ////

void __thiscall FUN_0086fdd0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0086e860(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_0086f6f0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0086fe90 @ 0086fe90 ////

void __thiscall
FUN_0086fe90(void *this,int param_1,void *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (this != param_2) {
    FUN_0086f1b0(this,param_5);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) - param_5;
  }
  **(int **)(param_3 + 4) = param_4;
  **(int **)(param_4 + 4) = param_1;
  **(int **)(param_1 + 4) = param_3;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = uVar1;
  return;
}


//// FUNCTION FUN_0086fee0 @ 0086fee0 ////

uint __cdecl FUN_0086fee0(int param_1,void *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *_Memory;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  int local_14;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 != 0) && (iVar7 = (int)(*(int *)(param_1 + 8) - uVar1) >> 4, 2 < iVar7)) {
    _Memory = operator_new(iVar7 * 4);
    fVar9 = FUN_0086e940(param_1);
    if (fVar9 <= (float10)0.0) {
      iVar6 = 0;
      iVar4 = iVar7;
      if (0 < iVar7) {
        do {
          *(int *)((int)_Memory + iVar6 * 4) = iVar4 + -1;
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar6 < iVar7);
      }
    }
    else {
      iVar4 = 0;
      if (0 < iVar7) {
        do {
          *(int *)((int)_Memory + iVar4 * 4) = iVar4;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar7);
      }
    }
    local_14 = iVar7 + -1;
    iVar4 = iVar7 * 2;
    while( true ) {
      iVar6 = local_14;
      if (iVar7 < 3) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      local_c = iVar4 + -1;
      if (iVar4 < 1) break;
      if (iVar7 <= iVar6) {
        iVar6 = 0;
      }
      local_14 = iVar6 + 1;
      if (iVar7 <= local_14) {
        local_14 = 0;
      }
      iVar8 = local_14 + 1;
      if (iVar7 <= iVar8) {
        iVar8 = 0;
      }
      uVar5 = FUN_0086ea20(param_1,iVar6,local_14,iVar8,iVar7,(int)_Memory);
      iVar4 = local_c;
      if ((char)uVar5 != '\0') {
        iVar4 = *(int *)((int)param_2 + 4);
        local_8 = *(undefined4 *)((int)_Memory + iVar6 * 4);
        local_c = *(int *)((int)_Memory + local_14 * 4);
        uVar5 = *(undefined4 *)((int)_Memory + iVar8 * 4);
        local_4 = uVar5;
        if ((iVar4 == 0) ||
           ((uint)(*(int *)((int)param_2 + 0xc) - iVar4 >> 2) <=
            (uint)(*(int *)((int)param_2 + 8) - iVar4 >> 2))) {
          FUN_0040ec60(param_2,*(undefined4 **)((int)param_2 + 8),1,&local_8);
        }
        else {
          puVar2 = *(undefined4 **)((int)param_2 + 8);
          *puVar2 = local_8;
          *(undefined4 **)((int)param_2 + 8) = puVar2 + 1;
        }
        iVar4 = *(int *)((int)param_2 + 4);
        if ((iVar4 == 0) ||
           ((uint)(*(int *)((int)param_2 + 0xc) - iVar4 >> 2) <=
            (uint)(*(int *)((int)param_2 + 8) - iVar4 >> 2))) {
          FUN_0040ec60(param_2,*(undefined4 **)((int)param_2 + 8),1,&local_c);
        }
        else {
          piVar3 = *(int **)((int)param_2 + 8);
          *piVar3 = local_c;
          *(int **)((int)param_2 + 8) = piVar3 + 1;
        }
        iVar4 = *(int *)((int)param_2 + 4);
        iVar6 = local_14;
        if ((iVar4 == 0) ||
           ((uint)(*(int *)((int)param_2 + 0xc) - iVar4 >> 2) <=
            (uint)(*(int *)((int)param_2 + 8) - iVar4 >> 2))) {
          FUN_0040ec60(param_2,*(undefined4 **)((int)param_2 + 8),1,&local_4);
        }
        else {
          puVar2 = *(undefined4 **)((int)param_2 + 8);
          *puVar2 = uVar5;
          *(undefined4 **)((int)param_2 + 8) = puVar2 + 1;
        }
        while (iVar6 = iVar6 + 1, iVar6 < iVar7) {
          *(undefined4 *)((int)_Memory + iVar6 * 4 + -4) = *(undefined4 *)((int)_Memory + iVar6 * 4)
          ;
        }
        iVar7 = iVar7 + -1;
        local_c = iVar7 * 2;
        iVar4 = local_c;
      }
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00870110 @ 00870110 ////

void __fastcall FUN_00870110(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *_Memory;
  undefined1 local_4c [4];
  void *local_48;
  undefined4 *local_44;
  int local_40;
  undefined1 local_3c [4];
  void *local_38;
  int *local_34;
  int local_30;
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00ce9598;
  local_c = ExceptionList;
  piVar6 = *(int **)(param_1 + 4);
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*piVar6 + 0xc);
  for (piVar4 = (int *)*piVar6; piVar4 != piVar6; piVar4 = (int *)*piVar4) {
  }
  local_48 = (void *)0x0;
  local_44 = (undefined4 *)0x0;
  local_40 = 0;
  _Memory = (void *)0x0;
  piVar5 = (int *)0x0;
  local_38 = (void *)0x0;
  local_34 = (int *)0x0;
  local_30 = 0;
  piVar4 = (int *)*piVar6;
  local_4 = 1;
  uStack_3 = 0;
  if (piVar4 != piVar6) {
    do {
      puVar2 = local_44;
      piVar6 = piVar4 + 4;
      if ((_Memory == (void *)0x0) ||
         ((uint)(local_30 - (int)_Memory >> 2) <= (uint)((int)piVar5 - (int)_Memory >> 2))) {
        FUN_0086f960(local_3c,piVar5,1,piVar6);
        _Memory = local_38;
      }
      else {
        *piVar5 = *piVar6;
        local_34 = piVar5 + 1;
      }
      piVar5 = local_34;
      if ((local_48 == (void *)0x0) ||
         ((uint)(local_40 - (int)local_48 >> 4) <= (uint)((int)puVar2 - (int)local_48 >> 4))) {
        FUN_0086f6f0(local_4c,puVar2,1,(undefined4 *)*piVar6);
      }
      else {
        FUN_0086e860(puVar2,1,(undefined4 *)*piVar6);
        local_44 = puVar2 + 4;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != *(int **)(param_1 + 4));
  }
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  _local_4 = CONCAT31(uStack_3,2);
  FUN_0086fee0((int)local_4c,local_2c);
  if (local_28 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_24 - (int)local_28 >> 2;
  }
  if (0 < iVar3) {
    piVar6 = (int *)((int)local_28 + 8);
    iVar3 = (iVar3 - 1U) / 3 + 1;
    do {
      local_1c = *(undefined4 *)((int)_Memory + piVar6[-2] * 4);
      local_18 = *(undefined4 *)((int)_Memory + piVar6[-1] * 4);
      local_14 = *(undefined4 *)((int)_Memory + *piVar6 * 4);
      iVar1 = *(int *)(param_1 + 0x10);
      if ((iVar1 == 0) ||
         ((uint)(*(int *)(param_1 + 0x18) - iVar1 >> 4) <=
          (uint)(*(int *)(param_1 + 0x14) - iVar1 >> 4))) {
        FUN_0086f480((void *)(param_1 + 0xc),*(undefined4 **)(param_1 + 0x14),1,&local_1c);
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 0x14);
        FUN_0086e820(puVar2,1,&local_1c);
        *(undefined4 **)(param_1 + 0x14) = puVar2 + 4;
      }
      piVar6 = piVar6 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (local_48 == (void *)0x0) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_00870360 @ 00870360 ////

void __thiscall FUN_00870360(void *this,int *param_1,void *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  
  if ((param_3 != param_4) && ((this != param_2 || (param_1 != param_4)))) {
    uVar2 = 0;
    if (this != param_2) {
      piVar1 = param_3;
      if ((param_3 == (int *)**(int **)((int)param_2 + 4)) &&
         (param_4 == *(int **)((int)param_2 + 4))) {
        FUN_0086fe90(this,(int)param_1,param_2,(int)param_3,(int)param_4,*(uint *)((int)param_2 + 8)
                    );
        return;
      }
      do {
        piVar1 = (int *)*piVar1;
        uVar2 = uVar2 + 1;
      } while (piVar1 != param_4);
    }
    FUN_0086fe90(this,(int)param_1,param_2,(int)param_3,(int)param_4,uVar2);
  }
  return;
}


//// FUNCTION FUN_008703c0 @ 008703c0 ////

void __thiscall FUN_008703c0(void *this,int *param_1,int param_2,void *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = param_4[4];
  iVar1 = param_1[3];
  if (*(int *)((int)this + 8) == 0) {
    iVar2 = *(int *)((int)this + 0x34);
    local_10 = *(undefined4 *)((int)this + 0x34);
  }
  else {
    iVar2 = *(int *)(**(int **)((int)this + 4) + 8);
    local_10 = *(undefined4 *)(**(int **)((int)this + 4) + 8);
  }
  local_8 = param_1[4];
  local_4 = param_2;
  local_c = iVar1;
  iVar5 = FUN_0086e6b0(param_1,param_1[1],&local_10);
  FUN_0086f1b0(this,1);
  param_1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  if (*(int *)((int)this + 8) == 0) {
    local_10 = *(undefined4 *)((int)this + 0x34);
  }
  else {
    local_10 = *(undefined4 *)(**(int **)((int)this + 4) + 8);
  }
  local_4 = param_4[4];
  local_8 = param_2;
  local_c = iVar1;
  iVar5 = FUN_0086e6b0(param_1,param_1[1],&local_10);
  FUN_0086f1b0(this,1);
  param_1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  FUN_00870360(this,param_1,param_3,param_4,*(int **)((int)param_3 + 4));
  FUN_00870360(this,param_1,param_3,(int *)**(int **)((int)param_3 + 4),*(int **)((int)param_3 + 4))
  ;
  if (*(int *)((int)this + 8) == 0) {
    local_10 = *(undefined4 *)((int)this + 0x34);
  }
  else {
    local_10 = *(undefined4 *)(**(int **)((int)this + 4) + 8);
  }
  local_4 = param_2;
  local_c = iVar1;
  local_8 = iVar6;
  iVar6 = FUN_0086e6b0(param_1,param_1[1],&local_10);
  FUN_0086f1b0(this,1);
  param_1[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  param_1[4] = param_2;
  piVar7 = (int *)**(int **)((int)this + 4);
  if (piVar7 != *(int **)((int)this + 4)) {
    do {
      piVar7[2] = iVar2;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 4));
  }
  FUN_0086e750(this,&LAB_0086d610);
  fVar4 = 0.0;
  for (puVar3 = (undefined4 *)**(undefined4 **)((int)this + 4);
      puVar3 != *(undefined4 **)((int)this + 4); puVar3 = (undefined4 *)*puVar3) {
    fVar4 = fVar4 - (((float *)puVar3[5])[1] * *(float *)puVar3[4] -
                    ((float *)puVar3[4])[1] * *(float *)puVar3[5]);
  }
  *(float *)((int)this + 0x30) = fVar4 * 0.5;
  return;
}


//// FUNCTION FUN_008705a0 @ 008705a0 ////

void __thiscall FUN_008705a0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x1bc) = *param_1;
  *(undefined4 *)((int)this + 0x1c0) = param_1[1];
  *(undefined1 *)((int)this + 0x1e4) = 1;
  return;
}


//// FUNCTION FUN_008706c0 @ 008706c0 ////

void __thiscall FUN_008706c0(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)fcos((float10)param_1);
  fVar3 = (float10)fsin((float10)param_1);
  fVar1 = *(float *)((int)this + 4);
  *(float *)((int)this + 4) =
       (float)(fVar2 * (float10)*(float *)((int)this + 4) -
              fVar3 * (float10)*(float *)((int)this + 8));
  *(float *)((int)this + 8) =
       (float)(fVar2 * (float10)*(float *)((int)this + 8) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x10) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x10) -
              fVar3 * (float10)*(float *)((int)this + 0x14));
  *(float *)((int)this + 0x14) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x14) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x1c) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x1c) -
              fVar3 * (float10)*(float *)((int)this + 0x20));
  *(float *)((int)this + 0x20) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x20) + fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x28) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x28) -
              fVar3 * (float10)*(float *)((int)this + 0x2c));
  *(float *)((int)this + 0x2c) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x2c) +
              (float10)(float)(fVar3 * (float10)fVar1));
  return;
}


//// FUNCTION FUN_00870760 @ 00870760 ////

void __fastcall FUN_00870760(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_008707a0 @ 008707a0 ////

void __thiscall FUN_008707a0(void *this,undefined4 *param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *param_1;
  local_8 = param_1[1];
  local_4 = 0;
  (**(code **)(*(int *)this + 0xa4))(&local_c);
  return;
}


//// FUNCTION FUN_008707d0 @ 008707d0 ////

void __fastcall FUN_008707d0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float *this;
  float *pfVar3;
  undefined1 local_3c [12];
  float local_30 [9];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this = (float *)(param_1 + 0x52);
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x5a] = 0x3f800000;
  param_1[0x56] = 0x3f800000;
  *this = 1.0;
  param_1[0x5d] = param_1[0x5d];
  param_1[0x5b] = (int)((float)param_1[0x6f] + (float)param_1[0x5b]);
  param_1[0x5c] = (int)((float)param_1[0x70] + (float)param_1[0x5c]);
  FUN_00527b80(this,(float)param_1[0x6d] * (float)param_1[0x32],
               (float)param_1[0x6e] * (float)param_1[0x32],(float)param_1[0x32]);
  FUN_00527db0(this,(float)param_1[0x31]);
  iVar2 = param_1[0x71];
  if (iVar2 == 0) {
    FUN_008706c0(this,3.1415927);
  }
  else if (iVar2 == 1) {
    FUN_008706c0(this,4.712389);
  }
  else if (iVar2 == 2) {
    pfVar1 = (float *)&DAT_0105c4c8;
    pfVar3 = local_30;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar3 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 1;
    }
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    FUN_008706c0(this,4.712389);
    FUN_009aa830(this,local_30);
  }
  pfVar1 = (float *)(**(code **)(*param_1 + 0x34))(local_3c);
  param_1[0x5b] = (int)((float)param_1[0x5b] + *pfVar1);
  param_1[0x5c] = (int)(pfVar1[1] + (float)param_1[0x5c]);
  param_1[0x5d] = (int)(pfVar1[2] + (float)param_1[0x5d]);
  pfVar1 = (float *)(param_1 + 0x5e);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar1 = *this;
    this = this + 1;
    pfVar1 = pfVar1 + 1;
  }
  FUN_009aa670((float *)(param_1 + 0x5e));
  return;
}


//// FUNCTION FUN_00870920 @ 00870920 ////

void __fastcall FUN_00870920(int *param_1)

{
  float unaff_ESI;
  float local_34;
  int local_30;
  float local_2c;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_24 = param_1[0x71];
  if (local_24 == 0) {
    local_2c = (float)param_1[0x42];
    local_28 = -1.0;
    local_34 = 0.0;
    local_30 = 0x3f800000;
    local_1c = 1.0;
    local_18 = 0;
    local_20 = local_2c;
    local_14 = local_2c;
    FUN_009a3f80(&local_10,&local_1c,&local_34,&local_28);
    param_1[0x72] = local_10;
    param_1[0x73] = local_c;
    param_1[0x74] = local_8;
    param_1[0x75] = local_4;
    return;
  }
  if (local_24 == 1) {
    local_28 = 0.0;
    local_24 = 0;
    local_20 = 1.0;
    (**(code **)(*param_1 + 0x48))(&local_34);
    FUN_004130d0(&stack0xffffffc8,&local_2c);
    local_30 = param_1[0x42];
    local_20 = -unaff_ESI;
    local_1c = -local_34;
    local_18 = local_30;
    FUN_009a3f80(&local_14,(float *)&stack0xffffffc8,&local_2c,&local_20);
    param_1[0x72] = (int)local_14;
    param_1[0x73] = local_10;
    param_1[0x74] = local_c;
    param_1[0x75] = local_8;
  }
  return;
}


//// FUNCTION FUN_00870a50 @ 00870a50 ////

void __fastcall FUN_00870a50(int *param_1)

{
  float local_24 [3];
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  FUN_00870920(param_1);
  FUN_009a1a20(&DAT_0105c2e8,(float *)&DAT_0104cce0,local_c,0.0);
  FUN_009a1a20(&DAT_0105c2e8,(float *)&DAT_0104cce0,local_24,*(float *)(DAT_00f87aa0 + 0x98));
  FUN_009a43c0(param_1 + 0x72,local_c,local_24,&local_18);
  param_1[0x76] = (int)(local_18 - (float)param_1[0x40]);
  param_1[0x77] = (int)(local_14 - (float)param_1[0x41]);
  param_1[0x78] = (int)(local_10 - (float)param_1[0x42]);
  return;
}


//// FUNCTION FUN_00870b00 @ 00870b00 ////

uint __fastcall FUN_00870b00(int *param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float *pfVar6;
  float fVar7;
  float fStack_18;
  float local_14 [2];
  float local_c [3];
  
  pfVar6 = local_c;
  pfVar1 = (float *)(**(code **)(*param_1 + 0x34))(pfVar6,local_14);
  uVar2 = FUN_009a1b30(&DAT_0105c2e8,pfVar1,pfVar6);
  if ((char)uVar2 != '\0') {
    iVar3 = FUN_0071b2a0();
    uVar2 = 0;
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_0071b2a0();
      fVar5 = (float10)(**(code **)(*piVar4 + 0x10))();
      fVar7 = (float)fVar5;
      piVar4 = (int *)FUN_0071b2a0();
      fVar5 = (float10)(**(code **)(*piVar4 + 0x14))();
      if ((((-256.0 < fStack_18) && (-256.0 < local_14[0])) && (fStack_18 < fVar7 + 256.0)) &&
         (local_14[0] < (float)fVar5 + 256.0)) {
        return 1;
      }
      return 0;
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00870bd0 @ 00870bd0 ////

int * __thiscall FUN_00870bd0(void *this,undefined4 *param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce95c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539710(this);
  *(undefined ***)this = &PTR_FUN_00d6368c;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d6366c;
  *(undefined ***)((int)this + 0xa0) = &PTR_FUN_00d63654;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x168) = 0x3f800000;
  *(undefined4 *)((int)this + 0x158) = 0x3f800000;
  *(undefined4 *)((int)this + 0x148) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x198) = 0x3f800000;
  *(undefined4 *)((int)this + 0x188) = 0x3f800000;
  *(undefined4 *)((int)this + 0x178) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  piVar1 = (int *)((int)this + 0x1e8);
  *(undefined4 *)((int)this + 0x1d0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined1 *)((int)this + 0x1e4) = 1;
  *(void **)((int)this + 0x1f0) = this;
  FUN_00acdb9e(0xe5e240);
  iVar4 = FUN_0097dda0();
  *(int *)((int)this + 500) = iVar4;
  if (DAT_00e5e23c != '\0') {
    iVar4 = 0x1e8;
    pcVar6 = "SWFLink";
    pcVar5 = (char *)FUN_00acdb9e(0xe5e240);
    FUN_0097df60(pcVar5,pcVar6,iVar4);
    DAT_00e5e23c = '\0';
  }
  *(int ***)((int)this + 0x1ec) = &DAT_01050130;
  *piVar1 = (int)DAT_01050130;
  *(int **)((int)DAT_01050130 + 4) = piVar1;
  DAT_01050130 = piVar1;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  pfVar2 = (float *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1b4) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1b8) = 0x3f800000;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *pfVar2 = 1.0;
  *(undefined4 *)((int)this + 0x1b0) = 0x3f800000;
  if (0 < DAT_0105be08) {
    iVar4 = FUN_00876ee0(DAT_01050174,(char *)*param_1,'\x01');
    *(int *)((int)this + 0x1a8) = iVar4;
    FUN_00870a50(this);
    if (*(int *)((int)this + 0x1a8) != 0) {
      *(undefined1 *)(*(int *)((int)this + 0x1a8) + 0x7d) = 0;
      FUN_00882710(*(void **)((int)this + 0x1a8),pfVar2);
      if (*pfVar2 <= *(float *)((int)this + 0x1b0)) {
        fVar3 = *(float *)((int)this + 0x1b0);
      }
      else {
        fVar3 = *pfVar2;
      }
      *(float *)((int)this + 0x1b4) = 1.0 / fVar3;
      *(float *)((int)this + 0x1b8) = 1.0 / fVar3;
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00870e70 @ 00870e70 ////

void __fastcall FUN_00870e70(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce95e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6368c;
  param_1[0x1e] = &PTR_LAB_00d6366c;
  param_1[0x28] = &PTR_FUN_00d63654;
  local_4 = 1;
  if (DAT_01050118 == param_1) {
    DAT_01050118 = (undefined4 *)0x0;
  }
  if ((undefined4 *)param_1[0x7b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x7b] = param_1[0x7a];
  }
  if (param_1[0x7a] != 0) {
    *(undefined4 *)(param_1[0x7a] + 4) = param_1[0x7b];
  }
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  puVar2 = (undefined4 *)param_1[0x6a];
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[0x6a] == 0) {
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
        param_1[0x6a] = 0;
      }
    }
    else {
      FUN_00874f90(puVar2[0x6a]);
    }
  }
  if ((undefined4 *)param_1[0x7b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x7b] = param_1[0x7a];
  }
  if (param_1[0x7a] != 0) {
    *(undefined4 *)(param_1[0x7a] + 4) = param_1[0x7b];
  }
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  local_4 = 0xffffffff;
  FUN_00539940(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00870f80 @ 00870f80 ////

void __fastcall FUN_00870f80(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00870b00(param_1);
  if ((char)uVar1 != '\0') {
    if ((char)param_1[0x79] != '\0') {
      FUN_008707d0(param_1);
      *(undefined1 *)(param_1 + 0x79) = 0;
    }
    FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
    if (param_1[0x6a] != 0) {
      DAT_01050118 = param_1;
      FUN_00882950(param_1[0x6a]);
      DAT_01050118 = (int *)0x0;
    }
  }
  return;
}


//// FUNCTION FUN_00870fe0 @ 00870fe0 ////

uint __fastcall FUN_00870fe0(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00870a50((int *)(param_1 + -0xa0));
  if (*(int *)(param_1 + 0x108) != 0) {
    uVar1 = FUN_008828d0(*(int *)(param_1 + 0x108));
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00871050 @ 00871050 ////

undefined4 * __thiscall FUN_00871050(void *this,byte param_1)

{
  FUN_00870e70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00871070 @ 00871070 ////

void FUN_00871070(void)

{
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = local_4 & 0xfffffffe | 2;
  local_8 = 0;
  local_10 = &LAB_00871010;
  local_c = 8;
  FUN_009a14d0((int *)&local_10);
  return;
}


//// FUNCTION FUN_008710b0 @ 008710b0 ////

void __fastcall FUN_008710b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d63748;
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


//// FUNCTION FUN_00871100 @ 00871100 ////

undefined4 * __thiscall FUN_00871100(void *this,byte param_1)

{
  FUN_008710b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00871120 @ 00871120 ////

void __fastcall FUN_00871120(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d63748;
  return;
}


//// FUNCTION FUN_00871180 @ 00871180 ////

void __fastcall FUN_00871180(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d63754;
  return;
}


//// FUNCTION FUN_008711d0 @ 008711d0 ////

void __thiscall FUN_008711d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_00d6375c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  return;
}


//// FUNCTION FUN_00871210 @ 00871210 ////

void __thiscall FUN_00871210(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x185) = param_1;
  return;
}


//// FUNCTION FUN_00871250 @ 00871250 ////

int __fastcall FUN_00871250(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}


//// FUNCTION FUN_00871470 @ 00871470 ////

void __cdecl FUN_00871470(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00871750 @ 00871750 ////

void __fastcall FUN_00871750(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d63764;
  if (DAT_01050150 == param_1) {
    DAT_01050150 = (undefined4 *)0x0;
  }
  if (10 < (uint)param_1[100]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x62]);
  }
  FUN_008902f0(param_1);
  return;
}


//// FUNCTION FUN_00871970 @ 00871970 ////

void __cdecl FUN_00871970(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00871b70 @ 00871b70 ////

void __fastcall FUN_00871b70(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar3 = ExceptionList;
  puStack_8 = &LAB_00ce9618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6375c;
  piVar1 = (int *)param_1[5];
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 < 1) {
      FUN_009a7db0(piVar1);
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
    param_1[5] = 0;
  }
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 < 1) {
      FUN_009a7db0(piVar1);
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
    param_1[6] = 0;
  }
  *param_1 = &PTR_LAB_00d63754;
  ExceptionList = pvVar3;
  return;
}


//// FUNCTION FUN_00871c10 @ 00871c10 ////

undefined4 * __thiscall FUN_00871c10(void *this,byte param_1)

{
  FUN_00871b70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00871c30 @ 00871c30 ////

undefined4 * __thiscall FUN_00871c30(void *this,byte param_1)

{
  FUN_00871750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00871e00 @ 00871e00 ////

void * FUN_00871e00(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00871e80 @ 00871e80 ////

int FUN_00871e80(void *param_1,int param_2,void *param_3)

{
  void *pvVar1;
  
  pvVar1 = _memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)pvVar1 + (param_2 - (int)param_1);
}


//// FUNCTION FUN_00871ea0 @ 00871ea0 ////

void __cdecl FUN_00871ea0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00871ed0 @ 00871ed0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00871ed0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  void **ppvVar3;
  undefined1 **ppuVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9658;
  local_c = ExceptionList;
  if (DAT_0104cce0 - (float)_DAT_0105c408 < 0.0) {
    return;
  }
  if (DAT_0105c400 <= DAT_0104cce0 - (float)_DAT_0105c408) {
    return;
  }
  if (DAT_0104cce4 - (float)_DAT_0105c40c < 0.0) {
    return;
  }
  if (DAT_0105c404 <= DAT_0104cce4 - (float)_DAT_0105c40c) {
    return;
  }
  ppvVar3 = &local_c;
  if (DAT_010501a0 == 0) goto LAB_0087208a;
  if (3 < param_1) {
    return;
  }
  if ((((param_1 != 0) && (param_1 != 3)) && (param_1 != 1)) && (ppvVar3 = &local_c, param_1 != 2))
  goto LAB_0087208a;
  local_34 = local_28;
  local_28[0] = 0;
  local_30 = 0;
  local_2c = 0x14;
  local_4 = 0;
  if (*(int *)(DAT_010501a0 + 0x224) == 0) {
    pcVar6 = "GENERIC_FILE;";
    ppuVar4 = &local_34;
    ExceptionList = &local_c;
  }
  else {
    pcVar6 = ";";
    ExceptionList = &local_c;
    ppuVar4 = FUN_004211a0(&local_34,(undefined4 *)(DAT_010501a0 + 0x220));
  }
  FUN_00407630(ppuVar4,pcVar6);
  pcVar6 = (char *)((int)this + 0x54);
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  ppuVar4 = &local_34;
  if (pcVar6 == (char *)((int)this + 0x55)) {
    pcVar6 = "GENERIC_BUTTON;";
  }
  else {
    pcVar6 = ";";
    ppuVar4 = FUN_00407630(ppuVar4,(char *)((int)this + 0x54));
  }
  FUN_00407630(ppuVar4,pcVar6);
  FUN_0045f450((int *)&local_34);
  switch(param_1) {
  case 0:
    pcVar6 = "STATUS_HIGHLIGHTED";
    break;
  case 1:
    pcVar6 = "STATUS_UNHIGHLIGHTED";
    break;
  case 2:
    pcVar6 = "STATUS_CLICKED";
    break;
  case 3:
    pcVar6 = "STATUS_UNCLICKED";
    break;
  default:
    goto switchD_0087202e_default;
  }
  FUN_00407630(&local_34,pcVar6);
switchD_0087202e_default:
  uVar5 = FUN_009b01a0(local_34);
  *(undefined4 *)((int)this + param_1 * 4 + 0x168) = uVar5;
  local_4 = 0xffffffff;
  ppvVar3 = ExceptionList;
  if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
LAB_0087208a:
  ExceptionList = ppvVar3;
  local_4 = 0xffffffff;
  if ((param_1 < 4) && (iVar2 = *(int *)((int)this + param_1 * 4 + 0x168), iVar2 != -1)) {
    FUN_00539100(&local_34,iVar2);
    ppuVar4 = &local_34;
    FUN_004f3b20();
    FUN_004f32c0((byte *)ppuVar4);
    *(undefined4 *)((int)this + param_1 * 4 + 0x168) = 0xffffffff;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00872100 @ 00872100 ////

void __thiscall FUN_00872100(void *this,char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 0;
  while( true ) {
    if (*(int *)((int)this + 0x10) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
    }
    if (iVar2 <= iVar5) break;
    if ((*(byte *)(*(int *)(*(int *)(*(int *)((int)this + 0x10) + iVar5 * 4) + 8) + 8) & 8) != 0) {
      iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x10) + iVar5 * 4) + 8);
      piVar3 = *(int **)(iVar2 + 0x3c);
      if (piVar3 != *(int **)(iVar2 + 0x40)) {
        do {
          iVar1 = *piVar3;
          if ((*(byte *)(iVar1 + 8) & 1) != 0) {
            if (param_1 == '\0') {
              uVar4 = *(undefined4 *)(iVar1 + 0x14);
            }
            else {
              uVar4 = *(undefined4 *)(iVar1 + 0x18);
            }
            *(undefined4 *)(iVar1 + 0x1c) = uVar4;
          }
          piVar3 = piVar3 + 1;
        } while (piVar3 != *(int **)(iVar2 + 0x40));
      }
    }
    iVar5 = iVar5 + 1;
  }
  return;
}


//// FUNCTION FUN_00872180 @ 00872180 ////

void __thiscall FUN_00872180(void *this,undefined4 *param_1,char param_2,undefined1 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  void *local_20 [2];
  uint local_18;
  
  bVar2 = FUN_009b46b0(param_1);
  if (bVar2) {
    puVar3 = FUN_009b5030(local_20,param_1);
    FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar3,puVar3[1]);
  }
  else {
    if (*(char *)((int)this + 0x185) != '\0') goto LAB_00872204;
    puVar3 = FUN_00568790(local_20,param_1);
    FUN_004036d0((void *)((int)this + 0x188),(wchar_t *)*puVar3,puVar3[1]);
  }
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
LAB_00872204:
  *(undefined1 *)((int)this + 0x1ac) = param_3;
  if (((param_2 != '\0') && (*(int *)((int)this + 0x18c) != 0)) &&
     (piVar6 = *(int **)(*(int *)((int)this + 0x164) + 0x1e0),
     piVar6 != *(int **)(*(int *)((int)this + 0x164) + 0x1e4))) {
    do {
      pbVar7 = (byte *)((int)this + 0x54);
      pbVar4 = (byte *)(*piVar6 + 0x54);
      do {
        bVar1 = *pbVar4;
        bVar2 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00872274:
          iVar5 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
          goto LAB_00872279;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar2 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00872274;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00872279:
      if (iVar5 == 0) {
        FUN_004036d0((void *)(*piVar6 + 0x188),*(wchar_t **)((int)this + 0x188),
                     *(uint *)((int)this + 0x18c));
        *(undefined1 *)(*piVar6 + 0x1ac) = param_3;
        *(undefined1 *)(*piVar6 + 0x184) = *(undefined1 *)((int)this + 0x184);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(*(int *)((int)this + 0x164) + 0x1e4));
  }
  return;
}


//// FUNCTION FUN_008722e0 @ 008722e0 ////

void __thiscall FUN_008722e0(void *this,undefined1 param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  
  *(undefined1 *)((int)this + 0x184) = param_1;
  piVar4 = *(int **)(*(int *)((int)this + 0x164) + 0x1e0);
  if (piVar4 != *(int **)(*(int *)((int)this + 0x164) + 0x1e4)) {
    do {
      pbVar5 = (byte *)((int)this + 0x54);
      pbVar2 = (byte *)(*piVar4 + 0x54);
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00872334:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00872339;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00872334;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00872339:
      if (iVar3 == 0) {
        *(undefined1 *)(*piVar4 + 0x184) = *(undefined1 *)((int)this + 0x184);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int **)(*(int *)((int)this + 0x164) + 0x1e4));
  }
  return;
}


//// FUNCTION FUN_00872370 @ 00872370 ////

void __thiscall
FUN_00872370(void *this,undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  float fStack_98;
  float fStack_94;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined **local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int aiStack_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9678;
  local_c = ExceptionList;
  bVar2 = false;
  iVar5 = 0;
  ExceptionList = &local_c;
  do {
    while( true ) {
      if (*(int *)((int)this + 0x10) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x14) - *(int *)((int)this + 0x10) >> 2;
      }
      if (iVar3 <= iVar5) {
        ExceptionList = local_c;
        return;
      }
      iVar1 = *(int *)((int)this + 0x10);
      iVar3 = iVar5 * 4;
      if (param_3 == 3) {
        cVar6 = *(char *)(*(int *)(iVar3 + iVar1) + 1);
      }
      else {
        cVar6 = *(char *)(*(int *)(iVar3 + iVar1) + 3);
      }
      cVar6 = cVar6 != '\0';
      if (((param_3 & 2) != 0) && (*(char *)(*(int *)(iVar3 + iVar1) + 2) != '\0')) {
        cVar6 = cVar6 + '\x01';
      }
      if ((cVar6 != '\0') && (*(int *)(*(int *)(iVar3 + iVar1) + 8) != 0)) break;
LAB_00872628:
      iVar5 = iVar5 + 1;
    }
    if ((*(byte *)(*(int *)(*(int *)(iVar3 + iVar1) + 8) + 8) & 8) == 0) {
      FUN_0086ddb0(param_1,&iStack_88,(int *)(*(int *)(iVar3 + iVar1) + 0x10));
      if (((param_4 != 0) && (*(int *)(param_4 + 0x15c) != 0)) && (!bVar2)) {
        piVar4 = (int *)FUN_0086ddb0(&DAT_00e5e7e4,aiStack_24,&iStack_88);
        iStack_88 = *piVar4;
        iStack_84 = piVar4[1];
        iStack_80 = piVar4[2];
        iStack_7c = piVar4[3];
        iStack_78 = piVar4[4];
        iStack_74 = piVar4[5];
        fStack_98 = -1.0;
        fStack_94 = -1.0;
        if ((*(byte *)(*(int *)(*(int *)(iVar3 + *(int *)((int)this + 0x10)) + 8) + 8) & 2) != 0) {
          iVar1 = *(int *)(*(int *)(iVar3 + *(int *)((int)this + 0x10)) + 8);
          fStack_98 = (float)(*(int *)(iVar1 + 0x54) - *(int *)(iVar1 + 0x50)) * (float)iStack_88 *
                      1.5258789e-05 * 0.05;
          fStack_94 = (float)(*(int *)(iVar1 + 0x5c) - *(int *)(iVar1 + 0x58)) * (float)iStack_7c *
                      1.5258789e-05 * 0.05;
        }
        FUN_0089ee90(*(void **)(param_4 + 0x15c),&iStack_88,fStack_98,fStack_94);
        (**(code **)(**(int **)(param_4 + 0x15c) + 0x2c))();
        bVar2 = true;
      }
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x10) + iVar3) + 8) + 8))(&iStack_88);
      (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x10) + iVar3) + 8) + 4))();
      goto LAB_00872628;
    }
    local_54 = 0x80;
    local_58 = &PTR_FUN_00d6375c;
    local_4c = 0;
    local_38 = 0;
    local_30 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_48 = 0;
    local_50 = 1;
    local_70 = *param_1;
    local_6c = param_1[1];
    local_68 = param_1[2];
    local_64 = param_1[3];
    local_60 = param_1[4] + *(int *)(*(int *)(iVar3 + iVar1) + 0x20);
    local_4 = 0;
    local_5c = param_1[5] + *(int *)(*(int *)(iVar3 + iVar1) + 0x24);
    (**(code **)(**(int **)(*(int *)(iVar3 + iVar1) + 8) + 0x18))(&local_70,param_2);
    local_4 = 0xffffffff;
    FUN_00871b70(&local_58);
    iVar5 = iVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_00872650 @ 00872650 ////

undefined4 * FUN_00872650(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00872680 @ 00872680 ////

void __fastcall FUN_00872680(int param_1)

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


//// FUNCTION FUN_008726b0 @ 008726b0 ////

void __fastcall FUN_008726b0(int param_1)

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


//// FUNCTION FUN_00872710 @ 00872710 ////

void __fastcall FUN_00872710(int param_1)

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


//// FUNCTION FUN_00872760 @ 00872760 ////

void * __thiscall FUN_00872760(void *this,byte param_1)

{
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008727d0 @ 008727d0 ////

void FUN_008727d0(void)

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
  puStack_8 = &LAB_00ce9698;
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


//// FUNCTION FUN_00872840 @ 00872840 ////

void FUN_00872840(void)

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
  puStack_8 = &LAB_00ce96b8;
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


//// FUNCTION FUN_008728b0 @ 008728b0 ////

void FUN_008728b0(int param_1)

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


//// FUNCTION FUN_008728e0 @ 008728e0 ////

void FUN_008728e0(void)

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
  puStack_8 = &LAB_00ce96d8;
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


//// FUNCTION FUN_00872950 @ 00872950 ////

void __thiscall FUN_00872950(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00872840();
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
      _Dst = FUN_00872650((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00871e00(param_1,iVar5,param_1 + param_2);
      FUN_00872650(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00871470(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00871e00(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00871970(param_1,(int)pvVar3,iVar5);
    FUN_00871470(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00872b30 @ 00872b30 ////

void __cdecl FUN_00872b30(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (*(void **)(param_1 + 4) != (void *)0x0) break;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1 = param_1 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00872b70 @ 00872b70 ////

/* WARNING: Removing unreachable block (ram,0x00872b93) */

undefined4 __thiscall FUN_00872b70(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    pvVar1 = operator_new(param_1);
    *(void **)((int)this + 4) = pvVar1;
    *(void **)((int)this + 8) = pvVar1;
    *(uint *)((int)this + 0xc) = (int)pvVar1 + param_1;
    return CONCAT31((int3)((int)pvVar1 + param_1 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_00872bc0 @ 00872bc0 ////

/* WARNING: Removing unreachable block (ram,0x00872c0d) */

int __thiscall FUN_00872bc0(void *this,int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce96f0;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar3 != 0) {
    puVar1 = operator_new(uVar3);
    *(undefined1 **)((int)this + 4) = puVar1;
    *(undefined1 **)((int)this + 8) = puVar1;
    *(undefined1 **)((int)this + 0xc) = puVar1 + uVar3;
    local_8 = 0;
    uVar2 = FUN_00871ea0(*(undefined1 **)(param_1 + 4),*(undefined1 **)(param_1 + 8),puVar1);
    *(undefined4 *)((int)this + 8) = uVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_00872ce0 @ 00872ce0 ////

void * __thiscall FUN_00872ce0(void *this,void *param_1)

{
  void *pvVar1;
  void *_Memory;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  
  if (this == param_1) {
    return this;
  }
  pvVar2 = *(void **)((int)param_1 + 4);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((int)param_1 + 8);
    if (pvVar1 != pvVar2) {
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)((int)this + 8) - (int)_Memory;
      }
      if ((uint)((int)pvVar1 - (int)pvVar2) <= uVar5) {
        _memmove(_Memory,pvVar2,(int)pvVar1 - (int)pvVar2);
        if (*(int *)((int)param_1 + 4) != 0) {
          *(int *)((int)this + 8) =
               *(int *)((int)this + 4) + (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4));
          return this;
        }
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
        return this;
      }
      if (_Memory == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)((int)this + 0xc) - (int)_Memory;
      }
      if (uVar5 < (uint)((int)pvVar1 - (int)pvVar2)) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4);
        }
        uVar3 = FUN_00872b70(this,uVar5);
        if ((char)uVar3 == '\0') {
          return this;
        }
        iVar4 = FUN_00871e80(*(void **)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                             *(void **)((int)this + 4));
        *(int *)((int)this + 8) = iVar4;
        return this;
      }
      if (_Memory == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)_Memory;
      }
      pvVar1 = *(void **)((int)param_1 + 4);
      pvVar2 = (void *)((int)pvVar1 + iVar4);
      _memmove(_Memory,pvVar1,(int)pvVar2 - (int)pvVar1);
      _Size = *(int *)((int)param_1 + 8) - (int)pvVar2;
      pvVar2 = _memmove(*(void **)((int)this + 8),pvVar2,_Size);
      *(size_t *)((int)this + 8) = (int)pvVar2 + _Size;
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


//// FUNCTION FUN_00872e20 @ 00872e20 ////

void __cdecl FUN_00872e20(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9711;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_00872bc0(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00872ec0 @ 00872ec0 ////

void FUN_00872ec0(int param_1,int param_2)

{
  FUN_00872b30(param_1,param_2);
  return;
}


//// FUNCTION FUN_00872ee0 @ 00872ee0 ////

void * __cdecl FUN_00872ee0(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00872ce0(param_3,param_1);
    param_1 = (void *)((int)param_1 + 0x10);
    param_3 = (void *)((int)param_3 + 0x10);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00872f20 @ 00872f20 ////

void * __cdecl FUN_00872f20(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = (void *)((int)param_2 + -0x10);
    param_3 = (void *)((int)param_3 + -0x10);
    FUN_00872ce0(param_3,param_2);
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_00872f80 @ 00872f80 ////

undefined4 * __thiscall FUN_00872f80(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9736;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00890290(this);
  *(undefined ***)this = &PTR_FUN_00d63764;
  *(undefined2 **)((int)this + 0x188) = (undefined2 *)((int)this + 0x194);
  *(undefined2 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 10;
  *(undefined4 **)((int)this + 0x160) = param_1;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = 4;
  *(int *)((int)this + 0x164) = param_2;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined1 *)((int)this + 0x1ac) = 1;
  *(undefined1 *)((int)this + 0x184) = 1;
  *(undefined1 *)((int)this + 0x185) = 1;
  *(undefined1 *)((int)this + 0x178) = 0;
  iVar1 = *(int *)(param_2 + 0x1e0);
  local_4 = 1;
  if ((iVar1 == 0) ||
     ((uint)(*(int *)(param_2 + 0x1e8) - iVar1 >> 2) <=
      (uint)(*(int *)(param_2 + 0x1e4) - iVar1 >> 2))) {
    param_1 = this;
    FUN_00872950((void *)(param_2 + 0x1dc),*(undefined4 **)(param_2 + 0x1e4),1,&param_1);
  }
  else {
    puVar2 = *(undefined4 **)(param_2 + 0x1e4);
    *puVar2 = this;
    *(undefined4 **)(param_2 + 0x1e4) = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x168) = 0xffffffff;
  *(undefined4 *)((int)this + 0x16c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x170) = 0xffffffff;
  *(undefined4 *)((int)this + 0x174) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008730a0 @ 008730a0 ////

undefined4 * __thiscall FUN_008730a0(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce974b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x1b0);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    puVar1 = FUN_00872f80(this_00,this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00873150 @ 00873150 ////

void * __cdecl FUN_00873150(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce9771;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_00872bc0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x10);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_008731e0 @ 008731e0 ////

void * __cdecl FUN_008731e0(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce9791;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_00872bc0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x10);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_008732d0 @ 008732d0 ////

void FUN_008732d0(int param_1,int param_2,void *param_3)

{
  FUN_00873150(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00873310 @ 00873310 ////

void __thiscall FUN_00873310(void *this,void *param_1,void *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int extraout_ECX;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce97a0;
  local_10 = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  uVar7 = (int)param_3 - (int)param_2 >> 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - iVar2 >> 4;
  }
  if (uVar7 != 0) {
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar2 >> 4;
    }
    ExceptionList = &local_10;
    if (0xfffffffU - iVar6 < uVar7) {
      ExceptionList = &local_10;
      uVar1 = FUN_008727d0();
      iVar2 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar2 >> 4;
    }
    if (uVar1 < iVar6 + uVar7) {
      if (0xfffffff - (uVar1 >> 1) < uVar1) {
        uVar1 = 0;
      }
      else {
        uVar1 = uVar1 + (uVar1 >> 1);
      }
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar2 >> 4;
      }
      if (uVar1 < iVar6 + uVar7) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)((int)this + 8) - iVar2 >> 4;
        }
        uVar1 = iVar2 + uVar7;
      }
      pvVar3 = operator_new(uVar1 * 0x10);
      local_8 = 0;
      pvVar4 = FUN_00873150(*(int *)((int)this + 4),(int)param_1,pvVar3);
      pvVar4 = FUN_008731e0((int)param_2,(int)param_3,pvVar4);
      FUN_00873150((int)param_1,*(int *)((int)this + 8),pvVar4);
      iVar2 = *(int *)((int)this + 4);
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - iVar2 >> 4;
      }
      if (iVar2 != 0) {
        FUN_00872b30(iVar2,*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar1 * 0x10 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((uVar7 + iVar6) * 0x10 + (int)pvVar3);
      *(void **)((int)this + 4) = pvVar3;
      ExceptionList = local_10;
      return;
    }
    pvVar3 = *(void **)((int)this + 8);
    if ((uint)((int)pvVar3 - (int)param_1 >> 4) < uVar7) {
      FUN_00873150((int)param_1,(int)pvVar3,(void *)(uVar7 * 0x10 + (int)param_1));
      pvVar3 = (void *)(((int)*(void **)((int)this + 8) - (int)param_1 >> 4) * 0x10 + (int)param_2);
      local_8 = 2;
      FUN_008731e0((int)pvVar3,(int)param_3,*(void **)((int)this + 8));
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + uVar7 * 0x10;
      local_8 = 0xffffffff;
      FUN_00872ee0(param_2,pvVar3,param_1);
      ExceptionList = local_10;
      return;
    }
    pvVar5 = (void *)((int)pvVar3 + uVar7 * -0x10);
    pvVar4 = FUN_00873150((int)pvVar5,(int)pvVar3,pvVar3);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00872f20(param_1,pvVar5,pvVar3);
    FUN_00872ee0(param_2,param_3,param_1);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008735e0 @ 008735e0 ////

void __thiscall FUN_008735e0(void *this,byte param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_010501b0 != 0) {
    iVar2 = *(int *)((int)this + 0x160);
    bVar1 = param_1 & 0x1f;
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 0x20)) {
      iVar5 = 0;
      _param_1 = 0x24;
      iVar3 = DAT_010501b0;
      do {
        if ((*(uint *)(_param_1 + iVar2) & 1 << bVar1) != 0) {
          FUN_00873310((void *)(iVar3 + 0x178),*(void **)(iVar3 + 0x180),
                       *(void **)(*(int *)((int)this + 0x160) + iVar5 + 0x78),
                       *(void **)(*(int *)((int)this + 0x160) + 0x7c + iVar5));
          iVar3 = DAT_010501b0;
        }
        iVar2 = *(int *)((int)this + 0x160);
        _param_1 = _param_1 + 4;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar4 < *(int *)(iVar2 + 0x20));
    }
  }
  return;
}


//// FUNCTION FUN_00873680 @ 00873680 ////

void __thiscall FUN_00873680(void *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 extraout_EDX;
  int iVar5;
  int iVar6;
  
  if (*(int *)((int)this + 0x160) != 0) {
    iVar5 = 0;
    if (0 < *(int *)(*(int *)((int)this + 0x160) + 0x20)) {
      iVar6 = 0;
      do {
        bVar2 = *(byte *)(iVar5 + 100 + *(int *)((int)this + 0x160));
        if ((bVar2 != 0) && (cVar4 = FUN_00553f70((uint)bVar2), cVar4 != '\0')) {
          iVar1 = *(int *)((int)this + 0x160) + 0x74 + iVar6;
          FUN_00873310((void *)((int)DAT_010501b0 + 0x178),*(void **)((int)DAT_010501b0 + 0x180),
                       *(void **)(iVar1 + 4),*(void **)(iVar1 + 8));
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < *(int *)(*(int *)((int)this + 0x160) + 0x20));
    }
    uVar3 = *(undefined4 *)((int)this + 0x17c);
    if (*(int **)((int)this + 0x15c) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x15c) + 0x104))(*(undefined1 *)((int)this + 0x178));
    }
    cVar4 = *(char *)((int)this + 0x178);
    if ((cVar4 == '\0') || (DAT_00e5e280 == '\0')) {
      *(undefined4 *)((int)this + 0x1a8) = 0;
    }
    else {
      *(int *)((int)this + 0x1a8) = *(int *)((int)this + 0x1a8) + DAT_0105beb8;
    }
    switch(uVar3) {
    case 0:
      if ((cVar4 != '\0') && (DAT_01050150 == this)) {
        DAT_01050150 = (void *)0x0;
        *(undefined4 *)((int)this + 0x17c) = 2;
        FUN_008735e0(this,0);
        FUN_00871ed0(this,0);
        FUN_00872100(*(void **)((int)this + 0x160),'\x01');
      }
      break;
    case 1:
      if (DAT_01050154 != this) {
        *(undefined4 *)((int)this + 0x17c) = 0;
      }
      break;
    case 2:
      if (((cVar4 == '\0') && (DAT_01050154 != this)) ||
         ((cVar4 != '\0' && ((DAT_01050150 != this && (*(void **)(DAT_010501a0 + 0x174) != this)))))
         ) {
        *(undefined4 *)((int)this + 0x17c) = 0;
        FUN_008735e0(this,1);
        FUN_00871ed0(this,1);
        FUN_00872100(*(void **)((int)this + 0x160),'\0');
      }
      else if ((cVar4 != '\0') && ((DAT_01050150 == this && (DAT_01050154 == this)))) {
        DAT_01050154 = (void *)0x0;
        DAT_01050150 = (void *)0x0;
        if (((*(int *)((int)this + 0x15c) == 0) ||
            (*(int *)(*(int *)((int)this + 0x15c) + 0x3b8) == 3)) && (DAT_00e5e281 != '\0')) {
          *(undefined4 *)((int)this + 0x17c) = 3;
          FUN_008735e0(this,2);
          FUN_00871ed0(this,2);
          if (DAT_0104dafc == 0) {
            if (DAT_0104dcf0 != 0) {
              FUN_006d7780(DAT_0104dcf0,extraout_EDX);
            }
          }
          else {
            FUN_0068f7e0(DAT_0104dafc,extraout_EDX);
          }
        }
      }
      break;
    case 3:
      if (cVar4 == '\0') {
        *(undefined4 *)((int)this + 0x17c) = 2;
        FUN_008735e0(this,4);
        FUN_00872100(*(void **)((int)this + 0x160),'\0');
      }
      else if (DAT_01050154 != this) {
        *(undefined4 *)((int)this + 0x17c) = 2;
        FUN_008735e0(this,3);
        FUN_00871ed0(this,3);
      }
    }
    FUN_00872370(*(void **)((int)this + 0x160),param_1,param_2,*(uint *)((int)this + 0x17c),
                 (int)this);
    if ((((*(char *)((int)this + 0x184) != '\0') && (500 < *(uint *)((int)this + 0x1a8))) &&
        (*(int *)((int)this + 0x18c) != 0)) && (*(char *)((int)this + 0x178) != '\0')) {
      if (*(char *)((int)this + 0x1ac) == '\0') {
        FUN_0073b4a0((undefined4 *)((int)this + 0x188),'\0',0,2,(undefined1 *)0x0,0,0);
      }
      else {
        FUN_005e2d50((undefined4 *)((int)this + 0x188),2);
      }
    }
    if (*(int *)((int)this + 0x15c) != 0) {
      FUN_008887b0(DAT_010501b0,0);
    }
  }
  return;
}


//// FUNCTION FUN_00873a00 @ 00873a00 ////

int * __thiscall FUN_00873a00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00873a50 @ 00873a50 ////

int * __thiscall FUN_00873a50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00873a80 @ 00873a80 ////

int * __thiscall FUN_00873a80(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00873b50 @ 00873b50 ////

void __cdecl FUN_00873b50(int param_1)

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


//// FUNCTION FUN_00873b70 @ 00873b70 ////

void __cdecl FUN_00873b70(int *param_1)

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


//// FUNCTION FUN_00873bb0 @ 00873bb0 ////

void __thiscall FUN_00873bb0(void *this,int *param_1)

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


//// FUNCTION FUN_00873e50 @ 00873e50 ////

void __fastcall FUN_00873e50(int *param_1)

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


//// FUNCTION FUN_00873eb0 @ 00873eb0 ////

void __fastcall FUN_00873eb0(int *param_1)

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


//// FUNCTION FUN_00873f70 @ 00873f70 ////

void __cdecl FUN_00873f70(int param_1)

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


//// FUNCTION FUN_00873f90 @ 00873f90 ////

void __cdecl FUN_00873f90(int *param_1)

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


//// FUNCTION FUN_00873fc0 @ 00873fc0 ////

void __fastcall FUN_00873fc0(int *param_1)

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


//// FUNCTION FUN_00874020 @ 00874020 ////

void __fastcall FUN_00874020(int *param_1)

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


//// FUNCTION FUN_008741d0 @ 008741d0 ////

void FUN_008741d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_01050174;
  if (DAT_01050174 != (undefined4 *)0x0) {
    iVar1 = DAT_01050174[0x12];
    DAT_01050174[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_01050160[1])();
    DAT_01050174 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00874210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_01050160)();
    return;
  }
  return;
}


//// FUNCTION FUN_00874220 @ 00874220 ////

undefined4 __fastcall FUN_00874220(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar4 = 0;
  if (iVar2 != param_1 + 0x4c) {
    do {
      iVar2 = *(int *)(iVar2 + 4);
      iVar4 = iVar4 + 1;
    } while (iVar2 != param_1 + 0x4c);
    if (iVar4 != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 8);
      piVar1 = (int *)(iVar2 + 0x68);
      if (*(int **)(iVar2 + 0x6c) != (int *)0x0) {
        **(int **)(iVar2 + 0x6c) = *piVar1;
      }
      if (*piVar1 != 0) {
        *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)(iVar2 + 0x6c);
      }
      *piVar1 = 0;
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      piVar3 = (int *)(param_1 + 0x80);
      *(int **)(iVar2 + 0x6c) = piVar3;
      *piVar1 = *piVar3;
      *(int **)(*piVar3 + 4) = piVar1;
      *piVar3 = (int)piVar1;
      if (*(int *)(iVar2 + 0x4c) != 0) {
        piVar1 = (int *)(*(int *)(iVar2 + 0x4c) + 0x48);
        *piVar1 = *piVar1 + 1;
        FUN_008825f0(*(int *)(iVar2 + 0x4c));
        return *(undefined4 *)(iVar2 + 0x4c);
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_008742a0 @ 008742a0 ////

void __fastcall FUN_008742a0(int param_1)

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


//// FUNCTION FUN_008742c0 @ 008742c0 ////

void __fastcall FUN_008742c0(int param_1)

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


//// FUNCTION FUN_00874440 @ 00874440 ////

void __thiscall FUN_00874440(void *this,int param_1)

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


//// FUNCTION FUN_00874580 @ 00874580 ////

int * __fastcall FUN_00874580(int *param_1)

{
  FUN_00873eb0(param_1);
  return param_1;
}


//// FUNCTION FUN_00874590 @ 00874590 ////

int * __fastcall FUN_00874590(int *param_1)

{
  FUN_00873e50(param_1);
  return param_1;
}


//// FUNCTION FUN_008745f0 @ 008745f0 ////

void __thiscall FUN_008745f0(void *this,int param_1)

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


//// FUNCTION FUN_00874650 @ 00874650 ////

void __thiscall FUN_00874650(void *this,int *param_1)

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


//// FUNCTION FUN_008746b0 @ 008746b0 ////

int * __fastcall FUN_008746b0(int *param_1)

{
  FUN_00874020(param_1);
  return param_1;
}


//// FUNCTION FUN_008746c0 @ 008746c0 ////

int * __fastcall FUN_008746c0(int *param_1)

{
  FUN_00873fc0(param_1);
  return param_1;
}


//// FUNCTION FUN_00874750 @ 00874750 ////

void __fastcall FUN_00874750(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x40) != param_1 + 0x4c) {
    do {
      piVar1 = *(int **)(param_1 + 0x40);
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
    } while (*(int *)(param_1 + 0x40) != param_1 + 0x4c);
  }
  if (*(int *)(param_1 + 0x74) != param_1 + 0x80) {
    do {
      piVar1 = *(int **)(param_1 + 0x74);
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
    } while (*(int *)(param_1 + 0x74) != param_1 + 0x80);
  }
  return;
}


//// FUNCTION FUN_00874840 @ 00874840 ////

void __fastcall FUN_00874840(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d637f0;
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


//// FUNCTION FUN_008748e0 @ 008748e0 ////

void __fastcall FUN_008748e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d63800;
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


//// FUNCTION FUN_00874960 @ 00874960 ////

void __thiscall FUN_00874960(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d63810;
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


//// FUNCTION FUN_008749b0 @ 008749b0 ////

void __fastcall FUN_008749b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d63810;
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


//// FUNCTION FUN_00874ac0 @ 00874ac0 ////

void FUN_00874ac0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00874ac0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00874b00 @ 00874b00 ////

int * __fastcall FUN_00874b00(int *param_1)

{
  FUN_00873eb0(param_1);
  return param_1;
}


//// FUNCTION FUN_00874b10 @ 00874b10 ////

int * __fastcall FUN_00874b10(int *param_1)

{
  FUN_00873e50(param_1);
  return param_1;
}


//// FUNCTION FUN_00874b20 @ 00874b20 ////

undefined4 * __thiscall FUN_00874b20(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
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
LAB_00874b64:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00874b69;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00874b64;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00874b69:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x29) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_00874ba0 @ 00874ba0 ////

int * __fastcall FUN_00874ba0(int *param_1)

{
  FUN_00874020(param_1);
  return param_1;
}


//// FUNCTION FUN_00874bb0 @ 00874bb0 ////

int * __fastcall FUN_00874bb0(int *param_1)

{
  FUN_00873fc0(param_1);
  return param_1;
}


//// FUNCTION FUN_00874bc0 @ 00874bc0 ////

void FUN_00874bc0(void)

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


//// FUNCTION FUN_00874c10 @ 00874c10 ////

void FUN_00874c10(void)

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


//// FUNCTION FUN_00874c50 @ 00874c50 ////

void FUN_00874c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_00874d30 @ 00874d30 ////

void __fastcall FUN_00874d30(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce97d9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d63820;
  local_4 = 3;
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b] = param_1[0x1a];
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1b];
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  puVar2 = (undefined4 *)param_1[0x13];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xe] + 4))();
    param_1[0x13] = 0;
    (**(code **)param_1[0xe])();
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b] = param_1[0x1a];
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1b];
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = &PTR_LAB_00d63800;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16] = param_1[0x15];
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x16];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16] = param_1[0x15];
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x16];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0xe] = &PTR_FUN_00d637f0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1[0xf] + 4) = param_1[0x10];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1[0xf] + 4) = param_1[0x10];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00874e80 @ 00874e80 ////

void __fastcall FUN_00874e80(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00d63800;
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


//// FUNCTION FUN_00874ee0 @ 00874ee0 ////

void __thiscall FUN_00874ee0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  
  cVar5 = '\0';
  if (param_1 != 0) {
    for (piVar1 = *(int **)((int)this + 0x74);
        (piVar1 != (int *)((int)this + 0x80) && (piVar1[2] != param_1)); piVar1 = (int *)piVar1[1])
    {
    }
    for (iVar2 = *(int *)((int)this + 0x40);
        (iVar2 != (int)this + 0x4c && (*(int *)(iVar2 + 8) != param_1)); iVar2 = *(int *)(iVar2 + 4)
        ) {
    }
    if (piVar1 != (int *)((int)this + 0x80)) {
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      cVar5 = '\x01';
    }
    if (iVar2 == (int)this + 0x4c) {
      piVar4 = (int *)((int)this + 0x4c);
      piVar1 = (int *)(param_1 + 0x68);
      *(int **)(param_1 + 0x6c) = piVar4;
      *piVar1 = *piVar4;
      *(int **)(*piVar4 + 4) = piVar1;
      *piVar4 = (int)piVar1;
      cVar5 = cVar5 + '\x01';
    }
    if (cVar5 == '\x02') {
      puVar3 = *(undefined4 **)(param_1 + 0x4c);
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00874f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)();
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00874f90 @ 00874f90 ////

void __fastcall FUN_00874f90(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0x178), iVar1 != 0)) {
    FUN_0087d380(iVar1);
  }
  if (*(void **)(param_1 + 100) != (void *)0x0) {
    FUN_00874ee0(*(void **)(param_1 + 100),param_1);
  }
  return;
}


//// FUNCTION FUN_00874fc0 @ 00874fc0 ////

void __fastcall FUN_00874fc0(int param_1)

{
  FUN_00874ac0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00874ff0 @ 00874ff0 ////

void __thiscall FUN_00874ff0(void *this,undefined4 *param_1,int param_2)

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
  *(undefined4 *)((int)this + 4) = &PTR_LAB_00d63800;
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


//// FUNCTION FUN_00875070 @ 00875070 ////

void __fastcall FUN_00875070(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00874bc0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008750b0 @ 008750b0 ////

void __fastcall FUN_008750b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00874c10();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_008750f0 @ 008750f0 ////

void __thiscall
FUN_008750f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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
  *(undefined4 *)((int)this + 0x10) = &PTR_LAB_00d63800;
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


//// FUNCTION FUN_00875160 @ 00875160 ////

void __fastcall FUN_00875160(int param_1)

{
  FUN_00874e80(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_00875170 @ 00875170 ////

undefined4 * __thiscall FUN_00875170(void *this,byte param_1)

{
  FUN_00874d30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008751f0 @ 008751f0 ////

int __fastcall FUN_008751f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00874bc0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00875220 @ 00875220 ////

int __fastcall FUN_00875220(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00874c10();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00875250 @ 00875250 ////

void * FUN_00875250(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_008750f0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00875290 @ 00875290 ////

void * __thiscall FUN_00875290(void *this,byte param_1)

{
  FUN_00875160((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008752d0 @ 008752d0 ////

void FUN_008752d0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_008752d0(*(void **)((int)param_1 + 8));
    FUN_00875160((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00875310 @ 00875310 ////

void __fastcall FUN_00875310(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d63828;
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


//// FUNCTION FUN_00875360 @ 00875360 ////

void __thiscall FUN_00875360(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce97f8;
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
  FUN_00873eb0((int *)&param_2);
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
      goto LAB_008754cb;
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
      piVar2 = (int *)FUN_00873b70(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_00873b50((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_008754cb:
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
            FUN_00874440(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_00873bb0(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_00874440(this,(int)piVar6);
              break;
            }
LAB_00875598:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_00873bb0(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_00875598;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_00874440(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_00873bb0(this,piVar6);
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
  _Memory[4] = (int)&PTR_LAB_00d63800;
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


//// FUNCTION FUN_00875670 @ 00875670 ////

undefined4 * __thiscall FUN_00875670(void *this,byte param_1)

{
  FUN_00875310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00875690 @ 00875690 ////

void __thiscall
FUN_00875690(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9818;
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
  piVar3 = FUN_00875250(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0087578b:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00874440(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_00873bb0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_0087578b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00873bb0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_00874440(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION FUN_00875840 @ 00875840 ////

void __thiscall
FUN_00875840(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9838;
  *unaff_FS_OFFSET = &local_c;
  if (0x1ffffffd < *(uint *)((int)this + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    FUN_00405d50(local_50,(undefined4 *)"map/set<T> too long",0x13);
    local_4 = 0;
    FUN_00405f00(local_34,local_50);
    local_34[0] = &PTR_FUN_00d16794;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_00ddceb4);
  }
  piVar3 = (int *)FUN_00874c50(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
      *unaff_FS_OFFSET = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[5] == '\0') {
LAB_0087593b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008745f0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_00874650(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0087593b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00874650(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_008745f0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_008759f0 @ 008759f0 ////

void __fastcall FUN_008759f0(int param_1)

{
  FUN_008752d0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00875a20 @ 00875a20 ////

void __thiscall FUN_00875a20(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9858;
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
  FUN_00874020((int *)&param_2);
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
      goto LAB_00875b91;
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
      piVar2 = (int *)FUN_00873f90(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_00873f70((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00875b91:
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
            FUN_008745f0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00874650(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_008745f0(this,(int)piVar5);
              break;
            }
LAB_00875c54:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00874650(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_00875c54;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_008745f0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00874650(this,piVar5);
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


//// FUNCTION FUN_00875ce0 @ 00875ce0 ////

void __fastcall FUN_00875ce0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d63834;
  FUN_00875310(param_1 + 0x1b);
  FUN_00875310(param_1 + 0xe);
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_00875d10 @ 00875d10 ////

void __thiscall FUN_00875d10(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x29) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00875d74:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00875d79;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00875d74;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00875d79:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x29) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_00875690(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00873e50((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00852b60(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00875690(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00875e30 @ 00875e30 ////

void __thiscall FUN_00875e30(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008752d0((void *)piVar6[1]);
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
    FUN_00875360(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00875ef0 @ 00875ef0 ////

void __thiscall FUN_00875ef0(void *this,undefined4 *param_1,int *param_2)

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
      puVar4 = (undefined4 *)FUN_00875840(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00873fc0((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_00875840(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00875fb0 @ 00875fb0 ////

void __thiscall FUN_00875fb0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00874ac0((void *)piVar6[1]);
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
    FUN_00875a20(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00876070 @ 00876070 ////

undefined4 * __thiscall FUN_00876070(void *this,byte param_1)

{
  FUN_00875ce0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008760c0 @ 008760c0 ////

undefined4 * __thiscall FUN_008760c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00875840(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00875840(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_00875840(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_00873fc0((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00875840(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_00875840(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_00874020((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_00875840(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_00875840(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_00875ef0(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_00876290 @ 00876290 ////

int * __thiscall FUN_00876290(void *this,int *param_1)

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
  piVar3 = FUN_008760c0(this,&param_1,piVar3,local_8);
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_00876340 @ 00876340 ////

void __fastcall FUN_00876340(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00875e30(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00876370 @ 00876370 ////

void __fastcall FUN_00876370(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00875fb0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_008763a0 @ 008763a0 ////

void __fastcall FUN_008763a0(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce988e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6383c;
  local_4 = 2;
  if (param_1[0x1b] != 0) {
    if (*(int *)(*(int *)param_1[0x1a] + 0x24) != 0) {
      FUN_00874750(*(int *)(*(int *)param_1[0x1a] + 0x24));
    }
    if (*(undefined4 **)(*(int *)param_1[0x1a] + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(*(int *)param_1[0x1a] + 0x24))(1);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(*(int *)param_1[0x1a] + 0xc));
  }
  local_4 = 1;
  FUN_00875fb0(param_1 + 0x1c,&local_10,*(int **)param_1[0x1d],(int *)param_1[0x1d]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1d]);
}


//// FUNCTION FUN_008764b0 @ 008764b0 ////

void __thiscall FUN_008764b0(void *this,undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 *_Memory;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *local_130;
  uint local_12c;
  uint local_128;
  char local_124 [20];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce98b6;
  local_c = ExceptionList;
  if (*(void **)((int)this + 0x50) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x50));
  }
  ExceptionList = &local_c;
  FUN_00874ac0(*(void **)(*(int *)((int)this + 0x74) + 4));
  *(int *)(*(int *)((int)this + 0x74) + 4) = *(int *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x74);
  *(int *)(*(int *)((int)this + 0x74) + 8) = *(int *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xffffffff;
  *(undefined4 *)((int)this + 0x5c) = 0;
  _sprintf(local_110,"data\\ui\\flash\\%s.vtx",param_1);
  local_130 = local_124;
  pcVar4 = local_110;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(local_110 + 1);
  if (0x13 < uVar5) {
    local_128 = uVar5 + 0x20 & 0xffffffe0;
    local_130 = _malloc(local_128);
  }
  _strncpy(local_130,local_110,uVar5);
  local_130[uVar5] = '\0';
  local_4 = 0;
  local_12c = uVar5;
  uVar5 = FUN_009d3720(&local_130);
  local_4 = 0xffffffff;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  if (uVar5 == 0) {
    ExceptionList = local_c;
    return;
  }
  _Memory = operator_new(uVar5);
  puVar7 = _Memory;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  local_130 = local_124;
  pcVar4 = local_110;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar6 = (int)pcVar4 - (int)(local_110 + 1);
  if (0x13 < uVar6) {
    local_128 = uVar6 + 0x20 & 0xffffffe0;
    local_130 = _malloc(local_128);
  }
  _strncpy(local_130,local_110,uVar6);
  local_130[uVar6] = '\0';
  local_4 = 1;
  local_12c = uVar6;
  FUN_009d3ca0(&local_130,_Memory,uVar5,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  iVar3 = *(int *)((int)this + 0x60);
  *(int *)((int)this + 0x60) = iVar3 + 6;
  *(undefined4 **)((int)this + 0x50) = _Memory;
  bVar2 = *(byte *)(iVar3 + 2 + (int)_Memory);
  uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 5 + (int)_Memory),
                                     *(undefined1 *)(iVar3 + 4 + (int)_Memory)),
                            *(undefined1 *)(iVar3 + 3 + (int)_Memory)),bVar2);
  *(int *)((int)this + 0x60) = iVar3 + 8;
  if ((int)(uVar5 - 8) < (int)uVar6) {
    *(undefined4 *)((int)this + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  puVar7 = _Memory + 2;
  puVar8 = _Memory;
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = bVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_008767b0 @ 008767b0 ////

undefined4 __thiscall FUN_008767b0(void *this,int param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  if (param_1 != *(int *)((int)this + 0x58)) {
    *(int *)((int)this + 0x58) = param_1;
    piVar2 = FUN_00876290((void *)((int)this + 0x70),(int *)((int)this + 0x58));
    *(int *)((int)this + 0x5c) = *piVar2;
  }
  puVar1 = (undefined2 *)(*(int *)((int)this + 0x5c) + 6 + *(int *)((int)this + 0x54));
  return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
}


//// FUNCTION FUN_00876800 @ 00876800 ////

undefined4 __thiscall FUN_00876800(void *this,int param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  if (param_1 != *(int *)((int)this + 0x58)) {
    *(int *)((int)this + 0x58) = param_1;
    piVar2 = FUN_00876290((void *)((int)this + 0x70),(int *)((int)this + 0x58));
    *(int *)((int)this + 0x5c) = *piVar2;
  }
  puVar1 = (undefined2 *)(*(int *)((int)this + 0x5c) + 4 + *(int *)((int)this + 0x54));
  return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
}


//// FUNCTION FUN_00876850 @ 00876850 ////

int __thiscall FUN_00876850(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  if (param_1 != *(int *)((int)this + 0x58)) {
    *(int *)((int)this + 0x58) = param_1;
    piVar1 = FUN_00876290((void *)((int)this + 0x70),(int *)((int)this + 0x58));
    *(int *)((int)this + 0x5c) = *piVar1;
  }
  return *(int *)((int)this + 0x5c) + 8 + *(int *)((int)this + 0x54);
}


//// FUNCTION FUN_00876890 @ 00876890 ////

int __thiscall FUN_00876890(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x54) == 0) {
    return 0;
  }
  if (param_1 != *(int *)((int)this + 0x58)) {
    *(int *)((int)this + 0x58) = param_1;
    piVar1 = FUN_00876290((void *)((int)this + 0x70),(int *)((int)this + 0x58));
    *(int *)((int)this + 0x5c) = *piVar1;
  }
  uVar2 = FUN_00876800(this,param_1);
  return *(int *)((int)this + 0x5c) + (uVar2 & 0xffff) * 0x18 + 8 + *(int *)((int)this + 0x54);
}


//// FUNCTION FUN_008768e0 @ 008768e0 ////

void __fastcall FUN_008768e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d63828;
  return;
}


//// FUNCTION FUN_00876940 @ 00876940 ////

int __fastcall FUN_00876940(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00874bc0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00876970 @ 00876970 ////

int __fastcall FUN_00876970(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00874c10();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008769a0 @ 008769a0 ////

undefined4 * __fastcall FUN_008769a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce991f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d63834;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar1 = param_1 + 0x13;
  param_1[0x15] = 0;
  *puVar1 = 0;
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0xe] = &PTR_LAB_00d63828;
  param_1[0x10] = puVar1;
  *puVar1 = param_1 + 0xf;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar1 = param_1 + 0x20;
  param_1[0x22] = 0;
  *puVar1 = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1d] = puVar1;
  *puVar1 = param_1 + 0x1c;
  param_1[0x1b] = &PTR_LAB_00d63828;
  param_1[0x28] = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00876a50 @ 00876a50 ////

undefined4 * __fastcall FUN_00876a50(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9943;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6383c;
  iVar1 = FUN_00874bc0();
  param_1[0x1a] = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1a];
  *(undefined4 *)param_1[0x1a] = param_1[0x1a];
  *(undefined4 *)(param_1[0x1a] + 8) = param_1[0x1a];
  param_1[0x1b] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_00874c10();
  param_1[0x1d] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1d];
  *(undefined4 *)param_1[0x1d] = param_1[0x1d];
  *(undefined4 *)(param_1[0x1d] + 8) = param_1[0x1d];
  param_1[0x1e] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00876b00 @ 00876b00 ////

undefined4 * __thiscall FUN_00876b00(void *this,byte param_1)

{
  FUN_008763a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00876b20 @ 00876b20 ////

undefined4 * __thiscall FUN_00876b20(void *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *local_50;
  undefined4 *local_4c;
  void *local_48 [2];
  undefined **local_40;
  int local_3c;
  int *local_38;
  undefined ***local_34;
  undefined4 *local_2c;
  undefined1 local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce996b;
  local_c = ExceptionList;
  local_48[0] = (void *)((int)this + 100);
  ExceptionList = &local_c;
  local_50 = FUN_00874b20(local_48[0],&param_1);
  puVar4 = *(undefined4 **)((int)this + 0x68);
  if (local_50 != puVar4) {
    uVar2 = FUN_00852b60(&param_1,local_50 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &local_50;
      goto LAB_00876b7d;
    }
  }
  local_4c = puVar4;
  ppuVar3 = &local_4c;
LAB_00876b7d:
  if (*ppuVar3 == *(undefined4 **)((int)this + 0x68)) {
    local_4c = operator_new(0xa4);
    local_4 = 0;
    if (local_4c == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_008769a0(local_4c);
    }
    pcVar8 = param_1;
    local_4 = 0xffffffff;
    if (param_1 == (char *)0x0) {
      iVar5 = 0;
    }
    else {
      pcVar6 = param_1;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar5 = (int)pcVar6 - (int)(param_1 + 1);
    }
    param_1 = operator_new(iVar5 + 1);
    iVar5 = (int)param_1 - (int)pcVar8;
    do {
      cVar1 = *pcVar8;
      pcVar8[iVar5] = cVar1;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_34 = &local_40;
    local_3c = 0;
    local_38 = (int *)0x0;
    local_40 = &PTR_LAB_00d63800;
    if (puVar4 != (undefined4 *)0x0) {
      local_38 = puVar4 + 6;
      local_3c = *local_38;
      *(int **)(*local_38 + 4) = &local_3c;
      *local_38 = (int)&local_3c;
    }
    local_4 = 1;
    local_2c = puVar4;
    puVar7 = (undefined4 *)FUN_00874ff0(local_28,&param_1,(int)&local_40);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00875d10(local_48[0],local_48,puVar7);
    FUN_00874e80((int)local_28);
    FUN_008748e0(&local_40);
    ExceptionList = local_c;
    return puVar4;
  }
  ExceptionList = local_c;
  return (undefined4 *)(*ppuVar3)[9];
}


//// FUNCTION FUN_00876cb0 @ 00876cb0 ////

undefined4 * __thiscall FUN_00876cb0(void *this,int param_1,int param_2)

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
  puStack_8 = &LAB_00ce99a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d63820;
  piVar1 = (int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x44) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 **)((int)this + 0x44) = (undefined4 *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x38) = &PTR_FUN_00d637f0;
  *(int *)((int)this + 0x4c) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x40) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 **)((int)this + 0x5c) = (undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x50) = &PTR_LAB_00d63800;
  *(int *)((int)this + 100) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x58) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  local_4 = 3;
  *(void **)((int)this + 0x70) = this;
  FUN_00acdb9e(0xe5e428);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x74) = iVar3;
  if (s___AVSWFCache_TM___00e5e414[0x12] != '\0') {
    iVar3 = 0x68;
    pcVar5 = "ItemLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe5e428);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s___AVSWFCache_TM___00e5e414[0x12] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00876dd0 @ 00876dd0 ////

int __thiscall FUN_00876dd0(void *this,int param_1,uint *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  undefined1 local_494 [1144];
  uint local_1c;
  void *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce99d9;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)0x0;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    ExceptionList = &local_c;
    FUN_00890510((int)local_494);
    local_4 = 0;
    if (*(int *)((int)this + 0x50) != 0) {
      local_18 = this;
    }
    if (param_3 != '\0') {
      local_1c = local_1c | 4;
    }
    iVar3 = FUN_0089da10(local_494,param_2,0,1,1);
    if (iVar3 != 0) {
      this_00 = operator_new(0x78);
      local_4._0_1_ = 1;
      if (this_00 != (void *)0x0) {
        puVar4 = FUN_00876cb0(this_00,iVar3,param_1);
      }
      *(undefined1 *)(iVar3 + 0x240) = 1;
      local_4 = (uint)local_4._1_3_ << 8;
      (**(code **)(*(int *)(iVar3 + 0x194) + 4))();
      *(undefined4 **)(iVar3 + 0x1a8) = puVar4;
      (*(code *)**(undefined4 **)(iVar3 + 0x194))();
      piVar1 = puVar4 + 0x1a;
      piVar2 = (int *)(param_1 + 0x4c);
      puVar4[0x1b] = piVar2;
      *piVar1 = *piVar2;
      *(int **)(*piVar2 + 4) = piVar1;
      *piVar2 = (int)piVar1;
    }
    local_4 = 0xffffffff;
    FUN_00890570((int)local_494);
  }
  ExceptionList = local_c;
  return iVar3;
}


//// FUNCTION FUN_00876ee0 @ 00876ee0 ////

int __thiscall FUN_00876ee0(void *this,char *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce99f8;
  local_c = ExceptionList;
  local_4c = (uint *)local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_4c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  uVar4 = FUN_00413450(&local_4c,".",0,1);
  puVar5 = FUN_00430770(&local_4c,local_2c,0,uVar4);
  FUN_004015d0(&local_4c,(char *)*puVar5,puVar5[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  iVar6 = FUN_00448220(&local_4c,&DAT_00d24480,0,2);
  iVar7 = iVar6;
  while (iVar2 = iVar6, iVar2 != -1) {
    iVar6 = FUN_00448220(&local_4c,&DAT_00d24480,iVar2 + 1,2);
    iVar7 = iVar2;
  }
  puVar5 = FUN_00430770(&local_4c,local_2c,iVar7 + 1,0xffffffff);
  FUN_004015d0(&local_4c,(char *)*puVar5,puVar5[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  puVar5 = FUN_00876b20(this,(char *)local_4c);
  iVar7 = 0;
  if ((puVar5 != (undefined4 *)0x0) && (iVar7 = FUN_00874220((int)puVar5), iVar7 == 0)) {
    FUN_00876dd0(this,(int)puVar5,local_4c,param_2);
    iVar7 = FUN_00874220((int)puVar5);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return iVar7;
}


//// FUNCTION FUN_00877090 @ 00877090 ////

undefined4 __thiscall FUN_00877090(void *this,uint *param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_00876b20(this,(char *)param_1);
  iVar2 = FUN_008764b0(this,param_1);
  if (0 < param_2) {
    do {
      iVar2 = FUN_00876dd0(this,(int)puVar1,param_1,param_3);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_008770e0 @ 008770e0 ////

void FUN_008770e0(void)

{
  uint _Count;
  char *_Source;
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint *puStack_188;
  uint uStack_184;
  uint uStack_180;
  undefined1 auStack_17c [20];
  undefined4 *local_168;
  char *pcStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  char acStack_158 [20];
  char *pcStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  char acStack_138 [20];
  char *pcStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  char acStack_118 [20];
  void *apvStack_104 [2];
  uint uStack_fc;
  undefined4 auStack_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9a60;
  local_c = ExceptionList;
  if (DAT_01050174 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    local_168 = operator_new(0x7c);
    local_4 = 0;
    if (local_168 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00876a50(local_168);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_01050160[1])();
    DAT_01050174 = puVar2;
    (*(code *)*DAT_01050160)();
    puStack_188 = (uint *)auStack_17c;
    auStack_17c[0] = 0;
    uStack_184 = 0;
    uStack_180 = 0x14;
    _strncpy((char *)puStack_188,"swfcache",8);
    uStack_184 = 8;
    *(char *)(puStack_188 + 2) = '\0';
    local_4 = 1;
    FUN_0055c540(auStack_e4,&puStack_188);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0x14 < uStack_180) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_188);
    }
    cVar1 = FUN_00558bb0(auStack_e4,0);
    if (cVar1 != '\0') {
      puStack_188 = (uint *)auStack_17c;
      auStack_17c[0] = 0;
      uStack_184 = 0;
      uStack_180 = 0x14;
      do {
        pcStack_124 = acStack_118;
        acStack_118[0] = '\0';
        uStack_120 = 0;
        uStack_11c = 0x14;
        _strncpy(pcStack_124,"name",4);
        uStack_120 = 4;
        pcStack_124[4] = '\0';
        local_4 = CONCAT31(local_4._1_3_,5);
        puVar2 = FUN_005584e0(auStack_e4,apvStack_104,&pcStack_124);
        _Count = puVar2[1];
        _Source = (char *)*puVar2;
        if (uStack_180 <= _Count) {
          if (0x14 < uStack_180) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_188);
          }
          uStack_180 = _Count + 0x20 & 0xffffffe0;
          puStack_188 = _malloc(uStack_180);
        }
        _strncpy((char *)puStack_188,_Source,_Count);
        *(char *)(_Count + (int)puStack_188) = '\0';
        uStack_184 = _Count;
        if (0x14 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_104[0]);
        }
        if (0x14 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_124);
        }
        pcStack_164 = acStack_158;
        acStack_158[0] = '\0';
        uStack_160 = 0;
        uStack_15c = 0x14;
        _strncpy(pcStack_164,"number",6);
        uStack_160 = 6;
        pcStack_164[6] = '\0';
        local_4._0_1_ = 6;
        iVar3 = FUN_00558750(auStack_e4,&pcStack_164,0);
        if (0x14 < uStack_15c) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_164);
        }
        pcStack_144 = acStack_138;
        acStack_138[0] = '\0';
        uStack_140 = 0;
        uStack_13c = 0x14;
        _strncpy(pcStack_144,"is3d",4);
        uStack_140 = 4;
        pcStack_144[4] = '\0';
        local_4._0_1_ = 7;
        iVar4 = FUN_00558750(auStack_e4,&pcStack_144,0);
        local_4 = CONCAT31(local_4._1_3_,4);
        if (0x14 < uStack_13c) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_144);
        }
        local_168 = (undefined4 *)&stack0xfffffe5c;
        FUN_00877090(DAT_01050174,puStack_188,iVar3,iVar4 != 0);
        cVar1 = FUN_00558bb0(auStack_e4,2);
      } while (cVar1 != '\0');
      if (0x14 < uStack_180) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_188);
      }
    }
    local_4 = 0xffffffff;
    FUN_00558920(auStack_e4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00877540 @ 00877540 ////

void __cdecl FUN_00877540(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x45);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x45);
  }
  return;
}


//// FUNCTION FUN_00877560 @ 00877560 ////

void __cdecl FUN_00877560(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x45);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return;
}


//// FUNCTION FUN_008775a0 @ 008775a0 ////

void __thiscall FUN_008775a0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x45) == '\0') {
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


//// FUNCTION FUN_00877740 @ 00877740 ////

void __cdecl FUN_00877740(int param_1)

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


//// FUNCTION FUN_00877760 @ 00877760 ////

void __cdecl FUN_00877760(int *param_1)

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


//// FUNCTION FUN_008777a0 @ 008777a0 ////

void __thiscall FUN_008777a0(void *this,int *param_1)

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


//// FUNCTION FUN_00877890 @ 00877890 ////

void __cdecl FUN_00877890(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x45);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x45);
  }
  return;
}


//// FUNCTION FUN_008778b0 @ 008778b0 ////

void __cdecl FUN_008778b0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x45);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return;
}


//// FUNCTION FUN_008778f0 @ 008778f0 ////

void __thiscall FUN_008778f0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x45) == '\0') {
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


//// FUNCTION FUN_00877f20 @ 00877f20 ////

void __fastcall FUN_00877f20(int *param_1)

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


//// FUNCTION FUN_00877f90 @ 00877f90 ////

void __fastcall FUN_00877f90(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x45);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x45);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x45);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x45);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00878010 @ 00878010 ////

void __fastcall FUN_00878010(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x45) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x45);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x45);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x45) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x45) == '\0');
    if (*(char *)((int)piVar4 + 0x45) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00878070 @ 00878070 ////

void __fastcall FUN_00878070(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x45);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x45);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x45);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x45);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00878150 @ 00878150 ////

void __cdecl FUN_00878150(int param_1)

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


//// FUNCTION FUN_00878170 @ 00878170 ////

void __cdecl FUN_00878170(int *param_1)

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


//// FUNCTION FUN_00878190 @ 00878190 ////

void __cdecl FUN_00878190(int param_1)

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


//// FUNCTION FUN_008781b0 @ 008781b0 ////

void __cdecl FUN_008781b0(int *param_1)

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


//// FUNCTION FUN_008781d0 @ 008781d0 ////

void __cdecl FUN_008781d0(int param_1)

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


//// FUNCTION FUN_008781f0 @ 008781f0 ////

void __cdecl FUN_008781f0(int *param_1)

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


//// FUNCTION FUN_00878230 @ 00878230 ////

void __cdecl FUN_00878230(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x51);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x51);
  }
  return;
}


//// FUNCTION FUN_00878250 @ 00878250 ////

void __cdecl FUN_00878250(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x51);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x51);
  }
  return;
}


//// FUNCTION FUN_00878270 @ 00878270 ////

void __fastcall FUN_00878270(int *param_1)

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


//// FUNCTION FUN_008782d0 @ 008782d0 ////

void __fastcall FUN_008782d0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x45) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x45);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x45);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x45) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x45) == '\0');
    if (*(char *)((int)piVar4 + 0x45) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008783a0 @ 008783a0 ////

void __fastcall FUN_008783a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x51) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x51) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x51);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x51);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x51);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x51);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00878400 @ 00878400 ////

void __fastcall FUN_00878400(int *param_1)

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


//// FUNCTION FUN_00878460 @ 00878460 ////

void __fastcall FUN_00878460(int *param_1)

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


//// FUNCTION FUN_008784c0 @ 008784c0 ////

void __fastcall FUN_008784c0(int *param_1)

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


//// FUNCTION FUN_00878860 @ 00878860 ////

void __fastcall FUN_00878860(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00878870 @ 00878870 ////

void FUN_00878870(int param_1,int param_2,void *param_3,undefined4 param_4,uint param_5)

{
  undefined2 in_stack_0000002c;
  undefined4 in_stack_00000030;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9a78;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)(param_1 + 0x1f0) + 4))();
    *(int *)(param_1 + 0x204) = param_2;
    (*(code *)**(undefined4 **)(param_1 + 0x1f0))();
    *(undefined4 *)(param_1 + 0x238) = 0;
    (**(code **)(**(int **)(param_1 + 0x204) + 0x20))(1);
    *(undefined2 *)(param_1 + 0x236) = in_stack_0000002c;
    *(undefined4 *)(param_1 + 600) = in_stack_00000030;
  }
  if (0x14 < param_5) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008789e0 @ 008789e0 ////

void __fastcall FUN_008789e0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00878a20 @ 00878a20 ////

void __thiscall FUN_00878a20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x45) == '\0') {
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


//// FUNCTION FUN_00878ad0 @ 00878ad0 ////

void __thiscall FUN_00878ad0(void *this,int param_1)

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


//// FUNCTION FUN_00878b40 @ 00878b40 ////

void __thiscall FUN_00878b40(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x45) == '\0') {
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


//// FUNCTION FUN_00878d00 @ 00878d00 ////

void __thiscall FUN_00878d00(void *this,int param_1)

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


//// FUNCTION FUN_00878d60 @ 00878d60 ////

void __thiscall FUN_00878d60(void *this,int *param_1)

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


//// FUNCTION FUN_00878e00 @ 00878e00 ////

void __thiscall FUN_00878e00(void *this,int param_1)

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


//// FUNCTION FUN_00878e60 @ 00878e60 ////

void __thiscall FUN_00878e60(void *this,int *param_1)

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


//// FUNCTION FUN_00878ee0 @ 00878ee0 ////

void __thiscall FUN_00878ee0(void *this,int param_1)

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


//// FUNCTION FUN_00878f40 @ 00878f40 ////

void __thiscall FUN_00878f40(void *this,int *param_1)

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


//// FUNCTION FUN_00878fe0 @ 00878fe0 ////

void __thiscall FUN_00878fe0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x51) == '\0') {
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


//// FUNCTION FUN_00879040 @ 00879040 ////

void __thiscall FUN_00879040(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x51) == '\0') {
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


//// FUNCTION FUN_008790c0 @ 008790c0 ////

int * __fastcall FUN_008790c0(int *param_1)

{
  FUN_00877f20(param_1);
  return param_1;
}


//// FUNCTION FUN_008790e0 @ 008790e0 ////

int * __fastcall FUN_008790e0(int *param_1)

{
  FUN_00877f90(param_1);
  return param_1;
}


//// FUNCTION FUN_008790f0 @ 008790f0 ////

int * __fastcall FUN_008790f0(int *param_1)

{
  FUN_00878070(param_1);
  return param_1;
}


//// FUNCTION FUN_00879100 @ 00879100 ////

int * __fastcall FUN_00879100(int *param_1)

{
  FUN_00878010(param_1);
  return param_1;
}


//// FUNCTION FUN_008791f0 @ 008791f0 ////

int * __fastcall FUN_008791f0(int *param_1)

{
  FUN_00878270(param_1);
  return param_1;
}


//// FUNCTION FUN_00879200 @ 00879200 ////

int * __fastcall FUN_00879200(int *param_1)

{
  FUN_008782d0(param_1);
  return param_1;
}


//// FUNCTION FUN_00879210 @ 00879210 ////

void __fastcall FUN_00879210(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x51) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x51) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x51);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x51);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x51) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x51) == '\0');
    if (*(char *)((int)piVar4 + 0x51) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00879270 @ 00879270 ////

void __fastcall FUN_00879270(int *param_1)

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


//// FUNCTION FUN_008792d0 @ 008792d0 ////

void __fastcall FUN_008792d0(int *param_1)

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


//// FUNCTION FUN_00879330 @ 00879330 ////

void __fastcall FUN_00879330(int *param_1)

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


//// FUNCTION FUN_00879520 @ 00879520 ////

undefined4 * __thiscall FUN_00879520(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00879560 @ 00879560 ////

int * __fastcall FUN_00879560(int *param_1)

{
  FUN_008783a0(param_1);
  return param_1;
}


//// FUNCTION FUN_00879570 @ 00879570 ////

int * __fastcall FUN_00879570(int *param_1)

{
  FUN_00878400(param_1);
  return param_1;
}


//// FUNCTION FUN_00879580 @ 00879580 ////

int * __fastcall FUN_00879580(int *param_1)

{
  FUN_00878460(param_1);
  return param_1;
}


//// FUNCTION FUN_00879590 @ 00879590 ////

int * __fastcall FUN_00879590(int *param_1)

{
  FUN_008784c0(param_1);
  return param_1;
}


//// FUNCTION FUN_008795a0 @ 008795a0 ////

void __fastcall FUN_008795a0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_008795c0 @ 008795c0 ////

void __fastcall FUN_008795c0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_008795e0 @ 008795e0 ////

bool FUN_008795e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = __stricmp((char *)*param_1,(char *)*param_2);
  return iVar1 < 0;
}


//// FUNCTION FUN_008796f0 @ 008796f0 ////

undefined4 * __thiscall FUN_008796f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00879760 @ 00879760 ////

void __fastcall FUN_00879760(undefined4 *param_1)

{
  param_1[8] = &PTR_FUN_00d637f0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_008797c0 @ 008797c0 ////

void __fastcall FUN_008797c0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d637f0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00879880 @ 00879880 ////

int * __fastcall FUN_00879880(int *param_1)

{
  FUN_00877f20(param_1);
  return param_1;
}


//// FUNCTION FUN_00879890 @ 00879890 ////

undefined4 * __thiscall FUN_00879890(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_008798d0 @ 008798d0 ////

int * __fastcall FUN_008798d0(int *param_1)

{
  FUN_00877f90(param_1);
  return param_1;
}


//// FUNCTION FUN_008798e0 @ 008798e0 ////

int * __fastcall FUN_008798e0(int *param_1)

{
  FUN_00878070(param_1);
  return param_1;
}


//// FUNCTION FUN_008798f0 @ 008798f0 ////

int * __fastcall FUN_008798f0(int *param_1)

{
  FUN_00878010(param_1);
  return param_1;
}


//// FUNCTION FUN_00879940 @ 00879940 ////

undefined4 * __thiscall FUN_00879940(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x45);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar3 = __stricmp((char *)puVar5[3],(char *)*param_1);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x45);
  }
  return puVar2;
}


//// FUNCTION FUN_00879990 @ 00879990 ////

undefined4 * __thiscall FUN_00879990(void *this,undefined4 *param_1)

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
LAB_008799d4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_008799d9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_008799d4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_008799d9:
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


//// FUNCTION FUN_00879a00 @ 00879a00 ////

undefined4 * __thiscall FUN_00879a00(void *this,undefined4 *param_1)

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
LAB_00879a44:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00879a49;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00879a44;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00879a49:
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


//// FUNCTION FUN_00879a70 @ 00879a70 ////

undefined4 * __thiscall FUN_00879a70(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x31);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar3 = __stricmp((char *)puVar5[3],(char *)*param_1);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x31);
  }
  return puVar2;
}


//// FUNCTION FUN_00879ac0 @ 00879ac0 ////

undefined4 * __thiscall FUN_00879ac0(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x45);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar3 = __stricmp((char *)puVar5[3],(char *)*param_1);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x45);
  }
  return puVar2;
}


//// FUNCTION FUN_00879b10 @ 00879b10 ////

undefined4 * __thiscall FUN_00879b10(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x51);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar3 = __stricmp((char *)puVar5[4],(char *)*param_1);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x51);
  }
  return puVar2;
}


//// FUNCTION FUN_00879b60 @ 00879b60 ////

int * __fastcall FUN_00879b60(int *param_1)

{
  FUN_00878270(param_1);
  return param_1;
}


//// FUNCTION FUN_00879b70 @ 00879b70 ////

int * __fastcall FUN_00879b70(int *param_1)

{
  FUN_008782d0(param_1);
  return param_1;
}


//// FUNCTION FUN_00879b80 @ 00879b80 ////

int * __fastcall FUN_00879b80(int *param_1)

{
  FUN_00879210(param_1);
  return param_1;
}


//// FUNCTION FUN_00879b90 @ 00879b90 ////

int * __fastcall FUN_00879b90(int *param_1)

{
  FUN_00879270(param_1);
  return param_1;
}


//// FUNCTION FUN_00879ba0 @ 00879ba0 ////

int * __fastcall FUN_00879ba0(int *param_1)

{
  FUN_008792d0(param_1);
  return param_1;
}


//// FUNCTION FUN_00879bb0 @ 00879bb0 ////

int * __fastcall FUN_00879bb0(int *param_1)

{
  FUN_00879330(param_1);
  return param_1;
}


//// FUNCTION FUN_00879bc0 @ 00879bc0 ////

void FUN_00879bc0(void)

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


//// FUNCTION FUN_00879c10 @ 00879c10 ////

void FUN_00879c10(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x11) = 1;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  return;
}


//// FUNCTION FUN_00879c60 @ 00879c60 ////

void FUN_00879c60(void)

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


//// FUNCTION FUN_00879cb0 @ 00879cb0 ////

void FUN_00879cb0(void)

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


//// FUNCTION FUN_00879d00 @ 00879d00 ////

void FUN_00879d00(void)

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


//// FUNCTION FUN_00879d50 @ 00879d50 ////

void FUN_00879d50(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x11) = 1;
  *(undefined1 *)((int)puVar1 + 0x45) = 0;
  return;
}


//// FUNCTION FUN_00879da0 @ 00879da0 ////

void FUN_00879da0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x14) = 1;
  *(undefined1 *)((int)puVar1 + 0x51) = 0;
  return;
}


//// FUNCTION FUN_00879e50 @ 00879e50 ////

undefined4 * __thiscall FUN_00879e50(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00879e90 @ 00879e90 ////

int * __fastcall FUN_00879e90(int *param_1)

{
  FUN_008783a0(param_1);
  return param_1;
}


//// FUNCTION FUN_00879ea0 @ 00879ea0 ////

int * __fastcall FUN_00879ea0(int *param_1)

{
  FUN_00878400(param_1);
  return param_1;
}


//// FUNCTION FUN_00879eb0 @ 00879eb0 ////

int * __fastcall FUN_00879eb0(int *param_1)

{
  FUN_00878460(param_1);
  return param_1;
}


//// FUNCTION FUN_00879ec0 @ 00879ec0 ////

int * __fastcall FUN_00879ec0(int *param_1)

{
  FUN_008784c0(param_1);
  return param_1;
}


//// FUNCTION FUN_00879ed0 @ 00879ed0 ////

undefined4 * __thiscall
FUN_00879ed0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00879f30 @ 00879f30 ////

undefined4 * __thiscall FUN_00879f30(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d637f0;
  iVar3 = param_1[0xd];
  *(int *)((int)this + 0x34) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x28) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return this;
}


//// FUNCTION FUN_00879fb0 @ 00879fb0 ////

void * __thiscall FUN_00879fb0(void *this,byte param_1)

{
  FUN_008795a0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00879fd0 @ 00879fd0 ////

void * __thiscall FUN_00879fd0(void *this,byte param_1)

{
  FUN_008795c0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00879ff0 @ 00879ff0 ////

void __fastcall FUN_00879ff0(int param_1)

{
  FUN_00879760((undefined4 *)(param_1 + 0xc));
  return;
}


//// FUNCTION FUN_0087a000 @ 0087a000 ////

undefined4 * __thiscall
FUN_0087a000(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9a98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  FUN_004340f0((int)this);
  *(undefined4 *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x18) = param_2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0087a070 @ 0087a070 ////

void __fastcall FUN_0087a070(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_0087a0c0 @ 0087a0c0 ////

void __fastcall FUN_0087a0c0(undefined4 *param_1)

{
  param_1[8] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0087a120 @ 0087a120 ////

void __fastcall FUN_0087a120(undefined4 *param_1)

{
  param_1[8] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0087a180 @ 0087a180 ////

void __fastcall FUN_0087a180(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_0087a1d0 @ 0087a1d0 ////

void __thiscall FUN_0087a1d0(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_0087a240 @ 0087a240 ////

undefined4 * __thiscall FUN_0087a240(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d18c2c;
  iVar3 = *(int *)(param_2 + 0x14);
  *(int *)((int)this + 0x34) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x28) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return this;
}


//// FUNCTION FUN_0087a430 @ 0087a430 ////

undefined4 * __thiscall FUN_0087a430(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d637f0;
  iVar3 = *(int *)(param_2 + 0x14);
  *(int *)((int)this + 0x34) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x28) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return this;
}


//// FUNCTION FUN_0087a4b0 @ 0087a4b0 ////

int * __fastcall FUN_0087a4b0(int *param_1)

{
  FUN_00879210(param_1);
  return param_1;
}


//// FUNCTION FUN_0087a4c0 @ 0087a4c0 ////

int * __fastcall FUN_0087a4c0(int *param_1)

{
  FUN_00879270(param_1);
  return param_1;
}


//// FUNCTION FUN_0087a4d0 @ 0087a4d0 ////

int * __fastcall FUN_0087a4d0(int *param_1)

{
  FUN_008792d0(param_1);
  return param_1;
}


//// FUNCTION FUN_0087a4e0 @ 0087a4e0 ////

int * __fastcall FUN_0087a4e0(int *param_1)

{
  FUN_00879330(param_1);
  return param_1;
}


//// FUNCTION FUN_0087a4f0 @ 0087a4f0 ////

void __fastcall FUN_0087a4f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879bc0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0087a530 @ 0087a530 ////

void __fastcall FUN_0087a530(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879c10();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0087a570 @ 0087a570 ////

void __fastcall FUN_0087a570(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879c60();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0087a5b0 @ 0087a5b0 ////

void __fastcall FUN_0087a5b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879cb0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0087a5f0 @ 0087a5f0 ////

void __fastcall FUN_0087a5f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879d00();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0087a630 @ 0087a630 ////

void __fastcall FUN_0087a630(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0087a670 @ 0087a670 ////

void __fastcall FUN_0087a670(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x51) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0087a6b0 @ 0087a6b0 ////

void * FUN_0087a6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00879ed0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0087a770 @ 0087a770 ////

undefined4 * __thiscall
FUN_0087a770(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_0087a820 @ 0087a820 ////

undefined4 * __thiscall FUN_0087a820(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d18c2c;
  iVar3 = param_1[0xd];
  *(int *)((int)this + 0x34) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x28) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return this;
}


//// FUNCTION FUN_0087a8a0 @ 0087a8a0 ////

undefined4 * __thiscall FUN_0087a8a0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d18c2c;
  iVar2 = param_1[0xd];
  *(int *)((int)this + 0x34) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x28) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  return this;
}


//// FUNCTION FUN_0087a970 @ 0087a970 ////

void * __thiscall FUN_0087a970(void *this,byte param_1)

{
  FUN_00879ff0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0087a990 @ 0087a990 ////

void __fastcall FUN_0087a990(int param_1)

{
  FUN_0087a120((undefined4 *)(param_1 + 0xc));
  return;
}


//// FUNCTION FUN_0087a9a0 @ 0087a9a0 ////

void __fastcall FUN_0087a9a0(int param_1)

{
  FUN_0087a0c0((undefined4 *)(param_1 + 0x10));
  return;
}


//// FUNCTION FUN_0087a9b0 @ 0087a9b0 ////

void __fastcall FUN_0087a9b0(int param_1)

{
  FUN_0087a180(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_0087a9c0 @ 0087a9c0 ////

void __thiscall FUN_0087a9c0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_00879940(this,param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    iVar2 = __stricmp((char *)*param_2,(char *)puVar1[3]);
    if (-1 < iVar2) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


//// FUNCTION FUN_0087aa20 @ 0087aa20 ////

void __thiscall FUN_0087aa20(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00879990(this,param_2);
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


//// FUNCTION FUN_0087aa80 @ 0087aa80 ////

void __thiscall FUN_0087aa80(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00879a00(this,param_2);
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


//// FUNCTION FUN_0087aae0 @ 0087aae0 ////

void __thiscall FUN_0087aae0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_00879a70(this,param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    iVar2 = __stricmp((char *)*param_2,(char *)puVar1[3]);
    if (-1 < iVar2) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


//// FUNCTION FUN_0087ab40 @ 0087ab40 ////

void __thiscall FUN_0087ab40(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_00879ac0(this,param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    iVar2 = __stricmp((char *)*param_2,(char *)puVar1[3]);
    if (-1 < iVar2) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


//// FUNCTION FUN_0087aba0 @ 0087aba0 ////

void __thiscall FUN_0087aba0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_00879b10(this,param_2);
  if (puVar1 != *(undefined4 **)((int)this + 4)) {
    iVar2 = __stricmp((char *)*param_2,(char *)puVar1[4]);
    if (-1 < iVar2) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return;
}


//// FUNCTION FUN_0087ac00 @ 0087ac00 ////

undefined4 * __thiscall FUN_0087ac00(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d18c2c;
  iVar2 = *(int *)(param_2 + 0x14);
  *(int *)((int)this + 0x34) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x28) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_2 + 0x1c);
  return this;
}


//// FUNCTION FUN_0087ac80 @ 0087ac80 ////

uint __cdecl FUN_0087ac80(undefined4 param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3 - (int)param_2;
  }
  iVar1 = iVar1 * 8;
  uVar2 = 0;
  do {
    iVar1 = iVar1 + -8;
    if (param_2 == (void *)0x0) {
      return uVar3;
    }
    if ((uint)(param_3 - (int)param_2) <= uVar2) break;
    uVar3 = uVar3 | (uint)*(byte *)((int)param_2 + uVar2) << ((byte)iVar1 & 0x1f);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (param_2 == (void *)0x0) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_0087ace0 @ 0087ace0 ////

int __fastcall FUN_0087ace0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879bc0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087ad10 @ 0087ad10 ////

int __fastcall FUN_0087ad10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879c10();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087ad40 @ 0087ad40 ////

int __fastcall FUN_0087ad40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879c60();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087ad70 @ 0087ad70 ////

int __fastcall FUN_0087ad70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879cb0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087ada0 @ 0087ada0 ////

int __fastcall FUN_0087ada0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879d00();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087ade0 @ 0087ade0 ////

int __fastcall FUN_0087ade0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087ae10 @ 0087ae10 ////

int __fastcall FUN_0087ae10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x51) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087ae40 @ 0087ae40 ////

void * FUN_0087ae40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_0087a770(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0087ae80 @ 0087ae80 ////

undefined4 *
FUN_0087ae80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_00879f30(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x11) = param_5;
    *(undefined1 *)((int)puVar1 + 0x45) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_0087aed0 @ 0087aed0 ////

void __thiscall
FUN_0087aed0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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
  *(undefined4 *)((int)this + 0x10) = &PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_0087afd0 @ 0087afd0 ////

void FUN_0087afd0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_0087afd0(*(void **)((int)param_1 + 8));
    FUN_008795a0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0087b020 @ 0087b020 ////

void * __thiscall FUN_0087b020(void *this,byte param_1)

{
  FUN_0087a990((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0087b040 @ 0087b040 ////

void * __thiscall FUN_0087b040(void *this,byte param_1)

{
  FUN_0087a9a0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0087b060 @ 0087b060 ////

void * __thiscall FUN_0087b060(void *this,byte param_1)

{
  FUN_0087a9b0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0087b080 @ 0087b080 ////

void __fastcall FUN_0087b080(undefined4 *param_1)

{
  if ((void *)param_1[9] != (void *)0x0) {
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


//// FUNCTION FUN_0087b0c0 @ 0087b0c0 ////

undefined4 __thiscall FUN_0087b0c0(void *this,undefined4 *param_1)

{
  FUN_0087aae0((void *)((int)this + 0x34),&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x38)) {
    return param_1[0xb];
  }
  return 0;
}


//// FUNCTION FUN_0087b0f0 @ 0087b0f0 ////

undefined4 __thiscall FUN_0087b0f0(void *this,undefined4 *param_1)

{
  FUN_0087ab40((void *)((int)this + 0x40),&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x44)) {
    return param_1[0x10];
  }
  return 0;
}


//// FUNCTION FUN_0087b120 @ 0087b120 ////

void __thiscall FUN_0087b120(void *this,undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_0087aa20((void *)((int)this + 0x1c),(int *)&param_1,param_1);
  puVar2 = param_1;
  if (param_1 != *(undefined4 **)((int)this + 0x20)) {
    FUN_0087a1d0((void *)((int)this + 4),&param_1,&param_3);
    if ((param_1 == *(undefined4 **)((int)this + 8)) || (param_1[9] != *(int *)(param_3 + 0x204))) {
      uVar4 = (*(code *)puVar2[0xb])(param_3,this);
      iVar3 = param_2;
      puVar1 = (undefined4 *)(param_2 + 0x1f0);
      (**(code **)(*(int *)(param_2 + 0x1f0) + 4))();
      puVar1 = (undefined4 *)*puVar1;
      *(undefined4 *)(iVar3 + 0x204) = uVar4;
      (*(code *)*puVar1)();
      *(undefined4 *)(iVar3 + 0x238) = puVar2[0xb];
      *(undefined4 *)(iVar3 + 600) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_0087b1b0 @ 0087b1b0 ////

undefined4 __thiscall FUN_0087b1b0(void *this,undefined4 *param_1)

{
  FUN_0087a9c0((void *)((int)this + 0x10),&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x14)) {
    return param_1[0x10];
  }
  return 0;
}


//// FUNCTION FUN_0087b1e0 @ 0087b1e0 ////

undefined4 * __thiscall FUN_0087b1e0(void *this,undefined4 *param_1)

{
  FUN_0087aba0((void *)((int)this + 0x4c),&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x50)) {
    return param_1 + 0xc;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0087b220 @ 0087b220 ////

void * FUN_0087b220(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_0087aed0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0087b260 @ 0087b260 ////

undefined4 *
FUN_0087b260(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0087a820(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x11) = param_5;
    *(undefined1 *)((int)puVar1 + 0x45) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_0087b2b0 @ 0087b2b0 ////

undefined4 *
FUN_0087b2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x58);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0087a8a0(puVar1 + 4,param_4);
    *(undefined1 *)(puVar1 + 0x14) = param_5;
    *(undefined1 *)((int)puVar1 + 0x51) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_0087b300 @ 0087b300 ////

void __fastcall FUN_0087b300(int param_1)

{
  FUN_0087afd0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0087b330 @ 0087b330 ////

void FUN_0087b330(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_0087b330(*(void **)((int)param_1 + 8));
    FUN_008795c0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0087b370 @ 0087b370 ////

void FUN_0087b370(void *param_1)

{
  if (*(char *)((int)param_1 + 0x45) == '\0') {
    FUN_0087b370(*(void **)((int)param_1 + 8));
    FUN_00879ff0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0087b3e0 @ 0087b3e0 ////

void __fastcall FUN_0087b3e0(int param_1)

{
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0087b440 @ 0087b440 ////

void __fastcall FUN_0087b440(int param_1)

{
  FUN_0087b330(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0087b470 @ 0087b470 ////

void __fastcall FUN_0087b470(int param_1)

{
  FUN_0087b370(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0087b4b0 @ 0087b4b0 ////

void FUN_0087b4b0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x45) == '\0') {
    FUN_0087b4b0(*(void **)((int)param_1 + 8));
    FUN_0087a990((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0087b4f0 @ 0087b4f0 ////

void * __thiscall FUN_0087b4f0(void *this,byte param_1)

{
  FUN_0087b3e0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0087b510 @ 0087b510 ////

void __thiscall FUN_0087b510(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9ab8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x45) != '\0') {
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
  FUN_00878070((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x45) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x45) == '\0') {
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
      iVar1 = param_2[0x11];
      *(char *)(param_2 + 0x11) = (char)_Memory[0x11];
      *(char *)(_Memory + 0x11) = (char)iVar1;
      goto LAB_0087b67b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x45) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x45) == '\0') {
      piVar2 = (int *)FUN_00877560(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x45) == '\0') {
      uVar3 = FUN_00877540((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_0087b67b:
  if ((char)_Memory[0x11] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[0x11] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar6 + 0x11) = 0;
            FUN_00878a20(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(*piVar4 + 0x44) != '\x01') || (*(char *)(piVar4[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x44) = 1;
                *(undefined1 *)(piVar4 + 0x11) = 0;
                FUN_008775a0(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 0x11) = (char)piVar6[0x11];
              *(undefined1 *)(piVar6 + 0x11) = 1;
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              FUN_00878a20(this,(int)piVar6);
              break;
            }
LAB_0087b748:
            *(undefined1 *)(piVar4 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar6 + 0x11) = 0;
            FUN_008775a0(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(piVar4[2] + 0x44) == '\x01') && (*(char *)(*piVar4 + 0x44) == '\x01'))
            goto LAB_0087b748;
            if (*(char *)(*piVar4 + 0x44) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              *(undefined1 *)(piVar4 + 0x11) = 0;
              FUN_00878a20(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 0x11) = (char)piVar6[0x11];
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(*piVar4 + 0x44) = 1;
            FUN_008775a0(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 0x11) = 1;
  }
  _Memory[0xb] = (int)&PTR_FUN_00d18c2c;
  if ((int *)_Memory[0xd] != (int *)0x0) {
    *(int *)_Memory[0xd] = _Memory[0xc];
  }
  if (_Memory[0xc] != 0) {
    *(int *)(_Memory[0xc] + 4) = _Memory[0xd];
  }
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  _Memory[0x10] = 0;
  if ((int *)_Memory[0xd] != (int *)0x0) {
    *(int *)_Memory[0xd] = _Memory[0xc];
  }
  if (_Memory[0xc] != 0) {
    *(int *)(_Memory[0xc] + 4) = _Memory[0xd];
  }
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_0087b830 @ 0087b830 ////

void __thiscall FUN_0087b830(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9ad8;
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
  FUN_00877f20((int *)&param_2);
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
      goto LAB_0087b9a1;
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
      piVar2 = (int *)FUN_00877760(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00877740((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0087b9a1:
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
            FUN_00878ad0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_008777a0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00878ad0(this,(int)piVar5);
              break;
            }
LAB_0087ba64:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_008777a0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_0087ba64;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00878ad0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_008777a0(this,piVar5);
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


//// FUNCTION FUN_0087bb00 @ 0087bb00 ////

void __thiscall FUN_0087bb00(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9af8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x45) != '\0') {
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
  FUN_00877f90((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x45) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x45) == '\0') {
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
      iVar1 = param_2[0x11];
      *(char *)(param_2 + 0x11) = (char)_Memory[0x11];
      *(char *)(_Memory + 0x11) = (char)iVar1;
      goto LAB_0087bc6b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x45) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x45) == '\0') {
      piVar2 = (int *)FUN_008778b0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x45) == '\0') {
      uVar3 = FUN_00877890((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_0087bc6b:
  if ((char)_Memory[0x11] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[0x11] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar6 + 0x11) = 0;
            FUN_00878b40(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(*piVar4 + 0x44) != '\x01') || (*(char *)(piVar4[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x44) = 1;
                *(undefined1 *)(piVar4 + 0x11) = 0;
                FUN_008778f0(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 0x11) = (char)piVar6[0x11];
              *(undefined1 *)(piVar6 + 0x11) = 1;
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              FUN_00878b40(this,(int)piVar6);
              break;
            }
LAB_0087bd38:
            *(undefined1 *)(piVar4 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar6 + 0x11) = 0;
            FUN_008778f0(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(piVar4[2] + 0x44) == '\x01') && (*(char *)(*piVar4 + 0x44) == '\x01'))
            goto LAB_0087bd38;
            if (*(char *)(*piVar4 + 0x44) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              *(undefined1 *)(piVar4 + 0x11) = 0;
              FUN_00878b40(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 0x11) = (char)piVar6[0x11];
            *(undefined1 *)(piVar6 + 0x11) = 1;
            *(undefined1 *)(*piVar4 + 0x44) = 1;
            FUN_008778f0(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 0x11) = 1;
  }
  _Memory[0xb] = (int)&PTR_FUN_00d637f0;
  if ((int *)_Memory[0xd] != (int *)0x0) {
    *(int *)_Memory[0xd] = _Memory[0xc];
  }
  if (_Memory[0xc] != 0) {
    *(int *)(_Memory[0xc] + 4) = _Memory[0xd];
  }
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  _Memory[0x10] = 0;
  if ((int *)_Memory[0xd] != (int *)0x0) {
    *(int *)_Memory[0xd] = _Memory[0xc];
  }
  if (_Memory[0xc] != 0) {
    *(int *)(_Memory[0xc] + 4) = _Memory[0xd];
  }
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_0087be20 @ 0087be20 ////

void __thiscall
FUN_0087be20(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9b18;
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
  piVar3 = FUN_0087b220(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0087bf1b:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00878d00(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_00878d60(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_0087bf1b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00878d60(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_00878d00(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION FUN_0087bfd0 @ 0087bfd0 ////

void __thiscall
FUN_0087bfd0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9b38;
  local_c = ExceptionList;
  if (0x4924922 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0087b260(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x44);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x44) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x11] == '\0') {
LAB_0087c0cb:
        *(undefined1 *)(*piVar4 + 0x44) = 1;
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x44) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00878a20(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x44) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x44) = 0;
        FUN_008775a0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x11] == '\0') goto LAB_0087c0cb;
      if (piVar6 == (int *)*piVar2) {
        FUN_008775a0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x44) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x44) = 0;
      FUN_00878a20(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x44);
  } while( true );
}


//// FUNCTION FUN_0087c180 @ 0087c180 ////

void __thiscall
FUN_0087c180(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9b58;
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
  piVar3 = FUN_0087ae40(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0087c27b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00878e00(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00878e60(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0087c27b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00878e60(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00878e00(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_0087c330 @ 0087c330 ////

void FUN_0087c330(void *param_1)

{
  if (*(char *)((int)param_1 + 0x51) == '\0') {
    FUN_0087c330(*(void **)((int)param_1 + 8));
    FUN_0087a9a0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0087c370 @ 0087c370 ////

void __thiscall
FUN_0087c370(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9b78;
  local_c = ExceptionList;
  if (0x3fffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0087b2b0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x50);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x50) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x14] == '\0') {
LAB_0087c46b:
        *(undefined1 *)(*piVar4 + 0x50) = 1;
        *(undefined1 *)(piVar5 + 0x14) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x50) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00878fe0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x50) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x50) = 0;
        FUN_00879040(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x14] == '\0') goto LAB_0087c46b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00879040(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x50) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x50) = 0;
      FUN_00878fe0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x50);
  } while( true );
}


//// FUNCTION FUN_0087c520 @ 0087c520 ////

void __thiscall FUN_0087c520(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0087afd0((void *)piVar6[1]);
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
    FUN_0087b830(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0087c5e0 @ 0087c5e0 ////

void __thiscall
FUN_0087c5e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9b98;
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
  piVar3 = FUN_0087a6b0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0087c6db:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00878ad0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_008777a0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0087c6db;
      if (piVar6 == (int *)*piVar2) {
        FUN_008777a0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00878ad0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_0087c790 @ 0087c790 ////

void __thiscall FUN_0087c790(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0087b370((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x45) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x45);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x45);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x45);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x45);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0087bb00(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0087c850 @ 0087c850 ////

void __thiscall
FUN_0087c850(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9bb8;
  local_c = ExceptionList;
  if (0x4924922 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0087ae80(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x44);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x44) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x11] == '\0') {
LAB_0087c94b:
        *(undefined1 *)(*piVar4 + 0x44) = 1;
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x44) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00878b40(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x44) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x44) = 0;
        FUN_008778f0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x11] == '\0') goto LAB_0087c94b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008778f0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x44) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x44) = 0;
      FUN_00878b40(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x44);
  } while( true );
}


//// FUNCTION FUN_0087ca00 @ 0087ca00 ////

void __thiscall FUN_0087ca00(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9bd8;
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
  FUN_008784c0((int *)&param_2);
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
      goto LAB_0087cb6b;
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
      piVar2 = (int *)FUN_00878170(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_00878150((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_0087cb6b:
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
            FUN_00878d00(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_00878d60(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_00878d00(this,(int)piVar6);
              break;
            }
LAB_0087cc38:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_00878d60(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_0087cc38;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_00878d00(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_00878d60(this,piVar6);
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
  _Memory[4] = (int)&PTR_FUN_00d18c2c;
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


//// FUNCTION FUN_0087cd10 @ 0087cd10 ////

void __fastcall FUN_0087cd10(int param_1)

{
  FUN_0087b4b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0087cd40 @ 0087cd40 ////

void __thiscall FUN_0087cd40(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9bf8;
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
  FUN_00878460((int *)&param_2);
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
      goto LAB_0087ceb1;
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
      piVar2 = (int *)FUN_008781b0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00878190((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0087ceb1:
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
            FUN_00878e00(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00878e60(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00878e00(this,(int)piVar5);
              break;
            }
LAB_0087cf74:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00878e60(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_0087cf74;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00878e00(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00878e60(this,piVar5);
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


//// FUNCTION FUN_0087d010 @ 0087d010 ////

void __thiscall FUN_0087d010(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9c18;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x51) != '\0') {
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
  FUN_008783a0((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x51) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x51) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x51) == '\0') {
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
      iVar1 = param_2[0x14];
      *(char *)(param_2 + 0x14) = (char)_Memory[0x14];
      *(char *)(_Memory + 0x14) = (char)iVar1;
      goto LAB_0087d17b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x51) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x51) == '\0') {
      piVar2 = (int *)FUN_00878250(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x51) == '\0') {
      uVar3 = FUN_00878230((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_0087d17b:
  if ((char)_Memory[0x14] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[0x14] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[0x14] == '\0') {
            *(undefined1 *)(piVar4 + 0x14) = 1;
            *(undefined1 *)(piVar6 + 0x14) = 0;
            FUN_00878fe0(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x51) == '\0') {
            if ((*(char *)(*piVar4 + 0x50) != '\x01') || (*(char *)(piVar4[2] + 0x50) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x50) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x50) = 1;
                *(undefined1 *)(piVar4 + 0x14) = 0;
                FUN_00879040(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 0x14) = (char)piVar6[0x14];
              *(undefined1 *)(piVar6 + 0x14) = 1;
              *(undefined1 *)(piVar4[2] + 0x50) = 1;
              FUN_00878fe0(this,(int)piVar6);
              break;
            }
LAB_0087d248:
            *(undefined1 *)(piVar4 + 0x14) = 0;
          }
        }
        else {
          if ((char)piVar4[0x14] == '\0') {
            *(undefined1 *)(piVar4 + 0x14) = 1;
            *(undefined1 *)(piVar6 + 0x14) = 0;
            FUN_00879040(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x51) == '\0') {
            if ((*(char *)(piVar4[2] + 0x50) == '\x01') && (*(char *)(*piVar4 + 0x50) == '\x01'))
            goto LAB_0087d248;
            if (*(char *)(*piVar4 + 0x50) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x50) = 1;
              *(undefined1 *)(piVar4 + 0x14) = 0;
              FUN_00878fe0(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 0x14) = (char)piVar6[0x14];
            *(undefined1 *)(piVar6 + 0x14) = 1;
            *(undefined1 *)(*piVar4 + 0x50) = 1;
            FUN_00879040(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 0x14) = 1;
  }
  _Memory[0xc] = (int)&PTR_FUN_00d18c2c;
  if ((int *)_Memory[0xe] != (int *)0x0) {
    *(int *)_Memory[0xe] = _Memory[0xd];
  }
  if (_Memory[0xd] != 0) {
    *(int *)(_Memory[0xd] + 4) = _Memory[0xe];
  }
  _Memory[0xd] = 0;
  _Memory[0xe] = 0;
  _Memory[0x11] = 0;
  if ((int *)_Memory[0xe] != (int *)0x0) {
    *(int *)_Memory[0xe] = _Memory[0xd];
  }
  if (_Memory[0xd] != 0) {
    *(int *)(_Memory[0xd] + 4) = _Memory[0xe];
  }
  _Memory[0xd] = 0;
  _Memory[0xe] = 0;
  if ((uint)_Memory[6] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[4]);
}


//// FUNCTION FUN_0087d330 @ 0087d330 ////

void FUN_0087d330(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_0087d330(*(void **)((int)param_1 + 8));
    FUN_0087a9b0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0087d380 @ 0087d380 ////

void __fastcall FUN_0087d380(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    local_4 = param_1;
    do {
      puVar2 = *(undefined4 **)(**(int **)(param_1 + 0x44) + 0x40);
      if (puVar2 != (undefined4 *)0x0) {
        if (puVar2[0x6a] == 0) {
          piVar1 = puVar2 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar2)(1);
          }
        }
        else {
          FUN_00874f90(puVar2[0x6a]);
        }
      }
      FUN_0087bb00((void *)(param_1 + 0x40),&local_4,(int *)**(undefined4 **)(param_1 + 0x44));
    } while (*(int *)(param_1 + 0x48) != 0);
  }
  return;
}


//// FUNCTION FUN_0087d480 @ 0087d480 ////

void __thiscall FUN_0087d480(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_0087be20(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00879330((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_0087be20(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0087d540 @ 0087d540 ////

void __thiscall FUN_0087d540(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool local_4;
  
  puVar3 = param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x45);
  local_4 = true;
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar4 = __stricmp((char *)*puVar3,(char *)puVar5[3]);
    local_4 = iVar4 < 0;
    if (local_4) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x45);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_0087d5a6;
    }
    FUN_00878010((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = __stricmp((char *)param_2[3],(char *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_0087d5a6:
  puVar5 = (undefined4 *)FUN_0087bfd0(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_0087d600 @ 0087d600 ////

void __thiscall FUN_0087d600(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_0087d664:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0087d669;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0087d664;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0087d669:
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
      puVar5 = (undefined4 *)FUN_0087c180(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_008792d0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0087c180(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_0087d720 @ 0087d720 ////

void __thiscall FUN_0087d720(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool local_4;
  
  puVar3 = param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x51);
  local_4 = true;
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar4 = __stricmp((char *)*puVar3,(char *)puVar5[4]);
    local_4 = iVar4 < 0;
    if (local_4) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x51);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_0087d786;
    }
    FUN_00879210((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = __stricmp((char *)param_2[4],(char *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_0087d786:
  puVar5 = (undefined4 *)FUN_0087c370(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_0087d7e0 @ 0087d7e0 ////

void __fastcall FUN_0087d7e0(int param_1)

{
  FUN_0087c330(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0087d810 @ 0087d810 ////

undefined4 * __thiscall FUN_0087d810(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0087bfd0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    iVar4 = __stricmp((char *)*param_3,(char *)param_2[3]);
    if (iVar4 < 0) {
      FUN_0087bfd0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    bVar3 = FUN_008795e0((undefined4 *)(piVar1[2] + 0xc),param_3);
    if (bVar3) {
      FUN_0087bfd0(this,param_1,'\0',*(undefined4 **)(*(int *)((int)this + 4) + 8),piVar2);
      return param_1;
    }
  }
  else {
    bVar3 = FUN_008795e0(param_3,param_2 + 3);
    if (bVar3) {
      param_3 = param_2;
      FUN_00878010((int *)&param_3);
      piVar1 = param_3;
      bVar3 = FUN_008795e0(param_3 + 3,piVar2);
      if (bVar3) {
        if (*(char *)(piVar1[2] + 0x45) != '\0') {
          FUN_0087bfd0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_0087bfd0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    bVar3 = FUN_008795e0(param_2 + 3,piVar2);
    if (bVar3) {
      param_3 = param_2;
      FUN_00878070((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        bVar3 = FUN_008795e0(piVar2,param_3 + 3);
        if (!bVar3) goto LAB_0087d99d;
      }
      if (*(char *)(param_2[2] + 0x45) != '\0') {
        FUN_0087bfd0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_0087bfd0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_0087d99d:
  puVar5 = (undefined4 *)FUN_0087d540(this,local_8,piVar2);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_0087da20 @ 0087da20 ////

void __thiscall FUN_0087da20(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0087b4b0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x45) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x45);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x45);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x45);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x45);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0087b510(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0087dae0 @ 0087dae0 ////

void __thiscall FUN_0087dae0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0087b330((void *)piVar6[1]);
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
    FUN_0087cd40(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0087dba0 @ 0087dba0 ////

void __thiscall FUN_0087dba0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool local_4;
  
  puVar3 = param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x31);
  local_4 = true;
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar4 = __stricmp((char *)*puVar3,(char *)puVar5[3]);
    local_4 = iVar4 < 0;
    if (local_4) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x31);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_0087dc06;
    }
    FUN_00878270((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = __stricmp((char *)param_2[3],(char *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_0087dc06:
  puVar5 = (undefined4 *)FUN_0087c5e0(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_0087dc60 @ 0087dc60 ////

void __thiscall FUN_0087dc60(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool local_4;
  
  puVar3 = param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x45);
  local_4 = true;
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar4 = __stricmp((char *)*puVar3,(char *)puVar5[3]);
    local_4 = iVar4 < 0;
    if (local_4) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x45);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_0087dcc6;
    }
    FUN_008782d0((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = __stricmp((char *)param_2[3],(char *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_0087dcc6:
  puVar5 = (undefined4 *)FUN_0087c850(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_0087dd20 @ 0087dd20 ////

void __thiscall FUN_0087dd20(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0087c330((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x51) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x51) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x51);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x51);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x51);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x51);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0087d010(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0087dde0 @ 0087dde0 ////

void __fastcall FUN_0087dde0(int param_1)

{
  FUN_0087d330(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0087de20 @ 0087de20 ////

void __fastcall FUN_0087de20(int param_1)

{
  FUN_0087c330(*(void **)(*(int *)(param_1 + 0x50) + 4));
  *(int *)(*(int *)(param_1 + 0x50) + 4) = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(int *)(*(int *)(param_1 + 0x50) + 8) = *(int *)(param_1 + 0x50);
  return;
}


//// FUNCTION FUN_0087de50 @ 0087de50 ////

void __thiscall
FUN_0087de50(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  undefined4 *puVar1;
  undefined1 local_6c [4];
  int local_68;
  int *local_64;
  undefined4 local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9c40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0087a000(local_6c,param_2,param_3,param_4);
  local_4 = 0;
  puVar1 = FUN_0087ac00(local_4c,param_1,(int)local_6c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0087d720((void *)((int)this + 0x4c),&param_3,puVar1);
  FUN_0087a0c0(local_4c);
  if (local_64 != (int *)0x0) {
    *local_64 = local_68;
  }
  if (local_68 != 0) {
    *(int **)(local_68 + 4) = local_64;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0087def0 @ 0087def0 ////

undefined4 __cdecl FUN_0087def0(uint param_1,int param_2)

{
  undefined4 local_48 [2];
  undefined **local_40;
  int local_3c;
  int *local_38;
  undefined ***local_34;
  undefined4 local_2c;
  uint local_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9c60;
  local_c = ExceptionList;
  local_34 = &local_40;
  local_3c = 0;
  local_38 = (int *)0x0;
  local_40 = &PTR_FUN_00d18c2c;
  local_2c = 0;
  local_18 = &local_24;
  local_28 = param_1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c2c;
  local_10 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0087d480((void *)(param_2 + 4),local_48,&local_28);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  if (local_38 != (int *)0x0) {
    *local_38 = local_3c;
  }
  if (local_3c != 0) {
    *(int **)(local_3c + 4) = local_38;
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_0087dfc0 @ 0087dfc0 ////

int * __cdecl FUN_0087dfc0(uint param_1,int param_2)

{
  int *piVar1;
  undefined4 local_48 [2];
  undefined **local_40;
  int local_3c;
  int *local_38;
  undefined ***local_34;
  int *local_2c;
  uint local_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9c80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_007843b0(0,0,0,0);
  local_34 = &local_40;
  local_3c = 0;
  local_38 = (int *)0x0;
  local_40 = &PTR_FUN_00d18c2c;
  if (piVar1 != (int *)0x0) {
    local_38 = piVar1 + 6;
    local_3c = *local_38;
    *(int **)(*local_38 + 4) = &local_3c;
    *local_38 = (int)&local_3c;
  }
  local_28 = param_1;
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c2c;
  if (piVar1 != (int *)0x0) {
    local_1c = piVar1 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 1;
  local_2c = piVar1;
  local_10 = piVar1;
  FUN_0087d480((void *)(param_2 + 4),local_48,&local_28);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  if (local_38 != (int *)0x0) {
    *local_38 = local_3c;
  }
  if (local_3c != 0) {
    *(int **)(local_3c + 4) = local_38;
  }
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_0087e0e0 @ 0087e0e0 ////

int * __thiscall FUN_0087e0e0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined **local_5c;
  int local_58;
  int *local_54;
  undefined ***local_50;
  undefined4 local_48;
  undefined4 local_44 [14];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9ca0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00879940(this,param_1);
  if (piVar1 != *(int **)((int)this + 4)) {
    iVar2 = __stricmp((char *)*puVar4,(char *)piVar1[3]);
    if (-1 < iVar2) goto LAB_0087e18d;
  }
  local_50 = &local_5c;
  local_58 = 0;
  local_54 = (int *)0x0;
  local_5c = &PTR_FUN_00d18c2c;
  local_48 = 0;
  local_4 = 0;
  piVar3 = FUN_0087a240(local_44,puVar4,(int)local_50);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar4 = FUN_0087d810(this,&param_1,piVar1,piVar3);
  piVar1 = (int *)*puVar4;
  FUN_0087a120(local_44);
  if (local_54 != (int *)0x0) {
    *local_54 = local_58;
  }
  if (local_58 != 0) {
    *(int **)(local_58 + 4) = local_54;
  }
LAB_0087e18d:
  ExceptionList = local_c;
  return piVar1 + 0xb;
}


//// FUNCTION FUN_0087e210 @ 0087e210 ////

undefined4 * __thiscall FUN_0087e210(void *this,undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9cb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_00872bc0((void *)((int)this + 0x20),param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0087e2e0 @ 0087e2e0 ////

undefined4 * __thiscall FUN_0087e2e0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0087c5e0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    iVar4 = __stricmp((char *)*param_3,(char *)param_2[3]);
    if (iVar4 < 0) {
      FUN_0087c5e0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    bVar3 = FUN_008795e0((undefined4 *)(piVar1[2] + 0xc),param_3);
    if (bVar3) {
      FUN_0087c5e0(this,param_1,'\0',*(undefined4 **)(*(int *)((int)this + 4) + 8),piVar2);
      return param_1;
    }
  }
  else {
    bVar3 = FUN_008795e0(param_3,param_2 + 3);
    if (bVar3) {
      param_3 = param_2;
      FUN_00878270((int *)&param_3);
      piVar1 = param_3;
      bVar3 = FUN_008795e0(param_3 + 3,piVar2);
      if (bVar3) {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_0087c5e0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_0087c5e0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    bVar3 = FUN_008795e0(param_2 + 3,piVar2);
    if (bVar3) {
      param_3 = param_2;
      FUN_00877f20((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        bVar3 = FUN_008795e0(piVar2,param_3 + 3);
        if (!bVar3) goto LAB_0087e46d;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_0087c5e0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_0087c5e0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_0087e46d:
  puVar5 = (undefined4 *)FUN_0087dba0(this,local_8,piVar2);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_0087e490 @ 0087e490 ////

undefined4 * __thiscall FUN_0087e490(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0087c850(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    iVar4 = __stricmp((char *)*param_3,(char *)param_2[3]);
    if (iVar4 < 0) {
      FUN_0087c850(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    bVar3 = FUN_008795e0((undefined4 *)(piVar1[2] + 0xc),param_3);
    if (bVar3) {
      FUN_0087c850(this,param_1,'\0',*(undefined4 **)(*(int *)((int)this + 4) + 8),piVar2);
      return param_1;
    }
  }
  else {
    bVar3 = FUN_008795e0(param_3,param_2 + 3);
    if (bVar3) {
      param_3 = param_2;
      FUN_008782d0((int *)&param_3);
      piVar1 = param_3;
      bVar3 = FUN_008795e0(param_3 + 3,piVar2);
      if (bVar3) {
        if (*(char *)(piVar1[2] + 0x45) != '\0') {
          FUN_0087c850(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_0087c850(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    bVar3 = FUN_008795e0(param_2 + 3,piVar2);
    if (bVar3) {
      param_3 = param_2;
      FUN_00877f90((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        bVar3 = FUN_008795e0(piVar2,param_3 + 3);
        if (!bVar3) goto LAB_0087e61d;
      }
      if (*(char *)(param_2[2] + 0x45) != '\0') {
        FUN_0087c850(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_0087c850(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_0087e61d:
  puVar5 = (undefined4 *)FUN_0087dc60(this,local_8,piVar2);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_0087e670 @ 0087e670 ////

void __thiscall FUN_0087e670(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0087d330((void *)piVar6[1]);
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
    FUN_0087ca00(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0087e730 @ 0087e730 ////

void __thiscall FUN_0087e730(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce9cd8;
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
  FUN_00878400((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x3d) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x3d) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x3d) == '\0') {
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
      iVar1 = param_2[0xf];
      *(char *)(param_2 + 0xf) = (char)_Memory[0xf];
      *(char *)(_Memory + 0xf) = (char)iVar1;
      goto LAB_0087e89f;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x3d) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x3d) == '\0') {
      piVar2 = (int *)FUN_008781f0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x3d) == '\0') {
      uVar3 = FUN_008781d0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0087e89f:
  if ((char)_Memory[0xf] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xf] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xf] == '\0') {
            *(undefined1 *)(piVar4 + 0xf) = 1;
            *(undefined1 *)(piVar5 + 0xf) = 0;
            FUN_00878ee0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x3d) == '\0') {
            if ((*(char *)(*piVar4 + 0x3c) != '\x01') || (*(char *)(piVar4[2] + 0x3c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x3c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x3c) = 1;
                *(undefined1 *)(piVar4 + 0xf) = 0;
                FUN_00878f40(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xf) = (char)piVar5[0xf];
              *(undefined1 *)(piVar5 + 0xf) = 1;
              *(undefined1 *)(piVar4[2] + 0x3c) = 1;
              FUN_00878ee0(this,(int)piVar5);
              break;
            }
LAB_0087e968:
            *(undefined1 *)(piVar4 + 0xf) = 0;
          }
        }
        else {
          if ((char)piVar4[0xf] == '\0') {
            *(undefined1 *)(piVar4 + 0xf) = 1;
            *(undefined1 *)(piVar5 + 0xf) = 0;
            FUN_00878f40(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x3d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x3c) == '\x01') && (*(char *)(*piVar4 + 0x3c) == '\x01'))
            goto LAB_0087e968;
            if (*(char *)(*piVar4 + 0x3c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x3c) = 1;
              *(undefined1 *)(piVar4 + 0xf) = 0;
              FUN_00878ee0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xf) = (char)piVar5[0xf];
            *(undefined1 *)(piVar5 + 0xf) = 1;
            *(undefined1 *)(*piVar4 + 0x3c) = 1;
            FUN_00878f40(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xf) = 1;
  }
  if ((void *)_Memory[0xc] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)_Memory[0xc]);
  }
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  _Memory[0xe] = 0;
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_0087ea20 @ 0087ea20 ////

undefined4 * __thiscall FUN_0087ea20(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_00872bc0((void *)((int)this + 0x20),(int)(param_1 + 8));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0087ea90 @ 0087ea90 ////

void FUN_0087ea90(void *param_1)

{
  if (*(char *)((int)param_1 + 0x3d) == '\0') {
    FUN_0087ea90(*(void **)((int)param_1 + 8));
    FUN_0087b3e0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0087ead0 @ 0087ead0 ////

void __fastcall FUN_0087ead0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0087c520(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0087eb00 @ 0087eb00 ////

void __fastcall FUN_0087eb00(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0087c790(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0087eb30 @ 0087eb30 ////

void __fastcall FUN_0087eb30(int param_1)

{
  undefined4 local_58 [2];
  char *local_50;
  uint local_4c;
  uint local_48;
  char local_44 [20];
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  code *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9d30;
  local_c = ExceptionList;
  local_50 = local_44;
  local_44[0] = '\0';
  local_4c = 0;
  local_48 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_50,"LoadScreen",10);
  local_4c = 10;
  local_50[10] = '\0';
  local_30 = local_24;
  local_4 = 0;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_10 = FUN_0087def0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0087d600((void *)(param_1 + 0x1c),local_58,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  local_50 = local_44;
  local_44[0] = '\0';
  local_4c = 0;
  local_48 = 0x14;
  _strncpy(local_50,"MoviePlayerScreen",0x11);
  local_4c = 0x11;
  local_50[0x11] = '\0';
  local_30 = local_24;
  local_4 = 2;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_10 = FUN_0087dfc0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0087d600((void *)(param_1 + 0x1c),local_58,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0087ecc0 @ 0087ecc0 ////

void __thiscall
FUN_0087ecc0(void *this,int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5)

{
  void *this_00;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_90 [16];
  undefined4 uStack_80;
  undefined4 local_64 [2];
  undefined **local_5c;
  int local_58;
  int *local_54;
  undefined ***local_50;
  int *local_48;
  undefined4 local_44 [14];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9d50;
  pvStack_c = ExceptionList;
  this_00 = (void *)((int)this + 0x10);
  uStack_80 = 0x87ecf5;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_0087a9c0(this_00,&param_2,param_2);
  if (*piVar2 == *(int *)((int)this + 0x14)) {
    local_50 = &local_5c;
    local_58 = 0;
    local_54 = (int *)0x0;
    local_5c = &PTR_FUN_00d18c2c;
    local_48 = param_1;
    if (param_1 != (int *)0x0) {
      local_54 = param_1 + 6;
      local_58 = *local_54;
      *(int **)(*local_54 + 4) = &local_58;
      *local_54 = (int)&local_58;
    }
    local_4 = 0;
    uStack_80 = 0x87ed85;
    puVar3 = FUN_0087a240(local_44,puVar1,(int)&local_5c);
    local_4 = CONCAT31(local_4._1_3_,1);
    uStack_80 = 0x87ed97;
    FUN_0087d540(this_00,local_64,puVar3);
    FUN_0087a120(local_44);
    local_4 = 0xffffffff;
    FUN_00436190(&local_5c);
  }
  else if ((*(int *)(*piVar2 + 0x40) == 0) || ((char)param_5 != '\0')) {
    piVar2 = FUN_0087e0e0(this_00,puVar1);
    (**(code **)(*piVar2 + 4))();
    piVar2[5] = (int)param_1;
    (**(code **)*piVar2)();
  }
  iVar4 = FUN_008819d0(*(void **)this,(char *)*puVar1);
  if (iVar4 != 0) {
    param_5 = &stack0xffffff64;
    puVar5 = auStack_90;
    auStack_90[0] = 0;
    uVar6 = 0;
    uVar7 = 0x14;
    FUN_004015d0(&stack0xffffff64,(char *)*puVar1,puVar1[1]);
    FUN_00878870(iVar4,(int)param_1,puVar5,uVar6,uVar7);
    FUN_0089ed40(*(void **)(*(int *)this + 400),param_1);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0087ef10 @ 0087ef10 ////

int __fastcall FUN_0087ef10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879d00();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087ef40 @ 0087ef40 ////

int * __thiscall FUN_0087ef40(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
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
  puStack_8 = &LAB_00ce9d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00879a70(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    iVar3 = __stricmp((char *)*puVar1,(char *)piVar2[3]);
    if (-1 < iVar3) {
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
  piVar2 = FUN_0087e2e0(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_0087f010 @ 0087f010 ////

int __fastcall FUN_0087f010(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087f040 @ 0087f040 ////

int * __thiscall FUN_0087f040(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined **local_5c;
  int local_58;
  int *local_54;
  undefined ***local_50;
  undefined4 local_48;
  undefined4 local_44 [14];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9d90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00879ac0(this,param_1);
  if (piVar1 != *(int **)((int)this + 4)) {
    iVar2 = __stricmp((char *)*puVar4,(char *)piVar1[3]);
    if (-1 < iVar2) goto LAB_0087f0ed;
  }
  local_50 = &local_5c;
  local_58 = 0;
  local_54 = (int *)0x0;
  local_5c = &PTR_FUN_00d637f0;
  local_48 = 0;
  local_4 = 0;
  piVar3 = FUN_0087a430(local_44,puVar4,(int)local_50);
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar4 = FUN_0087e490(this,&param_1,piVar1,piVar3);
  piVar1 = (int *)*puVar4;
  FUN_00879760(local_44);
  if (local_54 != (int *)0x0) {
    *local_54 = local_58;
  }
  if (local_58 != 0) {
    *(int **)(local_58 + 4) = local_54;
  }
LAB_0087f0ed:
  ExceptionList = local_c;
  return piVar1 + 0xb;
}


//// FUNCTION FUN_0087f170 @ 0087f170 ////

void __fastcall FUN_0087f170(int param_1)

{
  FUN_0087ea90(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0087f1e0 @ 0087f1e0 ////

void __fastcall FUN_0087f1e0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0087da20(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0087f210 @ 0087f210 ////

void __fastcall FUN_0087f210(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0087dae0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0087f240 @ 0087f240 ////

void __fastcall FUN_0087f240(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0087dd20(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0087f270 @ 0087f270 ////

void __thiscall FUN_0087f270(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  FUN_0087eb30((int)this);
  return;
}


//// FUNCTION FUN_0087f280 @ 0087f280 ////

void __thiscall
FUN_0087f280(void *this,undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4
            )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar1 = param_1;
  FUN_0087aae0((void *)((int)this + 0x34),&param_1,param_1);
  if (param_1 != *(undefined4 **)((int)this + 0x38)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xb]);
  }
  puVar2 = operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined1 *)((int)puVar2 + 9) = 0xff;
    *(undefined1 *)((int)puVar2 + 10) = 0xff;
    *(undefined1 *)((int)puVar2 + 0xb) = 0xff;
    *(undefined1 *)((int)puVar2 + 0xb) = 0xff;
    *(undefined1 *)((int)puVar2 + 10) = 0x30;
    *(undefined1 *)((int)puVar2 + 9) = 0x3f;
    *(undefined1 *)(puVar2 + 2) = 0x3f;
  }
  puVar2[2] = param_4;
  *(undefined1 *)(puVar2 + 1) = param_3;
  *puVar2 = param_2;
  piVar3 = FUN_0087ef40((void *)((int)this + 0x34),puVar1);
  *piVar3 = (int)puVar2;
  return;
}


//// FUNCTION FUN_0087f320 @ 0087f320 ////

void __thiscall FUN_0087f320(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    FUN_0087ab40((void *)((int)this + 0x40),&param_2,param_1);
    piVar2 = FUN_0087f040((void *)((int)this + 0x40),param_1);
    (**(code **)(*piVar2 + 4))();
    piVar2[5] = iVar1;
    (**(code **)*piVar2)();
    if ((*(void **)this != (void *)0x0) &&
       (iVar3 = FUN_008819d0(*(void **)this,(char *)*param_1), iVar3 != 0)) {
      (**(code **)(*(int *)(iVar3 + 0x23c) + 4))();
      *(int *)(iVar3 + 0x250) = iVar1;
      (*(code *)**(undefined4 **)(iVar3 + 0x23c))();
      *(undefined4 *)(iVar3 + 600) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_0087f3d0 @ 0087f3d0 ////

int __fastcall FUN_0087f3d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879c10();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087f400 @ 0087f400 ////

int __fastcall FUN_0087f400(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879c60();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087f430 @ 0087f430 ////

int __fastcall FUN_0087f430(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x51) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087f460 @ 0087f460 ////

void __thiscall FUN_0087f460(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0087ea90((void *)piVar6[1]);
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
    FUN_0087e730(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0087f520 @ 0087f520 ////

undefined4 *
FUN_0087f520(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce9db1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x40);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0087ea20(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0xf) = param_5;
    *(undefined1 *)((int)puVar1 + 0x3d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_0087f5c0 @ 0087f5c0 ////

void __fastcall FUN_0087f5c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0087e670(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0087f5f0 @ 0087f5f0 ////

int __fastcall FUN_0087f5f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879bc0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087f620 @ 0087f620 ////

void __thiscall
FUN_0087f620(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9dc8;
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
  piVar3 = FUN_0087f520(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0087f71b:
        *(undefined1 *)(*piVar4 + 0x3c) = 1;
        *(undefined1 *)(piVar5 + 0xf) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x3c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00878ee0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x3c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x3c) = 0;
        FUN_00878f40(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xf] == '\0') goto LAB_0087f71b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00878f40(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x3c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x3c) = 0;
      FUN_00878ee0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x3c);
  } while( true );
}


//// FUNCTION FUN_0087f830 @ 0087f830 ////

void __thiscall FUN_0087f830(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_0087f894:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0087f899;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0087f894;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0087f899:
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
      puVar5 = (undefined4 *)FUN_0087f620(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00879270((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0087f620(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_0087f950 @ 0087f950 ////

void __fastcall FUN_0087f950(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0087f460(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0087f980 @ 0087f980 ////

void __fastcall FUN_0087f980(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9e2d;
  pvStack_c = ExceptionList;
  local_4 = 6;
  if (*(int *)(param_1 + 0x3c) != 0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(**(int **)(param_1 + 0x38) + 0x2c));
  }
  ExceptionList = &pvStack_c;
  FUN_0087d380(param_1);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0087dd20((void *)(param_1 + 0x4c),&local_10,(int *)**(int **)(param_1 + 0x50),
               *(int **)(param_1 + 0x50));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x50));
}


//// FUNCTION FUN_0087fb40 @ 0087fb40 ////

void __thiscall FUN_0087fb40(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_44 [2];
  void *local_3c [2];
  uint local_34;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0087e210(local_3c,param_1,param_2);
  local_4 = 0;
  FUN_0087f830((void *)((int)this + 0x28),local_44,puVar1);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0087fbd0 @ 0087fbd0 ////

int __fastcall FUN_0087fbd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00879cb0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0087fc00 @ 0087fc00 ////

undefined4 * __fastcall FUN_0087fc00(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9ea2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00879bc0();
  param_1[2] = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  local_4 = 0;
  iVar1 = FUN_00879c10();
  param_1[5] = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  *(undefined4 *)param_1[5] = param_1[5];
  *(undefined4 *)(param_1[5] + 8) = param_1[5];
  param_1[6] = 0;
  local_4._0_1_ = 1;
  iVar1 = FUN_00879c60();
  param_1[8] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[8] + 4) = param_1[8];
  *(undefined4 *)param_1[8] = param_1[8];
  *(undefined4 *)(param_1[8] + 8) = param_1[8];
  param_1[9] = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_00879cb0();
  param_1[0xb] = iVar1;
  *(undefined1 *)(iVar1 + 0x3d) = 1;
  *(undefined4 *)(param_1[0xb] + 4) = param_1[0xb];
  *(undefined4 *)param_1[0xb] = param_1[0xb];
  *(undefined4 *)(param_1[0xb] + 8) = param_1[0xb];
  param_1[0xc] = 0;
  local_4._0_1_ = 3;
  iVar1 = FUN_00879d00();
  param_1[0xe] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0xe] + 4) = param_1[0xe];
  *(undefined4 *)param_1[0xe] = param_1[0xe];
  *(undefined4 *)(param_1[0xe] + 8) = param_1[0xe];
  param_1[0xf] = 0;
  local_4._0_1_ = 4;
  iVar1 = FUN_00879d50();
  param_1[0x11] = iVar1;
  *(undefined1 *)(iVar1 + 0x45) = 1;
  *(undefined4 *)(param_1[0x11] + 4) = param_1[0x11];
  *(undefined4 *)param_1[0x11] = param_1[0x11];
  *(undefined4 *)(param_1[0x11] + 8) = param_1[0x11];
  param_1[0x12] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  iVar1 = FUN_00879da0();
  param_1[0x14] = iVar1;
  *(undefined1 *)(iVar1 + 0x51) = 1;
  *(undefined4 *)(param_1[0x14] + 4) = param_1[0x14];
  *(undefined4 *)param_1[0x14] = param_1[0x14];
  *(undefined4 *)(param_1[0x14] + 8) = param_1[0x14];
  param_1[0x15] = 0;
  *param_1 = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0087fd90 @ 0087fd90 ////

void __fastcall FUN_0087fd90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d638d8;
  return;
}


//// FUNCTION FUN_0087fde0 @ 0087fde0 ////

undefined4 __thiscall FUN_0087fde0(void *this,int param_1)

{
  return CONCAT31((int3)((uint)*(int *)((int)this + 4) >> 8),
                  *(int *)((int)this + 4) < *(int *)(param_1 + 4));
}


//// FUNCTION FUN_0087fe70 @ 0087fe70 ////

void * __thiscall FUN_0087fe70(void *this,byte param_1)

{
  FUN_0087f980((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0087fe90 @ 0087fe90 ////

void * __thiscall FUN_0087fe90(void *this,byte param_1)

{
  FUN_008ab0b0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0087feb0 @ 0087feb0 ////

void FUN_0087feb0(void)

{
  return;
}


//// FUNCTION FUN_0087ff20 @ 0087ff20 ////

void __thiscall FUN_0087ff20(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 *)((int)this + 0xfd) = 1;
  *(undefined4 *)((int)this + 0x9c) = *param_1;
  *(undefined4 *)((int)this + 0xa0) = param_1[1];
  *(undefined4 *)((int)this + 0xa4) = param_1[2];
  *(undefined4 *)((int)this + 0xa8) = param_1[3];
  *(undefined4 *)((int)this + 0xac) = param_1[4];
  *(undefined4 *)((int)this + 0xb0) = param_1[5];
  *(undefined4 *)((int)this + 0xb4) = *param_2;
  *(undefined4 *)((int)this + 0xb8) = param_2[1];
  *(undefined4 *)((int)this + 0xbc) = param_2[2];
  *(undefined4 *)((int)this + 0xc0) = param_2[3];
  *(undefined4 *)((int)this + 0xc4) = param_2[4];
  *(undefined4 *)((int)this + 200) = param_2[5];
  return;
}


//// FUNCTION FUN_0087fff0 @ 0087fff0 ////

void __thiscall FUN_0087fff0(void *this,uint param_1)

{
  *(uint *)((int)this + 0x74) = param_1;
  FUN_00890280((void *)((int)this + 0x148),param_1);
  return;
}


//// FUNCTION FUN_00880010 @ 00880010 ////

void __thiscall FUN_00880010(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00888870((int)this + 0x148);
  if (param_1 < iVar1) {
    *(int *)((int)this + 0x80) = param_1;
    *(undefined4 *)((int)this + 0x84) = param_2;
  }
  return;
}


//// FUNCTION FUN_00880070 @ 00880070 ////

void __fastcall FUN_00880070(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00880090 @ 00880090 ////

void __fastcall FUN_00880090(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00880110 @ 00880110 ////

void __cdecl FUN_00880110(int param_1)

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


//// FUNCTION FUN_00880130 @ 00880130 ////

void __cdecl FUN_00880130(int *param_1)

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


//// FUNCTION FUN_00880170 @ 00880170 ////

void __thiscall FUN_00880170(void *this,int *param_1)

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


//// FUNCTION FUN_00880260 @ 00880260 ////

void __cdecl FUN_00880260(int param_1)

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


//// FUNCTION FUN_00880280 @ 00880280 ////

void __cdecl FUN_00880280(int *param_1)

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


//// FUNCTION FUN_008802c0 @ 008802c0 ////

void __thiscall FUN_008802c0(void *this,int *param_1)

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


//// FUNCTION FUN_008803b0 @ 008803b0 ////

void __cdecl FUN_008803b0(int param_1)

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


//// FUNCTION FUN_008803d0 @ 008803d0 ////

void __cdecl FUN_008803d0(int *param_1)

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


//// FUNCTION FUN_00880410 @ 00880410 ////

void __thiscall FUN_00880410(void *this,int *param_1)

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


//// FUNCTION FUN_008807b0 @ 008807b0 ////

void __fastcall FUN_008807b0(int *param_1)

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


//// FUNCTION FUN_00880840 @ 00880840 ////

void __fastcall FUN_00880840(int *param_1)

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


//// FUNCTION FUN_008808d0 @ 008808d0 ////

void __fastcall FUN_008808d0(int *param_1)

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


//// FUNCTION FUN_00880c90 @ 00880c90 ////

void __fastcall FUN_00880c90(int *param_1)

{
  (**(code **)(*param_1 + 4))();
  param_1[5] = 0;
                    /* WARNING: Could not recover jumptable at 0x00880ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}


//// FUNCTION FUN_00880cb0 @ 00880cb0 ////

int __cdecl FUN_00880cb0(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_01050174 != (void *)0x0) {
    iVar1 = FUN_00876ee0(DAT_01050174,param_1,'\0');
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x17c) + 4))();
      *(undefined4 *)(iVar1 + 400) = param_2;
      (*(code *)**(undefined4 **)(iVar1 + 0x17c))();
      return iVar1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00880d20 @ 00880d20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00880d20(int param_1)

{
  undefined4 *puVar1;
  void *this;
  undefined4 *puVar2;
  ulonglong uVar3;
  int *piVar4;
  int *piVar5;
  int aiStack_30 [6];
  int aiStack_18 [6];
  
  DAT_00e5e808._0_2_ = 0x100;
  DAT_00e5e804._0_2_ = 0x100;
  DAT_00e5e800._0_2_ = 0x100;
  DAT_00e5e7fc._0_2_ = 0x100;
  DAT_00e5e7e4 = 0x10000;
  DAT_00e5e7f0 = 0x10000;
  DAT_00e5e7ec = 0;
  DAT_00e5e7e8 = 0;
  DAT_00e5e7f8 = 0;
  DAT_00e5e7f4 = 0;
  DAT_00e5e808._2_2_ = 0;
  DAT_00e5e804._2_2_ = 0;
  DAT_00e5e800._2_2_ = 0;
  DAT_00e5e7fc._2_2_ = 0;
  DAT_00e5e284 = 0xffffffff;
  DAT_01050158 = 0;
  (*(code *)DAT_0105018c[1])();
  DAT_010501a0 = param_1;
  (*(code *)*DAT_0105018c)();
  _DAT_01050178 = *(undefined4 *)(param_1 + 0x50);
  _DAT_0105017c = *(undefined4 *)(param_1 + 0x54);
  _DAT_01050180 = *(undefined4 *)(param_1 + 0x58);
  _DAT_01050184 = *(undefined4 *)(param_1 + 0x5c);
  puVar1 = (undefined4 *)(param_1 + 0xe4);
  *puVar1 = 0x10000;
  *(undefined4 *)(param_1 + 0xf0) = 0x10000;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (*(char *)(param_1 + 0xfc) == '\0') {
    piVar5 = (int *)(param_1 + 0xb4);
    piVar4 = aiStack_18;
    this = (void *)(param_1 + 0x9c);
  }
  else {
    piVar5 = (int *)(param_1 + 0xb4);
    piVar4 = aiStack_30;
    this = (void *)FUN_0086ddb0((void *)(param_1 + 0xcc),aiStack_18,(int *)(param_1 + 0x9c));
  }
  puVar2 = (undefined4 *)FUN_0086ddb0(this,piVar4,piVar5);
  *puVar1 = *puVar2;
  *(undefined4 *)(param_1 + 0xe8) = puVar2[1];
  *(undefined4 *)(param_1 + 0xec) = puVar2[2];
  *(undefined4 *)(param_1 + 0xf0) = puVar2[3];
  *(undefined4 *)(param_1 + 0xf4) = puVar2[4];
  *(undefined4 *)(param_1 + 0xf8) = puVar2[5];
  uVar3 = FUN_00acd42c();
  *puVar1 = (int)uVar3;
  uVar3 = FUN_00acd42c();
  *(int *)(param_1 + 0xf0) = (int)uVar3;
  return;
}


//// FUNCTION FUN_00880ec0 @ 00880ec0 ////

undefined4 __fastcall FUN_00880ec0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  
  fVar1 = (float)*(int *)(param_1 + 0xf4) * 0.05;
  fVar4 = (float)*(int *)(param_1 + 0xf8) * 0.05;
  fVar3 = (float)*(int *)(param_1 + 0xe4) * 1.5258789e-05 *
          (float)(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50)) * 0.025;
  fVar5 = (float)*(int *)(param_1 + 0xf0) * 1.5258789e-05 *
          (float)(*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) * 0.025;
  fVar2 = fVar1 - fVar3;
  uVar7 = (undefined2)((uint)*(int *)(param_1 + 0x58) >> 0x10);
  uVar6 = CONCAT22(uVar7,(ushort)(fVar2 < DAT_0104cce0) << 8 |
                         (ushort)(NAN(fVar2) || NAN(DAT_0104cce0)) << 10 |
                         (ushort)(fVar2 == DAT_0104cce0) << 0xe);
  if (fVar2 < DAT_0104cce0 != (fVar2 == DAT_0104cce0)) {
    fVar1 = fVar1 + fVar3;
    uVar6 = CONCAT22(uVar7,(ushort)(DAT_0104cce0 < fVar1) << 8 |
                           (ushort)(NAN(DAT_0104cce0) || NAN(fVar1)) << 10 |
                           (ushort)(DAT_0104cce0 == fVar1) << 0xe);
    if (DAT_0104cce0 < fVar1 != (DAT_0104cce0 == fVar1)) {
      fVar1 = fVar4 - fVar5;
      uVar6 = CONCAT22(uVar7,(ushort)(fVar1 < DAT_0104cce4) << 8 |
                             (ushort)(NAN(fVar1) || NAN(DAT_0104cce4)) << 10 |
                             (ushort)(fVar1 == DAT_0104cce4) << 0xe);
      if (fVar1 < DAT_0104cce4 != (fVar1 == DAT_0104cce4)) {
        fVar4 = fVar4 + fVar5;
        uVar6 = CONCAT22(uVar7,(ushort)(fVar4 < DAT_0104cce4) << 8 |
                               (ushort)(NAN(fVar4) || NAN(DAT_0104cce4)) << 10 |
                               (ushort)(fVar4 == DAT_0104cce4) << 0xe);
        if (fVar4 >= DAT_0104cce4) {
          return CONCAT31((int3)((uint)uVar6 >> 8),1);
        }
      }
    }
  }
  return uVar6;
}


//// FUNCTION FUN_00881050 @ 00881050 ////

int __thiscall FUN_00881050(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_009f3be0(param_1);
  uVar2 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar3 = *(int **)this;
    do {
      if (*piVar3 == iVar1) {
        if ((int)uVar2 < 0) {
          return 0;
        }
        return (*(int **)this)[uVar2 * 2 + 1];
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  return 0;
}


//// FUNCTION FUN_00881130 @ 00881130 ////

void __thiscall FUN_00881130(void *this,int param_1)

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


//// FUNCTION FUN_008811a0 @ 008811a0 ////

void __thiscall FUN_008811a0(void *this,int param_1)

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


//// FUNCTION FUN_00881210 @ 00881210 ////

void __thiscall FUN_00881210(void *this,int param_1)

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


//// FUNCTION FUN_008812e0 @ 008812e0 ////

void __thiscall FUN_008812e0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = operator_new(param_1 * 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1;
    iVar3 = param_1;
    if (-1 < param_1 + -1) {
      do {
        *puVar2 = 0xffffffff;
        puVar2[1] = 0;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + 2;
      } while (iVar3 != 0);
      *(int *)((int)this + 8) = param_1;
      *(undefined4 **)this = puVar1;
      return;
    }
  }
  *(int *)((int)this + 8) = param_1;
  *(undefined4 **)this = puVar1;
  return;
}


//// FUNCTION FUN_00881340 @ 00881340 ////

void __thiscall FUN_00881340(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = operator_new(param_1 * 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1;
    iVar3 = param_1;
    if (-1 < param_1 + -1) {
      do {
        *puVar2 = 0xffffffff;
        puVar2[1] = 0;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + 2;
      } while (iVar3 != 0);
      *(int *)((int)this + 8) = param_1;
      *(undefined4 **)this = puVar1;
      return;
    }
  }
  *(int *)((int)this + 8) = param_1;
  *(undefined4 **)this = puVar1;
  return;
}


//// FUNCTION FUN_00881530 @ 00881530 ////

void __thiscall FUN_00881530(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar2 = operator_new(param_1 * 8);
  uVar3 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2;
    if (-1 < param_1 + -1) {
      do {
        *puVar4 = 0xffffffff;
        puVar4[1] = 0;
        param_1 = param_1 + -1;
        puVar4 = puVar4 + 2;
      } while (param_1 != 0);
    }
  }
  if (*(int *)((int)this + 4) != 0) {
    do {
      iVar1 = *(int *)this;
      puVar2[uVar3 * 2] = *(undefined4 *)(iVar1 + uVar3 * 8);
      puVar2[uVar3 * 2 + 1] = *(undefined4 *)(iVar1 + 4 + uVar3 * 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)this);
}


//// FUNCTION FUN_008815b0 @ 008815b0 ////

void __thiscall FUN_008815b0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar2 = operator_new(param_1 * 8);
  uVar3 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar2;
    if (-1 < param_1 + -1) {
      do {
        *puVar4 = 0xffffffff;
        puVar4[1] = 0;
        param_1 = param_1 + -1;
        puVar4 = puVar4 + 2;
      } while (param_1 != 0);
    }
  }
  if (*(int *)((int)this + 4) != 0) {
    do {
      iVar1 = *(int *)this;
      puVar2[uVar3 * 2] = *(undefined4 *)(iVar1 + uVar3 * 8);
      puVar2[uVar3 * 2 + 1] = *(undefined4 *)(iVar1 + 4 + uVar3 * 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)this);
}


//// FUNCTION FUN_008816e0 @ 008816e0 ////

int * __fastcall FUN_008816e0(int *param_1)

{
  FUN_008807b0(param_1);
  return param_1;
}


//// FUNCTION FUN_008816f0 @ 008816f0 ////

int * __fastcall FUN_008816f0(int *param_1)

{
  FUN_00880840(param_1);
  return param_1;
}


//// FUNCTION FUN_00881700 @ 00881700 ////

int * __fastcall FUN_00881700(int *param_1)

{
  FUN_008808d0(param_1);
  return param_1;
}


//// FUNCTION FUN_00881770 @ 00881770 ////

void FUN_00881770(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00881770(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00881800 @ 00881800 ////

void FUN_00881800(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_00881800(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00881890 @ 00881890 ////

void FUN_00881890(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_00881890(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00881990 @ 00881990 ////

void __fastcall FUN_00881990(int param_1)

{
  undefined4 uVar1;
  int extraout_ECX;
  
  if (*(int *)(param_1 + 0x250) != 0) {
    uVar1 = FUN_00880ec0(param_1);
    if ((char)uVar1 != '\0') {
      FUN_0073b4a0((undefined4 *)(extraout_ECX + 0x24c),'\0',0,2,(undefined1 *)0x0,0,0);
    }
  }
  return;
}


//// FUNCTION FUN_008819d0 @ 008819d0 ////

void __thiscall FUN_008819d0(void *this,char *param_1)

{
  FUN_00881050((void *)((int)this + 0x1ac),param_1);
  return;
}


//// FUNCTION FUN_008819e0 @ 008819e0 ////

uint __thiscall FUN_008819e0(void *this,char *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar3 = FUN_009f3be0(param_1);
  uVar5 = 0;
  if (*(uint *)((int)this + 0x1d0) != 0) {
    puVar6 = *(uint **)((int)this + 0x1cc);
    do {
      if (*puVar6 == uVar3) {
        if ((-1 < (int)uVar5) &&
           (uVar5 = (*(uint **)((int)this + 0x1cc))[uVar5 * 2 + 1], uVar5 != 0)) goto LAB_00881a56;
        break;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (uVar5 < *(uint *)((int)this + 0x1d0));
  }
  uVar5 = 0;
  if (*(uint *)((int)this + 0x1b0) != 0) {
    puVar6 = *(uint **)((int)this + 0x1ac);
    do {
      if (*puVar6 == uVar3) {
        if ((-1 < (int)uVar5) &&
           (uVar5 = (*(uint **)((int)this + 0x1ac))[uVar5 * 2 + 1], uVar5 != 0)) goto LAB_00881a56;
        break;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 2;
    } while (uVar5 < *(uint *)((int)this + 0x1b0));
  }
LAB_00881a42:
  return uVar3 & 0xffffff00;
LAB_00881a56:
  fVar2 = *(float *)(uVar5 + 0x1cc);
  *param_2 = fVar2;
  fVar1 = *param_2;
  param_2[1] = *(float *)(uVar5 + 0x1d0);
  uVar4 = (undefined2)((uint)fVar2 >> 0x10);
  uVar3 = CONCAT22(uVar4,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
  if (fVar1 == 0.0) {
    fVar1 = param_2[1];
    uVar3 = CONCAT22(uVar4,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                           (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 == 0.0) goto LAB_00881a42;
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_00881aa0 @ 00881aa0 ////

bool __thiscall FUN_00881aa0(void *this,char *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00881050((void *)((int)this + 0x1ac),param_1);
  return iVar1 != 0;
}


//// FUNCTION FUN_00881ac0 @ 00881ac0 ////

void __thiscall FUN_00881ac0(void *this,char *param_1,char *param_2)

{
  char cVar1;
  void *this_00;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_20 [8];
  undefined4 uStack_18;
  
  this_00 = (void *)FUN_00881050((void *)((int)this + 0x1ac),param_1);
  if (this_00 != (void *)0x0) {
    puVar3 = local_20;
    local_20[0] = 0;
    uVar4 = 0;
    uVar5 = 0x14;
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xffffffd4,param_2,(int)pcVar2 - (int)(param_2 + 1));
    uVar5 = FUN_0088a2b0(this_00,puVar3,uVar4,uVar5);
    FUN_008887b0(this_00,uVar5);
    uStack_18 = 0x881b2c;
    FUN_0088fd50(this_00,uVar5,6);
  }
  return;
}


//// FUNCTION FUN_00881b40 @ 00881b40 ////

void __thiscall FUN_00881b40(void *this,char *param_1,uint param_2)

{
  void *this_00;
  
  this_00 = (void *)FUN_00881050((void *)((int)this + 0x1ac),param_1);
  if (this_00 != (void *)0x0) {
    FUN_008887b0(this_00,param_2);
    FUN_0088fd50(this_00,param_2,6);
  }
  return;
}


//// FUNCTION FUN_00881b80 @ 00881b80 ////

void __thiscall FUN_00881b80(void *this,char *param_1,char *param_2)

{
  char cVar1;
  void *this_00;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_20 [8];
  undefined4 uStack_18;
  
  this_00 = (void *)FUN_00881050((void *)((int)this + 0x1ac),param_1);
  if (this_00 != (void *)0x0) {
    puVar3 = local_20;
    local_20[0] = 0;
    uVar4 = 0;
    uVar5 = 0x14;
    pcVar2 = param_2;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&stack0xffffffd4,param_2,(int)pcVar2 - (int)(param_2 + 1));
    uVar5 = FUN_0088a2b0(this_00,puVar3,uVar4,uVar5);
    FUN_008887b0(this_00,uVar5);
    uStack_18 = 0x881bec;
    FUN_0088fd50(this_00,uVar5,7);
  }
  return;
}


