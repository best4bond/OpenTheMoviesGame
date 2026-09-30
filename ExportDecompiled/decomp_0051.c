//// FUNCTION FUN_00a91310 @ 00a91310 ////

void __fastcall FUN_00a91310(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfca2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x50) + 4) + -0x50 + param_1) = &PTR_LAB_00d7afcc;
  puVar1 = (undefined4 *)(param_1 + -0x48);
  local_4 = 0;
  *puVar1 = &PTR_FUN_00d7af94;
  FUN_00a900a0((int)puVar1);
  FUN_00a17980(puVar1);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x50) + 4) + -8 + (int)puVar1) = &PTR_LAB_00d7af34;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a91390 @ 00a91390 ////

undefined4 * __thiscall FUN_00a91390(void *this,int param_1,byte param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfca48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a18a00(this);
  uVar2 = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d7af94;
  if ((param_2 & 1) == 0) {
    uVar2 = 4;
  }
  if ((param_2 & 2) == 0) {
    uVar2 = uVar2 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar2 = uVar2 | 8;
  }
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    puVar1 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 4);
  }
  FUN_00a90f30(this,puVar1,*(uint *)(param_1 + 0x14),uVar2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a91420 @ 00a91420 ////

void FUN_00a91420(void)

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


//// FUNCTION FUN_00a91460 @ 00a91460 ////

void * FUN_00a91460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x3c);
  if (this != (void *)0x0) {
    FUN_00a91030(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00a914a0 @ 00a914a0 ////

/* WARNING: Removing unreachable block (ram,0x00a9156e) */
/* WARNING: Removing unreachable block (ram,0x00a9157a) */
/* WARNING: Removing unreachable block (ram,0x00a9157d) */

int * __cdecl FUN_00a914a0(int *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_20;
  char local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfca68;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  local_18 = 0;
  ExceptionList = &pvStack_10;
  FUN_00a912a0(&local_20,param_1,0);
  if (local_1c == '\0') {
    iVar2 = *(int *)(*(int *)(*local_20 + 4) + 0x28 + (int)local_20);
    local_8 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_00accb42((undefined4 *)(iVar2 + 4));
    }
    ExceptionList = pvStack_10;
    return param_1;
  }
  piVar4 = *(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
  local_8 = 1;
  if ((*(uint *)piVar4[8] == 0) ||
     (uVar3 = *(uint *)piVar4[8], *(int *)piVar4[0xc] + uVar3 <= uVar3)) {
    uVar3 = (**(code **)(*piVar4 + 0x14))();
  }
  else {
    *(int *)piVar4[0xc] = *(int *)piVar4[0xc] + -1;
    pbVar1 = *(byte **)piVar4[8];
    *(byte **)piVar4[8] = pbVar1 + 1;
    uVar3 = (uint)*pbVar1;
  }
  if (uVar3 != 0xffffffff) {
    *param_2 = (char)uVar3;
    piVar4 = (int *)FUN_00a9155c();
    return piVar4;
  }
  piVar4 = (int *)FUN_00a9155c();
  return piVar4;
}


//// FUNCTION FUN_00a9155c @ 00a9155c ////

void FUN_00a9155c(void)

{
  int iVar1;
  uint uVar2;
  ios_base *this;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  this = (ios_base *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (unaff_EDI != 0) {
    uVar2 = *(uint *)(this + 8) | unaff_EDI;
    if (*(int *)(this + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    std::ios_base::clear(this,uVar2,false);
  }
  iVar1 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x28 +
                  (int)*(int **)(unaff_EBP + -0x1c));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00accb42((undefined4 *)(iVar1 + 4));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


//// FUNCTION FUN_00a915c0 @ 00a915c0 ////

facet * __cdecl FUN_00a915c0(locale *param_1)

{
  facet *pfVar1;
  facet *this;
  int iVar2;
  facet *local_24;
  int local_20;
  int local_1c;
  exception local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfca88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00acbfc6(&local_1c,0);
  pfVar1 = DAT_010c9f54;
  local_4 = 0;
  local_24 = DAT_010c9f54;
  if (DAT_010c9f60 == 0) {
    FUN_00acbfc6(&local_20,0);
    if (DAT_010c9f60 == 0) {
      DAT_010c9f60 = DAT_010cbae8 + 1;
      DAT_010cbae8 = DAT_010c9f60;
    }
    FUN_00acbfe9(&local_20);
  }
  this = std::locale::_Getfacet(param_1,DAT_010c9f60);
  if ((this == (facet *)0x0) && (this = pfVar1, pfVar1 == (facet *)0x0)) {
    iVar2 = FUN_00a91120((int *)&local_24);
    this = local_24;
    if (iVar2 == -1) {
      FUN_00ace1fb(local_18);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_18,&DAT_00e398b8);
    }
    DAT_010c9f54 = local_24;
    FUN_00acbfc6(&local_20,0);
    if (*(int *)(this + 4) != -1) {
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
    }
    FUN_00acbfe9(&local_20);
    std::locale::facet::_Register(this);
  }
  local_4 = 0xffffffff;
  FUN_00acbfe9(&local_1c);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a916e0 @ 00a916e0 ////

void __thiscall FUN_00a916e0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar5 = (byte *)*param_2;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00a91717:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00a9171c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00a91717;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a9171c:
  if (iVar3 < 0) {
    *(undefined4 *)this = 0;
    return;
  }
  uVar4 = FUN_00441060(param_2,param_1);
  *(uint *)this = ((char)uVar4 != '\0') + 1;
  return;
}


//// FUNCTION FUN_00a91750 @ 00a91750 ////

void __fastcall FUN_00a91750(int param_1)

{
  FUN_00a91310(param_1 + 0x50);
  FUN_00a16560((ios_base *)(param_1 + 0x50));
  return;
}


//// FUNCTION FUN_00a91770 @ 00a91770 ////

/* WARNING: Type propagation algorithm not settling */

int * __fastcall FUN_00a91770(int *param_1)

{
  int iVar1;
  locale *plVar2;
  facet *pfVar3;
  int *piVar4;
  uint uVar5;
  ios_base *this;
  undefined4 *puVar6;
  undefined1 local_40 [4];
  undefined4 local_3c;
  int *local_38;
  char local_34;
  facet *local_30;
  int local_28;
  uint local_24 [2];
  int *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfcab0;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_18 = 0;
  ExceptionList = &pvStack_10;
  local_1c = param_1;
  FUN_00a912a0(&local_38,param_1,0);
  local_8 = 0;
  if (local_34 != '\0') {
    local_24[1] = 0;
    plVar2 = (locale *)FUN_00a16270((void *)(*(int *)(*param_1 + 4) + (int)param_1),(int *)local_24)
    ;
    local_8._0_1_ = 1;
    pfVar3 = FUN_00a915c0(plVar2);
    local_8._0_1_ = 0;
    local_30 = pfVar3;
    if (local_24[0] != 0) {
      FUN_00acbfc6(&local_28,0);
      iVar1 = *(int *)(local_24[0] + 4);
      if ((iVar1 != 0) && (iVar1 != -1)) {
        *(int *)(local_24[0] + 4) = iVar1 + -1;
      }
      puVar6 = (undefined4 *)(local_24[0] & (*(int *)(local_24[0] + 4) != 0) - 1);
      FUN_00acbfe9(&local_28);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
    }
    iVar1 = *(int *)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1);
    local_3c = CONCAT31(local_3c._1_3_,iVar1 == 0);
    local_28 = CONCAT31(local_28._1_3_,1);
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(*(int *)pfVar3 + 0x20))
              (local_40,iVar1,local_3c,0,local_28,*(int *)(*param_1 + 4) + (int)param_1,&local_18,
               local_24 + 1);
    piVar4 = (int *)FUN_00a91889();
    return piVar4;
  }
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  if (local_18 != 0) {
    uVar5 = *(uint *)(this + 8) | local_18;
    if (*(int *)(this + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    std::ios_base::clear(this,uVar5,false);
  }
  iVar1 = *(int *)(*(int *)(*local_38 + 4) + 0x28 + (int)local_38);
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00accb42((undefined4 *)(iVar1 + 4));
  }
  ExceptionList = pvStack_10;
  return param_1;
}


//// FUNCTION FUN_00a91889 @ 00a91889 ////

void FUN_00a91889(void)

{
  int iVar1;
  uint uVar2;
  ios_base *this;
  int unaff_EBP;
  int *unaff_ESI;
  
  uVar2 = *(uint *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((uVar2 & 2) == 0) && (-0x80000000 <= *(int *)(unaff_EBP + -0x1c))) {
    **(int **)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x1c);
  }
  else {
    uVar2 = uVar2 | 2;
    *(uint *)(unaff_EBP + -0x14) = uVar2;
  }
  this = (ios_base *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(this + 8) | uVar2;
    if (*(int *)(this + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    std::ios_base::clear(this,uVar2,false);
  }
  iVar1 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x34) + 4) + 0x28 +
                  (int)*(int **)(unaff_EBP + -0x34));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00accb42((undefined4 *)(iVar1 + 4));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


//// FUNCTION FUN_00a91960 @ 00a91960 ////

int * __thiscall FUN_00a91960(void *this,undefined4 param_1,char param_2,char param_3,int param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcadc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_4 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_00d7afd0;
    *(undefined ***)((int)this + 8) = &PTR_FUN_00d74f2c;
    local_4 = 0;
  }
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_LAB_00d7af34;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_3 == '\0') {
    FUN_00a19890((void *)(*(int *)(*(int *)this + 4) + (int)this),param_1,param_2);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a919f0 @ 00a919f0 ////

void __fastcall FUN_00a919f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a91420();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a91a20 @ 00a91a20 ////

void FUN_00a91a20(void *param_1)

{
  if (*(char *)((int)param_1 + 0x39) == '\0') {
    FUN_00a91a20(*(void **)((int)param_1 + 8));
    FUN_00a90280((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a91a60 @ 00a91a60 ////

int * __thiscall FUN_00a91a60(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if (*(int *)this == 1) {
    FUN_00a916e0(this,param_1,param_2);
  }
  return this;
}


//// FUNCTION FUN_00a91a80 @ 00a91a80 ////

int * __cdecl FUN_00a91a80(int *param_1,void *param_2)

{
  int iVar1;
  locale *plVar2;
  uint uVar3;
  int *piVar4;
  ios_base *this;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *local_30;
  char local_2c;
  facet *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  char local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfcb00;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  uVar5 = 0;
  local_1c = 0;
  local_15 = '\0';
  ExceptionList = &pvStack_10;
  FUN_00a912a0(&local_30,param_1,0);
  local_8 = 0;
  if (local_2c != '\0') {
    plVar2 = (locale *)
             FUN_00a16270((void *)(*(int *)(*param_1 + 4) + (int)param_1),(int *)&local_20);
    local_8._0_1_ = 1;
    local_28 = FUN_00a17ec0(plVar2);
    local_8._0_1_ = 0;
    if (local_20 != 0) {
      FUN_00acbfc6(&local_24,0);
      iVar1 = *(int *)(local_20 + 4);
      if ((iVar1 != 0) && (iVar1 != -1)) {
        *(int *)(local_20 + 4) = iVar1 + -1;
      }
      puVar6 = (undefined4 *)(local_20 & (*(int *)(local_20 + 4) != 0) - 1);
      FUN_00acbfe9(&local_24);
      if (puVar6 != (undefined4 *)0x0) {
        (**(code **)*puVar6)(1);
      }
    }
    FUN_00404e70(param_2,0,0xffffffff);
    uVar7 = *(uint *)(*(int *)(*param_1 + 4) + 0x18 + (int)param_1);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (((int)uVar7 < 1) || (0xfffffffd < uVar7)) {
      uVar7 = 0xfffffffe;
    }
    piVar4 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28);
    if ((*(byte **)piVar4[8] == (byte *)0x0) ||
       (uVar5 = local_1c, *(int *)piVar4[0xc] + *(uint *)piVar4[8] <= *(uint *)piVar4[8])) {
      uVar3 = (**(code **)(*piVar4 + 0x10))();
    }
    else {
      uVar3 = (uint)**(byte **)piVar4[8];
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (uVar3 == 0xffffffff) {
        piVar4 = (int *)FUN_00a91bec();
        return piVar4;
      }
      if ((*(byte *)(*(int *)(local_28 + 0x10) + (uVar3 & 0xff) * 2) & 0x48) != 0) break;
      FUN_00966e20(param_2,1,(char)uVar3);
      local_15 = '\x01';
      uVar3 = FUN_00a90770(*(int **)(*(int *)(*param_1 + 4) + 0x28 + (int)param_1));
    }
  }
  *(undefined4 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x18) = 0;
  local_8 = 0;
  if (local_15 == '\0') {
    uVar5 = uVar5 | 2;
  }
  this = (ios_base *)(*(int *)(*param_1 + 4) + (int)param_1);
  if (uVar5 != 0) {
    uVar5 = *(uint *)(this + 8) | uVar5;
    if (*(int *)(this + 0x28) == 0) {
      uVar5 = uVar5 | 4;
    }
    std::ios_base::clear(this,uVar5,false);
  }
  iVar1 = *(int *)(*(int *)(*local_30 + 4) + 0x28 + (int)local_30);
  local_8 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00accb42((undefined4 *)(iVar1 + 4));
  }
  ExceptionList = pvStack_10;
  return param_1;
}


//// FUNCTION FUN_00a91bec @ 00a91bec ////

void FUN_00a91bec(void)

{
  int iVar1;
  uint uVar2;
  ios_base *this;
  uint unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  
  *(undefined4 *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + -0x11) == '\0') {
    unaff_EBX = unaff_EBX | 2;
  }
  this = (ios_base *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI);
  if (unaff_EBX != 0) {
    uVar2 = *(uint *)(this + 8) | unaff_EBX;
    if (*(int *)(this + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    std::ios_base::clear(this,uVar2,false);
  }
  iVar1 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x2c) + 4) + 0x28 +
                  (int)*(int **)(unaff_EBP + -0x2c));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00accb42((undefined4 *)(iVar1 + 4));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


//// FUNCTION FUN_00a91c60 @ 00a91c60 ////

bool __cdecl FUN_00a91c60(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_2;
  puVar2 = param_1;
  if (*param_1 < *param_2) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)((*param_2 < *param_1) + 1);
    if (puVar4 != (uint *)0x1) goto LAB_00a91cc5;
    puVar1 = param_1 + 1;
    param_1 = puVar4;
    FUN_00a916e0(&param_1,puVar1,param_2 + 1);
    puVar4 = param_1;
  }
  if (puVar4 == (uint *)0x1) {
    if ((int)puVar2[9] < (int)puVar3[9]) {
      return true;
    }
    puVar4 = (uint *)(((int)puVar3[9] < (int)puVar2[9]) + 1);
  }
LAB_00a91cc5:
  return puVar4 == (uint *)0x0;
}


//// FUNCTION FUN_00a91ce0 @ 00a91ce0 ////

int * __thiscall FUN_00a91ce0(void *this,int param_1,byte param_2,int param_3)

{
  ios_base iVar1;
  ios_base *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcb37;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_00d7afd8;
    *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d74f2c;
    local_4 = 0;
  }
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_LAB_00d7af34;
  *(undefined4 *)((int)this + 4) = 0;
  this_00 = (ios_base *)(*(int *)(*(int *)this + 4) + (int)this);
  std::ios_base::_Init(this_00);
  *(void **)(this_00 + 0x28) = (void *)((int)this + 8);
  *(undefined4 *)(this_00 + 0x2c) = 0;
  iVar1 = (ios_base)FUN_00a18a80(this_00,0x20);
  this_00[0x30] = iVar1;
  if (*(int *)(this_00 + 0x28) == 0) {
    std::ios_base::clear(this_00,*(uint *)(this_00 + 8) | 4,false);
  }
  *(undefined4 *)(this_00 + 4) = 0;
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_LAB_00d7afcc;
  local_4 = 2;
  FUN_00a91390((void *)((int)this + 8),param_1,param_2 | 1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a91dc0 @ 00a91dc0 ////

int __fastcall FUN_00a91dc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a91420();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a91df0 @ 00a91df0 ////

void FUN_00a91df0(uint *param_1,uint *param_2)

{
  FUN_00a91c60(param_1,param_2);
  return;
}


//// FUNCTION FUN_00a91e10 @ 00a91e10 ////

void __fastcall FUN_00a91e10(int param_1)

{
  FUN_00a91a20(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00a91e40 @ 00a91e40 ////

undefined4 * __thiscall FUN_00a91e40(void *this,uint *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x39);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = FUN_00a91c60(puVar5 + 3,param_1);
    if (bVar3) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x39);
  }
  return puVar2;
}


//// FUNCTION FUN_00a91e80 @ 00a91e80 ////

undefined4 * __thiscall FUN_00a91e80(void *this,uint *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)((int)this + 4);
  cVar1 = *(char *)((int)puVar5[1] + 0x39);
  puVar2 = (undefined4 *)puVar5[1];
  while (cVar1 == '\0') {
    bVar3 = FUN_00a91c60(param_1,puVar2 + 3);
    if (bVar3) {
      puVar4 = (undefined4 *)*puVar2;
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)puVar2[2];
    }
    puVar2 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x39);
  }
  return puVar5;
}


//// FUNCTION FUN_00a91ec0 @ 00a91ec0 ////

void __thiscall
FUN_00a91ec0(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,undefined2 *param_8)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  byte bVar4;
  int *piVar5;
  locale *plVar6;
  undefined3 extraout_var;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *_Str;
  int local_34;
  char *local_30;
  char local_2c;
  char local_2b [31];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcb58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar5 = FUN_00ad4b6c();
  pvVar2 = param_6;
  *piVar5 = 0;
  plVar6 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  bVar4 = FUN_00a920a0(this,&local_2c,&param_2,&param_4,*(uint *)((int)pvVar2 + 0x10),plVar6);
  pvVar2 = param_6;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_34,0);
    iVar1 = *(int *)((int)pvVar2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)((int)pvVar2 + 4) = iVar1 + -1;
    }
    puVar9 = (undefined4 *)((uint)pvVar2 & (*(int *)((int)pvVar2 + 4) != 0) - 1);
    FUN_00acbfe9(&local_34);
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)(1);
    }
  }
  _Str = local_2b;
  if (local_2c != '-') {
    _Str = &local_2c;
  }
  uVar7 = _strtoul(_Str,&local_30,CONCAT31(extraout_var,bVar4));
  uVar8 = FUN_00a92000(&param_2,&param_4);
  puVar3 = param_7;
  if ((char)uVar8 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_30 != _Str) {
    piVar5 = FUN_00ad4b6c();
    if ((*piVar5 == 0) && (uVar7 < 0x10000)) {
      if (local_2c == '-') {
        uVar7 = -uVar7;
      }
      *param_8 = (short)uVar7;
      goto LAB_00a91fd4;
    }
  }
  *puVar3 = *puVar3 | 2;
LAB_00a91fd4:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a92000 @ 00a92000 ////

undefined4 __thiscall FUN_00a92000(void *this,int *param_1)

{
  if (*(char *)((int)this + 4) == '\0') {
    FUN_00a92050(this);
  }
  if ((char)param_1[1] == '\0') {
    FUN_00a92050(param_1);
  }
  if (*(int *)this == 0) {
    if (*param_1 == 0) {
      return 1;
    }
  }
  else if (*param_1 != 0) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00a92050 @ 00a92050 ////

uint __fastcall FUN_00a92050(int *param_1)

{
  int *piVar1;
  uint in_EAX;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((*(byte **)piVar1[8] == (byte *)0x0) ||
       (*(int *)piVar1[0xc] + *(uint *)piVar1[8] <= *(uint *)piVar1[8])) {
      in_EAX = (**(code **)(*piVar1 + 0x10))();
    }
    else {
      in_EAX = (uint)**(byte **)piVar1[8];
    }
    if (in_EAX != 0xffffffff) {
      *(char *)((int)param_1 + 5) = (char)in_EAX;
      *(undefined1 *)(param_1 + 1) = 1;
      return in_EAX;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return CONCAT31((int3)(in_EAX >> 8),*(undefined1 *)((int)param_1 + 5));
}


//// FUNCTION FUN_00a920a0 @ 00a920a0 ////

byte __cdecl
FUN_00a920a0(undefined4 param_1,char *param_2,int *param_3,int *param_4,uint param_5,locale *param_6
            )

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  facet *this;
  undefined4 uVar6;
  uint uVar7;
  void *pvVar8;
  char ****ppppcVar9;
  char ****ppppcVar10;
  char *pcVar11;
  int iVar12;
  char *pcStack_50;
  size_t sStack_48;
  undefined1 auStack_44 [4];
  char ***apppcStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 local_28 [4];
  char ***apppcStack_24 [5];
  uint uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcb80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = FUN_00a924c0(param_6);
  FUN_00a924a0(this,local_28);
  local_4 = 0;
  cVar4 = (**(code **)(*(int *)this + 8))();
  pcStack_50 = param_2;
  uVar6 = FUN_00a92000(param_3,param_4);
  if ((char)uVar6 == '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    if (*(char *)((int)param_3 + 5) == '+') {
      *param_2 = '+';
    }
    else {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      if (*(char *)((int)param_3 + 5) != '-') goto LAB_00a92147;
      *param_2 = '-';
    }
    pcStack_50 = param_2 + 1;
    FUN_00a92450(param_3);
  }
LAB_00a92147:
  uVar7 = param_5 & 0xe00;
  if (uVar7 == 0x400) {
    bVar5 = 8;
  }
  else if (uVar7 == 0x800) {
    bVar5 = 0x10;
  }
  else {
    bVar5 = -(uVar7 != 0) & 10;
  }
  cVar2 = '\0';
  bVar3 = false;
  uVar6 = FUN_00a92000(param_3,param_4);
  if ((char)uVar6 == '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    if (*(char *)((int)param_3 + 5) != '0') goto LAB_00a92222;
    cVar2 = '\x01';
    FUN_00a92450(param_3);
    uVar6 = FUN_00a92000(param_3,param_4);
    if ((char)uVar6 != '\0') {
LAB_00a92213:
      if (bVar5 == 0) {
        bVar5 = 8;
        goto LAB_00a9222b;
      }
      goto LAB_00a92226;
    }
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    if (*(char *)((int)param_3 + 5) != 'x') {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      if (*(char *)((int)param_3 + 5) != 'X') goto LAB_00a92213;
    }
    if ((bVar5 != 0) && (bVar5 != 0x10)) goto LAB_00a92213;
    bVar5 = 0x10;
    cVar2 = '\0';
    FUN_00a92450(param_3);
LAB_00a9222b:
    sStack_48 = ((bVar5 != 8) - 1 & 0xfffffff2) + 0x16;
  }
  else {
LAB_00a92222:
    if (bVar5 != 0) {
LAB_00a92226:
      if (bVar5 != 10) goto LAB_00a9222b;
    }
    sStack_48 = 10;
  }
  FUN_00a1b310(auStack_44,1,cVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar12 = 0;
  uVar6 = FUN_00a92000(param_3,param_4);
  pcVar11 = pcStack_50;
  if ((char)uVar6 == '\0') {
    do {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      cVar1 = *(char *)((int)param_3 + 5);
      *pcVar11 = cVar1;
      pvVar8 = _memchr("0123456789abcdefABCDEF",(int)cVar1,sStack_48);
      if (pvVar8 == (void *)0x0) {
        ppppcVar10 = (char ****)apppcStack_40[0];
        if (uStack_2c < 0x10) {
          ppppcVar10 = apppcStack_40;
        }
        if ((*(char *)((int)ppppcVar10 + iVar12) == '\0') || (cVar4 == '\0')) break;
        if ((char)param_3[1] == '\0') {
          FUN_00a92050(param_3);
        }
        if (*(char *)((int)param_3 + 5) != cVar4) break;
        FUN_00966e20(auStack_44,1,0);
        iVar12 = iVar12 + 1;
        pcVar11 = pcStack_50;
      }
      else {
        if (((bVar3) || (*pcVar11 != '0')) && (pcVar11 < param_2 + 0x1f)) {
          pcVar11 = pcVar11 + 1;
          bVar3 = true;
          pcStack_50 = pcVar11;
        }
        cVar2 = '\x01';
        ppppcVar10 = (char ****)apppcStack_40[0];
        if (uStack_2c < 0x10) {
          ppppcVar10 = apppcStack_40;
        }
        if (*(char *)((int)ppppcVar10 + iVar12) != '\x7f') {
          ppppcVar10 = (char ****)apppcStack_40[0];
          if (uStack_2c < 0x10) {
            ppppcVar10 = apppcStack_40;
          }
          *(char *)((int)ppppcVar10 + iVar12) = *(char *)((int)ppppcVar10 + iVar12) + '\x01';
        }
      }
      FUN_00a92450(param_3);
      uVar6 = FUN_00a92000(param_3,param_4);
    } while ((char)uVar6 == '\0');
    if (iVar12 != 0) {
      ppppcVar10 = (char ****)apppcStack_40[0];
      if (uStack_2c < 0x10) {
        ppppcVar10 = apppcStack_40;
      }
      if (*(char *)((int)ppppcVar10 + iVar12) < '\x01') {
        cVar2 = '\0';
      }
      else {
        iVar12 = iVar12 + 1;
      }
    }
  }
  ppppcVar10 = (char ****)apppcStack_24[0];
  if (uStack_10 < 0x10) {
    ppppcVar10 = apppcStack_24;
  }
  if (cVar2 != '\0') {
    while ((iVar12 != 0 && (cVar4 = *(char *)ppppcVar10, cVar4 != '\x7f'))) {
      iVar12 = iVar12 + -1;
      if (iVar12 != 0) {
        ppppcVar9 = (char ****)apppcStack_40[0];
        if (uStack_2c < 0x10) {
          ppppcVar9 = apppcStack_40;
        }
        if (cVar4 != *(char *)((int)ppppcVar9 + iVar12)) goto LAB_00a923f7;
      }
      if (iVar12 == 0) {
        ppppcVar9 = (char ****)apppcStack_40[0];
        if (uStack_2c < 0x10) {
          ppppcVar9 = apppcStack_40;
        }
        if (cVar4 < *(char *)ppppcVar9) goto LAB_00a923f7;
      }
      if ('\0' < *(char *)((int)ppppcVar10 + 1)) {
        ppppcVar10 = (char ****)((int)ppppcVar10 + 1);
      }
    }
    param_2 = pcStack_50;
    if (!bVar3) {
      *pcStack_50 = '0';
      param_2 = pcStack_50 + 1;
    }
  }
LAB_00a923f7:
  *param_2 = '\0';
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(apppcStack_40[0]);
  }
  uStack_2c = 0xf;
  uStack_30 = 0;
  apppcStack_40[0] = (char ***)((uint)apppcStack_40[0] & 0xffffff00);
  if (uStack_10 < 0x10) {
    ExceptionList = pvStack_c;
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  _free(apppcStack_24[0]);
}


//// FUNCTION FUN_00a92450 @ 00a92450 ////

void __fastcall FUN_00a92450(int *param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((*(uint *)piVar1[8] == 0) ||
       (uVar3 = *(uint *)piVar1[8], *(int *)piVar1[0xc] + uVar3 <= uVar3)) {
      uVar3 = (**(code **)(*piVar1 + 0x14))();
    }
    else {
      *(int *)piVar1[0xc] = *(int *)piVar1[0xc] + -1;
      pbVar2 = *(byte **)piVar1[8];
      *(byte **)piVar1[8] = pbVar2 + 1;
      uVar3 = (uint)*pbVar2;
    }
    if (uVar3 != 0xffffffff) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00a924a0 @ 00a924a0 ////

undefined4 __thiscall FUN_00a924a0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0xc))(param_1);
  return param_1;
}


//// FUNCTION FUN_00a924c0 @ 00a924c0 ////

facet * __cdecl FUN_00a924c0(locale *param_1)

{
  facet *this;
  int iVar1;
  facet *local_24;
  int local_20;
  int local_1c;
  exception local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcb98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00acbfc6(&local_1c,0);
  local_24 = DAT_010c9f58;
  local_4 = 0;
  if (DAT_010c9f5c == 0) {
    FUN_00acbfc6(&local_20,0);
    if (DAT_010c9f5c == 0) {
      DAT_010c9f5c = DAT_010cbae8 + 1;
      DAT_010cbae8 = DAT_010c9f5c;
    }
    FUN_00acbfe9(&local_20);
  }
  this = std::locale::_Getfacet(param_1,DAT_010c9f5c);
  if ((this == (facet *)0x0) && (this = local_24, local_24 == (facet *)0x0)) {
    iVar1 = FUN_00a925d0((int *)&local_24);
    this = local_24;
    if (iVar1 == -1) {
      FUN_00ace1fb(local_18);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_18,&DAT_00e398b8);
    }
    DAT_010c9f58 = local_24;
    FUN_00acbfc6(&local_20,0);
    if (*(int *)(this + 4) != -1) {
      *(int *)(this + 4) = *(int *)(this + 4) + 1;
    }
    FUN_00acbfe9(&local_20);
    std::locale::facet::_Register(this);
  }
  local_4 = 0xffffffff;
  FUN_00acbfe9(&local_1c);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a925d0 @ 00a925d0 ////

undefined4 __cdecl FUN_00a925d0(int *param_1)

{
  undefined4 *puVar1;
  _Locinfo local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcbd1;
  local_c = ExceptionList;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x18);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[1] = 0;
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      *puVar1 = &PTR_FUN_00d7affc;
      std::_Locinfo::_Locinfo(local_80,"C");
      local_4._0_1_ = 2;
      FUN_00a92740((int)puVar1);
      local_4 = CONCAT31(local_4._1_3_,1);
      std::_Locinfo::~_Locinfo(local_80);
    }
    *param_1 = (int)puVar1;
  }
  ExceptionList = local_c;
  return 4;
}


//// FUNCTION FUN_00a926a0 @ 00a926a0 ////

undefined4 * __thiscall FUN_00a926a0(void *this,byte param_1)

{
  FUN_00a926c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a926c0 @ 00a926c0 ////

void __fastcall FUN_00a926c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfcbe8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d7affc;
  local_4 = 0;
  FUN_00a92710((int)param_1);
  *param_1 = &PTR_LAB_00d74e94;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a92710 @ 00a92710 ////

void __fastcall FUN_00a92710(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00a92740 @ 00a92740 ////

void __fastcall FUN_00a92740(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _Cvtvec *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfcc00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00ad4bf1();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_8 = 0;
  __Getcvt(unaff_EDI);
  uVar2 = FUN_00a92820((char *)puVar1[2]);
  *(undefined4 *)(param_1 + 8) = uVar2;
  __Getcvt(unaff_EDI);
  uVar2 = FUN_00a92820("false");
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  __Getcvt(unaff_EDI);
  uVar2 = FUN_00a92820("true");
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  __Getcvt(unaff_EDI);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)*puVar1;
  __Getcvt(unaff_EDI);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)puVar1[1];
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a92820 @ 00a92820 ////

void __cdecl FUN_00a92820(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (1 - (int)(param_1 + 1));
  pcVar3 = operator_new((uint)pcVar2);
  for (; pcVar2 != (char *)0x0; pcVar2 = pcVar2 + -1) {
    *pcVar3 = *param_1;
    pcVar3 = pcVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00a92860 @ 00a92860 ////

void __thiscall
FUN_00a92860(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,ulong *param_8)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  byte bVar4;
  int *piVar5;
  locale *plVar6;
  undefined3 extraout_var;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *_Str;
  int local_34;
  char *local_30;
  char local_2c;
  char local_2b [31];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcc18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar5 = FUN_00ad4b6c();
  pvVar2 = param_6;
  *piVar5 = 0;
  plVar6 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  bVar4 = FUN_00a920a0(this,&local_2c,&param_2,&param_4,*(uint *)((int)pvVar2 + 0x10),plVar6);
  pvVar2 = param_6;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_34,0);
    iVar1 = *(int *)((int)pvVar2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)((int)pvVar2 + 4) = iVar1 + -1;
    }
    puVar9 = (undefined4 *)((uint)pvVar2 & (*(int *)((int)pvVar2 + 4) != 0) - 1);
    FUN_00acbfe9(&local_34);
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)(1);
    }
  }
  _Str = local_2b;
  if (local_2c != '-') {
    _Str = &local_2c;
  }
  uVar7 = _strtoul(_Str,&local_30,CONCAT31(extraout_var,bVar4));
  uVar8 = FUN_00a92000(&param_2,&param_4);
  puVar3 = param_7;
  if ((char)uVar8 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if ((local_30 == _Str) || (piVar5 = FUN_00ad4b6c(), *piVar5 != 0)) {
    *puVar3 = *puVar3 | 2;
  }
  else {
    if (local_2c == '-') {
      uVar7 = -uVar7;
    }
    *param_8 = uVar7;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a929a0 @ 00a929a0 ////

void __thiscall
FUN_00a929a0(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,long *param_8)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  byte bVar4;
  int *piVar5;
  locale *plVar6;
  undefined3 extraout_var;
  long lVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int local_34;
  char *local_30;
  char local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcc38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar5 = FUN_00ad4b6c();
  pvVar2 = param_6;
  *piVar5 = 0;
  plVar6 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  bVar4 = FUN_00a920a0(this,local_2c,&param_2,&param_4,*(uint *)((int)pvVar2 + 0x10),plVar6);
  lVar7 = _strtol(local_2c,&local_30,CONCAT31(extraout_var,bVar4));
  pvVar2 = param_6;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_34,0);
    iVar1 = *(int *)((int)pvVar2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)((int)pvVar2 + 4) = iVar1 + -1;
    }
    puVar9 = (undefined4 *)((uint)pvVar2 & (*(int *)((int)pvVar2 + 4) != 0) - 1);
    FUN_00acbfe9(&local_34);
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)(1);
    }
  }
  uVar8 = FUN_00a92000(&param_2,&param_4);
  puVar3 = param_7;
  if ((char)uVar8 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_30 != local_2c) {
    piVar5 = FUN_00ad4b6c();
    if (*piVar5 == 0) {
      *param_8 = lVar7;
      goto LAB_00a92a95;
    }
  }
  *puVar3 = *puVar3 | 2;
LAB_00a92a95:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a92ac0 @ 00a92ac0 ////

void __thiscall
FUN_00a92ac0(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,ulong *param_8)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  byte bVar4;
  int *piVar5;
  locale *plVar6;
  undefined3 extraout_var;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int local_34;
  char *local_30;
  char local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcc58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar5 = FUN_00ad4b6c();
  pvVar2 = param_6;
  *piVar5 = 0;
  plVar6 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  bVar4 = FUN_00a920a0(this,local_2c,&param_2,&param_4,*(uint *)((int)pvVar2 + 0x10),plVar6);
  uVar7 = _strtoul(local_2c,&local_30,CONCAT31(extraout_var,bVar4));
  pvVar2 = param_6;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_34,0);
    iVar1 = *(int *)((int)pvVar2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)((int)pvVar2 + 4) = iVar1 + -1;
    }
    puVar9 = (undefined4 *)((uint)pvVar2 & (*(int *)((int)pvVar2 + 4) != 0) - 1);
    FUN_00acbfe9(&local_34);
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)(1);
    }
  }
  uVar8 = FUN_00a92000(&param_2,&param_4);
  puVar3 = param_7;
  if ((char)uVar8 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_30 != local_2c) {
    piVar5 = FUN_00ad4b6c();
    if (*piVar5 == 0) {
      *param_8 = uVar7;
      goto LAB_00a92bb5;
    }
  }
  *puVar3 = *puVar3 | 2;
LAB_00a92bb5:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a92be0 @ 00a92be0 ////

void __thiscall
FUN_00a92be0(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,longlong *param_8)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  byte bVar4;
  int *piVar5;
  locale *plVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int local_34;
  char *local_30;
  char local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcc78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar5 = FUN_00ad4b6c();
  pvVar2 = param_6;
  *piVar5 = 0;
  plVar6 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  bVar4 = FUN_00a920a0(this,local_2c,&param_2,&param_4,*(uint *)((int)pvVar2 + 0x10),plVar6);
  lVar9 = __strtoi64(local_2c,&local_30,CONCAT31(extraout_var,bVar4));
  pvVar2 = param_6;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_34,0);
    iVar1 = *(int *)((int)pvVar2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)((int)pvVar2 + 4) = iVar1 + -1;
    }
    puVar8 = (undefined4 *)((uint)pvVar2 & (*(int *)((int)pvVar2 + 4) != 0) - 1);
    FUN_00acbfe9(&local_34);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
  uVar7 = FUN_00a92000(&param_2,&param_4);
  puVar3 = param_7;
  if ((char)uVar7 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_30 != local_2c) {
    piVar5 = FUN_00ad4b6c();
    if (*piVar5 == 0) {
      *param_8 = lVar9;
      goto LAB_00a92cdb;
    }
  }
  *puVar3 = *puVar3 | 2;
LAB_00a92cdb:
  param_1[1] = param_3;
  *param_1 = param_2;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a92d00 @ 00a92d00 ////

void __thiscall
FUN_00a92d00(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,ulonglong *param_8)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  byte bVar4;
  int *piVar5;
  locale *plVar6;
  undefined3 extraout_var;
  undefined4 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int local_34;
  char *local_30;
  char local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcc98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar5 = FUN_00ad4b6c();
  pvVar2 = param_6;
  *piVar5 = 0;
  plVar6 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  bVar4 = FUN_00a920a0(this,local_2c,&param_2,&param_4,*(uint *)((int)pvVar2 + 0x10),plVar6);
  uVar9 = __strtoui64(local_2c,&local_30,CONCAT31(extraout_var,bVar4));
  pvVar2 = param_6;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_34,0);
    iVar1 = *(int *)((int)pvVar2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)((int)pvVar2 + 4) = iVar1 + -1;
    }
    puVar8 = (undefined4 *)((uint)pvVar2 & (*(int *)((int)pvVar2 + 4) != 0) - 1);
    FUN_00acbfe9(&local_34);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
  uVar7 = FUN_00a92000(&param_2,&param_4);
  puVar3 = param_7;
  if ((char)uVar7 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_30 != local_2c) {
    piVar5 = FUN_00ad4b6c();
    if (*piVar5 == 0) {
      *param_8 = uVar9;
      goto LAB_00a92dfb;
    }
  }
  *puVar3 = *puVar3 | 2;
LAB_00a92dfb:
  param_1[1] = param_3;
  *param_1 = param_2;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a92e20 @ 00a92e20 ////

void __thiscall
FUN_00a92e20(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,float *param_8)

{
  void *pvVar1;
  uint *puVar2;
  int *piVar3;
  locale *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  int local_54;
  char *local_50;
  float local_4c;
  char local_48 [60];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfccb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = FUN_00ad4b6c();
  *piVar3 = 0;
  plVar4 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  iVar5 = FUN_00a92f40(this,local_48,&param_2,&param_4,plVar4);
  fVar8 = FUN_00acd10c(local_48,&local_50,iVar5);
  pvVar1 = param_6;
  local_4c = (float)fVar8;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_54,0);
    iVar5 = *(int *)((int)pvVar1 + 4);
    if ((iVar5 != 0) && (iVar5 != -1)) {
      *(int *)((int)pvVar1 + 4) = iVar5 + -1;
    }
    puVar7 = (undefined4 *)((uint)pvVar1 & (*(int *)((int)pvVar1 + 4) != 0) - 1);
    FUN_00acbfe9(&local_54);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
  }
  uVar6 = FUN_00a92000(&param_2,&param_4);
  puVar2 = param_7;
  if ((char)uVar6 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_50 != local_48) {
    piVar3 = FUN_00ad4b6c();
    if (*piVar3 == 0) {
      *param_8 = local_4c;
      goto LAB_00a92f17;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_00a92f17:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a92f40 @ 00a92f40 ////

int __cdecl
FUN_00a92f40(undefined4 param_1,undefined1 *param_2,int *param_3,int *param_4,locale *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  facet *this;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *****pppppcVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 local_28 [4];
  char ****local_24 [5];
  uint local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcce0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = FUN_00a924c0(param_5);
  FUN_00a924a0(this,local_28);
  local_4 = 0;
  local_54 = param_2;
  bVar1 = false;
  uVar5 = FUN_00a92000(param_3,param_4);
  if ((char)uVar5 == '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    if (*(char *)((int)param_3 + 5) == '+') {
      *param_2 = 0x2b;
    }
    else {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      if (*(char *)((int)param_3 + 5) != '-') goto LAB_00a92fe0;
      *param_2 = 0x2d;
    }
    local_54 = param_2 + 1;
    FUN_00a92450(param_3);
  }
LAB_00a92fe0:
  iVar10 = 0;
  bVar2 = false;
  local_4c = 0;
  local_50 = 0;
  pppppcVar8 = (char *****)local_24[0];
  if (local_10 < 0x10) {
    pppppcVar8 = local_24;
  }
  if (*(char *)pppppcVar8 == '\x7f') {
LAB_00a93378:
    uVar5 = FUN_00a92000(param_3,param_4);
    if ((char)uVar5 == '\0') {
      do {
        if ((char)param_3[1] == '\0') {
          FUN_00a92050(param_3);
        }
        if (*(char *)((int)param_3 + 5) < '0') goto LAB_00a93214;
        if ((char)param_3[1] == '\0') {
          FUN_00a92050(param_3);
        }
        if ('9' < *(char *)((int)param_3 + 5)) goto LAB_00a93214;
        if (local_4c < 0x24) {
          if ((char)param_3[1] == '\0') {
            FUN_00a92050(param_3);
          }
          if ((*(char *)((int)param_3 + 5) != '0') || (local_4c != 0)) {
            if ((char)param_3[1] == '\0') {
              FUN_00a92050(param_3);
            }
            *local_54 = *(undefined1 *)((int)param_3 + 5);
            local_54 = local_54 + 1;
            local_4c = local_4c + 1;
          }
        }
        else {
          local_50 = local_50 + 1;
        }
        bVar2 = true;
        FUN_00a92450(param_3);
        uVar5 = FUN_00a92000(param_3,param_4);
      } while ((char)uVar5 == '\0');
LAB_00a93220:
      if (local_4c == 0) {
        *local_54 = 0x30;
        local_54 = local_54 + 1;
      }
    }
  }
  else {
    pppppcVar8 = (char *****)local_24[0];
    if (local_10 < 0x10) {
      pppppcVar8 = local_24;
    }
    if (*(char *)pppppcVar8 < '\x01') goto LAB_00a93378;
    cVar3 = (**(code **)(*(int *)this + 8))();
    uStack_2c = 0xf;
    uStack_40 = (char *)((uint)uStack_40 & 0xffffff00);
    uStack_30 = 1;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_40._1_1_ = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar11 = 0;
    uVar5 = FUN_00a92000(param_3,param_4);
    if ((char)uVar5 == '\0') {
      do {
        if ((char)param_3[1] == '\0') {
          FUN_00a92050(param_3);
        }
        if (*(char *)((int)param_3 + 5) < '0') {
LAB_00a9310d:
          pcVar6 = uStack_40;
          if (uStack_2c < 0x10) {
            pcVar6 = (char *)&uStack_40;
          }
          if ((pcVar6[iVar11] == '\0') || (cVar3 == '\0')) break;
          if ((char)param_3[1] == '\0') {
            FUN_00a92050(param_3);
          }
          if (*(char *)((int)param_3 + 5) != cVar3) break;
          FUN_00966e20(auStack_44,1,0);
          iVar11 = iVar11 + 1;
          iVar10 = local_4c;
        }
        else {
          if ((char)param_3[1] == '\0') {
            FUN_00a92050(param_3);
          }
          if ('9' < *(char *)((int)param_3 + 5)) goto LAB_00a9310d;
          bVar2 = true;
          if (iVar10 < 0x24) {
            if ((char)param_3[1] == '\0') {
              FUN_00a92050(param_3);
            }
            if ((*(char *)((int)param_3 + 5) != '0') || (iVar10 != 0)) {
              if ((char)param_3[1] == '\0') {
                FUN_00a92050(param_3);
              }
              *local_54 = *(undefined1 *)((int)param_3 + 5);
              local_54 = local_54 + 1;
              iVar10 = iVar10 + 1;
              local_4c = iVar10;
            }
          }
          else {
            local_50 = local_50 + 1;
          }
          pcVar6 = uStack_40;
          if (uStack_2c < 0x10) {
            pcVar6 = (char *)&uStack_40;
          }
          if (pcVar6[iVar11] != '\x7f') {
            pcVar6 = uStack_40;
            if (uStack_2c < 0x10) {
              pcVar6 = (char *)&uStack_40;
            }
            pcVar6[iVar11] = pcVar6[iVar11] + '\x01';
          }
        }
        FUN_00a92450(param_3);
        uVar5 = FUN_00a92000(param_3,param_4);
      } while ((char)uVar5 == '\0');
      if (iVar11 != 0) {
        pcVar6 = uStack_40;
        if (uStack_2c < 0x10) {
          pcVar6 = (char *)&uStack_40;
        }
        if (pcVar6[iVar11] < '\x01') {
          bVar1 = true;
        }
        else {
          iVar11 = iVar11 + 1;
        }
      }
    }
    pppppcVar8 = (char *****)local_24[0];
    if (local_10 < 0x10) {
      pppppcVar8 = local_24;
    }
    if (!bVar1) {
      while( true ) {
        if ((iVar11 == 0) || (cVar3 = *(char *)pppppcVar8, cVar3 == '\x7f')) goto LAB_00a93201;
        iVar11 = iVar11 + -1;
        if (iVar11 != 0) break;
LAB_00a931de:
        if (iVar11 == 0) {
          pcVar6 = uStack_40;
          if (uStack_2c < 0x10) {
            pcVar6 = (char *)&uStack_40;
          }
          if (cVar3 < *pcVar6) goto LAB_00a931fc;
        }
        if ('\0' < *(char *)((int)pppppcVar8 + 1)) {
          pppppcVar8 = (char *****)((int)pppppcVar8 + 1);
        }
      }
      pcVar6 = uStack_40;
      if (uStack_2c < 0x10) {
        pcVar6 = (char *)&uStack_40;
      }
      if (cVar3 == pcVar6[iVar11]) goto LAB_00a931de;
LAB_00a931fc:
      bVar1 = true;
    }
LAB_00a93201:
    local_4 = local_4 & 0xffffff00;
    if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
      _free(uStack_40);
    }
LAB_00a93214:
    if (bVar2) goto LAB_00a93220;
  }
  uVar5 = FUN_00a92000(param_3,param_4);
  if ((char)uVar5 == '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    cVar3 = *(char *)((int)param_3 + 5);
    cVar4 = (**(code **)(*(int *)this + 4))();
    if (cVar3 == cVar4) {
      puVar7 = (undefined4 *)FUN_00ad4bf1();
      *local_54 = *(undefined1 *)*puVar7;
      local_54 = local_54 + 1;
      FUN_00a92450(param_3);
    }
  }
  if (local_4c == 0) {
    uVar5 = FUN_00a92000(param_3,param_4);
    cVar3 = (char)uVar5;
    while (cVar3 == '\0') {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      if (*(char *)((int)param_3 + 5) != '0') break;
      local_50 = local_50 + -1;
      bVar2 = true;
      FUN_00a92450(param_3);
      uVar5 = FUN_00a92000(param_3,param_4);
      cVar3 = (char)uVar5;
    }
    if (local_50 < 0) {
      *local_54 = 0x30;
      local_54 = local_54 + 1;
      local_50 = local_50 + 1;
    }
  }
  uVar5 = FUN_00a92000(param_3,param_4);
  if ((char)uVar5 == '\0') {
    do {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      if (*(char *)((int)param_3 + 5) < '0') goto LAB_00a9342d;
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      if ('9' < *(char *)((int)param_3 + 5)) goto LAB_00a9342d;
      if (local_4c < 0x24) {
        if ((char)param_3[1] == '\0') {
          FUN_00a92050(param_3);
        }
        *local_54 = *(undefined1 *)((int)param_3 + 5);
        local_54 = local_54 + 1;
        local_4c = local_4c + 1;
      }
      bVar2 = true;
      FUN_00a92450(param_3);
      uVar5 = FUN_00a92000(param_3,param_4);
    } while ((char)uVar5 == '\0');
  }
  else {
LAB_00a9342d:
    if (!bVar2) goto LAB_00a935a4;
  }
  uVar5 = FUN_00a92000(param_3,param_4);
  if ((char)uVar5 != '\0') goto LAB_00a935a4;
  if ((char)param_3[1] == '\0') {
    FUN_00a92050(param_3);
  }
  if (*(char *)((int)param_3 + 5) != 'e') {
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    if (*(char *)((int)param_3 + 5) != 'E') goto LAB_00a935a4;
  }
  *local_54 = 0x65;
  puVar9 = local_54 + 1;
  FUN_00a92450(param_3);
  bVar2 = false;
  iVar10 = 0;
  uVar5 = FUN_00a92000(param_3,param_4);
  if ((char)uVar5 == '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    if (*(char *)((int)param_3 + 5) == '+') {
      *puVar9 = 0x2b;
    }
    else {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      if (*(char *)((int)param_3 + 5) != '-') goto LAB_00a934df;
      *puVar9 = 0x2d;
    }
    FUN_00a92450(param_3);
    puVar9 = local_54 + 2;
  }
LAB_00a934df:
  local_54 = puVar9;
  uVar5 = FUN_00a92000(param_3,param_4);
  if ((char)uVar5 == '\0') {
    do {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      if (*(char *)((int)param_3 + 5) != '0') {
        if (!bVar2) goto LAB_00a93532;
        break;
      }
      bVar2 = true;
      FUN_00a92450(param_3);
      uVar5 = FUN_00a92000(param_3,param_4);
    } while ((char)uVar5 == '\0');
    *local_54 = 0x30;
    local_54 = local_54 + 1;
  }
LAB_00a93532:
  uVar5 = FUN_00a92000(param_3,param_4);
  cVar3 = (char)uVar5;
  while (cVar3 == '\0') {
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    if (*(char *)((int)param_3 + 5) < '0') break;
    if ((char)param_3[1] == '\0') {
      FUN_00a92050(param_3);
    }
    if ('9' < *(char *)((int)param_3 + 5)) break;
    if (iVar10 < 8) {
      if ((char)param_3[1] == '\0') {
        FUN_00a92050(param_3);
      }
      *local_54 = *(undefined1 *)((int)param_3 + 5);
      local_54 = local_54 + 1;
      iVar10 = iVar10 + 1;
    }
    bVar2 = true;
    FUN_00a92450(param_3);
    uVar5 = FUN_00a92000(param_3,param_4);
    cVar3 = (char)uVar5;
  }
LAB_00a935a4:
  if ((!bVar1) && (bVar2)) {
    param_2 = local_54;
  }
  *param_2 = 0;
  if (local_10 < 0x10) {
    ExceptionList = pvStack_c;
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24[0]);
}


//// FUNCTION FUN_00a935f0 @ 00a935f0 ////

void __thiscall
FUN_00a935f0(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,double *param_8)

{
  void *pvVar1;
  uint *puVar2;
  int *piVar3;
  locale *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int local_58;
  char *local_54;
  double local_50;
  char local_48 [60];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfccf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = FUN_00ad4b6c();
  *piVar3 = 0;
  plVar4 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  iVar5 = FUN_00a92f40(this,local_48,&param_2,&param_4,plVar4);
  local_50 = __Stod(local_48,&local_54,iVar5);
  pvVar1 = param_6;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_58,0);
    iVar5 = *(int *)((int)pvVar1 + 4);
    if ((iVar5 != 0) && (iVar5 != -1)) {
      *(int *)((int)pvVar1 + 4) = iVar5 + -1;
    }
    puVar7 = (undefined4 *)((uint)pvVar1 & (*(int *)((int)pvVar1 + 4) != 0) - 1);
    FUN_00acbfe9(&local_58);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
  }
  uVar6 = FUN_00a92000(&param_2,&param_4);
  puVar2 = param_7;
  if ((char)uVar6 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_54 != local_48) {
    piVar3 = FUN_00ad4b6c();
    if (*piVar3 == 0) {
      *param_8 = local_50;
      goto LAB_00a936e7;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_00a936e7:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a93710 @ 00a93710 ////

void __thiscall
FUN_00a93710(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,double *param_8)

{
  void *pvVar1;
  uint *puVar2;
  int *piVar3;
  locale *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  int local_58;
  char *local_54;
  double local_50;
  char local_48 [60];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcd18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = FUN_00ad4b6c();
  *piVar3 = 0;
  plVar4 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  iVar5 = FUN_00a92f40(this,local_48,&param_2,&param_4,plVar4);
  fVar8 = FUN_00acd121(local_48,&local_54,iVar5);
  pvVar1 = param_6;
  local_50 = (double)fVar8;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_58,0);
    iVar5 = *(int *)((int)pvVar1 + 4);
    if ((iVar5 != 0) && (iVar5 != -1)) {
      *(int *)((int)pvVar1 + 4) = iVar5 + -1;
    }
    puVar7 = (undefined4 *)((uint)pvVar1 & (*(int *)((int)pvVar1 + 4) != 0) - 1);
    FUN_00acbfe9(&local_58);
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
  }
  uVar6 = FUN_00a92000(&param_2,&param_4);
  puVar2 = param_7;
  if ((char)uVar6 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_54 != local_48) {
    piVar3 = FUN_00ad4b6c();
    if (*piVar3 == 0) {
      *param_8 = local_50;
      goto LAB_00a93807;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_00a93807:
  *param_1 = param_2;
  param_1[1] = param_3;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a93830 @ 00a93830 ////

void __thiscall
FUN_00a93830(void *this,int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            void *param_6,uint *param_7,ulong *param_8)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  byte bVar4;
  int *piVar5;
  locale *plVar6;
  undefined3 extraout_var;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int local_3c;
  char *local_38 [2];
  undefined4 uStack_30;
  char local_2c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcd38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar5 = FUN_00ad4b6c();
  *piVar5 = 0;
  plVar6 = (locale *)FUN_00a16270(param_6,(int *)&param_6);
  local_4 = 0;
  bVar4 = FUN_00a920a0(this,local_2c,&param_2,&param_4,0x800,plVar6);
  pvVar2 = param_6;
  local_4 = 0xffffffff;
  if (param_6 != (void *)0x0) {
    FUN_00acbfc6(&local_3c,0);
    iVar1 = *(int *)((int)pvVar2 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)((int)pvVar2 + 4) = iVar1 + -1;
    }
    puVar9 = (undefined4 *)((uint)pvVar2 & (*(int *)((int)pvVar2 + 4) != 0) - 1);
    FUN_00acbfe9(&local_3c);
    if (puVar9 != (undefined4 *)0x0) {
      (**(code **)*puVar9)(1);
    }
  }
  uVar7 = _strtoul(local_2c,local_38,CONCAT31(extraout_var,bVar4));
  uStack_30 = 0;
  uVar8 = FUN_00a92000(&param_2,&param_4);
  puVar3 = param_7;
  if ((char)uVar8 != '\0') {
    *param_7 = *param_7 | 1;
  }
  if (local_38[0] != local_2c) {
    piVar5 = FUN_00ad4b6c();
    if (*piVar5 == 0) {
      *param_8 = uVar7;
      goto LAB_00a93931;
    }
  }
  *puVar3 = *puVar3 | 2;
LAB_00a93931:
  param_1[1] = param_3;
  *param_1 = param_2;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a939a0 @ 00a939a0 ////

int * __cdecl FUN_00a939a0(int *param_1,char param_2,undefined ***param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  char ****ppppcVar5;
  uint _Size;
  void *pvVar6;
  char *pcVar7;
  uint uVar8;
  char ****ppppcVar9;
  char cStack_d5;
  undefined4 local_d4;
  undefined ***pppuStack_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  char ***local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined1 local_ac [4];
  void *local_a8;
  undefined4 local_98;
  uint local_94;
  int local_90 [2];
  undefined **appuStack_88 [4];
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *apuStack_68 [4];
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined **appuStack_40 [13];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcda9;
  pvStack_c = ExceptionList;
  local_cc = 0;
  ExceptionList = &pvStack_c;
  FUN_00a82f00(&local_d4,"Data\\FX\\mflash.txt");
  local_4 = 1;
  pcVar2 = (char *)FUN_00a7e710(&local_d4);
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = (void *)((uint)local_a8 & 0xffffff00);
  pcVar7 = pcVar2;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00405d50(local_ac,(undefined4 *)pcVar2,(int)pcVar7 - (int)(pcVar2 + 1));
  local_4._0_1_ = 2;
  FUN_00a91ce0(local_90,(int)local_ac,1,1);
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_a8);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = (char ***)((uint)local_c4[0] & 0xffffff00);
  iVar3 = *(int *)(local_90[0] + 4);
  local_4 = CONCAT31(local_4._1_3_,5);
  if ((*(byte *)((int)appuStack_88 + iVar3) & 1) == 0) {
    do {
      std::ios_base::clear
                ((ios_base *)((int)local_90 + iVar3),
                 (*(int *)((int)apuStack_68 + iVar3) != 0) - 1 & 4,false);
      FUN_00a91a80(local_90,local_c8);
      while( true ) {
        pcVar7 = &cStack_d5;
        piVar4 = FUN_00a91770(local_90);
        piVar4 = FUN_00a914a0(piVar4,pcVar7);
        if (piVar4 == (int *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(int *)(*piVar4 + 4) + (int)piVar4;
        }
        if ((uVar8 & ~-(uint)((*(uint *)(uVar8 + 8) & 6) != 0)) == 0) break;
        if ((param_3 == pppuStack_d0) && ((bool)param_2 == (cStack_d5 == 'p'))) {
          ppppcVar9 = (char ****)local_c4[0];
          if (local_b0 < 0x10) {
            ppppcVar9 = local_c4;
          }
          *param_1 = (int)(param_1 + 3);
          *(undefined1 *)(param_1 + 3) = 0;
          param_1[1] = 0;
          param_1[2] = 0x14;
          ppppcVar5 = ppppcVar9;
          do {
            cVar1 = *(char *)ppppcVar5;
            ppppcVar5 = (char ****)((int)ppppcVar5 + 1);
          } while (cVar1 != '\0');
          uVar8 = (int)ppppcVar5 - ((int)ppppcVar9 + 1);
          if (0x13 < uVar8) {
            _Size = uVar8 + 0x20 & 0xffffffe0;
            param_1[2] = _Size;
            pvVar6 = _malloc(_Size);
            *param_1 = (int)pvVar6;
          }
          _strncpy((char *)*param_1,(char *)ppppcVar9,uVar8);
          param_1[1] = uVar8;
          *(undefined1 *)(uVar8 + *param_1) = 0;
          local_cc = 1;
          if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
            _free(local_c4[0]);
          }
          local_b0 = 0xf;
          local_b4 = 0;
          local_c4[0] = (char ***)((uint)local_c4[0] & 0xffffff00);
          pppuStack_d0 = appuStack_40;
          *(undefined ***)((int)local_90 + *(int *)(local_90[0] + 4)) = &PTR_LAB_00d7afcc;
          local_4._0_1_ = 6;
          appuStack_88[0] = &PTR_FUN_00d7af94;
          if ((uStack_48 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*puStack_78);
          }
          *puStack_78 = 0;
          *apuStack_68[0] = 0;
          *puStack_58 = 0;
          *puStack_74 = 0;
          *apuStack_68[1] = 0;
          *puStack_54 = 0;
          uStack_48 = uStack_48 & 0xfffffffe;
          uStack_4c = 0;
          FUN_00a17980(appuStack_88);
          local_4 = CONCAT31(local_4._1_3_,1);
          *(undefined ***)((int)local_90 + *(int *)(local_90[0] + 4)) = &PTR_LAB_00d7af34;
          goto LAB_00a93ce1;
        }
      }
      iVar3 = *(int *)(local_90[0] + 4);
    } while ((*(byte *)((int)appuStack_88 + iVar3) & 1) == 0);
    ppppcVar9 = (char ****)local_c4[0];
    if (0xf < local_b0) goto LAB_00a93c70;
  }
  ppppcVar9 = local_c4;
LAB_00a93c70:
  *param_1 = (int)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  ppppcVar5 = ppppcVar9;
  do {
    cVar1 = *(char *)ppppcVar5;
    ppppcVar5 = (char ****)((int)ppppcVar5 + 1);
  } while (cVar1 != '\0');
  FUN_004015d0(param_1,(char *)ppppcVar9,(int)ppppcVar5 - (int)((int)ppppcVar9 + 1));
  local_cc = 1;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    _free(local_c4[0]);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = (char ***)((uint)local_c4[0] & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00a91310((int)appuStack_40);
LAB_00a93ce1:
  appuStack_40[0] = &PTR_FUN_00d74f2c;
  FUN_00acc705((ios_base *)appuStack_40);
  local_4 = local_4 & 0xffffff00;
  FUN_00a80ac0(&local_d4);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_00a93d30 @ 00a93d30 ////

void __cdecl FUN_00a93d30(undefined4 *param_1,void *param_2,char param_3,undefined ***param_4)

{
  char *pcVar1;
  bool bVar2;
  size_t sVar3;
  int *piVar4;
  float10 fVar5;
  char local_d5;
  int local_d4;
  char *local_d0;
  undefined4 local_cc;
  uint local_c8;
  char local_c4 [20];
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_80;
  char *local_7c [2];
  uint local_74;
  undefined4 local_3c [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcdde;
  local_c = ExceptionList;
  local_d4 = 0;
  ExceptionList = &local_c;
  FUN_00982150(param_2,local_3c,(byte *)"_sp_gun_fx",&local_d4);
  if (local_d4 != 0) {
    local_d0 = local_c4;
    local_c4[0] = '\0';
    local_cc = 0;
    local_c8 = 0x14;
    local_d5 = ((param_3 == '\0') - 1U & 9) + 0x67;
    local_4._0_1_ = 0;
    local_4._1_3_ = 0;
    FUN_004073f0(&local_d0,":mflash ",8);
    FUN_004073f0(&local_d0,&local_d5,1);
    sVar3 = _sprintf((char *)local_7c,(char *)&param_2_00d1b93c,param_4);
    FUN_004073f0(&local_d0,(char *)local_7c,sVar3);
    pcVar1 = local_d0;
    bVar2 = FUN_00a86fc0(local_d0);
    if (bVar2) {
      piVar4 = (int *)FUN_00a8e7f0((char *)0x0,pcVar1);
    }
    else {
      FUN_00a939a0((int *)local_7c,param_3,param_4);
      local_4._0_1_ = 1;
      piVar4 = (int *)FUN_00a8e7f0(local_7c[0],pcVar1);
      local_4._0_1_ = 0;
      if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
        _free(local_7c[0]);
      }
    }
    fVar5 = (float10)fcos((float10)-1.5707963705062866);
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_a8 = 0;
    local_90 = 0x3f800000;
    local_a0 = (float)fVar5;
    local_b0 = (float)fVar5;
    fVar5 = (float10)fsin((float10)-1.5707963705062866);
    local_ac = (float)fVar5;
    local_a4 = (float)-fVar5;
    FUN_009ab130(local_3c,&local_b0);
    local_80 = operator_new(0xb4);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_80 != (void *)0x0) {
      FUN_00a90600(local_80,param_1,(int)param_2,piVar4,local_3c);
    }
    if (0x14 < local_c8) {
                    /* WARNING: Subroutine does not return */
      _free(local_d0);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a93f50 @ 00a93f50 ////

void __thiscall FUN_00a93f50(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cfcdf8;
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
  FUN_00a8fb80((int *)&param_2);
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
      goto LAB_00a940c1;
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
      piVar2 = (int *)FUN_00a8f990(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x39) == '\0') {
      uVar3 = FUN_00a8f970((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00a940c1:
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
            FUN_00a8ffe0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x39) == '\0') {
            if ((*(char *)(*piVar4 + 0x38) != '\x01') || (*(char *)(piVar4[2] + 0x38) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x38) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x38) = 1;
                *(undefined1 *)(piVar4 + 0xe) = 0;
                FUN_00a8f9d0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xe) = (char)piVar5[0xe];
              *(undefined1 *)(piVar5 + 0xe) = 1;
              *(undefined1 *)(piVar4[2] + 0x38) = 1;
              FUN_00a8ffe0(this,(int)piVar5);
              break;
            }
LAB_00a94184:
            *(undefined1 *)(piVar4 + 0xe) = 0;
          }
        }
        else {
          if ((char)piVar4[0xe] == '\0') {
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_00a8f9d0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x39) == '\0') {
            if ((*(char *)(piVar4[2] + 0x38) == '\x01') && (*(char *)(*piVar4 + 0x38) == '\x01'))
            goto LAB_00a94184;
            if (*(char *)(*piVar4 + 0x38) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x38) = 1;
              *(undefined1 *)(piVar4 + 0xe) = 0;
              FUN_00a8ffe0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xe) = (char)piVar5[0xe];
            *(undefined1 *)(piVar5 + 0xe) = 1;
            *(undefined1 *)(*piVar4 + 0x38) = 1;
            FUN_00a8f9d0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xe) = 1;
  }
  if ((uint)_Memory[6] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[4]);
}


//// FUNCTION FUN_00a94220 @ 00a94220 ////

undefined4 * __thiscall FUN_00a94220(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_00a91e80(this,param_2);
  puVar2 = FUN_00a91e40(this,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return param_1;
}


//// FUNCTION FUN_00a94500 @ 00a94500 ////

undefined4 __thiscall FUN_00a94500(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x10))(param_1);
  return param_1;
}


//// FUNCTION FUN_00a94520 @ 00a94520 ////

undefined4 __thiscall FUN_00a94520(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)this + 0x14))(param_1);
  return param_1;
}


//// FUNCTION FUN_00a94540 @ 00a94540 ////

uint __cdecl FUN_00a94540(int *param_1,int *param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *****pppppuVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_2c;
  undefined1 local_28 [4];
  undefined4 ****local_24 [4];
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfce58;
  local_c = ExceptionList;
  cVar3 = *param_4;
  pcVar7 = param_4;
  while (cVar3 != '\0') {
    if (cVar3 == *param_4) {
      param_3 = param_3 + 1;
    }
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar3 = *pcVar1;
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24[0] = (undefined4 ****)((uint)local_24[0] & 0xffffff00);
  ExceptionList = &local_c;
  FUN_00a1ae80(local_28,param_3,0);
  local_4 = 0;
  local_2c = 0xfffffffe;
  uVar8 = 1;
  while( true ) {
    iVar9 = 0;
    uVar10 = 0;
    bVar2 = false;
    if (param_3 == 0) break;
    do {
      cVar3 = param_4[iVar9];
      if (cVar3 != '\0') {
        do {
          if (cVar3 == *param_4) break;
          cVar3 = param_4[iVar9 + 1];
          iVar9 = iVar9 + 1;
        } while (cVar3 != '\0');
      }
      pppppuVar5 = (undefined4 *****)local_24[0];
      if (local_10 < 0x10) {
        pppppuVar5 = local_24;
      }
      if (*(char *)((int)pppppuVar5 + uVar10) == '\0') {
        iVar9 = iVar9 + uVar8;
        if ((param_4[iVar9] == *param_4) || (param_4[iVar9] == '\0')) {
          uVar4 = uVar8;
          if (0x7e < uVar8) {
            uVar4 = 0x7f;
          }
          pppppuVar5 = (undefined4 *****)local_24[0];
          if (local_10 < 0x10) {
            pppppuVar5 = local_24;
          }
          *(char *)((int)pppppuVar5 + uVar10) = (char)uVar4;
          local_2c = uVar10;
        }
        else {
          uVar6 = FUN_00a92000(param_1,param_2);
          if ((char)uVar6 == '\0') {
            if ((char)param_1[1] == '\0') {
              FUN_00a92050(param_1);
            }
            if (param_4[iVar9] == *(char *)((int)param_1 + 5)) {
              bVar2 = true;
              goto LAB_00a94693;
            }
          }
          uVar4 = uVar8;
          if (0x7e < uVar8) {
            uVar4 = 0x7f;
          }
          pppppuVar5 = (undefined4 *****)local_24[0];
          if (local_10 < 0x10) {
            pppppuVar5 = local_24;
          }
          *(char *)((int)pppppuVar5 + uVar10) = (char)uVar4;
        }
      }
      else {
        pppppuVar5 = (undefined4 *****)local_24[0];
        if (local_10 < 0x10) {
          pppppuVar5 = local_24;
        }
        iVar9 = iVar9 + *(char *)((int)pppppuVar5 + uVar10);
      }
LAB_00a94693:
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_3);
    if ((!bVar2) || (uVar6 = FUN_00a92000(param_1,param_2), (char)uVar6 != '\0')) break;
    uVar8 = uVar8 + 1;
    FUN_00a92450(param_1);
    local_2c = 0xffffffff;
  }
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24[0]);
  }
  ExceptionList = local_c;
  return local_2c;
}


//// FUNCTION FUN_00a94700 @ 00a94700 ////

void __thiscall FUN_00a94700(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a91a20((void *)piVar6[1]);
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
    FUN_00a93f50(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a947c0 @ 00a947c0 ////

void __thiscall
FUN_00a947c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cfce78;
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
  piVar3 = FUN_00a91460(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00a948bb:
        *(undefined1 *)(*piVar4 + 0x38) = 1;
        *(undefined1 *)(piVar5 + 0xe) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x38) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a8ffe0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x38) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x38) = 0;
        FUN_00a8f9d0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xe] == '\0') goto LAB_00a948bb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a8f9d0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x38) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x38) = 0;
      FUN_00a8ffe0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x38);
  } while( true );
}


//// FUNCTION FUN_00a94a60 @ 00a94a60 ////

undefined4 * __thiscall FUN_00a94a60(void *this,undefined4 param_1,uint *param_2)

{
  void *this_00;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),(char *)param_2[1],param_2[2]);
  *(uint *)((int)this + 0x28) = param_2[9];
  *(undefined4 *)((int)this + 0x2c) = 0;
  this_00 = *(void **)this;
  puVar1 = FUN_00a91e80(this_00,param_2);
  puVar2 = FUN_00a91e40(this_00,param_2);
  *(undefined4 **)((int)this + 0x2c) = puVar2;
  *(bool *)((int)this + 0x30) = puVar2 != puVar1;
  return this;
}


//// FUNCTION FUN_00a94b00 @ 00a94b00 ////

void __thiscall FUN_00a94b00(void *this,undefined4 *param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  uint *puVar7;
  bool local_4;
  
  puVar4 = param_2;
  puVar2 = (uint *)(*(uint **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar2 + 0x39);
  local_4 = true;
  puVar3 = *(uint **)((int)this + 4);
  while (cVar1 == '\0') {
    local_4 = FUN_00a91c60(puVar4,puVar2 + 3);
    if (local_4) {
      puVar7 = (uint *)*puVar2;
    }
    else {
      puVar7 = (uint *)puVar2[2];
    }
    puVar3 = puVar2;
    puVar2 = puVar7;
    cVar1 = *(char *)((int)puVar7 + 0x39);
  }
  param_2 = puVar3;
  if (local_4 != false) {
    if (puVar3 == (uint *)**(int **)((int)this + 4)) {
      puVar6 = (undefined4 *)FUN_00a947c0(this,&param_2,'\x01',puVar3,puVar4);
      *param_1 = *puVar6;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00a8fc50((int *)&param_2);
  }
  puVar2 = param_2;
  bVar5 = FUN_00a91c60(param_2 + 3,puVar4);
  if (bVar5) {
    puVar6 = (undefined4 *)FUN_00a947c0(this,&param_2,local_4,puVar3,puVar4);
    *param_1 = *puVar6;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00a94be0 @ 00a94be0 ////

void __fastcall FUN_00a94be0(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  bool bVar5;
  uint *puVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  LONG LVar10;
  byte *pbVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char local_a0 [12];
  undefined4 uStack_94;
  int *local_78;
  int *local_74;
  undefined4 *local_70;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  void *local_64;
  uint local_5c;
  undefined1 local_40 [8];
  void *local_38;
  uint local_30;
  int *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfceae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d7af70;
  puVar1 = param_1 + 0x25;
  local_4 = 1;
  uStack_94 = 0xa94c24;
  local_70 = param_1;
  bVar5 = FUN_00a7c3a0("",puVar1);
  if (bVar5) {
    local_74 = (int *)&stack0xffffff54;
    pcVar12 = local_a0;
    local_a0[0] = '\0';
    uVar13 = 0;
    uVar14 = 0x14;
    FUN_004015d0(&stack0xffffff54,(char *)*puVar1,param_1[0x26]);
    puVar6 = FUN_00a903b0(local_68,param_1[0x16],pcVar12,uVar13,uVar14);
    uStack_94 = 0xa94c7a;
    FUN_00a94a60(local_40,&DAT_010c9f64,puVar6);
    local_4._0_1_ = 2;
    if (0x14 < local_5c) {
                    /* WARNING: Subroutine does not return */
      _free(local_64);
    }
    local_78 = local_14;
    local_74 = DAT_010c9f68;
    if (local_14 != DAT_010c9f68) {
      do {
        if (local_78[3] != param_1[0x16]) break;
        pbVar11 = (byte *)*puVar1;
        pbVar7 = (byte *)local_78[4];
        do {
          bVar2 = *pbVar7;
          bVar5 = bVar2 < *pbVar11;
          if (bVar2 != *pbVar11) {
LAB_00a94ce4:
            iVar8 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
            goto LAB_00a94ce9;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar5 = bVar2 < pbVar11[1];
          if (bVar2 != pbVar11[1]) goto LAB_00a94ce4;
          pbVar7 = pbVar7 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar2 != 0);
        iVar8 = 0;
LAB_00a94ce9:
        if (iVar8 != 0) break;
        if (param_1 == (undefined4 *)local_78[0xd]) {
          uStack_94 = 0xa94d02;
          puVar9 = (undefined4 *)FUN_00a93f50(&DAT_010c9f64,local_6c,local_78);
          local_78 = (int *)*puVar9;
        }
        else {
          FUN_00a8fb80((int *)&local_78);
        }
      } while (local_78 != local_74);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_38);
    }
  }
  puVar9 = param_1;
  uVar4 = DAT_0105b588;
  if (param_1[0x23] == 0) {
    puVar3 = (undefined4 *)param_1[0x16];
    LVar10 = InterlockedDecrement(puVar3 + 4);
    uVar4 = DAT_0105b588;
    if ((LVar10 == 0) && (DAT_0105b588 = 1, puVar9 = local_70, puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
      puVar9 = local_70;
    }
  }
  DAT_0105b588 = uVar4;
  if ((uint)param_1[0x27] < 0x15) {
    local_4 = 0xffffffff;
    FUN_00a7d6b0(puVar9);
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*puVar1);
}


//// FUNCTION FUN_00a94db0 @ 00a94db0 ////

void __cdecl FUN_00a94db0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  int *piVar11;
  bool bVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  char local_c0 [8];
  undefined4 uStack_b8;
  byte *local_8c;
  uint local_84;
  byte local_80 [20];
  undefined1 local_6c [4];
  undefined1 local_68 [8];
  void *pvStack_60;
  uint uStack_58;
  int *local_3c;
  undefined1 local_34 [4];
  void *local_30;
  uint local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcec8;
  local_c = ExceptionList;
  bVar8 = false;
  if (param_1 == 0) {
    return;
  }
  pcVar13 = local_c0;
  local_c0[0] = '\0';
  uVar14 = 0;
  uVar15 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&stack0xffffff34,(char *)*param_2,param_2[1]);
  puVar4 = FUN_00a903b0(local_34,param_1,pcVar13,uVar14,uVar15);
  FUN_00a94a60(local_68,&DAT_010c9f64,puVar4);
  piVar3 = DAT_010c9f68;
  local_4 = 0;
  piVar11 = local_3c;
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  do {
    if ((piVar11 == piVar3) || (piVar11[3] != param_1)) {
LAB_00a94f3d:
      bVar12 = false;
    }
    else {
      local_8c = local_80;
      local_80[0] = 0;
      local_84 = 0x14;
      uStack_b8 = 0xa94e9a;
      _strncpy((char *)local_8c,"",0);
      local_80[0] = 0;
      pbVar10 = (byte *)*param_2;
      bVar8 = true;
      pbVar5 = local_8c;
      pbVar9 = pbVar10;
      do {
        bVar1 = *pbVar5;
        bVar12 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00a94ee8:
          iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00a94eed;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar12 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00a94ee8;
        pbVar5 = pbVar5 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00a94eed:
      if (iVar6 != 0) {
        pbVar5 = (byte *)piVar11[4];
        do {
          bVar1 = *pbVar5;
          bVar12 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_00a94f28:
            iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00a94f2d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar12 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_00a94f28;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00a94f2d:
        if (iVar6 != 0) goto LAB_00a94f3d;
      }
      bVar12 = true;
    }
    if ((bVar8) && (bVar8 = false, 0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    if (!bVar12) {
      if (uStack_58 < 0x15) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(pvStack_60);
    }
    piVar2 = (int *)piVar11[0xd];
    puVar7 = (undefined4 *)FUN_00a93f50(&DAT_010c9f64,local_6c,piVar11);
    piVar11 = (int *)*puVar7;
    (**(code **)(*piVar2 + 0x18))();
    if ((piVar2[0x23] == 1) && (*(void **)(param_1 + 0x78) != (void *)0x0)) {
      FUN_00a01df0(*(void **)(param_1 + 0x78),(int)(piVar2 + 4));
    }
    piVar2[0x26] = 0;
    *(undefined1 *)piVar2[0x25] = 0;
  } while( true );
}


//// FUNCTION FUN_00a95030 @ 00a95030 ////

undefined4 * __thiscall FUN_00a95030(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00a947c0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    bVar3 = FUN_00a91c60(param_3,param_2 + 3);
    if (bVar3) {
      FUN_00a947c0(this,param_1,'\x01',param_2,puVar2);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    bVar3 = FUN_00a91c60((uint *)(puVar1[2] + 0xc),param_3);
    if (bVar3) {
      FUN_00a947c0(this,param_1,'\0',*(undefined4 **)(*(int *)((int)this + 4) + 8),puVar2);
      return param_1;
    }
  }
  else {
    bVar3 = FUN_00a91c60(param_3,param_2 + 3);
    if (bVar3) {
      param_3 = param_2;
      FUN_00a8fc50((int *)&param_3);
      puVar1 = param_3;
      cVar4 = FUN_00a91df0(param_3 + 3,puVar2);
      if (cVar4 != '\0') {
        if (*(char *)(puVar1[2] + 0x39) != '\0') {
          FUN_00a947c0(this,param_1,'\0',puVar1,puVar2);
          return param_1;
        }
        FUN_00a947c0(this,param_1,'\x01',param_2,puVar2);
        return param_1;
      }
    }
    bVar3 = FUN_00a91c60(param_2 + 3,puVar2);
    if (bVar3) {
      param_3 = param_2;
      FUN_00a8fb80((int *)&param_3);
      puVar1 = param_3;
      if (param_3 != *(uint **)((int)this + 4)) {
        cVar4 = FUN_00a91df0(puVar2,param_3 + 3);
        if (cVar4 == '\0') goto LAB_00a951c0;
      }
      if (*(char *)(param_2[2] + 0x39) != '\0') {
        FUN_00a947c0(this,param_1,'\0',param_2,puVar2);
        return param_1;
      }
      FUN_00a947c0(this,param_1,'\x01',puVar1,puVar2);
      return param_1;
    }
  }
LAB_00a951c0:
  puVar5 = (undefined4 *)FUN_00a94b00(this,local_8,puVar2);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_00a951e0 @ 00a951e0 ////

undefined4 * __thiscall FUN_00a951e0(void *this,byte param_1)

{
  FUN_00a94be0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a95200 @ 00a95200 ////

void __cdecl FUN_00a95200(int param_1,char *param_2)

{
  char **ppcVar1;
  bool bVar2;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcf12;
  local_c = ExceptionList;
  bVar2 = param_2 == (char *)0x0;
  if (bVar2) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_4c,"",0);
    local_48 = 0;
    *local_4c = '\0';
    ppcVar1 = &local_4c;
  }
  else {
    ExceptionList = &local_c;
    ppcVar1 = (char **)FUN_00a82dd0(local_2c,param_2);
  }
  local_4 = (uint)bVar2;
  FUN_00a94db0(param_1,ppcVar1);
  if ((bVar2) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((!bVar2) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a953c0 @ 00a953c0 ////

void __fastcall FUN_00a953c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a94700(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a953f0 @ 00a953f0 ////

int __fastcall FUN_00a953f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a91420();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a95420 @ 00a95420 ////

int __thiscall FUN_00a95420(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_3c;
  uint local_38;
  undefined1 *local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [20];
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcf48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x30) = 1;
  local_38 = *(uint *)((int)this + 4);
  local_34 = local_28;
  local_28[0] = 0;
  local_30 = 0;
  local_2c = 0x14;
  FUN_004015d0(&local_34,*(char **)((int)this + 8),*(uint *)((int)this + 0xc));
  local_14 = *(undefined4 *)((int)this + 0x28);
  local_10 = *param_1;
  local_4 = 0;
  piVar2 = FUN_00a95030(*(void **)this,&local_3c,*(uint **)((int)this + 0x2c),&local_38);
  iVar1 = *piVar2;
  *(int *)((int)this + 0x2c) = iVar1;
  if (0x14 < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_34);
  }
  ExceptionList = local_c;
  return iVar1 + 0x34;
}


//// FUNCTION FUN_00a954e0 @ 00a954e0 ////

void __cdecl FUN_00a954e0(void *param_1,char *param_2,char param_3,int param_4,float param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 *this;
  uint *puVar4;
  char *in_stack_ffffff38;
  uint in_stack_ffffff3c;
  uint in_stack_ffffff40;
  undefined4 *local_94;
  undefined1 *local_90;
  uint local_8c;
  void *local_88;
  void *local_84;
  uint local_80;
  uint local_7c;
  void *local_60 [2];
  uint local_58;
  undefined1 local_40 [8];
  void *local_38;
  uint local_30;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfcfae;
  local_c = ExceptionList;
  local_8c = 0;
  if ((((param_1 != (void *)0x0) &&
       (puVar1 = *(undefined4 **)((int)param_1 + 0x78), puVar1 != (undefined4 *)0x0)) &&
      (ExceptionList = &local_c, local_94 = puVar1, iVar2 = FUN_0097e350(param_1,0),
      puVar1 != (undefined4 *)0x0)) &&
     (((iVar2 != 0 && (*(int *)(iVar2 + 0x40) != 0)) &&
      ((*(uint *)(*(int *)(iVar2 + 0x40) + 8) & 0x100) != 0)))) {
    piVar3 = (int *)FUN_00a8e7f0(param_2,(char *)0x0);
    puVar1 = *(undefined4 **)((int)param_1 + 0xd0);
    if (param_3 == '\0') {
      this = operator_new(0xb4);
      local_4._0_1_ = 0;
      local_4._1_3_ = 0;
      local_90 = this;
      if (this != (undefined1 *)0x0) {
        FUN_00401de0(&local_88,"",0xffffffff);
        local_4._0_1_ = 1;
        local_8c = 1;
        FUN_00a91190(this,puVar1,(int)param_1,piVar3,local_94,&local_88,param_4,param_5);
      }
      local_60[0] = local_88;
      local_58 = local_80;
      if ((local_8c & 1) == 0) {
        ExceptionList = local_c;
        return;
      }
    }
    else {
      FUN_00a82dd0(local_60,param_2);
      local_90 = &stack0xffffff38;
      local_4 = 3;
      FUN_00403de0(&stack0xffffff38,local_60);
      puVar4 = FUN_00a903b0(&local_88,param_1,in_stack_ffffff38,in_stack_ffffff3c,in_stack_ffffff40)
      ;
      FUN_00a94a60(local_40,&DAT_010c9f64,puVar4);
      local_4._0_1_ = 4;
      if (0x14 < local_7c) {
                    /* WARNING: Subroutine does not return */
        _free(local_84);
      }
      if (local_10 == '\0') {
        local_90 = operator_new(0xb4);
        local_4._0_1_ = 5;
        if (local_90 == (undefined1 *)0x0) {
          local_94 = (undefined4 *)0x0;
        }
        else {
          local_94 = FUN_00a91190(local_90,puVar1,(int)param_1,piVar3,local_94,local_60,param_4,
                                  param_5);
        }
        local_4._0_1_ = 4;
        FUN_00a95420(local_40,&local_94);
      }
      if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_38);
      }
    }
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a95730 @ 00a95730 ////

void __cdecl
FUN_00a95730(int param_1,char *param_2,char param_3,undefined4 *param_4,undefined4 param_5,
            int param_6)

{
  int *piVar1;
  undefined1 *this;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *local_9c;
  undefined1 *local_98;
  uint *local_94;
  void *local_90;
  uint local_8c;
  uint local_88 [7];
  undefined4 *local_6c;
  uint *local_60;
  uint local_5c;
  uint local_58;
  undefined1 local_40 [8];
  void *local_38;
  uint local_30;
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd00e;
  local_c = ExceptionList;
  local_9c = (undefined4 *)0x0;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    piVar1 = (int *)FUN_00a8e7f0(param_2,(char *)0x0);
    local_6c = *(undefined4 **)(param_1 + 0xd0);
    if (param_3 == '\0') {
      this = operator_new(0xb4);
      local_4._0_1_ = 0;
      local_4._1_3_ = 0;
      local_98 = this;
      if (this != (undefined1 *)0x0) {
        local_94 = local_88;
        local_88[0] = local_88[0] & 0xffffff00;
        local_90 = (void *)0x0;
        local_8c = 0x14;
        _strncpy((char *)local_94,"",0);
        local_90 = (void *)0x0;
        *(char *)local_94 = '\0';
        local_4._0_1_ = 1;
        local_9c = (undefined4 *)0x1;
        FUN_00a904d0(this,local_6c,param_1,piVar1,&local_94,param_4,0,param_6);
      }
      local_60 = local_94;
      local_58 = local_8c;
      if (((uint)local_9c & 1) == 0) {
        ExceptionList = local_c;
        return;
      }
    }
    else {
      FUN_00a82dd0(&local_60,param_2);
      local_98 = &stack0xffffff30;
      pcVar3 = &stack0xffffff3c;
      uVar4 = 0;
      uVar5 = 0x14;
      local_4 = 3;
      FUN_004015d0(&stack0xffffff30,(char *)local_60,local_5c);
      puVar2 = FUN_00a903b0(&local_94,param_1,pcVar3,uVar4,uVar5);
      FUN_00a94a60(local_40,&DAT_010c9f64,puVar2);
      local_4._0_1_ = 4;
      if (0x14 < local_88[0]) {
                    /* WARNING: Subroutine does not return */
        _free(local_90);
      }
      if (local_10 == '\0') {
        local_98 = operator_new(0xb4);
        local_4._0_1_ = 5;
        if (local_98 == (undefined1 *)0x0) {
          local_9c = (undefined4 *)0x0;
        }
        else {
          local_9c = FUN_00a904d0(local_98,local_6c,param_1,piVar1,&local_60,param_4,1,param_6);
        }
        local_4._0_1_ = 4;
        FUN_00a95420(local_40,&local_9c);
      }
      if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_38);
      }
    }
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a95970 @ 00a95970 ////

void __cdecl FUN_00a95970(void *param_1,char *param_2,char param_3,byte *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30 [12];
  
  local_3c = 0;
  FUN_00982150(param_1,local_30,param_4,&local_3c);
  do {
    if (local_3c == 0) {
      return;
    }
    local_34 = 0;
    local_38 = FUN_0097e350(param_1,0);
    iVar4 = local_34;
    if (local_38 != 0) {
      pbVar2 = param_4;
      do {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
      uVar3 = (int)pbVar2 - (int)(param_4 + 1);
      if (5 < uVar3) {
        if ((((char)param_4[uVar3 - 1] < '0') || ('9' < (char)param_4[uVar3 - 1])) ||
           (iVar4 = _strncmp((char *)(param_4 + (uVar3 - 3)),"a_",2), iVar4 != 0)) {
          iVar4 = 3;
          bVar9 = true;
          pbVar2 = param_4 + (uVar3 - 2);
          pbVar7 = &DAT_00d7b048;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar9 = *pbVar2 == *pbVar7;
            pbVar2 = pbVar2 + 1;
            pbVar7 = pbVar7 + 1;
          } while (bVar9);
          iVar4 = local_34;
          if (!bVar9) goto LAB_00a95a6a;
        }
        else {
          uVar3 = uVar3 - 1;
        }
      }
      iVar4 = local_34;
      if ((uVar3 != 0) && (iVar8 = 0, *(int *)(local_38 + 0x28) != 0)) {
        iVar6 = 0;
        do {
          iVar5 = _strncmp((char *)(*(int *)(local_38 + 0x44) + iVar6),(char *)(param_4 + 4),
                           uVar3 - 4);
          iVar4 = iVar8;
          if (iVar5 == 0) break;
          iVar8 = iVar8 + 1;
          iVar6 = iVar6 + 0x80;
          iVar4 = local_34;
        } while (iVar8 != *(int *)(local_38 + 0x28));
      }
    }
LAB_00a95a6a:
    local_34 = iVar4;
    FUN_00a95730((int)param_1,param_2,param_3,local_30,local_3c + -1,local_34);
    FUN_00982150(param_1,local_30,param_4,&local_3c);
  } while( true );
}


//// FUNCTION FUN_00a95ac0 @ 00a95ac0 ////

void __cdecl FUN_00a95ac0(int param_1,char *param_2,char param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_30 [12];
  
  if (((*(int *)(param_1 + 0x100) != 0) &&
      (pfVar2 = *(float **)(*(int *)(param_1 + 0x100) + 4), pfVar2 != (float *)0x0)) &&
     (*(char *)pfVar2 != '\0')) {
    pfVar3 = local_30;
    for (iVar1 = 0xc; pfVar2 = pfVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar3 = pfVar3 + 1;
    }
    FUN_009aa670(local_30);
    FUN_009aafb0(local_30,param_4);
    FUN_00a95730(param_1,param_2,param_3,local_30,0,0);
  }
  return;
}


//// FUNCTION FUN_00a95b30 @ 00a95b30 ////

undefined4 * __fastcall FUN_00a95b30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_00d7b050;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[2] = 0x20;
  param_1[1] = 0x20;
  puVar2 = param_1 + 7;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[8] = 0x25;
  param_1[9] = 2;
  param_1[10] = 3;
  param_1[0xb] = 4;
  param_1[0xc] = 5;
  param_1[0xd] = 6;
  param_1[0xe] = 7;
  param_1[0xf] = 8;
  param_1[0x10] = 9;
  param_1[0x11] = 10;
  param_1[0x12] = 1;
  param_1[0x13] = 0x26;
  param_1[0x14] = 0x27;
  param_1[0x15] = 0x28;
  param_1[0x16] = 0x29;
  param_1[0x17] = 0x1b;
  param_1[0x18] = 0x21;
  param_1[0x19] = 0xf;
  param_1[0x1a] = 0x1c;
  param_1[0x1b] = 0x1e;
  param_1[0x1c] = 0x23;
  param_1[0x1d] = 0x1f;
  param_1[0x1e] = 0x13;
  param_1[0x1f] = 0x19;
  param_1[0x20] = 0x1a;
  param_1[0x21] = 0x2a;
  param_1[0x22] = 0x2b;
  param_1[0x23] = 0x2c;
  param_1[0x24] = 0x38;
  param_1[0x25] = 0xb;
  param_1[0x26] = 0x1d;
  param_1[0x27] = 0xe;
  param_1[0x28] = 0x10;
  param_1[0x29] = 0x11;
  param_1[0x2a] = 0x12;
  param_1[0x2b] = 0x14;
  param_1[0x2c] = 0x15;
  param_1[0x2d] = 0x16;
  param_1[0x2e] = 0x2d;
  param_1[0x2f] = 0x2e;
  param_1[0x30] = 0x2f;
  param_1[0x31] = 0x3a;
  param_1[0x32] = 0x30;
  param_1[0x33] = 0x24;
  param_1[0x34] = 0x22;
  param_1[0x35] = 0xd;
  param_1[0x36] = 0x20;
  param_1[0x37] = 0xc;
  param_1[0x38] = 0x18;
  param_1[0x39] = 0x17;
  param_1[0x3a] = 0x31;
  param_1[0x3b] = 0x32;
  param_1[0x3c] = 0x33;
  param_1[0x3d] = 0x3b;
  param_1[0x3e] = 0x59;
  param_1[0x3f] = 0x3c;
  param_1[0x40] = 0x34;
  param_1[0x41] = 0x35;
  param_1[0x42] = 0x40;
  param_1[0x43] = 0x41;
  param_1[0x44] = 0x42;
  param_1[0x45] = 0x43;
  param_1[0x46] = 0x44;
  param_1[0x47] = 0x45;
  param_1[0x48] = 0x46;
  param_1[0x49] = 0x47;
  param_1[0x4a] = 0x48;
  param_1[0x4b] = 0x49;
  param_1[0x4c] = 0x36;
  param_1[0x4d] = 0x37;
  param_1[0x4e] = 0x56;
  param_1[0x4f] = 0x57;
  param_1[0x50] = 0x58;
  param_1[0x51] = 0x5b;
  param_1[0x52] = 0x53;
  param_1[0x53] = 0x54;
  param_1[0x54] = 0x55;
  param_1[0x55] = 0x5c;
  param_1[0x56] = 0x50;
  param_1[0x57] = 0x51;
  param_1[0x58] = 0x52;
  param_1[0x59] = 0x4f;
  param_1[0x5a] = 0x5e;
  param_1[0x5e] = 0x4a;
  param_1[0x5f] = 0x4b;
  param_1[0x6b] = 0x4c;
  param_1[0x6c] = 0x4d;
  param_1[0x6d] = 0x4e;
  param_1[0x97] = 0x5f;
  param_1[0xa0] = 0x60;
  param_1[0xa3] = 0x5d;
  param_1[0xa4] = 0x39;
  param_1[0xa7] = 0x61;
  param_1[0xa8] = 0x62;
  param_1[0xa9] = 99;
  param_1[0xab] = 100;
  param_1[0xb5] = 0x65;
  param_1[0xb7] = 0x66;
  param_1[0xb9] = 0x67;
  param_1[0xbc] = 0x5a;
  param_1[0xbf] = 0x3d;
  param_1[0xcc] = 0x68;
  param_1[0xce] = 0x69;
  param_1[0xcf] = 0x6b;
  param_1[0xd0] = 0x6f;
  param_1[0xd2] = 0x6d;
  param_1[0xd4] = 0x6e;
  param_1[0xd6] = 0x6a;
  param_1[0xd7] = 0x6c;
  param_1[0xd8] = 0x70;
  param_1[0xd9] = 0x71;
  param_1[0xda] = 0x72;
  param_1[0xe2] = 0x3e;
  param_1[0xe3] = 0x3f;
  return param_1;
}


//// FUNCTION FUN_00a95f90 @ 00a95f90 ////

void __fastcall FUN_00a95f90(int param_1)

{
  undefined4 *puVar1;
  HRESULT HVar2;
  int iVar3;
  int *piStack_48;
  int *piStack_44;
  undefined *puStack_40;
  int *piStack_3c;
  undefined *puStack_38;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    HVar2 = CoInitialize((LPVOID)0x0);
    if (HVar2 < 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  puStack_38 = (undefined *)0xa95fca;
  GetModuleHandleA((LPCSTR)0x0);
  puStack_38 = (undefined *)0xa95fd0;
  iVar3 = DirectInput8Create();
  if (-1 < iVar3) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
    puStack_38 = (undefined *)0xa95fec;
    iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))();
    if (-1 < iVar3) {
      piStack_3c = (int *)*puVar1;
      puStack_38 = &DAT_00d84c9c;
      puStack_40 = (undefined *)0xa95ffd;
      (**(code **)(*piStack_3c + 0x2c))();
      piStack_48 = (int *)*puVar1;
      puStack_40 = (undefined *)0x5;
      piStack_44 = (int *)DAT_0105beb0;
      (**(code **)(*piStack_48 + 0x34))();
      puStack_38 = (undefined *)0x14;
      (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1,1,&puStack_38);
      (**(code **)(*(int *)*puVar1 + 0x1c))((int *)*puVar1);
    }
    piStack_44 = *(int **)(param_1 + 0xc);
    puStack_38 = (undefined *)0x0;
    puVar1 = (undefined4 *)(param_1 + 0x14);
    puStack_40 = &DAT_00d85efc;
    piStack_48 = (int *)0xa96058;
    piStack_3c = puVar1;
    iVar3 = (**(code **)(*piStack_44 + 0xc))();
    if (-1 < iVar3) {
      piStack_48 = (int *)&DAT_00d84a94;
      (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1);
      (**(code **)(*(int *)*puVar1 + 0x34))((int *)*puVar1,DAT_0105beb0,5);
      piStack_48 = (int *)0x14;
      piStack_44 = (int *)0x10;
      puStack_40 = (undefined *)0x0;
      piStack_3c = (int *)0x0;
      puStack_38 = (undefined *)0x80;
      (**(code **)(*(int *)*puVar1 + 0x18))((int *)*puVar1,1,&piStack_48);
      (**(code **)(*(int *)*puVar1 + 0x1c))((int *)*puVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00a960c0 @ 00a960c0 ////

void __fastcall FUN_00a960c0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00a96107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CoUninitialize();
    return;
  }
  return;
}


//// FUNCTION FUN_00a96130 @ 00a96130 ////

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void __fastcall FUN_00a96130(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uStack_a18;
  uint uStack_a14;
  uint uStack_a10;
  uint auStack_a0c [642];
  
  if (param_1[3] != 0) {
    piVar6 = (int *)param_1[4];
    if (piVar6 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar6 + 0x1c))(piVar6);
      if (iVar1 < 0) {
        (**(code **)(*param_1 + 0x10))();
      }
      else {
        puVar3 = auStack_a0c;
        for (iVar1 = 0x280; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        uStack_a18 = 0x80;
        iVar1 = (**(code **)(*(int *)param_1[4] + 0x28))
                          ((int *)param_1[4],0x14,auStack_a0c,&uStack_a18,0);
        if (iVar1 < 0) {
          uStack_a14 = 0;
        }
        if ((char)param_1[6] != '\0') {
          *(undefined1 *)(param_1 + 6) = 0;
          uStack_a14 = 0;
        }
        uStack_a10 = 0;
        if (uStack_a14 != 0) {
          puVar3 = auStack_a0c + 1;
          do {
            uVar5 = puVar3[1];
            auStack_a0c[0] = CONCAT31(auStack_a0c[0]._1_3_,(char)(uVar5 >> 7)) & 0xffffff01;
            if (*puVar3 < 0x100) {
              iVar1 = param_1[*puVar3 + 7];
              if (iVar1 != 0) {
                (**(code **)*param_1)(iVar1,auStack_a0c[0]);
              }
            }
            else {
              iVar1 = 0;
            }
            if ((uVar5 >> 7 & 1) == 0) goto switchD_00a961fb_default;
            switch(iVar1) {
            case 0x6b:
              (**(code **)(*param_1 + 0xc))(0x12);
              break;
            case 0x6c:
              uVar4 = 0x14;
              goto LAB_00a9621e;
            case 0x6d:
              (**(code **)(*param_1 + 0xc))(0x11);
              break;
            case 0x6e:
              uVar4 = 0x13;
LAB_00a9621e:
              (**(code **)(*param_1 + 0xc))(uVar4);
            }
switchD_00a961fb_default:
            uStack_a10 = uStack_a10 + 1;
            puVar3 = puVar3 + 5;
          } while (uStack_a10 < uStack_a14);
        }
      }
    }
    piVar2 = (int *)0x0;
    piVar6 = (int *)param_1[5];
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x1c))();
      puVar3 = auStack_a0c;
      for (iVar1 = 0x280; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      uStack_a18 = 0x80;
      iVar1 = (**(code **)(*(int *)param_1[5] + 0x28))
                        ((int *)param_1[5],0x14,auStack_a0c,&uStack_a18,0);
      if (iVar1 < 0) {
        piVar6 = (int *)0x0;
      }
      if (piVar6 != (int *)0x0) {
        puVar3 = (uint *)&stack0xfffff5e4;
        do {
          switch(puVar3[-1]) {
          case 0:
            uVar5 = *puVar3;
            uVar4 = 1;
            break;
          default:
            goto switchD_00a9629f_caseD_1;
          case 4:
            uVar5 = *puVar3;
            uVar4 = 2;
            break;
          case 8:
            uVar5 = *puVar3;
            uVar4 = 3;
            break;
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
            (**(code **)*param_1)(puVar3[-1] + 0x67,*puVar3 >> 7 & 0xffffff01);
            goto switchD_00a9629f_caseD_1;
          }
          (**(code **)(*param_1 + 4))(uVar4,uVar5);
switchD_00a9629f_caseD_1:
          piVar2 = (int *)((int)piVar2 + 1);
          puVar3 = puVar3 + 5;
        } while (piVar2 < piVar6);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a96350 @ 00a96350 ////

void __fastcall FUN_00a96350(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d7b050;
  FUN_00a960c0((int)param_1);
  return;
}


//// FUNCTION FUN_00a96360 @ 00a96360 ////

void __cdecl FUN_00a96360(void *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  CHAR local_104 [260];
  
  FUN_009ca9d0(param_1,"*.*pak","data\\Pak\\",(undefined1 *)0x1);
  SHGetSpecialFolderPathA(DAT_0105beb0,local_104,0x23,1);
  pcVar3 = &stack0xfffffefb;
  do {
    pcVar2 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar2 != '\0');
  pcVar2 = "\\Lionhead Studios\\TheMovies\\";
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = *pcVar2;
  FUN_009ca9d0(param_1,"*.cpak",local_104,(undefined1 *)0x1);
  return;
}


//// FUNCTION FUN_00a967d0 @ 00a967d0 ////

void __cdecl FUN_00a967d0(int *param_1)

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


//// FUNCTION FUN_00a96830 @ 00a96830 ////

void __thiscall FUN_00a96830(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x1d) == '\0') {
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


//// FUNCTION FUN_00a96920 @ 00a96920 ////

void __cdecl FUN_00a96920(int param_1)

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


//// FUNCTION FUN_00a96950 @ 00a96950 ////

void __cdecl FUN_00a96950(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x1d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x1d);
  }
  return;
}


//// FUNCTION FUN_00a96970 @ 00a96970 ////

void __cdecl FUN_00a96970(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x1d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x1d);
  }
  return;
}


//// FUNCTION FUN_00a969a0 @ 00a969a0 ////

void __fastcall FUN_00a969a0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x1d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x1d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x1d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x1d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x1d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00a96a20 @ 00a96a20 ////

void __cdecl FUN_00a96a20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a96a90 @ 00a96a90 ////

void __cdecl FUN_00a96a90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a96d60 @ 00a96d60 ////

void __fastcall FUN_00a96d60(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a96e40 @ 00a96e40 ////

undefined4 * __thiscall FUN_00a96e40(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00a96f70 @ 00a96f70 ////

void __fastcall FUN_00a96f70(int *param_1)

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


//// FUNCTION FUN_00a97000 @ 00a97000 ////

void __thiscall FUN_00a97000(void *this,int param_1)

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


//// FUNCTION FUN_00a97060 @ 00a97060 ////

void __thiscall FUN_00a97060(void *this,int *param_1)

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


//// FUNCTION FUN_00a970d0 @ 00a970d0 ////

void __thiscall FUN_00a970d0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x1d) == '\0') {
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


//// FUNCTION FUN_00a97130 @ 00a97130 ////

int * __fastcall FUN_00a97130(int *param_1)

{
  FUN_00a969a0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a97140 @ 00a97140 ////

void __fastcall FUN_00a97140(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x1d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x1d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x1d) == '\0');
    if (*(char *)((int)piVar4 + 0x1d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00a971a0 @ 00a971a0 ////

void __fastcall FUN_00a971a0(int *param_1)

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


//// FUNCTION FUN_00a97260 @ 00a97260 ////

undefined4 * __thiscall FUN_00a97260(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00a972a0 @ 00a972a0 ////

void __cdecl FUN_00a972a0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a972f0 @ 00a972f0 ////

void __cdecl FUN_00a972f0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a97360 @ 00a97360 ////

void __fastcall FUN_00a97360(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a97560 @ 00a97560 ////

void __fastcall FUN_00a97560(int param_1)

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


//// FUNCTION FUN_00a975f0 @ 00a975f0 ////

int * __fastcall FUN_00a975f0(int *param_1)

{
  FUN_00a96f70(param_1);
  return param_1;
}


//// FUNCTION FUN_00a97610 @ 00a97610 ////

int * __fastcall FUN_00a97610(int *param_1)

{
  FUN_00a969a0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a97620 @ 00a97620 ////

int * __fastcall FUN_00a97620(int *param_1)

{
  FUN_00a97140(param_1);
  return param_1;
}


//// FUNCTION FUN_00a97630 @ 00a97630 ////

int * __fastcall FUN_00a97630(int *param_1)

{
  FUN_00a971a0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a976c0 @ 00a976c0 ////

undefined4 * __thiscall
FUN_00a976c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00a97760 @ 00a97760 ////

void * FUN_00a97760(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a977d0 @ 00a977d0 ////

void * FUN_00a977d0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a97800 @ 00a97800 ////

void * __thiscall FUN_00a97800(void *this,byte param_1)

{
  FUN_00a97360((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a97840 @ 00a97840 ////

int __cdecl FUN_00a97840(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_2;
  while ((uVar2 = **(uint **)(*(int *)(param_1 + 4) + param_3 * 4), iVar3 = param_3, uVar2 < uVar1
         || (iVar3 = param_4, param_5 = param_3, uVar1 < uVar2))) {
    if ((uint)(param_5 - iVar3) < 2) {
      if (uVar1 == **(uint **)(*(int *)(param_1 + 4) + iVar3 * 4)) {
        return iVar3;
      }
      return param_5;
    }
    param_3 = ((uint)(param_5 - iVar3) >> 1) + iVar3;
    param_4 = iVar3;
  }
  return param_3;
}


//// FUNCTION FUN_00a978a0 @ 00a978a0 ////

void __fastcall FUN_00a978a0(int param_1)

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


//// FUNCTION FUN_00a978e0 @ 00a978e0 ////

void __fastcall FUN_00a978e0(int param_1)

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


//// FUNCTION FUN_00a97930 @ 00a97930 ////

int * __fastcall FUN_00a97930(int *param_1)

{
  FUN_00a96f70(param_1);
  return param_1;
}


//// FUNCTION FUN_00a97940 @ 00a97940 ////

void __fastcall FUN_00a97940(int param_1)

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


//// FUNCTION FUN_00a97970 @ 00a97970 ////

undefined4 * FUN_00a97970(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a979a0 @ 00a979a0 ////

undefined4 * FUN_00a979a0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a979d0 @ 00a979d0 ////

int * __fastcall FUN_00a979d0(int *param_1)

{
  FUN_00a97140(param_1);
  return param_1;
}


//// FUNCTION FUN_00a979e0 @ 00a979e0 ////

int * __fastcall FUN_00a979e0(int *param_1)

{
  FUN_00a971a0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a97a30 @ 00a97a30 ////

undefined4 * __thiscall FUN_00a97a30(void *this,undefined4 *param_1)

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
LAB_00a97a74:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00a97a79;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00a97a74;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00a97a79:
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


//// FUNCTION FUN_00a97ac0 @ 00a97ac0 ////

void FUN_00a97ac0(void)

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


//// FUNCTION FUN_00a97b00 @ 00a97b00 ////

void * FUN_00a97b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00a976c0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00a97b40 @ 00a97b40 ////

void FUN_00a97b40(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  return;
}


//// FUNCTION FUN_00a97bb0 @ 00a97bb0 ////

void __cdecl FUN_00a97bb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a97be0 @ 00a97be0 ////

uint __cdecl FUN_00a97be0(int param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined3 uVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    iVar3 = *(int *)(param_1 + 8) - (int)puVar1;
    iVar4 = iVar3 >> 2;
    if (iVar4 != 0) {
      uVar2 = *param_2;
      if (uVar2 <= *(uint *)*puVar1) {
        *param_3 = 0;
        return CONCAT31((int3)(iVar3 >> 10),1);
      }
      uVar5 = iVar4 - 1;
      if (uVar2 < *(uint *)puVar1[iVar4 + -1]) {
        if (uVar5 < 2) {
          uVar6 = (undefined3)(uVar5 >> 8);
          if (uVar2 == *(uint *)*puVar1) {
            *param_3 = 0;
            return CONCAT31(uVar6,1);
          }
          *param_3 = uVar5;
          return CONCAT31(uVar6,1);
        }
        uVar5 = FUN_00a97840(param_1,param_2,uVar5 >> 1,0,uVar5);
      }
      *param_3 = uVar5;
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
  *param_3 = 0;
  return (uint)param_3 & 0xffffff00;
}


//// FUNCTION FUN_00a97c80 @ 00a97c80 ////

void __fastcall FUN_00a97c80(int param_1)

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


//// FUNCTION FUN_00a97cb0 @ 00a97cb0 ////

void __fastcall FUN_00a97cb0(int param_1)

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


//// FUNCTION FUN_00a97d00 @ 00a97d00 ////

int * __fastcall FUN_00a97d00(int *param_1)

{
  FUN_00a97140(param_1);
  return param_1;
}


//// FUNCTION FUN_00a97d30 @ 00a97d30 ////

int * __fastcall FUN_00a97d30(int *param_1)

{
  FUN_00a971a0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a97d60 @ 00a97d60 ////

void __fastcall FUN_00a97d60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a97ac0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a97da0 @ 00a97da0 ////

void __fastcall FUN_00a97da0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a97b40();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a97e00 @ 00a97e00 ////

undefined4 * FUN_00a97e00(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd041;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = operator_new(0x34);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00a9b2d0(puVar4);
  }
  *puVar4 = DAT_00e6d534;
  local_4 = 0xffffffff;
  if (DAT_010c9f80 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = DAT_010c9f84 - DAT_010c9f80 >> 2;
  }
  puVar4[3] = iVar13;
  puVar5 = operator_new(iVar13 * 0x38);
  local_4 = 1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar5;
    if (-1 < iVar13 + -1) {
      do {
        FUN_00a9c890(puVar6);
        iVar13 = iVar13 + -1;
        puVar6 = puVar6 + 0xe;
      } while (iVar13 != 0);
    }
  }
  iVar13 = 0;
  local_4 = 0xffffffff;
  puVar4[10] = puVar5;
  if (0 < (int)puVar4[3]) {
    iVar11 = 0;
    do {
      puVar5 = *(undefined4 **)(DAT_010c9f80 + iVar13 * 4);
      puVar6 = (undefined4 *)(puVar4[10] + iVar11);
      for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar13 = iVar13 + 1;
      iVar11 = iVar11 + 0x38;
    } while (iVar13 < (int)puVar4[3]);
  }
  iVar13 = 0x100;
  puVar4[4] = 0x100;
  puVar6 = operator_new(0x800);
  local_4 = 2;
  puVar5 = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    do {
      FUN_00aaf9d0(puVar5);
      iVar13 = iVar13 + -1;
      puVar5 = puVar5 + 2;
    } while (iVar13 != 0);
  }
  local_4 = 0xffffffff;
  puVar4[0xb] = puVar6;
  uVar7 = 0;
  do {
    iVar13 = puVar4[0xb];
    *(undefined4 *)(uVar7 + iVar13) = *(undefined4 *)(uVar7 + DAT_010c9f70);
    *(undefined4 *)(uVar7 + 4 + iVar13) = *(undefined4 *)(uVar7 + 4 + DAT_010c9f70);
    iVar13 = puVar4[0xb];
    *(undefined4 *)(uVar7 + 8 + iVar13) = *(undefined4 *)(uVar7 + 8 + DAT_010c9f70);
    *(undefined4 *)(uVar7 + 0xc + iVar13) = *(undefined4 *)(uVar7 + 0xc + DAT_010c9f70);
    iVar13 = puVar4[0xb];
    *(undefined4 *)(uVar7 + 0x10 + iVar13) = *(undefined4 *)(uVar7 + 0x10 + DAT_010c9f70);
    *(undefined4 *)(uVar7 + 0x14 + iVar13) = *(undefined4 *)(uVar7 + 0x14 + DAT_010c9f70);
    iVar13 = puVar4[0xb];
    *(undefined4 *)(uVar7 + 0x18 + iVar13) = *(undefined4 *)(uVar7 + 0x18 + DAT_010c9f70);
    *(undefined4 *)(uVar7 + 0x1c + iVar13) = *(undefined4 *)(uVar7 + 0x1c + DAT_010c9f70);
    uVar7 = uVar7 + 0x20;
  } while (uVar7 < 0x800);
  puVar4[6] = 0;
  puVar4[5] = DAT_010c9f94;
  piVar10 = (int *)*DAT_010c9f90;
  if (piVar10 != DAT_010c9f90) {
    do {
      puVar4[6] = puVar4[6] + piVar10[4] + 1;
      if (*(char *)((int)piVar10 + 0x31) == '\0') {
        piVar2 = (int *)piVar10[2];
        if (*(char *)((int)piVar2 + 0x31) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x31);
          piVar10 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x31);
            piVar10 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar10[1] + 0x31);
          piVar3 = (int *)piVar10[1];
          piVar2 = piVar10;
          while ((piVar10 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar10[2]))) {
            cVar1 = *(char *)(piVar10[1] + 0x31);
            piVar3 = (int *)piVar10[1];
            piVar2 = piVar10;
          }
        }
      }
    } while (piVar10 != DAT_010c9f90);
  }
  puVar5 = operator_new(puVar4[6]);
  uVar7 = puVar4[6];
  puVar4[0xc] = puVar5;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  piVar10 = (int *)*DAT_010c9f90;
  pcVar15 = (char *)puVar4[0xc];
  if (piVar10 != DAT_010c9f90) {
    do {
      pcVar12 = (char *)piVar10[3];
      pcVar14 = pcVar15;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        *pcVar14 = cVar1;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      pcVar15 = pcVar15 + piVar10[4] + 1;
      if (*(char *)((int)piVar10 + 0x31) == '\0') {
        piVar2 = (int *)piVar10[2];
        if (*(char *)((int)piVar2 + 0x31) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x31);
          piVar10 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x31);
            piVar10 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar10[1] + 0x31);
          piVar3 = (int *)piVar10[1];
          piVar2 = piVar10;
          while ((piVar10 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar10[2]))) {
            cVar1 = *(char *)(piVar10[1] + 0x31);
            piVar3 = (int *)piVar10[1];
            piVar2 = piVar10;
          }
        }
      }
    } while (piVar10 != DAT_010c9f90);
  }
  puVar4[1] = puVar4[6] + 0x34 + (puVar4[3] * 7 + puVar4[4]) * 8;
  ExceptionList = local_c;
  return puVar4;
}


//// FUNCTION FUN_00a98100 @ 00a98100 ////

int __fastcall FUN_00a98100(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a97ac0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a98130 @ 00a98130 ////

void FUN_00a98130(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00a98130(*(void **)((int)param_1 + 8));
    FUN_00a97360((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a98170 @ 00a98170 ////

int __fastcall FUN_00a98170(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a97b40();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a981a0 @ 00a981a0 ////

undefined4 * __thiscall FUN_00a981a0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfd050;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_00a97b00(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 0xc));
    if (*(char *)((int)local_18 + 0x31) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_00a981a0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_00a981a0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_00a98270 @ 00a98270 ////

undefined4 __cdecl FUN_00a98270(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 **ppuVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 *local_28;
  undefined4 *local_24;
  byte *local_20;
  undefined4 local_1c;
  uint local_18;
  byte local_14 [20];
  
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_20,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_28 = FUN_00589920(&DAT_010c9f8c,&local_20);
  if (local_28 != DAT_010c9f90) {
    pbVar7 = (byte *)local_28[3];
    pbVar4 = local_20;
    do {
      bVar2 = *pbVar4;
      bVar8 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_00a98304:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00a98309;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar8 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_00a98304;
      pbVar4 = pbVar4 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00a98309:
    if (-1 < iVar5) {
      ppuVar6 = &local_28;
      goto LAB_00a9831b;
    }
  }
  local_24 = DAT_010c9f90;
  ppuVar6 = &local_24;
LAB_00a9831b:
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (*ppuVar6 == DAT_010c9f90) {
    return 0;
  }
  return (*ppuVar6)[0xb];
}


//// FUNCTION FUN_00a98350 @ 00a98350 ////

void __fastcall FUN_00a98350(int param_1)

{
  FUN_00a98130(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00a98380 @ 00a98380 ////

void __thiscall FUN_00a98380(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_00a981a0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
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


//// FUNCTION FUN_00a98410 @ 00a98410 ////

void FUN_00a98410(void)

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
  puStack_8 = &LAB_00cfd068;
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


//// FUNCTION FUN_00a98480 @ 00a98480 ////

void FUN_00a98480(void)

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
  puStack_8 = &LAB_00cfd088;
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


//// FUNCTION FUN_00a984f0 @ 00a984f0 ////

void __thiscall
FUN_00a984f0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cfd0a8;
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
  piVar3 = FUN_00a97b00(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00a985eb:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a97000(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00a97060(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00a985eb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a97060(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00a97000(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00a986a0 @ 00a986a0 ////

void __thiscall FUN_00a986a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a98410();
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
      _Dst = FUN_00a979a0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a977d0(param_1,iVar5,param_1 + param_2);
      FUN_00a979a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a96a90(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a977d0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a972f0(param_1,(int)pvVar3,iVar5);
    FUN_00a96a90(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a98880 @ 00a98880 ////

void __thiscall FUN_00a98880(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cfd0c8;
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
  FUN_00a96f70((int *)&param_2);
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
      goto LAB_00a989f1;
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
      piVar2 = (int *)FUN_00a967d0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00a96920((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00a989f1:
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
            FUN_00a97000(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00a97060(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00a97000(this,(int)piVar5);
              break;
            }
LAB_00a98ab4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00a97060(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00a98ab4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00a97000(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00a97060(this,piVar5);
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


//// FUNCTION FUN_00a98b50 @ 00a98b50 ////

void __thiscall FUN_00a98b50(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfd0e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_00a98410();
    param_1 = extraout_EDX;
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 2;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 4);
    local_8 = 0;
    FUN_00a97bb0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a98c70 @ 00a98c70 ////

void __thiscall FUN_00a98c70(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a98480();
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
      _Dst = FUN_00a97970((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a97760(param_1,iVar5,param_1 + param_2);
      FUN_00a97970(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a96a20(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a97760(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a972a0(param_1,(int)pvVar3,iVar5);
    FUN_00a96a20(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a98ef0 @ 00a98ef0 ////

void __thiscall FUN_00a98ef0(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00a98f54:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00a98f59;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00a98f54;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a98f59:
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
      puVar5 = (undefined4 *)FUN_00a984f0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00a971a0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00a984f0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00a99010 @ 00a99010 ////

void __thiscall FUN_00a99010(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a98130((void *)piVar6[1]);
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
    FUN_00a98880(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a990d0 @ 00a990d0 ////

void FUN_00a990d0(void)

{
  if (DAT_010c9f80 == (undefined4 *)0x0) {
    DAT_010c9f80 = (undefined4 *)0x0;
    DAT_010c9f84 = 0;
    DAT_010c9f88 = 0;
    DAT_010b9360 = 0;
                    /* WARNING: Subroutine does not return */
    _free(DAT_010c9f70);
  }
  if (DAT_010c9f84 - (int)DAT_010c9f80 >> 2 != 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*DAT_010c9f80);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010c9f80);
}


//// FUNCTION FUN_00a991f0 @ 00a991f0 ////

void __fastcall FUN_00a991f0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00a99200 @ 00a99200 ////

void __thiscall FUN_00a99200(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (*(int *)((int)this + 8) - iVar1 >> 2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_2 - iVar1 >> 2;
  }
  FUN_00a98c70(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 4;
  return;
}


//// FUNCTION FUN_00a992b0 @ 00a992b0 ////

undefined4 * __thiscall FUN_00a992b0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00a984f0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00a984f0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00a984f0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a971a0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00a984f0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00a984f0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a96f70((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00a99432;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00a984f0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00a984f0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00a99432:
  puVar4 = (undefined4 *)FUN_00a98ef0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00a99460 @ 00a99460 ////

void __fastcall FUN_00a99460(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a99010(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a99490 @ 00a99490 ////

void * __thiscall FUN_00a99490(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfd0f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00a97ac0();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_00a98380(this,param_1);
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_00a99520 @ 00a99520 ////

void FUN_00a99520(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd10b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_010c9f78 != '\0') {
    ExceptionList = &pvStack_c;
    FUN_00a990d0();
  }
  puVar1 = operator_new(0x800);
  uStack_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar4 = 0x100;
    puVar3 = puVar1;
    do {
      FUN_00aaf9d0(puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
      puVar2 = puVar1;
    } while (iVar4 != 0);
  }
  DAT_010c9f70 = puVar2;
  DAT_010c9f78 = 1;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a995a0 @ 00a995a0 ////

void __thiscall FUN_00a995a0(void *this,undefined4 *param_1)

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
  FUN_00a98c70(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00a995f0 @ 00a995f0 ////

int * __thiscall FUN_00a995f0(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00cfd128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00a97a30(this,param_1);
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
  piVar2 = FUN_00a992b0(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00a99710 @ 00a99710 ////

void __fastcall FUN_00a99710(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a99010(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a99740 @ 00a99740 ////

void FUN_00a99740(void)

{
  char cVar1;
  uint _Count;
  char *_Source;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd150;
  local_c = ExceptionList;
  uVar7 = 0;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"",0);
  local_48 = 0;
  *local_4c = '\0';
  local_4 = 0;
  piVar4 = FUN_00593a30(&DAT_010c9f8c,&local_4c);
  *piVar4 = 0;
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  iVar8 = 0;
  do {
    local_4 = 0xffffffff;
    if ((DAT_010c9f9c == 0) || ((uint)(DAT_010c9fa0 - DAT_010c9f9c >> 5) <= uVar7)) {
      piVar4 = (int *)*DAT_010c9f90;
      iVar8 = 0;
      if (piVar4 != DAT_010c9f90) {
        do {
          piVar4[0xb] = iVar8;
          iVar8 = iVar8 + 1 + piVar4[4];
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
        } while (piVar4 != DAT_010c9f90);
      }
      ExceptionList = local_c;
      return;
    }
    FUN_00ab0060(&local_4c,*(char **)(DAT_010c9f9c + iVar8));
    local_4 = 1;
    iVar5 = FUN_004302c0(&local_4c,&DAT_00d1835c,0xffffffff,1);
    if (iVar5 != -1) {
      puVar6 = FUN_00430770(&local_4c,local_2c,0,iVar5 + 1);
      _Count = puVar6[1];
      _Source = (char *)*puVar6;
      if (local_44 <= _Count) {
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        local_44 = _Count + 0x20 & 0xffffffe0;
        local_4c = _malloc(local_44);
      }
      _strncpy(local_4c,_Source,_Count);
      local_4c[_Count] = '\0';
      local_48 = _Count;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      piVar4 = FUN_00593a30(&DAT_010c9f8c,&local_4c);
      *piVar4 = 0;
    }
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    uVar7 = uVar7 + 1;
    iVar8 = iVar8 + 0x20;
  } while( true );
}


//// FUNCTION FUN_00a99960 @ 00a99960 ////

undefined4 * __cdecl FUN_00a99960(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  char *local_198;
  uint local_194;
  uint local_190;
  char local_18c [20];
  char *local_178;
  undefined4 local_174;
  uint local_170;
  char local_16c [20];
  undefined4 *local_158 [2];
  char *local_150;
  uint local_14c;
  uint local_148;
  char local_130 [31];
  undefined1 local_111;
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd18f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00ab0060(&local_150,param_1);
  local_198 = local_18c;
  local_4 = 0;
  local_18c[0] = '\0';
  local_194 = 0;
  local_190 = 0x14;
  FUN_004015d0(&local_198,local_150,local_14c);
  local_4._0_1_ = 1;
  iVar2 = FUN_004302c0(&local_198,&DAT_00d1835c,0xffffffff,1);
  if (iVar2 != -1) {
    puVar3 = FUN_00430770(&local_198,&local_178,iVar2 + 1,local_194);
    FUN_004015d0(&local_198,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
      _free(local_178);
    }
  }
  if (local_194 < 0x20) {
    pcVar6 = local_198;
    do {
      cVar1 = *pcVar6;
      pcVar6[(int)(local_130 + -(int)local_198)] = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  else {
    local_178 = local_16c;
    local_16c[0] = '\0';
    local_174 = 0;
    local_170 = 0x14;
    _strncpy(local_178,"",0);
    local_174 = 0;
    *local_178 = '\0';
    local_4._0_1_ = 2;
    FUN_004073f0(&local_178,"File name too long: ",0x14);
    FUN_004073f0(&local_178,local_198,local_194);
    FUN_0043a2d0(&DAT_010ca060,&local_178);
    _strncpy(local_130,local_198,0x1f);
    local_111 = 0;
    local_4._0_1_ = 1;
    if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
      _free(local_178);
    }
  }
  __splitpath(local_150,(char *)0x0,local_110,(char *)0x0,(char *)0x0);
  local_158[0] = operator_new(0x38);
  local_4._0_1_ = 3;
  if (local_158[0] == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00a9c890(local_158[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar4 = (undefined4 *)FUN_00a9c980((int *)local_158,local_150);
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  uVar5 = FUN_00a98270(local_110);
  puVar3[5] = (uVar5 & 0x3fff | 0x3ffc000) << 1 | puVar3[5] & 0xffff8000;
  pcVar6 = local_130;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  iVar2 = 0x18 - (int)pcVar6;
  do {
    cVar1 = *pcVar6;
    pcVar6[(int)puVar3 + iVar2] = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (0x14 < local_190) {
                    /* WARNING: Subroutine does not return */
    _free(local_198);
  }
  if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
    _free(local_150);
  }
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_00a99bd0 @ 00a99bd0 ////

uint * __cdecl FUN_00a99bd0(void *param_1,uint *param_2)

{
  undefined4 *puVar1;
  void *this;
  uint *puVar2;
  int iVar3;
  
  puVar2 = param_2;
  this = param_1;
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar3 = *(int *)((int)param_1 + 8) - (int)puVar1 >> 2, iVar3 == 0)) {
    FUN_00a995a0(param_1,&param_2);
    return param_2;
  }
  if (iVar3 != 1) {
    if (*(uint *)puVar1[iVar3 + -1] < *param_2) {
      FUN_00a995a0(param_1,&param_2);
      return puVar2;
    }
    param_1 = (void *)0x0;
    FUN_00a97be0((int)this,param_2,(uint *)&param_1);
    FUN_00a99200(this,(int *)&param_1,(undefined4 *)(*(int *)((int)this + 4) + (int)param_1 * 4),
                 &param_2);
    return puVar2;
  }
  if (*(uint *)*puVar1 < *param_2) {
    FUN_00a995a0(param_1,&param_2);
    return puVar2;
  }
  FUN_00a99200(param_1,(int *)&param_1,puVar1,&param_2);
  return puVar2;
}


//// FUNCTION FUN_00a99c90 @ 00a99c90 ////

int __fastcall FUN_00a99c90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a97ac0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a99cc0 @ 00a99cc0 ////

void __fastcall FUN_00a99cc0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00a99010((void *)(param_1 + 4),&local_4,(int *)**(int **)(param_1 + 8),*(int **)(param_1 + 8))
  ;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00a99d30 @ 00a99d30 ////

void __fastcall FUN_00a99d30(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00a99010((void *)(param_1 + 0x10),&local_4,(int *)**(int **)(param_1 + 0x14),
               *(int **)(param_1 + 0x14));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00a99d60 @ 00a99d60 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_00a99d60(void)

{
  undefined4 *puVar1;
  char *_Source;
  char *_Dest;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_1034;
  uint local_1024;
  char local_1020 [20];
  undefined1 local_100c [4];
  int aiStack_1008 [1022];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd1c4;
  local_c = ExceptionList;
  uStack_10 = 0xa99d7f;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_(local_100c,0x10,0x100,FUN_00a991f0,FUN_00a97c80);
  iVar6 = 0;
  local_4 = 0;
  uVar5 = 0;
  while( true ) {
    if ((DAT_010c9f9c == 0) || ((uint)(DAT_010c9fa0 - DAT_010c9f9c >> 5) <= uVar5)) {
      iVar7 = 0;
      local_1034 = 0;
      iVar6 = 0;
      do {
        *(int *)(iVar6 + DAT_010c9f70) = iVar7;
        if (*(int *)((int)aiStack_1008 + local_1034) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)((int)aiStack_1008 + local_1034 + 4) -
                  *(int *)((int)aiStack_1008 + local_1034) >> 2;
        }
        iVar7 = iVar7 + iVar4;
        *(int *)(iVar6 + 4 + DAT_010c9f70) = iVar7;
        uVar5 = 0;
        while ((iVar4 = *(int *)((int)aiStack_1008 + local_1034), iVar4 != 0 &&
               (uVar5 < (uint)(*(int *)((int)aiStack_1008 + local_1034 + 4) - iVar4 >> 2)))) {
          puVar1 = (undefined4 *)(iVar4 + uVar5 * 4);
          if ((DAT_010c9f80 == 0) ||
             ((uint)(DAT_010c9f88 - DAT_010c9f80 >> 2) <=
              (uint)((int)DAT_010c9f84 - DAT_010c9f80 >> 2))) {
            FUN_00a98c70(&DAT_010c9f7c,DAT_010c9f84,1,puVar1);
            uVar5 = uVar5 + 1;
          }
          else {
            *DAT_010c9f84 = *puVar1;
            DAT_010c9f84 = DAT_010c9f84 + 1;
            uVar5 = uVar5 + 1;
          }
        }
        iVar6 = iVar6 + 8;
        local_1034 = local_1034 + 0x10;
      } while (iVar6 < 0x800);
      local_4 = 0xffffffff;
      _eh_vector_destructor_iterator_(local_100c,0x10,0x100,FUN_00a97c80);
      ExceptionList = local_c;
      return;
    }
    _Dest = local_1020;
    local_1020[0] = '\0';
    local_1024 = 0x14;
    uVar2 = *(uint *)(DAT_010c9f9c + 4 + iVar6);
    _Source = *(char **)(DAT_010c9f9c + iVar6);
    if (0x13 < uVar2) {
      local_1024 = uVar2 + 0x20 & 0xffffffe0;
      _Dest = _malloc(local_1024);
    }
    _strncpy(_Dest,_Source,uVar2);
    _Dest[uVar2] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar2 = FUN_00ab0150(_Dest);
    if ((char)uVar2 != '\0') {
      puVar3 = FUN_00a99960(_Dest);
      if (puVar3 != (uint *)0x0) {
        FUN_00a99bd0(local_100c + (*puVar3 & 0xff) * 0x10,puVar3);
      }
    }
    local_4 = local_4 & 0xffffff00;
    if (0x14 < local_1024) break;
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Dest);
}


//// FUNCTION FUN_00a99fe0 @ 00a99fe0 ////

void * __thiscall FUN_00a99fe0(void *this,byte param_1)

{
  FUN_00a99d30((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9a000 @ 00a9a000 ////

undefined4 *
FUN_00a9a000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfd1e1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x20);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    FUN_00a99490(puVar1 + 4,(int)(param_4 + 1));
    *(undefined1 *)(puVar1 + 7) = param_5;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_00a9a0b0 @ 00a9a0b0 ////

void __thiscall
FUN_00a9a0b0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cfd1f8;
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
  piVar3 = FUN_00a9a000(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x1c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x1c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[7] == '\0') {
LAB_00a9a1ab:
        *(undefined1 *)(*piVar4 + 0x1c) = 1;
        *(undefined1 *)(piVar5 + 7) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x1c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a970d0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x1c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
        FUN_00a96830(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[7] == '\0') goto LAB_00a9a1ab;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a96830(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x1c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
      FUN_00a970d0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x1c);
  } while( true );
}


//// FUNCTION FUN_00a9a270 @ 00a9a270 ////

void __thiscall FUN_00a9a270(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x1d) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00a9a0b0(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00a97140((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_00a9a0b0(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00a9a330 @ 00a9a330 ////

void __thiscall FUN_00a9a330(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd218;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x1d) != '\0') {
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
  FUN_00a969a0((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0x1d) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar2[2] + 0x1d) == '\0') && (piVar7 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x1d) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == piVar2) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)piVar2[1];
        if ((int *)*piVar6 == piVar2) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[7];
      *(char *)(param_2 + 7) = (char)piVar2[7];
      *(char *)(piVar2 + 7) = (char)iVar1;
      goto LAB_00a9a49f;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0x1d) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar2) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x1d) == '\0') {
      piVar3 = (int *)FUN_00a96970(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0x1d) == '\0') {
      uVar4 = FUN_00a96950((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_00a9a49f:
  if ((char)piVar2[7] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[7] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[7] == '\0') {
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(piVar6 + 7) = 0;
            FUN_00a970d0(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x1d) == '\0') {
            if ((*(char *)(*piVar5 + 0x1c) != '\x01') || (*(char *)(piVar5[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x1c) = 1;
                *(undefined1 *)(piVar5 + 7) = 0;
                FUN_00a96830(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 7) = (char)piVar6[7];
              *(undefined1 *)(piVar6 + 7) = 1;
              *(undefined1 *)(piVar5[2] + 0x1c) = 1;
              FUN_00a970d0(this,(int)piVar6);
              break;
            }
LAB_00a9a568:
            *(undefined1 *)(piVar5 + 7) = 0;
          }
        }
        else {
          if ((char)piVar5[7] == '\0') {
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(piVar6 + 7) = 0;
            FUN_00a96830(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x1d) == '\0') {
            if ((*(char *)(piVar5[2] + 0x1c) == '\x01') && (*(char *)(*piVar5 + 0x1c) == '\x01'))
            goto LAB_00a9a568;
            if (*(char *)(*piVar5 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x1c) = 1;
              *(undefined1 *)(piVar5 + 7) = 0;
              FUN_00a970d0(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 7) = (char)piVar6[7];
            *(undefined1 *)(piVar6 + 7) = 1;
            *(undefined1 *)(*piVar5 + 0x1c) = 1;
            FUN_00a96830(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 7) = 1;
  }
  FUN_00a99010(piVar2 + 4,&local_54,*(int **)piVar2[5],(int *)piVar2[5]);
                    /* WARNING: Subroutine does not return */
  _free((void *)piVar2[5]);
}


//// FUNCTION FUN_00a9a620 @ 00a9a620 ////

void FUN_00a9a620(void *param_1)

{
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    FUN_00a9a620(*(void **)((int)param_1 + 8));
    FUN_00a99d30((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a9a660 @ 00a9a660 ////

undefined4 * __thiscall FUN_00a9a660(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a9a0b0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00a9a0b0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_00a9a0b0(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_00a97140((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x1d) != '\0') {
          FUN_00a9a0b0(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_00a9a0b0(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_00a969a0((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x1d) != '\0') {
          FUN_00a9a0b0(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_00a9a0b0(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_00a9a270(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_00a9a7d0 @ 00a9a7d0 ////

void __fastcall FUN_00a9a7d0(int param_1)

{
  FUN_00a9a620(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00a9a800 @ 00a9a800 ////

int * __thiscall FUN_00a9a800(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18 [4];
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd240;
  local_c = ExceptionList;
  piVar4 = *(int **)((int)this + 4);
  if (*(char *)(piVar4[1] + 0x1d) == '\0') {
    piVar2 = (int *)piVar4[1];
    do {
      if (piVar2[3] < *param_1) {
        piVar3 = (int *)piVar2[2];
      }
      else {
        piVar3 = (int *)*piVar2;
        piVar4 = piVar2;
      }
      piVar2 = piVar3;
    } while (*(char *)((int)piVar3 + 0x1d) == '\0');
  }
  if ((piVar4 != *(int **)((int)this + 4)) && (piVar4[3] <= *param_1)) {
    return piVar4 + 4;
  }
  ExceptionList = &local_c;
  local_24 = FUN_00a97ac0();
  *(undefined1 *)(local_24 + 0x31) = 1;
  *(int *)(local_24 + 4) = local_24;
  *(int *)local_24 = local_24;
  *(int *)(local_24 + 8) = local_24;
  local_20 = 0;
  local_1c = *piVar1;
  local_4 = 0;
  FUN_00a99490(local_18,(int)local_28);
  local_4._0_1_ = 1;
  FUN_00a9a660(this,&param_1,piVar4,&local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00a99010(local_18,&local_2c,(int *)*local_14,local_14);
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}


//// FUNCTION FUN_00a9a930 @ 00a9a930 ////

void __thiscall FUN_00a9a930(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a9a620((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x1d) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x1d) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x1d);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x1d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x1d);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x1d);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00a9a330(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a9aa50 @ 00a9aa50 ////

void __fastcall FUN_00a9aa50(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a9a930(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a9aa80 @ 00a9aa80 ////

int __fastcall FUN_00a9aa80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a97b40();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a9aab0 @ 00a9aab0 ////

void FUN_00a9aab0(int *param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  char **ppcVar9;
  int *local_40;
  int local_3c;
  undefined1 local_38 [4];
  int *local_34;
  undefined4 local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar8 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd268;
  pvStack_c = ExceptionList;
  if (*(void **)((int)param_2 + 4) != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_2 + 4));
  }
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)((int)param_2 + 8) = 0;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  FUN_00a98b50(param_2,param_1[2]);
  local_34 = (int *)FUN_00a97b40();
  *(undefined1 *)((int)local_34 + 0x1d) = 1;
  local_34[1] = (int)local_34;
  *local_34 = (int)local_34;
  local_34[2] = (int)local_34;
  local_30 = 0;
  piVar5 = (int *)piVar8[1];
  local_4 = 0;
  param_1 = (int *)*piVar5;
  if (param_1 != piVar5) {
    do {
      piVar5 = param_1;
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      uVar2 = param_1[4];
      pcVar3 = (char *)param_1[3];
      if (0x13 < uVar2) {
        local_24 = uVar2 + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy(local_2c,pcVar3,uVar2);
      local_2c[uVar2] = '\0';
      iVar4 = piVar5[0xb];
      local_40 = *(int **)(iVar4 + 0x1c);
      ppcVar9 = &local_2c;
      local_4 = CONCAT31(local_4._1_3_,1);
      local_28 = uVar2;
      piVar5 = FUN_00a9a800(local_38,(int *)&local_40);
      piVar5 = FUN_00a995f0(piVar5,ppcVar9);
      *piVar5 = iVar4;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      FUN_00a96f70((int *)&param_1);
    } while (param_1 != (int *)piVar8[1]);
  }
  param_1 = local_34;
  piVar8 = local_34;
  if (local_34 != (int *)*local_34) {
    do {
      if (*(char *)((int)param_1 + 0x1d) == '\0') {
        if (*(char *)(*param_1 + 0x1d) == '\0') {
          iVar4 = *(int *)(*param_1 + 8);
          cVar1 = *(char *)(iVar4 + 0x1d);
          while (cVar1 == '\0') {
            iVar4 = *(int *)(iVar4 + 8);
            cVar1 = *(char *)(iVar4 + 0x1d);
          }
        }
        else {
          cVar1 = *(char *)(param_1[1] + 0x1d);
          piVar7 = (int *)param_1[1];
          piVar5 = param_1;
          while ((piVar6 = piVar7, cVar1 == '\0' && (piVar5 == (int *)*piVar6))) {
            cVar1 = *(char *)(piVar6[1] + 0x1d);
            piVar7 = (int *)piVar6[1];
            piVar5 = piVar6;
          }
        }
      }
      if (*(char *)((int)param_1 + 0x1d) == '\0') {
        piVar5 = (int *)*param_1;
        if (*(char *)((int)piVar5 + 0x1d) == '\0') {
          cVar1 = *(char *)(piVar5[2] + 0x1d);
          piVar7 = (int *)piVar5[2];
          while (cVar1 == '\0') {
            cVar1 = *(char *)(piVar7[2] + 0x1d);
            piVar5 = piVar7;
            piVar7 = (int *)piVar7[2];
          }
          goto LAB_00a9acad;
        }
        piVar5 = (int *)param_1[1];
        local_40 = param_1;
        if (*(char *)(param_1[1] + 0x1d) == '\0') {
          do {
            piVar7 = piVar5;
            piVar5 = piVar7;
            if (local_40 != (int *)*piVar7) break;
            piVar5 = (int *)piVar7[1];
            local_40 = piVar7;
          } while (*(char *)((int)piVar5 + 0x1d) == '\0');
          if (*(char *)((int)piVar5 + 0x1d) == '\0') goto LAB_00a9acad;
        }
      }
      else {
        piVar5 = (int *)param_1[2];
LAB_00a9acad:
        local_40 = piVar5;
      }
      piVar5 = (int *)local_40[5];
      if (piVar5 != (int *)*piVar5) {
        do {
          if (*(char *)((int)piVar5 + 0x31) == '\0') {
            piVar8 = (int *)*piVar5;
            if (*(char *)((int)piVar8 + 0x31) == '\0') {
              cVar1 = *(char *)(piVar8[2] + 0x31);
              piVar7 = (int *)piVar8[2];
              while (cVar1 == '\0') {
                cVar1 = *(char *)(piVar7[2] + 0x31);
                piVar8 = piVar7;
                piVar7 = (int *)piVar7[2];
              }
            }
            else {
              piVar7 = (int *)piVar5[1];
              piVar8 = piVar5;
              if (*(char *)(piVar5[1] + 0x31) == '\0') {
                do {
                  piVar6 = piVar7;
                  piVar7 = piVar6;
                  if (piVar8 != (int *)*piVar6) break;
                  piVar7 = (int *)piVar6[1];
                  piVar8 = piVar6;
                } while (*(char *)((int)piVar7 + 0x31) == '\0');
                if (*(char *)((int)piVar7 + 0x31) == '\0') {
                  piVar8 = piVar7;
                }
              }
            }
          }
          else {
            piVar8 = (int *)piVar5[2];
          }
          local_2c = local_20;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          uVar2 = piVar8[4];
          pcVar3 = (char *)piVar8[3];
          if (0x13 < uVar2) {
            local_24 = uVar2 + 0x20 & 0xffffffe0;
            local_2c = _malloc(local_24);
          }
          _strncpy(local_2c,pcVar3,uVar2);
          local_2c[uVar2] = '\0';
          local_4 = CONCAT31(local_4._1_3_,2);
          if (*(char *)((int)piVar5 + 0x31) == '\0') {
            piVar8 = (int *)*piVar5;
            if (*(char *)((int)piVar8 + 0x31) == '\0') {
              cVar1 = *(char *)(piVar8[2] + 0x31);
              piVar7 = (int *)piVar8[2];
              while (cVar1 == '\0') {
                cVar1 = *(char *)(piVar7[2] + 0x31);
                piVar8 = piVar7;
                piVar7 = (int *)piVar7[2];
              }
            }
            else {
              piVar7 = (int *)piVar5[1];
              piVar8 = piVar5;
              if (*(char *)(piVar5[1] + 0x31) == '\0') {
                do {
                  piVar6 = piVar7;
                  piVar7 = piVar6;
                  if (piVar8 != (int *)*piVar6) break;
                  piVar7 = (int *)piVar6[1];
                  piVar8 = piVar6;
                } while (*(char *)((int)piVar7 + 0x31) == '\0');
                if (*(char *)((int)piVar7 + 0x31) == '\0') {
                  piVar8 = piVar7;
                }
              }
            }
          }
          else {
            piVar8 = (int *)piVar5[2];
          }
          iVar4 = *(int *)((int)param_2 + 4);
          local_3c = piVar8[0xb];
          local_28 = uVar2;
          if ((iVar4 == 0) ||
             ((uint)(*(int *)((int)param_2 + 0xc) - iVar4 >> 2) <=
              (uint)(*(int *)((int)param_2 + 8) - iVar4 >> 2))) {
            FUN_00a986a0(param_2,*(undefined4 **)((int)param_2 + 8),1,&local_3c);
          }
          else {
            piVar8 = *(int **)((int)param_2 + 8);
            *piVar8 = local_3c;
            *(int **)((int)param_2 + 8) = piVar8 + 1;
          }
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          if (*(char *)((int)piVar5 + 0x31) == '\0') {
            piVar8 = (int *)*piVar5;
            if (*(char *)((int)piVar8 + 0x31) == '\0') {
              cVar1 = *(char *)(piVar8[2] + 0x31);
              piVar7 = (int *)piVar8[2];
              while (piVar5 = piVar8, cVar1 == '\0') {
                cVar1 = *(char *)(piVar7[2] + 0x31);
                piVar8 = piVar7;
                piVar7 = (int *)piVar7[2];
              }
            }
            else {
              piVar8 = (int *)piVar5[1];
              if (*(char *)(piVar5[1] + 0x31) == '\0') {
                do {
                  piVar7 = piVar8;
                  piVar8 = piVar7;
                  if (piVar5 != (int *)*piVar7) break;
                  piVar8 = (int *)piVar7[1];
                  piVar5 = piVar7;
                } while (*(char *)((int)piVar8 + 0x31) == '\0');
                if (*(char *)((int)piVar8 + 0x31) == '\0') {
                  piVar5 = piVar8;
                }
              }
            }
          }
          else {
            piVar5 = (int *)piVar5[2];
          }
          piVar8 = local_34;
        } while (piVar5 != *(int **)local_40[5]);
      }
      if (*(char *)((int)param_1 + 0x1d) == '\0') {
        piVar5 = (int *)*param_1;
        if (*(char *)((int)piVar5 + 0x1d) == '\0') {
          cVar1 = *(char *)(piVar5[2] + 0x1d);
          piVar7 = (int *)piVar5[2];
          while (cVar1 == '\0') {
            cVar1 = *(char *)(piVar7[2] + 0x1d);
            piVar5 = piVar7;
            piVar7 = (int *)piVar7[2];
          }
          goto LAB_00a9aefd;
        }
        piVar5 = (int *)param_1[1];
        if (*(char *)(param_1[1] + 0x1d) == '\0') {
          do {
            piVar7 = piVar5;
            piVar5 = piVar7;
            if (param_1 != (int *)*piVar7) break;
            piVar5 = (int *)piVar7[1];
            param_1 = piVar7;
          } while (*(char *)((int)piVar5 + 0x1d) == '\0');
          if (*(char *)((int)piVar5 + 0x1d) == '\0') goto LAB_00a9aefd;
        }
      }
      else {
        piVar5 = (int *)param_1[2];
LAB_00a9aefd:
        param_1 = piVar5;
      }
    } while (param_1 != (int *)*piVar8);
  }
  local_4 = 0xffffffff;
  FUN_00a9a930(local_38,&param_2,(int *)*piVar8,piVar8);
                    /* WARNING: Subroutine does not return */
  _free(local_34);
}


//// FUNCTION FUN_00a9af50 @ 00a9af50 ////

void FUN_00a9af50(void)

{
  void *pvVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *_Source;
  undefined1 uStack00000004;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int *local_84;
  void **local_80;
  uint local_7c;
  uint local_78;
  void *local_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_60 [18];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd2b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009c89a0(local_60);
  local_4 = 0;
  FUN_00a96360(local_60);
  if ((local_18 == 0) || (iVar7 = local_14 - local_18 >> 2, iVar7 == 0)) {
    local_4 = 0xffffffff;
    FUN_009c8560(local_60);
    ExceptionList = local_c;
    return;
  }
  local_84 = operator_new(iVar7 * 0x2c + 4);
  local_4._0_1_ = 1;
  if (local_84 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = local_84 + 1;
    *local_84 = iVar7;
    _eh_vector_constructor_iterator_(piVar4,0x2c,iVar7,FUN_00a10b50,FUN_00a10740);
  }
  local_4._0_1_ = 0;
  if (local_18 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = local_14 - local_18 >> 2;
  }
  DAT_010b935c = piVar4;
  for (uVar5 = (uint)(iVar7 * 0x2c) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)piVar4 = 0;
    piVar4 = (int *)((int)piVar4 + 1);
  }
  local_8c = FUN_00a97ac0();
  *(undefined1 *)(local_8c + 0x31) = 1;
  *(int *)(local_8c + 4) = local_8c;
  *(int *)local_8c = local_8c;
  *(int *)(local_8c + 8) = local_8c;
  local_88 = 0;
  local_4._0_1_ = 2;
  for (uVar5 = 0; (local_18 != 0 && (uVar5 < (uint)(local_14 - local_18 >> 2))); uVar5 = uVar5 + 1)
  {
    puVar6 = *(uint **)(local_18 + uVar5 * 4);
    local_84 = (int *)0x0;
    uVar2 = FUN_00aafeb0(puVar6,&local_84,(int)(DAT_010b935c + DAT_010b9360 * 0xb));
    if ((char)uVar2 != '\0') {
      pcVar3 = _strrchr((char *)puVar6,0x5c);
      _Source = (uint *)(pcVar3 + 1);
      if (pcVar3 == (char *)0x0) {
        _Source = puVar6;
      }
      local_80 = &local_74;
      local_74 = (void *)((uint)local_74 & 0xffffff00);
      local_7c = 0;
      local_78 = 0x14;
      puVar6 = _Source;
      do {
        uVar2 = *puVar6;
        puVar6 = (uint *)((int)puVar6 + 1);
      } while ((char)uVar2 != '\0');
      uVar2 = (int)puVar6 - ((int)_Source + 1);
      if (0x13 < uVar2) {
        local_78 = uVar2 + 0x20 & 0xffffffe0;
        local_80 = _malloc(local_78);
      }
      _strncpy((char *)local_80,(char *)_Source,uVar2);
      *(char *)((int)local_80 + uVar2) = '\0';
      local_4._0_1_ = 3;
      local_7c = uVar2;
      piVar4 = FUN_00a995f0(&local_90,&local_80);
      *piVar4 = (int)local_84;
      local_4._0_1_ = 2;
      if (0x14 < local_78) {
                    /* WARNING: Subroutine does not return */
        _free(local_80);
      }
    }
  }
  local_7c = 0;
  local_78 = 0;
  local_74 = (void *)0x0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00a9aab0(&local_90,&local_80);
  pvVar1 = local_74;
  if (local_74 == (void *)0x0) {
    DAT_010b9358 = 0;
  }
  else {
    DAT_010b9358 = iStack_70 - (int)local_74 >> 2;
  }
  DAT_010b9354 = operator_new(DAT_010b9358 * 4);
  uVar5 = 0;
  while (pvVar1 != (void *)0x0) {
    if ((uint)(iStack_70 - (int)pvVar1 >> 2) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
    *(undefined4 *)((int)DAT_010b9354 + uVar5 * 4) = *(undefined4 *)((int)pvVar1 + uVar5 * 4);
    uVar5 = uVar5 + 1;
  }
  pvVar1 = (void *)local_84[1];
  local_74 = (void *)0x0;
  iStack_70 = 0;
  uStack_6c = 0;
  if (*(char *)((int)pvVar1 + 0x31) != '\0') {
    local_84[1] = (int)local_84;
    local_80 = (void **)0x0;
    *local_84 = (int)local_84;
    local_84[2] = (int)local_84;
    uStack00000004 = 0;
    FUN_00a99010(&local_88,&local_7c,(int *)*local_84,local_84);
                    /* WARNING: Subroutine does not return */
    _free(local_84);
  }
  FUN_00a98130(*(void **)((int)pvVar1 + 8));
  if (0x14 < *(uint *)((int)pvVar1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)pvVar1 + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar1);
}


//// FUNCTION FUN_00a9b2d0 @ 00a9b2d0 ////

undefined4 * __fastcall FUN_00a9b2d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00a9b2f0 @ 00a9b2f0 ////

void __fastcall FUN_00a9b2f0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x28));
}


//// FUNCTION FUN_00a9b350 @ 00a9b350 ////

int __thiscall FUN_00a9b350(void *this,uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_1;
  while ((uVar2 = *(uint *)(param_2 * 0x38 + *(int *)((int)this + 0x28)), iVar3 = param_2,
         uVar2 < uVar1 || (iVar3 = param_3, param_4 = param_2, uVar1 < uVar2))) {
    if ((uint)(param_4 - iVar3) < 2) {
      if (uVar1 == *(uint *)(iVar3 * 0x38 + *(int *)((int)this + 0x28))) {
        return iVar3;
      }
      return param_4;
    }
    param_3 = iVar3;
    param_2 = ((uint)(param_4 - iVar3) >> 1) + iVar3;
  }
  return param_2;
}


//// FUNCTION FUN_00a9b3b0 @ 00a9b3b0 ////

undefined4 __thiscall FUN_00a9b3b0(void *this,int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  piVar1 = (int *)(iVar2 * 0x38 + *(int *)((int)this + 0x28));
  while( true ) {
    if (*param_1 != *piVar1) {
      return (uint)piVar1 & 0xffffff00;
    }
    if (param_1[1] == piVar1[1]) break;
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + -0xe;
  }
  *param_3 = iVar2;
  return CONCAT31((int3)((uint)param_3 >> 8),1);
}


//// FUNCTION FUN_00a9b3f0 @ 00a9b3f0 ////

uint __thiscall FUN_00a9b3f0(void *this,int *param_1,int param_2,int *param_3)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = param_2 + 1;
  if (iVar1 < *(int *)((int)this + 0xc)) {
    in_EAX = (int *)(iVar1 * 0x38 + *(int *)((int)this + 0x28));
    do {
      if (*param_1 != *in_EAX) break;
      if (param_1[1] == in_EAX[1]) {
        *param_3 = iVar1;
        return CONCAT31((int3)((uint)param_3 >> 8),1);
      }
      iVar1 = iVar1 + 1;
      in_EAX = in_EAX + 0xe;
    } while (iVar1 < *(int *)((int)this + 0xc));
  }
  return (uint)in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a9b440 @ 00a9b440 ////

undefined1 * __thiscall FUN_00a9b440(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = this;
  puVar6 = param_1;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[7] = DAT_00e6e4a4;
  param_1[10] = 0x34;
  iVar1 = *(int *)((int)this + 0xc) * 0x38 + 0x34;
  param_1[0xb] = iVar1;
  param_1[0xc] = iVar1 + *(int *)((int)this + 0x10) * 8;
  puVar4 = param_1 + 0xd;
  puVar5 = *(undefined4 **)((int)this + 0x28);
  puVar6 = puVar4;
  for (uVar2 = (uint)(*(int *)((int)this + 0xc) * 0x38) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar4 = puVar4 + *(int *)((int)this + 0xc) * 0xe;
  puVar5 = *(undefined4 **)((int)this + 0x2c);
  puVar6 = puVar4;
  for (iVar1 = (*(uint *)((int)this + 0x10) & 0x1fffffff) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar1 = *(int *)((int)this + 0x10);
  uVar2 = *(uint *)((int)this + 0x18);
  puVar5 = *(undefined4 **)((int)this + 0x30);
  puVar6 = puVar4 + iVar1 * 2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return (undefined1 *)(*(int *)((int)this + 0x18) + (int)(puVar4 + iVar1 * 2));
}


//// FUNCTION FUN_00a9b5a0 @ 00a9b5a0 ////

uint * __thiscall FUN_00a9b5a0(void *this,uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar2 = *(int *)((int)this + 0x28);
  if ((iVar2 == 0) || (*(int *)((int)this + 0xc) == 0)) {
    return (uint *)0x0;
  }
  uVar3 = *param_1;
  iVar7 = *(int *)(*(int *)((int)this + 0x2c) + (uVar3 & 0xff) * 8);
  iVar4 = *(int *)(*(int *)((int)this + 0x2c) + (uVar3 & 0xff) * 8 + 4);
  if (iVar7 == iVar4) {
    puVar6 = (uint *)(iVar7 * 0x38 + iVar2);
    return (uint *)((uint)puVar6 & (uVar3 != *puVar6) - 1);
  }
  iVar1 = iVar4 + -1;
  if (1 < (uint)(iVar1 - iVar7)) {
    if ((*(uint *)(iVar2 + iVar7 * 0x38) <= uVar3) &&
       (uVar3 <= *(uint *)(iVar4 * 0x38 + -0x38 + iVar2))) {
      iVar7 = FUN_00a9b350(this,param_1,(uint)(iVar1 + iVar7) >> 1,iVar7,iVar1);
      puVar5 = param_1;
      puVar6 = (uint *)(iVar7 * 0x38 + iVar2);
      if (uVar3 == *puVar6) {
        if (param_1[1] == puVar6[1]) {
          return puVar6;
        }
        param_1 = (uint *)0x0;
        uVar8 = FUN_00a9b3b0(this,(int *)puVar5,iVar7,(int *)&param_1);
        if (((char)uVar8 == '\0') &&
           (uVar8 = FUN_00a9b3f0(this,(int *)puVar5,iVar7,(int *)&param_1), (char)uVar8 == '\0')) {
          return (uint *)0x0;
        }
        return (uint *)((int)param_1 * 0x38 + iVar2);
      }
    }
    return (uint *)0x0;
  }
  puVar6 = (uint *)(iVar7 * 0x38 + iVar2);
  if (uVar3 != *(uint *)(iVar7 * 0x38 + iVar2)) {
    puVar6 = (uint *)(iVar1 * 0x38 + iVar2);
    puVar6 = (uint *)((uint)puVar6 & (uVar3 != *puVar6) - 1);
  }
  return puVar6;
}


//// FUNCTION FUN_00a9b6b0 @ 00a9b6b0 ////

int __thiscall FUN_00a9b6b0(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd2d6;
  local_c = ExceptionList;
  iVar7 = *param_1;
  ExceptionList = &local_c;
  *(int *)this = iVar7;
  if (((iVar7 != 4) && (iVar7 != 5)) && (iVar7 != 6)) {
    ExceptionList = pvVar2;
    return 0;
  }
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = param_1[3];
  *(int *)((int)this + 0x10) = param_1[4];
  *(int *)((int)this + 0x14) = param_1[5];
  piVar3 = param_1 + 7;
  *(int *)((int)this + 0x18) = param_1[6];
  if (*(int *)this != 4) {
    *(int *)((int)this + 0x1c) = *piVar3;
    *(int *)((int)this + 0x20) = param_1[8];
    *(int *)((int)this + 0x24) = param_1[9];
    piVar3 = param_1 + 10;
  }
  *(int *)((int)this + 0x28) = *piVar3;
  *(int *)((int)this + 0x2c) = piVar3[1];
  iVar7 = *(int *)((int)this + 0xc);
  iVar1 = *(int *)((int)this + 0x28);
  *(int *)((int)this + 0x30) = piVar3[2];
  puVar4 = operator_new(iVar7 * 0x38);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00401380(puVar4,0x38,iVar7,FUN_00a9c890);
  }
  *(undefined4 **)((int)this + 0x28) = puVar4;
  puVar5 = (undefined4 *)(iVar1 + (int)param_1);
  for (uVar6 = (uint)(*(int *)((int)this + 0xc) * 0x38) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar7 = *(int *)((int)this + 0x10);
  iVar1 = *(int *)((int)this + 0x2c);
  local_4 = 0xffffffff;
  puVar4 = operator_new(iVar7 << 3);
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00401380(puVar4,8,iVar7,FUN_00aaf9d0);
  }
  *(undefined4 **)((int)this + 0x2c) = puVar4;
  puVar5 = (undefined4 *)(iVar1 + (int)param_1);
  for (iVar7 = (*(uint *)((int)this + 0x10) & 0x1fffffff) << 1; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar7 = *(int *)((int)this + 0x30);
  local_4 = 0xffffffff;
  puVar5 = operator_new(*(uint *)((int)this + 0x18));
  uVar6 = *(uint *)((int)this + 0x18);
  *(undefined4 **)((int)this + 0x30) = puVar5;
  puVar4 = (undefined4 *)(iVar7 + (int)param_1);
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  ExceptionList = local_c;
  return *(int *)((int)this + 4);
}


//// FUNCTION FUN_00a9b920 @ 00a9b920 ////

void __cdecl FUN_00a9b920(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a9b9e0 @ 00a9b9e0 ////

void FUN_00a9b9e0(char *param_1,void *param_2)

{
  char cVar1;
  undefined4 *_Memory;
  char *pcVar2;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd2e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _Memory = operator_new(*(uint *)((int)param_2 + 4));
  FUN_00a9b440(param_2,_Memory);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_009d4370(&local_2c,_Memory,*(size_t *)((int)param_2 + 4));
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a9baa0 @ 00a9baa0 ////

undefined4 __cdecl FUN_00a9baa0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int *_Memory;
  size_t sVar4;
  int iVar5;
  int *piVar6;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd310;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  uVar3 = FUN_009d3720(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((uVar3 == 0) || (uVar3 < 0x34)) {
    ExceptionList = local_c;
    return 0;
  }
  _Memory = operator_new(0x34);
  piVar6 = _Memory;
  for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 1;
  sVar4 = FUN_009d3ca0(&local_2c,_Memory,0x34,(undefined1 *)0x0);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((sVar4 != 0) && (((iVar5 = *_Memory, iVar5 == 4 || (iVar5 == 5)) || (iVar5 == 6)))) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a9bc40 @ 00a9bc40 ////

void __cdecl FUN_00a9bc40(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = (int)param_3 - (int)param_1 >> 2;
  iVar1 = *param_1;
  if (iVar2 < 0x29) {
    iVar2 = *param_2;
    if (iVar2 < iVar1) {
      *param_2 = *param_1;
      *param_1 = iVar2;
    }
    iVar1 = *param_3;
    if (iVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < *param_1) {
      *param_2 = *param_1;
      *param_1 = iVar1;
      return;
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    iVar2 = param_1[iVar3];
    if (iVar2 < iVar1) {
      param_1[iVar3] = iVar1;
      *param_1 = iVar2;
    }
    iVar1 = param_1[iVar3 * 2];
    if (iVar1 < param_1[iVar3]) {
      param_1[iVar3 * 2] = param_1[iVar3];
      param_1[iVar3] = iVar1;
    }
    iVar1 = param_1[iVar3];
    if (iVar1 < *param_1) {
      param_1[iVar3] = *param_1;
      *param_1 = iVar1;
    }
    iVar1 = *param_2;
    piVar4 = param_2 + -iVar3;
    if (iVar1 < *piVar4) {
      *param_2 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = param_2[iVar3];
    if (iVar1 < *param_2) {
      param_2[iVar3] = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < *piVar4) {
      *param_2 = *piVar4;
      *piVar4 = iVar1;
    }
    piVar4 = param_3 + -iVar3;
    piVar5 = param_3 + iVar3 * -2;
    iVar1 = *piVar4;
    if (iVar1 < *piVar5) {
      *piVar4 = *piVar5;
      *piVar5 = iVar1;
    }
    iVar1 = *param_3;
    if (iVar1 < *piVar4) {
      *param_3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *piVar4;
    if (iVar1 < *piVar5) {
      *piVar4 = *piVar5;
      *piVar5 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = iVar1;
    }
    iVar1 = *piVar4;
    if (iVar1 < *param_2) {
      *piVar4 = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = iVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00a9bd80 @ 00a9bd80 ////

void __cdecl FUN_00a9bd80(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar2 = iVar1 * 2 + 2;
    if (param_3 <= iVar2) break;
    if (*(int *)(param_1 + iVar2 * 4) < *(int *)(param_1 + -4 + iVar2 * 4)) {
      iVar2 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    iVar1 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar3 = (iVar1 + -1) / 2;
    iVar2 = *(int *)(param_1 + iVar3 * 4);
    if (param_4 <= iVar2) break;
    *(int *)(param_1 + iVar1 * 4) = iVar2;
    iVar1 = iVar3;
  }
  *(int *)(param_1 + iVar1 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00a9be50 @ 00a9be50 ////

void __cdecl FUN_00a9be50(char *param_1)

{
  char cVar1;
  uint uVar2;
  int *_Memory;
  char *pcVar3;
  size_t sVar4;
  undefined4 *this;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00a9baa0(param_1);
  if (uVar2 == 0) {
    ExceptionList = local_c;
    return;
  }
  _Memory = operator_new(uVar2);
  piVar7 = _Memory;
  for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)piVar7 = 0;
    piVar7 = (int *)((int)piVar7 + 1);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  sVar4 = FUN_009d3ca0(&local_2c,_Memory,uVar2,(undefined1 *)0x0);
  local_4 = 0xffffffff;
  if (local_24 < 0x15) {
    if (sVar4 != 0) {
      this = operator_new(0x34);
      if (this == (undefined4 *)0x0) {
        this = (undefined4 *)0x0;
      }
      else {
        puVar8 = this;
        for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
      }
      FUN_00a9b6b0(this,_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00a9bf90 @ 00a9bf90 ////

void __cdecl FUN_00a9bf90(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_00a9bc40(param_2,piVar4,param_3 + -1);
  piVar5 = piVar4 + 1;
  for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
    if ((piVar4[-1] < *piVar4) || (*piVar4 < piVar4[-1])) break;
  }
  piVar6 = piVar5;
  piVar2 = piVar4;
  if (piVar5 < param_3) {
    do {
      piVar6 = piVar5;
      if ((*piVar5 < *piVar4) || (*piVar4 < *piVar5)) break;
      piVar5 = piVar5 + 1;
      piVar6 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x00a9bff5:
  do {
    piVar3 = piVar4;
    if (param_3 <= piVar5) {
joined_r0x00a9c01d:
      for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
        piVar3 = piVar3 + -1;
        if (*piVar2 <= *piVar3) {
          if (*piVar2 < *piVar3) break;
          iVar1 = piVar2[-1];
          piVar2 = piVar2 + -1;
          *piVar2 = *piVar3;
          *piVar3 = iVar1;
        }
      }
      if (piVar4 == param_2) {
        if (piVar5 == param_3) {
          param_1[1] = piVar6;
          *param_1 = piVar2;
          return;
        }
        if (piVar6 != piVar5) {
          iVar1 = *piVar2;
          *piVar2 = *piVar6;
          *piVar6 = iVar1;
        }
        iVar1 = *piVar2;
        *piVar2 = *piVar5;
        *piVar5 = iVar1;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
        piVar2 = piVar2 + 1;
      }
      else {
        piVar4 = piVar4 + -1;
        if (piVar5 == param_3) {
          piVar2 = piVar2 + -1;
          if (piVar4 != piVar2) {
            iVar1 = *piVar4;
            *piVar4 = *piVar2;
            *piVar2 = iVar1;
          }
          iVar1 = *piVar2;
          *piVar2 = piVar6[-1];
          piVar6[-1] = iVar1;
          piVar6 = piVar6 + -1;
        }
        else {
          iVar1 = *piVar5;
          *piVar5 = *piVar4;
          piVar5 = piVar5 + 1;
          *piVar4 = iVar1;
        }
      }
      goto joined_r0x00a9bff5;
    }
    if (*piVar5 <= *piVar2) {
      if (*piVar5 < *piVar2) goto joined_r0x00a9c01d;
      iVar1 = *piVar6;
      *piVar6 = *piVar5;
      piVar6 = piVar6 + 1;
      *piVar5 = iVar1;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_00a9c0e0 @ 00a9c0e0 ////

void __cdecl FUN_00a9c0e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_00a9bd80(param_1,iVar2,iVar3,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00a9c1b0 @ 00a9c1b0 ////

void __cdecl FUN_00a9c1b0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x00a9c1c4:
    piVar4 = piVar4 + 1;
    if (piVar4 != param_2) {
      iVar2 = *piVar4;
      piVar5 = param_1;
      if (*param_1 <= iVar2) goto LAB_00a9c1e1;
      goto joined_r0x00a9c1fe;
    }
  }
  return;
LAB_00a9c1e1:
  piVar3 = piVar4;
  if (iVar2 < piVar4[-1]) {
    do {
      piVar5 = piVar3 + -1;
      piVar1 = piVar3 + -2;
      piVar3 = piVar5;
    } while (iVar2 < *piVar1);
joined_r0x00a9c1fe:
    if ((piVar5 != piVar4) && (piVar4 != piVar4 + 1)) {
      FUN_00a9b920((int)piVar5,(int)piVar4,piVar4 + 1);
    }
  }
  goto joined_r0x00a9c1c4;
}


//// FUNCTION FUN_00a9c270 @ 00a9c270 ////

void __cdecl FUN_00a9c270(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_00a9bd80((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00a9c2c0 @ 00a9c2c0 ////

void __cdecl FUN_00a9c2c0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00a9c343:
      if (1 < iVar2) {
        FUN_00a9c1b0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00a9c0e0((int)param_1,(int)param_2);
        }
        FUN_00a9c270(param_1,(int)param_2);
        return;
      }
      goto LAB_00a9c343;
    }
    FUN_00a9bf90(&local_8,param_1,param_2);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00a9c2c0(param_1,local_8,param_3);
      param_1 = piVar1;
    }
    else {
      FUN_00a9c2c0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00a9c3b0 @ 00a9c3b0 ////

void __thiscall FUN_00a9c3b0(void *this,char *param_1,void *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  size_t _MaxCount;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  char *_Str2;
  undefined4 local_54 [2];
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd348;
  local_c = ExceptionList;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  _Str2 = *(char **)((int)this + 0x30);
  _MaxCount = (int)pcVar3 - (int)(param_1 + 1);
  ExceptionList = &local_c;
  if (0 < *(int *)((int)this + 0x18)) {
    do {
      pcVar3 = _Str2;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (((int)(_MaxCount + 1) < (int)pcVar3 - (int)(_Str2 + 1)) &&
         (iVar4 = __strnicmp(param_1,_Str2,_MaxCount), iVar4 == 0)) {
        pcVar1 = _Str2 + _MaxCount;
        local_4c = local_40;
        local_40[0] = '\0';
        local_48 = 0;
        local_44 = 0x14;
        pcVar6 = pcVar1;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        uVar7 = (int)pcVar6 - (int)(pcVar1 + 1);
        if (0x13 < uVar7) {
          local_44 = uVar7 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44);
        }
        _strncpy(local_4c,pcVar1,uVar7);
        local_4c[uVar7] = '\0';
        local_4 = 0;
        local_48 = uVar7;
        uVar7 = FUN_00448220(&local_4c,&DAT_00d1835c,0,1);
        if (uVar7 != 0xffffffff) {
          puVar5 = FUN_00430770(&local_4c,local_2c,0,uVar7);
          uVar7 = puVar5[1];
          pcVar1 = (char *)*puVar5;
          if (local_44 <= uVar7) {
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
            local_44 = uVar7 + 0x20 & 0xffffffe0;
            local_4c = _malloc(local_44);
          }
          _strncpy(local_4c,pcVar1,uVar7);
          local_4c[uVar7] = '\0';
          local_48 = uVar7;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
        }
        uVar7 = 0;
        if (local_48 != 0) {
          do {
            iVar4 = _tolower((int)local_4c[uVar7]);
            local_4c[uVar7] = (char)iVar4;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_48);
        }
        FUN_0048fab0(param_2,local_54,&local_4c);
        local_4 = 0xffffffff;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
      }
      _Str2 = _Str2 + ((int)pcVar3 - (int)(_Str2 + 1)) + 1;
    } while ((int)_Str2 - *(int *)((int)this + 0x30) < *(int *)((int)this + 0x18));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a9c5c0 @ 00a9c5c0 ////

void __thiscall FUN_00a9c5c0(void *this,char *param_1,char *param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  char *this_00;
  char *pcVar3;
  int iVar4;
  char *_Str2;
  
  this_00 = param_2;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _Str2 = *(char **)((int)this + 0x30);
  if (0 < *(int *)((int)this + 0x18)) {
    do {
      if (param_3 == '\0') {
        iVar4 = __stricmp(param_1,_Str2);
        if (iVar4 == 0) {
          param_2 = _Str2 + -*(int *)((int)this + 0x30);
          iVar4 = *(int *)(this_00 + 4);
          if ((iVar4 == 0) ||
             ((uint)(*(int *)(this_00 + 0xc) - iVar4 >> 2) <=
              (uint)(*(int *)(this_00 + 8) - iVar4 >> 2))) goto LAB_00a9c6af;
          piVar2 = *(int **)(this_00 + 8);
          *piVar2 = (int)param_2;
          *(int **)(this_00 + 8) = piVar2 + 1;
        }
      }
      else {
        iVar4 = __strnicmp(param_1,_Str2,(int)pcVar3 - (int)(param_1 + 1));
        if (iVar4 == 0) {
          param_2 = _Str2 + -*(int *)((int)this + 0x30);
          iVar4 = *(int *)(this_00 + 4);
          if ((iVar4 == 0) ||
             ((uint)(*(int *)(this_00 + 0xc) - iVar4 >> 2) <=
              (uint)(*(int *)(this_00 + 8) - iVar4 >> 2))) {
LAB_00a9c6af:
            FUN_0040ec60(this_00,*(undefined4 **)(this_00 + 8),1,&param_2);
          }
          else {
            piVar2 = *(int **)(this_00 + 8);
            *piVar2 = (int)param_2;
            *(int **)(this_00 + 8) = piVar2 + 1;
          }
        }
      }
      do {
        cVar1 = *_Str2;
        _Str2 = _Str2 + 1;
      } while (cVar1 != '\0');
    } while ((int)_Str2 - *(int *)((int)this + 0x30) < *(int *)((int)this + 0x18));
  }
  return;
}


//// FUNCTION FUN_00a9c6f0 @ 00a9c6f0 ////

void __thiscall FUN_00a9c6f0(void *this,char *param_1,char *param_2,void *param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  undefined3 extraout_var;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  uint *_Memory;
  undefined4 local_44 [2];
  char local_3c [4];
  uint *local_38;
  uint *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cfd370;
  local_c = ExceptionList;
  iVar8 = 0;
  local_38 = (uint *)0x0;
  local_34 = (uint *)0x0;
  local_30 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00a9c5c0(this,param_1,local_3c,param_4);
  puVar7 = local_34;
  _Memory = local_38;
  if (local_38 == (uint *)0x0) {
    ExceptionList = local_c;
    return;
  }
  iVar5 = (int)local_34 - (int)local_38 >> 2;
  if (iVar5 != 0) {
    FUN_00a9c2c0((int *)local_38,(int *)local_34,iVar5);
    _param_4 = 0;
    if (0 < *(int *)((int)this + 0xc)) {
      do {
        iVar5 = *(int *)((int)this + 0x28) + iVar8;
        puVar3 = local_38;
        while (puVar3 != puVar7) {
          if (*_Memory == (*(uint *)(iVar5 + 0x14) >> 1 & 0x3fff)) {
            if ((_Memory != puVar7) &&
               (bVar4 = FUN_009c75d0(param_2,(char *)(iVar5 + 0x18)),
               CONCAT31(extraout_var,bVar4) != 0)) {
              local_2c = local_20;
              pcVar1 = (char *)(*(int *)((int)this + 0x28) + 0x18 + iVar8);
              local_20[0] = 0;
              local_28 = 0;
              local_24 = 0x14;
              pcVar6 = pcVar1;
              do {
                cVar2 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar2 != '\0');
              FUN_004015d0(&local_2c,pcVar1,(int)pcVar6 - (int)(pcVar1 + 1));
              local_4._0_1_ = 1;
              FUN_0048fab0(param_3,local_44,&local_2c);
              local_4 = (uint)local_4._1_3_ << 8;
              puVar7 = local_34;
              if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                _free(local_2c);
              }
            }
            break;
          }
          _Memory = _Memory + 1;
          puVar3 = _Memory;
        }
        _param_4 = _param_4 + 1;
        iVar8 = iVar8 + 0x38;
        _Memory = local_38;
      } while (_param_4 < *(int *)((int)this + 0xc));
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a9c890 @ 00a9c890 ////

undefined4 * __fastcall FUN_00a9c890(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[5] = param_1[5] | 0x7ff8000;
  return param_1;
}


//// FUNCTION FUN_00a9c980 @ 00a9c980 ////

void __cdecl FUN_00a9c980(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  cVar2 = *param_2;
  cVar3 = cVar2;
  pcVar5 = param_2;
  while (cVar3 != '\0') {
    iVar6 = iVar6 * 0x17 + ((int)cVar3 & 0xffffffdfU);
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar3 = *pcVar1;
  }
  iVar7 = 0;
  while (cVar2 != '\0') {
    iVar4 = _tolower((int)cVar2);
    iVar7 = iVar4 + iVar7 * 5;
    param_2 = param_2 + 1;
    cVar2 = *param_2;
  }
  param_1[1] = iVar7;
  *param_1 = iVar6;
  return;
}


//// FUNCTION FUN_00a9c9e0 @ 00a9c9e0 ////

int __cdecl FUN_00a9c9e0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  pbVar3 = (byte *)*param_1;
  iVar4 = 0;
  if (0 < param_3) {
    do {
      bVar1 = *pbVar3;
      while (((bVar1 & 0x80) == 0 && (iVar2 = _isspace((int)(char)bVar1), iVar2 != 0))) {
        bVar1 = pbVar3[1];
        pbVar3 = pbVar3 + 1;
      }
      if (*pbVar3 == 0) {
        return iVar4;
      }
      *param_2 = pbVar3;
      bVar1 = *pbVar3;
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 1;
      while ((bVar1 != 0 &&
             (((bVar1 & 0x80) != 0 || (iVar2 = _isspace((int)(char)bVar1), iVar2 == 0))))) {
        bVar1 = pbVar3[1];
        pbVar3 = pbVar3 + 1;
      }
      if (*pbVar3 == 0) {
        return iVar4;
      }
      *pbVar3 = 0;
      pbVar3 = pbVar3 + 1;
    } while (iVar4 < param_3);
  }
  return iVar4;
}


//// FUNCTION FUN_00a9cae0 @ 00a9cae0 ////

void __cdecl FUN_00a9cae0(undefined4 *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  pbVar3 = pbVar2 + param_1[1];
  for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 1) {
    iVar1 = _isprint((uint)*pbVar2);
    if (iVar1 == 0) {
      FID_conflict__wprintf((wchar_t *)s_<_02x>_00e6d538,(uint)*pbVar2);
    }
    else {
      __fputchar((uint)*pbVar2);
    }
  }
  __fputchar(10);
  return;
}


//// FUNCTION FUN_00a9cdc0 @ 00a9cdc0 ////

void __cdecl FUN_00a9cdc0(void *param_1,undefined4 *param_2,int *param_3)

{
  uint *puVar1;
  uint *_Buf;
  undefined4 *puVar2;
  void *pvVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *local_48;
  undefined4 local_44;
  uint local_40 [16];
  
  puVar5 = (uint *)*param_2;
  puVar1 = FUN_00acecd0(puVar5,'%');
  while (puVar1 != (uint *)0x0) {
    puVar8 = (uint *)((int)puVar1 + 1);
    _Buf = FUN_00acecd0(puVar8,'%');
    if (_Buf == (uint *)0x0) break;
    if (_Buf == puVar8) {
      FUN_00a10d40(param_1,puVar5,(int)_Buf - (int)puVar5);
      puVar5 = (uint *)((int)_Buf + 1);
    }
    else {
      local_44 = (int)_Buf + (-1 - (int)puVar1);
      puVar4 = local_40;
      for (uVar6 = local_44 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = local_44 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar4 = (char)*puVar8;
        puVar8 = (uint *)((int)puVar8 + 1);
        puVar4 = (uint *)((int)puVar4 + 1);
      }
      local_48 = local_40;
      *(undefined1 *)((int)local_40 + local_44) = 0;
      puVar2 = (undefined4 *)(**(code **)(*param_3 + 4))(&local_48);
      pvVar3 = _memchr(puVar5,0x5b,(int)puVar1 - (int)puVar5);
      if (pvVar3 == (void *)0x0) {
        FUN_00a10d40(param_1,puVar5,(int)puVar1 - (int)puVar5);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00a10df0(param_1,puVar2);
        }
        puVar5 = (uint *)((int)_Buf + 1);
      }
      else {
        puVar8 = (uint *)((int)_Buf + 1);
        puVar4 = FUN_00acecd0(puVar8,']');
        if (puVar4 == (uint *)0x0) break;
        FUN_00a10d40(param_1,puVar5,(int)pvVar3 - (int)puVar5);
        puVar5 = _memchr(_Buf,0x7c,(int)puVar4 - (int)_Buf);
        if (puVar5 == (uint *)0x0) {
          puVar5 = puVar4;
        }
        if ((puVar2 == (undefined4 *)0x0) || (puVar2[1] == 0)) {
          if (puVar5 < puVar4) {
            iVar7 = (int)puVar4 - (int)puVar5;
            puVar8 = (uint *)((int)puVar5 + 1);
            goto LAB_00a9cf28;
          }
        }
        else {
          FUN_00a10d40(param_1,(undefined4 *)((int)pvVar3 + 1),(int)puVar1 + (-1 - (int)pvVar3));
          FUN_00a10df0(param_1,puVar2);
          iVar7 = (int)puVar5 - (int)_Buf;
LAB_00a9cf28:
          FUN_00a10d40(param_1,puVar8,iVar7 - 1);
        }
        puVar5 = (uint *)((int)puVar4 + 1);
      }
    }
    puVar1 = FUN_00acecd0(puVar5,'%');
  }
  FUN_00a10d90(param_1,(char *)puVar5);
  return;
}


//// FUNCTION FUN_00a9cf60 @ 00a9cf60 ////

void __cdecl FUN_00a9cf60(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  
  uVar1 = param_3[1];
  iVar5 = uVar1 + param_2 * 2;
  param_3[1] = iVar5;
  if (param_3[2] < iVar5) {
    FUN_00a10e50(param_3,uVar1);
  }
  iVar5 = 0;
  pcVar4 = (char *)(*param_3 + uVar1);
  if (0 < param_2) {
    do {
      bVar2 = *(byte *)(iVar5 + param_1) >> 4;
      if (bVar2 < 10) {
        cVar3 = bVar2 + 0x30;
      }
      else {
        cVar3 = bVar2 + 0x37;
      }
      *pcVar4 = cVar3;
      bVar2 = *(byte *)(iVar5 + param_1) & 0xf;
      if ((*(byte *)(iVar5 + param_1) & 0xf) < 10) {
        cVar3 = bVar2 + 0x30;
      }
      else {
        cVar3 = bVar2 + 0x37;
      }
      pcVar4[1] = cVar3;
      pcVar4 = pcVar4 + 2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  uVar1 = param_3[1];
  param_3[1] = uVar1 + 1;
  if (param_3[2] < (int)(uVar1 + 1)) {
    FUN_00a10e50(param_3,uVar1);
  }
  *(undefined1 *)(*param_3 + uVar1) = 0;
  param_3[1] = param_3[1] + -1;
  return;
}


//// FUNCTION FUN_00a9d250 @ 00a9d250 ////

int __cdecl FUN_00a9d250(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = param_1[1];
  pcVar4 = (char *)*param_1;
  if ((iVar3 == 0) || (*pcVar4 != '-')) {
    bVar2 = false;
  }
  else {
    pcVar4 = pcVar4 + 1;
    bVar2 = true;
    iVar3 = iVar3 + -1;
  }
  do {
    if (iVar3 == 0) {
LAB_00a9d292:
      *param_1 = pcVar4;
      param_1[1] = iVar3;
      if (bVar2) {
        iVar5 = -iVar5;
      }
      return iVar5;
    }
    cVar1 = *pcVar4;
    if (cVar1 == '\0') {
      if (iVar3 != 0) {
        pcVar4 = pcVar4 + 1;
        iVar3 = iVar3 + -1;
      }
      goto LAB_00a9d292;
    }
    pcVar4 = pcVar4 + 1;
    iVar3 = iVar3 + -1;
    iVar5 = cVar1 + -0x30 + iVar5 * 10;
  } while( true );
}


//// FUNCTION FUN_00a9d390 @ 00a9d390 ////

void __cdecl FUN_00a9d390(int *param_1,void *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = FUN_00a9d250(param_1);
  if (param_1[1] < (int)uVar2) {
    uVar2 = param_1[1];
  }
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 *)((int)param_2 + 4) = 0;
  FUN_00a10d40(param_2,puVar1,uVar2);
  *param_1 = *param_1 + uVar2;
  param_1[1] = param_1[1] - uVar2;
  return;
}


//// FUNCTION FUN_00a9d450 @ 00a9d450 ////

void __cdecl FUN_00a9d450(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_00a9d4e0(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a9d470 @ 00a9d470 ////

int * __fastcall FUN_00a9d470(int *param_1)

{
  LPDWORD lpMode;
  int iVar1;
  HANDLE pvVar2;
  DWORD dwMode;
  
  lpMode = operator_new(8);
  *param_1 = (int)lpMode;
  iVar1 = FUN_00c9b736(0xe99db0);
  pvVar2 = (HANDLE)__get_osfhandle(iVar1);
  GetConsoleMode(pvVar2,lpMode);
  ((undefined4 *)*param_1)[1] = *(undefined4 *)*param_1;
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffb;
  dwMode = *(DWORD *)*param_1;
  iVar1 = FUN_00c9b736(0xe99db0);
  pvVar2 = (HANDLE)__get_osfhandle(iVar1);
  SetConsoleMode(pvVar2,dwMode);
  FUN_00a9f850(&DAT_010c9fc8,FUN_00a9d450,param_1);
  return param_1;
}


//// FUNCTION FUN_00a9d4e0 @ 00a9d4e0 ////

void __fastcall FUN_00a9d4e0(int *param_1)

{
  int _FileHandle;
  HANDLE hConsoleHandle;
  DWORD dwMode;
  
  dwMode = *(DWORD *)(*param_1 + 4);
  _FileHandle = FUN_00c9b736(0xe99db0);
  hConsoleHandle = (HANDLE)__get_osfhandle(_FileHandle);
  SetConsoleMode(hConsoleHandle,dwMode);
  _fputc(10,(FILE *)&DAT_00e99dd0);
  FUN_00a9f890(&DAT_010c9fc8,(int)param_1);
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00a9d540 @ 00a9d540 ////

void FUN_00a9d540(void)

{
  FUN_00a9d570((undefined4 *)&DAT_010c9fa8);
  return;
}


//// FUNCTION FUN_00a9d550 @ 00a9d550 ////

void FUN_00a9d550(void)

{
  _atexit(FUN_00a9d560);
  return;
}


//// FUNCTION FUN_00a9d560 @ 00a9d560 ////

void FUN_00a9d560(void)

{
  FUN_00a9d590((undefined4 *)&DAT_010c9fa8);
  return;
}


//// FUNCTION FUN_00a9d570 @ 00a9d570 ////

void __fastcall FUN_00a9d570(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = &DAT_010b9370;
  *param_1 = 0;
  param_1[1] = &DAT_00e6da20;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00a9d590 @ 00a9d590 ////

void __fastcall FUN_00a9d590(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00a9d9e0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[2]);
}


//// FUNCTION FUN_00a9d650 @ 00a9d650 ////

void __fastcall FUN_00a9d650(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00a9d9e0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_00a9d680 @ 00a9d680 ////

undefined4 * __thiscall FUN_00a9d680(void *this,LPCSTR param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  LPCSTR pCVar6;
  LPCSTR local_8;
  int local_4;
  
  if (*(int *)this == 0) {
    puVar2 = operator_new(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00ab5640(puVar2);
    }
    *(undefined4 **)this = puVar2;
  }
  uVar5 = 0xffffffff;
  pCVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar5 - 1;
  local_8 = param_1;
  puVar2 = FUN_00a9da90(*(void **)this,&local_8);
  if (puVar2[6] == 0) {
    if (*(HKEY *)((int)this + 8) != (HKEY)0x0) {
      iVar3 = FUN_00a9d8f0(param_1,puVar2 + 3,*(HKEY *)((int)this + 8));
      if (iVar3 != 0) {
        puVar2[6] = 5;
        return puVar2;
      }
    }
    pcVar4 = _getenv(param_1);
    if (pcVar4 != (char *)0x0) {
      puVar2[4] = 0;
      FUN_00a10d90(puVar2 + 3,pcVar4);
      puVar2[6] = 3;
      return puVar2;
    }
    iVar3 = FUN_00a9d8f0(param_1,puVar2 + 3,(HKEY)&DAT_00e6da20);
    if (iVar3 != 0) {
      puVar2[6] = 6;
      return puVar2;
    }
    iVar3 = FUN_00a9d8f0(param_1,puVar2 + 3,(HKEY)&DAT_00e6da28);
    if (iVar3 != 0) {
      puVar2[6] = 7;
      return puVar2;
    }
    puVar2[6] = 1;
  }
  return puVar2;
}


//// FUNCTION FUN_00a9d7a0 @ 00a9d7a0 ////

void __thiscall FUN_00a9d7a0(void *this,char *param_1,BYTE *param_2,int *param_3)

{
  BYTE BVar1;
  char cVar2;
  undefined4 *puVar3;
  LONG LVar4;
  uint *this_00;
  uint uVar5;
  BYTE *pBVar6;
  char *pcVar7;
  HKEY local_c;
  char *local_8;
  int local_4;
  
  if (*(int *)this == 0) {
    puVar3 = operator_new(0xc);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00ab5640(puVar3);
    }
    *(undefined4 **)this = puVar3;
  }
  FUN_00a9d8b0((PHKEY)&local_c,*(undefined4 **)((int)this + 4),param_3);
  if (1 < *param_3) {
    return;
  }
  if ((param_2 == (BYTE *)0x0) || (*param_2 == '\0')) {
    LVar4 = RegDeleteValueA(local_c,param_1);
    if (-1 < LVar4) goto LAB_00a9d84b;
    pcVar7 = s_delete_key_00e6db84;
  }
  else {
    uVar5 = 0xffffffff;
    pBVar6 = param_2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      BVar1 = *pBVar6;
      pBVar6 = pBVar6 + 1;
    } while (BVar1 != '\0');
    LVar4 = RegSetValueExA(local_c,param_1,0,1,param_2,~uVar5);
    if (LVar4 == 0) goto LAB_00a9d84b;
    pcVar7 = s_set_key_00e6db90;
  }
  FUN_00a9f950(param_3,s_registry_00e6db78,pcVar7);
LAB_00a9d84b:
  RegCloseKey(local_c);
  if ((param_2 != (BYTE *)0x0) && (pcVar7 = _getenv(param_1), pcVar7 != (char *)0x0)) {
    pcVar7 = param_1;
    this_00 = FUN_00a10f50(param_3,(int *)&DAT_00e6dea0);
    FUN_00a11000(this_00,pcVar7);
  }
  uVar5 = 0xffffffff;
  local_8 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  local_4 = ~uVar5 - 1;
  puVar3 = FUN_00a9da40(*(void **)this,&local_8);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[6] = 0;
  }
  return;
}


//// FUNCTION FUN_00a9d8b0 @ 00a9d8b0 ////

void __cdecl FUN_00a9d8b0(PHKEY param_1,undefined4 *param_2,void *param_3)

{
  LONG LVar1;
  
  LVar1 = RegCreateKeyExA((HKEY)*param_2,(LPCSTR)param_2[1],0,(LPSTR)0x0,0,0x2001f,
                          (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)param_1,(LPDWORD)&param_1);
  if (LVar1 != 0) {
    FUN_00a9f950(param_3,s_registry_00e6db78,s_create_key_00e6db98);
  }
  return;
}


//// FUNCTION FUN_00a9d8f0 @ 00a9d8f0 ////

undefined4 __cdecl FUN_00a9d8f0(LPCSTR param_1,undefined4 *param_2,HKEY param_3)

{
  LONG LVar1;
  DWORD local_14;
  DWORD local_10;
  int local_c [2];
  undefined4 local_4;
  
  local_4 = 0;
  local_c[0] = 0;
  local_14 = 0;
  FUN_00a9d8b0(&param_3,param_3,local_c);
  if (1 < local_c[0]) {
    FUN_00a10ef0((int)local_c);
    return 0;
  }
  LVar1 = RegQueryValueExA((HKEY)param_3,param_1,(LPDWORD)0x0,&local_10,(LPBYTE)0x0,&local_14);
  if ((LVar1 != 0) && (LVar1 != 0xea)) {
    RegCloseKey((HKEY)param_3);
    FUN_00a10ef0((int)local_c);
    return 0;
  }
  param_2[1] = local_14;
  if ((int)param_2[2] < (int)local_14) {
    FUN_00a10e50(param_2,0);
  }
  RegQueryValueExA((HKEY)param_3,param_1,(LPDWORD)0x0,&local_10,(LPBYTE)*param_2,&local_14);
  RegCloseKey((HKEY)param_3);
  FUN_00a10ef0((int)local_c);
  return 1;
}


//// FUNCTION FUN_00a9d9e0 @ 00a9d9e0 ////

void __fastcall FUN_00a9d9e0(undefined4 *param_1)

{
  undefined4 *_Memory;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)param_1[1]) {
    if ((int)param_1[1] < 1) goto LAB_00a9da2a;
    do {
      _Memory = *(undefined4 **)(param_1[2] + iVar1 * 4);
      if (_Memory != (undefined4 *)0x0) {
        if ((undefined1 *)_Memory[3] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
          _free((undefined1 *)_Memory[3]);
        }
        if ((undefined1 *)*_Memory == &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
                    /* WARNING: Subroutine does not return */
        _free((undefined1 *)*_Memory);
      }
LAB_00a9da2a:
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[1]);
  }
  FUN_00ab5650(param_1);
  return;
}


//// FUNCTION FUN_00a9da40 @ 00a9da40 ////

undefined4 * __thiscall FUN_00a9da40(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    if (*(int *)((int)this + 4) < 1) {
      puVar3 = (undefined4 *)0x0;
      goto LAB_00a9da61;
    }
    do {
      puVar3 = *(undefined4 **)(*(int *)((int)this + 8) + iVar2 * 4);
LAB_00a9da61:
      iVar1 = FUN_00ab5720((byte *)*puVar3,(byte *)*param_1);
      if (iVar1 == 0) {
        return puVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a9da90 @ 00a9da90 ////

undefined4 * __thiscall FUN_00a9da90(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  
  this_00 = FUN_00a9da40(this,param_1);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = operator_new(0x1c);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      this_00[2] = 0;
      this_00[1] = 0;
      *this_00 = &DAT_010b9370;
      this_00[5] = 0;
      this_00[4] = 0;
      this_00[3] = &DAT_010b9370;
    }
    this_00[6] = 0;
    this_00[1] = 0;
    FUN_00a10df0(this_00,param_1);
    puVar1 = (undefined4 *)FUN_00ab5690(this);
    *puVar1 = this_00;
  }
  return this_00;
}


//// FUNCTION FUN_00a9db30 @ 00a9db30 ////

undefined4 __thiscall FUN_00a9db30(void *this,LPCSTR param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00a9d680(this,param_1);
  if (puVar1[4] != 0) {
    return puVar1[3];
  }
  return 0;
}


//// FUNCTION FUN_00a9dc40 @ 00a9dc40 ////

void __thiscall FUN_00a9dc40(void *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *this_00;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *unaff_EBX;
  int *unaff_EDI;
  char *pcVar8;
  char **ppcVar9;
  undefined4 *local_3c;
  char *local_38;
  void *local_34;
  int *local_30;
  char *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  uint *puStack_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = 0;
  local_24 = 0;
  local_34 = this;
  local_38 = (char *)FUN_00a9db30(this,s_P4CONFIG_00e6db24);
  if (local_38 == (char *)0x0) {
LAB_00a9de3d:
    FUN_00a10ef0((int)&local_24);
    return;
  }
  if (*(int *)this == 0) {
    puVar2 = operator_new(0xc);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00ab5640(puVar2);
    }
    *(undefined4 **)this = puVar2;
  }
  local_3c = (undefined4 *)FUN_00ab5a00();
  piVar3 = (int *)FUN_00ab5a00();
  this_00 = FUN_00a9f060((undefined4 *)0x1);
  local_c = &DAT_010b9370;
  local_18 = &DAT_010b9370;
  local_4 = 0;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  local_3c[2] = 0;
  local_30 = this_00;
  FUN_00a10df0(local_3c + 1,param_1);
  do {
    local_24 = 0;
    uVar7 = 0xffffffff;
    local_2c = local_38;
    pcVar8 = local_38;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_28 = (undefined4 *)(~uVar7 - 1);
    ppcVar9 = &local_2c;
    (**(code **)(*piVar3 + 8))(-(uint)(local_3c != (undefined4 *)0x0) & (uint)(local_3c + 1));
    if (piVar3 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = piVar3 + 1;
    }
    (**(code **)(*this_00 + 4))(piVar4);
    (**(code **)(*this_00 + 0x10))(0,&local_30);
    if ((int)local_38 < 2) {
      iVar5 = FUN_00a9e0e0(this_00,(int *)&puStack_20,&local_38);
      while (iVar5 != 0) {
        puVar6 = FUN_00acecd0(puStack_20,'=');
        if (puVar6 != (uint *)0x0) {
          local_28 = (undefined4 *)0x0;
          FUN_00a10d40(&local_2c,puStack_20,(int)puVar6 - (int)puStack_20);
          local_3c = local_28;
          puVar2 = FUN_00a9da90((void *)*unaff_EBX,(undefined4 *)&stack0xffffffc0);
          puVar2[4] = 0;
          FUN_00a10d90(puVar2 + 3,(char *)((int)puVar6 + 1));
          puVar2[6] = 4;
          this_00 = unaff_EDI;
        }
        iVar5 = FUN_00a9e0e0(this_00,(int *)&puStack_20,&local_38);
      }
      (**(code **)(*this_00 + 0x1c))(&local_38);
LAB_00a9dded:
      if (this_00 != (int *)0x0) {
        (**(code **)*this_00)(1);
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)*piVar3)(1);
      }
      if (local_3c != (undefined4 *)0x0) {
        (**(code **)*local_3c)(1);
      }
      if (local_18 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      if (local_c != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
        _free(local_c);
      }
      goto LAB_00a9de3d;
    }
    iVar5 = (**(code **)(*ppcVar9 + 0x10))(0);
    if (iVar5 == 0) goto LAB_00a9dded;
  } while( true );
}


//// FUNCTION FUN_00a9e040 @ 00a9e040 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_00a9e040(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_10a8 [8];
  undefined4 local_10a0 [38];
  undefined1 auStack_1008 [4096];
  int *piStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa9e04a;
  FUN_00ab5aa0(local_10a0);
  (**(code **)(*(int *)this + 0x10))(0,param_2);
  iVar1 = *param_2;
  while (((iVar1 < 2 &&
          (iVar1 = (**(code **)(*(int *)this + 0x18))(auStack_1008,0x1000,param_2), iVar1 != 0)) &&
         (*param_2 < 2))) {
    FUN_00ab5ad0(auStack_10a8,(uint *)&stack0xffffef50);
    iVar1 = *param_2;
  }
  (**(code **)(*(int *)this + 0x1c))(param_2);
  FUN_00ab64e0(&stack0xffffef54,piStack_8);
  return;
}


//// FUNCTION FUN_00a9e0e0 @ 00a9e0e0 ////

undefined4 __thiscall FUN_00a9e0e0(void *this,int *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uStack_4;
  
  uStack_4 = (uint)this & 0xffffff;
  param_1[1] = 0;
  do {
    iVar3 = (**(code **)(*(int *)this + 0x18))((int)&uStack_4 + 3,1,param_2);
    if (iVar3 != 1) break;
    cVar2 = uStack_4._3_1_;
    if (uStack_4._3_1_ == '\n') goto LAB_00a9e144;
    uVar1 = param_1[1];
    param_1[1] = uVar1 + 1;
    if (param_1[2] < (int)(uVar1 + 1)) {
      FUN_00a10e50(param_1,uVar1);
    }
    *(char *)(*param_1 + uVar1) = cVar2;
  } while (param_1[1] < 0x1000);
LAB_00a9e144:
  uVar1 = param_1[1];
  if ((uVar1 == 0) && (uStack_4._3_1_ == '\0')) {
    return 0;
  }
  param_1[1] = uVar1 + 1;
  if (param_1[2] < (int)(uVar1 + 1)) {
    FUN_00a10e50(param_1,uVar1);
  }
  *(undefined1 *)(*param_1 + uVar1) = 0;
  param_1[1] = param_1[1] + -1;
  return 1;
}


//// FUNCTION FUN_00a9e190 @ 00a9e190 ////

void __thiscall FUN_00a9e190(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_1[1] = 0;
  while( true ) {
    uVar3 = param_1[1];
    param_1[1] = uVar3 + 0x1000;
    if (param_1[2] < (int)(uVar3 + 0x1000)) {
      FUN_00a10e50(param_1,uVar3);
    }
    iVar1 = *param_1;
    iVar2 = (**(code **)(*(int *)this + 0x18))(iVar1 + uVar3,0x1000,param_2);
    if (1 < *param_2) break;
    uVar3 = iVar1 + uVar3 + (iVar2 - *param_1);
    param_1[1] = uVar3;
    if (iVar2 < 1) {
      param_1[1] = uVar3 + 1;
      if (param_1[2] < (int)(uVar3 + 1)) {
        FUN_00a10e50(param_1,uVar3);
      }
      *(undefined1 *)(*param_1 + uVar3) = 0;
      param_1[1] = param_1[1] + -1;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a9e210 @ 00a9e210 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int __thiscall FUN_00a9e210(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  char *pcVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  undefined4 uStack_201c;
  int *piStack_2018;
  char acStack_1010 [4100];
  int *piStack_c;
  int *piStack_4;
  
  piStack_4 = (int *)0xa9e21a;
  piStack_2018 = param_2;
  uStack_201c = 0;
  (**(code **)(*(int *)this + 0x10))();
  piVar4 = piStack_4;
  if (1 < *param_2) {
    return 0;
  }
  (**(code **)(*piStack_4 + 0x10))(0,param_2);
  if (1 < *param_2) {
    (**(code **)(*(int *)this + 0x1c))(param_2);
    return 0;
  }
  while( true ) {
    iVar1 = (**(code **)(*(int *)this + 0x18))(acStack_1010,0x1000,param_2);
    iVar7 = iVar1;
    iVar2 = (**(code **)(*piVar4 + 0x18))(&uStack_201c,0x1000,param_2);
    if (1 < *param_2) break;
    if (iVar1 == iVar2) {
      bVar6 = true;
      pcVar3 = acStack_1010;
      pcVar5 = &stack0xffffdff0;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar6 = *pcVar3 == *pcVar5;
        pcVar3 = pcVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      piVar4 = piStack_c;
      iVar1 = unaff_ESI;
      if (!bVar6) goto LAB_00a9e2de;
      piStack_2018 = (int *)0x0;
    }
    else {
LAB_00a9e2de:
      piStack_2018 = (int *)0x1;
    }
    if ((iVar1 == 0) || (piStack_2018 != (int *)0x0)) break;
  }
  (**(code **)(*(int *)this + 0x1c))(param_2);
  (**(code **)(*piVar4 + 0x1c))(param_2);
  return iVar7;
}


//// FUNCTION FUN_00a9e320 @ 00a9e320 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_00a9e320(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 unaff_retaddr;
  int *piStack_1010;
  
  piStack_1010 = param_3;
  (**(code **)(*(int *)this + 0x10))(0);
  if (*param_3 < 2) {
    uRam00a9e332 = unaff_retaddr;
                    /* WARNING: Read-only address (ram,0x00a9e332) is written */
    (*pcRamb48b5663)(1,param_3);
    if (1 < *param_3) {
      (**(code **)(*(int *)this + 0x1c))(param_3);
      return;
    }
    do {
      iVar1 = (**(code **)(*(int *)this + 0x18))(&piStack_1010,0x1000,param_3);
      if ((iVar1 == 0) || (1 < *param_3)) break;
      (*pcRamb48b5667)(&piStack_1010,iVar1,param_3);
    } while (*param_3 < 2);
    (**(code **)(*(int *)this + 0x1c))(param_3);
    (*pcRamb48b566f)(param_3);
  }
  return;
}


//// FUNCTION FUN_00a9e3d0 @ 00a9e3d0 ////

void FUN_00a9e3d0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  if (-1 < param_3 + -1) {
    do {
      (*(code *)param_4)();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


//// FUNCTION FUN_00a9e410 @ 00a9e410 ////

void __fastcall FUN_00a9e410(undefined4 *param_1)

{
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = &DAT_00e6dbec;
  return;
}


//// FUNCTION FUN_00a9e430 @ 00a9e430 ////

void __fastcall FUN_00a9e430(undefined4 *param_1)

{
  void *_Memory;
  undefined4 *puVar1;
  
  _Memory = (void *)param_1[3];
  if (_Memory != (void *)0x0) {
    FUN_00ab7030((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00ab6630(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00ab6630(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  if (param_1[4] != 0) {
    _fclose((FILE *)param_1[2]);
  }
  return;
}


//// FUNCTION FUN_00a9e490 @ 00a9e490 ////

void __thiscall FUN_00a9e490(void *this,int *param_1,int *param_2,int param_3,int *param_4)

{
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = operator_new(0x14);
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00ab6510(pvVar1,param_1,param_3,param_4);
  }
  *(int **)this = piVar2;
  pvVar1 = operator_new(0x14);
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00ab6510(pvVar1,param_2,param_3,param_4);
  }
  *(int **)((int)this + 4) = piVar2;
  if (*param_4 < 2) {
    pvVar1 = operator_new(0x24);
    if (pvVar1 != (void *)0x0) {
      piVar2 = FUN_00ab6f30(pvVar1,*(int *)this,*(int *)((int)this + 4));
      *(int **)((int)this + 0xc) = piVar2;
      return;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return;
}


//// FUNCTION FUN_00a9e520 @ 00a9e520 ////

void __thiscall FUN_00a9e520(void *this,char *param_1,void *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = _fopen(param_1,&DAT_00e6dbf8);
  *(FILE **)((int)this + 8) = pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    FUN_00a9f950(param_2,s_write_00e6dbf0,param_1);
    return;
  }
  *(undefined4 *)((int)this + 0x10) = 1;
  return;
}


//// FUNCTION FUN_00a9e560 @ 00a9e560 ////

void __thiscall FUN_00a9e560(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x14) = 2;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined **)((int)this + 0x18) = &DAT_00e68a7c;
  return;
}


//// FUNCTION FUN_00a9e580 @ 00a9e580 ////

void __thiscall FUN_00a9e580(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    iVar1 = _fflush(*(FILE **)((int)this + 8));
    if (((iVar1 < 0) || ((*(byte *)(*(int *)((int)this + 8) + 0xc) & 0x20) != 0)) && (*param_1 < 2))
    {
      FUN_00a9f950(param_1,s_write_00e6dbf0,&DAT_00e6dbfc);
    }
    _fclose(*(FILE **)((int)this + 8));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return;
}


//// FUNCTION FUN_00a9e5e0 @ 00a9e5e0 ////

void __thiscall FUN_00a9e5e0(void *this,char *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  FUN_00ab7140((void *)(param_2[4] + 4),*(int *)(*param_2 + 4 + param_3 * 8));
  iVar1 = param_3;
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    iVar1 = iVar1 + 1;
    _fputs(param_1,*(FILE **)((int)this + 8));
    FUN_00ab67d0(param_2,*(FILE **)((int)this + 8),param_3,iVar1,*(int *)((int)this + 0x14));
  }
  return;
}


//// FUNCTION FUN_00a9e640 @ 00a9e640 ////

void __thiscall FUN_00a9e640(void *this,undefined4 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_00a9e6b0(this);
    return;
  case 1:
    FUN_00a9eaa0(this,param_1[2]);
    return;
  case 2:
    FUN_00a9e950(this,param_1[2]);
    return;
  case 3:
    FUN_00a9e7e0((int)this);
    break;
  case 4:
    FUN_00a9e880(this);
    return;
  case 5:
    FUN_00a9ecc0((int)this);
    return;
  }
  return;
}


//// FUNCTION FUN_00a9e6b0 @ 00a9e6b0 ////

void __fastcall FUN_00a9e6b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char local_5;
  
  puVar1 = *(undefined4 **)(param_1[3] + 0xc);
  puVar2 = (undefined4 *)**(undefined4 **)(param_1[3] + 0xc);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    iVar4 = puVar1[2];
    iVar3 = puVar1[4];
    if (iVar4 < (int)puVar2[1]) {
      if (iVar3 < (int)puVar2[3]) {
        local_5 = 'c';
        iVar4 = iVar4 + 1;
        goto LAB_00a9e707;
      }
      if ((int)puVar2[1] <= iVar4) goto LAB_00a9e6f9;
      local_5 = 'd';
      iVar4 = iVar4 + 1;
LAB_00a9e708:
      FID_conflict__fwprintf((FILE *)param_1[2],&DAT_00e6dc20,iVar4);
      if (iVar4 < (int)puVar2[1]) {
        FID_conflict__fwprintf((FILE *)param_1[2],&DAT_00e6dc1c,puVar2[1]);
      }
      FID_conflict__fwprintf((FILE *)param_1[2],&DAT_00e6dc14,(int)local_5,iVar3);
      if (iVar3 < (int)puVar2[3]) {
        FID_conflict__fwprintf((FILE *)param_1[2],&DAT_00e6dc1c,puVar2[3]);
      }
      FID_conflict__fwprintf((FILE *)param_1[2],(char *)param_1[6]);
      FUN_00a9e5e0(param_1,&DAT_00e6dc10,(int *)*param_1,puVar1[2],puVar2[1]);
      if (local_5 == 'c') {
        FID_conflict__fwprintf((FILE *)param_1[2],s_____s_00e6dc08,param_1[6]);
      }
      FUN_00a9e5e0(param_1,&DAT_00e6dc04,(int *)param_1[1],puVar1[4],puVar2[3]);
    }
    else {
LAB_00a9e6f9:
      if (iVar3 < (int)puVar2[3]) {
        local_5 = 'a';
LAB_00a9e707:
        iVar3 = iVar3 + 1;
        goto LAB_00a9e708;
      }
    }
    puVar1 = puVar2;
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}


//// FUNCTION FUN_00a9e7e0 @ 00a9e7e0 ////

void __fastcall FUN_00a9e7e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0xc);
  for (puVar3 = (undefined4 *)*puVar1; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3)
  {
    iVar2 = puVar1[2];
    if (iVar2 < (int)puVar3[1]) {
      FID_conflict__fwprintf
                (*(FILE **)(param_1 + 8),s_d_d__d_s_00e6dc30,iVar2 + 1,puVar3[1] - iVar2,
                 *(undefined4 *)(param_1 + 0x18));
    }
    if ((int)puVar1[4] < (int)puVar3[3]) {
      FID_conflict__fwprintf
                (*(FILE **)(param_1 + 8),s_a_d__d_s_00e6dc24,puVar3[1],puVar3[3] - puVar1[4],
                 *(undefined4 *)(param_1 + 0x18));
      FUN_00ab7140((void *)((*(int **)(param_1 + 4))[4] + 4),
                   *(int *)(**(int **)(param_1 + 4) + 4 + puVar1[4] * 8));
      FUN_00ab67d0(*(void **)(param_1 + 4),*(FILE **)(param_1 + 8),puVar1[4],puVar3[3],
                   *(int *)(param_1 + 0x14));
    }
    puVar1 = puVar3;
  }
  return;
}


//// FUNCTION FUN_00a9e880 @ 00a9e880 ////

void __fastcall FUN_00a9e880(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1[3] + 0xc);
  for (puVar2 = (undefined4 *)**(undefined4 **)(param_1[3] + 0xc); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    FUN_00ab7140((void *)(((int *)*param_1)[4] + 4),*(int *)(*(int *)*param_1 + 4 + puVar1[1] * 8));
    FUN_00ab7140((void *)(((int *)param_1[1])[4] + 4),
                 *(int *)(*(int *)param_1[1] + 4 + puVar1[4] * 8));
    FUN_00ab67d0((void *)*param_1,(FILE *)param_1[2],puVar1[1],puVar1[2],param_1[5]);
    FID_conflict__fwprintf((FILE *)param_1[2],s_<font_color_red>_00e6dc60);
    FUN_00ab67d0((void *)*param_1,(FILE *)param_1[2],puVar1[2],puVar2[1],param_1[5]);
    FID_conflict__fwprintf((FILE *)param_1[2],s_<_font><font_color_blue>_00e6dc44);
    FUN_00ab67d0((void *)param_1[1],(FILE *)param_1[2],puVar1[4],puVar2[3],param_1[5]);
    FID_conflict__fwprintf((FILE *)param_1[2],s_<_font>_00e6dc3c);
    puVar1 = puVar2;
  }
  return;
}


//// FUNCTION FUN_00a9e950 @ 00a9e950 ////

void __thiscall FUN_00a9e950(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_c;
  
  if (param_1 == 0) {
    param_1 = 3;
  }
  puVar9 = *(undefined4 **)(*(int *)((int)this + 0xc) + 0xc);
  puVar8 = (undefined4 *)*puVar9;
  do {
    if (puVar8 == (undefined4 *)0x0) {
      return;
    }
    if ((undefined4 *)*puVar8 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar8;
      do {
        puVar4 = puVar3;
        if (puVar8[1] + param_1 * 2 < (int)puVar8[2]) break;
        puVar3 = (undefined4 *)*puVar4;
        puVar8 = puVar4;
      } while ((undefined4 *)*puVar4 != (undefined4 *)0x0);
    }
    uVar7 = (puVar9[2] - param_1 < 1) - 1 & puVar9[2] - param_1;
    uVar6 = (puVar9[4] - param_1 < 1) - 1 & puVar9[4] - param_1;
    local_c = puVar8[1] + param_1;
    if (*(int *)(*(int *)this + 4) <= puVar8[1] + param_1) {
      local_c = *(int *)(*(int *)this + 4);
    }
    iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = puVar8[3] + param_1;
    if (iVar1 <= puVar8[3] + param_1) {
      iVar5 = iVar1;
    }
    FID_conflict__fwprintf
              (*(FILE **)((int)this + 8),s______d__d___d__d____s_00e6dc78,uVar7 + 1,local_c - uVar7,
               uVar6 + 1,iVar5 - uVar6,*(undefined4 *)((int)this + 0x18));
    do {
      iVar1 = puVar9[2];
      iVar5 = puVar9[4];
      FUN_00a9e5e0(this,&DAT_00e68b3c,*(int **)this,uVar7,iVar1);
      puVar9 = (undefined4 *)*puVar9;
      uVar7 = puVar9[1];
      iVar2 = puVar9[3];
      FUN_00a9e5e0(this,&DAT_00e68ba4,*(int **)this,iVar1,uVar7);
      FUN_00a9e5e0(this,&DAT_00e6dc74,*(int **)((int)this + 4),iVar5,iVar2);
    } while (puVar9 != puVar8);
    FUN_00a9e5e0(this,&DAT_00e68b3c,*(int **)this,uVar7,local_c);
    puVar8 = (undefined4 *)*puVar9;
  } while( true );
}


//// FUNCTION FUN_00a9eaa0 @ 00a9eaa0 ////

void __thiscall FUN_00a9eaa0(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_14;
  int local_8;
  int local_4;
  
  if (param_1 == 0) {
    param_1 = 3;
  }
  puVar1 = *(undefined4 **)(*(int *)((int)this + 0xc) + 0xc);
  puVar2 = (undefined4 *)*puVar1;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    local_14 = puVar2;
    if ((undefined4 *)*puVar2 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar2;
      do {
        puVar4 = puVar2;
        if (local_14[1] + param_1 * 2 < (int)local_14[2]) break;
        puVar2 = (undefined4 *)*puVar4;
        local_14 = puVar4;
      } while ((undefined4 *)*puVar4 != (undefined4 *)0x0);
    }
    uVar6 = (puVar1[2] - param_1 < 1) - 1 & puVar1[2] - param_1;
    uVar7 = (puVar1[4] - param_1 < 1) - 1 & puVar1[4] - param_1;
    local_8 = local_14[1] + param_1;
    if (*(int *)(*(int *)this + 4) <= local_14[1] + param_1) {
      local_8 = *(int *)(*(int *)this + 4);
    }
    iVar3 = *(int *)(*(int *)((int)this + 4) + 4);
    local_4 = local_14[3] + param_1;
    if (iVar3 <= local_14[3] + param_1) {
      local_4 = iVar3;
    }
    FID_conflict__fwprintf
              (*(FILE **)((int)this + 8),s_________________s_00e6dcc8,
               *(undefined4 *)((int)this + 0x18));
    FID_conflict__fwprintf
              (*(FILE **)((int)this + 8),s______d__d______s_00e6dcb4,uVar6 + 1,local_8,
               *(undefined4 *)((int)this + 0x18));
    puVar2 = puVar1;
    while (puVar4 = puVar2, puVar4 != local_14) {
      puVar2 = (undefined4 *)*puVar4;
      if ((int)puVar4[2] < (int)puVar2[1]) {
        FUN_00a9e5e0(this,&DAT_00e6dcb0,*(int **)this,uVar6,puVar4[2]);
        pcVar5 = &DAT_00e6dcac;
        if ((int)puVar2[3] <= (int)puVar4[4]) {
          pcVar5 = &DAT_00e6dca8;
        }
        FUN_00a9e5e0(this,pcVar5,*(int **)this,puVar4[2],puVar2[1]);
        uVar6 = puVar2[1];
      }
    }
    if ((int)puVar1[2] < (int)uVar6) {
      FUN_00a9e5e0(this,&DAT_00e6dcb0,*(int **)this,uVar6,local_8);
    }
    FID_conflict__fwprintf
              (*(FILE **)((int)this + 8),s______d__d______s_00e6dc94,uVar7 + 1,local_4,
               *(undefined4 *)((int)this + 0x18));
    puVar2 = puVar1;
    while (puVar4 = puVar2, puVar4 != local_14) {
      puVar2 = (undefined4 *)*puVar4;
      if ((int)puVar4[4] < (int)puVar2[3]) {
        FUN_00a9e5e0(this,&DAT_00e6dcb0,*(int **)((int)this + 4),uVar7,puVar4[4]);
        pcVar5 = &DAT_00e6dcac;
        if ((int)puVar2[1] <= (int)puVar4[2]) {
          pcVar5 = &DAT_00e6dc90;
        }
        FUN_00a9e5e0(this,pcVar5,*(int **)((int)this + 4),puVar4[4],puVar2[3]);
        uVar7 = puVar2[3];
      }
    }
    if ((int)puVar1[4] < (int)uVar7) {
      FUN_00a9e5e0(this,&DAT_00e6dcb0,*(int **)((int)this + 4),uVar7,local_4);
    }
    puVar2 = (undefined4 *)*local_14;
    puVar1 = local_14;
  } while( true );
}


//// FUNCTION FUN_00a9ecc0 @ 00a9ecc0 ////

void __fastcall FUN_00a9ecc0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0xc);
  iVar5 = 0;
  local_c = 0;
  local_1c = 0;
  local_10 = 0;
  local_8 = 0;
  local_18 = 0;
  puVar4 = (undefined4 *)*puVar1;
  do {
    if (puVar4 == (undefined4 *)0x0) {
      FID_conflict__fwprintf
                (*(FILE **)(param_1 + 8),s_add__d_chunks__d_lines_deleted___00e6dcdc,local_8,local_c
                 ,local_10,local_14,local_18,iVar5,local_1c);
      return;
    }
    iVar2 = puVar1[2];
    iVar3 = puVar4[1];
    if (iVar2 < iVar3) {
      if ((int)puVar4[3] <= (int)puVar1[4]) goto LAB_00a9ed28;
      iVar5 = iVar5 + (iVar3 - iVar2);
      local_1c = local_1c + (puVar4[3] - puVar1[4]);
      local_18 = local_18 + 1;
    }
    else {
LAB_00a9ed28:
      if ((int)puVar1[4] < (int)puVar4[3]) {
        local_c = local_c + (puVar4[3] - puVar1[4]);
        local_8 = local_8 + 1;
      }
      else if (iVar2 < iVar3) {
        local_14 = local_14 + (iVar3 - iVar2);
        local_10 = local_10 + 1;
      }
    }
    puVar1 = puVar4;
    puVar4 = (undefined4 *)*puVar4;
  } while( true );
}


//// FUNCTION FUN_00a9edd0 @ 00a9edd0 ////

void __thiscall FUN_00a9edd0(void *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      switch((int)cVar2) {
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        *(int *)((int)this + 8) = cVar2 + -0x30 + *(int *)((int)this + 8) * 10;
        break;
      case 0x43:
      case 99:
        *(undefined4 *)this = 1;
        break;
      case 0x48:
      case 0x68:
        *(undefined4 *)this = 4;
        *(undefined4 *)((int)this + 4) = 1;
        break;
      case 0x55:
      case 0x75:
        *(undefined4 *)this = 2;
        break;
      case 0x62:
        *(undefined4 *)((int)this + 4) = 2;
        break;
      case 0x6e:
        *(undefined4 *)this = 3;
        break;
      case 0x73:
        *(undefined4 *)this = 5;
        break;
      case 0x77:
        *(undefined4 *)((int)this + 4) = 3;
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00a9eed0 @ 00a9eed0 ////

void FUN_00a9eed0(char *param_1)

{
  DWORD DVar1;
  int iVar2;
  
  iVar2 = DAT_010c9fc0;
  DAT_010c9fc0 = DAT_010c9fc0 + 1;
  DVar1 = GetCurrentThreadId();
  _sprintf(param_1,PTR_s_t_dt_d_tmp_00e6dd30,DVar1,iVar2);
  return;
}


//// FUNCTION FUN_00a9ef00 @ 00a9ef00 ////

void __thiscall FUN_00a9ef00(void *this,char *param_1)

{
  int *this_00;
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char acStack_38 [4];
  char local_34 [52];
  
  FUN_00a9eed0(local_34);
  piVar2 = (int *)FUN_00ab5a00();
  this_00 = piVar2 + 1;
  piVar2[2] = 0;
  FUN_00a10d90(this_00,param_1);
  (**(code **)(*piVar2 + 0x10))(0);
  iVar3 = -1;
  pcVar4 = acStack_38;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*piVar2 + 8))(-(uint)(piVar2 != (int *)0x0) & (uint)this_00,&stack0xffffffc0);
  (**(code **)(*(int *)this + 4))(-(uint)(piVar2 != (int *)0x0) & (uint)this_00);
  if (piVar2 != (int *)0x0) {
    (**(code **)*piVar2)(1);
  }
  return;
}


//// FUNCTION FUN_00a9ef90 @ 00a9ef90 ////

void __fastcall FUN_00a9ef90(int *param_1)

{
  int *this;
  char cVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  char *local_3c;
  int local_38;
  char local_34 [52];
  
  pcVar2 = _getenv(&DAT_00e6dd4c);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = _getenv(&DAT_00e6dd48);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = PTR_DAT_00e6dd34;
    }
  }
  FUN_00a9eed0(local_34);
  piVar3 = (int *)FUN_00ab5a00();
  this = piVar3 + 1;
  piVar3[2] = 0;
  FUN_00a10d90(this,pcVar2);
  local_3c = local_34;
  uVar4 = 0xffffffff;
  pcVar2 = local_34;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_38 = ~uVar4 - 1;
  (**(code **)(*piVar3 + 8))(-(uint)(piVar3 != (int *)0x0) & (uint)this,&local_3c);
  (**(code **)(*param_1 + 4))(-(uint)(piVar3 != (int *)0x0) & (uint)this);
  if (piVar3 != (int *)0x0) {
    (**(code **)*piVar3)(1);
  }
  return;
}


//// FUNCTION FUN_00a9f060 @ 00a9f060 ////

undefined4 * __cdecl FUN_00a9f060(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)param_1 & 0xf000;
  if (uVar1 < 0x2001) {
    if (uVar1 == 0x2000) {
      uVar3 = 1;
    }
    else {
      if ((uVar1 == 0) || (uVar1 != 0x1000)) goto LAB_00a9f0a0;
      uVar3 = 0;
    }
  }
  else if ((uVar1 == 0x3000) || (uVar3 = 3, uVar1 != 0x4000)) {
LAB_00a9f0a0:
    uVar3 = 2;
  }
  uVar1 = (uint)param_1 & 0x21f;
  if (uVar1 < 0xd) {
    if (uVar1 == 0xc) {
      puVar2 = operator_new(0x2040);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00ab7510(puVar2);
        puVar2[9] = 0xffffffff;
        puVar2[0xd] = uVar3;
        puVar2[0x40e] = 0;
        puVar2[0x80f] = 0;
        *puVar2 = &PTR_FUN_00d7b184;
        goto LAB_00a9f25b;
      }
    }
    else {
      switch(uVar1) {
      case 1:
        puVar2 = operator_new(0x1038);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00ab7510(puVar2);
          puVar2[9] = 0xffffffff;
          *puVar2 = &PTR_FUN_00d7b2bc;
          puVar2[0xd] = uVar3;
          goto LAB_00a9f25b;
        }
        break;
      case 2:
switchD_00a9f0c5_caseD_2:
        puVar2 = operator_new(0x28);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00ab7510(puVar2);
          *puVar2 = &PTR_FUN_00d7b0ec;
          puVar2[9] = 0xffffffff;
          goto LAB_00a9f25b;
        }
        break;
      case 3:
        puVar2 = operator_new(0x2c);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00ab7510(puVar2);
          puVar2[9] = 0xffffffff;
          *puVar2 = &PTR_FUN_00d7b1d8;
          puVar2[10] = 0;
          goto LAB_00a9f25b;
        }
        break;
      default:
        goto switchD_00a9f0c5_caseD_4;
      case 6:
        puVar2 = operator_new(0x28);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00ab7510(puVar2);
          puVar2[9] = 0xffffffff;
          *puVar2 = &PTR_FUN_00d7b224;
          goto LAB_00a9f25b;
        }
        break;
      case 7:
        puVar2 = operator_new(0x28);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_00ab7510(puVar2);
          puVar2[9] = 0xffffffff;
          *puVar2 = &PTR_FUN_00d7b270;
          goto LAB_00a9f25b;
        }
      }
    }
  }
  else {
    if (0x202 < uVar1) {
      if (uVar1 == 0x1001) goto switchD_00a9f0c5_caseD_2;
switchD_00a9f0c5_caseD_4:
      puVar2 = param_1;
      goto LAB_00a9f25b;
    }
    if (uVar1 < 0x201) {
      if (uVar1 != 0x11) goto switchD_00a9f0c5_caseD_4;
      puVar2 = operator_new(0x28);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00ab7510(puVar2);
        puVar2[9] = 0xffffffff;
        *puVar2 = &PTR_FUN_00d7b138;
        goto LAB_00a9f25b;
      }
    }
    else {
      puVar2 = operator_new(0x38);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2 = FUN_00ab8690(puVar2);
        goto LAB_00a9f25b;
      }
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_00a9f25b:
  puVar2[7] = param_1;
  FUN_00a9f850(&DAT_010c9fc8,&LAB_00a9f040,puVar2);
  return puVar2;
}


//// FUNCTION FUN_00a9f2a0 @ 00a9f2a0 ////

int * __thiscall FUN_00a9f2a0(void *this,byte param_1)

{
  FUN_00ab7ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9f2c0 @ 00a9f2c0 ////

int * __thiscall FUN_00a9f2c0(void *this,byte param_1)

{
  FUN_00ab7ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9f2e0 @ 00a9f2e0 ////

int * __thiscall FUN_00a9f2e0(void *this,byte param_1)

{
  FUN_00ab7ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9f300 @ 00a9f300 ////

int * __thiscall FUN_00a9f300(void *this,byte param_1)

{
  FUN_00ab8570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9f320 @ 00a9f320 ////

int * __thiscall FUN_00a9f320(void *this,byte param_1)

{
  FUN_00ab7ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9f340 @ 00a9f340 ////

int * __thiscall FUN_00a9f340(void *this,byte param_1)

{
  FUN_00ab7ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9f360 @ 00a9f360 ////

int * __thiscall FUN_00a9f360(void *this,byte param_1)

{
  FUN_00ab7ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9f380 @ 00a9f380 ////

void __fastcall FUN_00a9f380(undefined4 *param_1)

{
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = &DAT_010b9370;
  *param_1 = &PTR_FUN_00d7b310;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
  return;
}


//// FUNCTION FUN_00a9f3b0 @ 00a9f3b0 ////

undefined4 * __thiscall FUN_00a9f3b0(void *this,byte param_1)

{
  FUN_00a9f3d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9f3d0 @ 00a9f3d0 ////

void __fastcall FUN_00a9f3d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7b310;
  FUN_00a9f890(&DAT_010c9fc8,(int)param_1);
  if ((undefined1 *)param_1[4] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[4]);
  }
  return;
}


//// FUNCTION FUN_00a9f400 @ 00a9f400 ////

void __fastcall FUN_00a9f400(int *param_1)

{
  undefined4 local_c [2];
  undefined4 local_4;
  
  local_4 = 0;
  local_c[0] = 0;
  (**(code **)(*param_1 + 0x1c))(local_c);
  if (param_1[8] != 0) {
    (**(code **)(*param_1 + 0x2c))(0);
  }
  FUN_00a10ef0((int)&stack0xfffffff0);
  return;
}


//// FUNCTION FUN_00a9f440 @ 00a9f440 ////

void __thiscall FUN_00a9f440(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x14) = 0;
  FUN_00a10df0((void *)((int)this + 0x10),param_1);
  return;
}


//// FUNCTION FUN_00a9f4b0 @ 00a9f4b0 ////

void __cdecl FUN_00a9f4b0(int *param_1)

{
  int *this;
  int *piVar1;
  int iVar2;
  wchar_t *_Memory;
  int *piVar3;
  int aiStack_28 [10];
  
  piVar1 = (int *)FUN_00ab5a00();
  this = piVar1 + 1;
  piVar1[2] = 0;
  FUN_00a10df0(this,param_1);
  iVar2 = (**(code **)(*piVar1 + 0x10))(0);
  if ((iVar2 == 0) || (piVar1[2] == 0)) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    (**(code **)*piVar1)(1);
    return;
  }
  if ((DAT_010c9fc4 == 1) && (_Memory = FUN_00ab7480(*this,piVar1[2]), _Memory != (wchar_t *)0x0)) {
    iVar2 = __wstat(_Memory,(int *)&stack0xffffffb4);
    if (-1 < iVar2) {
      if (piVar1 == (int *)0x0) {
        return;
      }
      (**(code **)*piVar1)(1);
      return;
    }
    FUN_00a9f4b0((int *)(-(uint)(piVar1 != (int *)0x0) & (uint)this));
    if (*param_1 < 2) {
      iVar2 = FUN_00ad534d(_Memory);
      if (((iVar2 < 0) && (iVar2 = __wstat(_Memory,(int *)&stack0xffffffb4), iVar2 < 0)) &&
         (piVar1 = FUN_00ad4b6c(), *piVar1 != 0x11)) {
        FUN_00a9f950(param_1,s_mkdir_00e6dd54,(char *)*this);
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  else {
    iVar2 = __stat((uchar *)*this,aiStack_28);
    if (-1 < iVar2) {
      if (piVar1 == (int *)0x0) {
        return;
      }
      (**(code **)*piVar1)(1);
      return;
    }
    FUN_00a9f4b0((int *)(-(uint)(piVar1 != (int *)0x0) & (uint)this));
    if ((((*param_1 < 2) && (iVar2 = FUN_00acf917((LPCSTR)*this), iVar2 < 0)) &&
        (iVar2 = __stat((uchar *)*this,aiStack_28), iVar2 < 0)) &&
       (piVar3 = FUN_00ad4b6c(), *piVar3 != 0x11)) {
      FUN_00a9f950(param_1,s_mkdir_00e6dd54,(char *)*this);
    }
  }
  if (piVar1 == (int *)0x0) {
    return;
  }
  (**(code **)*piVar1)(1);
  return;
}


//// FUNCTION FUN_00a9f670 @ 00a9f670 ////

void __cdecl FUN_00a9f670(undefined4 *param_1)

{
  int *this;
  int *piVar1;
  int iVar2;
  LPCWSTR _Memory;
  
  piVar1 = (int *)FUN_00ab5a00();
  this = piVar1 + 1;
  piVar1[2] = 0;
  FUN_00a10df0(this,param_1);
  iVar2 = (**(code **)(*piVar1 + 0x10))(0);
  if ((iVar2 == 0) || (piVar1[2] == 0)) {
    if (piVar1 != (int *)0x0) {
      (**(code **)*piVar1)(1);
    }
  }
  else {
    if (DAT_010c9fc4 == 1) {
      _Memory = FUN_00ab7480(*this,piVar1[2]);
      if (_Memory != (LPCWSTR)0x0) {
        iVar2 = FUN_00ad5379(_Memory);
        if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    iVar2 = FUN_00c9b7bb((LPCSTR)*this);
    if (-1 < iVar2) {
      FUN_00a9f670((undefined4 *)(-(uint)(piVar1 != (int *)0x0) & (uint)this));
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)*piVar1)(1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a9f740 @ 00a9f740 ////

void __thiscall FUN_00a9f740(void *this,byte *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = &DAT_00e6dd5c;
  do {
    bVar1 = *param_1;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) {
LAB_00a9f776:
      iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
      goto LAB_00a9f77b;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) goto LAB_00a9f776;
    param_1 = param_1 + 2;
    pbVar3 = pbVar3 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00a9f77b:
  (**(code **)(*(int *)this + 0x34))(iVar2 == 0,param_2);
  return;
}


//// FUNCTION FUN_00a9f7e0 @ 00a9f7e0 ////

undefined4 * __fastcall FUN_00a9f7e0(undefined4 *param_1)

{
  HANDLE pvVar1;
  
  FUN_00a9f820();
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  param_1[1] = pvVar1;
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_00a9f810 @ 00a9f810 ////

void FUN_00a9f810(void)

{
  _signal(2);
  return;
}


//// FUNCTION FUN_00a9f820 @ 00a9f820 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a9f820(void)

{
  int extraout_EAX;
  
  _signal(2);
  _DAT_010c9fd0 = extraout_EAX;
  if ((extraout_EAX != 0) && (extraout_EAX != 1)) {
    _signal(2);
  }
  return;
}


//// FUNCTION FUN_00a9f850 @ 00a9f850 ////

void __thiscall FUN_00a9f850(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  WaitForSingleObject(*(HANDLE *)((int)this + 4),0xffffffff);
  puVar1 = operator_new(0xc);
  *puVar1 = *(undefined4 *)this;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  *(undefined4 **)this = puVar1;
  ReleaseMutex(*(HANDLE *)((int)this + 4));
  return;
}


//// FUNCTION FUN_00a9f890 @ 00a9f890 ////

void __thiscall FUN_00a9f890(void *this,int param_1)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  WaitForSingleObject(*(HANDLE *)((int)this + 4),0xffffffff);
  puVar2 = *(undefined4 **)this;
  puVar1 = (undefined4 *)0x0;
  while( true ) {
    _Memory = puVar2;
    if (_Memory == (undefined4 *)0x0) {
      ReleaseMutex(*(HANDLE *)((int)this + 4));
      return;
    }
    if (_Memory[2] == param_1) break;
    puVar2 = (undefined4 *)*_Memory;
    puVar1 = _Memory;
  }
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *_Memory;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)this = *_Memory;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a9f950 @ 00a9f950 ////

void __thiscall FUN_00a9f950(void *this,char *param_1,char *param_2)

{
  DWORD DVar1;
  uint *this_00;
  void *pvVar2;
  DWORD dwLanguageId;
  CHAR *pCVar3;
  DWORD nSize;
  va_list *Arguments;
  CHAR local_100 [256];
  
  pCVar3 = local_100;
  Arguments = (va_list *)0x0;
  nSize = 0x100;
  dwLanguageId = 0x400;
  DVar1 = GetLastError();
  DVar1 = FormatMessageA(0x1200,(LPCVOID)0x0,DVar1,dwLanguageId,pCVar3,nSize,Arguments);
  pCVar3 = local_100;
  local_100[DVar1] = '\0';
  this_00 = FUN_00a10f50(this,(int *)&DAT_00e6e628);
  pvVar2 = (void *)FUN_00a11000(this_00,param_1);
  pvVar2 = (void *)FUN_00a11000(pvVar2,param_2);
  FUN_00a11000(pvVar2,pCVar3);
  return;
}


//// FUNCTION FUN_00a9f9d0 @ 00a9f9d0 ////

void __thiscall FUN_00a9f9d0(void *this,char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  void *pvVar5;
  
  iVar1 = WSAGetLastError();
  uVar2 = iVar1 - 10000;
  if ((uVar2 < 0x3e9) || (0x3ed < uVar2)) {
    if ((uVar2 == 0) || (0x73 < uVar2)) {
      puVar4 = FUN_00a10f50(this,(int *)&DAT_00e6e640);
      pvVar5 = (void *)FUN_00a11000(puVar4,param_1);
      pvVar5 = (void *)FUN_00a11000(pvVar5,param_2);
      FUN_00a11060(pvVar5,uVar2);
      return;
    }
    pcVar3 = (&PTR_s_NO_ERROR_00e6e76c)[uVar2];
  }
  else {
    pcVar3 = *(char **)(s_Can_t_clobber_writable_file__fil_00e6d988 + uVar2 * 4 + 8);
  }
  puVar4 = FUN_00a10f50(this,(int *)&DAT_00e6e638);
  pvVar5 = (void *)FUN_00a11000(puVar4,param_1);
  pvVar5 = (void *)FUN_00a11000(pvVar5,param_2);
  FUN_00a11000(pvVar5,pcVar3);
  return;
}


//// FUNCTION FUN_00a9fa70 @ 00a9fa70 ////

undefined4 * __fastcall FUN_00a9fa70(undefined4 *param_1)

{
  undefined4 *this;
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *local_8;
  int local_4;
  
  this = param_1 + 0x36;
  FUN_00aa0c60(param_1,this);
  FUN_00abad50(param_1 + 0x15);
  FUN_00aa0a00(this);
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = &DAT_010b9370;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = &DAT_010b9370;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = &DAT_010b9370;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = &DAT_010b9370;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = &DAT_010b9370;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = &DAT_010b9370;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = &DAT_010b9370;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = &DAT_010b9370;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = &DAT_010b9370;
  *param_1 = &PTR_FUN_00d7b358;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = param_1;
  param_1[0x2a] = param_1;
  param_1[0x3a] = 0;
  param_1[0x57] = 0;
  puVar2 = operator_new(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00a9d570(puVar2);
  }
  param_1[0x56] = uVar3;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  puVar2 = (undefined4 *)FUN_00aa05a0((int)param_1);
  FUN_00a9dc40((void *)param_1[0x56],puVar2);
  FUN_00aa0ad0(this,&PTR_s_client_OpenFile_00d7cb60);
  local_4 = DAT_010b936c;
  local_8 = DAT_010b9368;
  FUN_00aa0b60(this,"cmpfile",&local_8);
  uVar4 = 0xffffffff;
  local_8 = &DAT_00e6dd60;
  pcVar5 = &DAT_00e6dd60;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar4 - 1;
  FUN_00aa0b60(this,"client",&local_8);
  return param_1;
}


//// FUNCTION FUN_00a9fc30 @ 00a9fc30 ////

undefined4 * __thiscall FUN_00a9fc30(void *this,byte param_1)

{
  FUN_00a9fc50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a9fc50 @ 00a9fc50 ////

void __fastcall FUN_00a9fc50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x2a];
  *param_1 = &PTR_FUN_00d7b358;
  if (((puVar1 != param_1) && (puVar1 != (undefined4 *)param_1[0x29])) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)param_1[0x29];
  if ((puVar1 != param_1) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)param_1[0x27];
  if ((puVar1 != (undefined4 *)param_1[0x25]) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  puVar1 = (undefined4 *)param_1[0x28];
  if ((puVar1 != (undefined4 *)param_1[0x26]) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x25])(1);
  }
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
  }
  puVar1 = (undefined4 *)param_1[0x56];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00a9d590(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  if ((undefined1 *)param_1[0x53] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x53]);
  }
  if ((undefined1 *)param_1[0x50] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x50]);
  }
  if ((undefined1 *)param_1[0x4d] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x4d]);
  }
  if ((undefined1 *)param_1[0x4a] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x4a]);
  }
  if ((undefined1 *)param_1[0x47] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x47]);
  }
  if ((undefined1 *)param_1[0x44] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x44]);
  }
  if ((undefined1 *)param_1[0x41] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x41]);
  }
  if ((undefined1 *)param_1[0x3e] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x3e]);
  }
  if ((undefined1 *)param_1[0x3b] != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)param_1[0x3b]);
  }
  FUN_00aa0a60((int)(param_1 + 0x36));
  FUN_00abad80(param_1 + 0x15);
  FUN_00aa0d20(param_1);
  return;
}


//// FUNCTION FUN_00a9fde0 @ 00a9fde0 ////

void __thiscall FUN_00a9fde0(void *this,int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 < 2) {
    puVar1 = FUN_00aa0720((int)this);
    FUN_00aa0ab0((void *)((int)this + 0xd8),(uint *)*puVar1,param_1);
    if ((*param_1 < 2) && (FUN_00aa0db0(this,param_1), *param_1 < 2)) {
      return;
    }
  }
  FUN_00a10f50(param_1,(int *)&DAT_00e6d540);
  return;
}


//// FUNCTION FUN_00a9fe30 @ 00a9fe30 ////

void __thiscall FUN_00a9fe30(void *this,char *param_1,int param_2)

{
  FUN_00a9fe60(this,param_1,param_2);
  FUN_00a9ff40(this,(int *)0x0);
  return;
}


//// FUNCTION FUN_00a9fe60 @ 00a9fe60 ////

void __thiscall FUN_00a9fe60(void *this,char *param_1,int param_2)

{
  uint uVar1;
  char *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(int *)((int)this + *(int *)((int)this + 0xd0) * 4 + 0xbc) = param_2;
  if (param_2 != 0) {
    *(void **)(param_2 + 4) = this;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)((int)this + 0x158);
  }
  local_4 = 0;
  local_8 = 0;
  local_c = &DAT_010b9370;
  if (param_1 == (char *)0x0) {
    param_1 = &DAT_00e6dd6c;
  }
  FUN_00a10d90(&local_c,s_user__00e6dd64);
  FUN_00a10d90(&local_c,param_1);
  FUN_00aa0010(this);
  FUN_00aa10f0(this,local_c);
  uVar1 = *(int *)((int)this + 0xd0) + 1U & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  if (uVar1 == *(uint *)((int)this + 0xcc)) {
    FUN_00a9ff40(this,*(int **)((int)this + *(uint *)((int)this + 0xcc) * 4 + 0xbc));
  }
  *(uint *)((int)this + 0xd0) = uVar1;
  if (*(int *)((int)this + 0xd4) == 0) {
    FUN_00a9ff40(this,(int *)0x0);
  }
  if (local_c != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free(local_c);
  }
  return;
}


//// FUNCTION FUN_00a9ff40 @ 00a9ff40 ////

void __thiscall FUN_00a9ff40(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xcc) != *(int *)((int)this + 0xd0)) {
    do {
      FUN_00aa12d0(this,0,*(void **)(*(int *)((int)this + 4) + 4));
      *(undefined4 *)((int)this + 0xd4) = 1;
      piVar1 = *(int **)((int)this + *(int *)((int)this + 0xcc) * 4 + 0xbc);
      (**(code **)(*piVar1 + 0x44))();
      uVar2 = *(int *)((int)this + 0xcc) + 1U & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)((int)this + 0xcc) = uVar2;
    } while ((param_1 != piVar1) && (uVar2 != *(uint *)((int)this + 0xd0)));
  }
  return;
}


//// FUNCTION FUN_00a9ffc0 @ 00a9ffc0 ////

undefined4 __thiscall FUN_00a9ffc0(void *this,int *param_1)

{
  int *piVar1;
  
  FUN_00aa1010(this);
  FUN_00aa0f30((int)this);
  if (*param_1 < 2) {
    piVar1 = (int *)((int)this + 0x30);
    if (*(int *)((int)this + 0x30) < 2) {
      piVar1 = (int *)((int)this + 0x3c);
    }
    FUN_00a10f00(param_1,piVar1);
    if ((*param_1 < 2) && (*(int *)((int)this + 0xe8) == 0)) {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION FUN_00aa0010 @ 00aa0010 ////

void __fastcall FUN_00aa0010(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  
  iVar1 = FUN_00aa0660((int)param_1);
  puVar2 = FUN_00aa0510(param_1);
  FUN_00a12b10(*(void **)((int)param_1 + 0xa4),"client",puVar2);
  iVar3 = FUN_00aa05a0((int)param_1);
  FUN_00a12b10(*(void **)((int)param_1 + 0xa4),&DAT_00e6dd88,iVar3);
  puVar2 = FUN_00aa05d0(param_1);
  FUN_00a12b10(param_1,&DAT_00e6dd80,puVar2);
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_00a12b10(*(void **)((int)param_1 + 0xa4),"language",iVar1);
  }
  pvVar4 = FUN_00aa06a0((int)param_1);
  FUN_00a12b10(param_1,&DAT_00e6dd7c,pvVar4);
  puVar2 = FUN_00aa0780((int)param_1);
  FUN_00a12b10(*(void **)((int)param_1 + 0xa4),&DAT_00e6dd74,puVar2);
  if (*(int *)((int)param_1 + 0x15c) != 0) {
    FUN_00a12950(param_1,"unicode");
  }
  return;
}


//// FUNCTION FUN_00aa00c0 @ 00aa00c0 ////

void __thiscall FUN_00aa00c0(void *this,undefined4 *param_1)

{
  if (*(int *)((int)this + 0xb0) < 6) {
    FUN_00aa0010(this);
  }
  FUN_00aa10d0((int)this);
  FUN_00aa10f0(this,(char *)*param_1);
  return;
}


//// FUNCTION FUN_00aa00f0 @ 00aa00f0 ////

void __fastcall FUN_00aa00f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa4) != param_1) {
    *(undefined4 *)(*(int *)(param_1 + 0xa4) + 0xc) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((iVar1 != param_1) && (iVar1 != *(int *)(param_1 + 0xa4))) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  return;
}


//// FUNCTION FUN_00aa0150 @ 00aa0150 ////

void __thiscall FUN_00aa0150(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if (*(void **)((int)this + 0xa4) != this) {
    FUN_00a12aa0(*(void **)((int)this + 0xa4),(char *)*param_1);
  }
  FUN_00aa0fe0(this,param_1,param_2);
  return;
}


//// FUNCTION FUN_00aa0280 @ 00aa0280 ////

void __thiscall FUN_00aa0280(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  if (param_4 == -2) {
    param_4 = param_1;
  }
  if (param_2 == -2) {
    param_2 = param_1;
  }
  if (param_3 == -2) {
    param_3 = param_2;
  }
  *(undefined4 *)((int)this + 0x15c) = 1;
  DAT_010c9fc4 = param_3;
  *(undefined4 *)((int)this + 0x108) = 0;
  FUN_00a10d90((void *)((int)this + 0x104),&DAT_010b9374);
  puVar1 = (undefined4 *)FUN_00aa05a0((int)this);
  FUN_00a9dc40(*(void **)((int)this + 0x158),puVar1);
  if (((param_1 != 0) && (param_1 != 1)) && (piVar2 = FUN_00abb270(1,param_1), piVar2 != (int *)0x0)
     ) {
    pvVar3 = operator_new(0x2c);
    if (pvVar3 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00abafc0(pvVar3,this,piVar2);
    }
    *(undefined4 **)((int)this + 0xa4) = puVar1;
    if (param_3 == param_1) {
      *(undefined4 **)((int)this + 0xa8) = puVar1;
    }
    if (param_2 == param_1) {
      uVar4 = (**(code **)(*piVar2 + 4))();
      *(undefined4 *)((int)this + 0x94) = uVar4;
      uVar4 = (**(code **)(*piVar2 + 8))();
      *(undefined4 *)((int)this + 0x98) = uVar4;
    }
    if (param_4 == param_1) {
      *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)((int)this + 0x94);
      *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)((int)this + 0x98);
    }
  }
  if (((param_2 != 0) && (param_2 != param_1)) && (param_2 != 1)) {
    piVar2 = FUN_00abb270(1,param_2);
    *(int **)((int)this + 0x94) = piVar2;
    if (piVar2 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 8))();
      *(undefined4 *)((int)this + 0x98) = uVar4;
      if (param_4 == param_2) {
        *(undefined4 *)((int)this + 0xa0) = uVar4;
        *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)((int)this + 0x94);
      }
      if (param_3 == param_2) {
        pvVar3 = operator_new(0x2c);
        if (pvVar3 == (void *)0x0) {
          puVar1 = (undefined4 *)0x0;
        }
        else {
          piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x94) + 4))();
          puVar1 = FUN_00abafc0(pvVar3,this,piVar2);
        }
        *(undefined4 **)((int)this + 0xa8) = puVar1;
      }
    }
  }
  if (((param_4 != 0) && (param_4 != param_2)) && ((param_4 != param_1 && (param_4 != 1)))) {
    piVar2 = FUN_00abb270(1,param_2);
    *(int **)((int)this + 0x9c) = piVar2;
    if (piVar2 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 8))();
      *(undefined4 *)((int)this + 0xa0) = uVar4;
      if (param_3 == param_4) {
        pvVar3 = operator_new(0x2c);
        if (pvVar3 == (void *)0x0) {
          puVar1 = (undefined4 *)0x0;
        }
        else {
          piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x9c) + 4))();
          puVar1 = FUN_00abafc0(pvVar3,this,piVar2);
        }
        *(undefined4 **)((int)this + 0xa8) = puVar1;
      }
    }
  }
  if (((((param_3 != 0) && (param_3 != param_4)) && (param_3 != param_2)) &&
      ((param_3 != param_1 && (param_3 != 1)))) &&
     (piVar2 = FUN_00abb270(1,param_3), piVar2 != (int *)0x0)) {
    pvVar3 = operator_new(0x2c);
    if (pvVar3 != (void *)0x0) {
      puVar1 = FUN_00abafc0(pvVar3,this,piVar2);
      *(undefined4 **)((int)this + 0xa8) = puVar1;
      return;
    }
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  return;
}


//// FUNCTION FUN_00aa04d0 @ 00aa04d0 ////

int __fastcall FUN_00aa04d0(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0xf0) == 0) {
    pcVar1 = (char *)FUN_00a9db30(*(void **)(param_1 + 0x158),s_P4CHARSET_00e6db3c);
    if (pcVar1 != (char *)0x0) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      FUN_00a10d90((void *)(param_1 + 0xec),pcVar1);
    }
  }
  return param_1 + 0xec;
}


//// FUNCTION FUN_00aa0510 @ 00aa0510 ////

undefined4 * __fastcall FUN_00aa0510(void *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *this;
  
  if (*(int *)((int)param_1 + 0xfc) != 0) {
    return (undefined4 *)((int)param_1 + 0xf8);
  }
  pcVar1 = (char *)FUN_00a9db30(*(void **)((int)param_1 + 0x158),s_P4CLIENT_00e6db30);
  if (pcVar1 != (char *)0x0) {
    *(undefined4 *)((int)param_1 + 0xfc) = 0;
    FUN_00a10d90((undefined4 *)((int)param_1 + 0xf8),pcVar1);
    return (undefined4 *)((int)param_1 + 0xf8);
  }
  puVar2 = FUN_00aa05d0(param_1);
  this = (undefined4 *)((int)param_1 + 0xf8);
  *(undefined4 *)((int)param_1 + 0xfc) = 0;
  FUN_00a10df0(this,puVar2);
  puVar3 = FUN_00acecd0((uint *)*this,'.');
  if (puVar3 != (uint *)0x0) {
    *(undefined4 *)((int)param_1 + 0xfc) = 0;
    FUN_00a10d40(this,(undefined4 *)*this,(int)puVar3 - (int)*this);
  }
  return this;
}


//// FUNCTION FUN_00aa05a0 @ 00aa05a0 ////

int __fastcall FUN_00aa05a0(int param_1)

{
  if (*(int *)(param_1 + 0x108) == 0) {
    FUN_00abc3e0((undefined4 *)(param_1 + 0x104));
  }
  return param_1 + 0x104;
}


//// FUNCTION FUN_00aa05d0 @ 00aa05d0 ////

undefined4 * __fastcall FUN_00aa05d0(void *param_1)

{
  undefined4 *this;
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)param_1 + 0x114) != 0) {
    return (undefined4 *)((int)param_1 + 0x110);
  }
  pcVar1 = (char *)FUN_00a9db30(*(void **)((int)param_1 + 0x158),s_P4HOST_00e6daac);
  this = (undefined4 *)((int)param_1 + 0x110);
  if (pcVar1 != (char *)0x0) {
    *(undefined4 *)((int)param_1 + 0x114) = 0;
    FUN_00a10d90(this,pcVar1);
    return this;
  }
  iVar2 = FUN_00abc330(this);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_00aa0f70(param_1,1);
    *(undefined4 *)((int)param_1 + 0x114) = 0;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_00a10df0(this,puVar3);
      return this;
    }
    FUN_00a10d90(this,s_nohost_00e6dd8c);
  }
  return this;
}


//// FUNCTION FUN_00aa0660 @ 00aa0660 ////

int __fastcall FUN_00aa0660(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x150) == 0) {
    pcVar1 = (char *)FUN_00a9db30(*(void **)(param_1 + 0x158),s_P4LANGUAGE_00e6da94);
    if (pcVar1 != (char *)0x0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      FUN_00a10d90((void *)(param_1 + 0x14c),pcVar1);
    }
  }
  return param_1 + 0x14c;
}


//// FUNCTION FUN_00aa06a0 @ 00aa06a0 ////

void * __fastcall FUN_00aa06a0(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    return (void *)(param_1 + 0x11c);
  }
  pcVar1 = FUN_00ab5860();
  *(undefined4 *)(param_1 + 0x120) = 0;
  FUN_00a10d90((void *)(param_1 + 0x11c),pcVar1);
  return (void *)(param_1 + 0x11c);
}


//// FUNCTION FUN_00aa06e0 @ 00aa06e0 ////

int __fastcall FUN_00aa06e0(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x144) == 0) {
    pcVar1 = (char *)FUN_00a9db30(*(void **)(param_1 + 0x158),s_P4PASSWD_00e6da80);
    if (pcVar1 != (char *)0x0) {
      *(undefined4 *)(param_1 + 0x144) = 0;
      FUN_00a10d90((void *)(param_1 + 0x140),pcVar1);
    }
  }
  return param_1 + 0x140;
}


//// FUNCTION FUN_00aa0720 @ 00aa0720 ////

void * __fastcall FUN_00aa0720(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 300) != 0) {
    return (void *)(param_1 + 0x128);
  }
  pcVar1 = (char *)FUN_00a9db30(*(void **)(param_1 + 0x158),s_P4PORT_00e6da6c);
  if (pcVar1 != (char *)0x0) {
    *(undefined4 *)(param_1 + 300) = 0;
    FUN_00a10d90((void *)(param_1 + 0x128),pcVar1);
    return (void *)(param_1 + 0x128);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  FUN_00a10d90((void *)(param_1 + 0x128),s_perforce_1666_00e6dd94);
  return (void *)(param_1 + 0x128);
}


//// FUNCTION FUN_00aa0780 @ 00aa0780 ////

undefined4 * __fastcall FUN_00aa0780(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    pcVar1 = (char *)FUN_00a9db30(*(void **)(param_1 + 0x158),s_P4USER_00e6da50);
    if (pcVar1 == (char *)0x0) {
      iVar2 = FUN_00abc470((undefined4 *)(param_1 + 0x134));
      if (iVar2 != 0) goto LAB_00aa07d6;
      *(undefined4 *)(param_1 + 0x138) = 0;
      pcVar1 = s_nouser_00e6dda4;
    }
    else {
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    FUN_00a10d90((void *)(param_1 + 0x134),pcVar1);
  }
LAB_00aa07d6:
  puVar3 = FUN_00acecd0(*(uint **)(param_1 + 0x134),' ');
  while (puVar3 != (uint *)0x0) {
    *(undefined1 *)puVar3 = 0x5f;
    puVar3 = FUN_00acecd0(*(uint **)(param_1 + 0x134),' ');
  }
  return (undefined4 *)(param_1 + 0x134);
}


//// FUNCTION FUN_00aa0810 @ 00aa0810 ////

void __thiscall FUN_00aa0810(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x108) = 0;
  FUN_00a10df0((void *)((int)this + 0x104),param_1);
  FUN_00a9dc40(*(void **)((int)this + 0x158),param_1);
  return;
}


//// FUNCTION FUN_00aa0940 @ 00aa0940 ////

void __thiscall FUN_00aa0940(void *this,BYTE *param_1,int *param_2)

{
  FUN_00a9d7a0(*(void **)((int)this + 0x158),s_P4PASSWD_00e6da80,param_1,param_2);
  *(undefined4 *)((int)this + 0x144) = 0;
  FUN_00a10d90((void *)((int)this + 0x140),(char *)param_1);
  *(undefined4 *)((int)this + 0xd4) = 0;
  return;
}


//// FUNCTION FUN_00aa0a00 @ 00aa0a00 ////

undefined4 * __fastcall FUN_00aa0a00(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00abc5e0(puVar1);
  }
  param_1[1] = puVar1;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = &DAT_010b9370;
    puVar1[3] = 0;
  }
  param_1[3] = puVar1;
  param_1[2] = 0;
  *param_1 = 2;
  FUN_00aa0ad0(param_1,&PTR_s_compress1_00d7ce68);
  return param_1;
}


//// FUNCTION FUN_00aa0a60 @ 00aa0a60 ////

void __fastcall FUN_00aa0a60(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00abc610(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    if ((undefined1 *)*puVar1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
      _free((undefined1 *)*puVar1);
    }
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  return;
}


//// FUNCTION FUN_00aa0ab0 @ 00aa0ab0 ////

void __thiscall FUN_00aa0ab0(void *this,uint *param_1,void *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00abc6e0(param_1,param_2);
  *(undefined4 **)((int)this + 8) = puVar1;
  return;
}


//// FUNCTION FUN_00aa0ad0 @ 00aa0ad0 ////

void __thiscall FUN_00aa0ad0(void *this,undefined4 param_1)

{
  FUN_00abc630(*(void **)((int)this + 4),param_1);
  return;
}


//// FUNCTION FUN_00aa0ae0 @ 00aa0ae0 ////

void __thiscall FUN_00aa0ae0(void *this,int *param_1)

{
  uint *this_00;
  undefined4 *puVar1;
  
  *(undefined4 *)this = 1;
  (**(code **)(**(int **)((int)this + 8) + 8))(param_1);
  if (1 < *param_1) {
    puVar1 = (undefined4 *)(*(int *)((int)this + 8) + 4);
    this_00 = FUN_00a10f50(param_1,(int *)&DAT_00e6f120);
    FUN_00a10fe0(this_00,puVar1);
    *(undefined4 *)this = 0;
  }
  return;
}


//// FUNCTION FUN_00aa0b60 @ 00aa0b60 ////

void __thiscall FUN_00aa0b60(void *this,char *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  char *local_8;
  int local_4;
  
  uVar2 = 0xffffffff;
  local_8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar2 - 1;
  FUN_00abc980(*(void **)((int)this + 0xc),&local_8,param_2);
  return;
}


//// FUNCTION FUN_00aa0c60 @ 00aa0c60 ////

undefined4 * __thiscall FUN_00aa0c60(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)this = &PTR_FUN_00d7b370;
  *(undefined4 *)((int)this + 4) = param_1;
  puVar1 = operator_new(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = &DAT_010b9370;
    puVar1[3] = 0;
  }
  *(undefined4 **)((int)this + 0x10) = puVar1;
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = &DAT_010b9370;
    FUN_00abce50(puVar1 + 3);
    FUN_00abcd90(puVar1 + 7);
    *(undefined4 **)((int)this + 0x14) = puVar1;
    *(undefined4 *)((int)this + 8) = 0;
    return this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return this;
}


//// FUNCTION FUN_00aa0d00 @ 00aa0d00 ////

undefined4 * __thiscall FUN_00aa0d00(void *this,byte param_1)

{
  FUN_00aa0d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aa0d20 @ 00aa0d20 ////

void __fastcall FUN_00aa0d20(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_00d7b370;
  FUN_00aa0f30((int)param_1);
  puVar1 = (undefined4 *)param_1[4];
  if (puVar1 != (undefined4 *)0x0) {
    if ((undefined1 *)*puVar1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
      _free((undefined1 *)*puVar1);
    }
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  puVar1 = (undefined4 *)param_1[5];
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00a10ef0((int)(param_1 + 0x12));
    FUN_00a10ef0((int)(param_1 + 0xf));
    FUN_00a10ef0((int)(param_1 + 0xc));
    FUN_00a12850(param_1);
    return;
  }
  FUN_00abcda0(puVar1 + 7);
  FUN_00abceb0(puVar1 + 3);
  if ((undefined1 *)*puVar1 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
    _free((undefined1 *)*puVar1);
  }
                    /* WARNING: Subroutine does not return */
  _free(puVar1);
}


//// FUNCTION FUN_00aa0db0 @ 00aa0db0 ////

void __thiscall FUN_00aa0db0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  undefined4 local_8;
  
  if (*(int *)((int)this + 8) != 0) {
    FUN_00a10f50(param_1,(int *)&DAT_00e6f148);
    return;
  }
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  piVar2 = *(int **)((int)this + 4);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  if (*piVar2 == 1) {
    local_8 = (**(code **)(*(int *)piVar2[2] + 0x1c))(param_1);
  }
  else if (*piVar2 == 2) {
    local_8 = (**(code **)(*(int *)piVar2[2] + 0x18))(param_1);
  }
  else {
    local_8 = 0;
    FUN_00a10f50(param_1,(int *)&DAT_00e6f1a0);
  }
  if (*param_1 < 2) {
    puVar3 = operator_new(0x201c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_00abd480(puVar3,local_8);
      *puVar3 = &PTR_FUN_00d7b388;
    }
    *(undefined4 **)((int)this + 8) = puVar3;
    if ((*param_1 < 2) && (puVar3 = *(undefined4 **)(*(int *)((int)this + 4) + 0xc), puVar3[1] != 0)
       ) {
      this_00 = *(void **)((int)this + 0x10);
      *(undefined4 *)((int)this_00 + 4) = 0;
      FUN_00a10df0(this_00,puVar3);
      FUN_00aa10f0(this,"protocol");
      FUN_00abda00(*(void **)((int)this + 8),(int *)((int)this + 0x30));
    }
    return;
  }
  FUN_00a10f00((undefined4 *)((int)this + 0x3c),param_1);
  FUN_00a10f00((undefined4 *)((int)this + 0x30),param_1);
  return;
}


//// FUNCTION FUN_00aa0f10 @ 00aa0f10 ////

undefined4 * __thiscall FUN_00aa0f10(void *this,byte param_1)

{
  FUN_00abd4d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aa0f30 @ 00aa0f30 ////

void __fastcall FUN_00aa0f30(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    if (*(int *)(param_1 + 0x30) < 2) {
      FUN_00abda00(*(void **)(param_1 + 8),(int *)(param_1 + 0x30));
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x18))();
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 4))(1);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


//// FUNCTION FUN_00aa0f70 @ 00aa0f70 ////

undefined4 __thiscall FUN_00aa0f70(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*(int **)((int)this + 8) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 8) + 8))(param_1);
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_00aa0fb0 @ 00aa0fb0 ////

void __thiscall FUN_00aa0fb0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *local_8;
  int local_4;
  
  uVar2 = 0xffffffff;
  local_8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar2 - 1;
  FUN_00abca20(*(void **)((int)this + 0x10),&local_8);
  return;
}


//// FUNCTION FUN_00aa0fe0 @ 00aa0fe0 ////

void __thiscall FUN_00aa0fe0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  FUN_00abc980(*(void **)((int)this + 0x10),param_1,param_2);
  return;
}


//// FUNCTION FUN_00aa1010 @ 00aa1010 ////

void __fastcall FUN_00aa1010(void *param_1)

{
  FUN_00aa10f0(param_1,"release2");
  return;
}


//// FUNCTION FUN_00aa10d0 @ 00aa10d0 ////

void __fastcall FUN_00aa10d0(int param_1)

{
  FUN_00abcb20(*(int *)(param_1 + 0x14));
  return;
}


//// FUNCTION FUN_00aa10f0 @ 00aa10f0 ////

void __thiscall FUN_00aa10f0(void *this,char *param_1)

{
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_00aa1120(this,param_1);
    return;
  }
  FUN_00aa11e0(this,param_1);
  return;
}


//// FUNCTION FUN_00aa1120 @ 00aa1120 ////

void __thiscall FUN_00aa1120(void *this,char *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00aa11e0(this,param_1);
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + iVar1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + iVar1;
  FUN_00aa12d0(this,1,*(void **)(*(int *)((int)this + 4) + 4));
  return;
}


//// FUNCTION FUN_00aa11e0 @ 00aa11e0 ////

undefined4 __thiscall FUN_00aa11e0(void *this,char *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)((int)this + 0x30) < 2) && (*(int *)((int)this + 0x3c) < 2)) {
    FUN_00a129e0(this,&DAT_00e68b40,param_1);
    if (0 < DAT_010ca0b4) {
      FID_conflict__wprintf((wchar_t *)s_Rpc_invoking__s_00e6ddac,param_1);
    }
    piVar1 = *(int **)((int)this + 0x10);
    if (piVar1[3] != 0) {
      FUN_00abca70(piVar1);
    }
    FUN_00abdb20(piVar1,(int *)((int)this + 0x30));
    if (*(int *)((int)this + 0x30) < 2) {
      iVar2 = *(int *)((int)this + 0x10);
      uVar3 = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 4) = 0;
      return uVar3;
    }
  }
  else {
    iVar2 = *(int *)((int)this + 0x10);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  return 0;
}


//// FUNCTION FUN_00aa1270 @ 00aa1270 ////

void __fastcall FUN_00aa1270(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar1 = (undefined4 *)FUN_00a12c90(param_1,"fseq");
  puVar2 = (undefined4 *)FUN_00a12c90(param_1,"rseq");
  if (puVar1 != (undefined4 *)0x0) {
    lVar3 = _atol((char *)*puVar1);
    *(int *)((int)param_1 + 0x1c) = *(int *)((int)param_1 + 0x1c) - lVar3;
  }
  if (puVar2 != (undefined4 *)0x0) {
    lVar3 = _atol((char *)*puVar2);
    *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) - lVar3;
  }
  return;
}


//// FUNCTION FUN_00aa12d0 @ 00aa12d0 ////

void __thiscall FUN_00aa12d0(void *this,int param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x28) < 2) {
    iVar2 = *(int *)((int)this + 0x28) + 1;
    *(int *)((int)this + 0x28) = iVar2;
    if (4 < DAT_010ca0b4) {
      FID_conflict__wprintf
                ((wchar_t *)s_>>>_Dispatch__d___d__d__d__d__d_00e6ddf8,iVar2,
                 *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),
                 *(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x24),param_1);
    }
    uVar1 = *(undefined4 *)((int)this + 0x14);
    uVar4 = -(uint)(param_1 != 1) & 0xfffffd44;
    iVar2 = *(int *)((int)this + 0x3c);
    *(undefined4 *)((int)this + 0x14) = 0;
    while ((iVar2 < 2 && (*(int *)((int)this + 0x2c) == 0))) {
      if (((int)(uVar4 + 700) < *(int *)((int)this + 0x18)) && (*(int *)((int)this + 0x30) < 2)) {
        if (4 < DAT_010ca0b4) {
          FID_conflict__wprintf((wchar_t *)s_Rpc_flush__d_bytes_00e6dde4,*(int *)((int)this + 0x18))
          ;
        }
        FUN_00a12990(this,"himark",-(uint)(uVar4 != 0xfffffd44) & -(uint)(param_1 != 2) & 2000);
        if (*(int *)((int)this + 0x18) != 0) {
          FUN_00a12990(this,"fseq",*(int *)((int)this + 0x18));
        }
        if (*(int *)((int)this + 0x20) != 0) {
          FUN_00a12990(this,"rseq",*(int *)((int)this + 0x20));
        }
        *(undefined4 *)((int)this + 0x18) = 0;
        *(undefined4 *)((int)this + 0x20) = 0;
        FUN_00aa11e0(this,"flush1");
      }
      else {
        if (param_1 != 0) {
          if (param_1 == 1) {
            if (*(int *)((int)this + 0x1c) < 0x7d1) {
LAB_00aa13f6:
              if (*(int *)((int)this + 0x30) < 2) break;
            }
          }
          else if ((param_1 != 2) || (*(int *)((int)this + 0x1c) == 0)) goto LAB_00aa13f6;
        }
        if (*(int *)((int)this + 0x14) == 0) {
          puVar3 = operator_new(0x28);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3[2] = 0;
            puVar3[1] = 0;
            *puVar3 = &DAT_010b9370;
            FUN_00abce50(puVar3 + 3);
            FUN_00abcd90(puVar3 + 7);
          }
          *(undefined4 **)((int)this + 0x14) = puVar3;
        }
        FUN_00aa14d0(this,param_2);
      }
      iVar2 = *(int *)((int)this + 0x3c);
    }
    puVar3 = *(undefined4 **)((int)this + 0x14);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_00abcda0(puVar3 + 7);
      FUN_00abceb0(puVar3 + 3);
      if ((undefined1 *)*puVar3 != &DAT_010b9370) {
                    /* WARNING: Subroutine does not return */
        _free((undefined1 *)*puVar3);
      }
                    /* WARNING: Subroutine does not return */
      _free(puVar3);
    }
    *(undefined4 *)((int)this + 0x14) = uVar1;
    if (4 < DAT_010ca0b4) {
      FID_conflict__wprintf
                ((wchar_t *)s_<<<_Dispatch(_d)__d__d__d__d__d_00e6ddc0,
                 *(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x18),
                 *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),
                 *(undefined4 *)((int)this + 0x24),param_1);
    }
    iVar2 = *(int *)((int)this + 0x28) + -1;
    *(int *)((int)this + 0x28) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00aa14d0 @ 00aa14d0 ////

void __thiscall FUN_00aa14d0(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  
  if (*(int *)((int)this + 0x30) < 2) {
    FUN_00abda00(*(void **)((int)this + 8),(int *)((int)this + 0x30));
  }
  piVar4 = *(int **)((int)this + 0x14);
  piVar1 = (int *)((int)this + 0x3c);
  piVar4[9] = 0;
  piVar4[6] = 0;
  piVar4[1] = 0;
  iVar2 = FUN_00abdc10(*(void **)((int)this + 8),piVar4,piVar1);
  if (iVar2 < 1) {
    if (1 < *piVar1) {
      return;
    }
    FUN_00a10f50(piVar1,(int *)&DAT_00e6f118);
    return;
  }
  FUN_00abc8b0(*(undefined4 **)((int)this + 0x14));
  puVar3 = (undefined4 *)FUN_00a12cc0(this,"func");
  if (1 < *piVar1) {
    return;
  }
  if (0 < DAT_010ca0b4) {
    FID_conflict__wprintf((wchar_t *)s_Rpc_dispatch__s_00e6de38,*puVar3);
  }
  piVar1 = (int *)((int)this + 0x48);
  *piVar1 = 0;
  piVar4 = FUN_00abc640(param_1,(byte *)*puVar3);
  if ((piVar4 == (int *)0x0) &&
     (piVar4 = FUN_00abc640(param_1,(byte *)s_funcHandler_00e6de2c), piVar4 == (int *)0x0)) {
    puVar5 = FUN_00a10f50(piVar1,(int *)&DAT_00e6f198);
    FUN_00a10fe0(puVar5,puVar3);
  }
  else {
    (*(code *)piVar4[1])(this,piVar1);
    if (*piVar1 < 2) {
      return;
    }
    if (*piVar1 == 4) {
      pcVar6 = (char *)*piVar4;
      puVar5 = FUN_00a10f50(piVar1,(int *)&DAT_00e6f138);
      FUN_00a11000(puVar5,pcVar6);
    }
  }
  piVar4 = FUN_00abc640(param_1,(byte *)s_errorHandler_00e6de1c);
  if (piVar4 == (int *)0x0) {
    FUN_00abde50(piVar1);
    return;
  }
  (*(code *)piVar4[1])(this);
  return;
}


//// FUNCTION FUN_00aa1600 @ 00aa1600 ////

void __thiscall FUN_00aa1600(void *this,int *param_1)

{
  FUN_00aa10f0(this,"compress1");
  FUN_00abd540(*(void **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00aa1620 @ 00aa1620 ////

void __thiscall FUN_00aa1620(void *this,int *param_1)

{
  FUN_00abd540(*(void **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00aa1630 @ 00aa1630 ////

void __thiscall FUN_00aa1630(void *this,void *param_1)

{
  FUN_00abd600(*(void **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00aa1770 @ 00aa1770 ////

float10 __thiscall FUN_00aa1770(float *param_1,float param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = ((float10)param_2 - (float10)*param_1) / ((float10)param_1[1] - (float10)*param_1);
  fVar1 = (float10)param_1[2] - (float10)param_1[3];
  fVar1 = (((fVar1 + fVar1 + (float10)param_1[5] + (float10)param_1[4]) * fVar2 +
           ((-(float10)param_1[5] - ((float10)param_1[4] + (float10)param_1[4])) -
           fVar1 * (float10)3.0)) * fVar2 + (float10)param_1[4]) * fVar2 + (float10)param_1[2];
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_00aa1810 @ 00aa1810 ////

int __thiscall FUN_00aa1810(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_1 = *(undefined4 *)this;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  puVar2 = param_1 + 4;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)((int)this + 0xc);
      *puVar2 = *(undefined4 *)(iVar1 + iVar5);
      iVar3 = iVar1 + iVar5;
      puVar2[1] = *(undefined4 *)(iVar1 + 4 + iVar5);
      puVar2[2] = *(undefined4 *)(iVar3 + 8);
      puVar2[3] = *(undefined4 *)(iVar3 + 0xc);
      puVar2[4] = *(undefined4 *)(iVar3 + 0x10);
      puVar2[5] = *(undefined4 *)(iVar3 + 0x14);
      puVar2 = puVar2 + 6;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x18;
    } while (iVar4 < *(int *)((int)this + 4));
  }
  return (int)puVar2 - (int)param_1;
}


//// FUNCTION FUN_00aa1890 @ 00aa1890 ////

int __thiscall FUN_00aa1890(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = (int)this + 0x10;
  puVar1 = param_1 + 4;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)((int)this + 0xc) + iVar5);
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      puVar2 = puVar1 + 5;
      puVar3[4] = puVar1[4];
      puVar1 = puVar1 + 6;
      puVar3[5] = *puVar2;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x18;
    } while (iVar4 < *(int *)((int)this + 4));
  }
  return (int)puVar1 - (int)param_1;
}


//// FUNCTION FUN_00aa1910 @ 00aa1910 ////

float10 __thiscall FUN_00aa1910(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  if ((*(int *)(param_1 + 8) < 0) || (*(int *)(param_1 + 4) < *(int *)(param_1 + 8))) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < *(int *)(param_1 + 4)) {
    pfVar3 = (float *)(*(int *)(param_1 + 0xc) + iVar1 * 0x18);
    iVar2 = iVar1;
    do {
      if (param_2 < *pfVar3) break;
      if ((*pfVar3 <= param_2) && (param_2 <= pfVar3[1])) {
        *(int *)(param_1 + 8) = iVar2;
        fVar4 = FUN_00aa1770((float *)(*(int *)(param_1 + 0xc) + iVar2 * 0x18),param_2);
        return fVar4;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 6;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = 0;
  if (0 < iVar1) {
    pfVar3 = *(float **)(param_1 + 0xc);
    do {
      if (param_2 < *pfVar3) break;
      if ((*pfVar3 <= param_2) && (param_2 <= pfVar3[1])) {
        *(int *)(param_1 + 8) = iVar2;
        fVar4 = FUN_00aa1770(*(float **)(param_1 + 0xc) + iVar2 * 6,param_2);
        return fVar4;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 6;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return (float10)0.0;
}


//// FUNCTION FUN_00aa1a30 @ 00aa1a30 ////

void __fastcall FUN_00aa1a30(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fStack00000008;
  int iStack0000000c;
  
  uVar2 = FUN_00acd42c();
  iStack0000000c = (int)uVar2;
  uVar2 = FUN_00acd42c();
  uVar3 = FUN_00acd42c();
  FUN_00aa1910(param_1,0.0);
  if ((int)uVar2 <= (int)uVar3) {
    fStack00000008 = (float)iStack0000000c;
    iStack0000000c = 0;
    iVar1 = ((int)uVar3 - (int)uVar2) + 1;
    do {
      FUN_00aa1910(param_1,(float)iStack0000000c / fStack00000008);
      iStack0000000c = iStack0000000c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


//// FUNCTION FUN_00aa1ab0 @ 00aa1ab0 ////

void FUN_00aa1ab0(void)

{
  return;
}


//// FUNCTION FUN_00aa1b40 @ 00aa1b40 ////

void __thiscall
FUN_00aa1b40(void *this,float param_1,float param_2,float param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
            float param_12)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(float *)this = param_1 + *(float *)this;
  *(float *)((int)this + 4) = param_2 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_3 + *(float *)((int)this + 8);
  iVar2 = 0;
  *(float *)((int)this + 0xc) = param_4 + *(float *)((int)this + 0xc);
  puVar1 = (undefined4 *)((int)this + 0x34);
  *(float *)((int)this + 0x10) = param_5 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = param_6 + *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) = param_7 + *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) = param_8 + *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x20) = param_9 + *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x24) = param_10 + *(float *)((int)this + 0x24);
  do {
    puVar1[-1] = *(undefined4 *)(&stack0x00000034 + iVar2 * 4);
    *puVar1 = *(undefined4 *)(((int)&param_1 - (int)this) + (int)puVar1);
    puVar1[1] = *(undefined4 *)(((int)&param_2 - (int)this) + (int)puVar1);
    puVar1[2] = *(undefined4 *)(((int)&param_3 - (int)this) + (int)puVar1);
    puVar1[3] = *(undefined4 *)((int)puVar1 + ((int)&param_4 - (int)this));
    puVar1[4] = *(undefined4 *)((int)puVar1 + ((int)&param_5 - (int)this));
    puVar1[5] = *(undefined4 *)((int)puVar1 + ((int)&param_6 - (int)this));
    puVar1[6] = *(undefined4 *)((int)puVar1 + ((int)&param_7 - (int)this));
    iVar2 = iVar2 + 8;
    puVar1 = puVar1 + 8;
  } while (iVar2 < 0x200);
  *(float *)((int)this + 0x28) = param_11 + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x2c) = param_12 + *(float *)((int)this + 0x2c);
  return;
}


//// FUNCTION FUN_00aa1c60 @ 00aa1c60 ////

void __thiscall FUN_00aa1c60(void *this,float param_1)

{
  float fVar1;
  
  fVar1 = 1.0 / param_1;
  *(float *)this = fVar1 * *(float *)this;
  *(float *)((int)this + 4) = fVar1 * *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar1 * *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar1 * *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x10) = fVar1 * *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = fVar1 * *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) = fVar1 * *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) = fVar1 * *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x20) = fVar1 * *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x24) = fVar1 * *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x28) = fVar1 * *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x2c) = fVar1 * *(float *)((int)this + 0x2c);
  return;
}


//// FUNCTION FUN_00aa1cd0 @ 00aa1cd0 ////

void __fastcall FUN_00aa1cd0(int param_1)

{
  FUN_00aa2e40((undefined4 *)(param_1 + 0x830));
  return;
}


//// FUNCTION FUN_00aa1ce0 @ 00aa1ce0 ////

void __fastcall FUN_00aa1ce0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar2 = param_1 + 0xc;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  puVar2 = param_1 + 0x220;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x284;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x28f;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}


//// FUNCTION FUN_00aa1d60 @ 00aa1d60 ////

uint __thiscall FUN_00aa1d60(void *this,float *param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  pfVar3 = param_1;
  local_8 = 0;
  pfVar6 = param_1;
  param_1 = (float *)((int)this + 0xa3c);
  while( true ) {
    fVar2 = 0.0;
    iVar8 = 0;
    pfVar5 = pfVar6;
    if (3 < param_2) {
      iVar9 = (param_2 - 4U >> 2) + 1;
      iVar8 = iVar9 * 4;
      pfVar4 = pfVar6;
      pfVar7 = pfVar3 + 1;
      do {
        pfVar5 = pfVar4 + 2;
        iVar9 = iVar9 + -1;
        fVar2 = (float)(int)*(short *)((int)pfVar4 + 6) * (float)(int)*(short *)((int)pfVar7 + 2) +
                (float)(int)*(short *)(pfVar4 + 1) * (float)(int)*(short *)pfVar7 +
                (float)(int)*(short *)(pfVar7 + -1) * (float)(int)*(short *)pfVar4 + fVar2 +
                (float)(int)*(short *)((int)pfVar4 + 2) * (float)(int)*(short *)((int)pfVar7 + -2);
        pfVar4 = pfVar5;
        pfVar7 = pfVar7 + 2;
      } while (iVar9 != 0);
    }
    if (iVar8 < param_2) {
      pfVar5 = (float *)((int)pfVar3 + (iVar8 + local_8) * 2);
      do {
        iVar9 = iVar8 * 2;
        sVar1 = *(short *)pfVar5;
        iVar8 = iVar8 + 1;
        pfVar5 = (float *)((int)pfVar5 + 2);
        fVar2 = (float)(int)*(short *)((int)pfVar3 + iVar9) * (float)(int)sVar1 + fVar2;
      } while (iVar8 < param_2);
    }
    *param_1 = fVar2;
    if (fVar2 == 0.0) break;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
    pfVar6 = (float *)((int)pfVar6 + 2);
    param_2 = param_2 + -1;
    if (10 < local_8) {
      return CONCAT31((int3)((uint)pfVar6 >> 8),1);
    }
  }
  return CONCAT22((short)((uint)pfVar5 >> 0x10),
                  (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                  (ushort)(fVar2 == 0.0) << 0xe);
}


//// FUNCTION FUN_00aa1eb0 @ 00aa1eb0 ////

void __thiscall FUN_00aa1eb0(void *this,int *param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  ulonglong uVar10;
  float local_8;
  
  iVar7 = ((int)(*(int *)((int)this + 0x83c) + (*(int *)((int)this + 0x83c) >> 0x1f & 3U)) >> 2) +
          -2;
  local_8 = 0.0;
  fVar3 = (float)iVar7 * 0.05;
  uVar10 = FUN_00acd42c();
  iVar7 = iVar7 - (int)uVar10;
  *param_2 = 1;
  *param_1 = 1;
  iVar4 = 1;
  fVar9 = extraout_ST0;
  if (3 < iVar7 + -1) {
    iVar8 = 3;
    do {
      pfVar1 = (float *)(*(int *)((int)this + 0x830) + iVar4 * 4);
      if (*(float *)(*(int *)((int)this + 0x830) + iVar4 * 4) <= local_8) {
        if ((fVar9 < (float10)*pfVar1) &&
           (uVar5 = *param_1 - iVar4 >> 0x1f,
           fVar3 < (float)(int)((*param_1 - iVar4 ^ uVar5) - uVar5))) {
          *param_2 = iVar4;
          fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + iVar4 * 4);
        }
      }
      else {
        local_8 = *pfVar1;
        iVar2 = *param_1;
        *param_1 = iVar4;
        uVar5 = iVar4 - *param_2 >> 0x1f;
        if (fVar3 < (float)(int)((iVar4 - *param_2 ^ uVar5) - uVar5)) {
          *param_2 = iVar2;
          fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + iVar2 * 4);
        }
      }
      pfVar1 = (float *)(*(int *)((int)this + 0x830) + 4 + iVar4 * 4);
      if (*(float *)(*(int *)((int)this + 0x830) + 4 + iVar4 * 4) <= local_8) {
        if ((fVar9 < (float10)*pfVar1) &&
           (uVar5 = (*param_1 - iVar4) - 1, uVar6 = (int)uVar5 >> 0x1f,
           fVar3 < (float)(int)((uVar5 ^ uVar6) - uVar6))) {
          *param_2 = iVar8 + -1;
          fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + 4 + iVar4 * 4);
        }
      }
      else {
        iVar2 = *param_1;
        local_8 = *pfVar1;
        *param_1 = iVar8 + -1;
        uVar5 = (iVar8 + -1) - *param_2;
        uVar6 = (int)uVar5 >> 0x1f;
        if (fVar3 < (float)(int)((uVar5 ^ uVar6) - uVar6)) {
          *param_2 = iVar2;
          fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + iVar2 * 4);
        }
      }
      pfVar1 = (float *)(*(int *)((int)this + 0x830) + 8 + iVar4 * 4);
      if (*(float *)(*(int *)((int)this + 0x830) + 8 + iVar4 * 4) <= local_8) {
        if ((fVar9 < (float10)*pfVar1) &&
           (uVar5 = (*param_1 - iVar4) - 2, uVar6 = (int)uVar5 >> 0x1f,
           fVar3 < (float)(int)((uVar5 ^ uVar6) - uVar6))) {
          *param_2 = iVar8;
          fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + 8 + iVar4 * 4);
        }
      }
      else {
        local_8 = *pfVar1;
        iVar2 = *param_1;
        *param_1 = iVar8;
        uVar5 = iVar8 - *param_2 >> 0x1f;
        if (fVar3 < (float)(int)((iVar8 - *param_2 ^ uVar5) - uVar5)) {
          *param_2 = iVar2;
          fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + iVar2 * 4);
        }
      }
      pfVar1 = (float *)(*(int *)((int)this + 0x830) + 0xc + iVar4 * 4);
      if (*(float *)(*(int *)((int)this + 0x830) + 0xc + iVar4 * 4) <= local_8) {
        if ((fVar9 < (float10)*pfVar1) &&
           (uVar5 = (*param_1 - iVar4) - 3, uVar6 = (int)uVar5 >> 0x1f,
           fVar3 < (float)(int)((uVar5 ^ uVar6) - uVar6))) {
          *param_2 = iVar8 + 1;
          fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + 0xc + iVar4 * 4);
        }
      }
      else {
        iVar2 = *param_1;
        local_8 = *pfVar1;
        *param_1 = iVar8 + 1;
        uVar5 = (iVar8 + 1) - *param_2;
        uVar6 = (int)uVar5 >> 0x1f;
        if (fVar3 < (float)(int)((uVar5 ^ uVar6) - uVar6)) {
          *param_2 = iVar2;
          fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + iVar2 * 4);
        }
      }
      iVar4 = iVar4 + 4;
      iVar8 = iVar8 + 4;
    } while (iVar4 < iVar7 + -3);
  }
  for (; iVar4 < iVar7; iVar4 = iVar4 + 1) {
    pfVar1 = (float *)(*(int *)((int)this + 0x830) + iVar4 * 4);
    if (*(float *)(*(int *)((int)this + 0x830) + iVar4 * 4) <= local_8) {
      if ((fVar9 < (float10)*pfVar1) &&
         (uVar5 = *param_1 - iVar4 >> 0x1f, fVar3 < (float)(int)((*param_1 - iVar4 ^ uVar5) - uVar5)
         )) {
        *param_2 = iVar4;
        fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + iVar4 * 4);
      }
    }
    else {
      local_8 = *pfVar1;
      iVar8 = *param_1;
      *param_1 = iVar4;
      uVar5 = iVar4 - *param_2 >> 0x1f;
      if (fVar3 < (float)(int)((iVar4 - *param_2 ^ uVar5) - uVar5)) {
        *param_2 = iVar8;
        fVar9 = (float10)*(float *)(*(int *)((int)this + 0x830) + iVar8 * 4);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00aa2240 @ 00aa2240 ////

void __thiscall
FUN_00aa2240(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x84c) = param_2;
  *(undefined4 *)((int)this + 4) = *param_3;
  *(undefined4 *)((int)this + 0x10) = *param_4;
  *(undefined4 *)((int)this + 8) = param_3[1];
  *(undefined4 *)((int)this + 0x14) = param_4[1];
  *(undefined4 *)((int)this + 0xc) = param_3[2];
  *(undefined4 *)((int)this + 0x18) = param_4[2];
  puVar2 = (undefined4 *)&stack0x00000014;
  puVar3 = (undefined4 *)((int)this + 0x1c);
  for (iVar1 = 0x20c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


//// FUNCTION FUN_00aa2290 @ 00aa2290 ////

void __fastcall FUN_00aa2290(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00aa22a0 @ 00aa22a0 ////

int __thiscall FUN_00aa22a0(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char local_34 [52];
  
  if (param_1 != 0) {
    _sprintf(local_34,"phon: %p, next: %p ,prev: %p\n",*(undefined4 *)this,
             *(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8));
    pcVar2 = local_34;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)local_34;
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = local_34;
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  if (*(void **)((int)this + 4) == (void *)0x0) {
    return 0x32;
  }
  iVar4 = FUN_00aa22a0(*(void **)((int)this + 4),param_1);
  return iVar4 + 0x32;
}


//// FUNCTION FUN_00aa2320 @ 00aa2320 ////

undefined4 * __fastcall FUN_00aa2320(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar2 = param_1 + 0xc;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  return param_1;
}


//// FUNCTION FUN_00aa2360 @ 00aa2360 ////

undefined4 * __fastcall FUN_00aa2360(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd38e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar2 = param_1 + 0xc;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_00aa2e10(param_1 + 0x20c);
  local_4 = 0;
  FUN_00aa37f0(param_1 + 0x20c,0x400);
  FUN_00aa1ce0(param_1);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_00aa23f0 @ 00aa23f0 ////

void __fastcall FUN_00aa23f0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfd3ae;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00aa2e40((undefined4 *)(param_1 + 0x830));
  local_4 = 0xffffffff;
  FUN_00aa3310((undefined4 *)(param_1 + 0x830));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00aa2440 @ 00aa2440 ////

void __fastcall FUN_00aa2440(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int local_18;
  int local_14;
  int local_10;
  float *local_c;
  int local_8;
  float *local_4;
  
  fVar1 = param_1[0x28f];
  param_1[0x284] = fVar1;
  pfVar12 = param_1 + 0x284;
  local_c = param_1 + 0x217;
  pfVar11 = param_1 + 0x216;
  local_8 = 0;
  local_14 = 0;
  local_18 = 0;
  local_10 = 0;
  uVar8 = 0;
  do {
    fVar2 = pfVar12[0xc];
    *pfVar11 = fVar2;
    fVar5 = 0.0;
    iVar9 = 1;
    if (3 < (int)uVar8) {
      uVar10 = uVar8 >> 2;
      iVar9 = uVar10 * 4 + 1;
      pfVar6 = local_c;
      pfVar13 = pfVar12 + 10;
      do {
        uVar10 = uVar10 - 1;
        fVar5 = pfVar13[-2] * pfVar6[2] +
                pfVar13[-1] * pfVar6[1] + *pfVar6 * *pfVar13 + pfVar13[1] * pfVar6[-1] + fVar5;
        pfVar6 = pfVar6 + 4;
        pfVar13 = pfVar13 + -4;
      } while (uVar10 != 0);
    }
    if (iVar9 <= (int)uVar8) {
      pfVar6 = param_1 + local_14 + iVar9 + 0x215;
      local_4 = param_1 + (uVar8 - iVar9) + 0x290;
      iVar9 = (uVar8 - iVar9) + 1;
      do {
        fVar3 = *pfVar6;
        fVar4 = *local_4;
        local_4 = local_4 + -1;
        pfVar6 = pfVar6 + 1;
        iVar9 = iVar9 + -1;
        fVar5 = fVar3 * fVar4 + fVar5;
      } while (iVar9 != 0);
    }
    fVar2 = fVar2 - fVar5;
    iVar9 = 1;
    *pfVar11 = fVar2;
    fVar2 = fVar2 / *pfVar12;
    *pfVar11 = fVar2;
    *(float *)(local_18 + 0x880 + (int)param_1) = fVar2;
    if (3 < (int)uVar8) {
      uVar10 = uVar8 >> 2;
      iVar9 = uVar10 * 4 + 1;
      pfVar6 = (float *)(local_10 + 0x880 + (int)param_1);
      pfVar13 = (float *)(local_18 + 0x84c + (int)param_1);
      do {
        uVar10 = uVar10 - 1;
        *pfVar6 = pfVar6[-10] - pfVar13[2] * *pfVar11;
        pfVar6[1] = pfVar6[-9] - pfVar13[1] * *pfVar11;
        pfVar6[2] = pfVar6[-8] - *pfVar13 * *pfVar11;
        pfVar6[3] = pfVar6[-7] - pfVar13[-1] * *pfVar11;
        pfVar6 = pfVar6 + 4;
        pfVar13 = pfVar13 + -4;
      } while (uVar10 != 0);
    }
    if (iVar9 <= (int)uVar8) {
      pfVar6 = param_1 + (local_8 - iVar9) + 0x216;
      iVar7 = (uVar8 - iVar9) + 1;
      pfVar13 = param_1 + local_14 + iVar9 + 0x21f;
      do {
        fVar2 = *pfVar6;
        pfVar6 = pfVar6 + -1;
        iVar7 = iVar7 + -1;
        *pfVar13 = pfVar13[-10] - *pfVar11 * fVar2;
        pfVar13 = pfVar13 + 1;
      } while (iVar7 != 0);
    }
    fVar2 = (1.0 - *pfVar11 * *pfVar11) * *pfVar12;
    pfVar12[1] = fVar2;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      pfVar12[1] = *pfVar12;
    }
    local_10 = local_10 + 0x28;
    local_c = local_c + 10;
    local_8 = local_8 + 0xb;
    local_18 = local_18 + 0x2c;
    local_14 = local_14 + 10;
    pfVar12 = pfVar12 + 1;
    iVar9 = uVar8 + 2;
    pfVar11 = pfVar11 + 1;
    uVar8 = uVar8 + 1;
  } while (iVar9 < 0xb);
  if (param_1[0x28e] != 0.0) {
    fVar1 = fVar1 / param_1[0x28e];
  }
  *param_1 = -param_1[0x27a];
  param_1[1] = -param_1[0x27b];
  param_1[2] = -param_1[0x27c];
  param_1[3] = -param_1[0x27d];
  param_1[4] = -param_1[0x27e];
  param_1[5] = -param_1[0x27f];
  param_1[6] = -param_1[0x280];
  param_1[7] = -param_1[0x281];
  param_1[8] = -param_1[0x282];
  param_1[9] = -param_1[0x283];
  param_1[10] = SQRT(fVar1);
  return;
}


//// FUNCTION FUN_00aa26e0 @ 00aa26e0 ////

void FUN_00aa26e0(float *param_1,int param_2,uint param_3)

{
  float fVar1;
  bool bVar2;
  float *_Memory;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  _Memory = operator_new(param_3 * 4);
  pfVar3 = _Memory;
  for (uVar4 = param_3 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pfVar3 = 0.0;
    pfVar3 = pfVar3 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)pfVar3 = 0;
    pfVar3 = (float *)((int)pfVar3 + 1);
  }
  if (0 < (int)param_3) {
    psVar6 = (short *)(param_2 + -4);
    pfVar3 = _Memory;
    iVar5 = -2;
    do {
      *pfVar3 = (float)(int)psVar6[2];
      if (-1 < iVar5 + 2) {
        *pfVar3 = (float)(int)psVar6[2] * *param_1 + *pfVar3;
      }
      if (-1 < iVar5 + 1) {
        *pfVar3 = (float)(int)psVar6[1] * param_1[1] + *pfVar3;
      }
      if (-1 < iVar5) {
        *pfVar3 = (float)(int)*psVar6 * param_1[2] + *pfVar3;
      }
      if (-1 < iVar5 + -1) {
        *pfVar3 = (float)(int)psVar6[-1] * param_1[3] + *pfVar3;
      }
      if (-1 < iVar5 + -2) {
        *pfVar3 = (float)(int)psVar6[-2] * param_1[4] + *pfVar3;
      }
      if (-1 < iVar5 + -3) {
        *pfVar3 = (float)(int)psVar6[-3] * param_1[5] + *pfVar3;
      }
      if (-1 < iVar5 + -4) {
        *pfVar3 = (float)(int)psVar6[-4] * param_1[6] + *pfVar3;
      }
      if (-1 < iVar5 + -5) {
        *pfVar3 = (float)(int)psVar6[-5] * param_1[7] + *pfVar3;
      }
      if (-1 < iVar5 + -6) {
        *pfVar3 = (float)(int)psVar6[-6] * param_1[8] + *pfVar3;
      }
      if (-1 < iVar5 + -7) {
        *pfVar3 = (float)(int)psVar6[-7] * param_1[9] + *pfVar3;
      }
      iVar10 = iVar5 + 3;
      psVar6 = psVar6 + 1;
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar10 < (int)param_3);
  }
  pfVar3 = param_1 + 0xc;
  pfVar7 = pfVar3;
  for (iVar5 = 0x200; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 1;
  }
  iVar5 = 0;
  do {
    iVar10 = 1;
    *pfVar3 = _Memory[iVar5] * *_Memory;
    if (3 < (int)(param_3 - 1)) {
      iVar11 = (param_3 - 5 >> 2) + 1;
      iVar10 = iVar11 * 4 + 1;
      pfVar7 = _Memory + iVar5 + 1;
      pfVar8 = _Memory + 3;
      do {
        iVar11 = iVar11 + -1;
        fVar1 = pfVar8[-2] * *pfVar7 + *pfVar3;
        *pfVar3 = fVar1;
        fVar1 = pfVar7[1] * pfVar8[-1] + fVar1;
        *pfVar3 = fVar1;
        fVar1 = pfVar7[2] * *pfVar8 + fVar1;
        *pfVar3 = fVar1;
        *pfVar3 = pfVar7[3] * pfVar8[1] + fVar1;
        pfVar7 = pfVar7 + 4;
        pfVar8 = pfVar8 + 4;
      } while (iVar11 != 0);
    }
    if (iVar10 < (int)param_3) {
      pfVar7 = _Memory + iVar10 + iVar5;
      do {
        pfVar8 = _Memory + iVar10;
        iVar10 = iVar10 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        *pfVar3 = *pfVar8 * fVar1 + *pfVar3;
      } while (iVar10 < (int)param_3);
    }
    iVar5 = iVar5 + 1;
    pfVar3 = pfVar3 + 1;
    param_3 = param_3 - 1;
  } while (iVar5 < 0x200);
  fVar1 = 0.0;
  iVar5 = 0;
  iVar10 = 2;
  pfVar3 = param_1 + 0xd;
  do {
    iVar10 = iVar10 + -1;
    fVar1 = (pfVar3[9] - pfVar3[8]) +
            (pfVar3[8] - pfVar3[7]) +
            (pfVar3[7] - pfVar3[6]) +
            (pfVar3[6] - pfVar3[5]) +
            (pfVar3[5] - pfVar3[4]) +
            (pfVar3[4] - pfVar3[3]) +
            (pfVar3[3] - pfVar3[2]) +
            (pfVar3[2] - pfVar3[1]) + (pfVar3[1] - *pfVar3) + (*pfVar3 - pfVar3[-1]) + fVar1;
    pfVar3 = pfVar3 + 10;
  } while (iVar10 != 0);
  pfVar3 = param_1 + 0x20;
  iVar11 = 10;
  pfVar7 = param_1 + 0xc;
  iVar10 = 0;
  do {
    bVar2 = 0.0 < fVar1;
    fVar1 = (pfVar3[1] - *pfVar3) + (fVar1 - (pfVar7[1] - *pfVar7));
    iVar9 = iVar10;
    if (((bVar2) && (fVar1 < 0.0)) && (iVar9 = iVar11, iVar5 == 0)) {
      iVar5 = iVar11;
      iVar9 = iVar10;
    }
    if (iVar9 != 0) break;
    pfVar3 = pfVar3 + 1;
    iVar11 = iVar11 + 1;
    pfVar7 = pfVar7 + 1;
    iVar10 = iVar9;
  } while (iVar11 < 500);
  if ((iVar5 != 0) && (ABS((float)iVar9 / (float)iVar5 - 2.0) < 0.2)) {
    param_1[0xb] = (float)iVar5;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0xb] = -1.0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00aa2a50 @ 00aa2a50 ////

void * __thiscall
FUN_00aa2a50(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_83c [524];
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  puVar2 = (undefined4 *)((int)this + 0x4c);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  puVar2 = (undefined4 *)&stack0x00000014;
  puVar3 = auStack_83c;
  for (iVar1 = 0x20c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00aa2240(this,param_1,param_2,param_3,param_4);
  return this;
}


//// FUNCTION FUN_00aa2ad0 @ 00aa2ad0 ////

void __fastcall FUN_00aa2ad0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x213] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar2 = param_1 + 0x13;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  return;
}


//// FUNCTION FUN_00aa2b50 @ 00aa2b50 ////

void __fastcall FUN_00aa2b50(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_00aa2ad0((undefined4 *)*param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00aa2b60 @ 00aa2b60 ////

void __thiscall
FUN_00aa2b60(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 auStack_840 [522];
  undefined4 uStack_18;
  
  uVar1 = *(undefined4 *)((int)this + 4);
  uStack_18 = 0xaa2b73;
  pvVar2 = operator_new(0x850);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    puVar3 = (undefined4 *)&stack0x00000014;
    puVar5 = auStack_840;
    for (iVar4 = 0x20c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    pvVar2 = FUN_00aa2a50(pvVar2,param_1,param_2,param_3,param_4);
  }
  uStack_18 = 0xaa2bc1;
  puVar3 = operator_new(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *puVar3 = pvVar2;
  *(void **)(*(int *)((int)this + 4) + 8) = this;
  *(undefined4 *)(*(int *)((int)this + 4) + 4) = uVar1;
  return;
}


//// FUNCTION FUN_00aa2bf0 @ 00aa2bf0 ////

void __thiscall FUN_00aa2bf0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000850;
  undefined4 auStack_838 [524];
  
  puVar2 = (undefined4 *)&stack0x00000020;
  puVar3 = auStack_838;
  for (iVar1 = 0x20c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00aa2b60(this,param_1,in_stack_00000850,(undefined4 *)&stack0x00000008,
               (undefined4 *)&stack0x00000014);
  return;
}


//// FUNCTION FUN_00aa2cb0 @ 00aa2cb0 ////

uint __thiscall FUN_00aa2cb0(void *this,float *param_1,uint param_2)

{
  uint in_EAX;
  float *_Memory;
  uint uVar1;
  float *pfVar2;
  
  if (param_1 == (float *)0x0) {
    return in_EAX & 0xffffff00;
  }
  _Memory = operator_new(param_2 * 2);
  pfVar2 = _Memory;
  for (uVar1 = (param_2 & 0x7fffffff) >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pfVar2 = *param_1;
    param_1 = param_1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  for (uVar1 = param_2 * 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)pfVar2 = *(undefined1 *)param_1;
    param_1 = (float *)((int)param_1 + 1);
    pfVar2 = (float *)((int)pfVar2 + 1);
  }
  uVar1 = FUN_00aa1d60(this,_Memory,param_2);
  if ((char)uVar1 != '\0') {
    FUN_00aa2440(this);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00aa2d20 @ 00aa2d20 ////

undefined4 * __fastcall FUN_00aa2d20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar2 = param_1 + 0x13;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  FUN_00aa2ad0(param_1);
  return param_1;
}


//// FUNCTION FUN_00aa2d70 @ 00aa2d70 ////

void __fastcall FUN_00aa2d70(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00aa2d90 @ 00aa2d90 ////

void __thiscall
FUN_00aa2d90(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)this == 0) {
    puVar1 = operator_new(0x850);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00aa2d20(puVar1);
    }
    *(undefined4 **)this = puVar1;
  }
  puVar1 = *(undefined4 **)this;
  *puVar1 = param_1;
  puVar1[0x213] = param_2;
  puVar1[1] = *param_3;
  puVar1[4] = *param_4;
  puVar1[2] = param_3[1];
  puVar1[5] = param_4[1];
  puVar1[3] = param_3[2];
  puVar1[6] = param_4[2];
  puVar3 = (undefined4 *)&stack0x00000014;
  puVar1 = puVar1 + 7;
  for (iVar2 = 0x20c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}


//// FUNCTION FUN_00aa2e10 @ 00aa2e10 ////

void __fastcall FUN_00aa2e10(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00aa2e40 @ 00aa2e40 ////

void __fastcall FUN_00aa2e40(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00aa2e70 @ 00aa2e70 ////

void __fastcall FUN_00aa2e70(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    for (uVar1 = param_1[3] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[7] = 0;
  return;
}


//// FUNCTION FUN_00aa2eb0 @ 00aa2eb0 ////

float10 __cdecl FUN_00aa2eb0(int param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  fVar8 = (float10)0.0;
  iVar6 = 0;
  if (3 < param_2) {
    psVar5 = (short *)(param_1 + 4);
    iVar7 = (param_2 - 4U >> 2) + 1;
    iVar6 = iVar7 * 4;
    do {
      psVar1 = psVar5 + -2;
      psVar2 = psVar5 + -1;
      sVar4 = *psVar5;
      psVar3 = psVar5 + 1;
      psVar5 = psVar5 + 4;
      iVar7 = iVar7 + -1;
      fVar8 = (float10)((int)*psVar3 * (int)*psVar3) +
              (float10)((int)sVar4 * (int)sVar4) +
              (float10)((int)*psVar2 * (int)*psVar2) +
              (float10)((int)*psVar1 * (int)*psVar1) + fVar8;
    } while (iVar7 != 0);
  }
  for (; iVar6 < param_2; iVar6 = iVar6 + 1) {
    iVar7 = (int)*(short *)(param_1 + iVar6 * 2);
    fVar8 = (float10)(iVar7 * iVar7) + fVar8;
  }
  return fVar8;
}


//// FUNCTION FUN_00aa3030 @ 00aa3030 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00aa3030(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  ulonglong uVar4;
  int local_18;
  double local_10;
  
  uVar4 = FUN_00acd42c();
  uVar1 = (uint)uVar4;
  if ((param_1 != 0) && (uVar1 <= param_2)) {
    uVar2 = 0;
    local_10 = 0.0;
    local_18 = 1;
    if (param_2 != uVar1) {
      do {
        fVar3 = FUN_00aa2eb0(param_1,uVar1);
        if ((float10)_DAT_00e6e1cc < fVar3) {
          local_18 = local_18 + uVar1;
          local_10 = (double)((float10)local_10 + fVar3);
        }
        param_1 = param_1 + uVar1 * 2;
        uVar2 = uVar2 + uVar1;
      } while (uVar2 < param_2 - uVar1);
    }
    fVar3 = (float10)local_18;
    if (local_18 < 0) {
      fVar3 = fVar3 + (float10)4294967296.0;
    }
    return (float10)local_10 / fVar3;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00aa30f0 @ 00aa30f0 ////

void __thiscall FUN_00aa30f0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 != 0) {
    *(int *)((int)this + 0x20) = param_1;
    *(int *)((int)this + 0x24) = (param_1 * 2) / ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  }
  return;
}


//// FUNCTION FUN_00aa3120 @ 00aa3120 ////

ulonglong __fastcall FUN_00aa3120(int param_1,uint param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_00aa3180 @ 00aa3180 ////

void FUN_00aa3180(float *param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  pfVar4 = param_1;
  iVar5 = 1;
  iVar3 = param_2 * 2;
  iVar8 = 1;
  if (1 < iVar3) {
    do {
      iVar7 = iVar3;
      if (iVar8 < iVar5) {
        fVar1 = param_1[iVar5 + -1];
        param_1[iVar5 + -1] = param_1[iVar8 + -1];
        param_1[iVar8 + -1] = fVar1;
        fVar1 = param_1[iVar5];
        param_1[iVar5] = param_1[iVar8];
        param_1[iVar8] = fVar1;
      }
      while ((iVar7 = iVar7 >> 1, 1 < iVar7 && (iVar7 < iVar5))) {
        iVar5 = iVar5 - iVar7;
      }
      iVar8 = iVar8 + 2;
      iVar5 = iVar5 + iVar7;
    } while (iVar8 < iVar3);
  }
  param_2 = 2;
  if (2 < iVar3) {
    do {
      iVar8 = 1;
      iVar5 = param_2 * 2;
      fVar9 = (float10)6.2831855 / (float10)(param_2 * param_3);
      fVar10 = (float10)fsin((float10)0.5 * fVar9);
      dVar2 = (double)(fVar10 * fVar10 * (float10)-2.0);
      fVar9 = (float10)fsin(fVar9);
      fVar10 = (float10)0.0;
      if (1 < param_2) {
        pfVar6 = pfVar4 + param_2;
        param_1 = pfVar6;
        fVar13 = (float10)1.0;
        iVar7 = iVar8;
        do {
          for (; iVar8 <= iVar3; iVar8 = iVar8 + iVar5) {
            fVar11 = (float10)*pfVar6 * fVar13 - (float10)pfVar6[1] * fVar10;
            fVar12 = (float10)*pfVar6 * fVar10 + (float10)pfVar6[1] * fVar13;
            *pfVar6 = (float)((float10)pfVar4[iVar8 + -1] - fVar11);
            pfVar6[1] = (float)((float10)pfVar4[iVar8] - fVar12);
            pfVar6 = pfVar6 + param_2 * 2;
            pfVar4[iVar8 + -1] = (float)(fVar11 + (float10)pfVar4[iVar8 + -1]);
            pfVar4[iVar8] = (float)(fVar12 + (float10)pfVar4[iVar8]);
          }
          iVar8 = iVar7 + 2;
          pfVar6 = param_1 + 2;
          fVar11 = fVar10 * fVar9;
          fVar10 = fVar9 * fVar13 + ((float10)dVar2 + (float10)1.0) * fVar10;
          param_1 = pfVar6;
          fVar13 = (fVar13 * (float10)dVar2 - fVar11) + fVar13;
          iVar7 = iVar8;
        } while (iVar8 < param_2);
      }
      param_2 = iVar5;
    } while (iVar5 < iVar3);
  }
  return;
}


//// FUNCTION FUN_00aa3310 @ 00aa3310 ////

void __fastcall FUN_00aa3310(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00aa3340 @ 00aa3340 ////

float10 __fastcall FUN_00aa3340(int *param_1,uint param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  ulonglong uVar10;
  
  if ((param_1[8] < param_3) || (iVar3 = *param_1, iVar3 == 0)) {
    return (float10)0.0;
  }
  uVar10 = FUN_00aa3120((int)param_1,param_2);
  iVar4 = (int)uVar10;
  uVar10 = FUN_00aa3120((int)param_1,(uint)(uVar10 >> 0x20));
  iVar5 = (int)uVar10;
  iVar6 = iVar5 - iVar4;
  if (iVar6 < 1) {
    fVar9 = (float10)*(float *)(iVar3 + iVar4 * 4);
  }
  else {
    fVar9 = (float10)0.0;
    if (3 < iVar6) {
      iVar7 = ((iVar5 - iVar4) - 4U >> 2) + 1;
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + iVar7 * 4;
      pfVar8 = (float *)(iVar3 + 8 + iVar1);
      do {
        iVar7 = iVar7 + -1;
        fVar9 = (float10)pfVar8[1] * (float10)pfVar8[1] +
                (float10)*pfVar8 * (float10)*pfVar8 +
                (float10)pfVar8[-1] * (float10)pfVar8[-1] +
                (float10)pfVar8[-2] * (float10)pfVar8[-2] + fVar9;
        pfVar8 = pfVar8 + 4;
      } while (iVar7 != 0);
    }
    if (iVar4 < iVar5) {
      pfVar8 = (float *)(iVar3 + iVar4 * 4);
      iVar5 = iVar5 - iVar4;
      do {
        fVar2 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        iVar5 = iVar5 + -1;
        fVar9 = (float10)fVar2 * (float10)fVar2 + fVar9;
      } while (iVar5 != 0);
    }
    if (param_5 == '\0') {
      return fVar9 / (float10)iVar6;
    }
  }
  return fVar9;
}


//// FUNCTION FUN_00aa3420 @ 00aa3420 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00aa3420(void *this,int param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  *(undefined8 *)((int)this + 0x10) = 0;
  fVar5 = 0.0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  fVar4 = _DAT_00e6e240 * *(float *)((int)this + 8) * param_3;
  param_3 = 0.0;
  fVar3 = -1.0;
  if (0 < param_2 / 2) {
    do {
      fVar1 = *(float *)(param_1 + 4 + (int)fVar5 * 8);
      fVar2 = *(float *)(param_1 + (int)fVar5 * 8);
      fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) * fVar4;
      *(float *)(param_1 + (int)fVar5 * 4) = fVar1;
      if ((fVar3 < fVar1) && (1 < (int)fVar5)) {
        *(float *)((int)this + 0x1c) = fVar5;
        fVar3 = fVar1;
      }
      fVar1 = *(float *)(param_1 + (int)fVar5 * 4);
      fVar5 = (float)((int)fVar5 + 1);
      *(double *)((int)this + 0x10) = (double)(fVar1 * fVar1 + (float)*(double *)((int)this + 0x10))
      ;
      param_3 = fVar5;
    } while ((int)fVar5 < param_2 / 2);
  }
  *(float *)((int)this + 0x18) = param_3;
  *(double *)((int)this + 0x10) = SQRT(*(double *)((int)this + 0x10)) / (double)(int)param_3;
  return;
}


//// FUNCTION FUN_00aa34d0 @ 00aa34d0 ////

void __fastcall FUN_00aa34d0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00aa3660 @ 00aa3660 ////

uint __thiscall FUN_00aa3660(void *this,undefined4 *param_1,uint param_2,float param_3)

{
  int iVar1;
  uint in_EAX;
  int iVar2;
  undefined4 *_Memory;
  uint uVar3;
  short *psVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (in_EAX = *(int *)((int)this + 0xc) / 2, (int)in_EAX <= (int)param_2)) {
    FUN_00aa2e70(this);
    iVar2 = *(int *)((int)this + 0xc) / 2;
    _Memory = operator_new(param_2 * 2);
    puVar6 = _Memory;
    for (uVar3 = (param_2 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = param_2 * 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    iVar5 = 1;
    if (1 < (int)param_2) {
      do {
        uVar7 = FUN_00acd42c();
        *(short *)((int)_Memory + iVar5 * 2) = (short)uVar7;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_2);
    }
    iVar5 = 0;
    if (3 < iVar2 + -1) {
      psVar4 = (short *)(_Memory + 1);
      do {
        iVar5 = iVar5 + 4;
        *(float *)(*(int *)this + -0x20 + iVar5 * 8) =
             (float)(int)psVar4[-2] * *(float *)(*(int *)((int)this + 4) + -0x10 + iVar5 * 4);
        *(float *)(*(int *)this + -0x18 + iVar5 * 8) =
             (float)(int)psVar4[-1] * *(float *)(*(int *)((int)this + 4) + -0xc + iVar5 * 4);
        *(float *)(*(int *)this + -0x10 + iVar5 * 8) =
             (float)(int)*psVar4 * *(float *)(*(int *)((int)this + 4) + -8 + iVar5 * 4);
        *(float *)(*(int *)this + -8 + iVar5 * 8) =
             (float)(int)psVar4[1] * *(float *)(*(int *)((int)this + 4) + -4 + iVar5 * 4);
        psVar4 = psVar4 + 4;
      } while (iVar5 < iVar2 + -4);
    }
    while (iVar5 < iVar2 + -1) {
      iVar1 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *(float *)(*(int *)this + -8 + iVar5 * 8) =
           (float)(int)*(short *)((int)_Memory + iVar1) *
           *(float *)(*(int *)((int)this + 4) + -4 + iVar5 * 4);
    }
    FUN_00aa3180(*(float **)this,iVar2,1);
    FUN_00aa3420(this,*(int *)this,iVar2,param_3);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00aa37f0 @ 00aa37f0 ////

void __thiscall FUN_00aa37f0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc) = param_1;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)this);
}


//// FUNCTION FUN_00aa38a0 @ 00aa38a0 ////

void __fastcall FUN_00aa38a0(int param_1)

{
  void *_Memory;
  
  _Memory = *(void **)(param_1 + 8);
  if (_Memory != (void *)0x0) {
    FUN_00aa38a0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00aa38d0 @ 00aa38d0 ////

void * __thiscall FUN_00aa38d0(void *this,byte param_1)

{
  if (*(void **)((int)this + 8) != (void *)0x0) {
    FUN_00aa38d0(*(void **)((int)this + 8),1);
  }
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aa3950 @ 00aa3950 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aa3950(void)

{
  DAT_010c9fd4 = 0;
  DAT_010c9fd8 = 0;
  DAT_010c9fdc = 0;
  _DAT_010c9fec = 0;
  return;
}


//// FUNCTION FUN_00aa3970 @ 00aa3970 ////

void __cdecl FUN_00aa3970(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  int iVar11;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    piVar10 = (int *)*param_1;
    piVar7 = (int *)*param_2;
    iVar11 = *piVar7 - *piVar10;
    if (iVar11 != 0) {
      fVar8 = (float)iVar11;
      if (iVar11 < 0) {
        fVar8 = fVar8 + 4.2949673e+09;
      }
      fVar1 = (float)piVar7[1];
      fVar2 = (float)piVar10[1];
      fVar3 = (float)piVar7[2];
      fVar4 = (float)piVar10[2];
      fVar5 = (float)piVar7[3];
      fVar6 = (float)piVar10[3];
      piVar10 = param_1;
      do {
        iVar11 = *(int *)*piVar10 - *(int *)*param_1;
        fVar9 = (float)iVar11;
        if (iVar11 < 0) {
          fVar9 = fVar9 + 4.2949673e+09;
        }
        ((int *)*piVar10)[1] =
             (int)(fVar9 * ((fVar1 - fVar2) / fVar8) + (float)((int *)*param_1)[1]);
        iVar11 = *(int *)*piVar10 - *(int *)*param_1;
        fVar9 = (float)iVar11;
        if (iVar11 < 0) {
          fVar9 = fVar9 + 4.2949673e+09;
        }
        ((int *)*piVar10)[2] =
             (int)(fVar9 * ((fVar3 - fVar4) / fVar8) + (float)((int *)*param_1)[2]);
        iVar11 = *(int *)*piVar10 - *(int *)*param_1;
        fVar9 = (float)iVar11;
        if (iVar11 < 0) {
          fVar9 = fVar9 + 4.2949673e+09;
        }
        ((int *)*piVar10)[3] =
             (int)(fVar9 * ((fVar5 - fVar6) / fVar8) + (float)((int *)*param_1)[3]);
        piVar10 = (int *)piVar10[1];
      } while (piVar10 != param_2);
    }
  }
  return;
}


//// FUNCTION FUN_00aa3a50 @ 00aa3a50 ////

void __cdecl FUN_00aa3a50(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  for (; (param_1 != (int *)0x0 && (param_1 != param_2)); param_1 = (int *)param_1[1]) {
    if (param_3 == (undefined4 *)0x0) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    else {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 4) = *param_3;
      *(undefined4 *)(iVar1 + 8) = param_3[1];
      *(undefined4 *)(iVar1 + 0xc) = param_3[2];
    }
  }
  return;
}


//// FUNCTION FUN_00aa3aa0 @ 00aa3aa0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00aa3aa0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int local_4;
  
  if ((DAT_00e6e264 != '\0') && (param_1 != (int *)0x0)) {
    bVar1 = true;
    local_4 = 0;
    piVar2 = param_1;
    do {
      piVar3 = piVar2;
      if (bVar1) {
        if (*(int *)(*piVar2 + 0x84c) == 0) goto LAB_00aa3b1a;
        if (_DAT_00e6e1f4 <= (float)local_4) {
          bVar1 = false;
        }
        else {
          FUN_00aa3970(param_1,piVar2);
          while (*(int *)(*piVar3 + 0x84c) != 0) {
            piVar3 = (int *)piVar3[1];
            if (piVar3 == (int *)0x0) {
              return;
            }
          }
          piVar2 = (int *)piVar3[2];
LAB_00aa3b6f:
          bVar1 = true;
        }
LAB_00aa3b71:
        local_4 = 0;
        param_1 = piVar2;
        piVar2 = piVar3;
      }
      else {
        if (*(int *)(*piVar2 + 0x84c) == 0) {
          if (_DAT_00e6e1f0 <= (float)local_4) goto LAB_00aa3b6f;
          FUN_00aa3a50(param_1,piVar2,(undefined4 *)0x0);
          while (*(int *)(*piVar3 + 0x84c) == 0) {
            piVar3 = (int *)piVar3[1];
            if (piVar3 == (int *)0x0) {
              return;
            }
          }
          piVar2 = (int *)piVar3[2];
          bVar1 = false;
          goto LAB_00aa3b71;
        }
LAB_00aa3b1a:
        local_4 = local_4 + 1;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00aa3b90 @ 00aa3b90 ////

void __cdecl FUN_00aa3b90(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float local_38;
  float local_34;
  float local_24 [9];
  
  if ((DAT_00e6e267 != '\0') && (param_1 != 0)) {
    fVar11 = 0.0;
    fVar10 = 0.0;
    local_24[0] = 0.0;
    local_24[5] = 0.0;
    local_24[1] = 0.0;
    local_24[6] = 0.0;
    local_24[2] = 0.0;
    piVar5 = *(int **)(param_1 + 4);
    local_24[7] = 0.0;
    local_24[3] = 0.0;
    local_24[4] = 0.0;
    local_24[8] = 0.0;
    for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      if (*piVar5 != 0) {
        iVar9 = 0;
        do {
          iVar6 = *piVar5;
          fVar2 = *(float *)(iVar6 + 4 + iVar9);
          piVar7 = (int *)piVar5[1];
          *(float *)((int)local_24 + iVar9) = fVar2;
          fVar3 = *(float *)((int)local_24 + iVar9 + 0x18);
          fVar4 = *(float *)((int)local_24 + iVar9 + 0xc);
          if (piVar7 == (int *)0x0) {
            local_38 = 0.0;
LAB_00aa3c40:
            local_34 = 0.0;
          }
          else {
            local_38 = *(float *)(iVar9 + 4 + *piVar7);
            if ((int *)piVar7[1] == (int *)0x0) goto LAB_00aa3c40;
            local_34 = *(float *)(iVar9 + 4 + *(int *)piVar7[1]);
          }
          *(float *)(iVar6 + 4 + iVar9) = fVar3 * 0.125;
          pfVar1 = (float *)(*piVar5 + 4 + iVar9);
          *pfVar1 = fVar4 * 0.375 + *pfVar1;
          pfVar1 = (float *)(*piVar5 + 4 + iVar9);
          *pfVar1 = fVar2 * 0.5 + *pfVar1;
          pfVar1 = (float *)(*piVar5 + 4 + iVar9);
          *pfVar1 = local_38 * 0.375 + *pfVar1;
          pfVar1 = (float *)(*piVar5 + 4 + iVar9);
          *pfVar1 = local_34 * 0.125 + *pfVar1;
          fVar8 = 0.0;
          if (fVar3 != 0.0) {
            fVar8 = 0.125;
          }
          if (fVar4 != 0.0) {
            fVar8 = fVar8 + 0.375;
          }
          if (fVar2 != 0.0) {
            fVar8 = fVar8 + 0.5;
          }
          if (local_38 != 0.0) {
            fVar8 = fVar8 + 0.375;
          }
          if (local_34 != 0.0) {
            fVar8 = fVar8 + 0.125;
          }
          if (1.0 < fVar8) {
            *(float *)(*piVar5 + 4 + iVar9) = *(float *)(*piVar5 + 4 + iVar9) / fVar8;
          }
          iVar9 = iVar9 + 4;
        } while (iVar9 < 0xc);
        local_24[6] = fVar11;
        local_24[7] = fVar10;
        local_24[8] = local_24[5];
        local_24[3] = local_24[0];
        local_24[4] = local_24[1];
        local_24[5] = local_24[2];
        fVar10 = local_24[1];
        fVar11 = local_24[0];
      }
    }
  }
  return;
}


//// FUNCTION FUN_00aa3e10 @ 00aa3e10 ////

void __cdecl FUN_00aa3e10(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_1 != param_2)) {
    piVar8 = (int *)param_2[1];
    iVar7 = 0;
    do {
      fVar1 = *(float *)(iVar7 + 4 + *param_2);
      fVar2 = *(float *)(iVar7 + 4 + *param_1);
      iVar5 = *(int *)*param_2 - *(int *)*param_1;
      fVar3 = (float)iVar5;
      if (iVar5 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      piVar6 = param_1;
      if (param_1 != piVar8) {
        do {
          iVar5 = *(int *)*piVar6 - *(int *)*param_1;
          fVar4 = (float)iVar5;
          if (iVar5 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          *(float *)(iVar7 + 4 + *piVar6) =
               fVar4 * ((fVar1 - fVar2) / fVar3) + *(float *)(iVar7 + 4 + *param_1);
          piVar6 = (int *)piVar6[1];
          piVar8 = (int *)param_2[1];
        } while (piVar6 != piVar8);
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0xc);
  }
  return;
}


//// FUNCTION FUN_00aa3ea0 @ 00aa3ea0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00aa3ea0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_1 != param_2)) {
    piVar8 = param_1;
    for (piVar2 = param_1; piVar2 != (int *)param_2[1]; piVar2 = (int *)piVar2[1]) {
      if (*(float *)(*piVar8 + 4 + param_3 * 4) < *(float *)(*piVar2 + 4 + param_3 * 4)) {
        piVar8 = piVar2;
      }
    }
    piVar2 = (int *)((int *)*piVar8)[param_3 + 1];
    piVar1 = (int *)((int *)*param_1)[param_3 + 1];
    iVar7 = *(int *)*param_1;
    iVar6 = *(int *)*piVar8;
    iVar5 = iVar6 - iVar7;
    iVar6 = *(int *)*param_2 - iVar6;
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    fVar3 = (float)iVar5;
    if (iVar5 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar3 = ((float)piVar2 - (float)piVar1) / fVar3;
    bVar10 = param_1 != (int *)param_2[1];
    piVar9 = param_1;
    param_1 = piVar1;
    if (bVar10) {
      do {
        iVar5 = *(int *)*piVar9 - iVar7;
        fVar4 = (float)iVar5;
        if (iVar5 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        ((int *)*piVar9)[param_3 + 1] = (int)(fVar4 * fVar3 + (float)param_1);
        if (piVar9 == piVar8) {
          fVar3 = (float)iVar6;
          if (iVar6 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          fVar3 = (*(float *)(*param_2 + 4 + param_3 * 4) - (float)((int *)*piVar8)[param_3 + 1]) /
                  fVar3;
          iVar7 = *(int *)*piVar8;
          param_1 = piVar2;
        }
        piVar1 = piVar9 + 1;
        piVar9 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)param_2[1]);
    }
    _DAT_010c9fe0 = _DAT_010c9fe0 + (float)piVar2;
    DAT_010c9fe4 = DAT_010c9fe4 + 1;
  }
  return;
}


//// FUNCTION FUN_00aa3fe0 @ 00aa3fe0 ////

int __cdecl FUN_00aa3fe0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar1 = 0;
    do {
      if (param_1 == *(int **)(param_2 + 4)) {
        return iVar1;
      }
      if (param_4 != 0) {
        *(undefined4 *)(param_4 + iVar1 * 4) = *(undefined4 *)(*param_1 + 4 + param_3 * 4);
      }
      param_1 = (int *)param_1[1];
      iVar1 = iVar1 + 1;
    } while (param_1 != (int *)0x0);
    return iVar1;
  }
  return 0;
}


//// FUNCTION FUN_00aa4030 @ 00aa4030 ////

void __cdecl FUN_00aa4030(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) &&
      (piVar7 = (int *)*param_1, piVar7 != (int *)0x0)) &&
     ((piVar8 = (int *)*param_2, piVar8 != (int *)0x0 && (iVar11 = *piVar8 - *piVar7, iVar11 != 0)))
     ) {
    fVar9 = (float)iVar11;
    if (iVar11 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    fVar1 = (float)piVar8[1];
    fVar2 = (float)piVar7[1];
    fVar3 = (float)piVar8[2];
    fVar4 = (float)piVar7[2];
    fVar5 = (float)piVar8[3];
    fVar6 = (float)piVar7[3];
    for (piVar7 = (int *)param_1[1]; piVar7 != param_2; piVar7 = (int *)piVar7[1]) {
      iVar11 = *(int *)*piVar7 - *(int *)*param_1;
      fVar10 = (float)iVar11;
      if (iVar11 < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      ((int *)*piVar7)[1] = (int)(fVar10 * ((fVar1 - fVar2) / fVar9) + (float)((int *)*param_1)[1]);
      iVar11 = *(int *)*piVar7 - *(int *)*param_1;
      fVar10 = (float)iVar11;
      if (iVar11 < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      ((int *)*piVar7)[2] = (int)(fVar10 * ((fVar3 - fVar4) / fVar9) + (float)((int *)*param_1)[2]);
      iVar11 = *(int *)*piVar7 - *(int *)*param_1;
      fVar10 = (float)iVar11;
      if (iVar11 < 0) {
        fVar10 = fVar10 + 4.2949673e+09;
      }
      ((int *)*piVar7)[3] = (int)(fVar10 * ((fVar5 - fVar6) / fVar9) + (float)((int *)*param_1)[3]);
    }
  }
  return;
}


//// FUNCTION FUN_00aa41a0 @ 00aa41a0 ////

void FUN_00aa41a0(void)

{
  void *_Memory;
  undefined4 *puVar1;
  
  puVar1 = &DAT_010c9fd4;
  do {
    _Memory = (void *)*puVar1;
    if (_Memory != (void *)0x0) {
      if (*(void **)((int)_Memory + 8) != (void *)0x0) {
        FUN_00aa38d0(*(void **)((int)_Memory + 8),1);
      }
      *(undefined4 *)((int)_Memory + 8) = 0;
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10c9fe0);
  return;
}


//// FUNCTION FUN_00aa41e0 @ 00aa41e0 ////

uint __cdecl FUN_00aa41e0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int local_1c;
  float local_10;
  float local_c;
  float *local_8;
  int local_4;
  
  piVar5 = &DAT_010c9fd4;
  do {
    if (*piVar5 == 0) {
      return (uint)piVar5 & 0xffffff00;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0x10c9fe0);
  local_4 = param_1 + -0x10c9fd4;
  local_1c = 0;
  while( true ) {
    iVar9 = local_4;
    piVar5 = operator_new(8);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[1] = 0;
      *piVar5 = 0;
    }
    *(int **)((int)&DAT_010c9fd4 + local_1c + iVar9) = piVar5;
    piVar1 = *(int **)((int)&DAT_010c9fd4 + local_1c);
    if ((piVar1 != (int *)0x0) && (piVar1[2] != 0)) break;
    local_1c = local_1c + 4;
    if (0xb < local_1c) {
      return CONCAT31((int3)((uint)piVar1 >> 8),1);
    }
  }
  piVar2 = (int *)*piVar1;
  piVar1 = (int *)piVar1[1];
  iVar9 = 0;
  if ((piVar2 != (int *)0x0) && (piVar1 != (int *)0x0)) {
    piVar6 = piVar2;
    do {
      if (piVar6 == (int *)piVar1[1]) break;
      piVar6 = (int *)piVar6[1];
      iVar9 = iVar9 + 1;
    } while (piVar6 != (int *)0x0);
  }
  local_8 = operator_new(iVar9 * 4);
  piVar3 = piVar2;
  pfVar4 = local_8;
  piVar6 = piVar1;
  if (piVar2 != (int *)0x0) {
    while ((piVar6 != (int *)0x0 && (piVar3 != (int *)piVar1[1]))) {
      if (local_8 != (float *)0x0) {
        *pfVar4 = *(float *)(*piVar3 + 4 + local_1c);
      }
      piVar6 = piVar3 + 1;
      piVar3 = (int *)*piVar6;
      pfVar4 = pfVar4 + 1;
      piVar6 = (int *)*piVar6;
    }
  }
  local_10 = 0.0;
  local_c = 0.0;
  uVar7 = FUN_00abe000(local_8,(float *)0x1,iVar9,&local_10,&local_c);
  if ((char)uVar7 == '\0') {
    return uVar7 & 0xffffff00;
  }
  if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
    uVar10 = *(undefined4 *)*piVar1;
  }
  else {
    uVar10 = **(undefined4 **)piVar1[1];
  }
  if (*piVar5 == 0) {
    puVar8 = operator_new(0x18);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
    }
    *piVar5 = (int)puVar8;
  }
  *(undefined4 *)*piVar5 = *(undefined4 *)*piVar2;
  *(undefined4 *)(*piVar5 + 4) = uVar10;
  *(undefined4 *)(*piVar5 + 8) = *(undefined4 *)(local_1c + 4 + *piVar2);
  *(undefined4 *)(*piVar5 + 0xc) = *(undefined4 *)(local_1c + 4 + *piVar1);
  *(float *)(*piVar5 + 0x10) = local_10;
  *(float *)(*piVar5 + 0x14) = local_c;
  puVar8 = operator_new(8);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  piVar5[1] = (int)puVar8;
                    /* WARNING: Subroutine does not return */
  _free(local_8);
}


//// FUNCTION FUN_00aa43f0 @ 00aa43f0 ////

void FUN_00aa43f0(int param_1,int param_2,int param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *_Memory;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  int local_18;
  uint local_14;
  int local_10;
  
  fVar4 = param_6;
  uVar10 = param_3 * 4;
  _Memory = operator_new(uVar10);
  if (param_4 <= 9.9e+29) {
    *(undefined4 *)((int)param_6 + 4) = 0xbf000000;
    fVar1 = *(float *)(param_1 + 8) - *(float *)(param_1 + 4);
    *(float *)((int)_Memory + 4) =
         (3.0 / fVar1) * ((*(float *)(param_2 + 8) - *(float *)(param_2 + 4)) / fVar1 - param_4);
  }
  else {
    *(undefined4 *)((int)_Memory + 4) = 0;
    *(undefined4 *)((int)param_6 + 4) = 0;
  }
  uVar6 = param_3 - 1;
  local_18 = 2;
  if (3 < param_3 + -2) {
    iVar11 = (int)_Memory - param_1;
    iVar12 = (int)_Memory - param_2;
    iVar13 = (int)param_6 - param_2;
    local_14 = param_3 - 2U >> 2;
    local_18 = local_14 * 4 + 2;
    pfVar5 = (float *)(param_1 + 0xc);
    pfVar7 = (float *)(param_2 + 0x10);
    pfVar8 = (float *)((int)_Memory + 8);
    do {
      pfVar9 = (float *)((int)pfVar5 + (param_2 - param_1) + -8);
      fVar1 = (pfVar5[-1] - pfVar5[-2]) / (*pfVar5 - pfVar5[-2]);
      pfVar14 = (float *)((param_2 - param_1) + (int)pfVar5);
      fVar2 = 1.0 / (fVar1 * *(float *)((int)pfVar9 + iVar13) + 2.0);
      *(float *)((int)pfVar8 + ((int)param_6 - (int)_Memory)) = (fVar1 - 1.0) * fVar2;
      fVar3 = (*pfVar14 - pfVar7[-2]) / (*pfVar5 - pfVar5[-1]) -
              (pfVar7[-2] - *pfVar9) / (pfVar5[-1] - pfVar5[-2]);
      *pfVar8 = fVar3;
      *pfVar8 = ((fVar3 * 6.0) / (*pfVar5 - pfVar5[-2]) -
                fVar1 * *(float *)((int)pfVar5 + iVar11 + -8)) * fVar2;
      fVar1 = (*pfVar5 - pfVar5[-1]) / (pfVar5[1] - pfVar5[-1]);
      fVar2 = 1.0 / (fVar1 * *(float *)((int)pfVar8 + ((int)param_6 - (int)_Memory)) + 2.0);
      *(float *)((int)pfVar14 + iVar13) = (fVar1 - 1.0) * fVar2;
      fVar3 = (*pfVar7 - *pfVar14) / (pfVar5[1] - *pfVar5) -
              (*pfVar14 - pfVar7[-2]) / (*pfVar5 - pfVar5[-1]);
      *(float *)(iVar11 + (int)pfVar5) = fVar3;
      *(float *)(iVar11 + (int)pfVar5) =
           ((fVar3 * 6.0) / (pfVar5[1] - pfVar5[-1]) - fVar1 * *pfVar8) * fVar2;
      fVar1 = (pfVar5[1] - *pfVar5) / (pfVar5[2] - *pfVar5);
      fVar2 = 1.0 / (fVar1 * *(float *)((int)pfVar14 + iVar13) + 2.0);
      *(float *)(iVar13 + (int)pfVar7) = (fVar1 - 1.0) * fVar2;
      fVar3 = (pfVar7[1] - *pfVar7) / (pfVar5[2] - pfVar5[1]) -
              (*pfVar7 - *pfVar14) / (pfVar5[1] - *pfVar5);
      *(float *)(iVar12 + (int)pfVar7) = fVar3;
      *(float *)(iVar12 + (int)pfVar7) =
           ((fVar3 * 6.0) / (pfVar5[2] - *pfVar5) - fVar1 * *(float *)(iVar11 + (int)pfVar5)) *
           fVar2;
      fVar1 = (pfVar5[2] - pfVar5[1]) / (pfVar5[3] - pfVar5[1]);
      fVar2 = 1.0 / (fVar1 * *(float *)(iVar13 + (int)pfVar7) + 2.0);
      *(float *)(iVar13 + 4 + (int)pfVar7) = (fVar1 - 1.0) * fVar2;
      fVar3 = (pfVar7[2] - pfVar7[1]) / (pfVar5[3] - pfVar5[2]) -
              (pfVar7[1] - *pfVar7) / (pfVar5[2] - pfVar5[1]);
      pfVar8[3] = fVar3;
      local_14 = local_14 - 1;
      pfVar8[3] = ((fVar3 * 6.0) / (pfVar5[3] - pfVar5[1]) -
                  fVar1 * *(float *)(iVar12 + -0x10 + (int)(pfVar7 + 4))) * fVar2;
      pfVar5 = pfVar5 + 4;
      pfVar7 = pfVar7 + 4;
      pfVar8 = pfVar8 + 4;
    } while (local_14 != 0);
  }
  if (local_18 <= (int)uVar6) {
    local_10 = (uVar6 - local_18) + 1;
    pfVar5 = (float *)(param_1 + -4 + local_18 * 4);
    pfVar7 = (float *)(param_2 + local_18 * 4);
    do {
      pfVar9 = (float *)((param_2 - param_1) + (int)pfVar5);
      pfVar8 = pfVar5 + 1;
      fVar1 = (pfVar5[1] - *pfVar5) / (pfVar5[2] - *pfVar5);
      fVar2 = 1.0 / (fVar1 * *(float *)(((int)param_6 - param_2) + (int)pfVar9) + 2.0);
      *(float *)((int)pfVar7 + ((int)param_6 - param_2)) = (fVar1 - 1.0) * fVar2;
      fVar3 = (pfVar9[2] - *pfVar7) / (pfVar5[2] - *pfVar8) -
              (*pfVar7 - *pfVar9) / (*pfVar8 - *pfVar5);
      *(float *)((int)pfVar7 + ((int)_Memory - param_2)) = fVar3;
      *(float *)((int)pfVar7 + ((int)_Memory - param_2)) =
           ((fVar3 * 6.0) / (pfVar5[2] - *pfVar5) -
           fVar1 * *(float *)((int)pfVar5 + ((int)_Memory - param_1))) * fVar2;
      local_10 = local_10 + -1;
      pfVar5 = pfVar8;
      pfVar7 = pfVar7 + 1;
    } while (local_10 != 0);
  }
  if (param_5 <= 9.9e+29) {
    fVar1 = *(float *)(uVar10 + param_1) - *(float *)((uVar10 - 4) + param_1);
    param_6 = (3.0 / fVar1) *
              (param_5 - (*(float *)(uVar10 + param_2) - *(float *)((uVar10 - 4) + param_2)) / fVar1
              );
    fVar1 = 0.5;
  }
  else {
    fVar1 = 0.0;
    param_6 = 0.0;
  }
  *(float *)(uVar10 + (int)fVar4) =
       (param_6 - fVar1 * *(float *)((uVar10 - 4) + (int)_Memory)) /
       (fVar1 * *(float *)((uVar10 - 4) + (int)fVar4) + 1.0);
  if (3 < (int)uVar6) {
    uVar10 = uVar6 >> 2;
    iVar11 = uVar6 * 4;
    iVar12 = uVar6 * 4;
    uVar6 = uVar6 + uVar10 * -4;
    pfVar5 = (float *)((int)fVar4 + -4 + iVar12);
    pfVar7 = (float *)((int)_Memory + iVar11 + -0xc);
    do {
      uVar10 = uVar10 - 1;
      fVar1 = pfVar5[2] * pfVar5[1] + pfVar7[3];
      pfVar5[1] = fVar1;
      fVar1 = fVar1 * *pfVar5 + *(float *)((int)_Memory + (0x10 - (int)fVar4) + (int)(pfVar5 + -4));
      *pfVar5 = fVar1;
      fVar1 = fVar1 * pfVar5[-1] + pfVar7[1];
      pfVar5[-1] = fVar1;
      pfVar5[-2] = fVar1 * pfVar5[-2] + *pfVar7;
      pfVar5 = pfVar5 + -4;
      pfVar7 = pfVar7 + -4;
    } while (uVar10 != 0);
  }
  if (0 < (int)uVar6) {
    pfVar5 = (float *)((int)fVar4 + uVar6 * 4);
    do {
      uVar6 = uVar6 - 1;
      *pfVar5 = pfVar5[1] * *pfVar5 +
                *(float *)((int)_Memory + (4 - (int)fVar4) + (int)(pfVar5 + -1));
      pfVar5 = pfVar5 + -1;
    } while (uVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00aa4890 @ 00aa4890 ////

void __cdecl
FUN_00aa4890(int param_1,int param_2,int param_3,int param_4,float param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_4 + -1;
  iVar4 = 1;
  while (1 < iVar5) {
    iVar5 = param_4 + iVar4 >> 1;
    iVar6 = iVar5;
    if (param_5 < *(float *)(param_1 + iVar5 * 4)) {
      iVar6 = iVar4;
      param_4 = iVar5;
    }
    iVar4 = iVar6;
    iVar5 = param_4 - iVar6;
  }
  fVar1 = *(float *)(param_1 + param_4 * 4) - *(float *)(param_1 + iVar4 * 4);
  if (fVar1 == 0.0) {
    FUN_009d9820();
  }
  fVar2 = (*(float *)(param_1 + param_4 * 4) - param_5) * (1.0 / fVar1);
  fVar3 = (param_5 - *(float *)(param_1 + iVar4 * 4)) * (1.0 / fVar1);
  *param_6 = fVar3 * *(float *)(param_2 + param_4 * 4) +
             fVar2 * *(float *)(param_2 + iVar4 * 4) +
             fVar1 * fVar1 *
             ((fVar2 * fVar2 * fVar2 - fVar2) * *(float *)(param_3 + iVar4 * 4) +
             (fVar3 * fVar3 * fVar3 - fVar3) * *(float *)(param_3 + param_4 * 4)) * 0.16666667;
  return;
}


//// FUNCTION FUN_00aa4960 @ 00aa4960 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00aa4960(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  int local_4;
  
  if ((DAT_00e6e265 != '\0') && (param_1 != (int *)0x0)) {
    iVar5 = 0;
    local_4 = 0;
    iVar2 = 0;
    piVar4 = param_1;
    piVar6 = param_1;
    do {
      iVar3 = *(int *)(*piVar6 + 0x84c);
      if (iVar3 == iVar2) {
        local_4 = local_4 + 1;
        iVar3 = iVar2;
      }
      else {
        if (iVar2 == 0) {
          piVar1 = (int *)piVar6[2];
          iVar5 = 0;
          local_4 = 0;
          iVar2 = iVar3;
          if ((piVar1 != (int *)0x0) && (piVar1 != (int *)param_1[2])) {
            piVar4 = piVar1;
          }
LAB_00aa49d7:
          bVar7 = (float)local_4 < _DAT_00e6e1f8 |
                  (byte)((ushort)((ushort)(NAN((float)local_4) || NAN(_DAT_00e6e1f8)) << 10) >> 8);
LAB_00aa49e1:
          if ((POPCOUNT(bVar7) & 1U) != 0) {
            FUN_00aa3e10(piVar4,piVar6);
            goto LAB_00aa4a03;
          }
        }
        else {
          if (iVar2 != 2) {
            bVar7 = (float)local_4 < _DAT_00e6e1fc |
                    (byte)((ushort)((ushort)(NAN((float)local_4) || NAN(_DAT_00e6e1fc)) << 10) >> 8)
            ;
            goto LAB_00aa49e1;
          }
          if (iVar5 != 2) goto LAB_00aa49d7;
        }
        piVar4 = (int *)piVar6[2];
        local_4 = 0;
        iVar5 = iVar2;
      }
LAB_00aa4a03:
      piVar6 = (int *)piVar6[1];
    } while ((piVar6 != (int *)0x0) && (iVar2 = iVar3, piVar6[1] != 0));
  }
  return;
}


//// FUNCTION FUN_00aa4a20 @ 00aa4a20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00aa4a20(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  
  if ((DAT_00e6e266 != '\0') && (param_1 != (int *)0x0)) {
    iVar1 = *param_1;
    while (iVar1 == 0) {
      param_1 = (int *)param_1[1];
      iVar1 = *param_1;
    }
    fVar3 = (float)*(int *)*param_1;
    if (*(int *)*param_1 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar4 = fVar3 + (float)_DAT_010c9fe8 * 0.02;
    piVar5 = param_1;
    while (fVar3 < fVar4) {
      piVar5 = (int *)piVar5[1];
      fVar3 = (float)*(int *)*piVar5;
      if (*(int *)*piVar5 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
    }
    do {
      if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, iVar1 != 0)) {
        iVar2 = *param_1;
        if (*(int *)(iVar1 + 0x84c) == 0) {
          if (*(int *)(iVar2 + 0x84c) != 0) {
            FUN_00aa4030((int *)param_1[2],piVar5);
          }
        }
        else {
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
          *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        }
        piVar5 = (int *)piVar5[1];
      }
      param_1 = (int *)param_1[1];
    } while (param_1 != (int *)0x0);
  }
  return;
}


//// FUNCTION FUN_00aa4b00 @ 00aa4b00 ////

bool __cdecl FUN_00aa4b00(int *param_1,int param_2,float param_3,int param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  if ((int *)*param_1 == (int *)0x0) {
    return true;
  }
  bVar3 = *(float *)(*(int *)*param_1 + 4 + param_2 * 4) < param_3;
  iVar5 = 0;
  do {
    bVar4 = true;
    iVar2 = *(int *)*param_1;
    if ((bool)(bVar3 & ((*(float *)(iVar2 + 4) == 0.0 && *(float *)(iVar2 + 8) == 0.0) &&
                       *(float *)(iVar2 + 0xc) == 0.0))) break;
    if ((bool)(bVar3 & param_3 < *(float *)(iVar2 + 4 + param_2 * 4))) {
      bVar4 = iVar5 < param_4;
      bVar3 = false;
      if (bVar4) {
        iVar5 = 0;
      }
    }
    fVar1 = *(float *)(iVar2 + 4 + param_2 * 4);
    if (!bVar3 && fVar1 < param_3 != (fVar1 == param_3)) {
      bVar4 = iVar5 < param_4;
      bVar3 = true;
      if (bVar4) {
        iVar5 = 0;
      }
    }
    iVar2 = ((int *)*param_1)[1];
    iVar5 = iVar5 + 1;
    *param_1 = iVar2;
  } while ((bool)(bVar4 & iVar2 != 0));
  return !bVar3;
}


//// FUNCTION FUN_00aa4c40 @ 00aa4c40 ////

void __cdecl FUN_00aa4c40(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  float *_Memory;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  float local_28;
  float local_24;
  float local_20;
  float *local_1c;
  float local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  piVar6 = param_1;
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_1 == param_2)) {
    return;
  }
  iVar5 = 0;
  piVar3 = param_1;
  do {
    if (piVar3 == (int *)param_2[1]) break;
    piVar3 = (int *)piVar3[1];
    iVar5 = iVar5 + 1;
  } while (piVar3 != (int *)0x0);
  local_1c = operator_new(iVar5 * 4);
  FUN_00aa3fe0(param_1,(int)param_2,param_3,(int)local_1c);
  _Memory = local_1c;
  local_24 = 0.0;
  local_28 = 0.0;
  uVar4 = FUN_00abe000(local_1c,(float *)0x1,iVar5,&local_24,&local_28);
  if ((char)uVar4 != '\0') {
    local_14 = *(int *)*param_1;
    local_18 = (float)((int *)*param_1)[param_3 + 1];
    iVar5 = *(int *)*param_2;
    if (iVar5 == local_14) {
      local_20 = 1.0;
    }
    else {
      iVar5 = iVar5 - local_14;
      local_20 = (float)iVar5;
      if (iVar5 < 0) {
        local_20 = local_20 + 4.2949673e+09;
      }
      local_20 = 1.0 / local_20;
    }
    FUN_00abdfb0(local_18,(float)((int *)*param_2)[param_3 + 1],local_24,local_28,&local_10,&local_c
                 ,&local_8,&local_4);
    bVar7 = param_1 != (int *)param_2[1];
    param_1 = (int *)0x0;
    if (bVar7) {
      do {
        piVar3 = (int *)*piVar6;
        local_18 = (float)(*piVar3 - local_14);
        fVar1 = (float)(int)local_18;
        if ((int)local_18 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar1 = fVar1 * local_20;
        piVar2 = (int *)(((local_10 * fVar1 + local_c) * fVar1 + local_8) * fVar1 + local_4);
        if (ABS((float)piVar2 - (float)piVar3[param_3 + 1]) < 1.0) {
          if ((float)piVar2 < 0.0) {
            piVar2 = (int *)0x0;
          }
          if ((float)DAT_00e6e1ec < (float)piVar2) {
            piVar2 = DAT_00e6e1ec;
          }
          if ((float)param_1 < (float)piVar2) {
            param_1 = piVar2;
          }
          piVar3[param_3 + 1] = (int)piVar2;
        }
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != (int *)param_2[1]);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00aa4ea0 @ 00aa4ea0 ////

void __cdecl FUN_00aa4ea0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float *_Memory;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float local_24;
  float local_20;
  float local_1c;
  float *local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  int local_4;
  
  piVar1 = param_1;
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_1 == param_2)) {
    return;
  }
  iVar5 = 0;
  piVar3 = param_1;
  do {
    if (piVar3 == (int *)param_2[1]) break;
    piVar3 = (int *)piVar3[1];
    iVar5 = iVar5 + 1;
  } while (piVar3 != (int *)0x0);
  local_18 = operator_new(iVar5 * 4);
  FUN_00aa3fe0(param_1,(int)param_2,param_3,(int)local_18);
  _Memory = local_18;
  local_1c = 0.0;
  local_20 = 0.0;
  uVar4 = FUN_00abe000(local_18,(float *)0x1,iVar5,&local_1c,&local_20);
  if ((char)uVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  iVar5 = *(int *)*param_1;
  iVar6 = *(int *)*param_2;
  FUN_00abdfb0((float)((int *)*param_1)[param_3 + 1],(float)((int *)*param_2)[param_3 + 1],local_1c,
               local_20,&local_14,&local_10,&local_c,&local_8);
  if (iVar6 == iVar5) {
    local_24 = 1.0;
  }
  else {
    iVar6 = iVar6 - iVar5;
    local_24 = (float)iVar6;
    if (iVar6 < 0) {
      local_24 = local_24 + 4.2949673e+09;
    }
    local_24 = 1.0 / local_24;
  }
  param_1 = (int *)0x0;
  for (; piVar1 != (int *)param_2[1]; piVar1 = (int *)piVar1[1]) {
    local_4 = *(int *)*piVar1 - iVar5;
    fVar2 = (float)local_4;
    if (local_4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar2 = fVar2 * local_24;
    piVar3 = (int *)ABS((((local_14 * fVar2 + local_10) * fVar2 + local_c) * fVar2 + local_8) -
                        (float)((int *)*piVar1)[param_3 + 1]);
    if ((float)param_1 < (float)piVar3) {
      param_1 = piVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}


//// FUNCTION FUN_00aa5180 @ 00aa5180 ////

void FUN_00aa5180(int *param_1,float param_2,int *param_3,int param_4,uint *param_5,float param_6)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  float *pfVar10;
  float local_18;
  float local_10;
  float *local_8 [2];
  
  iVar7 = 0;
  uVar6 = 0;
  local_18 = 0.0;
  do {
    pfVar4 = operator_new(*param_5 << 2);
    piVar3 = param_3;
    local_8[iVar7] = pfVar4;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  pfVar4 = (float *)*param_3;
  pfVar10 = local_8[0];
  for (uVar5 = *param_5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pfVar10 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar10 = pfVar10 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)pfVar10 = *(undefined1 *)pfVar4;
    pfVar4 = (float *)((int)pfVar4 + 1);
    pfVar10 = (float *)((int)pfVar10 + 1);
  }
  puVar8 = (undefined4 *)param_3[1];
  pfVar4 = local_8[1];
  for (uVar5 = *param_5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pfVar4 = (float)*puVar8;
    puVar8 = puVar8 + 1;
    pfVar4 = pfVar4 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)pfVar4 = *(undefined1 *)puVar8;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
    pfVar4 = (float *)((int)pfVar4 + 1);
  }
  puVar8 = (undefined4 *)*param_3;
  for (uVar5 = *param_5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  puVar8 = (undefined4 *)*param_3;
  for (uVar5 = *param_5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = &DAT_01010101;
    puVar8 = puVar8 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar8 = 1;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  if (0 < (int)param_2) {
    piVar9 = (int *)0x0;
    iVar7 = (int)local_8[1] - (int)local_8[0];
    param_3 = (int *)0x0;
    local_10 = param_2;
    pfVar4 = local_8[0];
    do {
      iVar1 = *param_1;
      if (*(float *)((int)piVar9 + iVar1) == *pfVar4) {
        if (param_6 < local_18) {
          *(undefined4 *)(*piVar3 + uVar6 * 4) = *(undefined4 *)((int)param_3 + iVar1);
          *(undefined4 *)(piVar3[1] + uVar6 * 4) = *(undefined4 *)((int)param_3 + param_1[1]);
          uVar6 = uVar6 + 1;
        }
        *(float *)(*piVar3 + uVar6 * 4) = *pfVar4;
        *(undefined4 *)(piVar3[1] + uVar6 * 4) = *(undefined4 *)(iVar7 + (int)pfVar4);
        pfVar4 = pfVar4 + 1;
        uVar6 = uVar6 + 1;
        local_18 = 0.0;
        param_3 = piVar9;
      }
      else {
        param_2 = 0.0;
        FUN_00aa4890((int)local_8[0],(int)local_8[1],param_4,*param_5,
                     *(float *)((int)piVar9 + iVar1),&param_2);
        fVar2 = ABS(param_2 - *(float *)(param_1[1] + (int)piVar9));
        if (local_18 < fVar2) {
          param_3 = piVar9;
          local_18 = fVar2;
        }
      }
      piVar9 = piVar9 + 1;
      local_10 = (float)((int)local_10 + -1);
    } while (local_10 != 0.0);
  }
  *param_5 = uVar6;
                    /* WARNING: Subroutine does not return */
  _free(local_8[0]);
}


//// FUNCTION FUN_00aa5350 @ 00aa5350 ////

void __cdecl
FUN_00aa5350(int *param_1,int *param_2,int param_3,float param_4,float param_5,float *param_6,
            int param_7,undefined4 param_8,undefined4 param_9,void *param_10,undefined4 param_11,
            undefined4 param_12,int *param_13,int param_14,int param_15)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int *piVar13;
  int local_28;
  int iVar14;
  float in_stack_ffffffec;
  float *in_stack_fffffff0;
  float *local_c;
  float *local_8 [2];
  
  if (((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (param_1 != param_2)) {
    uVar7 = 0;
    piVar6 = param_1;
    do {
      if (piVar6 == (int *)param_2[1]) break;
      piVar6 = (int *)piVar6[1];
      uVar7 = uVar7 + 1;
    } while (piVar6 != (int *)0x0);
    if (3 < (int)uVar7) {
      uVar1 = uVar7 * 4;
      iVar11 = 0;
      do {
        puVar5 = operator_new(uVar1);
        *(undefined4 **)(&stack0xfffffff0 + iVar11) = puVar5;
        for (uVar8 = uVar7 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        puVar5 = operator_new(uVar1);
        *(undefined4 **)((int)local_8 + iVar11) = puVar5;
        for (uVar8 = uVar7 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        iVar11 = iVar11 + 4;
        for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(undefined1 *)puVar5 = 0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
      } while (iVar11 < 8);
      iVar11 = *(int *)*param_1;
      iVar9 = *(int *)*param_2 - iVar11;
      fVar2 = (float)iVar9;
      if (iVar9 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      iVar10 = 0;
      local_28 = 1;
      iVar9 = 1;
      if (param_1 != (int *)param_2[1]) {
        iVar14 = 4;
        pfVar12 = local_c;
        do {
          in_stack_ffffffec = (float)(*(int *)*param_1 - iVar11);
          fVar3 = (float)(int)in_stack_ffffffec;
          if ((int)in_stack_ffffffec < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          *(float *)(((int)in_stack_fffffff0 - (int)local_c) + (int)pfVar12) = fVar3 * (1.0 / fVar2)
          ;
          *pfVar12 = *(float *)(*param_1 + 4 + param_3 * 4);
          if (((0 < iVar10) && (iVar10 < (int)(uVar7 - 1))) &&
             (*(float *)(iVar14 + (int)local_c) < *(float *)(*param_1 + 4 + param_3 * 4))) {
            iVar14 = iVar10 * 4;
            local_28 = iVar10;
          }
          param_1 = (int *)param_1[1];
          iVar10 = iVar10 + 1;
          pfVar12 = pfVar12 + 1;
          iVar9 = local_28;
        } while (param_1 != (int *)param_2[1]);
      }
      *local_8[0] = *in_stack_fffffff0;
      *local_8[1] = *local_c;
      local_8[0][1] = in_stack_fffffff0[iVar9];
      local_8[1][1] = local_c[iVar9];
      local_8[0][2] = in_stack_fffffff0[iVar10 + -1];
      local_8[1][2] = local_c[iVar10 + -1];
      piVar6 = operator_new(uVar1);
      fVar2 = param_4;
      piVar13 = piVar6;
      for (uVar7 = uVar7 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *piVar13 = 0;
        piVar13 = piVar13 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)piVar13 = 0;
        piVar13 = (int *)((int)piVar13 + 1);
      }
      iVar11 = 3;
      do {
        FUN_00aa43f0((int)local_8[0],(int)local_8[1],iVar11,1.1e+32,1.1e+32,(float)piVar6);
        cVar4 = FUN_00aa5180((int *)&param_2,in_stack_ffffffec,(int *)&param_4,
                             (int)in_stack_fffffff0,(uint *)&local_c,fVar2);
        piVar6 = param_2;
      } while (cVar4 != '\0');
      param_1 = (int *)0x0;
      if (param_13 != *(int **)(param_14 + 4)) {
        param_6 = local_8[1];
        piVar6 = param_13;
        do {
          iVar11 = param_15;
          param_13 = (int *)0x0;
          if (*param_6 == (float)((int *)*piVar6)[param_15 + 1]) {
            piVar13 = (int *)*param_6;
            param_6 = param_6 + 1;
          }
          else {
            param_7 = *(int *)*piVar6 - (int)param_4;
            fVar2 = (float)param_7;
            if (param_7 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
            FUN_00aa4890((int)local_8[0],(int)local_8[1],(int)param_2,param_3,fVar2 * param_5,
                         (float *)&param_13);
            piVar13 = param_13;
          }
          if ((float)DAT_00e6e1ec < (float)piVar13) {
            piVar13 = DAT_00e6e1ec;
          }
          if ((float)piVar13 < 0.0) {
            piVar13 = (int *)0x0;
          }
          if ((float)param_1 < (float)piVar13) {
            param_1 = piVar13;
          }
          *(int **)(*piVar6 + 4 + iVar11 * 4) = piVar13;
          piVar6 = (int *)piVar6[1];
        } while (piVar6 != *(int **)(param_14 + 4));
      }
                    /* WARNING: Subroutine does not return */
      _free(param_10);
    }
  }
  return;
}


//// FUNCTION FUN_00aa56b0 @ 00aa56b0 ////

void __cdecl FUN_00aa56b0(int *param_1,float *param_2,int param_3)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int *piVar5;
  void *unaff_EDI;
  ulonglong uVar6;
  int *unaff_retaddr;
  int **ppiVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar3 = param_3;
  pfVar2 = param_2;
  piVar1 = param_1;
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    iVar9 = *piVar1;
    piVar5 = piVar1;
    if ((*(float *)(iVar9 + 4) != 0.0 || *(float *)(iVar9 + 8) != 0.0) ||
        *(float *)(iVar9 + 0xc) != 0.0) {
      param_1 = piVar1;
      switch(iVar3) {
      case 0:
      case 1:
        uVar6 = FUN_00acd42c();
        bVar4 = FUN_00aa4b00((int *)&param_1,(int)pfVar2,DAT_00e6e200,(int)uVar6);
        piVar5 = param_1;
        if (iVar3 == 0) {
          if (!bVar4) {
            FUN_00aa3ea0(piVar1,param_1,(int)pfVar2);
          }
        }
        else {
          FUN_00aa4c40(piVar1,param_1,(int)pfVar2);
        }
        break;
      case 2:
        FUN_00aa4b00((int *)&param_1,(int)pfVar2,0.0,0);
        piVar5 = param_1;
        FUN_00aa4ea0(piVar1,param_1,(int)pfVar2);
        break;
      case 3:
        uVar10 = 0;
        iVar9 = 0;
        ppiVar7 = &param_1;
        pfVar8 = pfVar2;
        FUN_00aa4b00((int *)ppiVar7,(int)pfVar2,0.0,0);
        piVar5 = param_1;
        FUN_00aa5350(piVar1,param_1,(int)pfVar2,DAT_00e6e20c,(float)ppiVar7,pfVar8,iVar9,uVar10,
                     unaff_EBX,unaff_EDI,unaff_EBP,unaff_ESI,unaff_retaddr,(int)param_1,(int)param_2
                    );
      }
      if (piVar5 == (int *)0x0) {
        return;
      }
    }
    piVar1 = (int *)piVar5[1];
  } while( true );
}


//// FUNCTION FUN_00aa5800 @ 00aa5800 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00aa5800(int *param_1,int param_2)

{
  if ((DAT_00e6e268 != '\0') && (param_1 != (int *)0x0)) {
    _DAT_010c9fe0 = 0.0;
    DAT_010c9fe4 = 0;
    _DAT_010c9fec = DAT_010c9fdc;
    FUN_00aa56b0(param_1,(float *)0x2,param_2);
    _DAT_010c9fec = DAT_010c9fd4;
    FUN_00aa56b0(param_1,(float *)0x0,param_2);
    _DAT_010c9fec = DAT_010c9fd8;
    FUN_00aa56b0(param_1,(float *)0x1,param_2);
    if (DAT_010c9fe4 != 0) {
      _DAT_010c9fe0 = _DAT_010c9fe0 / (float)DAT_010c9fe4;
    }
  }
  return;
}


//// FUNCTION FUN_00aa5890 @ 00aa5890 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00aa5890(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != (int *)0x0) {
    _DAT_010c9fe8 = param_2;
    FUN_00aa41a0();
    puVar2 = &DAT_010c9fd4;
    do {
      puVar1 = operator_new(0xc);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = 0;
        *puVar1 = 0;
        puVar1[2] = 0;
      }
      *puVar2 = puVar1;
      puVar2 = puVar2 + 1;
    } while ((int)puVar2 < 0x10c9fe0);
    FUN_00aa3aa0(param_1);
    FUN_00aa4960(param_1);
    FUN_00aa4a20(param_1);
    FUN_00aa3b90((int)param_1);
    FUN_00aa5800(param_1,DAT_00e6e26c);
    if (((DAT_00e6e270 != '\0') && (_DAT_010c9fe0 < _DAT_00e6e208)) && (_DAT_010c9fe0 != 0.0)) {
      DAT_00e6e274 = _DAT_00e6e208 / _DAT_010c9fe0;
    }
  }
  return;
}


//// FUNCTION FUN_00aa5950 @ 00aa5950 ////

int * __cdecl FUN_00aa5950(int param_1,int param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  piVar1 = operator_new(0xc);
  piVar1[1] = param_2;
  piVar1[2] = param_1;
  pvVar2 = operator_new(param_1 * 0xc);
  *piVar1 = (int)pvVar2;
  if (0 < param_1) {
    iVar3 = 0;
    do {
      pvVar2 = operator_new(param_2 * 4);
      *(void **)(*piVar1 + 8 + iVar3) = pvVar2;
      iVar3 = iVar3 + 0xc;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return piVar1;
}


//// FUNCTION FUN_00aa5a00 @ 00aa5a00 ////

int * __cdecl FUN_00aa5a00(int param_1,int param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint unaff_EBP;
  int iVar15;
  int iVar16;
  undefined2 unaff_DI;
  ulonglong uVar17;
  ulonglong uVar18;
  float local_2c;
  int local_24;
  float local_20;
  int local_1c;
  int local_18;
  
  local_2c = 1.0;
  if (1.0 <= param_3) {
    local_20 = 1.0;
  }
  else {
    local_20 = 1.0 / param_3;
    local_2c = param_3;
  }
  FUN_00ad1180((double)local_20,unaff_DI);
  uVar17 = FUN_00acd42c();
  iVar2 = (int)uVar17 * 2 + 1;
  piVar11 = FUN_00aa5950(param_1,iVar2);
  local_18 = 0;
  if (0 < param_1) {
    fVar7 = 1.0 / param_3;
    iVar16 = 0;
    uVar17 = (ulonglong)unaff_EBP;
    do {
      fVar8 = (float)local_18 * fVar7;
      FUN_00acf400((double)(fVar8 - local_20),(short)uVar17);
      uVar18 = FUN_00acd42c();
      if ((int)uVar18 < 0) {
        local_1c = 0;
      }
      else {
        FUN_00acf400((double)(fVar8 - local_20),(short)uVar17);
        uVar18 = FUN_00acd42c();
        local_1c = (int)uVar18;
      }
      FUN_00ad1180((double)(fVar8 + local_20),(short)uVar17);
      uVar18 = FUN_00acd42c();
      param_3 = (float)(param_2 + -1);
      if ((int)uVar18 < (int)param_3) {
        FUN_00ad1180((double)(fVar8 + local_20),(short)uVar17);
        uVar18 = FUN_00acd42c();
        param_3 = (float)uVar18;
      }
      if (iVar2 < ((int)param_3 - local_1c) + 1) {
        if (local_1c < param_2) {
          local_1c = local_1c + 1;
        }
        else {
          param_3 = (float)((int)param_3 + -1);
        }
      }
      fVar9 = 0.0;
      *(int *)(iVar16 + *piVar11) = local_1c;
      *(float *)(iVar16 + 4 + *piVar11) = param_3;
      iVar12 = ((int)param_3 - local_1c) + 1;
      local_24 = local_1c;
      if (3 < iVar12) {
        iVar14 = *(int *)(iVar16 + 8 + *piVar11);
        iVar15 = local_1c + 2;
        iVar13 = 0;
        do {
          fVar4 = ABS((fVar8 - (float)local_24) * local_2c);
          if (1.0 <= fVar4) {
            fVar4 = 0.0;
          }
          else {
            fVar4 = 1.0 - fVar4;
          }
          *(float *)(iVar13 + iVar14) = fVar4 * local_2c;
          iVar14 = *(int *)(iVar16 + 8 + *piVar11);
          fVar4 = *(float *)(iVar14 + iVar13);
          fVar5 = ABS((fVar8 - (float)(iVar15 + -1)) * local_2c);
          if (1.0 <= fVar5) {
            fVar5 = 0.0;
          }
          else {
            fVar5 = 1.0 - fVar5;
          }
          *(float *)(iVar14 + iVar13 + 4) = fVar5 * local_2c;
          iVar14 = *(int *)(iVar16 + 8 + *piVar11);
          fVar5 = *(float *)(iVar13 + 4 + iVar14);
          fVar10 = ABS((fVar8 - (float)iVar15) * local_2c);
          if (1.0 <= fVar10) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = 1.0 - fVar10;
          }
          *(float *)(iVar13 + 8 + iVar14) = fVar10 * local_2c;
          iVar6 = *(int *)(iVar16 + 8 + *piVar11);
          fVar10 = ABS((fVar8 - (float)(iVar15 + 1)) * local_2c);
          if (1.0 <= fVar10) {
            fVar10 = 0.0;
          }
          else {
            fVar10 = 1.0 - fVar10;
          }
          local_24 = local_24 + 4;
          iVar15 = iVar15 + 4;
          *(float *)(iVar13 + 0xc + iVar6) = fVar10 * local_2c;
          iVar14 = *(int *)(iVar16 + 8 + *piVar11);
          fVar9 = fVar9 + fVar4 + fVar5 + *(float *)(iVar13 + 8 + iVar6) +
                  *(float *)(iVar13 + 0xc + iVar14);
          iVar13 = iVar13 + 0x10;
        } while (local_24 <= (int)param_3 + -3);
      }
      if (local_24 <= (int)param_3) {
        iVar14 = *(int *)(iVar16 + 8 + *piVar11);
        iVar13 = (local_24 - local_1c) * 4;
        do {
          fVar4 = ABS((fVar8 - (float)local_24) * local_2c);
          if (1.0 <= fVar4) {
            fVar4 = 0.0;
          }
          else {
            fVar4 = 1.0 - fVar4;
          }
          local_24 = local_24 + 1;
          *(float *)(iVar13 + iVar14) = fVar4 * local_2c;
          iVar14 = *(int *)(iVar16 + 8 + *piVar11);
          fVar9 = fVar9 + *(float *)(iVar13 + iVar14);
          iVar13 = iVar13 + 4;
        } while (local_24 <= (int)param_3);
      }
      if (0.0 < fVar9) {
        iVar14 = local_1c;
        if (3 < iVar12) {
          fVar8 = 1.0 / fVar9;
          iVar12 = 0;
          iVar13 = (((int)param_3 - local_1c) - 3U >> 2) + 1;
          iVar14 = local_1c + iVar13 * 4;
          do {
            iVar15 = *(int *)(iVar16 + 8 + *piVar11);
            *(float *)(iVar15 + iVar12) = fVar8 * *(float *)(iVar15 + iVar12);
            pfVar3 = (float *)(*(int *)(iVar16 + 8 + *piVar11) + 4 + iVar12);
            *pfVar3 = fVar8 * *pfVar3;
            pfVar3 = (float *)(*(int *)(iVar16 + 8 + *piVar11) + 8 + iVar12);
            *pfVar3 = fVar8 * *pfVar3;
            pfVar3 = (float *)(*(int *)(iVar16 + 8 + *piVar11) + 0xc + iVar12);
            iVar12 = iVar12 + 0x10;
            iVar13 = iVar13 + -1;
            *pfVar3 = fVar8 * *pfVar3;
          } while (iVar13 != 0);
        }
        if (iVar14 <= (int)param_3) {
          iVar12 = (iVar14 - local_1c) * 4;
          iVar14 = ((int)param_3 - iVar14) + 1;
          do {
            iVar13 = *(int *)(iVar16 + 8 + *piVar11);
            pfVar3 = (float *)(iVar13 + iVar12);
            pfVar1 = (float *)(iVar13 + iVar12);
            iVar12 = iVar12 + 4;
            iVar14 = iVar14 + -1;
            *pfVar1 = (1.0 / fVar9) * *pfVar3;
          } while (iVar14 != 0);
        }
      }
      local_18 = local_18 + 1;
      iVar16 = iVar16 + 0xc;
    } while (local_18 < param_1);
  }
  return piVar11;
}


//// FUNCTION FUN_00aa5df0 @ 00aa5df0 ////

void FUN_00aa5df0(int param_1,int param_2,uint *param_3,uint *param_4,int param_5,uint param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  int *piVar11;
  float *_Memory;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  int *local_40;
  uint local_3c;
  int local_2c;
  float *local_28;
  int local_24;
  int *local_20;
  
  piVar10 = FUN_00aa5a00(param_6,(int)param_3,(float)(int)param_6 / (float)(int)param_3);
  piVar11 = FUN_00aa5a00(param_5,param_2,(float)param_5 / (float)param_2);
  param_3 = param_4;
  _Memory = operator_new(param_2 * 0xc);
  local_3c = 0;
  local_40 = (int *)(*piVar10 + -0xc);
  do {
    iVar5 = *piVar11;
    iVar17 = local_40[3];
    iVar6 = local_40[4];
    pbVar12 = (byte *)(param_2 * 4 * iVar17 + param_1 + -4);
    pfVar18 = (float *)local_40[5];
    local_2c = param_2;
    local_28 = _Memory;
    do {
      pbVar12 = pbVar12 + 4;
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar9 = 0.0;
      iVar13 = (iVar6 - iVar17) + 1;
      pbVar14 = pbVar12;
      pfVar15 = pfVar18;
      do {
        fVar3 = *pfVar15;
        bVar4 = *pbVar14;
        pbVar1 = pbVar14 + 1;
        pbVar2 = pbVar14 + 2;
        pbVar14 = pbVar14 + param_2 * 4;
        pfVar15 = pfVar15 + 1;
        fVar9 = (float)bVar4 * fVar3 + fVar9;
        fVar8 = (float)*pbVar1 * fVar3 + fVar8;
        fVar7 = (float)*pbVar2 * fVar3 + fVar7;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      *local_28 = fVar9;
      local_28[1] = fVar8;
      local_28[2] = fVar7;
      local_28 = local_28 + 3;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
    local_24 = param_5;
    local_20 = (int *)(iVar5 + -0xc);
    do {
      iVar5 = local_20[3];
      pfVar18 = (float *)local_20[5];
      iVar17 = (local_20[4] - iVar5) + 1;
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar9 = 0.0;
      pfVar15 = _Memory + iVar5 * 3;
      do {
        fVar3 = *pfVar18;
        pfVar18 = pfVar18 + 1;
        iVar17 = iVar17 + -1;
        fVar9 = *pfVar15 * fVar3 + fVar9;
        fVar8 = pfVar15[1] * fVar3 + fVar8;
        fVar7 = pfVar15[2] * fVar3 + fVar7;
        pfVar15 = pfVar15 + 3;
      } while (iVar17 != 0);
      uVar16 = (int)ROUND(fVar7) << 8 | (uint)(int)ROUND(fVar7) >> 0x18 | (int)ROUND(fVar8);
      *param_3 = uVar16 << 8 | uVar16 >> 0x18 | (int)ROUND(fVar9);
      param_3 = param_3 + 1;
      local_24 = local_24 + -1;
      local_20 = local_20 + 3;
    } while (local_24 != 0);
    local_3c = local_3c + 1;
    local_40 = local_40 + 3;
  } while (local_3c < param_6);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00aa5fe0 @ 00aa5fe0 ////

uint * __cdecl
FUN_00aa5fe0(uint *param_1,int param_2,uint *param_3,uint *param_4,int param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if ((param_2 == param_5) && (param_3 == param_6)) {
    puVar3 = param_4;
    for (uVar1 = param_2 * (int)param_3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(char *)puVar3 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar3 = (uint *)((int)puVar3 + 1);
    }
    return param_4;
  }
  FUN_00aa5df0((int)param_1,param_2,param_3,param_4,param_5,(uint)param_6);
  return param_4;
}


//// FUNCTION DelayLoad_WMCreateProfileManager @ 00aa6035 ////

void DelayLoad_WMCreateProfileManager(void)

{
  FUN_00aa603f();
  return;
}


//// FUNCTION FUN_00aa603f @ 00aa603f ////

void FUN_00aa603f(void)

{
  int *in_EAX;
  FARPROC UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = ___delayLoadHelper2_8(&ImgDelayDescr_00e4a85c.grAttrs,in_EAX);
                    /* WARNING: Could not recover jumptable at 0x00aa604e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


//// FUNCTION FUN_00aa6060 @ 00aa6060 ////

void __fastcall FUN_00aa6060(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7b4dc;
  param_1[3] = &PTR_LAB_00d7b49c;
  param_1[4] = &PTR_LAB_00d7b480;
  FUN_00c95ec0((int)param_1);
  return;
}


//// FUNCTION FUN_00aa60e0 @ 00aa60e0 ////

undefined4 FUN_00aa60e0(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  int *piStack_40;
  int **ppiStack_3c;
  int *piStack_38;
  int *piStack_c;
  
  piVar2 = param_2;
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piStack_38 = param_1;
  ppiStack_3c = (int **)0xaa6116;
  uVar3 = (**(code **)(*param_1 + 0x2c))();
  ppiStack_3c = &param_1;
  piStack_40 = piVar1;
  (**(code **)(*piVar1 + 0xc))();
  (**(code **)(*piVar2 + 0xc))(piVar2,&stack0xffffffd0);
  piVar7 = piStack_38;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar7 = *piStack_c;
    piStack_c = piStack_c + 1;
    piVar7 = piVar7 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar7 = (char)*piStack_c;
    piStack_c = (int *)((int)piStack_c + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  iVar4 = (**(code **)(*piVar1 + 0x14))(piVar1,&stack0xffffffd4,&stack0xffffffcc);
  if (iVar4 == 0) {
    (**(code **)(*piVar2 + 0x18))(piVar2,&piStack_38,&piStack_40);
  }
  iVar4 = (**(code **)(*piVar1 + 0x44))(piVar1,&stack0xffffffd8,&stack0xffffffd0);
  if (iVar4 == 0) {
    (**(code **)(*piVar2 + 0x48))(piVar2,&stack0xffffffcc,&ppiStack_3c);
  }
  (**(code **)(*piVar1 + 0x34))(piVar1,&stack0xffffffd8);
  (**(code **)(*piVar2 + 0x38))(piVar2,unaff_ESI);
  FUN_00c95130(piStack_38);
  uVar5 = (**(code **)(*piVar1 + 0x2c))(piVar1);
  (**(code **)(*piVar2 + 0x30))(piVar2,uVar5);
  return 0;
}


//// FUNCTION FUN_00aa61d0 @ 00aa61d0 ////

bool FUN_00aa61d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  bVar4 = true;
  iVar1 = 4;
  piVar2 = (int *)(param_1 + 0x2c);
  piVar3 = &DAT_00db04ec;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  return !bVar4;
}


//// FUNCTION FUN_00aa6340 @ 00aa6340 ////

undefined4 * __thiscall FUN_00aa6340(void *this,int param_1,int *param_2)

{
  int *piVar1;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd3de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c95e70(this,0,param_1,(undefined4 *)&DAT_00d7b46c);
  *(undefined ***)this = &PTR_FUN_00d7b4dc;
  *(undefined ***)((int)this + 0xc) = &PTR_LAB_00d7b49c;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_00d7b480;
  local_4 = 0;
  if (-1 < *param_2) {
    piVar1 = operator_new(0xa8);
    local_4._0_1_ = 1;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_00c965d0(piVar1,0,(int)this,param_2,&DAT_00d7b610);
      *piVar1 = (int)&PTR_FUN_00d7b5b4;
      piVar1[3] = (int)&PTR_FUN_00d7b564;
      piVar1[4] = (int)&PTR_LAB_00d7b548;
    }
    local_4._0_1_ = 0;
    if (piVar1 == (int *)0x0) {
      *param_2 = -0x7ff8fff2;
    }
    else if (*param_2 < 0) {
      (**(code **)(*piVar1 + 0xc))(1);
    }
    else {
      *(int **)((int)this + 0x90) = piVar1;
    }
    this_00 = operator_new(0xe0);
    local_4._0_1_ = 2;
    if (this_00 == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = FUN_00c95a00(this_00,0,(int)this,param_2,&DAT_00d73f30);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (piVar1 != (int *)0x0) {
      if (-1 < *param_2) {
        *(int **)((int)this + 0x8c) = piVar1;
        ExceptionList = local_c;
        return this;
      }
      (**(code **)(*piVar1 + 0xc))(1);
      ExceptionList = this;
      return this;
    }
    *param_2 = -0x7ff8fff2;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00aa64a0 @ 00aa64a0 ////

undefined4 * __thiscall FUN_00aa64a0(void *this,byte param_1)

{
  FUN_00aa6060(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aa64c0 @ 00aa64c0 ////

undefined4 * FUN_00aa64c0(int param_1,int *param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd3fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xa0);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00aa6340(this,param_1,param_2);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00aa66d0 @ 00aa66d0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int __fastcall FUN_00aa66d0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 auStack_3c [6];
  int **appiStack_24 [3];
  int local_c;
  int *local_8;
  
  appiStack_24[0] = *(int ***)(*(int *)(param_1 + 0x90) + 0x18);
  if (appiStack_24[0] == (int **)0x0) {
    return -0x7fffbffb;
  }
  appiStack_24[2] = &local_8;
  appiStack_24[1] = (int **)&DAT_00db292c;
  auStack_3c[5] = 0xaa6708;
  local_c = param_1;
  iVar6 = (*(code *)**appiStack_24[0])();
  if (-1 < iVar6) {
    auStack_3c[5] = 0xaa6723;
    iVar3 = -(*(int *)(param_1 + 0x9c) + 3U & 0xfffffffc);
    iVar6 = *(int *)(*(int *)(param_1 + 0x8c) + 0x74);
    *(undefined4 *)(&stack0xfffffff0 + iVar6 + iVar3) = 0x61746164;
    *(undefined4 *)((int)&local_c + iVar6 + iVar3) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(&stack0xffffffe8 + iVar3) = 0x20746d66;
    uVar8 = *(uint *)(*(int *)(param_1 + 0x8c) + 0x74);
    *(uint *)(&stack0xffffffec + iVar3) = uVar8;
    puVar11 = *(undefined4 **)(*(int *)(param_1 + 0x8c) + 0x78);
    puVar12 = (undefined4 *)(&stack0xfffffff0 + iVar3);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar8 = uVar8 & 3; iVar4 = local_c, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    *(undefined4 *)((int)appiStack_24 + iVar3) = 0x46464952;
    *(int *)((int)appiStack_24 + iVar3 + 4) = *(int *)(iVar4 + 0x98) + -8 + *(int *)(iVar4 + 0x9c);
    *(undefined4 *)((int)auStack_3c + iVar3 + 0x14) = 0;
    *(undefined4 *)((int)auStack_3c + iVar3 + 0x10) = 0;
    *(undefined4 *)((int)auStack_3c + iVar3 + 0xc) = 0;
    *(undefined4 *)((int)appiStack_24 + iVar3 + 8) = 0x45564157;
    piVar5 = local_8;
    iVar6 = *local_8;
    *(undefined4 *)((int)auStack_3c + iVar3 + 8) = 0;
    *(int **)((int)auStack_3c + iVar3 + 4) = piVar5;
    pcVar1 = *(code **)(iVar6 + 0x14);
    puVar9 = (undefined1 *)((int)auStack_3c + iVar3);
    *(undefined4 *)((int)auStack_3c + iVar3) = 0xaa67a3;
    iVar6 = (*pcVar1)();
    piVar5 = local_8;
    if (-1 < iVar6) {
      uVar2 = *(undefined4 *)(iVar4 + 0x9c);
      iVar6 = *local_8;
      *(undefined4 *)(puVar9 + -4) = 0;
      *(undefined4 *)(puVar9 + -8) = uVar2;
      *(int *)(puVar9 + -0xc) = (int)appiStack_24 + iVar3;
      *(int **)(puVar9 + -0x10) = piVar5;
      pcVar1 = *(code **)(iVar6 + 0x10);
      puVar10 = (undefined4 *)(puVar9 + -0x14);
      puVar9 = puVar9 + -0x14;
      *puVar10 = 0xaa67bc;
      iVar6 = (*pcVar1)();
    }
    iVar3 = *local_8;
    *(int **)(puVar9 + -4) = local_8;
    pcVar1 = *(code **)(iVar3 + 8);
    *(undefined4 *)(puVar9 + -8) = 0xaa67c7;
    (*pcVar1)();
  }
  return iVar6;
}


//// FUNCTION FUN_00aa67e0 @ 00aa67e0 ////

undefined4 * __thiscall FUN_00aa67e0(void *this,byte param_1)

{
  thunk_FUN_00c95c40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION zlib_inflate_blocks_reset_copy2 @ 00aa6840 ////

void __cdecl zlib_inflate_blocks_reset_copy2(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_1[0xd] != 0) {
    *param_3 = param_1[0xe];
  }
  if ((*param_1 == 4) || (*param_1 == 5)) {
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[3]);
  }
  if (*param_1 == 6) {
    zlib_inflate_codes_free_copy2(param_1[3],param_2);
    zlib_huft_free_copy2(param_1[2],param_2);
    zlib_huft_free_copy2(param_1[1],param_2);
  }
  *param_1 = 0;
  param_1[0xc] = param_1[9];
  param_1[0xb] = param_1[9];
  param_1[7] = 0;
  param_1[8] = 0;
  if ((code *)param_1[0xd] != (code *)0x0) {
    iVar1 = (*(code *)param_1[0xd])(0,0,0);
    param_1[0xe] = iVar1;
    *(int *)(param_2 + 0x30) = iVar1;
  }
  return;
}


//// FUNCTION zlib_inflate_blocks_new_copy2 @ 00aa68e0 ////

int * __cdecl zlib_inflate_blocks_new_copy2(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x3c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,param_3);
  piVar1[9] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),piVar1);
    return (int *)0x0;
  }
  piVar1[10] = iVar2 + param_3;
  piVar1[0xd] = param_2;
  *piVar1 = 0;
  zlib_inflate_blocks_reset_copy2(piVar1,param_1,piVar1 + 0xe);
  return piVar1;
}


//// FUNCTION zlib_inflate_blocks_copy2 @ 00aa6950 ////

void __cdecl zlib_inflate_blocks_copy2(uint *param_1,int *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint *local_8;
  uint local_4;
  
  puVar3 = param_1;
  local_2c = (uint *)*param_2;
  local_30 = param_2[1];
  local_28 = param_1[8];
  puVar7 = (uint *)param_1[7];
  puVar8 = (uint *)param_1[0xc];
  if (puVar8 < (uint *)param_1[0xb]) {
    local_24 = (int)param_1[0xb] + (-1 - (int)puVar8);
    param_1 = puVar8;
  }
  else {
    local_24 = param_1[10] - (int)puVar8;
    param_1 = puVar8;
  }
switchD_00aa6a01_default:
  uVar10 = local_28;
  switch(*puVar3) {
  case 0:
    goto switchD_00aa699d_caseD_0;
  case 1:
    for (; puVar7 < (uint *)0x20; puVar7 = puVar7 + 2) {
      if (local_30 == 0) {
        puVar3[8] = uVar10;
        puVar3[7] = (uint)puVar7;
        iVar5 = *param_2;
        param_2[1] = 0;
        *param_2 = (int)local_2c;
        param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
        puVar3[0xc] = (uint)param_1;
        zlib_inflate_flush_copy2((int)puVar3,(int)param_2,param_3);
        return;
      }
      param_3 = 0;
      local_30 = local_30 - 1;
      uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
      local_2c = (uint *)((int)local_2c + 1);
    }
    uVar4 = uVar10 & 0xffff;
    if (~uVar10 >> 0x10 != uVar4) {
      *puVar3 = 9;
      param_2[6] = (int)s_invalid_stored_block_lengths_00e6e34c;
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      *param_2 = (int)local_2c;
      param_2[1] = local_30;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-3);
      return;
    }
    puVar7 = (uint *)0x0;
    puVar3[1] = uVar4;
    local_28 = 0;
    if (uVar4 != 0) {
      *puVar3 = 2;
      goto switchD_00aa6a01_default;
    }
    break;
  case 2:
    if (local_30 == 0) {
      puVar3[8] = local_28;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      *param_2 = (int)local_2c;
      param_2[1] = 0;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,param_3);
      return;
    }
    if (local_24 == 0) {
      if (param_1 == (uint *)puVar3[10]) {
        puVar8 = (uint *)puVar3[0xb];
        puVar9 = (uint *)puVar3[9];
        if (puVar8 != puVar9) {
          if (puVar9 < puVar8) {
            local_24 = (int)puVar8 + (-1 - (int)puVar9);
          }
          else {
            local_24 = (int)puVar3[10] - (int)puVar9;
          }
          param_1 = puVar9;
          if (local_24 != 0) goto LAB_00aa6bc5;
        }
      }
      puVar3[0xc] = (uint)param_1;
      iVar5 = zlib_inflate_flush_copy2((int)puVar3,(int)param_2,param_3);
      param_1 = (uint *)puVar3[0xc];
      puVar8 = (uint *)puVar3[0xb];
      if (param_1 < puVar8) {
        local_24 = (int)puVar8 + (-1 - (int)param_1);
      }
      else {
        local_24 = puVar3[10] - (int)param_1;
      }
      local_8 = (uint *)puVar3[10];
      if ((param_1 == local_8) && (puVar9 = (uint *)puVar3[9], puVar8 != puVar9)) {
        param_1 = puVar9;
        if (puVar9 < puVar8) {
          local_24 = (int)puVar8 + (-1 - (int)puVar9);
        }
        else {
          local_24 = (int)local_8 - (int)puVar9;
        }
      }
      if (local_24 == 0) {
        puVar3[8] = local_28;
        puVar3[7] = (uint)puVar7;
        iVar2 = *param_2;
        param_2[1] = local_30;
        *param_2 = (int)local_2c;
        param_2[2] = (int)((int)local_2c + (param_2[2] - iVar2));
        puVar3[0xc] = (uint)param_1;
        zlib_inflate_flush_copy2((int)puVar3,(int)param_2,iVar5);
        return;
      }
    }
LAB_00aa6bc5:
    param_3 = 0;
    uVar10 = puVar3[1];
    if (local_30 < puVar3[1]) {
      uVar10 = local_30;
    }
    if (local_24 < uVar10) {
      uVar10 = local_24;
    }
    puVar8 = local_2c;
    puVar9 = param_1;
    for (uVar4 = uVar10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    local_24 = local_24 - uVar10;
    for (uVar4 = uVar10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(byte *)puVar9 = (byte)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    local_2c = (uint *)((int)local_2c + uVar10);
    uVar4 = puVar3[1];
    local_30 = local_30 - uVar10;
    param_1 = (uint *)((int)param_1 + uVar10);
    puVar3[1] = uVar4 - uVar10;
    if (uVar4 - uVar10 != 0) goto switchD_00aa6a01_default;
    break;
  case 3:
    for (; puVar7 < (uint *)0xe; puVar7 = puVar7 + 2) {
      if (local_30 == 0) {
        puVar3[8] = uVar10;
        puVar3[7] = (uint)puVar7;
        iVar5 = *param_2;
        *param_2 = (int)local_2c;
        param_2[1] = 0;
        param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
        puVar3[0xc] = (uint)param_1;
        zlib_inflate_flush_copy2((int)puVar3,(int)param_2,param_3);
        return;
      }
      local_30 = local_30 - 1;
      param_3 = 0;
      uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
      local_2c = (uint *)((int)local_2c + 1);
    }
    puVar3[1] = uVar10 & 0x3fff;
    if ((0x1d < (uVar10 & 0x1f)) || (0x3a0 < (uVar10 & 0x3e0))) {
      *puVar3 = 9;
      param_2[6] = (int)s_too_many_length_or_distance_symb_00e6e328;
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-3);
      return;
    }
    uVar4 = ((uVar10 & 0x3fff) >> 5 & 0x1f) + 0x102 + (uVar10 & 0x1f);
    if (uVar4 < 0x13) {
      uVar4 = 0x13;
    }
    uVar4 = (*(code *)param_2[8])(param_2[10],uVar4,4);
    puVar3[3] = uVar4;
    if (uVar4 == 0) {
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-4);
      return;
    }
    uVar10 = uVar10 >> 0xe;
    puVar7 = (uint *)((int)puVar7 - 0xe);
    puVar3[2] = 0;
    *puVar3 = 4;
    goto LAB_00aa6cf6;
  case 4:
LAB_00aa6cf6:
    if (puVar3[2] < (puVar3[1] >> 10) + 4) {
      do {
        for (; puVar7 < (uint *)0x3; puVar7 = puVar7 + 2) {
          if (local_30 == 0) {
LAB_00aa73d0:
            puVar3[8] = uVar10;
            puVar3[7] = (uint)puVar7;
            iVar5 = *param_2;
            *param_2 = (int)local_2c;
            param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
            param_2[1] = 0;
            puVar3[0xc] = (uint)param_1;
            zlib_inflate_flush_copy2((int)puVar3,(int)param_2,param_3);
            return;
          }
          local_30 = local_30 - 1;
          param_3 = 0;
          uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
          local_2c = (uint *)((int)local_2c + 1);
        }
        uVar4 = uVar10 & 7;
        puVar7 = (uint *)((int)puVar7 - 3);
        uVar10 = uVar10 >> 3;
        *(uint *)(puVar3[3] + *(int *)(&DAT_00d7b618 + puVar3[2] * 4) * 4) = uVar4;
        uVar4 = puVar3[2];
        puVar3[2] = uVar4 + 1;
      } while (uVar4 + 1 < (puVar3[1] >> 10) + 4);
    }
    uVar4 = puVar3[2];
    while (uVar4 < 0x13) {
      *(undefined4 *)(puVar3[3] + *(int *)(&DAT_00d7b618 + puVar3[2] * 4) * 4) = 0;
      uVar4 = puVar3[2] + 1;
      puVar3[2] = uVar4;
    }
    puVar3[4] = 7;
    iVar5 = zlib_inflate_trees_bits_copy2((int *)puVar3[3],puVar3 + 4,puVar3 + 5,(int)param_2);
    if (iVar5 != 0) {
      if (iVar5 == -3) {
        *puVar3 = 9;
      }
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar2 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar2));
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,iVar5);
      return;
    }
    puVar3[2] = 0;
    *puVar3 = 5;
LAB_00aa6dd5:
    if (puVar3[2] < (puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f)) {
      do {
        for (; puVar7 < (uint *)puVar3[4]; puVar7 = puVar7 + 2) {
          if (local_30 == 0) goto LAB_00aa73d0;
          local_30 = local_30 - 1;
          param_3 = 0;
          uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
          local_2c = (uint *)((int)local_2c + 1);
        }
        bVar1 = *(byte *)(puVar3[5] + 1 +
                         (*(uint *)(&DAT_00d7d208 + (int)puVar3[4] * 4) & uVar10) * 8);
        uVar4 = (uint)bVar1;
        local_4 = *(uint *)(puVar3[5] + (*(uint *)(&DAT_00d7d208 + (int)puVar3[4] * 4) & uVar10) * 8
                           + 4);
        local_28 = uVar4;
        if (local_4 < 0x10) {
          puVar7 = (uint *)((int)puVar7 - uVar4);
          uVar10 = uVar10 >> (bVar1 & 0x1f);
          *(uint *)(puVar3[3] + puVar3[2] * 4) = local_4;
          uVar4 = puVar3[2] + 1;
        }
        else {
          local_24 = 7;
          if (local_4 != 0x12) {
            local_24 = local_4 - 0xe;
          }
          local_8 = (uint *)(local_24 + uVar4);
          for (; puVar7 < local_8; puVar7 = puVar7 + 2) {
            if (local_30 == 0) goto LAB_00aa73d0;
            local_30 = local_30 - 1;
            param_3 = 0;
            uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
            local_2c = (uint *)((int)local_2c + 1);
          }
          uVar10 = uVar10 >> (bVar1 & 0x1f);
          local_28 = (-(uint)(local_4 != 0x12) & 0xfffffff8) + 0xb +
                     (*(uint *)(&DAT_00d7d208 + local_24 * 4) & uVar10);
          uVar10 = uVar10 >> ((byte)local_24 & 0x1f);
          puVar7 = (uint *)((int)puVar7 - (local_24 + uVar4));
          local_24 = puVar3[2];
          if ((puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f) < local_28 + local_24) {
LAB_00aa740f:
            *puVar3 = 9;
            param_2[6] = (int)s_invalid_bit_length_repeat_00e6e30c;
            puVar3[8] = uVar10;
            puVar3[7] = (uint)puVar7;
            param_2[1] = local_30;
            param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
            *param_2 = (int)local_2c;
            puVar3[0xc] = (uint)param_1;
            zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-3);
            return;
          }
          uVar4 = local_24;
          if (local_4 == 0x10) {
            if (local_24 == 0) goto LAB_00aa740f;
            uVar6 = *(undefined4 *)((puVar3[3] - 4) + local_24 * 4);
          }
          else {
            uVar6 = 0;
          }
          do {
            uVar4 = uVar4 + 1;
            *(undefined4 *)((puVar3[3] - 4) + uVar4 * 4) = uVar6;
            local_28 = local_28 - 1;
          } while (local_28 != 0);
        }
        puVar3[2] = uVar4;
      } while (puVar3[2] < (puVar3[1] >> 5 & 0x1f) + 0x102 + (puVar3[1] & 0x1f));
    }
    zlib_huft_free_copy2(puVar3[5],(int)param_2);
    puVar3[5] = 0;
    local_28 = 9;
    local_24 = 6;
    iVar5 = zlib_inflate_trees_dynamic_copy2((puVar3[1] & 0x1f) + 0x101,(puVar3[1] >> 5 & 0x1f) + 1,(int *)puVar3[3],
                         &local_28,&local_24,&local_1c,&local_20,(int)param_2);
    if (iVar5 != 0) {
      if (iVar5 == -3) {
        *puVar3 = 9;
      }
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar2 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar2));
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,iVar5);
      return;
    }
    local_4 = zlib_inflate_codes_new_copy2((char)local_28,(char)local_24,local_1c,local_20,(int)param_2);
    if (local_4 == 0) {
      zlib_huft_free_copy2(local_20,(int)param_2);
      zlib_huft_free_copy2(local_1c,(int)param_2);
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      iVar5 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-4);
      return;
    }
    (*(code *)param_2[9])(param_2[10],puVar3[3]);
    puVar3[3] = local_4;
    puVar3[1] = local_1c;
    puVar3[2] = local_20;
    *puVar3 = 6;
LAB_00aa703c:
    puVar3[8] = uVar10;
    puVar3[7] = (uint)puVar7;
    iVar5 = *param_2;
    param_2[1] = local_30;
    *param_2 = (int)local_2c;
    param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
    puVar3[0xc] = (uint)param_1;
    iVar5 = zlib_inflate_codes_copy2((uint)puVar3,param_2,param_3);
    if (iVar5 == 1) {
      param_3 = 0;
      zlib_inflate_codes_free_copy2(puVar3[3],(int)param_2);
      zlib_huft_free_copy2(puVar3[2],(int)param_2);
      zlib_huft_free_copy2(puVar3[1],(int)param_2);
      local_30 = param_2[1];
      local_2c = (uint *)*param_2;
      local_28 = puVar3[8];
      puVar7 = (uint *)puVar3[7];
      param_1 = (uint *)puVar3[0xc];
      if (param_1 < (uint *)puVar3[0xb]) {
        local_24 = (int)puVar3[0xb] + (-1 - (int)param_1);
      }
      else {
        local_24 = puVar3[10] - (int)param_1;
      }
      if (puVar3[6] == 0) {
        *puVar3 = 0;
        goto switchD_00aa6a01_default;
      }
      if ((uint *)0x7 < puVar7) {
        puVar7 = puVar7 + -2;
        local_30 = local_30 + 1;
        local_2c = (uint *)((int)local_2c + -1);
      }
      *puVar3 = 7;
LAB_00aa7516:
      puVar3[0xc] = (uint)param_1;
      iVar5 = zlib_inflate_flush_copy2((int)puVar3,(int)param_2,param_3);
      param_1 = (uint *)puVar3[0xc];
      if ((uint *)puVar3[0xb] == param_1) {
        *puVar3 = 8;
LAB_00aa757d:
        puVar3[8] = local_28;
        puVar3[7] = (uint)puVar7;
        param_2[1] = local_30;
        param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
        *param_2 = (int)local_2c;
        puVar3[0xc] = (uint)param_1;
        zlib_inflate_flush_copy2((int)puVar3,(int)param_2,1);
        return;
      }
      puVar3[7] = (uint)puVar7;
      puVar3[8] = local_28;
      iVar2 = *param_2;
      param_2[1] = local_30;
      *param_2 = (int)local_2c;
      param_2[2] = (int)((int)local_2c + (param_2[2] - iVar2));
      puVar3[0xc] = (uint)param_1;
    }
    zlib_inflate_flush_copy2((int)puVar3,(int)param_2,iVar5);
    return;
  case 5:
    goto LAB_00aa6dd5;
  case 6:
    goto LAB_00aa703c;
  case 7:
    goto LAB_00aa7516;
  case 8:
    goto LAB_00aa757d;
  case 9:
    puVar3[8] = local_28;
    puVar3[7] = (uint)puVar7;
    iVar5 = *param_2;
    param_2[1] = local_30;
    *param_2 = (int)local_2c;
    param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
    puVar3[0xc] = (uint)param_1;
    zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-3);
    return;
  default:
    puVar3[8] = local_28;
    puVar3[7] = (uint)puVar7;
    iVar5 = *param_2;
    param_2[1] = local_30;
    *param_2 = (int)local_2c;
    param_2[2] = (int)((int)local_2c + (param_2[2] - iVar5));
    puVar3[0xc] = (uint)param_1;
    zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-2);
    return;
  }
  *puVar3 = -(uint)(puVar3[6] != 0) & 7;
  goto switchD_00aa6a01_default;
switchD_00aa699d_caseD_0:
  for (; local_28 = uVar10, puVar7 < (uint *)0x3; puVar7 = puVar7 + 2) {
    if (local_30 == 0) {
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      param_2[1] = 0;
      param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
      *param_2 = (int)local_2c;
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,param_3);
      return;
    }
    local_30 = local_30 - 1;
    param_3 = 0;
    uVar10 = uVar10 | (uint)(byte)*local_2c << ((byte)puVar7 & 0x1f);
    local_2c = (uint *)((int)local_2c + 1);
  }
  puVar3[6] = uVar10 & 1;
  switch((uVar10 & 7) >> 1) {
  case 0:
    *puVar3 = 1;
    uVar4 = (int)puVar7 - 3U & 7;
    local_28 = (uVar10 >> 3) >> (sbyte)uVar4;
    puVar7 = (uint *)(((int)puVar7 - 3U) - uVar4);
    break;
  case 1:
    zlib_inflate_trees_fixed_copy2(&local_c,&local_10,&local_14,&local_18);
    uVar4 = zlib_inflate_codes_new_copy2((char)local_c,(char)local_10,local_14,local_18,(int)param_2);
    puVar3[3] = uVar4;
    if (uVar4 == 0) {
      puVar3[8] = uVar10;
      puVar3[7] = (uint)puVar7;
      param_2[1] = local_30;
      param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
      *param_2 = (int)local_2c;
      puVar3[0xc] = (uint)param_1;
      zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-4);
      return;
    }
    *puVar3 = 6;
    local_28 = uVar10 >> 3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar7 = (uint *)((int)puVar7 - 3);
    break;
  case 2:
    local_28 = uVar10 >> 3;
    puVar7 = (uint *)((int)puVar7 - 3);
    *puVar3 = 3;
    break;
  case 3:
    *puVar3 = 9;
    param_2[6] = (int)s_invalid_block_type_00e6e36c;
    puVar3[8] = uVar10 >> 3;
    puVar3[7] = (int)puVar7 - 3;
    param_2[1] = local_30;
    param_2[2] = (int)((int)local_2c + (param_2[2] - *param_2));
    *param_2 = (int)local_2c;
    puVar3[0xc] = (uint)param_1;
    zlib_inflate_flush_copy2((int)puVar3,(int)param_2,-3);
    return;
  }
  goto switchD_00aa6a01_default;
}


//// FUNCTION zlib_inflate_blocks_free_copy2 @ 00aa7680 ////

undefined4 __cdecl zlib_inflate_blocks_free_copy2(int *param_1,int param_2,int *param_3)

{
  zlib_inflate_blocks_reset_copy2(param_1,param_2,param_3);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1[9]);
  (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}


//// FUNCTION zlib_adler32_copy2 @ 00aa7700 ////

uint __cdecl zlib_adler32_copy2(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
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
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  
  uVar2 = param_1 & 0xffff;
  uVar20 = param_1 >> 0x10;
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  while (param_3 != 0) {
    uVar1 = param_3;
    if (0x15af < param_3) {
      uVar1 = 0x15b0;
    }
    param_3 = param_3 - uVar1;
    if (0xf < (int)uVar1) {
      uVar18 = uVar1 >> 4;
      uVar1 = uVar1 + uVar18 * -0x10;
      pbVar19 = param_2;
      do {
        param_2 = pbVar19 + 0x10;
        iVar3 = uVar2 + *pbVar19;
        iVar4 = iVar3 + (uint)pbVar19[1];
        iVar5 = iVar4 + (uint)pbVar19[2];
        iVar6 = iVar5 + (uint)pbVar19[3];
        iVar7 = iVar6 + (uint)pbVar19[4];
        iVar8 = iVar7 + (uint)pbVar19[5];
        iVar9 = iVar8 + (uint)pbVar19[6];
        iVar10 = iVar9 + (uint)pbVar19[7];
        iVar11 = iVar10 + (uint)pbVar19[8];
        iVar12 = iVar11 + (uint)pbVar19[9];
        iVar13 = iVar12 + (uint)pbVar19[10];
        iVar14 = iVar13 + (uint)pbVar19[0xb];
        iVar15 = iVar14 + (uint)pbVar19[0xc];
        iVar16 = iVar15 + (uint)pbVar19[0xd];
        iVar17 = iVar16 + (uint)pbVar19[0xe];
        uVar2 = iVar17 + (uint)pbVar19[0xf];
        uVar20 = uVar20 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
        uVar18 = uVar18 - 1;
        pbVar19 = param_2;
      } while (uVar18 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = uVar2 + *param_2;
      param_2 = param_2 + 1;
      uVar20 = uVar20 + uVar2;
    }
    uVar2 = uVar2 % 0xfff1;
    uVar20 = uVar20 % 0xfff1;
  }
  return uVar20 << 0x10 | uVar2;
}


//// FUNCTION FUN_00aa7840 @ 00aa7840 ////

void __cdecl FUN_00aa7840(undefined4 param_1,size_t param_2,size_t param_3)

{
  _calloc(param_2,param_3);
  return;
}


//// FUNCTION FUN_00aa7870 @ 00aa7870 ////

void __fastcall FUN_00aa7870(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  return;
}


//// FUNCTION FUN_00aa7890 @ 00aa7890 ////

void __fastcall FUN_00aa7890(undefined4 *param_1)

{
  *param_1 = 0;
  if (param_1[1] != -1) {
    FUN_009b10a0(param_1[1],0);
    FUN_009b11d0(param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00aa78c0 @ 00aa78c0 ////

void __fastcall FUN_00aa78c0(int *param_1)

{
  float fVar1;
  
  if ((*param_1 == 2) || (*param_1 == 3)) {
    fVar1 = (float)(100 - DAT_01050b60) * 0.01;
    if ((float)param_1[2] < fVar1) {
      param_1[2] = 0;
      FUN_009b10a0(param_1[1],param_1[2]);
      return;
    }
    param_1[2] = (int)fVar1;
    FUN_009b10a0(param_1[1],param_1[2]);
  }
  return;
}


//// FUNCTION FUN_00aa7920 @ 00aa7920 ////

void __fastcall FUN_00aa7920(int *param_1)

{
  if (*param_1 == 1) {
    param_1[3] = 0;
    param_1[4] = param_1[4] & 0xfffffffe;
  }
  return;
}


//// FUNCTION FUN_00aa7940 @ 00aa7940 ////

void __fastcall FUN_00aa7940(undefined4 *param_1)

{
  *param_1 = 0;
  if (param_1[1] != -1) {
    FUN_009b10a0(param_1[1],0);
    FUN_009b11d0(param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00aa7970 @ 00aa7970 ////

void __fastcall FUN_00aa7970(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    if (*param_1 == 3) {
      *param_1 = 0;
      if (param_1[1] == -1) {
        return;
      }
      FUN_009b10a0(param_1[1],0);
      FUN_009b11d0(param_1[1]);
    }
    if (*param_1 == 2) {
      *param_1 = 3;
      return;
    }
    if (*param_1 == 1) {
      iVar1 = param_1[3];
      param_1[3] = iVar1 + -1;
      if (((*(byte *)(param_1 + 4) & 1) == 0) && (iVar1 + -1 < 0)) {
        param_1[3] = 0;
        *param_1 = 2;
        param_1[2] = 0x3f800000;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00aa79e0 @ 00aa79e0 ////

void __cdecl FUN_00aa79e0(void *param_1)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 *unaff_ESI;
  int iVar3;
  char *pcVar4;
  char local_100 [256];
  
  if (in_EAX == 0) {
    iVar3 = FUN_00990d30(1,6);
  }
  else {
    iVar3 = (*(int *)(in_EAX + 8) * 0x19660d + 0x3c6ef35fU) % 5 + 1;
  }
  if (5 < iVar3) {
    iVar3 = 3;
  }
  iVar2 = FUN_0097e770(param_1);
  if (iVar2 == 0) {
    pcVar4 = "MUMBLE_NEUTRAL_MALE_%d";
  }
  else {
    pcVar4 = "MUMBLE_NEUTRAL_FEMALE_%d";
  }
  _sprintf(local_100,pcVar4,iVar3);
  *unaff_ESI = unaff_ESI + 3;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  pcVar4 = local_100;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0x14;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(unaff_ESI,local_100,(int)pcVar4 - (int)(local_100 + 1));
  return;
}


//// FUNCTION FUN_00aa7aa0 @ 00aa7aa0 ////

void __thiscall FUN_00aa7aa0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  void *local_54;
  uint local_4c;
  uint local_34 [3];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd418;
  local_c = ExceptionList;
  if ((((param_1 != 0) && (*(void **)(param_1 + 0x40) != (void *)0x0)) && (param_2 != 0)) &&
     ((*(uint *)(param_2 + 0x50) & 0x40c00000) == 0)) {
    ExceptionList = &local_c;
    FUN_00aa79e0(*(void **)(param_1 + 0x40));
    iVar1 = *(int *)((int)*(void **)(param_1 + 0x40) + 0x78);
    local_4 = 0;
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x178) == 0)) {
      FUN_0041c9c0(local_34,local_54);
      local_10 = *(int *)(param_1 + 0x40);
      local_14 = param_2;
      local_34[0] = local_34[0] | 3;
      local_28 = *(undefined4 *)(local_10 + 0x3c);
      local_24 = *(undefined4 *)(local_10 + 0x40);
      local_20 = *(undefined4 *)(local_10 + 0x44);
      iVar1 = FUN_009b1530((byte *)local_34,4,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
    }
    else {
      iVar1 = FUN_00982230(*(void **)(param_1 + 0x40),(int)local_54,param_2,'\x01',&DAT_00d17518);
    }
    *(int *)((int)this + 4) = iVar1;
    *(undefined4 *)this = 1;
    *(int *)((int)this + 0xc) = param_3;
    *(undefined4 *)((int)this + 8) = 0x3f800000;
    if (param_3 == -1) {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
    }
    if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_54);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00aa7be0 @ 00aa7be0 ////

void __fastcall FUN_00aa7be0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfd438;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d7b6d4;
  puVar1 = (undefined4 *)param_1[10];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[10] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xb];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0xb] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x12]);
}


//// FUNCTION FUN_00aa7ce0 @ 00aa7ce0 ////

/* WARNING: Removing unreachable block (ram,0x00aa8732) */
/* WARNING: Removing unreachable block (ram,0x00aa8534) */
/* WARNING: Removing unreachable block (ram,0x00aa8336) */
/* WARNING: Removing unreachable block (ram,0x00aa8138) */
/* WARNING: Removing unreachable block (ram,0x00aa7f40) */
/* WARNING: Removing unreachable block (ram,0x00aa803e) */
/* WARNING: Removing unreachable block (ram,0x00aa8237) */
/* WARNING: Removing unreachable block (ram,0x00aa8435) */
/* WARNING: Removing unreachable block (ram,0x00aa8633) */
/* WARNING: Removing unreachable block (ram,0x00aa883d) */

void __fastcall FUN_00aa7ce0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  uint uVar16;
  byte bVar17;
  undefined1 uVar18;
  uint uVar20;
  float10 fVar21;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  ulonglong uVar22;
  char cStack_79;
  byte local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uVar19;
  
  local_30 = 0x3f800000;
  local_2c = 0;
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  (**(code **)(*g_pDirect3DDevice + 0xdc))(g_pDirect3DDevice,0);
  if (DAT_01059250 != 1) {
    DAT_01059250 = 1;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x98,1);
  }
  FUN_00a04290(param_1);
  fVar21 = FUN_00a04380(param_1);
  fVar21 = fVar21 * (float10)*(float *)(param_1 + 0x34);
  bVar14 = 0xff;
  fVar12 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x30);
  if ((float10)0.1 <= fVar21) {
    if (fVar21 <= (float10)3.8) {
      if ((float10)0.3 < fVar21) {
        uVar22 = FUN_00acd42c();
        bVar14 = -(char)uVar22 - 1;
        fVar21 = extraout_ST0_00;
      }
    }
    else {
      bVar14 = 0;
    }
  }
  else {
    uVar22 = FUN_00acd42c();
    bVar14 = (byte)uVar22;
    fVar21 = extraout_ST0;
  }
  uVar16 = (uint)bVar14;
  uVar20 = (int)((0xff - uVar16) + ((int)(0xff - uVar16) >> 0x1f & 3U)) >> 2;
  cStack_79 = (char)uVar20;
  if ((float10)3.8 < fVar21) {
    if (fVar21 <= (float10)6.8) {
      uVar22 = FUN_00acd42c();
      uVar20 = (uint)(byte)uVar22;
    }
    else {
      uVar20 = 0;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
    }
    cStack_79 = (char)uVar20;
  }
  uVar22 = FUN_00acd42c();
  fVar21 = extraout_ST0_01 - (float10)0.1;
  pfVar6 = *(float **)(*(int *)(param_1 + 0x28) + 0x20);
  bVar17 = (byte)uVar22 & 0xf;
  if ((float10)0.1 < extraout_ST0_01) {
    pfVar7 = *(float **)(param_1 + 0x48);
    fVar1 = pfVar7[1];
    fVar2 = pfVar7[2];
    pfVar8 = *(float **)(param_1 + 0x44);
    fVar3 = pfVar8[1];
    fVar4 = pfVar8[2];
    *pfVar6 = (float)((float10)fVar12 * (float10)*pfVar7 * fVar21) + *pfVar8;
    pfVar6[1] = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    pfVar6[2] = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    pfVar6[9] = (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30)
                       * (float10)0.4);
  }
  *(byte *)(pfVar6 + 0xc) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)((int)pfVar6 + 0x2f) = bVar13;
  pfVar7 = *(float **)(*(int *)(param_1 + 0x2c) + 0x20);
  *pfVar7 = *pfVar6;
  pfVar7[1] = pfVar6[1];
  pfVar7[2] = pfVar6[2];
  fVar1 = pfVar6[9];
  *(byte *)(pfVar7 + 0xc) = bVar17;
  uVar19 = uVar20 & 0xff;
  uVar18 = (undefined1)uVar20;
  pfVar7[9] = fVar1;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  *(undefined1 *)((int)pfVar7 + 0x2f) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar1 = *(float *)(iVar10 + 0x10);
    fVar2 = *(float *)(iVar10 + 0x14);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar3 = *(float *)(iVar11 + 0x10);
    fVar4 = *(float *)(iVar11 + 0x14);
    *(float *)(iVar9 + 0x34) =
         (float)((float10)fVar12 * (float10)*(float *)(iVar10 + 0xc) * fVar21) +
         *(float *)(iVar11 + 0xc);
    *(float *)(iVar9 + 0x38) = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    *(float *)(iVar9 + 0x3c) = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    *(float *)(iVar9 + 0x58) =
         (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30) *
                (float10)0.4);
  }
  *(byte *)(iVar9 + 100) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)(iVar9 + 99) = bVar13;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0x34) = *(float *)(iVar9 + 0x34);
  *(undefined4 *)(iVar10 + 0x38) = *(undefined4 *)(iVar9 + 0x38);
  *(undefined4 *)(iVar10 + 0x3c) = *(undefined4 *)(iVar9 + 0x3c);
  *(undefined4 *)(iVar10 + 0x58) = *(undefined4 *)(iVar9 + 0x58);
  *(byte *)(iVar10 + 100) = bVar17;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  *(undefined1 *)(iVar10 + 99) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar1 = *(float *)(iVar10 + 0x1c);
    fVar2 = *(float *)(iVar10 + 0x20);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar3 = *(float *)(iVar11 + 0x1c);
    fVar4 = *(float *)(iVar11 + 0x20);
    *(float *)(iVar9 + 0x68) =
         (float)((float10)fVar12 * (float10)*(float *)(iVar10 + 0x18) * fVar21) +
         *(float *)(iVar11 + 0x18);
    *(float *)(iVar9 + 0x6c) = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    *(float *)(iVar9 + 0x70) = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    *(float *)(iVar9 + 0x8c) =
         (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30) *
                (float10)0.4);
  }
  *(byte *)(iVar9 + 0x98) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)(iVar9 + 0x97) = bVar13;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0x68) = *(float *)(iVar9 + 0x68);
  *(undefined4 *)(iVar10 + 0x6c) = *(undefined4 *)(iVar9 + 0x6c);
  *(undefined4 *)(iVar10 + 0x70) = *(undefined4 *)(iVar9 + 0x70);
  *(undefined4 *)(iVar10 + 0x8c) = *(undefined4 *)(iVar9 + 0x8c);
  *(byte *)(iVar10 + 0x98) = bVar17;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  *(undefined1 *)(iVar10 + 0x97) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar1 = *(float *)(iVar10 + 0x28);
    fVar2 = *(float *)(iVar10 + 0x2c);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar3 = *(float *)(iVar11 + 0x28);
    fVar4 = *(float *)(iVar11 + 0x2c);
    *(float *)(iVar9 + 0x9c) =
         (float)((float10)fVar12 * (float10)*(float *)(iVar10 + 0x24) * fVar21) +
         *(float *)(iVar11 + 0x24);
    *(float *)(iVar9 + 0xa0) = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    *(float *)(iVar9 + 0xa4) = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    *(float *)(iVar9 + 0xc0) =
         (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30) *
                (float10)0.4);
  }
  *(byte *)(iVar9 + 0xcc) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)(iVar9 + 0xcb) = bVar13;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0x9c) = *(float *)(iVar9 + 0x9c);
  *(undefined4 *)(iVar10 + 0xa0) = *(undefined4 *)(iVar9 + 0xa0);
  *(undefined4 *)(iVar10 + 0xa4) = *(undefined4 *)(iVar9 + 0xa4);
  *(undefined4 *)(iVar10 + 0xc0) = *(undefined4 *)(iVar9 + 0xc0);
  *(byte *)(iVar10 + 0xcc) = bVar17;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  *(undefined1 *)(iVar10 + 0xcb) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar1 = *(float *)(iVar10 + 0x34);
    fVar2 = *(float *)(iVar10 + 0x38);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar3 = *(float *)(iVar11 + 0x34);
    fVar4 = *(float *)(iVar11 + 0x38);
    *(float *)(iVar9 + 0xd0) =
         (float)((float10)fVar12 * (float10)*(float *)(iVar10 + 0x30) * fVar21) +
         *(float *)(iVar11 + 0x30);
    *(float *)(iVar9 + 0xd4) = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    *(float *)(iVar9 + 0xd8) = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    *(float *)(iVar9 + 0xf4) =
         (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30) *
                (float10)0.4);
  }
  *(byte *)(iVar9 + 0x100) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)(iVar9 + 0xff) = bVar13;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0xd0) = *(float *)(iVar9 + 0xd0);
  *(undefined4 *)(iVar10 + 0xd4) = *(undefined4 *)(iVar9 + 0xd4);
  *(undefined4 *)(iVar10 + 0xd8) = *(undefined4 *)(iVar9 + 0xd8);
  *(undefined4 *)(iVar10 + 0xf4) = *(undefined4 *)(iVar9 + 0xf4);
  *(byte *)(iVar10 + 0x100) = bVar17;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  *(undefined1 *)(iVar10 + 0xff) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar1 = *(float *)(iVar10 + 0x40);
    fVar2 = *(float *)(iVar10 + 0x44);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar3 = *(float *)(iVar11 + 0x40);
    fVar4 = *(float *)(iVar11 + 0x44);
    *(float *)(iVar9 + 0x104) =
         (float)((float10)fVar12 * (float10)*(float *)(iVar10 + 0x3c) * fVar21) +
         *(float *)(iVar11 + 0x3c);
    *(float *)(iVar9 + 0x108) = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    *(float *)(iVar9 + 0x10c) = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    *(float *)(iVar9 + 0x128) =
         (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30) *
                (float10)0.4);
  }
  *(byte *)(iVar9 + 0x134) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)(iVar9 + 0x133) = bVar13;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0x104) = *(float *)(iVar9 + 0x104);
  *(undefined4 *)(iVar10 + 0x108) = *(undefined4 *)(iVar9 + 0x108);
  *(undefined4 *)(iVar10 + 0x10c) = *(undefined4 *)(iVar9 + 0x10c);
  *(undefined4 *)(iVar10 + 0x128) = *(undefined4 *)(iVar9 + 0x128);
  *(byte *)(iVar10 + 0x134) = bVar17;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  *(undefined1 *)(iVar10 + 0x133) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar1 = *(float *)(iVar10 + 0x4c);
    fVar2 = *(float *)(iVar10 + 0x50);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar3 = *(float *)(iVar11 + 0x4c);
    fVar4 = *(float *)(iVar11 + 0x50);
    *(float *)(iVar9 + 0x138) =
         (float)((float10)fVar12 * (float10)*(float *)(iVar10 + 0x48) * fVar21) +
         *(float *)(iVar11 + 0x48);
    *(float *)(iVar9 + 0x13c) = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    *(float *)(iVar9 + 0x140) = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    *(float *)(iVar9 + 0x15c) =
         (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30) *
                (float10)0.4);
  }
  *(byte *)(iVar9 + 0x168) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)(iVar9 + 0x167) = bVar13;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0x138) = *(float *)(iVar9 + 0x138);
  *(undefined4 *)(iVar10 + 0x13c) = *(undefined4 *)(iVar9 + 0x13c);
  *(undefined4 *)(iVar10 + 0x140) = *(undefined4 *)(iVar9 + 0x140);
  *(undefined4 *)(iVar10 + 0x15c) = *(undefined4 *)(iVar9 + 0x15c);
  *(byte *)(iVar10 + 0x168) = bVar17;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  *(undefined1 *)(iVar10 + 0x167) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar1 = *(float *)(iVar10 + 0x58);
    fVar2 = *(float *)(iVar10 + 0x5c);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar3 = *(float *)(iVar11 + 0x58);
    fVar4 = *(float *)(iVar11 + 0x5c);
    *(float *)(iVar9 + 0x16c) =
         (float)((float10)fVar12 * (float10)*(float *)(iVar10 + 0x54) * fVar21) +
         *(float *)(iVar11 + 0x54);
    *(float *)(iVar9 + 0x170) = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    *(float *)(iVar9 + 0x174) = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    *(float *)(iVar9 + 400) =
         (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30) *
                (float10)0.4);
  }
  *(byte *)(iVar9 + 0x19c) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)(iVar9 + 0x19b) = bVar13;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0x16c) = *(float *)(iVar9 + 0x16c);
  *(undefined4 *)(iVar10 + 0x170) = *(undefined4 *)(iVar9 + 0x170);
  *(undefined4 *)(iVar10 + 0x174) = *(undefined4 *)(iVar9 + 0x174);
  *(undefined4 *)(iVar10 + 400) = *(undefined4 *)(iVar9 + 400);
  *(byte *)(iVar10 + 0x19c) = bVar17;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  *(undefined1 *)(iVar10 + 0x19b) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar1 = *(float *)(iVar10 + 100);
    fVar2 = *(float *)(iVar10 + 0x68);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar3 = *(float *)(iVar11 + 100);
    fVar4 = *(float *)(iVar11 + 0x68);
    *(float *)(iVar9 + 0x1a0) =
         (float)((float10)fVar12 * (float10)*(float *)(iVar10 + 0x60) * fVar21) +
         *(float *)(iVar11 + 0x60);
    *(float *)(iVar9 + 0x1a4) = (float)((float10)fVar12 * (float10)fVar1 * fVar21 + (float10)fVar3);
    *(float *)(iVar9 + 0x1a8) = (float)((float10)(fVar12 * fVar2) * fVar21 + (float10)fVar4);
    *(float *)(iVar9 + 0x1c4) =
         (float)((fVar21 * (float10)6.0 + (float10)1.0) * (float10)*(float *)(param_1 + 0x30) *
                (float10)0.4);
  }
  *(byte *)(iVar9 + 0x1d0) = bVar17;
  if ((int)uVar16 < 0) {
    bVar13 = 0;
  }
  else {
    bVar13 = bVar14;
    if (0xff < uVar16) {
      bVar13 = 0xff;
    }
  }
  *(byte *)(iVar9 + 0x1cf) = bVar13;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0x1a0) = *(float *)(iVar9 + 0x1a0);
  *(undefined4 *)(iVar10 + 0x1a4) = *(undefined4 *)(iVar9 + 0x1a4);
  *(undefined4 *)(iVar10 + 0x1a8) = *(undefined4 *)(iVar9 + 0x1a8);
  *(undefined4 *)(iVar10 + 0x1c4) = *(undefined4 *)(iVar9 + 0x1c4);
  *(byte *)(iVar10 + 0x1d0) = bVar17;
  uVar15 = uVar18;
  if (0xff < uVar19) {
    uVar15 = 0xff;
  }
  fVar1 = (float)fVar21;
  *(undefined1 *)(iVar10 + 0x1cf) = uVar15;
  iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((float10)0.1 < extraout_ST0_01) {
    iVar10 = *(int *)(param_1 + 0x48);
    fVar2 = *(float *)(iVar10 + 0x70);
    fVar3 = *(float *)(iVar10 + 0x74);
    iVar11 = *(int *)(param_1 + 0x44);
    fVar4 = *(float *)(iVar11 + 0x70);
    fVar5 = *(float *)(iVar11 + 0x74);
    *(float *)(iVar9 + 0x1d4) =
         fVar12 * *(float *)(iVar10 + 0x6c) * fVar1 + *(float *)(iVar11 + 0x6c);
    *(float *)(iVar9 + 0x1d8) = fVar12 * fVar2 * fVar1 + fVar4;
    *(float *)(iVar9 + 0x1dc) = fVar12 * fVar3 * fVar1 + fVar5;
    *(float *)(iVar9 + 0x1f8) = (fVar1 * 6.0 + 1.0) * *(float *)(param_1 + 0x30) * 0.4;
  }
  *(byte *)(iVar9 + 0x204) = bVar17;
  if ((int)uVar16 < 0) {
    bVar14 = 0;
  }
  else if (0xff < uVar16) {
    bVar14 = 0xff;
  }
  *(byte *)(iVar9 + 0x203) = bVar14;
  iVar10 = *(int *)(*(int *)(param_1 + 0x2c) + 0x20);
  *(float *)(iVar10 + 0x1d4) = *(float *)(iVar9 + 0x1d4);
  *(undefined4 *)(iVar10 + 0x1d8) = *(undefined4 *)(iVar9 + 0x1d8);
  *(undefined4 *)(iVar10 + 0x1dc) = *(undefined4 *)(iVar9 + 0x1dc);
  *(undefined4 *)(iVar10 + 0x1f8) = *(undefined4 *)(iVar9 + 0x1f8);
  *(byte *)(iVar10 + 0x204) = bVar17;
  if (0xff < uVar19) {
    uVar18 = 0xff;
  }
  *(undefined1 *)(iVar10 + 0x203) = uVar18;
  if (cStack_79 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 8))();
  if ((*(uint *)(param_1 + 0x4c) & 1) == 0) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
    local_30 = FUN_009b01a0("EXPLOSION_SPACE_01");
    uStack_1c = 0;
    uStack_18 = 0;
    local_34[0] = 1;
    local_34[1] = 0;
    local_34[2] = 0;
    local_34[3] = 0;
    uStack_28 = *(undefined4 *)(param_1 + 0x38);
    uStack_10 = 0;
    uStack_24 = *(undefined4 *)(param_1 + 0x3c);
    uStack_20 = *(undefined4 *)(param_1 + 0x40);
    uStack_14 = *(undefined4 *)(param_1 + 0x18);
    local_2c = 0xffffffff;
    FUN_009b1530(local_34,4,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
  }
  if (DAT_01059250 != 0) {
    DAT_01059250 = 0;
    (**(code **)(*g_pDirect3DDevice + 0xe4))(g_pDirect3DDevice,0x98,0);
  }
  return;
}


//// FUNCTION FUN_00aa8940 @ 00aa8940 ////

undefined4 * __thiscall
FUN_00aa8940(void *this,undefined4 param_1,float *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float local_3c;
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
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd463;
  local_c = ExceptionList;
  iVar9 = 0;
  ExceptionList = &local_c;
  FUN_00a042c0(this,0);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_00d7b6d4;
  *(float *)((int)this + 0x38) = *param_2;
  *(float *)((int)this + 0x3c) = param_2[1];
  *(float *)((int)this + 0x40) = param_2[2];
  local_4 = 0;
  *(float *)((int)this + 0x30) = param_3;
  *(int *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffffe;
  pvVar6 = operator_new(0x78);
  *(void **)((int)this + 0x48) = pvVar6;
  pvVar6 = operator_new(0x78);
  *(void **)((int)this + 0x44) = pvVar6;
  puVar7 = FUN_0040a690(10,'\x01');
  *(undefined4 **)((int)this + 0x28) = puVar7;
  puVar7[6] = DAT_010b705c;
  FUN_0099a220(*(void **)((int)this + 0x28),8);
  fVar4 = param_3 * 0.3;
  fVar5 = -fVar4;
  param_4 = 0;
  do {
    puVar10 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 0x20) + param_4);
    puVar10[0xb] = 0xfff28221;
    puVar10[9] = *(float *)((int)this + 0x30) * 0.4;
    fVar11 = FUN_00990e30(fVar5,fVar4);
    fVar12 = FUN_00990e30(fVar5,fVar4);
    fVar13 = FUN_00990e30(fVar5,fVar4);
    fVar14 = *(float *)((int)this + 0x40);
    pfVar8 = (float *)(*(int *)((int)this + 0x44) + iVar9);
    fVar1 = *(float *)((int)this + 0x3c);
    *pfVar8 = (float)fVar13 + *(float *)((int)this + 0x38);
    pfVar8[1] = (float)fVar12 + fVar1;
    pfVar8[2] = (float)fVar11 + fVar14;
    puVar7 = (undefined4 *)(*(int *)((int)this + 0x44) + iVar9);
    *puVar10 = *puVar7;
    puVar10[1] = puVar7[1];
    puVar10[2] = puVar7[2];
    puVar7 = (undefined4 *)(*(int *)((int)this + 0x48) + iVar9);
    *puVar7 = 0x3f800000;
    puVar7[1] = 0;
    puVar7[2] = 0;
    local_10 = 0.0;
    local_14 = 0.0;
    local_18 = 0.0;
    local_20 = 0.0;
    local_24 = 0.0;
    local_28 = 0.0;
    local_30 = 0.0;
    local_34 = 0.0;
    local_38 = 0.0;
    local_1c = 1.0;
    local_2c = 1.0;
    local_3c = 1.0;
    fVar11 = FUN_00990dc0(6.2831855);
    fVar14 = (float)fVar11;
    fVar11 = FUN_00990e30(0.17453294,0.8726647);
    FUN_009ab3f0(&local_3c,0.0,(float)-fVar11,fVar14);
    fVar14 = *(float *)(*(int *)((int)this + 0x48) + iVar9);
    pfVar8 = (float *)(*(int *)((int)this + 0x48) + iVar9);
    fVar1 = pfVar8[1];
    iVar9 = iVar9 + 0xc;
    fVar2 = pfVar8[2];
    *pfVar8 = local_3c * fVar14 + local_24 * fVar2 + local_30 * fVar1 + local_18;
    pfVar8[1] = local_38 * fVar14 + local_20 * fVar2 + local_2c * fVar1 + local_14;
    pfVar8[2] = local_34 * fVar14 + local_28 * fVar1 + local_1c * fVar2 + local_10;
    param_4 = param_4 + 0x34;
  } while (param_4 < 0x208);
  pvVar6 = operator_new(0x30);
  local_4._0_1_ = 1;
  if (pvVar6 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_00996b20(pvVar6,10,'\x01');
  }
  *(undefined4 **)((int)this + 0x2c) = puVar7;
  puVar7[6] = DAT_010b7038;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0099a220(*(void **)((int)this + 0x2c),8);
  puVar7 = *(undefined4 **)(*(int *)((int)this + 0x2c) + 0x20);
  puVar7[0xb] = 0;
  puVar7[9] = *(float *)((int)this + 0x30) * 0.4;
  puVar10 = *(undefined4 **)((int)this + 0x44);
  *puVar7 = *puVar10;
  puVar7[1] = puVar10[1];
  puVar7[2] = puVar10[2];
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 0x60) = 0;
  *(float *)(iVar9 + 0x58) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(iVar9 + 0x38) = *(undefined4 *)(iVar3 + 0x10);
  *(undefined4 *)(iVar9 + 0x3c) = *(undefined4 *)(iVar3 + 0x14);
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 0x94) = 0;
  *(float *)(iVar9 + 0x8c) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(iVar3 + 0x18);
  *(undefined4 *)(iVar9 + 0x6c) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(iVar9 + 0x70) = *(undefined4 *)(iVar3 + 0x20);
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 200) = 0;
  *(float *)(iVar9 + 0xc0) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar3 + 0x24);
  *(undefined4 *)(iVar9 + 0xa0) = *(undefined4 *)(iVar3 + 0x28);
  *(undefined4 *)(iVar9 + 0xa4) = *(undefined4 *)(iVar3 + 0x2c);
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 0xfc) = 0;
  *(float *)(iVar9 + 0xf4) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0xd0) = *(undefined4 *)(iVar3 + 0x30);
  *(undefined4 *)(iVar9 + 0xd4) = *(undefined4 *)(iVar3 + 0x34);
  *(undefined4 *)(iVar9 + 0xd8) = *(undefined4 *)(iVar3 + 0x38);
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 0x130) = 0;
  *(float *)(iVar9 + 0x128) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0x104) = *(undefined4 *)(iVar3 + 0x3c);
  *(undefined4 *)(iVar9 + 0x108) = *(undefined4 *)(iVar3 + 0x40);
  *(undefined4 *)(iVar9 + 0x10c) = *(undefined4 *)(iVar3 + 0x44);
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 0x164) = 0;
  *(float *)(iVar9 + 0x15c) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0x138) = *(undefined4 *)(iVar3 + 0x48);
  *(undefined4 *)(iVar9 + 0x13c) = *(undefined4 *)(iVar3 + 0x4c);
  *(undefined4 *)(iVar9 + 0x140) = *(undefined4 *)(iVar3 + 0x50);
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 0x198) = 0;
  *(float *)(iVar9 + 400) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0x16c) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(iVar9 + 0x170) = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(iVar9 + 0x174) = *(undefined4 *)(iVar3 + 0x5c);
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 0x1cc) = 0;
  *(float *)(iVar9 + 0x1c4) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0x1a0) = *(undefined4 *)(iVar3 + 0x60);
  *(undefined4 *)(iVar9 + 0x1a4) = *(undefined4 *)(iVar3 + 100);
  *(undefined4 *)(iVar9 + 0x1a8) = *(undefined4 *)(iVar3 + 0x68);
  iVar9 = *(int *)(*(int *)((int)this + 0x2c) + 0x20);
  *(undefined4 *)(iVar9 + 0x200) = 0;
  *(float *)(iVar9 + 0x1f8) = *(float *)((int)this + 0x30) * 0.4;
  iVar3 = *(int *)((int)this + 0x44);
  *(undefined4 *)(iVar9 + 0x1d4) = *(undefined4 *)(iVar3 + 0x6c);
  *(undefined4 *)(iVar9 + 0x1d8) = *(undefined4 *)(iVar3 + 0x70);
  *(undefined4 *)(iVar9 + 0x1dc) = *(undefined4 *)(iVar3 + 0x74);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00aa8e90 @ 00aa8e90 ////

undefined4 * __thiscall FUN_00aa8e90(void *this,byte param_1)

{
  FUN_00aa7be0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aa8ec0 @ 00aa8ec0 ////

int __thiscall FUN_00aa8ec0(void *this,int *param_1)

{
  *(int *)this = *param_1;
  *(int *)((int)this + 4) = param_1[1];
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = param_1[3];
  *(int *)((int)this + 0x10) = param_1[4];
  if (2 < *(int *)this) {
    *(int *)((int)this + 0x14) = param_1[5];
    return 0x18;
  }
  *(undefined4 *)((int)this + 0x14) = 100;
  return (int)(param_1 + 5) - (int)param_1;
}


//// FUNCTION FUN_00aa8f30 @ 00aa8f30 ////

void __fastcall FUN_00aa8f30(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0x14) + 4 + iVar2 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_00985de0(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4 + iVar2 * 8) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00aa9010 @ 00aa9010 ////

void __cdecl FUN_00aa9010(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    fVar1 = 0.0;
    iVar5 = 0;
    if (3 < param_2) {
      iVar4 = (param_2 - 4U >> 2) + 1;
      iVar5 = iVar4 * 4;
      pfVar3 = (float *)(param_1 + 0x10);
      do {
        iVar4 = iVar4 + -1;
        fVar1 = fVar1 + pfVar3[-4] + pfVar3[-2] + *pfVar3 + pfVar3[2];
        pfVar3 = pfVar3 + 8;
      } while (iVar4 != 0);
    }
    for (; iVar5 < param_2; iVar5 = iVar5 + 1) {
      fVar1 = fVar1 + *(float *)(param_1 + iVar5 * 8);
    }
    iVar5 = 0;
    if (3 < param_2) {
      fVar2 = 1.0 / fVar1;
      iVar4 = (param_2 - 4U >> 2) + 1;
      iVar5 = iVar4 * 4;
      pfVar3 = (float *)(param_1 + 0x10);
      do {
        iVar4 = iVar4 + -1;
        pfVar3[-4] = fVar2 * pfVar3[-4];
        pfVar3[-2] = fVar2 * pfVar3[-2];
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3[2] = fVar2 * pfVar3[2];
        pfVar3 = pfVar3 + 8;
      } while (iVar4 != 0);
    }
    if (iVar5 < param_2) {
      do {
        iVar5 = iVar5 + 1;
        *(float *)(param_1 + -8 + iVar5 * 8) = (1.0 / fVar1) * *(float *)(param_1 + -8 + iVar5 * 8);
      } while (iVar5 < param_2);
    }
    iVar5 = 1;
    if (3 < param_2 + -1) {
      iVar4 = (param_2 - 5U >> 2) + 1;
      iVar5 = iVar4 * 4 + 1;
      pfVar3 = (float *)(param_1 + 0x10);
      do {
        iVar4 = iVar4 + -1;
        fVar1 = pfVar3[-2];
        pfVar3[-2] = pfVar3[-4] + fVar1;
        fVar1 = pfVar3[-4] + fVar1 + *pfVar3;
        *pfVar3 = fVar1;
        fVar1 = fVar1 + pfVar3[2];
        pfVar3[2] = fVar1;
        pfVar3[4] = fVar1 + pfVar3[4];
        pfVar3 = pfVar3 + 8;
      } while (iVar4 != 0);
    }
    while (iVar5 < param_2) {
      iVar4 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      *(float *)(param_1 + -8 + iVar5 * 8) =
           *(float *)(param_1 + -8 + iVar4) + *(float *)(param_1 + -8 + iVar5 * 8);
    }
  }
  return;
}


//// FUNCTION FUN_00aa9140 @ 00aa9140 ////

void * __thiscall FUN_00aa9140(void *this,byte param_1)

{
  FUN_00aa8f30((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aa9160 @ 00aa9160 ////

undefined4 * __cdecl FUN_00aa9160(char *param_1,char param_2)

{
  char cVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *unaff_EBP;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  bool bVar11;
  int *local_134;
  int local_124;
  undefined4 local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined4 local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd4a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d3340(param_1,(char *)0x0,local_10c);
  FUN_009ac040(local_10c);
  iVar7 = 5;
  bVar11 = true;
  pcVar8 = local_10c;
  pcVar9 = ".anm";
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar11 = *pcVar8 == *pcVar9;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  } while (bVar11);
  if (bVar11) {
    pbVar2 = Anim_LoadByName(param_1);
    puVar3 = operator_new(0x20);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
    }
    local_134 = puVar3 + 4;
    *local_134 = 1;
    pvVar4 = operator_new(8);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar4,8,1,&LAB_00aa8eb0);
    }
    piVar10 = puVar3 + 5;
    *piVar10 = (int)pvVar4;
    *(byte **)((int)pvVar4 + 4) = pbVar2;
    *(undefined4 *)*piVar10 = 0x3f800000;
    puVar3[1] = 100;
  }
  else {
    pcVar8 = s_Data_Animations_Sequences_00e6e410;
    do {
      pcVar9 = pcVar8;
      pcVar8 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    if (pcVar9 == s_Data_Animations_Sequences_00e6e410) {
      iVar7 = (int)&DAT_0105bed8 - (int)param_1;
      do {
        cVar1 = *param_1;
        param_1[iVar7] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
    else {
      _sprintf(&DAT_0105bed8,"%s\\%s",s_Data_Animations_Sequences_00e6e410,param_1);
    }
    piVar5 = (int *)FUN_00a23030(&DAT_0105bed8);
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_c;
      return unaff_EBP;
    }
    puVar3 = operator_new(0x20);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
    }
    iVar7 = FUN_00aa8ec0(&local_124,piVar5);
    pcVar8 = (char *)(iVar7 + (int)piVar5);
    local_134 = puVar3 + 4;
    *local_134 = local_11c;
    pvVar4 = operator_new(local_11c * 8);
    local_4 = 1;
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar4,8,local_11c,&LAB_00aa8eb0);
    }
    piVar10 = puVar3 + 5;
    *piVar10 = (int)pvVar4;
    local_4 = 0xffffffff;
    puVar3[2] = local_118;
    if (local_118 != 0) {
      pvVar4 = operator_new(local_118 * 8);
      local_4 = 2;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        FUN_00401380(pvVar4,8,local_118,&LAB_00aa8eb0);
      }
      puVar3[3] = pvVar4;
    }
    local_4 = 0xffffffff;
    puVar3[6] = local_114;
    if (local_114 != 0) {
      pvVar4 = operator_new(local_114 * 8);
      local_4 = 3;
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        FUN_00401380(pvVar4,8,local_114,&LAB_00aa8eb0);
      }
      puVar3[7] = pvVar4;
    }
    local_4 = 0xffffffff;
    puVar3[1] = local_110;
    iVar7 = 0;
    *puVar3 = local_120;
    pcVar9 = pcVar8;
    if (0 < *local_134) {
      do {
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pbVar2 = Anim_LoadByName(pcVar9);
        *(byte **)(*piVar10 + 4 + iVar7 * 8) = pbVar2;
        iVar7 = iVar7 + 1;
        pcVar9 = pcVar8;
      } while (iVar7 < *local_134);
    }
    iVar7 = 0;
    pcVar9 = pcVar8;
    if (0 < (int)puVar3[2]) {
      do {
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pbVar2 = Anim_LoadByName(pcVar9);
        *(byte **)(puVar3[3] + 4 + iVar7 * 8) = pbVar2;
        iVar7 = iVar7 + 1;
        pcVar9 = pcVar8;
      } while (iVar7 < (int)puVar3[2]);
    }
    iVar7 = 0;
    pcVar9 = pcVar8;
    if (0 < (int)puVar3[6]) {
      do {
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pbVar2 = Anim_LoadByName(pcVar9);
        *(byte **)(puVar3[7] + 4 + iVar7 * 8) = pbVar2;
        iVar7 = iVar7 + 1;
        pcVar9 = pcVar8;
      } while (iVar7 < (int)puVar3[6]);
    }
    if ((1 < local_124) && (uVar6 = (int)pcVar8 - (int)piVar5 & 3, uVar6 != 0)) {
      pcVar8 = pcVar8 + (4 - uVar6);
    }
    iVar7 = 0;
    if (0 < *local_134) {
      do {
        *(undefined4 *)(*piVar10 + iVar7 * 8) = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *local_134);
    }
    iVar7 = 0;
    if (0 < (int)puVar3[2]) {
      do {
        *(undefined4 *)(puVar3[3] + iVar7 * 8) = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)puVar3[2]);
    }
    iVar7 = 0;
    if (0 < (int)puVar3[6]) {
      do {
        *(undefined4 *)(puVar3[7] + iVar7 * 8) = 0x3f800000;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)puVar3[6]);
    }
  }
  if (param_2 != '\0') {
    FUN_00aa9010(puVar3[3],puVar3[2]);
    FUN_00aa9010(*piVar10,*local_134);
    FUN_00aa9010(puVar3[7],puVar3[6]);
  }
  ExceptionList = local_c;
  return unaff_EBP;
}


//// FUNCTION FUN_00aa9580 @ 00aa9580 ////

void __fastcall FUN_00aa9580(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00aa8f30((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00aa95a0 @ 00aa95a0 ////

void FUN_00aa95a0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int in_EAX;
  float *pfVar10;
  int unaff_EBX;
  int unaff_EDI;
  
  pfVar1 = (float *)((uint)*(ushort *)(unaff_EBX + in_EAX * 2) * 0x20 + unaff_EDI);
  pfVar10 = (float *)((uint)*(ushort *)(unaff_EBX + ((in_EAX + 1) % 3) * 2) * 0x20 + unaff_EDI);
  fVar2 = *pfVar10 - *pfVar1;
  fVar3 = pfVar10[1] - pfVar1[1];
  fVar4 = pfVar10[2] - pfVar1[2];
  pfVar10 = (float *)((uint)*(ushort *)(unaff_EBX + ((in_EAX + 2) % 3) * 2) * 0x20 + unaff_EDI);
  fVar5 = *pfVar10 - *pfVar1;
  fVar6 = pfVar10[1] - pfVar1[1];
  fVar7 = pfVar10[2] - pfVar1[2];
  fVar8 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar8 != 0.0) {
    fVar8 = 1.0 / fVar8;
    fVar9 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
    if (fVar9 != 0.0) {
      fVar9 = 1.0 / fVar9;
      if (1.0 < fVar5 * fVar9 * fVar2 * fVar8 +
                fVar6 * fVar9 * fVar3 * fVar8 + fVar7 * fVar9 * fVar4 * fVar8) {
        FUN_00ad1010();
        return;
      }
      FUN_00ad1010();
    }
  }
  return;
}


//// FUNCTION FUN_00aa9760 @ 00aa9760 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_00aa9760(int param_1)

{
  uint uVar1;
  undefined4 *_Memory;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  float10 fVar13;
  ulonglong uVar14;
  int local_407c;
  int local_4078;
  int local_4074;
  int local_4070;
  int local_4068;
  int local_4064;
  float local_4060;
  float local_405c;
  float local_4058;
  int *local_4050;
  float local_404c;
  float local_4048;
  float local_4044;
  float local_4040;
  float local_403c;
  float local_4038;
  float local_4034;
  float local_4030;
  float local_402c;
  float local_4028;
  float local_4024;
  float local_4020;
  float local_401c;
  float local_4018;
  float local_4014;
  float *local_400c;
  int local_4008 [4095];
  undefined4 uStack_c;
  
  uStack_c = 0xaa9770;
  if (param_1 == 0) {
    return;
  }
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 0x10;
  DAT_010c9ff4 = 0;
  DAT_010c9ff8 = (int *)0x0;
  uVar1 = FUN_009d9bb0(param_1);
  _Memory = operator_new(uVar1 * 4);
  puVar5 = _Memory;
  for (uVar1 = uVar1 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  piVar11 = local_4008;
  for (iVar7 = 0x1000; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  local_4028 = *(float *)(param_1 + 200);
  local_4024 = *(float *)(param_1 + 0xcc);
  local_4020 = *(float *)(param_1 + 0xd0);
  local_401c = *(float *)(param_1 + 0xd4);
  local_4018 = *(float *)(param_1 + 0xd8);
  local_4014 = *(float *)(param_1 + 0xdc);
  local_4070 = 0;
  local_404c = 15.0 / (local_401c + local_401c);
  local_4074 = 0;
  local_4048 = 15.0 / (local_4018 + local_4018);
  local_4044 = 15.0 / (local_4014 + local_4014);
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      piVar11 = *(int **)(*(int *)(param_1 + 0x2c) + local_4074 * 4);
      local_407c = 0;
      if (0 < *piVar11) {
        do {
          iVar7 = *(int *)(piVar11[1] + local_407c * 4);
          pvVar2 = operator_new(*(int *)(iVar7 + 0x2c) << 1);
          *(void **)(*(int *)(iVar7 + 0x28) + 0x1c) = pvVar2;
          uVar1 = *(uint *)(iVar7 + 0x2c);
          puVar5 = *(undefined4 **)(*(int *)(iVar7 + 0x28) + 0x1c);
          for (uVar8 = (uVar1 & 0x7fffffff) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          for (iVar9 = (uVar1 & 1) << 1; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined1 *)puVar5 = 0;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          local_4064 = 0;
          if (0 < *(int *)(iVar7 + 0x2c)) {
            local_4078 = 0;
            local_4040 = local_4028 - local_401c;
            local_403c = local_4024 - local_4018;
            local_4038 = local_4020 - local_4014;
            do {
              local_400c = (float *)(*(int *)(iVar7 + 0x30) + local_4078);
              local_4060 = *local_400c - local_4040;
              local_4030 = local_400c[1] - local_403c;
              local_402c = local_400c[2] - local_4038;
              local_405c = local_4030 * local_4048;
              local_4058 = local_402c * local_4044;
              local_4034 = local_4060;
              uVar14 = FUN_00acd42c();
              iVar9 = (int)uVar14;
              if (iVar9 < 0) {
                iVar9 = 0;
              }
              else if (0xf < iVar9) {
                iVar9 = 0xf;
              }
              uVar14 = FUN_00acd42c();
              iVar12 = (int)uVar14;
              if (iVar12 < 0) {
                iVar12 = 0;
              }
              else if (0xf < iVar12) {
                iVar12 = 0xf;
              }
              uVar14 = FUN_00acd42c();
              iVar3 = (int)uVar14;
              if (iVar3 < 0) {
                iVar3 = 0;
              }
              else if (0xf < iVar3) {
                iVar3 = 0xf;
              }
              iVar9 = (iVar3 * 0x10 + iVar12) * 0x10 + iVar9;
              piVar10 = local_4008 + iVar9;
              local_4050 = piVar10;
              if ((void *)local_4008[iVar9] == (void *)0x0) {
                piVar4 = operator_new(0x28);
                if (piVar4 == (int *)0x0) {
                  piVar4 = (int *)0x0;
                }
                else {
                  piVar10 = (int *)(*(int *)(iVar7 + 0x30) + local_4078);
                  piVar4[8] = (int)DAT_010c9ff8;
                  DAT_010c9ff8 = piVar4;
                  *piVar4 = DAT_010c9ff4;
                  piVar4[1] = *piVar10;
                  piVar4[2] = piVar10[1];
                  piVar4[3] = piVar10[2];
                  piVar4[7] = 0;
                  piVar4[6] = 0;
                  piVar4[5] = 0;
                  piVar4[4] = 0;
                  DAT_010c9ff4 = DAT_010c9ff4 + 1;
                  piVar4[9] = 0;
                  piVar10 = local_4050;
                }
                *piVar10 = (int)piVar4;
                _Memory[local_4070] = piVar4;
              }
              else {
                iVar9 = FUN_00a63940((void *)local_4008[iVar9],local_400c);
                _Memory[local_4070] = iVar9;
              }
              *(undefined2 *)(*(int *)(*(int *)(iVar7 + 0x28) + 0x1c) + local_4064 * 2) =
                   *(undefined2 *)_Memory[local_4070];
              local_4064 = local_4064 + 1;
              local_4078 = local_4078 + 0x20;
              local_4070 = local_4070 + 1;
            } while (local_4064 < *(int *)(iVar7 + 0x2c));
          }
          local_407c = local_407c + 1;
        } while (local_407c < *piVar11);
      }
      local_4074 = local_4074 + 1;
    } while (local_4074 < *(int *)(param_1 + 0x28));
  }
  if (DAT_010c9ff4 != 0) {
    puVar5 = operator_new(DAT_010c9ff4 * 0xc);
    *(undefined4 **)(param_1 + 0x7c) = puVar5;
    for (uVar1 = DAT_010c9ff4 * 3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    local_4070 = 0;
    local_4064 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        piVar11 = *(int **)(*(int *)(param_1 + 0x2c) + local_4064 * 4);
        local_4068 = 0;
        local_4050 = piVar11;
        if (0 < *piVar11) {
          do {
            iVar7 = *(int *)(piVar11[1] + local_4068 * 4);
            local_4074 = 0;
            if (0 < *(int *)(iVar7 + 0x1c)) {
              local_407c = 0;
              do {
                iVar9 = *(int *)(iVar7 + 0x20);
                iVar12 = *(int *)(iVar7 + 0x30);
                FUN_009a3f80(&local_4060,
                             (float *)((uint)*(ushort *)(iVar9 + local_407c) * 0x20 + iVar12),
                             (float *)((uint)*(ushort *)(iVar9 + 2 + local_407c) * 0x20 + iVar12),
                             (float *)((uint)*(ushort *)(iVar9 + 4 + local_407c) * 0x20 + iVar12));
                local_4034 = local_4060;
                local_4030 = local_405c;
                local_402c = local_4058;
                iVar12 = 0;
                do {
                  fVar13 = (float10)FUN_00aa95a0();
                  iVar3 = _Memory[(uint)((ushort *)(iVar9 + local_407c))[iVar12] + local_4070];
                  local_4048 = (float)((float10)local_4030 * fVar13);
                  iVar12 = iVar12 + 1;
                  local_4044 = (float)((float10)local_402c * fVar13);
                  local_4040 = (float)((float10)local_4034 * fVar13 +
                                      (float10)*(float *)(iVar3 + 0x10));
                  local_403c = local_4048 + *(float *)(iVar3 + 0x14);
                  local_4038 = local_4044 + *(float *)(iVar3 + 0x18);
                  *(float *)(iVar3 + 0x10) = local_4040;
                  *(float *)(iVar3 + 0x14) = local_403c;
                  *(float *)(iVar3 + 0x18) = local_4038;
                } while (iVar12 < 3);
                local_407c = local_407c + 6;
                local_4074 = local_4074 + 1;
                piVar11 = local_4050;
              } while (local_4074 < *(int *)(iVar7 + 0x1c));
            }
            local_4070 = local_4070 + *(int *)(iVar7 + 0x2c);
            local_4068 = local_4068 + 1;
          } while (local_4068 < *piVar11);
        }
        local_4064 = local_4064 + 1;
      } while (local_4064 < *(int *)(param_1 + 0x28));
    }
    if (-1 < DAT_010c9ff4 + -1) {
      local_407c = (DAT_010c9ff4 + -1) * 0xc;
      local_4074 = DAT_010c9ff4;
      piVar11 = DAT_010c9ff8;
      do {
        piVar10 = DAT_010c9ff8;
        if (piVar11 != (int *)0x0) {
          FUN_00412e20((float *)(piVar11 + 4));
          pfVar6 = (float *)(*(int *)(param_1 + 0x7c) + local_407c);
          *pfVar6 = (float)piVar11[4];
          pfVar6[1] = (float)piVar11[5];
          pfVar6[2] = (float)piVar11[6];
          piVar11 = (int *)piVar11[8];
          piVar10 = piVar11;
          if (DAT_010c9ff8 != (int *)0x0) {
            DAT_010c9ff4 = DAT_010c9ff4 + -1;
                    /* WARNING: Subroutine does not return */
            _free(DAT_010c9ff8);
          }
        }
        DAT_010c9ff8 = piVar10;
        local_407c = local_407c + -0xc;
        local_4074 = local_4074 + -1;
      } while (local_4074 != 0);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00aa9dc0 @ 00aa9dc0 ////

void FUN_00aa9dc0(void)

{
  _MEMORYSTATUS *p_Var1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  _MEMORYSTATUS local_40 [2];
  
  hModule = GetModuleHandleA("Kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"GlobalMemoryStatusEx");
    if (pFVar2 != (FARPROC)0x0) {
      p_Var1 = local_40;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        p_Var1->dwLength = 0;
        p_Var1 = (_MEMORYSTATUS *)((int)p_Var1 + 4);
      }
      local_40[0].dwLength = 0x40;
      iVar3 = (*pFVar2)(local_40);
      if ((iVar3 != 0) && (local_40[0].dwTotalPhys != 0 || local_40[0].dwAvailPhys != 0))
      goto LAB_00aa9e29;
    }
  }
  GlobalMemoryStatus(local_40);
  if (local_40[0].dwTotalPhys == 0xffffffff) {
    DAT_010ca020 = 0;
    return;
  }
  local_40[0].dwAvailPhys = 0;
LAB_00aa9e29:
  if ((local_40[0].dwAvailPhys == 0) && (local_40[0].dwTotalPhys < 0x30000001)) {
    if (local_40[0].dwTotalPhys < 0x18000001) {
      DAT_010ca020 = 0;
      return;
    }
    DAT_010ca020 = 1;
    return;
  }
  DAT_010ca020 = 2;
  return;
}


//// FUNCTION FUN_00aa9e70 @ 00aa9e70 ////

undefined4 FUN_00aa9e70(void)

{
  if (DAT_010ca024 == '\0') {
    FUN_00aa9dc0();
    DAT_010ca024 = '\x01';
  }
  return DAT_010ca020;
}


//// FUNCTION FUN_00aa9e90 @ 00aa9e90 ////

int __fastcall FUN_00aa9e90(uint3 param_1)

{
  byte bVar1;
  uint3 extraout_var;
  undefined4 uStack_4;
  
  uStack_4 = (uint)(param_1 & 0xff);
  bVar1 = FUN_00c9a700((byte *)((int)&uStack_4 + 3),(byte *)((int)&uStack_4 + 2),
                       (byte *)((int)&uStack_4 + 1));
  if ((bVar1 != 1) && ((bVar1 < 5 || (7 < bVar1)))) {
    return (uint)extraout_var << 8;
  }
  return CONCAT31(extraout_var,1);
}


//// FUNCTION FUN_00aa9ed0 @ 00aa9ed0 ////

undefined4 __thiscall FUN_00aa9ed0(void *this,int param_1,char param_2)

{
  if (param_2 == '\0') {
    if (param_1 < (int)(*(uint *)((int)this + 0x44) & 0xf)) {
      return *(undefined4 *)((int)this + param_1 * 4);
    }
  }
  else if (param_1 < (int)(*(uint *)((int)this + 0x8c) & 0xf)) {
    return *(undefined4 *)((int)this + param_1 * 4 + 0x48);
  }
  return 0;
}


//// FUNCTION FUN_00aa9f40 @ 00aa9f40 ////

void __fastcall FUN_00aa9f40(undefined4 *param_1)

{
  void *_Memory;
  
  if ((param_1[0x11] & 0xf) != 0) {
    _Memory = (void *)*param_1;
    FUN_00a59430((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00aa9f80 @ 00aa9f80 ////

void __fastcall FUN_00aa9f80(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0x3fffff;
  if ((*(uint *)(param_1 + 0x44) & 0xf) != 0) {
    do {
      FUN_00a58ab0(*(int *)(param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(*(uint *)(param_1 + 0x44) & 0xf));
  }
  return;
}


//// FUNCTION FUN_00aaa020 @ 00aaa020 ////

void __thiscall FUN_00aaa020(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 0;
  if ((*(uint *)((int)this + 0x44) & 0xf) != 0) {
    do {
      iVar1 = *(int *)((int)this + local_4 * 4);
      iVar2 = 0;
      if ((*(byte *)(iVar1 + 4) & 0x7f) != 0) {
        do {
          FUN_00a5a7b0((void *)(*(int *)(iVar1 + 0x1c) + iVar2 * 8),param_1,
                       (byte)(*(uint *)((int)this + 0x44) >> 0x12) & 1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(*(byte *)(iVar1 + 4) & 0x7f));
      }
      local_4 = local_4 + 1;
    } while (local_4 < (int)(*(uint *)((int)this + 0x44) & 0xf));
  }
  return;
}


//// FUNCTION FUN_00aaa090 @ 00aaa090 ////

undefined4 __thiscall FUN_00aaa090(void *this,undefined4 *param_1,int param_2)

{
  void *_Dst;
  int *this_00;
  ushort *puVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  
  *(uint *)((int)this + 0x40) =
       (*(uint *)((int)this + 0x40) & 0xffc00000) + 0x400000 ^
       *(uint *)((int)this + 0x40) & 0x3fffff;
  this_00 = (int *)*param_1;
  puVar1 = *(ushort **)(*this_00 + param_2 * 4);
  if (*(int *)(puVar1 + 2) != 0) {
    FUN_00aaa990(*(void **)(*(int *)(puVar1 + 2) + 0x14c),*puVar1,*(byte *)(param_1 + 2) & 1);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    uVar3 = *(uint *)(puVar1 + 6) & 0xfffbffff;
  }
  else {
    uVar3 = *(uint *)(puVar1 + 6) & 0xfff7ffff;
  }
  *(uint *)(puVar1 + 6) = uVar3;
  if ((uVar3 & 0xc0000) == 0) {
    *puVar1 = 0;
  }
  bVar2 = *(char *)((int)this_00 + 5) - 1;
  *(byte *)((int)this_00 + 5) = bVar2;
  _Dst = (void *)(*this_00 + param_2 * 4);
  _memmove(_Dst,(void *)((int)_Dst + 4),((uint)bVar2 - param_2) * 4);
  puVar4 = (uint *)param_1[1];
  if (((ushort)*(byte *)((int)this_00 + 5) < (ushort)(((ushort)puVar4[1] & 0x3f80) >> 7)) &&
     (uVar3 = *puVar4, puVar4 = (uint *)(uint)*(ushort *)((int)this_00 + 6),
     puVar4 < (uint *)((uVar3 & 0xffff) - ((uint)param_1[2] >> 0xb & 0xff)))) {
    uVar5 = FUN_00a5a6c0(this_00,*(byte *)(param_1 + 2) & 1);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return (uint)puVar4 & 0xffffff00;
}


//// FUNCTION FUN_00aaa1e0 @ 00aaa1e0 ////

undefined4 * __fastcall FUN_00aaa1e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x10] = param_1[0x10] & 0x3fffff;
  param_1[0x11] = param_1[0x11] & 0xf8040000;
  puVar2 = param_1 + 0x12;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x22] = param_1[0x22] & 0x3fffff;
  param_1[0x23] = param_1[0x23] & 0xf8040000;
  return param_1;
}


//// FUNCTION FUN_00aaa230 @ 00aaa230 ////

void __fastcall FUN_00aaa230(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfd4c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00aa9f40(param_1 + 0x12);
  local_4 = 0xffffffff;
  FUN_00aa9f40(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00aaa280 @ 00aaa280 ////

undefined4 __thiscall FUN_00aaa280(void *this,int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x44) ^ (*param_1 << 4 ^ *(uint *)((int)this + 0x44)) & 0xf0;
  *(uint *)((int)this + 0x40) =
       (param_1[3] & 0x7ffU) << 0xb | *(uint *)((int)this + 0x40) & 0xffc00000 | param_1[2] & 0x7ffU
  ;
  *(uint *)((int)this + 0x44) = uVar1;
  *(uint *)((int)this + 0x44) = uVar1 & 0xfffbffff;
  uVar1 = *(uint *)((int)this + 0x8c) ^ (param_1[1] << 4 ^ *(uint *)((int)this + 0x8c)) & 0xf0;
  *(uint *)((int)this + 0x88) =
       (param_1[3] & 0x7ffU) << 0xb | *(uint *)((int)this + 0x88) & 0xffc00000 | param_1[2] & 0x7ffU
  ;
  *(uint *)((int)this + 0x8c) = uVar1;
  uVar1 = uVar1 | 0x40000;
  *(uint *)((int)this + 0x8c) = uVar1;
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_00aaa330 @ 00aaa330 ////

void __fastcall FUN_00aaa330(int param_1)

{
  FUN_00aa9f80(param_1);
  FUN_00aa9f80(param_1 + 0x48);
  return;
}


//// FUNCTION FUN_00aaa350 @ 00aaa350 ////

void __thiscall FUN_00aaa350(void *this,int param_1)

{
  FUN_00aaa020(this,param_1);
  FUN_00aaa020((void *)((int)this + 0x48),param_1);
  return;
}


//// FUNCTION FUN_00aaa370 @ 00aaa370 ////

undefined4 __fastcall FUN_00aaa370(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *this;
  
  puVar2 = operator_new(0x20);
  this = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    this = puVar2;
  }
  FUN_00a59200(this,(ushort)*(uint *)(param_1 + 0x40) & 0x7ff,
               (ushort)(*(uint *)(param_1 + 0x40) >> 0xb) & 0x7ff,
               (byte)(*(uint *)(param_1 + 0x44) >> 0x12) & 1);
  *(undefined4 **)(param_1 + (*(uint *)(param_1 + 0x44) & 0xf) * 4) = this;
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_1 + 0x44) = (uVar1 + 1 ^ uVar1) & 0xf ^ uVar1;
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_00aaa3f0 @ 00aaa3f0 ////

undefined4 __thiscall FUN_00aaa3f0(void *this,int *param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int local_4;
  
  piVar3 = param_1;
  uVar4 = *(uint *)((int)this + 0x44) & 0xf;
  if (uVar4 == 0) {
    FUN_00aaa370((int)this);
    *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) & 0xfffc00ff;
    uVar4 = param_1[2] ^ param_1[2] & 0x780U;
    param_1[2] = uVar4;
    param_1[2] = (*(uint *)((int)this + 0x44) >> 0xb ^ uVar4) & 0x7e ^ uVar4;
    iVar1 = *(int *)((int)this + (*(uint *)((int)this + 0x44) >> 8 & 0xf) * 4);
    param_1[1] = iVar1;
    iVar1 = *(int *)(iVar1 + 0x1c);
    *param_1 = iVar1 + (*(uint *)((int)this + 0x44) >> 0xc & 0x3f) * 8;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  local_4 = 0;
  if (uVar4 != 0) {
    do {
      iVar1 = *(int *)((int)this + (*(uint *)((int)this + 0x44) >> 8 & 0xf) * 4);
      piVar3[1] = iVar1;
      param_1 = (int *)0x0;
      if ((*(byte *)(iVar1 + 4) & 0x7f) != 0) {
        do {
          puVar2 = (uint *)piVar3[1];
          iVar1 = puVar2[7] + (*(uint *)((int)this + 0x44) >> 0xc & 0x3f) * 8;
          *piVar3 = iVar1;
          if (((ushort)*(byte *)(iVar1 + 5) < ((ushort)puVar2[1] >> 7 & 0x7f)) &&
             ((uint)*(ushort *)(iVar1 + 6) < (*puVar2 & 0xffff) - ((uint)piVar3[2] >> 0xb & 0xff)))
          {
            uVar4 = piVar3[2] ^ (*(uint *)((int)this + 0x44) >> 1 ^ piVar3[2]) & 0x780;
            piVar3[2] = uVar4;
            piVar3[2] = (*(uint *)((int)this + 0x44) >> 0xb ^ uVar4) & 0x7e ^ uVar4;
            return CONCAT31((int3)(uVar4 >> 8),1);
          }
          uVar4 = *(uint *)((int)this + 0x44);
          *(uint *)((int)this + 0x44) =
               (((uVar4 >> 0xc & 0x3f) + 1) % ((ushort)puVar2[1] & 0x7f) << 0xc ^ uVar4) & 0x3f000 ^
               uVar4;
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < (int)(*(byte *)(piVar3[1] + 4) & 0x7f));
      }
      uVar4 = *(uint *)((int)this + 0x44);
      *(uint *)((int)this + 0x44) =
           (uVar4 - 1 & 0xf) << 8 & (uVar4 & 0xffffff00) + 0x100 | uVar4 & 0xfffc00ff;
      local_4 = local_4 + 1;
    } while (local_4 < (int)(uVar4 & 0xf));
  }
  if (((byte)(*(uint *)((int)this + 0x44) >> 4) & 0xf) <= ((byte)*(uint *)((int)this + 0x44) & 0xf))
  {
    return 0;
  }
  FUN_00aaa370((int)this);
  uVar4 = (*(uint *)((int)this + 0x44) - 1 & 0xf) << 8 | *(uint *)((int)this + 0x44) & 0xfffc00ff;
  *(uint *)((int)this + 0x44) = uVar4;
  uVar4 = piVar3[2] ^ (uVar4 >> 1 ^ piVar3[2]) & 0x780;
  piVar3[2] = uVar4;
  piVar3[2] = (*(uint *)((int)this + 0x44) >> 0xb ^ uVar4) & 0x7e ^ uVar4;
  iVar1 = *(int *)((int)this + (*(uint *)((int)this + 0x44) >> 8 & 0xf) * 4);
  piVar3[1] = iVar1;
  iVar1 = *(int *)(iVar1 + 0x1c) + (*(uint *)((int)this + 0x44) >> 0xc & 0x3f) * 8;
  *piVar3 = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_00aaa630 @ 00aaa630 ////

uint __thiscall FUN_00aaa630(void *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  uint in_EAX;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int local_8;
  uint local_4;
  
  piVar3 = param_1;
  local_4 = 0;
  if ((*(uint *)((int)this + 0x44) & 0xf) != 0) {
    do {
      *(uint *)((int)this + 0x44) = *(uint *)((int)this + 0x44) & 0xfffc00ff;
      iVar1 = *(int *)this;
      piVar3[1] = iVar1;
      *piVar3 = *(int *)(iVar1 + 0x1c) + (*(uint *)((int)this + 0x44) >> 0xc & 0x3f) * 8;
      local_8 = 0;
      if ((*(uint *)((int)this + 0x44) & 0xf) != 0) {
        do {
          param_1 = (int *)0x0;
          if ((*(byte *)(piVar3[1] + 4) & 0x7f) != 0) {
            do {
              iVar1 = *(int *)((int)this + (*(uint *)((int)this + 0x44) >> 8 & 0xf) * 4);
              piVar3[1] = iVar1;
              iVar1 = *(int *)(iVar1 + 0x1c) + (*(uint *)((int)this + 0x44) >> 0xc & 0x3f) * 8;
              *piVar3 = iVar1;
              bVar2 = false;
              iVar7 = 0;
              if (*(char *)(iVar1 + 5) != '\0') {
                do {
                  iVar1 = *(int *)(*(int *)*piVar3 + iVar7 * 4);
                  cVar5 = *(char *)(iVar1 + 10);
                  if ((*(byte *)(piVar3 + 2) & 1) != 0) {
                    cVar5 = *(char *)(iVar1 + 0xb);
                  }
                  if (cVar5 != (char)(*(uint *)((int)this + 0x44) >> 0x13)) {
                    bVar2 = true;
                    uVar4 = FUN_00aaa090(this,piVar3,iVar7);
                    if ((char)uVar4 != '\0') goto LAB_00aaa84c;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)(uint)*(byte *)(*piVar3 + 5));
                if (bVar2) {
                  FUN_00a5a6c0((void *)*piVar3,*(byte *)(piVar3 + 2) & 1);
                  if (((ushort)*(byte *)(*piVar3 + 5) <
                       (ushort)(((ushort)((uint *)piVar3[1])[1] & 0x3f80) >> 7)) &&
                     ((uint)*(ushort *)(*piVar3 + 6) <
                      (*(uint *)piVar3[1] & 0xffff) - ((uint)piVar3[2] >> 0xb & 0xff))) {
LAB_00aaa84c:
                    uVar6 = piVar3[2] ^ (*(uint *)((int)this + 0x44) >> 1 ^ piVar3[2]) & 0x780;
                    piVar3[2] = uVar6;
                    piVar3[2] = (*(uint *)((int)this + 0x44) >> 0xb ^ uVar6) & 0x7e ^ uVar6;
                    return CONCAT31((int3)(uVar6 >> 8),1);
                  }
                }
              }
              uVar6 = *(uint *)((int)this + 0x44);
              *(uint *)((int)this + 0x44) =
                   (((uVar6 >> 0xc & 0x3f) + 1) % (*(byte *)(piVar3[1] + 4) & 0x7f) << 0xc ^ uVar6)
                   & 0x3f000 ^ uVar6;
              param_1 = (int *)((int)param_1 + 1);
            } while ((int)param_1 < (int)(*(byte *)(piVar3[1] + 4) & 0x7f));
          }
          uVar6 = *(uint *)((int)this + 0x44);
          uVar6 = ((uVar6 & 0xffffff00) + 0x100 & (uVar6 - 1) * 0x100 ^ uVar6) & 0xf00 ^ uVar6;
          *(uint *)((int)this + 0x44) = uVar6;
          local_8 = local_8 + 1;
        } while (local_8 < (int)(uVar6 & 0xf));
      }
      uVar6 = *(uint *)((int)this + 0x44);
      uVar6 = ((uVar6 & 0xfff80000) + 0x80000 ^ uVar6) & 0x7f80000 ^ uVar6;
      *(uint *)((int)this + 0x44) = uVar6;
      in_EAX = local_4 + 1;
      *(uint *)((int)this + 0x40) =
           ((*(uint *)((int)this + 0x40) >> 0x16) - 0x18) * 0x400000 |
           *(uint *)((int)this + 0x40) & 0x3fffff;
      local_4 = in_EAX;
    } while ((int)in_EAX < (int)(uVar6 & 0xf));
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00aaa880 @ 00aaa880 ////

bool __thiscall FUN_00aaa880(void *this,int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *this_00;
  
  this_00 = (void *)((int)this + 0x48);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    this_00 = this;
  }
  uVar1 = FUN_00aaa3f0(this_00,param_1);
  if ((char)uVar1 != '\0') {
    return true;
  }
  uVar2 = FUN_00aaa630(this_00,param_1);
  return (char)uVar2 != '\0';
}


//// FUNCTION FUN_00aaa8c0 @ 00aaa8c0 ////

void FUN_00aaa8c0(void)

{
  return;
}


//// FUNCTION FUN_00aaa8d0 @ 00aaa8d0 ////

void __fastcall FUN_00aaa8d0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  uVar1 = *param_1;
  puVar3 = param_1 + 0x1001;
  for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (ushort *)((int)puVar3 + 1);
  }
  uVar1 = *param_1;
  puVar3 = param_1 + 1;
  for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  }
  for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (ushort *)((int)puVar3 + 1);
  }
  return;
}


//// FUNCTION FUN_00aaa910 @ 00aaa910 ////

uint __thiscall FUN_00aaa910(void *this,ushort param_1,char param_2)

{
  if (param_2 != '\0') {
    return 1 << ((byte)param_1 & 7) & (uint)*(byte *)((param_1 >> 3) + 0x2002 + (int)this);
  }
  return 1 << ((byte)param_1 & 7) & (uint)*(byte *)((param_1 >> 3) + 2 + (int)this);
}


//// FUNCTION FUN_00aaa950 @ 00aaa950 ////

void __thiscall FUN_00aaa950(void *this,ushort param_1,char param_2)

{
  byte *pbVar1;
  
  if (param_2 != '\0') {
    pbVar1 = (byte *)((param_1 >> 3) + 0x2002 + (int)this);
    *pbVar1 = *pbVar1 | '\x01' << ((byte)param_1 & 7);
    return;
  }
  pbVar1 = (byte *)((param_1 >> 3) + 2 + (int)this);
  *pbVar1 = *pbVar1 | '\x01' << ((byte)param_1 & 7);
  return;
}


//// FUNCTION FUN_00aaa990 @ 00aaa990 ////

void __thiscall FUN_00aaa990(void *this,ushort param_1,char param_2)

{
  byte *pbVar1;
  
  if (param_2 != '\0') {
    pbVar1 = (byte *)((param_1 >> 3) + 0x2002 + (int)this);
    *pbVar1 = *pbVar1 & ~('\x01' << ((byte)param_1 & 7));
    return;
  }
  pbVar1 = (byte *)((param_1 >> 3) + 2 + (int)this);
  *pbVar1 = *pbVar1 & ~('\x01' << ((byte)param_1 & 7));
  return;
}


//// FUNCTION FUN_00aaa9e0 @ 00aaa9e0 ////

ushort * __fastcall FUN_00aaa9e0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  *param_1 = 0x2000;
  puVar4 = param_1 + 0x1001;
  for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  uVar1 = *param_1;
  puVar4 = param_1 + 1;
  for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (ushort *)((int)puVar4 + 1);
  }
  return param_1;
}


//// FUNCTION FUN_00aaaa20 @ 00aaaa20 ////

void __cdecl FUN_00aaaa20(long *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  pcVar1 = _strtok(param_2," ");
  do {
    if (pcVar1 == (char *)0x0) {
      return;
    }
    iVar3 = 0xc;
    bVar6 = true;
    pcVar4 = "bigtextures";
    pcVar5 = pcVar1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      pcVar1 = _strtok((char *)0x0," ,;.\t");
      if (pcVar1 == (char *)0x0) {
        return;
      }
      lVar2 = _atol(pcVar1);
      *param_1 = lVar2;
    }
    else {
      iVar3 = 0xe;
      bVar6 = true;
      pcVar4 = "smalltextures";
      pcVar5 = pcVar1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *pcVar4 == *pcVar5;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        pcVar1 = _strtok((char *)0x0," ,;.\t");
        if (pcVar1 == (char *)0x0) {
          return;
        }
        lVar2 = _atol(pcVar1);
        param_1[1] = lVar2;
      }
      else {
        iVar3 = 0xd;
        bVar6 = true;
        pcVar4 = "texture_dims";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar6 = *pcVar4 == *pcVar1;
          pcVar4 = pcVar4 + 1;
          pcVar1 = pcVar1 + 1;
        } while (bVar6);
        if (bVar6) {
          pcVar1 = _strtok((char *)0x0," ,;.\t");
          if (pcVar1 == (char *)0x0) {
            return;
          }
          lVar2 = _atol(pcVar1);
          param_1[2] = lVar2;
          pcVar1 = _strtok((char *)0x0," ,;.\t");
          if (pcVar1 == (char *)0x0) {
            return;
          }
          lVar2 = _atol(pcVar1);
          param_1[3] = lVar2;
        }
      }
    }
    pcVar1 = _strtok((char *)0x0," ,;.\t");
  } while( true );
}


//// FUNCTION FUN_00aaab10 @ 00aaab10 ////

void __cdecl FUN_00aaab10(int *param_1)

{
  if (0x200 < param_1[3]) {
    param_1[3] = 0x200;
  }
  if (param_1[3] < 0x80) {
    param_1[3] = 0x80;
  }
  if (0x200 < param_1[2]) {
    param_1[2] = 0x200;
  }
  if (param_1[2] < 0x80) {
    param_1[2] = 0x80;
  }
  if (*param_1 < 0x11) {
    if (*param_1 < 0) {
      *param_1 = 0;
    }
  }
  else {
    *param_1 = 0x10;
  }
  if (0x10 < param_1[1]) {
    param_1[1] = 0x10;
  }
  if (param_1[1] < 0) {
    param_1[1] = 0;
  }
  return;
}


//// FUNCTION FUN_00aaabf0 @ 00aaabf0 ////

void __cdecl FUN_00aaabf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00aaace0 @ 00aaace0 ////

void __fastcall FUN_00aaace0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00aaad70 @ 00aaad70 ////

void __cdecl FUN_00aaad70(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00aaadf0 @ 00aaadf0 ////

undefined4 * __thiscall FUN_00aaadf0(void *this,byte param_1)

{
  FUN_00aaace0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aaae80 @ 00aaae80 ////

void * FUN_00aaae80(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00aaaeb0 @ 00aaaeb0 ////

void __fastcall FUN_00aaaeb0(int param_1)

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


//// FUNCTION FUN_00aaaee0 @ 00aaaee0 ////

undefined4 * FUN_00aaaee0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00aaaf10 @ 00aaaf10 ////

int * __thiscall FUN_00aaaf10(void *this,undefined1 *param_1,int param_2,byte param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ios_base *this_00;
  int *local_24;
  char local_20;
  void *local_1c;
  uint local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfd4e8;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_18 = 0;
  ExceptionList = &pvStack_10;
  *(undefined4 *)((int)this + 4) = 0;
  local_1c = this;
  FUN_00a912a0(&local_24,this,1);
  if ((local_20 == '\0') || (param_2 < 1)) {
    *param_1 = 0;
    local_8 = 0;
    uVar3 = local_18;
    if (*(int *)((int)this + 4) == 0) {
      uVar3 = local_18 | 2;
    }
    this_00 = (ios_base *)(*(int *)(*(int *)this + 4) + (int)this);
    if (uVar3 != 0) {
      uVar3 = uVar3 | *(uint *)(this_00 + 8);
      if (*(int *)(this_00 + 0x28) == 0) {
        uVar3 = uVar3 | 4;
      }
      std::ios_base::clear(this_00,uVar3,false);
    }
    iVar2 = *(int *)(*(int *)(*local_24 + 4) + 0x28 + (int)local_24);
    local_8 = 0xffffffff;
    if (iVar2 != 0) {
      FUN_00accb42((undefined4 *)(iVar2 + 4));
    }
    ExceptionList = pvStack_10;
    return this;
  }
  piVar4 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
  pbVar1 = *(byte **)piVar4[8];
  local_8 = 1;
  if ((pbVar1 == (byte *)0x0) || (uVar3 = *(uint *)piVar4[8], *(int *)piVar4[0xc] + uVar3 <= uVar3))
  {
    uVar3 = (**(code **)(*piVar4 + 0x10))();
  }
  else {
    uVar3 = (uint)*pbVar1;
  }
  while( true ) {
    if (uVar3 == 0xffffffff) {
      local_18 = local_18 | 1;
      piVar4 = (int *)FUN_00aab035();
      return piVar4;
    }
    if (uVar3 == param_3) break;
    param_2 = param_2 + -1;
    if (param_2 < 1) {
      local_18 = local_18 | 2;
      piVar4 = (int *)FUN_00aab035();
      return piVar4;
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *param_1 = (char)uVar3;
    param_1 = param_1 + 1;
    uVar3 = FUN_00a90770(*(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this));
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar4 = *(int **)(*(int *)(*(int *)this + 4) + 0x28 + (int)this);
  if ((*(uint *)piVar4[8] != 0) && (uVar3 = *(uint *)piVar4[8], uVar3 < *(int *)piVar4[0xc] + uVar3)
     ) {
    *(int *)piVar4[0xc] = *(int *)piVar4[0xc] + -1;
    *(int *)piVar4[8] = *(int *)piVar4[8] + 1;
    piVar4 = (int *)FUN_00aab035();
    return piVar4;
  }
  (**(code **)(*piVar4 + 0x14))();
  piVar4 = (int *)FUN_00aab035();
  return piVar4;
}


//// FUNCTION FUN_00aab035 @ 00aab035 ////

void FUN_00aab035(void)

{
  int iVar1;
  uint uVar2;
  ios_base *this;
  int unaff_EBP;
  int *unaff_ESI;
  
  **(undefined1 **)(unaff_EBP + 8) = 0;
  iVar1 = unaff_ESI[1];
  uVar2 = *(uint *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uVar2 = uVar2 | 2;
  }
  this = (ios_base *)(*(int *)(*unaff_ESI + 4) + (int)unaff_ESI);
  if (uVar2 != 0) {
    uVar2 = uVar2 | *(uint *)(this + 8);
    if (*(int *)(this + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    std::ios_base::clear(this,uVar2,false);
  }
  iVar1 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x20) + 4) + 0x28 +
                  (int)*(int **)(unaff_EBP + -0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00accb42((undefined4 *)(iVar1 + 4));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


//// FUNCTION FUN_00aab0b0 @ 00aab0b0 ////

void __fastcall FUN_00aab0b0(int param_1)

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


//// FUNCTION FUN_00aab0e0 @ 00aab0e0 ////

void __fastcall FUN_00aab0e0(int param_1)

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


//// FUNCTION FUN_00aab110 @ 00aab110 ////

void __thiscall FUN_00aab110(void *this,undefined1 *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = FUN_00a18a80((void *)(*(int *)(*(int *)this + 4) + (int)this),10);
  FUN_00aaaf10(this,param_1,param_2,bVar1);
  return;
}


//// FUNCTION FUN_00aab140 @ 00aab140 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aab140(void)

{
  undefined4 *_Memory;
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (DAT_010ca02c == (void *)0x0) {
      DAT_010ca02c = (void *)0x0;
      DAT_010ca030 = 0;
      _DAT_010ca034 = 0;
      return;
    }
    if ((uint)(DAT_010ca030 - (int)DAT_010ca02c >> 2) <= uVar1) break;
    _Memory = *(undefined4 **)((int)DAT_010ca02c + uVar1 * 4);
    if (_Memory != (undefined4 *)0x0) {
      FUN_00aaace0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    uVar1 = uVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010ca02c);
}


//// FUNCTION FUN_00aab1b0 @ 00aab1b0 ////

void __fastcall FUN_00aab1b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = FUN_00a1bb20(param_1 + 2);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)(*param_1 + 4);
    uVar2 = *(uint *)(iVar1 + 8 + (int)param_1);
    uVar4 = uVar2 | 2;
    if (*(int *)(iVar1 + 0x28 + (int)param_1) == 0) {
      uVar4 = uVar2 | 6;
    }
    std::ios_base::clear((ios_base *)(iVar1 + (int)param_1),uVar4,false);
  }
  return;
}


//// FUNCTION FUN_00aab1f0 @ 00aab1f0 ////

void FUN_00aab1f0(void)

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
  puStack_8 = &LAB_00cfd508;
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


//// FUNCTION FUN_00aab260 @ 00aab260 ////

int * __thiscall FUN_00aab260(void *this,char *param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *this_00;
  int iVar1;
  uint uVar2;
  ios_base iVar3;
  void *pvVar4;
  uint uVar5;
  ios_base *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd552;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_4 != 0) {
    ExceptionList = &local_c;
    *(undefined **)this = &DAT_00d7b780;
    *(undefined ***)((int)this + 100) = &PTR_FUN_00d74f2c;
    local_4 = 0;
  }
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_00d7af34;
  *(undefined4 *)((int)this + 4) = 0;
  this_01 = (ios_base *)(*(int *)(*(int *)this + 4) + (int)this);
  std::ios_base::_Init(this_01);
  this_00 = (undefined4 *)((int)this + 8);
  *(undefined4 **)(this_01 + 0x28) = this_00;
  *(undefined4 *)(this_01 + 0x2c) = 0;
  iVar3 = (ios_base)FUN_00a18a80(this_01,0x20);
  this_01[0x30] = iVar3;
  if (*(int *)(this_01 + 0x28) == 0) {
    std::ios_base::clear(this_01,*(uint *)(this_01 + 8) | 4,false);
  }
  *(undefined4 *)(this_01 + 4) = 0;
  *(undefined ***)(*(int *)(*(int *)this + 4) + (int)this) = &PTR_LAB_00d7b77c;
  local_4 = 2;
  FUN_00a18a00(this_00);
  *this_00 = &PTR_FUN_00d7503c;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  FUN_00a17da0((int)this_00);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = DAT_010b9508;
  *(undefined4 *)((int)this + 0x48) = DAT_010b9508;
  *(undefined4 *)((int)this + 0x44) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  pvVar4 = FUN_00a1b340(this_00,param_1,param_2 | 1,param_3);
  if (pvVar4 == (void *)0x0) {
    iVar1 = *(int *)(*(int *)this + 4);
    uVar2 = *(uint *)(iVar1 + 8 + (int)this);
    uVar5 = uVar2 | 2;
    if (*(int *)(iVar1 + 0x28 + (int)this) == 0) {
      uVar5 = uVar2 | 6;
    }
    std::ios_base::clear((ios_base *)(iVar1 + (int)this),uVar5,false);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00aab3a0 @ 00aab3a0 ////

void __fastcall FUN_00aab3a0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfd56b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -100) + 4) + -100 + param_1) = &PTR_LAB_00d7b77c;
  local_4 = 0;
  FUN_00a1bc90((int *)(param_1 + -0x5c));
  *(undefined ***)(*(int *)(*(int *)(param_1 + -100) + 4) + -8 + param_1 + -0x5c) =
       &PTR_LAB_00d7af34;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00aab450 @ 00aab450 ////

void __thiscall FUN_00aab450(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00aab1f0();
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
      _Dst = FUN_00aaaee0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00aaae80(param_1,iVar5,param_1 + param_2);
      FUN_00aaaee0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00aaabf0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00aaae80(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00aaad70(param_1,(int)pvVar3,iVar5);
    FUN_00aaabf0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00aab630 @ 00aab630 ////

void __fastcall FUN_00aab630(int param_1)

{
  FUN_00aab3a0(param_1 + 100);
  FUN_00a16560((ios_base *)(param_1 + 100));
  return;
}


//// FUNCTION FUN_00aab6e0 @ 00aab6e0 ////

void __thiscall FUN_00aab6e0(void *this,undefined4 *param_1)

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
  FUN_00aab450(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00aab730 @ 00aab730 ////

void __cdecl FUN_00aab730(uint *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *this;
  void *_Memory;
  undefined4 *local_118;
  uint *local_114;
  char local_110 [268];
  
  puVar2 = operator_new(0x34);
  this = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = puVar2 + 3;
    *(undefined1 *)(puVar2 + 3) = 0;
    puVar2[1] = 0;
    puVar2[2] = 0x14;
    puVar2[0xc] = 0xffffffff;
    puVar2[0xb] = 0xffffffff;
    puVar2[10] = 0xffffffff;
    puVar2[9] = 0xffffffff;
    this = puVar2;
  }
  local_118 = this;
  puVar3 = FUN_00acecd0(param_1,'\"');
  if (puVar3 == (uint *)0x0) {
    if (this != (undefined4 *)0x0) {
      if ((uint)this[2] < 0x15) {
LAB_00aab7d1:
                    /* WARNING: Subroutine does not return */
        _free(this);
      }
      _Memory = (void *)*this;
LAB_00aab7c9:
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  else {
    local_114 = (uint *)((int)puVar3 + 1);
    puVar4 = FUN_00acecd0(local_114,'\"');
    if (puVar4 == (uint *)0x0) {
      if (this != (undefined4 *)0x0) {
        if ((uint)this[2] < 0x15) goto LAB_00aab7d1;
        _Memory = (void *)*this;
        goto LAB_00aab7c9;
      }
    }
    else {
      pcVar5 = local_110;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5 = pcVar5 + 4;
      }
      _strncpy(local_110,(char *)local_114,(int)puVar4 + (-1 - (int)puVar3));
      pcVar5 = local_110;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(this,local_110,(int)pcVar5 - (int)(local_110 + 1));
      this[8] = 0;
      puVar3 = FUN_00ace080(puVar4,"bold");
      if (puVar3 != (uint *)0x0) {
        this[8] = this[8] | 2;
      }
      puVar3 = FUN_00ace080(puVar4,"italic");
      if (puVar3 != (uint *)0x0) {
        this[8] = this[8] | 8;
      }
      FUN_00aaaa20(this + 9,(char *)param_1);
      FUN_00aab6e0(&DAT_010ca028,&local_118);
    }
  }
  return;
}


//// FUNCTION FUN_00aab900 @ 00aab900 ////

uint FUN_00aab900(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  char *local_1cc;
  undefined4 local_1c8;
  uint local_1c4;
  char local_1c0 [20];
  undefined ***pppuStack_1ac;
  int local_1a8 [2];
  uint local_1a0 [8];
  int aiStack_180 [15];
  undefined **local_144 [13];
  uint local_110 [65];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd5a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_009b4250();
  local_1cc = local_1c0;
  local_1c0[0] = '\0';
  local_1c8 = 0;
  local_1c4 = 0x14;
  _strncpy(local_1cc,"",0);
  local_1c8 = 0;
  *local_1cc = '\0';
  local_4 = 0;
  switch(uVar2) {
  default:
    if (DAT_00e69574 < 0x12) {
      if (0x14 < DAT_00e69574) {
                    /* WARNING: Subroutine does not return */
        _free(PTR_DAT_00e6956c);
      }
      DAT_00e69574 = 0x20;
      PTR_DAT_00e6956c = _malloc(0x20);
    }
    _strncpy(PTR_DAT_00e6956c,"Data\\Fonts\\EN-UK\\",0x11);
    DAT_00e69570 = 0x11;
    PTR_DAT_00e6956c[0x11] = 0;
    break;
  case 10:
  case 0xb:
    FUN_00403e20(&PTR_DAT_00e6956c,"Data\\Fonts\\RU-RU\\");
    break;
  case 0xc:
    FUN_00403e20(&PTR_DAT_00e6956c,"Data\\Fonts\\CH-TRA\\");
    break;
  case 0xd:
    FUN_00403e20(&PTR_DAT_00e6956c,"Data\\Fonts\\CH-SI\\");
    break;
  case 0xe:
    FUN_00403e20(&PTR_DAT_00e6956c,"Data\\Fonts\\JT-JT\\");
    break;
  case 0xf:
    FUN_00403e20(&PTR_DAT_00e6956c,"Data\\Fonts\\KR-KR\\");
  }
  FUN_004073f0(&local_1cc,PTR_DAT_00e6956c,DAT_00e69570);
  FUN_004073f0(&local_1cc,"FontSetup.txt",0xd);
  FUN_00aab260(local_1a8,local_1cc,1,0x1b6,1);
  iVar6 = *(int *)(local_1a8[0] + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((*(uint *)((int)local_1a0 + iVar6) & 6) != 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00aab3a0((int)local_144);
    local_144[0] = &PTR_FUN_00d74f2c;
    uVar3 = FUN_00acc705((ios_base *)local_144);
    if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1cc);
    }
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  if ((*(uint *)((int)local_1a0 + iVar6) & 1) == 0) {
    do {
      bVar1 = FUN_00a18a80((void *)((int)local_1a8 + iVar6),10);
      FUN_00aaaf10(local_1a8,(undefined1 *)local_110,0x104,bVar1);
      FUN_009ac040((char *)local_110);
      iVar6 = 1;
      bVar8 = true;
      puVar4 = local_110;
      pcVar7 = "";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar8 = (char)*puVar4 == *pcVar7;
        puVar4 = (uint *)((int)puVar4 + 1);
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (!bVar8) {
        puVar4 = FUN_00ace080(local_110,"global");
        if (puVar4 == (uint *)0x0) {
          puVar4 = FUN_00ace080(local_110,"default_font");
          if (puVar4 != (uint *)0x0) {
            FUN_00aab730(local_110);
          }
        }
        else {
          FUN_00aaaa20(&DAT_00e6e468,(char *)local_110);
        }
      }
      iVar6 = *(int *)(local_1a8[0] + 4);
    } while ((*(byte *)((int)local_1a0 + iVar6) & 1) == 0);
  }
  piVar5 = FUN_00a1bb20((int *)local_1a0);
  if (piVar5 == (int *)0x0) {
    iVar6 = *(int *)(local_1a8[0] + 4);
    uVar3 = *(uint *)((int)local_1a0 + iVar6) | 2;
    if (*(int *)((int)aiStack_180 + iVar6) == 0) {
      uVar3 = *(uint *)((int)local_1a0 + iVar6) | 6;
    }
    std::ios_base::clear((ios_base *)((int)local_1a8 + iVar6),uVar3,false);
  }
  FUN_00aaab10(&DAT_00e6e468);
  for (uVar3 = 0; (DAT_010ca02c != 0 && (uVar3 < (uint)(DAT_010ca030 - DAT_010ca02c >> 2)));
      uVar3 = uVar3 + 1) {
    FUN_00aaab10((int *)(*(int *)(DAT_010ca02c + uVar3 * 4) + 0x24));
  }
  FUN_009d9820();
  FUN_009d9820();
  FUN_009d9820();
  FUN_009d9820();
  FUN_009d9820();
  for (uVar3 = 0; (DAT_010ca02c != 0 && (uVar3 < (uint)(DAT_010ca030 - DAT_010ca02c >> 2)));
      uVar3 = uVar3 + 1) {
    FUN_009d9820();
  }
  FUN_009d9820();
  pppuStack_1ac = local_144;
  *(undefined ***)((int)local_1a8 + *(int *)(local_1a8[0] + 4)) = &PTR_LAB_00d7b77c;
  local_4._0_1_ = 2;
  FUN_00a1bc90((int *)local_1a0);
  *(undefined ***)((int)local_1a8 + *(int *)(local_1a8[0] + 4)) = &PTR_LAB_00d7af34;
  local_4 = (uint)local_4._1_3_ << 8;
  local_144[0] = &PTR_FUN_00d74f2c;
  uVar2 = FUN_00acc705((ios_base *)local_144);
  if (0x14 < local_1c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_1cc);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00aabd60 @ 00aabd60 ////

undefined4 * __thiscall FUN_00aabd60(void *this,uint param_1,uint param_2,int param_3)

{
  FUN_009ae140(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0xfffffff8;
  *(undefined4 *)((int)this + 0x60) = 0x3f000000;
  *(undefined4 *)((int)this + 100) = 0x3f000000;
  *(undefined ***)this = &PTR_FUN_00d7b8e8;
  return this;
}


//// FUNCTION FUN_00aabda0 @ 00aabda0 ////

void __fastcall FUN_00aabda0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7b8e8;
  FUN_009ae0d0(param_1);
  return;
}


//// FUNCTION FUN_00aabdb0 @ 00aabdb0 ////

undefined4 * __thiscall FUN_00aabdb0(void *this,byte param_1)

{
  FUN_00aabda0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aabdd0 @ 00aabdd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00aabdd0(void *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FUN_009ae1e0((int)param_1);
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    fVar2 = *(float *)((int)param_1 + 0x58) * *(float *)((int)param_1 + 0xc);
    if (fVar2 != 0.0) {
      pfVar1 = (float *)((int)param_1 + 0x48);
      fVar2 = SQRT(*(float *)((int)param_1 + 0x50) * *(float *)((int)param_1 + 0x50) +
                   *(float *)((int)param_1 + 0x4c) * *(float *)((int)param_1 + 0x4c) +
                   *pfVar1 * *pfVar1) - fVar2;
      if (0.0 <= fVar2) {
        FUN_00412e20(pfVar1);
        *pfVar1 = fVar2 * *pfVar1;
        *(float *)((int)param_1 + 0x4c) = fVar2 * *(float *)((int)param_1 + 0x4c);
        *(float *)((int)param_1 + 0x50) = fVar2 * *(float *)((int)param_1 + 0x50);
      }
      else {
        *(undefined4 *)((int)param_1 + 0x50) = 0;
        *(undefined4 *)((int)param_1 + 0x4c) = 0;
        *pfVar1 = 0.0;
      }
    }
    if ((*(uint *)((int)param_1 + 0x68) & 2) == 0) {
      *(float *)((int)param_1 + 0x50) =
           *(float *)((int)param_1 + 0x50) - _DAT_00e6e478 * *(float *)((int)param_1 + 0xc);
    }
    if ((*(uint *)((int)param_1 + 0x68) & 4) != 0) {
      fVar2 = *(float *)((int)param_1 + 0xc);
      pfVar1 = *(float **)((int)param_1 + 0x2c);
      fVar3 = _DAT_00e6e484 * _DAT_00e6e47c;
      fVar4 = _DAT_00e6e488 * _DAT_00e6e47c;
      *pfVar1 = _DAT_00e6e480 * _DAT_00e6e47c * fVar2 + *pfVar1;
      pfVar1[1] = fVar3 * fVar2 + pfVar1[1];
      pfVar1[2] = fVar4 * fVar2 + pfVar1[2];
    }
    if (((*(byte *)((int)param_1 + 0x68) & 1) != 0) &&
       (*(float *)(*(int *)((int)param_1 + 0x2c) + 8) < 0.0)) {
      *(undefined4 *)(*(int *)((int)param_1 + 0x2c) + 8) = 0;
      *(float *)((int)param_1 + 0x50) =
           ABS(*(float *)((int)param_1 + 0x50)) * *(float *)((int)param_1 + 0x60);
      *(float *)((int)param_1 + 0x48) =
           *(float *)((int)param_1 + 100) * *(float *)((int)param_1 + 0x48);
      *(float *)((int)param_1 + 0x4c) =
           *(float *)((int)param_1 + 0x4c) * *(float *)((int)param_1 + 100);
    }
    FUN_009ae360(param_1,*(float *)((int)param_1 + 0x38) -
                         *(float *)((int)param_1 + 0x5c) * *(float *)((int)param_1 + 0xc));
    if ((*(float *)((int)param_1 + 0x38) < 0.003921569) && (0.5 < *(float *)((int)param_1 + 0x10)))
    {
      FUN_00a5b810((int)param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00aabf70 @ 00aabf70 ////

undefined4 * __thiscall
FUN_00aabf70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00a5e3e0(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(uint *)((int)this + 0x6c) = *(uint *)((int)this + 0x6c) & 0xfffffffc;
  *(undefined4 *)((int)this + 100) = 0x3f000000;
  *(undefined4 *)((int)this + 0x68) = 0x3f000000;
  *(undefined ***)this = &PTR_FUN_00d7b904;
  return this;
}


//// FUNCTION FUN_00aabfb0 @ 00aabfb0 ////

void __fastcall FUN_00aabfb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7b904;
  FUN_00a5e3b0(param_1);
  return;
}


//// FUNCTION FUN_00aabfc0 @ 00aabfc0 ////

undefined4 * __thiscall FUN_00aabfc0(void *this,byte param_1)

{
  FUN_00aabfb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aabfe0 @ 00aabfe0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00aabfe0(void *param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  float local_8;
  float local_4;
  
  FUN_00a5e490(param_1);
  bVar3 = FUN_00a5de10(*(void **)((int)param_1 + 0x28),*(int **)((int)param_1 + 0x2c));
  if (!bVar3) {
    fVar2 = *(float *)((int)param_1 + 0x5c) * *(float *)((int)param_1 + 0xc);
    if (fVar2 != 0.0) {
      pfVar1 = (float *)((int)param_1 + 0x50);
      local_8 = SQRT(*(float *)((int)param_1 + 0x54) * *(float *)((int)param_1 + 0x54) +
                     *pfVar1 * *pfVar1) - fVar2;
      if (0.0 <= local_8) {
        FUN_00412c90(pfVar1);
        *pfVar1 = local_8 * *pfVar1;
        *(float *)((int)param_1 + 0x54) = local_8 * *(float *)((int)param_1 + 0x54);
      }
      else {
        *(undefined4 *)((int)param_1 + 0x54) = 0;
        *pfVar1 = 0.0;
      }
    }
    if ((*(uint *)((int)param_1 + 0x6c) & 1) == 0) {
      *(float *)((int)param_1 + 0x54) =
           _DAT_00e6e48c * *(float *)((int)param_1 + 0xc) + *(float *)((int)param_1 + 0x54);
    }
    if ((*(uint *)((int)param_1 + 0x6c) & 2) != 0) {
      local_8 = _DAT_00e6e494 * _DAT_00e6e490 * *(float *)((int)param_1 + 0xc) +
                *(float *)((int)param_1 + 0x34);
      local_4 = _DAT_00e6e498 * _DAT_00e6e490 * *(float *)((int)param_1 + 0xc) +
                *(float *)((int)param_1 + 0x38);
      FUN_00a5dfb0(param_1,&local_8);
    }
    FUN_00a5e5d0(param_1,*(float *)((int)param_1 + 0x40) -
                         *(float *)((int)param_1 + 0x60) * *(float *)((int)param_1 + 0xc));
    if ((*(float *)((int)param_1 + 0x40) < 0.003921569) && (0.5 < *(float *)((int)param_1 + 0x10)))
    {
      FUN_00a5dee0((int)param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00aac140 @ 00aac140 ////

void __fastcall FUN_00aac140(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7b910;
  FUN_00aabfb0(param_1);
  return;
}


//// FUNCTION FUN_00aac150 @ 00aac150 ////

void __thiscall FUN_00aac150(void *this,float param_1)

{
  *(float *)((int)this + 0x80) =
       (param_1 / (float)(*(int *)((int)this + 0x70) - *(int *)((int)this + 0x78))) * 0.001;
  return;
}


//// FUNCTION FUN_00aac180 @ 00aac180 ////

void __fastcall FUN_00aac180(void *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  float10 extraout_ST0;
  ulonglong uVar4;
  
  FUN_00aabfe0(param_1);
  bVar3 = FUN_00a5de10(*(void **)((int)param_1 + 0x28),*(int **)((int)param_1 + 0x2c));
  if (((!bVar3) && (0.0 < *(float *)((int)param_1 + 0x80))) &&
     (fVar2 = *(float *)((int)param_1 + 0xc) + *(float *)((int)param_1 + 0x88),
     *(float *)((int)param_1 + 0x88) = fVar2, *(float *)((int)param_1 + 0x80) <= fVar2)) {
    uVar4 = FUN_00acd42c();
    iVar1 = *(int *)((int)param_1 + 0x78);
    *(float *)((int)param_1 + 0x88) =
         (float)(extraout_ST0 - (float10)(int)uVar4 * (float10)*(float *)((int)param_1 + 0x80));
    iVar1 = ((*(int *)((int)param_1 + 0x74) - iVar1) + (int)uVar4) %
            (*(int *)((int)param_1 + 0x70) - iVar1) + iVar1;
    *(int *)((int)param_1 + 0x74) = iVar1;
    FUN_00a5e060(param_1,iVar1);
    return;
  }
  return;
}


//// FUNCTION FUN_00aac220 @ 00aac220 ////

void __thiscall FUN_00aac220(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x70) = param_1;
  return;
}


//// FUNCTION FUN_00aac240 @ 00aac240 ////

undefined4 * __thiscall
FUN_00aac240(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfd5b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00aabf70(this,param_1,param_2,param_3);
  *(undefined4 *)((int)this + 0x7c) = param_4;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d7b910;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x80) = 0x3dcccccd;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  FUN_00a5e060(this,0);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00aac2d0 @ 00aac2d0 ////

undefined4 * __thiscall FUN_00aac2d0(void *this,byte param_1)

{
  FUN_00aac140(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00aac2f0 @ 00aac2f0 ////

void __fastcall FUN_00aac2f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x74) / *(int *)(param_1 + 0x7c);
  iVar3 = *(int *)(param_1 + 0x74) % *(int *)(param_1 + 0x7c);
  iVar1 = *(int *)(param_1 + 0x2c);
  *(float *)(iVar1 + 0x2c) = 1.0 / (float)iVar3;
  *(float *)(iVar1 + 0x30) = 1.0 / (float)iVar2;
  iVar1 = *(int *)(param_1 + 0x2c);
  *(float *)(iVar1 + 0x34) = 1.0 / (float)(iVar3 + 1);
  *(float *)(iVar1 + 0x38) = 1.0 / (float)(iVar2 + 1);
  return;
}


//// FUNCTION FUN_00aac370 @ 00aac370 ////

void __thiscall FUN_00aac370(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x74) = param_1;
  FUN_00aac2f0((int)this);
  return;
}


//// FUNCTION FUN_00aac380 @ 00aac380 ////

void __fastcall FUN_00aac380(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 8) < 0) {
    cVar1 = FUN_00a3b330((int *)(param_1 + 0x14),3);
    if (cVar1 != '\0') {
      FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
      if (*(int **)(param_1 + 4) != (int *)0x0) {
        LH_ApplyMeshMaterial(*(int **)(param_1 + 4));
      }
      (**(code **)(*g_pDirect3DDevice + 0x148))
                (g_pDirect3DDevice,4,*(undefined4 *)(param_1 + 0x1c),0,
                 *(uint *)(param_1 + 8) >> 0x10 & 0x7fff,*(undefined4 *)(param_1 + 0x34),
                 *(uint *)(param_1 + 8) & 0xffff);
    }
  }
  return;
}


//// FUNCTION FUN_00aac4d0 @ 00aac4d0 ////

float * __thiscall FUN_00aac4d0(void *this,float param_1,float param_2,uint param_3)

{
  float10 fVar1;
  
  fVar1 = FUN_00990e30(-3.1415927,3.1415927);
  *(float *)this = (float)fVar1;
  *(float *)((int)this + 8) = param_2;
  *(float *)((int)this + 4) = param_1 * 94.2;
  *(byte *)((int)this + 0x10) = (byte)(param_3 >> 2) & 1;
  *(uint *)((int)this + 0xc) = param_3 & 3;
  return this;
}


//// FUNCTION FUN_00aac520 @ 00aac520 ////

int __thiscall FUN_00aac520(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 0x10) == iVar1) {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar1 == iVar2) {
    iVar3 = iVar2 * 0x60 + *(int *)this;
    *(int *)((int)this + 0xc) = iVar2 + 1;
  }
  else {
    iVar3 = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar3 + 0x5c);
  }
  *(int *)((int)this + 8) = iVar1 + 1;
  *(int *)(iVar3 + 0x58) = *param_1;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x5c) = iVar3;
  }
  *param_1 = iVar3;
  return iVar3;
}


//// FUNCTION FUN_00aac5b0 @ 00aac5b0 ////

void __fastcall FUN_00aac5b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}


//// FUNCTION FUN_00aac5c0 @ 00aac5c0 ////

int __fastcall FUN_00aac5c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}


//// FUNCTION FUN_00aac660 @ 00aac660 ////

void __fastcall FUN_00aac660(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_009de3b0((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00aac6a0 @ 00aac6a0 ////

void __fastcall FUN_00aac6a0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_0099b400((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00aac7f0 @ 00aac7f0 ////

void __cdecl FUN_00aac7f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
  }
  return;
}


//// FUNCTION FUN_00aac8f0 @ 00aac8f0 ////

void __cdecl FUN_00aac8f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-5] = param_2[-5];
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -5;
    param_3 = param_3 + -5;
  }
  return;
}


